// Type: Settings.ExperienceIdentity
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/ExperienceIdentity.cs
// Prior real C# source: none
// --------------------------------

// Settings.ExperienceIdentity$$HasScoring
// il2cpp: bool Settings_ExperienceIdentity__HasScoring (Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x181dbb660

bool Settings_ExperienceIdentity__HasScoring(Settings_InGameSet_o *settings,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *category;
  System_String_o *name;
  System_String_o *subCategory;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184344a17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344a17 = '\x01';
  }
  bVar4 = Settings_ExperienceIdentity__IsExperience(settings,(MethodInfo *)0x0);
  if (!bVar4) {
    return false;
  }
  if ((((settings != (Settings_InGameSet_o *)0x0) &&
       (pSVar1 = (settings->fields).ExperienceCategory, pSVar1 != (Settings_StringSetting_o *)0x0)) &&
      (pSVar2 = (settings->fields).ExperienceSubcategory, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar3 = (settings->fields).ExperienceName, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    category = (pSVar1->fields)._value;
    name = (pSVar3->fields)._value;
    subCategory = (pSVar2->fields)._value;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    bVar4 = Map_BuiltinLevels__HasExperienceScoring(category,subCategory,name,(MethodInfo *)0x0);
    return bVar4;
  }
  ThrowNullReferenceException();
}


// Settings.ExperienceIdentity$$IsExperience
// il2cpp: bool Settings_ExperienceIdentity__IsExperience (Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x181dbb720

bool Settings_ExperienceIdentity__IsExperience(Settings_InGameSet_o *settings,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184344a18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344a18 = '\x01';
  }
  if (settings == (Settings_InGameSet_o *)0x0) {
    return false;
  }
  pSVar1 = (settings->fields).Sandbox;
  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
    if ((pSVar1->fields)._value != false) {
      return false;
    }
    pSVar2 = (settings->fields).ExperienceCategory;
    if (pSVar2 != (Settings_StringSetting_o *)0x0) {
      bVar3 = System_String__IsNullOrWhiteSpace((pSVar2->fields)._value,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
      pSVar2 = (settings->fields).ExperienceSubcategory;
      if (pSVar2 != (Settings_StringSetting_o *)0x0) {
        bVar3 = System_String__IsNullOrWhiteSpace((pSVar2->fields)._value,(MethodInfo *)0x0);
        if (bVar3) {
          return false;
        }
        pSVar2 = (settings->fields).ExperienceName;
        if (pSVar2 != (Settings_StringSetting_o *)0x0) {
          bVar3 = System_String__IsNullOrWhiteSpace((pSVar2->fields)._value,(MethodInfo *)0x0);
          return !bVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.ExperienceIdentity$$GetId
// il2cpp: System_String_o* Settings_ExperienceIdentity__GetId (Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x181dbb200

System_String_o * Settings_ExperienceIdentity__GetId(Settings_InGameSet_o *settings,MethodInfo *method)

{
  Settings_InGameGeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Il2CppType *handle;
  bool bVar4;
  System_Type_o *enumType;
  Il2CppObject *value;
  System_String_array *value_00;
  System_String_o **ppSVar5;
  System_String_o *pSVar6;
  Il2CppClass *klass;
  System_InvalidOperationException_o *__this;
  MethodInfo *lastManagedFrame;
  uint uVar7;
  int32_t local_res8 [2];
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_184344a19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_GameDifficulty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GameDifficulty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"%2D");
    Il2CppMethodInitialized_184344a19 = '\x01';
  }
  bVar4 = Settings_ExperienceIdentity__IsExperience(settings,(MethodInfo *)0x0);
  if (!bVar4) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (((settings != (Settings_InGameSet_o *)0x0) &&
      (pSVar1 = (settings->fields).General, pSVar1 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar2 = (pSVar1->fields).MapName, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    bVar4 = System_String__IsNullOrWhiteSpace((pSVar2->fields)._value,(MethodInfo *)0x0);
    if (!bVar4) {
      pSVar1 = (settings->fields).General;
      if ((pSVar1 == (Settings_InGameGeneralSettings_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).GameMode, pSVar2 == (Settings_StringSetting_o *)0x0)) goto label_181dbb656;
      bVar4 = System_String__IsNullOrWhiteSpace((pSVar2->fields)._value,(MethodInfo *)0x0);
      handle = TypeRef_Settings_GameDifficulty;
      if (!bVar4) {
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        pSVar1 = (settings->fields).General;
        if ((pSVar1 == (Settings_InGameGeneralSettings_o *)0x0) ||
           (pSVar3 = (pSVar1->fields).Difficulty, pSVar3 == (Settings_IntSetting_o *)0x0)) {
          ThrowNullReferenceException();
        }
        local_res8[0] = (pSVar3->fields)._value;
        value = il2cpp_value_box(g_data_184354e08,local_res8);
        if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e58);
        }
        bVar4 = System_Enum__IsDefined(enumType,value,(MethodInfo *)0x0);
        if (bVar4) {
          value_00 = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
          pSVar2 = (settings->fields).ExperienceCategory;
          if ((pSVar2 != (Settings_StringSetting_o *)0x0) && (value_00 != (System_String_array *)0x0)) {
            if ((int)value_00->max_length == 0) {
label_181dbb601:
              ThrowIndexOutOfRangeException();
            }
            pSVar6 = (pSVar2->fields)._value;
            value_00->m_Items[0] = pSVar6;
            Il2CppCodeGenWriteBarrier(value_00->m_Items,pSVar6);
            pSVar2 = (settings->fields).ExperienceSubcategory;
            if (pSVar2 != (Settings_StringSetting_o *)0x0) {
              if ((uint)value_00->max_length < 2) goto label_181dbb601;
              pSVar6 = (pSVar2->fields)._value;
              value_00->m_Items[1] = pSVar6;
              Il2CppCodeGenWriteBarrier(value_00->m_Items + 1,pSVar6);
              pSVar2 = (settings->fields).ExperienceName;
              if (pSVar2 != (Settings_StringSetting_o *)0x0) {
                if ((uint)value_00->max_length < 3) goto label_181dbb601;
                pSVar6 = (pSVar2->fields)._value;
                value_00->m_Items[2] = pSVar6;
                Il2CppCodeGenWriteBarrier(value_00->m_Items + 2,pSVar6);
                pSVar1 = (settings->fields).General;
                if ((pSVar1 != (Settings_InGameGeneralSettings_o *)0x0) &&
                   (pSVar2 = (pSVar1->fields).MapName, pSVar2 != (Settings_StringSetting_o *)0x0)) {
                  if ((uint)value_00->max_length < 4) goto label_181dbb601;
                  pSVar6 = (pSVar2->fields)._value;
                  value_00->m_Items[3] = pSVar6;
                  Il2CppCodeGenWriteBarrier(value_00->m_Items + 3,pSVar6);
                  pSVar1 = (settings->fields).General;
                  if ((pSVar1 != (Settings_InGameGeneralSettings_o *)0x0) &&
                     (pSVar2 = (pSVar1->fields).GameMode, pSVar2 != (Settings_StringSetting_o *)0x0)) {
                    if ((uint)value_00->max_length < 5) goto label_181dbb601;
                    pSVar6 = (pSVar2->fields)._value;
                    value_00->m_Items[4] = pSVar6;
                    Il2CppCodeGenWriteBarrier(value_00->m_Items + 4,pSVar6);
                    pSVar2 = (settings->fields).ExperienceVariant;
                    if (pSVar2 != (Settings_StringSetting_o *)0x0) {
                      ppSVar5 = &(pSVar2->fields)._value;
                      if (*ppSVar5 == (System_String_o *)0x0) {
                        ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
                      }
                      pSVar6 = *ppSVar5;
                      if (5 < (uint)value_00->max_length) {
                        value_00->m_Items[5] = pSVar6;
                        Il2CppCodeGenWriteBarrier(value_00->m_Items + 5,pSVar6);
                        pSVar1 = (settings->fields).General;
                        if ((pSVar1 != (Settings_InGameGeneralSettings_o *)0x0) &&
                           (pSVar3 = (pSVar1->fields).Difficulty, pSVar3 != (Settings_IntSetting_o *)0x0)) {
                          local_18 = (pSVar3->fields)._value;
                          local_28.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
                          local_28.monitor = &g_data_ffffffffffffffff;
                          pSVar6 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
                          if (pSVar6 != (System_String_o *)0x0) {
                            pSVar6 = System_String__ToLowerInvariant(pSVar6,(MethodInfo *)0x0);
                            if (6 < (uint)value_00->max_length) {
                              value_00->m_Items[6] = pSVar6;
                              Il2CppCodeGenWriteBarrier(value_00->m_Items + 6,pSVar6);
                              uVar7 = 0;
                              while( true ) {
                                if ((int)value_00->max_length <= (int)uVar7) {
                                  pSVar6 = System_String__Join("-",value_00,
                                                               (MethodInfo *)0x0);
                                  return pSVar6;
                                }
                                if ((uint)value_00->max_length <= uVar7) break;
                                pSVar6 = value_00->m_Items[(int)uVar7];
                                if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
                                }
                                pSVar6 = System_Uri__EscapeDataString(pSVar6,(MethodInfo *)0x0);
                                if (pSVar6 == (System_String_o *)0x0) goto label_181dbb656;
                                pSVar6 = System_String__Replace_1970e80
                                                   (pSVar6,"-","%2D",
                                                    (MethodInfo *)0x0);
                                if ((uint)value_00->max_length <= uVar7) break;
                                value_00->m_Items[(int)uVar7] = pSVar6;
                                Il2CppCodeGenWriteBarrier(value_00->m_Items + (int)uVar7,pSVar6);
                                uVar7 = uVar7 + 1;
                              }
                              goto label_181dbb601;
                            }
                            goto label_181dbb5fb;
                          }
                        }
                        ThrowNullReferenceException();
                      }
label_181dbb5fb:
                      ThrowIndexOutOfRangeException();
                    }
                  }
                }
              }
            }
          }
          goto label_181dbb656;
        }
      }
    }
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
    __this = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(klass);
    pSVar6 = il2cpp_codegen_get_runtime_metadata(&"The experience has an invalid map, mode, or difficulty.");
    System_InvalidOperationException___ctor_1b2aec0(__this,pSVar6,(MethodInfo *)0x0);
    lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceIdentity_GetId);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
label_181dbb656:
  ThrowNullReferenceException();
}


