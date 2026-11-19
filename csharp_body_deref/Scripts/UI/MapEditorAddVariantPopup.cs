// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorAddVariantPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorAddVariantPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddVariantPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000898")]
internal class MapEditorAddVariantPopup : BasePopup
{
	[Token(Token = "0x4002B3A")]
	protected const int Columns = 8;

	[Token(Token = "0x4002B3B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected List<GameObject> _rows;

	[Token(Token = "0x17000E5A")]
	protected override string Title
	{
		[Token(Token = "0x60051A4")]
		[Address(RVA = "0x5C61550", Offset = "0x5C60550", VA = "0x5C61550", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E5B")]
	protected override float Width
	{
		[Token(Token = "0x60051A5")]
		[Address(RVA = "0x5C615F0", Offset = "0x5C605F0", VA = "0x5C615F0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E5C")]
	protected override float Height
	{
		[Token(Token = "0x60051A6")]
		[Address(RVA = "0x5C61600", Offset = "0x5C60600", VA = "0x5C61600", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E5D")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60051A7")]
		[Address(RVA = "0x5C61610", Offset = "0x5C60610", VA = "0x5C61610", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E5E")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60051A8")]
		[Address(RVA = "0x5C61620", Offset = "0x5C60620", VA = "0x5C61620", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E5F")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60051A9")]
		[Address(RVA = "0x5C61630", Offset = "0x5C60630", VA = "0x5C61630", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E60")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60051AA")]
		[Address(RVA = "0x5C61640", Offset = "0x5C60640", VA = "0x5C61640", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E61")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60051AB")]
		[Address(RVA = "0x5C61650", Offset = "0x5C60650", VA = "0x5C61650", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60051AC")]
	[Address(RVA = "0x5C61660", Offset = "0x5C60660", VA = "0x5C61660", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60051AD")]
	[Address(RVA = "0x5C61790", Offset = "0x5C60790", VA = "0x5C61790")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x60051AE")]
	[Address(RVA = "0x5C5FB10", Offset = "0x5C5EB10", VA = "0x5C5FB10")]
	public void Show(string prefab)
	{
	}

	[Token(Token = "0x60051AF")]
	[Address(RVA = "0x5C61850", Offset = "0x5C60850", VA = "0x5C61850")]
	protected void CreateRow(List<string> items)
	{
	}

	[Token(Token = "0x60051B0")]
	[Address(RVA = "0x5C61FE0", Offset = "0x5C60FE0", VA = "0x5C61FE0", Slot = "62")]
	protected virtual string GetPreviewName(string item)
	{
		return null;
	}

	[Token(Token = "0x60051B1")]
	[Address(RVA = "0x5C620F0", Offset = "0x5C610F0", VA = "0x5C620F0", Slot = "63")]
	protected virtual void OnSelectObject(string name)
	{
	}

	[Token(Token = "0x60051B2")]
	[Address(RVA = "0x5C62260", Offset = "0x5C61260", VA = "0x5C62260")]
	public MapEditorAddVariantPopup()
	{
	}
}
