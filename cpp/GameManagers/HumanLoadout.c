// Type: GameManagers.HumanLoadout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/GameManagers/HumanLoadout.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.HumanLoadout$$GetAllowed
// il2cpp: System_Collections_Generic_List_string__o* GameManagers_HumanLoadout__GetAllowed (const MethodInfo* method);
// 0x5957fa0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59583e9: jmp 0x595841d
// asm:   0x59583fe: jmp 0x595841d

System_Collections_Generic_List_string__o * GameManagers_HumanLoadout__GetAllowed(MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameMiscSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  MethodInfo *pMVar8;
  uint uVar9;
  System_Collections_Generic_List_string__o *__this;
  
  if (Il2CppMethodInitialized_075458ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075458ba = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar3 != (Settings_InGameSet_o *)0x0) {
    pSVar4 = (pSVar3->fields).Misc;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if ((pSVar4 != (Settings_InGameMiscSettings_o *)0x0) &&
       (pSVar5 = (pSVar4->fields).AllowBlades, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar5->fields)._value != false) {
        if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
        }
        pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_0595849e;
        pSVar6 = TypeInfo_GameManagers_HumanLoadout->static_fields->Blade;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this->fields)._items;
        if (pSVar7 == (System_String_array *)0x0) goto label_0595849e;
        uVar9 = (__this->fields)._size;
        if (uVar9 < (uint)pSVar7->max_length) {
          (__this->fields)._size = uVar9 + 1;
          pSVar7->m_Items[(int)uVar9] = pSVar6;
          Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar9);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                     (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
        }
      }
      pSVar5 = (pSVar4->fields).AllowAHSS;
      if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
        if ((pSVar5->fields)._value != false) {
          if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
          }
          pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_0595849e;
          pSVar6 = TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this->fields)._items;
          if (pSVar7 == (System_String_array *)0x0) goto label_0595849e;
          uVar9 = (__this->fields)._size;
          if (uVar9 < (uint)pSVar7->max_length) {
            (__this->fields)._size = uVar9 + 1;
            pSVar7->m_Items[(int)uVar9] = pSVar6;
            Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar9);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                       (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
          }
        }
        pSVar5 = (pSVar4->fields).AllowAPG;
        if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
          if ((pSVar5->fields)._value != false) {
            if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
            }
            pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_0595849e;
            pSVar6 = TypeInfo_GameManagers_HumanLoadout->static_fields->APG;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (__this->fields)._items;
            if (pSVar7 == (System_String_array *)0x0) goto label_0595849e;
            uVar9 = (__this->fields)._size;
            if (uVar9 < (uint)pSVar7->max_length) {
              (__this->fields)._size = uVar9 + 1;
              pSVar7->m_Items[(int)uVar9] = pSVar6;
              Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar9);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                         (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
            }
          }
          pSVar5 = (pSVar4->fields).AllowThunderspears;
          if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
            if ((pSVar5->fields)._value != false) {
              if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
              }
              pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
              if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_0595849e;
              pSVar6 = TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear;
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar7 = (__this->fields)._items;
              if (pSVar7 == (System_String_array *)0x0) goto label_0595849e;
              uVar9 = (__this->fields)._size;
              if (uVar9 < (uint)pSVar7->max_length) {
                (__this->fields)._size = uVar9 + 1;
                pSVar7->m_Items[(int)uVar9] = pSVar6;
                Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar9);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                           (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
              }
            }
            pSVar5 = (pSVar4->fields).AllowUnarmed;
            if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
              if ((pSVar5->fields)._value != false) {
                if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
                }
                pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
                if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_0595849e;
                pSVar6 = TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed;
                piVar1 = &(__this->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar7 = (__this->fields)._items;
                if (pSVar7 == (System_String_array *)0x0) goto label_0595849e;
                uVar9 = (__this->fields)._size;
                if (uVar9 < (uint)pSVar7->max_length) {
                  (__this->fields)._size = uVar9 + 1;
                  pSVar7->m_Items[(int)uVar9] = pSVar6;
                  Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar9);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                             (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                }
              }
              pSVar5 = (pSVar4->fields).AllowCivilian;
              if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
                if ((pSVar5->fields)._value == false) {
                  if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_0595849e;
                  iVar2 = (__this->fields)._size;
                }
                else {
                  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
                  }
                  pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
                  if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_0595849e;
                  pSVar6 = TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian;
                  piVar1 = &(__this->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar7 = (__this->fields)._items;
                  if (pSVar7 == (System_String_array *)0x0) goto label_0595849e;
                  uVar9 = (__this->fields)._size;
                  if (uVar9 < (uint)pSVar7->max_length) {
                    (__this->fields)._size = uVar9 + 1;
                    pSVar7->m_Items[(int)uVar9] = pSVar6;
                    Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar9);
                    iVar2 = (__this->fields)._size;
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                               (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                    iVar2 = (__this->fields)._size;
                  }
                }
                if (iVar2 == 0) {
                  uVar9 = 0;
                  if ((((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->_2).cctor_finished_or_no_cctor ==
                      0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
                    uVar9 = (__this->fields)._size;
                  }
                  pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
                  pSVar6 = TypeInfo_GameManagers_HumanLoadout->static_fields->Blade;
                  piVar1 = &(__this->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar7 = (__this->fields)._items;
                  if (pSVar7 == (System_String_array *)0x0) goto label_0595849e;
                  if (uVar9 < (uint)pSVar7->max_length) {
                    (__this->fields)._size = uVar9 + 1;
                    pSVar7->m_Items[(int)uVar9] = pSVar6;
                    Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar9);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                               (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                  }
                }
                return __this;
              }
            }
          }
        }
      }
    }
  }
