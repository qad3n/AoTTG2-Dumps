// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreatePicker
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000231")]
internal static class AottgGameCreatePicker
{
	[Token(Token = "0x2000232")]
	internal static class AottgGameCreatePresetPicker
	{
		[Token(Token = "0x4000B9E")]
		private const string LoadDialogId = "game-create-preset-load";

		[Token(Token = "0x4000B9F")]
		private const string SaveDialogId = "game-create-preset-save";

		[Token(Token = "0x4000BA0")]
		private const string SaveNameInputId = "game-create-preset-save-name";

		[Token(Token = "0x4000BA1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static string _saveError;

		[Token(Token = "0x6000D2C")]
		[Address(RVA = "0x5D9B6D0", Offset = "0x5D9A6D0", VA = "0x5D9B6D0")]
		public static void OpenLoad(GisketchActionContext context)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$OpenLoad): clean
			uint uVar1;
			GisketchOverlayManager __this;
			bool bVar2;
			GisketchUIRoot root;
			GisketchNodeDefinition[] pGVar3;

			if (Il2CppMethodInitialized_075488ee == false) {
				Il2CppMethodInitialized_075488ee = true;
				if (Il2CppMethodInitialized_075488f4 != false) goto label_05e9b6f8;
		label_05e9b7f2: ;
				Il2CppMethodInitialized_075488f4 = true;
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_075488f4 == false) goto label_05e9b7f2;
		label_05e9b6f8: ;
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			root = null;
			bVar2 = ((Object)context.GameObject != null);
			if (bVar2) {
				if (context.GameObject == null) goto label_05e9b832;
				root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			}
			bVar2 = ((Object)root == null);
			if (!bVar2) {
				pGVar3 = AottgGameCreatePicker.AottgGameCreatePresetPicker.BuildLoadNodes(root);
				if (pGVar3 == null) {
		label_05e9b832: ;
					throw new NullReferenceException();
				}
				if ((int)pGVar3.Length == 1) {
					if ((root == null) ||(__this = root._Overlays_k__BackingField, __this == null)) goto label_05e9b832;
					__this.ShowDynamicDialog("game-create-preset-load", pGVar3[0], true, true, true, 0);
				}
			}
			return;
		}

		[Token(Token = "0x6000D2D")]
		[Address(RVA = "0x5D9BAD0", Offset = "0x5D9AAD0", VA = "0x5D9BAD0")]
		public static void OpenSave(GisketchActionContext context)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$OpenSave): clean
			uint uVar1;
			bool bVar2;
			GisketchUIRoot root;

