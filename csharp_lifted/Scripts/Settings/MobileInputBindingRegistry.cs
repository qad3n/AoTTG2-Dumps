// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MobileInputBindingRegistry
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/MobileInputBindingRegistry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UI;

namespace Settings;

[Token(Token = "0x2000098")]
internal static class MobileInputBindingRegistry
{
	[Token(Token = "0x4000310")]
	public const string NoneId = "None";

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, MobileInputBinding> _bindings;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<MobileInputBinding> _orderedBindings;

	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x10")]
	private static bool _loaded;

	[Token(Token = "0x170000A0")]
	public static bool IsReady
	{
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x58CCEB0", Offset = "0x58CBEB0", VA = "0x58CCEB0")]
		get
		{
			// Lifted from source/cpp/Settings/MobileInputBindingRegistry.c (Settings.MobileInputBindingRegistry$$get_IsReady): clean


			MobileInputBindingRegistry.EnsureLoaded();
			return MobileInputBindingRegistry._loaded;
		}
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x58CCFB0", Offset = "0x58CBFB0", VA = "0x58CCFB0")]
	public static bool TryGetBinding(string id, out MobileInputBinding binding)
	{
		// Lifted from source/cpp/Settings/MobileInputBindingRegistry.c (Settings.MobileInputBindingRegistry$$TryGetBinding): clean
		Dictionary<object, object> __this;
		bool bVar1;

		MobileInputBindingRegistry.EnsureLoaded();
		bVar1 = String.IsNullOrWhiteSpace(id);
		if (!bVar1) {
			bVar1 = String.Equals(id, "None", 4);
			if (!bVar1) {
				__this = (Dictionary<object, object>)MobileInputBindingRegistry._bindings;
				if (__this == null) {
					throw new NullReferenceException();
				}
				bVar1 = __this.TryGetValue((object)id, (object*)binding);
				return bVar1;
			}
		}
		*binding = null;
		return false;
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x58CD0A0", Offset = "0x58CC0A0", VA = "0x58CD0A0")]
	public static IEnumerable<MobileInputBinding> GetAll()
	{
		// Lifted from source/cpp/Settings/MobileInputBindingRegistry.c (Settings.MobileInputBindingRegistry$$GetAll): clean


		MobileInputBindingRegistry.EnsureLoaded();
		return (IEnumerable<MobileInputBinding>)MobileInputBindingRegistry._orderedBindings;
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x58CD0F0", Offset = "0x58CC0F0", VA = "0x58CD0F0")]
	public static string[] GetGroups()
	{
		// Lifted from source/cpp/Settings/MobileInputBindingRegistry.c (Settings.MobileInputBindingRegistry$$GetGroups): 5 lines keep C-only constructs
		List<MobileInputBinding> source;
		object @object;
		Settings_MobileInputBindingRegistry___c_StaticFields pSVar1;
		Func<MobileInputBinding, string> __this;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		System_Collections_Generic_IEnumerable_TSource__o source_01;
		String[] pSVar2;

		MobileInputBindingRegistry.EnsureLoaded();
		source = MobileInputBindingRegistry._orderedBindings;
		if ((typeof(MobileInputBindingRegistry.c)._2).cctor_finished_or_no_cctor == 0) {
			pSVar1 = typeof(MobileInputBindingRegistry.c).static_fields;
			__this = pSVar1.__9__8_0;
		}
		else {
			pSVar1 = typeof(MobileInputBindingRegistry.c).static_fields;
			__this = pSVar1.__9__8_0;
		}
		if (__this == null) {
			if (((typeof(MobileInputBindingRegistry.c))._2).cctor_finished_or_no_cctor == 0) {
				pSVar1 = typeof(MobileInputBindingRegistry.c).static_fields;
			}
			@object = (object)pSVar1.__9;
			__this = new Func<MobileInputBinding, string>(@object, (intptr_t)MethodInfo_Settings_MobileInputBindingRegistry_c_GetGroups_b__8_0);
			pSVar1 = typeof(MobileInputBindingRegistry.c).static_fields;
			pSVar1.__9__8_0 = __this;
		}
		source_00 = Enumerable.Select<MobileInputBinding, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this);
		source_01 = Enumerable.Distinct<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
		pSVar2 = (String[])Enumerable.ToArray<string>(source_01);
		return pSVar2;
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x58CD270", Offset = "0x58CC270", VA = "0x58CD270")]
	public static string[] GetIdsForGroup(string group)
	{
		// Lifted from source/cpp/Settings/MobileInputBindingRegistry.c (Settings.MobileInputBindingRegistry$$GetIdsForGroup): 13 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<MobileInputBinding> __this;
		Il2CppClass item;
		String item_00;
		object pIVar4;
		bool bVar5;
		List<string> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source;
		String[] pSVar6;
		byte[] local_60 = new byte[16];
		object local_50;
		System_Collections_Generic_List_Enumerator_object__o local_48;

		MobileInputBindingRegistry.EnsureLoaded();
		__this_00 = new List<string>();
		item_00 = "None";
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar6 = __this_00._items;
			if (pSVar6 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar6.Length) {
					__this_00._size = uVar2 + 1;
					pSVar6[(int)uVar2] = item_00;
				}
				else {
					__this_00.AddWithResize((object)item_00);
				}
				__this = MobileInputBindingRegistry._orderedBindings;
				if (__this != null) {
					local_60.GetEnumerator((List<object>)__this);
					local_48._current = local_50;
					local_48._list = (List<T>)local_60._0_8_;
					local_48._index = local_60._8_4_;
					local_48._version = local_60._12_4_;
					local_60._0_8_ = null;
					local_60._8_8_ = &local_48;
	label_059cd437: ;
					bVar5 = local_48.MoveNext();
					pIVar4 = local_48._current;
					if (!bVar5) {
						local_48.Dispose();
						source = Enumerable.Distinct<string>((System_Collections_Generic_IEnumerable_TSource__o)__this_00);
						pSVar6 = (String[])Enumerable.ToArray<string>(source);
						return pSVar6;
					}
					bVar5 = String.IsNullOrEmpty(group);
					if (!bVar5) goto label_059cd470;
					if (pIVar4 == null) {
						throw new NullReferenceException();
					}
					goto label_059cd48b;
				}
			}
		}
		throw new NullReferenceException();
	label_059cd470: ;
		if (pIVar4 == null) {
			throw new NullReferenceException();
		}
		bVar5 = (pIVar4[1].monitor == group);
		if (bVar5) {
	label_059cd48b: ;
			item = pIVar4[1].klass;
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar6 = __this_00._items;
			if (pSVar6 == null) {
				throw new NullReferenceException();
			}
			uVar2 = __this_00._size;
			if (uVar2 < (uint)pSVar6.Length) {
				__this_00._size = uVar2 + 1;
				pSVar6[(int)uVar2] = (String)item;
			}
			else {
				__this_00.AddWithResize((object)item);
			}
		}
		goto label_059cd437;
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x58CD590", Offset = "0x58CC590", VA = "0x58CD590")]
	public static string GetMovementId(MobileInputLayoutRole role, string name)
	{
		// Lifted from source/cpp/Settings/MobileInputBindingRegistry.c (Settings.MobileInputBindingRegistry$$GetMovementId): 2 lines keep C-only constructs
		String* ppSVar1;
		String pSVar2;

		if (role == 5) {
			ppSVar1 = &"MapEditor.";
		}
		else {
			ppSVar1 = &"General.";
		}
		pSVar2 = String.Concat(*ppSVar1, name);
		return pSVar2;
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x58CCF00", Offset = "0x58CBF00", VA = "0x58CCF00")]
	private static void EnsureLoaded()
	{
		// Lifted from source/cpp/Settings/MobileInputBindingRegistry.c (Settings.MobileInputBindingRegistry$$EnsureLoaded): 5 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545c4c == false) {
			Il2CppMethodInitialized_07545c4c = true;
			uVar2 = (typeof(MobileInputBindingRegistry)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(MobileInputBindingRegistry)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = MobileInputBindingRegistry._loaded;
			klass = typeof(MobileInputBindingRegistry);
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(MobileInputBindingRegistry)).static_fields + 0x10);
			klass = typeof(MobileInputBindingRegistry);
		}
		if ((cVar1 != false) ||(SettingsManager.InputSettings == null)) {
			typeof(MobileInputBindingRegistry) = (MobileInputBindingRegistry)klass;
			return;
		}
		typeof(MobileInputBindingRegistry) = (MobileInputBindingRegistry)klass;
		MobileInputBindingRegistry.RegisterInputSettings();
		MobileInputBindingRegistry._loaded = true;
		return;
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x58CD5F0", Offset = "0x58CC5F0", VA = "0x58CD5F0")]
	private static void RegisterInputSettings()
	{
		// Lifted from source/cpp/Settings/MobileInputBindingRegistry.c (Settings.MobileInputBindingRegistry$$RegisterInputSettings): 24 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		InputSettings pSVar4;
		OrderedDictionary pSVar5;
		Il2CppClass pIVar6;
		Il2CppRuntimeInterfaceOffsetPair pIVar7;
		Dictionary<object, object> __this;
		List<MobileInputBinding> __this_00;
		MobileInputBinding[] pSVar8;
		sbyte cVar10;
		bool bVar11;
		object pIVar12;
		VirtualInvokeData pVVar13;
		String str0;
		object pIVar14;
		String str2;
		KeybindSetting pSVar15;
		String key;
		MobileInputBinding __this_01;
		ulong uVar16;
		long lVar17;
		object local_78;
		object local_70;
		object local_68;
		byte local_58;
		object* local_50;
		object* local_40;
		object* local_38;

		local_70 = null;
		local_78 = null;
		local_68 = null;
		pSVar4 = SettingsManager.InputSettings;
		if (((pSVar4 == null) ||(pSVar5 = pSVar4.Settings, pSVar5 == null )) || (pIVar12 = (object)pSVar5.Keys, pIVar12 == null)) {
			throw new NullReferenceException();
		}
		pIVar6 = pIVar12.klass;
		uVar16 = (ulong)(pIVar6._2).interface_offsets_count;
		pIVar12 = (object)pIVar12.Dispose();
		local_40 = &local_70;
		local_38 = &local_68;
		do {
			local_70 = pIVar12;
			if (pIVar12 == null) {
				throw new NullReferenceException();
			}
			pIVar6 = pIVar12.klass;
			uVar16 = (ulong)(pIVar6._2).interface_offsets_count;
			cVar10 = pIVar12.Dispose();
			pIVar12 = local_70;
			if (cVar10 == false) {
				pIVar12 = (local_70 as IDisposable);
				if (pIVar12 == null) {
					return;
				}
				pIVar6 = pIVar12.klass;
				uVar16 = (ulong)(pIVar6._2).interface_offsets_count;
				local_68 = pIVar12;
				if (uVar16 == 0) goto label_059cde2f;
				pIVar7 = (pIVar6._1).interfaceOffsets;
				lVar17 = 0;
				break;
			}
			if (local_70 == null) {
				throw new NullReferenceException();
			}
			pIVar6 = local_70.klass;
			uVar16 = (ulong)(pIVar6._2).interface_offsets_count;
			str0 = (String)pIVar12.Dispose();
			if ((str0 != null) && (str0.klass != g_data_07556758)) {
				throw new InvalidCastException();
			}
			pSVar4 = SettingsManager.InputSettings;
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			pSVar5 = pSVar4.Settings;
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			pIVar14 = pSVar5.get_Item((object)str0);
			pIVar12 = local_70;
			if (pIVar14 != null) {
				bVar2 = (typeof(BaseSettingsContainer)._2).typeHierarchyDepth;
				if ((bVar2 <= (pIVar14.klass._2).typeHierarchyDepth) &&((pIVar14.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(BaseSettingsContainer))) {
					if (pIVar14[1].monitor == null) {
						throw new NullReferenceException();
					}
					pIVar12 = (object)pIVar14[1].monitor.Keys;
					if (pIVar12 == null) {
						throw new NullReferenceException();
					}
					pIVar6 = pIVar12.klass;
					uVar16 = (ulong)(pIVar6._2).interface_offsets_count;
					local_78 = (object)pIVar12.Dispose();
					local_50 = &local_68;
					local_58 = (byte)&local_78;
	label_059cda24: ;
					pIVar12 = local_78;
					if (local_78 == null) {
						throw new NullReferenceException();
					}
					pIVar6 = local_78.klass;
					uVar16 = (ulong)(pIVar6._2).interface_offsets_count;
					bVar11 = pIVar12.Dispose();
					pIVar12 = local_78;
					if (bVar11) {
						if (local_78 == null) {
							throw new NullReferenceException();
						}
						pIVar6 = local_78.klass;
						uVar16 = (ulong)(pIVar6._2).interface_offsets_count;
						str2 = (String)pIVar12.Dispose();
						if ((str2 != null) && (str2.klass != g_data_07556758)) {
							throw new InvalidCastException();
						}
						if (pIVar14[1].monitor == null) {
							throw new NullReferenceException();
						}
						pSVar15 = (KeybindSetting)pIVar14[1].monitor.get_Item((object)str2);
						if (pSVar15 != null) {
							bVar2 = (typeof(KeybindSetting)._2).typeHierarchyDepth;
							if ((bVar2 <= (((Il2CppClass)pSVar15.klass)._2).typeHierarchyDepth) &&((((Il2CppClass)pSVar15.klass)._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(KeybindSetting))) {
								key = String.Concat(str0, ".", str2);
								__this_01 = new MobileInputBinding();
								__this_01._Id_k__BackingField = key;
								__this_01._Group_k__BackingField = str0;
								__this_01._Name_k__BackingField = str2;
								__this_01._Keybind_k__BackingField = pSVar15;
								if ((typeof(MobileInputBindingRegistry)._2).cctor_finished_or_no_cctor == 0) {
									il2cpp_codegen_runtime_class_init(typeof(MobileInputBindingRegistry)) ;
								}
								__this = (Dictionary<object, object>)MobileInputBindingRegistry._bindings;
								if (__this == null) {
									throw new NullReferenceException();
								}
								__this.set_Item((object)key, (object)__this_01);
								__this_00 = MobileInputBindingRegistry._orderedBindings;
								if (__this_00 != null) {
									piVar1 = &__this_00._version;
									*piVar1 = *piVar1 + 1;
									pSVar8 = __this_00._items;
									if (pSVar8 != null) {
										uVar3 = __this_00._size;
										if (uVar3 < (uint)pSVar8.Length) {
											__this_00._size = uVar3 + 1;
											pSVar8[(int)uVar3] = __this_01;
										}
										else {
											__this_00.AddWithResize((object)__this_01);
										}
										goto label_059cda24;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_059cda24;
					}
					pIVar14 = (local_78 as IDisposable);
					pIVar12 = local_70;
					local_68 = pIVar14;
					if (pIVar14 != null) {
						pIVar6 = pIVar14.klass;
						uVar16 = (ulong)(pIVar6._2).interface_offsets_count;
						pIVar14.Dispose();
						pIVar12 = local_70;
					}
				}
			}
		} while(true);
		while (true) {
			lVar17 = lVar17 + 0x10;
			if (!(uVar16 * 0x10 != lVar17)) break;
			if (*(IDisposable*)((long)&pIVar7.interfaceType + lVar17) == typeof(IDisposable)) {
				pVVar13 = pIVar6.vtable + *(int)((long)&pIVar7.offset + lVar17);
				goto label_059cde4d;
			}
		}
	label_059cde2f: ;
	label_059cde4d: ;
		pIVar12.Dispose();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/MobileInputBindingRegistry.c.

	// Settings.MobileInputBindingRegistry$$.cctor: 2 lines keep C-only constructs
	static MobileInputBindingRegistry()
	{
		uint uVar1;
		OrdinalCaseSensitiveComparer comparer;
		Dictionary<string, MobileInputBinding> __this;
		List<MobileInputBinding> __this_00;

		if (Il2CppMethodInitialized_07545c4e == false) {
			Il2CppMethodInitialized_07545c4e = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075435b6 == false) {
			Il2CppMethodInitialized_075435b6 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinal;
		__this = il2cpp_codegen_object_new(typeof(Dictionary<string, MobileInputBinding>)) ;
		__this = new Dictionary<object, object>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		MobileInputBindingRegistry._bindings = __this;
		__this_00 = new List<MobileInputBinding>();
		MobileInputBindingRegistry._orderedBindings = __this_00;
		return;
	}

	// Settings.MobileInputBindingRegistry.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MobileInputBindingRegistry.c();
		MobileInputBindingRegistry.c.__9 =(MobileInputBindingRegistry.c)__this;
		return;
	}

	// Settings.MobileInputBindingRegistry.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Settings.MobileInputBindingRegistry.<>c$$<GetGroups>b__8_0: clean
	private String c__GetGroups_b__8_0(MobileInputBinding x)
	{
		if (x == null) {
			throw new NullReferenceException();
		}
		return x._Group_k__BackingField;
	}
}
