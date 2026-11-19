// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorInfoPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorInfoPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorInfoPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20008AF")]
internal class MapEditorInfoPopup : PromptPopup
{
	[Token(Token = "0x4002BE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _description;

	[Token(Token = "0x4002BE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002BE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private List<BaseSettingElement> _inputs;

	[Token(Token = "0x17000E8C")]
	protected override string Title
	{
		[Token(Token = "0x60052D4")]
		[Address(RVA = "0x5C7DE90", Offset = "0x5C7CE90", VA = "0x5C7DE90", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorInfoPopup.c (UI.MapEditorInfoPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("MapEditor", "Top", "MapInfo", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000E8D")]
	protected override float Width
	{
		[Token(Token = "0x60052D5")]
		[Address(RVA = "0x5C7DF30", Offset = "0x5C7CF30", VA = "0x5C7DF30", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorInfoPopup.c (UI.MapEditorInfoPopup$$get_Width): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000E8E")]
	protected override float Height
	{
		[Token(Token = "0x60052D6")]
		[Address(RVA = "0x5C7DF40", Offset = "0x5C7CF40", VA = "0x5C7DF40", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorInfoPopup.c (UI.MapEditorInfoPopup$$get_Height): clean
			return 400.0;
		}
	}

	[Token(Token = "0x17000E8F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60052D7")]
		[Address(RVA = "0x5C7DF50", Offset = "0x5C7CF50", VA = "0x5C7DF50", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorInfoPopup.c (UI.MapEditorInfoPopup$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x60052D8")]
	[Address(RVA = "0x5C7DF60", Offset = "0x5C7CF60", VA = "0x5C7DF60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorInfoPopup.c (UI.MapEditorInfoPopup$$Setup): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Transform pUVar3;
		List<BaseSettingElement> __this_00;
		StringSetting setting;
		BaseSettingElement[] pUVar4;
		int fontSize;
		String pSVar6;
		ElementStyle __this_01;
		UnityAction pUVar7;
		GameObject __this_02;
		InputSettingElement item;

		this.Setup(parent);
		fontSize = this.get_ButtonFontSize();
		pSVar6 = this.get_ThemePanel();
		__this_01 = new ElementStyle(fontSize, 130.0, 20.0, pSVar6);
		pUVar3 = this.BottomBar;
		pSVar6 = UIManager.GetLocaleCommon("Save");
		pUVar7 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInfoPopup_Setup_b__11_0);
		ElementFactory.CreateTextButton(pUVar3, __this_01, pSVar6, 0.0, pUVar7);
		pUVar3 = this.BottomBar;
		pSVar6 = UIManager.GetLocaleCommon("Cancel");
		pUVar7 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInfoPopup_Setup_b__11_1);
		ElementFactory.CreateTextButton(pUVar3, __this_01, pSVar6, 0.0, pUVar7);
		__this_00 = this._inputs;
		pUVar3 = this.SinglePanel;
		setting = this._description;
		pSVar6 = UIManager.GetLocale("MapEditor", "MapInfo", "Description", "", "");
		__this_02 = ElementFactory.CreateInputSetting(pUVar3, __this_01, (BaseSetting)setting, pSVar6, "", 300.0, 250.0, true, null, null, null, null);
		if (__this_02 != null) {
			item = __this_02.GetComponent<InputSettingElement>();
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pUVar4 = __this_00._items;
				if (pUVar4 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pUVar4.Length) {
						__this_00._size = uVar2 + 1;
						pUVar4[(int)uVar2] = (BaseSettingElement)item;
						return;
					}
					__this_00.AddWithResize((object)item);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052D9")]
	[Address(RVA = "0x5C7E270", Offset = "0x5C7D270", VA = "0x5C7E270", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/UI/MapEditorInfoPopup.c (UI.MapEditorInfoPopup$$Show): 8 lines keep C-only constructs
		byte bVar1;
		MapEditorGameManager pGVar2;
		MapScript pMVar3;
		MapScriptOptions pMVar4;
		StringSetting __this_00;
		List<BaseSettingElement> __this_01;
		MapEditorGameManager pGVar5;
		bool bVar6;
		MapEditorGameManager* targetAddress;
		System_Collections_Generic_List_Enumerator_T__o SStack_38;
		byte puStack_18;

		SStack_38._list = null;
		SStack_38._index = 0;
		SStack_38._version = 0;
		SStack_38._current = null;
		this.Show();
		pGVar5 = typeof(MapEditorGameManager);
		pGVar2 = (MapEditorGameManager)SceneLoader.CurrentGameManager;
		if (pGVar2 != null) {
			bVar1 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
			if ((bVar1 <= (((BaseGameManager)pGVar2.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pGVar2.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MapEditorGameManager))) {
				this._gameManager = pGVar2;
				if ((bVar1 <= (((BaseGameManager)pGVar2.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pGVar2.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==(Il2CppClass)pGVar5)) goto label_05d7e387;
			}
			throw new InvalidCastException();
		}
		this._gameManager = null;
	label_05d7e387: ;
		targetAddress = &this._gameManager;
		pGVar2 = *targetAddress;
		if ((((pGVar2 != null) &&(pMVar3 = pGVar2.MapScript, pMVar3 != null)) &&(pMVar4 = pMVar3.Options, pMVar4 != null)) &&(__this_00 = this._description, __this_00 != null)) {
			__this_00.Value = (object)pMVar4.Description;
			puStack_18 = (byte)&SStack_38;
			__this_01 = this._inputs;
			if (__this_01 != null) {
				SStack_38 = __this_01.GetEnumerator();
				while(true) {
					bVar6 = SStack_38.MoveNext();
					if (!bVar6) {
						SStack_38.Dispose();
						return;
					}
					if (SStack_38._current == null) break;
					(*(SStack_38._current).klass.vtable[6].methodPtr)(SStack_38._current,(SStack_38._current).klass.vtable[6].method);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052DA")]
	[Address(RVA = "0x5C7E4D0", Offset = "0x5C7D4D0", VA = "0x5C7E4D0")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorInfoPopup.c (UI.MapEditorInfoPopup$$OnButtonClick): 1 lines keep C-only constructs
		byte bVar1;
		MapEditorGameManager pGVar2;
		MapScript pMVar3;
		StringSetting pSVar4;
		MapScriptOptions pMVar5;
		BaseMenu pUVar6;
		MapEditorTopPanel __this_00;
		bool bVar7;

		bVar7 = (name == "Cancel");
		if (bVar7) {
	label_05d7e611: ;
			this.Hide();
			return;
		}
		bVar7 = (name == "Save");
		if (!bVar7) {
			return;
		}
		pGVar2 = this._gameManager;
		if ((((pGVar2 != null) &&(pMVar3 = pGVar2.MapScript, pMVar3 != null)) &&(pSVar4 = this._description, pSVar4 != null)) &&(pMVar5 = pMVar3.Options, pMVar5 != null)) {
			pMVar5.Description = pSVar4._value;
			pUVar6 = UIManager.CurrentMenu;
			if (pUVar6 != null) {
				bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
				if (((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||((pUVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(MapEditorMenu))) {
					throw new InvalidCastException();
				}
				__this_00 = (MapEditorTopPanel)(*(ulong)((sbyte)pUVar6 + 0xb8));
				if (__this_00 != null) {
					__this_00.Save();
					goto label_05d7e611;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052DB")]
	[Address(RVA = "0x5C7E640", Offset = "0x5C7D640", VA = "0x5C7E640")]
	public MapEditorInfoPopup()
	{
		// Lifted from source/cpp/UI/MapEditorInfoPopup.c (UI.MapEditorInfoPopup$$.ctor): clean
		String defaultValue;
		StringSetting __this_00;
		List<BaseSettingElement> __this_01;

		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new StringSetting(defaultValue, 0x7fffffff);
		this._description = __this_00;
		__this_01 = new List<BaseSettingElement>();
		this._inputs = __this_01;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorInfoPopup.c.

	// UI.MapEditorInfoPopup$$<Setup>b__11_0: clean
	private void Setup_b__11_0()
	{


		this.OnButtonClick("Save");
		return;
	}

	// UI.MapEditorInfoPopup$$<Setup>b__11_1: clean
	private void Setup_b__11_1()
	{


		this.OnButtonClick("Cancel");
		return;
	}
}
