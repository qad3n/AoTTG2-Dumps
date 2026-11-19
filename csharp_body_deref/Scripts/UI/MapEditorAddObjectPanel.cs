// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorAddObjectPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorAddObjectPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddObjectPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000891")]
internal class MapEditorAddObjectPanel : CategoryPanel
{
	[Token(Token = "0x4002B2D")]
	protected const int Columns = 8;

	[Token(Token = "0x17000E4E")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600517A")]
		[Address(RVA = "0x5C5E4F0", Offset = "0x5C5D4F0", VA = "0x5C5E4F0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E4F")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600517B")]
		[Address(RVA = "0x5C5E500", Offset = "0x5C5D500", VA = "0x5C5E500", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E50")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600517C")]
		[Address(RVA = "0x5C5E510", Offset = "0x5C5D510", VA = "0x5C5E510", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E51")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600517D")]
		[Address(RVA = "0x5C5E520", Offset = "0x5C5D520", VA = "0x5C5E520", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600517E")]
	[Address(RVA = "0x5C5E530", Offset = "0x5C5D530", VA = "0x5C5E530", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600517F")]
	[Address(RVA = "0x5C5F160", Offset = "0x5C5E160", VA = "0x5C5F160", Slot = "35")]
	protected virtual List<string> GetItems(string category)
	{
		return null;
	}

	[Token(Token = "0x6005180")]
	[Address(RVA = "0x5C5F440", Offset = "0x5C5E440", VA = "0x5C5F440")]
	protected List<string> GetItemsNoVariants(List<string> items)
	{
		return null;
	}

	[Token(Token = "0x6005181")]
	[Address(RVA = "0x5C5E790", Offset = "0x5C5D790", VA = "0x5C5E790")]
	protected List<string> Filter(List<string> original, string search)
	{
		return null;
	}

	[Token(Token = "0x6005182")]
	[Address(RVA = "0x5C5EA70", Offset = "0x5C5DA70", VA = "0x5C5EA70")]
	protected void CreateRow(List<string> items)
	{
	}

	[Token(Token = "0x6005183")]
	[Address(RVA = "0x5C5F730", Offset = "0x5C5E730", VA = "0x5C5F730", Slot = "36")]
	protected virtual string GetPreviewName(string item)
	{
		return null;
	}

	[Token(Token = "0x6005184")]
	[Address(RVA = "0x5C5F840", Offset = "0x5C5E840", VA = "0x5C5F840", Slot = "37")]
	protected virtual void OnSelectObject(string name)
	{
	}

	[Token(Token = "0x6005185")]
	[Address(RVA = "0x5C5FFB0", Offset = "0x5C5EFB0", VA = "0x5C5FFB0")]
	public MapEditorAddObjectPanel()
	{
	}
}