			if (Il2CppMethodInitialized_075488ef == false) {
				Il2CppMethodInitialized_075488ef = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				bVar2 = AottgGameCreateSession.IsSandbox;
			}
			else {
				bVar2 = AottgGameCreateSession.IsSandbox;
			}
			if (bVar2) {
				root = null;
				bVar2 = ((Object)context.GameObject != null);
				if (bVar2) {
					if (context.GameObject == null) {
						throw new NullReferenceException();
					}
					root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
				}
				bVar2 = ((Object)root == null);
				if (!bVar2) {
					AottgGameCreatePicker.AottgGameCreatePresetPicker. _saveError = null;
					AottgGameCreatePicker.AottgGameCreatePresetPicker.ShowSave(root);
					return;
				}
			}
			return;
		}

		[Token(Token = "0x6000D2E")]
		[Address(RVA = "0x5D9B8C0", Offset = "0x5D9A8C0", VA = "0x5D9B8C0")]
		private static GisketchNodeDefinition[] BuildLoadNodes(GisketchUIRoot root)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$BuildLoadNodes): 2 lines keep C-only constructs
			uint uVar1;
			OrdinalCaseSensitiveComparer comparer;
			GisketchUIRoot __this;
			AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass6_0 __this_00;
			String[] pSVar2;
			HashSet<string> __this_01;
			Action<AottgUi> __this_02;
			GisketchNodeDefinition[] pGVar3;

			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass6_0));
			__this_00 = new Object();
			if (__this_00 ==null) goto label_05e9bac5;
			__this_00.root = root;
			pSVar2 = AottgGameCreateSession.PresetNames();
			__this_00.names = pSVar2;
			pSVar2 = AottgGameCreateSession.CustomPresetNames();
			if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_075435b6 != false) goto label_05e9b9d1;
		label_05e9ba95: ;
				g_data_075435b6 = true;
				uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (g_data_075435b6 == false) goto label_05e9ba95;
		label_05e9b9d1: ;
				uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			comparer = StringComparer.s_ordinal;
			__this_01 = new HashSet<string>((IEnumerable<T>)pSVar2, (IEqualityComparer<T>)comparer);
			__this_00.customNames = __this_01;
			__this = __this_00.root;
			__this_02 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil);
			if (__this != null) {
				pGVar3 = __this.BuildDetachedNodes("game-create-preset-load", __this_02, "game-create-preset-load");
				return pGVar3;
			}
		label_05e9bac5: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6000D2F")]
		[Address(RVA = "0x5D9BCC0", Offset = "0x5D9ACC0", VA = "0x5D9BCC0")]
		private static void ConfirmDelete(GisketchUIRoot root, string name)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$ConfirmDelete): 2 lines keep C-only constructs
			BaseMenu pUVar1;
			bool bVar2;
			AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass7_0 __this;
			ConfirmPopup __this_00;
			String pSVar3;
			UnityAction __this_01;
			String title;

			__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass7_0));
			__this = new Object();
			if (__this != null) {
				__this.name = name;
				__this.root = root;
				pUVar1 = UIManager.CurrentMenu;
				bVar2 = ((Object)pUVar1 == null);
				if (bVar2) {
					Debug.LogWarning((Il2CppObject *)"Cannot delete game preset without an active menu.");
					return;
				}
				pUVar1 = UIManager.CurrentMenu;
				if (pUVar1 != null) {
					__this_00 = AottgGisketchUiHost.AboveOverlay<ConfirmPopup>((object)pUVar1.ConfirmPopup);
					pSVar3 = Aottg2GisketchLocale.Text("Common.DeleteConfirm");
					pSVar3 = String.Format(pSVar3, (object)__this.name);
					__this_01 = new UnityAction((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass7_0_Conf);
					title = Aottg2GisketchLocale.Text("Common.Delete");
					if (__this_00 != null) {
						__this_00.Show(pSVar3, __this_01, title);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6000D30")]
		[Address(RVA = "0x5D9BC30", Offset = "0x5D9AC30", VA = "0x5D9BC30")]
		private static void ShowSave(GisketchUIRoot root)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$ShowSave): clean
			GisketchOverlayManager __this;
			GisketchNodeDefinition[] pGVar1;

			pGVar1 = AottgGameCreatePicker.AottgGameCreatePresetPicker.BuildSaveNodes(root);
			if (pGVar1 == null) {
		label_05e9bca2: ;
				throw new NullReferenceException();
			}
			if ((int)pGVar1.Length == 1) {
				if ((root == null) ||(__this = root._Overlays_k__BackingField, __this == null)) goto label_05e9bca2;
				__this.ShowDynamicDialog("game-create-preset-save", pGVar1[0], true, true, true, 0);
			}
			return;
		}

		[Token(Token = "0x6000D31")]
		[Address(RVA = "0x5D9BF20", Offset = "0x5D9AF20", VA = "0x5D9BF20")]
		private static GisketchNodeDefinition[] BuildSaveNodes(GisketchUIRoot root)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$BuildSaveNodes): 2 lines keep C-only constructs
			GisketchUIRoot __this;
			AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass9_0 __this_00;
			Action<AottgUi> __this_01;
			GisketchNodeDefinition[] pGVar1;

			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass9_0));
			__this_00 = new Object();
			if (__this_00 !=null) {
				__this_00.root = root;
				__this = __this_00.root;
				__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil);
				if (__this != null) {
					pGVar1 = __this.BuildDetachedNodes("game-create-preset-save", __this_01, "game-create-preset-save");
					return pGVar1;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6000D32")]
		[Address(RVA = "0x5D9B840", Offset = "0x5D9A840", VA = "0x5D9B840")]
		private static GisketchUIRoot Root(GisketchActionContext context)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$Root): clean
			bool bVar1;
			GisketchUIRoot pGVar2;

			bVar1 = ((Object)context.GameObject != null);
			if (bVar1) {
				if (context.GameObject == null) {
					throw new NullReferenceException();
				}
				pGVar2 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
				return pGVar2;
			}
			return null;
		}

		[Token(Token = "0x6000D33")]
		[Address(RVA = "0x5D9C010", Offset = "0x5D9B010", VA = "0x5D9C010")]
		private static string InputText(GameObject source)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$InputText): 2 lines keep C-only constructs
			object @object;
			bool bVar1;
			Transform pUVar2;
			Object[] source_00;
			Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_StaticFields pGVar3;
			Func<TMP_InputField, bool> __this;
			TMP_InputField x;
			String pSVar4;

			pUVar2 = null;
			bVar1 = ((Object)source != null);
			if (bVar1) {
				if ((source == null) ||(pUVar2 = source.transform, pUVar2 == null)) goto label_05e9c22d;
				pUVar2 = pUVar2.root;
			}
			bVar1 = ((Object)pUVar2 == null);
			if (bVar1) {
		label_05e9c20b: ;
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (pUVar2 != null) {
				source_00 = pUVar2.GetComponentsInChildren<TMP_InputField>(true);
				if ((typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker.c)._2). cctor_finished_or_no_cctor == 0) {
					pGVar3 = typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker.c). static_fields;
					__this = pGVar3.__9__11_0;
				}
				else {
					pGVar3 = typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker.c). static_fields;
					__this = pGVar3.__9__11_0;
				}
				if (__this == null) {
					if (((typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker.c) )._2).cctor_finished_or_no_cctor == 0) {
						pGVar3 = typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker.c). static_fields;
					}
					@object = (object)pGVar3.__9;
					__this = new Func<TMP_InputField, bool>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c_InputText_b__11_0);
					pGVar3 = typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker.c). static_fields;
					pGVar3.__9__11_0 = __this;
				}
				x = Enumerable.FirstOrDefault<TMP_InputField>((System_Collections_Generic_IEnumerable_TSource__o)source_00, (System_Func_TSource__bool__o)__this);
				bVar1 = ((Object)x != null);
				if (!bVar1) goto label_05e9c20b;
				if ((x != null) &&(pSVar4 = x.m_Text, pSVar4 != null)) {
					pSVar4 = pSVar4.Trim();
					return pSVar4;
				}
			}
		label_05e9c22d: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x2000244")]
	[CompilerGenerated]
	private sealed class _003CShowTitanSpawnNextFrame_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000C00")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000C01")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000C02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string refreshedAnchorId;

		[Token(Token = "0x4000C03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GisketchUIRoot root;

		[Token(Token = "0x4000C04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public GameObject anchor;

		[Token(Token = "0x1700016B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D89")]
			[Address(RVA = "0x5778F50", Offset = "0x5777F50", VA = "0x5778F50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700016C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D8B")]
			[Address(RVA = "0x5778FA0", Offset = "0x5777FA0", VA = "0x5778FA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x5778DC0", Offset = "0x5777DC0", VA = "0x5778DC0")]
		[DebuggerHidden]
		public _003CShowTitanSpawnNextFrame_003Ed__26(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000D87")]
		[Address(RVA = "0x5778DE0", Offset = "0x5777DE0", VA = "0x5778DE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000D88")]
		[Address(RVA = "0x5778DF0", Offset = "0x5777DF0", VA = "0x5778DF0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$MoveNext): clean
			int iVar1;
			GisketchUIRoot pGVar2;
			GisketchScreenRouter pGVar3;
			GisketchView __this_00;
			Object x;
			bool bVar4;
			GameObject pUVar5;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				this.__2__current = null;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				bVar4 = String.IsNullOrEmpty(this.refreshedAnchorId);
				if (!bVar4) {
					pGVar2 = this.root;
					bVar4 = ((Object)pGVar2 != null);
					if (bVar4) {
						pGVar2 = this.root;
						if (pGVar2 == null) {
							throw new NullReferenceException();
						}
						pGVar3 = pGVar2._Screens_k__BackingField;
						if ((pGVar3 != null) &&(__this_00 = pGVar3._active, __this_00 != null)) {
							pUVar5 = __this_00.Find(this.refreshedAnchorId);
							this.anchor = pUVar5;
						}
					}
				}
				pGVar2 = this.root;
				bVar4 = ((Object)pGVar2 != null);
				if (bVar4) {
					x = (Object)this.anchor;
					bVar4 = (x != null);
					if (bVar4) {
						AottgGameCreatePicker.ShowTitanSpawn(this.root, this.anchor);
					}
				}
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6000D8A")]
		[Address(RVA = "0x5778F60", Offset = "0x5777F60", VA = "0x5778F60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_ShowTitanSpawnNextFrame_d__26_System_Collections_IE);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4000B91")]
	private const string MapPopoverId = "game-create-map-picker";

	[Token(Token = "0x4000B92")]
	private const string ModePopoverId = "game-create-mode-picker";

	[Token(Token = "0x4000B93")]
	private const string AddonPopoverId = "game-create-addon-picker";

	[Token(Token = "0x4000B94")]
	private const string TitanSpawnPopoverId = "game-create-titan-spawn-picker";

	[Token(Token = "0x4000B95")]
	private const float ListPickerItemWidth = 620f;

	[Token(Token = "0x4000B96")]
	private const float ListPickerHeight = 500f;

	[Token(Token = "0x4000B97")]
	private const float ListPopoverWidth = 670f;

	[Token(Token = "0x4000B98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static string _mapCategory;

	[Token(Token = "0x4000B99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static string _modeCategory;

	[Token(Token = "0x4000B9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static string _addonCategory;

	[Token(Token = "0x4000B9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static GameObject _pickerAnchor;

	[Token(Token = "0x4000B9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static GameObject _titanSpawnAnchor;

	[Token(Token = "0x4000B9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static bool _customContentDeleteMode;

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x5D98C50", Offset = "0x5D97C50", VA = "0x5D98C50")]
	public static void OpenMap(GisketchActionContext context, string[] maps, string currentMap, string currentCategory, bool showCategories, Action<string, string> selected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenMap): 2 lines keep C-only constructs
		uint uVar1;
		object @object;
		OrdinalIgnoreCaseComparer comparer;
		GisketchOverlayManager __this;
		bool bVar3;
		GisketchUIRoot root;
		Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields pGVar4;
		Func<string, bool> __this_00;
		MethodInfo method_00;
		HashSet<string> __this_01;
		String[] categories;
		String pSVar5;
		GisketchNodeDefinition[] pGVar6;

		if (Il2CppMethodInitialized_075488d6 == false) {
			Il2CppMethodInitialized_075488d6 = true;
			if (Il2CppMethodInitialized_075488eb == false) goto label_05e98e00;
	label_05e98c93: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075488eb != false) goto label_05e98c93;
	label_05e98e00: ;
			Il2CppMethodInitialized_075488eb = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		root = null;
		bVar3 = ((Object)context.GameObject != null);
		if (bVar3) {
			if (context.GameObject == null) goto label_05e9905b;
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		bVar3 = ((Object)root == null);
		if (bVar3) {
			return;
		}
		AottgGameCreatePicker._pickerAnchor = context.GameObject;
		if (maps == null) {
			maps = (String[])new string[0];
			if ((typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor == 0) goto label_05e98e6b;
	label_05e98d4b: ;
			pGVar4 = typeof(AottgGameCreatePicker.c).static_fields;
			__this_00 = pGVar4.__9__13_0;
		}
		else {
			if ((typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor != 0) goto label_05e98d4b;
	label_05e98e6b: ;
			pGVar4 = typeof(AottgGameCreatePicker.c).static_fields;
			__this_00 = pGVar4.__9__13_0;
		}
		if (__this_00 == null) {
			if (((typeof(AottgGameCreatePicker.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameCreatePicker.c).static_fields;
			}
			@object = (object)pGVar4.__9;
			__this_00 = new Func<string, bool>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_OpenMap_b__13_0);
			pGVar4 = typeof(AottgGameCreatePicker.c).static_fields;
			pGVar4.__9__13_0 = __this_00;
		}
		method_00 = (MethodInfo)Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)maps, (System_Func_TSource__bool__o)__this_00);
		if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07542886 == false) goto label_05e9902b;
	label_05e98f1d: ;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07542886 != false) goto label_05e98f1d;
	label_05e9902b: ;
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this_01 = new HashSet<string>((IEnumerable<T>)method_00, (IEqualityComparer<T>)comparer);
		categories = AottgGameCreatePicker.MapCategories(__this_01);
		pSVar5 = AottgGameCreatePicker.CategoryFor(currentMap, currentCategory, categories);
		AottgGameCreatePicker._mapCategory = pSVar5;
		pGVar6 = AottgGameCreatePicker.BuildMapNodes(root, __this_01, categories, showCategories, selected);
		if (pGVar6 == null) {
	label_05e9905b: ;
			throw new NullReferenceException();
		}
		if ((int)pGVar6.Length == 1) {
			if ((root == null) ||(__this = root._Overlays_k__BackingField, __this == null)) goto label_05e9905b;
			__this.ShowDynamicDialog("game-create-map-picker", pGVar6[0], true, true, true, 0);
		}
		return;
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x5D995A0", Offset = "0x5D985A0", VA = "0x5D995A0")]
	public static void OpenMode(GisketchActionContext context, string[] modes, Action<string> selected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenMode): 7 lines keep C-only constructs
		uint uVar1;
		Gisketch_Aottg2UI_Game_AottgGameCreatePicker_StaticFields pGVar2;
		object @object;
		GisketchOverlayManager __this;
		bool bVar3;
		GisketchUIRoot root;
		Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields pGVar4;
		Func<string, bool> pSVar5;
		System_Collections_Generic_IEnumerable_TSource__o source;
		String[] modes_00;
		String* ppSVar6;
		GisketchNodeDefinition[] pGVar7;

		if (Il2CppMethodInitialized_075488d7 == false) {
			Il2CppMethodInitialized_075488d7 = true;
			if (Il2CppMethodInitialized_075488eb == false) goto label_05e99753;
	label_05e995d4: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075488eb != false) goto label_05e995d4;
	label_05e99753: ;
			Il2CppMethodInitialized_075488eb = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		root = null;
		bVar3 = ((Object)context.GameObject != null);
		if (bVar3) {
			if (context.GameObject == null) goto label_05e99944;
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		bVar3 = ((Object)root == null);
		if (bVar3) {
			return;
		}
		pGVar2 = typeof(AottgGameCreatePicker).static_fields;
		pGVar2._pickerAnchor = context.GameObject;
		if (modes == null) {
			modes = (String[])new string[0];
			if ((typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor == 0) goto label_05e997be;
	label_05e99686: ;
			pGVar4 = typeof(AottgGameCreatePicker.c).static_fields;
			pSVar5 = pGVar4.__9__14_0;
		}
		else {
			if ((typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor != 0) goto label_05e99686;
	label_05e997be: ;
			pGVar4 = typeof(AottgGameCreatePicker.c).static_fields;
			pSVar5 = pGVar4.__9__14_0;
		}
		if (pSVar5 == null) {
			if (((typeof(AottgGameCreatePicker.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameCreatePicker.c).static_fields;
			}
			@object = (object)pGVar4.__9;
			pSVar5 = new Func<string, bool>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_OpenMode_b__14_0);
			pGVar4 = typeof(AottgGameCreatePicker.c).static_fields;
			pGVar4.__9__14_0 = pSVar5;
		}
		source = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)modes, (System_Func_TSource__bool__o)pSVar5);
		modes_00 = (String[])Enumerable.ToArray<string>(source);
		pSVar5 = new Func<string, bool>(null, (intptr_t)MethodInfo_Map_BuiltinLevels_IsLogicBuiltin);
		bVar3 = Enumerable.Any<string>((System_Collections_Generic_IEnumerable_TSource__o)modes_00, (System_Func_TSource__bool__o)pSVar5);
		if (bVar3) {
			ppSVar6 = &"Builtin";
		}
		else {
			ppSVar6 = &"Custom";
		}
		pGVar2 = typeof(AottgGameCreatePicker).static_fields;
		pGVar2._modeCategory = *ppSVar6;
		pGVar7 = AottgGameCreatePicker.BuildModeNodes(root, modes_00, selected);
		if (pGVar7 == null) {
	label_05e99944: ;
			throw new NullReferenceException();
		}
		if ((int)pGVar7.Length == 1) {
			if ((root == null) ||(__this = root._Overlays_k__BackingField, __this == null)) goto label_05e99944;
			__this.ShowDynamicPopover("game-create-mode-picker", pGVar7[0], context.GameObject, true, false, 10.0, true, 0);
		}
		return;
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x5D99BC0", Offset = "0x5D98BC0", VA = "0x5D99BC0")]
	public static void OpenAddons(GisketchActionContext context, string[] addons, Func<int, bool> isSelected, Action<int> toggled, Action completed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenAddons): 4 lines keep C-only constructs
		uint uVar1;
		Gisketch_Aottg2UI_Game_AottgGameCreatePicker_StaticFields pGVar2;
		OrdinalIgnoreCaseComparer comparer;
		GisketchOverlayManager __this;
		bool bVar3;
		GisketchUIRoot root;
		String[] collection;
		HashSet<string> __this_00;
		Func<string, bool> __this_01;
		String* ppSVar4;
		GisketchNodeDefinition[] pGVar5;
		String[] local_48;

		if (Il2CppMethodInitialized_075488d8 == false) {
			Il2CppMethodInitialized_075488d8 = true;
			if (Il2CppMethodInitialized_075488eb == false) goto label_05e99dba;
	label_05e99bff: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075488eb != false) goto label_05e99bff;
	label_05e99dba: ;
			Il2CppMethodInitialized_075488eb = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		root = null;
		bVar3 = ((Object)context.GameObject != null);
		if (bVar3) {
			if (context.GameObject == null) goto label_05e99f7c;
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		bVar3 = ((Object)root == null);
		if (bVar3) {
			return;
		}
		pGVar2 = typeof(AottgGameCreatePicker).static_fields;
		pGVar2._pickerAnchor = context.GameObject;
		local_48 = addons;
		if (addons == null) {
			local_48 = (String[])new string[0];
		}
		collection = BuiltinLevels.GetBuiltinAddons();
		if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07542886 == false) goto label_05e99e0c;
	label_05e99cf5: ;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07542886 != false) goto label_05e99cf5;
	label_05e99e0c: ;
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this_00 = new HashSet<string>((IEnumerable<T>)collection, (IEqualityComparer<T>)comparer);
		if (__this_00 != null) {
			__this_01 = new Func<string, bool>((object)__this_00, (intptr_t)(__this_00.klass.vtable)._8_Contains.method);
			bVar3 = Enumerable.Any<string>((System_Collections_Generic_IEnumerable_TSource__o)local_48, (System_Func_TSource__bool__o)__this_01);
			if (bVar3) {
				ppSVar4 = &"Builtin";
			}
			else {
				ppSVar4 = &"Custom";
			}
			pGVar2 = typeof(AottgGameCreatePicker).static_fields;
			pGVar2._addonCategory = *ppSVar4;
			pGVar5 = AottgGameCreatePicker.BuildAddonNodes(root, local_48, __this_00, isSelected, toggled, completed);
			if (pGVar5 != null) {
				if ((int)pGVar5.Length == 1) {
					if ((root == null) ||(__this = root._Overlays_k__BackingField, __this == null)) goto label_05e99f7c;
					__this.ShowDynamicPopover("game-create-addon-picker", pGVar5[0], context.GameObject, true, false, 10.0, true, 0);
				}
				return;
			}
		}
	label_05e99f7c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x5D99950", Offset = "0x5D98950", VA = "0x5D99950")]
	private static GisketchNodeDefinition[] BuildModeNodes(GisketchUIRoot root, string[] modes, Action<string> selected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildModeNodes): 6 lines keep C-only constructs
		object @object;
		GisketchUIRoot __this;
		bool hasBuiltin;
		bool hasCustom;
		AottgGameCreatePicker.c__DisplayClass16_0 __this_00;
		Func<string, bool> pSVar1;
		Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields pGVar2;
		String[] pSVar3;
		Action<AottgUi> __this_01;
		GisketchNodeDefinition[] pGVar4;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.c__DisplayClass16_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.root = root;
			__this_00.modes = modes;
			__this_00.selected = selected;
			pSVar3 = __this_00.modes;
			pSVar1 = new Func<string, bool>(null, (intptr_t)MethodInfo_Map_BuiltinLevels_IsLogicBuiltin);
			hasBuiltin = Enumerable.Any<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, (System_Func_TSource__bool__o)pSVar1);
			pSVar3 = __this_00.modes;
			if ((typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgGameCreatePicker.c).static_fields;
				pSVar1 = pGVar2.__9__16_0;
			}
			else {
				pGVar2 = typeof(AottgGameCreatePicker.c).static_fields;
				pSVar1 = pGVar2.__9__16_0;
			}
			if (pSVar1 == null) {
				if (((typeof(AottgGameCreatePicker.c))._2). cctor_finished_or_no_cctor == 0) {
					pGVar2 = typeof(AottgGameCreatePicker.c).static_fields;
				}
				@object = (object)pGVar2.__9;
				pSVar1 = new Func<string, bool>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_0);
				pGVar2 = typeof(AottgGameCreatePicker.c).static_fields;
				pGVar2.__9__16_0 = pSVar1;
			}
			hasCustom = Enumerable.Any<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, (System_Func_TSource__bool__o)pSVar1);
			pSVar3 = AottgGameCreatePicker.PickerCategories(hasBuiltin, hasCustom);
			__this_00.categories = pSVar3;
			__this = __this_00.root;
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__1);
			if (__this != null) {
				pGVar4 = __this.BuildDetachedNodes("game-create-mode-picker", __this_01, "game-create-mode-picker");
				return pGVar4;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x5D9A2C0", Offset = "0x5D992C0", VA = "0x5D9A2C0")]
	private static GisketchGridPicker BuildModePicker(GisketchUIRoot root, GisketchGridPickerItem[] items, string suffix, Action<string> selected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildModePicker): 2 lines keep C-only constructs
		AottgGameCreatePicker.c__DisplayClass17_0 __this;
		String id;
		String searchPlaceholder;
		Action<GisketchActionContext, GisketchGridPickerItem> __this_00;
		GisketchGridPicker __this_01;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreatePicker.c__DisplayClass17_0));
		__this = new Object();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.root = root;
		__this.selected = selected;
		id = String.Concat("game-create-mode-picker-", suffix, "-list");
		searchPlaceholder = Aottg2GisketchLocale.Text("GameCreate.Picker.Mode.Search");
		__this_00 = new Action<GisketchActionContext, GisketchGridPickerItem>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass17_0_BuildModePicker_b__0);
		__this_01 = new GisketchGridPicker(id, items, 1, 620.0, 48.0, 0.0, 0.0, searchPlaceholder, __this_00, 500.0, false, true, false);
		return __this_01;
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x5D99F90", Offset = "0x5D98F90", VA = "0x5D99F90")]
	private static GisketchNodeDefinition[] BuildAddonNodes(GisketchUIRoot root, string[] addons, HashSet<string> builtin, Func<int, bool> isSelected, Action<int> toggled, Action completed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildAddonNodes): 6 lines keep C-only constructs
		GisketchUIRoot __this;
		bool hasBuiltin;
		bool hasCustom;
		AottgGameCreatePicker.c__DisplayClass18_0 __this_00;
		Func<string, bool> pSVar1;
		String[] pSVar2;
		Action<AottgUi> __this_01;
		GisketchNodeDefinition[] pGVar3;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.c__DisplayClass18_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.builtin = builtin;
			__this_00.completed = completed;
			__this_00.root = root;
			__this_00.addons = addons;
			__this_00.isSelected = isSelected;
			__this_00.toggled = toggled;
			pSVar2 = __this_00.addons;
			pSVar1 = new Func<string, bool>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_g__HasBuiltin_0);
			hasBuiltin = Enumerable.Any<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2, (System_Func_TSource__bool__o)pSVar1);
			pSVar2 = __this_00.addons;
			pSVar1 = new Func<string, bool>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__1);
			hasCustom = Enumerable.Any<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2, (System_Func_TSource__bool__o)pSVar1);
			pSVar2 = AottgGameCreatePicker.PickerCategories(hasBuiltin, hasCustom);
			__this_00.categories = pSVar2;
			__this = __this_00.root;
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__2);
			if (__this != null) {
				pGVar3 = __this.BuildDetachedNodes("game-create-addon-picker", __this_01, "game-create-addon-picker");
				return pGVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x5D9A490", Offset = "0x5D99490", VA = "0x5D9A490")]
	private static GisketchGridPicker BuildListPicker(string id, GisketchGridPickerItem[] items, string searchPlaceholder, Action<GisketchActionContext, GisketchGridPickerItem> selected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildListPicker): clean
		GisketchGridPicker __this;

		__this = new GisketchGridPicker(id, items, 1, 620.0, 48.0, 0.0, 0.0, searchPlaceholder, selected, 500.0, false, true, false);
		return __this;
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x5D9A540", Offset = "0x5D99540", VA = "0x5D9A540")]
	private static void BuildCategoryTabs(AottgUi ui, string id, string[] categories, string selected, Action<string> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildCategoryTabs): 6 lines keep C-only constructs
		object @object;
		AottgGameCreatePicker.c__DisplayClass20_0 __this;
		String id_00;
		Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields pGVar1;
		Func<string, AottgSubtab> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source;
		AottgSubtab[] tabs;
		Action<T1, T2> __this_01;
		AottgSubtabStrip __this_02;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreatePicker.c__DisplayClass20_0));
		__this = new Object();
		if (__this != null) {
			__this.changed = changed;
			if (categories != null) {
				if ((int)categories.Length < 2) {
					return;
				}
				id_00 = String.Concat(id, "-categories");
				pGVar1 = typeof(AottgGameCreatePicker.c).static_fields;
				__this_00 = pGVar1.__9__20_0;
				if (__this_00 == null) {
					if ((typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor == 0) {
						pGVar1 = typeof(AottgGameCreatePicker.c).static_fields;
					}
					@object = (object)pGVar1.__9;
					__this_00 = new Func<string, AottgSubtab>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildCategoryTabs_b__20_0);
					pGVar1 = typeof(AottgGameCreatePicker.c).static_fields;
					pGVar1.__9__20_0 = __this_00;
				}
				source = Enumerable.Select<string, AottgSubtab>((System_Collections_Generic_IEnumerable_TSource__o)categories, (System_Func_TSource__TResult__o)__this_00);
				tabs = (AottgSubtab[])Enumerable.ToArray<AottgSubtab>((System_Collections_Generic_IEnumerable_TSource__o)source);
				__this_01 = new Action<GisketchActionContext, string>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass20_0_BuildCategoryTabs_b__1);
				__this_02 = new AottgSubtabStrip(id_00, tabs, selected, (Action<GisketchActionContext, string>)__this_01);
				if (ui != null) {
					ui.Component((AottgComponent)__this_02);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x5D9A1B0", Offset = "0x5D991B0", VA = "0x5D9A1B0")]
	private static string[] PickerCategories(bool hasBuiltin, bool hasCustom)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$PickerCategories): 3 lines keep C-only constructs
		String[] pSVar1;
		String* ppSVar2;
		String* targetAddress;

		if ((hasBuiltin) && (hasCustom)) {
			pSVar1 = (String[])new string[2];
			if (pSVar1 == null) goto label_05e9a2af;
			if ((int)pSVar1.Length != 0) {
				pSVar1[0] = "Builtin";
				if ((pSVar1.Length & 0xfffffffe) != 0) {
					targetAddress = pSVar1.m_Items + 1;
					pSVar1[1] = "Custom";
					goto label_05e9a29b;
				}
			}
	label_05e9a2aa: ;
			throw new IndexOutOfRangeException();
		}
		pSVar1 = (String[])new string[1];
		if (hasBuiltin) {
			if (pSVar1 == null) {
	label_05e9a2af: ;
				throw new NullReferenceException();
			}
			if ((int)pSVar1.Length == 0) goto label_05e9a2aa;
			ppSVar2 = &"Builtin";
		}
		else {
			if (pSVar1 == null) goto label_05e9a2af;
			if ((int)pSVar1.Length == 0) goto label_05e9a2aa;
			ppSVar2 = &"Custom";
		}
		pSVar1[0] = *ppSVar2;
	label_05e9a29b: ;
		return pSVar1;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x5D9A7B0", Offset = "0x5D997B0", VA = "0x5D9A7B0")]
	private static void RefreshPicker(GisketchUIRoot root, string id, GisketchNodeDefinition[] nodes)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$RefreshPicker): clean
		Object x;
		GisketchOverlayManager __this;
		bool bVar1;

		if (nodes == null) {
	label_05e9a896: ;
			throw new NullReferenceException();
		}
		if ((int)nodes.Length == 1) {
			x = (Object)AottgGameCreatePicker._pickerAnchor;
			bVar1 = (x != null);
			if (bVar1) {
				if (root != null) {
					if ((int)nodes.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					__this = root._Overlays_k__BackingField;
					if (__this != null) {
						__this.ShowDynamicPopover(id, nodes[0], AottgGameCreatePicker._pickerAnchor, true, false, 10.0, false, 0);
						return;
					}
				}
				goto label_05e9a896;
			}
		}
		return;
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x5D9A8A0", Offset = "0x5D998A0", VA = "0x5D9A8A0")]
	private static void RefreshMapPicker(GisketchUIRoot root, GisketchNodeDefinition[] nodes)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$RefreshMapPicker): clean
		GisketchOverlayManager __this;

		if (nodes != null) {
			if ((int)nodes.Length != 1) {
				return;
			}
			if ((root != null) &&(__this = root._Overlays_k__BackingField, __this != null)) {
				__this.ShowDynamicDialog("game-create-map-picker", nodes[0], true, true, false, 0);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x5D9A920", Offset = "0x5D99920", VA = "0x5D9A920")]
	public static void OpenTitanSpawn(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenTitanSpawn): clean
		uint uVar1;
		bool bVar2;
		GisketchUIRoot root;

		if (Il2CppMethodInitialized_075488eb == false) {
			Il2CppMethodInitialized_075488eb = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		root = null;
		bVar2 = ((Object)context.GameObject != null);
		if (bVar2) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		bVar2 = ((Object)root == null);
		if (bVar2) {
			return;
		}
		AottgGameCreatePicker.ShowTitanSpawn(root, context.GameObject);
		return;
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x5D9AB00", Offset = "0x5D99B00", VA = "0x5D9AB00")]
	public static void OpenTitanSpawnAfterDropdown(GisketchActionContext context, [Optional] string refreshedAnchorId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenTitanSpawnAfterDropdown): clean
		uint uVar1;
		bool bVar2;
		GisketchUIRoot root;
		IEnumerator routine;

		if (Il2CppMethodInitialized_075488e2 == false) {
			Il2CppMethodInitialized_075488e2 = true;
			if (Il2CppMethodInitialized_075488eb != false) goto label_05e9ab2e;
	label_05e9abef: ;
			Il2CppMethodInitialized_075488eb = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075488eb == false) goto label_05e9abef;
	label_05e9ab2e: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		root = null;
		bVar2 = ((Object)context.GameObject != null);
		if (bVar2) {
			if (context.GameObject == null) goto label_05e9ac3c;
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		bVar2 = ((Object)root != null);
		if (!bVar2) {
			return;
		}
		routine = AottgGameCreatePicker.ShowTitanSpawnNextFrame(root, context.GameObject, refreshedAnchorId);
		if (root != null) {
			root.StartCoroutine(routine);
			return;
		}
	label_05e9ac3c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x5D9AC50", Offset = "0x5D99C50", VA = "0x5D9AC50")]
	[IteratorStateMachine(typeof(_003CShowTitanSpawnNextFrame_003Ed__26))]
	private static IEnumerator ShowTitanSpawnNextFrame(GisketchUIRoot root, GameObject anchor, string refreshedAnchorId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$ShowTitanSpawnNextFrame): 1 lines keep C-only constructs
		AottgGameCreatePicker.d__26<ShowTitanSpawnNextFrame> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.d__26<ShowTitanSpawnNextFrame>));
		__this = new AottgGameCreatePicker.d__26<ShowTitanSpawnNextFrame>(0);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.root = root;
		__this.anchor = anchor;
		__this.refreshedAnchorId = refreshedAnchorId;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x5D9AA30", Offset = "0x5D99A30", VA = "0x5D9AA30")]
	private static void ShowTitanSpawn(GisketchUIRoot root, GameObject anchor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$ShowTitanSpawn): clean
		GisketchOverlayManager __this;
		GisketchNodeDefinition[] pGVar2;

		AottgGameCreatePicker._titanSpawnAnchor = anchor;
		pGVar2 = AottgGameCreatePicker.BuildTitanSpawnNodes(root);
		if (pGVar2 == null) {
	label_05e9aaee: ;
			throw new NullReferenceException();
		}
		if ((int)pGVar2.Length == 1) {
			if ((root == null) ||(__this = root._Overlays_k__BackingField, __this == null)) goto label_05e9aaee;
			__this.ShowDynamicPopover("game-create-titan-spawn-picker", pGVar2[0], AottgGameCreatePicker._titanSpawnAnchor, true, false, 10.0, true, 0);
		}
		return;
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x5D9ACF0", Offset = "0x5D99CF0", VA = "0x5D9ACF0")]
	private static GisketchNodeDefinition[] BuildTitanSpawnNodes(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildTitanSpawnNodes): 6 lines keep C-only constructs
		bool bVar1;
		uint uVar2;
		object @object;
		GisketchUIRoot __this;
		AottgGameCreatePicker.c__DisplayClass28_0 __this_00;
		String[] source;
		Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields pGVar3;
		Func<string, string> __this_01;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		Single[] pSVar4;
		Action<AottgUi> __this_02;
		GisketchNodeDefinition[] pGVar5;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.c__DisplayClass28_0));
		__this_00 = new Object();
		if (__this_00 == null) goto label_05e9b232;
		__this_00.root = root;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452d9 != false) goto label_05e9ae80;
	label_05e9afac: ;
			g_data_075452d9 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075452d9 == false) goto label_05e9afac;
	label_05e9ae80: ;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar1 = AottgGameCreateSession._showSandboxVariableNames;
		source = (String[])new string[6];
		if (bVar1 == false) {
			if (source == null) goto label_05e9b232;
			if ((int)source.Length == 0) goto label_05e9b22d;
			source[0] = "Normal";
			if ((source.Length & 0xfffffffe) == 0) goto label_05e9b22d;
			source[1] = "Abnormal";
			if ((uint)source.Length < 3) goto label_05e9b22d;
			source[2] = "Jumper";
			if ((source.Length & 0xfffffffc) == 0) goto label_05e9b22d;
			source[3] = "Crawler";
			if ((uint)source.Length < 5) goto label_05e9b22d;
			source[4] = "Thrower";
			if ((uint)source.Length < 6) goto label_05e9b22d;
			source[5] = "Punk";
			if ((typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar3 = typeof(AottgGameCreatePicker.c).static_fields;
				__this_01 = pGVar3.__9__28_0;
			}
			else {
				pGVar3 = typeof(AottgGameCreatePicker.c).static_fields;
				__this_01 = pGVar3.__9__28_0;
			}
			if (__this_01 == null) {
				if (((typeof(AottgGameCreatePicker.c))._2). cctor_finished_or_no_cctor == 0) {
					pGVar3 = typeof(AottgGameCreatePicker.c).static_fields;
				}
				@object = (object)pGVar3.__9;
				__this_01 = new Func<string, string>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildTitanSpawnNodes_b__28_0);
				pGVar3 = typeof(AottgGameCreatePicker.c).static_fields;
				pGVar3.__9__28_0 = __this_01;
			}
			source_00 = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_01);
			source = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
		}
		else {
			if (source == null) goto label_05e9b232;
			if ((int)source.Length == 0) {
	label_05e9b22d: ;
				throw new IndexOutOfRangeException();
			}
			source[0] = "titan.TitanSpawnNormal";
			if ((source.Length & 0xfffffffe) == 0) goto label_05e9b22d;
			source[1] = "titan.TitanSpawnAbnormal";
			if ((uint)source.Length < 3) goto label_05e9b22d;
			source[2] = "titan.TitanSpawnJumper";
			if ((source.Length & 0xfffffffc) == 0) goto label_05e9b22d;
			source[3] = "titan.TitanSpawnCrawler";
			if ((uint)source.Length < 5) goto label_05e9b22d;
			source[4] = "titan.TitanSpawnThrower";
			if ((uint)source.Length < 6) goto label_05e9b22d;
			source[5] = "titan.TitanSpawnPunk";
		}
		__this_00.labels = source;
		pSVar4 = AottgGameCreateSession.TitanSpawnProbabilities();
		__this_00.values = pSVar4;
		__this = __this_00.root;
		__this_02 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__1);
		if (__this != null) {
			pGVar5 = __this.BuildDetachedNodes("game-create-titan-spawn-picker", __this_02, "game-create-titan-spawn-picker");
			return pGVar5;
		}
	label_05e9b232: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x5D9B250", Offset = "0x5D9A250", VA = "0x5D9B250")]
	private static void RefreshTitanSpawn(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$RefreshTitanSpawn): clean
		Object x;
		GisketchOverlayManager __this;
		bool bVar1;
		GisketchNodeDefinition[] pGVar2;

		pGVar2 = AottgGameCreatePicker.BuildTitanSpawnNodes(root);
		if (pGVar2 == null) {
	label_05e9b351: ;
			throw new NullReferenceException();
		}
		if ((int)pGVar2.Length == 1) {
			x = (Object)AottgGameCreatePicker._titanSpawnAnchor;
			bVar1 = (x != null);
			if (bVar1) {
				if (root != null) {
					if ((int)pGVar2.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					__this = root._Overlays_k__BackingField;
					if (__this != null) {
						__this.ShowDynamicPopover("game-create-titan-spawn-picker", pGVar2[0], AottgGameCreatePicker._titanSpawnAnchor, true, false, 10.0, false, 0);
						return;
					}
				}
				goto label_05e9b351;
			}
		}
		return;
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x5D99470", Offset = "0x5D98470", VA = "0x5D99470")]
	private static GisketchNodeDefinition[] BuildMapNodes(GisketchUIRoot root, HashSet<string> allowed, string[] categories, bool showCategories, Action<string, string> selected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildMapNodes): 2 lines keep C-only constructs
		GisketchUIRoot __this;
		AottgGameCreatePicker.c__DisplayClass30_0 __this_00;
		Action<AottgUi> __this_01;
		GisketchNodeDefinition[] pGVar1;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.c__DisplayClass30_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.showCategories = showCategories;
			__this_00.categories = categories;
			__this_00.root = root;
			__this_00.allowed = allowed;
			__this_00.selected = selected;
			__this = __this_00.root;
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__1);
			if (__this != null) {
				pGVar1 = __this.BuildDetachedNodes("game-create-map-picker", __this_01, "game-create-map-picker");
				return pGVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x5D990E0", Offset = "0x5D980E0", VA = "0x5D990E0")]
	private static string[] MapCategories(HashSet<string> allowed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$MapCategories): 4 lines keep C-only constructs
		AottgGameCreatePicker.c__DisplayClass31_0 __this;
		String[] pSVar1;
		Func<string, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source;

		__this = il2cpp_codegen_object_new(typeof(AottgGameCreatePicker.c__DisplayClass31_0));
		__this = new AottgGameCreatePicker.c__DisplayClass31_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.allowed = allowed;
		pSVar1 = BuiltinLevels.GetMapCategories();
		__this_00 = new Func<string, bool>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass31_0_MapCategories_b__0);
		source = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar1, (System_Func_TSource__bool__o)__this_00);
		pSVar1 = (String[])Enumerable.ToArray<string>(source);
		return pSVar1;
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x5D99200", Offset = "0x5D98200", VA = "0x5D99200")]
	private static string CategoryFor(string mapName, string preferredCategory, string[] categories)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$CategoryFor): 4 lines keep C-only constructs
		uint uVar1;
		String category;
		bool bVar2;
		String[] pSVar3;
		ulong uVar4;
		ulong uVar5;
		String* ppSVar6;

		bVar2 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)categories, (object)preferredCategory);
		if (!bVar2) goto label_05e99300;
		pSVar3 = BuiltinLevels.GetMapNames(preferredCategory);
		if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07542886 != false) goto label_05e992c7;
	label_05e99432: ;
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07542886 == false) goto label_05e99432;
	label_05e992c7: ;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, (object)mapName, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
		if (bVar2) {
			return preferredCategory;
		}
	label_05e99300: ;
		if (categories == null) {
			throw new NullReferenceException();
		}
		uVar4 = categories.Length;
		if (0 < (int)uVar4) {
			uVar5 = 0;
			do {
				if ((uVar4 & 0xffffffff) <= uVar5) goto label_05e99464;
				category = categories[uVar5];
				pSVar3 = BuiltinLevels.GetMapNames(category);
				if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_07542886 != false) goto label_05e9936b;
	label_05e993ce: ;
					Il2CppMethodInitialized_07542886 = true;
					uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (Il2CppMethodInitialized_07542886 == false) goto label_05e993ce;
	label_05e9936b: ;
					uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				bVar2 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, (object)mapName, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
				if (bVar2) {
					return category;
				}
				uVar5 = uVar5 + 1;
				uVar4 = categories.Length;
			} while ((long)uVar5 < (long)(int)uVar4);
		}
		if (uVar4 == 0) {
			ppSVar6 = &"General";
		}
		else {
			if ((int)uVar4 == 0) {
	label_05e99464: ;
				throw new IndexOutOfRangeException();
			}
		}
		return *ppSVar6;
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x5D98340", Offset = "0x5D97340", VA = "0x5D98340")]
	internal static string PreviewSprite(string mapName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$PreviewSprite): 6 lines keep C-only constructs
		String path;
		byte[] auVar1 = new byte[16];
		bool bVar2;
		int iVar3;
		int iVar4;
		String resourcePath;
		String name;
		Texture2D texture;
		Sprite sprite;
		Sprite local_38;

		local_38 = null;
		resourcePath = String.Concat(ResourcePaths.BuiltinMaps, "/Previews/", mapName, "Preview");
		bVar2 = GisketchSpriteLoader.TryGetCached(resourcePath, ref local_38);
		if (!bVar2) {
			path = ResourcePaths.BuiltinMaps;
			name = String.Concat("Previews/", mapName, "Preview");
			texture = (Texture2D)ResourceManager.LoadAsset(path, name, false, false);
			if ((texture == null) || (texture.klass != typeof(Texture2D))) {
				resourcePath = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				iVar3 = texture.get_width();
				iVar4 = texture.get_height();
				auVar1._4_4_ = (float)iVar4;
				auVar1._0_4_ = (float)iVar3;
				auVar1._8_8_ = 0;
				sprite = Sprite.Create(texture, (Rect)(auVar1 << 0x40), (Vector2)0x3f0000003f000000);
				GisketchSpriteLoader.Store(resourcePath, sprite);
			}
		}
		return resourcePath;
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x5D99060", Offset = "0x5D98060", VA = "0x5D99060")]
	private static GisketchUIRoot Root(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$Root): clean
		bool bVar1;
		GisketchUIRoot pGVar2;

		bVar1 = ((Object)context.GameObject != null);
		if (bVar1) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			pGVar2 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			return pGVar2;
		}
		return null;
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x5D9B370", Offset = "0x5D9A370", VA = "0x5D9B370")]
	public static void OpenCustomContentManager(GisketchActionContext context, string id, string title, string description, string[] names, Action import, Action<string> modify, Action<string> delete, Action openFolder)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenCustomContentManager): clean
		uint uVar1;
		bool bVar2;
		GisketchUIRoot root;

		if (Il2CppMethodInitialized_075488eb == false) {
			Il2CppMethodInitialized_075488eb = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		root = null;
		bVar2 = ((Object)context.GameObject != null);
		if (bVar2) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		bVar2 = ((Object)root == null);
		if (!bVar2) {
			AottgGameCreatePicker._customContentDeleteMode = false;
			AottgGameCreatePicker.ShowCustomContentManager(root, id, title, description, names, import, modify, delete, openFolder);
		}
		return;
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x5D9B500", Offset = "0x5D9A500", VA = "0x5D9B500")]
	private static void ShowCustomContentManager(GisketchUIRoot root, string id, string title, string description, string[] names, Action import, Action<string> modify, Action<string> delete, Action openFolder)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c (Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$ShowCustomContentManager): 9 lines keep C-only constructs
		String* targetAddress;
		GisketchUIRoot* targetAddress_00;
		String ownerId;
		GisketchUIRoot pGVar1;
		GisketchOverlayManager __this;
		AottgGameCreatePicker.c__DisplayClass36_0 __this_00;
		Action<AottgUi> __this_01;
		GisketchNodeDefinition[] pGVar2;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.c__DisplayClass36_0));
		__this_00 = new AottgGameCreatePicker.c__DisplayClass36_0();
		if (__this_00 != null) {
			__this_00.title = title;
			targetAddress = &__this_00.id;
			__this_00.id = id;
			targetAddress_00 = &__this_00.root;
			__this_00.root = root;
			__this_00.import = import;
			__this_00.description = description;
			__this_00.names = names;
			__this_00.delete = delete;
			__this_00.modify = modify;
			__this_00.openFolder = openFolder;
			ownerId = __this_00.id;
			pGVar1 = __this_00.root;
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__0);
			if ((pGVar1 != null) &&(pGVar2 = pGVar1.BuildDetachedNodes(ownerId, __this_01, *targetAddress), pGVar2 != null)) {
				if ((int)pGVar2.Length == 1) {
					pGVar1 = *targetAddress_00;
					if ((pGVar1 == null) ||(__this = pGVar1._Overlays_k__BackingField, __this == null)) goto label_05e9b6c4;
					__this.ShowDynamicDialog(*targetAddress, pGVar2[0], true, true, true, 0);
				}
				return;
			}
		}
	label_05e9b6c4: ;
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c.

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass31_0$$.ctor: clean
	private void c__DisplayClass31_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass31_0$$<MapCategories>b__0: 2 lines keep C-only constructs
	private bool c__DisplayClass31_0__MapCategories_b__0(String category)
	{
		HashSet<string> @object;
		bool bVar1;
		String[] source;
		Func<string, bool> __this_00;

		source = BuiltinLevels.GetMapNames(category);
		@object = this.allowed;
		if (@object == null) {
			throw new NullReferenceException();
		}
		__this_00 = new Func<string, bool>((object)@object, (intptr_t)((Il2CppClass)@object.klass).vtable[8].method);
		bVar1 = Enumerable.Any<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		return bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$.ctor: clean
	private void c__DisplayClass36_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass36_0__ShowCustomContentManager_b__0(AottgUi ui)
	{
		String style;
		Action<AottgUi> __this_00;
		String id;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "popover";
		__this_00 = this.__9__1;
		if (__this_00 == null) {
			__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__1);
			this.__9__1 = __this_00;
		}
		id = String.Concat(this.id, "-content");
		width = AottgUi.Points(670.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 14.0, width, null, null, null, null, null, 18.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this_00, id, layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__1: 8 lines keep C-only constructs
	private void c__DisplayClass36_0__ShowCustomContentManager_b__1(AottgUi panel)
	{
		uint uVar1;
		object @object;
		Action<AottgUi> pSVar2;
		String pSVar3;
		GisketchLength pGVar4;
		GisketchLayoutDefinition pGVar5;
		String pSVar6;
		String[] source;
		Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields pGVar7;
		Func<T, TResult> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		GisketchGridPickerItem[] items;
		Action<GisketchActionContext, GisketchGridPickerItem> __this_01;
		GisketchGridPicker __this_02;

		pSVar6 = "clear";
		pSVar2 = this.__9__2;
		if (pSVar2 == null) {
			pSVar2 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__2);
			this.__9__2 = pSVar2;
		}
		pSVar3 = String.Concat(this.id, "-header");
		pGVar4 = AottgUi.Percent(100.0);
		pGVar5 = AottgUi.Layout("Row", "SpaceBetween", "Center", null, null, 14.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (panel == null) {
			throw new NullReferenceException();
		}
		panel.Panel(pSVar6, pSVar2, pSVar3, pGVar5, null);
		if (AottgGameCreatePicker._customContentDeleteMode == false) {
			pSVar6 = this.description;
		}
		else {
			pSVar6 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Custom.Manager.DeleteInstruction");
		}
		pSVar3 = String.Concat(this.id, "-description");
		panel.Text(pSVar6, "text", pSVar3, null, null);
		pSVar6 = String.Concat(this.id, "-list");
		source = this.names;
		if (source == null) {
			source = (String[])new string[0];
			uVar1 = (typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pGVar7 = typeof(AottgGameCreatePicker.c).static_fields;
			__this_00 = (Func<T, TResult>)pGVar7.__9__36_3;
		}
		else {
			pGVar7 = (typeof(AottgGameCreatePicker.c)).static_fields;
			__this_00 = (Func<T, TResult>)pGVar7.__9__36_3;
		}
		if (__this_00 == null) {
			if (((typeof(AottgGameCreatePicker.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(AottgGameCreatePicker.c).static_fields;
			}
			@object = (object)pGVar7.__9;
			__this_00 = new Func<string, GisketchGridPickerItem>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_ShowCustomContentManager_b__36_3);
			pGVar7 = typeof(AottgGameCreatePicker.c).static_fields;
			pGVar7.__9__36_3 = (Func<string, GisketchGridPickerItem>)__this_00;
		}
		source_00 = Enumerable.Select<string, GisketchGridPickerItem>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_00);
		items = Enumerable.ToArray<GisketchGridPickerItem>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
		pSVar3 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Custom.Manager.Search");
		__this_01 = this.__9__4;
		if (__this_01 == null) {
			__this_01 = il2cpp_codegen_object_new(typeof(Action<GisketchActionContext, GisketchGridPickerItem>)) ;
			__this_01 = new Action<GisketchActionContext, GisketchGridPickerItem>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__4);
			this.__9__4 = __this_01;
		}
		__this_02 = new GisketchGridPicker(pSVar6, items, 1, 620.0, 48.0, 0.0, 0.0, pSVar3, __this_01, 420.0, false, true, false);
		panel.Component((AottgComponent)__this_02);
		pSVar6 = "clear";
		pSVar2 = this.__9__5;
		if (pSVar2 == null) {
			pSVar2 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__5);
			this.__9__5 = pSVar2;
		}
		pSVar3 = String.Concat(this.id, "-actions");
		pGVar4 = AottgUi.Percent(100.0);
		pGVar5 = AottgUi.Layout("Row", "FlexEnd", null, null, null, 12.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		panel.Panel(pSVar6, pSVar2, pSVar3, pGVar5, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__2: 1 lines keep C-only constructs
	private void c__DisplayClass36_0__ShowCustomContentManager_b__2(AottgUi header)
	{
		String pSVar1;
		String pSVar2;
		Action<GisketchActionContext> __this_00;

		pSVar1 = this.title;
		pSVar2 = String.Concat(this.id, "-title");
		if (header == null) {
			throw new NullReferenceException();
		}
		header.Text(pSVar1, "header", pSVar2, null, null);
		pSVar1 = "Common.Import";
		__this_00 = this.__9__6;
		if (__this_00 == null) {
			__this_00 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__6);
			this.__9__6 = __this_00;
		}
		pSVar2 = String.Concat(this.id, "-import");
		header.ButtonKey(0, pSVar1, __this_00, pSVar2, null, null, "import") ;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__6: clean
	private void c__DisplayClass36_0__ShowCustomContentManager_b__6(GisketchActionContext __)
	{
		GisketchUIRoot pGVar1;
		GisketchOverlayManager __this_00;
		Action pSVar2;

		pGVar1 = this.root;
		if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.CloseDialog(this.id, true);
		pSVar2 = this.import;
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__4: 1 lines keep C-only constructs
	private void c__DisplayClass36_0__ShowCustomContentManager_b__4(GisketchActionContext __, GisketchGridPickerItem item)
	{
		GisketchUIRoot pGVar1;
		GisketchOverlayManager __this_00;
		Action<string> pSVar2;
		code *vtableDispatch;

		pGVar1 = this.root;
		if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.CloseDialog(this.id, true);
		if (AottgGameCreatePicker._customContentDeleteMode == false) {
			pSVar2 = this.modify;
		}
		else {
			pSVar2 = this.delete;
		}
		if (pSVar2 == null) {
			return;
		}
		vtableDispatch = (code)pSVar2.invoke_impl;
		(*vtableDispatch)(pSVar2.method_code,item.Key,pSVar2.method,vtableDispatch);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__5: 6 lines keep C-only constructs
	private void c__DisplayClass36_0__ShowCustomContentManager_b__5(AottgUi actions)
	{
		bool bVar1;
		String* ppSVar2;
		String pSVar3;
		Action<GisketchActionContext> pSVar4;
		String pSVar5;

		bVar1 = AottgGameCreatePicker._customContentDeleteMode;
		if (bVar1 == false) {
			ppSVar2 = &"Common.Delete";
		}
		else {
			ppSVar2 = &"Common.Cancel";
		}
		pSVar3 = Aottg2GisketchLocale.Text(*ppSVar2);
		pSVar4 = this.__9__7;
		if (pSVar4 == null) {
			pSVar4 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__7);
			this.__9__7 = pSVar4;
		}
		pSVar5 = String.Concat(this.id, "-delete-mode");
		if (actions == null) {
			throw new NullReferenceException();
		}
		if (AottgGameCreatePicker._customContentDeleteMode == false) {
			ppSVar2 = &"trashcan";
		}
		else {
			ppSVar2 = &"cross";
		}
		actions.Button(1, pSVar3, pSVar4, pSVar5, null, null, *ppSVar2);
		pSVar3 = "GameCreate.Sandbox.Custom.Manager.OpenFolder";
		pSVar4 = this.__9__8;
		if (pSVar4 == null) {
			pSVar4 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__8);
			this.__9__8 = pSVar4;
		}
		pSVar5 = String.Concat(this.id, "-open-folder");
		actions.ButtonKey(1, pSVar3, pSVar4, pSVar5, null, null, "open") ;
		pSVar3 = "Common.Back";
		pSVar4 = this.__9__9;
		if (pSVar4 == null) {
			pSVar4 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__9);
			this.__9__9 = pSVar4;
		}
		pSVar5 = String.Concat(this.id, "-back");
		actions.ButtonKey(1, pSVar3, pSVar4, pSVar5, null, null, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__7: 2 lines keep C-only constructs
	private void c__DisplayClass36_0__ShowCustomContentManager_b__7(GisketchActionContext __)
	{
		bool pbVar1;

		pbVar1 = &AottgGameCreatePicker._customContentDeleteMode;
		*pbVar1 = (bool)(*pbVar1 ^ 1);
		AottgGameCreatePicker.ShowCustomContentManager(this.root, this.id, this.title, this.description, this.names, this.import, this.modify, this.delete, this.openFolder);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__8: 2 lines keep C-only constructs
	private void c__DisplayClass36_0__ShowCustomContentManager_b__8(GisketchActionContext __)
	{
		Action pSVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pSVar1 = this.openFolder;
		if (pSVar1 == null) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__9: clean
	private void c__DisplayClass36_0__ShowCustomContentManager_b__9(GisketchActionContext __)
	{
		GisketchUIRoot pGVar1;
		GisketchOverlayManager __this_00;

		pGVar1 = this.root;
		if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.CloseDialog(this.id, true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass17_0$$.ctor: clean
	private void c__DisplayClass17_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$.ctor: clean
	private void c__DisplayClass18_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass20_0$$.ctor: clean
	private void c__DisplayClass20_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$.ctor: clean
	private void c__DisplayClass28_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$.ctor: clean
	private void c__DisplayClass30_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$.ctor: clean
	private void AottgGameCreatePresetPicker_c__DisplayClass6_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass7_0$$.ctor: clean
	private void AottgGameCreatePresetPicker_c__DisplayClass7_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass9_0$$.ctor: clean
	private void AottgGameCreatePresetPicker_c__DisplayClass9_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c$$.cctor: 1 lines keep C-only constructs
	private static void AottgGameCreatePresetPicker_c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker.c));
		__this = new Object();
		AottgGameCreatePicker.AottgGameCreatePresetPicker.c.__9 =(AottgGameCreatePicker.AottgGameCreatePresetPicker.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c$$.ctor: clean
	private void AottgGameCreatePresetPicker_c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c$$<InputText>b__11_0: clean
	private bool AottgGameCreatePresetPicker_c__InputText_b__11_0(TMP_InputField item)
	{
		bool bVar1;
		Object __this_00;
		String a;

		bVar1 = ((Object)item != null);
		if (bVar1) {
			if (item != null) {
				__this_00 = (Object)item.gameObject;
				if (__this_00 != null) {
					a = __this_00.name;
					bVar1 = (a == "game-create-preset-save-name");
					return bVar1;
				}
			}
			throw new NullReferenceException();
		}
		return false;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$<BuildLoadNodes>b__0: 1 lines keep C-only constructs
	private void AottgGameCreatePresetPicker_c__DisplayClass6_0__BuildLoadNodes_b__0(AottgUi ui)
	{
		String style;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "popover";
		__this_00 = this.__9__1;
		if (__this_00 == null) {
			__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_71ca0c0);
			this.__9__1 = __this_00;
		}
		width = AottgUi.Points(670.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 14.0, width, null, null, null, null, null, 18.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this_00, "game-create-preset-load-content", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$<BuildLoadNodes>b__1: 2 lines keep C-only constructs
	private void AottgGameCreatePresetPicker_c__DisplayClass6_0__BuildLoadNodes_b__1(AottgUi panel)
	{
		String pSVar1;
		Action<AottgUi> __this_00;
		GisketchLength pGVar2;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchLayoutDefinition contentLayout;
		GisketchNodeDefinition pGVar3;
		Action<GisketchActionContext> __this_01;

		if (panel != null) {
			panel.TextKey("GameCreate.Presets.Load.Title", "header", "game-create-preset-load-title", null, null);
			panel.TextKey("GameCreate.Presets.Load.Description", "text", "game-create-preset-load-description", null, null);
			pSVar1 = "scrollView";
			__this_00 = this.__9__2;
			if (__this_00 == null) {
				__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_71ca0c8);
				this.__9__2 = __this_00;
			}
			pGVar2 = AottgUi.Points(360.0);
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			pGVar2 = AottgUi.Percent(100.0);
			contentLayout = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, pGVar2, null, null, null, null, null, 0.0, 0.0, 0.0, 24.0, 8.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			pGVar3 = panel.ScrollView(pSVar1, __this_00, "game-create-preset-load-list", layout, contentLayout, null);
			if (pGVar3 != null) {
				pGVar3.value = "scrollbar-left";
				pSVar1 = "Common.Back";
				__this_01 = this.__9__3;
				if (__this_01 == null) {
					__this_01 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_71ca0d0);
					this.__9__3 = __this_01;
				}
				panel.ButtonKey(1, pSVar1, __this_01, "game-create-preset-load-back", null, null, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$<BuildLoadNodes>b__2: 4 lines keep C-only constructs
	private void AottgGameCreatePresetPicker_c__DisplayClass6_0__BuildLoadNodes_b__2(AottgUi list)
	{
		String[] pSVar1;
		HashSet<object> __this_00;
		bool bVar2;
		AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass6_1 pGVar3;
		AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass6_2 __this_01;
		Action<AottgUi> __this_02;
		String id;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		ulong uVar4;

		if (Il2CppMethodInitialized_075488fa == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075488fa = true;
		}
		pSVar1 = this.names;
		if (pSVar1 == null) {
	label_05e9cb5d: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar1.Length) {
			uVar4 = 0;
			do {
				pGVar3 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass6_1));
				pGVar3 = new Object();
				if (pGVar3 == null) goto label_05e9cb5d;
				pGVar3.CS___8__locals1 = this;
				if ((uint)pSVar1.Length <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				pGVar3.name = pSVar1[uVar4];
				__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass6_2));
				__this_01 = new Object();
				if (__this_01 ==(AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass6_2)0x0) goto label_05e9cb5d;
				__this_01.CS___8__locals2 = pGVar3;
				pGVar3 = __this_01.CS___8__locals2;
				if ((pGVar3 == null) ||(__this_00 = (HashSet<object>)this.customNames, __this_00 == null)) goto label_05e9cb5d;
				bVar2 = __this_00.Contains((object)pGVar3.name);
				__this_01.canDelete = bVar2;
				__this_02 = new Action<AottgUi>((object)__this_01, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_2_Buil);
				pGVar3 = __this_01.CS___8__locals2;
				if (pGVar3 == null) goto label_05e9cb5d;
				id = String.Concat("game-create-preset-load-entry-", pGVar3.name);
				width = AottgUi.Percent(100.0);
				layout = AottgUi.Layout("Row", null, "Center", null, null, 20.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				if (list == null) goto label_05e9cb5d;
				list.Panel("default", __this_02, id, layout, null);
				uVar4 = uVar4 + 1;
			} while ((long)uVar4 < (long)(int)pSVar1.Length);
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_1$$.ctor: clean
	private void AottgGameCreatePresetPicker_c__DisplayClass6_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_2$$.ctor: clean
	private void AottgGameCreatePresetPicker_c__DisplayClass6_2__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$<BuildLoadNodes>b__3: clean
	private void AottgGameCreatePresetPicker_c__DisplayClass6_0__BuildLoadNodes_b__3(GisketchActionContext __)
	{
		GisketchUIRoot pGVar1;
		GisketchOverlayManager __this_00;

		pGVar1 = this.root;
		if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.CloseDialog("game-create-preset-load", true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_1$$<BuildLoadNodes>b__5: clean
	private void AottgGameCreatePresetPicker_c__DisplayClass6_1__BuildLoadNodes_b__5(GisketchActionContext __)
	{
		AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass6_0 pGVar1;
		GisketchUIRoot pGVar2;
		GisketchOverlayManager __this_00;
		bool bVar3;
		String pSVar4;

		pSVar4 = this.name;
		bVar3 = AottgGameCreateSession.LoadPreset(pSVar4);
		if (bVar3) {
			pGVar1 = this.CS___8__locals1;
			if (((pGVar1 != null) &&(pGVar2 = pGVar1.root, pGVar2 != null)) &&(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 != null)) {
				__this_00.CloseDialog("game-create-preset-load", true);
				pGVar1 = this.CS___8__locals1;
				if (pGVar1 != null) {
					pGVar2 = pGVar1.root;
					AottgGameCreateScreen.Refresh(pGVar2);
					return;
				}
			}
			throw new NullReferenceException();
		}
		pSVar4 = String.Concat("Unable to load game preset: ", this.name);
		Debug.LogWarning((object)pSVar4);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_1$$<BuildLoadNodes>b__6: clean
	private void AottgGameCreatePresetPicker_c__DisplayClass6_1__BuildLoadNodes_b__6(GisketchActionContext __)
	{
		AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass6_0 pGVar1;

		pGVar1 = this.CS___8__locals1;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		AottgGameCreatePicker.AottgGameCreatePresetPicker.ConfirmDelete(pGVar1.root, this.name);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_2$$<BuildLoadNodes>b__4: 2 lines keep C-only constructs
	private void AottgGameCreatePresetPicker_c__DisplayClass6_2__BuildLoadNodes_b__4(AottgUi row)
	{
		String pSVar1;
		Action<GisketchActionContext> pSVar2;
		String pSVar3;
		GisketchNodeDefinition pGVar4;
		GisketchLength pGVar5;
		GisketchLayoutDefinition pGVar6;
		String tooltip;
		GisketchLength height;
		AottgGameCreatePicker.AottgGameCreatePresetPicker.c__DisplayClass6_1 pGVar7;

		pGVar7 = this.CS___8__locals2;
		if (pGVar7 != null) {
			pSVar1 = pGVar7.name;
			pSVar2 = pGVar7.__9__5;
			if (pSVar2 == null) {
				pSVar2 = new Action<GisketchActionContext>((object)pGVar7, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_1_Buil);
				pGVar7.__9__5 = pSVar2;
				pGVar7 = this.CS___8__locals2;
				if (pGVar7 == null) goto label_05e9d0e9;
			}
			pSVar3 = String.Concat("game-create-preset-load-load-", pGVar7.name);
			if (row != null) {
				pGVar4 = row.Button(1, pSVar1, pSVar2, pSVar3, null, null, null);
				pGVar5 = AottgUi.Percent(100.0);
				pGVar6 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar5, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
				if (pGVar4 != null) {
					pGVar4.layout = pGVar6;
					pSVar1 = "trashcan";
					if (this.canDelete == false) {
						return;
					}
					pGVar7 = this.CS___8__locals2;
					if (pGVar7 != null) {
						pSVar2 = pGVar7.__9__6;
						if (pSVar2 == null) {
							pSVar2 = new Action<GisketchActionContext>((object)pGVar7, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_1_Buil_71ca0e0);
							pGVar7.__9__6 = pSVar2;
							pGVar7 = this.CS___8__locals2;
							if (pGVar7 == null) goto label_05e9d0e9;
						}
						pSVar3 = String.Concat("game-create-preset-load-delete-", pGVar7.name);
						tooltip = Aottg2GisketchLocale.Text("Common.Delete");
						pGVar4 = row.IconButton(6, pSVar1, pSVar2, pSVar3, tooltip, null);
						pGVar5 = AottgUi.Points(48.0);
						height = AottgUi.Points(48.0);
						pGVar6 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar5, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
						if (pGVar4 != null) {
							pGVar4.layout = pGVar6;
							return;
						}
					}
				}
			}
		}
	label_05e9d0e9: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass7_0$$<ConfirmDelete>b__0: clean
	private void AottgGameCreatePresetPicker_c__DisplayClass7_0__ConfirmDelete_b__0()
	{
		GisketchUIRoot pGVar1;
		GisketchOverlayManager __this_00;
		bool bVar2;
		String pSVar3;

		pSVar3 = this.name;
		bVar2 = AottgGameCreateSession.DeletePreset(pSVar3);
		if (bVar2) {
			pGVar1 = this.root;
			if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.CloseDialog("game-create-preset-load", true);
			pGVar1 = this.root;
			AottgGameCreateScreen.Refresh(pGVar1);
			return;
		}
		pSVar3 = String.Concat("Unable to delete game preset: ", this.name);
		Debug.LogWarning((object)pSVar3);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass9_0$$<BuildSaveNodes>b__0: 1 lines keep C-only constructs
	private void AottgGameCreatePresetPicker_c__DisplayClass9_0__BuildSaveNodes_b__0(AottgUi ui)
	{
		String style;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "popover";
		__this_00 = this.__9__1;
		if (__this_00 == null) {
			__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil_71ca100);
			this.__9__1 = __this_00;
		}
		width = AottgUi.Points(670.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 14.0, width, null, null, null, null, null, 18.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this_00, "game-create-preset-save-content", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass9_0$$<BuildSaveNodes>b__1: 1 lines keep C-only constructs
	private void AottgGameCreatePresetPicker_c__DisplayClass9_0__BuildSaveNodes_b__1(AottgUi panel)
	{
		String pSVar1;
		bool bVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		GisketchNodeDefinition pGVar5;
		Action<AottgUi> __this_00;

		if (panel != null) {
			panel.TextKey("GameCreate.Presets.Save.Title", "header", "game-create-preset-save-title", null, null);
			panel.TextKey("GameCreate.Presets.Save.Description", "text", "game-create-preset-save-description", null, null);
			bVar2 = String.IsNullOrEmpty(typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker). static_fields._saveError);
			if (!bVar2) {
				panel.Callout(3, typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker). static_fields._saveError, "game-create-preset-save-error");
			}
			pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pGVar3 = AottgUi.Percent(100.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			pGVar5 = panel.InputField("game-create-preset-save-name", pSVar1, 0, "inputField", pGVar4, null, null, 0.2, 0x28, null);
			if (pGVar5 != null) {
				pGVar5.value = (String)**(ulong*)(g_data_07556758 + 0xb8);
				pSVar1 = "clear";
				__this_00 = this.__9__2;
				if (__this_00 == null) {
					__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil_71ca108);
					this.__9__2 = __this_00;
				}
				pGVar3 = AottgUi.Percent(100.0);
				pGVar4 = AottgUi.Layout("Row", "FlexEnd", null, null, null, 10.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				panel.Panel(pSVar1, __this_00, "game-create-preset-save-actions", pGVar4, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass9_0$$<BuildSaveNodes>b__2: 2 lines keep C-only constructs
	private void AottgGameCreatePresetPicker_c__DisplayClass9_0__BuildSaveNodes_b__2(AottgUi actions)
	{
		String pSVar1;
		Action<GisketchActionContext> pSVar2;

		pSVar1 = "Common.Back";
		pSVar2 = this.__9__3;
		if (pSVar2 == null) {
			pSVar2 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil_71ca110);
			this.__9__3 = pSVar2;
		}
		if (actions == null) {
			throw new NullReferenceException();
		}
		actions.ButtonKey(1, pSVar1, pSVar2, "game-create-preset-save-back", null, null, null);
		pSVar1 = "Common.Save";
		pSVar2 = this.__9__4;
		if (pSVar2 == null) {
			pSVar2 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass9_0_Buil_71ca118);
			this.__9__4 = pSVar2;
		}
		actions.ButtonKey(0, pSVar1, pSVar2, "game-create-preset-save-save", null, null, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass9_0$$<BuildSaveNodes>b__3: clean
	private void AottgGameCreatePresetPicker_c__DisplayClass9_0__BuildSaveNodes_b__3(GisketchActionContext __)
	{
		GisketchUIRoot pGVar1;
		GisketchOverlayManager __this_00;

		pGVar1 = this.root;
		if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.CloseDialog("game-create-preset-save", true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass9_0$$<BuildSaveNodes>b__4: clean
	private void AottgGameCreatePresetPicker_c__DisplayClass9_0__BuildSaveNodes_b__4(GisketchActionContext actionContext)
	{
		GisketchUIRoot pGVar1;
		GisketchOverlayManager __this_00;
		bool bVar2;
		String name;
		MethodInfo method_00;

		name = AottgGameCreatePicker.AottgGameCreatePresetPicker.InputText(actionContext.GameObject);
		method_00 = (MethodInfo)typeof(AottgGameCreatePicker.AottgGameCreatePresetPicker).static_fields ;
		bVar2 = AottgGameCreateSession.SavePreset(name, (String*)method_00);
		pGVar1 = this.root;
		if (bVar2) {
			if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.CloseDialog("game-create-preset-save", true);
			pGVar1 = this.root;
			AottgGameCreateScreen.Refresh(pGVar1);
			return;
		}
		AottgGameCreatePicker.AottgGameCreatePresetPicker.ShowSave(pGVar1);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgGameCreatePicker.c();
		AottgGameCreatePicker.c.__9 =(AottgGameCreatePicker.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<OpenMap>b__13_0: clean
	private bool c__OpenMap_b__13_0(String name)
	{
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(name);
		return !bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<OpenMode>b__14_0: clean
	private bool c__OpenMode_b__14_0(String value)
	{
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(value);
		return !bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildModeNodes>b__16_0: clean
	private bool c__BuildModeNodes_b__16_0(String value)
	{
		bool bVar1;

		bVar1 = BuiltinLevels.IsLogicBuiltin(value);
		return !bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildModeNodes>b__16_4: clean
	private bool c__BuildModeNodes_b__16_4(String value)
	{
		bool bVar1;
		bool bVar2;

		bVar1 = BuiltinLevels.IsLogicBuiltin(value);
		bVar2 = (AottgGameCreatePicker._modeCategory == "Builtin");
		return bVar2 == bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildModeNodes>b__16_5: clean
	private GisketchGridPickerItem c__BuildModeNodes_b__16_5(String value)
	{
		String sprite;
		String label;
		String keywords;

		label = ContentLocale.ModeName(value);
		sprite = (String)**(ulong*)(g_data_07556758 + 0xb8);
		keywords = String.Concat(AottgGameCreatePicker._modeCategory, " ", value);
		__return_storage_ptr__.Key = null;
		__return_storage_ptr__.Label = null;
		__return_storage_ptr__.Sprite = null;
		__return_storage_ptr__.Keywords = null;
		__return_storage_ptr__ = new GisketchGridPickerItem(value, label, sprite, keywords);
		return __return_storage_ptr__;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildAddonNodes>b__18_6: clean
	private __f__AnonymousType0<string, int> c__BuildAddonNodes_b__18_6(String value, int index)
	{
		__f__AnonymousType0<string, int> __this_00;

		__this_00 = new __f__AnonymousType0<string, int>((object)value, index);
		return __this_00;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildCategoryTabs>b__20_0: 2 lines keep C-only constructs
	private AottgSubtab c__BuildCategoryTabs_b__20_0(String category)
	{
		bool bVar1;
		String* ppSVar2;
		String label;
		AottgSubtab __this_00;

		bVar1 = (category == "Builtin");
		if (bVar1) {
			ppSVar2 = &"GameCreate.Picker.Category.Builtin";
		}
		else {
			ppSVar2 = &"GameCreate.Picker.Category.Custom";
		}
		label = Aottg2GisketchLocale.Text(*ppSVar2);
		__this_00 = new AottgSubtab(category, label);
		return __this_00;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildTitanSpawnNodes>b__28_0: clean
	private String c__BuildTitanSpawnNodes_b__28_0(String name)
	{
		String pSVar1;

		pSVar1 = String.Concat("CreateGamePopup.Titans.", name);
		if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0) {
			pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
			return pSVar1;
		}
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		return pSVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildMapNodes>b__30_6: clean
	private AottgSubtab c__BuildMapNodes_b__30_6(String category)
	{
		String label;
		AottgSubtab __this_00;

		label = ContentLocale.MapCategory(category);
		__this_00 = new AottgSubtab(category, label);
		return __this_00;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildMapNodes>b__30_3: clean
	private String c__BuildMapNodes_b__30_3(String value)
	{
		return value;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<ShowCustomContentManager>b__36_3: clean
	private GisketchGridPickerItem c__ShowCustomContentManager_b__36_3(String name)
	{
		String sprite;

		sprite = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__return_storage_ptr__.Sprite = null;
		__return_storage_ptr__.Keywords = null;
		__return_storage_ptr__.Key = null;
		__return_storage_ptr__.Label = null;
		__return_storage_ptr__ = new GisketchGridPickerItem(name, name, sprite, sprite);
		return __return_storage_ptr__;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass16_0$$<BuildModeNodes>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass16_0__BuildModeNodes_b__1(AottgUi ui)
	{
		String style;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "popover";
		__this_00 = this.__9__2;
		if (__this_00 == null) {
			__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__2);
			this.__9__2 = __this_00;
		}
		width = AottgUi.Points(670.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 14.0, width, null, null, null, null, null, 18.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this_00, "game-create-mode-picker-content", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass16_0$$<BuildModeNodes>b__2: 9 lines keep C-only constructs
	private void c__DisplayClass16_0__BuildModeNodes_b__2(AottgUi panel)
	{
		String[] pSVar1;
		object pIVar2;
		GisketchUIRoot root;
		String id;
		Action<string> __this_00;
		Func<string, bool> __this_01;
		System_Collections_Generic_IEnumerable_TSource__o source;
		Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields pGVar3;
		Func<T, TResult> __this_02;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		GisketchGridPickerItem[] items;
		String pSVar4;
		GisketchGridPicker component;

		if (panel != null) {
			panel.TextKey("GameCreate.Picker.Mode.Title", "header", "game-create-mode-picker-title", null, null);
			id = "game-create-mode-picker";
			pSVar1 = this.categories;
			__this_00 = this.__9__3;
			pSVar4 = AottgGameCreatePicker._modeCategory;
			if (__this_00 == null) {
				__this_00 = new Action<string>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__3);
				this.__9__3 = __this_00;
			}
			AottgGameCreatePicker.BuildCategoryTabs(panel, id, pSVar1, pSVar4, __this_00);
			pSVar1 = this.modes;
			if ((typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar3 = typeof(AottgGameCreatePicker.c).static_fields;
				__this_01 = pGVar3.__9__16_4;
			}
			else {
				pGVar3 = typeof(AottgGameCreatePicker.c).static_fields;
				__this_01 = pGVar3.__9__16_4;
			}
			if (__this_01 == null) {
				if (((typeof(AottgGameCreatePicker.c))._2). cctor_finished_or_no_cctor == 0) {
					pGVar3 = typeof(AottgGameCreatePicker.c).static_fields;
				}
				pIVar2 = (object)pGVar3.__9;
				__this_01 = new Func<string, bool>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_4);
				pGVar3 = typeof(AottgGameCreatePicker.c).static_fields;
				pGVar3.__9__16_4 = __this_01;
			}
			source = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar1, (System_Func_TSource__bool__o)__this_01);
			if ((typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar3 = typeof(AottgGameCreatePicker.c).static_fields;
				__this_02 = (Func<T, TResult>)pGVar3.__9__16_5;
			}
			else {
				pGVar3 = typeof(AottgGameCreatePicker.c).static_fields;
				__this_02 = (Func<T, TResult>)pGVar3.__9__16_5;
			}
			if (__this_02 == null) {
				if (((typeof(AottgGameCreatePicker.c))._2). cctor_finished_or_no_cctor == 0) {
					pGVar3 = typeof(AottgGameCreatePicker.c).static_fields;
				}
				pIVar2 = (object)pGVar3.__9;
				__this_02 = (Func<T, TResult>)il2cpp_codegen_object_new(typeof(Func<string, GisketchGridPickerItem>)) ;
				__this_02 = new Func<object, GisketchGridPickerItem>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_5);
				pGVar3 = typeof(AottgGameCreatePicker.c).static_fields;
				pGVar3.__9__16_5 = (Func<string, GisketchGridPickerItem>)__this_02;
			}
			source_00 = Enumerable.Select<string, GisketchGridPickerItem>(source, (System_Func_TSource__TResult__o)__this_02);
			items = Enumerable.ToArray<GisketchGridPickerItem>((System_Collections_Generic_IEnumerable_TSource__o)source_00) ;
			pSVar4 = AottgGameCreatePicker._modeCategory;
			if (pSVar4 != null) {
				root = this.root;
				pSVar4 = pSVar4.ToLowerInvariant();
				component = AottgGameCreatePicker.BuildModePicker(root, items, pSVar4, this.selected);
				panel.Component((AottgComponent)component);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass16_0$$<BuildModeNodes>b__3: clean
	private void c__DisplayClass16_0__BuildModeNodes_b__3(String category)
	{
		GisketchUIRoot root;
		GisketchNodeDefinition[] nodes;

		AottgGameCreatePicker._modeCategory = category;
		root = this.root;
		nodes = AottgGameCreatePicker.BuildModeNodes(root, this.modes, this.selected);
		AottgGameCreatePicker.RefreshPicker(root, "game-create-mode-picker", nodes);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass17_0$$<BuildModePicker>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass17_0__BuildModePicker_b__0(GisketchActionContext selectContext, GisketchGridPickerItem item)
	{
		GisketchUIRoot pGVar1;
		GisketchOverlayManager __this_00;
		Action<string> pSVar2;
		code *vtableDispatch;

		pGVar1 = this.root;
		if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.ClosePopover("game-create-mode-picker", true);
		pSVar2 = this.selected;
		if (pSVar2 == null) {
			return;
		}
		vtableDispatch = (code)pSVar2.invoke_impl;
		(*vtableDispatch)(pSVar2.method_code,item.Key,pSVar2.method,vtableDispatch);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>g__HasBuiltin|0: 1 lines keep C-only constructs
	private bool c__DisplayClass18_0__BuildAddonNodes_g__HasBuiltin_0(String value)
	{
		HashSet<object> __this_00;
		bool bVar1;

		if (Il2CppMethodInitialized_07548910 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07548910 = true;
		}
		__this_00 = (HashSet<object>)this.builtin;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.Contains((object)value);
		return bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__1: 1 lines keep C-only constructs
	private bool c__DisplayClass18_0__BuildAddonNodes_b__1(String value)
	{
		HashSet<object> __this_00;
		bool bVar1;

		if (Il2CppMethodInitialized_07548910 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07548910 = true;
		}
		__this_00 = (HashSet<object>)this.builtin;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.Contains((object)value);
		return !bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__2: 1 lines keep C-only constructs
	private void c__DisplayClass18_0__BuildAddonNodes_b__2(AottgUi ui)
	{
		String style;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "popover";
		__this_00 = this.__9__3;
		if (__this_00 == null) {
			__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__3);
			this.__9__3 = __this_00;
		}
		width = AottgUi.Points(670.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 14.0, width, null, null, null, null, null, 18.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this_00, "game-create-addon-picker-content", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__3: 17 lines keep C-only constructs
	private void c__DisplayClass18_0__BuildAddonNodes_b__3(AottgUi panel)
	{
		String[] pSVar1;
		object @object;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		Action<string> __this_01;
		Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields pGVar2;
		Func<T1, T2, TResult> __this_02;
		System_Collections_Generic_IEnumerable_TResult__o pSVar3;
		System_Func_TSource__bool__o __this_03;
		System_Collections_Generic_IEnumerable_TSource__o source;
		Func<T, TResult> __this_04;
		GisketchGridPickerItem[] items;
		String pSVar4;
		String pSVar5;
		GisketchGridPicker __this_05;
		Action<GisketchActionContext, GisketchGridPickerItem> __this_06;

		pSVar4 = "clear";
		__this_00 = this.__9__4;
		if (__this_00 == null) {
			__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__4);
			this.__9__4 = __this_00;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", "SpaceBetween", "Center", null, null, 14.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (panel != null) {
			panel.Panel(pSVar4, __this_00, "game-create-addon-picker-header", layout, null);
			pSVar5 = "game-create-addon-picker";
			pSVar1 = this.categories;
			__this_01 = this.__9__5;
			pSVar4 = AottgGameCreatePicker._addonCategory;
			if (__this_01 == null) {
				__this_01 = new Action<string>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__5);
				this.__9__5 = __this_01;
			}
			AottgGameCreatePicker.BuildCategoryTabs(panel, pSVar5, pSVar1, pSVar4, __this_01);
			pSVar1 = this.addons;
			pGVar2 = typeof(AottgGameCreatePicker.c).static_fields;
			__this_02 = (Func<T1, T2, TResult>)pGVar2.__9__18_6;
			if (__this_02 == null) {
				if ((typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar2 = typeof(AottgGameCreatePicker.c).static_fields;
				}
				@object = (object)pGVar2.__9;
				__this_02 = new Func<string, int, __f__AnonymousType0<string, int>>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildAddonNodes_b__18_6);
				pGVar2 = typeof(AottgGameCreatePicker.c).static_fields;
				pGVar2.__9__18_6 = (Func<string, int, __f__AnonymousType0<string, int>>)__this_02;
			}
			pSVar3 = Enumerable.Select<string, __f__AnonymousType0<string, int>>((System_Collections_Generic_IEnumerable_TSource__o)pSVar1, (System_Func_TSource__int__TResult__o)__this_02);
			__this_03 = (System_Func_TSource__bool__o)this.__9__7;
			if (__this_03 == null) {
				__this_03 = new Func<__f__AnonymousType0<string, int>, bool>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__7);
				this.__9__7 = (Func<__f__AnonymousType0<string, int>, bool>)__this_03;
			}
			source = Enumerable.Where<__f__AnonymousType0<string, int>>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, __this_03);
			__this_04 = (Func<T, TResult>)this.__9__8;
			if (__this_04 == null) {
				__this_04 = (Func<T, TResult>)il2cpp_codegen_object_new((Il2CppClass)typeof(Func<__f__AnonymousType0<string, int>, GisketchGridPickerItem>));
				__this_04 = new Func<@object, GisketchGridPickerItem>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__8);
				this.__9__8 =(Func<__f__AnonymousType0<string, int>, GisketchGridPickerItem>)__this_04;
			}
			pSVar3 = Enumerable.Select<__f__AnonymousType0<string, int>, GisketchGridPickerItem>(source, (System_Func_TSource__TResult__o)__this_04);
			items = Enumerable.ToArray<GisketchGridPickerItem>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3) ;
			pSVar4 = AottgGameCreatePicker._addonCategory;
			if (pSVar4 != null) {
				pSVar4 = pSVar4.ToLowerInvariant();
				pSVar4 = String.Concat("game-create-addon-picker-", pSVar4, "-list");
				pSVar5 = Aottg2GisketchLocale.Text("GameCreate.Picker.Addons.Search");
				__this_06 = this.__9__9;
				if (__this_06 == null) {
					__this_06 = il2cpp_codegen_object_new((Il2CppClass)typeof(Action<GisketchActionContext, GisketchGridPickerItem>));
					__this_06 = new Action<GisketchActionContext, GisketchGridPickerItem>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__9);
					this.__9__9 = __this_06;
				}
				__this_05 = il2cpp_codegen_object_new(typeof(GisketchGridPicker)) ;
				__this_05 = new GisketchGridPicker(pSVar4, items, 1, 620.0, 48.0, 0.0, 0.0, pSVar5, __this_06, 500.0, false, true, false);
				panel.Component((AottgComponent)__this_05);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__4: 1 lines keep C-only constructs
	private void c__DisplayClass18_0__BuildAddonNodes_b__4(AottgUi header)
	{
		String key;
		Action<GisketchActionContext> __this_00;
		GisketchNodeDefinition pGVar1;
		GisketchLength width;
		GisketchLayoutDefinition pGVar2;

		if (header != null) {
			header.TextKey("GameCreate.Picker.Addons.Title", "header", "game-create-addon-picker-title", null, null);
			key = "Common.Done";
			__this_00 = this.__9__10;
			if (__this_00 == null) {
				__this_00 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__10);
				this.__9__10 = __this_00;
			}
			pGVar1 = header.ButtonKey(0, key, __this_00, "game-create-addon-picker-done", null, null, null);
			width = AottgUi.Points(180.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__10: clean
	private void c__DisplayClass18_0__BuildAddonNodes_b__10(GisketchActionContext __)
	{
		Action pSVar1;
		GisketchUIRoot pGVar2;
		GisketchOverlayManager __this_00;

		pSVar1 = this.completed;
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
		}
		pGVar2 = this.root;
		if ((pGVar2 == null) ||(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.ClosePopover("game-create-addon-picker", true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__5: clean
	private void c__DisplayClass18_0__BuildAddonNodes_b__5(String category)
	{
		GisketchUIRoot root;
		GisketchNodeDefinition[] nodes;

		AottgGameCreatePicker._addonCategory = category;
		root = this.root;
		nodes = AottgGameCreatePicker.BuildAddonNodes(root, this.addons, this.builtin, this.isSelected, this.toggled, this.completed);
		AottgGameCreatePicker.RefreshPicker(root, "game-create-addon-picker", nodes);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__7: clean
	private bool c__DisplayClass18_0__BuildAddonNodes_b__7(__f__AnonymousType0<string, int> item)
	{
		String item_00;
		HashSet<object> __this_00;
		bool bVar1;
		bool bVar2;

		if (item != null) {
			item_00 = item._value_i__Field;
			__this_00 = (HashSet<object>)this.builtin;
			if (__this_00 != null) {
				bVar1 = __this_00.Contains((object)item_00);
				bVar2 = (AottgGameCreatePicker._addonCategory == "Builtin");
				return bVar2 == bVar1;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__8: clean
	private GisketchGridPickerItem c__DisplayClass18_0__BuildAddonNodes_b__8(__f__AnonymousType0<string, int> item)
	{
		Func<int, bool> pSVar1;
		String keywords;
		sbyte cVar2;
		String key;
		String pSVar3;
		String label;
		int iStack_24;

		if (item == null) {
			throw new NullReferenceException();
		}
		key = iStack_24.ToString();
		pSVar1 = this.isSelected;
		if (pSVar1 != null) {
			cVar2 = (*(code)pSVar1.invoke_impl)(pSVar1.method_code,item._index_i__Field,pSVar1.method);
			if (cVar2 != false) {
				pSVar3 = Aottg2GisketchLocale.Text("GameCreate.Picker.Addons.Selected");
				pSVar3 = String.Concat(pSVar3, "  |  ");
				goto label_05e9f28e;
			}
		}
		pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
	label_05e9f28e: ;
		label = String.Concat(pSVar3, item._value_i__Field);
		pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		keywords = AottgGameCreatePicker._addonCategory;
		__return_storage_ptr__.Sprite = null;
		__return_storage_ptr__.Keywords = null;
		__return_storage_ptr__.Key = null;
		__return_storage_ptr__.Label = null;
		__return_storage_ptr__ = new GisketchGridPickerItem(key, label, pSVar3, keywords);
		return __return_storage_ptr__;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__9: clean
	private void c__DisplayClass18_0__BuildAddonNodes_b__9(GisketchActionContext selectContext, GisketchGridPickerItem item)
	{
		GisketchUIRoot root;
		bool bVar1;
		GisketchNodeDefinition[] nodes;
		Action<int> pSVar2;
		int iStack_14;

		iStack_14 = 0;
		bVar1 = Int32.TryParse(item.Key, ref iStack_14);
		if (bVar1) {
			pSVar2 = this.toggled;
			if (pSVar2 == null) {
				pSVar2 = null;
			}
			else {
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,iStack_14,pSVar2.method);
				pSVar2 = this.toggled;
			}
			root = this.root;
			nodes = AottgGameCreatePicker.BuildAddonNodes(root, this.addons, this.builtin, this.isSelected, pSVar2, this.completed);
			AottgGameCreatePicker.RefreshPicker(root, "game-create-addon-picker", nodes);
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass20_0$$<BuildCategoryTabs>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass20_0__BuildCategoryTabs_b__1(GisketchActionContext context, String category)
	{
		Action<string> pSVar1;
		code *vtableDispatch;

		pSVar1 = this.changed;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,category,pSVar1.method,vtableDispatch);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass28_0__BuildTitanSpawnNodes_b__1(AottgUi ui)
	{
		String style;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "popover";
		__this_00 = this.__9__2;
		if (__this_00 == null) {
			__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__2);
			this.__9__2 = __this_00;
		}
		width = AottgUi.Points(520.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, width, null, null, null, null, null, 18.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this_00, "game-create-titan-spawn-picker-content", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__2: 3 lines keep C-only constructs
	private void c__DisplayClass28_0__BuildTitanSpawnNodes_b__2(AottgUi panel)
	{
		String[] pSVar1;
		AottgGameCreatePicker.c__DisplayClass28_1 __this_00;
		Action<AottgUi> pSVar2;
		String pSVar3;
		GisketchLength pGVar4;
		GisketchLayoutDefinition pGVar5;
		int iVar6;

		if (panel != null) {
			iVar6 = 0;
			panel.TextKey("GameCreate.Picker.TitanSpawns.Title", "header", "game-create-titan-spawn-picker-title", null, null);
			pSVar1 = this.labels;
			pSVar3 = "clear";
			while (true) {
				"clear" = pSVar3;
				if (!(pSVar1 != null)) break;
				if ((int)pSVar1.Length <= iVar6) {
					pSVar2 = this.__9__3;
					if (pSVar2 == null) {
						pSVar2 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__3);
						this.__9__3 = pSVar2;
					}
					pGVar4 = AottgUi.Percent(100.0);
					pGVar5 = AottgUi.Layout("Row", "FlexEnd", null, null, "Wrap", 10.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
					panel.Panel(pSVar3, pSVar2, "game-create-titan-spawn-picker-actions", pGVar5, null);
					return;
				}
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.c__DisplayClass28_1));
				__this_00 = new Object();
				if (__this_00 == null) break;
				__this_00.CS___8__locals1 = this;
				__this_00.index = iVar6;
				pSVar2 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1_BuildTitanSpawnNodes_b__4);
				pSVar3 = (__this_00.index).ToString();
				pSVar3 = String.Concat("game-create-titan-spawn-picker-row-", pSVar3);
				pGVar4 = AottgUi.Percent(100.0);
				pGVar5 = AottgUi.Layout("Row", "SpaceBetween", "Center", null, null, 18.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				panel.Panel("clear", pSVar2, pSVar3, pGVar5, null);
				iVar6 = iVar6 + 1;
				pSVar3 = "clear";
				pSVar1 = this.labels;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_1$$.ctor: clean
	private void c__DisplayClass28_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__3: 2 lines keep C-only constructs
	private void c__DisplayClass28_0__BuildTitanSpawnNodes_b__3(AottgUi actions)
	{
		String pSVar1;
		Action<GisketchActionContext> pSVar2;

		pSVar1 = "GameCreate.Picker.TitanSpawns.Reset";
		pSVar2 = this.__9__6;
		if (pSVar2 == null) {
			pSVar2 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__6);
			this.__9__6 = pSVar2;
		}
		if (actions == null) {
			throw new NullReferenceException();
		}
		actions.ButtonKey(1, pSVar1, pSVar2, "game-create-titan-spawn-picker-reset", null, null, null);
		pSVar1 = "GameCreate.Picker.TitanSpawns.Autofill";
		pSVar2 = this.__9__7;
		if (pSVar2 == null) {
			pSVar2 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__7);
			this.__9__7 = pSVar2;
		}
		actions.ButtonKey(0, pSVar1, pSVar2, "game-create-titan-spawn-picker-autofill", null, null, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__6: clean
	private void c__DisplayClass28_0__BuildTitanSpawnNodes_b__6(GisketchActionContext actionContext)
	{
		AottgGameCreateSession.ResetTitanSpawnProbabilities();
		AottgGameCreatePicker.RefreshTitanSpawn(this.root);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__7: clean
	private void c__DisplayClass28_0__BuildTitanSpawnNodes_b__7(GisketchActionContext actionContext)
	{
		AottgGameCreateSession.AutofillTitanSpawnProbabilities();
		AottgGameCreatePicker.RefreshTitanSpawn(this.root);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_1$$<BuildTitanSpawnNodes>b__4: 2 lines keep C-only constructs
	private void c__DisplayClass28_1__BuildTitanSpawnNodes_b__4(AottgUi row)
	{
		AottgGameCreatePicker.c__DisplayClass28_1 __this_00;
		uint uVar1;
		AottgGameCreatePicker.c__DisplayClass28_0 pGVar2;
		String[] pSVar3;
		Single[] pSVar4;
		String pSVar5;
		String pSVar6;
		String id;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		Action<GisketchActionContext> __this_01;
		GisketchNodeDefinition pGVar7;
		CultureInfo provider;

		pGVar2 = this.CS___8__locals1;
		if ((pGVar2 != null) &&(pSVar3 = pGVar2.labels, pSVar3 != null)) {
			__this_00 = &this.fields;
			if ((uint)pSVar3.Length <= (uint)__this_00.index) {
	label_05e9fe60: ;
				throw new IndexOutOfRangeException();
			}
			pSVar6 = pSVar3[__this_00.index];
			pSVar5 = (__this_00.index).ToString();
			pSVar5 = String.Concat("game-create-titan-spawn-picker-label-", pSVar5);
			if (row != null) {
				row.Text(pSVar6, "text", pSVar5, null, null);
				pSVar6 = (__this_00.index).ToString();
				id = String.Concat("game-create-titan-spawn-picker-input-", pSVar6);
				width = AottgUi.Points(180.0);
				layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				pSVar5 = "inputField";
				pSVar6 = "0";
				__this_01 = this.__9__5;
				if (__this_01 == null) {
					__this_01 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1_BuildTitanSpawnNodes_b__5);
					this.__9__5 = __this_01;
				}
				pGVar7 = row.InputField(id, pSVar6, 2, pSVar5, layout, null, null, 0.2, 0, __this_01);
				pGVar2 = this.CS___8__locals1;
				if ((pGVar2 != null) &&(pSVar4 = pGVar2.values, pSVar4 != null)) {
					uVar1 = this.index;
					if ((int)uVar1 < (int)pSVar4.Length) {
						provider = CultureInfo.InvariantCulture;
						if ((uint)pSVar4.Length <= uVar1) goto label_05e9fe60;
						pSVar6 = (pSVar4.m_Items + (int)uVar1).ToString((IFormatProvider)provider);
					}
					else {
						pSVar6 = "0";
					}
					if (pGVar7 != null) {
						pGVar7.value = pSVar6;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_1$$<BuildTitanSpawnNodes>b__5: 5 lines keep C-only constructs
	private void c__DisplayClass28_1__BuildTitanSpawnNodes_b__5(GisketchActionContext changeContext)
	{
		int index;
		String s;
		bool bVar1;
		TMP_InputField x;
		CultureInfo provider;
		String* ppSVar2;
		float value;
		float local_30;
		float local_2c;

		if (Il2CppMethodInitialized_0754891f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
			Il2CppMethodInitialized_0754891f = true;
		}
		local_30 = 0.0;
		x = null;
		bVar1 = ((Object)changeContext.GameObject != null);
		if (bVar1) {
			if (changeContext.GameObject == null) goto label_05e9fff7;
			x = changeContext.GameObject.GetComponent<TMP_InputField>();
		}
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (x == null) {
	label_05e9fff7: ;
				throw new NullReferenceException();
			}
			ppSVar2 = &x.m_Text;
		}
		else if (changeContext.Node == null) {
			ppSVar2 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			ppSVar2 = &((changeContext.Node).fields).value;
		}
		s = *ppSVar2;
		provider = CultureInfo.InvariantCulture;
		bVar1 = Single.TryParse(s, 0xa7, (IFormatProvider)provider, ref local_30);
		if (bVar1) {
			index = this.index;
			value = local_30;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				local_2c = local_30;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				value = local_2c;
			}
			AottgGameCreateSession.SetTitanSpawnProbability(index, value);
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>g__ItemCategory|0: clean
	private String c__DisplayClass30_0__BuildMapNodes_g__ItemCategory_0(String name)
	{
		String pSVar1;

		if (this.showCategories != false) {
			return AottgGameCreatePicker._mapCategory;
		}
		return pSVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass30_0__BuildMapNodes_b__1(AottgUi ui)
	{
		String style;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		style = "popover";
		__this_00 = this.__9__2;
		if (__this_00 == null) {
			__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__2);
			this.__9__2 = __this_00;
		}
		width = AottgUi.Points(1200.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 14.0, width, null, null, null, null, null, 18.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this_00, "game-create-map-picker-content", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>b__2: 26 lines keep C-only constructs
	private void c__DisplayClass30_0__BuildMapNodes_b__2(AottgUi panel)
	{
		float itemHeight;
		float itemWidth;
		sbyte cVar1;
		bool bVar2;
		uint uVar3;
		object pIVar4;
		HashSet<string> @object;
		bool bVar5;
		AottgGameCreatePicker.c__DisplayClass30_1 __this_00;
		Func<string, AottgSubtab> __this_01;
		System_Collections_Generic_IEnumerable_TResult__o pSVar6;
		AottgSubtab[] tabs;
		Action<T1, T2> __this_02;
		AottgSubtabStrip __this_03;
		String[] pSVar7;
		Func<string, IEnumerable<string>> __this_04;
		Func<string, bool> __this_05;
		System_Collections_Generic_IEnumerable_TSource__o source;
		Object[] source_00;
		Func<T, TResult> __this_06;
		GisketchGridPickerItem[] items;
		String* ppSVar8;
		String pSVar9;
		String pSVar10;
		Action<GisketchActionContext, GisketchGridPickerItem> __this_07;
		ulong uVar11;
		GisketchGridPicker __this_08;
		Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_StaticFields pGVar12;
		System_Func_TSource__TKey__o __this_09;
		float thumbnailWidth;
		float fStack_54;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreatePicker.c__DisplayClass30_1));
		__this_00 = new Object();
		if (__this_00 == null) goto label_05ea0b86;
		__this_00.CS___8__locals1 = this;
		if (panel == null) goto label_05ea0b86;
		panel.TextKey("GameCreate.Picker.Map.Title", "header", "game-create-map-picker-title", null, null);
		if (this.showCategories == false) {
	label_05ea0695: ;
			pSVar7 = this.categories;
			__this_04 = new Func<string, IEnumerable<string>>(null, (intptr_t)MethodInfo_Map_BuiltinLevels_GetMapNames);
			pSVar6 = Enumerable.SelectMany<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar7, (System_Func_TSource__IEnumerable_TResult___o)__this_04);
			@object = this.allowed;
			if (@object == null) {
	label_05ea0b86: ;
				throw new NullReferenceException();
			}
			__this_05 = new Func<string, bool>((object)@object, (intptr_t)((Il2CppClass)@object.klass).vtable[8].method);
			pSVar7 = (String[])Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar6, (System_Func_TSource__bool__o)__this_05);
			cVar1 = this.showCategories;
		}
		else {
			pSVar7 = this.categories;
			if ((typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar12 = typeof(AottgGameCreatePicker.c).static_fields;
				__this_01 = pGVar12.__9__30_6;
			}
			else {
				pGVar12 = typeof(AottgGameCreatePicker.c).static_fields;
				__this_01 = pGVar12.__9__30_6;
			}
			if (__this_01 == null) {
				if (((typeof(AottgGameCreatePicker.c))._2). cctor_finished_or_no_cctor == 0) {
					pGVar12 = typeof(AottgGameCreatePicker.c).static_fields;
				}
				pIVar4 = (object)pGVar12.__9;
				__this_01 = new Func<string, AottgSubtab>(pIVar4, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildMapNodes_b__30_6);
				pGVar12 = typeof(AottgGameCreatePicker.c).static_fields;
				pGVar12.__9__30_6 = __this_01;
			}
			pSVar6 = Enumerable.Select<string, AottgSubtab>((System_Collections_Generic_IEnumerable_TSource__o)pSVar7, (System_Func_TSource__TResult__o)__this_01);
			tabs = (AottgSubtab[])Enumerable.ToArray<AottgSubtab>((System_Collections_Generic_IEnumerable_TSource__o)pSVar6);
			pSVar10 = "game-create-map-picker-categories";
			pSVar9 = AottgGameCreatePicker._mapCategory;
			__this_02 = (Action<T1, T2>)this.__9__7;
			if (__this_02 == null) {
				__this_02 = new Action<GisketchActionContext, string>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__7);
				this.__9__7 = (Action<GisketchActionContext, string>)__this_02;
			}
			__this_03 = new AottgSubtabStrip(pSVar10, tabs, pSVar9, (Action<GisketchActionContext, string>)__this_02);
			panel.Component((AottgComponent)__this_03);
			if (this.showCategories == false) goto label_05ea0695;
			pSVar9 = AottgGameCreatePicker._mapCategory;
			pSVar7 = BuiltinLevels.GetMapNames(pSVar9);
			cVar1 = this.showCategories;
		}
		if (cVar1 == false) {
			__this_00.custom = false;
			uVar3 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			goto joined_r0x05ea0a61;
		}
		bVar5 = String.Equals(AottgGameCreatePicker._mapCategory, "Custom", 5);
		__this_00.custom = bVar5;
		if (!bVar5) {
			uVar3 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			goto joined_r0x05ea0a61;
		}
		if ((typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar12 = typeof(AottgGameCreatePicker.c).static_fields;
			__this_09 = (System_Func_TSource__TKey__o)pGVar12.__9__30_3;
			if (__this_09 == null) goto label_05ea0ac8;
	label_05ea09f9: ;
			if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor != 0) goto label_05ea0a10;
	label_05ea0b44: ;
			if (Il2CppMethodInitialized_07542886 == false) goto label_05ea0b56;
	label_05ea0a1d: ;
			uVar3 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			pGVar12 = typeof(AottgGameCreatePicker.c).static_fields;
			__this_09 = (System_Func_TSource__TKey__o)pGVar12.__9__30_3;
			if (__this_09 != null) goto label_05ea09f9;
	label_05ea0ac8: ;
			if ((typeof(AottgGameCreatePicker.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar12 = typeof(AottgGameCreatePicker.c).static_fields;
			}
			pIVar4 = (object)pGVar12.__9;
			__this_09 = new Func<string, string>(pIVar4, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildMapNodes_b__30_3);
			pGVar12 = typeof(AottgGameCreatePicker.c).static_fields;
			pGVar12.__9__30_3 = (Func<string, string>)__this_09;
			if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) goto label_05ea0b44;
	label_05ea0a10: ;
			if (Il2CppMethodInitialized_07542886 != false) goto label_05ea0a1d;
	label_05ea0b56: ;
			Il2CppMethodInitialized_07542886 = true;
			uVar3 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		pSVar7 = (String[])Enumerable.OrderBy<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar7, __this_09, (System_Collections_Generic_IComparer_TKey__o)StringComparer.s_ordinalIgnoreCase);
		uVar3 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
	joined_r0x05ea0a61: ;
		if (uVar3 == 0) {
		}
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar3 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		source = Enumerable.Distinct<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar7, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
		source_00 = Enumerable.ToArray<string>(source);
		__this_06 = new Func<string, GisketchGridPickerItem>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_1_BuildMapNodes_b__4);
		pSVar6 = Enumerable.Select<string, GisketchGridPickerItem>((System_Collections_Generic_IEnumerable_TSource__o)source_00, (System_Func_TSource__TResult__o)__this_06);
		items = Enumerable.ToArray<GisketchGridPickerItem>((System_Collections_Generic_IEnumerable_TSource__o)pSVar6);
		if (__this_00.custom == false) {
			ppSVar8 = &"-preview-grid";
		}
		else {
			ppSVar8 = &"-custom-list";
		}
		pSVar9 = String.Concat("game-create-map-picker", *ppSVar8);
		bVar5 = __this_00.custom;
		pSVar10 = Aottg2GisketchLocale.Text("GameCreate.Picker.Map.Search") ;
		__this_07 = this.__9__5;
		if (__this_07 == null) {
			__this_07 = il2cpp_codegen_object_new(typeof(Action<GisketchActionContext, GisketchGridPickerItem>)) ;
			__this_07 = new Action<GisketchActionContext, GisketchGridPickerItem>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__5);
			this.__9__5 = __this_07;
		}
		if (bVar5 == false) {
			fStack_54 = 190.0;
			thumbnailWidth = 240.0;
		}
		else {
			fStack_54 = 0.0;
			thumbnailWidth = 0.0;
		}
		uVar11 = (ulong)(bVar5 == false);
		itemHeight = *(float)(&g_data_0100af78 + uVar11 * 4);
		itemWidth = *(float)(&g_data_0100aef0 + uVar11 * 4);
		bVar2 = __this_00.custom;
		__this_08 = new GisketchGridPicker(pSVar9, items, (uint)(bVar5 == false) * 3 + 1, itemWidth, itemHeight, thumbnailWidth, fStack_54, pSVar10, __this_07, 700.0, bVar2 == false, true, false);
		panel.Component((AottgComponent)__this_08);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_1$$.ctor: clean
	private void c__DisplayClass30_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>b__7: clean
	private void c__DisplayClass30_0__BuildMapNodes_b__7(GisketchActionContext context, String category)
	{
		GisketchUIRoot root;
		GisketchOverlayManager __this_00;
		GisketchNodeDefinition[] pGVar1;

		AottgGameCreatePicker._mapCategory = category;
		root = this.root;
		pGVar1 = AottgGameCreatePicker.BuildMapNodes(root, this.allowed, this.categories, true, this.selected);
		if (pGVar1 != null) {
			if ((int)pGVar1.Length != 1) {
				return;
			}
			if ((root != null) &&(__this_00 = root._Overlays_k__BackingField, __this_00 != null)) {
				__this_00.ShowDynamicDialog("game-create-map-picker", pGVar1[0], true, true, false, 0);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>b__5: clean
	private void c__DisplayClass30_0__BuildMapNodes_b__5(GisketchActionContext selectContext, GisketchGridPickerItem item)
	{
		GisketchUIRoot pGVar1;
		GisketchOverlayManager __this_00;
		Action<string, string> pSVar2;
		String pSVar3;

		pGVar1 = this.root;
		if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.CloseDialog("game-create-map-picker", true);
		pSVar2 = this.selected;
		if (pSVar2 == null) {
			return;
		}
		if (this.showCategories == false) {
			pSVar3 = BuiltinLevels.FindMapCategory(item.Key);
		}
		else {
			pSVar3 = AottgGameCreatePicker._mapCategory;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,item.Key,pSVar3,pSVar2.method);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_1$$<BuildMapNodes>b__4: clean
	private GisketchGridPickerItem c__DisplayClass30_1__BuildMapNodes_b__4(String name)
	{
		AottgGameCreatePicker.c__DisplayClass30_0 pGVar1;
		String sprite;
		String keywords;

		if (this.custom == false) {
			sprite = AottgGameCreatePicker.PreviewSprite(name);
			pGVar1 = this.CS___8__locals1;
		}
		else {
			sprite = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pGVar1 = this.CS___8__locals1;
		}
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		if (pGVar1.showCategories == false) {
			keywords = BuiltinLevels.FindMapCategory(name);
		}
		else {
			keywords = AottgGameCreatePicker._mapCategory;
		}
		__return_storage_ptr__.Sprite = null;
		__return_storage_ptr__.Keywords = null;
		__return_storage_ptr__.Key = null;
		__return_storage_ptr__.Label = null;
		__return_storage_ptr__ = new GisketchGridPickerItem(name, name, sprite, keywords);
		return __return_storage_ptr__;
	}
}
