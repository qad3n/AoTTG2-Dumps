// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorContextMenu
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorContextMenu.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000820")]
internal class MapEditorContextMenu
{
	[Token(Token = "0x2000821")]
	internal struct Item
	{
		[Token(Token = "0x40028C7")]
		[FieldOffset(Offset = "0x0")]
		public string Label;

		[Token(Token = "0x40028C8")]
		[FieldOffset(Offset = "0x8")]
		public Action Action;

		[Token(Token = "0x40028C9")]
		[FieldOffset(Offset = "0x10")]
		public bool Enabled;

		[Token(Token = "0x40028CA")]
		[FieldOffset(Offset = "0x11")]
		public bool SeparatorBefore;

		[Token(Token = "0x6004E8A")]
		[Address(RVA = "0x229D6A0", Offset = "0x229BCA0", VA = "0x18229D6A0")]
		public Item(string label, Action action, bool enabled = true, bool separatorBefore = false)
		{
		}
	}

	[Token(Token = "0x40028C2")]
	[FieldOffset(Offset = "0x10")]
	private readonly Transform _parent;

	[Token(Token = "0x40028C3")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _themePanel;

	[Token(Token = "0x40028C4")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _root;

	[Token(Token = "0x40028C5")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _menuRect;

	[Token(Token = "0x40028C6")]
	[FieldOffset(Offset = "0x30")]
	private VerticalLayoutGroup _layout;

	[Token(Token = "0x17000E71")]
	public bool IsOpen
	{
		[Token(Token = "0x6004E80")]
		[Address(RVA = "0x22AAF80", Offset = "0x22A9580", VA = "0x1822AAF80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E72")]
	public RectTransform MenuRect
	{
		[Token(Token = "0x6004E81")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004E82")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	public MapEditorContextMenu(Transform parent, string themePanel)
	{
	}

	[Token(Token = "0x6004E83")]
	[Address(RVA = "0x22AA960", Offset = "0x22A8F60", VA = "0x1822AA960")]
	public void Show(PointerEventData eventData, IList<Item> items)
	{
	}

	[Token(Token = "0x6004E84")]
	[Address(RVA = "0x22AA8E0", Offset = "0x22A8EE0", VA = "0x1822AA8E0")]
	public void Hide()
	{
	}

	[Token(Token = "0x6004E85")]
	[Address(RVA = "0x22A9F50", Offset = "0x22A8550", VA = "0x1822A9F50")]
	public void Destroy()
	{
	}

	[Token(Token = "0x6004E86")]
	[Address(RVA = "0x22A9FE0", Offset = "0x22A85E0", VA = "0x1822A9FE0")]
	private void EnsureCreated()
	{
	}

	[Token(Token = "0x6004E87")]
	[Address(RVA = "0x22A9670", Offset = "0x22A7C70", VA = "0x1822A9670")]
	private void ClearItems()
	{
	}

	[Token(Token = "0x6004E88")]
	[Address(RVA = "0x22A9730", Offset = "0x22A7D30", VA = "0x1822A9730")]
	private void CreateButton(Item item)
	{
	}

	[Token(Token = "0x6004E89")]
	[Address(RVA = "0x22A9B20", Offset = "0x22A8120", VA = "0x1822A9B20")]
	private void CreateSeparator()
	{
	}
}
