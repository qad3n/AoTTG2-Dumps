using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x2000540")]
internal class SelectListPopup : PromptPopup
{
	[Token(Token = "0x2000541")]
	public class ItemCategory
	{
		[Token(Token = "0x4001A4D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string Name;

		[Token(Token = "0x4001A4E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public List<string> Items;

		[Token(Token = "0x6003776")]
		[Address(RVA = "0x3F2BA80", Offset = "0x3F2BA80", VA = "0x3F2BA80")]
		public ItemCategory(string name, List<string> items)
		{
		}
	}

	[Token(Token = "0x4001A38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected GameObject _noItemsLabel;

	[Token(Token = "0x4001A39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<GameObject> _itemButtons;

	[Token(Token = "0x4001A3A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected List<GameObject> _categoryButtons;

	[Token(Token = "0x4001A3B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected GameObject _categoryButtonContainer;

	[Token(Token = "0x4001A3C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected bool _cachedTopBarAlignment;

	[Token(Token = "0x4001A3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	protected TextAnchor _defaultTopBarAlignment;

	[Token(Token = "0x4001A3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected List<GameObject> _saveElements;

	[Token(Token = "0x4001A3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	protected InputSettingElement _inputElement;

	[Token(Token = "0x4001A40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	protected List<string> _items;

	[Token(Token = "0x4001A41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	protected UnityAction _onLoad;

	[Token(Token = "0x4001A42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	protected UnityAction _onSave;

	[Token(Token = "0x4001A43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected UnityAction _onDelete;

	[Token(Token = "0x4001A44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	protected bool _isSave;

	[Token(Token = "0x4001A45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x101")]
	protected bool _delete;

	[Token(Token = "0x4001A46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	protected List<string> _disallowedDelete;

	[Token(Token = "0x4001A47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	protected List<string> _disallowedSave;

	[Token(Token = "0x4001A48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	protected List<ItemCategory> _categorizedItems;

	[Token(Token = "0x4001A49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	protected string _activeCategoryName;

	[Token(Token = "0x4001A4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	protected bool _useCategories;

	[Token(Token = "0x4001A4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	protected string _title;

	[Token(Token = "0x4001A4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	public StringSetting FinishSetting;

	[Token(Token = "0x17000A7E")]
	protected override string ThemePanel
	{
		[Token(Token = "0x600374F")]
		[Address(RVA = "0x3F28190", Offset = "0x3F28190", VA = "0x3F28190", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A7F")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003750")]
		[Address(RVA = "0x3F281C0", Offset = "0x3F281C0", VA = "0x3F281C0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A80")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003751")]
		[Address(RVA = "0x3F281D0", Offset = "0x3F281D0", VA = "0x3F281D0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A81")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003752")]
		[Address(RVA = "0x3F281E0", Offset = "0x3F281E0", VA = "0x3F281E0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A82")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6003753")]
		[Address(RVA = "0x3F281F0", Offset = "0x3F281F0", VA = "0x3F281F0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A83")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003754")]
		[Address(RVA = "0x3F28200", Offset = "0x3F28200", VA = "0x3F28200", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A84")]
	protected override float Width
	{
		[Token(Token = "0x6003755")]
		[Address(RVA = "0x3F28210", Offset = "0x3F28210", VA = "0x3F28210", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A85")]
	protected override float Height
	{
		[Token(Token = "0x6003756")]
		[Address(RVA = "0x3F28220", Offset = "0x3F28220", VA = "0x3F28220", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A86")]
	protected virtual float ItemButtonWidth
	{
		[Token(Token = "0x6003757")]
		[Address(RVA = "0x3F28230", Offset = "0x3F28230", VA = "0x3F28230", Slot = "59")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A87")]
	protected virtual int ItemFontSize
	{
		[Token(Token = "0x6003758")]
		[Address(RVA = "0x3F28240", Offset = "0x3F28240", VA = "0x3F28240", Slot = "60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A88")]
	protected virtual float DeleteButtonSize
	{
		[Token(Token = "0x6003759")]
		[Address(RVA = "0x3F28250", Offset = "0x3F28250", VA = "0x3F28250", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600375A")]
	[Address(RVA = "0x3F28260", Offset = "0x3F28260", VA = "0x3F28260", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600375B")]
	[Address(RVA = "0x3F28720", Offset = "0x3F28720", VA = "0x3F28720")]
	private void OnSearchChanged()
	{
	}

	[Token(Token = "0x600375C")]
	[Address(RVA = "0x3F29050", Offset = "0x3F29050", VA = "0x3F29050")]
	public void ShowLoad(List<string> items, [Optional][DefaultParameterValue("")] string title, [Optional] UnityAction onLoad, [Optional] UnityAction onDelete, [Optional] List<string> disallowedDelete)
	{
	}

	[Token(Token = "0x600375D")]
	[Address(RVA = "0x3F296A0", Offset = "0x3F296A0", VA = "0x3F296A0")]
	public void ShowLoadCategorized(List<ItemCategory> categories, [Optional][DefaultParameterValue("")] string title, [Optional] UnityAction onLoad)
	{
	}

	[Token(Token = "0x600375E")]
	[Address(RVA = "0x3F2A110", Offset = "0x3F2A110", VA = "0x3F2A110")]
	public void ShowSave(List<string> items, [Optional][DefaultParameterValue("")] string title, [Optional][DefaultParameterValue("")] string initial, [Optional] UnityAction onSave, [Optional] List<string> disallowedSave, [Optional] UnityAction onDelete, [Optional] List<string> disallowedDelete)
	{
	}

	[Token(Token = "0x600375F")]
	[Address(RVA = "0x3F293A0", Offset = "0x3F293A0", VA = "0x3F293A0")]
	private void ToggleSaveElements()
	{
	}

	[Token(Token = "0x6003760")]
	[Address(RVA = "0x3F28890", Offset = "0x3F28890", VA = "0x3F28890")]
	public void RefreshList()
	{
	}

	[Token(Token = "0x6003761")]
	[Address(RVA = "0x3F2A4B0", Offset = "0x3F2A4B0", VA = "0x3F2A4B0")]
	protected void CreateItemButton(string item)
	{
	}

	[Token(Token = "0x6003762")]
	[Address(RVA = "0x3F2A300", Offset = "0x3F2A300", VA = "0x3F2A300")]
	protected void ClearListButtons()
	{
	}

	[Token(Token = "0x6003763")]
	[Address(RVA = "0x3F28CB0", Offset = "0x3F28CB0", VA = "0x3F28CB0")]
	protected List<string> GetActiveCategoryItems()
	{
		return null;
	}

	[Token(Token = "0x6003764")]
	[Address(RVA = "0x3F29BB0", Offset = "0x3F29BB0", VA = "0x3F29BB0")]
	protected void SetupCategoryTabs()
	{
	}

	[Token(Token = "0x6003765")]
	[Address(RVA = "0x3F29210", Offset = "0x3F29210", VA = "0x3F29210")]
	protected void SetCategoryTabsEnabled(bool enabled)
	{
	}

	[Token(Token = "0x6003766")]
	[Address(RVA = "0x3F2ACD0", Offset = "0x3F2ACD0", VA = "0x3F2ACD0")]
	protected void ClearCategoryTabs()
	{
	}

	[Token(Token = "0x6003767")]
	[Address(RVA = "0x3F2B150", Offset = "0x3F2B150", VA = "0x3F2B150")]
	protected void OnCategoryTabClick(string categoryName)
	{
	}

	[Token(Token = "0x6003768")]
	[Address(RVA = "0x3F2AE90", Offset = "0x3F2AE90", VA = "0x3F2AE90")]
	protected void SyncCategoryTabs()
	{
	}

	[Token(Token = "0x6003769")]
	[Address(RVA = "0x3F28DD0", Offset = "0x3F28DD0", VA = "0x3F28DD0")]
	private void OnItemClick(string name)
	{
	}

	[Token(Token = "0x600376A")]
	[Address(RVA = "0x3F2B190", Offset = "0x3F2B190", VA = "0x3F2B190")]
	private void OnConfirmOverwrite(string name)
	{
	}

	[Token(Token = "0x600376B")]
	[Address(RVA = "0x3F2B210", Offset = "0x3F2B210", VA = "0x3F2B210")]
	private void OnConfirmDelete(string name)
	{
	}

	[Token(Token = "0x600376C")]
	[Address(RVA = "0x3F2B2E0", Offset = "0x3F2B2E0", VA = "0x3F2B2E0")]
	private void OnDeleteClick(string name)
	{
	}

	[Token(Token = "0x600376D")]
	[Address(RVA = "0x3F2B410", Offset = "0x3F2B410", VA = "0x3F2B410")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600376E")]
	[Address(RVA = "0x3F2B720", Offset = "0x3F2B720", VA = "0x3F2B720")]
	public SelectListPopup()
	{
	}
}
