// Type: Settings.ExperienceIdentity
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/ExperienceIdentity.cs
// Prior real C# source: none
// --------------------------------

// Settings.ExperienceIdentity$$HasScoring
// il2cpp: bool Settings_ExperienceIdentity__HasScoring (Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x59d32f0

bool Settings_ExperienceIdentity__HasScoring(Settings_InGameSet_o *settings,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *category;
  System_String_o *subCategory;
  System_String_o *name;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07545c88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07545c88 = '\x01';
  }
  bVar4 = Settings_ExperienceIdentity__IsExperience(settings,method);
  if (bVar4) {
    if ((((settings == (Settings_InGameSet_o *)0x0) ||
         (pSVar1 = (settings->fields).ExperienceCategory, pSVar1 == (Settings_StringSetting_o *)0x0)) ||
        (pSVar2 = (settings->fields).ExperienceSubcategory, pSVar2 == (Settings_StringSetting_o *)0x0)) ||
       (pSVar3 = (settings->fields).ExperienceName, pSVar3 == (Settings_StringSetting_o *)0x0)) {
      ThrowNullReferenceException();
    }
    category = (pSVar1->fields)._value;
    subCategory = (pSVar2->fields)._value;
    name = (pSVar3->fields)._value;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    bVar4 = Map_BuiltinLevels__HasExperienceScoring(category,subCategory,name,(MethodInfo *)0x0);
    return bVar4;
  }
  return false;
}


// Settings.ExperienceIdentity$$IsExperience
// il2cpp: bool Settings_ExperienceIdentity__IsExperience (Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x59d33a0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d3435: mov rdi, qword ptr [rax + 0x20]
// asm:   0x59d3439: xor esi, esi
// asm:   0x59d343b: call 0x54014b0  ; System_String__IsNullOrWhiteSpace()
// asm:   0x59d3440: mov ebx, eax
// asm:   0x59d3442: xor bl, 1
// asm:   0x59d3445: jmp 0x59d33e8

