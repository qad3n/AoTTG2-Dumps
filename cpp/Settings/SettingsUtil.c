// Type: Settings.SettingsUtil
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/SettingsUtil.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingsUtil.cs
// --------------------------------

// Settings.SettingsUtil$$SetSettingValue
// il2cpp: void Settings_SettingsUtil__SetSettingValue (Settings_BaseSetting_o* setting, int32_t type, Il2CppObject* value, const MethodInfo* method);
// 0x181f26ee0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f2716f: mov r8, qword ptr [rip + 0x216f7ea]  ; MethodInfo_Settings_TypedSetting_string_set_Value
// asm:   0x181f27378: mov rdx, rdi
// asm:   0x181f27420: mov r8, qword ptr [rip + 0x216eba1]  ; MethodInfo_Settings_TypedSetting_Color255_set_Value
// asm:   0x181f27427: mov rdx, rdi
// asm:   0x181f2742a: jmp 0x181f27176

void Settings_SettingsUtil__SetSettingValue
               (Settings_BaseSetting_o *setting,int32_t type,Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined8 *puVar2;
  int32_t *piVar3;
  float *pfVar4;
  void *pvVar5;
  Il2CppObject *value_00;
  MethodInfo *pMVar6;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843454c9 == '\0') {
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
    Il2CppMethodInitialized_1843454c9 = '\x01';
  }
  method_02 = MethodInfo_Settings_TypedSetting_Vector3_set_Value;
  method_01 = MethodInfo_Settings_TypedSetting_float_set_Value;
  method_00 = MethodInfo_Settings_TypedSetting_int_set_Value;
  pMVar6 = MethodInfo_Settings_TypedSetting_bool_set_Value;
  if (type == 1) {
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pvVar5 = il2cpp_object_unbox(value);
        bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (setting->klass->_2).typeHierarchyDepth) &&
           ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)setting,*(bool *)pvVar5,(MethodInfo_E8F540 *)pMVar6);
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception(setting,TypeInfo_Settings_BoolSetting);
      }
    }
  }
  else if (type == 6) {
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
      pMVar6 = MethodInfo_Settings_TypedSetting_Color255_set_Value;
      if (value == (Il2CppObject *)0x0) {
        value_00 = (Il2CppObject *)0x0;
      }
      else {
        bVar1 = (TypeInfo_Utility_Color255->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           (value_00 = value,
           (value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Utility_Color255)
           ) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
      }
label_181f27176:
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)setting,value_00,(MethodInfo_E8F4C0 *)pMVar6);
      return;
    }
  }
  else if (type == 7) {
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_ToggleColorSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_ToggleColorSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
      if (value == (Il2CppObject *)0x0) {
        value = (Il2CppObject *)0x0;
      }
      else {
        bVar1 = (TypeInfo_Settings_ToggleColorSetting->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_ToggleColorSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
      }
      (*(setting->klass->vtable)._10_Copy.methodPtr)
                (setting,(Settings_BaseSetting_o *)value,(setting->klass->vtable)._10_Copy.method);
      return;
    }
  }
  else if (type == 3) {
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e38 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pfVar4 = il2cpp_object_unbox(value);
        bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (setting->klass->_2).typeHierarchyDepth) &&
           ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)setting,*pfVar4,(MethodInfo_E8F490 *)method_01);
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception(setting,TypeInfo_Settings_FloatSetting);
      }
    }
  }
  else if (type == 2) {
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar3 = il2cpp_object_unbox(value);
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (setting->klass->_2).typeHierarchyDepth) &&
           ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)setting,*piVar3,(MethodInfo_E8F570 *)method_00);
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception(setting,TypeInfo_Settings_IntSetting);
      }
    }
  }
  else if (type == 4) {
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
      value_00 = (Il2CppObject *)0x0;
      pMVar6 = MethodInfo_Settings_TypedSetting_string_set_Value;
      if (value != (Il2CppObject *)0x0) {
        if (value->klass == g_data_184354e50) {
          value_00 = value;
        }
        if (value_00 == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(value,g_data_184354e50);
        }
      }
      goto label_181f27176;
    }
  }
  else {
    if (type != 8) {
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__Log((Il2CppObject *)"Attempting to set invalid setting value.",(MethodInfo *)0x0);
      return;
    }
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
      if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        puVar2 = il2cpp_object_unbox(value);
        bVar1 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
        if ((bVar1 <= (setting->klass->_2).typeHierarchyDepth) &&
           ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
          local_18._0_8_ = *puVar2;
          local_18.z = *(float *)(puVar2 + 1);
          Settings_TypedSetting_Vector3___set_Value
                    ((Settings_TypedSetting_Vector3__o *)setting,(UnityEngine_Vector3_o *)&local_18,
                     (MethodInfo_E8F4F0 *)method_02);
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception(setting,TypeInfo_Settings_Vector3Setting);
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.SettingsUtil$$GetSettingType
// il2cpp: int32_t Settings_SettingsUtil__GetSettingType (Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x181f26b50

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
  
  if (Il2CppMethodInitialized_1843454ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_NameSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_ToggleColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_Vector3Setting);
    Il2CppMethodInitialized_1843454ca = '\x01';
  }
  if (setting == (Settings_BaseSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  left = System_Object__GetType((Il2CppObject *)setting,(MethodInfo *)0x0);
  pIVar1 = TypeRef_Settings_IntSetting;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
  bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)left,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,(MethodInfo_841F20 *)0x0
                    );
  pIVar1 = TypeRef_Settings_FloatSetting;
  if (bVar2) {
    return 2;
  }
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
  bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)left,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,(MethodInfo_841F20 *)0x0
                    );
  pIVar1 = TypeRef_Settings_StringSetting;
  if (bVar2) {
    return 3;
  }
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
  bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)left,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,(MethodInfo_841F20 *)0x0
                    );
  pIVar1 = TypeRef_Settings_NameSetting;
  if (!bVar2) {
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
    bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                      ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)left,
                       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                       (MethodInfo_841F20 *)0x0);
    pIVar1 = TypeRef_Settings_BoolSetting;
    if (!bVar2) {
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
      bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                        ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)left,
                         (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                         (MethodInfo_841F20 *)0x0);
      pIVar1 = TypeRef_Settings_KeybindSetting;
      if (bVar2) {
        return 1;
      }
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
      bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                        ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)left,
                         (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                         (MethodInfo_841F20 *)0x0);
      pIVar1 = TypeRef_Settings_ColorSetting;
      if (bVar2) {
        return 5;
      }
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
      bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                        ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)left,
                         (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                         (MethodInfo_841F20 *)0x0);
      pIVar1 = TypeRef_Settings_ToggleColorSetting;
      if (!bVar2) {
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
        bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                          ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)left,
                           (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                           (MethodInfo_841F20 *)0x0);
        pIVar1 = TypeRef_Settings_Vector3Setting;
        if (!bVar2) {
          if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354ea0);
          }
          pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
          bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                            ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)left,
                             (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar3,
                             (MethodInfo_841F20 *)0x0);
          if (bVar2) {
            return 8;
          }
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
          __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
          message = il2cpp_codegen_get_runtime_metadata(&"Invalid setting type found.");
          System_ArgumentException___ctor_1a77cc0(__this,message,(MethodInfo *)0x0);
          lastManagedFrame =
               il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_SettingsUtil_GetSettingType);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
        }
        return 7;
      }
      return 6;
    }
  }
  return 4;
}


