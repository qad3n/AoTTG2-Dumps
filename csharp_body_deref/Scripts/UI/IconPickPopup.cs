using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000536")]
internal class IconPickPopup : PromptPopup
{
	[Token(Token = "0x4001A10")]
	protected const int Columns = 7;

	[Token(Token = "0x4001A11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected string[] _options;

	[Token(Token = "0x4001A12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected BaseSetting _setting;

	[Token(Token = "0x4001A13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected UnityAction _onSelect;

	[Token(Token = "0x4001A14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected Text _label;

	[Token(Token = "0x4001A15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected List<GameObject> _groups;

	[Token(Token = "0x4001A16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected int _currentIndex;

	[Token(Token = "0x17000A4E")]
	protected override string Title
	{
		[Token(Token = "0x60036EA")]
		[Address(RVA = "0x3F23BE0", Offset = "0x3F23BE0", VA = "0x3F23BE0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A4F")]
	protected override float Width
	{
		[Token(Token = "0x60036EB")]
		[Address(RVA = "0x3F23C00", Offset = "0x3F23C00", VA = "0x3F23C00", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A50")]
	protected override float Height
	{
		[Token(Token = "0x60036EC")]
		[Address(RVA = "0x3F23C10", Offset = "0x3F23C10", VA = "0x3F23C10", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A51")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60036ED")]
		[Address(RVA = "0x3F23C20", Offset = "0x3F23C20", VA = "0x3F23C20", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A52")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60036EE")]
		[Address(RVA = "0x3F23C30", Offset = "0x3F23C30", VA = "0x3F23C30", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A53")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60036EF")]
		[Address(RVA = "0x3F23C40", Offset = "0x3F23C40", VA = "0x3F23C40", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A54")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60036F0")]
		[Address(RVA = "0x3F23C50", Offset = "0x3F23C50", VA = "0x3F23C50", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60036F1")]
	[Address(RVA = "0x3F23C60", Offset = "0x3F23C60", VA = "0x3F23C60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60036F2")]
	[Address(RVA = "0x3F23D90", Offset = "0x3F23D90", VA = "0x3F23D90")]
	public void Show(BaseSetting setting, Text label, string[] options, string[] icons, string[] tooltips, UnityAction onSelect, TooltipPopup tooltipPopup)
	{
	}

	[Token(Token = "0x60036F3")]
	[Address(RVA = "0x3F24B40", Offset = "0x3F24B40", VA = "0x3F24B40")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x60036F4")]
	[Address(RVA = "0x3F24360", Offset = "0x3F24360", VA = "0x3F24360")]
	protected void CreateRow(List<string> items, List<string> icons, List<string> tooltips, TooltipPopup tooltipPopup)
	{
	}

	[Token(Token = "0x60036F5")]
	[Address(RVA = "0x3F24B70", Offset = "0x3F24B70", VA = "0x3F24B70", Slot = "59")]
	protected virtual void OnSelectObject(string name, int index)
	{
	}

	[Token(Token = "0x60036F6")]
	[Address(RVA = "0x3F24CB0", Offset = "0x3F24CB0", VA = "0x3F24CB0")]
	public IconPickPopup()
	{
	}
}
