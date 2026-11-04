// ==================== AoTTG2 cross-reference ====================
// Type: UI.CutsceneDialoguePanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CutsceneDialoguePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CutsceneDialoguePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200078D")]
internal class CutsceneDialoguePanel : BasePopup
{
	[Token(Token = "0x4002584")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _contentLabel;

	[Token(Token = "0x4002585")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _titleLabel;

	[Token(Token = "0x4002586")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private RawImage _image;

	[Token(Token = "0x4002587")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _labelRight;

	[Token(Token = "0x17000D19")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004932")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D1A")]
	protected override string Title
	{
		[Token(Token = "0x6004933")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D1B")]
	protected override float Width
	{
		[Token(Token = "0x6004934")]
		[Address(RVA = "0x21500A0", Offset = "0x214E6A0", VA = "0x1821500A0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D1C")]
	protected override float Height
	{
		[Token(Token = "0x6004935")]
		[Address(RVA = "0x2241880", Offset = "0x223FE80", VA = "0x182241880", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D1D")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004936")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D1E")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004937")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D1F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004938")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D20")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004939")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D21")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600493A")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D22")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600493B")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000D23")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x600493C")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000D24")]
	protected override float AnimationTime
	{
		[Token(Token = "0x600493D")]
		[Address(RVA = "0x21779B0", Offset = "0x2175FB0", VA = "0x1821779B0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D25")]
	protected override string ThemePanel
	{
		[Token(Token = "0x600493E")]
		[Address(RVA = "0x2241890", Offset = "0x223FE90", VA = "0x182241890", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600493F")]
	[Address(RVA = "0x22411C0", Offset = "0x223F7C0", VA = "0x1822411C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004940")]
	[Address(RVA = "0x22416C0", Offset = "0x223FCC0", VA = "0x1822416C0")]
	public void Show(string icon, string title, string content, bool full)
	{
	}

	[Token(Token = "0x6004941")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public CutsceneDialoguePanel()
	{
	}
}
