using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000668")]
internal class MapEditorAddComponentPanel : CategoryPanel
{
	[Token(Token = "0x4001F41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected GameObject _noItemsLabel;

	[Token(Token = "0x4001F42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected List<GameObject> _itemButtons;

	[Token(Token = "0x17000C7E")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004069")]
		[Address(RVA = "0x4000950", Offset = "0x4000950", VA = "0x4000950", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C7F")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600406A")]
		[Address(RVA = "0x4000960", Offset = "0x4000960", VA = "0x4000960", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C80")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600406B")]
		[Address(RVA = "0x4000970", Offset = "0x4000970", VA = "0x4000970", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C81")]
	protected virtual float ItemButtonWidth
	{
		[Token(Token = "0x600406C")]
		[Address(RVA = "0x4000980", Offset = "0x4000980", VA = "0x4000980", Slot = "35")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C82")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600406D")]
		[Address(RVA = "0x4000990", Offset = "0x4000990", VA = "0x4000990", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C83")]
	protected virtual int ItemFontSize
	{
		[Token(Token = "0x600406E")]
		[Address(RVA = "0x40009A0", Offset = "0x40009A0", VA = "0x40009A0", Slot = "36")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C84")]
	protected virtual float DeleteButtonSize
	{
		[Token(Token = "0x600406F")]
		[Address(RVA = "0x40009B0", Offset = "0x40009B0", VA = "0x40009B0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C85")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004070")]
		[Address(RVA = "0x40009C0", Offset = "0x40009C0", VA = "0x40009C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004071")]
	[Address(RVA = "0x40009F0", Offset = "0x40009F0", VA = "0x40009F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004072")]
	[Address(RVA = "0x4001720", Offset = "0x4001720", VA = "0x4001720", Slot = "38")]
	protected virtual List<string> GetItems(string category)
	{
		return null;
	}

	[Token(Token = "0x6004073")]
	[Address(RVA = "0x4000C20", Offset = "0x4000C20", VA = "0x4000C20")]
	protected List<string> Filter(List<string> original, string search)
	{
		return null;
	}

	[Token(Token = "0x6004074")]
	[Address(RVA = "0x4000F60", Offset = "0x4000F60", VA = "0x4000F60")]
	protected void CreateList(List<string> items)
	{
	}

	[Token(Token = "0x6004075")]
	[Address(RVA = "0x4002140", Offset = "0x4002140", VA = "0x4002140")]
	private void OnItemClick(string name)
	{
	}

	[Token(Token = "0x6004076")]
	[Address(RVA = "0x40022A0", Offset = "0x40022A0", VA = "0x40022A0")]
	public MapEditorAddComponentPanel()
	{
	}
}
