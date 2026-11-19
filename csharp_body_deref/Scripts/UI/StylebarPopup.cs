// ==================== AoTTG2 cross-reference ====================
// Type: UI.StylebarPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/StylebarPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/StylebarPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000E05")]
	protected override string Title
	{
		[Token(Token = "0x6005094")]
		[Address(RVA = "0x5C51B80", Offset = "0x5C50B80", VA = "0x5C51B80", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E06")]
	protected override float Width
	{
		[Token(Token = "0x6005095")]
		[Address(RVA = "0x5C51BA0", Offset = "0x5C50BA0", VA = "0x5C51BA0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E07")]
	protected override float Height
	{
		[Token(Token = "0x6005096")]
		[Address(RVA = "0x5C51BB0", Offset = "0x5C50BB0", VA = "0x5C51BB0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E08")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6005097")]
		[Address(RVA = "0x5C51BC0", Offset = "0x5C50BC0", VA = "0x5C51BC0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E09")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6005098")]
		[Address(RVA = "0x5C51BD0", Offset = "0x5C50BD0", VA = "0x5C51BD0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E0A")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6005099")]
		[Address(RVA = "0x5C51BE0", Offset = "0x5C50BE0", VA = "0x5C51BE0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000E0B")]
	protected override float AnimationTime
	{
		[Token(Token = "0x600509A")]
		[Address(RVA = "0x5C51BF0", Offset = "0x5C50BF0", VA = "0x5C51BF0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600509B")]
	[Address(RVA = "0x5C51C00", Offset = "0x5C50C00", VA = "0x5C51C00", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600509C")]
	[Address(RVA = "0x5C50C70", Offset = "0x5C4FC70", VA = "0x5C50C70")]
	public void SetText(string letter, string sentence)
	{
	}

	[Token(Token = "0x600509D")]
	[Address(RVA = "0x5C51F00", Offset = "0x5C50F00", VA = "0x5C51F00")]
	public void SetColor(Color color)
	{
	}

	[Token(Token = "0x600509E")]
	[Address(RVA = "0x5C50C10", Offset = "0x5C4FC10", VA = "0x5C50C10")]
	public void SetScore(string score, string bottom)
	{
	}

	[Token(Token = "0x600509F")]
	[Address(RVA = "0x5C50BF0", Offset = "0x5C4FBF0", VA = "0x5C50BF0")]
	public void SetFill(float fill)
	{
	}

	[Token(Token = "0x60050A0")]
	[Address(RVA = "0x5C50CD0", Offset = "0x5C4FCD0", VA = "0x5C50CD0")]
	public void SetRank(int rank)
	{
	}

	[Token(Token = "0x60050A1")]
	[Address(RVA = "0x5C51F30", Offset = "0x5C50F30", VA = "0x5C51F30")]
	public StylebarPopup()
	{
	}
}
