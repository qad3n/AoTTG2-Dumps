// Type: Settings.HumanInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/HumanInputSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/Input/HumanInputSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.HumanInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_HumanInputSettings__get_FileName (Settings_HumanInputSettings_o* __this, const MethodInfo* method);
// 0x3d98630

System_String_o *
Settings_HumanInputSettings__get_FileName(Settings_HumanInputSettings_o *__this,MethodInfo *method)

{
  if (DAT_05702750 == '\0') {
    il2cpp_init_method_metadata(&"HumanInput.json");
    DAT_05702750 = '\x01';
  }
  return "HumanInput.json";
}


// Settings.HumanInputSettings$$.ctor
// il2cpp: void Settings_HumanInputSettings___ctor (Settings_HumanInputSettings_o* __this, const MethodInfo* method);
// 0x3d98660

void Settings_HumanInputSettings___ctor(Settings_HumanInputSettings_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_IntSetting_o *__this_00;
  Settings_FloatSetting_o *__this_01;
  
  if (DAT_05702751 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"LeftAlt");
    il2cpp_init_method_metadata(&"R");
    il2cpp_init_method_metadata(&"Q");
    il2cpp_init_method_metadata(&"LeftShift");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"E");
    il2cpp_init_method_metadata(&"Mouse1");
    il2cpp_init_method_metadata(&"Space");
    il2cpp_init_method_metadata(&"WheelDown");
    il2cpp_init_method_metadata(&"Mouse0");
    il2cpp_init_method_metadata(&"LeftControl");
    DAT_05702751 = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "Mouse0";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "None";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
        Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
        (__this->fields).AttackDefault = pSVar2;
        il2cpp_runtime_glue(&(__this->fields).AttackDefault,pSVar2);
        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
        if (pSVar1 == (System_String_array *)0x0) goto LAB_03d9914b;
        if ((int)pSVar1->max_length != 0) {
          pSVar1->m_Items[0] = "Mouse1";
          il2cpp_runtime_glue(pSVar1->m_Items);
          if (1 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[1] = "None";
            il2cpp_runtime_glue(pSVar1->m_Items + 1);
            pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
            Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
            (__this->fields).AttackSpecial = pSVar2;
            il2cpp_runtime_glue(&(__this->fields).AttackSpecial,pSVar2);
            pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
            if (pSVar1 == (System_String_array *)0x0) goto LAB_03d9914b;
            if ((int)pSVar1->max_length != 0) {
              pSVar1->m_Items[0] = "Q";
              il2cpp_runtime_glue(pSVar1->m_Items);
              if (1 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[1] = "None";
                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                (__this->fields).HookLeft = pSVar2;
                il2cpp_runtime_glue(&(__this->fields).HookLeft,pSVar2);
                pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                if (pSVar1 == (System_String_array *)0x0) goto LAB_03d9914b;
                if ((int)pSVar1->max_length != 0) {
                  pSVar1->m_Items[0] = "E";
                  il2cpp_runtime_glue(pSVar1->m_Items);
                  if (1 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[1] = "None";
                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                    pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                    (__this->fields).HookRight = pSVar2;
                    il2cpp_runtime_glue(&(__this->fields).HookRight,pSVar2);
                    pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                    if (pSVar1 == (System_String_array *)0x0) goto LAB_03d9914b;
                    if ((int)pSVar1->max_length != 0) {
                      pSVar1->m_Items[0] = "None";
                      il2cpp_runtime_glue(pSVar1->m_Items);
                      if (1 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[1] = "None";
                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                        pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                        (__this->fields).HookBoth = pSVar2;
                        il2cpp_runtime_glue(&(__this->fields).HookBoth,pSVar2);
                        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                        if (pSVar1 == (System_String_array *)0x0) goto LAB_03d9914b;
                        if ((int)pSVar1->max_length != 0) {
                          pSVar1->m_Items[0] = "LeftControl";
                          il2cpp_runtime_glue(pSVar1->m_Items);
                          if (1 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[1] = "None";
                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                            pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                            Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                            (__this->fields).Dash = pSVar2;
                            il2cpp_runtime_glue(&(__this->fields).Dash,pSVar2);
                            pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                            if (pSVar1 == (System_String_array *)0x0) goto LAB_03d9914b;
                            if ((int)pSVar1->max_length != 0) {
                              pSVar1->m_Items[0] = "WheelDown";
                              il2cpp_runtime_glue(pSVar1->m_Items);
                              if (1 < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[1] = "None";
                                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                pSVar2 = (Settings_KeybindSetting_o *)
                                         il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                                (__this->fields).ReelIn = pSVar2;
                                il2cpp_runtime_glue(&(__this->fields).ReelIn,pSVar2);
                                pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                                if (pSVar1 == (System_String_array *)0x0) goto LAB_03d9914b;
                                if ((int)pSVar1->max_length != 0) {
                                  pSVar1->m_Items[0] = "LeftAlt";
                                  il2cpp_runtime_glue(pSVar1->m_Items);
                                  if (1 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[1] = "None";
                                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                    pSVar2 = (Settings_KeybindSetting_o *)
                                             il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                                    (__this->fields).ReelOut = pSVar2;
                                    il2cpp_runtime_glue(&(__this->fields).ReelOut,pSVar2);
                                    pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                                    if (pSVar1 == (System_String_array *)0x0) goto LAB_03d9914b;
                                    if ((int)pSVar1->max_length != 0) {
                                      pSVar1->m_Items[0] = "LeftControl";
                                      il2cpp_runtime_glue(pSVar1->m_Items);
                                      if (1 < (uint)pSVar1->max_length) {
                                        pSVar1->m_Items[1] = "None";
                                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                        pSVar2 = (Settings_KeybindSetting_o *)
                                                 il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                        Settings_KeybindSetting___ctor
                                                  (pSVar2,pSVar1,(MethodInfo *)0x0);
                                        (__this->fields).Dodge = pSVar2;
                                        il2cpp_runtime_glue(&(__this->fields).Dodge,pSVar2);
                                        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2)
                                        ;
                                        if (pSVar1 == (System_String_array *)0x0) goto LAB_03d9914b;
                                        if ((int)pSVar1->max_length != 0) {
                                          pSVar1->m_Items[0] = "LeftShift";
                                          il2cpp_runtime_glue(pSVar1->m_Items);
                                          if (1 < (uint)pSVar1->max_length) {
                                            pSVar1->m_Items[1] = "None";
                                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                            pSVar2 = (Settings_KeybindSetting_o *)
                                                     il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                            Settings_KeybindSetting___ctor
                                                      (pSVar2,pSVar1,(MethodInfo *)0x0);
                                            (__this->fields).Jump = pSVar2;
                                            il2cpp_runtime_glue(&(__this->fields).Jump,pSVar2);
                                            pSVar1 = (System_String_array *)
                                                     il2cpp_glue_02274930(TypeInfo_string,2);
                                            if (pSVar1 == (System_String_array *)0x0)
                                            goto LAB_03d9914b;
                                            if ((int)pSVar1->max_length != 0) {
                                              pSVar1->m_Items[0] = "R";
                                              il2cpp_runtime_glue(pSVar1->m_Items);
                                              if (1 < (uint)pSVar1->max_length) {
                                                pSVar1->m_Items[1] = "None";
                                                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                pSVar2 = (Settings_KeybindSetting_o *)
                                                         il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                Settings_KeybindSetting___ctor
                                                          (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                (__this->fields).Reload = pSVar2;
                                                il2cpp_runtime_glue(&(__this->fields).Reload,pSVar2);
                                                pSVar1 = (System_String_array *)
                                                         il2cpp_glue_02274930(TypeInfo_string,2);
                                                if (pSVar1 == (System_String_array *)0x0)
                                                goto LAB_03d9914b;
                                                if ((int)pSVar1->max_length != 0) {
                                                  pSVar1->m_Items[0] = "LeftControl";
                                                  il2cpp_runtime_glue(pSVar1->m_Items);
                                                  if (1 < (uint)pSVar1->max_length) {
                                                    pSVar1->m_Items[1] = "None";
                                                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                    pSVar2 = (Settings_KeybindSetting_o *)
                                                             il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                    Settings_KeybindSetting___ctor
                                                              (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                    (__this->fields).HorseMount = pSVar2;
                                                    il2cpp_runtime_glue(&(__this->fields).HorseMount,
                                                                       pSVar2);
                                                    pSVar1 = (System_String_array *)
                                                             il2cpp_glue_02274930(TypeInfo_string,2);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto LAB_03d9914b;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      pSVar1->m_Items[0] = "LeftShift";
                                                      il2cpp_runtime_glue(pSVar1->m_Items);
                                                      if (1 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[1] = "None";
                                                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                        pSVar2 = (Settings_KeybindSetting_o *)
                                                                 il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                        Settings_KeybindSetting___ctor
                                                                  (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                        (__this->fields).HorseWalk = pSVar2;
                                                        il2cpp_runtime_glue(&(__this->fields).
                                                                            HorseWalk,pSVar2);
                                                        pSVar1 = (System_String_array *)
                                                                 il2cpp_glue_02274930(TypeInfo_string,2);
                                                        if (pSVar1 == (System_String_array *)0x0)
                                                        goto LAB_03d9914b;
                                                        if ((int)pSVar1->max_length != 0) {
                                                          pSVar1->m_Items[0] = "Space";
                                                          il2cpp_runtime_glue(pSVar1->m_Items);
                                                          if (1 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[1] = "None";
                                                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                            pSVar2 = (Settings_KeybindSetting_o *)
                                                                     il2cpp_runtime_glue(TypeInfo_KeybindSetting
                                                                                       );
                                                            Settings_KeybindSetting___ctor
                                                                      (pSVar2,pSVar1,
                                                                       (MethodInfo *)0x0);
                                                            (__this->fields).HorseJump = pSVar2;
                                                            il2cpp_runtime_glue(&(__this->fields).
                                                                                HorseJump,pSVar2);
                                                            pSVar1 = (System_String_array *)
                                                                     il2cpp_glue_02274930(TypeInfo_string,2);
                                                            if (pSVar1 == (System_String_array *)0x0
                                                               ) goto LAB_03d9914b;
                                                            if ((int)pSVar1->max_length != 0) {
                                                              pSVar1->m_Items[0] = "None";
                                                              il2cpp_runtime_glue(pSVar1->m_Items);
                                                              if (1 < (uint)pSVar1->max_length) {
                                                                pSVar1->m_Items[1] = "None";
                                                                il2cpp_runtime_glue(pSVar1->m_Items +
                                                                                   1);
                                                                pSVar2 = (Settings_KeybindSetting_o
                                                                          *)il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                  (__this->fields).NapeLock = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).NapeLock,
                                                                     pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03d9914b;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "LeftAlt";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      pSVar2 = (Settings_KeybindSetting_o *)
                                                               il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                      (__this->fields).Walk = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).Walk,
                                                                         pSVar2);
                                                      pSVar3 = (Settings_BoolSetting_o *)
                                                               il2cpp_runtime_glue(TypeInfo_BoolSetting);
                                                      Settings_BoolSetting___ctor
                                                                (pSVar3,1,(MethodInfo *)0x0);
                                                      (__this->fields).DashDoubleTap = pSVar3;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          DashDoubleTap,pSVar3);
                                                      pSVar3 = (Settings_BoolSetting_o *)
                                                               il2cpp_runtime_glue(TypeInfo_BoolSetting);
                                                      Settings_BoolSetting___ctor
                                                                (pSVar3,1,(MethodInfo *)0x0);
                                                      (__this->fields).WallSlideDash = pSVar3;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          WallSlideDash,pSVar3);
                                                      __this_00 = (Settings_IntSetting_o *)
                                                                  il2cpp_runtime_glue(TypeInfo_IntSetting);
                                                      Settings_IntSetting___ctor
                                                                (__this_00,2,-0x80000000,0x7fffffff,
                                                                 (MethodInfo *)0x0);
                                                      (__this->fields).WallSlideAttach = __this_00;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          WallSlideAttach);
                                                      __this_01 = (Settings_FloatSetting_o *)
                                                                  il2cpp_runtime_glue(TypeInfo_FloatSetting);
                                                      Settings_FloatSetting___ctor
                                                                (__this_01,0.2,0.0,1.0,
                                                                 (MethodInfo *)0x0);
                                                      (__this->fields).ReelOutScrollSmoothing =
                                                           __this_01;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          ReelOutScrollSmoothing);
                                                      pSVar3 = (Settings_BoolSetting_o *)
                                                               il2cpp_runtime_glue(TypeInfo_BoolSetting);
                                                      Settings_BoolSetting___ctor
                                                                (pSVar3,0,(MethodInfo *)0x0);
                                                      (__this->fields).SwapTSAttackSpecial = pSVar3;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          SwapTSAttackSpecial);
                                                      pSVar3 = (Settings_BoolSetting_o *)
                                                               il2cpp_runtime_glue(TypeInfo_BoolSetting);
                                                      Settings_BoolSetting___ctor
                                                                (pSVar3,0,(MethodInfo *)0x0);
                                                      (__this->fields).AutoRefillGas = pSVar3;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          AutoRefillGas);
                                                      pSVar3 = (Settings_BoolSetting_o *)
                                                               il2cpp_runtime_glue(TypeInfo_BoolSetting);
                                                      Settings_BoolSetting___ctor
                                                                (pSVar3,0,(MethodInfo *)0x0);
                                                      (__this->fields).AutoUseGas = pSVar3;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          AutoUseGas,pSVar3);
                                                      pSVar3 = (Settings_BoolSetting_o *)
                                                               il2cpp_runtime_glue(TypeInfo_BoolSetting);
                                                      Settings_BoolSetting___ctor
                                                                (pSVar3,1,(MethodInfo *)0x0);
                                                      (__this->fields).ReelInHolding = pSVar3;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          ReelInHolding);
                                                      Settings_SaveableSettingsContainer___ctor
                                                                ((
                                                  Settings_SaveableSettingsContainer_o *)__this,
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
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03d9914b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


