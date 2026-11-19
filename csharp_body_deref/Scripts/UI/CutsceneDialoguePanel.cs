// ==================== AoTTG2 cross-reference ====================
// Type: UI.CutsceneDialoguePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CutsceneDialoguePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CutsceneDialoguePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000838")]
internal class CutsceneDialoguePanel : BasePopup
{
	[Token(Token = "0x40028F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _contentLabel;

	[Token(Token = "0x40028F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _titleLabel;

	[Token(Token = "0x40028F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private RawImage _image;

	[Token(Token = "0x40028F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _labelRight;

	[Token(Token = "0x17000D95")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004E58")]
		[Address(RVA = "0x5C1D5F0", Offset = "0x5C1C5F0", VA = "0x5C1D5F0", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D96")]
	protected override string Title
	{
		[Token(Token = "0x6004E59")]
		[Address(RVA = "0x5C1D600", Offset = "0x5C1C600", VA = "0x5C1D600", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D97")]
	protected override float Width
	{
		[Token(Token = "0x6004E5A")]
		[Address(RVA = "0x5C1D620", Offset = "0x5C1C620", VA = "0x5C1D620", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D98")]
	protected override float Height
	{
		[Token(Token = "0x6004E5B")]
		[Address(RVA = "0x5C1D630", Offset = "0x5C1C630", VA = "0x5C1D630", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D99")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004E5C")]
		[Address(RVA = "0x5C1D640", Offset = "0x5C1C640", VA = "0x5C1D640", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D9A")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004E5D")]
		[Address(RVA = "0x5C1D650", Offset = "0x5C1C650", VA = "0x5C1D650", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D9B")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E5E")]
		[Address(RVA = "0x5C1D660", Offset = "0x5C1C660", VA = "0x5C1D660", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D9C")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004E5F")]
		[Address(RVA = "0x5C1D670", Offset = "0x5C1C670", VA = "0x5C1D670", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D9D")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004E60")]
		[Address(RVA = "0x5C1D680", Offset = "0x5C1C680", VA = "0x5C1D680", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D9E")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004E61")]
		[Address(RVA = "0x5C1D690", Offset = "0x5C1C690", VA = "0x5C1D690", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000D9F")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004E62")]
		[Address(RVA = "0x5C1D6A0", Offset = "0x5C1C6A0", VA = "0x5C1D6A0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000DA0")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004E63")]
		[Address(RVA = "0x5C1D6B0", Offset = "0x5C1C6B0", VA = "0x5C1D6B0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DA1")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004E64")]
		[Address(RVA = "0x5C1D6C0", Offset = "0x5C1C6C0", VA = "0x5C1D6C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004E65")]
	[Address(RVA = "0x5C1D6F0", Offset = "0x5C1C6F0", VA = "0x5C1D6F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004E66")]
	[Address(RVA = "0x5C1DC10", Offset = "0x5C1CC10", VA = "0x5C1DC10")]
	public void Show(string icon, string title, string content, bool full)
	{
	}

	[Token(Token = "0x6004E67")]
	[Address(RVA = "0x5C1DDE0", Offset = "0x5C1CDE0", VA = "0x5C1DDE0")]
	public CutsceneDialoguePanel()
	{
	}
}
