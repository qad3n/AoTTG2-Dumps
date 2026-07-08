using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x200053E")]
internal class RoleSpritePickPopup : PromptPopup
{
	[Token(Token = "0x4001A31")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly List<GameObject> _items;

	[Token(Token = "0x4001A32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private StringSetting _setting;

	[Token(Token = "0x4001A33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4001A34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private UnityAction _onSelect;

	[Token(Token = "0x17000A77")]
	protected override string Title
	{
		[Token(Token = "0x600373F")]
		[Address(RVA = "0x3F26CF0", Offset = "0x3F26CF0", VA = "0x3F26CF0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A78")]
	protected override float Width
	{
		[Token(Token = "0x6003740")]
		[Address(RVA = "0x3F26D10", Offset = "0x3F26D10", VA = "0x3F26D10", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A79")]
	protected override float Height
	{
		[Token(Token = "0x6003741")]
		[Address(RVA = "0x3F26D20", Offset = "0x3F26D20", VA = "0x3F26D20", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A7A")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003742")]
		[Address(RVA = "0x3F26D30", Offset = "0x3F26D30", VA = "0x3F26D30", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A7B")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003743")]
		[Address(RVA = "0x3F26D40", Offset = "0x3F26D40", VA = "0x3F26D40", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A7C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003744")]
		[Address(RVA = "0x3F26D50", Offset = "0x3F26D50", VA = "0x3F26D50", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A7D")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003745")]
		[Address(RVA = "0x3F26D60", Offset = "0x3F26D60", VA = "0x3F26D60", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003746")]
	[Address(RVA = "0x3F26D70", Offset = "0x3F26D70", VA = "0x3F26D70", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003747")]
	[Address(RVA = "0x3F26E90", Offset = "0x3F26E90", VA = "0x3F26E90")]
	public void Show(StringSetting setting, TextMeshProUGUI label, [Optional] UnityAction onSelect)
	{
	}

	[Token(Token = "0x6003748")]
	[Address(RVA = "0x3F270A0", Offset = "0x3F270A0", VA = "0x3F270A0")]
	private void BuildItems()
	{
	}

	[Token(Token = "0x6003749")]
	[Address(RVA = "0x3F27490", Offset = "0x3F27490", VA = "0x3F27490")]
	private void CreateItem(ElementStyle style, string displayName, string value)
	{
	}

	[Token(Token = "0x600374A")]
	[Address(RVA = "0x3F27F90", Offset = "0x3F27F90", VA = "0x3F27F90")]
	private void OnSelect(string value, string displayText)
	{
	}

	[Token(Token = "0x600374B")]
	[Address(RVA = "0x3F280A0", Offset = "0x3F280A0", VA = "0x3F280A0")]
	public RoleSpritePickPopup()
	{
	}
}
