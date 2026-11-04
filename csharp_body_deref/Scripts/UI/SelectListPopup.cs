// ==================== AoTTG2 cross-reference ====================
// Type: UI.SelectListPopup
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20006F7")]
internal class SelectListPopup : PromptPopup
{
	[Token(Token = "0x20006F8")]
	public class ItemCategory
	{
		[Token(Token = "0x4002318")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string Name;

		[Token(Token = "0x4002319")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public List<string> Items;

		[Token(Token = "0x60044B0")]
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		public ItemCategory(string name, List<string> items)
		{
		}
	}

	[Token(Token = "0x4002303")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected GameObject _noItemsLabel;

	[Token(Token = "0x4002304")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<GameObject> _itemButtons;

	[Token(Token = "0x4002305")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected List<GameObject> _categoryButtons;

	[Token(Token = "0x4002306")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected GameObject _categoryButtonContainer;

	[Token(Token = "0x4002307")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected bool _cachedTopBarAlignment;

	[Token(Token = "0x4002308")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	protected TextAnchor _defaultTopBarAlignment;

	[Token(Token = "0x4002309")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected List<GameObject> _saveElements;

	[Token(Token = "0x400230A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	protected InputSettingElement _inputElement;

	[Token(Token = "0x400230B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	protected List<string> _items;

	[Token(Token = "0x400230C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	protected UnityAction _onLoad;

	[Token(Token = "0x400230D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	protected UnityAction _onSave;

	[Token(Token = "0x400230E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected UnityAction _onDelete;

	[Token(Token = "0x400230F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	protected bool _isSave;

	[Token(Token = "0x4002310")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x101")]
	protected bool _delete;

	[Token(Token = "0x4002311")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	protected List<string> _disallowedDelete;

	[Token(Token = "0x4002312")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	protected List<string> _disallowedSave;

	[Token(Token = "0x4002313")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	protected List<ItemCategory> _categorizedItems;

	[Token(Token = "0x4002314")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	protected string _activeCategoryName;

	[Token(Token = "0x4002315")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	protected bool _useCategories;

	[Token(Token = "0x4002316")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	protected string _title;

	[Token(Token = "0x4002317")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	public StringSetting FinishSetting;

	[Token(Token = "0x17000C3F")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004488")]
		[Address(RVA = "0x21CAD40", Offset = "0x21C9340", VA = "0x1821CAD40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C40")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004489")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C41")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600448A")]
		[Address(RVA = "0x8680A0", Offset = "0x8666A0", VA = "0x1808680A0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C42")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600448B")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C43")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x600448C")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C44")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600448D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C45")]
	protected override float Width
	{
		[Token(Token = "0x600448E")]
		[Address(RVA = "0x21C2520", Offset = "0x21C0B20", VA = "0x1821C2520", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C46")]
	protected override float Height
	{
		[Token(Token = "0x600448F")]
		[Address(RVA = "0x210FB90", Offset = "0x210E190", VA = "0x18210FB90", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C47")]
	protected virtual float ItemButtonWidth
	{
		[Token(Token = "0x6004490")]
		[Address(RVA = "0x21C6340", Offset = "0x21C4940", VA = "0x1821C6340", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C48")]
	protected virtual int ItemFontSize
	{
		[Token(Token = "0x6004491")]
		[Address(RVA = "0x846FB0", Offset = "0x8455B0", VA = "0x180846FB0", Slot = "63")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C49")]
	protected virtual float DeleteButtonSize
	{
		[Token(Token = "0x6004492")]
		[Address(RVA = "0x21C4F60", Offset = "0x21C3560", VA = "0x1821C4F60", Slot = "64")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004493")]
	[Address(RVA = "0x21C99E0", Offset = "0x21C7FE0", VA = "0x1821C99E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004494")]
	[Address(RVA = "0x21C8E10", Offset = "0x21C7410", VA = "0x1821C8E10")]
	private void OnSearchChanged()
	{
	}

	[Token(Token = "0x6004495")]
	[Address(RVA = "0x21C8E20", Offset = "0x21C7420", VA = "0x1821C8E20")]
	private void OnSearchEndEdit()
	{
	}

	[Token(Token = "0x6004496")]
	[Address(RVA = "0x21CA2B0", Offset = "0x21C88B0", VA = "0x1821CA2B0")]
	public void ShowLoad(List<string> items, [Optional][DefaultParameterValue("")] string title, [Optional] UnityAction onLoad, [Optional] UnityAction onDelete, [Optional] List<string> disallowedDelete)
	{
	}

	[Token(Token = "0x6004497")]
	[Address(RVA = "0x21C9EA0", Offset = "0x21C84A0", VA = "0x1821C9EA0")]
	public void ShowLoadCategorized(List<ItemCategory> categories, [Optional][DefaultParameterValue("")] string title, [Optional] UnityAction onLoad)
	{
	}

	[Token(Token = "0x6004498")]
	[Address(RVA = "0x21CA470", Offset = "0x21C8A70", VA = "0x1821CA470")]
	public void ShowSave(List<string> items, [Optional][DefaultParameterValue("")] string title, [Optional][DefaultParameterValue("")] string initial, [Optional] UnityAction onSave, [Optional] List<string> disallowedSave, [Optional] UnityAction onDelete, [Optional] List<string> disallowedDelete)
	{
	}

	[Token(Token = "0x6004499")]
	[Address(RVA = "0x21CA830", Offset = "0x21C8E30", VA = "0x1821CA830")]
	private void ToggleSaveElements()
	{
	}

	[Token(Token = "0x600449A")]
	[Address(RVA = "0x21C8FA0", Offset = "0x21C75A0", VA = "0x1821C8FA0")]
	public void RefreshList()
	{
	}

	[Token(Token = "0x600449B")]
	[Address(RVA = "0x21C7C50", Offset = "0x21C6250", VA = "0x1821C7C50")]
	protected void CreateItemButton(string item)
	{
	}

	[Token(Token = "0x600449C")]
	[Address(RVA = "0x21C7AC0", Offset = "0x21C60C0", VA = "0x1821C7AC0")]
	protected void ClearListButtons()
	{
	}

	[Token(Token = "0x600449D")]
	[Address(RVA = "0x21C83C0", Offset = "0x21C69C0", VA = "0x1821C83C0")]
	protected List<string> GetActiveCategoryItems()
	{
		return null;
	}

	[Token(Token = "0x600449E")]
	[Address(RVA = "0x21C9500", Offset = "0x21C7B00", VA = "0x1821C9500")]
	protected void SetupCategoryTabs()
	{
	}

	[Token(Token = "0x600449F")]
	[Address(RVA = "0x21C9360", Offset = "0x21C7960", VA = "0x1821C9360")]
	protected void SetCategoryTabsEnabled(bool enabled)
	{
	}

	[Token(Token = "0x60044A0")]
	[Address(RVA = "0x21C7930", Offset = "0x21C5F30", VA = "0x1821C7930")]
	protected void ClearCategoryTabs()
	{
	}

	[Token(Token = "0x60044A1")]
	[Address(RVA = "0x21C8830", Offset = "0x21C6E30", VA = "0x1821C8830")]
	protected void OnCategoryTabClick(string categoryName)
	{
	}

	[Token(Token = "0x60044A2")]
	[Address(RVA = "0x21CA640", Offset = "0x21C8C40", VA = "0x1821CA640")]
	protected void SyncCategoryTabs()
	{
	}

	[Token(Token = "0x60044A3")]
	[Address(RVA = "0x21C8B80", Offset = "0x21C7180", VA = "0x1821C8B80")]
	private void OnItemClick(string name)
	{
	}

	[Token(Token = "0x60044A4")]
	[Address(RVA = "0x21C8940", Offset = "0x21C6F40", VA = "0x1821C8940")]
	private void OnConfirmOverwrite(string name)
	{
	}

	[Token(Token = "0x60044A5")]
	[Address(RVA = "0x21C8870", Offset = "0x21C6E70", VA = "0x1821C8870")]
	private void OnConfirmDelete(string name)
	{
	}

	[Token(Token = "0x60044A6")]
	[Address(RVA = "0x21C89D0", Offset = "0x21C6FD0", VA = "0x1821C89D0")]
	private void OnDeleteClick(string name)
	{
	}

	[Token(Token = "0x60044A7")]
	[Address(RVA = "0x21C84F0", Offset = "0x21C6AF0", VA = "0x1821C84F0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60044A8")]
	[Address(RVA = "0x21CAB80", Offset = "0x21C9180", VA = "0x1821CAB80")]
	public SelectListPopup()
	{
	}
}