// Settings.SettingsUtil$$DeserializeValueFromJson
// il2cpp: Il2CppObject* Settings_SettingsUtil__DeserializeValueFromJson (int32_t type, System_String_o* json, const MethodInfo* method);
// 0x181f26b00

Il2CppObject *
Settings_SettingsUtil__DeserializeValueFromJson(int32_t type,System_String_o *json,MethodInfo *method)

{
  Settings_BaseSetting_o *pSVar1;
  
  pSVar1 = Settings_SettingsUtil__CreateBaseSetting(type,(MethodInfo *)0x0);
  if (pSVar1 != (Settings_BaseSetting_o *)0x0) {
    (*(pSVar1->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (pSVar1,json,(pSVar1->klass->vtable)._9_DeserializeFromJsonString.method);
    return (Il2CppObject *)pSVar1;
  }
  return (Il2CppObject *)0x0;
}


// Settings.SettingsUtil$$CreateBaseSetting
// il2cpp: Settings_BaseSetting_o* Settings_SettingsUtil__CreateBaseSetting (int32_t type, const MethodInfo* method);
// 0x181f266e0

Settings_BaseSetting_o * Settings_SettingsUtil__CreateBaseSetting(int32_t type,MethodInfo *method)

{
  Settings_IntSetting_o *__this;
  Settings_FloatSetting_o *__this_00;
  Settings_StringSetting_o *__this_01;
  Settings_ToggleColorSetting_o *__this_02;
  Settings_BoolSetting_o *pSVar1;
  Utility_Color255_o *pUVar2;
  Settings_ColorSetting_o *pSVar3;
  Settings_Vector3Setting_o *__this_03;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843454cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ToggleColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    Il2CppMethodInitialized_1843454cb = '\x01';
  }
  switch(type) {
  case 1:
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
    if (Il2CppMethodInitialized_184345489 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
      Il2CppMethodInitialized_184345489 = '\x01';
    }
    Settings_TypedSetting_bool____ctor_e8f2c0
              ((Settings_TypedSetting_bool__o *)pSVar1,false,
               (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
    return (Settings_BaseSetting_o *)pSVar1;
  case 2:
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
    if (Il2CppMethodInitialized_18434549b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor_4096188);
      Il2CppMethodInitialized_18434549b = '\x01';
    }
    (__this->fields).MinValue = -0x80000000;
    (__this->fields).MaxValue = 0x7fffffff;
    Settings_TypedSetting_int____ctor_e8f1f0
              ((Settings_TypedSetting_int__o *)__this,0,
               (MethodInfo_E8F1F0 *)MethodInfo_Settings_TypedSetting_int_ctor_4096188);
    return (Settings_BaseSetting_o *)__this;
  case 3:
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
    if (Il2CppMethodInitialized_184345491 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor_4096500);
      Il2CppMethodInitialized_184345491 = '\x01';
    }
    break;
  case 4:
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    if (Il2CppMethodInitialized_1843454b9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
      Il2CppMethodInitialized_1843454b9 = '\x01';
    }
    (__this_01->fields).MaxLength = 0x7fffffff;
    Settings_TypedSetting_object____ctor_e8f190
              ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8)
               ,(MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
    return (Settings_BaseSetting_o *)__this_01;
  default:
    return (Settings_BaseSetting_o *)0x0;
  case 6:
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
    if (Il2CppMethodInitialized_18434548d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor_4095e08);
      Il2CppMethodInitialized_18434548d = '\x01';
    }
    pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor
              ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar2,0xff,0xff,0xff,0xff,
               (MethodInfo *)0x0);
    Settings_TypedSetting_object____ctor_e8f190
              ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pUVar2,
               (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_Color255_ctor_4095e08);
    return (Settings_BaseSetting_o *)pSVar3;
  case 7:
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ToggleColorSetting);
    if (Il2CppMethodInitialized_1843454bd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
      Il2CppMethodInitialized_1843454bd = '\x01';
    }
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
    if (Il2CppMethodInitialized_18434548a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
      Il2CppMethodInitialized_18434548a = '\x01';
    }
    Settings_TypedSetting_bool____ctor_e8f2c0
              ((Settings_TypedSetting_bool__o *)pSVar1,false,
               (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
    (__this_02->fields).Enabled = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).Enabled,pSVar1);
    pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor
              ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar2,0xff,0xff,0xff,0xff,
               (MethodInfo *)0x0);
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
    Settings_ColorSetting___ctor_1f12060(pSVar3,pUVar2,0,(MethodInfo *)0x0);
    (__this_02->fields).Color = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).Color,pSVar3);
    Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this_02,(MethodInfo *)0x0);
    return (Settings_BaseSetting_o *)__this_02;
  case 8:
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_Vector3Setting);
    if (Il2CppMethodInitialized_1843454c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_ctor_4096b20);
      Il2CppMethodInitialized_1843454c1 = '\x01';
    }
    local_18.x = 0.0;
    local_18.y = 0.0;
    local_18.z = 0.0;
    Settings_TypedSetting_Vector3____ctor_e8f240
              ((Settings_TypedSetting_Vector3__o *)__this_03,(UnityEngine_Vector3_o *)&local_18,
               (MethodInfo_E8F240 *)MethodInfo_Settings_TypedSetting_Vector3_ctor_4096b20);
    return (Settings_BaseSetting_o *)__this_03;
  }
  (__this_00->fields).MinValue = -3.4028235e+38;
  (__this_00->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor_e8f120
            ((Settings_TypedSetting_float__o *)__this_00,0.0,
             (MethodInfo_E8F120 *)MethodInfo_Settings_TypedSetting_float_ctor_4096500);
  return (Settings_BaseSetting_o *)__this_00;
}


// Settings.SettingsUtil$$.ctor
// il2cpp: void Settings_SettingsUtil___ctor (Settings_SettingsUtil_o* __this, const MethodInfo* method);
// 0x18054c890

void
Settings_SettingsUtil___ctor(Settings_SettingsUtil_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


