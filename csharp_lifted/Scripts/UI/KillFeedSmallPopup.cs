// ==================== AoTTG2 cross-reference ====================
// Type: UI.KillFeedSmallPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/KillFeedSmallPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KillFeedSmallPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using PatreonEffects;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200084C")]
internal class KillFeedSmallPopup : BasePopup
{
	[Token(Token = "0x40029E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _leftLabel;

	[Token(Token = "0x40029E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _rightLabel;

	[Token(Token = "0x40029E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x40029E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _backgroundLabel;

	[Token(Token = "0x40029E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private NameEffectApplier _leftStyle;

	[Token(Token = "0x40029EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private NameEffectApplier _rightStyle;

	[Token(Token = "0x40029EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	public float TimeLeft;

	[Token(Token = "0x40029EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public string Killer;

	[Token(Token = "0x40029ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public string Victim;

	[Token(Token = "0x40029EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public int KillerActorNumber;

	[Token(Token = "0x40029EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
	public int VictimActorNumber;

	[Token(Token = "0x40029F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public int Score;

	[Token(Token = "0x40029F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public string Weapon;

	[Token(Token = "0x40029F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private RawImage _image;

	[Token(Token = "0x17000DC4")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004F4F")]
		[Address(RVA = "0x5C34510", Offset = "0x5C33510", VA = "0x5C34510", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedSmallPopup.c (UI.KillFeedSmallPopup$$get_EscapeBehavior): clean
			return 2;
		}
	}

	[Token(Token = "0x17000DC5")]
	protected override string Title
	{
		[Token(Token = "0x6004F50")]
		[Address(RVA = "0x5C34520", Offset = "0x5C33520", VA = "0x5C34520", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedSmallPopup.c (UI.KillFeedSmallPopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000DC6")]
	protected override float Width
	{
		[Token(Token = "0x6004F51")]
		[Address(RVA = "0x5C34540", Offset = "0x5C33540", VA = "0x5C34540", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedSmallPopup.c (UI.KillFeedSmallPopup$$get_Width): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DC7")]
	protected override float Height
	{
		[Token(Token = "0x6004F52")]
		[Address(RVA = "0x5C34550", Offset = "0x5C33550", VA = "0x5C34550", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedSmallPopup.c (UI.KillFeedSmallPopup$$get_Height): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DC8")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004F53")]
		[Address(RVA = "0x5C34560", Offset = "0x5C33560", VA = "0x5C34560", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedSmallPopup.c (UI.KillFeedSmallPopup$$get_TopBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DC9")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004F54")]
		[Address(RVA = "0x5C34570", Offset = "0x5C33570", VA = "0x5C34570", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedSmallPopup.c (UI.KillFeedSmallPopup$$get_BottomBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DCA")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004F55")]
		[Address(RVA = "0x5C34580", Offset = "0x5C33580", VA = "0x5C34580", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedSmallPopup.c (UI.KillFeedSmallPopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x17000DCB")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004F56")]
		[Address(RVA = "0x5C34590", Offset = "0x5C33590", VA = "0x5C34590", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedSmallPopup.c (UI.KillFeedSmallPopup$$get_AnimationTime): clean
			return 0.2;
		}
	}

	[Token(Token = "0x6004F57")]
	[Address(RVA = "0x5C345A0", Offset = "0x5C335A0", VA = "0x5C345A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/KillFeedSmallPopup.c (UI.KillFeedSmallPopup$$Setup): clean
		Transform pUVar1;
		GameObject pUVar2;
		Text pUVar3;
		GameObject pUVar4;
		NameEffectApplier pPVar5;
		RawImage pUVar6;

		this.Setup(parent);
		pUVar1 = this.transform;
		pUVar2 = ElementFactory.InstantiateAndBind(pUVar1, "Prefabs/InGame/KillFeedLabelSmall");
		if (pUVar2 != null) {
			pUVar1 = pUVar2.transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("LeftLabel");
				if (pUVar1 != null) {
					pUVar3 = pUVar1.GetComponent<Text>();
					this._leftLabel = pUVar3;
					pUVar1 = pUVar2.transform;
					if (pUVar1 != null) {
						pUVar1 = pUVar1.Find("RightLabel");
						if (pUVar1 != null) {
							pUVar3 = pUVar1.GetComponent<Text>();
							this._rightLabel = pUVar3;
							pUVar3 = this._leftLabel;
							if (pUVar3 != null) {
								pUVar4 = pUVar3.gameObject;
								if (pUVar4 != null) {
									pPVar5 = pUVar4.AddComponent<NameEffectApplier>();
									this._leftStyle = pPVar5;
									pUVar3 = this._rightLabel;
									if (pUVar3 != null) {
										pUVar4 = pUVar3.gameObject;
										if (pUVar4 != null) {
											pPVar5 = pUVar4.AddComponent<NameEffectApplier>();
											this._rightStyle = pPVar5;
											pUVar1 = pUVar2.transform;
											if (pUVar1 != null) {
												pUVar1 = pUVar1.Find("ScoreLabel");
												if (pUVar1 != null) {
													pUVar3 = pUVar1.GetComponent<Text>();
													this._scoreLabel = pUVar3;
													pUVar1 = pUVar2.transform;
													if (pUVar1 != null) {
														pUVar1 = pUVar1.Find("ScoreLabel/BackgroundLabel") ;
														if (pUVar1 != null) {
															pUVar3 = pUVar1.GetComponent<Text>();
															this._backgroundLabel = pUVar3;
															pUVar3 = this._scoreLabel;
															LanguageFonts.KeepDesignedFont(pUVar3);
															LanguageFonts.KeepDesignedFont(this._backgroundLabel);
															pUVar6 = pUVar2.GetComponent<RawImage>();
															this._image = pUVar6;
															pUVar1 = pUVar2.transform;
															if (pUVar1 != null) {
																pUVar1 = pUVar1.parent;
																if (pUVar1 != null) {
																	pUVar1 = pUVar1.Find("Border");
																	if (pUVar1 != null) {
																		pUVar2 = pUVar1.gameObject;
																		if (pUVar2 != null) {
																			pUVar2.SetActive(false);
																			return;
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
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

	[Token(Token = "0x6004F58")]
	[Address(RVA = "0x5C34910", Offset = "0x5C33910", VA = "0x5C34910")]
	public void ShowImmediate(string killer, string victim, int score, string weapon, float timeLeft)
	{
		// Lifted from source/cpp/UI/KillFeedSmallPopup.c (UI.KillFeedSmallPopup$$ShowImmediate): clean


		this.ShowImmediate(killer, victim, score, weapon, timeLeft, -1, -1);
		return;
	}

	[Token(Token = "0x6004F59")]
	[Address(RVA = "0x5C34930", Offset = "0x5C33930", VA = "0x5C34930")]
	public void ShowImmediate(string killer, string victim, int score, string weapon, float timeLeft, int killerActorNumber, int victimActorNumber)
	{
		// Lifted from source/cpp/UI/KillFeedSmallPopup.c (UI.KillFeedSmallPopup$$ShowImmediate): 4 lines keep C-only constructs
		RawImage __this_00;
		Text pUVar1;
		NameEffectApplier pPVar2;
		Texture value;
		Player pPVar3;
		String pSVar4;
		ulong uVar7;
		Color UVar8;
		int local_3c;
		int local_38;
		float local_34;

		local_3c = score;
		local_38 = killerActorNumber;
		local_34 = timeLeft;
		this.Killer = killer;
		this.Victim = victim;
		this.KillerActorNumber = local_38;
		this.VictimActorNumber = victimActorNumber;
		this.Score = score;
		this.Weapon = weapon;
		__this_00 = this._image;
		value = (Texture)KillFeedBigPopup.LoadWeaponIcon(weapon);
		if (__this_00 != null) {
			__this_00.texture = value;
			pUVar1 = this._leftLabel;
			LanguageFonts.SetText(pUVar1, killer);
			LanguageFonts.SetText(this._rightLabel, victim);
			pPVar2 = this._leftStyle;
			pPVar3 = Util.FindPlayerById(local_38);
			if (pPVar2 != null) {
				pPVar2.ApplyForPlayer(pPVar3);
				pPVar2 = this._rightStyle;
				pPVar3 = Util.FindPlayerById(victimActorNumber);
				if (pPVar2 != null) {
					pPVar2.ApplyForPlayer(pPVar3);
					pUVar1 = this._scoreLabel;
					pSVar4 = local_3c.ToString();
					if (pUVar1 != null) {
						pUVar1.set_text(pSVar4);
						pUVar1 = this._backgroundLabel;
						pSVar4 = local_3c.ToString();
						if (pUVar1 != null) {
							pUVar1.set_text(pSVar4);
							pUVar1 = this._backgroundLabel;
							if (local_3c < 1000) {
								if (pUVar1 == null) goto label_05d34b8f;
								uVar7 = 0x3f8000003f800000;
								UVar8._8_8_ = uVar7;
							}
							else {
								if (pUVar1 == null) goto label_05d34b8f;
								uVar7 = 0x3f800000;
								UVar8._8_8_ = 0x3f80000000000000;
							}
							UVar8.b = (float)(int)UVar8._8_8_;
							UVar8.a = (float)(int)((ulong)UVar8._8_8_ >> 0x20);
							UVar8.r = (float)(int)uVar7;
							UVar8.g = (float)(int)((ulong)uVar7 >> 0x20);
							pUVar1.set_color(UVar8);
							this.IsActive = false;
							this.TimeLeft = local_34;
							this.ShowImmediate();
							return;
						}
					}
				}
			}
		}
	label_05d34b8f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F5A")]
	[Address(RVA = "0x5C34BA0", Offset = "0x5C33BA0", VA = "0x5C34BA0")]
	public KillFeedSmallPopup()
	{
		// Lifted from source/cpp/UI/KillFeedSmallPopup.c (UI.KillFeedSmallPopup$$.ctor): clean
		base();
		return;
	}
}
