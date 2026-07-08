// Type: Settings.SettingsUtil
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/SettingsUtil.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingsUtil.cs  [CHANGED since prior version]
// --------------------------------

// Settings.SettingsUtil$$SetSettingValue
// il2cpp: void Settings_SettingsUtil__SetSettingValue (Settings_BaseSetting_o* setting, int32_t type, Il2CppObject* value, const MethodInfo* method);
// 0x3f144f0

void Settings_SettingsUtil__SetSettingValue
               (Settings_BaseSetting_o *setting,int32_t type,Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_c *pSVar2;
  Il2CppMethodPointer vtable_dispatch;
  byte *pbVar3;
  int32_t *piVar4;
  float *pfVar5;
  UnityEngine_Vector3_Fields *pUVar6;
  undefined8 *puVar7;
  
  if (DAT_05703ca8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_ToggleColorSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_Vector3Setting);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"Attempting to set invalid setting value.");
    DAT_05703ca8 = '\x01';
  }
  switch(type) {
  case 1:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_BoolSetting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BoolSetting)) goto LAB_03f149b0;
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class == *(Il2CppClass **)(DAT_05711048 + 0x40)) {
          pbVar3 = (byte *)il2cpp_glue_022c7330(value);
          Settings_TypedSetting<bool>__set_Value
                    ((Settings_TypedSetting_bool__o *)setting,(uint)*pbVar3,MethodInfo_Void_set_Value);
          return;
        }
LAB_03f149bd:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(value);
      }
    }
    break;
  case 2:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto LAB_03f149b0;
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class == *(Il2CppClass **)(DAT_05711068 + 0x40)) {
          piVar4 = (int32_t *)il2cpp_glue_022c7330(value);
          Settings_TypedSetting<int>__set_Value
                    ((Settings_TypedSetting_int__o *)setting,*piVar4,MethodInfo_Void_set_Value);
          return;
        }
        goto LAB_03f149bd;
      }
    }
    break;
  case 3:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) goto LAB_03f149b0;
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class == *(Il2CppClass **)(DAT_05711098 + 0x40)) {
          pfVar5 = (float *)il2cpp_glue_022c7330(value);
          Settings_TypedSetting<float>__set_Value
                    ((Settings_TypedSetting_float__o *)setting,*pfVar5,MethodInfo_Void_set_Value);
          return;
        }
        goto LAB_03f149bd;
      }
    }
    break;
  case 4:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
      if ((bVar1 <= (setting->klass->_2).naturalAligment) &&
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
        if ((value != (Il2CppObject *)0x0) && (value->klass != DAT_057110b0)) goto LAB_03f149bd;
        puVar7 = &MethodInfo_Void_set_Value;
LAB_03f1499d:
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)setting,value,(MethodInfo_29B42A0 *)*puVar7);
        return;
      }
LAB_03f149b0:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(setting);
    }
    break;
  default:
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__Log("Attempting to set invalid setting value.",(MethodInfo *)0x0);
    return;
  case 6:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_ColorSetting->_2).naturalAligment;
      if ((bVar1 <= (setting->klass->_2).naturalAligment) &&
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ColorSetting)) {
        if (value != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_Color255->_2).naturalAligment;
          if (((value->klass->_2).naturalAligment < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Color255))
          goto LAB_03f149bd;
        }
        puVar7 = &MethodInfo_Void_set_Value;
        goto LAB_03f1499d;
      }
      goto LAB_03f149b0;
    }
    break;
  case 7:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_ToggleColorSetting->_2).naturalAligment;
      if ((bVar1 <= (setting->klass->_2).naturalAligment) &&
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ToggleColorSetting)) {
        pSVar2 = setting->klass;
        bVar1 = (TypeInfo_ToggleColorSetting->_2).naturalAligment;
        if ((bVar1 <= (pSVar2->_2).naturalAligment) &&
           ((pSVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ToggleColorSetting)) {
          if ((value == (Il2CppObject *)0x0) ||
             ((bVar1 <= (value->klass->_2).naturalAligment &&
              ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ToggleColorSetting)))) {
            vtable_dispatch = (pSVar2->vtable)._9_Copy.methodPtr;
            (*vtable_dispatch)
                      (setting,value,(pSVar2->vtable)._9_Copy.method,vtable_dispatch);
            return;
          }
          goto LAB_03f149bd;
        }
      }
      goto LAB_03f149b0;
    }
    break;
  case 8:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Vector3Setting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Vector3Setting)) goto LAB_03f149b0;
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class == *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) {
          pUVar6 = (UnityEngine_Vector3_Fields *)il2cpp_glue_022c7330(value);
          Settings_TypedSetting<Vector3>__set_Value
                    ((Settings_TypedSetting_Vector3__o *)setting,(UnityEngine_Vector3_o)*pUVar6,
                     MethodInfo_Void_set_Value);
          return;
        }
        goto LAB_03f149bd;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.SettingsUtil$$GetSettingType
