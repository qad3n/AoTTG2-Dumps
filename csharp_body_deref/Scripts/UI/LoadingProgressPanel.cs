// ==================== AoTTG2 cross-reference ====================
// Type: UI.LoadingProgressPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/LoadingProgressPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingProgressPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000674")]
internal class LoadingProgressPanel : BasePopup
{
	[Token(Token = "0x4001FA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected float SliderWidth;

	[Token(Token = "0x4001FA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
	protected float SliderHeight;

	[Token(Token = "0x4001FA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _label;

	[Token(Token = "0x4001FA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Slider _slider;

	[Token(Token = "0x17000C5E")]
	protected override string Title
	{
		[Token(Token = "0x60040BF")]
		[Address(RVA = "0x42EFC70", Offset = "0x42EFC70", VA = "0x42EFC70", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C5F")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60040C0")]
		[Address(RVA = "0x42EFCD0", Offset = "0x42EFCD0", VA = "0x42EFCD0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C60")]
	protected override float Width
	{
		[Token(Token = "0x60040C1")]
		[Address(RVA = "0x42EFD00", Offset = "0x42EFD00", VA = "0x42EFD00", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C61")]
	protected override float Height
	{
		[Token(Token = "0x60040C2")]
		[Address(RVA = "0x42EFD10", Offset = "0x42EFD10", VA = "0x42EFD10", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C62")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60040C3")]
		[Address(RVA = "0x42EFD20", Offset = "0x42EFD20", VA = "0x42EFD20", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C63")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60040C4")]
		[Address(RVA = "0x42EFD30", Offset = "0x42EFD30", VA = "0x42EFD30", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C64")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x60040C5")]
		[Address(RVA = "0x42EFD40", Offset = "0x42EFD40", VA = "0x42EFD40", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C65")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x60040C6")]
		[Address(RVA = "0x42EFD50", Offset = "0x42EFD50", VA = "0x42EFD50", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C66")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60040C7")]
		[Address(RVA = "0x42EFD60", Offset = "0x42EFD60", VA = "0x42EFD60", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C67")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60040C8")]
		[Address(RVA = "0x42EFD70", Offset = "0x42EFD70", VA = "0x42EFD70", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C68")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60040C9")]
		[Address(RVA = "0x42EFD80", Offset = "0x42EFD80", VA = "0x42EFD80", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000C69")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60040CA")]
		[Address(RVA = "0x42EFD90", Offset = "0x42EFD90", VA = "0x42EFD90", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000C6A")]
	protected override float AnimationTime
	{
		[Token(Token = "0x60040CB")]
		[Address(RVA = "0x42EFDA0", Offset = "0x42EFDA0", VA = "0x42EFDA0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60040CC")]
	[Address(RVA = "0x42EFDB0", Offset = "0x42EFDB0", VA = "0x42EFDB0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60040CD")]
	[Address(RVA = "0x42EF850", Offset = "0x42EF850", VA = "0x42EF850")]
	public void ShowImmediate(float progress)
	{
	}

	[Token(Token = "0x60040CE")]
	[Address(RVA = "0x42EF940", Offset = "0x42EF940", VA = "0x42EF940")]
	public void Show(float progress)
	{
	}

	[Token(Token = "0x60040CF")]
	[Address(RVA = "0x42F02F0", Offset = "0x42F02F0", VA = "0x42F02F0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60040D0")]
	[Address(RVA = "0x42F0350", Offset = "0x42F0350", VA = "0x42F0350")]
	public LoadingProgressPanel()
	{
	}
}
