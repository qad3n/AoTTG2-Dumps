// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameAddonSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameAddonSettings.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000DC")]
internal class InGameAddonSettings : BaseSettingsContainer
{
	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, Dictionary<string, BaseSetting>> Current;

	[Token(Token = "0x400049C")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Names;

	[Token(Token = "0x400049D")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> Values;

	[Token(Token = "0x400049E")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> Types;

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x5A454E0", Offset = "0x5A444E0", VA = "0x5A454E0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/Settings/InGameAddonSettings.c (Settings.InGameAddonSettings$$SerializeToJsonObject): 6 lines keep C-only constructs
		ListSetting<StringSetting> pSVar1;
		String str0;
		bool bVar2;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar3;
		Dictionary<object, object> pSVar4;
		String pSVar5;
		StringSetting pSVar6;
		BaseSetting pSVar7;
		String pSVar8;
		JSONNode pSVar9;
		MethodInfo method_00;
		byte[] auStack_a0 = new byte[8];
		IntPtr pvStack_98;
		int iStack_90;
		uint uStack_8c;
		byte[] auStack_88 = new byte[8];
		ulong uStack_80;
		String pSStack_78;
		byte[] auStack_68 = new byte[8];
		String pSStack_58;

		auStack_88 = (byte[])0x0;
		uStack_80._0_4_ = 0;
		uStack_80._4_4_ = 0;
		pSStack_78 = null;
		auStack_68 = (byte[])0x0;
		pSStack_58 = null;
		pSVar1 = this.Names;
		if (pSVar1 != null) {
			pSVar1.Clear();
			pSVar1 = this.Values;
			if (pSVar1 != null) {
				pSVar1.Clear();
				pSVar1 = this.Types;
				if (pSVar1 != null) {
					pSVar1.Clear();
					pSVar4 = (Dictionary<object, object>)this.Current;
					if ((pSVar4 != null) &&(pSVar3 = pSVar4.Keys, pSVar3 != null)) {
						auStack_a0.GetEnumerator(pSVar3);
						pSStack_78 = (String)CONCAT44(uStack_8c, iStack_90);
						auStack_88 = auStack_a0;
						uStack_80 = pvStack_98;
						do {
							bVar2 = auStack_88.MoveNext();
							str0 = pSStack_78;
							if (!bVar2) {
								method_00 = MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett ;
								auStack_88.Dispose();
								return pSVar9;
							}
							pSVar4 = (Dictionary<object, object>)this.Current;
							if (pSVar4 == null) {
								throw new NullReferenceException();
							}
							pSVar4 = (Dictionary<object, object>)pSVar4.get_Item((object)pSStack_78);
							if (pSVar4 == null) {
								throw new NullReferenceException();
							}
							pSVar3 = pSVar4.Keys;
							if (pSVar3 == null) {
								throw new NullReferenceException();
							}
							auStack_a0.GetEnumerator(pSVar3);
							pSStack_58 = (String)CONCAT44(uStack_8c, iStack_90);
							auStack_68 = auStack_a0;
							while (true) {
								bVar2 = auStack_68.MoveNext();
								pSVar8 = pSStack_58;
								if (!(bVar2)) break;
								pSVar1 = this.Names;
								pSVar5 = String.Concat(str0, ".", pSStack_58);
								pSVar6 = new StringSetting(pSVar5, 0x7fffffff);
								if (pSVar1 == null) {
									throw new NullReferenceException();
								}
								pSVar1.AddItem((BaseSetting)pSVar6);
								pSVar4 = (Dictionary<object, object>)this.Current;
								if (pSVar4 == null) {
									throw new NullReferenceException();
								}
								pSVar1 = this.Values;
								pSVar4 = (Dictionary<object, object>)pSVar4.get_Item((object)str0);
								if (pSVar4 == null) {
									throw new NullReferenceException();
								}
								pSVar7 = pSVar4.get_Item((object)pSVar8);
								if (pSVar7 == null) {
									throw new NullReferenceException();
								}
								pSVar5 = pSVar7.SerializeToJsonString();
								pSVar6 = new StringSetting(pSVar5, 0x7fffffff);
								if (pSVar1 == null) {
									throw new NullReferenceException();
								}
								pSVar1.AddItem((BaseSetting)pSVar6);
								pSVar4 = (Dictionary<object, object>)this.Current;
								if (pSVar4 == null) {
									throw new NullReferenceException();
								}
								pSVar1 = this.Types;
								pSVar4 = (Dictionary<object, object>)pSVar4.get_Item((object)str0);
								if (pSVar4 == null) {
									throw new NullReferenceException();
								}
								pSVar7 = pSVar4.get_Item((object)pSVar8);
								iStack_90 = SettingsUtil.GetSettingType(pSVar7);
								auStack_a0 = (byte[])typeof(SettingType);
								pvStack_98 = (IntPtr)0xffffffffffffffff;
								pSVar8 = auStack_a0.ToString();
								pSVar6 = new StringSetting(pSVar8, 0x7fffffff);
								if (pSVar1 == null) {
									throw new NullReferenceException();
								}
								pSVar1.AddItem((BaseSetting)pSVar6);
							}
							auStack_68.Dispose();
						} while(true);
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x5A45ED0", Offset = "0x5A44ED0", VA = "0x5A45ED0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/InGameAddonSettings.c (Settings.InGameAddonSettings$$DeserializeFromJsonObject): 3 lines keep C-only constructs
		byte bVar1;
		List<object> pSVar2;
		String value;
		bool bVar3;
		int iVar4;
		StringSetting pSVar5;
		String key;
		String __this_00;
		object value_00;
		Dictionary<string, BaseSetting> __this_01;
		Dictionary<object, object> pSVar6;
		ListSetting<StringSetting> pSVar7;
		int index;

		if (Il2CppMethodInitialized_07547289 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07547289 = true;
		}
		this.DeserializeFromJsonObject(json);
		pSVar6 = (Dictionary<object, object>)this.Current;
		if (pSVar6 != null) {
			pSVar6.Clear();
			pSVar7 = this.Names;
			if (pSVar7 != null) {
				index = 0;
				while(true) {
					iVar4 = pSVar7.GetCount();
					if (iVar4 <= index) {
						return;
					}
					pSVar7 = this.Names;
					if ((((pSVar7 == null) ||(pSVar2 = (List<object>)pSVar7._value, pSVar2 == null)) ||(pSVar5 = pSVar2.get_Item(index), pSVar5 == null)) ||(__this_00 = pSVar5._value, __this_00 == null)) break;
					iVar4 = __this_00.IndexOf(0x2e);
					if (iVar4 < 0) {
						pSVar7 = this.Types;
						key = __this_00;
					}
					else {
						key = __this_00.Substring(0, iVar4);
						__this_00 = __this_00.Substring(iVar4 + 1);
						pSVar7 = this.Types;
					}
					if (((pSVar7 == null) ||(pSVar2 = (List<object>)pSVar7._value, pSVar2 == null)) ||(pSVar5 = pSVar2.get_Item(index), pSVar5 == null)) break;
					value = pSVar5._value;
					iVar4 = MiscExtensions.ToEnum<SettingType>(value, true);
					pSVar7 = this.Values;
					if (((pSVar7 == null) ||(pSVar2 = (List<object>)pSVar7._value, pSVar2 == null)) ||(pSVar5 = pSVar2.get_Item(index), pSVar5 == null)) break;
					value_00 = SettingsUtil.DeserializeValueFromJson(iVar4, pSVar5._value);
					if (value_00 != null) {
						bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
						if (((value_00.klass._2).typeHierarchyDepth < bVar1) ||((value_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseSetting))) {
							throw new InvalidCastException();
						}
					}
					pSVar6 = (Dictionary<object, object>)this.Current;
					if (pSVar6 == null) break;
					bVar3 = pSVar6.ContainsKey((object)key);
					if (!bVar3) {
						pSVar6 = (Dictionary<object, object>)this.Current;
						__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, BaseSetting>));
						__this_01 = new Dictionary<object, object>();
						if (pSVar6 == null) break;
						pSVar6.set_Item((object)key, (object)__this_01);
					}
					pSVar6 = (Dictionary<object, object>)this.Current;
					if ((pSVar6 == null) ||(pSVar6 = (Dictionary<object, object>)pSVar6.get_Item((object)key), pSVar6 == null)) break;
					pSVar6.set_Item((object)__this_00, value_00);
					index = index + 1;
					pSVar7 = this.Names;
					if (pSVar7 == null) break;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x5A46870", Offset = "0x5A45870", VA = "0x5A46870")]
	public InGameAddonSettings()
	{
		// Lifted from source/cpp/Settings/InGameAddonSettings.c (Settings.InGameAddonSettings$$.ctor): 1 lines keep C-only constructs
		Dictionary<string, Dictionary<string, BaseSetting>> __this_00;
		ListSetting<StringSetting> pSVar1;
		MethodInfo method_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, BaseSetting>>));
		__this_00 = new Dictionary<object, object>();
		this.Current = __this_00;
		pSVar1 = new ListSetting<StringSetting>();
		this.Names = pSVar1;
		pSVar1 = new ListSetting<StringSetting>();
		this.Values = pSVar1;
		method_00 = new ListSetting<StringSetting>();
		this.Types = (ListSetting<StringSetting>)method_00;
		base();
		return;
	}
}
