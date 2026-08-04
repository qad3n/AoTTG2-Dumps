// ==================== AoTTG2 cross-reference ====================
// Type: UI.SelectListPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/SelectListPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/SelectListPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x2000585")]
internal class SelectListPopup : PromptPopup
{
	[Token(Token = "0x2000586")]
	public class ItemCategory
	{
		[Token(Token = "0x4001B60")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string Name;

		[Token(Token = "0x4001B61")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public List<string> Items;

		[Token(Token = "0x6003985")]
		[Address(RVA = "0x4255260", Offset = "0x4255260", VA = "0x4255260")]
		public ItemCategory(string name, List<string> items)
		{
		}
	}

	[Token(Token = "0x4001B4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected GameObject _noItemsLabel;

	[Token(Token = "0x4001B4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<GameObject> _itemButtons;

	[Token(Token = "0x4001B4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected List<GameObject> _categoryButtons;

	[Token(Token = "0x4001B4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected GameObject _categoryButtonContainer;

	[Token(Token = "0x4001B4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected bool _cachedTopBarAlignment;

	[Token(Token = "0x4001B50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	protected TextAnchor _defaultTopBarAlignment;

	[Token(Token = "0x4001B51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected List<GameObject> _saveElements;

	[Token(Token = "0x4001B52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	protected InputSettingElement _inputElement;

	[Token(Token = "0x4001B53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	protected List<string> _items;

	[Token(Token = "0x4001B54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	protected UnityAction _onLoad;

	[Token(Token = "0x4001B55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	protected UnityAction _onSave;

	[Token(Token = "0x4001B56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected UnityAction _onDelete;

	[Token(Token = "0x4001B57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	protected bool _isSave;

	[Token(Token = "0x4001B58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x101")]
	protected bool _delete;

	[Token(Token = "0x4001B59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	protected List<string> _disallowedDelete;

	[Token(Token = "0x4001B5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	protected List<string> _disallowedSave;

	[Token(Token = "0x4001B5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	protected List<ItemCategory> _categorizedItems;

	[Token(Token = "0x4001B5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	protected string _activeCategoryName;

	[Token(Token = "0x4001B5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	protected bool _useCategories;

	[Token(Token = "0x4001B5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	protected string _title;

	[Token(Token = "0x4001B5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	public StringSetting FinishSetting;

	[Token(Token = "0x17000AE8")]
	protected override string ThemePanel
	{
		[Token(Token = "0x600395D")]
		[Address(RVA = "0x4251940", Offset = "0x4251940", VA = "0x4251940", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AE9")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600395E")]
		[Address(RVA = "0x4251970", Offset = "0x4251970", VA = "0x4251970", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AEA")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600395F")]
		[Address(RVA = "0x4251980", Offset = "0x4251980", VA = "0x4251980", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AEB")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003960")]
		[Address(RVA = "0x4251990", Offset = "0x4251990", VA = "0x4251990", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AEC")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6003961")]
		[Address(RVA = "0x42519A0", Offset = "0x42519A0", VA = "0x42519A0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AED")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003962")]
		[Address(RVA = "0x42519B0", Offset = "0x42519B0", VA = "0x42519B0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AEE")]
	protected override float Width
	{
		[Token(Token = "0x6003963")]
		[Address(RVA = "0x42519C0", Offset = "0x42519C0", VA = "0x42519C0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AEF")]
	protected override float Height
	{
		[Token(Token = "0x6003964")]
		[Address(RVA = "0x42519D0", Offset = "0x42519D0", VA = "0x42519D0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AF0")]
	protected virtual float ItemButtonWidth
	{
		[Token(Token = "0x6003965")]
		[Address(RVA = "0x42519E0", Offset = "0x42519E0", VA = "0x42519E0", Slot = "59")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AF1")]
	protected virtual int ItemFontSize
	{
		[Token(Token = "0x6003966")]
		[Address(RVA = "0x42519F0", Offset = "0x42519F0", VA = "0x42519F0", Slot = "60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AF2")]
	protected virtual float DeleteButtonSize
	{
		[Token(Token = "0x6003967")]
		[Address(RVA = "0x4251A00", Offset = "0x4251A00", VA = "0x4251A00", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003968")]
	[Address(RVA = "0x4251A10", Offset = "0x4251A10", VA = "0x4251A10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003969")]
	[Address(RVA = "0x4251ED0", Offset = "0x4251ED0", VA = "0x4251ED0")]
	private void OnSearchChanged()
	{
	}

	[Token(Token = "0x600396A")]
	[Address(RVA = "0x4252300", Offset = "0x4252300", VA = "0x4252300")]
	private void OnSearchEndEdit()
	{
	}

	[Token(Token = "0x600396B")]
	[Address(RVA = "0x4252830", Offset = "0x4252830", VA = "0x4252830")]
	public void ShowLoad(List<string> items, [Optional][DefaultParameterValue("")] string title, [Optional] UnityAction onLoad, [Optional] UnityAction onDelete, [Optional] List<string> disallowedDelete)
	{
	}

	[Token(Token = "0x600396C")]
	[Address(RVA = "0x4252E80", Offset = "0x4252E80", VA = "0x4252E80")]
	public void ShowLoadCategorized(List<ItemCategory> categories, [Optional][DefaultParameterValue("")] string title, [Optional] UnityAction onLoad)
	{
	}

	[Token(Token = "0x600396D")]
	[Address(RVA = "0x42538F0", Offset = "0x42538F0", VA = "0x42538F0")]
	public void ShowSave(List<string> items, [Optional][DefaultParameterValue("")] string title, [Optional][DefaultParameterValue("")] string initial, [Optional] UnityAction onSave, [Optional] List<string> disallowedSave, [Optional] UnityAction onDelete, [Optional] List<string> disallowedDelete)
	{
	}

	[Token(Token = "0x600396E")]
	[Address(RVA = "0x4252B80", Offset = "0x4252B80", VA = "0x4252B80")]
	private void ToggleSaveElements()
	{
	}

	[Token(Token = "0x600396F")]
	[Address(RVA = "0x4251EE0", Offset = "0x4251EE0", VA = "0x4251EE0")]
	public void RefreshList()
	{
	}

	[Token(Token = "0x6003970")]
	[Address(RVA = "0x4253C90", Offset = "0x4253C90", VA = "0x4253C90")]
	protected void CreateItemButton(string item)
	{
	}

	[Token(Token = "0x6003971")]
	[Address(RVA = "0x4253AE0", Offset = "0x4253AE0", VA = "0x4253AE0")]
	protected void ClearListButtons()
	{
	}

	[Token(Token = "0x6003972")]
	[Address(RVA = "0x4252490", Offset = "0x4252490", VA = "0x4252490")]
	protected List<string> GetActiveCategoryItems()
	{
		return null;
	}

	[Token(Token = "0x6003973")]
	[Address(RVA = "0x4253390", Offset = "0x4253390", VA = "0x4253390")]
	protected void SetupCategoryTabs()
	{
	}

	[Token(Token = "0x6003974")]
	[Address(RVA = "0x42529F0", Offset = "0x42529F0", VA = "0x42529F0")]
	protected void SetCategoryTabsEnabled(bool enabled)
	{
	}

	[Token(Token = "0x6003975")]
	[Address(RVA = "0x42544B0", Offset = "0x42544B0", VA = "0x42544B0")]
	protected void ClearCategoryTabs()
	{
	}

	[Token(Token = "0x6003976")]
	[Address(RVA = "0x4254930", Offset = "0x4254930", VA = "0x4254930")]
	protected void OnCategoryTabClick(string categoryName)
	{
	}

	[Token(Token = "0x6003977")]
	[Address(RVA = "0x4254670", Offset = "0x4254670", VA = "0x4254670")]
	protected void SyncCategoryTabs()
	{
	}

	[Token(Token = "0x6003978")]
	[Address(RVA = "0x42525B0", Offset = "0x42525B0", VA = "0x42525B0")]
	private void OnItemClick(string name)
	{
	}

	[Token(Token = "0x6003979")]
	[Address(RVA = "0x4254970", Offset = "0x4254970", VA = "0x4254970")]
	private void OnConfirmOverwrite(string name)
	{
	}

	[Token(Token = "0x600397A")]
	[Address(RVA = "0x42549F0", Offset = "0x42549F0", VA = "0x42549F0")]
	private void OnConfirmDelete(string name)
	{
	}

	[Token(Token = "0x600397B")]
	[Address(RVA = "0x4254AC0", Offset = "0x4254AC0", VA = "0x4254AC0")]
	private void OnDeleteClick(string name)
	{
	}

	[Token(Token = "0x600397C")]
	[Address(RVA = "0x4254BF0", Offset = "0x4254BF0", VA = "0x4254BF0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600397D")]
	[Address(RVA = "0x4254F00", Offset = "0x4254F00", VA = "0x4254F00")]
	public SelectListPopup()
	{
	}
}
