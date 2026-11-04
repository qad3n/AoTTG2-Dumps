using CustomLogic;
using GameManagers;
using PatreonEffects;
using Photon.Pun;
using Settings;
using UnityEngine;
using Utility;

namespace Characters
{
    internal partial class BaseCharacter : MonoBehaviourPunCallbacks, ITargetable
    {
        private const int UnknownViewId = -1;
        private const int NoActorNumber = -1;
        private const float MaxGroundedLift = 10f;
        private const int FeedTimeDecimals = 2;

        [PunRPC]
        public void InitRPC(bool ai, string name, string guild, PhotonMessageInfo info)
        {
            if (info.Sender != null && info.Sender != photonView.Owner)
                return;
            AI = ai;
            Name = RoleSpriteHelpers.SanitizePlayerText(info.Sender, name).StripIllegalRichText();
            Guild = RoleSpriteHelpers.SanitizePlayerText(info.Sender, guild).StripIllegalRichText();
        }

        [PunRPC]
        public void SetHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
        {
            if (info.Sender == photonView.Owner)
            {
                CurrentHealth = currentHealth;
                MaxHealth = maxHealth;
            }
        }

        [PunRPC]
        public void SetTeamRPC(string team, PhotonMessageInfo info)
        {
            if (info.Sender == photonView.Owner)
            {
                string previousTeam = Team;
                Team = team;
                if (Detection != null && team != previousTeam)
                    Detection.OnTeamChanged();
            }
        }

        [PunRPC]
        public void PlayAnimationRPC(string animation, float startTime, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            Animation.Play(animation, startTime);
        }

        [PunRPC]
        public void PlayAnimationResetRPC(string animation, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            Animation.Play(animation, 0f, true);
        }

        [PunRPC]
        public void SetAnimationSpeedRPC(string animation, float speed, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            Animation.SetSpeed(animation, speed);
        }

        [PunRPC]
        public void CrossFadeRPC(string animation, float fadeTime, float startTime, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            Animation.CrossFade(animation, fadeTime, startTime);
        }

        [PunRPC]
        public void CrossFadeWithSpeedRPC(string animation, float speed, float fadeTime, float startTime, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            Animation.SetSpeed(animation, speed);
            Animation.CrossFade(animation, fadeTime, startTime);
        }

        [PunRPC]
        public virtual void PlaySoundRPC(string sound, PhotonMessageInfo info)
        {
            if (info.Sender != null && info.Sender != Cache.PhotonView.Owner)
                return;
            if (!SoundsEnabled)
                return;
            if (Cache.AudioSources.ContainsKey(sound))
                Cache.AudioSources[sound].Play();
        }

        [PunRPC]
        public virtual void FadeSoundRPC(string sound, float volume, float time, PhotonMessageInfo info)
        {
            if (info.Sender != null && info.Sender != Cache.PhotonView.Owner)
                return;
            if (!SoundsEnabled)
                return;
            if (!Cache.AudioSources.ContainsKey(sound))
                return;
            AudioSource source = Cache.AudioSources[sound];
            if (time > 0f)
            {
                StartCoroutine(FadeSoundOverTime(source, volume - source.volume, time));
                return;
            }
            source.volume = volume;
        }

        [PunRPC]
        public void StopSoundRPC(string sound, PhotonMessageInfo info)
        {
            if (info.Sender != null && info.Sender != Cache.PhotonView.Owner)
                return;
            if (Cache.AudioSources.ContainsKey(sound))
                Cache.AudioSources[sound].Stop();
        }

        [PunRPC]
        public virtual void GetHitRPC(int viewId, string name, int damage, string type, string collider)
        {
            if (Dead || damage == 0)
                return;
            BaseCharacter killer = Util.FindCharacterByViewId(viewId);
            if (name == "" && killer != null)
                name = killer.RichTextName;
            TakeDamage(damage);
            Cache.PhotonView.RPC("NotifyDamagedRPC", RpcTarget.All, new object[] { viewId, name, damage });
            if (CurrentHealth > 0f)
                return;
            if (CustomLogicManager.Evaluator != null && CustomLogicManager.Evaluator.DefaultShowKillFeed)
            {
                RPCManager.PhotonView.RPC("ShowKillFeedWithPlayersRPC", RpcTarget.All,
                    new object[] { name, RichTextName, damage, type, KillFeedActorNumber(killer), KillFeedActorNumber(this) });
            }
            Cache.PhotonView.RPC("NotifyDieRPC", RpcTarget.All, new object[] { viewId, name });
        }

