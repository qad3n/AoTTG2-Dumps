// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorCustomAssetPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorCustomAssetPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCustomAssetPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Map;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20008A1")]
internal class MapEditorCustomAssetPopup : PromptPopup
{
	[Token(Token = "0x20008A2")]
	[CompilerGenerated]
	private sealed class _003CLoadAssetBundle_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B8D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B8E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B8F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string bundle;

		[Token(Token = "0x4002B90")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public MapEditorCustomAssetPopup _003C_003E4__this;

		[Token(Token = "0x4002B91")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private MapEditorMenu _003Cmenu_003E5__2;

		[Token(Token = "0x17000E78")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005240")]
			[Address(RVA = "0x5C70C60", Offset = "0x5C6FC60", VA = "0x5C70C60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000E79")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005242")]
			[Address(RVA = "0x5C70CB0", Offset = "0x5C6FCB0", VA = "0x5C70CB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600523D")]
		[Address(RVA = "0x5C703D0", Offset = "0x5C6F3D0", VA = "0x5C703D0")]
		[DebuggerHidden]
		public _003CLoadAssetBundle_003Ed__22(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600523E")]
		[Address(RVA = "0x5C707F0", Offset = "0x5C6F7F0", VA = "0x5C707F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600523F")]
		[Address(RVA = "0x5C70800", Offset = "0x5C6F800", VA = "0x5C70800", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$MoveNext): 9 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			int iVar3;
			uint uVar4;
			MapEditorCustomAssetPopup __this_00;
			MapEditorGameManager pGVar5;
			MapScript pMVar6;
			MapScriptCustomAssets pMVar7;
			List<string> __this_01;
			String[] pSVar8;
			List<CustomAssetEntry> __this_02;
			CustomAssetEntry[] pMVar9;
			MessagePopup pUVar10;
			MapEditorMenu pUVar11;
			bool bVar12;
			CustomAssetEntry __this_03;
			String pSVar13;
			IEnumerator routine;
			Coroutine pUVar14;
			MapEditorMenu pUVar15;
			MapEditorMenu* targetAddress;

			iVar3 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar3 == 1) {
				this.__1__state = -1;
				pSVar13 = this.bundle;
				bVar12 = AssetBundleManager.LoadedBundle(pSVar13);
				if (!bVar12) {
					pUVar15 = this._menu_5__2;
					if (pUVar15 != null) {
						pUVar10 = pUVar15.MessagePopup;
						pSVar13 = UIManager.GetLocale("MapEditor", "CustomAssets", "LoadBundleError", "", "");
						if (pUVar10 != null) {
							pUVar10.Show(pSVar13, true);
							return false;
						}
					}
					goto label_05d70c4e;
				}
				__this_03 = new CustomAssetEntry();
				if (__this_03 == null) goto label_05d70c4e;
				__this_03.Bundle = this.bundle;
				if ((((__this_00 == null) ||(pGVar5 = __this_00._gameManager, pGVar5 == null)) ||(pMVar6 = pGVar5.MapScript, pMVar6 == null)) ||(pMVar7 = pMVar6.CustomAssets, pMVar7 == null)) goto label_05d70c4e;
				__this_01 = pMVar7.CustomAssets;
				pSVar13 = __this_03.Serialize();
				if (__this_01 == null) goto label_05d70c4e;
				piVar1 = &__this_01._version;
				*piVar1 = *piVar1 + 1;
				pSVar8 = __this_01._items;
				if (pSVar8 == null) goto label_05d70c4e;
				uVar4 = __this_01._size;
				if (uVar4 < (uint)pSVar8.Length) {
					__this_01._size = uVar4 + 1;
					pSVar8[(int)uVar4] = pSVar13;
				}
				else {
					__this_01.AddWithResize((object)pSVar13);
				}
				__this_02 = __this_00._entries;
				if (__this_02 == null) goto label_05d70c4e;
				piVar1 = &__this_02._version;
				*piVar1 = *piVar1 + 1;
				pMVar9 = __this_02._items;
				if (pMVar9 == null) goto label_05d70c4e;
				uVar4 = __this_02._size;
				if (uVar4 < (uint)pMVar9.Length) {
					__this_02._size = uVar4 + 1;
					pMVar9[(int)uVar4] = __this_03;
				}
				else {
					__this_02.AddWithResize((object)__this_03);
				}
				__this_00.AddAssetRow(__this_03);
				pUVar15 = this._menu_5__2;
			}
			else {
				if (iVar3 != 0) {
					return false;
				}
				this.__1__state = -1;
				if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
					pUVar15 = (MapEditorMenu)UIManager.CurrentMenu;
					if (pUVar15 != null) goto label_05d708e3;
		label_05d70ae3: ;
					this._menu_5__2 = null;
				}
				else {
					pUVar15 = (MapEditorMenu)UIManager.CurrentMenu;
					if (pUVar15 == null) goto label_05d70ae3;
		label_05d708e3: ;
					pUVar11 = typeof(MapEditorMenu);
					bVar2 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
					if (((((BaseMenu)pUVar15.klass)._2).typeHierarchyDepth < bVar2) ||((((BaseMenu)pUVar15.klass)._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(MapEditorMenu))) {
		label_05d70c53: ;
						throw new InvalidCastException();
					}
					this._menu_5__2 = pUVar15;
					if (((((BaseMenu)pUVar15.klass)._2).typeHierarchyDepth < bVar2) ||((((BaseMenu)pUVar15.klass)._2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass)pUVar11)) goto label_05d70c53;
				}
				targetAddress = &this._menu_5__2;
				pSVar13 = this.bundle;
				bVar12 = AssetBundleManager.LoadedBundle(pSVar13);
				if (!bVar12) {
					pSVar13 = this.bundle;
					routine = AssetBundleManager.LoadBundle(pSVar13, "", true);
					if (__this_00 != null) {
						pUVar14 = __this_00.StartCoroutine(routine);
						this.__2__current = (object)pUVar14;
						this.__1__state = 1;
						return true;
					}
					goto label_05d70c4e;
				}
				pUVar15 = *targetAddress;
			}
			if ((pUVar15 != null) &&(pUVar10 = pUVar15.MessagePopup, pUVar10 != null)) {
				pUVar10.Hide();
				return false;
			}
		label_05d70c4e: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6005241")]
		[Address(RVA = "0x5C70C70", Offset = "0x5C6FC70", VA = "0x5C70C70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup.<LoadAssetBundle>d__22$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_MapEditorCustomAssetPopup_LoadAssetBundle_d__22_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002B86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002B87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<GameObject> _elements;

	[Token(Token = "0x4002B88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private List<StringSetting> _settings;

	[Token(Token = "0x4002B89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private List<CustomAssetEntry> _entries;

	[Token(Token = "0x4002B8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private StringSetting _platform;

	[Token(Token = "0x4002B8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private string _platformKey;

	[Token(Token = "0x4002B8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string[] PlatformOptions;

	[Token(Token = "0x17000E74")]
	protected override string Title
	{
		[Token(Token = "0x600522A")]
		[Address(RVA = "0x5C6EB10", Offset = "0x5C6DB10", VA = "0x5C6EB10", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("MapEditor", "Top", "CustomAssets", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000E75")]
	protected override float Width
	{
		[Token(Token = "0x600522B")]
		[Address(RVA = "0x5C6EBB0", Offset = "0x5C6DBB0", VA = "0x5C6EBB0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup$$get_Width): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000E76")]
	protected override float Height
	{
		[Token(Token = "0x600522C")]
		[Address(RVA = "0x5C6EBC0", Offset = "0x5C6DBC0", VA = "0x5C6EBC0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup$$get_Height): clean
			return 420.0;
		}
	}

	[Token(Token = "0x17000E77")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600522D")]
		[Address(RVA = "0x5C6EBD0", Offset = "0x5C6DBD0", VA = "0x5C6EBD0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x600522E")]
	[Address(RVA = "0x5C6EBE0", Offset = "0x5C6DBE0", VA = "0x5C6EBE0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup$$Setup): 4 lines keep C-only constructs
		Transform pUVar1;
		StringSetting pSVar2;
		String[] pSVar3;
		int fontSize;
		String pSVar4;
		ElementStyle __this_00;
		UnityAction pUVar5;
		String tooltip;

		this.Setup(parent);
		fontSize = this.get_ButtonFontSize();
		pSVar4 = this.get_ThemePanel();
		__this_00 = new ElementStyle(fontSize, 130.0, 20.0, pSVar4);
		pUVar1 = this.BottomBar;
		pSVar4 = UIManager.GetLocaleCommon("Add");
		pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_Setup_b__15_0);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar4, 0.0, pUVar5);
		pUVar1 = this.BottomBar;
		pSVar4 = UIManager.GetLocaleCommon("Clear");
		pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_Setup_b__15_1);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar4, 0.0, pUVar5);
		pUVar1 = this.BottomBar;
		pSVar4 = UIManager.GetLocaleCommon("Back");
		pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_Setup_b__15_2);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar4, 0.0, pUVar5);
		pUVar1 = this.SinglePanel;
		pSVar4 = UIManager.GetLocale("MapEditor", "CustomAssets", "Hint", "", "");
		ElementFactory.CreateDefaultLabel(pUVar1, __this_00, pSVar4, 0, 4);
		pSVar2 = this._platform;
		pSVar3 = MapEditorCustomAssetPopup.PlatformOptions;
		if (pSVar3 != null) {
			if ((int)pSVar3.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (pSVar2 != null) {
				pSVar2.Value = (object)pSVar3[0];
				pUVar1 = this.SinglePanel;
				pSVar2 = this._platform;
				pSVar4 = UIManager.GetLocale("MapEditor", "CustomAssets", "Platform", "", "");
				pSVar3 = MapEditorCustomAssetPopup.PlatformOptions;
				tooltip = UIManager.GetLocale("MapEditor", "CustomAssets", "PlatformTooltip", "", "");
				pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_OnPlatformChange);
				ElementFactory.CreateDropdownSetting(pUVar1, __this_00, (BaseSetting)pSVar2, pSVar4, pSVar3, tooltip, 140.0, 40.0, 300.0, (Nullable<float>)0x0, pUVar5, null, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600522F")]
	[Address(RVA = "0x5C6F030", Offset = "0x5C6E030", VA = "0x5C6F030", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup$$Show): 11 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int length;
		uint uVar3;
		MapEditorGameManager pGVar4;
		List<CustomAssetEntry> pSVar5;
		MapScript pMVar6;
		MapScriptCustomAssets pMVar7;
		List<string> __this_00;
		CustomAssetEntry[] pMVar8;
		MapEditorGameManager pGVar9;
		object str;
		bool bVar10;
		CustomAssetEntry item;
		MapEditorGameManager* targetAddress;
		System_Collections_Generic_List_Enumerator_T__o SStack_58;
		byte puStack_38;

		SStack_58._list = null;
		SStack_58._index = 0;
		SStack_58._version = 0;
		SStack_58._current = null;
		this.Show();
		pGVar9 = typeof(MapEditorGameManager);
		pGVar4 = (MapEditorGameManager)SceneLoader.CurrentGameManager;
		if (pGVar4 != null) {
			bVar2 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
			if ((bVar2 <= (((BaseGameManager)pGVar4.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pGVar4.klass)._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(MapEditorGameManager))) {
				this._gameManager = pGVar4;
				if ((bVar2 <= (((BaseGameManager)pGVar4.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pGVar4.klass)._2).typeHierarchy[(ulong)bVar2 - 1] ==(Il2CppClass)pGVar9)) goto label_05d6f166;
			}
			throw new InvalidCastException();
		}
		this._gameManager = null;
	label_05d6f166: ;
		targetAddress = &this._gameManager;
		pSVar5 = this._entries;
		if (pSVar5 != null) {
			piVar1 = &pSVar5._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar5._size;
			pSVar5._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar5._items, 0, length);
			}
			pGVar4 = *targetAddress;
			if ((((pGVar4 != null) &&(pMVar6 = pGVar4.MapScript, pMVar6 != null)) &&(pMVar7 = pMVar6.CustomAssets, pMVar7 != null)) &&(__this_00 = pMVar7.CustomAssets, __this_00 != null)) {
				SStack_58 = __this_00.GetEnumerator();
				puStack_38 = (byte)&SStack_58;
				while(true) {
					bVar10 = SStack_58.MoveNext();
					str = SStack_58._current;
					if (!bVar10) {
						SStack_58.Dispose();
						this.RebuildAssetRows();
						return;
					}
					pSVar5 = this._entries;
					item = CustomAssetEntry.Parse((String)str);
					if (pSVar5 == null) break;
					piVar1 = &pSVar5._version;
					*piVar1 = *piVar1 + 1;
					pMVar8 = pSVar5._items;
					if (pMVar8 == null) break;
					uVar3 = pSVar5._size;
					if (uVar3 < (uint)pMVar8.Length) {
						pSVar5._size = uVar3 + 1;
						pMVar8[(int)uVar3] = item;
					}
					else {
						pSVar5.AddWithResize((object)item);
					}
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005230")]
	[Address(RVA = "0x5C6F340", Offset = "0x5C6E340", VA = "0x5C6F340")]
	private void RebuildAssetRows()
	{
		// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup$$RebuildAssetRows): 10 lines keep C-only constructs
		int piVar1;
		int iVar2;
		List<GameObject> pSVar3;
		List<StringSetting> pSVar4;
		List<CustomAssetEntry> __this_00;
		Object obj;
		bool bVar5;
		byte[] local_80 = new byte[16];
		Object local_70;
		byte[] local_68 = new byte[8];
		Object local_58;
		System_Collections_Generic_List_Enumerator_T__o local_48;

		local_68 = (byte[])0x0;
		local_58 = null;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		pSVar3 = this._elements;
		if (pSVar3 != null) {
			local_80.GetEnumerator((List<object>)pSVar3);
			local_58 = local_70;
			local_68 = (byte[])local_80._0_8_;
			local_80._0_8_ = null;
			local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
			while(true) {
				bVar5 = local_68.MoveNext();
				obj = local_58;
				if (!bVar5) break;
				Object.Destroy(obj);
			}
			local_68.Dispose() ;
			pSVar3 = this._elements;
			if (pSVar3 != null) {
				piVar1 = &pSVar3._version;
				*piVar1 = *piVar1 + 1;
				iVar2 = pSVar3._size;
				pSVar3._size = 0;
				if (0 < iVar2) {
					Array.Clear((Array)pSVar3._items, 0, iVar2);
				}
				pSVar4 = this._settings;
				if (pSVar4 != null) {
					piVar1 = &pSVar4._version;
					*piVar1 = *piVar1 + 1;
					iVar2 = pSVar4._size;
					pSVar4._size = 0;
					if (0 < iVar2) {
						Array.Clear((Array)pSVar4._items, 0, iVar2);
					}
					__this_00 = this._entries;
					if (__this_00 != null) {
						local_48 = __this_00.GetEnumerator();
						local_80._0_8_ = null;
						local_80._8_8_ = &local_48;
						while(true) {
							bVar5 = local_48.MoveNext();
							if (!bVar5) break;
							this.AddAssetRow((CustomAssetEntry)local_48._current);
						}
						local_48.Dispose();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005231")]
	[Address(RVA = "0x5C6F640", Offset = "0x5C6E640", VA = "0x5C6F640")]
	private void AddAssetRow(CustomAssetEntry entry)
	{
		// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup$$AddAssetRow): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		List<GameObject> __this_00;
		GameObject[] pUVar4;
		List<StringSetting> __this_01;
		StringSetting[] pSVar5;
		bool bVar7;
		int fontSize;
		String pSVar8;
		ElementStyle __this_02;
		String* ppSVar9;
		StringSetting __this_03;
		String value;
		GameObject item;

		fontSize = this.get_ButtonFontSize();
		pSVar8 = this.get_ThemePanel();
		__this_02 = new ElementStyle(fontSize, 120.0, 20.0, pSVar8);
		bVar7 = (this._platformKey == (String)**(ulong*)(g_data_07556758 + 0xb8));
		uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		if (bVar7) {
			if (uVar2 == 0) {
			}
			ppSVar9 = &"DefaultUrlTooltip";
		}
		else {
			if (uVar2 == 0) {
			}
			ppSVar9 = &"PlatformUrlTooltip";
		}
		pSVar8 = UIManager.GetLocale("MapEditor", "CustomAssets", *ppSVar9, "", "");
		__this_03 = new StringSetting();
		if (entry != null) {
			value = entry.GetPlatformUrl(this._platformKey);
			if (__this_03 != null) {
				__this_03.Value = (object)value;
				item = ElementFactory.CreateInputSetting(this.SinglePanel, __this_02, (BaseSetting)__this_03, entry.Bundle, pSVar8, 220.0, 40.0, false, null, null, null, null);
				__this_00 = this._elements;
				if (__this_00 != null) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pUVar4 = __this_00._items;
					if (pUVar4 != null) {
						uVar3 = __this_00._size;
						if (uVar3 < (uint)pUVar4.Length) {
							__this_00._size = uVar3 + 1;
							pUVar4[(int)uVar3] = item;
						}
						else {
							__this_00.AddWithResize((object)item);
						}
						__this_01 = this._settings;
						if (__this_01 != null) {
							piVar1 = &__this_01._version;
							*piVar1 = *piVar1 + 1;
							pSVar5 = __this_01._items;
							if (pSVar5 != null) {
								uVar3 = __this_01._size;
								if (uVar3 < (uint)pSVar5.Length) {
									__this_01._size = uVar3 + 1;
									pSVar5[(int)uVar3] = __this_03;
									return;
								}
								__this_01.AddWithResize((object)__this_03);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005232")]
	[Address(RVA = "0x5C6F970", Offset = "0x5C6E970", VA = "0x5C6F970")]
	private void ApplyAssetRows()
	{
		// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup$$ApplyAssetRows): clean
		List<CustomAssetEntry> __this_00;
		String key;
		List<StringSetting> pSVar1;
		CustomAssetEntry __this_01;
		StringSetting pSVar2;
		String pSVar3;
		int index;

		pSVar1 = this._settings;
		if (pSVar1 != null) {
			index = 0;
			while(true) {
				if (pSVar1._size <= index) {
					return;
				}
				__this_00 = this._entries;
				if (__this_00 == null) break;
				__this_01 = __this_00.get_Item(index);
				pSVar1 = this._settings;
				if (pSVar1 == null) break;
				key = this._platformKey;
				pSVar2 = pSVar1.get_Item(index);
				if ((pSVar2 == null) ||(pSVar3 = pSVar2._value, pSVar3 == null)) break;
				pSVar3 = pSVar3.Trim();
				if (__this_01 == null) break;
				__this_01.SetPlatformUrl(key, pSVar3);
				index = index + 1;
				pSVar1 = this._settings;
				if (pSVar1 == null) break;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005233")]
	[Address(RVA = "0x5C6FA70", Offset = "0x5C6EA70", VA = "0x5C6FA70")]
	private void OnPlatformChange()
	{
		// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup$$OnPlatformChange): clean
		StringSetting pSVar1;
		String name;
		MethodInfo method_00;

		this.ApplyAssetRows();
		pSVar1 = this._platform;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		name = pSVar1._value;
		method_00 = (MethodInfo)CustomAssetEntry.GetPlatformKey(name);
		this._platformKey = (String)method_00;
		this.RebuildAssetRows();
		return;
	}

	[Token(Token = "0x6005234")]
	[Address(RVA = "0x5C6FB10", Offset = "0x5C6EB10", VA = "0x5C6FB10")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup$$OnButtonClick): 14 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		int length;
		uint uVar4;
		BaseMenu pUVar5;
		List<CustomAssetEntry> pSVar6;
		String[] pSVar7;
		ConfirmPopup __this_00;
		MapEditorGameManager pGVar8;
		MapScript pMVar9;
		MapScriptCustomAssets pMVar10;
		MapEditorTopPanel __this_01;
		SetNamePopup pUVar11;
		StringSetting pSVar12;
		MessagePopup __this_02;
		bool bVar13;
		List<string> __this_03;
		String pSVar14;
		UnityAction pUVar15;
		MethodInfo pMVar16;
		String message;
		IEnumerator routine;
		byte[] local_68 = new byte[8];
		CustomAssetEntry local_58;
		byte[] local_48 = new byte[16];
		CustomAssetEntry local_38;

		if (Il2CppMethodInitialized_07547faf == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCustomAssetPopup_OnButtonClick_b__21_0) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCustomAssetPopup_OnButtonClick_b__21_1) ;
			Il2CppMethodInitialized_07547faf = true;
		}
		local_68 = (byte[])0x0;
		local_58 = null;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar5 = UIManager.CurrentMenu;
			pMVar16 = (MethodInfo *)"Back";
		}
		else {
			pUVar5 = UIManager.CurrentMenu;
			pMVar16 = (MethodInfo *)"Back";
		}
		"Back" = (String)pMVar16;
		if (pUVar5 != null) {
			bVar2 = ((typeof(MapEditorMenu))._2).typeHierarchyDepth;
			if (((pUVar5.klass._2).typeHierarchyDepth < bVar2) ||((pUVar5.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(MapEditorMenu))) {
				throw new InvalidCastException();
			}
		}
		bVar13 = (name == (String)pMVar16);
		if (bVar13) {
			this.ApplyAssetRows();
			__this_03 = new List<string>();
			pSVar6 = this._entries;
			if (pSVar6 != null) {
				local_48.GetEnumerator((List<object>)pSVar6);
				local_58 = local_38;
				local_68 = (byte[])local_48._0_8_;
				local_48._0_8_ = null;
				local_48._8_8_ = local_68;
				if (__this_03 == null) {
					local_48._8_8_ = local_68;
					bVar13 = local_68.MoveNext();
					if (bVar13) {
						if (local_58 != null) {
							local_58.Serialize();
	label_05d702da: ;
							throw new NullReferenceException();
						}
	label_05d702ce: ;
						throw new NullReferenceException();
					}
				}
				else {
					while (bVar13 = local_68.MoveNext()) {
						if (local_58 == null) goto label_05d702ce;
						pSVar14 = local_58.Serialize();
						pMVar16 = MethodInfo_System_Collections_Generic_List_string_Add;
						piVar1 = &__this_03._version;
						*piVar1 = *piVar1 + 1;
						pSVar7 = __this_03._items;
						if (pSVar7 == null) goto label_05d702da;
						uVar3 = __this_03._size;
						if (uVar3 < (uint)pSVar7.Length) {
							__this_03._size = uVar3 + 1;
							pSVar7[(int)uVar3] = pSVar14;
						}
						else {
							__this_03.AddWithResize((object)pSVar14);
						}
					}
				}
				local_68.Dispose();
				pGVar8 = this._gameManager;
				if (((pGVar8 != null) &&(pMVar9 = pGVar8.MapScript, pMVar9 != null)) &&(pMVar10 = pMVar9.CustomAssets, pMVar10 != null)) {
					pMVar10.CustomAssets = __this_03;
					if ((pUVar5 != null) &&(__this_01 = (MapEditorTopPanel)(*(ulong)((sbyte)pUVar5 + 0xb8)), __this_01 != null)) {
						__this_01.Save();
						this.Hide();
						return;
					}
				}
			}
		}
		else {
			bVar13 = (name == "Clear");
			if (bVar13) {
				if (pUVar5 != null) {
					__this_00 = pUVar5.ConfirmPopup;
					pSVar14 = UIManager.GetLocale("MapEditor", "CustomAssets", "ClearConfirm", "", "");
					pUVar15 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_OnButtonClick_b__21_0);
					if (__this_00 != null) {
						__this_00.Show(pSVar14, pUVar15, null);
						return;
					}
				}
			}
			else {
				bVar13 = (name == "ConfirmClear");
				if (bVar13) {
					pGVar8 = this._gameManager;
					if ((pGVar8 != null) &&(pMVar9 = pGVar8.MapScript, pMVar9 != null)) {
						pMVar10 = pMVar9.CustomAssets;
						pMVar16 = new List<string>();
						if (pMVar10 != null) {
							pMVar10.CustomAssets = (List<string>)pMVar16;
							AssetBundleManager.Clear();
							pSVar6 = this._entries;
							if (pSVar6 != null) {
								piVar1 = &pSVar6._version;
								*piVar1 = *piVar1 + 1;
								length = pSVar6._size;
								pSVar6._size = 0;
								if (0 < length) {
									pMVar16 = null;
									Array.Clear((Array)pSVar6._items, 0, length);
								}
								this.RebuildAssetRows();
								return;
							}
						}
					}
				}
				else {
					bVar13 = (name == "Add");
					if (bVar13) {
						if (pUVar5 != null) {
							pUVar11 = pUVar5.SetNamePopup;
							pUVar15 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorCustomAssetPopup_OnButtonClick_b__21_1);
							pSVar14 = UIManager.GetLocale("MapEditor", "CustomAssets", "AddBundle", "", "");
							if (pUVar11 != null) {
								pUVar11.Show("", pUVar15, pSVar14, null);
								return;
							}
						}
					}
					else {
						bVar13 = (name == "ConfirmAdd");
						if (!bVar13) {
							return;
						}
						if ((((pUVar5 != null) &&(pUVar11 = pUVar5.SetNamePopup, pUVar11 != null)) &&(pSVar12 = pUVar11.NameSetting, pSVar12 != null)) &&(pSVar14 = pSVar12._value, pSVar14 != null)) {
							pSVar14 = pSVar14.Trim();
							bVar13 = (pSVar14 == (String)**(ulong*)(g_data_07556758 + 0xb8));
							__this_02 = pUVar5.MessagePopup;
							uVar4 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
							if (bVar13) {
								if (uVar4 == 0) {
								}
								pSVar14 = UIManager.GetLocale("Common", "EmptyName", "", "", "");
								if (__this_02 != null) {
									__this_02.Show(pSVar14, true);
									return;
								}
							}
							else {
								if (uVar4 == 0) {
								}
								message = UIManager.GetLocale("MapEditor", "CustomAssets", "LoadingBundle", "", "");
								if (__this_02 != null) {
									__this_02.Show(message, false);
									routine = this.LoadAssetBundle(pSVar14);
									this.StartCoroutine(routine);
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005235")]
	[Address(RVA = "0x5C70350", Offset = "0x5C6F350", VA = "0x5C70350")]
	[IteratorStateMachine(typeof(_003CLoadAssetBundle_003Ed__22))]
	private IEnumerator LoadAssetBundle(string bundle)
	{
		// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup$$LoadAssetBundle): clean
		MapEditorCustomAssetPopup.d__22<LoadAssetBundle> __this_00;

		__this_00 = new MapEditorCustomAssetPopup.d__22<LoadAssetBundle>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.bundle = bundle;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6005236")]
	[Address(RVA = "0x5C703F0", Offset = "0x5C6F3F0", VA = "0x5C703F0")]
	public MapEditorCustomAssetPopup()
	{
		// Lifted from source/cpp/UI/MapEditorCustomAssetPopup.c (UI.MapEditorCustomAssetPopup$$.ctor): 2 lines keep C-only constructs
		List<GameObject> __this_00;
		List<StringSetting> __this_01;
		List<CustomAssetEntry> __this_02;
		StringSetting __this_03;

		if (Il2CppMethodInitialized_07547fb1 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_ctor) ;
			Il2CppMethodInitialized_07547fb1 = true;
		}
		__this_00 = new List<GameObject>();
		this._elements = __this_00;
		__this_01 = il2cpp_codegen_object_new(typeof(List<StringSetting>)) ;
		__this_01 = new List<object>();
		this._settings = __this_01;
		__this_02 = new List<CustomAssetEntry>();
		this._entries = __this_02;
		__this_03 = new StringSetting();
		this._platform = __this_03;
		this._platformKey = (String)**(ulong*)(g_data_07556758 + 0xb8);
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorCustomAssetPopup.c.

	// UI.MapEditorCustomAssetPopup$$.cctor: 4 lines keep C-only constructs
	static MapEditorCustomAssetPopup()
	{
		object first;
		System_Collections_Generic_IEnumerable_TSource__o source;
		String[] pSVar1;

		first = new string[1];
		if (first == null) {
			throw new NullReferenceException();
		}
		if (*(int)&first[1].monitor == 0) {
			throw new IndexOutOfRangeException();
		}
		first[2].klass = (Il2CppClass *)"Default";
		source = Enumerable.Concat<string>((System_Collections_Generic_IEnumerable_TSource__o)first, (System_Collections_Generic_IEnumerable_TSource__o)CustomAssetEntry.PlatformNames);
		pSVar1 = (String[])Enumerable.ToArray<string>(source);
		MapEditorCustomAssetPopup.PlatformOptions = pSVar1;
		return;
	}

	// UI.MapEditorCustomAssetPopup$$<Setup>b__15_0: clean
	private void Setup_b__15_0()
	{


		this.OnButtonClick("Add");
		return;
	}

	// UI.MapEditorCustomAssetPopup$$<Setup>b__15_1: clean
	private void Setup_b__15_1()
	{


		this.OnButtonClick("Clear");
		return;
	}

	// UI.MapEditorCustomAssetPopup$$<Setup>b__15_2: clean
	private void Setup_b__15_2()
	{


		this.OnButtonClick("Back");
		return;
	}

	// UI.MapEditorCustomAssetPopup$$<OnButtonClick>b__21_0: clean
	private void OnButtonClick_b__21_0()
	{


		this.OnButtonClick("ConfirmClear");
		return;
	}

	// UI.MapEditorCustomAssetPopup$$<OnButtonClick>b__21_1: clean
	private void OnButtonClick_b__21_1()
	{


		this.OnButtonClick("ConfirmAdd");
		return;
	}
}
