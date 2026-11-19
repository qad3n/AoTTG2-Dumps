// Type: Settings.SettingsUtil
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/SettingsUtil.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingsUtil.cs
// --------------------------------

// Settings.SettingsUtil$$SetSettingValue
// il2cpp: void Settings_SettingsUtil__SetSettingValue (Settings_BaseSetting_o* setting, int32_t type, Il2CppObject* value, const MethodInfo* method);
// 0x5c7ebb0

void Settings_SettingsUtil__SetSettingValue
               (Settings_BaseSetting_o *setting,int32_t type,Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_c *pSVar2;
  void *pvVar3;
  int32_t *piVar4;
  float *pfVar5;
  MethodInfo **ppMVar6;
  UnityEngine_Vector3_Fields *pUVar7;
  
  if (Il2CppMethodInitialized_07547996 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ToggleColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"Attempting to set invalid setting value.");
    Il2CppMethodInitialized_07547996 = '\x01';
  }
  switch(type) {
  case 1:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting
         )) goto label_05c7f04a;
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class == *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
          pvVar3 = il2cpp_vm_Object_Unbox(value);
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)setting,*(bool *)pvVar3,
                     (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          return;
        }
        goto label_05c7f057;
      }
    }
    break;
  case 2:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)
         ) goto label_05c7f04a;
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class == *(Il2CppClass **)(g_data_07556710 + 0x40)) {
          piVar4 = il2cpp_vm_Object_Unbox(value);
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)setting,*piVar4,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          return;
        }
        goto label_05c7f057;
      }
    }
    break;
  case 3:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_FloatSetting)) goto label_05c7f04a;
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class == *(Il2CppClass **)(g_data_07556740 + 0x40)) {
          pfVar5 = il2cpp_vm_Object_Unbox(value);
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)setting,*pfVar5,
                     (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
          return;
        }
        goto label_05c7f057;
      }
    }
    break;
  case 4:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (setting->klass->_2).typeHierarchyDepth) &&
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        if ((value == (Il2CppObject *)0x0) || (value->klass == g_data_07556758)) {
          ppMVar6 = &MethodInfo_Settings_TypedSetting_string_set_Value;
          goto label_05c7ef48;
        }
label_05c7f057:
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
label_05c7f04a:
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    break;
  default:
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__Log((Il2CppObject *)"Attempting to set invalid setting value.",(MethodInfo *)0x0);
    return;
  case 6:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (setting->klass->_2).typeHierarchyDepth) &&
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
        if (value != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_Utility_Color255->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Utility_Color255))
          goto label_05c7f057;
        }
        ppMVar6 = &MethodInfo_Settings_TypedSetting_Color255_set_Value;
label_05c7ef48:
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)setting,value,(MethodInfo_42DA280 *)*ppMVar6);
        return;
      }
      goto label_05c7f04a;
    }
    break;
  case 7:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      pSVar2 = setting->klass;
      bVar1 = (TypeInfo_Settings_ToggleColorSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
         ((pSVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_ToggleColorSetting)
         ) {
        if ((value == (Il2CppObject *)0x0) ||
           ((bVar1 <= (value->klass->_2).typeHierarchyDepth &&
            ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
             (Il2CppClass *)TypeInfo_Settings_ToggleColorSetting)))) {
          (*(pSVar2->vtable)._10_Copy.methodPtr)
                    (setting,(Settings_BaseSetting_o *)value,(pSVar2->vtable)._10_Copy.method);
          return;
        }
        goto label_05c7f057;
      }
      goto label_05c7f04a;
    }
    break;
  case 8:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) goto label_05c7f04a;
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class == (TypeInfo_UnityEngine_Vector3->_1).element_class) {
          pUVar7 = il2cpp_vm_Object_Unbox(value);
          Settings_TypedSetting_Vector3___set_Value
                    ((Settings_TypedSetting_Vector3__o *)setting,(UnityEngine_Vector3_o)*pUVar7,
                     (MethodInfo_42DA4D0 *)MethodInfo_Settings_TypedSetting_Vector3_set_Value);
          return;
        }
        goto label_05c7f057;
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.SettingsUtil$$GetSettingType
// il2cpp: int32_t Settings_SettingsUtil__GetSettingType (Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x5c7f060

int32_t Settings_SettingsUtil__GetSettingType(Settings_BaseSetting_o *setting,MethodInfo *method)

