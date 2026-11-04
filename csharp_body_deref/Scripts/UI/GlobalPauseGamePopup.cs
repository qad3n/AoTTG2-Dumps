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

[Token(Token = "0x2000793")]
internal class GlobalPauseGamePopup : BasePopup
{
	[Token(Token = "0x40025AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x17000D2A")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x600496A")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D2B")]
	protected override string Title
	{
		[Token(Token = "0x600496B")]
		[Address(RVA = "0x2245D90", Offset = "0x2244390", VA = "0x182245D90", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D2C")]
	protected override string ThemePanel
	{
		[Token(Token = "0x600496C")]
		[Address(RVA = "0x2245D60", Offset = "0x2244360", VA = "0x182245D60", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D2D")]
	protected override float Width
	{
		[Token(Token = "0x600496D")]
		[Address(RVA = "0x21CB910", Offset = "0x21C9F10", VA = "0x1821CB910", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D2E")]
	protected override float Height
	{
		[Token(Token = "0x600496E")]
		[Address(RVA = "0x2245D50", Offset = "0x2244350", VA = "0x182245D50", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D2F")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600496F")]
		[Address(RVA = "0x21C6600", Offset = "0x21C4C00", VA = "0x1821C6600", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D30")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004970")]
		[Address(RVA = "0x21C6600", Offset = "0x21C4C00", VA = "0x1821C6600", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D31")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6004971")]
		[Address(RVA = "0x21C6620", Offset = "0x21C4C20", VA = "0x1821C6620", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D32")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6004972")]
		[Address(RVA = "0x21C6610", Offset = "0x21C4C10", VA = "0x1821C6610", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D33")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004973")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D34")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004974")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D35")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004975")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000D36")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004976")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000D37")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004977")]
		[Address(RVA = "0x2245D40", Offset = "0x2244340", VA = "0x182245D40", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004978")]
	[Address(RVA = "0x2245980", Offset = "0x2243F80", VA = "0x182245980", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004979")]
	[Address(RVA = "0x2245950", Offset = "0x2243F50", VA = "0x182245950")]
	public void SetLabel(string label)
	{
	}

	[Token(Token = "0x600497A")]
	[Address(RVA = "0x2245910", Offset = "0x2243F10", VA = "0x182245910")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600497B")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public GlobalPauseGamePopup()
	{
	}
}
