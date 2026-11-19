// ==================== AoTTG2 cross-reference ====================
// Type: UI.GlobalPauseGamePopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/GlobalPauseGamePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/GlobalPauseGamePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200083E")]
internal class GlobalPauseGamePopup : BasePopup
{
	[Token(Token = "0x400291E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x400291F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private string _unpausingText;

	[Token(Token = "0x4002920")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _pausedText;

	[Token(Token = "0x17000DA6")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004E91")]
		[Address(RVA = "0x5C21F10", Offset = "0x5C20F10", VA = "0x5C21F10", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000DA7")]
	protected override string Title
	{
		[Token(Token = "0x6004E92")]
		[Address(RVA = "0x5C21F20", Offset = "0x5C20F20", VA = "0x5C21F20", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DA8")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004E93")]
		[Address(RVA = "0x5C21FC0", Offset = "0x5C20FC0", VA = "0x5C21FC0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DA9")]
	protected override float Width
	{
		[Token(Token = "0x6004E94")]
		[Address(RVA = "0x5C21FF0", Offset = "0x5C20FF0", VA = "0x5C21FF0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DAA")]
	protected override float Height
	{
		[Token(Token = "0x6004E95")]
		[Address(RVA = "0x5C22000", Offset = "0x5C21000", VA = "0x5C22000", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DAB")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004E96")]
		[Address(RVA = "0x5C22010", Offset = "0x5C21010", VA = "0x5C22010", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DAC")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004E97")]
		[Address(RVA = "0x5C22020", Offset = "0x5C21020", VA = "0x5C22020", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DAD")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6004E98")]
		[Address(RVA = "0x5C22030", Offset = "0x5C21030", VA = "0x5C22030", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000DAE")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6004E99")]
		[Address(RVA = "0x5C22040", Offset = "0x5C21040", VA = "0x5C22040", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000DAF")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E9A")]
		[Address(RVA = "0x5C22050", Offset = "0x5C21050", VA = "0x5C22050", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000DB0")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004E9B")]
		[Address(RVA = "0x5C22060", Offset = "0x5C21060", VA = "0x5C22060", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000DB1")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004E9C")]
		[Address(RVA = "0x5C22070", Offset = "0x5C21070", VA = "0x5C22070", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000DB2")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004E9D")]
		[Address(RVA = "0x5C22080", Offset = "0x5C21080", VA = "0x5C22080", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000DB3")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004E9E")]
		[Address(RVA = "0x5C22090", Offset = "0x5C21090", VA = "0x5C22090", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004E9F")]
	[Address(RVA = "0x5C220A0", Offset = "0x5C210A0", VA = "0x5C220A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004EA0")]
	[Address(RVA = "0x5C22490", Offset = "0x5C21490", VA = "0x5C22490")]
	public void SetTimeLeft(float timeLeft)
	{
	}

	[Token(Token = "0x6004EA1")]
	[Address(RVA = "0x5C22550", Offset = "0x5C21550", VA = "0x5C22550")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004EA2")]
	[Address(RVA = "0x5C225B0", Offset = "0x5C215B0", VA = "0x5C225B0")]
	public GlobalPauseGamePopup()
	{
	}
}
