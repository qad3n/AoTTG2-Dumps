// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorAddComponentPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorAddComponentPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddComponentPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200088D")]
internal class MapEditorAddComponentPanel : CategoryPanel
{
	[Token(Token = "0x4002B23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected GameObject _noItemsLabel;

	[Token(Token = "0x4002B24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected List<GameObject> _itemButtons;

	[Token(Token = "0x17000E3F")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005156")]
		[Address(RVA = "0x5C5C2E0", Offset = "0x5C5B2E0", VA = "0x5C5C2E0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E40")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6005157")]
		[Address(RVA = "0x5C5C2F0", Offset = "0x5C5B2F0", VA = "0x5C5C2F0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E41")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005158")]
		[Address(RVA = "0x5C5C300", Offset = "0x5C5B300", VA = "0x5C5C300", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E42")]
	protected virtual float ItemButtonWidth
	{
		[Token(Token = "0x6005159")]
		[Address(RVA = "0x5C5C310", Offset = "0x5C5B310", VA = "0x5C5C310", Slot = "35")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E43")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600515A")]
		[Address(RVA = "0x5C5C320", Offset = "0x5C5B320", VA = "0x5C5C320", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E44")]
	protected virtual int ItemFontSize
	{
		[Token(Token = "0x600515B")]
		[Address(RVA = "0x5C5C330", Offset = "0x5C5B330", VA = "0x5C5C330", Slot = "36")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E45")]
	protected virtual float DeleteButtonSize
	{
		[Token(Token = "0x600515C")]
		[Address(RVA = "0x5C5C340", Offset = "0x5C5B340", VA = "0x5C5C340", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E46")]
	protected override string ThemePanel
	{
		[Token(Token = "0x600515D")]
		[Address(RVA = "0x5C5C350", Offset = "0x5C5B350", VA = "0x5C5C350", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600515E")]
	[Address(RVA = "0x5C5C380", Offset = "0x5C5B380", VA = "0x5C5C380", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600515F")]
	[Address(RVA = "0x5C5D0A0", Offset = "0x5C5C0A0", VA = "0x5C5D0A0", Slot = "38")]
	protected virtual List<string> GetItems(string category)
	{
		return null;
	}

	[Token(Token = "0x6005160")]
	[Address(RVA = "0x5C5C610", Offset = "0x5C5B610", VA = "0x5C5C610")]
	protected List<string> Filter(List<string> original, string search)
	{
		return null;
	}

	[Token(Token = "0x6005161")]
	[Address(RVA = "0x5C5C8F0", Offset = "0x5C5B8F0", VA = "0x5C5C8F0")]
	protected void CreateList(List<string> items)
	{
	}

	[Token(Token = "0x6005162")]
	[Address(RVA = "0x5C5D820", Offset = "0x5C5C820", VA = "0x5C5D820")]
	private void OnItemClick(string name)
	{
	}

	[Token(Token = "0x6005163")]
	[Address(RVA = "0x5C5D980", Offset = "0x5C5C980", VA = "0x5C5D980")]
	public MapEditorAddComponentPanel()
	{
	}
}
