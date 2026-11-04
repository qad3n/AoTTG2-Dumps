// ==================== AoTTG2 cross-reference ====================
// Type: UI.StylebarPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/StylebarPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/StylebarPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007C6")]
internal class StylebarPopup : BasePopup
{
	[Token(Token = "0x400274D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _letterLabel;

	[Token(Token = "0x400274E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _sentenceLabel;

	[Token(Token = "0x400274F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x4002750")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _bottomLabel;

	[Token(Token = "0x4002751")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Image _bladeFill;

	[Token(Token = "0x4002752")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Image _bladeBackground;

	[Token(Token = "0x4002753")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Sprite[] _fillSprites;

	[Token(Token = "0x4002754")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Sprite[] _backgroundSprites;

	[Token(Token = "0x4002755")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private int _rank;

	[Token(Token = "0x17000D93")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004B73")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D94")]
	protected override string Title
	{
		[Token(Token = "0x6004B74")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D95")]
	protected override float Width
	{
		[Token(Token = "0x6004B75")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D96")]
	protected override float Height
	{
		[Token(Token = "0x6004B76")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D97")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004B77")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D98")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004B78")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D99")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004B79")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000D9A")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004B7A")]
		[Address(RVA = "0x2245D40", Offset = "0x2244340", VA = "0x182245D40", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004B7B")]
	[Address(RVA = "0x2281190", Offset = "0x227F790", VA = "0x182281190", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B7C")]
	[Address(RVA = "0x2281130", Offset = "0x227F730", VA = "0x182281130")]
	public void SetText(string letter, string sentence)
	{
	}

	[Token(Token = "0x6004B7D")]
	[Address(RVA = "0x2280FC0", Offset = "0x227F5C0", VA = "0x182280FC0")]
	public void SetColor(Color color)
	{
	}

	[Token(Token = "0x6004B7E")]
	[Address(RVA = "0x22810D0", Offset = "0x227F6D0", VA = "0x1822810D0")]
	public void SetScore(string score, string bottom)
	{
	}

	[Token(Token = "0x6004B7F")]
	[Address(RVA = "0x2281000", Offset = "0x227F600", VA = "0x182281000")]
	public void SetFill(float fill)
	{
	}

	[Token(Token = "0x6004B80")]
	[Address(RVA = "0x2281030", Offset = "0x227F630", VA = "0x182281030")]
	public void SetRank(int rank)
	{
	}

	[Token(Token = "0x6004B81")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public StylebarPopup()
	{
	}
}
