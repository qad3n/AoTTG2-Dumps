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

[Token(Token = "0x2000794")]
internal class HeadedPanel : BasePanel
{
	[Token(Token = "0x400264D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected Transform BottomBar;

	[Token(Token = "0x400264E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected Transform TopBar;

	[Token(Token = "0x400264F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected Dictionary<string, Button> _topButtons;

	[Token(Token = "0x17000C88")]
	protected virtual string Title
	{
		[Token(Token = "0x6004931")]
		[Address(RVA = "0x5BBDFF0", Offset = "0x5BBCFF0", VA = "0x5BBDFF0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C89")]
	protected virtual float TopBarHeight
	{
		[Token(Token = "0x6004932")]
		[Address(RVA = "0x5BBE020", Offset = "0x5BBD020", VA = "0x5BBE020", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C8A")]
	protected virtual float BottomBarHeight
	{
		[Token(Token = "0x6004933")]
		[Address(RVA = "0x5BBE030", Offset = "0x5BBD030", VA = "0x5BBE030", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C8B")]
	protected virtual float BottomBarSpacing
	{
		[Token(Token = "0x6004934")]
		[Address(RVA = "0x5BBE040", Offset = "0x5BBD040", VA = "0x5BBE040", Slot = "38")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C8C")]
	protected virtual int BottomBarPadding
	{
		[Token(Token = "0x6004935")]
		[Address(RVA = "0x5BBE050", Offset = "0x5BBD050", VA = "0x5BBE050", Slot = "39")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C8D")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004936")]
		[Address(RVA = "0x5BBE060", Offset = "0x5BBD060", VA = "0x5BBE060", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C8E")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004937")]
		[Address(RVA = "0x5BBE070", Offset = "0x5BBD070", VA = "0x5BBE070", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C8F")]
	protected virtual int TitleFontSize
	{
		[Token(Token = "0x6004938")]
		[Address(RVA = "0x5BBE080", Offset = "0x5BBD080", VA = "0x5BBE080", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C90")]
	protected virtual int ButtonFontSize
	{
		[Token(Token = "0x6004939")]
		[Address(RVA = "0x5BBE090", Offset = "0x5BBD090", VA = "0x5BBE090", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C91")]
	protected virtual bool CategoryButtons
	{
		[Token(Token = "0x600493A")]
		[Address(RVA = "0x5BBE0A0", Offset = "0x5BBD0A0", VA = "0x5BBE0A0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600493B")]
	[Address(RVA = "0x5BBE0B0", Offset = "0x5BBD0B0", VA = "0x5BBE0B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600493C")]
	[Address(RVA = "0x5BBE7F0", Offset = "0x5BBD7F0", VA = "0x5BBE7F0", Slot = "28")]
	public override void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x600493D")]
	[Address(RVA = "0x5BBE820", Offset = "0x5BBD820", VA = "0x5BBE820", Slot = "43")]
	protected virtual void SetTopButton(string name)
	{
	}

	[Token(Token = "0x600493E")]
	[Address(RVA = "0x5BBCA90", Offset = "0x5BBBA90", VA = "0x5BBCA90")]
	protected void SetTitle(string title)
	{
	}

	[Token(Token = "0x600493F")]
	[Address(RVA = "0x5BBEA00", Offset = "0x5BBDA00", VA = "0x5BBEA00", Slot = "44")]
	protected virtual void SetupTopButtons()
	{
	}

	[Token(Token = "0x6004940")]
	[Address(RVA = "0x5BBECA0", Offset = "0x5BBDCA0", VA = "0x5BBECA0", Slot = "31")]
	public override float GetPanelHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6004941")]
	[Address(RVA = "0x5BB76E0", Offset = "0x5BB66E0", VA = "0x5BB76E0")]
	public HeadedPanel()
	{
	}
}
