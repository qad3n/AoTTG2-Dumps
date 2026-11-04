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

[Token(Token = "0x200081A")]
internal class MapEditorAddVariantPopup : BasePopup
{
	[Token(Token = "0x4002881")]
	protected const int Columns = 8;

	[Token(Token = "0x4002882")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected List<GameObject> _rows;

	[Token(Token = "0x17000E59")]
	protected override string Title
	{
		[Token(Token = "0x6004E09")]
		[Address(RVA = "0x22A17C0", Offset = "0x229FDC0", VA = "0x1822A17C0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E5A")]
	protected override float Width
	{
		[Token(Token = "0x6004E0A")]
		[Address(RVA = "0x22A0680", Offset = "0x229EC80", VA = "0x1822A0680", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E5B")]
	protected override float Height
	{
		[Token(Token = "0x6004E0B")]
		[Address(RVA = "0x22A0670", Offset = "0x229EC70", VA = "0x1822A0670", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E5C")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004E0C")]
		[Address(RVA = "0x21C3380", Offset = "0x21C1980", VA = "0x1821C3380", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E5D")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004E0D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E5E")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004E0E")]
		[Address(RVA = "0x21C0C80", Offset = "0x21BF280", VA = "0x1821C0C80", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E5F")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004E0F")]
		[Address(RVA = "0x1B9BE70", Offset = "0x1B9A470", VA = "0x181B9BE70", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E60")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E10")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004E11")]
	[Address(RVA = "0x22A10B0", Offset = "0x229F6B0", VA = "0x1822A10B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004E12")]
	[Address(RVA = "0x22A0E40", Offset = "0x229F440", VA = "0x1822A0E40")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004E13")]
	[Address(RVA = "0x22A11F0", Offset = "0x229F7F0", VA = "0x1822A11F0")]
	public void Show(string prefab)
	{
	}

	[Token(Token = "0x6004E14")]
	[Address(RVA = "0x22A0690", Offset = "0x229EC90", VA = "0x1822A0690")]
	protected void CreateRow(List<string> items)
	{
	}

	[Token(Token = "0x6004E15")]
	[Address(RVA = "0x22A0D40", Offset = "0x229F340", VA = "0x1822A0D40", Slot = "62")]
	protected virtual string GetPreviewName(string item)
	{
		return null;
	}

	[Token(Token = "0x6004E16")]
	[Address(RVA = "0x22A0F10", Offset = "0x229F510", VA = "0x1822A0F10", Slot = "63")]
	protected virtual void OnSelectObject(string name)
	{
	}

	[Token(Token = "0x6004E17")]
	[Address(RVA = "0x22A1740", Offset = "0x229FD40", VA = "0x1822A1740")]
	public MapEditorAddVariantPopup()
	{
	}
}
