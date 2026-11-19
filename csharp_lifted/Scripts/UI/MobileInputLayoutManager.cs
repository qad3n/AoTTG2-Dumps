// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputLayoutManager
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputLayoutManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000758")]
internal static class MobileInputLayoutManager
{
	[Token(Token = "0x4002503")]
	private const int CurrentLayoutVersion = 2;

	[Token(Token = "0x4002504")]
	private const string SelectionFileName = "MobileLayoutSelections.json";

	[Token(Token = "0x4002505")]
	private const string CustomFolderName = "MobileLayouts";

	[Token(Token = "0x4002506")]
	private const string BuiltinResourcePath = "MobileLayouts";

	[Token(Token = "0x4002507")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> _layouts;

	[Token(Token = "0x4002508")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<MobileInputLayoutRole, string> _selected;

	[Token(Token = "0x4002509")]
	[FieldOffset(Offset = "0x10")]
	private static bool _loaded;

	[Token(Token = "0x400250A")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private static Action m_OnLayoutsChanged;

	[Token(Token = "0x400250B")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private static Action m_OnSelectionChanged;

	[Token(Token = "0x14000005")]
	public static event Action OnLayoutsChanged
	{
		[Token(Token = "0x6004713")]
		[Address(RVA = "0x5B63BC0", Offset = "0x5B62BC0", VA = "0x5B63BC0")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$add_OnLayoutsChanged): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action a;
			bool bVar2;

			a = MobileInputLayoutManager.OnLayoutsChanged;
			do {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&MobileInputLayoutManager.OnLayoutsChanged, value_00, a);
				bVar2 = pSVar1 != a;
				a = pSVar1;
			} while (bVar2);
			return;
		}
		[Token(Token = "0x6004714")]
		[Address(RVA = "0x5B642A0", Offset = "0x5B632A0", VA = "0x5B642A0")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$remove_OnLayoutsChanged): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action source;
			bool bVar2;

			source = MobileInputLayoutManager.OnLayoutsChanged;
			do {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&MobileInputLayoutManager.OnLayoutsChanged, value_00, source);
				bVar2 = pSVar1 != source;
				source = pSVar1;
			} while (bVar2);
			return;
		}
	}

