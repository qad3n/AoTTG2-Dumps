using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CustomSkins;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x2000502")]
internal class WallColossalShifter : BaseShifter
{
	[Token(Token = "0x2000503")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__66 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40017D3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40017D4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40017D5")]
		[FieldOffset(Offset = "0x20")]
		public WallColossalShifter _003C_003E4__this;

		[Token(Token = "0x170009C5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60034D8")]
			[Address(RVA = "0x3EFDFD0", Offset = "0x3EFDFD0", VA = "0x3EFDFD0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009C6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60034DA")]
			[Address(RVA = "0x3EFE020", Offset = "0x3EFE020", VA = "0x3EFE020", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60034D5")]
		[Address(RVA = "0x3EFB330", Offset = "0x3EFB330", VA = "0x3EFB330")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__66(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60034D6")]
		[Address(RVA = "0x3EFDD20", Offset = "0x3EFDD20", VA = "0x3EFDD20", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60034D7")]
		[Address(RVA = "0x3EFDD30", Offset = "0x3EFDD30", VA = "0x3EFDD30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60034D9")]
		[Address(RVA = "0x3EFDFE0", Offset = "0x3EFDFE0", VA = "0x3EFDFE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40017B5")]
	[FieldOffset(Offset = "0x290")]
	public WallColossalComponentCache ColossalCache;

	[Token(Token = "0x40017B6")]
	[FieldOffset(Offset = "0x298")]
	protected WallColossalAnimations ColossalAnimations;

	[Token(Token = "0x40017B7")]
	[FieldOffset(Offset = "0x2A0")]
	protected float _steamTimeLeft;

	[Token(Token = "0x40017B8")]
	[FieldOffset(Offset = "0x2A4")]
	protected float _steamBlowAwayTimeLeft;

	[Token(Token = "0x40017B9")]
	[FieldOffset(Offset = "0x2A8")]
	protected float _steamDamageTimeLeft;

	[Token(Token = "0x40017BA")]
	[FieldOffset(Offset = "0x2AC")]
	protected ColossalSteamState _steamState;

	[Token(Token = "0x40017BB")]
	[FieldOffset(Offset = "0x2B0")]
	public float WarningSteamTime;

	[Token(Token = "0x40017BC")]
	[FieldOffset(Offset = "0x2B4")]
	public float SteamDamageInterval;

	[Token(Token = "0x40017BD")]
	[FieldOffset(Offset = "0x2B8")]
	public int SteamDamagePerSecond;

	[Token(Token = "0x40017BE")]
	[FieldOffset(Offset = "0x2BC")]
	public int MaxLeftHandHealth;

	[Token(Token = "0x40017BF")]
	[FieldOffset(Offset = "0x2C0")]
	public int MaxRightHandHealth;

	[Token(Token = "0x40017C0")]
	[FieldOffset(Offset = "0x2C4")]
	public int CurrentLeftHandHealth;

	[Token(Token = "0x40017C1")]
	[FieldOffset(Offset = "0x2C8")]
	public int CurrentRightHandHealth;

	[Token(Token = "0x40017C2")]
	[FieldOffset(Offset = "0x2CC")]
	public bool CanDamageLeftHand;

	[Token(Token = "0x40017C3")]
	[FieldOffset(Offset = "0x2CD")]
	public bool CanDamageRightHand;

	[Token(Token = "0x40017C4")]
	[FieldOffset(Offset = "0x2D0")]
	protected ColossalHandState _leftHandState;

	[Token(Token = "0x40017C5")]
	[FieldOffset(Offset = "0x2D4")]
	protected ColossalHandState _rightHandState;

	[Token(Token = "0x40017C6")]
	[FieldOffset(Offset = "0x2D8")]
	protected ColossalStunState _stunState;

	[Token(Token = "0x40017C7")]
	[FieldOffset(Offset = "0x2DC")]
	public float LeftHandSeverTimeLeft;

	[Token(Token = "0x40017C8")]
	[FieldOffset(Offset = "0x2E0")]
	public float RightHandSeverTimeLeft;

	[Token(Token = "0x40017C9")]
	[FieldOffset(Offset = "0x2E4")]
	public float HandSeverWindow;

	[Token(Token = "0x40017CA")]
	[FieldOffset(Offset = "0x2E8")]
	public float StunDuration;

	[Token(Token = "0x40017CB")]
	[FieldOffset(Offset = "0x2EC")]
	public float StunTimeLeft;

	[Token(Token = "0x40017CC")]
	[FieldOffset(Offset = "0x2F0")]
	protected float _stunAnimationTimeLeft;

	[Token(Token = "0x40017CD")]
	[FieldOffset(Offset = "0x2F4")]
	public float RecoveryDuration;

	[Token(Token = "0x40017CE")]
	[FieldOffset(Offset = "0x2F8")]
	public float RecoveryTimeLeft;

	[Token(Token = "0x40017CF")]
	[FieldOffset(Offset = "0x2FC")]
	public float SteamBlowAwayForce;

	[Token(Token = "0x40017D0")]
	[FieldOffset(Offset = "0x300")]
	public float DefaultBlowAwayForce;

	[Token(Token = "0x40017D1")]
	[FieldOffset(Offset = "0x304")]
	public float BlowAwayMaxDistance;

	[Token(Token = "0x40017D2")]
	[FieldOffset(Offset = "0x308")]
	public float BlowAwaySteamTime;

	[Token(Token = "0x170009C0")]
	public ColossalSteamState SteamState
	{
		[Token(Token = "0x60034A2")]
		[Address(RVA = "0x3EF91B0", Offset = "0x3EF91B0", VA = "0x3EF91B0")]
		get
		{
			return default(ColossalSteamState);
		}
	}

	[Token(Token = "0x170009C1")]
	public ColossalHandState LeftHandState
	{
		[Token(Token = "0x60034A3")]
		[Address(RVA = "0x3EF91C0", Offset = "0x3EF91C0", VA = "0x3EF91C0")]
		get
		{
			return default(ColossalHandState);
		}
	}

	[Token(Token = "0x170009C2")]
	public ColossalHandState RightHandState
	{
		[Token(Token = "0x60034A4")]
		[Address(RVA = "0x3EF91D0", Offset = "0x3EF91D0", VA = "0x3EF91D0")]
		get
		{
			return default(ColossalHandState);
		}
	}

	[Token(Token = "0x170009C3")]
	public ColossalStunState StunState
	{
		[Token(Token = "0x60034A5")]
		[Address(RVA = "0x3EF91E0", Offset = "0x3EF91E0", VA = "0x3EF91E0")]
		get
		{
			return default(ColossalStunState);
		}
	}

	[Token(Token = "0x170009C4")]
	protected override float SizeMultiplier
	{
		[Token(Token = "0x60034A6")]
		[Address(RVA = "0x3EF91F0", Offset = "0x3EF91F0", VA = "0x3EF91F0", Slot = "117")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60034A7")]
	[Address(RVA = "0x3EF9200", Offset = "0x3EF9200", VA = "0x3EF9200", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x60034A8")]
	[Address(RVA = "0x3EF98B0", Offset = "0x3EF98B0", VA = "0x3EF98B0", Slot = "174")]
	public override bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x60034A9")]
	[Address(RVA = "0x3EF98C0", Offset = "0x3EF98C0", VA = "0x3EF98C0")]
	public void SteamAttack()
	{
	}

	[Token(Token = "0x60034AA")]
	[Address(RVA = "0x3EF9930", Offset = "0x3EF9930", VA = "0x3EF9930")]
	public void SetLeftHandHealth(int health)
	{
	}

	[Token(Token = "0x60034AB")]
	[Address(RVA = "0x3EF9990", Offset = "0x3EF9990", VA = "0x3EF9990")]
	public void SetRightHandHealth(int health)
	{
	}

	[Token(Token = "0x60034AC")]
	[Address(RVA = "0x3EF9960", Offset = "0x3EF9960", VA = "0x3EF9960")]
	public void SetCurrentLeftHandHealth(int health)
	{
	}

	[Token(Token = "0x60034AD")]
	[Address(RVA = "0x3EF99C0", Offset = "0x3EF99C0", VA = "0x3EF99C0")]
	public void SetCurrentRightHandHealth(int health)
	{
	}

	[Token(Token = "0x60034AE")]
	[Address(RVA = "0x3EF99F0", Offset = "0x3EF99F0", VA = "0x3EF99F0")]
	public void SetMaxLeftHandHealth(int maxHealth)
	{
	}

	[Token(Token = "0x60034AF")]
	[Address(RVA = "0x3EF9A30", Offset = "0x3EF9A30", VA = "0x3EF9A30")]
	public void SetMaxRightHandHealth(int maxHealth)
	{
	}

	[Token(Token = "0x60034B0")]
	[Address(RVA = "0x3EF9A70", Offset = "0x3EF9A70", VA = "0x3EF9A70", Slot = "179")]
	protected virtual void OnLeftHandHealthChange()
	{
	}

	[Token(Token = "0x60034B1")]
	[Address(RVA = "0x3EF9F70", Offset = "0x3EF9F70", VA = "0x3EF9F70", Slot = "180")]
	protected virtual void OnRightHandHealthChange()
	{
	}

	[Token(Token = "0x60034B2")]
	[Address(RVA = "0x3EF9F50", Offset = "0x3EF9F50", VA = "0x3EF9F50")]
	protected void CheckStunCondition()
	{
	}

	[Token(Token = "0x60034B3")]
	[Address(RVA = "0x3EFA450", Offset = "0x3EFA450", VA = "0x3EFA450")]
	protected void EnterStunState()
	{
	}

	[Token(Token = "0x60034B4")]
	[Address(RVA = "0x3EFA7E0", Offset = "0x3EFA7E0", VA = "0x3EFA7E0")]
	[PunRPC]
	public void SetLeftHandHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034B5")]
	[Address(RVA = "0x3EFA830", Offset = "0x3EFA830", VA = "0x3EFA830")]
	[PunRPC]
	public void SetRightHandHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034B6")]
	[Address(RVA = "0x3EFA880", Offset = "0x3EFA880", VA = "0x3EFA880")]
	[PunRPC]
	public void SetLeftHandStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034B7")]
	[Address(RVA = "0x3EFAA50", Offset = "0x3EFAA50", VA = "0x3EFAA50")]
	[PunRPC]
	public void SetRightHandStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034B8")]
	[Address(RVA = "0x3EFAC20", Offset = "0x3EFAC20", VA = "0x3EFAC20")]
	[PunRPC]
	public void SetSteamStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034B9")]
	[Address(RVA = "0x3EFAC60", Offset = "0x3EFAC60", VA = "0x3EFAC60")]
	[PunRPC]
	public void SetStunStateRPC(byte state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034BA")]
	[Address(RVA = "0x3EFACA0", Offset = "0x3EFACA0", VA = "0x3EFACA0")]
	[PunRPC]
	public void SetHandSeverTimesRPC(float leftTime, float rightTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034BB")]
	[Address(RVA = "0x3EFAD00", Offset = "0x3EFAD00", VA = "0x3EFAD00")]
	[PunRPC]
	public void SetStunRecoveryTimesRPC(float stunTime, float recoveryTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60034BC")]
	[Address(RVA = "0x3EFAD60", Offset = "0x3EFAD60", VA = "0x3EFAD60", Slot = "176")]
	public override void Init(bool ai, string team, JSONNode data, float liveTime)
	{
	}

	[Token(Token = "0x60034BD")]
	[Address(RVA = "0x3EFB140", Offset = "0x3EFB140", VA = "0x3EFB140", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x60034BE")]
	[Address(RVA = "0x3EFB1C0", Offset = "0x3EFB1C0", VA = "0x3EFB1C0", Slot = "151")]
	protected override void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x60034BF")]
	[Address(RVA = "0x3EFB230", Offset = "0x3EFB230", VA = "0x3EFB230", Slot = "178")]
	protected override BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x60034C0")]
	[Address(RVA = "0x3EFB280", Offset = "0x3EFB280", VA = "0x3EFB280", Slot = "177")]
	protected override string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x60034C1")]
	[Address(RVA = "0x3EFB2C0", Offset = "0x3EFB2C0", VA = "0x3EFB2C0", Slot = "74")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__66))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x60034C2")]
	[Address(RVA = "0x3EF8AA0", Offset = "0x3EF8AA0", VA = "0x3EF8AA0")]
	public void ApplySteamState(ColossalSteamState newState)
	{
	}

	[Token(Token = "0x60034C3")]
	[Address(RVA = "0x3EFA8C0", Offset = "0x3EFA8C0", VA = "0x3EFA8C0")]
	public void ApplyLeftHandState(ColossalHandState newState)
	{
	}

	[Token(Token = "0x60034C4")]
	[Address(RVA = "0x3EFAA90", Offset = "0x3EFAA90", VA = "0x3EFAA90")]
	public void ApplyRightHandState(ColossalHandState newState)
	{
	}

	[Token(Token = "0x60034C5")]
	[Address(RVA = "0x3EF9130", Offset = "0x3EF9130", VA = "0x3EF9130")]
	public void ApplyStunState(ColossalStunState newState)
	{
	}

	[Token(Token = "0x60034C6")]
	[Address(RVA = "0x3EFB640", Offset = "0x3EFB640", VA = "0x3EFB640")]
	public new void LateUpdate()
	{
	}

	[Token(Token = "0x60034C7")]
	[Address(RVA = "0x3EFB940", Offset = "0x3EFB940", VA = "0x3EFB940")]
	public new void Update()
	{
	}

	[Token(Token = "0x60034C8")]
	[Address(RVA = "0x3EFB350", Offset = "0x3EFB350", VA = "0x3EFB350")]
	protected void ToggleParticleSystem(ParticleSystem system, bool enabled)
	{
	}

	[Token(Token = "0x60034C9")]
	[Address(RVA = "0x3EFA6D0", Offset = "0x3EFA6D0", VA = "0x3EFA6D0")]
	public void StopSteam()
	{
	}

	[Token(Token = "0x60034CA")]
	[Address(RVA = "0x3EFC780", Offset = "0x3EFC780", VA = "0x3EFC780")]
	protected void StartSteam()
	{
	}

	[Token(Token = "0x60034CB")]
	[Address(RVA = "0x3EFBA60", Offset = "0x3EFBA60", VA = "0x3EFBA60")]
	protected void UpdateSteam()
	{
	}

	[Token(Token = "0x60034CC")]
	[Address(RVA = "0x3EFBCC0", Offset = "0x3EFBCC0", VA = "0x3EFBCC0")]
	protected void UpdateHandSeverWindows()
	{
	}

	[Token(Token = "0x60034CD")]
	[Address(RVA = "0x3EFBFA0", Offset = "0x3EFBFA0", VA = "0x3EFBFA0")]
	protected void UpdateStunRecovery()
	{
	}

	[Token(Token = "0x60034CE")]
	[Address(RVA = "0x3EFC700", Offset = "0x3EFC700", VA = "0x3EFC700")]
	protected void UpdateStunAnimation()
	{
	}

	[Token(Token = "0x60034CF")]
	[Address(RVA = "0x3EFCD90", Offset = "0x3EFCD90", VA = "0x3EFCD90", Slot = "163")]
	protected override void DeactivateAllHitboxes()
	{
	}

	[Token(Token = "0x60034D0")]
	[Address(RVA = "0x3EFCFA0", Offset = "0x3EFCFA0", VA = "0x3EFCFA0", Slot = "161")]
	protected override void UpdateAttack()
	{
	}

	[Token(Token = "0x60034D1")]
	[Address(RVA = "0x3EFC8B0", Offset = "0x3EFC8B0", VA = "0x3EFC8B0")]
	protected void BlowAwayHumans(Transform source, float angle, float force)
	{
	}

	[Token(Token = "0x60034D2")]
	[Address(RVA = "0x3EFD750", Offset = "0x3EFD750", VA = "0x3EFD750")]
	protected void BlowAwayHumans(Vector3 source, float force)
	{
	}

	[Token(Token = "0x60034D3")]
	[Address(RVA = "0x3EFDA70", Offset = "0x3EFDA70", VA = "0x3EFDA70", Slot = "80")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x60034D4")]
	[Address(RVA = "0x3EFDCA0", Offset = "0x3EFDCA0", VA = "0x3EFDCA0")]
	public WallColossalShifter()
	{
	}
}
