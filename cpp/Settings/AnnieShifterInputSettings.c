// Type: Settings.AnnieShifterInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/AnnieShifterInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/AnnieShifterInputSettings.cs
// --------------------------------

// Settings.AnnieShifterInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_AnnieShifterInputSettings__get_FileName (Settings_AnnieShifterInputSettings_o* __this, const MethodInfo* method);
// 0x5b4afc0

System_String_o *
Settings_AnnieShifterInputSettings__get_FileName
          (Settings_AnnieShifterInputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifterInput.json");
    Il2CppMethodInitialized_075472a4 = '\x01';
  }
  return "AnnieShifterInput.json";
}


// Settings.AnnieShifterInputSettings$$.ctor
// il2cpp: void Settings_AnnieShifterInputSettings___ctor (Settings_AnnieShifterInputSettings_o* __this, const MethodInfo* method);
// 0x5b4aff0

void Settings_AnnieShifterInputSettings___ctor
               (Settings_AnnieShifterInputSettings_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  MethodInfo *method_13;
  
  if (Il2CppMethodInitialized_075472a5 == '\0') {
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
    Il2CppMethodInitialized_075472a5 = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (pSVar1 == (System_String_array *)0x0) {
label_05b4b7f6:
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
      if (pSVar1 == (System_String_array *)0x0) goto label_05b4b7f6;
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
          if (pSVar1 == (System_String_array *)0x0) goto label_05b4b7f6;
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
              if (pSVar1 == (System_String_array *)0x0) goto label_05b4b7f6;
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
                  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                  if (pSVar1 == (System_String_array *)0x0) goto label_05b4b7f6;
                  if ((int)pSVar1->max_length != 0) {
                    pSVar1->m_Items[0] = "Mouse1";
                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                      pSVar1->m_Items[1] = "None";
                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                      pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_04);
                      (__this->fields).AttackSwing = pSVar2;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).AttackSwing);
                      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                      if (pSVar1 == (System_String_array *)0x0) goto label_05b4b7f6;
                      if ((int)pSVar1->max_length != 0) {
                        pSVar1->m_Items[0] = "Q";
                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                        if ((pSVar1->max_length & 0xfffffffe) != 0) {
                          pSVar1->m_Items[1] = "None";
                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                          pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                          Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_05);
                          (__this->fields).AttackStomp = pSVar2;
                          Il2CppCodeGenWriteBarrier(&(__this->fields).AttackStomp);
                          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                          if (pSVar1 == (System_String_array *)0x0) goto label_05b4b7f6;
                          if ((int)pSVar1->max_length != 0) {
                            pSVar1->m_Items[0] = "E";
                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                              pSVar1->m_Items[1] = "None";
                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                              pSVar2 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_06);
                              (__this->fields).AttackBite = pSVar2;
                              Il2CppCodeGenWriteBarrier(&(__this->fields).AttackBite);
                              pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                              if (pSVar1 == (System_String_array *)0x0) goto label_05b4b7f6;
                              if ((int)pSVar1->max_length != 0) {
                                pSVar1->m_Items[0] = "Alpha1";
                                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                  pSVar1->m_Items[1] = "None";
                                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                  pSVar2 = il2cpp_codegen_object_new
                                                     ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_07);
                                  (__this->fields).AttackHead = pSVar2;
                                  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackHead);
                                  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                  if (pSVar1 == (System_String_array *)0x0) goto label_05b4b7f6;
                                  if ((int)pSVar1->max_length != 0) {
                                    pSVar1->m_Items[0] = "Alpha2";
                                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                      pSVar1->m_Items[1] = "None";
                                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                      pSVar2 = il2cpp_codegen_object_new
                                                         ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_08);
                                      (__this->fields).AttackBrushBack = pSVar2;
                                      Il2CppCodeGenWriteBarrier(&(__this->fields).AttackBrushBack);
                                      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                      if (pSVar1 == (System_String_array *)0x0) goto label_05b4b7f6;
                                      if ((int)pSVar1->max_length != 0) {
                                        pSVar1->m_Items[0] = "None";
                                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                        if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                          pSVar1->m_Items[1] = "None";
                                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                          pSVar2 = il2cpp_codegen_object_new
                                                             ((Il2CppClass *)TypeInfo_Settings_KeybindSetting)
                                          ;
                                          Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_09);
                                          (__this->fields).AttackBrushFront = pSVar2;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields).AttackBrushFront);
                                          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                          if (pSVar1 == (System_String_array *)0x0) goto label_05b4b7f6;
                                          if ((int)pSVar1->max_length != 0) {
                                            pSVar1->m_Items[0] = "None";
                                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                              pSVar1->m_Items[1] = "None";
                                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                              pSVar2 = il2cpp_codegen_object_new
                                                                 ((Il2CppClass *)
                                                                  TypeInfo_Settings_KeybindSetting);
                                              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_10);
                                              (__this->fields).AttackBrushHead = pSVar2;
                                              Il2CppCodeGenWriteBarrier(&(__this->fields).AttackBrushHead);
                                              pSVar1 = (System_String_array *)
                                                       SZArrayNew(TypeInfo_string_array,2);
                                              if (pSVar1 == (System_String_array *)0x0) goto label_05b4b7f6;
                                              if ((int)pSVar1->max_length != 0) {
                                                pSVar1->m_Items[0] = "None";
                                                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                  pSVar1->m_Items[1] = "None";
                                                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                  pSVar2 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_Settings_KeybindSetting);
                                                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_11);
                                                  (__this->fields).AttackGrabBottom = pSVar2;
                                                  Il2CppCodeGenWriteBarrier
                                                            (&(__this->fields).AttackGrabBottom);
                                                  pSVar1 = (System_String_array *)
                                                           SZArrayNew(TypeInfo_string_array,2);
                                                  if (pSVar1 == (System_String_array *)0x0) goto label_05b4b7f6;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "None";
                                                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                      pSVar1->m_Items[1] = "None";
                                                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                      pSVar2 = il2cpp_codegen_object_new
                                                                         ((Il2CppClass *)
                                                                          TypeInfo_Settings_KeybindSetting);
                                                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_12);
                                                      (__this->fields).AttackGrabMid = pSVar2;
                                                      Il2CppCodeGenWriteBarrier
                                                                (&(__this->fields).AttackGrabMid);
                                                      pSVar1 = (System_String_array *)
                                                               SZArrayNew(TypeInfo_string_array,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto label_05b4b7f6;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "None";
                                                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                        if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                          pSVar1->m_Items[1] = "None";
                                                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                          pSVar2 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_Settings_KeybindSetting
                                                                             );
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,method_13);
                                                          (__this->fields).AttackGrabUp = pSVar2;
                                                          Il2CppCodeGenWriteBarrier
                                                                    (&(__this->fields).AttackGrabUp);
                                                          Settings_SaveableSettingsContainer___ctor
                                                                    ((Settings_SaveableSettingsContainer_o *)
                                                                     __this,(MethodInfo *)0x0);
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


