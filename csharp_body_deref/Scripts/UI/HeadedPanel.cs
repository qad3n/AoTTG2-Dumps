// ==================== AoTTG2 cross-reference ====================
// Type: UI.HeadedPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/HeadedPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/HeadedPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006EB")]
internal class HeadedPanel : BasePanel
{
	[Token(Token = "0x40022D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected Transform BottomBar;

	[Token(Token = "0x40022D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected Transform TopBar;

	[Token(Token = "0x40022D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected Dictionary<string, Button> _topButtons;

	[Token(Token = "0x17000C04")]
	protected virtual string Title
	{
		[Token(Token = "0x600440C")]
		[Address(RVA = "0x21C3390", Offset = "0x21C1990", VA = "0x1821C3390", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C05")]
	protected virtual float TopBarHeight
	{
		[Token(Token = "0x600440D")]
		[Address(RVA = "0x21C3380", Offset = "0x21C1980", VA = "0x1821C3380", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C06")]
	protected virtual float BottomBarHeight
	{
		[Token(Token = "0x600440E")]
		[Address(RVA = "0x21C3380", Offset = "0x21C1980", VA = "0x1821C3380", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C07")]
	protected virtual float BottomBarSpacing
	{
		[Token(Token = "0x600440F")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "38")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C08")]
	protected virtual int BottomBarPadding
	{
		[Token(Token = "0x6004410")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "39")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C09")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004411")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C0A")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004412")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C0B")]
	protected virtual int TitleFontSize
	{
		[Token(Token = "0x6004413")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C0C")]
	protected virtual int ButtonFontSize
	{
		[Token(Token = "0x6004414")]
		[Address(RVA = "0x846FB0", Offset = "0x8455B0", VA = "0x180846FB0", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C0D")]
	protected virtual bool CategoryButtons
	{
		[Token(Token = "0x6004415")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004416")]
	[Address(RVA = "0x21C2B50", Offset = "0x21C1150", VA = "0x1821C2B50", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004417")]
	[Address(RVA = "0x21C2640", Offset = "0x21C0C40", VA = "0x1821C2640", Slot = "28")]
	public override void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x6004418")]
	[Address(RVA = "0x21C2710", Offset = "0x21C0D10", VA = "0x1821C2710", Slot = "43")]
	protected virtual void SetTopButton(string name)
	{
	}

	[Token(Token = "0x6004419")]
	[Address(RVA = "0x21C2680", Offset = "0x21C0C80", VA = "0x1821C2680")]
	protected void SetTitle(string title)
	{
	}

	[Token(Token = "0x600441A")]
	[Address(RVA = "0x21C28E0", Offset = "0x21C0EE0", VA = "0x1821C28E0", Slot = "44")]
	protected virtual void SetupTopButtons()
	{
	}

	[Token(Token = "0x600441B")]
	[Address(RVA = "0x21C2530", Offset = "0x21C0B30", VA = "0x1821C2530", Slot = "31")]
	public override float GetPanelHeight()
	{
		return default(float);
	}

	[Token(Token = "0x600441C")]
	[Address(RVA = "0x21C3300", Offset = "0x21C1900", VA = "0x1821C3300")]
	public HeadedPanel()
	{
	}
}
