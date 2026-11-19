// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SettingsUtil
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SettingsUtil.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingsUtil.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000121")]
internal class SettingsUtil
{
	[Token(Token = "0x6000622")]
	[Address(RVA = "0x5B7EBB0", Offset = "0x5B7DBB0", VA = "0x5B7EBB0")]
	public static void SetSettingValue(BaseSetting setting, SettingType type, object value)
	{
		// Lifted from source/cpp/Settings/SettingsUtil.c (Settings.SettingsUtil$$SetSettingValue): 24 lines keep C-only constructs
		byte bVar1;
		BaseSetting pSVar2;
		IntPtr pvVar3;
		int piVar4;
		float pfVar5;
		MethodInfo* ppMVar6;
		Vector3 pUVar7;

		switch(type) {
		case 1:
			if (setting != null) {
				bVar1 = (typeof(BoolSetting)._2).typeHierarchyDepth;
				if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BoolSetting) )) goto label_05c7f04a;
				if (value != null) {
					if ((value.klass._1).element_class == *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
						pvVar3 = il2cpp_vm_Object_Unbox(value);
						setting.Value = *(bool)pvVar3;
						return;
					}
					goto label_05c7f057;
				}
			}
			break;
		case 2:
			if (setting != null) {
				bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
				if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting)) ) goto label_05c7f04a;
				if (value != null) {
					if ((value.klass._1).element_class == *(Il2CppClass*)(g_data_07556710 + 0x40)) {
						piVar4 = il2cpp_vm_Object_Unbox(value);
						setting.Value = *piVar4;
						return;
					}
					goto label_05c7f057;
				}
			}
			break;
		case 3:
			if (setting != null) {
				bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
				if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(FloatSetting))) goto label_05c7f04a;
				if (value != null) {
					if ((value.klass._1).element_class == *(Il2CppClass*)(g_data_07556740 + 0x40)) {
						pfVar5 = il2cpp_vm_Object_Unbox(value);
						setting.Value = *pfVar5;
						return;
					}
					goto label_05c7f057;
				}
			}
			break;
		case 4:
			if (setting != null) {
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if ((bVar1 <= (setting.klass._2).typeHierarchyDepth) &&((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(StringSetting))) {
					if ((value == null) || (value.klass == g_data_07556758)) {
						ppMVar6 = &MethodInfo_Settings_TypedSetting_string_set_Value;
						goto label_05c7ef48;
					}
	label_05c7f057: ;
					throw new InvalidCastException();
				}
	label_05c7f04a: ;
				throw new InvalidCastException();
			}
			break;
		default: ;
			Debug.Log((Il2CppObject *)"Attempting to set invalid setting value.");
			return;
		case 6:
			if (setting != null) {
				bVar1 = (typeof(ColorSetting)._2).typeHierarchyDepth;
				if ((bVar1 <= (setting.klass._2).typeHierarchyDepth) &&((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(ColorSetting))) {
					if (value != null) {
						bVar1 = (typeof(Color255)._2).typeHierarchyDepth;
						if (((value.klass._2).typeHierarchyDepth < bVar1) ||((value.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Color255))) goto label_05c7f057;
					}
					ppMVar6 = &MethodInfo_Settings_TypedSetting_Color255_set_Value;
	label_05c7ef48: ;
					setting.Value = value;
					return;
				}
				goto label_05c7f04a;
			}
			break;
		case 7:
			if (setting != null) {
				pSVar2 = setting.klass;
				bVar1 = (typeof(ToggleColorSetting)._2).typeHierarchyDepth;
				if ((bVar1 <= (pSVar2._2).typeHierarchyDepth) &&((pSVar2._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(ToggleColorSetting)) ) {
					if ((value == null) ||((bVar1 <= (value.klass._2).typeHierarchyDepth &&((value.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(ToggleColorSetting))))) {
						setting.Copy((BaseSetting)value);
						return;
					}
					goto label_05c7f057;
				}
				goto label_05c7f04a;
			}
			break;
		case 8:
			if (setting != null) {
				bVar1 = (typeof(Vector3Setting)._2).typeHierarchyDepth;
				if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Vector3Setting))) goto label_05c7f04a;
				if (value != null) {
					if ((value.klass._1).element_class == (typeof(Vector3)._1).element_class) {
						pUVar7 = il2cpp_vm_Object_Unbox(value);
						setting.Value = (UnityEngine_Vector3_o)*pUVar7;
						return;
					}
					goto label_05c7f057;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x5B7F060", Offset = "0x5B7E060", VA = "0x5B7F060")]
	public static SettingType GetSettingType(BaseSetting setting)
	{
		// Lifted from source/cpp/Settings/SettingsUtil.c (Settings.SettingsUtil$$GetSettingType): 5 lines keep C-only constructs
		Il2CppType pIVar1;
		bool bVar2;
		Type left;
		Type pSVar3;
		Il2CppClass klass;
		ArgumentException __this;
		String message;
		MethodInfo lastManagedFrame;
		int iVar4;

		if (setting == null) {
			throw new NullReferenceException();
		}
		left = setting.GetType();
		pIVar1 = TypeRef_Settings_IntSetting;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar1);
		bVar2 = (left == pSVar3);
		pIVar1 = TypeRef_Settings_FloatSetting;
		if (!bVar2) {
			pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar1);
			bVar2 = (left == pSVar3);
			pIVar1 = TypeRef_Settings_StringSetting;
			if (!bVar2) {
				pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar1);
				bVar2 = (left == pSVar3);
				pIVar1 = TypeRef_Settings_NameSetting;
				if (!bVar2) {
					pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar1);
					bVar2 = (left == pSVar3);
					pIVar1 = TypeRef_Settings_BoolSetting;
					if (!bVar2) {
						pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar1);
						bVar2 = (left == pSVar3);
						pIVar1 = TypeRef_Settings_KeybindSetting;
						if (!bVar2) {
							pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar1);
							bVar2 = (left == pSVar3);
							pIVar1 = TypeRef_Settings_ColorSetting;
							if (!bVar2) {
								pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar1);
								bVar2 = (left == pSVar3);
								pIVar1 = TypeRef_Settings_ToggleColorSetting;
								if (!bVar2) {
									pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar1);
									bVar2 = (left == pSVar3);
									pIVar1 = TypeRef_Settings_Vector3Setting;
									if (!bVar2) {
										pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar1);
										bVar2 = (left == pSVar3);
										if (!bVar2) {
											klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
											__this = (ArgumentException)il2cpp_codegen_object_new(klass);
											message = il2cpp_codegen_get_runtime_metadata(&"Invalid setting type found.");
											__this = new ArgumentException(message);
											lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_SettingsUtil_GetSettingType) ;
											throw (object)__this;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		return iVar4;
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x5B7F3B0", Offset = "0x5B7E3B0", VA = "0x5B7F3B0")]
	public static object DeserializeValueFromJson(SettingType type, string json)
	{
		// Lifted from source/cpp/Settings/SettingsUtil.c (Settings.SettingsUtil$$DeserializeValueFromJson): clean
		BaseSetting pSVar1;

		pSVar1 = SettingsUtil.CreateBaseSetting(type);
		if (pSVar1 != null) {
			pSVar1.DeserializeFromJsonString(json);
		}
		return (object)pSVar1;
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x5B7F3F0", Offset = "0x5B7E3F0", VA = "0x5B7F3F0")]
	public static BaseSetting CreateBaseSetting(SettingType type)
	{
		// Lifted from source/cpp/Settings/SettingsUtil.c (Settings.SettingsUtil$$CreateBaseSetting): 3 lines keep C-only constructs
		ColorSetting __this;

		__this = null;
		switch(type) {
		case 1:
			__this = new Vector3Setting();
			break;
		case 2:
			__this = (ColorSetting)il2cpp_codegen_object_new(typeof(IntSetting)) ;
			__this = new Vector3Setting();
			break;
		case 3:
			__this = new Vector3Setting();
			break;
		case 4:
			((StringSetting)&__this.fields).MaxLength = 0x7fffffff;
			__this = new Vector3Setting((object)**(ulong*)(g_data_07556758 + 0xb8));
			break;
		case 6:
			__this = new Vector3Setting();
			break;
		case 7:
			__this = new Vector3Setting();
			break;
		case 8:
			__this = new Vector3Setting((Vector3)ZEXT412(0));
		}
		return (BaseSetting)__this;
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x5B7F5D0", Offset = "0x5B7E5D0", VA = "0x5B7F5D0")]
	public SettingsUtil()
	{
		// Lifted from source/cpp/Settings/SettingsUtil.c (Settings.SettingsUtil$$.ctor): clean
		base();
		return;
	}
}
