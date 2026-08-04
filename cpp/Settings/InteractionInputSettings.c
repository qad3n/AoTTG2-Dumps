// Type: Settings.InteractionInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InteractionInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/InteractionInputSettings.cs
// --------------------------------

// Settings.InteractionInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_InteractionInputSettings__get_FileName (Settings_InteractionInputSettings_o* __this, const MethodInfo* method);
// 0x41f6dd0

System_String_o *
Settings_InteractionInputSettings__get_FileName
          (Settings_InteractionInputSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ad86c == '\0') {
    il2cpp_runtime_helper_023445d0(&"InteractionInput.json");
    g_data_057ad86c = '\x01';
  }
  return "InteractionInput.json";
}


// Settings.InteractionInputSettings$$.ctor
// il2cpp: void Settings_InteractionInputSettings___ctor (Settings_InteractionInputSettings_o* __this, const MethodInfo* method);
// 0x41f4da0

void Settings_InteractionInputSettings___ctor(Settings_InteractionInputSettings_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  Settings_PresetSettingsContainer_c *pSVar3;
  System_Collections_Specialized_OrderedDictionary_o *pSVar4;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar5;
  MethodInfo *pMVar6;
  Settings_PresetSettingsContainer_o *__this_00;
  undefined1 auVar7 [16];
  
  if (g_data_057ad86d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"J");
    il2cpp_runtime_helper_023445d0(&"F4");
    il2cpp_runtime_helper_023445d0(&"F2");
    il2cpp_runtime_helper_023445d0(&"Alpha6");
    il2cpp_runtime_helper_023445d0(&"Alpha5");
    il2cpp_runtime_helper_023445d0(&"Alpha8");
    il2cpp_runtime_helper_023445d0(&"G");
    il2cpp_runtime_helper_023445d0(&"H");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Space");
    il2cpp_runtime_helper_023445d0(&"Alpha3");
    il2cpp_runtime_helper_023445d0(&"Alpha2");
    il2cpp_runtime_helper_023445d0(&"Alpha1");
    il2cpp_runtime_helper_023445d0(&"F3");
    il2cpp_runtime_helper_023445d0(&"Alpha4");
    il2cpp_runtime_helper_023445d0(&"Alpha7");
    il2cpp_runtime_helper_023445d0(&"F1");
    il2cpp_runtime_helper_023445d0(&"N");
    il2cpp_runtime_helper_023445d0(&"F");
    g_data_057ad86d = '\x01';
  }
  __this_00 = TypeInfo_string;
  pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      __this_00 = (Settings_PresetSettingsContainer_o *)pSVar1->m_Items;
      pSVar1->m_Items[0] = "G";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "None";
        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
        auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
        pSVar2 = auVar7._0_8_;
        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
        (__this->fields).Interact = pSVar2;
        il2cpp_runtime_helper_022b4080(&(__this->fields).Interact,pSVar2);
        __this_00 = TypeInfo_string;
        pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
        if (pSVar1 == (System_String_array *)0x0) goto label_041f580a;
        if ((int)pSVar1->max_length != 0) {
          __this_00 = (Settings_PresetSettingsContainer_o *)pSVar1->m_Items;
          pSVar1->m_Items[0] = "H";
          il2cpp_runtime_helper_022b4080();
          if (1 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[1] = "None";
            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
            auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
            pSVar2 = auVar7._0_8_;
            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
            (__this->fields).Interact2 = pSVar2;
            il2cpp_runtime_helper_022b4080(&(__this->fields).Interact2,pSVar2);
            __this_00 = TypeInfo_string;
            pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
            if (pSVar1 == (System_String_array *)0x0) goto label_041f580a;
            if ((int)pSVar1->max_length != 0) {
              __this_00 = (Settings_PresetSettingsContainer_o *)pSVar1->m_Items;
              pSVar1->m_Items[0] = "J";
              il2cpp_runtime_helper_022b4080();
              if (1 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[1] = "None";
                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                pSVar2 = auVar7._0_8_;
                Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
                (__this->fields).Interact3 = pSVar2;
                il2cpp_runtime_helper_022b4080(&(__this->fields).Interact3,pSVar2);
                __this_00 = TypeInfo_string;
                pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                if (pSVar1 == (System_String_array *)0x0) goto label_041f580a;
                if ((int)pSVar1->max_length != 0) {
                  __this_00 = (Settings_PresetSettingsContainer_o *)pSVar1->m_Items;
                  pSVar1->m_Items[0] = "F";
                  il2cpp_runtime_helper_022b4080();
                  if (1 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[1] = "None";
                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                    auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                    pSVar2 = auVar7._0_8_;
                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
                    (__this->fields).ItemMenu = pSVar2;
                    il2cpp_runtime_helper_022b4080(&(__this->fields).ItemMenu,pSVar2);
                    __this_00 = TypeInfo_string;
                    pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                    if (pSVar1 == (System_String_array *)0x0) goto label_041f580a;
                    if ((int)pSVar1->max_length != 0) {
                      __this_00 = (Settings_PresetSettingsContainer_o *)pSVar1->m_Items;
                      pSVar1->m_Items[0] = "N";
                      il2cpp_runtime_helper_022b4080();
                      if (1 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[1] = "None";
                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                        auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                        pSVar2 = auVar7._0_8_;
                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
                        (__this->fields).EmoteMenu = pSVar2;
                        il2cpp_runtime_helper_022b4080(&(__this->fields).EmoteMenu,pSVar2);
                        __this_00 = TypeInfo_string;
                        pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                        if (pSVar1 == (System_String_array *)0x0) goto label_041f580a;
                        if ((int)pSVar1->max_length != 0) {
                          __this_00 = (Settings_PresetSettingsContainer_o *)pSVar1->m_Items;
                          pSVar1->m_Items[0] = "Space";
                          il2cpp_runtime_helper_022b4080();
                          if (1 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[1] = "None";
                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                            auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                            pSVar2 = auVar7._0_8_;
                            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
                            (__this->fields).MenuNext = pSVar2;
                            il2cpp_runtime_helper_022b4080(&(__this->fields).MenuNext,pSVar2);
                            __this_00 = TypeInfo_string;
                            pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                            if (pSVar1 == (System_String_array *)0x0) goto label_041f580a;
                            if ((int)pSVar1->max_length != 0) {
                              __this_00 = (Settings_PresetSettingsContainer_o *)pSVar1->m_Items;
                              pSVar1->m_Items[0] = "Alpha1";
                              il2cpp_runtime_helper_022b4080();
                              if (1 < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[1] = "None";
                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                pSVar2 = auVar7._0_8_;
                                Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
                                (__this->fields).QuickSelect1 = pSVar2;
                                il2cpp_runtime_helper_022b4080(&(__this->fields).QuickSelect1,pSVar2);
                                __this_00 = TypeInfo_string;
                                pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                if (pSVar1 == (System_String_array *)0x0) goto label_041f580a;
                                if ((int)pSVar1->max_length != 0) {
                                  __this_00 = (Settings_PresetSettingsContainer_o *)pSVar1->m_Items;
                                  pSVar1->m_Items[0] = "Alpha2";
                                  il2cpp_runtime_helper_022b4080();
                                  if (1 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[1] = "None";
                                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                    auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                    pSVar2 = auVar7._0_8_;
                                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
                                    (__this->fields).QuickSelect2 = pSVar2;
                                    il2cpp_runtime_helper_022b4080(&(__this->fields).QuickSelect2,pSVar2);
                                    __this_00 = TypeInfo_string;
                                    pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                    if (pSVar1 == (System_String_array *)0x0) goto label_041f580a;
                                    if ((int)pSVar1->max_length != 0) {
                                      __this_00 = (Settings_PresetSettingsContainer_o *)pSVar1->m_Items;
                                      pSVar1->m_Items[0] = "Alpha3";
                                      il2cpp_runtime_helper_022b4080();
                                      if (1 < (uint)pSVar1->max_length) {
                                        pSVar1->m_Items[1] = "None";
                                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                        auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                        pSVar2 = auVar7._0_8_;
                                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
                                        (__this->fields).QuickSelect3 = pSVar2;
                                        il2cpp_runtime_helper_022b4080(&(__this->fields).QuickSelect3,pSVar2);
                                        __this_00 = TypeInfo_string;
                                        pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                        if (pSVar1 == (System_String_array *)0x0) goto label_041f580a;
                                        if ((int)pSVar1->max_length != 0) {
                                          __this_00 = (Settings_PresetSettingsContainer_o *)pSVar1->m_Items;
                                          pSVar1->m_Items[0] = "Alpha4";
                                          il2cpp_runtime_helper_022b4080();
                                          if (1 < (uint)pSVar1->max_length) {
                                            pSVar1->m_Items[1] = "None";
                                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                            auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                            pSVar2 = auVar7._0_8_;
                                            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
                                            (__this->fields).QuickSelect4 = pSVar2;
                                            il2cpp_runtime_helper_022b4080(&(__this->fields).QuickSelect4,pSVar2);
                                            __this_00 = TypeInfo_string;
                                            pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                            if (pSVar1 == (System_String_array *)0x0) goto label_041f580a;
                                            if ((int)pSVar1->max_length != 0) {
                                              __this_00 = (Settings_PresetSettingsContainer_o *)
                                                          pSVar1->m_Items;
                                              pSVar1->m_Items[0] = "Alpha5";
                                              il2cpp_runtime_helper_022b4080();
                                              if (1 < (uint)pSVar1->max_length) {
                                                pSVar1->m_Items[1] = "None";
                                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                pSVar2 = auVar7._0_8_;
                                                Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
                                                (__this->fields).QuickSelect5 = pSVar2;
                                                il2cpp_runtime_helper_022b4080(&(__this->fields).QuickSelect5,pSVar2);
                                                __this_00 = TypeInfo_string;
                                                pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                if (pSVar1 == (System_String_array *)0x0) goto label_041f580a;
                                                if ((int)pSVar1->max_length != 0) {
                                                  __this_00 = (Settings_PresetSettingsContainer_o *)
                                                              pSVar1->m_Items;
                                                  pSVar1->m_Items[0] = "Alpha6";
                                                  il2cpp_runtime_helper_022b4080();
                                                  if (1 < (uint)pSVar1->max_length) {
                                                    pSVar1->m_Items[1] = "None";
                                                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                    auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                    pSVar2 = auVar7._0_8_;
                                                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_)
                                                    ;
                                                    (__this->fields).QuickSelect6 = pSVar2;
                                                    il2cpp_runtime_helper_022b4080(&(__this->fields).QuickSelect6,pSVar2);
                                                    __this_00 = TypeInfo_string;
                                                    pSVar1 = (System_String_array *)
                                                             il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto label_041f580a;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      __this_00 = (Settings_PresetSettingsContainer_o *)
                                                                  pSVar1->m_Items;
                                                      pSVar1->m_Items[0] = "Alpha7";
                                                      il2cpp_runtime_helper_022b4080();
                                                      if (1 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[1] = "None";
                                                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                        auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                        pSVar2 = auVar7._0_8_;
                                                        Settings_KeybindSetting___ctor
                                                                  (pSVar2,pSVar1,auVar7._8_8_);
                                                        (__this->fields).QuickSelect7 = pSVar2;
                                                        il2cpp_runtime_helper_022b4080(&(__this->fields).QuickSelect7,
                                                                           pSVar2);
                                                        __this_00 = TypeInfo_string;
                                                        pSVar1 = (System_String_array *)
                                                                 il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                        if (pSVar1 == (System_String_array *)0x0)
                                                        goto label_041f580a;
                                                        if ((int)pSVar1->max_length != 0) {
                                                          __this_00 = (Settings_PresetSettingsContainer_o *)
                                                                      pSVar1->m_Items;
                                                          pSVar1->m_Items[0] = "Alpha8";
                                                          il2cpp_runtime_helper_022b4080();
                                                          if (1 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[1] = "None";
                                                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                            auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                            pSVar2 = auVar7._0_8_;
                                                            Settings_KeybindSetting___ctor
                                                                      (pSVar2,pSVar1,auVar7._8_8_);
                                                            (__this->fields).QuickSelect8 = pSVar2;
                                                            il2cpp_runtime_helper_022b4080(&(__this->fields).QuickSelect8,
                                                                               pSVar2);
                                                            __this_00 = TypeInfo_string;
                                                            pSVar1 = (System_String_array *)
                                                                     il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                            if (pSVar1 == (System_String_array *)0x0)
                                                            goto label_041f580a;
                                                            if ((int)pSVar1->max_length != 0) {
                                                              __this_00 = (Settings_PresetSettingsContainer_o
                                                                           *)pSVar1->m_Items;
                                                              pSVar1->m_Items[0] = "F1";
                                                              il2cpp_runtime_helper_022b4080();
                                                              if (1 < (uint)pSVar1->max_length) {
                                                                pSVar1->m_Items[1] = "None";
                                                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                pSVar2 = auVar7._0_8_;
                                                                Settings_KeybindSetting___ctor
                                                                          (pSVar2,pSVar1,auVar7._8_8_);
                                                                (__this->fields).Function1 = pSVar2;
                                                                il2cpp_runtime_helper_022b4080(&(__this->fields).Function1
                                                                                   ,pSVar2);
                                                                __this_00 = TypeInfo_string;
                                                                pSVar1 = (System_String_array *)
                                                                         il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                if (pSVar1 == (System_String_array *)0x0)
                                                                goto label_041f580a;
                                                                if ((int)pSVar1->max_length != 0) {
                                                                  __this_00 = (
                                                       Settings_PresetSettingsContainer_o *)pSVar1->m_Items;
                                                       pSVar1->m_Items[0] = "F2";
                                                       il2cpp_runtime_helper_022b4080();
                                                       if (1 < (uint)pSVar1->max_length) {
                                                         pSVar1->m_Items[1] = "None";
                                                         il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                         auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                         pSVar2 = auVar7._0_8_;
                                                         Settings_KeybindSetting___ctor
                                                                   (pSVar2,pSVar1,auVar7._8_8_);
                                                         (__this->fields).Function2 = pSVar2;
                                                         il2cpp_runtime_helper_022b4080(&(__this->fields).Function2,pSVar2
                                                                           );
                                                         __this_00 = TypeInfo_string;
                                                         pSVar1 = (System_String_array *)
                                                                  il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                         if (pSVar1 == (System_String_array *)0x0)
                                                         goto label_041f580a;
                                                         if ((int)pSVar1->max_length != 0) {
                                                           __this_00 = (Settings_PresetSettingsContainer_o *)
                                                                       pSVar1->m_Items;
                                                           pSVar1->m_Items[0] = "F3";
                                                           il2cpp_runtime_helper_022b4080();
                                                           if (1 < (uint)pSVar1->max_length) {
                                                             pSVar1->m_Items[1] = "None";
                                                             il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                             auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                             pSVar2 = auVar7._0_8_;
                                                             Settings_KeybindSetting___ctor
                                                                       (pSVar2,pSVar1,auVar7._8_8_);
                                                             (__this->fields).Function3 = pSVar2;
                                                             il2cpp_runtime_helper_022b4080(&(__this->fields).Function3,
                                                                                pSVar2);
                                                             __this_00 = TypeInfo_string;
                                                             pSVar1 = (System_String_array *)
                                                                      il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                             if (pSVar1 == (System_String_array *)0x0)
                                                             goto label_041f580a;
                                                             if ((int)pSVar1->max_length != 0) {
                                                               __this_00 = (Settings_PresetSettingsContainer_o
                                                                            *)pSVar1->m_Items;
                                                               pSVar1->m_Items[0] = "F4";
                                                               il2cpp_runtime_helper_022b4080();
                                                               if (1 < (uint)pSVar1->max_length) {
                                                                 pSVar1->m_Items[1] = "None";
                                                                 il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                 auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                 pMVar6 = auVar7._0_8_;
                                                                 Settings_KeybindSetting___ctor
                                                                           ((Settings_KeybindSetting_o *)
                                                                            pMVar6,pSVar1,auVar7._8_8_);
                                                                 (__this->fields).Function4 =
                                                                      (Settings_KeybindSetting_o *)pMVar6;
                                                                 il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                     Function4);
                                                                 Settings_BaseSettingsContainer___ctor
                                                                           ((
                                                       Settings_PresetSettingsContainer_o *)__this,pMVar6);
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
    il2cpp_runtime_helper_022b2ca0();
  }
label_041f580a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad86f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"WheelUp");
    il2cpp_runtime_helper_023445d0(&"S");
    il2cpp_runtime_helper_023445d0(&"LeftControl+X");
    il2cpp_runtime_helper_023445d0(&"LeftAlt");
    il2cpp_runtime_helper_023445d0(&"3");
    il2cpp_runtime_helper_023445d0(&"LeftControl+Y");
    il2cpp_runtime_helper_023445d0(&"2");
    il2cpp_runtime_helper_023445d0(&"Escape");
    il2cpp_runtime_helper_023445d0(&"LeftControl+Z");
    il2cpp_runtime_helper_023445d0(&"W");
    il2cpp_runtime_helper_023445d0(&"G");
    il2cpp_runtime_helper_023445d0(&"Q");
    il2cpp_runtime_helper_023445d0(&"LeftShift");
    il2cpp_runtime_helper_023445d0(&"DownArrow");
    il2cpp_runtime_helper_023445d0(&"V");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"E");
    il2cpp_runtime_helper_023445d0(&"Mouse1");
    il2cpp_runtime_helper_023445d0(&"Space");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"RightArrow");
    il2cpp_runtime_helper_023445d0(&"LeftControl+V");
    il2cpp_runtime_helper_023445d0(&"Mouse2");
    il2cpp_runtime_helper_023445d0(&"O");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"WheelDown");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"LeftControl+C");
    il2cpp_runtime_helper_023445d0(&"UpArrow");
    il2cpp_runtime_helper_023445d0(&"LeftArrow");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"A");
    il2cpp_runtime_helper_023445d0(&"0");
    il2cpp_runtime_helper_023445d0(&"Mouse0");
    il2cpp_runtime_helper_023445d0(&"LeftControl+S");
    il2cpp_runtime_helper_023445d0(&"LeftControl");
    g_data_057ad86f = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "W";
      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "None";
        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
        auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
        pSVar3 = auVar7._0_8_;
        Settings_KeybindSetting___ctor((Settings_KeybindSetting_o *)pSVar3,pSVar1,auVar7._8_8_);
        __this_00[1].klass = pSVar3;
        il2cpp_runtime_helper_022b4080(__this_00 + 1,pSVar3);
        pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
        if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
        if ((int)pSVar1->max_length != 0) {
          pSVar1->m_Items[0] = "S";
          il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
          if (1 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[1] = "None";
            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
            auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
            pSVar2 = auVar7._0_8_;
            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
            __this_00[1].monitor = pSVar2;
            il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pSVar2);
            pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
            if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
            if ((int)pSVar1->max_length != 0) {
              pSVar1->m_Items[0] = "A";
              il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
              if (1 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[1] = "None";
                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                pSVar4 = auVar7._0_8_;
                Settings_KeybindSetting___ctor((Settings_KeybindSetting_o *)pSVar4,pSVar1,auVar7._8_8_);
                __this_00[1].fields.Settings = pSVar4;
                il2cpp_runtime_helper_022b4080(&__this_00[1].fields,pSVar4);
                pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                if ((int)pSVar1->max_length != 0) {
                  pSVar1->m_Items[0] = "D";
                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                  if (1 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[1] = "None";
                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                    auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                    pSVar5 = auVar7._0_8_;
                    Settings_KeybindSetting___ctor((Settings_KeybindSetting_o *)pSVar5,pSVar1,auVar7._8_8_);
                    __this_00[1].fields.TypedSettings = pSVar5;
                    il2cpp_runtime_helper_022b4080(&__this_00[1].fields.TypedSettings,pSVar5);
                    pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                    if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                    if ((int)pSVar1->max_length != 0) {
                      pSVar1->m_Items[0] = "E";
                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                      if (1 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[1] = "None";
                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                        auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                        pSVar3 = auVar7._0_8_;
                        Settings_KeybindSetting___ctor
                                  ((Settings_KeybindSetting_o *)pSVar3,pSVar1,auVar7._8_8_);
                        __this_00[2].klass = pSVar3;
                        il2cpp_runtime_helper_022b4080(__this_00 + 2,pSVar3);
                        pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                        if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                        if ((int)pSVar1->max_length != 0) {
                          pSVar1->m_Items[0] = "Q";
                          il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                          if (1 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[1] = "None";
                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                            auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                            pSVar2 = auVar7._0_8_;
                            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
                            __this_00[2].monitor = pSVar2;
                            il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pSVar2);
                            pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                            if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                            if ((int)pSVar1->max_length != 0) {
                              pSVar1->m_Items[0] = "LeftShift";
                              il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                              if (1 < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[1] = "None";
                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                pSVar4 = auVar7._0_8_;
                                Settings_KeybindSetting___ctor
                                          ((Settings_KeybindSetting_o *)pSVar4,pSVar1,auVar7._8_8_);
                                __this_00[2].fields.Settings = pSVar4;
                                il2cpp_runtime_helper_022b4080(&__this_00[2].fields,pSVar4);
                                pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                                if ((int)pSVar1->max_length != 0) {
                                  pSVar1->m_Items[0] = "LeftAlt";
                                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                  if (1 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[1] = "None";
                                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                    auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                    pSVar5 = auVar7._0_8_;
                                    Settings_KeybindSetting___ctor
                                              ((Settings_KeybindSetting_o *)pSVar5,pSVar1,auVar7._8_8_);
                                    __this_00[2].fields.TypedSettings = pSVar5;
                                    il2cpp_runtime_helper_022b4080(&__this_00[2].fields.TypedSettings,pSVar5);
                                    pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                    if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                                    if ((int)pSVar1->max_length != 0) {
                                      pSVar1->m_Items[0] = "Mouse2";
                                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                      if (1 < (uint)pSVar1->max_length) {
                                        pSVar1->m_Items[1] = "None";
                                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                        auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                        pSVar3 = auVar7._0_8_;
                                        Settings_KeybindSetting___ctor
                                                  ((Settings_KeybindSetting_o *)pSVar3,pSVar1,auVar7._8_8_);
                                        __this_00[3].klass = pSVar3;
                                        il2cpp_runtime_helper_022b4080(__this_00 + 3,pSVar3);
                                        pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                        if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                                        if ((int)pSVar1->max_length != 0) {
                                          pSVar1->m_Items[0] = "WheelUp";
                                          il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                          if (1 < (uint)pSVar1->max_length) {
                                            pSVar1->m_Items[1] = "None";
                                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                            auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                            pSVar2 = auVar7._0_8_;
                                            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar7._8_8_);
                                            __this_00[3].monitor = pSVar2;
                                            il2cpp_runtime_helper_022b4080(&__this_00[3].monitor,pSVar2);
                                            pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                            if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                                            if ((int)pSVar1->max_length != 0) {
                                              pSVar1->m_Items[0] = "WheelDown";
                                              il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                              if (1 < (uint)pSVar1->max_length) {
                                                pSVar1->m_Items[1] = "None";
                                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                pSVar4 = auVar7._0_8_;
                                                Settings_KeybindSetting___ctor
                                                          ((Settings_KeybindSetting_o *)pSVar4,pSVar1,
                                                           auVar7._8_8_);
                                                __this_00[3].fields.Settings = pSVar4;
                                                il2cpp_runtime_helper_022b4080(&__this_00[3].fields,pSVar4);
                                                pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                                                if ((int)pSVar1->max_length != 0) {
                                                  pSVar1->m_Items[0] = "Mouse0";
                                                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                  if (1 < (uint)pSVar1->max_length) {
                                                    pSVar1->m_Items[1] = "None";
                                                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                    auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                    pSVar5 = auVar7._0_8_;
                                                    Settings_KeybindSetting___ctor
                                                              ((Settings_KeybindSetting_o *)pSVar5,pSVar1,
                                                               auVar7._8_8_);
                                                    __this_00[3].fields.TypedSettings = pSVar5;
                                                    il2cpp_runtime_helper_022b4080(&__this_00[3].fields.TypedSettings,
                                                                       pSVar5);
                                                    pSVar1 = (System_String_array *)
                                                             il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto label_041f6dbe;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      pSVar1->m_Items[0] = "LeftControl";
                                                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                      if (1 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[1] = "None";
                                                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                        auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                        pSVar3 = auVar7._0_8_;
                                                        Settings_KeybindSetting___ctor
                                                                  ((Settings_KeybindSetting_o *)pSVar3,pSVar1,
                                                                   auVar7._8_8_);
                                                        __this_00[4].klass = pSVar3;
                                                        il2cpp_runtime_helper_022b4080(__this_00 + 4,pSVar3);
                                                        pSVar1 = (System_String_array *)
                                                                 il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                        if (pSVar1 == (System_String_array *)0x0)
                                                        goto label_041f6dbe;
                                                        if ((int)pSVar1->max_length != 0) {
                                                          pSVar1->m_Items[0] = "Escape";
                                                          il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                          if (1 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[1] = "None";
                                                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                            auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                            pSVar2 = auVar7._0_8_;
                                                            Settings_KeybindSetting___ctor
                                                                      (pSVar2,pSVar1,auVar7._8_8_);
                                                            __this_00[4].monitor = pSVar2;
                                                            il2cpp_runtime_helper_022b4080(&__this_00[4].monitor,pSVar2);
                                                            pSVar1 = (System_String_array *)
                                                                     il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                            if (pSVar1 == (System_String_array *)0x0)
                                                            goto label_041f6dbe;
                                                            if ((int)pSVar1->max_length != 0) {
                                                              pSVar1->m_Items[0] = "Mouse1";
                                                              il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                              if (1 < (uint)pSVar1->max_length) {
                                                                pSVar1->m_Items[1] = "None";
                                                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                pSVar4 = auVar7._0_8_;
                                                                Settings_KeybindSetting___ctor
                                                                          ((Settings_KeybindSetting_o *)pSVar4
                                                                           ,pSVar1,auVar7._8_8_);
                                                                __this_00[4].fields.Settings = pSVar4;
                                                                il2cpp_runtime_helper_022b4080(&__this_00[4].fields,pSVar4
                                                                                  );
                                                                pSVar1 = (System_String_array *)
                                                                         il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                if (pSVar1 == (System_String_array *)0x0)
                                                                goto label_041f6dbe;
                                                                if ((int)pSVar1->max_length != 0) {
                                                                  pSVar1->m_Items[0] = "Space";
                                                                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                  if (1 < (uint)pSVar1->max_length) {
                                                                    pSVar1->m_Items[1] = "None";
                                                                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                    auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                    pSVar5 = auVar7._0_8_;
                                                                    Settings_KeybindSetting___ctor
                                                                              ((Settings_KeybindSetting_o *)
                                                                               pSVar5,pSVar1,auVar7._8_8_);
                                                                    __this_00[4].fields.TypedSettings = pSVar5
                                                                    ;
                                                                    il2cpp_runtime_helper_022b4080(&__this_00[4].fields.
                                                                                        TypedSettings,pSVar5);
                                                                    pSVar1 = (System_String_array *)
                                                                             il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                    if (pSVar1 == (System_String_array *)0x0)
                                                                    goto label_041f6dbe;
                                                                    if ((int)pSVar1->max_length != 0) {
                                                                      pSVar1->m_Items[0] = "C";
                                                                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                      if (1 < (uint)pSVar1->max_length) {
                                                                        pSVar1->m_Items[1] = "None";
                                                                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1
                                                                                          );
                                                                        auVar7 = il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       pSVar3 = auVar7._0_8_;
                                                       Settings_KeybindSetting___ctor
                                                                 ((Settings_KeybindSetting_o *)pSVar3,pSVar1,
                                                                  auVar7._8_8_);
                                                       __this_00[5].klass = pSVar3;
                                                       il2cpp_runtime_helper_022b4080(__this_00 + 5,pSVar3);
                                                       pSVar1 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_041f6dbe;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "G";
                                                         il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                         if (1 < (uint)pSVar1->max_length) {
                                                           pSVar1->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                           auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           pSVar2 = auVar7._0_8_;
                                                           Settings_KeybindSetting___ctor
                                                                     (pSVar2,pSVar1,auVar7._8_8_);
                                                           __this_00[5].monitor = pSVar2;
                                                           il2cpp_runtime_helper_022b4080(&__this_00[5].monitor,pSVar2);
                                                           pSVar1 = (System_String_array *)
                                                                    il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                           if (pSVar1 == (System_String_array *)0x0)
                                                           goto label_041f6dbe;
                                                           if ((int)pSVar1->max_length != 0) {
                                                             pSVar1->m_Items[0] = "Delete";
                                                             il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                             if (1 < (uint)pSVar1->max_length) {
                                                               pSVar1->m_Items[1] = "None";
                                                               il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                               auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                               pSVar4 = auVar7._0_8_;
                                                               Settings_KeybindSetting___ctor
                                                                         ((Settings_KeybindSetting_o *)pSVar4,
                                                                          pSVar1,auVar7._8_8_);
                                                               __this_00[5].fields.Settings = pSVar4;
                                                               il2cpp_runtime_helper_022b4080(&__this_00[5].fields,pSVar4)
                                                               ;
                                                               pSVar1 = (System_String_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                               if (pSVar1 == (System_String_array *)0x0)
                                                               goto label_041f6dbe;
                                                               if ((int)pSVar1->max_length != 0) {
                                                                 pSVar1->m_Items[0] = "LeftControl+C";
                                                                 il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                 if (1 < (uint)pSVar1->max_length) {
                                                                   pSVar1->m_Items[1] = "None";
                                                                   il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                   auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                   pSVar5 = auVar7._0_8_;
                                                                   Settings_KeybindSetting___ctor
                                                                             ((Settings_KeybindSetting_o *)
                                                                              pSVar5,pSVar1,auVar7._8_8_);
                                                                   __this_00[5].fields.TypedSettings = pSVar5;
                                                                   il2cpp_runtime_helper_022b4080(&__this_00[5].fields.
                                                                                       TypedSettings,pSVar5);
                                                                   pSVar1 = (System_String_array *)
                                                                            il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                   if (pSVar1 == (System_String_array *)0x0)
                                                                   goto label_041f6dbe;
                                                                   if ((int)pSVar1->max_length != 0) {
                                                                     pSVar1->m_Items[0] = "LeftControl+V";
                                                                     il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                     if (1 < (uint)pSVar1->max_length) {
                                                                       pSVar1->m_Items[1] = "None";
                                                                       il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1)
                                                                       ;
                                                                       auVar7 = il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       pSVar3 = auVar7._0_8_;
                                                       Settings_KeybindSetting___ctor
                                                                 ((Settings_KeybindSetting_o *)pSVar3,pSVar1,
                                                                  auVar7._8_8_);
                                                       __this_00[6].klass = pSVar3;
                                                       il2cpp_runtime_helper_022b4080(__this_00 + 6,pSVar3);
                                                       pSVar1 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_041f6dbe;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftControl+X";
                                                         il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                         if (1 < (uint)pSVar1->max_length) {
                                                           pSVar1->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                           auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           pSVar2 = auVar7._0_8_;
                                                           Settings_KeybindSetting___ctor
                                                                     (pSVar2,pSVar1,auVar7._8_8_);
                                                           __this_00[6].monitor = pSVar2;
                                                           il2cpp_runtime_helper_022b4080(&__this_00[6].monitor,pSVar2);
                                                           pSVar1 = (System_String_array *)
                                                                    il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                           if (pSVar1 == (System_String_array *)0x0)
                                                           goto label_041f6dbe;
                                                           if ((int)pSVar1->max_length != 0) {
                                                             pSVar1->m_Items[0] = "LeftControl+Z";
                                                             il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                             if (1 < (uint)pSVar1->max_length) {
                                                               pSVar1->m_Items[1] = "None";
                                                               il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                               auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                               pSVar4 = auVar7._0_8_;
                                                               Settings_KeybindSetting___ctor
                                                                         ((Settings_KeybindSetting_o *)pSVar4,
                                                                          pSVar1,auVar7._8_8_);
                                                               __this_00[6].fields.Settings = pSVar4;
                                                               il2cpp_runtime_helper_022b4080(&__this_00[6].fields,pSVar4)
                                                               ;
                                                               pSVar1 = (System_String_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                               if (pSVar1 == (System_String_array *)0x0)
                                                               goto label_041f6dbe;
                                                               if ((int)pSVar1->max_length != 0) {
                                                                 pSVar1->m_Items[0] = "LeftControl+Y";
                                                                 il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                 if (1 < (uint)pSVar1->max_length) {
                                                                   pSVar1->m_Items[1] = "None";
                                                                   il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                   auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                   pSVar5 = auVar7._0_8_;
                                                                   Settings_KeybindSetting___ctor
                                                                             ((Settings_KeybindSetting_o *)
                                                                              pSVar5,pSVar1,auVar7._8_8_);
                                                                   __this_00[6].fields.TypedSettings = pSVar5;
                                                                   il2cpp_runtime_helper_022b4080(&__this_00[6].fields.
                                                                                       TypedSettings,pSVar5);
                                                                   pSVar1 = (System_String_array *)
                                                                            il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                   if (pSVar1 == (System_String_array *)0x0)
                                                                   goto label_041f6dbe;
                                                                   if ((int)pSVar1->max_length != 0) {
                                                                     pSVar1->m_Items[0] = "LeftControl+S";
                                                                     il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                     if (1 < (uint)pSVar1->max_length) {
                                                                       pSVar1->m_Items[1] = "None";
                                                                       il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1)
                                                                       ;
                                                                       auVar7 = il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       pSVar3 = auVar7._0_8_;
                                                       Settings_KeybindSetting___ctor
                                                                 ((Settings_KeybindSetting_o *)pSVar3,pSVar1,
                                                                  auVar7._8_8_);
                                                       __this_00[7].klass = pSVar3;
                                                       il2cpp_runtime_helper_022b4080(__this_00 + 7,pSVar3);
                                                       pSVar1 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_041f6dbe;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftArrow";
                                                         il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                         if (1 < (uint)pSVar1->max_length) {
                                                           pSVar1->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                           auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           pSVar2 = auVar7._0_8_;
                                                           Settings_KeybindSetting___ctor
                                                                     (pSVar2,pSVar1,auVar7._8_8_);
                                                           __this_00[7].monitor = pSVar2;
                                                           il2cpp_runtime_helper_022b4080(&__this_00[7].monitor,pSVar2);
                                                           pSVar1 = (System_String_array *)
                                                                    il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                           if (pSVar1 == (System_String_array *)0x0)
                                                           goto label_041f6dbe;
                                                           if ((int)pSVar1->max_length != 0) {
                                                             pSVar1->m_Items[0] = "RightArrow";
                                                             il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                             if (1 < (uint)pSVar1->max_length) {
                                                               pSVar1->m_Items[1] = "None";
                                                               il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                               auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                               pSVar4 = auVar7._0_8_;
                                                               Settings_KeybindSetting___ctor
                                                                         ((Settings_KeybindSetting_o *)pSVar4,
                                                                          pSVar1,auVar7._8_8_);
                                                               __this_00[7].fields.Settings = pSVar4;
                                                               il2cpp_runtime_helper_022b4080(&__this_00[7].fields,pSVar4)
                                                               ;
                                                               pSVar1 = (System_String_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                               if (pSVar1 == (System_String_array *)0x0)
                                                               goto label_041f6dbe;
                                                               if ((int)pSVar1->max_length != 0) {
                                                                 pSVar1->m_Items[0] = "UpArrow";
                                                                 il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                 if (1 < (uint)pSVar1->max_length) {
                                                                   pSVar1->m_Items[1] = "None";
                                                                   il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                   auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                   pSVar5 = auVar7._0_8_;
                                                                   Settings_KeybindSetting___ctor
                                                                             ((Settings_KeybindSetting_o *)
                                                                              pSVar5,pSVar1,auVar7._8_8_);
                                                                   __this_00[7].fields.TypedSettings = pSVar5;
                                                                   il2cpp_runtime_helper_022b4080(&__this_00[7].fields.
                                                                                       TypedSettings,pSVar5);
                                                                   pSVar1 = (System_String_array *)
                                                                            il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                   if (pSVar1 == (System_String_array *)0x0)
                                                                   goto label_041f6dbe;
                                                                   if ((int)pSVar1->max_length != 0) {
                                                                     pSVar1->m_Items[0] = "DownArrow";
                                                                     il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                     if (1 < (uint)pSVar1->max_length) {
                                                                       pSVar1->m_Items[1] = "None";
                                                                       il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1)
                                                                       ;
                                                                       auVar7 = il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       pSVar3 = auVar7._0_8_;
                                                       Settings_KeybindSetting___ctor
                                                                 ((Settings_KeybindSetting_o *)pSVar3,pSVar1,
                                                                  auVar7._8_8_);
                                                       __this_00[8].klass = pSVar3;
                                                       il2cpp_runtime_helper_022b4080(__this_00 + 8,pSVar3);
                                                       pSVar1 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_041f6dbe;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "O";
                                                         il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                         if (1 < (uint)pSVar1->max_length) {
                                                           pSVar1->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                           auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           pSVar2 = auVar7._0_8_;
                                                           Settings_KeybindSetting___ctor
                                                                     (pSVar2,pSVar1,auVar7._8_8_);
                                                           __this_00[8].monitor = pSVar2;
                                                           il2cpp_runtime_helper_022b4080(&__this_00[8].monitor,pSVar2);
                                                           pSVar1 = (System_String_array *)
                                                                    il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                           if (pSVar1 == (System_String_array *)0x0)
                                                           goto label_041f6dbe;
                                                           if ((int)pSVar1->max_length != 0) {
                                                             pSVar1->m_Items[0] = "V";
                                                             il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                             if (1 < (uint)pSVar1->max_length) {
                                                               pSVar1->m_Items[1] = "None";
                                                               il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                               auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                               pSVar4 = auVar7._0_8_;
                                                               Settings_KeybindSetting___ctor
                                                                         ((Settings_KeybindSetting_o *)pSVar4,
                                                                          pSVar1,auVar7._8_8_);
                                                               __this_00[8].fields.Settings = pSVar4;
                                                               il2cpp_runtime_helper_022b4080(&__this_00[8].fields,pSVar4)
                                                               ;
                                                               pSVar1 = (System_String_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                               if (pSVar1 == (System_String_array *)0x0)
                                                               goto label_041f6dbe;
                                                               if ((int)pSVar1->max_length != 0) {
                                                                 pSVar1->m_Items[0] = "Mouse2";
                                                                 il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                 if (1 < (uint)pSVar1->max_length) {
                                                                   pSVar1->m_Items[1] = "None";
                                                                   il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                   auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                   pSVar5 = auVar7._0_8_;
                                                                   Settings_KeybindSetting___ctor
                                                                             ((Settings_KeybindSetting_o *)
                                                                              pSVar5,pSVar1,auVar7._8_8_);
                                                                   __this_00[8].fields.TypedSettings = pSVar5;
                                                                   il2cpp_runtime_helper_022b4080(&__this_00[8].fields.
                                                                                       TypedSettings,pSVar5);
                                                                   pSVar1 = (System_String_array *)
                                                                            il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                   if (pSVar1 == (System_String_array *)0x0)
                                                                   goto label_041f6dbe;
                                                                   if ((int)pSVar1->max_length != 0) {
                                                                     pSVar1->m_Items[0] = "LeftShift";
                                                                     il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                     if (1 < (uint)pSVar1->max_length) {
                                                                       pSVar1->m_Items[1] = "None";
                                                                       il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1)
                                                                       ;
                                                                       auVar7 = il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       pSVar3 = auVar7._0_8_;
                                                       Settings_KeybindSetting___ctor
                                                                 ((Settings_KeybindSetting_o *)pSVar3,pSVar1,
                                                                  auVar7._8_8_);
                                                       __this_00[9].klass = pSVar3;
                                                       il2cpp_runtime_helper_022b4080(__this_00 + 9,pSVar3);
                                                       pSVar1 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_041f6dbe;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftControl";
                                                         il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                         if (1 < (uint)pSVar1->max_length) {
                                                           pSVar1->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                           auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           pSVar2 = auVar7._0_8_;
                                                           Settings_KeybindSetting___ctor
                                                                     (pSVar2,pSVar1,auVar7._8_8_);
                                                           __this_00[9].monitor = pSVar2;
                                                           il2cpp_runtime_helper_022b4080(&__this_00[9].monitor,pSVar2);
                                                           pSVar1 = (System_String_array *)
                                                                    il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                           if (pSVar1 == (System_String_array *)0x0)
                                                           goto label_041f6dbe;
                                                           if ((int)pSVar1->max_length != 0) {
                                                             pSVar1->m_Items[0] = "1";
                                                             il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                             if (1 < (uint)pSVar1->max_length) {
                                                               pSVar1->m_Items[1] = "None";
                                                               il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                               auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                               pSVar4 = auVar7._0_8_;
                                                               Settings_KeybindSetting___ctor
                                                                         ((Settings_KeybindSetting_o *)pSVar4,
                                                                          pSVar1,auVar7._8_8_);
                                                               __this_00[9].fields.Settings = pSVar4;
                                                               il2cpp_runtime_helper_022b4080(&__this_00[9].fields,pSVar4)
                                                               ;
                                                               pSVar1 = (System_String_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                               if (pSVar1 == (System_String_array *)0x0)
                                                               goto label_041f6dbe;
                                                               if ((int)pSVar1->max_length != 0) {
                                                                 pSVar1->m_Items[0] = "2";
                                                                 il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                 if (1 < (uint)pSVar1->max_length) {
                                                                   pSVar1->m_Items[1] = "None";
                                                                   il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                   auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                   pSVar5 = auVar7._0_8_;
                                                                   Settings_KeybindSetting___ctor
                                                                             ((Settings_KeybindSetting_o *)
                                                                              pSVar5,pSVar1,auVar7._8_8_);
                                                                   __this_00[9].fields.TypedSettings = pSVar5;
                                                                   il2cpp_runtime_helper_022b4080(&__this_00[9].fields.
                                                                                       TypedSettings,pSVar5);
                                                                   pSVar1 = (System_String_array *)
                                                                            il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                   if (pSVar1 == (System_String_array *)0x0)
                                                                   goto label_041f6dbe;
                                                                   if ((int)pSVar1->max_length != 0) {
                                                                     pSVar1->m_Items[0] = "3";
                                                                     il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                     if (1 < (uint)pSVar1->max_length) {
                                                                       pSVar1->m_Items[1] = "None";
                                                                       il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1)
                                                                       ;
                                                                       auVar7 = il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       pSVar3 = auVar7._0_8_;
                                                       Settings_KeybindSetting___ctor
                                                                 ((Settings_KeybindSetting_o *)pSVar3,pSVar1,
                                                                  auVar7._8_8_);
                                                       __this_00[10].klass = pSVar3;
                                                       il2cpp_runtime_helper_022b4080(__this_00 + 10,pSVar3);
                                                       pSVar1 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_041f6dbe;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "0";
                                                         il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                         if (1 < (uint)pSVar1->max_length) {
                                                           pSVar1->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                           auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           pMVar6 = auVar7._0_8_;
                                                           Settings_KeybindSetting___ctor
                                                                     ((Settings_KeybindSetting_o *)pMVar6,
                                                                      pSVar1,auVar7._8_8_);
                                                           __this_00[10].monitor = pMVar6;
                                                           il2cpp_runtime_helper_022b4080(&__this_00[10].monitor);
                                                           Settings_BaseSettingsContainer___ctor
                                                                     (__this_00,pMVar6);
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
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_041f6dbe:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad86c == '\0') {
    il2cpp_runtime_helper_023445d0(&"InteractionInput.json");
    g_data_057ad86c = '\x01';
  }
  return;
}


