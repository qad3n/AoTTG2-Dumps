// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorMapObjectPickerPopup
// Update status: NEW in this game update
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

[Token(Token = "0x2000845")]
internal class MapEditorMapObjectPickerPopup : BasePopup
{
	[Token(Token = "0x4002996")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly StringSetting _search;

	[Token(Token = "0x4002997")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x4002998")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Action<int> _onSelect;

	[Token(Token = "0x4002999")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Action<HashSet<int>> _onSelectMultiple;

	[Token(Token = "0x400299A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private HashSet<int> _selectedIds;

	[Token(Token = "0x400299B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private bool _multiple;

	[Token(Token = "0x400299C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private GameObject _applyButton;

	[Token(Token = "0x17000E9B")]
	protected override string Title
	{
		[Token(Token = "0x6004FEC")]
		[Address(RVA = "0x22CB800", Offset = "0x22C9E00", VA = "0x1822CB800", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E9C")]
	protected override float Width
	{
		[Token(Token = "0x6004FED")]
		[Address(RVA = "0x229AC50", Offset = "0x2299250", VA = "0x18229AC50", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E9D")]
	protected override float Height
	{
		[Token(Token = "0x6004FEE")]
		[Address(RVA = "0x21E4680", Offset = "0x21E2C80", VA = "0x1821E4680", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E9E")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004FEF")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E9F")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004FF0")]
		[Address(RVA = "0x2182A90", Offset = "0x2181090", VA = "0x182182A90", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004FF1")]
	[Address(RVA = "0x22CB350", Offset = "0x22C9950", VA = "0x1822CB350", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004FF2")]
	[Address(RVA = "0x22CB5E0", Offset = "0x22C9BE0", VA = "0x1822CB5E0")]
	public void Show(Action<int> onSelect)
	{
	}

	[Token(Token = "0x6004FF3")]
	[Address(RVA = "0x22CB630", Offset = "0x22C9C30", VA = "0x1822CB630")]
	public void Show(HashSet<int> selectedIds, Action<HashSet<int>> onSelect)
	{
	}

	[Token(Token = "0x6004FF4")]
	[Address(RVA = "0x22CAA00", Offset = "0x22C9000", VA = "0x1822CAA00")]
	private void PrepareAndShow()
	{
	}

	[Token(Token = "0x6004FF5")]
	[Address(RVA = "0x22CAAB0", Offset = "0x22C90B0", VA = "0x1822CAAB0")]
	private void RebuildResults()
	{
	}

	[Token(Token = "0x6004FF6")]
	[Address(RVA = "0x22CB280", Offset = "0x22C9880", VA = "0x1822CB280")]
	private void Select(int id)
	{
	}

	[Token(Token = "0x6004FF7")]
	[Address(RVA = "0x22CA940", Offset = "0x22C8F40", VA = "0x1822CA940")]
	private void ApplySelection()
	{
	}

	[Token(Token = "0x6004FF8")]
	[Address(RVA = "0x22CB720", Offset = "0x22C9D20", VA = "0x1822CB720")]
	public MapEditorMapObjectPickerPopup()
	{
	}
}
