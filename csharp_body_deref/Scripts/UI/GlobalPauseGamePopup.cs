// ==================== AoTTG2 cross-reference ====================
// Type: UI.GlobalPauseGamePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/GlobalPauseGamePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/GlobalPauseGamePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000638")]
internal class GlobalPauseGamePopup : BasePopup
{
	[Token(Token = "0x4001DF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x17000BD7")]
	protected override string Title
	{
		[Token(Token = "0x6003E75")]
		[Address(RVA = "0x42C0050", Offset = "0x42C0050", VA = "0x42C0050", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BD8")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003E76")]
		[Address(RVA = "0x42C0080", Offset = "0x42C0080", VA = "0x42C0080", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BD9")]
	protected override float Width
	{
		[Token(Token = "0x6003E77")]
		[Address(RVA = "0x42C00B0", Offset = "0x42C00B0", VA = "0x42C00B0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BDA")]
	protected override float Height
	{
		[Token(Token = "0x6003E78")]
		[Address(RVA = "0x42C00C0", Offset = "0x42C00C0", VA = "0x42C00C0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BDB")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003E79")]
		[Address(RVA = "0x42C00D0", Offset = "0x42C00D0", VA = "0x42C00D0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BDC")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003E7A")]
		[Address(RVA = "0x42C00E0", Offset = "0x42C00E0", VA = "0x42C00E0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BDD")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6003E7B")]
		[Address(RVA = "0x42C00F0", Offset = "0x42C00F0", VA = "0x42C00F0", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BDE")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6003E7C")]
		[Address(RVA = "0x42C0100", Offset = "0x42C0100", VA = "0x42C0100", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BDF")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003E7D")]
		[Address(RVA = "0x42C0110", Offset = "0x42C0110", VA = "0x42C0110", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BE0")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003E7E")]
		[Address(RVA = "0x42C0120", Offset = "0x42C0120", VA = "0x42C0120", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BE1")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003E7F")]
		[Address(RVA = "0x42C0130", Offset = "0x42C0130", VA = "0x42C0130", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000BE2")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003E80")]
		[Address(RVA = "0x42C0140", Offset = "0x42C0140", VA = "0x42C0140", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000BE3")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003E81")]
		[Address(RVA = "0x42C0150", Offset = "0x42C0150", VA = "0x42C0150", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003E82")]
	[Address(RVA = "0x42C0160", Offset = "0x42C0160", VA = "0x42C0160", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E83")]
	[Address(RVA = "0x42C04A0", Offset = "0x42C04A0", VA = "0x42C04A0")]
	public void SetLabel(string label)
	{
	}

	[Token(Token = "0x6003E84")]
	[Address(RVA = "0x42C04D0", Offset = "0x42C04D0", VA = "0x42C04D0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003E85")]
	[Address(RVA = "0x42C0530", Offset = "0x42C0530", VA = "0x42C0530")]
	public GlobalPauseGamePopup()
	{
	}
}