bool Settings_ExperienceIdentity__IsExperience(Settings_InGameSet_o *settings,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545c89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07545c89 = '\x01';
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
// 0x59d3450
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d37b9: nop dword ptr [rax]

System_String_o * Settings_ExperienceIdentity__GetId(Settings_InGameSet_o *settings,MethodInfo *method)

{
  uint uVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Il2CppType *handle;
  bool bVar5;
  System_Type_o *enumType;
  Il2CppObject *value;
  System_String_array *value_00;
  System_String_o *pSVar6;
  ulong uVar7;
  Il2CppClass *klass;
  System_InvalidOperationException_o *__this;
  MethodInfo *lastManagedFrame;
  ulong uVar8;
  System_String_o **targetAddress;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_07545c8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_GameDifficulty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GameDifficulty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"%2D");
    Il2CppMethodInitialized_07545c8a = '\x01';
  }
  bVar5 = Settings_ExperienceIdentity__IsExperience(settings,method);
  if (!bVar5) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (((settings != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (settings->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).MapName, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    bVar5 = System_String__IsNullOrWhiteSpace((pSVar3->fields)._value,(MethodInfo *)0x0);
    if (bVar5) {
label_059d387a:
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
      __this = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(klass);
      pSVar6 = il2cpp_codegen_get_runtime_metadata(&"The experience has an invalid map, mode, or difficulty.");
      System_InvalidOperationException___ctor_54b9a80(__this,pSVar6,(MethodInfo *)0x0);
      lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceIdentity_GetId);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
    }
    pSVar2 = (settings->fields).General;
    if ((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      bVar5 = System_String__IsNullOrWhiteSpace((pSVar3->fields)._value,(MethodInfo *)0x0);
      handle = TypeRef_Settings_GameDifficulty;
      if (bVar5) goto label_059d387a;
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      pSVar2 = (settings->fields).General;
      if ((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
         (pSVar4 = (pSVar2->fields).Difficulty, pSVar4 != (Settings_IntSetting_o *)0x0)) {
        local_48.klass = (System_Enum_c *)CONCAT44(local_48.klass._4_4_,(pSVar4->fields)._value);
        value = il2cpp_vm_Object_Box(g_data_07556710,&local_48);
        if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556760);
        }
        bVar5 = System_Enum__IsDefined(enumType,value,(MethodInfo *)0x0);
        if (!bVar5) goto label_059d387a;
        value_00 = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
        pSVar3 = (settings->fields).ExperienceCategory;
        if ((pSVar3 != (Settings_StringSetting_o *)0x0) && (value_00 != (System_String_array *)0x0)) {
          if ((int)value_00->max_length == 0) {
label_059d3870:
            ThrowIndexOutOfRangeException();
          }
          targetAddress = value_00->m_Items;
          value_00->m_Items[0] = (pSVar3->fields)._value;
          Il2CppCodeGenWriteBarrier(targetAddress);
          pSVar3 = (settings->fields).ExperienceSubcategory;
          if (pSVar3 != (Settings_StringSetting_o *)0x0) {
            if ((value_00->max_length & 0xfffffffe) == 0) goto label_059d3870;
            value_00->m_Items[1] = (pSVar3->fields)._value;
            Il2CppCodeGenWriteBarrier(value_00->m_Items + 1);
            pSVar3 = (settings->fields).ExperienceName;
            if (pSVar3 != (Settings_StringSetting_o *)0x0) {
              if ((uint)value_00->max_length < 3) goto label_059d3870;
              value_00->m_Items[2] = (pSVar3->fields)._value;
              Il2CppCodeGenWriteBarrier(value_00->m_Items + 2);
              pSVar2 = (settings->fields).General;
              if ((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
                 (pSVar3 = (pSVar2->fields).MapName, pSVar3 != (Settings_StringSetting_o *)0x0)) {
                if ((value_00->max_length & 0xfffffffc) == 0) goto label_059d3870;
                value_00->m_Items[3] = (pSVar3->fields)._value;
                Il2CppCodeGenWriteBarrier(value_00->m_Items + 3);
                pSVar2 = (settings->fields).General;
                if ((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
                   (pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0)) {
                  if ((uint)value_00->max_length < 5) goto label_059d3870;
                  value_00->m_Items[4] = (pSVar3->fields)._value;
                  Il2CppCodeGenWriteBarrier(value_00->m_Items + 4);
                  pSVar3 = (settings->fields).ExperienceVariant;
                  if (pSVar3 != (Settings_StringSetting_o *)0x0) {
                    pSVar6 = (pSVar3->fields)._value;
                    if (pSVar6 == (System_String_o *)0x0) {
                      pSVar6 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
                    }
                    if ((uint)value_00->max_length < 6) goto label_059d3870;
                    value_00->m_Items[5] = pSVar6;
                    Il2CppCodeGenWriteBarrier(value_00->m_Items + 5);
                    pSVar2 = (settings->fields).General;
                    if ((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
                       (pSVar4 = (pSVar2->fields).Difficulty, pSVar4 != (Settings_IntSetting_o *)0x0)) {
                      local_38 = (pSVar4->fields)._value;
                      local_48.klass = (System_Enum_c *)TypeInfo_Settings_GameDifficulty;
                      local_48.monitor = (void *)0xffffffffffffffff;
                      pSVar6 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
                      if (pSVar6 != (System_String_o *)0x0) {
                        pSVar6 = System_String__ToLowerInvariant(pSVar6,(MethodInfo *)0x0);
                        if (6 < (uint)value_00->max_length) {
                          value_00->m_Items[6] = pSVar6;
                          Il2CppCodeGenWriteBarrier(value_00->m_Items + 6);
                          if (0 < (int)value_00->max_length) {
                            uVar7 = value_00->max_length & 0xffffffff;
                            uVar8 = 0;
                            do {
                              if (uVar7 <= uVar8) goto label_059d3870;
                              pSVar6 = *targetAddress;
                              if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
                              }
                              pSVar6 = System_Uri__EscapeDataString(pSVar6,(MethodInfo *)0x0);
                              if (pSVar6 == (System_String_o *)0x0) goto label_059d3875;
                              pSVar6 = System_String__Replace_5304550
                                                 (pSVar6,"-","%2D",
                                                  (MethodInfo *)0x0);
                              if ((uint)value_00->max_length <= uVar8) goto label_059d3870;
                              *targetAddress = pSVar6;
                              Il2CppCodeGenWriteBarrier(targetAddress);
                              uVar8 = uVar8 + 1;
                              uVar1 = (uint)value_00->max_length;
                              uVar7 = (ulong)uVar1;
                              targetAddress = targetAddress + 1;
                            } while ((long)uVar8 < (long)(int)uVar1);
                          }
                          pSVar6 = System_String__Join("-",value_00,(MethodInfo *)0x0);
                          return pSVar6;
                        }
                        goto label_059d3870;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_059d3875:
  ThrowNullReferenceException();
}


