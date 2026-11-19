// Type: Settings.ErenShifterInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/ErenShifterInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/ErenShifterInputSettings.cs
// --------------------------------

// Settings.ErenShifterInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_ErenShifterInputSettings__get_FileName (Settings_ErenShifterInputSettings_o* __this, const MethodInfo* method);
// 0x5b4b8f0

System_String_o *
Settings_ErenShifterInputSettings__get_FileName
          (Settings_ErenShifterInputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifterInput.json");
    Il2CppMethodInitialized_075472a6 = '\x01';
  }
  return "ErenShifterInput.json";
}


// Settings.ErenShifterInputSettings$$.ctor
// il2cpp: void Settings_ErenShifterInputSettings___ctor (Settings_ErenShifterInputSettings_o* __this, const MethodInfo* method);
// 0x5b4b920

void Settings_ErenShifterInputSettings___ctor(Settings_ErenShifterInputSettings_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  
  if (Il2CppMethodInitialized_075472a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"LeftAlt");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Space");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse0");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl");
    Il2CppMethodInitialized_075472a7 = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (pSVar1 == (System_String_array *)0x0) {
label_05b4bbc8:
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "LeftControl";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "None";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_00);
      (__this->fields).Kick = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Kick);
      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
      if (pSVar1 == (System_String_array *)0x0) goto label_05b4bbc8;
      if ((int)pSVar1->max_length != 0) {
        pSVar1->m_Items[0] = "Space";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
        if ((pSVar1->max_length & 0xfffffffe) != 0) {
          pSVar1->m_Items[1] = "None";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
          pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
          Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_01);
          (__this->fields).Jump = pSVar2;
          Il2CppCodeGenWriteBarrier(&(__this->fields).Jump);
          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
          if (pSVar1 == (System_String_array *)0x0) goto label_05b4bbc8;
          if ((int)pSVar1->max_length != 0) {
            pSVar1->m_Items[0] = "LeftAlt";
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
            if ((pSVar1->max_length & 0xfffffffe) != 0) {
              pSVar1->m_Items[1] = "None";
              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
              pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_02);
              (__this->fields).Walk = pSVar2;
              Il2CppCodeGenWriteBarrier(&(__this->fields).Walk);
              pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
              if (pSVar1 == (System_String_array *)0x0) goto label_05b4bbc8;
              if ((int)pSVar1->max_length != 0) {
                pSVar1->m_Items[0] = "Mouse0";
                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                  pSVar1->m_Items[1] = "None";
                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_03);
                  (__this->fields).AttackCombo = pSVar2;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackCombo);
                  Settings_SaveableSettingsContainer___ctor
                            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
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


