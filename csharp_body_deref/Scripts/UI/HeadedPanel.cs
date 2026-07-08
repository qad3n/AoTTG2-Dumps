using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000534")]
internal class HeadedPanel : BasePanel
{
	[Token(Token = "0x4001A09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected Transform BottomBar;

	[Token(Token = "0x4001A0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected Transform TopBar;

	[Token(Token = "0x4001A0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected Dictionary<string, Button> _topButtons;

	[Token(Token = "0x17000A44")]
	protected virtual string Title
	{
		[Token(Token = "0x60036D5")]
		[Address(RVA = "0x3F22AA0", Offset = "0x3F22AA0", VA = "0x3F22AA0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A45")]
	protected virtual float TopBarHeight
	{
		[Token(Token = "0x60036D6")]
		[Address(RVA = "0x3F22AD0", Offset = "0x3F22AD0", VA = "0x3F22AD0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A46")]
	protected virtual float BottomBarHeight
	{
		[Token(Token = "0x60036D7")]
		[Address(RVA = "0x3F22AE0", Offset = "0x3F22AE0", VA = "0x3F22AE0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A47")]
	protected virtual float BottomBarSpacing
	{
		[Token(Token = "0x60036D8")]
		[Address(RVA = "0x3F22AF0", Offset = "0x3F22AF0", VA = "0x3F22AF0", Slot = "38")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A48")]
	protected virtual int BottomBarPadding
	{
		[Token(Token = "0x60036D9")]
		[Address(RVA = "0x3F22B00", Offset = "0x3F22B00", VA = "0x3F22B00", Slot = "39")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A49")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60036DA")]
		[Address(RVA = "0x3F22B10", Offset = "0x3F22B10", VA = "0x3F22B10", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A4A")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60036DB")]
		[Address(RVA = "0x3F22B20", Offset = "0x3F22B20", VA = "0x3F22B20", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A4B")]
	protected virtual int TitleFontSize
	{
		[Token(Token = "0x60036DC")]
		[Address(RVA = "0x3F22B30", Offset = "0x3F22B30", VA = "0x3F22B30", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A4C")]
	protected virtual int ButtonFontSize
	{
		[Token(Token = "0x60036DD")]
		[Address(RVA = "0x3F22B40", Offset = "0x3F22B40", VA = "0x3F22B40", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A4D")]
	protected virtual bool CategoryButtons
	{
		[Token(Token = "0x60036DE")]
		[Address(RVA = "0x3F22B50", Offset = "0x3F22B50", VA = "0x3F22B50", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60036DF")]
	[Address(RVA = "0x3F22B60", Offset = "0x3F22B60", VA = "0x3F22B60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60036E0")]
	[Address(RVA = "0x3F232A0", Offset = "0x3F232A0", VA = "0x3F232A0", Slot = "28")]
	public override void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x60036E1")]
	[Address(RVA = "0x3F232E0", Offset = "0x3F232E0", VA = "0x3F232E0", Slot = "43")]
	protected virtual void SetTopButton(string name)
	{
	}

	[Token(Token = "0x60036E2")]
	[Address(RVA = "0x3F21BD0", Offset = "0x3F21BD0", VA = "0x3F21BD0")]
	protected void SetTitle(string title)
	{
	}

	[Token(Token = "0x60036E3")]
	[Address(RVA = "0x3F234E0", Offset = "0x3F234E0", VA = "0x3F234E0", Slot = "44")]
	protected virtual void SetupTopButtons()
	{
	}

	[Token(Token = "0x60036E4")]
	[Address(RVA = "0x3F23780", Offset = "0x3F23780", VA = "0x3F23780", Slot = "31")]
	public override float GetPanelHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60036E5")]
	[Address(RVA = "0x3F1C850", Offset = "0x3F1C850", VA = "0x3F1C850")]
	public HeadedPanel()
	{
	}
}
