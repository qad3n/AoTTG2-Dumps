// Type: Settings.ErenShifterInputSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ErenShifterInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/ErenShifterInputSettings.cs
// --------------------------------

// Settings.ErenShifterInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_ErenShifterInputSettings__get_FileName (Settings_ErenShifterInputSettings_o* __this, const MethodInfo* method);
// 0x181f12440

System_String_o *
Settings_ErenShifterInputSettings__get_FileName
          (Settings_ErenShifterInputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434545c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifterInput.json");
    Il2CppMethodInitialized_18434545c = '\x01';
  }
  return "ErenShifterInput.json";
}


// Settings.ErenShifterInputSettings$$.ctor
// il2cpp: void Settings_ErenShifterInputSettings___ctor (Settings_ErenShifterInputSettings_o* __this, const MethodInfo* method);
// 0x181f12190

void Settings_ErenShifterInputSettings___ctor(Settings_ErenShifterInputSettings_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434545d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"LeftAlt");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Space");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse0");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl");
    Il2CppMethodInitialized_18434545d = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  pSVar1 = "LeftControl";
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = "LeftControl";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
      pSVar1 = "None";
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = "None";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
        Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
        (__this->fields).Kick = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Kick,pSVar3);
        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        pSVar1 = "Space";
        if (pSVar2 == (System_String_array *)0x0) goto label_181f1242b;
        if ((int)pSVar2->max_length != 0) {
          pSVar2->m_Items[0] = "Space";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
          pSVar1 = "None";
          if (1 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[1] = "None";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
            pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
            Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
            (__this->fields).Jump = pSVar3;
            Il2CppCodeGenWriteBarrier(&(__this->fields).Jump,pSVar3);
            pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
            pSVar1 = "LeftAlt";
            if (pSVar2 == (System_String_array *)0x0) goto label_181f1242b;
            if ((int)pSVar2->max_length != 0) {
              pSVar2->m_Items[0] = "LeftAlt";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
              pSVar1 = "None";
              if (1 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[1] = "None";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                (__this->fields).Walk = pSVar3;
                Il2CppCodeGenWriteBarrier(&(__this->fields).Walk,pSVar3);
                pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                pSVar1 = "Mouse0";
                if (pSVar2 == (System_String_array *)0x0) goto label_181f1242b;
                if ((int)pSVar2->max_length != 0) {
                  pSVar2->m_Items[0] = "Mouse0";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                  pSVar1 = "None";
                  if (1 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[1] = "None";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                    Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                    (__this->fields).AttackCombo = pSVar3;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).AttackCombo,pSVar3);
                    Settings_BaseSettingsContainer___ctor
                              ((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181f1242b:
  ThrowNullReferenceException();
}