{
  Il2CppType *pIVar1;
  bool bVar2;
  System_Type_o *left;
  System_Type_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_07547997 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_NameSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_ToggleColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_Vector3Setting);
    Il2CppMethodInitialized_07547997 = '\x01';
  }
  if (setting == (Settings_BaseSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  left = System_Object__GetType((Il2CppObject *)setting,(MethodInfo *)0x0);
  pIVar1 = TypeRef_Settings_IntSetting;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
  bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
  pIVar1 = TypeRef_Settings_FloatSetting;
  iVar4 = 2;
  if (!bVar2) {
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
    bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
    pIVar1 = TypeRef_Settings_StringSetting;
    iVar4 = 3;
    if (!bVar2) {
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
      bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
      pIVar1 = TypeRef_Settings_NameSetting;
      iVar4 = 4;
      if (!bVar2) {
        if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_075567a8);
        }
        pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
        bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
        pIVar1 = TypeRef_Settings_BoolSetting;
        if (!bVar2) {
          if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_075567a8);
          }
          pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
          bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
          pIVar1 = TypeRef_Settings_KeybindSetting;
          iVar4 = 1;
          if (!bVar2) {
            if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_075567a8);
            }
            pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
            bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
            pIVar1 = TypeRef_Settings_ColorSetting;
            iVar4 = 5;
            if (!bVar2) {
              if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_075567a8);
              }
              pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
              bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
              pIVar1 = TypeRef_Settings_ToggleColorSetting;
              iVar4 = 6;
              if (!bVar2) {
                if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init(g_data_075567a8);
                }
                pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
                bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
                pIVar1 = TypeRef_Settings_Vector3Setting;
                iVar4 = 7;
                if (!bVar2) {
                  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init(g_data_075567a8);
                  }
                  pSVar3 = System_Type__GetTypeFromHandle
                                     ((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
                  bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
                  iVar4 = 8;
                  if (!bVar2) {
                    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
                    __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
                    message = il2cpp_codegen_get_runtime_metadata(&"Invalid setting type found.");
                    System_ArgumentException___ctor_54186d0(__this,message,(MethodInfo *)0x0);
                    lastManagedFrame =
                         il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_SettingsUtil_GetSettingType)
                    ;
                    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
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


// Settings.SettingsUtil$$DeserializeValueFromJson
// il2cpp: Il2CppObject* Settings_SettingsUtil__DeserializeValueFromJson (int32_t type, System_String_o* json, const MethodInfo* method);
// 0x5c7f3b0

Il2CppObject *
Settings_SettingsUtil__DeserializeValueFromJson(int32_t type,System_String_o *json,MethodInfo *method)

{
  Settings_BaseSetting_o *pSVar1;
  
  pSVar1 = Settings_SettingsUtil__CreateBaseSetting(type,(MethodInfo *)json);
  if (pSVar1 != (Settings_BaseSetting_o *)0x0) {
    (*(pSVar1->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (pSVar1,json,(pSVar1->klass->vtable)._9_DeserializeFromJsonString.method);
  }
  return (Il2CppObject *)pSVar1;
}


// Settings.SettingsUtil$$CreateBaseSetting
// il2cpp: Settings_BaseSetting_o* Settings_SettingsUtil__CreateBaseSetting (int32_t type, const MethodInfo* method);
// 0x5c7f3f0

Settings_BaseSetting_o * Settings_SettingsUtil__CreateBaseSetting(int32_t type,MethodInfo *method)

{
  Settings_ColorSetting_o *__this;
  
  if (Il2CppMethodInitialized_07547998 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ToggleColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    Il2CppMethodInitialized_07547998 = '\x01';
  }
  __this = (Settings_ColorSetting_o *)0x0;
  switch(type) {
  case 1:
    __this = (Settings_ColorSetting_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
    Settings_BoolSetting___ctor((Settings_BoolSetting_o *)__this,(MethodInfo *)0x0);
    break;
  case 2:
    __this = (Settings_ColorSetting_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting)
    ;
    Settings_IntSetting___ctor((Settings_IntSetting_o *)__this,(MethodInfo *)0x0);
    break;
  case 3:
    __this = (Settings_ColorSetting_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
    Settings_FloatSetting___ctor((Settings_FloatSetting_o *)__this,(MethodInfo *)0x0);
    break;
  case 4:
    __this = (Settings_ColorSetting_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    if (Il2CppMethodInitialized_07547986 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
      Il2CppMethodInitialized_07547986 = '\x01';
    }
    ((Settings_StringSetting_Fields *)&__this->fields)->MaxLength = 0x7fffffff;
    Settings_TypedSetting_object____ctor_42da2c0
              ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
               (MethodInfo_42DA2C0 *)MethodInfo_Settings_TypedSetting_string_ctor);
    break;
  case 6:
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
    Settings_ColorSetting___ctor(__this,(MethodInfo *)0x0);
    break;
  case 7:
    __this = (Settings_ColorSetting_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ToggleColorSetting);
    Settings_ToggleColorSetting___ctor((Settings_ToggleColorSetting_o *)__this,method);
    break;
  case 8:
    __this = (Settings_ColorSetting_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_Vector3Setting);
    if (Il2CppMethodInitialized_0754798e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_ctor_719ee00);
      Il2CppMethodInitialized_0754798e = '\x01';
    }
    Settings_TypedSetting_Vector3____ctor_42da500
              ((Settings_TypedSetting_Vector3__o *)__this,(UnityEngine_Vector3_o)ZEXT412(0),
               (MethodInfo_42DA500 *)MethodInfo_Settings_TypedSetting_Vector3_ctor_719ee00);
  }
  return (Settings_BaseSetting_o *)__this;
}


// Settings.SettingsUtil$$.ctor
// il2cpp: void Settings_SettingsUtil___ctor (Settings_SettingsUtil_o* __this, const MethodInfo* method);
// 0x5c7f5d0

void Settings_SettingsUtil___ctor(Settings_SettingsUtil_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


