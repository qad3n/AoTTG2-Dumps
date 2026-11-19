// ==================== AoTTG2 cross-reference ====================
// Type: UI.StylebarPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/StylebarPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/StylebarPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000872")]
internal class StylebarPopup : BasePopup
{
	[Token(Token = "0x4002ACD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _letterLabel;

	[Token(Token = "0x4002ACE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _sentenceLabel;

	[Token(Token = "0x4002ACF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x4002AD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _bottomLabel;

	[Token(Token = "0x4002AD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Image _bladeFill;

	[Token(Token = "0x4002AD2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Image _bladeBackground;

	[Token(Token = "0x4002AD3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Sprite[] _fillSprites;

	[Token(Token = "0x4002AD4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Sprite[] _backgroundSprites;

	[Token(Token = "0x4002AD5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private int _rank;

	[Token(Token = "0x17000E04")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6005093")]
		[Address(RVA = "0x5C51B70", Offset = "0x5C50B70", VA = "0x5C51B70", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$get_EscapeBehavior): clean
			return 2;
		}
	}

	[Token(Token = "0x17000E05")]
	protected override string Title
	{
		[Token(Token = "0x6005094")]
		[Address(RVA = "0x5C51B80", Offset = "0x5C50B80", VA = "0x5C51B80", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000E06")]
	protected override float Width
	{
		[Token(Token = "0x6005095")]
		[Address(RVA = "0x5C51BA0", Offset = "0x5C50BA0", VA = "0x5C51BA0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$get_Width): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000E07")]
	protected override float Height
	{
		[Token(Token = "0x6005096")]
		[Address(RVA = "0x5C51BB0", Offset = "0x5C50BB0", VA = "0x5C51BB0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$get_Height): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000E08")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6005097")]
		[Address(RVA = "0x5C51BC0", Offset = "0x5C50BC0", VA = "0x5C51BC0", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$get_TopBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000E09")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6005098")]
		[Address(RVA = "0x5C51BD0", Offset = "0x5C50BD0", VA = "0x5C51BD0", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$get_BottomBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000E0A")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6005099")]
		[Address(RVA = "0x5C51BE0", Offset = "0x5C50BE0", VA = "0x5C51BE0", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x17000E0B")]
	protected override float AnimationTime
	{
		[Token(Token = "0x600509A")]
		[Address(RVA = "0x5C51BF0", Offset = "0x5C50BF0", VA = "0x5C51BF0", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$get_AnimationTime): clean
			return 0.2;
		}
	}

	[Token(Token = "0x600509B")]
	[Address(RVA = "0x5C51C00", Offset = "0x5C50C00", VA = "0x5C51C00", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$Setup): clean
		Transform pUVar1;
		GameObject __this_00;
		Transform pUVar2;
		Text pUVar3;
		Image pUVar4;
		Sprite[] pUVar5;

		this.Setup(parent);
		pUVar1 = this.transform;
		__this_00 = ElementFactory.InstantiateAndBind(pUVar1, "Prefabs/InGame/StylebarLabel");
		if (__this_00 != null) {
			pUVar1 = __this_00.transform;
			if (pUVar1 != null) {
				pUVar2 = pUVar1.Find("LetterLabel");
				if (pUVar2 != null) {
					pUVar3 = pUVar2.GetComponent<Text>();
					this._letterLabel = pUVar3;
					pUVar2 = pUVar1.Find("SentenceLabel");
					if (pUVar2 != null) {
						pUVar3 = pUVar2.GetComponent<Text>();
						this._sentenceLabel = pUVar3;
						pUVar2 = pUVar1.Find("ScoreLabel");
						if (pUVar2 != null) {
							pUVar3 = pUVar2.GetComponent<Text>();
							this._scoreLabel = pUVar3;
							pUVar2 = pUVar1.Find("BottomLabel");
							if (pUVar2 != null) {
								pUVar3 = pUVar2.GetComponent<Text>();
								this._bottomLabel = pUVar3;
								pUVar1 = pUVar1.Find("BladeFill");
								if (pUVar1 != null) {
									pUVar4 = pUVar1.GetComponent<Image>() ;
									this._bladeFill = pUVar4;
									pUVar4 = this._bladeFill;
									if (pUVar4 != null) {
										pUVar1 = pUVar4.transform;
										if (pUVar1 != null) {
											pUVar1 = pUVar1.Find("BladeBackground");
											if (pUVar1 != null) {
												pUVar4 = pUVar1.GetComponent<Image>();
												this._bladeBackground = pUVar4;
												pUVar5 = (Sprite[])Resources.LoadAll<Sprite>("UI/Sprites/HUD/StyleMeterBarSpriteSheet");
												this._fillSprites = pUVar5;
												pUVar5 = (Sprite[])Resources.LoadAll<Sprite>("UI/Sprites/HUD/StyleMeterSpriteSheet");
												this._backgroundSprites = pUVar5;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x600509C")]
	[Address(RVA = "0x5C50C70", Offset = "0x5C4FC70", VA = "0x5C50C70")]
	public void SetText(string letter, string sentence)
	{
		// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$SetText): clean
		Text pUVar1;

		pUVar1 = this._letterLabel;
		if (pUVar1 != null) {
			pUVar1.set_text(letter);
			pUVar1 = this._sentenceLabel;
			if (pUVar1 != null) {
				pUVar1.set_text(sentence);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600509D")]
	[Address(RVA = "0x5C51F00", Offset = "0x5C50F00", VA = "0x5C51F00")]
	public void SetColor(Color color)
	{
		// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$SetColor): clean
		Text pUVar1;

		pUVar1 = this._letterLabel;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.set_color(color);
		return;
	}

	[Token(Token = "0x600509E")]
	[Address(RVA = "0x5C50C10", Offset = "0x5C4FC10", VA = "0x5C50C10")]
	public void SetScore(string score, string bottom)
	{
		// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$SetScore): clean
		Text pUVar1;

		pUVar1 = this._scoreLabel;
		if (pUVar1 != null) {
			pUVar1.set_text(score);
			pUVar1 = this._bottomLabel;
			if (pUVar1 != null) {
				pUVar1.set_text(bottom);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600509F")]
	[Address(RVA = "0x5C50BF0", Offset = "0x5C4FBF0", VA = "0x5C50BF0")]
	public void SetFill(float fill)
	{
		// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$SetFill): clean
		Image __this_00;

		__this_00 = this._bladeFill;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.fillAmount = fill;
		return;
	}

	[Token(Token = "0x60050A0")]
	[Address(RVA = "0x5C50CD0", Offset = "0x5C4FCD0", VA = "0x5C50CD0")]
	public void SetRank(int rank)
	{
		// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$SetRank): clean
		Sprite[] pUVar1;
		Image pUVar2;
		uint uVar3;
		uint uVar4;

		uVar4 = 0;
		if (0 < rank) {
			uVar4 = rank;
		}
		uVar3 = 9;
		if (uVar4 < 9) {
			uVar3 = uVar4;
		}
		if (uVar3 == this._rank) {
			return;
		}
		this._rank = uVar3;
		pUVar1 = this._fillSprites;
		if (pUVar1 != null) {
			if ((uint)pUVar1.Length <= uVar3) {
	label_05d50d57: ;
				throw new IndexOutOfRangeException();
			}
			pUVar2 = this._bladeFill;
			if (pUVar2 != null) {
				pUVar2.sprite = pUVar1[uVar3];
				pUVar1 = this._backgroundSprites;
				if (pUVar1 != null) {
					uVar4 = this._rank;
					if ((uint)pUVar1.Length <= uVar4) goto label_05d50d57;
					pUVar2 = this._bladeBackground;
					if (pUVar2 != null) {
						pUVar2.sprite = pUVar1[(int)uVar4];
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050A1")]
	[Address(RVA = "0x5C51F30", Offset = "0x5C50F30", VA = "0x5C51F30")]
	public StylebarPopup()
	{
		// Lifted from source/cpp/UI/StylebarPopup.c (UI.StylebarPopup$$.ctor): clean
		base();
		return;
	}
}
