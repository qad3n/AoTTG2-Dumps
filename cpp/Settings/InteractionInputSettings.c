// Type: Settings.InteractionInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/InteractionInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/InteractionInputSettings.cs
// --------------------------------

// Settings.InteractionInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_InteractionInputSettings__get_FileName (Settings_InteractionInputSettings_o* __this, const MethodInfo* method);
// 0x5b50ed0

System_String_o *
Settings_InteractionInputSettings__get_FileName
          (Settings_InteractionInputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InteractionInput.json");
    Il2CppMethodInitialized_075472ae = '\x01';
  }
  return "InteractionInput.json";
}


// Settings.InteractionInputSettings$$.ctor
// il2cpp: void Settings_InteractionInputSettings___ctor (Settings_InteractionInputSettings_o* __this, const MethodInfo* method);
// 0x5b4ed40

void Settings_InteractionInputSettings___ctor(Settings_InteractionInputSettings_o *__this,MethodInfo *method)

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
  MethodInfo *method_14;
  MethodInfo *method_15;
  MethodInfo *method_16;
  MethodInfo *method_17;
  MethodInfo *method_18;
  
  if (Il2CppMethodInitialized_075472af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"J");
    il2cpp_codegen_initialize_runtime_metadata(&"F4");
    il2cpp_codegen_initialize_runtime_metadata(&"F2");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha6");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha5");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha8");
    il2cpp_codegen_initialize_runtime_metadata(&"G");
    il2cpp_codegen_initialize_runtime_metadata(&"H");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Space");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha3");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha2");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha1");
    il2cpp_codegen_initialize_runtime_metadata(&"B");
    il2cpp_codegen_initialize_runtime_metadata(&"F3");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha4");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha7");
    il2cpp_codegen_initialize_runtime_metadata(&"F1");
    il2cpp_codegen_initialize_runtime_metadata(&"N");
    il2cpp_codegen_initialize_runtime_metadata(&"F");
    Il2CppMethodInitialized_075472af = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (pSVar1 == (System_String_array *)0x0) {
label_05b4f889:
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "G";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "None";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_00);
      (__this->fields).Interact = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Interact);
      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
      if (pSVar1 == (System_String_array *)0x0) goto label_05b4f889;
      if ((int)pSVar1->max_length != 0) {
        pSVar1->m_Items[0] = "H";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
        if ((pSVar1->max_length & 0xfffffffe) != 0) {
          pSVar1->m_Items[1] = "None";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
          pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
          Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_01);
          (__this->fields).Interact2 = pSVar2;
          Il2CppCodeGenWriteBarrier(&(__this->fields).Interact2);
          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
          if (pSVar1 == (System_String_array *)0x0) goto label_05b4f889;
          if ((int)pSVar1->max_length != 0) {
            pSVar1->m_Items[0] = "J";
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
            if ((pSVar1->max_length & 0xfffffffe) != 0) {
              pSVar1->m_Items[1] = "None";
              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
              pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_02);
              (__this->fields).Interact3 = pSVar2;
              Il2CppCodeGenWriteBarrier(&(__this->fields).Interact3);
              pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
              if (pSVar1 == (System_String_array *)0x0) goto label_05b4f889;
              if ((int)pSVar1->max_length != 0) {
                pSVar1->m_Items[0] = "F";
                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                  pSVar1->m_Items[1] = "None";
                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_03);
                  (__this->fields).ItemMenu = pSVar2;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).ItemMenu);
                  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                  if (pSVar1 == (System_String_array *)0x0) goto label_05b4f889;
                  if ((int)pSVar1->max_length != 0) {
                    pSVar1->m_Items[0] = "B";
                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                      pSVar1->m_Items[1] = "None";
                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                      pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_04);
                      (__this->fields).ActionMenu = pSVar2;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).ActionMenu);
                      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                      if (pSVar1 == (System_String_array *)0x0) goto label_05b4f889;
                      if ((int)pSVar1->max_length != 0) {
                        pSVar1->m_Items[0] = "N";
                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                        if ((pSVar1->max_length & 0xfffffffe) != 0) {
                          pSVar1->m_Items[1] = "None";
                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                          pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                          Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_05);
                          (__this->fields).EmoteMenu = pSVar2;
                          Il2CppCodeGenWriteBarrier(&(__this->fields).EmoteMenu);
                          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                          if (pSVar1 == (System_String_array *)0x0) goto label_05b4f889;
                          if ((int)pSVar1->max_length != 0) {
                            pSVar1->m_Items[0] = "Space";
                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                              pSVar1->m_Items[1] = "None";
                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                              pSVar2 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_06);
                              (__this->fields).MenuNext = pSVar2;
                              Il2CppCodeGenWriteBarrier(&(__this->fields).MenuNext);
                              pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                              if (pSVar1 == (System_String_array *)0x0) goto label_05b4f889;
                              if ((int)pSVar1->max_length != 0) {
                                pSVar1->m_Items[0] = "Alpha1";
                                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                  pSVar1->m_Items[1] = "None";
                                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                  pSVar2 = il2cpp_codegen_object_new
                                                     ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_07);
                                  (__this->fields).QuickSelect1 = pSVar2;
                                  Il2CppCodeGenWriteBarrier(&(__this->fields).QuickSelect1);
                                  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                  if (pSVar1 == (System_String_array *)0x0) goto label_05b4f889;
                                  if ((int)pSVar1->max_length != 0) {
                                    pSVar1->m_Items[0] = "Alpha2";
                                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                      pSVar1->m_Items[1] = "None";
                                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                      pSVar2 = il2cpp_codegen_object_new
                                                         ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_08);
                                      (__this->fields).QuickSelect2 = pSVar2;
                                      Il2CppCodeGenWriteBarrier(&(__this->fields).QuickSelect2);
                                      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                      if (pSVar1 == (System_String_array *)0x0) goto label_05b4f889;
                                      if ((int)pSVar1->max_length != 0) {
                                        pSVar1->m_Items[0] = "Alpha3";
                                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                        if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                          pSVar1->m_Items[1] = "None";
                                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                          pSVar2 = il2cpp_codegen_object_new
                                                             ((Il2CppClass *)TypeInfo_Settings_KeybindSetting)
                                          ;
                                          Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_09);
                                          (__this->fields).QuickSelect3 = pSVar2;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields).QuickSelect3);
                                          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                          if (pSVar1 == (System_String_array *)0x0) goto label_05b4f889;
                                          if ((int)pSVar1->max_length != 0) {
                                            pSVar1->m_Items[0] = "Alpha4";
                                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                              pSVar1->m_Items[1] = "None";
                                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                              pSVar2 = il2cpp_codegen_object_new
                                                                 ((Il2CppClass *)
                                                                  TypeInfo_Settings_KeybindSetting);
                                              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_10);
                                              (__this->fields).QuickSelect4 = pSVar2;
                                              Il2CppCodeGenWriteBarrier(&(__this->fields).QuickSelect4);
                                              pSVar1 = (System_String_array *)
                                                       SZArrayNew(TypeInfo_string_array,2);
                                              if (pSVar1 == (System_String_array *)0x0) goto label_05b4f889;
                                              if ((int)pSVar1->max_length != 0) {
                                                pSVar1->m_Items[0] = "Alpha5";
                                                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                  pSVar1->m_Items[1] = "None";
                                                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                  pSVar2 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_Settings_KeybindSetting);
                                                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_11);
                                                  (__this->fields).QuickSelect5 = pSVar2;
                                                  Il2CppCodeGenWriteBarrier(&(__this->fields).QuickSelect5);
                                                  pSVar1 = (System_String_array *)
                                                           SZArrayNew(TypeInfo_string_array,2);
                                                  if (pSVar1 == (System_String_array *)0x0) goto label_05b4f889;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "Alpha6";
                                                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                      pSVar1->m_Items[1] = "None";
                                                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                      pSVar2 = il2cpp_codegen_object_new
                                                                         ((Il2CppClass *)
                                                                          TypeInfo_Settings_KeybindSetting);
                                                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_12);
                                                      (__this->fields).QuickSelect6 = pSVar2;
                                                      Il2CppCodeGenWriteBarrier
                                                                (&(__this->fields).QuickSelect6);
                                                      pSVar1 = (System_String_array *)
                                                               SZArrayNew(TypeInfo_string_array,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto label_05b4f889;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "Alpha7";
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
                                                          (__this->fields).QuickSelect7 = pSVar2;
                                                          Il2CppCodeGenWriteBarrier
                                                                    (&(__this->fields).QuickSelect7);
                                                          pSVar1 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto label_05b4f889;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "Alpha8";
                                                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                              pSVar1->m_Items[1] = "None";
                                                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                              pSVar2 = il2cpp_codegen_object_new
                                                                                 ((Il2CppClass *)
                                                                                                                                                                    
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_14)
                                                       ;
                                                       (__this->fields).QuickSelect8 = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).QuickSelect8);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4f889;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "F1";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_15)
                                                       ;
                                                       (__this->fields).Function1 = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).Function1);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4f889;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "F2";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_16)
                                                       ;
                                                       (__this->fields).Function2 = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).Function2);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4f889;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "F3";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_17)
                                                       ;
                                                       (__this->fields).Function3 = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).Function3);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4f889;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "F4";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_18)
                                                       ;
                                                       (__this->fields).Function4 = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).Function4);
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


