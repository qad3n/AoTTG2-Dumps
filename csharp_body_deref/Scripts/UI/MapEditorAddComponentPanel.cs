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

[Token(Token = "0x200080F")]
internal class MapEditorAddComponentPanel : CategoryPanel
{
	[Token(Token = "0x400286A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected GameObject _noItemsLabel;

	[Token(Token = "0x400286B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected List<GameObject> _itemButtons;

	[Token(Token = "0x17000E3E")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004DBB")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E3F")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004DBC")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E40")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004DBD")]
		[Address(RVA = "0x8680A0", Offset = "0x8666A0", VA = "0x1808680A0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E41")]
	protected virtual float ItemButtonWidth
	{
		[Token(Token = "0x6004DBE")]
		[Address(RVA = "0x21C2520", Offset = "0x21C0B20", VA = "0x1821C2520", Slot = "35")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E42")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004DBF")]
		[Address(RVA = "0x18B56E0", Offset = "0x18B3CE0", VA = "0x1818B56E0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E43")]
	protected virtual int ItemFontSize
	{
		[Token(Token = "0x6004DC0")]
		[Address(RVA = "0x196D5E0", Offset = "0x196BBE0", VA = "0x18196D5E0", Slot = "36")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E44")]
	protected virtual float DeleteButtonSize
	{
		[Token(Token = "0x6004DC1")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E45")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004DC2")]
		[Address(RVA = "0x2290CA0", Offset = "0x228F2A0", VA = "0x182290CA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004DC3")]
	[Address(RVA = "0x22909D0", Offset = "0x228EFD0", VA = "0x1822909D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004DC4")]
	[Address(RVA = "0x2290370", Offset = "0x228E970", VA = "0x182290370", Slot = "38")]
	protected virtual List<string> GetItems(string category)
	{
		return null;
	}

	[Token(Token = "0x6004DC5")]
	[Address(RVA = "0x2290170", Offset = "0x228E770", VA = "0x182290170")]
	protected List<string> Filter(List<string> original, string search)
	{
		return null;
	}

	[Token(Token = "0x6004DC6")]
	[Address(RVA = "0x228FAE0", Offset = "0x228E0E0", VA = "0x18228FAE0")]
	protected void CreateList(List<string> items)
	{
	}

	[Token(Token = "0x6004DC7")]
	[Address(RVA = "0x2290940", Offset = "0x228EF40", VA = "0x182290940")]
	private void OnItemClick(string name)
	{
	}

	[Token(Token = "0x6004DC8")]
	[Address(RVA = "0x2290C20", Offset = "0x228F220", VA = "0x182290C20")]
	public MapEditorAddComponentPanel()
	{
	}
}
