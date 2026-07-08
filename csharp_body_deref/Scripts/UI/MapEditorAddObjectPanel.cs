using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200066C")]
internal class MapEditorAddObjectPanel : CategoryPanel
{
	[Token(Token = "0x4001F4B")]
	protected const int Columns = 8;

	[Token(Token = "0x17000C8D")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600408D")]
		[Address(RVA = "0x4002E30", Offset = "0x4002E30", VA = "0x4002E30", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C8E")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600408E")]
		[Address(RVA = "0x4002E40", Offset = "0x4002E40", VA = "0x4002E40", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C8F")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600408F")]
		[Address(RVA = "0x4002E50", Offset = "0x4002E50", VA = "0x4002E50", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C90")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004090")]
		[Address(RVA = "0x4002E60", Offset = "0x4002E60", VA = "0x4002E60", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004091")]
	[Address(RVA = "0x4002E70", Offset = "0x4002E70", VA = "0x4002E70", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004092")]
	[Address(RVA = "0x4003D30", Offset = "0x4003D30", VA = "0x4003D30", Slot = "35")]
	protected virtual List<string> GetItems(string category)
	{
		return null;
	}

	[Token(Token = "0x6004093")]
	[Address(RVA = "0x4004010", Offset = "0x4004010", VA = "0x4004010")]
	protected List<string> GetItemsNoVariants(List<string> items)
	{
		return null;
	}

	[Token(Token = "0x6004094")]
	[Address(RVA = "0x40030D0", Offset = "0x40030D0", VA = "0x40030D0")]
	protected List<string> Filter(List<string> original, string search)
	{
		return null;
	}

	[Token(Token = "0x6004095")]
	[Address(RVA = "0x4003410", Offset = "0x4003410", VA = "0x4003410")]
	protected void CreateRow(List<string> items)
	{
	}

	[Token(Token = "0x6004096")]
	[Address(RVA = "0x4004360", Offset = "0x4004360", VA = "0x4004360", Slot = "36")]
	protected virtual string GetPreviewName(string item)
	{
		return null;
	}

	[Token(Token = "0x6004097")]
	[Address(RVA = "0x4004470", Offset = "0x4004470", VA = "0x4004470", Slot = "37")]
	protected virtual void OnSelectObject(string name)
	{
	}

	[Token(Token = "0x6004098")]
	[Address(RVA = "0x4004B60", Offset = "0x4004B60", VA = "0x4004B60")]
	public MapEditorAddObjectPanel()
	{
	}
}
