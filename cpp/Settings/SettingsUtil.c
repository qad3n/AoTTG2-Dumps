// Type: Settings.SettingsUtil
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/SettingsUtil.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingsUtil.cs
// --------------------------------

// Settings.SettingsUtil$$SetSettingValue
// il2cpp: void Settings_SettingsUtil__SetSettingValue (Settings_BaseSetting_o* setting, int32_t type, Il2CppObject* value, const MethodInfo* method);
// 0x41fcc70

void Settings_SettingsUtil__SetSettingValue
               (Settings_BaseSetting_o *setting,int32_t type,Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_c *pSVar2;
  Il2CppMethodPointer vtableDispatch;
  System_RuntimeTypeHandle_o SVar3;
  bool_conflict bVar4;
  byte *pbVar5;
  int32_t *piVar6;
  float *pfVar7;
  UnityEngine_Vector3_Fields *pUVar8;
  undefined8 *puVar9;
  System_Type_o *left;
  System_Type_o *pSVar10;
  undefined8 uVar11;
  System_ArgumentException_o *__this;
  System_String_o *message;
  MethodInfo *method_00;
  Settings_BaseSetting_o *pSVar12;
  
  if (g_data_057ad889 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToggleColorSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3Setting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    il2cpp_runtime_helper_023445d0(&"Attempting to set invalid setting value.");
    g_data_057ad889 = '\x01';
  }
  switch(type) {
  case 1:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_BoolSetting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BoolSetting)) goto label_041fd130;
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
          pbVar5 = (byte *)il2cpp_runtime_helper_02305440(value);
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)setting,(uint)*pbVar5,MethodInfo_Void_set_Value);
          return;
        }
        goto label_041fd13d;
      }
    }
    break;
  case 2:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto label_041fd130;
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) {
          piVar6 = (int32_t *)il2cpp_runtime_helper_02305440(value);
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)setting,*piVar6,MethodInfo_Void_set_Value);
          return;
        }
        goto label_041fd13d;
      }
    }
    break;
  case 3:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) goto label_041fd130;
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9be8 + 0x40)) {
          pfVar7 = (float *)il2cpp_runtime_helper_02305440(value);
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)setting,*pfVar7,MethodInfo_Void_set_Value);
          return;
        }
        goto label_041fd13d;
      }
    }
    break;
  case 4:
    if (setting == (Settings_BaseSetting_o *)0x0) break;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if (((setting->klass->_2).naturalAligment < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto label_041fd130;
    if ((value == (Il2CppObject *)0x0) || (value->klass == g_data_057b9c00)) {
      puVar9 = &MethodInfo_Void_set_Value;
      goto label_041fd11d;
    }
    goto label_041fd13d;
  default:
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
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
             ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Color255)) goto label_041fd13d;
        }
        puVar9 = &MethodInfo_Void_set_Value;
label_041fd11d:
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)setting,value,(MethodInfo_2A24090 *)*puVar9);
        return;
      }
