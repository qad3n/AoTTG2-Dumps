// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001AF")]
internal static class AottgSkinSetActions
{
	[Token(Token = "0x20001B0")]
	internal enum Operation
	{
		[Token(Token = "0x4000928")]
		Create,
		[Token(Token = "0x4000929")]
		Rename,
		[Token(Token = "0x400092A")]
		Copy
	}

	[Token(Token = "0x4000924")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ISetSettingsContainer _settings;

	[Token(Token = "0x4000925")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Operation _operation;

	[Token(Token = "0x4000926")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Action _afterChange;

	[Token(Token = "0x17000119")]
	internal static ISetSettingsContainer CurrentSettings
	{
		[Token(Token = "0x6000972")]
		[Address(RVA = "0x5D55800", Offset = "0x5D54800", VA = "0x5D55800")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$get_CurrentSettings): 1 lines keep C-only constructs
			if (Il2CppMethodInitialized_07548669 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgSkinSetActions)) ;
				Il2CppMethodInitialized_07548669 = true;
			}
			return AottgSkinSetActions._settings;
		}
	}

	[Token(Token = "0x1700011A")]
	internal static Operation CurrentOperation
	{
		[Token(Token = "0x6000973")]
		[Address(RVA = "0x5D55840", Offset = "0x5D54840", VA = "0x5D55840")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$get_CurrentOperation): 1 lines keep C-only constructs
			if (Il2CppMethodInitialized_0754866a == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgSkinSetActions)) ;
				Il2CppMethodInitialized_0754866a = true;
			}
			return AottgSkinSetActions._operation;
		}
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x5D51520", Offset = "0x5D50520", VA = "0x5D51520")]
	public static void OpenCreate(GisketchActionContext context, ISetSettingsContainer settings, [Optional] Action afterChange)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenCreate): clean


		AottgSkinSetActions.OpenName(context, settings, 0, afterChange);
		return;
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x5D517D0", Offset = "0x5D507D0", VA = "0x5D517D0")]
	public static void OpenRename(GisketchActionContext context, ISetSettingsContainer settings, [Optional] Action afterChange)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenRename): 4 lines keep C-only constructs
		ISetSettingsContainer pSVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		bool bVar3;
		MethodInfo method_00;
		ulong uVar4;
		long lVar5;

		if (settings != null) {
			pSVar1 = settings.klass;
			uVar4 = (ulong)(pSVar1._2).interface_offsets_count;
			if (uVar4 != 0) {
				pIVar2 = (pSVar1._1).interfaceOffsets;
				lVar5 = 0;
				do {
					if (*(ISetSettingsContainer*)((long)&pIVar2.interfaceType + lVar5) == typeof(ISetSettingsContainer)) {
						method_00 = (MethodInfo)(pSVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 8));
						goto label_05e51869;
					}
					lVar5 = lVar5 + 0x10;
				} while (uVar4 * 0x10 != lVar5);
			}
			method_00 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath((object)settings, typeof(ISetSettingsContainer), 8);
	label_05e51869: ;
			bVar3 = (*method_00.methodPointer)((object)settings,(MethodInfo)method_00.virtualMethodPointer);
			if (bVar3) {
				AottgSkinSetActions.OpenName(context, settings, 1, afterChange) ;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x5D518E0", Offset = "0x5D508E0", VA = "0x5D518E0")]
	public static void OpenCopy(GisketchActionContext context, ISetSettingsContainer settings, [Optional] Action afterChange)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenCopy): clean


		AottgSkinSetActions.OpenName(context, settings, 2, afterChange);
		return;
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x5D51570", Offset = "0x5D50570", VA = "0x5D51570")]
	public static void OpenDelete(GisketchActionContext context, ISetSettingsContainer settings, [Optional] Action afterChange)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenDelete): 1 lines keep C-only constructs
		GisketchOverlayManager __this;
		bool bVar4;
		GisketchUIRoot pGVar6;

		if (Il2CppMethodInitialized_0754866c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgSkinSetActions)) ;
			Il2CppMethodInitialized_0754866c = true;
		}
		if (settings != null) {
			bVar4 = settings.CanDeleteSelectedSet();
			if (bVar4) {
				AottgSkinSetActions._settings = settings;
				AottgSkinSetActions._afterChange = afterChange;
				if (context.GameObject != null) {
					pGVar6 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
					if ((pGVar6 != null) &&(__this = pGVar6._Overlays_k__BackingField, __this != null)) {
						__this.ShowDialog("setting-skin-set-delete", true);
						return;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x5D55970", Offset = "0x5D54970", VA = "0x5D55970")]
	internal static string SelectedName()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$SelectedName): 3 lines keep C-only constructs
		object pIVar4;
		Il2CppType pIVar5;

		if (Il2CppMethodInitialized_0754866d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgSkinSetActions)) ;
			Il2CppMethodInitialized_0754866d = true;
		}
		pIVar4 = (object)AottgSkinSetActions._settings;
		if (pIVar4 != null) {
			pIVar4 = pIVar4.GetSelectedSet();
			if (pIVar4 != null) {
				pIVar4 = (object)AottgSkinSetActions._settings;
				if (pIVar4 == null) {
	label_05e55adc: ;
					throw new NullReferenceException();
				}
				pIVar4 = pIVar4.GetSelectedSet();
				if ((pIVar4 == null) || (pIVar4[3].klass == null)) goto label_05e55adc;
				pIVar5 = &((pIVar4[3].klass)._1).byval_arg;
				goto label_05e55ad3;
			}
		}
		pIVar5 = *(Il2CppType*)(g_data_07556758 + 0xb8);
	label_05e55ad3: ;
		return pIVar5.data;
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x5D55AF0", Offset = "0x5D54AF0", VA = "0x5D55AF0")]
	internal static void ApplyName(string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$ApplyName): 20 lines keep C-only constructs
		Action pSVar1;
		bool bVar2;
		int iVar3;
		int iVar4;
		VirtualInvokeData pVVar5;
		Settings_TypedSetting_int__o __this;
		object pIVar6;
		Il2CppClass pIVar7;
		ulong uVar8;
		Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions_StaticFields pGVar9;
		Il2CppRuntimeInterfaceOffsetPair pIVar10;
		long lVar11;

		if (Il2CppMethodInitialized_0754866e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgSkinSetActions)) ;
			Il2CppMethodInitialized_0754866e = true;
		}
		if (AottgSkinSetActions._settings ==null) {
			return;
		}
		bVar2 = String.IsNullOrEmpty(name);
		if (bVar2) {
			return;
		}
		pGVar9 = typeof(AottgSkinSetActions).static_fields;
		iVar3 = pGVar9._operation;
		if (iVar3 == 1) {
			pIVar6 = (object)pGVar9._settings;
			if (pIVar6 == null) goto label_05e5614e;
			pIVar7 = pIVar6.klass;
			uVar8 = (ulong)(pIVar7._2).interface_offsets_count;
			bVar2 = pIVar6.GetCount();
			pGVar9 = typeof(AottgSkinSetActions).static_fields;
			if (bVar2) {
				pIVar6 = (object)pGVar9._settings;
				if (pIVar6 == null) goto label_05e5614e;
				pIVar7 = pIVar6.klass;
				uVar8 = (ulong)(pIVar7._2).interface_offsets_count;
				pIVar6 = pIVar6.GetCount();
				if ((pIVar6 == null) || (pIVar6[3].klass == null)) goto label_05e5614e;
				pIVar6[3].klass.Value = (object)name;
				goto joined_r0x05e560a0;
			}
			iVar3 = pGVar9._operation;
	label_05e55d78: ;
			if (iVar3 != 2) goto joined_r0x05e560a0;
			pIVar6 = (object)pGVar9._settings;
			if (pIVar6 == null) goto label_05e5614e;
			pIVar7 = pIVar6.klass;
			uVar8 = (ulong)(pIVar7._2).interface_offsets_count;
			pIVar6.GetCount(name);
			pIVar6 = (object)AottgSkinSetActions._settings;
			if (pIVar6 == null) goto label_05e5614e;
			pIVar7 = pIVar6.klass;
			uVar8 = (ulong)(pIVar7._2).interface_offsets_count;
			__this = (Settings_TypedSetting_int__o)pIVar6.GetCount();
			pIVar6 = (object)AottgSkinSetActions._settings;
			if (pIVar6 == null) goto label_05e5614e;
			pIVar7 = pIVar6.klass;
			uVar8 = (ulong)(pIVar7._2).interface_offsets_count;
			pIVar6 = pIVar6.GetCount();
			if (pIVar6 == null) goto label_05e5614e;
			pIVar7 = pIVar6.klass;
			uVar8 = (ulong)(pIVar7._2).interface_offsets_count;
			if (uVar8 != 0) {
				pIVar10 = (pIVar7._1).interfaceOffsets;
				lVar11 = 0;
				do {
					if (*(IListSetting*)((long)&pIVar10.interfaceType + lVar11) == typeof(IListSetting)) goto label_05e5605e;
					lVar11 = lVar11 + 0x10;
				} while (uVar8 * 0x10 != lVar11);
			}
		}
		else {
			if (iVar3 != 0) goto label_05e55d78;
			pIVar6 = (object)pGVar9._settings;
			if (pIVar6 == null) goto label_05e5614e;
			pIVar7 = pIVar6.klass;
			uVar8 = (ulong)(pIVar7._2).interface_offsets_count;
			pIVar6.GetCount(name);
			pIVar6 = (object)AottgSkinSetActions._settings;
			if (pIVar6 == null) goto label_05e5614e;
			pIVar7 = pIVar6.klass;
			uVar8 = (ulong)(pIVar7._2).interface_offsets_count;
			__this = (Settings_TypedSetting_int__o)pIVar6.GetCount();
			pIVar6 = (object)AottgSkinSetActions._settings;
			if (pIVar6 == null) goto label_05e5614e;
			pIVar7 = pIVar6.klass;
			uVar8 = (ulong)(pIVar7._2).interface_offsets_count;
			pIVar6 = pIVar6.GetCount();
			if (pIVar6 == null) goto label_05e5614e;
			pIVar7 = pIVar6.klass;
			uVar8 = (ulong)(pIVar7._2).interface_offsets_count;
			if (uVar8 != 0) {
				pIVar10 = (pIVar7._1).interfaceOffsets;
				lVar11 = 0;
				do {
					if (*(IListSetting*)((long)&pIVar10.interfaceType + lVar11) == typeof(IListSetting)) goto label_05e5605e;
					lVar11 = lVar11 + 0x10;
				} while (uVar8 * 0x10 != lVar11);
			}
		}
	label_05e56071: ;
		iVar4 = pIVar6.GetCount();
		if (__this == null) {
	label_05e5614e: ;
			throw new NullReferenceException();
		}
		__this.Value = iVar4 + -1;
	joined_r0x05e560a0: ;
		if (Il2CppMethodInitialized_07548671 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgSkinSetActions)) ;
			Il2CppMethodInitialized_07548671 = true;
		}
		pGVar9 = typeof(AottgSkinSetActions).static_fields;
		pSVar1 = pGVar9._afterChange;
		pGVar9._afterChange = null;
		if (pSVar1 == null) {
			return;
		}
		(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
		return;
	label_05e5605e: ;
		pVVar5 = pIVar7.vtable + *(int)((long)&pIVar10.offset + lVar11);
		goto label_05e56071;
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x5D561C0", Offset = "0x5D551C0", VA = "0x5D561C0")]
	internal static void DeleteSelected()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$DeleteSelected): 3 lines keep C-only constructs
		object pIVar1;
		Action pSVar5;
		bool bVar6;
		Settings_TypedSetting_int__o __this;

		if (Il2CppMethodInitialized_0754866f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgSkinSetActions)) ;
			Il2CppMethodInitialized_0754866f = true;
		}
		pIVar1 = (object)AottgSkinSetActions._settings;
		if (pIVar1 != null) {
			bVar6 = pIVar1.GetSelectedSetIndex();
			if (bVar6) {
				pIVar1 = (object)AottgSkinSetActions._settings;
				if (pIVar1 != null) {
					pIVar1.GetSelectedSetIndex();
					pIVar1 = (object)AottgSkinSetActions._settings;
					if (pIVar1 != null) {
						__this = (Settings_TypedSetting_int__o)pIVar1.GetSelectedSetIndex();
						if (__this != null) {
							__this.Value = 0;
							pSVar5 = AottgSkinSetActions._afterChange;
							AottgSkinSetActions._afterChange = null;
							if (pSVar5 == null) {
								return;
							}
							(*(code)pSVar5.invoke_impl)(pSVar5.method_code,pSVar5.method);
							return;
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x5D55880", Offset = "0x5D54880", VA = "0x5D55880")]
	private static void OpenName(GisketchActionContext context, ISetSettingsContainer settings, Operation operation, Action afterChange)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenName): 1 lines keep C-only constructs
		GisketchOverlayManager __this;
		GisketchUIRoot pGVar2;

		if (Il2CppMethodInitialized_07548670 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgSkinSetActions)) ;
			Il2CppMethodInitialized_07548670 = true;
		}
		if (settings != null) {
			AottgSkinSetActions._settings = settings;
			AottgSkinSetActions._operation = operation;
			AottgSkinSetActions._afterChange = afterChange;
			if (context.GameObject != null) {
				pGVar2 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
				if ((pGVar2 != null) &&(__this = pGVar2._Overlays_k__BackingField, __this != null)) {
					__this.ShowDialog("setting-skin-set-name", true);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x5D56160", Offset = "0x5D55160", VA = "0x5D56160")]
	private static void InvokeAfterChange()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSkinSetActions.c (Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$InvokeAfterChange): 1 lines keep C-only constructs
		Action pSVar2;

		if (Il2CppMethodInitialized_07548671 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgSkinSetActions)) ;
			Il2CppMethodInitialized_07548671 = true;
		}
		pSVar2 = AottgSkinSetActions._afterChange;
		AottgSkinSetActions._afterChange = null;
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
		return;
	}
}
