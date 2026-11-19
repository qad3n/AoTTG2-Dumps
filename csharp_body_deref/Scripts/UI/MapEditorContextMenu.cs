// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorContextMenu
// Update status: CHANGED in this game update
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

[Token(Token = "0x200089E")]
internal class MapEditorContextMenu
{
	[Token(Token = "0x200089F")]
	internal struct Item
	{
		[Token(Token = "0x4002B80")]
		[FieldOffset(Offset = "0x0")]
		public string Label;

		[Token(Token = "0x4002B81")]
		[FieldOffset(Offset = "0x8")]
		public Action Action;

		[Token(Token = "0x4002B82")]
		[FieldOffset(Offset = "0x10")]
		public bool Enabled;

		[Token(Token = "0x4002B83")]
		[FieldOffset(Offset = "0x11")]
		public bool SeparatorBefore;

		[Token(Token = "0x6005227")]
		[Address(RVA = "0x5C6EA30", Offset = "0x5C6DA30", VA = "0x5C6EA30")]
		public Item(string label, Action action, bool enabled = true, bool separatorBefore = false)
		{
		}
	}

	[Token(Token = "0x4002B7B")]
	[FieldOffset(Offset = "0x10")]
	private readonly Transform _parent;

	[Token(Token = "0x4002B7C")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _themePanel;

	[Token(Token = "0x4002B7D")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _root;

	[Token(Token = "0x4002B7E")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _menuRect;

	[Token(Token = "0x4002B7F")]
	[FieldOffset(Offset = "0x30")]
	private VerticalLayoutGroup _layout;

	[Token(Token = "0x17000E72")]
	public bool IsOpen
	{
		[Token(Token = "0x600521C")]
		[Address(RVA = "0x5C6CE80", Offset = "0x5C6BE80", VA = "0x5C6CE80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E73")]
	public RectTransform MenuRect
	{
		[Token(Token = "0x600521D")]
		[Address(RVA = "0x5C6CF00", Offset = "0x5C6BF00", VA = "0x5C6CF00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600521E")]
	[Address(RVA = "0x5C6CF10", Offset = "0x5C6BF10", VA = "0x5C6CF10")]
	public MapEditorContextMenu(Transform parent, string themePanel)
	{
	}

	[Token(Token = "0x600521F")]
	[Address(RVA = "0x5C6CF50", Offset = "0x5C6BF50", VA = "0x5C6CF50")]
	public void Show(PointerEventData eventData, IList<Item> items)
	{
	}

	[Token(Token = "0x6005220")]
	[Address(RVA = "0x5C6E910", Offset = "0x5C6D910", VA = "0x5C6E910")]
	public void Hide()
	{
	}

	[Token(Token = "0x6005221")]
	[Address(RVA = "0x5C6E990", Offset = "0x5C6D990", VA = "0x5C6E990")]
	public void Destroy()
	{
	}

	[Token(Token = "0x6005222")]
	[Address(RVA = "0x5C6D620", Offset = "0x5C6C620", VA = "0x5C6D620")]
	private void EnsureCreated()
	{
	}

	[Token(Token = "0x6005223")]
	[Address(RVA = "0x5C6DF80", Offset = "0x5C6CF80", VA = "0x5C6DF80")]
	private void ClearItems()
	{
	}

	[Token(Token = "0x6005224")]
	[Address(RVA = "0x5C6E480", Offset = "0x5C6D480", VA = "0x5C6E480")]
	private void CreateButton(Item item)
	{
	}

	[Token(Token = "0x6005225")]
	[Address(RVA = "0x5C6EA20", Offset = "0x5C6DA20", VA = "0x5C6EA20")]
	private static Color WithAlpha(Color color, float alpha)
	{
		return default(Color);
	}

	[Token(Token = "0x6005226")]
	[Address(RVA = "0x5C6E040", Offset = "0x5C6D040", VA = "0x5C6E040")]
	private void CreateSeparator()
	{
	}
}
