// Type: Settings.AnnieShifterInputSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/AnnieShifterInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/AnnieShifterInputSettings.cs
// --------------------------------

// Settings.AnnieShifterInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_AnnieShifterInputSettings__get_FileName (Settings_AnnieShifterInputSettings_o* __this, const MethodInfo* method);
// 0x181f0d410

System_String_o *
Settings_AnnieShifterInputSettings__get_FileName
          (Settings_AnnieShifterInputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434545a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifterInput.json");
    Il2CppMethodInitialized_18434545a = '\x01';
  }
  return "AnnieShifterInput.json";
}


// Settings.AnnieShifterInputSettings$$.ctor
// il2cpp: void Settings_AnnieShifterInputSettings___ctor (Settings_AnnieShifterInputSettings_o* __this, const MethodInfo* method);
// 0x181f0cbc0

void Settings_AnnieShifterInputSettings___ctor
               (Settings_AnnieShifterInputSettings_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434545b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"LeftAlt");
    il2cpp_codegen_initialize_runtime_metadata(&"Q");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"E");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse1");
    il2cpp_codegen_initialize_runtime_metadata(&"Space");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha2");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha1");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse0");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl");
    Il2CppMethodInitialized_18434545b = '\x01';
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
        if (pSVar2 == (System_String_array *)0x0) goto label_181f0d3fd;
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
            if (pSVar2 == (System_String_array *)0x0) goto label_181f0d3fd;
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
                if (pSVar2 == (System_String_array *)0x0) goto label_181f0d3fd;
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
                    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                    pSVar1 = "Mouse1";
                    if (pSVar2 == (System_String_array *)0x0) goto label_181f0d3fd;
                    if ((int)pSVar2->max_length != 0) {
                      pSVar2->m_Items[0] = "Mouse1";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                      pSVar1 = "None";
                      if (1 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[1] = "None";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                        Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                        (__this->fields).AttackSwing = pSVar3;
                        Il2CppCodeGenWriteBarrier(&(__this->fields).AttackSwing,pSVar3);
                        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                        pSVar1 = "Q";
                        if (pSVar2 == (System_String_array *)0x0) goto label_181f0d3fd;
                        if ((int)pSVar2->max_length != 0) {
                          pSVar2->m_Items[0] = "Q";
                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                          pSVar1 = "None";
                          if (1 < (uint)pSVar2->max_length) {
                            pSVar2->m_Items[1] = "None";
                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                            pSVar3 = il2cpp_codegen_object_new
                                               ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                            Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                            (__this->fields).AttackStomp = pSVar3;
                            Il2CppCodeGenWriteBarrier(&(__this->fields).AttackStomp,pSVar3);
                            pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                            pSVar1 = "E";
                            if (pSVar2 == (System_String_array *)0x0) goto label_181f0d3fd;
                            if ((int)pSVar2->max_length != 0) {
                              pSVar2->m_Items[0] = "E";
                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                              pSVar1 = "None";
                              if (1 < (uint)pSVar2->max_length) {
                                pSVar2->m_Items[1] = "None";
                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                pSVar3 = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                (__this->fields).AttackBite = pSVar3;
                                Il2CppCodeGenWriteBarrier(&(__this->fields).AttackBite,pSVar3);
                                pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                pSVar1 = "Alpha1";
                                if (pSVar2 == (System_String_array *)0x0) goto label_181f0d3fd;
                                if ((int)pSVar2->max_length != 0) {
                                  pSVar2->m_Items[0] = "Alpha1";
                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                  pSVar1 = "None";
                                  if (1 < (uint)pSVar2->max_length) {
                                    pSVar2->m_Items[1] = "None";
                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                    pSVar3 = il2cpp_codegen_object_new
                                                       ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                    Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                    (__this->fields).AttackHead = pSVar3;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields).AttackHead,pSVar3);
                                    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                    pSVar1 = "Alpha2";
                                    if (pSVar2 == (System_String_array *)0x0) goto label_181f0d3fd;
                                    if ((int)pSVar2->max_length != 0) {
                                      pSVar2->m_Items[0] = "Alpha2";
                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                      pSVar1 = "None";
                                      if (1 < (uint)pSVar2->max_length) {
                                        pSVar2->m_Items[1] = "None";
                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                        pSVar3 = il2cpp_codegen_object_new
                                                           ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                        Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                        (__this->fields).AttackBrushBack = pSVar3;
                                        Il2CppCodeGenWriteBarrier(&(__this->fields).AttackBrushBack,pSVar3);
                                        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                        pSVar1 = "None";
                                        if (pSVar2 == (System_String_array *)0x0) goto label_181f0d3fd;
                                        if ((int)pSVar2->max_length != 0) {
                                          pSVar2->m_Items[0] = "None";
                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                          pSVar1 = "None";
                                          if (1 < (uint)pSVar2->max_length) {
                                            pSVar2->m_Items[1] = "None";
                                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                            pSVar3 = il2cpp_codegen_object_new
                                                               ((Il2CppClass *)
                                                                TypeInfo_Settings_KeybindSetting);
                                            Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                            (__this->fields).AttackBrushFront = pSVar3;
                                            Il2CppCodeGenWriteBarrier
                                                      (&(__this->fields).AttackBrushFront,pSVar3);
                                            pSVar2 = (System_String_array *)
                                                     SZArrayNew(TypeInfo_string_array,2);
                                            pSVar1 = "None";
                                            if (pSVar2 == (System_String_array *)0x0) goto label_181f0d3fd;
                                            if ((int)pSVar2->max_length != 0) {
                                              pSVar2->m_Items[0] = "None";
                                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                              pSVar1 = "None";
                                              if (1 < (uint)pSVar2->max_length) {
                                                pSVar2->m_Items[1] = "None";
                                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                                pSVar3 = il2cpp_codegen_object_new
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_Settings_KeybindSetting);
                                                Settings_KeybindSetting___ctor
                                                          (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                (__this->fields).AttackBrushHead = pSVar3;
                                                Il2CppCodeGenWriteBarrier
                                                          (&(__this->fields).AttackBrushHead,pSVar3);
                                                pSVar2 = (System_String_array *)
                                                         SZArrayNew(TypeInfo_string_array,2);
                                                pSVar1 = "None";
                                                if (pSVar2 == (System_String_array *)0x0) goto label_181f0d3fd;
                                                if ((int)pSVar2->max_length != 0) {
                                                  pSVar2->m_Items[0] = "None";
                                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                  pSVar1 = "None";
                                                  if (1 < (uint)pSVar2->max_length) {
                                                    pSVar2->m_Items[1] = "None";
                                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                                    pSVar3 = il2cpp_codegen_object_new
                                                                       ((Il2CppClass *)
                                                                        TypeInfo_Settings_KeybindSetting);
                                                    Settings_KeybindSetting___ctor
                                                              (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                    (__this->fields).AttackGrabBottom = pSVar3;
                                                    Il2CppCodeGenWriteBarrier
                                                              (&(__this->fields).AttackGrabBottom,pSVar3);
                                                    pSVar2 = (System_String_array *)
                                                             SZArrayNew(TypeInfo_string_array,2);
                                                    pSVar1 = "None";
                                                    if (pSVar2 == (System_String_array *)0x0)
                                                    goto label_181f0d3fd;
                                                    if ((int)pSVar2->max_length != 0) {
                                                      pSVar2->m_Items[0] = "None";
                                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                      pSVar1 = "None";
                                                      if (1 < (uint)pSVar2->max_length) {
                                                        pSVar2->m_Items[1] = "None";
                                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                                        pSVar3 = il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                            TypeInfo_Settings_KeybindSetting);
                                                        Settings_KeybindSetting___ctor
                                                                  (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                        (__this->fields).AttackGrabMid = pSVar3;
                                                        Il2CppCodeGenWriteBarrier
                                                                  (&(__this->fields).AttackGrabMid,pSVar3);
                                                        pSVar2 = (System_String_array *)
                                                                 SZArrayNew(TypeInfo_string_array,2);
                                                        pSVar1 = "None";
                                                        if (pSVar2 == (System_String_array *)0x0)
                                                        goto label_181f0d3fd;
                                                        if ((int)pSVar2->max_length != 0) {
                                                          pSVar2->m_Items[0] = "None";
                                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                          pSVar1 = "None";
                                                          if (1 < (uint)pSVar2->max_length) {
                                                            pSVar2->m_Items[1] = "None";
                                                            Il2CppCodeGenWriteBarrier
                                                                      (pSVar2->m_Items + 1,pSVar1);
                                                            pSVar3 = il2cpp_codegen_object_new
                                                                               ((Il2CppClass *)
                                                                                                                                                                
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).AttackGrabUp = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabUp,pSVar3);
                                                       Settings_BaseSettingsContainer___ctor
                                                                 ((Settings_BaseSettingsContainer_o *)__this,
                                                                  (MethodInfo *)0x0);
                                                       return;
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
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181f0d3fd:
  ThrowNullReferenceException();
}


