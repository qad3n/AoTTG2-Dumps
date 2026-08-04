// Type: Settings.AnnieShifterInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/AnnieShifterInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/AnnieShifterInputSettings.cs
// --------------------------------

// Settings.AnnieShifterInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_AnnieShifterInputSettings__get_FileName (Settings_AnnieShifterInputSettings_o* __this, const MethodInfo* method);
// 0x408ce10

System_String_o *
Settings_AnnieShifterInputSettings__get_FileName
          (Settings_AnnieShifterInputSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ac3ff == '\0') {
    il2cpp_runtime_helper_023445d0(&"AnnieShifterInput.json");
    g_data_057ac3ff = '\x01';
  }
  return "AnnieShifterInput.json";
}


// Settings.AnnieShifterInputSettings$$.ctor
// il2cpp: void Settings_AnnieShifterInputSettings___ctor (Settings_AnnieShifterInputSettings_o* __this, const MethodInfo* method);
// 0x408ce40

void Settings_AnnieShifterInputSettings___ctor
               (Settings_AnnieShifterInputSettings_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  
  if (g_data_057ac400 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"LeftAlt");
    il2cpp_runtime_helper_023445d0(&"Q");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"E");
    il2cpp_runtime_helper_023445d0(&"Mouse1");
    il2cpp_runtime_helper_023445d0(&"Space");
    il2cpp_runtime_helper_023445d0(&"Alpha2");
    il2cpp_runtime_helper_023445d0(&"Alpha1");
    il2cpp_runtime_helper_023445d0(&"Mouse0");
    il2cpp_runtime_helper_023445d0(&"LeftControl");
    g_data_057ac400 = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "LeftControl";
      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "None";
        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
        pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
        Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
        (__this->fields).Kick = pSVar2;
        il2cpp_runtime_helper_022b4080(&(__this->fields).Kick,pSVar2);
        pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
        if (pSVar1 == (System_String_array *)0x0) goto label_0408d626;
        if ((int)pSVar1->max_length != 0) {
          pSVar1->m_Items[0] = "Space";
          il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
          if (1 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[1] = "None";
            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
            pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
            Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
            (__this->fields).Jump = pSVar2;
            il2cpp_runtime_helper_022b4080(&(__this->fields).Jump,pSVar2);
            pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
            if (pSVar1 == (System_String_array *)0x0) goto label_0408d626;
            if ((int)pSVar1->max_length != 0) {
              pSVar1->m_Items[0] = "LeftAlt";
              il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
              if (1 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[1] = "None";
                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                (__this->fields).Walk = pSVar2;
                il2cpp_runtime_helper_022b4080(&(__this->fields).Walk,pSVar2);
                pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                if (pSVar1 == (System_String_array *)0x0) goto label_0408d626;
                if ((int)pSVar1->max_length != 0) {
                  pSVar1->m_Items[0] = "Mouse0";
                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                  if (1 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[1] = "None";
                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                    pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                    (__this->fields).AttackCombo = pSVar2;
                    il2cpp_runtime_helper_022b4080(&(__this->fields).AttackCombo,pSVar2);
                    pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                    if (pSVar1 == (System_String_array *)0x0) goto label_0408d626;
                    if ((int)pSVar1->max_length != 0) {
                      pSVar1->m_Items[0] = "Mouse1";
                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                      if (1 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[1] = "None";
                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                        pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                        (__this->fields).AttackSwing = pSVar2;
                        il2cpp_runtime_helper_022b4080(&(__this->fields).AttackSwing,pSVar2);
                        pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                        if (pSVar1 == (System_String_array *)0x0) goto label_0408d626;
                        if ((int)pSVar1->max_length != 0) {
                          pSVar1->m_Items[0] = "Q";
                          il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                          if (1 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[1] = "None";
                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                            pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                            Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                            (__this->fields).AttackStomp = pSVar2;
                            il2cpp_runtime_helper_022b4080(&(__this->fields).AttackStomp,pSVar2);
                            pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                            if (pSVar1 == (System_String_array *)0x0) goto label_0408d626;
                            if ((int)pSVar1->max_length != 0) {
                              pSVar1->m_Items[0] = "E";
                              il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                              if (1 < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[1] = "None";
                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                                (__this->fields).AttackBite = pSVar2;
                                il2cpp_runtime_helper_022b4080(&(__this->fields).AttackBite,pSVar2);
                                pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                if (pSVar1 == (System_String_array *)0x0) goto label_0408d626;
                                if ((int)pSVar1->max_length != 0) {
                                  pSVar1->m_Items[0] = "Alpha1";
                                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                  if (1 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[1] = "None";
                                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                    pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                                    (__this->fields).AttackHead = pSVar2;
                                    il2cpp_runtime_helper_022b4080(&(__this->fields).AttackHead,pSVar2);
                                    pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                    if (pSVar1 == (System_String_array *)0x0) goto label_0408d626;
                                    if ((int)pSVar1->max_length != 0) {
                                      pSVar1->m_Items[0] = "Alpha2";
                                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                      if (1 < (uint)pSVar1->max_length) {
                                        pSVar1->m_Items[1] = "None";
                                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                        pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting)
                                        ;
                                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                                        (__this->fields).AttackBrushBack = pSVar2;
                                        il2cpp_runtime_helper_022b4080(&(__this->fields).AttackBrushBack,pSVar2);
                                        pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                        if (pSVar1 == (System_String_array *)0x0) goto label_0408d626;
                                        if ((int)pSVar1->max_length != 0) {
                                          pSVar1->m_Items[0] = "None";
                                          il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                          if (1 < (uint)pSVar1->max_length) {
                                            pSVar1->m_Items[1] = "None";
                                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                            pSVar2 = (Settings_KeybindSetting_o *)
                                                     il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                            Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                                            (__this->fields).AttackBrushFront = pSVar2;
                                            il2cpp_runtime_helper_022b4080(&(__this->fields).AttackBrushFront,pSVar2);
                                            pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                            if (pSVar1 == (System_String_array *)0x0) goto label_0408d626;
                                            if ((int)pSVar1->max_length != 0) {
                                              pSVar1->m_Items[0] = "None";
                                              il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                              if (1 < (uint)pSVar1->max_length) {
                                                pSVar1->m_Items[1] = "None";
                                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                pSVar2 = (Settings_KeybindSetting_o *)
                                                         il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                Settings_KeybindSetting___ctor
                                                          (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                (__this->fields).AttackBrushHead = pSVar2;
                                                il2cpp_runtime_helper_022b4080(&(__this->fields).AttackBrushHead,pSVar2);
                                                pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                if (pSVar1 == (System_String_array *)0x0) goto label_0408d626;
                                                if ((int)pSVar1->max_length != 0) {
                                                  pSVar1->m_Items[0] = "None";
                                                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                  if (1 < (uint)pSVar1->max_length) {
                                                    pSVar1->m_Items[1] = "None";
                                                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                    pSVar2 = (Settings_KeybindSetting_o *)
                                                             il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                    Settings_KeybindSetting___ctor
                                                              (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                    (__this->fields).AttackGrabBottom = pSVar2;
                                                    il2cpp_runtime_helper_022b4080(&(__this->fields).AttackGrabBottom,
                                                                       pSVar2);
                                                    pSVar1 = (System_String_array *)
                                                             il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto label_0408d626;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      pSVar1->m_Items[0] = "None";
                                                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                      if (1 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[1] = "None";
                                                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                        pSVar2 = (Settings_KeybindSetting_o *)
                                                                 il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                        Settings_KeybindSetting___ctor
                                                                  (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                        (__this->fields).AttackGrabMid = pSVar2;
                                                        il2cpp_runtime_helper_022b4080(&(__this->fields).AttackGrabMid,
                                                                           pSVar2);
                                                        pSVar1 = (System_String_array *)
                                                                 il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                        if (pSVar1 == (System_String_array *)0x0)
                                                        goto label_0408d626;
                                                        if ((int)pSVar1->max_length != 0) {
                                                          pSVar1->m_Items[0] = "None";
                                                          il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                          if (1 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[1] = "None";
                                                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                            pSVar2 = (Settings_KeybindSetting_o *)
                                                                     il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                            Settings_KeybindSetting___ctor
                                                                      (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                            (__this->fields).AttackGrabUp = pSVar2;
                                                            il2cpp_runtime_helper_022b4080(&(__this->fields).AttackGrabUp)
                                                            ;
                                                            Settings_SaveableSettingsContainer___ctor
                                                                      ((Settings_SaveableSettingsContainer_o *
                                                                       )__this,(MethodInfo *)0x0);
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
    il2cpp_runtime_helper_022b2ca0();
  }
label_0408d626:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac401 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ErenShifterInput.json");
    g_data_057ac401 = '\x01';
  }
  return;
}


