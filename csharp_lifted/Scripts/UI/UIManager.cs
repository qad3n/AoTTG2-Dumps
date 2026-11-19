// ==================== AoTTG2 cross-reference ====================
// Type: UI.UIManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/UIManager.c
// Prior real C# source (older reference): Assets/Scripts/UI/UIManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using ApplicationManagers;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20008E7")]
internal class UIManager : MonoBehaviour
{
	[Token(Token = "0x4002D08")]
	private const string InternalPrefix = "internal://";

	[Token(Token = "0x4002D09")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, JSONObject> _languages;

	[Token(Token = "0x4002D0A")]
	[FieldOffset(Offset = "0x8")]
	private static string _languageLettersName;

	[Token(Token = "0x4002D0B")]
	[FieldOffset(Offset = "0x10")]
	private static string _languageLetters;

	[Token(Token = "0x4002D0C")]
	[FieldOffset(Offset = "0x18")]
	private static Dictionary<string, JSONObject> _uiThemes;

	[Token(Token = "0x4002D0D")]
	[FieldOffset(Offset = "0x20")]
	private static Dictionary<Type, string> _lastCategories;

	[Token(Token = "0x4002D0E")]
	[FieldOffset(Offset = "0x28")]
	private static string _currentUITheme;

	[Token(Token = "0x4002D0F")]
	[FieldOffset(Offset = "0x30")]
	private static string _appliedLanguage;

	[Token(Token = "0x4002D10")]
	[FieldOffset(Offset = "0x38")]
	private static UIManager _instance;

	[Token(Token = "0x4002D11")]
	[FieldOffset(Offset = "0x40")]
	public static BaseMenu CurrentMenu;

	[Token(Token = "0x4002D12")]
	[FieldOffset(Offset = "0x48")]
	public static LoadingMenu LoadingMenu;

	[Token(Token = "0x4002D13")]
	[FieldOffset(Offset = "0x50")]
	public static float CurrentCanvasScale;

	[Token(Token = "0x4002D14")]
	[FieldOffset(Offset = "0x58")]
	public static List<string> AvailableProfileIcons;

	[Token(Token = "0x4002D15")]
	[FieldOffset(Offset = "0x60")]
	public static List<string> AvailableEmojis;

	[Token(Token = "0x4002D16")]
	[FieldOffset(Offset = "0x68")]
	public static HashSet<string> AnimatedEmojis;

	[Token(Token = "0x4002D17")]
	[FieldOffset(Offset = "0x70")]
	public static bool NeedResizeText;

	[Token(Token = "0x4002D18")]
	[FieldOffset(Offset = "0x71")]
	public static bool NeedResizeTextSecondFrame;

	[Token(Token = "0x4002D19")]
	private const int MinWordFitFontSize = 10;

	[Token(Token = "0x4002D1A")]
	[FieldOffset(Offset = "0x74")]
	private static int _lastFPS;

	[Token(Token = "0x4002D1B")]
	[FieldOffset(Offset = "0x78")]
	private static float _currentFrameTime;

	[Token(Token = "0x4002D1C")]
	[FieldOffset(Offset = "0x7C")]
	private static float _currentFrameCount;

	[Token(Token = "0x4002D1D")]
	[FieldOffset(Offset = "0x80")]
	private static float _maxFrameTime;

	[Token(Token = "0x60054AF")]
	[Address(RVA = "0x5CACDA0", Offset = "0x5CABDA0", VA = "0x5CACDA0")]
	public static void Init()
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$Init): 4 lines keep C-only constructs
		UI_UIManager_StaticFields pUVar1;
		UISettings pSVar2;
		StringSetting pSVar3;
		UIManager pUVar4;
		LoadingMenu pUVar5;
		Object target;
		OnLoadScene __this;
		OnPreLoadScene __this_00;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_075480f1 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_SingletonFactory_CreateSingleton_UIManager) ;
			Il2CppMethodInitialized_075480f1 = true;
		}
		pUVar4 = SingletonFactory.CreateSingleton<UIManager>((object)UIManager._instance);
		pUVar1 = typeof(UIManager).static_fields;
		pUVar1._instance = pUVar4;
		method_00 = (MethodInfo)&pUVar1._instance;
		UIManager.LoadLanguages();
		UIManager.LoadUIThemes();
		UIManager.LoadProfileIcons();
		pSVar2 = SettingsManager.UISettings;
		if ((pSVar2 != null) &&(pSVar3 = pSVar2.UITheme, pSVar3 != null)) {
			pUVar1 = typeof(UIManager).static_fields;
			pUVar1._currentUITheme = pSVar3._value;
			pUVar5 = ElementFactory.CreateMenu<LoadingMenu>("Prefabs/Panels/BackgroundMenu");
			pUVar1 = typeof(UIManager).static_fields;
			pUVar1.LoadingMenu = pUVar5;
			pUVar5 = UIManager.LoadingMenu;
			if (pUVar5 != null) {
				pUVar5.Setup();
				pUVar5 = UIManager.LoadingMenu;
				if (pUVar5 != null) {
					target = (Object)pUVar5.gameObject;
					Object.DontDestroyOnLoad(target);
					__this = new OnLoadScene(null, (intptr_t)MethodInfo_UI_UIManager_OnLoadScene) ;
					EventManager.add_OnLoadScene(__this);
					__this_00 = new OnPreLoadScene(null, (intptr_t)MethodInfo_UI_UIManager_OnPreLoadScene);
					EventManager.add_OnPreLoadScene(__this_00);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054B0")]
	[Address(RVA = "0x5CADDE0", Offset = "0x5CACDE0", VA = "0x5CADDE0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$OnPreLoadScene): clean
		AottgGisketchUiHost.CloseOverlays();
		return;
	}

	[Token(Token = "0x60054B1")]
	[Address(RVA = "0x5CADDF0", Offset = "0x5CACDF0", VA = "0x5CADDF0")]
	public static void OnLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$OnLoadScene): clean
		uint uVar1;
		LoadingMenu pUVar2;

		if (Il2CppMethodInitialized_075480f2 == false) {
			Il2CppMethodInitialized_075480f2 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			UIManager.SetMenu(sceneName);
		}
		else {
			UIManager.SetMenu(sceneName);
		}
		if (sceneName == 0) {
			return;
		}
		if (sceneName == 2) {
			if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			pUVar2 = UIManager.LoadingMenu;
			if (pUVar2 != null) {
				pUVar2.Show(true);
				return;
			}
		}
		else {
			if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			pUVar2 = UIManager.LoadingMenu;
			if (pUVar2 != null) {
				pUVar2.Hide();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054B2")]
	[Address(RVA = "0x5CAE320", Offset = "0x5CAD320", VA = "0x5CAE320")]
	public static void PlaySound(UISound sound)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$PlaySound): clean
		int kind;

		kind = (uint)(sound == 2) * 2;
		if (sound == 1) {
			kind = 1;
		}
		GisketchUiSounds.Play(kind);
		return;
	}

	[Token(Token = "0x60054B3")]
	[Address(RVA = "0x5CAE370", Offset = "0x5CAD370", VA = "0x5CAE370")]
	public static void SetLastCategory(Type t, string category)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$SetLastCategory): clean
		uint uVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;

		if (Il2CppMethodInitialized_075480f4 == false) {
			Il2CppMethodInitialized_075480f4 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (Dictionary<object, object>)UIManager._lastCategories;
		}
		else {
			pSVar2 = *(Dictionary<object, object>*)((long)(typeof(UIManager)).static_fields + 0x20);
		}
		if (pSVar2 != null) {
			bVar3 = pSVar2.ContainsKey((object)t);
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			if (bVar3) {
				if (uVar1 == 0) {
				}
				pSVar2 = (Dictionary<object, object>)UIManager._lastCategories;
				if (pSVar2 != null) {
					pSVar2.set_Item((object)t, (object)category);
					return;
				}
			}
			else {
				if (uVar1 == 0) {
				}
				pSVar2 = (Dictionary<object, object>)UIManager._lastCategories;
				if (pSVar2 != null) {
					pSVar2.Add((object)t, (object)category);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054B4")]
	[Address(RVA = "0x5CAE4B0", Offset = "0x5CAD4B0", VA = "0x5CAE4B0")]
	public static string GetLastcategory(Type t)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetLastcategory): clean
		uint uVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		String pSVar4;

		if (Il2CppMethodInitialized_075480f5 == false) {
			Il2CppMethodInitialized_075480f5 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (Dictionary<object, object>)UIManager._lastCategories;
		}
		else {
			pSVar2 = *(Dictionary<object, object>*)((long)(typeof(UIManager)).static_fields + 0x20);
		}
		if (pSVar2 != null) {
			bVar3 = pSVar2.ContainsKey((object)t);
			if (!bVar3) {
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pSVar2 = (Dictionary<object, object>)UIManager._lastCategories;
			if (pSVar2 != null) {
				pSVar4 = pSVar2.get_Item((object)t);
				return pSVar4;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054B5")]
	[Address(RVA = "0x5CAD860", Offset = "0x5CAC860", VA = "0x5CAD860")]
	private static void LoadProfileIcons()
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$LoadProfileIcons): 10 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<string> pSVar3;
		String[] pSVar4;
		HashSet<object> __this;
		bool bVar6;
		String pSVar7;
		JSONNode pSVar8;
		KeyValuePair<string, JSONNode> SVar9;
		JSONNode.Enumerator local_c8;
		JSONNode local_80;
		JSONNode.Enumerator local_78;

		pSVar7 = ResourcePaths.Info;
		pSVar7 = ResourceManager.LoadText(pSVar7, "ProfileIconInfo");
		pSVar8 = JSON.Parse(pSVar7);
		if ((pSVar8 != null) &&(pSVar8 = pSVar8.get_Item("Icons"), pSVar8 != null)) {
			local_78.unknown(pSVar8);
			local_c8.m_Array._current = local_78.m_Array._current;
			local_c8.m_Array._list = local_78.m_Array._list;
			local_c8.m_Array._index = local_78.m_Array._index;
			local_c8.m_Array._version = local_78.m_Array._version;
			local_c8.m_Object._current.value = local_78.m_Object._current.value;
			local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
			local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
			local_c8.m_Object._version = local_78.m_Object._version;
			local_c8.m_Object._index = local_78.m_Object._index;
			local_c8.m_Object._current.key = local_78.m_Object._current.key;
			local_c8.type = local_78.type;
			local_c8._4_4_ = local_78._4_4_;
			local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
			bVar6 = local_c8.MoveNext();
			if (bVar6) {
				do {
					SVar9 = local_c8.Current;
					pSVar3 = UIManager.AvailableProfileIcons;
					pSVar7 = ((JSONNode)SVar9.value);
					if (pSVar3 == null) goto label_05daddce;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pSVar4 = pSVar3._items;
					if (pSVar4 == null) goto label_05daddce;
					uVar2 = pSVar3._size;
					if (uVar2 < (uint)pSVar4.Length) {
						pSVar3._size = uVar2 + 1;
						pSVar4[(int)uVar2] = pSVar7;
					}
					else {
						pSVar3.AddWithResize((object)pSVar7);
					}
					bVar6 = local_c8.MoveNext();
				} while (bVar6);
			}
			pSVar7 = ResourcePaths.Info;
			pSVar7 = ResourceManager.LoadText(pSVar7, "EmoteInfo");
			pSVar8 = JSON.Parse(pSVar7);
			if ((pSVar8 != null) &&(local_80 = pSVar8, pSVar8 = pSVar8.get_Item("AllEmojis"), pSVar8 != null)) {
				local_78.unknown(pSVar8);
				local_c8.m_Array._current = local_78.m_Array._current;
				local_c8.m_Array._list = local_78.m_Array._list;
				local_c8.m_Array._index = local_78.m_Array._index;
				local_c8.m_Array._version = local_78.m_Array._version;
				local_c8.m_Object._current.value = local_78.m_Object._current.value;
				local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
				local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
				local_c8.m_Object._version = local_78.m_Object._version;
				local_c8.m_Object._index = local_78.m_Object._index;
				local_c8.m_Object._current.key = local_78.m_Object._current.key;
				local_c8.type = local_78.type;
				local_c8._4_4_ = local_78._4_4_;
				local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
				bVar6 = local_c8.MoveNext();
				if (bVar6) {
					do {
						SVar9 = local_c8.Current;
						pSVar3 = UIManager.AvailableEmojis;
						pSVar7 = ((JSONNode)SVar9.value);
						if (pSVar3 == null) goto label_05daddce;
						piVar1 = &pSVar3._version;
						*piVar1 = *piVar1 + 1;
						pSVar4 = pSVar3._items;
						if (pSVar4 == null) goto label_05daddce;
						uVar2 = pSVar3._size;
						if (uVar2 < (uint)pSVar4.Length) {
							pSVar3._size = uVar2 + 1;
							pSVar4[(int)uVar2] = pSVar7;
						}
						else {
							pSVar3.AddWithResize((object)pSVar7);
						}
						bVar6 = local_c8.MoveNext();
					} while (bVar6);
				}
				pSVar8 = local_80.get_Item("AnimatedEmojis");
				if (pSVar8 != null) {
					local_78.unknown(pSVar8);
					local_c8.m_Array._current = local_78.m_Array._current;
					local_c8.m_Array._list = local_78.m_Array._list;
					local_c8.m_Array._index = local_78.m_Array._index;
					local_c8.m_Array._version = local_78.m_Array._version;
					local_c8.m_Object._current.value = local_78.m_Object._current.value;
					local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
					local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
					local_c8.m_Object._version = local_78.m_Object._version;
					local_c8.m_Object._index = local_78.m_Object._index;
					local_c8.m_Object._current.key = local_78.m_Object._current.key;
					local_c8.type = local_78.type;
					local_c8._4_4_ = local_78._4_4_;
					local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
					bVar6 = local_c8.MoveNext();
					if (bVar6) {
						do {
							SVar9 = local_c8.Current;
							__this = (HashSet<object>)UIManager.AnimatedEmojis;
							pSVar7 = ((JSONNode)SVar9.value);
							if (__this == null) goto label_05daddce;
							__this.Add((object)pSVar7);
							bVar6 = local_c8.MoveNext();
						} while (bVar6);
					}
					return;
				}
			}
		}
	label_05daddce: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054B6")]
	[Address(RVA = "0x5CAE5C0", Offset = "0x5CAD5C0", VA = "0x5CAE5C0")]
	public static void ApplyLanguageAndTheme()
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$ApplyLanguageAndTheme): 2 lines keep C-only constructs
		byte bVar1;
		GeneralSettings pSVar2;
		StringSetting pSVar3;
		UISettings pSVar4;
		StringSetting pSVar5;
		String a;
		String a_00;
		UI_UIManager_StaticFields pUVar6;
		LoadingMenu pUVar7;
		bool bVar8;
		BaseMenu pUVar9;
		GameObject pUVar10;

		pSVar2 = SettingsManager.GeneralSettings;
		if ((((pSVar2 == null) ||(pSVar3 = pSVar2.Language, pSVar3 == null)) ||(pSVar4 = SettingsManager.UISettings, pSVar4 == null)) ||(pSVar5 = pSVar4.UITheme, pSVar5 == null)) goto label_05dae979;
		a = pSVar3._value;
		a_00 = pSVar5._value;
		bVar8 = (a == UIManager._appliedLanguage);
		if (bVar8) {
			bVar8 = (a_00 == UIManager._currentUITheme);
			if (bVar8) {
				return;
			}
		}
		pUVar6 = typeof(UIManager).static_fields;
		pUVar6._appliedLanguage = a;
		pUVar6 = typeof(UIManager).static_fields;
		pUVar6._currentUITheme = a_00;
		LanguageFonts.Apply();
		pUVar9 = UIManager.CurrentMenu;
		bVar8 = ((Object)pUVar9 != null);
		if (bVar8) {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
				pUVar9 = UIManager.CurrentMenu;
				if (pUVar9 != null) goto label_05dae7bb;
	label_05dae7e6: ;
				if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
					pUVar9 = UIManager.CurrentMenu;
				}
				if (pUVar9 != null) {
					bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
					if ((bVar1 <= (pUVar9.klass._2).typeHierarchyDepth) &&((pUVar9.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameMenu))) goto label_05dae838;
				}
			}
			else {
				pUVar9 = UIManager.CurrentMenu;
				if (pUVar9 == null) goto label_05dae7e6;
	label_05dae7bb: ;
				bVar1 = (typeof(MainMenu)._2).typeHierarchyDepth;
				if (((pUVar9.klass._2).typeHierarchyDepth < bVar1) ||((pUVar9.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(MainMenu))) goto label_05dae7e6;
	label_05dae838: ;
				pUVar9 = UIManager.CurrentMenu;
				if (pUVar9 == null) goto label_05dae979;
				pUVar9.RebuildPopups();
			}
			pUVar9 = UIManager.CurrentMenu;
			if (pUVar9 == null) goto label_05dae979;
			pUVar10 = pUVar9.gameObject;
			LanguageFonts.Localize(pUVar10);
		}
		pUVar7 = UIManager.LoadingMenu;
		bVar8 = ((Object)pUVar7 != null);
		if (!bVar8) {
	label_05dae967: ;
			AottgGisketchUiHost.RefreshLanguageAndTheme();
			return;
		}
		pUVar7 = UIManager.LoadingMenu;
		if (pUVar7 != null) {
			pUVar7.RebuildPopups();
			pUVar7 = UIManager.LoadingMenu;
			if (pUVar7 != null) {
				pUVar10 = pUVar7.gameObject;
				LanguageFonts.Localize(pUVar10);
				goto label_05dae967;
			}
		}
	label_05dae979: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054B7")]
	[Address(RVA = "0x5CADEE0", Offset = "0x5CACEE0", VA = "0x5CADEE0")]
	public static void SetMenu(SceneName sceneName)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$SetMenu): 7 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		UISettings pSVar3;
		StringSetting pSVar4;
		String pSVar5;
		UI_UIManager_StaticFields pUVar6;
		GeneralSettings pSVar7;
		Dictionary<object, object> __this;
		bool bVar8;
		Object obj;
		MainMenu pUVar9;
		MethodInfo* ppMVar10;
		BaseMenu pUVar11;

		LanguageFonts.Apply();
		pSVar3 = SettingsManager.UISettings;
		if ((pSVar3 == null) ||(pSVar4 = pSVar3.UITheme, pSVar4 == null)) goto label_05dae31a;
		pSVar5 = pSVar4._value;
		pUVar6 = typeof(UIManager).static_fields;
		pUVar6._currentUITheme = pSVar5;
		pSVar7 = SettingsManager.GeneralSettings;
		if ((pSVar7 == null) ||(pSVar4 = pSVar7.Language, pSVar4 == null)) goto label_05dae31a;
		pUVar6 = typeof(UIManager).static_fields;
		pUVar6._appliedLanguage = pSVar4._value;
		pUVar11 = UIManager.CurrentMenu;
		bVar8 = ((Object)pUVar11 != null);
		if (bVar8) {
			pUVar11 = UIManager.CurrentMenu;
			if (pUVar11 == null) goto label_05dae31a;
			obj = (Object)pUVar11.gameObject;
			Object.Destroy(obj);
		}
		switch(sceneName) {
		case 1:
			__this = (Dictionary<object, object>)UIManager._lastCategories;
			if (__this == null) goto label_05dae31a;
			__this.Clear();
			pUVar9 = ElementFactory.CreateDefaultMenu<MainMenu>();
			pUVar6 = typeof(UIManager).static_fields;
			pUVar6.CurrentMenu = (BaseMenu)pUVar9;
			ChatManager.Reset();
		default: ;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			goto joined_r0x05dae307;
		case 2:
			ppMVar10 = &MethodInfo_UI_ElementFactory_CreateDefaultMenu_InGameMenu;
			break;
		case 3:
			ppMVar10 = &MethodInfo_UI_ElementFactory_CreateDefaultMenu_MapEditorMenu;
			break;
		case 4:
			if ((typeof(CharacterEditorGameManager)._2).cctor_finished_or_no_cctor == 0) {
				cVar1 = CharacterEditorGameManager.HumanMode;
			}
			else {
				cVar1 = CharacterEditorGameManager.HumanMode;
			}
			if (cVar1 == false) {
				ppMVar10 = &MethodInfo_UI_ElementFactory_CreateDefaultMenu_CharacterEditorTitanMenu;
			}
			else {
				ppMVar10 = &MethodInfo_UI_ElementFactory_CreateDefaultMenu_CharacterEditorHumanMenu;
			}
			break;
		case 5:
			ppMVar10 = &MethodInfo_UI_ElementFactory_CreateDefaultMenu_SnapshotViewerMenu;
			break;
		case 6:
			ppMVar10 = &MethodInfo_UI_ElementFactory_CreateDefaultMenu_GalleryMenu;
		}
		pUVar11 = (BaseMenu)ElementFactory.CreateDefaultMenu<object>();
		pUVar6 = typeof(UIManager).static_fields;
		pUVar6.CurrentMenu = pUVar11;
		uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
	joined_r0x05dae307: ;
		if (uVar2 == 0) {
		}
		pUVar11 = UIManager.CurrentMenu;
		bVar8 = ((Object)pUVar11 != null);
		if (bVar8) {
			pUVar11 = UIManager.CurrentMenu;
			if (pUVar11 != null) {
				pUVar11.Setup();
				pUVar11 = UIManager.CurrentMenu;
				if (pUVar11 != null) {
					pUVar11.ApplyScale(sceneName);
					goto label_05dae22b;
				}
			}
	label_05dae31a: ;
			throw new NullReferenceException();
		}
	label_05dae22b: ;
		AottgGisketchUiHost.PrepareForScene(sceneName);
		UIManager.NeedResizeText = true;
		return;
	}

	[Token(Token = "0x60054B8")]
	[Address(RVA = "0x5CAE980", Offset = "0x5CAD980", VA = "0x5CAE980")]
	public static string GetProfileIcon(string icon)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetProfileIcon): clean
		List<string> pSVar1;
		bool bVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_075480f9 == false) {
			Il2CppMethodInitialized_075480f9 = true;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05daea02;
	label_05dae9a3: ;
			pSVar1 = UIManager.AvailableProfileIcons;
		}
		else {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05dae9a3;
	label_05daea02: ;
			pSVar1 = UIManager.AvailableProfileIcons;
		}
		if (pSVar1 == null) {
	label_05daea83: ;
			throw new NullReferenceException();
		}
		bVar2 = pSVar1.Contains((object)icon);
		if (!bVar2) {
			pSVar1 = UIManager.AvailableProfileIcons;
			if (pSVar1 == null) goto label_05daea83;
			icon = pSVar1.get_Item(0);
		}
		pSVar3 = String.Concat(icon, "Icon");
		return pSVar3;
	}

	[Token(Token = "0x60054B9")]
	[Address(RVA = "0x5CA7CE0", Offset = "0x5CA6CE0", VA = "0x5CA7CE0")]
	public static string GetLocaleFormatted(string category, string subCategory, string item = "", params object[] args)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetLocaleFormatted): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale(category, subCategory, item, "", "");
		pSVar1 = String.Format(pSVar1, args);
		return pSVar1;
	}

	[Token(Token = "0x60054BA")]
	[Address(RVA = "0x5C94190", Offset = "0x5C93190", VA = "0x5C94190")]
	public static string GetLocale(string category, string subCategory, string item = "", string forcedLanguage = "", string defaultValue = "")
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetLocale): 2 lines keep C-only constructs
		GeneralSettings pSVar1;
		StringSetting pSVar2;
		Dictionary<object, object> pSVar3;
		code *vtableDispatch;
		bool bVar4;
		JSONObject a;
		String pSVar5;
		JSONNode pSVar6;

		do {
			bVar4 = (forcedLanguage != (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (!bVar4) {
				pSVar1 = SettingsManager.GeneralSettings;
				if ((pSVar1 == null) ||(pSVar2 = pSVar1.Language, pSVar2 == null)) goto label_05d9454c;
				forcedLanguage = pSVar2._value;
			}
			pSVar3 = (Dictionary<object, object>)UIManager._languages;
			if (pSVar3 == null) goto label_05d9454c;
			bVar4 = pSVar3.ContainsKey((object)forcedLanguage);
			if (bVar4) {
				pSVar3 = (Dictionary<object, object>)UIManager._languages;
				if (pSVar3 == null) goto label_05d9454c;
				a = pSVar3.get_Item((object)forcedLanguage);
			}
			else {
				a = null;
			}
			bVar4 = (item != (String)**(ulong*)(g_data_07556758 + 0xb8));
			pSVar5 = subCategory;
			if (bVar4) {
				pSVar5 = String.Concat(subCategory, ".", item);
			}
			bVar4 = ((JSONNode)a == null);
			if (!bVar4) {
				if (a == null) goto label_05d9454c;
				pSVar6 = a.get_Item(category);
				bVar4 = (pSVar6 == null);
				if (!bVar4) {
					pSVar6 = a.get_Item(category) ;
					if (pSVar6 == null) {
	label_05d9454c: ;
						throw new NullReferenceException();
					}
					pSVar6 = pSVar6.get_Item(pSVar5);
					bVar4 = (pSVar6 == null);
					if (!bVar4) {
						pSVar6 = a.get_Item(category);
						if (pSVar6 != null) {
							pSVar6 = pSVar6.get_Item(pSVar5);
							if (pSVar6 != null) {
								vtableDispatch = *(code*)((long)pSVar6.klass + 0x1c8);
								pSVar5 = (String)(*vtableDispatch)(pSVar6,*(ulong)((long)pSVar6.klass + 0x1d0),vtableDispatch);
								return pSVar5;
							}
						}
						goto label_05d9454c;
					}
				}
			}
			bVar4 = (forcedLanguage == "English");
			if (bVar4) {
				bVar4 = (defaultValue != (String)**(ulong*)(g_data_07556758 + 0xb8));
				if (bVar4) {
					return defaultValue;
				}
				pSVar5 = String.Format("{0} locale error.", (object)pSVar5);
				return pSVar5;
			}
			forcedLanguage = "English";
		} while(true);
	}

	[Token(Token = "0x60054BB")]
	[Address(RVA = "0x5CAEA90", Offset = "0x5CADA90", VA = "0x5CAEA90")]
	public static bool HasLocale(string category, string subCategory, string item = "", string forcedLanguage = "")
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$HasLocale): clean
		GeneralSettings pSVar1;
		StringSetting pSVar2;
		Dictionary<object, object> pSVar3;
		bool bVar4;
		JSONObject pSVar5;
		JSONNode pSVar6;

		bVar4 = (forcedLanguage != (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (!bVar4) {
			pSVar1 = SettingsManager.GeneralSettings;
			if ((pSVar1 == null) ||(pSVar2 = pSVar1.Language, pSVar2 == null)) goto label_05daecfe;
			forcedLanguage = pSVar2._value;
		}
		pSVar3 = (Dictionary<object, object>)UIManager._languages;
		if (pSVar3 == null) goto label_05daecfe;
		bVar4 = pSVar3.ContainsKey((object)forcedLanguage);
		if (!bVar4) {
			return false;
		}
		bVar4 = (item != (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar4) {
			subCategory = String.Concat(subCategory, ".", item);
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05daebd6;
	label_05daec11: ;
			pSVar3 = (Dictionary<object, object>)UIManager._languages;
		}
		else {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05daec11;
	label_05daebd6: ;
			pSVar3 = (Dictionary<object, object>)UIManager._languages;
		}
		if ((pSVar3 != null) &&(pSVar5 = pSVar3.get_Item((object)forcedLanguage), pSVar5 != null)) {
			pSVar6 = pSVar5.get_Item(category);
			bVar4 = (pSVar6 != null);
			if (!bVar4) {
				return false;
			}
			pSVar6 = pSVar5.get_Item(category);
			if (pSVar6 != null) {
				pSVar6 = pSVar6.get_Item(subCategory);
				bVar4 = (pSVar6 != null);
				return bVar4;
			}
		}
	label_05daecfe: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054BC")]
	[Address(RVA = "0x5CAED10", Offset = "0x5CADD10", VA = "0x5CAED10")]
	public static string[] GetLocaleArray(string category, string subCategory, string item = "", string forcedLanguage = "")
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetLocaleArray): 7 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		GeneralSettings pSVar4;
		StringSetting pSVar5;
		Dictionary<object, object> pSVar6;
		JSONNode pSVar7;
		bool bVar9;
		JSONObject a;
		String pSVar10;
		JSONNode pSVar11;
		String[] pSVar12;
		List<string> __this;
		KeyValuePair<string, JSONNode> SVar13;
		JSONNode.Enumerator local_78;

		while(true) {
			local_78.m_Array._list = null;
			local_78.m_Array._index = 0;
			local_78.m_Array._version = 0;
			local_78.m_Object._current.value = null;
			local_78.m_Object._getEnumeratorRetType = 0;
			local_78.m_Object._36_4_ = 0;
			local_78.m_Object._version = 0;
			local_78.m_Object._index = 0;
			local_78.m_Object._current.key = null;
			local_78.type = 0;
			local_78._4_4_ = 0;
			local_78.m_Object._dictionary = null;
			local_78.m_Array._current = null;
			bVar9 = (forcedLanguage != (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (!bVar9) {
				pSVar4 = SettingsManager.GeneralSettings;
				if ((pSVar4 == null) ||(pSVar5 = pSVar4.Language, pSVar5 == null)) goto label_05daf306;
				forcedLanguage = pSVar5._value;
			}
			pSVar6 = (Dictionary<object, object>)UIManager._languages;
			if (pSVar6 == null) goto label_05daf306;
			bVar9 = pSVar6.ContainsKey((object)forcedLanguage);
			if (bVar9) {
				pSVar6 = (Dictionary<object, object>)UIManager._languages;
				if (pSVar6 == null) goto label_05daf306;
				a = pSVar6.get_Item((object)forcedLanguage);
			}
			else {
				a = null;
			}
			bVar9 = (item != (String)**(ulong*)(g_data_07556758 + 0xb8));
			pSVar10 = subCategory;
			if (bVar9) {
				pSVar10 = String.Concat(subCategory, ".", item);
			}
			bVar9 = ((JSONNode)a == null);
			if (!bVar9) {
				if (a == null) goto label_05daf306;
				pSVar11 = a.get_Item(category);
				bVar9 = (pSVar11 == null);
				if (!bVar9) {
					pSVar11 = a.get_Item(category);
					if (pSVar11 == null) goto label_05daf306;
					pSVar11 = pSVar11.get_Item(pSVar10);
					bVar9 = (pSVar11 == null);
					if (!bVar9) {
						__this = new List<string>();
						pSVar11 = a.get_Item(category);
						if ((pSVar11 == null) ||(pSVar11 = pSVar11.get_Item(pSVar10), pSVar11 == null)) goto label_05daf306;
						pSVar7 = pSVar11.klass;
						bVar2 = (typeof(JSONArray)._2).typeHierarchyDepth;
						if (((pSVar7._2).typeHierarchyDepth < bVar2) ||((pSVar7._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(JSONArray))) goto label_05daf34a;
						local_78.unknown(pSVar11);
						bVar9 = local_78.MoveNext();
						if (!bVar9) {
							if (__this == null) goto label_05daf306;
							goto label_05daf29e;
						}
						if (__this != null) {
							goto label_05daf1dc;
						}
						SVar13 = local_78.Current;
						pSVar11 = ((JSONNode)SVar13);
						if (pSVar11 == null) goto label_05daf306;
						pSVar7 = pSVar11.klass;
						bVar2 = (typeof(JSONString)._2).typeHierarchyDepth;
						if ((bVar2 <= (pSVar7._2).typeHierarchyDepth) &&((pSVar7._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(JSONString))) {
							pSVar11.get_Value();
							throw new NullReferenceException();
						}
						goto label_05daf34a;
					}
				}
			}
			bVar9 = (forcedLanguage == "English");
			if (bVar9) break;
			forcedLanguage = "English";
		}
		pSVar12 = (String[])new string[1];
		pSVar10 = String.Format("{0} locale error.", (object)pSVar10);
		if (pSVar12 != null) {
			if ((int)pSVar12.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pSVar12[0] = pSVar10;
			return pSVar12;
		}
	label_05daf306: ;
		throw new NullReferenceException();
	label_05daf1dc: ;
		SVar13 = local_78.Current;
		pSVar11 = ((JSONNode)SVar13);
		if (pSVar11 == null) goto label_05daf306;
		pSVar7 = pSVar11.klass;
		bVar2 = (typeof(JSONString)._2).typeHierarchyDepth;
		if (((pSVar7._2).typeHierarchyDepth < bVar2) ||((pSVar7._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(JSONString))) {
	label_05daf34a: ;
			throw new InvalidCastException();
		}
		pSVar10 = pSVar11.get_Value();
		piVar1 = &__this._version;
		*piVar1 = *piVar1 + 1;
		pSVar12 = __this._items;
		if (pSVar12 == null) goto label_05daf306;
		uVar3 = __this._size;
		if (uVar3 < (uint)pSVar12.Length) {
			__this._size = uVar3 + 1;
			pSVar12[(int)uVar3] = pSVar10;
		}
		else {
			__this.AddWithResize((object)pSVar10);
		}
		bVar9 = local_78.MoveNext();
		if (!bVar9) {
	label_05daf29e: ;
			pSVar12 = (String[])__this.ToArray();
			return pSVar12;
		}
		goto label_05daf1dc;
	}

	[Token(Token = "0x60054BD")]
	[Address(RVA = "0x5CAF360", Offset = "0x5CAE360", VA = "0x5CAF360")]
	public static string[] GetLocaleOptions(string key)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetLocaleOptions): clean
		int iVar1;
		String category;
		String item;
		Char[] separator;
		String[] pSVar2;
		MethodInfo method_00;
		String subCategory;

		separator = (Char[])new char[1];
		if (separator != null) {
			if ((int)separator.Length == 0) {
	label_05daf461: ;
				throw new IndexOutOfRangeException();
			}
			separator[0] = 0x2e;
			if (key != null) {
				pSVar2 = key.Split(separator, 3);
				if (pSVar2 != null) {
					iVar1 = (int)pSVar2.Length;
					if (iVar1 != 0) {
						if (iVar1 < 2) {
							method_00 = *(MethodInfo*)(g_data_07556758 + 0xb8);
							subCategory = (String)method_00.methodPointer;
						}
						else {
							subCategory = pSVar2[1];
							if (iVar1 == 2) {
								method_00 = *(MethodInfo*)(g_data_07556758 + 0xb8);
							}
							else {
								method_00 = (MethodInfo)(pSVar2.m_Items + 2);
							}
						}
						category = pSVar2[0];
						item = (String)method_00.methodPointer;
						pSVar2 = UIManager.GetLocaleOptions(category, subCategory, item);
						return pSVar2;
					}
					goto label_05daf461;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054BE")]
	[Address(RVA = "0x5CAF470", Offset = "0x5CAE470", VA = "0x5CAF470")]
	public static string[] GetLocaleOptions(string category, string subCategory, string item)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetLocaleOptions): clean
		String[] pSVar1;
		String[] pSVar2;

		pSVar1 = UIManager.GetLocaleArray(category, subCategory, item, "English");
		pSVar2 = UIManager.GetLocaleArray(category, subCategory, item, "");
		if ((pSVar2 == null) || (pSVar1 == null)) {
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length == (int)pSVar1.Length) {
			pSVar1 = pSVar2;
		}
		return pSVar1;
	}

	[Token(Token = "0x60054BF")]
	[Address(RVA = "0x5CAF530", Offset = "0x5CAE530", VA = "0x5CAF530")]
	public static string[] GetLocaleOptions(string category, string subCategory, string item, string[] fallback)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetLocaleOptions): clean
		bool bVar1;
		String[] pSVar2;

		bVar1 = UIManager.HasLocale(category, subCategory, item, "English");
		if (bVar1) {
			pSVar2 = UIManager.GetLocaleArray(category, subCategory, item, "");
			if (fallback == null) {
				fallback = null;
			}
			else {
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				if ((int)pSVar2.Length == (int)fallback.Length) {
					fallback = pSVar2;
				}
			}
		}
		return fallback;
	}

	[Token(Token = "0x60054C0")]
	[Address(RVA = "0x5C93470", Offset = "0x5C92470", VA = "0x5C93470")]
	public static string GetLocaleCommon(string item)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetLocaleCommon): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("Common", item, "", "", "");
		return pSVar1;
	}

	[Token(Token = "0x60054C1")]
	[Address(RVA = "0x5CAF610", Offset = "0x5CAE610", VA = "0x5CAF610")]
	public static string[] GetLocaleCommonArray(string item)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetLocaleCommonArray): clean
		String[] pSVar1;

		pSVar1 = UIManager.GetLocaleArray("Common", item, "", "");
		return pSVar1;
	}

	[Token(Token = "0x60054C2")]
	[Address(RVA = "0x5CAF680", Offset = "0x5CAE680", VA = "0x5CAF680")]
	public static Dictionary<string, Dictionary<string, string>> GetLocaleCategoryStrings(string pattern)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetLocaleCategoryStrings): clean
		uint startIndex;
		bool bVar1;
		Dictionary<string, Dictionary<string, string>> pSVar2;
		MethodInfo pMVar3;

		if (pattern != null) {
			pMVar3 = (MethodInfo *)"internal://";
			bVar1 = pattern.StartsWith("internal://");
			if (!bVar1) {
				return pSVar2;
			}
			if ("internal://" != null) {
				startIndex = ("internal://".fields)._stringLength;
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054C3")]
	[Address(RVA = "0x5CAF740", Offset = "0x5CAE740", VA = "0x5CAF740")]
	private static Dictionary<string, Dictionary<string, string>> GetInternalLocaleCategoryStrings(string category)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetInternalLocaleCategoryStrings): 32 lines keep C-only constructs
		Dictionary<object, object> __this;
		object key;
		object pIVar1;
		bool bVar2;
		sbyte cVar3;
		Dictionary<string, Dictionary<string, string>> __this_00;
		Dictionary<string, string> __this_01;
		JSONNode __this_02;
		String key_00;
		long plVar4;
		object value;
		byte[] auStack_148 = new byte[8];
		ulong uStack_140;
		object pIStack_138;
		object pIStack_130;
		byte[] auStack_110 = new byte[24];
		object pIStack_f8;
		int iStack_e8;
		uint uStack_e4;
		int iStack_d8;
		int iStack_d4;
		Dictionary<TKey, TValue> pSStack_c8;
		ulong uStack_a0;
		ulong uStack_90;
		Dictionary<TKey, TValue> pSStack_78;
		ulong uStack_50;
		ulong uStack_40;

		pIStack_138 = null;
		pIStack_130 = null;
		auStack_148 = (byte[])0x0;
		uStack_140._0_4_ = 0;
		uStack_140._4_4_ = 0;
		uStack_40._0_4_ = 0;
		uStack_40._4_4_ = 0;
		uStack_50._0_4_ = 0;
		uStack_50._4_4_ = 0;
		pSStack_78 = null;
		uStack_90._0_4_ = 0;
		uStack_90._4_4_ = 0;
		uStack_a0._0_4_ = 0;
		uStack_a0._4_4_ = 0;
		pSStack_c8 = null;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, string>>));
		__this_00 = new Dictionary<object, object>();
		__this = (Dictionary<object, object>)UIManager._languages;
		if (__this == null) {
			throw new NullReferenceException();
		}
		auStack_110.GetEnumerator(__this);
		pIStack_138 = (object)auStack_110._16_8_;
		pIStack_130 = pIStack_f8;
		auStack_148 = (byte[])auStack_110._0_8_;
		uStack_140 = (Dictionary<TKey, TValue>)auStack_110._8_8_;
		do {
			do {
				bVar2 = auStack_148.MoveNext();
				pIVar1 = pIStack_130;
				key = pIStack_138;
				if (!bVar2) {
					auStack_148.Dispose();
					return __this_00;
				}
				if (pIStack_130 == null) {
					throw new NullReferenceException();
				}
				cVar3 = (*pIStack_130.klass.vtable[0x1c].methodPtr)(pIStack_130,category,pIStack_130.klass.vtable[0x1c].method);
			} while (cVar3 == false);
			__this_01 = new Dictionary<string, string>();
			__this_02 = (JSONNode)(*pIVar1.klass.vtable[7].methodPtr)(pIVar1,category,pIVar1.klass.vtable[7].method);
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			auStack_110.get_Keys(__this_02);
			uStack_90._0_4_ = iStack_d8;
			uStack_90._4_4_ = iStack_d4;
			uStack_a0._0_4_ = iStack_e8;
			uStack_a0._4_4_ = uStack_e4;
			pSStack_c8 = (Dictionary<TKey, TValue>)auStack_110._0_8_;
			auStack_110.GetEnumerator(ref pSStack_c8);
			uStack_40._0_4_ = iStack_d8;
			uStack_40._4_4_ = iStack_d4;
			uStack_50._0_4_ = iStack_e8;
			uStack_50._4_4_ = uStack_e4;
			pSStack_78 = (Dictionary<TKey, TValue>)auStack_110._0_8_;
			while(true) {
				bVar2 = pSStack_78.MoveNext();
				if (!bVar2) break;
				key_00 = pSStack_78.Current;
				plVar4 = (long)(*pIVar1.klass.vtable[7].methodPtr)(pIVar1,category,pIVar1.klass.vtable[7].method);
				if (plVar4 == null) {
					throw new NullReferenceException();
				}
				plVar4 = (long)(**(code*)(*plVar4 + 0x1a8))(plVar4,key_00,*(ulong)(*plVar4 + 0x1b0));
				if (plVar4 == null) {
					throw new NullReferenceException();
				}
				cVar3 = (**(code*)(*plVar4 + 0x208))(plVar4);
				if (cVar3 != false) {
					plVar4 = (long)(*pIVar1.klass.vtable[7].methodPtr)(pIVar1,category,pIVar1.klass.vtable[7].method);
					if (plVar4 == null) {
						throw new NullReferenceException();
					}
					plVar4 = (long)(**(code*)(*plVar4 + 0x1a8))(plVar4,key_00,*(ulong)(*plVar4 + 0x1b0));
					if (plVar4 == null) {
						throw new NullReferenceException();
					}
					value = (object)(**(code*)(*plVar4 + 0x1c8))(plVar4,*(ulong)(*plVar4 + 0x1d0));
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					__this_01.set_Item((object)key_00, value);
				}
			}
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.set_Item(key, (object)__this_01);
		} while(true);
	}

	[Token(Token = "0x60054C4")]
	[Address(RVA = "0x5CAFC60", Offset = "0x5CAEC60", VA = "0x5CAFC60")]
	private static Dictionary<string, Dictionary<string, string>> GetExternalLocaleCategoryStrings(string uniqueName)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetExternalLocaleCategoryStrings): 16 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		JSONNode pSVar3;
		bool bVar4;
		Dictionary<string, Dictionary<string, string>> __this;
		String pSVar5;
		String[] pSVar6;
		ulong uVar7;
		JSONNode pSVar8;
		JSONNode pSVar9;
		Dictionary<string, string> __this_00;
		String pSVar10;
		String value;
		Il2CppClass klass;
		Exception __this_01;
		MethodInfo lastManagedFrame;
		ulong uVar11;
		JSONNode.Enumerator SStack_110;
		JSONNode.Enumerator SStack_c8;
		JSONNode.Enumerator SStack_78;

		SStack_78.m_Array._list = null;
		SStack_78.m_Array._index = 0;
		SStack_78.m_Array._version = 0;
		SStack_78.m_Object._current.value = null;
		SStack_78.m_Object._getEnumeratorRetType = 0;
		SStack_78.m_Object._36_4_ = 0;
		SStack_78.m_Object._version = 0;
		SStack_78.m_Object._index = 0;
		SStack_78.m_Object._current.key = null;
		SStack_78.type = 0;
		SStack_78._4_4_ = 0;
		SStack_78.m_Object._dictionary = null;
		SStack_78.m_Array._current = null;
		SStack_c8.m_Array._list = null;
		SStack_c8.m_Array._index = 0;
		SStack_c8.m_Array._version = 0;
		SStack_c8.m_Object._current.value = null;
		SStack_c8.m_Object._getEnumeratorRetType = 0;
		SStack_c8.m_Object._36_4_ = 0;
		SStack_c8.m_Object._version = 0;
		SStack_c8.m_Object._index = 0;
		SStack_c8.m_Object._current.key = null;
		SStack_c8.type = 0;
		SStack_c8._4_4_ = 0;
		SStack_c8.m_Object._dictionary = null;
		SStack_c8.m_Array._current = null;
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, string>>));
		__this = new Dictionary<object, object>();
		pSVar5 = String.Concat(FolderPaths.CustomLocale, "/", uniqueName);
		bVar4 = Directory.Exists(pSVar5);
		if (bVar4) {
			pSVar6 = Directory.GetFiles(pSVar5, "*.json");
			if (pSVar6 == null) {
				throw new NullReferenceException();
			}
			if (pSVar6.Length != 0) {
				if (0 < (int)pSVar6.Length) {
					uVar7 = pSVar6.Length & 0xffffffff;
					uVar11 = 0;
					do {
						if (uVar7 <= uVar11) {
							throw new IndexOutOfRangeException();
						}
						pSVar5 = File.ReadAllText(pSVar6[uVar11]);
						pSVar8 = JSON.Parse(pSVar5);
						if (pSVar8 == null) {
							throw new NullReferenceException();
						}
						pSVar3 = pSVar8.klass;
						bVar1 = (typeof(JSONObject)._2).typeHierarchyDepth;
						if (((pSVar3._2).typeHierarchyDepth < bVar1) ||((pSVar3._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(JSONObject))) {
							throw new InvalidCastException();
						}
						bVar4 = pSVar8.HasKey("Name");
						if (bVar4) {
							pSVar9 = pSVar8.get_Item("Name");
							if (pSVar9 == null) {
								throw new NullReferenceException();
							}
							pSVar5 = pSVar9.get_Value();
							__this_00 = il2cpp_codegen_object_new(typeof(Dictionary<string, string>));
							__this_00 = new Dictionary<object, object>();
							SStack_110 = pSVar8.Keys;
							SStack_c8.m_Array._current = SStack_110.m_Array._current;
							SStack_c8.m_Array._list = SStack_110.m_Array._list;
							SStack_c8.m_Array._index = SStack_110.m_Array._index;
							SStack_c8.m_Array._version = SStack_110.m_Array._version;
							SStack_c8.m_Object._current.value = SStack_110.m_Object._current.value ;
							SStack_c8.m_Object._getEnumeratorRetType = SStack_110.m_Object._getEnumeratorRetType ;
							SStack_c8.m_Object._36_4_ = SStack_110.m_Object._36_4_;
							SStack_c8.m_Object._version = SStack_110.m_Object._version;
							SStack_c8.m_Object._index = SStack_110.m_Object._index;
							SStack_c8.m_Object._current.key = SStack_110.m_Object._current.key;
							SStack_c8.type = SStack_110.type;
							SStack_c8._4_4_ = SStack_110._4_4_;
							SStack_c8.m_Object._dictionary = SStack_110.m_Object._dictionary;
							SStack_110 = SStack_c8.GetEnumerator();
							SStack_78.m_Array._current = SStack_110.m_Array._current;
							SStack_78.m_Array._list = SStack_110.m_Array._list;
							SStack_78.m_Array._index = SStack_110.m_Array._index;
							SStack_78.m_Array._version = SStack_110.m_Array._version;
							SStack_78.m_Object._current.value = SStack_110.m_Object._current.value ;
							SStack_78.m_Object._getEnumeratorRetType = SStack_110.m_Object._getEnumeratorRetType ;
							SStack_78.m_Object._36_4_ = SStack_110.m_Object._36_4_;
							SStack_78.m_Object._version = SStack_110.m_Object._version;
							SStack_78.m_Object._index = SStack_110.m_Object._index;
							SStack_78.m_Object._current.key = SStack_110.m_Object._current.key;
							SStack_78.type = SStack_110.type;
							SStack_78._4_4_ = SStack_110._4_4_;
							SStack_78.m_Object._dictionary = SStack_110.m_Object._dictionary;
							if (__this_00 == null) {
								while (bVar4 = SStack_78.MoveNext()) {
									pSVar10 = SStack_78.Current ;
									bVar4 = (pSVar10 == "Name");
									if (!bVar4) {
										pSVar9 = pSVar8.get_Item(pSVar10);
										if (pSVar9 == null) goto label_05db016b;
										bVar4 = pSVar9.get_IsString();
										if (bVar4) {
											pSVar8 = pSVar8.get_Item(pSVar10);
											if (pSVar8 != null) {
												pSVar8.get_Value();
												throw new NullReferenceException();
											}
											goto label_05db012f;
										}
									}
								}
							}
							else {
								while (bVar4 = SStack_78.MoveNext()) {
									pSVar10 = SStack_78.Current ;
									bVar4 = (pSVar10 == "Name");
									if (!bVar4) {
										pSVar9 = pSVar8.get_Item(pSVar10);
										if (pSVar9 == null) {
	label_05db016b: ;
											throw new NullReferenceException();
										}
										bVar4 = pSVar9.get_IsString();
										if (bVar4) {
											pSVar9 = pSVar8.get_Item(pSVar10);
											if (pSVar9 == null) {
	label_05db012f: ;
												throw new NullReferenceException();
											}
											value = pSVar9.get_Value();
											__this_00.set_Item((object)pSVar10, (object)value);
										}
									}
								}
							}
							if (__this == null) {
								throw new NullReferenceException();
							}
							__this.set_Item((object)pSVar5, (object)__this_00);
						}
						uVar11 = uVar11 + 1;
						uVar2 = (uint)pSVar6.Length;
						uVar7 = (ulong)uVar2;
					} while ((long)uVar11 < (long)(int)uVar2);
				}
				return __this;
			}
		}
		pSVar10 = il2cpp_codegen_get_runtime_metadata(&"Failed to find localization files: ");
		pSVar5 = String.Concat(pSVar10, pSVar5);
		klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
		__this_01 = (Exception)il2cpp_codegen_object_new(klass);
		__this_01 = new Exception(pSVar5);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_UIManager_GetExternalLocaleCategoryStrings);
		throw (object)__this_01;
	}

	[Token(Token = "0x60054C5")]
	[Address(RVA = "0x5CB0370", Offset = "0x5CAF370", VA = "0x5CB0370")]
	public static string[] GetLanguages()
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetLanguages): 7 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> __this;
		String item;
		bool bVar4;
		List<string> __this_00;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		String[] pSVar5;
		byte[] local_68 = new byte[8];
		String local_58;
		byte[] local_48 = new byte[16];
		String local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		__this_00 = new List<string>();
		__this = (Dictionary<object, object>)UIManager._languages;
		if ((__this != null) &&(__this_01 = __this.Keys, __this_01 != null)) {
			local_48.GetEnumerator(__this_01) ;
			local_58 = local_38;
			local_68 = (byte[])local_48._0_8_;
			local_48._0_8_ = null;
			local_48._8_8_ = local_68;
			if (__this_00 == null) {
				local_48._8_8_ = local_68;
				bVar4 = local_68.MoveNext();
				if (bVar4) {
					bVar4 = (local_58 == "English");
					if (bVar4) {
						throw new NullReferenceException();
					}
	label_05db0611: ;
					throw new NullReferenceException();
				}
			}
			else {
				while (true) {
					bVar4 = local_68.MoveNext();
					item = local_58;
					if (!(bVar4)) break;
					bVar4 = (local_58 == "English");
					if (bVar4) {
						__this_00.Insert(0, (object)item);
					}
					else {
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar5 = __this_00._items;
						if (pSVar5 == null) goto label_05db0611;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar5.Length) {
							__this_00._size = uVar2 + 1;
							pSVar5[(int)uVar2] = item;
						}
						else {
							__this_00.AddWithResize((object)item);
						}
					}
				}
			}
			local_68.Dispose();
			if (__this_00 != null) {
				pSVar5 = (String[])__this_00.ToArray();
				return pSVar5;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054C6")]
	[Address(RVA = "0x5CB0690", Offset = "0x5CAF690", VA = "0x5CB0690")]
	public static string GetLanguageLetters()
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetLanguageLetters): clean
		GeneralSettings pSVar1;
		StringSetting pSVar2;
		Dictionary<object, object> __this;
		UI_UIManager_StaticFields pUVar3;
		object node;
		bool bVar4;
		HashSet<char> __this_00;
		List<char> __this_01;
		Char[] val;
		String pSVar5;
		object local_28;

		local_28 = null;
		pSVar1 = SettingsManager.GeneralSettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.Language, pSVar2 != null)) {
			pSVar5 = pSVar2._value;
			bVar4 = (UIManager._languageLettersName == pSVar5);
			if (bVar4) {
	label_05db08b5: ;
				return UIManager._languageLetters;
			}
			__this_00 = new HashSet<char>();
			__this = (Dictionary<object, object>)UIManager._languages;
			if (__this != null) {
				bVar4 = __this.TryGetValue((object)pSVar5, ref local_28);
				node = local_28;
				if (bVar4) {
					if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
					}
					UIManager.CollectLetters((JSONNode)node, __this_00);
				}
				pUVar3 = typeof(UIManager).static_fields;
				pUVar3._languageLettersName = pSVar5;
				__this_01 = new List<char>((IEnumerable<T>)__this_00);
				if (__this_01 != null) {
					val = __this_01.ToArray();
					pSVar5 = 0x0.CreateString(val);
					pUVar3 = typeof(UIManager).static_fields;
					pUVar3._languageLetters = pSVar5;
					goto label_05db08b5;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054C7")]
	[Address(RVA = "0x5CB08E0", Offset = "0x5CAF8E0", VA = "0x5CB08E0")]
	private static void CollectLetters(JSONNode node, HashSet<char> letters)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$CollectLetters): 7 lines keep C-only constructs
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		ushort uVar5;
		String __this;
		object pIVar6;
		VirtualInvokeData pVVar7;
		ulong uVar8;
		int index;
		long lVar9;
		object local_48;
		byte local_38;

		if (node != null) {
			bVar4 = node.get_IsString();
			if (bVar4) {
				__this = node.get_Value();
				if (__this != null) {
					if (__this._stringLength < 1) {
						return;
					}
					index = 0;
					if (letters != null) {
						do {
							uVar5 = __this.get_Chars(index);
							bVar4 = Char.IsLetter(uVar5);
							if (bVar4) {
								letters.Add(uVar5);
							}
							index = index + 1;
						} while (index < __this._stringLength);
						return;
					}
					while(true) {
						uVar5 = __this.get_Chars(index);
						bVar4 = Char.IsLetter(uVar5);
						if (bVar4) break;
						index = index + 1;
						if (__this._stringLength <= index) {
							return;
						}
					}
				}
			}
			else {
				pIVar6 = (object)node.get_Children();
				if (pIVar6 != null) {
					pIVar2 = pIVar6.klass;
					uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
					local_48 = pIVar6.Dispose();
					local_38 = (byte)&local_48;
					do {
						pIVar6 = local_48;
						if (local_48 == null) {
							throw new NullReferenceException();
						}
						pIVar2 = local_48.klass;
						uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
						bVar4 = pIVar6.Dispose();
						pIVar6 = local_48;
						if (!bVar4) {
							if (local_48 == null) {
								return;
							}
							pIVar2 = local_48.klass;
							uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
							if (uVar8 == 0) goto label_05db0cbf;
							pIVar3 = (pIVar2._1).interfaceOffsets;
							lVar9 = 0;
							goto label_05db0cb0;
						}
						if (local_48 == null) {
							throw new NullReferenceException();
						}
						pIVar2 = local_48.klass;
						uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
						pIVar6 = pIVar6.Dispose();
						if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
						}
						UIManager.CollectLetters((JSONNode)pIVar6, letters);
					} while(true);
				}
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar9 = lVar9 + 0x10;
			if (!(uVar8 * 0x10 != lVar9)) break;
	label_05db0cb0: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar9) == typeof(IDisposable)) {
				pVVar7 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9);
				goto label_05db0cdd;
			}
		}
	label_05db0cbf: ;
	label_05db0cdd: ;
		pIVar6.Dispose();
		return;
	}

	[Token(Token = "0x60054C8")]
	[Address(RVA = "0x5CB0D20", Offset = "0x5CAFD20", VA = "0x5CB0D20")]
	private static void PrepareDisplayText(JSONObject language)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$PrepareDisplayText): 4 lines keep C-only constructs
		bool bVar1;
		MethodInfo method_00;
		JSONNode node;
		JSONNode.Enumerator local_108;
		JSONNode.Enumerator local_b8;
		JSONNode.Enumerator local_70;

		local_108.m_Array._list = null;
		local_108.m_Array._index = 0;
		local_108.m_Array._version = 0;
		local_108.m_Object._current.value = null;
		local_108.m_Object._getEnumeratorRetType = 0;
		local_108.m_Object._36_4_ = 0;
		local_108.m_Object._version = 0;
		local_108.m_Object._index = 0;
		local_108.m_Object._current.key = null;
		local_108.type = 0;
		local_108._4_4_ = 0;
		local_108.m_Object._dictionary = null;
		local_108.m_Array._current = null;
		if (language == null) {
			throw new NullReferenceException();
		}
		local_70 = language.Keys;
		local_b8.m_Array._current = local_70.m_Array._current;
		local_b8.m_Array._list = local_70.m_Array._list;
		local_b8.m_Array._index = local_70.m_Array._index;
		local_b8.m_Array._version = local_70.m_Array._version;
		local_b8.m_Object._current.value = local_70.m_Object._current.value;
		local_b8.m_Object._getEnumeratorRetType = local_70.m_Object._getEnumeratorRetType;
		local_b8.m_Object._36_4_ = local_70.m_Object._36_4_;
		local_b8.m_Object._version = local_70.m_Object._version;
		local_b8.m_Object._index = local_70.m_Object._index;
		local_b8.m_Object._current.key = local_70.m_Object._current.key;
		local_b8.type = local_70.type;
		local_b8._4_4_ = local_70._4_4_;
		local_b8.m_Object._dictionary = local_70.m_Object._dictionary;
		local_108 = local_b8.GetEnumerator();
		bVar1 = local_108.MoveNext();
		if (bVar1) {
			do {
				method_00 = (MethodInfo)local_108.Current;
				bVar1 = ((String)method_00 != "Name");
				if (bVar1) {
					node = language.get_Item((String)method_00);
					UIManager.PrepareDisplayText(node);
				}
				bVar1 = local_108.MoveNext();
			} while (bVar1);
		}
		return;
	}

	[Token(Token = "0x60054C9")]
	[Address(RVA = "0x5CB0E90", Offset = "0x5CAFE90", VA = "0x5CB0E90")]
	private static void PrepareDisplayText(JSONNode node)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$PrepareDisplayText): 8 lines keep C-only constructs
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		String pSVar5;
		object pIVar6;
		VirtualInvokeData pVVar7;
		ulong uVar8;
		long lVar9;
		object local_40;
		object* local_30;

		if (node != null) {
			bVar4 = node.get_IsString();
			if (bVar4) {
				pSVar5 = node.get_Value();
				pSVar5 = GisketchArabicText.ToVisual(pSVar5, true);
				node.set_Value(pSVar5) ;
				return;
			}
			pIVar6 = (object)node.get_Children();
			if (pIVar6 != null) {
				pIVar2 = pIVar6.klass;
				uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
				local_40 = pIVar6.Dispose();
				local_30 = &local_40;
				do {
					pIVar6 = local_40;
					if (local_40 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = local_40.klass;
					uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
					bVar4 = pIVar6.Dispose();
					pIVar6 = local_40;
					if (!bVar4) {
						if (local_40 == null) {
							return;
						}
						pIVar2 = local_40.klass;
						uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar8 == 0) goto label_05db11bf;
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar9 = 0;
						goto label_05db11b0;
					}
					if (local_40 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = local_40.klass;
					uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
					pIVar6 = pIVar6.Dispose();
					UIManager.PrepareDisplayText((JSONNode)pIVar6);
				} while(true);
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar9 = lVar9 + 0x10;
			if (!(uVar8 * 0x10 != lVar9)) break;
	label_05db11b0: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar9) == typeof(IDisposable)) {
				pVVar7 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9);
				goto label_05db11dd;
			}
		}
	label_05db11bf: ;
	label_05db11dd: ;
		pIVar6.Dispose();
		return;
	}

	[Token(Token = "0x60054CA")]
	[Address(RVA = "0x5CACFF0", Offset = "0x5CABFF0", VA = "0x5CACFF0")]
	private static void LoadLanguages()
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$LoadLanguages): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		uint uVar3;
		Dictionary<object, object> pSVar4;
		GeneralSettings pSVar5;
		StringSetting pSVar6;
		bool bVar7;
		String[] pSVar8;
		ulong uVar9;
		String pSVar10;
		JSONObject language;
		JSONNode pSVar11;
		ulong uVar12;

		bVar7 = Directory.Exists(FolderPaths.LanguagesPath);
		uVar2 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
		if (!bVar7) {
			if (uVar2 == 0) {
			}
			Directory.CreateDirectory(FolderPaths.LanguagesPath);
			Debug.Log((Il2CppObject *)"No language folder found, creating it.");
			return;
		}
		if (uVar2 == 0) {
		}
		pSVar8 = Directory.GetFiles(FolderPaths.LanguagesPath, "*.json");
		if (pSVar8 != null) {
			if (0 < (int)pSVar8.Length) {
				uVar9 = pSVar8.Length & 0xffffffff;
				uVar12 = 0;
				do {
					if (uVar9 <= uVar12) {
						throw new IndexOutOfRangeException();
					}
					pSVar10 = File.ReadAllText(pSVar8[uVar12]);
					language = (JSONObject)JSON.Parse(pSVar10);
					if (language != null) {
						bVar1 = (typeof(JSONObject)._2).typeHierarchyDepth;
						if (((language.klass._2).typeHierarchyDepth < bVar1) ||((language.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(JSONObject))) {
							throw new InvalidCastException();
						}
					}
					if (language == null) goto label_05dad413;
					pSVar4 = (Dictionary<object, object>)UIManager._languages;
					pSVar11 = language.get_Item("Name");
					pSVar10 = ((JSONNode)pSVar11);
					if (pSVar4 == null) goto label_05dad413;
					bVar7 = pSVar4.ContainsKey((object)pSVar10);
					if (!bVar7) {
						pSVar11 = language.get_Item("Name");
						if (pSVar11 == null) goto label_05dad413;
						pSVar10 = pSVar11.get_Value();
						UIManager.PrepareDisplayText(language);
						pSVar4 = (Dictionary<object, object>)UIManager._languages;
						if (pSVar4 == null) goto label_05dad413;
						pSVar4.Add((object)pSVar10, (object)language);
					}
					uVar12 = uVar12 + 1;
					uVar3 = (uint)pSVar8.Length;
					uVar9 = (ulong)uVar3;
				} while ((long)uVar12 < (long)(int)uVar3);
			}
			pSVar5 = SettingsManager.GeneralSettings;
			if (((pSVar5 != null) &&(pSVar6 = pSVar5.Language, pSVar6 != null)) &&(pSVar4 = (Dictionary<object, object>)UIManager._languages, pSVar4 != null)) {
				bVar7 = pSVar4.ContainsKey((object)pSVar6._value);
				if (bVar7) {
					return;
				}
				pSVar5 = SettingsManager.GeneralSettings;
				if ((pSVar5 != null) &&(pSVar6 = pSVar5.Language, pSVar6 != null)) {
					pSVar6.Value = (Il2CppObject *)"English";
					pSVar5 = SettingsManager.GeneralSettings;
					if (pSVar5 != null) {
						pSVar5.Save();
						return;
					}
				}
			}
		}
	label_05dad413: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054CB")]
	[Address(RVA = "0x5CA4A00", Offset = "0x5CA3A00", VA = "0x5CA4A00")]
	public static Color GetThemeColor(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetThemeColor): 9 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		Dictionary<object, object> pSVar5;
		JSONNode pSVar6;
		Single[] pSVar7;
		bool bVar9;
		JSONObject a;
		JSONNode pSVar10;
		String pSVar11;
		List<float> __this;
		float fVar12;
		KeyValuePair<string, JSONNode> SVar13;
		Color UVar14;
		JSONNode.Enumerator local_f8;
		float local_a8;
		float local_98;
		float local_88;
		JSONNode.Enumerator local_78;

		local_f8.m_Array._list = null;
		local_f8.m_Array._index = 0;
		local_f8.m_Array._version = 0;
		local_f8.m_Object._current.value = null;
		local_f8.m_Object._getEnumeratorRetType = 0;
		local_f8.m_Object._36_4_ = 0;
		local_f8.m_Object._version = 0;
		local_f8.m_Object._index = 0;
		local_f8.m_Object._current.key = null;
		local_f8.type = 0;
		local_f8._4_4_ = 0;
		local_f8.m_Object._dictionary = null;
		local_f8.m_Array._current = null;
		pSVar5 = (Dictionary<object, object>)UIManager._uiThemes;
		if (pSVar5 == null) {
	label_05da5020: ;
			throw new NullReferenceException();
		}
		bVar9 = pSVar5.ContainsKey((object)UIManager._currentUITheme);
		if (bVar9) {
			pSVar5 = (Dictionary<object, object>)UIManager._uiThemes;
			if (pSVar5 == null) goto label_05da5020;
			a = pSVar5.get_Item((object)UIManager._currentUITheme);
			uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
			a = null;
			uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar9 = ((JSONNode)a == null);
		if (!bVar9) {
			if (a == null) goto label_05da5020;
			pSVar10 = a.get_Item(panel);
			bVar9 = (pSVar10 == null);
			if (!bVar9) {
				pSVar10 = a.get_Item(panel);
				if (pSVar10 == null) goto label_05da5020;
				pSVar10 = pSVar10.get_Item(category);
				bVar9 = (pSVar10 == null);
				if (!bVar9) {
					pSVar10 = a.get_Item(panel);
					if ((pSVar10 == null) ||(pSVar10 = pSVar10.get_Item(category), pSVar10 == null)) goto label_05da5020;
					pSVar10 = pSVar10.get_Item(item);
					bVar9 = (pSVar10 == null);
					if (!bVar9) {
						__this = new List<float>();
						pSVar10 = a.get_Item(panel);
						if (pSVar10 == null) {
							throw new NullReferenceException();
						}
						pSVar10 = pSVar10.get_Item(category);
						if (pSVar10 == null) {
							throw new NullReferenceException();
						}
						pSVar10 = pSVar10.get_Item(item);
						if (pSVar10 == null) {
							throw new NullReferenceException();
						}
						pSVar6 = pSVar10.klass;
						bVar2 = (typeof(JSONArray)._2).typeHierarchyDepth;
						if (((pSVar6._2).typeHierarchyDepth < bVar2) ||((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(JSONArray))) {
							throw new InvalidCastException();
						}
						local_78.unknown(pSVar10);
						local_f8.m_Array._current = local_78.m_Array._current;
						local_f8.m_Array._list = local_78.m_Array._list;
						local_f8.m_Array._index = local_78.m_Array._index;
						local_f8.m_Array._version = local_78.m_Array._version;
						local_f8.m_Object._current.value = local_78.m_Object._current.value;
						local_f8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
						local_f8.m_Object._36_4_ = local_78.m_Object._36_4_;
						local_f8.m_Object._version = local_78.m_Object._version;
						local_f8.m_Object._index = local_78.m_Object._index;
						local_f8.m_Object._current.key = local_78.m_Object._current.key;
						local_f8.type = local_78.type;
						local_f8._4_4_ = local_78._4_4_;
						local_f8.m_Object._dictionary = local_78.m_Object._dictionary;
						if (__this == null) {
							bVar9 = local_f8.MoveNext();
							if (!bVar9) {
								throw new NullReferenceException();
							}
							SVar13 = local_f8.Current;
							pSVar10 = ((JSONNode)SVar13);
							if (pSVar10 != null) {
								pSVar6 = pSVar10.klass;
								bVar2 = (typeof(JSONNumber)._2).typeHierarchyDepth;
								if ((bVar2 <= (pSVar6._2).typeHierarchyDepth) &&((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(JSONNumber))) {
									pSVar11 = pSVar10.get_Value();
									Single.Parse(pSVar11);
	label_05da50d6: ;
									throw new NullReferenceException();
								}
	label_05da50db: ;
								throw new InvalidCastException();
							}
	label_05da5088: ;
							throw new NullReferenceException();
						}
						while (bVar9 = local_f8.MoveNext()) {
							SVar13 = local_f8.Current;
							pSVar10 = ((JSONNode)SVar13);
							if (pSVar10 == null) goto label_05da5088;
							pSVar6 = pSVar10.klass;
							bVar2 = (typeof(JSONNumber)._2).typeHierarchyDepth;
							if (((pSVar6._2).typeHierarchyDepth < bVar2) ||((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(JSONNumber))) goto label_05da50db;
							pSVar11 = pSVar10.get_Value() ;
							fVar12 = Single.Parse(pSVar11);
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar7 = __this._items;
							if (pSVar7 == null) goto label_05da50d6;
							uVar4 = __this._size;
							if (uVar4 < (uint)pSVar7.Length) {
								__this._size = uVar4 + 1;
								pSVar7[(int)uVar4] = fVar12 / 255.0;
							}
							else {
								__this.AddWithResize(fVar12 / 255.0);
							}
						}
						local_88 = __this.get_Item(0);
						local_98 = __this.get_Item(1);
						local_a8 = __this.get_Item(2);
						fVar12 = __this.get_Item(3);
						goto label_05da4d70;
					}
				}
			}
		}
		bVar9 = (panel != fallbackPanel);
		if (bVar9) {
			UVar14 = UIManager.GetThemeColor(fallbackPanel, category, item, fallbackPanel);
			local_a8 = UVar14.b;
			fVar12 = UVar14.a;
			local_88 = UVar14.r;
			local_98 = UVar14.g;
		}
		else {
			pSVar11 = String.Format("{0} {1} {2} theme error.", (object)panel, (object)category, (object)item);
			Debug.Log((object)pSVar11);
			local_a8 = 1.0;
			fVar12 = 1.0;
			local_88 = local_a8;
			local_98 = fVar12;
		}
	label_05da4d70: ;
		UVar14.g = local_98;
		UVar14.r = local_88;
		UVar14.a = fVar12;
		UVar14.b = local_a8;
		return (Color)UVar14;
	}

	[Token(Token = "0x60054CC")]
	[Address(RVA = "0x5CB1220", Offset = "0x5CB0220", VA = "0x5CB1220")]
	public static Texture2D GetThemeTexture(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetThemeTexture): 4 lines keep C-only constructs
		uint uVar1;
		UI_UIManager_StaticFields pUVar2;
		Dictionary<object, object> pSVar3;
		bool bVar4;
		JSONObject a;
		JSONNode pSVar5;
		String pSVar6;
		long plVar7;
		String pSVar8;
		Texture2D pUVar9;

		do {
			if (Il2CppMethodInitialized_0754810d == false) {
				Il2CppMethodInitialized_0754810d = true;
				if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05db1269;
	label_05db1317: ;
				pUVar2 = typeof(UIManager).static_fields;
				pSVar3 = (Dictionary<object, object>)pUVar2._uiThemes;
			}
			else {
				if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05db1317;
	label_05db1269: ;
				pUVar2 = typeof(UIManager).static_fields;
				pSVar3 = (Dictionary<object, object>)pUVar2._uiThemes;
			}
			if (pSVar3 == null) {
	label_05db16ab: ;
				throw new NullReferenceException();
			}
			bVar4 = pSVar3.ContainsKey((object)pUVar2._currentUITheme);
			if (bVar4) {
				pSVar3 = (Dictionary<object, object>)UIManager._uiThemes;
				if (pSVar3 == null) goto label_05db16ab;
				a = pSVar3.get_Item((object)UIManager._currentUITheme);
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				a = null;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar4 = ((JSONNode)a == null);
			if (!bVar4) {
				if (a == null) goto label_05db16ab;
				pSVar5 = a.get_Item(panel);
				bVar4 = (pSVar5 == null);
				if (!bVar4) {
					pSVar5 = a.get_Item(panel);
					if (pSVar5 == null) goto label_05db16ab;
					pSVar5 = pSVar5.get_Item(category);
					bVar4 = (pSVar5 == null);
					if (!bVar4) {
						pSVar5 = a.get_Item(panel);
						if ((pSVar5 == null) ||(pSVar5 = pSVar5.get_Item(category), pSVar5 == null)) goto label_05db16ab;
						pSVar5 = (JSONNode)(**(code*)((long)pSVar5.klass + 0x1a8))(pSVar5,item,*(ulong)((long)pSVar5.klass + 0x1b0));
						bVar4 = (pSVar5 == null);
						if (!bVar4) {
							pSVar6 = ResourcePaths.UI;
							pSVar5 = a.get_Item(panel) ;
							if (pSVar5 == null) {
								throw new NullReferenceException();
							}
							pSVar5 = pSVar5.get_Item(category);
							if (pSVar5 == null) {
								throw new NullReferenceException();
							}
							plVar7 = (long)(**(code*)((long)pSVar5.klass + 0x1a8))(pSVar5,item,*(ulong)((long)pSVar5.klass + 0x1b0));
							if (plVar7 == null) {
								throw new NullReferenceException();
							}
							pSVar8 = (String)(**(code*)(*plVar7 + 0x1c8))(plVar7,*(ulong)(*plVar7 + 0x1d0));
							pSVar8 = String.Concat("Sprites/Panels/MenuBackground", pSVar8);
							pUVar9 = (Texture2D)ResourceManager.LoadAsset(pSVar6, pSVar8, true, false);
							if (pUVar9 == null) {
								return null;
							}
							if (pUVar9.klass != typeof(Texture2D)) {
								throw new InvalidCastException();
							}
							return pUVar9;
						}
					}
				}
			}
			bVar4 = (panel != fallbackPanel);
			if (!bVar4) {
				pSVar6 = String.Format("{0} {1} {2} theme error.", (object)panel, (object)category, (object)item);
				Debug.Log((object)pSVar6);
				return null;
			}
			panel = fallbackPanel;
		} while(true);
	}

	[Token(Token = "0x60054CD")]
	[Address(RVA = "0x5CA52B0", Offset = "0x5CA42B0", VA = "0x5CA52B0")]
	public static ColorBlock GetThemeColorBlock(string panel, string category, string item, string fallbackPanel = "DefaultPanel")
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetThemeColorBlock): clean
		String pSVar1;
		Color UVar2;
		Color UVar3;
		Color UVar4;
		float local_68;
		float fStack_64;
		float local_48;
		float fStack_44;

		pSVar1 = String.Concat(item, "NormalColor");
		UVar2 = UIManager.GetThemeColor(panel, category, pSVar1, fallbackPanel);
		pSVar1 = String.Concat(item, "HighlightedColor");
		UVar3 = UIManager.GetThemeColor(panel, category, pSVar1, fallbackPanel);
		pSVar1 = String.Concat(item, "PressedColor");
		UVar4 = UIManager.GetThemeColor(panel, category, pSVar1, fallbackPanel);
		local_48 = UVar2.r;
		fStack_44 = UVar2.g;
		__return_storage_ptr__.m_NormalColor.r = local_48;
		__return_storage_ptr__.m_NormalColor.g = fStack_44;
		__return_storage_ptr__.m_NormalColor.b = UVar2.b;
		__return_storage_ptr__.m_NormalColor.a = UVar2.a;
		local_68 = UVar3.r;
		fStack_64 = UVar3.g;
		__return_storage_ptr__.m_HighlightedColor.r = local_68;
		__return_storage_ptr__.m_HighlightedColor.g = fStack_64;
		__return_storage_ptr__.m_HighlightedColor.b = UVar3.b;
		__return_storage_ptr__.m_HighlightedColor.a = UVar3.a;
		__return_storage_ptr__.m_PressedColor.r = UVar4.r;
		__return_storage_ptr__.m_PressedColor.g = UVar4.g;
		__return_storage_ptr__.m_PressedColor.b = UVar4.b;
		__return_storage_ptr__.m_PressedColor.a = UVar4.a;
		__return_storage_ptr__.m_SelectedColor.r = local_48;
		__return_storage_ptr__.m_SelectedColor.g = fStack_44;
		__return_storage_ptr__.m_SelectedColor.b = UVar2.b;
		__return_storage_ptr__.m_SelectedColor.a = UVar2.a;
		__return_storage_ptr__.m_DisabledColor.r = UVar4.r;
		__return_storage_ptr__.m_DisabledColor.g = UVar4.g;
		__return_storage_ptr__.m_DisabledColor.b = UVar4.b;
		__return_storage_ptr__.m_DisabledColor.a = UVar4.a;
		__return_storage_ptr__.m_ColorMultiplier = 1.0;
		__return_storage_ptr__.m_FadeDuration = 0.1;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x60054CE")]
	[Address(RVA = "0x5CB1790", Offset = "0x5CB0790", VA = "0x5CB1790")]
	public static string[] GetUIThemes()
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetUIThemes): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> __this;
		bool bVar3;
		bool bVar4;
		String pSVar6;
		bool bVar7;
		bool bVar8;
		List<string> __this_00;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		String[] pSVar9;
		byte[] local_68 = new byte[8];
		String local_58;
		byte[] local_48 = new byte[16];
		String local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		__this_00 = new List<string>();
		__this = (Dictionary<object, object>)UIManager._uiThemes;
		if ((__this == null) ||(__this_01 = __this.Keys, __this_01 == null)) goto label_05db1aee;
		local_48.GetEnumerator(__this_01);
		local_58 = local_38;
		local_68 = (byte[])local_48._0_8_;
		local_48._0_8_ = null;
		local_48._8_8_ = local_68;
		if (__this_00 == null) {
			bVar4 = false;
			bVar7 = false;
			while (true) {
				bVar3 = bVar7;
				bVar7 = local_68.MoveNext();
				pSVar6 = local_58;
				if (!(bVar7)) break;
				bVar8 = (local_58 == "Light");
				bVar7 = true;
				if (!bVar8) {
					bVar8 = (pSVar6 == "Dark");
					bVar4 = true;
					bVar7 = bVar3;
					if (!bVar8) {
						throw new NullReferenceException();
					}
				}
			}
		}
		else {
			bVar4 = false;
			bVar3 = false;
			while (true) {
				bVar7 = local_68.MoveNext();
				pSVar6 = local_58;
				if (!(bVar7)) break;
				bVar7 = (local_58 == "Light");
				if (bVar7) {
					bVar3 = true;
				}
				else {
					bVar7 = (pSVar6 == "Dark");
					if (bVar7) {
						bVar4 = true;
					}
					else {
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar9 = __this_00._items;
						if (pSVar9 == null) {
							throw new NullReferenceException();
						}
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar9.Length) {
							__this_00._size = uVar2 + 1;
							pSVar9[(int)uVar2] = pSVar6;
						}
						else {
							__this_00.AddWithResize((object)pSVar6);
						}
					}
				}
			}
		}
		local_68.Dispose();
		if (bVar4) {
			if (__this_00 == null) goto label_05db1aee;
			__this_00.Insert(0, (Il2CppObject *)"Dark");
			if (!bVar3) goto label_05db1ac8;
		}
		else {
			if (!bVar3) {
				if (__this_00 != null) goto label_05db1ac8;
	label_05db1aee: ;
				throw new NullReferenceException();
			}
			if (__this_00 == null) goto label_05db1aee;
		}
		__this_00.Insert(0, (Il2CppObject *)"Light");
	label_05db1ac8: ;
		pSVar9 = (String[])__this_00.ToArray();
		return pSVar9;
	}

	[Token(Token = "0x60054CF")]
	[Address(RVA = "0x5CAD430", Offset = "0x5CAC430", VA = "0x5CAD430")]
	private static void LoadUIThemes()
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$LoadUIThemes): 4 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		uint uVar3;
		Dictionary<object, object> pSVar4;
		UISettings pSVar5;
		StringSetting pSVar6;
		bool bVar7;
		String[] pSVar8;
		ulong uVar9;
		String pSVar10;
		object value;
		JSONNode d;
		long plVar11;
		object key;
		ulong uVar12;

		bVar7 = Directory.Exists(FolderPaths.UIThemesPath);
		uVar2 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
		if (!bVar7) {
			if (uVar2 == 0) {
			}
			Directory.CreateDirectory(FolderPaths.UIThemesPath);
			Debug.Log((Il2CppObject *)"No UI theme folder found, creating it.");
			return;
		}
		if (uVar2 == 0) {
		}
		pSVar8 = Directory.GetFiles(FolderPaths.UIThemesPath, "*.json");
		if (pSVar8 != null) {
			if (0 < (int)pSVar8.Length) {
				uVar9 = pSVar8.Length & 0xffffffff;
				uVar12 = 0;
				do {
					if (uVar9 <= uVar12) {
						throw new IndexOutOfRangeException();
					}
					pSVar10 = File.ReadAllText(pSVar8[uVar12]);
					value = (object)JSON.Parse(pSVar10);
					if (value != null) {
						bVar1 = (typeof(JSONObject)._2).typeHierarchyDepth;
						if (((value.klass._2).typeHierarchyDepth < bVar1) ||((value.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(JSONObject))) {
							throw new InvalidCastException();
						}
					}
					if (value == null) goto label_05dad84e;
					pSVar4 = (Dictionary<object, object>)UIManager._uiThemes;
					d = (JSONNode)(*value.klass.vtable[7].methodPtr)(value,"Name",value.klass.vtable[7].method);
					pSVar10 = ((JSONNode)d);
					if (pSVar4 == null) goto label_05dad84e;
					bVar7 = pSVar4.ContainsKey((object)pSVar10);
					if (!bVar7) {
						pSVar4 = (Dictionary<object, object>)UIManager._uiThemes;
						plVar11 = (long)(*value.klass.vtable[7].methodPtr)(value,"Name",value.klass.vtable[7].method);
						if (plVar11 == null) goto label_05dad84e;
						key = (object)(**(code*)(*plVar11 + 0x1c8))(plVar11,*(ulong)(*plVar11 + 0x1d0));
						if (pSVar4 == null) goto label_05dad84e;
						pSVar4.Add(key, value);
					}
					uVar12 = uVar12 + 1;
					uVar3 = (uint)pSVar8.Length;
					uVar9 = (ulong)uVar3;
				} while ((long)uVar12 < (long)(int)uVar3);
			}
			pSVar5 = SettingsManager.UISettings;
			if (((pSVar5 != null) &&(pSVar6 = pSVar5.UITheme, pSVar6 != null)) &&(pSVar4 = (Dictionary<object, object>)UIManager._uiThemes, pSVar4 != null)) {
				bVar7 = pSVar4.ContainsKey((object)pSVar6._value);
				if (bVar7) {
					return;
				}
				pSVar5 = SettingsManager.UISettings;
				if ((pSVar5 != null) &&(pSVar6 = pSVar5.UITheme, pSVar6 != null)) {
					pSVar6.Value = (Il2CppObject *)"Dark";
					pSVar5 = SettingsManager.UISettings;
					if (pSVar5 != null) {
						pSVar5.Save();
						return;
					}
				}
			}
		}
	label_05dad84e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054D0")]
	[Address(RVA = "0x5CB1B70", Offset = "0x5CB0B70", VA = "0x5CB1B70")]
	private void Update()
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$Update): 2 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		BaseMenu pUVar3;
		Text __this_00;
		bool bVar4;
		bool bVar5;
		uint uVar6;
		int iVar7;
		UI_UIManager_StaticFields pUVar8;
		Object x;
		Object[] pSVar9;
		TextGenerator __this_01;
		String pSVar10;
		GameObject __this_02;
		MethodInfo pMVar11;
		Il2CppClass pIVar12;
		uint uVar13;
		float fVar14;
		double x_00;
		double dVar15;
		float fVar16;
		Il2CppMethodPointer pIStack_38;

		if (Il2CppMethodInitialized_07548111 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Text) ;
			Il2CppMethodInitialized_07548111 = true;
		}
		fVar16 = UIManager._currentFrameTime;
		fVar14 = Time.deltaTime;
		pIVar12 = typeof(UIManager);
		fVar14 = fVar14 + fVar16;
		pUVar8 = typeof(UIManager).static_fields;
		pUVar8._currentFrameTime = fVar14;
		fVar16 = pUVar8._currentFrameCount + 1.0;
		pUVar8._currentFrameCount = fVar16;
		if (pUVar8._maxFrameTime <= fVar14) {
			if ((((UIManager)pIVar12)._2).cctor_finished_or_no_cctor == 0) {
				fVar14 = UIManager._currentFrameTime;
				fVar16 = UIManager._currentFrameCount;
				uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			x_00 = (double)(fVar16 / fVar14);
			pMVar11 = (MethodInfo)&pIStack_38;
			dVar15 = modf(x_00, (double)pMVar11, method);
			if (0.0 <= fVar16 / fVar14) {
				if ((dVar15 != 0.5) || (NAN(dVar15))) {
					pIStack_38 = (Il2CppMethodPointer)floor(x_00 + 0.5, pMVar11);
				}
				else if (((long)(double)pIStack_38 & 1U) != 0) {
					pIStack_38 = (Il2CppMethodPointer)((double)pIStack_38 + 1.0);
				}
			}
			else if ((dVar15 != -0.5) || (NAN(dVar15))) {
				pIStack_38 = (Il2CppMethodPointer)ceil(x_00 + -0.5, pMVar11);
			}
			else if (((long)(double)pIStack_38 & 1U) != 0) {
				pIStack_38 = (Il2CppMethodPointer)((double)pIStack_38 + -1.0);
			}
			pIVar12 = typeof(UIManager);
			pUVar8 = typeof(UIManager).static_fields;
			pUVar8._lastFPS = (int)(double)pIStack_38;
			pUVar8._currentFrameTime = 0.0;
			pUVar8._currentFrameCount = 0.0;
		}
		if ((pIVar12._2).cctor_finished_or_no_cctor == 0) {
			pIVar12 = typeof(UIManager);
		}
		pUVar3 = pIVar12.static_fields.CurrentMenu;
		bVar4 = ((Object)pUVar3 != null);
		if (bVar4) {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
				pUVar8 = typeof(UIManager).static_fields;
				cVar1 = pUVar8.NeedResizeText;
			}
			else {
				pUVar8 = typeof(UIManager).static_fields;
				cVar1 = pUVar8.NeedResizeText;
			}
			if (cVar1 != false) {
				if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
					pUVar8 = typeof(UIManager).static_fields;
				}
				if (pUVar8.CurrentMenu == null) {
	label_05db209e: ;
					throw new NullReferenceException();
				}
				x = (Object)(pUVar8.CurrentMenu).gameObject;
				bVar4 = (x != null);
				if (bVar4) {
					pUVar8 = typeof(UIManager).static_fields;
					pUVar8.NeedResizeText = false;
					pUVar3 = pUVar8.CurrentMenu;
					if ((pUVar3 == null) ||(pSVar9 = pUVar3.GetComponentsInChildren<Text>(), pSVar9 == null)) goto label_05db209e;
					uVar6 = (uint)pSVar9.Length;
					if (0 < (int)uVar6) {
						uVar13 = 0;
						do {
							if (uVar6 <= uVar13) {
								throw new IndexOutOfRangeException();
							}
							__this_00 = (Text)pSVar9[(int)uVar13];
							if (__this_00 == null) goto label_05db209e;
							bVar4 = false;
							iVar7 = __this_00.fontSize;
							if (2 < iVar7) {
								__this_01 = __this_00.cachedTextGenerator;
								if (__this_01 == null) goto label_05db209e;
								iVar7 = __this_01.characterCountVisible;
								pSVar10 = __this_00.get_text();
								if (pSVar10 == null) goto label_05db209e;
								bVar4 = iVar7 < pSVar10._stringLength;
							}
							__this_02 = __this_00.gameObject;
							if (__this_02 == null) goto label_05db209e;
							bVar5 = __this_02.activeSelf;
							if (bVar5) {
								if (bVar4) goto label_05db1f56;
								pMVar11 = null;
								iVar7 = __this_00.fontSize;
								if (10 < iVar7) {
									bVar4 = UIManager.IsContentSized(__this_00);
									if (!bVar4) {
										if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
											bVar4 = UIManager.BreaksWord(__this_00);
											if (bVar4) goto label_05db1f56;
										}
										else {
											bVar4 = UIManager.BreaksWord(__this_00);
											if (bVar4) {
	label_05db1f56: ;
												if (UIManager.NeedResizeTextSecondFrame != false) {
													iVar7 = __this_00.fontSize;
													iVar7 = Math.Max(iVar7 + -1, 1);
													__this_00.fontSize = iVar7;
												}
												UIManager.NeedResizeText = true;
											}
										}
									}
								}
							}
							uVar13 = uVar13 + 1;
							uVar6 = (uint)pSVar9.Length;
						} while ((int)uVar13 < (int)uVar6);
					}
					uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
					pIVar12 = typeof(UIManager);
					goto joined_r0x05db2069;
				}
			}
		}
		pIVar12 = typeof(UIManager);
		UIManager.NeedResizeText = false;
		uVar2 = (((UIManager)pIVar12)._2).cctor_finished_or_no_cctor;
	joined_r0x05db2069: ;
		if (uVar2 == 0) {
			pIVar12 = typeof(UIManager);
		}
		*(byte)((long)pIVar12.static_fields + 0x71) = *(byte)((long)pIVar12.static_fields + 0x70);
		return;
	}

	[Token(Token = "0x60054D1")]
	[Address(RVA = "0x5CB2220", Offset = "0x5CB1220", VA = "0x5CB2220")]
	private static bool BreaksWord(Text text)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$BreaksWord): clean
		uint uVar1;
		uint uVar4;
		bool bVar5;
		ushort uVar6;
		int iVar7;
		int iVar8;
		int index;
		int iVar9;
		TextGenerator __this;
		object obj;
		object obj_00;
		String __this_00;
		RectTransform __this_01;
		uint uVar12;
		uint uVar13;
		int iVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		Rect UVar19;
		float local_48;

		if ((text != null) &&(__this = text.cachedTextGenerator, __this != null)) {
			obj = (object)__this.lines;
			obj_00 = (object)__this.characters;
			__this_00 = text.get_text();
			__this_01 = text.rectTransform;
			if (__this_01 != null) {
				UVar19 = __this_01.rect;
				fVar16 = text.pixelsPerUnit;
				iVar7 = text.fontSize;
				if (obj != null) {
					local_48 = UVar19.m_Width;
					uVar12 = 1;
					do {
						iVar8 = obj.get_Item();
						if (iVar8 <= (int)uVar12) {
	label_05db27c7: ;
							return (int)uVar12 < iVar8;
						}
						index = obj.get_Item((ulong)uVar12);
						if (0 < index) {
							if (__this_00 == null) break;
							if (index < __this_00._stringLength) {
								uVar6 = __this_00.get_Chars(index - 1U);
								if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
									uVar1 = (g_data_07556750._2).cctor_finished_or_no_cctor;
								}
								else {
									uVar1 = (g_data_07556750._2).cctor_finished_or_no_cctor;
								}
								if (uVar1 == 0) {
								}
								bVar5 = Char.IsLetterOrDigit(uVar6);
								if (((uVar6 < 0x2e80) && (bVar5)) && ((ushort)(uVar6 - 0xe80) < 0xff80)) {
									uVar6 = __this_00.get_Chars(index);
									if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
										uVar1 = (g_data_07556750._2).cctor_finished_or_no_cctor;
									}
									else {
										uVar1 = (g_data_07556750._2).cctor_finished_or_no_cctor;
									}
									if (uVar1 == 0) {
									}
									bVar5 = Char.IsLetterOrDigit(uVar6);
									if (((uVar6 < 0x2e80) && (bVar5)) && (uVar4 = index - 1U, (ushort)(uVar6 - 0xe80) < 0xff80)) {
										do {
											uVar13 = uVar4;
											if ((int)uVar13 < 1) break;
											uVar6 = __this_00.get_Chars(uVar13 - 1);
											bVar5 = Char.IsWhiteSpace(uVar6);
											uVar4 = uVar13 - 1;
										} while (!bVar5);
										do {
											iVar15 = index;
											index = iVar15 + 1;
											if (__this_00._stringLength <= index) break;
											uVar6 = __this_00.get_Chars(index);
											bVar5 = Char.IsWhiteSpace(uVar6);
										} while (!bVar5);
										if (obj_00 == null) break;
										iVar9 = obj_00.get_Item();
										if (iVar15 < iVar9) {
											fVar17 = 0.0;
											if ((int)uVar13 <= iVar15) {
												fVar17 = 0.0;
												do {
													fVar18 = fVar17;
													obj_00.get_Item((ulong)uVar13);
													fVar17 = fVar17 + fVar18;
													uVar13 = uVar13 + 1;
												} while ((int)uVar13 <= iVar15);
											}
											if (fVar17 <= ((float)iVar7 * local_48 * fVar16) / 10.0) goto label_05db27c7;
										}
									}
								}
							}
						}
						uVar12 = uVar12 + 1;
					} while(true);
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054D2")]
	[Address(RVA = "0x5CB20B0", Offset = "0x5CB10B0", VA = "0x5CB20B0")]
	private static bool IsContentSized(Text text)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$IsContentSized): clean
		bool bVar1;
		bool bVar2;
		Transform pUVar3;
		HorizontalLayoutGroup x;
		LayoutElement x_00;
		float fVar4;

		if (text != null) {
			pUVar3 = text.transform;
			if (pUVar3 != null) {
				pUVar3 = pUVar3.parent;
				x = null;
				bVar1 = ((Object)pUVar3 != null);
				if (bVar1) {
					pUVar3 = text.transform;
					if (pUVar3 == null) goto label_05db221b;
					pUVar3 = pUVar3.parent;
					if (pUVar3 == null) goto label_05db221b;
					x = pUVar3.GetComponent<HorizontalLayoutGroup>();
				}
				bVar1 = false;
				bVar2 = ((Object)x == null);
				if (!bVar2) {
					if (x == null) goto label_05db221b;
					if (x.m_ChildControlWidth == false) {
						bVar1 = false;
					}
					else {
						x_00 = text.GetComponent<LayoutElement>() ;
						bVar2 = ((Object)x_00 == null);
						bVar1 = true;
						if (!bVar2) {
							if (x_00 == null) goto label_05db221b;
							fVar4 = x_00.get_preferredWidth();
							bVar1 = fVar4 < 0.0;
						}
					}
				}
				return bVar1;
			}
		}
	label_05db221b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054D3")]
	[Address(RVA = "0x5CB27F0", Offset = "0x5CB17F0", VA = "0x5CB27F0")]
	private static bool IsWordCharacter(char character)
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$IsWordCharacter): clean
		bool bVar1;
		bool bVar2;

		bVar1 = Char.IsLetterOrDigit(character);
		if ((character < 0x2e80) && (bVar1)) {
			bVar2 = (ushort)(character - 0xe80) < 0xff80;
		}
		return bVar2;
	}

	[Token(Token = "0x60054D4")]
	[Address(RVA = "0x5CB2850", Offset = "0x5CB1850", VA = "0x5CB2850")]
	public static int GetFPS()
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$GetFPS): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07548114 == false) {
			Il2CppMethodInitialized_07548114 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return UIManager._lastFPS;
		}
		return *(int)((long)(typeof(UIManager)).static_fields + 0x74);
	}

	[Token(Token = "0x60054D5")]
	[Address(RVA = "0x5CB28C0", Offset = "0x5CB18C0", VA = "0x5CB28C0")]
	public UIManager()
	{
		// Lifted from source/cpp/UI/UIManager.c (UI.UIManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/UIManager.c.

	// UI.UIManager$$.cctor: clean
	static UIManager()
	{
		UI_UIManager_StaticFields pUVar1;
		Dictionary<string, JSONObject> pSVar2;
		Dictionary<Type, string> __this;
		List<string> pSVar3;
		HashSet<string> __this_00;

		pSVar2 = new Dictionary<string, JSONObject>();
		UIManager._languages = pSVar2;
		pUVar1 = typeof(UIManager).static_fields;
		pUVar1._languageLetters = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new Dictionary<string, JSONObject>();
		pUVar1 = typeof(UIManager).static_fields;
		pUVar1._uiThemes = pSVar2;
		__this = new Dictionary<Type, string>();
		pUVar1 = typeof(UIManager).static_fields;
		pUVar1._lastCategories = __this;
		UIManager.CurrentCanvasScale = 1.0;
		pSVar3 = new List<string>();
		pUVar1 = typeof(UIManager).static_fields;
		pUVar1.AvailableProfileIcons = pSVar3;
		pSVar3 = new List<string>();
		pUVar1 = typeof(UIManager).static_fields;
		pUVar1.AvailableEmojis = pSVar3;
		__this_00 = new HashSet<string>();
		pUVar1 = typeof(UIManager).static_fields;
		pUVar1.AnimatedEmojis = __this_00;
		pUVar1 = typeof(UIManager).static_fields;
		pUVar1.NeedResizeText = false;
		pUVar1.NeedResizeTextSecondFrame = false;
		pUVar1._lastFPS = 0;
		pUVar1._currentFrameTime = 0.0;
		pUVar1._currentFrameCount = 0.0;
		pUVar1._maxFrameTime = 0.5;
		return;
	}
}
