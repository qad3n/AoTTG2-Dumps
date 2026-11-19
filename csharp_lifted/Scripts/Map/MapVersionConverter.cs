// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapVersionConverter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapVersionConverter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x200041F")]
public static class MapVersionConverter
{
	[Token(Token = "0x4001539")]
	public const string CurrentVersion = "1.1";

	[Token(Token = "0x400153A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<IMapVersionConverter> Converters;

	[Token(Token = "0x170002C1")]
	public static string[] SupportedVersions
	{
		[Token(Token = "0x6001A2B")]
		[Address(RVA = "0x58A50D0", Offset = "0x58A40D0", VA = "0x58A50D0")]
		get
		{
			// Lifted from source/cpp/Map/MapVersionConverter.c (Map.MapVersionConverter$$get_SupportedVersions): 7 lines keep C-only constructs
			List<IMapVersionConverter> source;
			Map_MapVersionConverter___c_StaticFields pMVar1;
			Func<IMapVersionConverter, string> __this;
			System_Collections_Generic_IEnumerable_TResult__o first;
			object pIVar2;
			System_Collections_Generic_IEnumerable_TSource__o pSVar3;
			String[] pSVar4;

			source = MapVersionConverter.Converters;
			if ((typeof(MapVersionConverter.c)._2).cctor_finished_or_no_cctor == 0) {
				pMVar1 = typeof(MapVersionConverter.c).static_fields;
				__this = pMVar1.__9__3_0;
			}
			else {
				pMVar1 = typeof(MapVersionConverter.c).static_fields;
				__this = pMVar1.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(MapVersionConverter.c))._2).cctor_finished_or_no_cctor == 0) {
					pMVar1 = typeof(MapVersionConverter.c).static_fields;
				}
				pIVar2 = (object)pMVar1.__9;
				__this = new Func<IMapVersionConverter, string>(pIVar2, (intptr_t)MethodInfo_Map_MapVersionConverter_c_get_SupportedVersions_b__3_0);
				pMVar1 = typeof(MapVersionConverter.c).static_fields;
				pMVar1.__9__3_0 = __this;
			}
			first = Enumerable.Select<IMapVersionConverter, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this);
			pIVar2 = new string[1];
			if (pIVar2 == null) {
				throw new NullReferenceException();
			}
			if (*(int)&pIVar2[1].monitor == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2[2].klass = (Il2CppClass *)"1.1";
			pSVar3 = Enumerable.Concat<string>((System_Collections_Generic_IEnumerable_TSource__o)first, (System_Collections_Generic_IEnumerable_TSource__o)pIVar2);
			pSVar3 = Enumerable.Distinct<string>(pSVar3);
			pSVar4 = (String[])Enumerable.ToArray<string>(pSVar3);
			return pSVar4;
		}
	}

	[Token(Token = "0x6001A2C")]
	[Address(RVA = "0x58A3000", Offset = "0x58A2000", VA = "0x58A3000")]
	public static MapVersionConversionResult UpgradeToCurrent(MapScript mapScript)
	{
		// Lifted from source/cpp/Map/MapVersionConverter.c (Map.MapVersionConverter$$UpgradeToCurrent): 20 lines keep C-only constructs
		MapVersionConverter.c__DisplayClass4_0 targetAddress;
		int piVar1;
		uint uVar2;
		MapScriptOptions pMVar3;
		List<IMapVersionConverter> source;
		Object[] pSVar5;
		bool bVar6;
		MapVersionConverter.c__DisplayClass4_0 __this;
		List<object> __this_00;
		Func<IMapVersionConverter, bool> __this_01;
		object obj;
		String pSVar8;
		MapScript pMVar9;
		MapVersionConversionResult __this_02;
		String str2;
		String pSVar10;
		Il2CppClass pIVar11;
		InvalidOperationException __this_03;
		MethodInfo pMVar12;
		ArgumentNullException __this_04;
		Func<IMapVersionConverter, bool>* targetAddress_00;

		if (Il2CppMethodInitialized_07545aab == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<IMapVersionConverter>)) ;
			Il2CppMethodInitialized_07545aab = true;
		}
		__this = new MapVersionConverter.c__DisplayClass4_0();
		if (__this != null) {
			targetAddress = &__this.fields;
			__this.mapScript = mapScript;
			pMVar9 = __this.mapScript;
			if (pMVar9 == null) {
				pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentNullException));
				__this_04 = (ArgumentNullException)il2cpp_codegen_object_new(pIVar11);
				pSVar10 = il2cpp_codegen_get_runtime_metadata(&"mapScript");
				__this_04 = new ArgumentNullException(pSVar10);
				pMVar12 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapVersionConverter_UpgradeToCurrent);
				throw (object)__this_04;
			}
			pMVar3 = pMVar9.Options;
			if (pMVar3 != null) {
				pSVar10 = pMVar3.EditorVersion;
				__this_00 = new List<IMapVersionConverter>();
				pMVar9 = targetAddress.mapScript;
				if (pMVar9 != null) {
					targetAddress_00 = &__this.__9__0;
	label_059a338d: ;
					do {
						pMVar3 = pMVar9.Options;
						if (pMVar3 == null) break;
						bVar6 = (pMVar3.EditorVersion != "1.1");
						if (!bVar6) {
							__this_02 = new MapVersionConversionResult();
							if (__this_02 != null) {
								__this_02._OriginalVersion_k__BackingField = pSVar10;
								if ((targetAddress.mapScript != null) &&(pMVar3 = targetAddress.mapScript.Options, pMVar3 != null )) {
									__this_02._FinalVersion_k__BackingField = pMVar3.EditorVersion;
									__this_02._Converters_k__BackingField =(System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o)__this_00;
									return __this_02;
								}
							}
							break;
						}
						source = MapVersionConverter.Converters;
						__this_01 = *targetAddress_00;
						if (__this_01 == null) {
							__this_01 = new Func<IMapVersionConverter, bool>((object)__this, (intptr_t)MethodInfo_Map_MapVersionConverter_c__DisplayClass4_0_UpgradeToCurrent_b__0);
							__this.__9__0 = __this_01;
						}
						obj = (object)Enumerable.FirstOrDefault<IMapVersionConverter>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01);
						if (obj == null) {
							pMVar9 = __this.mapScript;
							pMVar3 = pMVar9.Options;
							pSVar10 = pMVar3.EditorVersion;
							pSVar8 = il2cpp_codegen_get_runtime_metadata(&"No map converter is registered from editor version ");
							str2 = il2cpp_codegen_get_runtime_metadata(&" to 1.1.");
							pSVar10 = String.Concat(pSVar8, pSVar10, str2);
							pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidOperationException));
							__this_03 = (InvalidOperationException)il2cpp_codegen_object_new(pIVar11);
							__this_03 = new InvalidOperationException(pSVar10);
							pMVar12 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapVersionConverter_UpgradeToCurrent);
							throw (object)__this_03;
						}
						pMVar9 = targetAddress.mapScript;
						pIVar11 = obj.klass;
						obj.get_ToVersion(pMVar9);
						if (targetAddress.mapScript == null) break;
						pMVar3 = targetAddress.mapScript.Options;
						pIVar11 = obj.klass;
						pSVar8 = obj.get_ToVersion();
						if (pMVar3 == null) break;
						pMVar3.EditorVersion = pSVar8;
						if (__this_00 == null) break;
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar5 = __this_00._items;
						if (pSVar5 == null) break;
						uVar2 = __this_00._size;
						if ((uint)pSVar5.Length <= uVar2) {
							__this_00.AddWithResize(obj);
							pMVar9 = targetAddress.mapScript;
							if (pMVar9 == null) break;
							goto label_059a338d;
						}
						__this_00._size = uVar2 + 1;
						pSVar5[(int)uVar2] = obj;
						pMVar9 = targetAddress.mapScript;
					} while (pMVar9 != null);
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001A2D")]
	[Address(RVA = "0x58A52E0", Offset = "0x58A42E0", VA = "0x58A52E0")]
	public static MapVersionConversionResult Downgrade(MapScript mapScript, string targetVersion)
	{
		// Lifted from source/cpp/Map/MapVersionConverter.c (Map.MapVersionConverter$$Downgrade): 40 lines keep C-only constructs
		MapVersionConverter.c__DisplayClass5_0 targetAddress;
		int piVar1;
		uint uVar2;
		MapScriptOptions pMVar3;
		List<IMapVersionConverter> source;
		Object[] pSVar5;
		bool bVar6;
		MapVersionConverter.c__DisplayClass5_0 __this;
		List<object> __this_00;
		Func<IMapVersionConverter, bool> __this_01;
		object pIVar7;
		String pSVar9;
		MapScript pMVar10;
		MapVersionConversionResult __this_02;
		Il2CppClass pIVar11;
		String[] values;
		object pIVar12;
		IntPtr pvVar13;
		String pSVar14;
		InvalidOperationException __this_03;
		MethodInfo pMVar15;
		ArgumentNullException __this_04;
		Func<IMapVersionConverter, bool>* targetAddress_00;
		String* metadataPointer;

		if (Il2CppMethodInitialized_07545aac == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<IMapVersionConverter>)) ;
			Il2CppMethodInitialized_07545aac = true;
		}
		__this = new MapVersionConverter.c__DisplayClass5_0();
		if (__this != null) {
			targetAddress = &__this.fields;
			__this.mapScript = mapScript;
			pMVar10 = __this.mapScript;
			if (pMVar10 == null) {
				pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentNullException));
				__this_04 = (ArgumentNullException)il2cpp_codegen_object_new(pIVar11);
				pSVar14 = il2cpp_codegen_get_runtime_metadata(&"mapScript");
				__this_04 = new ArgumentNullException(pSVar14);
				pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapVersionConverter_Downgrade);
				throw (object)__this_04;
			}
			pMVar3 = pMVar10.Options;
			if (pMVar3 != null) {
				pSVar14 = pMVar3.EditorVersion;
				__this_00 = new List<IMapVersionConverter>();
				pMVar10 = targetAddress.mapScript;
				if (pMVar10 != null) {
					targetAddress_00 = &__this.__9__0;
	label_059a56e9: ;
					do {
						pMVar3 = pMVar10.Options;
						if (pMVar3 == null) break;
						bVar6 = (pMVar3.EditorVersion != targetVersion) ;
						if (!bVar6) {
							__this_02 = new MapVersionConversionResult();
							if (__this_02 != null) {
								__this_02._OriginalVersion_k__BackingField = pSVar14;
								if ((targetAddress.mapScript != null) &&(pMVar3 = targetAddress.mapScript.Options, pMVar3 != null )) {
									__this_02._FinalVersion_k__BackingField = pMVar3.EditorVersion;
									__this_02._Converters_k__BackingField =(System_Collections_Generic_IReadOnlyList_IMapVersionConverter__o)__this_00;
									return __this_02;
								}
							}
							break;
						}
						source = MapVersionConverter.Converters;
						__this_01 = *targetAddress_00;
						if (__this_01 == null) {
							__this_01 = new Func<IMapVersionConverter, bool>((object)__this, (intptr_t)MethodInfo_Map_MapVersionConverter_c__DisplayClass5_0_Downgrade_b__0);
							__this.__9__0 = __this_01;
						}
						pIVar7 = (object)Enumerable.FirstOrDefault<IMapVersionConverter>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01);
						if (pIVar7 == null) {
							pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(string[]));
							values = (String[])new pIVar11[5];
							pIVar7 = il2cpp_codegen_get_runtime_metadata(&"No map converter is registered from editor version ");
							il2cpp_codegen_array_set_ref((Array)values, 0, pIVar7);
							pMVar10 = __this.mapScript;
							pMVar3 = pMVar10.Options;
							il2cpp_codegen_array_set_ref((Array)values, 1, (object)pMVar3.EditorVersion);
							pIVar7 = il2cpp_codegen_get_runtime_metadata(&" to ");
							il2cpp_codegen_array_set_ref((Array)values, 2, pIVar7);
							il2cpp_codegen_array_set_ref((Array)values, 3, (object)targetVersion);
							metadataPointer = &".";
	label_059a58ff: ;
							pIVar7 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
							il2cpp_codegen_array_set_ref((Array)values, 4, pIVar7);
							pSVar14 = String.Concat(values);
							pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidOperationException));
							__this_03 = (InvalidOperationException)il2cpp_codegen_object_new(pIVar11);
							__this_03 = new InvalidOperationException(pSVar14);
							pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapVersionConverter_Downgrade);
							throw (object)__this_03;
						}
						pIVar11 = pIVar7.klass;
						bVar6 = pIVar7.get_FromVersion();
						if (!bVar6) {
							pIVar11 = il2cpp_codegen_get_runtime_metadata(&typeof(string[]));
							values = (String[])new pIVar11[5];
							pIVar12 = il2cpp_codegen_get_runtime_metadata(&"Map conversion from ");
							il2cpp_codegen_array_set_ref((Array)values, 0, pIVar12);
							pvVar13 = il2cpp_codegen_get_runtime_metadata(&typeof(IMapVersionConverter));
							pIVar12 = (object)il2cpp_runtime_helper_02c13830(0, pvVar13, pIVar7);
							il2cpp_codegen_array_set_ref((Array)values, 1, pIVar12);
							pIVar12 = il2cpp_codegen_get_runtime_metadata(&" to ");
							il2cpp_codegen_array_set_ref((Array)values, 2, pIVar12);
							pvVar13 = il2cpp_codegen_get_runtime_metadata(&typeof(IMapVersionConverter));
							pIVar7 = (object)il2cpp_runtime_helper_02c13830(1, pvVar13, pIVar7);
							il2cpp_codegen_array_set_ref((Array)values, 3, pIVar7);
							metadataPointer = &" is not reversible.";
							goto label_059a58ff;
						}
						pMVar10 = targetAddress.mapScript;
						pIVar11 = pIVar7.klass;
						pIVar7.get_FromVersion(pMVar10);
						if (targetAddress.mapScript == null) break;
						pMVar3 = targetAddress.mapScript.Options;
						pIVar11 = pIVar7.klass;
						pSVar9 = pIVar7.get_FromVersion();
						if (pMVar3 == null) break;
						pMVar3.EditorVersion = pSVar9;
						if (__this_00 == null) break;
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar5 = __this_00._items;
						if (pSVar5 == null) break;
						uVar2 = __this_00._size;
						if ((uint)pSVar5.Length <= uVar2) {
							__this_00.AddWithResize(pIVar7);
							pMVar10 = targetAddress.mapScript;
							if (pMVar10 == null) break;
							goto label_059a56e9;
						}
						__this_00._size = uVar2 + 1;
						pSVar5[(int)uVar2] = pIVar7;
						pMVar10 = targetAddress.mapScript;
					} while (pMVar10 != null);
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapVersionConverter.c.

	// Map.MapVersionConverter.<>c__DisplayClass4_0$$.ctor: clean
	private void c__DisplayClass4_0__ctor()
	{
		base();
		return;
	}

	// Map.MapVersionConverter.<>c__DisplayClass5_0$$.ctor: clean
	private void c__DisplayClass5_0__ctor()
	{
		base();
		return;
	}

	// Map.MapVersionConverter$$.cctor: 3 lines keep C-only constructs
	static MapVersionConverter()
	{
		int piVar1;
		uint uVar2;
		Object[] pSVar3;
		List<object> __this;
		object __this_00;

		if (Il2CppMethodInitialized_07545aad == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<IMapVersionConverter>)) ;
			Il2CppMethodInitialized_07545aad = true;
		}
		__this = new List<IMapVersionConverter>();
		__this_00 = new MapVersionConverter1_0To1_1();
		if (__this != null) {
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = __this._items;
			if (pSVar3 != null) {
				uVar2 = __this._size;
				if (uVar2 < (uint)pSVar3.Length) {
					__this._size = uVar2 + 1;
					pSVar3[(int)uVar2] = __this_00;
				}
				else {
					__this.AddWithResize(__this_00);
				}
				MapVersionConverter.Converters =(List<IMapVersionConverter>)__this;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Map.MapVersionConverter.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MapVersionConverter.c();
		MapVersionConverter.c.__9 = (MapVersionConverter.c)__this;
		return;
	}

	// Map.MapVersionConverter.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Map.MapVersionConverter.<>c$$<get_SupportedVersions>b__3_0: clean
	private String c__get_SupportedVersions_b__3_0(IMapVersionConverter converter)
	{
		String pSVar4;

		if (converter == null) {
			throw new NullReferenceException();
		}
		return pSVar4;
	}

	// Map.MapVersionConverter.<>c__DisplayClass4_0$$<UpgradeToCurrent>b__0: clean
	private bool c__DisplayClass4_0__UpgradeToCurrent_b__0(IMapVersionConverter candidate)
	{
		MapScript pMVar3;
		MapScriptOptions pMVar4;
		bool bVar5;
		String a;

		if (candidate != null) {
			a = candidate.get_FromVersion();
			pMVar3 = this.mapScript;
			if ((pMVar3 != null) &&(pMVar4 = pMVar3.Options, pMVar4 != null)) {
				bVar5 = (a == pMVar4.EditorVersion);
				return bVar5;
			}
		}
		throw new NullReferenceException();
	}

	// Map.MapVersionConverter.<>c__DisplayClass5_0$$<Downgrade>b__0: clean
	private bool c__DisplayClass5_0__Downgrade_b__0(IMapVersionConverter candidate)
	{
		MapScript pMVar3;
		MapScriptOptions pMVar4;
		bool bVar5;
		String a;

		if (candidate != null) {
			a = candidate.get_ToVersion();
			pMVar3 = this.mapScript;
			if ((pMVar3 != null) &&(pMVar4 = pMVar3.Options, pMVar4 != null)) {
				bVar5 = (a == pMVar4.EditorVersion);
				return bVar5;
			}
		}
		throw new NullReferenceException();
	}
}
