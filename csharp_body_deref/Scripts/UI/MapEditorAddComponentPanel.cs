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

[Token(Token = "0x20006B4")]
internal class MapEditorAddComponentPanel : CategoryPanel
{
	[Token(Token = "0x4002096")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected GameObject _noItemsLabel;

	[Token(Token = "0x4002097")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected List<GameObject> _itemButtons;

	[Token(Token = "0x17000CF8")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60042C7")]
		[Address(RVA = "0x4314E20", Offset = "0x4314E20", VA = "0x4314E20", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CF9")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60042C8")]
		[Address(RVA = "0x4314E30", Offset = "0x4314E30", VA = "0x4314E30", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CFA")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60042C9")]
		[Address(RVA = "0x4314E40", Offset = "0x4314E40", VA = "0x4314E40", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CFB")]
	protected virtual float ItemButtonWidth
	{
		[Token(Token = "0x60042CA")]
		[Address(RVA = "0x4314E50", Offset = "0x4314E50", VA = "0x4314E50", Slot = "35")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CFC")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60042CB")]
		[Address(RVA = "0x4314E60", Offset = "0x4314E60", VA = "0x4314E60", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CFD")]
	protected virtual int ItemFontSize
	{
		[Token(Token = "0x60042CC")]
		[Address(RVA = "0x4314E70", Offset = "0x4314E70", VA = "0x4314E70", Slot = "36")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CFE")]
	protected virtual float DeleteButtonSize
	{
		[Token(Token = "0x60042CD")]
		[Address(RVA = "0x4314E80", Offset = "0x4314E80", VA = "0x4314E80", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CFF")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60042CE")]
		[Address(RVA = "0x4314E90", Offset = "0x4314E90", VA = "0x4314E90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60042CF")]
	[Address(RVA = "0x4314EC0", Offset = "0x4314EC0", VA = "0x4314EC0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60042D0")]
	[Address(RVA = "0x4315BF0", Offset = "0x4315BF0", VA = "0x4315BF0", Slot = "38")]
	protected virtual List<string> GetItems(string category)
	{
		return null;
	}

	[Token(Token = "0x60042D1")]
	[Address(RVA = "0x43150F0", Offset = "0x43150F0", VA = "0x43150F0")]
	protected List<string> Filter(List<string> original, string search)
	{
		return null;
	}

	[Token(Token = "0x60042D2")]
	[Address(RVA = "0x4315430", Offset = "0x4315430", VA = "0x4315430")]
	protected void CreateList(List<string> items)
	{
	}

	[Token(Token = "0x60042D3")]
	[Address(RVA = "0x4316610", Offset = "0x4316610", VA = "0x4316610")]
	private void OnItemClick(string name)
	{
	}

	[Token(Token = "0x60042D4")]
	[Address(RVA = "0x4316770", Offset = "0x4316770", VA = "0x4316770")]
	public MapEditorAddComponentPanel()
	{
	}
}
