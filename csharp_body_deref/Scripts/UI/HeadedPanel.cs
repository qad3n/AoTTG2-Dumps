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

[Token(Token = "0x2000579")]
internal class HeadedPanel : BasePanel
{
	[Token(Token = "0x4001B1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected Transform BottomBar;

	[Token(Token = "0x4001B1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected Transform TopBar;

	[Token(Token = "0x4001B1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected Dictionary<string, Button> _topButtons;

	[Token(Token = "0x17000AAE")]
	protected virtual string Title
	{
		[Token(Token = "0x60038E3")]
		[Address(RVA = "0x424C250", Offset = "0x424C250", VA = "0x424C250", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AAF")]
	protected virtual float TopBarHeight
	{
		[Token(Token = "0x60038E4")]
		[Address(RVA = "0x424C280", Offset = "0x424C280", VA = "0x424C280", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AB0")]
	protected virtual float BottomBarHeight
	{
		[Token(Token = "0x60038E5")]
		[Address(RVA = "0x424C290", Offset = "0x424C290", VA = "0x424C290", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AB1")]
	protected virtual float BottomBarSpacing
	{
		[Token(Token = "0x60038E6")]
		[Address(RVA = "0x424C2A0", Offset = "0x424C2A0", VA = "0x424C2A0", Slot = "38")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AB2")]
	protected virtual int BottomBarPadding
	{
		[Token(Token = "0x60038E7")]
		[Address(RVA = "0x424C2B0", Offset = "0x424C2B0", VA = "0x424C2B0", Slot = "39")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AB3")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60038E8")]
		[Address(RVA = "0x424C2C0", Offset = "0x424C2C0", VA = "0x424C2C0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AB4")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60038E9")]
		[Address(RVA = "0x424C2D0", Offset = "0x424C2D0", VA = "0x424C2D0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AB5")]
	protected virtual int TitleFontSize
	{
		[Token(Token = "0x60038EA")]
		[Address(RVA = "0x424C2E0", Offset = "0x424C2E0", VA = "0x424C2E0", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AB6")]
	protected virtual int ButtonFontSize
	{
		[Token(Token = "0x60038EB")]
		[Address(RVA = "0x424C2F0", Offset = "0x424C2F0", VA = "0x424C2F0", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AB7")]
	protected virtual bool CategoryButtons
	{
		[Token(Token = "0x60038EC")]
		[Address(RVA = "0x424C300", Offset = "0x424C300", VA = "0x424C300", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60038ED")]
	[Address(RVA = "0x424C310", Offset = "0x424C310", VA = "0x424C310", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60038EE")]
	[Address(RVA = "0x424CA50", Offset = "0x424CA50", VA = "0x424CA50", Slot = "28")]
	public override void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x60038EF")]
	[Address(RVA = "0x424CA90", Offset = "0x424CA90", VA = "0x424CA90", Slot = "43")]
	protected virtual void SetTopButton(string name)
	{
	}

	[Token(Token = "0x60038F0")]
	[Address(RVA = "0x424B380", Offset = "0x424B380", VA = "0x424B380")]
	protected void SetTitle(string title)
	{
	}

	[Token(Token = "0x60038F1")]
	[Address(RVA = "0x424CC90", Offset = "0x424CC90", VA = "0x424CC90", Slot = "44")]
	protected virtual void SetupTopButtons()
	{
	}

	[Token(Token = "0x60038F2")]
	[Address(RVA = "0x424CF30", Offset = "0x424CF30", VA = "0x424CF30", Slot = "31")]
	public override float GetPanelHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60038F3")]
	[Address(RVA = "0x4245F20", Offset = "0x4245F20", VA = "0x4245F20")]
	public HeadedPanel()
	{
	}
}