// il2cpp: int32_t Settings_SettingsUtil__GetSettingType (Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x3f149d0

int32_t Settings_SettingsUtil__GetSettingType(Settings_BaseSetting_o *setting,MethodInfo *method)

{
  System_RuntimeTypeHandle_o SVar1;
  bool_conflict bVar2;
  System_Type_o *left;
  System_Type_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this;
  System_String_o *message;
  int32_t iVar5;
  
  if (DAT_05703ca9 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_BoolSetting);
    il2cpp_init_method_metadata(&TypeRef_ColorSetting);
    il2cpp_init_method_metadata(&TypeRef_FloatSetting);
    il2cpp_init_method_metadata(&TypeRef_IntSetting);
    il2cpp_init_method_metadata(&TypeRef_KeybindSetting);
    il2cpp_init_method_metadata(&TypeRef_NameSetting);
    il2cpp_init_method_metadata(&TypeRef_StringSetting);
    il2cpp_init_method_metadata(&TypeRef_ToggleColorSetting);
    il2cpp_init_method_metadata(&TypeRef_Vector3Setting);
    DAT_05703ca9 = '\x01';
  }
  if (setting == (Settings_BaseSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  left = System_Object__GetType((Il2CppObject *)setting,(MethodInfo *)0x0);
  SVar1.fields.value = TypeRef_IntSetting.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
  SVar1.fields.value = TypeRef_FloatSetting.fields.value;
  iVar5 = 2;
  if ((char)bVar2 == '\0') {
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
    SVar1.fields.value = TypeRef_StringSetting.fields.value;
    iVar5 = 3;
    if ((char)bVar2 == '\0') {
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
      bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
      SVar1.fields.value = TypeRef_NameSetting.fields.value;
      iVar5 = 4;
      if ((char)bVar2 == '\0') {
        if (*(int *)(DAT_05711100 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
        bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
        SVar1.fields.value = TypeRef_BoolSetting.fields.value;
        if ((char)bVar2 == '\0') {
          if (*(int *)(DAT_05711100 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
          bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
          SVar1.fields.value = TypeRef_KeybindSetting.fields.value;
          iVar5 = 1;
          if ((char)bVar2 == '\0') {
            if (*(int *)(DAT_05711100 + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
            bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
            SVar1.fields.value = TypeRef_ColorSetting.fields.value;
            iVar5 = 5;
            if ((char)bVar2 == '\0') {
              if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
              bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
              SVar1.fields.value = TypeRef_ToggleColorSetting.fields.value;
              iVar5 = 6;
              if ((char)bVar2 == '\0') {
                if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
                bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
                SVar1.fields.value = TypeRef_Vector3Setting.fields.value;
                iVar5 = 7;
                if ((char)bVar2 == '\0') {
                  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
                  bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
                  iVar5 = 8;
                  if ((char)bVar2 == '\0') {
                    uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
                    __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
                    message = (System_String_o *)il2cpp_init_method_metadata(&"Invalid setting type found.");
                    System_ArgumentException___ctor(__this,message,(MethodInfo *)0x0);
                    uVar4 = il2cpp_init_method_metadata(&MethodInfo_SettingType_GetSettingType);
                    /* WARNING: Subroutine does not return */
                    il2cpp_glue_02274a00(__this,uVar4);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar5;
}


// Settings.SettingsUtil$$DeserializeValueFromJson
// il2cpp: Il2CppObject* Settings_SettingsUtil__DeserializeValueFromJson (int32_t type, System_String_o* json, const MethodInfo* method);
// 0x3f14d20

Il2CppObject *
Settings_SettingsUtil__DeserializeValueFromJson
          (int32_t type,System_String_o *json,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = (Il2CppObject *)Settings_SettingsUtil__CreateBaseSetting(type,(MethodInfo *)json);
  if (pIVar1 != (Il2CppObject *)0x0) {
    (*(((Settings_BaseSetting_VTable *)pIVar1->klass->vtable)->_8_DeserializeFromJsonString).
      methodPtr)(pIVar1,json,
                 (((Settings_BaseSetting_VTable *)pIVar1->klass->vtable)->
                 _8_DeserializeFromJsonString).method);
  }
  return pIVar1;
}


// Settings.SettingsUtil$$CreateBaseSetting
// il2cpp: Settings_BaseSetting_o* Settings_SettingsUtil__CreateBaseSetting (int32_t type, const MethodInfo* method);
// 0x3f14d60

Settings_BaseSetting_o * Settings_SettingsUtil__CreateBaseSetting(int32_t type,MethodInfo *method)

{
  Settings_TypedSetting_Vector3__o *__this;
  Utility_Color255_o *__this_00;
  MethodInfo_29B42E0 *method_00;
  
  if (DAT_05703caa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_ToggleColorSetting);
    il2cpp_init_method_metadata(&TypeInfo_Vector3Setting);
    DAT_05703caa = '\x01';
  }
  __this = (Settings_TypedSetting_Vector3__o *)0x0;
  switch(type) {
  case 1:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
    if (DAT_05703c6d == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Boolean);
      DAT_05703c6d = '\x01';
    }
    Settings_TypedSetting<bool>___ctor((Settings_TypedSetting_bool__o *)__this,0,MethodInfo_TypedSetting_1_System_Boolean);
    break;
  case 2:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
    if (DAT_05703c7f == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Int32);
      DAT_05703c7f = '\x01';
    }
    *(Settings_ColorSetting_o **)&(__this->fields).DefaultValue.fields.z =
         (Settings_ColorSetting_o *)0x7fffffff80000000;
    Settings_TypedSetting<int>___ctor((Settings_TypedSetting_int__o *)__this,0,MethodInfo_TypedSetting_1_System_Int32);
    break;
  case 3:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
    if (DAT_05703c75 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Single);
      DAT_05703c75 = '\x01';
    }
    *(Settings_ColorSetting_o **)&(__this->fields).DefaultValue.fields.z =
         (Settings_ColorSetting_o *)0x7f7fffffff7fffff;
    Settings_TypedSetting<float>___ctor((Settings_TypedSetting_float__o *)__this,0.0,MethodInfo_TypedSetting_1_System_Single);
    break;
  case 4:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
    if (DAT_05703c98 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
      DAT_05703c98 = '\x01';
    }
    (__this->fields)._value.fields.y = NAN;
    __this_00 = (Utility_Color255_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    method_00 = MethodInfo_TypedSetting_1_System_String;
    goto LAB_03f15021;
  case 6:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
    if (DAT_05703c71 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Color255);
      il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
      DAT_05703c71 = '\x01';
    }
    __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
    Utility_Color255___ctor(__this_00,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
    method_00 = MethodInfo_TypedSetting_1_Utility_Color255;
LAB_03f15021:
    Settings_TypedSetting<object>___ctor
              ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,method_00);
    break;
  case 7:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_glue(TypeInfo_ToggleColorSetting);
    Settings_ToggleColorSetting___ctor((Settings_ToggleColorSetting_o *)__this,method);
    break;
  case 8:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_glue(TypeInfo_Vector3Setting);
    if (DAT_05703ca0 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_UnityEngine_Vector3);
      DAT_05703ca0 = '\x01';
    }
    Settings_TypedSetting<Vector3>___ctor(__this,(UnityEngine_Vector3_o)ZEXT412(0),MethodInfo_TypedSetting_1_UnityEngine_Vector3);
  }
  return (Settings_BaseSetting_o *)__this;
}


// Settings.SettingsUtil$$.ctor
// il2cpp: void Settings_SettingsUtil___ctor (Settings_SettingsUtil_o* __this, const MethodInfo* method);
// 0x3f15040

void Settings_SettingsUtil___ctor(Settings_SettingsUtil_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