        [PunRPC]
        public virtual void GetDamagedRPC(string name, int damage)
        {
            if (!Cache.PhotonView.IsMine || Dead)
                return;
            TakeDamage(damage);
            Cache.PhotonView.RPC("NotifyDamagedRPC", RpcTarget.All, new object[] { UnknownViewId, name, damage });
            if (CurrentHealth > 0f)
                return;
            if (CustomLogicManager.Evaluator != null && CustomLogicManager.Evaluator.DefaultShowKillFeed)
            {
                RPCManager.PhotonView.RPC("ShowKillFeedWithPlayersRPC", RpcTarget.All,
                    new object[] { name, RichTextName, damage, "", NoActorNumber, KillFeedActorNumber(this) });
            }
            Cache.PhotonView.RPC("NotifyDieRPC", RpcTarget.All, new object[] { UnknownViewId, name });
        }

        [PunRPC]
        public virtual void GetKilledRPC(string name)
        {
            if (!Cache.PhotonView.IsMine || Dead)
                return;
            SetCurrentHealth(0);
            if (CustomLogicManager.Evaluator != null && CustomLogicManager.Evaluator.DefaultShowKillFeed)
            {
                RPCManager.PhotonView.RPC("ShowKillFeedWithPlayersRPC", RpcTarget.All,
                    new object[] { name, RichTextName, 0, "", NoActorNumber, KillFeedActorNumber(this) });
            }
            Cache.PhotonView.RPC("NotifyDieRPC", RpcTarget.All, new object[] { UnknownViewId, name });
        }

        [PunRPC]
        public virtual void MarkDeadRPC(PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            Dead = true;
        }

        [PunRPC]
        public void NotifyDieRPC(int viewId, string name, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            BaseCharacter killer = Util.FindCharacterByViewId(viewId);
            if (killer != null)
                name = killer.RichTextName;
            OnNotifyDie(killer);
            if (killer != null && killer.IsMainCharacter() && CustomLogicManager.Evaluator != null && CustomLogicManager.Evaluator.DefaultAddKillScore)
                _inGameManager.RegisterMainCharacterKill(this);
            if (CustomLogicManager.Evaluator == null)
                return;
            CustomLogicManager.Evaluator.OnCharacterDie(this, killer, name);
            if (_inGameManager.CurrentCharacter == this)
                InGameManager.OnLocalPlayerDied(Cache.PhotonView.Owner);
        }

        [PunRPC]
        public void NotifyDamagedRPC(int viewId, string name, int damage, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            BaseCharacter killer = Util.FindCharacterByViewId(viewId);
            if (killer != null)
                name = killer.RichTextName;
            if (killer != null && killer.IsMainCharacter() && CustomLogicManager.Evaluator != null && CustomLogicManager.Evaluator.DefaultAddKillScore)
                _inGameManager.RegisterMainCharacterDamage(this, damage);
            if (CustomLogicManager.Evaluator == null)
                return;
            CustomLogicManager.Evaluator.OnCharacterDamaged(this, killer, name, damage);
            if (!SettingsManager.UISettings.GameFeed.Value)
                return;
            string keyword = " killed ";
            if (CurrentHealth > 0)
                keyword = " damaged ";
            string time = ChatManager.GetColorString("(" + Util.FormatFloat(CustomLogicManager.Evaluator.CurrentTime, FeedTimeDecimals) + ") ", ChatTextColor.System);
            ChatManager.AddFeed(time + name + keyword + RichTextName + " (" + damage.ToString() + ")");
        }

        [PunRPC]
        public virtual void BlowAwayRPC(Vector3 source, float force, float maxDistance)
        {
            if (Dead || !IsMine())
                return;
            if (Vector3.Distance(Cache.Transform.position, source) > maxDistance)
                return;
            Vector3 direction = (Cache.Transform.position - source).normalized;
            if (Grounded && direction.y >= 0f)
                Cache.Rigidbody.AddForce(Vector3.up * Mathf.Min(force, MaxGroundedLift), ForceMode.VelocityChange);
            Cache.Rigidbody.AddForce(direction * force, ForceMode.VelocityChange);
        }
    }
}
