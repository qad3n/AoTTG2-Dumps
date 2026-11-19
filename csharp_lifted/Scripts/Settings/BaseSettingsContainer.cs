// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BaseSettingsContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/BaseSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSettingsContainer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Collections.Specialized;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x2000106")]
internal abstract class BaseSettingsContainer : BaseSetting
{
	[Token(Token = "0x4000640")]
	[FieldOffset(Offset = "0x18")]
	public OrderedDictionary Settings;

	[Token(Token = "0x4000641")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, BaseSetting> TypedSettings;

	[Token(Token = "0x4000642")]
	[FieldOffset(Offset = "0x28")]
	public HashSet<string> FoundSettings;

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x5A46990", Offset = "0x5A45990", VA = "0x5A46990")]
	public BaseSettingsContainer()
	{
		// Lifted from source/cpp/Settings/BaseSettingsContainer.c (Settings.BaseSettingsContainer$$.ctor): clean
		OrderedDictionary __this_00;
		Dictionary<string, BaseSetting> __this_01;
		MethodInfo method_00;
		InspectorSettingMetadata __this_02;

		__this_00 = new OrderedDictionary();
		this.Settings = __this_00;
		__this_01 = new Dictionary<string, BaseSetting>();
		this.TypedSettings = __this_01;
		method_00 = new HashSet<string>();
		this.FoundSettings = (HashSet<string>)method_00;
		__this_02 = new InspectorSettingMetadata();
		this.InspectorMetadata = __this_02;
		base();
		this.Setup();
		return;
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x5A55100", Offset = "0x5A54100", VA = "0x5A55100", Slot = "11")]
	protected virtual void Setup()
	{
		// Lifted from source/cpp/Settings/BaseSettingsContainer.c (Settings.BaseSettingsContainer$$Setup): clean
		this.RegisterSettings();
		this.Apply();
		return;
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x5A549D0", Offset = "0x5A539D0", VA = "0x5A549D0")]
	protected void RegisterSettings()
	{
		// Lifted from source/cpp/Settings/BaseSettingsContainer.c (Settings.BaseSettingsContainer$$RegisterSettings): 14 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		OrderedDictionary __this_00;
		Dictionary<object, object> __this_01;
		sbyte cVar4;
		bool bVar5;
		Type pSVar6;
		FieldInfo[] source;
		Settings_BaseSettingsContainer___c_StaticFields pSVar7;
		Func<FieldInfo, bool> __this_02;
		object pIVar8;
		VirtualInvokeData pVVar9;
		object pIVar10;
		object value;
		ulong uVar11;
		long lVar12;
		object local_48;
		byte local_38;

		local_48 = null;
		pSVar6 = this.GetType();
		if (pSVar6 != null) {
			source = pSVar6.GetFields();
			if ((typeof(BaseSettingsContainer.c)._2).cctor_finished_or_no_cctor == 0) {
				pSVar7 = typeof(BaseSettingsContainer.c).static_fields;
				__this_02 = pSVar7.__9__5_1;
			}
			else {
				pSVar7 = typeof(BaseSettingsContainer.c).static_fields;
				__this_02 = pSVar7.__9__5_1;
			}
			if (__this_02 == null) {
				if (((typeof(BaseSettingsContainer.c))._2).cctor_finished_or_no_cctor == 0) {
					pSVar7 = typeof(BaseSettingsContainer.c).static_fields;
				}
				pIVar8 = (object)pSVar7.__9;
				__this_02 = new Func<FieldInfo, bool>(pIVar8, (intptr_t)MethodInfo_Settings_BaseSettingsContainer_c_RegisterSettings_b__5_1);
				pSVar7 = typeof(BaseSettingsContainer.c).static_fields;
				pSVar7.__9__5_1 = __this_02;
			}
			pIVar8 = (object)Enumerable.Where<FieldInfo>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_02);
			if (pIVar8 != null) {
				pIVar2 = pIVar8.klass;
				uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
				pIVar8 = pIVar8.Dispose();
				local_38 = (byte)&local_48;
				do {
					local_48 = pIVar8;
					if (pIVar8 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = pIVar8.klass;
					uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
					cVar4 = pIVar8.Dispose();
					pIVar8 = local_48;
					if (cVar4 == false) {
						if (local_48 == null) {
							return;
						}
						pIVar2 = local_48.klass;
						uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar11 == 0) goto label_05b54dff;
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar12 = 0;
						goto label_05b54df0;
					}
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = local_48.klass;
					uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
					pIVar10 = pIVar8.Dispose();
					if (pIVar10 == null) {
						throw new NullReferenceException();
					}
					value = (object)(*pIVar10.klass.vtable[0x1a].methodPtr)(pIVar10,this,pIVar10.klass.vtable[0x1a].method);
					if (value != null) {
						bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
						if (((value.klass._2).typeHierarchyDepth < bVar1) ||((value.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseSetting))) {
							throw new InvalidCastException();
						}
					}
					__this_00 = this.Settings;
					pIVar8 = (object)(*pIVar10.klass.vtable[8].methodPtr)(pIVar10,pIVar10.klass.vtable[8].method);
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_00.Add(pIVar8, value);
					pSVar6 = (Type)(*pIVar10.klass.vtable[0x11].methodPtr)(pIVar10);
					bVar5 = BaseSettingsContainer._RegisterSettings_g__IsTypedSetting|5_0(pSVar6);
					pIVar8 = local_48;
					if (bVar5) {
						__this_01 = (Dictionary<object, object>)this.TypedSettings;
						pIVar8 = (object)(*pIVar10.klass.vtable[8].methodPtr)(pIVar10,pIVar10.klass.vtable[8].method);
						if (__this_01 == null) {
							throw new NullReferenceException();
						}
						__this_01.Add(pIVar8, value);
						pIVar8 = local_48;
					}
				} while(true);
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar12 = lVar12 + 0x10;
			if (!(uVar11 * 0x10 != lVar12)) break;
	label_05b54df0: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar12) == typeof(IDisposable)) {
				pVVar9 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar12);
				goto label_05b54e1d;
			}
		}
	label_05b54dff: ;
	label_05b54e1d: ;
		pIVar8.Dispose();
		return;
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x5A41860", Offset = "0x5A40860", VA = "0x5A41860", Slot = "4")]
	public override void SetDefault()
	{
		// Lifted from source/cpp/Settings/BaseSettingsContainer.c (Settings.BaseSettingsContainer$$SetDefault): 11 lines keep C-only constructs
		byte bVar1;
		OrderedDictionary __this_00;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		object pIVar5;
		VirtualInvokeData pVVar6;
		ulong uVar7;
		long lVar8;
		object local_48;
		object local_40;
		byte local_30;
		object* local_28;

		local_40 = null;
		__this_00 = this.Settings;
		if ((__this_00 == null) ||(pIVar5 = (object)__this_00.Values, pIVar5 == null)) {
			throw new NullReferenceException();
		}
		pIVar2 = pIVar5.klass;
		uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
		local_48 = (object)pIVar5.Dispose();
		local_30 = (byte)&local_48;
		local_28 = &local_40;
		do {
			pIVar5 = local_48;
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = local_48.klass;
			uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
			bVar4 = pIVar5.Dispose();
			pIVar5 = local_48;
			if (!bVar4) {
				pIVar5 = (local_48 as IDisposable);
				if (pIVar5 == null) {
					return;
				}
				pIVar2 = pIVar5.klass;
				uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
				local_40 = pIVar5;
				if (uVar7 == 0) goto label_05b41b3f;
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar8 = 0;
				break;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = local_48.klass;
			uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
			pIVar5 = pIVar5.Dispose();
			if (pIVar5 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = pIVar5.klass;
			bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
			if (((pIVar2._2).typeHierarchyDepth < bVar1) ||((pIVar2._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseSetting))) {
				throw new InvalidCastException();
			}
			(*pIVar2.vtable[4].methodPtr)(pIVar5,pIVar2.vtable[4].method);
		} while(true);
		while (true) {
			lVar8 = lVar8 + 0x10;
			if (!(uVar7 * 0x10 != lVar8)) break;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar8) == typeof(IDisposable)) {
				pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
				goto label_05b41b5d;
			}
		}
	label_05b41b3f: ;
	label_05b41b5d: ;
		pIVar5.Dispose();
		return;
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x5A55220", Offset = "0x5A54220", VA = "0x5A55220", Slot = "12")]
	public virtual void Apply()
	{
		// Lifted from source/cpp/Settings/BaseSettingsContainer.c (Settings.BaseSettingsContainer$$Apply): clean
		return;
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x5A45AC0", Offset = "0x5A44AC0", VA = "0x5A45AC0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/Settings/BaseSettingsContainer.c (Settings.BaseSettingsContainer$$SerializeToJsonObject): 12 lines keep C-only constructs
		byte bVar1;
		OrderedDictionary pSVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		bool bVar5;
		JSONObject __this_00;
		object pIVar6;
		VirtualInvokeData pVVar7;
		String key;
		JSONNode pSVar8;
		ulong uVar9;
		long lVar10;
		object local_58;
		object local_50;
		byte local_40;
		object* local_38;

		local_58 = null;
		local_50 = null;
		__this_00 = new JSONObject();
		pSVar2 = this.Settings;
		if ((pSVar2 == null) ||(pIVar6 = (object)pSVar2.Keys, pIVar6 == null)) {
			throw new NullReferenceException();
		}
		pIVar3 = pIVar6.klass;
		uVar9 = (ulong)(pIVar3._2).interface_offsets_count;
		local_58 = (object)pIVar6.Dispose();
		local_40 = (byte)&local_58;
		local_38 = &local_50;
		do {
			pIVar6 = local_58;
			if (local_58 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_58.klass;
			uVar9 = (ulong)(pIVar3._2).interface_offsets_count;
			bVar5 = pIVar6.Dispose();
			pIVar6 = local_58;
			if (!bVar5) {
				pIVar6 = (local_58 as IDisposable);
				if (pIVar6 == null) {
					return (JSONNode)__this_00;
				}
				pIVar3 = pIVar6.klass;
				uVar9 = (ulong)(pIVar3._2).interface_offsets_count;
				local_50 = pIVar6;
				if (uVar9 == 0) goto label_05b45dff;
				pIVar4 = (pIVar3._1).interfaceOffsets;
				lVar10 = 0;
				break;
			}
			if (local_58 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_58.klass;
			uVar9 = (ulong)(pIVar3._2).interface_offsets_count;
			key = (String)pIVar6.Dispose();
			if ((key != null) && (key.klass != g_data_07556758)) {
				throw new InvalidCastException();
			}
			pSVar2 = this.Settings;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			pIVar6 = pSVar2.get_Item((object)key);
			if (pIVar6 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = pIVar6.klass;
			bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
			if (((pIVar3._2).typeHierarchyDepth < bVar1) ||((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseSetting))) {
				throw new InvalidCastException();
			}
			pSVar8 = (JSONNode)(*pIVar3.vtable[5].methodPtr)(pIVar6,pIVar3.vtable[5].method);
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.Add(key, pSVar8);
		} while(true);
		while (true) {
			lVar10 = lVar10 + 0x10;
			if (!(uVar9 * 0x10 != lVar10)) break;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar10) == typeof(IDisposable)) {
				pVVar7 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar10);
				goto label_05b45e1d;
			}
		}
	label_05b45dff: ;
	label_05b45e1d: ;
		pIVar6.Dispose();
		return (JSONNode)__this_00;
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x5A46260", Offset = "0x5A45260", VA = "0x5A46260", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/BaseSettingsContainer.c (Settings.BaseSettingsContainer$$DeserializeFromJsonObject): 14 lines keep C-only constructs
		byte bVar1;
		HashSet<object> pSVar2;
		OrderedDictionary pSVar3;
		Il2CppClass pIVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		sbyte cVar6;
		bool bVar7;
		object pIVar8;
		VirtualInvokeData pVVar9;
		String key;
		JSONNode pSVar10;
		ulong uVar11;
		long lVar12;
		object local_58;
		object local_50;
		object* local_40;
		object* local_38;

		local_58 = null;
		local_50 = null;
		pSVar2 = (HashSet<object>)this.FoundSettings;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pSVar2.Clear();
		if (json != null) {
			bVar1 = (typeof(JSONObject)._2).typeHierarchyDepth;
			if (((json.klass._2).typeHierarchyDepth < bVar1) ||((json.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(JSONObject))) {
				throw new InvalidCastException();
			}
		}
		pSVar3 = this.Settings;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		pIVar8 = (object)pSVar3.Keys;
		if (pIVar8 == null) {
			throw new NullReferenceException();
		}
		pIVar4 = pIVar8.klass;
		uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
		pIVar8 = (object)pIVar8.Dispose();
		local_40 = &local_58;
		local_38 = &local_50;
		do {
			local_58 = pIVar8;
			if (pIVar8 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = pIVar8.klass;
			uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
			cVar6 = pIVar8.Dispose();
			pIVar8 = local_58;
			if (cVar6 == false) {
				pIVar8 = (local_58 as IDisposable);
				local_50 = pIVar8;
				if (pIVar8 == null) goto label_05b466b6;
				pIVar4 = pIVar8.klass;
				uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
				if (uVar11 == 0) goto label_05b4668f;
				pIVar5 = (pIVar4._1).interfaceOffsets;
				lVar12 = 0;
				break;
			}
			if (local_58 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = local_58.klass;
			uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
			key = (String)pIVar8.Dispose();
			if ((key != null) && (key.klass != g_data_07556758)) {
				throw new InvalidCastException();
			}
			if (json == null) {
				throw new NullReferenceException();
			}
			pSVar10 = json.get_Item(key);
			bVar7 = (pSVar10 != null);
			pIVar8 = local_58;
			if (bVar7) {
				pSVar3 = this.Settings;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				pIVar8 = pSVar3.get_Item((object)key);
				pSVar10 = json.get_Item(key);
				if (pIVar8 == null) {
					throw new NullReferenceException();
				}
				pIVar4 = pIVar8.klass;
				bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
				if (((pIVar4._2).typeHierarchyDepth < bVar1) ||((pIVar4._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseSetting))) {
					throw new InvalidCastException();
				}
				(*pIVar4.vtable[6].methodPtr)(pIVar8,pSVar10,pIVar4.vtable[6].method);
				pSVar2 = (HashSet<object>)this.FoundSettings;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pSVar2.Add((object)key);
				pIVar8 = local_58;
			}
		} while(true);
		while (true) {
			lVar12 = lVar12 + 0x10;
			if (!(uVar11 * 0x10 != lVar12)) break;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar12) == typeof(IDisposable)) {
				pVVar9 = pIVar4.vtable + *(int)((long)&pIVar5.offset + lVar12);
				goto label_05b466ad;
			}
		}
	label_05b4668f: ;
	label_05b466ad: ;
		pIVar8.Dispose();
	label_05b466b6: ;
		bVar7 = this.Validate();
		if (!bVar7) {
			this.SetDefault();
		}
		return;
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x5A55230", Offset = "0x5A54230", VA = "0x5A55230", Slot = "13")]
	protected virtual bool Validate()
	{
		// Lifted from source/cpp/Settings/BaseSettingsContainer.c (Settings.BaseSettingsContainer$$Validate): clean
		return true;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/BaseSettingsContainer.c.

	// Settings.BaseSettingsContainer$$<RegisterSettings>g__IsTypedSetting|5_0: 2 lines keep C-only constructs
	private static bool RegisterSettings_g__IsTypedSetting_5_0(Type settingType)
	{
		Il2CppType handle;
		sbyte cVar1;
		bool bVar2;
		Type right;
		long plVar3;
		Type left;

		handle = TypeRef_Settings_TypedSetting_T;
		right = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (settingType != null) {
			plVar3 = (long)settingType.unknown();
			if (plVar3 != null) {
				cVar1 = (**(code*)(*plVar3 + 0x3b8))(plVar3,*(ulong)(*plVar3 + 0x3c0));
				if (cVar1 == false) {
					return false;
				}
				plVar3 = (long)settingType.unknown();
				if (plVar3 != null) {
					left = (Type)(**(code*)(*plVar3 + 0x448))(plVar3,*(ulong)(*plVar3 + 0x450));
					bVar2 = (left == right);
					return bVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Settings.BaseSettingsContainer.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(BaseSettingsContainer.c)) ;
		__this = new Object();
		BaseSettingsContainer.c.__9 =(BaseSettingsContainer.c)__this;
		return;
	}

	// Settings.BaseSettingsContainer.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Settings.BaseSettingsContainer.<>c$$<RegisterSettings>b__5_1: 1 lines keep C-only constructs
	private bool c__RegisterSettings_b__5_1(FieldInfo field)
	{
		long lVar1;
		Il2CppType handle;
		byte uVar2;
		long plVar3;
		Type pSVar4;

		if (field != null) {
			plVar3 = (long)field.unknown();
			handle = TypeRef_Settings_BaseSetting;
			pSVar4 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (plVar3 != null) {
				lVar1 = *plVar3;
				uVar2 = (**(code*)(lVar1 + 0x288))(plVar3,pSVar4,*(ulong)(lVar1 + 0x290),lVar1,*(code*)(lVar1 + 0x288));
				return (bool)uVar2;
			}
		}
		throw new NullReferenceException();
	}
}
