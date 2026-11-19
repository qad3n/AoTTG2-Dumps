// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorMapObjectPickerPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorMapObjectPickerPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20008C3")]
internal class MapEditorMapObjectPickerPopup : BasePopup
{
	[Token(Token = "0x4002C4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly StringSetting _search;

	[Token(Token = "0x4002C50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x4002C51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Action<int> _onSelect;

	[Token(Token = "0x4002C52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Action<HashSet<int>> _onSelectMultiple;

	[Token(Token = "0x4002C53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private HashSet<int> _selectedIds;

	[Token(Token = "0x4002C54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private bool _multiple;

	[Token(Token = "0x4002C55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private GameObject _applyButton;

	[Token(Token = "0x17000E9C")]
	protected override string Title
	{
		[Token(Token = "0x600538B")]
		[Address(RVA = "0x5C940F0", Offset = "0x5C930F0", VA = "0x5C940F0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E9D")]
	protected override float Width
	{
		[Token(Token = "0x600538C")]
		[Address(RVA = "0x5C94560", Offset = "0x5C93560", VA = "0x5C94560", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E9E")]
	protected override float Height
	{
		[Token(Token = "0x600538D")]
		[Address(RVA = "0x5C94570", Offset = "0x5C93570", VA = "0x5C94570", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E9F")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600538E")]
		[Address(RVA = "0x5C94580", Offset = "0x5C93580", VA = "0x5C94580", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EA0")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600538F")]
		[Address(RVA = "0x5C94590", Offset = "0x5C93590", VA = "0x5C94590", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6005390")]
	[Address(RVA = "0x5C945A0", Offset = "0x5C935A0", VA = "0x5C945A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005391")]
	[Address(RVA = "0x5C93760", Offset = "0x5C92760", VA = "0x5C93760")]
	public void Show(Action<int> onSelect)
	{
	}

	[Token(Token = "0x6005392")]
	[Address(RVA = "0x5C93A10", Offset = "0x5C92A10", VA = "0x5C93A10")]
	public void Show(HashSet<int> selectedIds, Action<HashSet<int>> onSelect)
	{
	}

	[Token(Token = "0x6005393")]
	[Address(RVA = "0x5C949F0", Offset = "0x5C939F0", VA = "0x5C949F0")]
	private void PrepareAndShow()
	{
	}

	[Token(Token = "0x6005394")]
	[Address(RVA = "0x5C94AA0", Offset = "0x5C93AA0", VA = "0x5C94AA0")]
	private void RebuildResults()
	{
	}

	[Token(Token = "0x6005395")]
	[Address(RVA = "0x5C95470", Offset = "0x5C94470", VA = "0x5C95470")]
	private void Select(int id)
	{
	}

	[Token(Token = "0x6005396")]
	[Address(RVA = "0x5C95530", Offset = "0x5C94530", VA = "0x5C95530")]
	private void ApplySelection()
	{
	}

	[Token(Token = "0x6005397")]
	[Address(RVA = "0x5C955F0", Offset = "0x5C945F0", VA = "0x5C955F0")]
	public MapEditorMapObjectPickerPopup()
	{
	}
}