label_0595849e:
  ThrowNullReferenceException();
}


// GameManagers.HumanLoadout$$AnyAllowed
// il2cpp: bool GameManagers_HumanLoadout__AnyAllowed (const MethodInfo* method);
// 0x59584b0

bool GameManagers_HumanLoadout__AnyAllowed(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_075458bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075458bb = '\x01';
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
              return (pSVar3->fields)._value != false;
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
// 0x5958570

int32_t GameManagers_HumanLoadout__ToWeapon(System_String_o *loadout,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  
  if (Il2CppMethodInitialized_075458bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_075458bc = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  bVar1 = System_String__op_Equality
                    (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS,(MethodInfo *)0x0);
  iVar2 = 1;
  if (!bVar1) {
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar1 = System_String__op_Equality
                      (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->APG,(MethodInfo *)0x0);
    iVar2 = 3;
    if (!bVar1) {
      if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
      }
      bVar1 = System_String__op_Equality
                        (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear,
                         (MethodInfo *)0x0);
      iVar2 = 2;
      if (!bVar1) {
        if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
        }
        bVar1 = System_String__op_Equality
                          (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed,
                           (MethodInfo *)0x0);
        iVar2 = 4;
        if (!bVar1) {
          if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
          }
          bVar1 = System_String__op_Equality
                            (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian,
                             (MethodInfo *)0x0);
          iVar2 = (uint)bVar1 * 5;
        }
      }
    }
  }
  return iVar2;
}


// GameManagers.HumanLoadout$$.ctor
// il2cpp: void GameManagers_HumanLoadout___ctor (GameManagers_HumanLoadout_o* __this, const MethodInfo* method);
// 0x59586b0

void GameManagers_HumanLoadout___ctor(GameManagers_HumanLoadout_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.HumanLoadout$$.cctor
// il2cpp: void GameManagers_HumanLoadout___cctor (const MethodInfo* method);
// 0x59586c0

void GameManagers_HumanLoadout___cctor(MethodInfo *method)

{
  GameManagers_HumanLoadout_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_075458bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"Civilian");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&"Unarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_075458bd = '\x01';
  }
  TypeInfo_GameManagers_HumanLoadout->static_fields->Blade = "Blade";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_HumanLoadout->static_fields->Blade);
  pGVar1 = TypeInfo_GameManagers_HumanLoadout->static_fields;
  pGVar1->AHSS = "AHSS";
  Il2CppCodeGenWriteBarrier(&pGVar1->AHSS);
  pGVar1 = TypeInfo_GameManagers_HumanLoadout->static_fields;
  pGVar1->Thunderspear = "Thunderspear";
  Il2CppCodeGenWriteBarrier(&pGVar1->Thunderspear);
  pGVar1 = TypeInfo_GameManagers_HumanLoadout->static_fields;
  pGVar1->APG = "APG";
  Il2CppCodeGenWriteBarrier(&pGVar1->APG);
  pGVar1 = TypeInfo_GameManagers_HumanLoadout->static_fields;
  pGVar1->Unarmed = "Unarmed";
  Il2CppCodeGenWriteBarrier(&pGVar1->Unarmed);
  pGVar1 = TypeInfo_GameManagers_HumanLoadout->static_fields;
  pGVar1->Civilian = "Civilian";
  Il2CppCodeGenWriteBarrier(&pGVar1->Civilian);
  return;
}


