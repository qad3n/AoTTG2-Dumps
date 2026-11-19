// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameModeSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameModeSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameModeSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000E5")]
internal class InGameModeSettings : BaseSettingsContainer
{
	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, BaseSetting> Current;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Names;

	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> Values;

	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> Types;

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x5A48310", Offset = "0x5A47310", VA = "0x5A48310", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/Settings/InGameModeSettings.c (Settings.InGameModeSettings$$SerializeToJsonObject): 5 lines keep C-only constructs
		ListSetting<StringSetting> pSVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_00;
		StringSetting pSVar4;
		BaseSetting pSVar5;
		String defaultValue;
		String pSVar6;
		JSONNode pSVar7;
		MethodInfo method_00;
		byte[] auStack_78 = new byte[8];
		ulong uStack_70;
		String pSStack_68;
		byte[] auStack_58 = new byte[8];
		IntPtr pvStack_50;
		int iStack_48;
		uint uStack_44;

		auStack_78 = (byte[])0x0;
		uStack_70._0_4_ = 0;
		uStack_70._4_4_ = 0;
		pSStack_68 = null;
		pSVar1 = this.Names;
		if (pSVar1 != null) {
			pSVar1.Clear();
			pSVar1 = this.Values;
			if (pSVar1 != null) {
				pSVar1.Clear();
				pSVar1 = this.Types;
				if (pSVar1 != null) {
					pSVar1.Clear();
					pSVar2 = (Dictionary<object, object>)this.Current;
					if (pSVar2 != null) {
						__this_00 = pSVar2.Keys;
						if (__this_00 != null) {
							auStack_58.GetEnumerator(__this_00);
							pSStack_68 = (String)CONCAT44(uStack_44, iStack_48);
							auStack_78 = auStack_58;
							uStack_70 = pvStack_50;
							while(true) {
								bVar3 = auStack_78.MoveNext();
								pSVar6 = pSStack_68;
								if (!bVar3) {
									method_00 = MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose ;
									auStack_78.Dispose();
									return pSVar7;
								}
								pSVar1 = this.Names;
								pSVar4 = new StringSetting(pSVar6, 0x7fffffff);
								if (pSVar1 == null) {
									throw new NullReferenceException();
								}
								pSVar1.AddItem((BaseSetting)pSVar4);
								pSVar2 = (Dictionary<object, object>)this.Current;
								if (pSVar2 == null) {
									throw new NullReferenceException();
								}
								pSVar1 = this.Values;
								pSVar5 = pSVar2.get_Item((object)pSVar6);
								if (pSVar5 == null) break;
								defaultValue = pSVar5.SerializeToJsonString();
								pSVar4 = new StringSetting(defaultValue, 0x7fffffff);
								if (pSVar1 == null) {
									throw new NullReferenceException();
								}
								pSVar1.AddItem((BaseSetting)pSVar4);
								pSVar2 = (Dictionary<object, object>)this.Current;
								if (pSVar2 == null) {
									throw new NullReferenceException();
								}
								pSVar1 = this.Types;
								pSVar5 = pSVar2.get_Item((object)pSVar6);
								iStack_48 = SettingsUtil.GetSettingType(pSVar5);
								auStack_58 = (byte[])typeof(SettingType);
								pvStack_50 = (IntPtr)0xffffffffffffffff;
								pSVar6 = auStack_58.ToString();
								pSVar4 = new StringSetting(pSVar6, 0x7fffffff);
								if (pSVar1 == null) {
									throw new NullReferenceException();
								}
								pSVar1.AddItem((BaseSetting)pSVar4);
							}
							throw new NullReferenceException();
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x5A486B0", Offset = "0x5A476B0", VA = "0x5A486B0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/InGameModeSettings.c (Settings.InGameModeSettings$$DeserializeFromJsonObject): 2 lines keep C-only constructs
		byte bVar1;
		Dictionary<object, object> pSVar2;
		List<object> pSVar3;
		String value;
		int iVar4;
		StringSetting pSVar5;
		object value_00;
		int index;
		ListSetting<StringSetting> pSVar6;

		if (Il2CppMethodInitialized_07547291 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07547291 = true;
		}
		this.DeserializeFromJsonObject(json);
		pSVar2 = (Dictionary<object, object>)this.Current;
		if (pSVar2 != null) {
			pSVar2.Clear();
			pSVar6 = this.Names;
			if (pSVar6 != null) {
				index = 0;
				while(true) {
					iVar4 = pSVar6.GetCount();
					if (iVar4 <= index) {
						return;
					}
					pSVar6 = this.Types;
					if ((pSVar6 == null) ||(pSVar3 = (List<object>)pSVar6._value, pSVar3 == null)) break;
					pSVar5 = pSVar3.get_Item(index);
					if (pSVar5 == null) break;
					value = pSVar5._value;
					iVar4 = MiscExtensions.ToEnum<SettingType>(value, true);
					pSVar6 = this.Values;
					if ((pSVar6 == null) ||(pSVar3 = (List<object>)pSVar6._value, pSVar3 == null)) break;
					pSVar5 = pSVar3.get_Item(index);
					if (pSVar5 == null) break;
					value_00 = SettingsUtil.DeserializeValueFromJson(iVar4, pSVar5._value);
					if (value_00 != null) {
						bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
						if (((value_00.klass._2).typeHierarchyDepth < bVar1) ||((value_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseSetting))) {
							throw new InvalidCastException();
						}
					}
					pSVar6 = this.Names;
					if ((pSVar6 == null) ||(pSVar3 = (List<object>)pSVar6._value, pSVar3 == null)) break;
					pSVar2 = (Dictionary<object, object>)this.Current;
					pSVar5 = pSVar3.get_Item(index);
					if ((pSVar5 == null) ||(pSVar2 == null)) break;
					pSVar2.Add((object)pSVar5._value, value_00);
					index = index + 1;
					pSVar6 = this.Names;
					if (pSVar6 == null) break;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x5A488E0", Offset = "0x5A478E0", VA = "0x5A488E0")]
	public InGameModeSettings()
	{
		// Lifted from source/cpp/Settings/InGameModeSettings.c (Settings.InGameModeSettings$$.ctor): clean
		Dictionary<string, BaseSetting> __this_00;
		ListSetting<StringSetting> pSVar1;
		MethodInfo method_00;

		__this_00 = new Dictionary<string, BaseSetting>();
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
