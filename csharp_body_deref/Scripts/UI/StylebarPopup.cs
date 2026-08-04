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

[Token(Token = "0x200066A")]
internal class StylebarPopup : BasePopup
{
	[Token(Token = "0x4001F72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _letterLabel;

	[Token(Token = "0x4001F73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _sentenceLabel;

	[Token(Token = "0x4001F74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x4001F75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _bottomLabel;

	[Token(Token = "0x4001F76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Image _bladeFill;

	[Token(Token = "0x4001F77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Image _bladeBackground;

	[Token(Token = "0x4001F78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Sprite[] _fillSprites;

	[Token(Token = "0x4001F79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Sprite[] _backgroundSprites;

	[Token(Token = "0x4001F7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private int _rank;

	[Token(Token = "0x17000C49")]
	protected override string Title
	{
		[Token(Token = "0x6004077")]
		[Address(RVA = "0x42EBC50", Offset = "0x42EBC50", VA = "0x42EBC50", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C4A")]
	protected override float Width
	{
		[Token(Token = "0x6004078")]
		[Address(RVA = "0x42EBC70", Offset = "0x42EBC70", VA = "0x42EBC70", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C4B")]
	protected override float Height
	{
		[Token(Token = "0x6004079")]
		[Address(RVA = "0x42EBC80", Offset = "0x42EBC80", VA = "0x42EBC80", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C4C")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600407A")]
		[Address(RVA = "0x42EBC90", Offset = "0x42EBC90", VA = "0x42EBC90", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C4D")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x600407B")]
		[Address(RVA = "0x42EBCA0", Offset = "0x42EBCA0", VA = "0x42EBCA0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C4E")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x600407C")]
		[Address(RVA = "0x42EBCB0", Offset = "0x42EBCB0", VA = "0x42EBCB0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000C4F")]
	protected override float AnimationTime
	{
		[Token(Token = "0x600407D")]
		[Address(RVA = "0x42EBCC0", Offset = "0x42EBCC0", VA = "0x42EBCC0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600407E")]
	[Address(RVA = "0x42EBCD0", Offset = "0x42EBCD0", VA = "0x42EBCD0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600407F")]
	[Address(RVA = "0x42EACF0", Offset = "0x42EACF0", VA = "0x42EACF0")]
	public void SetText(string letter, string sentence)
	{
	}

	[Token(Token = "0x6004080")]
	[Address(RVA = "0x42EBFD0", Offset = "0x42EBFD0", VA = "0x42EBFD0")]
	public void SetColor(Color color)
	{
	}

	[Token(Token = "0x6004081")]
	[Address(RVA = "0x42EAC90", Offset = "0x42EAC90", VA = "0x42EAC90")]
	public void SetScore(string score, string bottom)
	{
	}

	[Token(Token = "0x6004082")]
	[Address(RVA = "0x42EAC70", Offset = "0x42EAC70", VA = "0x42EAC70")]
	public void SetFill(float fill)
	{
	}

	[Token(Token = "0x6004083")]
	[Address(RVA = "0x42EAD50", Offset = "0x42EAD50", VA = "0x42EAD50")]
	public void SetRank(int rank)
	{
	}

	[Token(Token = "0x6004084")]
	[Address(RVA = "0x42EC000", Offset = "0x42EC000", VA = "0x42EC000")]
	public StylebarPopup()
	{
	}
}
