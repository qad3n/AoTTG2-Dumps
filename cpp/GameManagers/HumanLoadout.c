// Type: GameManagers.HumanLoadout
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/HumanLoadout.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.HumanLoadout$$GetAllowed
// il2cpp: System_Collections_Generic_List_string__o* GameManagers_HumanLoadout__GetAllowed (const MethodInfo* method);
// 0x181e67c60

System_Collections_Generic_List_string__o * GameManagers_HumanLoadout__GetAllowed(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  System_Collections_Generic_List_string__o *__this;
  
  if (Il2CppMethodInitialized_184344f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184344f19 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar1 != (Settings_InGameSet_o *)0x0) {
    pSVar2 = (pSVar1->fields).Misc;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if ((pSVar2 != (Settings_InGameMiscSettings_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).AllowBlades, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar3->fields)._value != false) {
        if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
        }
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e67f6a;
        il2cpp_runtime_helper_180012890(__this,TypeInfo_GameManagers_HumanLoadout->static_fields->Blade,
                      MethodInfo_System_Collections_Generic_List_string_Add);
      }
      pSVar3 = (pSVar2->fields).AllowAHSS;
      if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
        if ((pSVar3->fields)._value != false) {
          if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
          }
          if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e67f6a;
          il2cpp_runtime_helper_180012890(__this,TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS,
                        MethodInfo_System_Collections_Generic_List_string_Add);
        }
        pSVar3 = (pSVar2->fields).AllowAPG;
        if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
          if ((pSVar3->fields)._value != false) {
            if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
            }
            if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e67f6a;
            il2cpp_runtime_helper_180012890(__this,TypeInfo_GameManagers_HumanLoadout->static_fields->APG,
                          MethodInfo_System_Collections_Generic_List_string_Add);
          }
          pSVar3 = (pSVar2->fields).AllowThunderspears;
          if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
            if ((pSVar3->fields)._value != false) {
              if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
              }
              if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e67f6a;
              il2cpp_runtime_helper_180012890(__this,TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear,
                            MethodInfo_System_Collections_Generic_List_string_Add);
            }
            pSVar3 = (pSVar2->fields).AllowUnarmed;
            if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
              if ((pSVar3->fields)._value != false) {
                if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
                }
                if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e67f6a;
                il2cpp_runtime_helper_180012890(__this,TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed,
                              MethodInfo_System_Collections_Generic_List_string_Add);
              }
              pSVar3 = (pSVar2->fields).AllowCivilian;
              if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
                if ((pSVar3->fields)._value == false) {
                  if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e67f6a;
                }
                else {
                  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
                  }
                  if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e67f6a;
                  il2cpp_runtime_helper_180012890(__this,TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian,
                                MethodInfo_System_Collections_Generic_List_string_Add);
                }
                if ((__this->fields)._size == 0) {
                  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
                  }
                  il2cpp_runtime_helper_180012890(__this,TypeInfo_GameManagers_HumanLoadout->static_fields->Blade,
                                MethodInfo_System_Collections_Generic_List_string_Add);
                }
                return __this;
              }
            }
          }
        }
      }
    }
  }
label_181e67f6a:
  ThrowNullReferenceException();
}


// GameManagers.HumanLoadout$$AnyAllowed
// il2cpp: bool GameManagers_HumanLoadout__AnyAllowed (const MethodInfo* method);
// 0x181e67ba0

bool GameManagers_HumanLoadout__AnyAllowed(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344f1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184344f1a = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).AllowBlades, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value != false) {
      return true;
    }
    pSVar3 = (pSVar2->fields).AllowAHSS;
    if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
      if ((pSVar3->fields)._value != false) {
        return true;
      }
      pSVar3 = (pSVar2->fields).AllowAPG;
      if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
        if ((pSVar3->fields)._value != false) {
          return true;
        }
        pSVar3 = (pSVar2->fields).AllowThunderspears;
        if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
          if ((pSVar3->fields)._value != false) {
            return true;
          }
          pSVar3 = (pSVar2->fields).AllowUnarmed;
          if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
            if ((pSVar3->fields)._value != false) {
              return true;
            }
            pSVar3 = (pSVar2->fields).AllowCivilian;
            if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
              return (pSVar3->fields)._value;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.HumanLoadout$$ToWeapon
// il2cpp: int32_t GameManagers_HumanLoadout__ToWeapon (System_String_o* loadout, const MethodInfo* method);
// 0x181e67f70

int32_t GameManagers_HumanLoadout__ToWeapon(System_String_o *loadout,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344f1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184344f1b = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  bVar1 = System_String__op_Equality
                    (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS,(MethodInfo *)0x0);
  if (bVar1) {
    return 1;
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  bVar1 = System_String__op_Equality
                    (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->APG,(MethodInfo *)0x0);
  if (bVar1) {
    return 3;
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  bVar1 = System_String__op_Equality
                    (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear,(MethodInfo *)0x0
                    );
  if (!bVar1) {
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar1 = System_String__op_Equality
                      (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
      }
      bVar1 = System_String__op_Equality
                        (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian,(MethodInfo *)0x0
                        );
      return -(uint)bVar1 & 5;
    }
    return 4;
  }
  return 2;
}


// GameManagers.HumanLoadout$$.ctor
// il2cpp: void GameManagers_HumanLoadout___ctor (GameManagers_HumanLoadout_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_HumanLoadout___ctor(GameManagers_HumanLoadout_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.HumanLoadout$$.cctor
// il2cpp: void GameManagers_HumanLoadout___cctor (const MethodInfo* method);
// 0x181e68100

void GameManagers_HumanLoadout___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"Civilian");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&"Unarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_184344f1c = '\x01';
  }
  TypeInfo_GameManagers_HumanLoadout->static_fields->Blade = "Blade";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_HumanLoadout->static_fields->Blade,"Blade");
  TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS = "AHSS";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS,"AHSS");
  TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear = "Thunderspear";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear,"Thunderspear");
  TypeInfo_GameManagers_HumanLoadout->static_fields->APG = "APG";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_HumanLoadout->static_fields->APG,"APG");
  TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed = "Unarmed";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed,"Unarmed")
  ;
  TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian = "Civilian";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian,"Civilian");
  return;
}