label_041fd130:
      il2cpp_runtime_helper_022b2fd0(setting);
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
            vtableDispatch = (pSVar2->vtable)._9_Copy.methodPtr;
            (*vtableDispatch)(setting,value,(pSVar2->vtable)._9_Copy.method,vtableDispatch);
            return;
          }
          goto label_041fd13d;
        }
      }
      goto label_041fd130;
    }
    break;
  case 8:
    if (setting != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Vector3Setting->_2).naturalAligment;
      if (((setting->klass->_2).naturalAligment < bVar1) ||
         ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Vector3Setting)) goto label_041fd130;
      if (value != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class == *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) {
          pUVar8 = (UnityEngine_Vector3_Fields *)il2cpp_runtime_helper_02305440(value);
          Settings_TypedSetting_Vector3___set_Value
                    ((Settings_TypedSetting_Vector3__o *)setting,(UnityEngine_Vector3_o)*pUVar8,MethodInfo_Void_set_Value);
          return;
        }
        goto label_041fd13d;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041fd13d:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad88a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_ColorSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_NameSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_ToggleColorSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_Vector3Setting);
    g_data_057ad88a = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    left = System_Object__GetType(value,(MethodInfo *)0x0);
    SVar3 = TypeRef_IntSetting;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
    bVar4 = System_Type__op_Equality(left,pSVar10,(MethodInfo *)0x0);
    SVar3 = TypeRef_FloatSetting;
    if ((char)bVar4 == '\0') {
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
      bVar4 = System_Type__op_Equality(left,pSVar10,(MethodInfo *)0x0);
      SVar3 = TypeRef_StringSetting;
      if ((char)bVar4 == '\0') {
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
        bVar4 = System_Type__op_Equality(left,pSVar10,(MethodInfo *)0x0);
        SVar3 = TypeRef_NameSetting;
        if ((char)bVar4 == '\0') {
          if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
          bVar4 = System_Type__op_Equality(left,pSVar10,(MethodInfo *)0x0);
          SVar3 = TypeRef_BoolSetting;
          if ((char)bVar4 == '\0') {
            if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
            bVar4 = System_Type__op_Equality(left,pSVar10,(MethodInfo *)0x0);
            SVar3 = TypeRef_KeybindSetting;
            if ((char)bVar4 == '\0') {
              if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar10 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
              bVar4 = System_Type__op_Equality(left,pSVar10,(MethodInfo *)0x0);
              SVar3 = TypeRef_ColorSetting;
              if ((char)bVar4 == '\0') {
                if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar10 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
                bVar4 = System_Type__op_Equality(left,pSVar10,(MethodInfo *)0x0);
                SVar3 = TypeRef_ToggleColorSetting;
                if ((char)bVar4 == '\0') {
                  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar10 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
                  bVar4 = System_Type__op_Equality(left,pSVar10,(MethodInfo *)0x0);
                  SVar3 = TypeRef_Vector3Setting;
                  if ((char)bVar4 == '\0') {
                    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar10 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
                    bVar4 = System_Type__op_Equality(left,pSVar10,(MethodInfo *)0x0);
                    if ((char)bVar4 == '\0') goto label_041fd44f;
                  }
                }
              }
            }
          }
        }
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
label_041fd44f:
  uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar11);
  message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid setting type found.");
  System_ArgumentException___ctor_3c12490(__this,message,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_SettingType_GetSettingType);
  il2cpp_runtime_helper_022b2b10();
  pSVar12 = Settings_SettingsUtil__CreateBaseSetting((int32_t)__this,method_00);
  if (pSVar12 != (Settings_BaseSetting_o *)0x0) {
    (*(pSVar12->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
              (pSVar12,method_00,(pSVar12->klass->vtable)._8_DeserializeFromJsonString.method);
  }
  return;
}


// Settings.SettingsUtil$$GetSettingType
// il2cpp: int32_t Settings_SettingsUtil__GetSettingType (Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x41fd150

int32_t Settings_SettingsUtil__GetSettingType(Settings_BaseSetting_o *setting,MethodInfo *method)

{
  System_RuntimeTypeHandle_o SVar1;
  bool_conflict bVar2;
  System_Type_o *left;
  System_Type_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this;
  System_String_o *message;
  MethodInfo *method_00;
  Settings_BaseSetting_o *pSVar5;
  int32_t iVar6;
  
  if (g_data_057ad88a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_ColorSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_NameSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_ToggleColorSetting);
    il2cpp_runtime_helper_023445d0(&TypeRef_Vector3Setting);
    g_data_057ad88a = '\x01';
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    left = System_Object__GetType((Il2CppObject *)setting,(MethodInfo *)0x0);
    SVar1 = TypeRef_IntSetting;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
    bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
    SVar1 = TypeRef_FloatSetting;
    iVar6 = 2;
    if ((char)bVar2 == '\0') {
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
      bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
      SVar1 = TypeRef_StringSetting;
      iVar6 = 3;
      if ((char)bVar2 == '\0') {
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
        bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
        SVar1 = TypeRef_NameSetting;
        iVar6 = 4;
        if ((char)bVar2 == '\0') {
          if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
          bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
          SVar1 = TypeRef_BoolSetting;
          if ((char)bVar2 == '\0') {
            if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
            bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
            SVar1 = TypeRef_KeybindSetting;
            iVar6 = 1;
            if ((char)bVar2 == '\0') {
              if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
              bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
              SVar1 = TypeRef_ColorSetting;
              iVar6 = 5;
              if ((char)bVar2 == '\0') {
                if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
                bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
                SVar1 = TypeRef_ToggleColorSetting;
                iVar6 = 6;
                if ((char)bVar2 == '\0') {
                  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
                  bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
                  SVar1 = TypeRef_Vector3Setting;
                  iVar6 = 7;
                  if ((char)bVar2 == '\0') {
                    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
                    bVar2 = System_Type__op_Equality(left,pSVar3,(MethodInfo *)0x0);
                    iVar6 = 8;
                    if ((char)bVar2 == '\0') goto label_041fd44f;
                  }
                }
              }
            }
          }
        }
      }
    }
    return iVar6;
  }
  il2cpp_runtime_helper_022b2c90();
label_041fd44f:
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid setting type found.");
  System_ArgumentException___ctor_3c12490(__this,message,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_SettingType_GetSettingType);
  il2cpp_runtime_helper_022b2b10();
  pSVar5 = Settings_SettingsUtil__CreateBaseSetting((int32_t)__this,method_00);
  if (pSVar5 != (Settings_BaseSetting_o *)0x0) {
    (*(pSVar5->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
              (pSVar5,method_00,(pSVar5->klass->vtable)._8_DeserializeFromJsonString.method);
  }
  return (int32_t)pSVar5;
}


// Settings.SettingsUtil$$DeserializeValueFromJson
// il2cpp: Il2CppObject* Settings_SettingsUtil__DeserializeValueFromJson (int32_t type, System_String_o* json, const MethodInfo* method);
// 0x41fd4a0

Il2CppObject *
Settings_SettingsUtil__DeserializeValueFromJson(int32_t type,System_String_o *json,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = (Il2CppObject *)Settings_SettingsUtil__CreateBaseSetting(type,(MethodInfo *)json);
  if (pIVar1 != (Il2CppObject *)0x0) {
    (*(((Settings_BaseSetting_VTable *)pIVar1->klass->vtable)->_8_DeserializeFromJsonString).methodPtr)
              (pIVar1,json,
               (((Settings_BaseSetting_VTable *)pIVar1->klass->vtable)->_8_DeserializeFromJsonString).method);
  }
  return pIVar1;
}


// Settings.SettingsUtil$$CreateBaseSetting
// il2cpp: Settings_BaseSetting_o* Settings_SettingsUtil__CreateBaseSetting (int32_t type, const MethodInfo* method);
// 0x41fd4e0

Settings_BaseSetting_o * Settings_SettingsUtil__CreateBaseSetting(int32_t type,MethodInfo *method)

{
  Settings_TypedSetting_Vector3__o *__this;
  Utility_Color255_o *__this_00;
  MethodInfo_2A240D0 *method_00;
  
  if (g_data_057ad88b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToggleColorSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3Setting);
    g_data_057ad88b = '\x01';
  }
  __this = (Settings_TypedSetting_Vector3__o *)0x0;
  switch(type) {
  case 1:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    if (g_data_057ad895 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
      g_data_057ad895 = '\x01';
    }
    Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)__this,0,MethodInfo_TypedSetting_1_System_Boolean);
    break;
  case 2:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
    if (g_data_057ad8a7 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
      g_data_057ad8a7 = '\x01';
    }
    *(Settings_ColorSetting_o **)&(__this->fields).DefaultValue.fields.z =
         (Settings_ColorSetting_o *)0x7fffffff80000000;
    Settings_TypedSetting_int____ctor_2a23fd0((Settings_TypedSetting_int__o *)__this,0,MethodInfo_TypedSetting_1_System_Int32);
    break;
  case 3:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
    if (g_data_057ad89d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
      g_data_057ad89d = '\x01';
    }
    *(Settings_ColorSetting_o **)&(__this->fields).DefaultValue.fields.z =
         (Settings_ColorSetting_o *)0x7f7fffffff7fffff;
    Settings_TypedSetting_float____ctor_2a241e0((Settings_TypedSetting_float__o *)__this,0.0,MethodInfo_TypedSetting_1_System_Single);
    break;
  case 4:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    if (g_data_057ad8c0 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
      g_data_057ad8c0 = '\x01';
    }
    (__this->fields)._value.fields.y = NAN;
    __this_00 = (Utility_Color255_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    method_00 = MethodInfo_TypedSetting_1_System_String;
    goto label_041fd7a1;
  case 6:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
    if (g_data_057ad899 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_Utility_Color255);
      g_data_057ad899 = '\x01';
    }
    __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(__this_00,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
    method_00 = MethodInfo_TypedSetting_1_Utility_Color255;
label_041fd7a1:
    Settings_TypedSetting_object____ctor_2a240d0
              ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,method_00);
    break;
  case 7:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ToggleColorSetting);
    Settings_ToggleColorSetting___ctor((Settings_ToggleColorSetting_o *)__this,method);
    break;
  case 8:
    __this = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Vector3Setting);
    if (g_data_057ad8c8 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_UnityEngine_Vector3);
      g_data_057ad8c8 = '\x01';
    }
    Settings_TypedSetting_Vector3____ctor_2a242e0(__this,(UnityEngine_Vector3_o)ZEXT412(0),_DAT_05597ab8);
  }
  return (Settings_BaseSetting_o *)__this;
}


// Settings.SettingsUtil$$.ctor
// il2cpp: void Settings_SettingsUtil___ctor (Settings_SettingsUtil_o* __this, const MethodInfo* method);
// 0x41fdb40

void Settings_SettingsUtil___ctor(Settings_SettingsUtil_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


