// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorAddComponentPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorAddComponentPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddComponentPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x200088F")]
internal class MapEditorAddComponentPopup : BasePopup
{
	[Token(Token = "0x4002B27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting Search;

	[Token(Token = "0x4002B28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x4002B29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public StringSetting FinishSetting;

	[Token(Token = "0x4002B2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private UnityAction _onLoad;

	[Token(Token = "0x17000E47")]
	protected override string Title
	{
		[Token(Token = "0x6005166")]
		[Address(RVA = "0x5C5DA20", Offset = "0x5C5CA20", VA = "0x5C5DA20", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000E48")]
	protected override float Width
	{
		[Token(Token = "0x6005167")]
		[Address(RVA = "0x5C5DA40", Offset = "0x5C5CA40", VA = "0x5C5DA40", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$get_Width): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000E49")]
	protected override float Height
	{
		[Token(Token = "0x6005168")]
		[Address(RVA = "0x5C5DA50", Offset = "0x5C5CA50", VA = "0x5C5DA50", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$get_Height): clean
			return 600.0;
		}
	}

	[Token(Token = "0x17000E4A")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6005169")]
		[Address(RVA = "0x5C5DA60", Offset = "0x5C5CA60", VA = "0x5C5DA60", Slot = "16")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$get_CategoryPanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000E4B")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600516A")]
		[Address(RVA = "0x5C5DA70", Offset = "0x5C5CA70", VA = "0x5C5DA70", Slot = "42")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$get_CategoryButtons): clean
			return true;
		}
	}

	[Token(Token = "0x17000E4C")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600516B")]
		[Address(RVA = "0x5C5DA80", Offset = "0x5C5CA80", VA = "0x5C5DA80", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$get_TopBarHeight): clean
			return 65.0;
		}
	}

	[Token(Token = "0x17000E4D")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600516C")]
		[Address(RVA = "0x5C5DA90", Offset = "0x5C5CA90", VA = "0x5C5DA90", Slot = "19")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$get_DefaultCategoryPanel): clean
			return "General";
		}
	}

	[Token(Token = "0x600516D")]
	[Address(RVA = "0x5C5DAC0", Offset = "0x5C5CAC0", VA = "0x5C5DAC0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$Setup): 2 lines keep C-only constructs
		Transform pUVar1;
		StringSetting setting;
		String pSVar2;
		ElementStyle __this_00;
		UnityAction pUVar3;
		GameObject __this_01;
		InputSettingElement pUVar4;
		HorizontalLayoutGroup pUVar5;
		float fVar6;

		this.Setup(parent);
		pSVar2 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 70.0, 20.0, pSVar2);
		pUVar1 = this.BottomBar;
		setting = this.Search;
		pSVar2 = UIManager.GetLocaleCommon("Search");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorAddComponentPopup_Setup_b__18_0);
		__this_01 = ElementFactory.CreateInputSetting(pUVar1, __this_00, (BaseSetting)setting, pSVar2, "", 200.0, 40.0, false, null, pUVar3, null, null);
		if (__this_01 != null) {
			pUVar4 = __this_01.GetComponent<InputSettingElement>();
			this._searchInput = pUVar4;
			pUVar4 = this._searchInput;
			if (pUVar4 != null) {
				pUVar5 = pUVar4.GetComponent<HorizontalLayoutGroup>();
				if (pUVar5 != null) {
					pUVar5.spacing = 5.0;
					pUVar1 = this.BottomBar;
					pSVar2 = UIManager.GetLocaleCommon("Back");
					pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorAddComponentPopup_Setup_b__18_1);
					ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar2, 0.0, pUVar3);
					pUVar1 = this.BottomBar;
					if (pUVar1 != null) {
						pUVar5 = pUVar1.GetComponent<HorizontalLayoutGroup>();
						fVar6 = this.get_Width();
						if (pUVar5 != null) {
							pUVar5.spacing = fVar6 + -365.0;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600516E")]
	[Address(RVA = "0x5C5DD80", Offset = "0x5C5CD80", VA = "0x5C5DD80", Slot = "62")]
	protected virtual string[] GetCategories()
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$GetCategories): clean
		String[] pSVar1;

		pSVar1 = (String[])new string[4];
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "All";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "General";
				if (2 < (uint)pSVar1.Length) {
					pSVar1[2] = "Internal";
					if ((pSVar1.Length & 0xfffffffc) != 0) {
						pSVar1[3] = "Custom";
						return pSVar1;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600516F")]
	[Address(RVA = "0x5C5DE80", Offset = "0x5C5CE80", VA = "0x5C5DE80", Slot = "44")]
	protected override void SetupTopButtons()
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$SetupTopButtons): 1 lines keep C-only constructs
		Transform parent;
		Dictionary<object, object> __this_00;
		String pSVar1;
		ElementStyle __this_01;
		String[] pSVar2;
		MapEditorAddComponentPopup.c__DisplayClass20_0 __this_02;
		UnityAction __this_03;
		GameObject __this_04;
		Button value;
		ulong uVar3;

		pSVar1 = this.get_ThemePanel();
		__this_01 = new ElementStyle(0x14, 120.0, 20.0, pSVar1);
		pSVar2 = this.GetCategories();
		if (pSVar2 == null) {
	label_05d5e076: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar2.Length) {
			uVar3 = 0;
			do {
				__this_02 = new MapEditorAddComponentPopup.c__DisplayClass20_0();
				if (__this_02 == null) goto label_05d5e076;
				__this_02.__4__this = this;
				if ((uint)pSVar2.Length <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				__this_02.buttonName = pSVar2[uVar3];
				parent = this.TopBar;
				pSVar1 = __this_02.buttonName;
				__this_03 = new UnityAction((object)__this_02, (intptr_t)MethodInfo_UI_MapEditorAddComponentPopup_c__DisplayClass20_0_SetupTopButtons_b__0);
				__this_04 = ElementFactory.CreateCategoryButton(parent, __this_01, pSVar1, __this_03) ;
				if (__this_04 == null) goto label_05d5e076;
				__this_00 = (Dictionary<object, object>)this._topButtons;
				pSVar1 = __this_02.buttonName;
				value = __this_04.GetComponent<Button>();
				if (__this_00 == null) goto label_05d5e076;
				__this_00.Add((object)pSVar1, (object)value);
				uVar3 = uVar3 + 1;
			} while ((long)uVar3 < (long)(int)pSVar2.Length);
		}
		this.SetupTopButtons();
		return;
	}

	[Token(Token = "0x6005170")]
	[Address(RVA = "0x5C5E090", Offset = "0x5C5D090", VA = "0x5C5E090")]
	protected void OnTopBarButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$OnTopBarButtonClick): clean
		StringSetting __this_00;
		InputSettingElement pUVar1;
		bool bVar2;

		__this_00 = this.Search;
		if (__this_00 == null) {
	label_05d5e163: ;
			throw new NullReferenceException();
		}
		__this_00.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
		pUVar1 = this._searchInput;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._searchInput;
			if (pUVar1 == null) goto label_05d5e163;
			pUVar1.SyncElement();
		}
		this.SetCategoryPanel(name);
		return;
	}

	[Token(Token = "0x6005171")]
	[Address(RVA = "0x5C5E170", Offset = "0x5C5D170", VA = "0x5C5E170", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$RegisterCategoryPanels): 3 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Il2CppType handle;
		object key;
		bool bVar2;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_00;
		Type value;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_58;
		byte puStack_38;

		SStack_58._dictionary = null;
		SStack_58._index = 0;
		SStack_58._version = 0;
		SStack_58._currentKey = null;
		pSVar1 = (Dictionary<object, object>)this._topButtons;
		if (pSVar1 != null) {
			__this_00 = pSVar1.Keys;
			if (__this_00 != null) {
				SStack_58 = __this_00.GetEnumerator();
				puStack_38 = (byte)&SStack_58;
				while(true) {
					bVar2 = SStack_58.MoveNext();
					key = SStack_58._currentKey;
					handle = TypeRef_UI_MapEditorAddComponentPanel;
					if (!bVar2) {
						SStack_58.Dispose();
						return;
					}
					pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes;
					value = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
					if (pSVar1 == null) break;
					pSVar1.Add(key, (object)value);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005172")]
	[Address(RVA = "0x5C5E340", Offset = "0x5C5D340", VA = "0x5C5E340")]
	public void Show(UnityAction onLoad)
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$Show): clean
		this.Show();
		this._onLoad = onLoad;
		this.RebuildCategoryPanel();
		return;
	}

	[Token(Token = "0x6005173")]
	[Address(RVA = "0x5C5D900", Offset = "0x5C5C900", VA = "0x5C5D900")]
	public void OnSelectItem(string name)
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$OnSelectItem): clean
		StringSetting __this_00;
		UnityAction pUVar1;

		__this_00 = this.FinishSetting;
		if (__this_00 != null) {
			__this_00.Value = (object)name;
			pUVar1 = this._onLoad;
			if (pUVar1 != null) {
				(*(code)pUVar1.invoke_impl)(pUVar1.method_code,pUVar1.method);
				this.Hide();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005174")]
	[Address(RVA = "0x5C5E380", Offset = "0x5C5D380", VA = "0x5C5E380")]
	private void OnBottomBarButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$OnBottomBarButtonClick): clean
		this.Hide();
		return;
	}

	[Token(Token = "0x6005175")]
	[Address(RVA = "0x5C5E3A0", Offset = "0x5C5D3A0", VA = "0x5C5E3A0")]
	public MapEditorAddComponentPopup()
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPopup.c (UI.MapEditorAddComponentPopup$$.ctor): clean
		String pSVar1;
		StringSetting pSVar2;

		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 0x7fffffff);
		this.Search = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 0x7fffffff);
		this.FinishSetting = pSVar2;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorAddComponentPopup.c.

	// UI.MapEditorAddComponentPopup.<>c__DisplayClass20_0$$.ctor: clean
	private void c__DisplayClass20_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorAddComponentPopup$$<Setup>b__18_0: clean
	private void Setup_b__18_0()
	{
		this.RebuildCategoryPanel();
		return;
	}

	// UI.MapEditorAddComponentPopup$$<Setup>b__18_1: clean
	private void Setup_b__18_1()
	{
		this.Hide();
		return;
	}

	// UI.MapEditorAddComponentPopup.<>c__DisplayClass20_0$$<SetupTopButtons>b__0: clean
	private void c__DisplayClass20_0__SetupTopButtons_b__0()
	{
		MapEditorAddComponentPopup __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnTopBarButtonClick(this.buttonName);
		return;
	}
}