	[Token(Token = "0x14000006")]
	public static event Action OnSelectionChanged
	{
		[Token(Token = "0x6004715")]
		[Address(RVA = "0x5B63AE0", Offset = "0x5B62AE0", VA = "0x5B63AE0")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$add_OnSelectionChanged): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action a;
			bool bVar2;

			a = MobileInputLayoutManager.OnSelectionChanged;
			do {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&MobileInputLayoutManager.OnSelectionChanged, value_00, a);
				bVar2 = pSVar1 != a;
				a = pSVar1;
			} while (bVar2);
			return;
		}
		[Token(Token = "0x6004716")]
		[Address(RVA = "0x5B641C0", Offset = "0x5B631C0", VA = "0x5B641C0")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$remove_OnSelectionChanged): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action source;
			bool bVar2;

			source = MobileInputLayoutManager.OnSelectionChanged;
			do {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&MobileInputLayoutManager.OnSelectionChanged, value_00, source);
				bVar2 = pSVar1 != source;
				source = pSVar1;
			} while (bVar2);
			return;
		}
	}

	[Token(Token = "0x6004717")]
	[Address(RVA = "0x5B789B0", Offset = "0x5B779B0", VA = "0x5B789B0")]
	public static void EnsureLoaded()
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$EnsureLoaded): 11 lines keep C-only constructs
		sbyte cVar1;
		int key;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> __this;
		Dictionary<MobileInputLayoutRole, string> __this_00;
		Il2CppType handle;
		bool bVar4;
		UI_MobileInputLayoutManager_StaticFields pUVar5;
		Type enumType;
		Array __this_01;
		VirtualInvokeData pVVar6;
		object pIVar7;
		int piVar8;
		List<MobileInputLayout> __this_02;
		ulong uVar9;
		long lVar10;
		object local_58;
		object local_50;
		byte local_40;
		object* local_38;

		local_50 = null;
		if ((typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar5 = typeof(MobileInputLayoutManager).static_fields;
			cVar1 = pUVar5._loaded;
		}
		else {
			pUVar5 = typeof(MobileInputLayoutManager).static_fields;
			cVar1 = pUVar5._loaded;
		}
		if (cVar1 != false) {
			return;
		}
		if (((typeof(MobileInputLayoutManager))._2).cctor_finished_or_no_cctor == 0) {
			pUVar5 = typeof(MobileInputLayoutManager).static_fields;
		}
		pUVar5._loaded = true;
		handle = TypeRef_UI_MobileInputLayoutRole;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		__this_01 = Enum.GetValues(enumType);
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		local_58 = (object)__this_01.GetEnumerator();
		local_40 = (byte)&local_58;
		local_38 = &local_50;
		do {
			pIVar7 = local_58;
			if (local_58 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = local_58.klass;
			uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
			bVar4 = pIVar7.Dispose();
			pIVar7 = local_58;
			if (!bVar4) {
				pIVar7 = (local_58 as IDisposable);
				local_50 = pIVar7;
				if (pIVar7 == null) goto label_05c78d86;
				pIVar2 = pIVar7.klass;
				uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar9 == 0) goto label_05c78d5f;
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar10 = 0;
				break;
			}
			if (local_58 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = local_58.klass;
			uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
			pIVar7 = pIVar7.Dispose();
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			if ((pIVar7.klass._1).element_class != (typeof(MobileInputLayoutRole)._1).element_class) {
				throw new InvalidCastException();
			}
			piVar8 = il2cpp_vm_Object_Unbox(pIVar7);
			key = *piVar8;
			__this = MobileInputLayoutManager._layouts;
			__this_02 = new List<MobileInputLayout>();
			if (__this == (Dictionary<MobileInputLayoutRole, List<MobileInputLayout>>)0x0) {
				throw new NullReferenceException();
			}
			__this.set_Item(key, (object)__this_02);
			__this_00 = MobileInputLayoutManager._selected;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.set_Item(key, (Il2CppObject *)"Default");
		} while(true);
		while (true) {
			lVar10 = lVar10 + 0x10;
			if (!(uVar9 * 0x10 != lVar10)) break;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar10) == typeof(IDisposable)) {
				pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar10);
				goto label_05c78d7d;
			}
		}
	label_05c78d5f: ;
	label_05c78d7d: ;
		pIVar7.Dispose();
	label_05c78d86: ;
		MobileInputLayoutManager.LoadBuiltins();
		MobileInputLayoutManager.LoadCustomLayouts();
		MobileInputLayoutManager.LoadSelections();
		return;
	}

	[Token(Token = "0x6004718")]
	[Address(RVA = "0x5B79890", Offset = "0x5B78890", VA = "0x5B79890")]
	public static void MigrateCustomLayouts()
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$MigrateCustomLayouts): clean
		String folder;

		folder = MobileInputLayoutManager.GetCustomFolder();
		MobileInputLayoutMigrationRunner.MigrateCustomLayouts(folder, 2);
		return;
	}

	[Token(Token = "0x6004719")]
	[Address(RVA = "0x5B799A0", Offset = "0x5B789A0", VA = "0x5B799A0")]
	public static void RefreshControls()
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$RefreshControls): 6 lines keep C-only constructs
		uint uVar1;
		Action pSVar2;
		code *vtableDispatch;
		ulong in_RDX;
		ulong extraout_RDX;
		ulong extraout_RDX_00;

		if (Il2CppMethodInitialized_07547961 == false) {
			Il2CppMethodInitialized_07547961 = true;
			uVar1 = (typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor;
			in_RDX = extraout_RDX;
		}
		else {
			uVar1 = (typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = MobileInputLayoutManager.OnSelectionChanged;
			in_RDX = extraout_RDX_00;
		}
		else {
			pSVar2 = *(Action*)((long)(typeof(MobileInputLayoutManager)).static_fields + 0x20);
		}
		if (pSVar2 == null) {
			return;
		}
		vtableDispatch = (code)pSVar2.invoke_impl;
		(*vtableDispatch)(pSVar2.method_code,pSVar2.method,in_RDX,vtableDispatch);
		return;
	}

	[Token(Token = "0x600471A")]
	[Address(RVA = "0x5B79A20", Offset = "0x5B78A20", VA = "0x5B79A20")]
	public static string[] GetLayoutNames(MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$GetLayoutNames): 5 lines keep C-only constructs
		Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> __this;
		object @object;
		object source;
		UI_MobileInputLayoutManager___c_StaticFields pUVar1;
		Func<MobileInputLayout, string> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		System_Collections_Generic_IEnumerable_TSource__o source_01;
		String[] pSVar2;

		MobileInputLayoutManager.EnsureLoaded();
		__this = MobileInputLayoutManager._layouts;
		if (__this == null ) {
			throw new NullReferenceException();
		}
		source = __this.get_Item(role);
		if ((typeof(MobileInputLayoutManager.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar1 = typeof(MobileInputLayoutManager.c).static_fields;
			__this_00 = pUVar1.__9__16_0;
		}
		else {
			pUVar1 = typeof(MobileInputLayoutManager.c).static_fields;
			__this_00 = pUVar1.__9__16_0;
		}
		if (__this_00 == null) {
			if (((typeof(MobileInputLayoutManager.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar1 = typeof(MobileInputLayoutManager.c).static_fields;
			}
			@object = (object)pUVar1.__9;
			__this_00 = new Func<MobileInputLayout, string>(@object, (intptr_t)MethodInfo_UI_MobileInputLayoutManager_c_GetLayoutNames_b__16_0);
			pUVar1 = typeof(MobileInputLayoutManager.c).static_fields;
			pUVar1.__9__16_0 = __this_00;
		}
		source_00 = Enumerable.Select<MobileInputLayout, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_00);
		source_01 = Enumerable.Distinct<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
		pSVar2 = (String[])Enumerable.ToArray<string>(source_01);
		return pSVar2;
	}

	[Token(Token = "0x600471B")]
	[Address(RVA = "0x5B79BD0", Offset = "0x5B78BD0", VA = "0x5B79BD0")]
	public static string GetSelectedLayoutName(MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$GetSelectedLayoutName): clean
		Dictionary<MobileInputLayoutRole, string> __this;
		String pSVar1;

		MobileInputLayoutManager.EnsureLoaded();
		__this = MobileInputLayoutManager._selected;
		if (__this == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	[Token(Token = "0x600471C")]
	[Address(RVA = "0x5B79C50", Offset = "0x5B78C50", VA = "0x5B79C50")]
	public static bool IsBuiltinLayoutName(MobileInputLayoutRole role, string name)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$IsBuiltinLayoutName): 2 lines keep C-only constructs
		Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> __this;
		bool bVar1;
		MobileInputLayoutManager.c__DisplayClass18_0 __this_00;
		object source;
		Func<MobileInputLayout, bool> __this_01;

		__this_00 = new MobileInputLayoutManager.c__DisplayClass18_0();
		if (__this_00 != null) {
			__this_00.name = name;
			MobileInputLayoutManager.EnsureLoaded();
			__this = MobileInputLayoutManager._layouts;
			if (__this != (Dictionary<MobileInputLayoutRole, List<MobileInputLayout>>)0x0) {
				source = __this.get_Item(role);
				__this_01 = new Func<MobileInputLayout, bool>((object)__this_00, (intptr_t)MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass18_0_IsBuiltinLayoutName_b__0);
				bVar1 = Enumerable.Any<MobileInputLayout>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01);
				return bVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600471D")]
	[Address(RVA = "0x5B79D80", Offset = "0x5B78D80", VA = "0x5B79D80")]
	public static string GetLayoutDisplayName(MobileInputLayoutRole role, string name)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$GetLayoutDisplayName): clean
		bool bVar1;
		String pSVar2;

		if ((typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar1 = MobileInputLayoutManager.IsBuiltinLayoutName(role, name);
		if (bVar1) {
			pSVar2 = UIManager.GetLocale("Common", name, "", "", name);
			return pSVar2;
		}
		return name;
	}

	[Token(Token = "0x600471E")]
	[Address(RVA = "0x5B6D1B0", Offset = "0x5B6C1B0", VA = "0x5B6D1B0")]
	public static string GetControlKindDisplayName(string kind)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$GetControlKindDisplayName): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("SettingsPopup", "MobileLayout.Kind", kind, "", kind);
		return pSVar1;
	}

	[Token(Token = "0x600471F")]
	[Address(RVA = "0x5B79E40", Offset = "0x5B78E40", VA = "0x5B79E40")]
	public static string GetUniqueLayoutName(MobileInputLayoutRole role, string baseName)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$GetUniqueLayoutName): 5 lines keep C-only constructs
		Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> pSVar1;
		bool bVar2;
		MobileInputLayoutManager.c__DisplayClass21_0 __this;
		object pIVar3;
		Func<MobileInputLayout, bool> pSVar4;
		MobileInputLayoutManager.c__DisplayClass21_1 __this_00;
		String pSVar5;
		String pSVar6;
		MobileInputLayoutManager.c__DisplayClass21_0 targetAddress;
		int local_40;
		int local_3c;
		DateTime local_38;

		local_3c = role;
		local_40 = 0;
		local_38._dateData = (DateTime)0;
		__this = new MobileInputLayoutManager.c__DisplayClass21_0();
		MobileInputLayoutManager.EnsureLoaded();
		bVar2 = String.IsNullOrWhiteSpace(baseName);
		if (bVar2) {
			pSVar6 = "Custom";
		}
		else {
			if (baseName == null) goto label_05c7a18c;
			pSVar6 = baseName.Trim();
		}
		if (__this != null) {
			targetAddress = &__this.fields;
			__this.name = pSVar6;
			pSVar1 = MobileInputLayoutManager._layouts;
			if (pSVar1 != (Dictionary<MobileInputLayoutRole, List<MobileInputLayout>>)0x0) {
				pIVar3 = pSVar1.get_Item(local_3c);
				pSVar4 = new Func<MobileInputLayout, bool>((object)__this, (intptr_t)MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass21_0_GetUniqueLayoutName_b__0);
				bVar2 = Enumerable.Any<MobileInputLayout>((System_Collections_Generic_IEnumerable_TSource__o)pIVar3, (System_Func_TSource__bool__o)pSVar4);
				if (bVar2) {
					local_40 = 2;
					do {
						__this_00 = new MobileInputLayoutManager.c__DisplayClass21_1();
						pSVar6 = targetAddress.name;
						pSVar5 = local_40.ToString();
						pSVar6 = String.Concat(pSVar6, " ", pSVar5);
						if (__this_00 == null) goto label_05c7a18c;
						__this_00.candidate = pSVar6;
						pSVar1 = MobileInputLayoutManager._layouts;
						if (pSVar1 == null) goto label_05c7a18c;
						pIVar3 = pSVar1.get_Item(local_3c);
						pSVar4 = new Func<MobileInputLayout, bool>((object)__this_00, (intptr_t) MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass21_1_GetUniqueLayoutName_b__1);
						bVar2 = Enumerable.Any<MobileInputLayout>((System_Collections_Generic_IEnumerable_TSource__o)pIVar3, (System_Func_TSource__bool__o)pSVar4);
						if (!bVar2) {
							return __this_00.candidate;
						}
						local_40 = local_40 + 1;
					} while (local_40 < 1000);
					pSVar6 = targetAddress.name;
					local_38 = DateTime.Now;
					pSVar5 = local_38.ToString("yyyyMMdd-HHmmss");
					pSVar6 = String.Concat(pSVar6, " ", pSVar5);
				}
				else {
					pSVar6 = targetAddress.name;
				}
				return pSVar6;
			}
		}
	label_05c7a18c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004720")]
	[Address(RVA = "0x5B7A1A0", Offset = "0x5B791A0", VA = "0x5B7A1A0")]
	public static void SetSelectedLayoutName(MobileInputLayoutRole role, string name)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$SetSelectedLayoutName): 3 lines keep C-only constructs
		Dictionary<MobileInputLayoutRole, string> pSVar1;
		Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> __this;
		Action pSVar2;
		bool bVar3;
		MobileInputLayoutManager.c__DisplayClass22_0 __this_00;
		String b;
		object source;
		Func<MobileInputLayout, bool> __this_01;
		String a;

		__this_00 = new MobileInputLayoutManager.c__DisplayClass22_0();
		if (__this_00 != null) {
			__this_00.name = name;
			MobileInputLayoutManager.EnsureLoaded();
			pSVar1 = MobileInputLayoutManager._selected;
			if (pSVar1 != null) {
				b = pSVar1.get_Item(role);
				__this = MobileInputLayoutManager._layouts;
				if (__this != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o * )0x0) {
					source = __this.get_Item(role);
					__this_01 = new Func<MobileInputLayout, bool>((object)__this_00, (intptr_t) MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass22_0_SetSelectedLayoutName_b__0);
					bVar3 = Enumerable.Any<MobileInputLayout>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01);
					if (bVar3) {
						pSVar1 = MobileInputLayoutManager._selected;
						if (pSVar1 == null) goto label_05c7a401;
						pSVar1.set_Item(role, (object)__this_00.name);
					}
					MobileInputLayoutManager.SaveSelections();
					pSVar1 = MobileInputLayoutManager._selected;
					if (pSVar1 != null) {
						a = pSVar1.get_Item(role);
						bVar3 = (a != b);
						if (bVar3) {
							if ((typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor == 0) {
								pSVar2 = MobileInputLayoutManager.OnSelectionChanged;
							}
							else {
								pSVar2 = MobileInputLayoutManager.OnSelectionChanged;
							}
							if (pSVar2 != null) {
								(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
								return;
							}
						}
						return;
					}
				}
			}
		}
	label_05c7a401: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004721")]
	[Address(RVA = "0x5B66E10", Offset = "0x5B65E10", VA = "0x5B66E10")]
	public static MobileInputLayout GetSelectedLayout(MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$GetSelectedLayout): 4 lines keep C-only constructs
		Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> pSVar1;
		MobileInputLayoutManager.c__DisplayClass23_0 __this;
		object pIVar2;
		Func<MobileInputLayout, bool> __this_00;
		MobileInputLayout pUVar3;

		__this = new MobileInputLayoutManager.c__DisplayClass23_0();
		if (__this != null) {
			__this.role = role;
			MobileInputLayoutManager.EnsureLoaded();
			pSVar1 = MobileInputLayoutManager._layouts;
			if (pSVar1 != (Dictionary<MobileInputLayoutRole, List<MobileInputLayout>>)0x0) {
				pIVar2 = pSVar1.get_Item(__this.role);
				__this_00 = new Func<MobileInputLayout, bool>((object)__this, (intptr_t)MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass23_0_GetSelectedLayout_b__0);
				pUVar3 = Enumerable.FirstOrDefault<MobileInputLayout>((System_Collections_Generic_IEnumerable_TSource__o)pIVar2, (System_Func_TSource__bool__o)__this_00);
				if (pUVar3 != null) {
					return pUVar3;
				}
				pSVar1 = MobileInputLayoutManager._layouts;
				if (pSVar1 != (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o * )0x0) {
					pIVar2 = pSVar1.get_Item(__this.role);
					pUVar3 = Enumerable.FirstOrDefault<MobileInputLayout>((System_Collections_Generic_IEnumerable_TSource__o)pIVar2);
					return pUVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004722")]
	[Address(RVA = "0x5B7A930", Offset = "0x5B79930", VA = "0x5B7A930")]
	public static List<MobileInputLayout> GetLayouts(MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$GetLayouts): clean
		Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> __this;
		List<MobileInputLayout> pSVar1;

		MobileInputLayoutManager.EnsureLoaded();
		__this = MobileInputLayoutManager._layouts;
		if (__this == null ) {
			throw new NullReferenceException();
		}
		pSVar1 = (List<MobileInputLayout>)__this.get_Item(role);
		return pSVar1;
	}

	[Token(Token = "0x6004723")]
	[Address(RVA = "0x5B7A9B0", Offset = "0x5B799B0", VA = "0x5B7A9B0")]
	public static void SaveCustomLayout(MobileInputLayout layout)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$SaveCustomLayout): 14 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		MobileInputLayout pUVar4;
		Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> __this;
		Object[] pSVar5;
		Action pSVar6;
		bool bVar7;
		int index;
		ulong in_RAX;
		MobileInputLayoutManager.c__DisplayClass25_0 __this_00;
		List<object> __this_01;
		Predicate<T> match;
		String pSVar8;
		String contents;
		MethodInfo pMVar9;
		Il2CppClass klass;
		int key;
		MobileInputLayoutManager.c__DisplayClass25_0 targetAddress;
		ulong uStack_38;

		uStack_38 = in_RAX;
		__this_00 = new MobileInputLayoutManager.c__DisplayClass25_0();
		if (__this_00 != null) {
			targetAddress = &__this_00.fields;
			__this_00.layout = layout;
			MobileInputLayoutManager.EnsureLoaded();
			pUVar4 = targetAddress.layout;
			if (pUVar4 != null) {
				pUVar4.Builtin = false;
				pUVar4.Version = 2;
				pUVar4.AssignRuntimeIds();
				pUVar4 = targetAddress.layout;
				if (pUVar4 != null) {
					uStack_38 = uStack_38 & 0xffffffff;
					pSVar8 = pUVar4.Role;
					bVar7 = Enum.TryParse<MobileInputLayoutRole>(pSVar8, (int)((long)&uStack_38 + 4));
					key = 1;
					if (bVar7) {
						key = uStack_38._4_4_;
					}
					__this = MobileInputLayoutManager._layouts;
					if (__this != null) {
						__this_01 = (List<object>)__this.get_Item(key);
						match = new Predicate<MobileInputLayout>((object)__this_00, (intptr_t) MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass25_0_SaveCustomLayout_b__0);
						if (__this_01 != null) {
							index = __this_01.FindIndex(match);
							pMVar9 = MethodInfo_System_Collections_Generic_List_MobileInputLayout_Add;
							pUVar4 = targetAddress.layout;
							if (index < 0) {
								piVar1 = &__this_01._version;
								*piVar1 = *piVar1 + 1;
								pSVar5 = __this_01._items;
								if (pSVar5 == null) goto label_05c7acda;
								uVar3 = __this_01._size;
								if (uVar3 < (uint)pSVar5.Length) {
									__this_01._size = uVar3 + 1;
									pSVar5[(int)uVar3] = (object)pUVar4;
									uVar2 = (typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor;
									klass = typeof(MobileInputLayoutManager);
								}
								else {
									__this_01.AddWithResize((object)pUVar4);
									uVar2 = (typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor;
									klass = typeof(MobileInputLayoutManager);
								}
							}
							else {
								__this_01.set_Item(index, (object)pUVar4);
								uVar2 = (typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor;
								klass = typeof(MobileInputLayoutManager);
							}
							typeof(MobileInputLayoutManager) = (MobileInputLayoutManager)klass;
							if (uVar2 == 0) {
							}
							pSVar8 = MobileInputLayoutManager.GetCustomFolder();
							pMVar9 = null;
							Directory.CreateDirectory(pSVar8);
							pSVar8 = MobileInputLayoutManager.GetCustomLayoutPath(targetAddress.layout);
							contents = JsonUtility.ToJson((object)targetAddress.layout, true);
							File.WriteAllText(pSVar8, contents);
							if ((targetAddress.layout != null) &&(pMVar9 = (MethodInfo)MobileInputLayoutManager._selected, pMVar9 != null)) {
								pMVar9.set_Item(key, (object)targetAddress.layout.Name);
								MobileInputLayoutManager.SaveSelections();
								pSVar6 = MobileInputLayoutManager.OnLayoutsChanged;
								if (pSVar6 != null) {
									(*(code)pSVar6.invoke_impl)(pSVar6.method_code,pSVar6.method);
								}
								return;
							}
						}
					}
				}
			}
		}
	label_05c7acda: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004724")]
	[Address(RVA = "0x5B7ADE0", Offset = "0x5B79DE0", VA = "0x5B7ADE0")]
	public static bool DeleteCustomLayout(MobileInputLayout layout)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$DeleteCustomLayout): 1 lines keep C-only constructs
		Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> pSVar1;
		Dictionary<MobileInputLayoutRole, string> pSVar2;
		Action pSVar3;
		bool bVar4;
		List<object> __this;
		String pSVar5;
		object source;
		MobileInputLayout pUVar6;
		int key;
		int local_2c;

		if (Il2CppMethodInitialized_0754796c == false) {
			Il2CppMethodInitialized_0754796c = true;
			if ((typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor == 0) goto label_05c7ae94;
	label_05c7ae0f: ;
			MobileInputLayoutManager.EnsureLoaded();
		}
		else {
			if ((typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor != 0) goto label_05c7ae0f;
	label_05c7ae94: ;
			MobileInputLayoutManager.EnsureLoaded();
		}
		if ((layout == null) || (layout.Builtin != false)) {
			return false;
		}
		local_2c = 0;
		pSVar5 = layout.Role;
		bVar4 = Enum.TryParse<MobileInputLayoutRole>(pSVar5, ref local_2c);
		key = 1;
		if (bVar4) {
			key = local_2c;
			if ((typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor == 0) goto label_05c7af30;
	label_05c7af58: ;
			pSVar1 = MobileInputLayoutManager._layouts;
		}
		else {
			if ((typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor != 0) goto label_05c7af58;
	label_05c7af30: ;
			pSVar1 = MobileInputLayoutManager._layouts;
		}
		if ((pSVar1 == (Dictionary<MobileInputLayoutRole, List<MobileInputLayout>>)0x0) ||(__this = (List<object>)pSVar1.get_Item(key), __this == null)) goto label_05c7b0ed;
		__this.Remove((object)layout);
		pSVar5 = MobileInputLayoutManager.GetCustomLayoutPath(layout);
		bVar4 = File.Exists(pSVar5);
		if (bVar4) {
			File.Delete(pSVar5);
			if ((typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor == 0) goto label_05c7afcb;
	label_05c7aff4: ;
			pSVar2 = MobileInputLayoutManager._selected;
		}
		else {
			if ((typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor != 0) goto label_05c7aff4;
	label_05c7afcb: ;
			pSVar2 = MobileInputLayoutManager._selected;
		}
		if (pSVar2 != null) {
			pSVar5 = pSVar2.get_Item(key);
			bVar4 = (pSVar5 == layout.Name);
			if (!bVar4) {
	label_05c7b0a7: ;
				MobileInputLayoutManager.SaveSelections();
				pSVar3 = MobileInputLayoutManager.OnLayoutsChanged;
				if (pSVar3 != null) {
					(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar3.method);
				}
				return true;
			}
			pSVar1 = MobileInputLayoutManager._layouts;
			if (pSVar1 != (Dictionary<MobileInputLayoutRole, List<MobileInputLayout>>)0x0) {
				pSVar2 = MobileInputLayoutManager._selected;
				source = pSVar1.get_Item(key);
				pUVar6 = Enumerable.FirstOrDefault<MobileInputLayout>((System_Collections_Generic_IEnumerable_TSource__o)source);
				if (pUVar6 == null) {
					pSVar5 = null;
				}
				else {
					pSVar5 = pUVar6.Name;
				}
				if (pSVar2 != null) {
					if (pSVar5 == null) {
						pSVar5 = "Default";
					}
					pSVar2.set_Item(key, (object)pSVar5);
					goto label_05c7b0a7;
				}
			}
		}
	label_05c7b0ed: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004725")]
	[Address(RVA = "0x5B78E50", Offset = "0x5B77E50", VA = "0x5B78E50")]
	private static void LoadBuiltins()
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$LoadBuiltins): 1 lines keep C-only constructs
		uint uVar1;
		Object[] pSVar2;
		String json;
		MobileInputLayout layout;
		uint uVar3;

		if (Il2CppMethodInitialized_0754796d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_JsonUtility_FromJson_MobileInputLayout) ;
			Il2CppMethodInitialized_0754796d = true;
		}
		pSVar2 = Resources.LoadAll<TextAsset>("MobileLayouts");
		if (pSVar2 == null) {
	label_05c78f41: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)pSVar2.Length;
		if (0 < (int)uVar1) {
			uVar3 = 0;
			do {
				if (uVar1 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				if ((TextAsset)pSVar2[(int)uVar3] == null) goto label_05c78f41;
				json = (pSVar2[(int)uVar3]).text;
				layout = JsonUtility.FromJson<MobileInputLayout>(json);
				if ((typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor == 0) {
				}
				MobileInputLayoutManager.TryAddLayout(layout, true);
				uVar3 = uVar3 + 1;
				uVar1 = (uint)pSVar2.Length;
			} while ((int)uVar3 < (int)uVar1);
		}
		return;
	}

	[Token(Token = "0x6004726")]
	[Address(RVA = "0x5B78F50", Offset = "0x5B77F50", VA = "0x5B78F50")]
	private static void LoadCustomLayouts()
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$LoadCustomLayouts): 1 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		String pSVar3;
		String[] pSVar4;
		ulong uVar5;
		MobileInputLayout layout;
		ulong uVar6;

		if (Il2CppMethodInitialized_0754796e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_JsonUtility_FromJson_MobileInputLayout) ;
			Il2CppMethodInitialized_0754796e = true;
		}
		pSVar3 = MobileInputLayoutManager.GetCustomFolder();
		bVar2 = Directory.Exists(pSVar3);
		if (bVar2) {
			pSVar4 = Directory.GetFiles(pSVar3, "*.json");
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar4.Length) {
				uVar5 = pSVar4.Length & 0xffffffff;
				uVar6 = 0;
				do {
					if (uVar5 <= uVar6) {
						throw new IndexOutOfRangeException();
					}
					pSVar3 = File.ReadAllText(pSVar4[uVar6]);
					layout = JsonUtility.FromJson<MobileInputLayout>(pSVar3);
					if ((typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor == 0) {
					}
					MobileInputLayoutManager.TryAddLayout(layout, false);
					uVar6 = uVar6 + 1;
					uVar1 = (uint)pSVar4.Length;
					uVar5 = (ulong)uVar1;
				} while ((long)uVar6 < (long)(int)uVar1);
			}
		}
		return;
	}

	[Token(Token = "0x6004727")]
	[Address(RVA = "0x5B7B100", Offset = "0x5B7A100", VA = "0x5B7B100")]
	private static void TryAddLayout(MobileInputLayout layout, bool builtin)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$TryAddLayout): 11 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		MobileInputLayout pUVar3;
		String value;
		Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> pSVar4;
		Object[] pSVar5;
		bool bVar6;
		uint in_EAX;
		MobileInputLayoutManager.c__DisplayClass29_0 __this;
		object source;
		Func<MobileInputLayout, bool> __this_00;
		List<object> __this_01;
		MethodInfo pMVar7;
		MobileInputLayoutManager.c__DisplayClass29_0 targetAddress;
		ulong uStack_38;

		uStack_38._0_4_ = in_EAX;
		uStack_38 = (ulong)(uint)uStack_38;
		__this = new MobileInputLayoutManager.c__DisplayClass29_0();
		if (__this != null) {
			targetAddress = &__this.fields;
			__this.layout = layout;
			pUVar3 = __this.layout;
			if ((pUVar3 == null) ||(bVar6 = String.IsNullOrEmpty(pUVar3.Name))) {
				return;
			}
			pUVar3 = targetAddress.layout;
			if (pUVar3 != null) {
				pUVar3.Builtin = builtin;
				value = pUVar3.Role;
				pMVar7 = (MethodInfo)((long)&uStack_38 + 4);
				bVar6 = Enum.TryParse<MobileInputLayoutRole>(value, (int)pMVar7);
				if (!bVar6) {
					return;
				}
				if (targetAddress.layout != null) {
					(targetAddress.layout).AssignRuntimeIds();
					pSVar4 = MobileInputLayoutManager._layouts;
					if (pSVar4 != null) {
						source = pSVar4.get_Item(uStack_38._4_4_);
						__this_00 = new Func<MobileInputLayout, bool>((object)__this, (intptr_t)MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass29_0_TryAddLayout_b__0);
						bVar6 = Enumerable.Any<MobileInputLayout>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
						if (bVar6) {
							return;
						}
						pSVar4 = MobileInputLayoutManager._layouts;
						if (pSVar4 != null) {
							__this_01 = (List<object>)pSVar4.get_Item(uStack_38._4_4_);
							pMVar7 = MethodInfo_System_Collections_Generic_List_MobileInputLayout_Add;
							if (__this_01 != null) {
								pUVar3 = targetAddress.layout;
								piVar1 = &__this_01._version;
								*piVar1 = *piVar1 + 1;
								pSVar5 = __this_01._items;
								if (pSVar5 != null) {
									uVar2 = __this_01._size;
									if (uVar2 < (uint)pSVar5.Length) {
										__this_01._size = uVar2 + 1;
										pSVar5[(int)uVar2] = (object)pUVar3;
										return;
									}
									__this_01.AddWithResize((object)pUVar3);
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

	[Token(Token = "0x6004728")]
	[Address(RVA = "0x5B79170", Offset = "0x5B78170", VA = "0x5B79170")]
	private static void LoadSelections()
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$LoadSelections): 16 lines keep C-only constructs
		int iVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> __this;
		Dictionary<MobileInputLayoutRole, string> __this_00;
		Il2CppType handle;
		bool bVar4;
		sbyte cVar5;
		String pSVar6;
		JSONNode a;
		Type enumType;
		Array __this_01;
		object pIVar7;
		VirtualInvokeData pVVar8;
		int piVar9;
		MobileInputLayoutManager.c__DisplayClass30_0 __this_02;
		JSONNode d;
		Func<MobileInputLayout, bool> __this_03;
		ulong uVar10;
		MobileInputLayoutManager.c__DisplayClass30_0 targetAddress;
		long lVar11;
		object local_78;
		int local_6c;
		object local_68;
		byte local_58;
		object* local_50;
		Enum local_48;

		local_78 = null;
		local_68 = null;
		pSVar6 = FolderPaths.Settings;
		pSVar6 = Path.Combine(pSVar6, "MobileLayoutSelections.json");
		bVar4 = File.Exists(pSVar6);
		if (!bVar4) {
			return;
		}
		pSVar6 = File.ReadAllText(pSVar6);
		a = JSON.Parse(pSVar6);
		bVar4 = (a == null);
		handle = TypeRef_UI_MobileInputLayoutRole;
		if (bVar4) {
			return;
		}
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		__this_01 = Enum.GetValues(enumType);
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		pIVar7 = (object)__this_01.GetEnumerator();
		local_58 = (byte)&local_78;
		local_50 = &local_68;
		do {
			local_78 = pIVar7;
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = pIVar7.klass;
			uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
			cVar5 = pIVar7.Dispose();
			pIVar7 = local_78;
			if (cVar5 == false) {
				pIVar7 = (local_78 as IDisposable);
				if (pIVar7 == null) {
					return;
				}
				pIVar2 = pIVar7.klass;
				uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
				local_68 = pIVar7;
				if (uVar10 == 0) goto label_05c796df;
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar11 = 0;
				break;
			}
			if (local_78 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = local_78.klass;
			uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
			pIVar7 = pIVar7.Dispose();
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			if ((pIVar7.klass._1).element_class != (typeof(MobileInputLayoutRole)._1).element_class) {
				throw new InvalidCastException();
			}
			piVar9 = il2cpp_vm_Object_Unbox(pIVar7);
			iVar1 = *piVar9;
			__this_02 = new MobileInputLayoutManager.c__DisplayClass30_0();
			local_48.klass = (Enum)typeof(MobileInputLayoutRole);
			local_48.monitor = (IntPtr)0xffffffffffffffff;
			pSVar6 = local_48.ToString();
			local_6c = iVar1;
			if (a == null) {
				throw new NullReferenceException();
			}
			d = a.get_Item(pSVar6);
			pSVar6 = ((JSONNode)d);
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			targetAddress = &__this_02.fields;
			__this_02.value = pSVar6;
			bVar4 = String.IsNullOrEmpty(targetAddress.value);
			pIVar7 = local_78;
			if (!bVar4) {
				__this = MobileInputLayoutManager._layouts;
				if (__this == (System_Collections_Generic_Dictionary_MobileInputLayoutRole__List_MobileInputLayout___o * )0x0) {
					throw new NullReferenceException();
				}
				pIVar7 = __this.get_Item(local_6c);
				__this_03 = new Func<MobileInputLayout, bool>((object)__this_02, (intptr_t)MethodInfo_UI_MobileInputLayoutManager_c__DisplayClass30_0_LoadSelections_b__0);
				bVar4 = Enumerable.Any<MobileInputLayout>((System_Collections_Generic_IEnumerable_TSource__o)pIVar7, (System_Func_TSource__bool__o)__this_03);
				pIVar7 = local_78;
				if (bVar4) {
					__this_00 = MobileInputLayoutManager._selected;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_00.set_Item(local_6c, (object)targetAddress.value);
					pIVar7 = local_78;
				}
			}
		} while(true);
		while (true) {
			lVar11 = lVar11 + 0x10;
			if (!(uVar10 * 0x10 != lVar11)) break;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar11) == typeof(IDisposable)) {
				pVVar8 = (VirtualInvokeData)&pIVar2.vtable[*(int)((long)&pIVar3.offset + lVar11)].methodPtr;
				goto label_05c796fd;
			}
		}
	label_05c796df: ;
	label_05c796fd: ;
		pIVar7.Dispose();
		return;
	}

	[Token(Token = "0x6004729")]
	[Address(RVA = "0x5B7A410", Offset = "0x5B79410", VA = "0x5B7A410")]
	private static void SaveSelections()
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$SaveSelections): 13 lines keep C-only constructs
		int key;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		Dictionary<MobileInputLayoutRole, string> __this;
		Il2CppType handle;
		sbyte cVar3;
		JSONObject __this_00;
		Type enumType;
		Array __this_01;
		object pIVar4;
		VirtualInvokeData pVVar5;
		int piVar6;
		String pSVar7;
		String pSVar8;
		JSONNode pSVar9;
		ulong uVar10;
		long lVar11;
		object local_70;
		object local_68;
		object* local_58;
		object* local_50;
		Enum local_48;

		local_70 = null;
		local_68 = null;
		Directory.CreateDirectory(FolderPaths.Settings);
		__this_00 = new JSONObject();
		handle = TypeRef_UI_MobileInputLayoutRole;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		__this_01 = Enum.GetValues(enumType);
		if (__this_01 != null) {
			pIVar4 = (object)__this_01.GetEnumerator();
			local_58 = &local_70;
			local_50 = &local_68;
			do {
				local_70 = pIVar4;
				if (pIVar4 == null) {
					throw new NullReferenceException();
				}
				pIVar1 = pIVar4.klass;
				uVar10 = (ulong)(pIVar1._2).interface_offsets_count;
				cVar3 = pIVar4.Dispose();
				pIVar4 = local_70;
				if (cVar3 == false) {
					pIVar4 = (local_70 as IDisposable);
					local_68 = pIVar4;
					if (pIVar4 == null) goto label_05c7a816;
					pIVar1 = pIVar4.klass;
					uVar10 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar10 == 0) goto label_05c7a7ef;
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar11 = 0;
					goto label_05c7a7e0;
				}
				if (local_70 == null) {
					throw new NullReferenceException();
				}
				pIVar1 = local_70.klass;
				uVar10 = (ulong)(pIVar1._2).interface_offsets_count;
				pIVar4 = pIVar4.Dispose();
				if (pIVar4 == null) {
					throw new NullReferenceException();
				}
				if ((pIVar4.klass._1).element_class != (typeof(MobileInputLayoutRole)._1).element_class) {
					throw new InvalidCastException();
				}
				piVar6 = il2cpp_vm_Object_Unbox(pIVar4);
				key = *piVar6;
				local_48.klass = (Enum)typeof(MobileInputLayoutRole);
				local_48.monitor = (IntPtr)0xffffffffffffffff;
				pSVar7 = local_48.ToString();
				__this = MobileInputLayoutManager._selected;
				if (__this == null) {
					throw new NullReferenceException();
				}
				pSVar8 = __this.get_Item(key);
				pSVar9 = ((JSONNode)pSVar8);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.Add(pSVar7, pSVar9);
				pIVar4 = local_70;
			} while(true);
		}
		goto label_05c7a8ca;
		while (true) {
			lVar11 = lVar11 + 0x10;
			if (!(uVar10 * 0x10 != lVar11)) break;
	label_05c7a7e0: ;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar11) == typeof(IDisposable)) {
				pVVar5 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar11);
				goto label_05c7a80d;
			}
		}
	label_05c7a7ef: ;
	label_05c7a80d: ;
		pIVar4.Dispose();
	label_05c7a816: ;
		pSVar7 = FolderPaths.Settings;
		pSVar7 = Path.Combine(pSVar7, "MobileLayoutSelections.json");
		if (__this_00 != null) {
			pSVar8 = __this_00.ToString(4);
			File.WriteAllText(pSVar7, pSVar8);
			return;
		}
	label_05c7a8ca: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600472A")]
	[Address(RVA = "0x5B79910", Offset = "0x5B78910", VA = "0x5B79910")]
	private static string GetCustomFolder()
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$GetCustomFolder): clean
		String pSVar1;

		pSVar1 = FolderPaths.Settings;
		pSVar1 = Path.Combine(pSVar1, "MobileLayouts");
		return pSVar1;
	}

	[Token(Token = "0x600472B")]
	[Address(RVA = "0x5B7ACE0", Offset = "0x5B79CE0", VA = "0x5B7ACE0")]
	private static string GetCustomLayoutPath(MobileInputLayout layout)
	{
		// Lifted from source/cpp/UI/MobileInputLayoutManager.c (UI.MobileInputLayoutManager$$GetCustomLayoutPath): clean
		Char[] separator;
		String[] value;
		String pSVar1;
		String path1;

		if (layout != null) {
			pSVar1 = layout.Name;
			separator = Path.GetInvalidFileNameChars();
			if (pSVar1 != null) {
				value = pSVar1.Split(separator);
				pSVar1 = String.Join("_", value);
				path1 = MobileInputLayoutManager.GetCustomFolder();
				pSVar1 = String.Concat(layout.Role, "_", pSVar1, ".json");
				pSVar1 = Path.Combine(path1, pSVar1);
				return pSVar1;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MobileInputLayoutManager.c.

	// UI.MobileInputLayoutManager$$.cctor: 2 lines keep C-only constructs
	static MobileInputLayoutManager()
	{
		Dictionary<MobileInputLayoutRole, List<MobileInputLayout>> __this;
		Dictionary<MobileInputLayoutRole, string> __this_00;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<MobileInputLayoutRole, List<MobileInputLayout>>));
		__this = new Dictionary<Int32Enum, object>();
		MobileInputLayoutManager._layouts = __this;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<MobileInputLayoutRole, string>));
		__this_00 = new Dictionary<Int32Enum, object>();
		MobileInputLayoutManager._selected = __this_00;
		return;
	}

	// UI.MobileInputLayoutManager.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MobileInputLayoutManager.c();
		MobileInputLayoutManager.c.__9 = (MobileInputLayoutManager.c)__this;
		return;
	}

	// UI.MobileInputLayoutManager.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.MobileInputLayoutManager.<>c$$<GetLayoutNames>b__16_0: clean
	private String c__GetLayoutNames_b__16_0(MobileInputLayout x)
	{
		if (x == null) {
			throw new NullReferenceException();
		}
		return x.Name;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass18_0$$.ctor: clean
	private void c__DisplayClass18_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass18_0$$<IsBuiltinLayoutName>b__0: clean
	private bool c__DisplayClass18_0__IsBuiltinLayoutName_b__0(MobileInputLayout x)
	{
		bool bVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		if (x.Builtin == false) {
			return false;
		}
		bVar1 = (x.Name == this.name);
		return bVar1;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass21_0$$.ctor: clean
	private void c__DisplayClass21_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass21_0$$<GetUniqueLayoutName>b__0: clean
	private bool c__DisplayClass21_0__GetUniqueLayoutName_b__0(MobileInputLayout x)
	{
		bool bVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		bVar1 = (x.Name == this.name);
		return bVar1;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass21_1$$.ctor: clean
	private void c__DisplayClass21_1__ctor()
	{
		base();
		return;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass21_1$$<GetUniqueLayoutName>b__1: clean
	private bool c__DisplayClass21_1__GetUniqueLayoutName_b__1(MobileInputLayout x)
	{
		bool bVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		bVar1 = (x.Name == this.candidate);
		return bVar1;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass22_0$$.ctor: clean
	private void c__DisplayClass22_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass22_0$$<SetSelectedLayoutName>b__0: clean
	private bool c__DisplayClass22_0__SetSelectedLayoutName_b__0(MobileInputLayout x)
	{
		bool bVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		bVar1 = (x.Name == this.name);
		return bVar1;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass23_0$$.ctor: clean
	private void c__DisplayClass23_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass23_0$$<GetSelectedLayout>b__0: clean
	private bool c__DisplayClass23_0__GetSelectedLayout_b__0(MobileInputLayout x)
	{
		String a;
		Dictionary<MobileInputLayoutRole, string> __this_00;
		bool bVar1;
		String b;

		if (x != null) {
			a = x.Name;
			__this_00 = MobileInputLayoutManager._selected;
			if (__this_00 != null) {
				b = __this_00.get_Item(this.role);
				bVar1 = (a == b);
				return bVar1;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass25_0$$.ctor: clean
	private void c__DisplayClass25_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass25_0$$<SaveCustomLayout>b__0: clean
	private bool c__DisplayClass25_0__SaveCustomLayout_b__0(MobileInputLayout x)
	{
		MobileInputLayout pUVar1;
		bool bVar2;

		if (x != null) {
			if (x.Builtin != false) {
				return false;
			}
			pUVar1 = this.layout;
			if (pUVar1 != null) {
				bVar2 = (x.Name == pUVar1.Name);
				return bVar2;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass29_0$$.ctor: clean
	private void c__DisplayClass29_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass29_0$$<TryAddLayout>b__0: clean
	private bool c__DisplayClass29_0__TryAddLayout_b__0(MobileInputLayout x)
	{
		MobileInputLayout pUVar1;
		bool bVar2;
		bool bVar3;

		if ((x == null) ||(pUVar1 = this.layout, pUVar1 == null)) {
	label_05c9a48c: ;
			throw new NullReferenceException();
		}
		bVar2 = (x.Name == pUVar1.Name);
		if (bVar2) {
			pUVar1 = this.layout;
			if (pUVar1 == null) goto label_05c9a48c;
			bVar3 = x.Builtin == pUVar1.Builtin;
		}
		return bVar3;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass30_0$$.ctor: clean
	private void c__DisplayClass30_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileInputLayoutManager.<>c__DisplayClass30_0$$<LoadSelections>b__0: clean
	private bool c__DisplayClass30_0__LoadSelections_b__0(MobileInputLayout x)
	{
		bool bVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		bVar1 = (x.Name == this.value);
		return bVar1;
	}
}
