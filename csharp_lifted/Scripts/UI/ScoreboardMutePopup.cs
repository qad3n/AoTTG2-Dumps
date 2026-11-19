// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardMutePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardMutePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardMutePopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000868")]
internal class ScoreboardMutePopup : AottgScoreboardPopup
{
	[Token(Token = "0x4002A93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Toggle _muteEmote;

	[Token(Token = "0x4002A94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Toggle _muteText;

	[Token(Token = "0x4002A95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Toggle _muteVoice;

	[Token(Token = "0x4002A96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private AottgSliderControl _voiceVolume;

	[Token(Token = "0x4002A97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Player _player;

	[Token(Token = "0x17000DE4")]
	protected override string DialogId
	{
		[Token(Token = "0x6005031")]
		[Address(RVA = "0x5C48AF0", Offset = "0x5C47AF0", VA = "0x5C48AF0", Slot = "62")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardMutePopup.c (UI.ScoreboardMutePopup$$get_DialogId): clean
			return "ingame-scoreboard-mute";
		}
	}

	[Token(Token = "0x6005032")]
	[Address(RVA = "0x5C48B20", Offset = "0x5C47B20", VA = "0x5C48B20", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ScoreboardMutePopup.c (UI.ScoreboardMutePopup$$Setup): clean
		GisketchView pGVar1;
		GameObject pUVar2;
		Toggle pUVar3;
		AottgSliderControl pGVar4;

		this.Setup(parent);
		pGVar1 = this._Dialog_k__BackingField;
		if (pGVar1 != null) {
			pUVar2 = pGVar1.Find("ingame-scoreboard-mute-emote");
			if (pUVar2 != null) {
				pUVar3 = pUVar2.GetComponent<Toggle>();
				this._muteEmote = pUVar3;
				pGVar1 = this._Dialog_k__BackingField;
				if (pGVar1 != null) {
					pUVar2 = pGVar1.Find("ingame-scoreboard-mute-text") ;
					if (pUVar2 != null) {
						pUVar3 = pUVar2.GetComponent<Toggle>();
						this._muteText = pUVar3;
						pGVar1 = this._Dialog_k__BackingField;
						if (pGVar1 != null) {
							pUVar2 = pGVar1.Find("ingame-scoreboard-mute-voice");
							if (pUVar2 != null) {
								pUVar3 = pUVar2.GetComponent<Toggle>();
								this._muteVoice = pUVar3;
								pGVar1 = this._Dialog_k__BackingField;
								if (pGVar1 != null) {
									pUVar2 = pGVar1.Find("ingame-scoreboard-mute-volume");
									if (pUVar2 != null) {
										pGVar4 = pUVar2.GetComponent<AottgSliderControl>();
										this._voiceVolume = pGVar4;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005033")]
	[Address(RVA = "0x5C48CD0", Offset = "0x5C47CD0", VA = "0x5C48CD0")]
	public void Show(Player player)
	{
		// Lifted from source/cpp/UI/ScoreboardMutePopup.c (UI.ScoreboardMutePopup$$Show): 4 lines keep C-only constructs
		Toggle pUVar1;
		HashSet<int> pSVar2;
		Dictionary<int, float> __this_00;
		AottgSliderControl __this_01;
		bool bVar3;
		uint in_EAX;
		float value;
		ulong uStack_38;

		uStack_38._0_4_ = in_EAX;
		uStack_38 = (ulong)(uint)uStack_38;
		if (player == null) {
			return;
		}
		this._player = player;
		pUVar1 = this._muteEmote;
		pSVar2 = InGameManager.MuteEmote;
		if ((pSVar2 != null) &&(bVar3 = pSVar2.Contains(player.actorNumber), pUVar1 != null)) {
			pUVar1.isOn = bVar3;
			pSVar2 = InGameManager.MuteText;
			if (pSVar2 != null) {
				pUVar1 = this._muteText;
				bVar3 = pSVar2.Contains(player.actorNumber);
				if (pUVar1 != null) {
					pUVar1.isOn = bVar3;
					pSVar2 = InGameManager.MuteVoiceChat;
					if (pSVar2 != null) {
						pUVar1 = this._muteVoice;
						bVar3 = pSVar2.Contains(player.actorNumber) ;
						if (pUVar1 != null) {
							pUVar1.isOn = bVar3;
							__this_00 = InGameManager.VoiceChatVolumeMultiplier;
							if (__this_00 != null) {
								__this_01 = this._voiceVolume;
								bVar3 = __this_00.TryGetValue(player.actorNumber, (float)((long)&uStack_38 + 4));
								if (__this_01 != null) {
									if (bVar3) {
										value = uStack_38._4_4_;
									}
									else {
										value = 1.0;
									}
									__this_01.SetValueWithoutNotify(value);
									this.Show();
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005034")]
	[Address(RVA = "0x5C48EA0", Offset = "0x5C47EA0", VA = "0x5C48EA0")]
	private void HandleMute(string type, bool mute, bool isMuted)
	{
		// Lifted from source/cpp/UI/ScoreboardMutePopup.c (UI.ScoreboardMutePopup$$HandleMute): clean
		Player pPVar1;

		if ((mute) && (!isMuted)) {
			pPVar1 = this._player;
			ChatManager.MutePlayer(pPVar1, type);
			return;
		}
		if (!mute && isMuted) {
			pPVar1 = this._player;
			ChatManager.UnmutePlayer(pPVar1, type);
			return;
		}
		return;
	}

	[Token(Token = "0x6005035")]
	[Address(RVA = "0x5C48F60", Offset = "0x5C47F60", VA = "0x5C48F60")]
	internal void Confirm()
	{
		// Lifted from source/cpp/UI/ScoreboardMutePopup.c (UI.ScoreboardMutePopup$$Confirm): clean
		float volume;
		bool bVar1;
		Toggle pUVar2;
		HashSet<int> pSVar3;
		AottgSliderControl pGVar4;
		String pSVar5;
		bool bVar6;
		Player pPVar7;

		if ((this.IsActive == false) ||(pPVar7 = this._player, pPVar7 == null)) {
			return;
		}
		pUVar2 = this._muteEmote;
		if (pUVar2 != null) {
			bVar1 = pUVar2.m_IsOn;
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
				pPVar7 = this._player;
				if (pPVar7 == null) goto label_05d4932c;
			}
			pSVar3 = InGameManager.MuteEmote;
			if (pSVar3 != null) {
				bVar6 = pSVar3.Contains(pPVar7.actorNumber);
				pSVar5 = "Emote";
				if (bVar1 == false || bVar6) {
					if (bVar6 && bVar1 == false) {
						pPVar7 = this._player;
						ChatManager.UnmutePlayer(pPVar7, pSVar5);
					}
				}
				else {
					pPVar7 = this._player;
					ChatManager.MutePlayer(pPVar7, pSVar5);
				}
				pUVar2 = this._muteText;
				if (((pUVar2 != null) &&(pPVar7 = this._player, pPVar7 != null)) &&(pSVar3 = InGameManager.MuteText, pSVar3 != null)) {
					bVar1 = pUVar2.m_IsOn;
					bVar6 = pSVar3.Contains(pPVar7.actorNumber);
					pSVar5 = "Text";
					if (bVar1 == false || bVar6) {
						if (bVar6 && bVar1 == false) {
							pPVar7 = this._player;
							ChatManager.UnmutePlayer(pPVar7, pSVar5);
						}
					}
					else {
						pPVar7 = this._player;
						ChatManager.MutePlayer(pPVar7, pSVar5);
					}
					pUVar2 = this._muteVoice;
					if (((pUVar2 != null) &&(pPVar7 = this._player, pPVar7 != null)) &&(pSVar3 = InGameManager.MuteVoiceChat, pSVar3 != null)) {
						bVar1 = pUVar2.m_IsOn;
						bVar6 = pSVar3.Contains(pPVar7.actorNumber) ;
						pSVar5 = "Voice";
						if (bVar1 == false || bVar6) {
							if (bVar6 && bVar1 == false) {
								pPVar7 = this._player;
								ChatManager.UnmutePlayer(pPVar7, pSVar5);
							}
						}
						else {
							pPVar7 = this._player;
							ChatManager.MutePlayer(pPVar7, pSVar5);
						}
						pGVar4 = this._voiceVolume;
						if (pGVar4 != null) {
							pPVar7 = this._player;
							volume = pGVar4._Value_k__BackingField;
							ChatManager.SetPlayerVolume(pPVar7, volume);
							this.Hide();
							return;
						}
					}
				}
			}
		}
	label_05d4932c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005036")]
	[Address(RVA = "0x5C49340", Offset = "0x5C48340", VA = "0x5C49340")]
	public ScoreboardMutePopup()
	{
		// Lifted from source/cpp/UI/ScoreboardMutePopup.c (UI.ScoreboardMutePopup$$.ctor): clean
		base();
		return;
	}
}
