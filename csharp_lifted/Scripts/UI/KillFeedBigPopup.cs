// ==================== AoTTG2 cross-reference ====================
// Type: UI.KillFeedBigPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/KillFeedBigPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KillFeedBigPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using PatreonEffects;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200084B")]
internal class KillFeedBigPopup : BasePopup
{
	[Token(Token = "0x40029D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _leftLabel;

	[Token(Token = "0x40029D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _rightLabel;

	[Token(Token = "0x40029D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x40029DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _backgroundLabel;

	[Token(Token = "0x40029DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private NameEffectApplier _leftStyle;

	[Token(Token = "0x40029DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private NameEffectApplier _rightStyle;

	[Token(Token = "0x40029DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private RawImage _image;

	[Token(Token = "0x40029DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public float TimeLeft;

	[Token(Token = "0x40029DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public string Killer;

	[Token(Token = "0x40029E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public string Victim;

	[Token(Token = "0x40029E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public int KillerActorNumber;

	[Token(Token = "0x40029E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xFC")]
	public int VictimActorNumber;

	[Token(Token = "0x40029E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public int Score;

	[Token(Token = "0x40029E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public string Weapon;

	[Token(Token = "0x17000DBC")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004F41")]
		[Address(RVA = "0x5C33C40", Offset = "0x5C32C40", VA = "0x5C33C40", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$get_EscapeBehavior): clean
			return 2;
		}
	}

	[Token(Token = "0x17000DBD")]
	protected override string Title
	{
		[Token(Token = "0x6004F42")]
		[Address(RVA = "0x5C33C50", Offset = "0x5C32C50", VA = "0x5C33C50", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000DBE")]
	protected override float Width
	{
		[Token(Token = "0x6004F43")]
		[Address(RVA = "0x5C33C70", Offset = "0x5C32C70", VA = "0x5C33C70", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$get_Width): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DBF")]
	protected override float Height
	{
		[Token(Token = "0x6004F44")]
		[Address(RVA = "0x5C33C80", Offset = "0x5C32C80", VA = "0x5C33C80", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$get_Height): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DC0")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004F45")]
		[Address(RVA = "0x5C33C90", Offset = "0x5C32C90", VA = "0x5C33C90", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$get_TopBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DC1")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004F46")]
		[Address(RVA = "0x5C33CA0", Offset = "0x5C32CA0", VA = "0x5C33CA0", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$get_BottomBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DC2")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004F47")]
		[Address(RVA = "0x5C33CB0", Offset = "0x5C32CB0", VA = "0x5C33CB0", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$get_PopupAnimationType): clean
			return 2;
		}
	}

	[Token(Token = "0x17000DC3")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004F48")]
		[Address(RVA = "0x5C33CC0", Offset = "0x5C32CC0", VA = "0x5C33CC0", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$get_AnimationTime): clean
			return 0.2;
		}
	}

	[Token(Token = "0x6004F49")]
	[Address(RVA = "0x5C33CD0", Offset = "0x5C32CD0", VA = "0x5C33CD0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$Setup): clean
		Transform pUVar1;
		GameObject pUVar2;
		Text pUVar3;
		GameObject pUVar4;
		NameEffectApplier pPVar5;
		RawImage pUVar6;

		this.Setup(parent);
		pUVar1 = this.transform;
		pUVar2 = ElementFactory.InstantiateAndBind(pUVar1, "Prefabs/InGame/KillFeedLabelBig");
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

	[Token(Token = "0x6004F4A")]
	[Address(RVA = "0x5C34040", Offset = "0x5C33040", VA = "0x5C34040")]
	public void Show(string killer, string victim, int score, string weapon)
	{
		// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$Show): clean


		this.Show(killer, victim, score, weapon, -1, -1);
		return;
	}

	[Token(Token = "0x6004F4B")]
	[Address(RVA = "0x5C34060", Offset = "0x5C33060", VA = "0x5C34060")]
	public void Show(string killer, string victim, int score, string weapon, int killerActorNumber, int victimActorNumber)
	{
		// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$Show): 4 lines keep C-only constructs
		RawImage __this_00;
		Text pUVar1;
		NameEffectApplier pPVar2;
		Texture value;
		Player pPVar3;
		String pSVar4;
		float fVar7;
		ulong uVar8;
		Color UVar9;
		int local_38;
		int local_34;

		local_38 = score;
		local_34 = killerActorNumber;
		this.Killer = killer;
		this.Victim = victim;
		this.KillerActorNumber = local_34;
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
			pPVar3 = Util.FindPlayerById(local_34);
			if (pPVar2 != null) {
				pPVar2.ApplyForPlayer(pPVar3);
				pPVar2 = this._rightStyle;
				pPVar3 = Util.FindPlayerById(victimActorNumber);
				if (pPVar2 != null) {
					pPVar2.ApplyForPlayer(pPVar3);
					pUVar1 = this._scoreLabel;
					pSVar4 = local_38.ToString();
					if (pUVar1 != null) {
						pUVar1.set_text(pSVar4);
						pUVar1 = this._backgroundLabel;
						pSVar4 = local_38.ToString();
						if (pUVar1 != null) {
							pUVar1.set_text(pSVar4);
							pUVar1 = this._backgroundLabel;
							if (local_38 < 1000) {
								if (pUVar1 == null) goto label_05d342c5;
								uVar8 = 0x3f8000003f800000;
								UVar9._8_8_ = uVar8;
							}
							else {
								if (pUVar1 == null) goto label_05d342c5;
								uVar8 = 0x3f800000;
								UVar9._8_8_ = 0x3f80000000000000;
							}
							UVar9.b = (float)(int)UVar9._8_8_;
							UVar9.a = (float)(int)((ulong)UVar9._8_8_ >> 0x20);
							UVar9.r = (float)(int)uVar8;
							UVar9.g = (float)(int)((ulong)uVar8 >> 0x20);
							pUVar1.set_color(UVar9);
							this.IsActive = false;
							fVar7 = this.get_AnimationTime();
							this.TimeLeft = fVar7 + 8.0;
							this.Show();
							return;
						}
					}
				}
			}
		}
	label_05d342c5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F4C")]
	[Address(RVA = "0x5C342D0", Offset = "0x5C332D0", VA = "0x5C342D0")]
	public static Texture2D LoadWeaponIcon(string weapon)
	{
		// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$LoadWeaponIcon): 1 lines keep C-only constructs
		String path;
		String name;
		Texture2D pUVar1;

		path = ResourcePaths.UI;
		name = KillFeedBigPopup.GetWeaponIcon(weapon);
		pUVar1 = (Texture2D)ResourceManager.LoadAsset(path, name, false, true);
		if ((pUVar1 != null) && (pUVar1.klass != typeof(Texture2D))) {
			throw new InvalidCastException();
		}
		return pUVar1;
	}

	[Token(Token = "0x6004F4D")]
	[Address(RVA = "0x5C34390", Offset = "0x5C33390", VA = "0x5C34390")]
	private static string GetWeaponIcon(string weapon)
	{
		// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$GetWeaponIcon): clean
		bool bVar1;

		bVar1 = (weapon == "AHSS");
		if (bVar1) {
			return "Icons/Game/AHSSIcon";
		}
		bVar1 = (weapon == "APG");
		if (bVar1) {
			return "Icons/Game/APGIcon";
		}
		bVar1 = (weapon == "Thunderspear");
		if (bVar1) {
			return "Icons/Game/ThunderspearIcon";
		}
		if (weapon == null) {
			throw new NullReferenceException();
		}
		bVar1 = weapon.StartsWith("Titan");
		if (bVar1) {
			return "Icons/Game/TitanIcon";
		}
		bVar1 = weapon.StartsWith("Shifter");
		if (bVar1) {
			return "Icons/Game/ShifterIcon";
		}
		return "Icons/Game/KillFeedIcon";
	}

	[Token(Token = "0x6004F4E")]
	[Address(RVA = "0x5C34500", Offset = "0x5C33500", VA = "0x5C34500")]
	public KillFeedBigPopup()
	{
		// Lifted from source/cpp/UI/KillFeedBigPopup.c (UI.KillFeedBigPopup$$.ctor): clean
		base();
		return;
	}
}
