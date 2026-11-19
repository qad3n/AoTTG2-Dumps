// ==================== AoTTG2 cross-reference ====================
// Type: UI.SelectListPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/SelectListPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/SelectListPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x20007A0")]
internal class SelectListPopup : PromptPopup
{
	[Token(Token = "0x20007A1")]
	public class ItemCategory
	{
		[Token(Token = "0x4002693")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string Name;

		[Token(Token = "0x4002694")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public List<string> Items;

		[Token(Token = "0x60049D5")]
		[Address(RVA = "0x5BC7400", Offset = "0x5BC6400", VA = "0x5BC7400")]
		public ItemCategory(string name, List<string> items)
		{
		}
	}

	[Token(Token = "0x400267D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected GameObject _noItemsLabel;

	[Token(Token = "0x400267E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<GameObject> _itemButtons;

	[Token(Token = "0x400267F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected List<GameObject> _categoryButtons;

	[Token(Token = "0x4002680")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected GameObject _categoryButtonContainer;

	[Token(Token = "0x4002681")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected bool _cachedTopBarAlignment;

	[Token(Token = "0x4002682")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	protected TextAnchor _defaultTopBarAlignment;

	[Token(Token = "0x4002683")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected List<GameObject> _saveElements;

	[Token(Token = "0x4002684")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	protected InputSettingElement _inputElement;

	[Token(Token = "0x4002685")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	protected List<string> _items;

	[Token(Token = "0x4002686")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	protected UnityAction _onLoad;

	[Token(Token = "0x4002687")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	protected UnityAction _onSave;

	[Token(Token = "0x4002688")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected UnityAction _onDelete;

	[Token(Token = "0x4002689")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	protected bool _isSave;

	[Token(Token = "0x400268A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x101")]
	protected bool _delete;

	[Token(Token = "0x400268B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	protected List<string> _disallowedDelete;

	[Token(Token = "0x400268C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	protected List<string> _disallowedSave;

	[Token(Token = "0x400268D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	protected Func<string, bool> _isValidName;

	[Token(Token = "0x400268E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	protected List<ItemCategory> _categorizedItems;

	[Token(Token = "0x400268F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	protected string _activeCategoryName;

	[Token(Token = "0x4002690")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	protected bool _useCategories;

	[Token(Token = "0x4002691")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	protected string _title;

	[Token(Token = "0x4002692")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	public StringSetting FinishSetting;

	[Token(Token = "0x17000CC3")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60049AD")]
		[Address(RVA = "0x5BC3B20", Offset = "0x5BC2B20", VA = "0x5BC3B20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CC4")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60049AE")]
		[Address(RVA = "0x5BC3B50", Offset = "0x5BC2B50", VA = "0x5BC3B50", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CC5")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60049AF")]
		[Address(RVA = "0x5BC3B60", Offset = "0x5BC2B60", VA = "0x5BC3B60", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CC6")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60049B0")]
		[Address(RVA = "0x5BC3B70", Offset = "0x5BC2B70", VA = "0x5BC3B70", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CC7")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60049B1")]
		[Address(RVA = "0x5BC3B80", Offset = "0x5BC2B80", VA = "0x5BC3B80", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CC8")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60049B2")]
		[Address(RVA = "0x5BC3B90", Offset = "0x5BC2B90", VA = "0x5BC3B90", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CC9")]
	protected override float Width
	{
		[Token(Token = "0x60049B3")]
		[Address(RVA = "0x5BC3BA0", Offset = "0x5BC2BA0", VA = "0x5BC3BA0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CCA")]
	protected override float Height
	{
		[Token(Token = "0x60049B4")]
		[Address(RVA = "0x5BC3BB0", Offset = "0x5BC2BB0", VA = "0x5BC3BB0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CCB")]
	protected virtual float ItemButtonWidth
	{
		[Token(Token = "0x60049B5")]
		[Address(RVA = "0x5BC3BC0", Offset = "0x5BC2BC0", VA = "0x5BC3BC0", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CCC")]
	protected virtual int ItemFontSize
	{
		[Token(Token = "0x60049B6")]
		[Address(RVA = "0x5BC3BD0", Offset = "0x5BC2BD0", VA = "0x5BC3BD0", Slot = "63")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CCD")]
	protected virtual float DeleteButtonSize
	{
		[Token(Token = "0x60049B7")]
		[Address(RVA = "0x5BC3BE0", Offset = "0x5BC2BE0", VA = "0x5BC3BE0", Slot = "64")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60049B8")]
	[Address(RVA = "0x5BC3BF0", Offset = "0x5BC2BF0", VA = "0x5BC3BF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60049B9")]
	[Address(RVA = "0x5BC40E0", Offset = "0x5BC30E0", VA = "0x5BC40E0")]
	private void OnSearchChanged()
	{
	}

	[Token(Token = "0x60049BA")]
	[Address(RVA = "0x5BC44E0", Offset = "0x5BC34E0", VA = "0x5BC44E0")]
	private void OnSearchEndEdit()
	{
	}

	[Token(Token = "0x60049BB")]
	[Address(RVA = "0x5BC4A80", Offset = "0x5BC3A80", VA = "0x5BC4A80")]
	public void ShowLoad(List<string> items, [Optional][DefaultParameterValue("")] string title, [Optional] UnityAction onLoad, [Optional] UnityAction onDelete, [Optional] List<string> disallowedDelete)
	{
	}

	[Token(Token = "0x60049BC")]
	[Address(RVA = "0x5BC5080", Offset = "0x5BC4080", VA = "0x5BC5080")]
	public void ShowLoadCategorized(List<ItemCategory> categories, [Optional][DefaultParameterValue("")] string title, [Optional] UnityAction onLoad)
	{
	}

	[Token(Token = "0x60049BD")]
	[Address(RVA = "0x5BC5A70", Offset = "0x5BC4A70", VA = "0x5BC5A70")]
	public void ShowSave(List<string> items, [Optional][DefaultParameterValue("")] string title, [Optional][DefaultParameterValue("")] string initial, [Optional] UnityAction onSave, [Optional] List<string> disallowedSave, [Optional] UnityAction onDelete, [Optional] List<string> disallowedDelete, [Optional] Func<string, bool> isValidName)
	{
	}

	[Token(Token = "0x60049BE")]
	[Address(RVA = "0x5BC4DD0", Offset = "0x5BC3DD0", VA = "0x5BC4DD0")]
	private void ToggleSaveElements()
	{
	}

	[Token(Token = "0x60049BF")]
	[Address(RVA = "0x5BC40F0", Offset = "0x5BC30F0", VA = "0x5BC40F0")]
	public void RefreshList()
	{
	}

	[Token(Token = "0x60049C0")]
	[Address(RVA = "0x5BC5E20", Offset = "0x5BC4E20", VA = "0x5BC5E20")]
	protected void CreateItemButton(string item)
	{
	}

	[Token(Token = "0x60049C1")]
	[Address(RVA = "0x5BC5C80", Offset = "0x5BC4C80", VA = "0x5BC5C80")]
	protected void ClearListButtons()
	{
	}

	[Token(Token = "0x60049C2")]
	[Address(RVA = "0x5BC4670", Offset = "0x5BC3670", VA = "0x5BC4670")]
	protected List<string> GetActiveCategoryItems()
	{
		return null;
	}

	[Token(Token = "0x60049C3")]
	[Address(RVA = "0x5BC5570", Offset = "0x5BC4570", VA = "0x5BC5570")]
	protected void SetupCategoryTabs()
	{
	}

	[Token(Token = "0x60049C4")]
	[Address(RVA = "0x5BC4C40", Offset = "0x5BC3C40", VA = "0x5BC4C40")]
	protected void SetCategoryTabsEnabled(bool enabled)
	{
	}

	[Token(Token = "0x60049C5")]
	[Address(RVA = "0x5BC6560", Offset = "0x5BC5560", VA = "0x5BC6560")]
	protected void ClearCategoryTabs()
	{
	}

	[Token(Token = "0x60049C6")]
	[Address(RVA = "0x5BC6960", Offset = "0x5BC5960", VA = "0x5BC6960")]
	protected void OnCategoryTabClick(string categoryName)
	{
	}

	[Token(Token = "0x60049C7")]
	[Address(RVA = "0x5BC6710", Offset = "0x5BC5710", VA = "0x5BC6710")]
	protected void SyncCategoryTabs()
	{
	}

	[Token(Token = "0x60049C8")]
	[Address(RVA = "0x5BC4790", Offset = "0x5BC3790", VA = "0x5BC4790")]
	private void OnItemClick(string name)
	{
	}

	[Token(Token = "0x60049C9")]
	[Address(RVA = "0x5BC69A0", Offset = "0x5BC59A0", VA = "0x5BC69A0")]
	private void OnConfirmOverwrite(string name)
	{
	}

	[Token(Token = "0x60049CA")]
	[Address(RVA = "0x5BC6A20", Offset = "0x5BC5A20", VA = "0x5BC6A20")]
	private void OnConfirmDelete(string name)
	{
	}

	[Token(Token = "0x60049CB")]
	[Address(RVA = "0x5BC6AF0", Offset = "0x5BC5AF0", VA = "0x5BC6AF0")]
	private void OnDeleteClick(string name)
	{
	}

	[Token(Token = "0x60049CC")]
	[Address(RVA = "0x5BC6C40", Offset = "0x5BC5C40", VA = "0x5BC6C40")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60049CD")]
	[Address(RVA = "0x5BC70F0", Offset = "0x5BC60F0", VA = "0x5BC70F0")]
	public SelectListPopup()
	{
	}
}
