// Type: Settings.InteractionInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/InteractionInputSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/Input/InteractionInputSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.InteractionInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_InteractionInputSettings__get_FileName (Settings_InteractionInputSettings_o* __this, const MethodInfo* method);
// 0x3f07e00

System_String_o *
Settings_InteractionInputSettings__get_FileName
          (Settings_InteractionInputSettings_o *__this,MethodInfo *method)

{
  if (DAT_05703c4b == '\0') {
    il2cpp_init_method_metadata(&"InteractionInput.json");
    DAT_05703c4b = '\x01';
  }
  return "InteractionInput.json";
}


// Settings.InteractionInputSettings$$.ctor
// il2cpp: void Settings_InteractionInputSettings___ctor (Settings_InteractionInputSettings_o* __this, const MethodInfo* method);
// 0x3f05dc0

void Settings_InteractionInputSettings___ctor
               (Settings_InteractionInputSettings_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  if (DAT_05703c4c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"J");
    il2cpp_init_method_metadata(&"F4");
    il2cpp_init_method_metadata(&"F2");
    il2cpp_init_method_metadata(&"Alpha6");
    il2cpp_init_method_metadata(&"Alpha5");
    il2cpp_init_method_metadata(&"Alpha8");
    il2cpp_init_method_metadata(&"G");
    il2cpp_init_method_metadata(&"H");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Space");
    il2cpp_init_method_metadata(&"Alpha3");
    il2cpp_init_method_metadata(&"Alpha2");
    il2cpp_init_method_metadata(&"Alpha1");
    il2cpp_init_method_metadata(&"F3");
    il2cpp_init_method_metadata(&"Alpha4");
    il2cpp_init_method_metadata(&"Alpha7");
    il2cpp_init_method_metadata(&"F1");
    il2cpp_init_method_metadata(&"N");
    il2cpp_init_method_metadata(&"F");
    DAT_05703c4c = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "G";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "None";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
        pSVar2 = auVar3._0_8_;
        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
        (__this->fields).Interact = pSVar2;
        il2cpp_runtime_glue(&(__this->fields).Interact,pSVar2);
        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
        if (pSVar1 == (System_String_array *)0x0) goto LAB_03f0682a;
        if ((int)pSVar1->max_length != 0) {
          pSVar1->m_Items[0] = "H";
          il2cpp_runtime_glue(pSVar1->m_Items);
          if (1 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[1] = "None";
            il2cpp_runtime_glue(pSVar1->m_Items + 1);
            auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
            pSVar2 = auVar3._0_8_;
            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
            (__this->fields).Interact2 = pSVar2;
            il2cpp_runtime_glue(&(__this->fields).Interact2,pSVar2);
            pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
            if (pSVar1 == (System_String_array *)0x0) goto LAB_03f0682a;
            if ((int)pSVar1->max_length != 0) {
              pSVar1->m_Items[0] = "J";
              il2cpp_runtime_glue(pSVar1->m_Items);
              if (1 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[1] = "None";
                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                pSVar2 = auVar3._0_8_;
                Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                (__this->fields).Interact3 = pSVar2;
                il2cpp_runtime_glue(&(__this->fields).Interact3,pSVar2);
                pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                if (pSVar1 == (System_String_array *)0x0) goto LAB_03f0682a;
                if ((int)pSVar1->max_length != 0) {
                  pSVar1->m_Items[0] = "F";
                  il2cpp_runtime_glue(pSVar1->m_Items);
                  if (1 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[1] = "None";
                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                    auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                    pSVar2 = auVar3._0_8_;
                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                    (__this->fields).ItemMenu = pSVar2;
                    il2cpp_runtime_glue(&(__this->fields).ItemMenu,pSVar2);
                    pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                    if (pSVar1 == (System_String_array *)0x0) goto LAB_03f0682a;
                    if ((int)pSVar1->max_length != 0) {
                      pSVar1->m_Items[0] = "N";
                      il2cpp_runtime_glue(pSVar1->m_Items);
                      if (1 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[1] = "None";
                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                        auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                        pSVar2 = auVar3._0_8_;
                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                        (__this->fields).EmoteMenu = pSVar2;
                        il2cpp_runtime_glue(&(__this->fields).EmoteMenu,pSVar2);
                        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                        if (pSVar1 == (System_String_array *)0x0) goto LAB_03f0682a;
                        if ((int)pSVar1->max_length != 0) {
                          pSVar1->m_Items[0] = "Space";
                          il2cpp_runtime_glue(pSVar1->m_Items);
                          if (1 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[1] = "None";
                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                            auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                            pSVar2 = auVar3._0_8_;
                            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                            (__this->fields).MenuNext = pSVar2;
                            il2cpp_runtime_glue(&(__this->fields).MenuNext,pSVar2);
                            pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                            if (pSVar1 == (System_String_array *)0x0) goto LAB_03f0682a;
                            if ((int)pSVar1->max_length != 0) {
                              pSVar1->m_Items[0] = "Alpha1";
                              il2cpp_runtime_glue(pSVar1->m_Items);
                              if (1 < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[1] = "None";
                                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                pSVar2 = auVar3._0_8_;
                                Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                (__this->fields).QuickSelect1 = pSVar2;
                                il2cpp_runtime_glue(&(__this->fields).QuickSelect1,pSVar2);
                                pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                                if (pSVar1 == (System_String_array *)0x0) goto LAB_03f0682a;
                                if ((int)pSVar1->max_length != 0) {
                                  pSVar1->m_Items[0] = "Alpha2";
                                  il2cpp_runtime_glue(pSVar1->m_Items);
                                  if (1 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[1] = "None";
                                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                    auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                    pSVar2 = auVar3._0_8_;
                                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                    (__this->fields).QuickSelect2 = pSVar2;
                                    il2cpp_runtime_glue(&(__this->fields).QuickSelect2,pSVar2);
                                    pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                                    if (pSVar1 == (System_String_array *)0x0) goto LAB_03f0682a;
                                    if ((int)pSVar1->max_length != 0) {
                                      pSVar1->m_Items[0] = "Alpha3";
                                      il2cpp_runtime_glue(pSVar1->m_Items);
                                      if (1 < (uint)pSVar1->max_length) {
                                        pSVar1->m_Items[1] = "None";
                                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                        auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                        pSVar2 = auVar3._0_8_;
                                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                        (__this->fields).QuickSelect3 = pSVar2;
                                        il2cpp_runtime_glue(&(__this->fields).QuickSelect3,pSVar2);
                                        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2)
                                        ;
                                        if (pSVar1 == (System_String_array *)0x0) goto LAB_03f0682a;
                                        if ((int)pSVar1->max_length != 0) {
                                          pSVar1->m_Items[0] = "Alpha4";
                                          il2cpp_runtime_glue(pSVar1->m_Items);
                                          if (1 < (uint)pSVar1->max_length) {
                                            pSVar1->m_Items[1] = "None";
                                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                            auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                            pSVar2 = auVar3._0_8_;
                                            Settings_KeybindSetting___ctor
                                                      (pSVar2,pSVar1,auVar3._8_8_);
                                            (__this->fields).QuickSelect4 = pSVar2;
                                            il2cpp_runtime_glue(&(__this->fields).QuickSelect4,pSVar2
                                                              );
                                            pSVar1 = (System_String_array *)
                                                     il2cpp_glue_02274930(TypeInfo_string,2);
                                            if (pSVar1 == (System_String_array *)0x0)
                                            goto LAB_03f0682a;
                                            if ((int)pSVar1->max_length != 0) {
                                              pSVar1->m_Items[0] = "Alpha5";
                                              il2cpp_runtime_glue(pSVar1->m_Items);
                                              if (1 < (uint)pSVar1->max_length) {
                                                pSVar1->m_Items[1] = "None";
                                                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                pSVar2 = auVar3._0_8_;
                                                Settings_KeybindSetting___ctor
                                                          (pSVar2,pSVar1,auVar3._8_8_);
                                                (__this->fields).QuickSelect5 = pSVar2;
                                                il2cpp_runtime_glue(&(__this->fields).QuickSelect5,
                                                                   pSVar2);
                                                pSVar1 = (System_String_array *)
                                                         il2cpp_glue_02274930(TypeInfo_string,2);
                                                if (pSVar1 == (System_String_array *)0x0)
                                                goto LAB_03f0682a;
                                                if ((int)pSVar1->max_length != 0) {
                                                  pSVar1->m_Items[0] = "Alpha6";
                                                  il2cpp_runtime_glue(pSVar1->m_Items);
                                                  if (1 < (uint)pSVar1->max_length) {
                                                    pSVar1->m_Items[1] = "None";
                                                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                    auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                    pSVar2 = auVar3._0_8_;
                                                    Settings_KeybindSetting___ctor
                                                              (pSVar2,pSVar1,auVar3._8_8_);
                                                    (__this->fields).QuickSelect6 = pSVar2;
                                                    il2cpp_runtime_glue(&(__this->fields).
                                                                        QuickSelect6,pSVar2);
                                                    pSVar1 = (System_String_array *)
                                                             il2cpp_glue_02274930(TypeInfo_string,2);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto LAB_03f0682a;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      pSVar1->m_Items[0] = "Alpha7";
                                                      il2cpp_runtime_glue(pSVar1->m_Items);
                                                      if (1 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[1] = "None";
                                                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                        auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                        pSVar2 = auVar3._0_8_;
                                                        Settings_KeybindSetting___ctor
                                                                  (pSVar2,pSVar1,auVar3._8_8_);
                                                        (__this->fields).QuickSelect7 = pSVar2;
                                                        il2cpp_runtime_glue(&(__this->fields).
                                                                            QuickSelect7,pSVar2);
                                                        pSVar1 = (System_String_array *)
                                                                 il2cpp_glue_02274930(TypeInfo_string,2);
                                                        if (pSVar1 == (System_String_array *)0x0)
                                                        goto LAB_03f0682a;
                                                        if ((int)pSVar1->max_length != 0) {
                                                          pSVar1->m_Items[0] = "Alpha8";
                                                          il2cpp_runtime_glue(pSVar1->m_Items);
                                                          if (1 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[1] = "None";
                                                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                            auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting
                                                                                       );
                                                            pSVar2 = auVar3._0_8_;
                                                            Settings_KeybindSetting___ctor
                                                                      (pSVar2,pSVar1,auVar3._8_8_);
                                                            (__this->fields).QuickSelect8 = pSVar2;
                                                            il2cpp_runtime_glue(&(__this->fields).
                                                                                QuickSelect8,pSVar2)
                                                            ;
                                                            pSVar1 = (System_String_array *)
                                                                     il2cpp_glue_02274930(TypeInfo_string,2);
                                                            if (pSVar1 == (System_String_array *)0x0
                                                               ) goto LAB_03f0682a;
                                                            if ((int)pSVar1->max_length != 0) {
                                                              pSVar1->m_Items[0] = "F1";
                                                              il2cpp_runtime_glue(pSVar1->m_Items);
                                                              if (1 < (uint)pSVar1->max_length) {
                                                                pSVar1->m_Items[1] = "None";
                                                                il2cpp_runtime_glue(pSVar1->m_Items +
                                                                                   1);
                                                                auVar3 = il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  pSVar2 = auVar3._0_8_;
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,auVar3._8_8_);
                                                  (__this->fields).Function1 = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).Function1,
                                                                     pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f0682a;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "F2";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).Function2 = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).Function2
                                                                         ,pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f0682a;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "F3";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          pSVar2 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,auVar3._8_8_);
                                                          (__this->fields).Function3 = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              Function3,pSVar2);
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03f0682a;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "F4";
                                                            il2cpp_runtime_glue(pSVar1->m_Items);
                                                            if (1 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[1] = "None";
                                                              il2cpp_runtime_glue(pSVar1->m_Items + 1
                                                                                );
                                                              auVar3 = il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  method_00 = auVar3._0_8_;
                                                  Settings_KeybindSetting___ctor
                                                            ((Settings_KeybindSetting_o *)method_00,
                                                             pSVar1,auVar3._8_8_);
                                                  (__this->fields).Function4 =
                                                       (Settings_KeybindSetting_o *)method_00;
                                                  il2cpp_runtime_glue(&(__this->fields).Function4);
                                                  Settings_BaseSettingsContainer___ctor
                                                            ((Settings_SaveableSettingsContainer_o *
                                                             )__this,method_00);
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
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f0682a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


