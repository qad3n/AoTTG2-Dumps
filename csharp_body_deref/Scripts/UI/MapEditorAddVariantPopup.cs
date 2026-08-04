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

[Token(Token = "0x20006BF")]
internal class MapEditorAddVariantPopup : BasePopup
{
	[Token(Token = "0x40020AD")]
	protected const int Columns = 8;

	[Token(Token = "0x40020AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected List<GameObject> _rows;

	[Token(Token = "0x17000D13")]
	protected override string Title
	{
		[Token(Token = "0x6004315")]
		[Address(RVA = "0x431A760", Offset = "0x431A760", VA = "0x431A760", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D14")]
	protected override float Width
	{
		[Token(Token = "0x6004316")]
		[Address(RVA = "0x431A790", Offset = "0x431A790", VA = "0x431A790", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D15")]
	protected override float Height
	{
		[Token(Token = "0x6004317")]
		[Address(RVA = "0x431A7A0", Offset = "0x431A7A0", VA = "0x431A7A0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D16")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004318")]
		[Address(RVA = "0x431A7B0", Offset = "0x431A7B0", VA = "0x431A7B0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D17")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004319")]
		[Address(RVA = "0x431A7C0", Offset = "0x431A7C0", VA = "0x431A7C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D18")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600431A")]
		[Address(RVA = "0x431A7D0", Offset = "0x431A7D0", VA = "0x431A7D0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D19")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600431B")]
		[Address(RVA = "0x431A7E0", Offset = "0x431A7E0", VA = "0x431A7E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D1A")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600431C")]
		[Address(RVA = "0x431A7F0", Offset = "0x431A7F0", VA = "0x431A7F0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600431D")]
	[Address(RVA = "0x431A800", Offset = "0x431A800", VA = "0x431A800", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600431E")]
	[Address(RVA = "0x431A930", Offset = "0x431A930", VA = "0x431A930")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x600431F")]
	[Address(RVA = "0x4318BB0", Offset = "0x4318BB0", VA = "0x4318BB0")]
	public void Show(string prefab)
	{
	}

	[Token(Token = "0x6004320")]
	[Address(RVA = "0x431A950", Offset = "0x431A950", VA = "0x431A950")]
	protected void CreateRow(List<string> items)
	{
	}

	[Token(Token = "0x6004321")]
	[Address(RVA = "0x431B340", Offset = "0x431B340", VA = "0x431B340", Slot = "59")]
	protected virtual string GetPreviewName(string item)
	{
		return null;
	}

	[Token(Token = "0x6004322")]
	[Address(RVA = "0x431B450", Offset = "0x431B450", VA = "0x431B450", Slot = "60")]
	protected virtual void OnSelectObject(string name)
	{
	}

	[Token(Token = "0x6004323")]
	[Address(RVA = "0x431B500", Offset = "0x431B500", VA = "0x431B500")]
	public MapEditorAddVariantPopup()
	{
	}
}
