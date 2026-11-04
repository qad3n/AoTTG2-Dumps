// Type: Controllers.HumanPlayerController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Controllers/HumanPlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/HumanPlayerController.cs
// --------------------------------

// Controllers.HumanPlayerController$$Awake
// il2cpp: void Controllers_HumanPlayerController__Awake (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x182117b30

void Controllers_HumanPlayerController__Awake(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_HumanInputSettings_o *value;
  Settings_GeneralInputSettings_o *pSVar2;
  Characters_Human_o *value_00;
  System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *__this_00;
  System_Collections_Generic_Dictionary_HumanDashDirection__float__o *__this_01;
  
  if (Il2CppMethodInitialized_184346ad6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346ad6 = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  value_00 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
  (__this->fields)._human = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human,value_00);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar1 != (Settings_InputSettings_o *)0x0) {
    value = (pSVar1->fields).Human;
    (__this->fields)._humanInput = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._humanInput,value);
    if (Il2CppMethodInitialized_184346ad7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      Il2CppMethodInitialized_184346ad7 = '\x01';
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (pSVar1 != (Settings_InputSettings_o *)0x0) {
      pSVar2 = (pSVar1->fields).General;
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting)
      ;
      System_Collections_Generic_Dictionary_Int32Enum__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_14421B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_ctor);
      if ((pSVar2 != (Settings_GeneralInputSettings_o *)0x0) &&
         (__this_00 != (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0)) {
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,1,
                   (Il2CppObject *)(pSVar2->fields).Forward,
                   (MethodInfo_1443C70 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,2,
                   (Il2CppObject *)(pSVar2->fields).Back,
                   (MethodInfo_1443C70 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,3,
                   (Il2CppObject *)(pSVar2->fields).Left,
                   (MethodInfo_1443C70 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,4,
                   (Il2CppObject *)(pSVar2->fields).Right,
                   (MethodInfo_1443C70 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
        (__this->fields)._dashKeys = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._dashKeys,__this_00);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float);
        System_Collections_Generic_Dictionary_Int32Enum__float____ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                   (MethodInfo_14421B0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_ctor);
        if (__this_01 != (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
          System_Collections_Generic_Dictionary_Int32Enum__float___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,1,-1.0,
                     (MethodInfo_1443C40 *)
                     MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
          System_Collections_Generic_Dictionary_Int32Enum__float___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,2,-1.0,
                     (MethodInfo_1443C40 *)
                     MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
          System_Collections_Generic_Dictionary_Int32Enum__float___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,3,-1.0,
                     (MethodInfo_1443C40 *)
                     MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
          System_Collections_Generic_Dictionary_Int32Enum__float___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,4,-1.0,
                     (MethodInfo_1443C40 *)
                     MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
          (__this->fields)._dashTimes = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._dashTimes,__this_01);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$SetupDash
// il2cpp: void Controllers_HumanPlayerController__SetupDash (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x182118360

void Controllers_HumanPlayerController__SetupDash
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *__this_00;
  System_Collections_Generic_Dictionary_HumanDashDirection__float__o *__this_01;
  
  if (Il2CppMethodInitialized_184346ad7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346ad7 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar1 != (Settings_InputSettings_o *)0x0) {
    pSVar2 = (pSVar1->fields).General;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting);
    System_Collections_Generic_Dictionary_Int32Enum__float____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_14421B0 *)
               MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_ctor);
    if ((pSVar2 != (Settings_GeneralInputSettings_o *)0x0) &&
       (__this_00 != (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0)) {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,1,
                 (Il2CppObject *)(pSVar2->fields).Forward,
                 (MethodInfo_1443C70 *)
                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,2,
                 (Il2CppObject *)(pSVar2->fields).Back,
                 (MethodInfo_1443C70 *)
                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,3,
                 (Il2CppObject *)(pSVar2->fields).Left,
                 (MethodInfo_1443C70 *)
                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,4,
                 (Il2CppObject *)(pSVar2->fields).Right,
                 (MethodInfo_1443C70 *)
                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
      (__this->fields)._dashKeys = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._dashKeys,__this_00);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float);
      System_Collections_Generic_Dictionary_Int32Enum__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 (MethodInfo_14421B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_ctor);
      if (__this_01 != (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,1,-1.0,
                   (MethodInfo_1443C40 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,2,-1.0,
                   (MethodInfo_1443C40 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,3,-1.0,
                   (MethodInfo_1443C40 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,4,-1.0,
                   (MethodInfo_1443C40 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
        (__this->fields)._dashTimes = __this_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._dashTimes,__this_01);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$Update
// il2cpp: void Controllers_HumanPlayerController__Update (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x18211caa0

void Controllers_HumanPlayerController__Update(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar1->fields).FinishSetup != false) {
    Controllers_BasePlayerController__Update((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Controllers.HumanPlayerController$$UpdateMovementInput
// il2cpp: void Controllers_HumanPlayerController__UpdateMovementInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x18211ad40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18211b20f: movss dword ptr [rax + 0x230], xmm6
// asm:   0x18211b217: jmp 0x18211b119

void Controllers_HumanPlayerController__UpdateMovementInput
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  Characters_Human_o *pCVar4;
  Characters_BaseUseable_o *pCVar5;
  Characters_BaseUseable_c *pCVar6;
  Characters_AnimationHandler_o *pCVar7;
  UnityEngine_Animation_o *pUVar8;
  Settings_GeneralInputSettings_o *pSVar9;
  Characters_BaseCharacter_o *pCVar10;
  bool bVar11;
  Characters_Human_o *pCVar12;
  int32_t forward;
  int32_t right;
  float fVar13;
  float fVar14;
  float local_28 [8];
  
  if (Il2CppMethodInitialized_184346ad8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DownStrikeSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&"jump");
    il2cpp_codegen_initialize_runtime_metadata(&"dash");
    Il2CppMethodInitialized_184346ad8 = '\x01';
  }
  if (!inMenu) {
    pCVar12 = (__this->fields)._human;
    if (pCVar12 == (Characters_Human_o *)0x0) goto label_18211b23b;
    if (((pCVar12->fields).Dead == false) && ((pCVar12->fields)._state != 0xf)) {
      pSVar2 = (__this->fields)._humanInput;
      if ((pSVar2 == (Settings_HumanInputSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).HorseWalk, pSVar3 == (Settings_KeybindSetting_o *)0x0))
      goto label_18211b23b;
      pCVar12 = (__this->fields)._human;
      bVar11 = Settings_KeybindSetting__GetKey(pSVar3,false,(MethodInfo *)0x0);
      if (bVar11) {
        pCVar4 = (__this->fields)._human;
        if (pCVar4 == (Characters_Human_o *)0x0) goto label_18211b23b;
        if ((pCVar4->fields).MountState != 1) goto label_18211ae19;
        bVar11 = true;
      }
      else {
label_18211ae19:
        pSVar2 = (__this->fields)._humanInput;
        if ((pSVar2 == (Settings_HumanInputSettings_o *)0x0) ||
           (pSVar3 = (pSVar2->fields).Walk, pSVar3 == (Settings_KeybindSetting_o *)0x0)) goto label_18211b23b;
        bVar11 = Settings_KeybindSetting__GetKey(pSVar3,false,(MethodInfo *)0x0);
        if (bVar11) {
          pCVar4 = (__this->fields)._human;
          if (pCVar4 == (Characters_Human_o *)0x0) goto label_18211b23b;
          bVar11 = (pCVar4->fields).MountState == 0;
        }
        else {
          bVar11 = false;
        }
      }
      (pCVar12->fields).IsWalk = bVar11;
      pCVar12 = (__this->fields)._human;
      if (pCVar12 == (Characters_Human_o *)0x0) goto label_18211b23b;
      if ((pCVar12->fields).MountState != 1) {
        if ((pCVar12->fields).Grounded != false) {
          if ((pCVar12->fields)._state != 0) {
            return;
          }
          if ((pCVar12->fields).Grounded != false) goto label_18211aff1;
        }
        if ((pCVar12->fields)._state == 8) {
          return;
        }
        if ((pCVar12->fields)._state == 9) {
          pCVar5 = (pCVar12->fields).Special;
          if (pCVar5 == (Characters_BaseUseable_o *)0x0) {
            return;
          }
          pCVar6 = pCVar5->klass;
          bVar1 = (TypeInfo_Characters_DownStrikeSpecial->_2).typeHierarchyDepth;
          if (((pCVar6->_2).typeHierarchyDepth < bVar1) ||
             ((pCVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_DownStrikeSpecial)) {
            bVar1 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth;
            pCVar6 = ((((__this->fields)._human)->fields).Special)->klass;
            if ((pCVar6->_2).typeHierarchyDepth < bVar1) {
              return;
            }
            if ((pCVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_StockSpecial) {
              return;
            }
          }
          pCVar12 = (__this->fields)._human;
        }
        pCVar7 = (pCVar12->fields).Animation;
        if (pCVar7 == (Characters_AnimationHandler_o *)0x0) goto label_18211b23b;
        if ((pCVar7->fields)._isLegacy == false) {
          bVar11 = System_String__op_Equality
                             ((pCVar7->fields)._currentAnimation,"dash",(MethodInfo *)0x0);
        }
        else {
          pUVar8 = (pCVar7->fields).Animation;
          if (pUVar8 == (UnityEngine_Animation_o *)0x0) goto label_18211b23b;
          bVar11 = UnityEngine_Animation__IsPlaying(pUVar8,"dash",(MethodInfo *)0x0);
        }
        if (bVar11 != false) {
          return;
        }
        pCVar12 = (__this->fields)._human;
        if ((pCVar12 == (Characters_Human_o *)0x0) ||
           (pCVar7 = (pCVar12->fields).Animation, pCVar7 == (Characters_AnimationHandler_o *)0x0))
        goto label_18211b23b;
        if ((pCVar7->fields)._isLegacy == false) {
          bVar11 = System_String__op_Equality
                             ((pCVar7->fields)._currentAnimation,"jump",(MethodInfo *)0x0);
        }
        else {
          pUVar8 = (pCVar7->fields).Animation;
          if (pUVar8 == (UnityEngine_Animation_o *)0x0) goto label_18211b23b;
          bVar11 = UnityEngine_Animation__IsPlaying(pUVar8,"jump",(MethodInfo *)0x0);
        }
        if (bVar11 != false) {
          return;
        }
        pCVar12 = (__this->fields)._human;
        if (pCVar12 == (Characters_Human_o *)0x0) goto label_18211b23b;
        bVar11 = Characters_Human__IsFiringThunderspear(pCVar12,(MethodInfo *)0x0);
        if (bVar11) {
          return;
        }
      }
label_18211aff1:
      pSVar9 = (__this->fields)._generalInput;
      if ((pSVar9 != (Settings_GeneralInputSettings_o *)0x0) &&
         (pSVar3 = (pSVar9->fields).Autorun, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
        bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
        if (bVar11) {
          (__this->fields)._autorun = (__this->fields)._autorun == false;
        }
        pSVar9 = (__this->fields)._generalInput;
        if ((pSVar9 != (Settings_GeneralInputSettings_o *)0x0) &&
           (pSVar3 = (pSVar9->fields).Forward, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
          bVar11 = Settings_KeybindSetting__GetKey(pSVar3,false,(MethodInfo *)0x0);
          right = -1;
          if (bVar11) {
            forward = 1;
          }
          else {
            pSVar9 = (__this->fields)._generalInput;
            if ((pSVar9 == (Settings_GeneralInputSettings_o *)0x0) ||
               (pSVar3 = (pSVar9->fields).Back, pSVar3 == (Settings_KeybindSetting_o *)0x0))
            goto label_18211b23b;
            forward = 0;
            bVar11 = Settings_KeybindSetting__GetKey(pSVar3,false,(MethodInfo *)0x0);
            if (bVar11) {
              forward = -1;
            }
          }
          pSVar9 = (__this->fields)._generalInput;
          if ((pSVar9 != (Settings_GeneralInputSettings_o *)0x0) &&
             (pSVar3 = (pSVar9->fields).Left, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
            bVar11 = Settings_KeybindSetting__GetKey(pSVar3,false,(MethodInfo *)0x0);
            if (!bVar11) {
              pSVar9 = (__this->fields)._generalInput;
              if ((pSVar9 == (Settings_GeneralInputSettings_o *)0x0) ||
                 (pSVar3 = (pSVar9->fields).Right, pSVar3 == (Settings_KeybindSetting_o *)0x0))
              goto label_18211b23b;
              right = 0;
              bVar11 = Settings_KeybindSetting__GetKey(pSVar3,false,(MethodInfo *)0x0);
              if (bVar11) {
                right = 1;
              }
            }
            if ((forward != 0) || (right != 0)) {
              (__this->fields)._autorun = false;
            }
            if ((__this->fields)._autorun == false) {
              if ((forward == 0) && (right == 0)) {
                pCVar10 = (__this->fields)._character;
                if (pCVar10 != (Characters_BaseCharacter_o *)0x0) {
                  (pCVar10->fields).HasDirection = false;
                  pCVar12 = (__this->fields)._human;
                  if (pCVar12 != (Characters_Human_o *)0x0) {
                    (pCVar12->fields).TargetMagnitude = 0.0;
                    return;
                  }
                }
                goto label_18211b23b;
              }
            }
            else {
              right = 0;
              forward = 1;
            }
            pCVar10 = (__this->fields)._character;
            fVar13 = Controllers_BasePlayerController__GetTargetAngle
                               ((Controllers_BasePlayerController_o *)__this,forward,right,(MethodInfo *)0x0);
            if (pCVar10 != (Characters_BaseCharacter_o *)0x0) {
              (pCVar10->fields).TargetAngle = fVar13;
              pCVar10 = (__this->fields)._character;
              if (pCVar10 != (Characters_BaseCharacter_o *)0x0) {
                local_28[0] = (float)right;
                (pCVar10->fields).HasDirection = true;
                local_28[1] = 0.0;
                fVar14 = 0.0;
                local_28[2] = (float)forward;
                fVar13 = (float)il2cpp_runtime_helper_180546a40(local_28,0);
                if (0.95 < fVar13) {
                  fVar14 = 1.0;
                }
                else {
                  fVar13 = (float)il2cpp_runtime_helper_180546a40(local_28,0);
                  if (0.25 <= fVar13) {
                    fVar14 = (float)il2cpp_runtime_helper_180546a40(local_28,0);
                  }
                }
                pCVar12 = (__this->fields)._human;
                if (pCVar12 != (Characters_Human_o *)0x0) {
                  if (((((pCVar12->fields).IsWalk != false) && ((pCVar12->fields).MountState == 0)) &&
                      ((pCVar12->fields)._state == 0)) && ((pCVar12->fields).Grounded != false)) {
                    fVar14 = fVar14 * 0.25;
                  }
                  (pCVar12->fields).TargetMagnitude = fVar14;
                  return;
                }
              }
            }
          }
        }
      }
      goto label_18211b23b;
    }
  }
  if ((__this->fields)._autorun == false) {
    pCVar12 = (__this->fields)._human;
    if (pCVar12 == (Characters_Human_o *)0x0) {
label_18211b23b:
      ThrowNullReferenceException();
    }
    (pCVar12->fields).HasDirection = false;
  }
  return;
}


// Controllers.HumanPlayerController$$UpdateUI
// il2cpp: void Controllers_HumanPlayerController__UpdateUI (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x18211b7b0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18211bd71: mov rdx, qword ptr [rip + 0x1faed08]  ; "Blade"
// asm:   0x18211bd78: jmp 0x18211bf1b
// asm:   0x18211bde5: mov rdx, qword ptr [rip + 0x1f6182c]  ; "AHSS"
// asm:   0x18211bdec: jmp 0x18211bf1b
// asm:   0x18211be59: mov rdx, qword ptr [rip + 0x1f63e38]  ; "APG"
// asm:   0x18211be60: jmp 0x18211bf1b
// asm:   0x18211bf14: mov rdx, qword ptr [rip + 0x1f5254d]  ; "Thunderspear"
// asm:   0x18211c0cb: mov rbx, rax
// asm:   0x18211c0ce: mov rdx, qword ptr [rip + 0x1fe0773]  ; TypeInfo_Settings_SettingsManager
// asm:   0x18211c258: mov rbx, rax

void Controllers_HumanPlayerController__UpdateUI
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar10;
  undefined4 uVar17;
  undefined8 uVar11;
  undefined4 uVar18;
  byte bVar19;
  Cameras_BaseCamera_o *pCVar20;
  UnityEngine_Camera_o *pUVar21;
  Characters_Human_o *pCVar22;
  UnityEngine_Rigidbody_o *__this_00;
  Utility_BaseComponentCache_o *pUVar23;
  UnityEngine_Transform_o *pUVar24;
  Settings_UISettings_o *pSVar25;
  Settings_BoolSetting_o *pSVar26;
  Settings_IntSetting_o *pSVar27;
  Characters_BaseUseable_o *pCVar28;
  Characters_BaseUseable_c *pCVar29;
  SimpleJSONFixed_JSONNode_o *pSVar30;
  Settings_AbilitySettings_o *pSVar31;
  Settings_InGameSet_o *pSVar32;
  Settings_InGameMiscSettings_o *pSVar33;
  undefined8 uVar34;
  UnityEngine_Vector3_StaticFields *pUVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  MethodInfo *pMVar42;
  bool bVar43;
  int32_t iVar44;
  UnityEngine_Vector3_o *pUVar45;
  UnityEngine_Ray_o *pUVar46;
  System_String_o *pSVar47;
  System_String_o *str0;
  System_Xml_Schema_XmlSchema_o *pSVar48;
  UnityEngine_Quaternion_o *pUVar49;
  UnityEngine_Quaternion_Fields *pUVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  double dVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float local_res20 [2];
  UnityEngine_Quaternion_Fields local_168;
  UnityEngine_Quaternion_Fields local_158;
  float local_148 [4];
  UnityEngine_Quaternion_Fields local_138;
  int32_t local_128;
  float local_124 [3];
  UnityEngine_Ray_o local_118;
  UnityEngine_RaycastHit_o local_f8 [4];
  
  if (Il2CppMethodInitialized_184346ad9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSTwinShot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_APGWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanPlayerController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ThunderspearWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#FF0000>");
    il2cpp_codegen_initialize_runtime_metadata(&"F2");
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"K");
    il2cpp_codegen_initialize_runtime_metadata(&"DamageMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#008000>READY</color>");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&" | ");
    il2cpp_codegen_initialize_runtime_metadata(&"F1");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    il2cpp_codegen_initialize_runtime_metadata(&"???");
    il2cpp_codegen_initialize_runtime_metadata(&" u/s");
    Il2CppMethodInitialized_184346ad9 = '\x01';
  }
  local_res20[0] = 0.0;
  local_148[0] = 0.0;
  local_124[0] = 0.0;
  local_f8[0].fields.m_Normal.fields.y = 0.0;
  local_f8[0].fields.m_Normal.fields.z = 0.0;
  local_f8[0].fields.m_FaceID = 0;
  local_128 = 0;
  local_f8[0].fields.m_Point.fields.x = 0.0;
  local_f8[0].fields.m_Point.fields.y = 0.0;
  local_f8[0].fields.m_Point.fields.z = 0.0;
  local_f8[0].fields.m_Normal.fields.x = 0.0;
  local_f8[0].fields.m_Distance = 0.0;
  local_f8[0].fields.m_UV.fields.x = 0.0;
  local_f8[0].fields.m_UV.fields.y = 0.0;
  local_f8[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  pCVar20 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar20 == (Cameras_BaseCamera_o *)0x0) goto label_18211ca82;
  pUVar21 = (pCVar20->fields).Camera;
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar45 = UI_CursorManager__GetInGameMousePosition((UnityEngine_Vector3_o *)&local_168,(MethodInfo *)0x0);
  if (pUVar21 == (UnityEngine_Camera_o *)0x0) goto label_18211ca82;
  local_158.x = (pUVar45->fields).x;
  local_158.y = (pUVar45->fields).y;
  local_158.z = (pUVar45->fields).z;
  pUVar46 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                      (&local_118,pUVar21,(UnityEngine_Vector3_o *)&local_158,(MethodInfo *)0x0);
  pSVar47 = "???";
  pCVar22 = (__this->fields)._human;
  if (pCVar22 == (Characters_Human_o *)0x0) goto label_18211ca82;
  uVar36._0_4_ = (pUVar46->fields).m_Origin.fields.x;
  uVar36._4_4_ = (pUVar46->fields).m_Origin.fields.y;
  uVar37 = *(undefined8 *)&(pUVar46->fields).m_Origin.fields.z;
  uVar9._0_4_ = (pUVar46->fields).m_Direction.fields.y;
  uVar9._4_4_ = (pUVar46->fields).m_Direction.fields.z;
  str0 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if ((pCVar22->fields).CarryState == 1) {
    pCVar22 = (pCVar22->fields).Carrier;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar43 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar43) goto label_18211bac7;
    pCVar22 = (__this->fields)._human;
    if ((pCVar22 == (Characters_Human_o *)0x0) ||
       (pCVar22 = (pCVar22->fields).Carrier, pCVar22 == (Characters_Human_o *)0x0)) goto label_18211ca82;
    pUVar50 = (UnityEngine_Quaternion_Fields *)&(pCVar22->fields).CarryVelocity;
  }
  else {
label_18211bac7:
    pCVar22 = (__this->fields)._human;
    if (((pCVar22 == (Characters_Human_o *)0x0) ||
        (pUVar23 = (pCVar22->fields).Cache, pUVar23 == (Utility_BaseComponentCache_o *)0x0)) ||
       (__this_00 = (pUVar23->fields).Rigidbody, __this_00 == (UnityEngine_Rigidbody_o *)0x0))
    goto label_18211ca82;
    pUVar45 = UnityEngine_Rigidbody__get_linearVelocity
                        ((UnityEngine_Vector3_o *)&local_168,__this_00,(MethodInfo *)0x0);
    pUVar50 = &local_138;
    local_138.x = (pUVar45->fields).x;
    local_138.y = (pUVar45->fields).y;
    local_138.z = (pUVar45->fields).z;
  }
  local_res20[0] = (float)il2cpp_runtime_helper_180546a40(pUVar50);
  fVar59 = 1000.0;
  if ((TypeInfo_Controllers_HumanPlayerController->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_HumanPlayerController);
  }
  iVar44 = UnityEngine_Touch__get_fingerId
                     ((UnityEngine_Touch_o *)TypeInfo_Controllers_HumanPlayerController->static_fields,
                      (MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  local_118.fields.m_Origin.fields._0_8_ = uVar36;
  local_118.fields._8_8_ = uVar37;
  local_118.fields.m_Direction.fields._4_8_ = uVar9;
  bVar43 = UnityEngine_Physics__Raycast_2fe5050(&local_118,local_f8,1000.0,iVar44,(MethodInfo *)0x0);
  if (bVar43) {
    pUVar45 = UnityEngine_RaycastHit__get_point
                        ((UnityEngine_Vector3_o *)&local_168,local_f8,(MethodInfo *)0x0);
    pCVar22 = (__this->fields)._human;
    if (((pCVar22 == (Characters_Human_o *)0x0) ||
        (pUVar23 = (pCVar22->fields).Cache, pUVar23 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar24 = (pUVar23->fields).Transform, pUVar24 == (UnityEngine_Transform_o *)0x0)) goto label_18211ca82;
    uVar2 = (pUVar45->fields).x;
    uVar12 = (pUVar45->fields).y;
    fVar59 = (pUVar45->fields).z;
    pUVar45 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_168,pUVar24,(MethodInfo *)0x0);
    uVar3 = (pUVar45->fields).x;
    uVar13 = (pUVar45->fields).y;
    local_138.z = fVar59 - (pUVar45->fields).z;
    local_138.y = (float)uVar12 - (float)uVar13;
    local_138.x = (float)uVar2 - (float)uVar3;
    fVar59 = (float)il2cpp_runtime_helper_180546a40(&local_138);
    local_128 = (int32_t)fVar59;
    pSVar47 = System_Int32__ToString(&local_128,(MethodInfo *)0x0);
  }
  pSVar25 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar25 == (Settings_UISettings_o *)0x0) ||
     (pSVar26 = (pSVar25->fields).ShowCrosshairDistance, pSVar26 == (Settings_BoolSetting_o *)0x0))
  goto label_18211ca82;
  if ((pSVar26->fields)._value != false) {
    str0 = System_String__Concat_1969e50(str0,pSVar47,(MethodInfo *)0x0);
  }
  pSVar25 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar25 == (Settings_UISettings_o *)0x0) ||
     (pSVar27 = (pSVar25->fields).Speedometer, pSVar27 == (Settings_IntSetting_o *)0x0)) goto label_18211ca82;
  if ((pSVar27->fields)._value == 1) {
    bVar43 = System_String__op_Inequality
                       (str0,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if (bVar43) {
      str0 = System_String__Concat_1969e50(str0,"\n",(MethodInfo *)0x0);
    }
    pSVar47 = System_Single__ToString_1b49f60(local_res20,"F1",(MethodInfo *)0x0);
    str0 = System_String__Concat_1969b70(str0,pSVar47," u/s",(MethodInfo *)0x0);
  }
  else if ((((TypeInfo_Settings_SettingsManager->static_fields->UISettings->fields).Speedometer)->fields).
           _value == 2) {
    bVar43 = System_String__op_Inequality
                       (str0,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if (bVar43) {
      str0 = System_String__Concat_1969e50(str0,"\n",(MethodInfo *)0x0);
    }
    fVar55 = local_res20[0];
    pCVar22 = (__this->fields)._human;
    local_148[0] = local_res20[0];
    if (pCVar22 == (Characters_Human_o *)0x0) goto label_18211ca82;
    pCVar28 = (pCVar22->fields).Weapon;
    if (pCVar28 == (Characters_BaseUseable_o *)0x0) goto label_18211bf7b;
    pCVar29 = pCVar28->klass;
    bVar19 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if (((pCVar29->_2).typeHierarchyDepth < bVar19) ||
       ((pCVar29->_2).typeHierarchy[(ulonglong)bVar19 - 1] != (Il2CppClass *)TypeInfo_Characters_BladeWeapon))
    {
      bVar19 = (TypeInfo_Characters_AHSSWeapon->_2).typeHierarchyDepth;
      pCVar29 = ((((__this->fields)._human)->fields).Weapon)->klass;
      if ((bVar19 <= (pCVar29->_2).typeHierarchyDepth) &&
         ((pCVar29->_2).typeHierarchy[(ulonglong)bVar19 - 1] == (Il2CppClass *)TypeInfo_Characters_AHSSWeapon)
         ) {
        if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
        }
        pSVar30 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
        pMVar42 = (MethodInfo *)"AHSS";
        goto joined_r0x00018211bddf;
      }
      bVar19 = (TypeInfo_Characters_APGWeapon->_2).typeHierarchyDepth;
      pCVar29 = ((((__this->fields)._human)->fields).Weapon)->klass;
      if ((bVar19 <= (pCVar29->_2).typeHierarchyDepth) &&
         ((pCVar29->_2).typeHierarchy[(ulonglong)bVar19 - 1] == (Il2CppClass *)TypeInfo_Characters_APGWeapon))
      {
        if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
        }
        pSVar30 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
        pMVar42 = (MethodInfo *)"APG";
        goto joined_r0x00018211bddf;
      }
      bVar19 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
      pCVar29 = ((((__this->fields)._human)->fields).Weapon)->klass;
      if ((bVar19 <= (pCVar29->_2).typeHierarchyDepth) &&
         ((pCVar29->_2).typeHierarchy[(ulonglong)bVar19 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
        pSVar32 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if ((pSVar32 == (Settings_InGameSet_o *)0x0) ||
           ((pSVar33 = (pSVar32->fields).Misc, pSVar33 == (Settings_InGameMiscSettings_o *)0x0 ||
            (pSVar26 = (pSVar33->fields).ThunderspearPVP, pSVar26 == (Settings_BoolSetting_o *)0x0))))
        goto label_18211ca82;
        if ((pSVar26->fields)._value == false) {
          if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
          }
          pSVar30 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
          pMVar42 = (MethodInfo *)"Thunderspear";
          goto joined_r0x00018211bddf;
        }
      }
    }
    else {
      if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
      }
      pSVar30 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
      pMVar42 = (MethodInfo *)"Blade";
joined_r0x00018211bddf:
      if (((pSVar30 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
          (pSVar48 = (*(pSVar30->klass->vtable)._7_get_Item.methodPtr)(pSVar30,pMVar42),
          pSVar48 == (System_Xml_Schema_XmlSchema_o *)0x0)) ||
         (pSVar47 = (*(pSVar48->klass->vtable)._7_get_IdAttribute.methodPtr)
                              (pSVar48,(MethodInfo *)"DamageMultiplier"), pSVar47 == (System_String_o *)0x0
         )) goto label_18211ca82;
      fVar51 = (float)(*(code *)((Il2CppClass *)pSVar47->klass)->vtable[37].methodPtr)
                                (pSVar47,((Il2CppClass *)pSVar47->klass)->vtable[37].method);
      local_res20[0] = (float)(int)(fVar51 * fVar55);
    }
label_18211bf7b:
    if (local_res20[0] <= 10.0) {
      local_res20[0] = 10.0;
    }
    local_res20[0] = local_res20[0] / 100.0;
    pSVar47 = System_Single__ToString_1b49f60(local_res20,"F1",(MethodInfo *)0x0);
    str0 = System_String__Concat_1969b70(str0,pSVar47,"K",(MethodInfo *)0x0);
    pCVar22 = (__this->fields)._human;
    if (pCVar22 == (Characters_Human_o *)0x0) goto label_18211ca82;
    pCVar28 = (pCVar22->fields).Special;
    if (pCVar28 != (Characters_BaseUseable_o *)0x0) {
      pCVar29 = pCVar28->klass;
      bVar19 = (TypeInfo_Characters_AHSSTwinShot->_2).typeHierarchyDepth;
      if ((bVar19 <= (pCVar29->_2).typeHierarchyDepth) &&
         ((pCVar29->_2).typeHierarchy[(ulonglong)bVar19 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_AHSSTwinShot)) {
        local_148[0] = (float)(int)local_148[0];
        if (local_148[0] <= 10.0) {
          local_148[0] = 10.0;
        }
        local_148[0] = local_148[0] / 100.0;
        pSVar47 = System_Single__ToString_1b49f60(local_148,"F1",(MethodInfo *)0x0);
        str0 = System_String__Concat_1969590
                         (str0," | ",pSVar47,"K",(MethodInfo *)0x0);
      }
    }
  }
  pSVar31 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
  if ((pSVar31 != (Settings_AbilitySettings_o *)0x0) &&
     (pSVar26 = (pSVar31->fields).CursorCooldown, pSVar26 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar26->fields)._value != false) {
      pSVar32 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar32 == (Settings_InGameSet_o *)0x0) ||
          (pSVar33 = (pSVar32->fields).Misc, pSVar33 == (Settings_InGameMiscSettings_o *)0x0)) ||
         (pSVar26 = (pSVar33->fields).ThunderspearPVP, pSVar26 == (Settings_BoolSetting_o *)0x0))
      goto label_18211ca82;
      if ((pSVar26->fields)._value != false) {
        pCVar22 = (__this->fields)._human;
        if (pCVar22 == (Characters_Human_o *)0x0) goto label_18211ca82;
        pCVar28 = (pCVar22->fields).Weapon;
        if (pCVar28 != (Characters_BaseUseable_o *)0x0) {
          pCVar29 = pCVar28->klass;
          bVar19 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
          if ((bVar19 <= (pCVar29->_2).typeHierarchyDepth) &&
             ((pCVar29->_2).typeHierarchy[(ulonglong)bVar19 - 1] ==
              (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
            bVar43 = System_String__op_Inequality
                               (str0,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                (MethodInfo *)0x0);
            if (bVar43) {
              str0 = System_String__Concat_1969e50(str0,"\n",(MethodInfo *)0x0);
            }
            pCVar22 = (__this->fields)._human;
            if ((pCVar22 == (Characters_Human_o *)0x0) ||
               (pCVar28 = (pCVar22->fields).Weapon, pCVar28 == (Characters_BaseUseable_o *)0x0))
            goto label_18211ca82;
            bVar19 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
            if (((pCVar28->klass->_2).typeHierarchyDepth < bVar19) ||
               ((pCVar28->klass->_2).typeHierarchy[(ulonglong)bVar19 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
              il2cpp_codegen_raise_invalid_cast_exception(pCVar28);
            }
            fVar55 = (pCVar28->fields).Cooldown;
            fVar51 = UnityEngine_Time__get_time((MethodInfo *)0x0);
            fVar55 = fVar55 - (fVar51 - (pCVar28->fields)._lastUseTime);
            if (fVar55 < 0.0) {
              local_124[0] = 0.0;
            }
            else {
              local_124[0] = (pCVar28->fields).Cooldown;
              if (fVar55 <= local_124[0]) {
                local_124[0] = fVar55;
              }
            }
            if (0.0 < local_124[0]) {
              pSVar47 = System_Single__ToString_1b49f60(local_124,"F2",(MethodInfo *)0x0);
              str0 = System_String__Concat_1969590
                               (str0,"<color=#FF0000>",pSVar47,"</color>",(MethodInfo *)0x0);
            }
            else {
              str0 = System_String__Concat_1969e50(str0,"<color=#008000>READY</color>",(MethodInfo *)0x0);
            }
          }
        }
      }
    }
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    UI_CursorManager__SetCrosshairText(str0,(MethodInfo *)0x0);
    if (120.0 < fVar59) {
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      bVar43 = false;
    }
    else {
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      bVar43 = true;
    }
    UI_CursorManager__SetCrosshairColor(bVar43,(MethodInfo *)0x0);
    pSVar25 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar25 != (Settings_UISettings_o *)0x0) &&
       (pSVar26 = (pSVar25->fields).ShowCrosshairArrows, pSVar26 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar26->fields)._value == false) {
        return;
      }
      pCVar22 = (__this->fields)._human;
      if (pCVar22 != (Characters_Human_o *)0x0) {
        pUVar45 = (*(pCVar22->klass->vtable)._76_GetAimPoint.methodPtr)
                            ((UnityEngine_Vector3_o *)&local_168,pCVar22,
                             (pCVar22->klass->vtable)._76_GetAimPoint.method);
        pCVar20 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
        if (((pCVar20 != (Cameras_BaseCamera_o *)0x0) &&
            (pUVar23 = (pCVar20->fields).Cache, pUVar23 != (Utility_BaseComponentCache_o *)0x0)) &&
           (pUVar24 = (pUVar23->fields).Transform, pUVar24 != (UnityEngine_Transform_o *)0x0)) {
          uVar4 = (pUVar45->fields).x;
          uVar14 = (pUVar45->fields).y;
          fVar59 = (pUVar45->fields).z;
          pUVar45 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_168,pUVar24,(MethodInfo *)0x0);
          fVar55 = (pUVar45->fields).x;
          fVar51 = (pUVar45->fields).y;
          fVar58 = (pUVar45->fields).z;
          if (Il2CppMethodInitialized_18433dee7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_18433dee7 = '\x01';
          }
          fVar55 = fVar55 - (float)uVar4;
          fVar51 = fVar51 - (float)uVar14;
          fVar58 = fVar58 - fVar59;
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          dVar54 = (double)(fVar51 * fVar51 + fVar55 * fVar55 + fVar58 * fVar58);
          if (dVar54 < 0.0) {
            dVar54 = sqrt(dVar54);
          }
          else {
            dVar54 = SQRT(dVar54);
          }
          if (50.0 < (float)dVar54) {
            fVar55 = 0.3;
          }
          else {
            fVar55 = 0.05;
          }
          pCVar22 = (__this->fields)._human;
          if (((pCVar22 != (Characters_Human_o *)0x0) &&
              (pUVar23 = (pCVar22->fields).Cache, pUVar23 != (Utility_BaseComponentCache_o *)0x0)) &&
             (pUVar24 = (pUVar23->fields).Transform, pUVar24 != (UnityEngine_Transform_o *)0x0)) {
            fVar55 = fVar55 * (float)dVar54;
            pUVar45 = UnityEngine_Transform__get_right
                                ((UnityEngine_Vector3_o *)&local_168,pUVar24,(MethodInfo *)0x0);
            uVar5 = (pUVar45->fields).x;
            uVar15 = (pUVar45->fields).y;
            pCVar22 = (__this->fields)._human;
            fVar51 = (float)uVar4 - (float)uVar5 * fVar55;
            fVar58 = (float)uVar14 - (float)uVar15 * fVar55;
            if (((pCVar22 != (Characters_Human_o *)0x0) &&
                (pUVar23 = (pCVar22->fields).Cache, pUVar23 != (Utility_BaseComponentCache_o *)0x0)) &&
               (pUVar24 = (pUVar23->fields).Transform, pUVar24 != (UnityEngine_Transform_o *)0x0)) {
              fVar1 = (pUVar45->fields).z;
              pUVar45 = UnityEngine_Transform__get_right
                                  ((UnityEngine_Vector3_o *)&local_168,pUVar24,(MethodInfo *)0x0);
              uVar6 = (pUVar45->fields).x;
              uVar16 = (pUVar45->fields).y;
              fVar60 = (float)uVar6 * fVar55 + (float)uVar4;
              fVar61 = (float)uVar16 * fVar55 + (float)uVar14;
              pCVar20 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
              if ((pCVar20 != (Cameras_BaseCamera_o *)0x0) &&
                 (pUVar21 = (pCVar20->fields).Camera, pUVar21 != (UnityEngine_Camera_o *)0x0)) {
                local_158.y = fVar58;
                local_158.x = fVar51;
                fVar56 = fVar59 - fVar1 * fVar55;
                fVar1 = (pUVar45->fields).z;
                local_158.z = fVar56;
                pUVar45 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                                    ((UnityEngine_Vector3_o *)&local_168,pUVar21,
                                     (UnityEngine_Vector3_o *)&local_158,(MethodInfo *)0x0);
                uVar37._0_4_ = (pUVar45->fields).x;
                uVar37._4_4_ = (pUVar45->fields).y;
                local_158._0_8_ = uVar37;
                if (Il2CppMethodInitialized_184346ada == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
                  Il2CppMethodInitialized_184346ada = '\x01';
                }
                if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
                }
                UI_CursorManager__GetInGameMousePosition
                          ((UnityEngine_Vector3_o *)&local_168,(MethodInfo *)0x0);
                local_158.x = 0.0;
                local_158.y = 0.0;
                fVar52 = (float)il2cpp_runtime_helper_1804f3c50();
                local_158.z = fVar52 * 57.29578 * 0.017453292;
                pUVar49 = UnityEngine_Quaternion__Internal_FromEulerRad
                                    ((UnityEngine_Quaternion_o *)&local_118,
                                     (UnityEngine_Vector3_o *)&local_158,(MethodInfo *)0x0);
                pCVar22 = (__this->fields)._human;
                if (((pCVar22 != (Characters_Human_o *)0x0) &&
                    (pUVar23 = (pCVar22->fields).Cache, pUVar23 != (Utility_BaseComponentCache_o *)0x0)) &&
                   (pUVar24 = (pUVar23->fields).Transform, pUVar24 != (UnityEngine_Transform_o *)0x0)) {
                  uVar38._0_4_ = (pUVar49->fields).x;
                  uVar38._4_4_ = (pUVar49->fields).y;
                  uVar39._0_4_ = (pUVar49->fields).z;
                  uVar39._4_4_ = (pUVar49->fields).w;
                  pUVar45 = UnityEngine_Transform__get_position
                                      ((UnityEngine_Vector3_o *)&local_168,pUVar24,(MethodInfo *)0x0);
                  pCVar22 = (__this->fields)._human;
                  if (((pCVar22 != (Characters_Human_o *)0x0) &&
                      (pUVar23 = (pCVar22->fields).Cache, pUVar23 != (Utility_BaseComponentCache_o *)0x0)) &&
                     (pUVar24 = (pUVar23->fields).Transform, pUVar24 != (UnityEngine_Transform_o *)0x0)) {
                    uVar10._0_4_ = (pUVar45->fields).x;
                    uVar10._4_4_ = (pUVar45->fields).y;
                    fVar52 = (pUVar45->fields).z;
                    pUVar45 = UnityEngine_Transform__get_position
                                        ((UnityEngine_Vector3_o *)&local_168,pUVar24,(MethodInfo *)0x0);
                    uVar7 = (pUVar45->fields).x;
                    uVar17 = (pUVar45->fields).y;
                    fVar56 = fVar56 - (pUVar45->fields).z;
                    fVar51 = fVar51 - (float)uVar7;
                    fVar58 = fVar58 - (float)uVar17;
                    local_138.y = fVar58;
                    local_138.x = fVar51;
                    local_138.z = fVar56;
                    if (Il2CppMethodInitialized_18433de5f == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                      Il2CppMethodInitialized_18433de5f = '\x01';
                    }
                    fVar53 = (float)il2cpp_runtime_helper_180546a40(&local_138);
                    if (fVar53 <= 1e-05) {
                      pUVar35 = TypeInfo_UnityEngine_Vector3->static_fields;
                      fVar51 = (pUVar35->zeroVector).fields.x;
                      fVar58 = (pUVar35->zeroVector).fields.y;
                      fVar56 = (pUVar35->zeroVector).fields.z;
                    }
                    else {
                      fVar51 = fVar51 / fVar53;
                      fVar58 = fVar58 / fVar53;
                      fVar56 = fVar56 / fVar53;
                    }
                    if ((TypeInfo_Controllers_HumanPlayerController->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Controllers_HumanPlayerController);
                    }
                    iVar44 = UnityEngine_Touch__get_fingerId
                                       ((UnityEngine_Touch_o *)
                                        TypeInfo_Controllers_HumanPlayerController->static_fields,
                                        (MethodInfo *)0x0);
                    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
                    }
                    local_158.z = fVar56;
                    local_158.y = fVar58;
                    local_158.x = fVar51;
                    local_168._0_8_ = uVar10;
                    local_168.z = fVar52;
                    bVar43 = UnityEngine_Physics__Raycast_2fe4eb0
                                       ((UnityEngine_Vector3_o *)&local_168,
                                        (UnityEngine_Vector3_o *)&local_158,120.0,iVar44,(MethodInfo *)0x0);
                    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
                    }
                    local_168.z = 0.0;
                    local_168._0_8_ = uVar37;
                    local_158._0_8_ = uVar38;
                    local_158._8_8_ = uVar39;
                    UI_CursorManager__SetHookArrow
                              (true,(UnityEngine_Vector3_o *)&local_168,(UnityEngine_Quaternion_o *)&local_158
                               ,bVar43,(MethodInfo *)0x0);
                    pCVar20 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
                    if ((pCVar20 != (Cameras_BaseCamera_o *)0x0) &&
                       (pUVar21 = (pCVar20->fields).Camera, pUVar21 != (UnityEngine_Camera_o *)0x0)) {
                      local_168.y = fVar61;
                      local_168.x = fVar60;
                      fVar59 = fVar1 * fVar55 + fVar59;
                      local_168.z = fVar59;
                      pUVar45 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                                          ((UnityEngine_Vector3_o *)&local_158,pUVar21,
                                           (UnityEngine_Vector3_o *)&local_168,(MethodInfo *)0x0);
                      uVar34._0_4_ = (pUVar45->fields).x;
                      uVar34._4_4_ = (pUVar45->fields).y;
                      local_168._0_8_ = uVar34;
                      if (Il2CppMethodInitialized_184346ada == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
                        Il2CppMethodInitialized_184346ada = '\x01';
                      }
                      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
                      }
                      UI_CursorManager__GetInGameMousePosition
                                ((UnityEngine_Vector3_o *)&local_168,(MethodInfo *)0x0);
                      local_158.x = 0.0;
                      local_158.y = 0.0;
                      fVar55 = (float)il2cpp_runtime_helper_1804f3c50();
                      local_158.z = fVar55 * 57.29578 * 0.017453292;
                      pUVar49 = UnityEngine_Quaternion__Internal_FromEulerRad
                                          ((UnityEngine_Quaternion_o *)&local_118,
                                           (UnityEngine_Vector3_o *)&local_158,(MethodInfo *)0x0);
                      pCVar22 = (__this->fields)._human;
                      if (((pCVar22 != (Characters_Human_o *)0x0) &&
                          (pUVar23 = (pCVar22->fields).Cache, pUVar23 != (Utility_BaseComponentCache_o *)0x0))
                         && (pUVar24 = (pUVar23->fields).Transform, pUVar24 != (UnityEngine_Transform_o *)0x0)
                         ) {
                        uVar40._0_4_ = (pUVar49->fields).x;
                        uVar40._4_4_ = (pUVar49->fields).y;
                        uVar41._0_4_ = (pUVar49->fields).z;
                        uVar41._4_4_ = (pUVar49->fields).w;
                        pUVar45 = UnityEngine_Transform__get_position
                                            ((UnityEngine_Vector3_o *)&local_168,pUVar24,(MethodInfo *)0x0);
                        pCVar22 = (__this->fields)._human;
                        if (((pCVar22 != (Characters_Human_o *)0x0) &&
                            (pUVar23 = (pCVar22->fields).Cache, pUVar23 != (Utility_BaseComponentCache_o *)0x0
                            )) && (pUVar24 = (pUVar23->fields).Transform,
                                  pUVar24 != (UnityEngine_Transform_o *)0x0)) {
                          uVar11._0_4_ = (pUVar45->fields).x;
                          uVar11._4_4_ = (pUVar45->fields).y;
                          fVar55 = (pUVar45->fields).z;
                          pUVar45 = UnityEngine_Transform__get_position
                                              ((UnityEngine_Vector3_o *)&local_168,pUVar24,(MethodInfo *)0x0);
                          uVar8 = (pUVar45->fields).x;
                          uVar18 = (pUVar45->fields).y;
                          fVar59 = fVar59 - (pUVar45->fields).z;
                          uVar57._0_4_ = fVar60 - (float)uVar8;
                          uVar57._4_4_ = fVar61 - (float)uVar18;
                          local_138._0_8_ = uVar57;
                          local_138.z = fVar59;
                          if (Il2CppMethodInitialized_18433de5f == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                            Il2CppMethodInitialized_18433de5f = '\x01';
                          }
                          local_168.z = (float)il2cpp_runtime_helper_180546a40(&local_138);
                          if (local_168.z <= 1e-05) {
                            pUVar35 = TypeInfo_UnityEngine_Vector3->static_fields;
                            fVar51 = (pUVar35->zeroVector).fields.x;
                            fVar58 = (pUVar35->zeroVector).fields.y;
                            local_168.z = (pUVar35->zeroVector).fields.z;
                          }
                          else {
                            fVar51 = (float)uVar57 / local_168.z;
                            fVar58 = uVar57._4_4_ / local_168.z;
                            local_168.z = fVar59 / local_168.z;
                          }
                          local_168.y = fVar58;
                          local_168.x = fVar51;
                          local_158.z = fVar55;
                          local_138.z = 0.0;
                          local_158._0_8_ = uVar11;
                          local_138._0_8_ = uVar34;
                          local_118.fields.m_Origin.fields._0_8_ = uVar40;
                          local_118.fields._8_8_ = uVar41;
                          iVar44 = UnityEngine_Touch__get_fingerId
                                             ((UnityEngine_Touch_o *)
                                              TypeInfo_Controllers_HumanPlayerController->static_fields,
                                              (MethodInfo *)0x0);
                          bVar43 = UnityEngine_Physics__Raycast_2fe4eb0
                                             ((UnityEngine_Vector3_o *)&local_158,
                                              (UnityEngine_Vector3_o *)&local_168,120.0,iVar44,
                                              (MethodInfo *)0x0);
                          UI_CursorManager__SetHookArrow
                                    (false,(UnityEngine_Vector3_o *)&local_138,
                                     (UnityEngine_Quaternion_o *)&local_118,bVar43,(MethodInfo *)0x0);
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
label_18211ca82:
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$GetHookArrowRotation
// il2cpp: UnityEngine_Quaternion_o Controllers_HumanPlayerController__GetHookArrowRotation (Controllers_HumanPlayerController_o* __this, bool left, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x182117e70

UnityEngine_Quaternion_o *
Controllers_HumanPlayerController__GetHookArrowRotation
          (UnityEngine_Quaternion_o *__return_storage_ptr__,Controllers_HumanPlayerController_o *__this,
          bool left,UnityEngine_Vector3_o *position,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Quaternion_o *pUVar4;
  float fVar5;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_184346ada == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_184346ada = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar3 = UI_CursorManager__GetInGameMousePosition((UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
  local_28.x = 0.0;
  local_28.y = 0.0;
  fVar5 = (float)il2cpp_runtime_helper_1804f3c50((position->fields).y - (pUVar3->fields).y,
                               (position->fields).x - (pUVar3->fields).x);
  local_28.z = fVar5 * 57.29578 * 0.017453292;
  pUVar4 = UnityEngine_Quaternion__Internal_FromEulerRad
                     (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
  fVar5 = (pUVar4->fields).y;
  fVar1 = (pUVar4->fields).z;
  fVar2 = (pUVar4->fields).w;
  (__return_storage_ptr__->fields).x = (pUVar4->fields).x;
  (__return_storage_ptr__->fields).y = fVar5;
  (__return_storage_ptr__->fields).z = fVar1;
  (__return_storage_ptr__->fields).w = fVar2;
  return __return_storage_ptr__;
}


// Controllers.HumanPlayerController$$UpdateHookInput
// il2cpp: void Controllers_HumanPlayerController__UpdateHookInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x18211a830

void Controllers_HumanPlayerController__UpdateHookInput
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanSetup_o *__this_00;
  Characters_HumanStats_o *pCVar2;
  Settings_HumanInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *pSVar4;
  Characters_HookUseable_o *pCVar5;
  Characters_HookUseable_o *pCVar6;
  System_String_o *pSVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  Photon_Pun_PhotonMessageInfo_o *pPVar14;
  Photon_Pun_PhotonMessageInfo_Fields local_68;
  Photon_Pun_PhotonMessageInfo_o local_48 [2];
  
  if (Il2CppMethodInitialized_184346adb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346adb = '\x01';
  }
  if (inMenu) {
    return;
  }
  pCVar1 = (__this->fields)._human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar1->fields).Setup, __this_00 == (Characters_HumanSetup_o *)0x0)) goto label_18211ad38;
  bVar8 = Characters_HumanSetup__get_HasODM(__this_00,(MethodInfo *)0x0);
  if (!bVar8) {
    return;
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) goto label_18211ad38;
  if (((pCVar1->fields)._state == 7) || ((pCVar1->fields)._state == 0xf)) {
label_18211a91e:
    bVar8 = false;
  }
  else {
    pCVar2 = (pCVar1->fields).Stats;
    if (pCVar2 == (Characters_HumanStats_o *)0x0) goto label_18211ad38;
    if (((pCVar2->fields).CurrentGas <= 0.0) ||
       (((pCVar1->fields).MountState == 2 && ((pCVar1->fields).CanMountedAttack == false))))
    goto label_18211a91e;
    bVar8 = (pCVar1->fields).Dead == false;
  }
  pSVar3 = (__this->fields)._humanInput;
  if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).HookBoth, pSVar4 == (Settings_KeybindSetting_o *)0x0)) goto label_18211ad38;
  bVar9 = Settings_KeybindSetting__GetKey(pSVar4,false,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._humanInput;
  if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).HookLeft, pSVar4 == (Settings_KeybindSetting_o *)0x0)) goto label_18211ad38;
  bVar10 = Settings_KeybindSetting__GetKey(pSVar4,false,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._humanInput;
  if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).HookRight, pSVar4 == (Settings_KeybindSetting_o *)0x0)) goto label_18211ad38;
  bVar11 = Settings_KeybindSetting__GetKey(pSVar4,false,(MethodInfo *)0x0);
  pCVar1 = (__this->fields)._human;
  if ((pCVar1 == (Characters_Human_o *)0x0) ||
     (pCVar5 = (pCVar1->fields).HookLeft, pCVar5 == (Characters_HookUseable_o *)0x0)) goto label_18211ad38;
  bVar12 = Characters_HookUseable__HasHook(pCVar5,(MethodInfo *)0x0);
  if (bVar12) {
    bVar12 = true;
  }
  else {
    pCVar1 = (__this->fields)._human;
    if ((pCVar1 == (Characters_Human_o *)0x0) ||
       (pCVar5 = (pCVar1->fields).HookRight, pCVar5 == (Characters_HookUseable_o *)0x0)) goto label_18211ad38;
    bVar12 = Characters_HookUseable__HasHook(pCVar5,(MethodInfo *)0x0);
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) goto label_18211ad38;
  if ((pCVar1->fields).CancelHookBothKey != false) {
    if (bVar9) {
      bVar9 = false;
    }
    else {
      (pCVar1->fields).CancelHookBothKey = false;
    }
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) goto label_18211ad38;
  if ((pCVar1->fields).CancelHookLeftKey != false) {
    if (bVar10) {
      bVar10 = false;
    }
    else {
      (pCVar1->fields).CancelHookLeftKey = false;
    }
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) goto label_18211ad38;
  if ((pCVar1->fields).CancelHookRightKey != false) {
    if (bVar11) {
      bVar11 = false;
    }
    else {
      (pCVar1->fields).CancelHookRightKey = false;
    }
  }
  if (((((__this->fields)._human == (Characters_Human_o *)0x0) ||
       (pCVar5 = (((__this->fields)._human)->fields).HookLeft, pCVar5 == (Characters_HookUseable_o *)0x0)) ||
      ((pCVar5->fields).HookBoth = (bool)(bVar9 & (bVar10 ^ 1U)),
      (__this->fields)._human == (Characters_Human_o *)0x0)) ||
     (pCVar5 = (((__this->fields)._human)->fields).HookRight, pCVar5 == (Characters_HookUseable_o *)0x0))
  goto label_18211ad38;
  (pCVar5->fields).HookBoth = (bool)(bVar9 & (bVar11 ^ 1U));
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) goto label_18211ad38;
  pCVar5 = (pCVar1->fields).HookLeft;
  if ((!bVar8) ||
     (bVar13 = Controllers_HumanPlayerController__IsSpin3Special(__this,(MethodInfo *)0x0), bVar13)) {
label_18211ab28:
    bVar13 = false;
  }
  else if (bVar10 == false) {
    if (bVar9 == false) goto label_18211ab28;
    pCVar1 = (__this->fields)._human;
    if ((pCVar1 == (Characters_Human_o *)0x0) ||
       (pCVar6 = (pCVar1->fields).HookLeft, pCVar6 == (Characters_HookUseable_o *)0x0)) goto label_18211ad38;
    bVar13 = Characters_HookUseable__IsHooked(pCVar6,(MethodInfo *)0x0);
    if (bVar13) {
      bVar13 = true;
    }
    else {
      bVar13 = (bool)(bVar12 ^ 1);
    }
  }
  else {
    bVar13 = true;
  }
  if (pCVar5 == (Characters_HookUseable_o *)0x0) goto label_18211ad38;
  (*(pCVar5->klass->vtable)._12_SetInput.methodPtr)(pCVar5,bVar13,(pCVar5->klass->vtable)._12_SetInput.method)
  ;
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) goto label_18211ad38;
  pCVar5 = (pCVar1->fields).HookRight;
  if ((!bVar8) || (bVar8 = Controllers_HumanPlayerController__IsSpin3Special(__this,(MethodInfo *)0x0), bVar8)
     ) {
label_18211abaf:
    bVar12 = false;
  }
  else if (bVar11 == false) {
    if (bVar9 == false) goto label_18211abaf;
    pCVar1 = (__this->fields)._human;
    if ((pCVar1 == (Characters_Human_o *)0x0) ||
       (pCVar6 = (pCVar1->fields).HookRight, pCVar6 == (Characters_HookUseable_o *)0x0)) goto label_18211ad38;
    bVar8 = Characters_HookUseable__IsHooked(pCVar6,(MethodInfo *)0x0);
    if (bVar8) {
      bVar12 = true;
    }
    else {
      bVar12 = (bool)(bVar12 ^ 1);
    }
  }
  else {
    bVar12 = true;
  }
  if (pCVar5 != (Characters_HookUseable_o *)0x0) {
    (*(pCVar5->klass->vtable)._12_SetInput.methodPtr)
              (pCVar5,bVar12,(pCVar5->klass->vtable)._12_SetInput.method);
    pCVar1 = (__this->fields)._human;
    if ((pCVar1 != (Characters_Human_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
      if ((0.0 < (pCVar2->fields).CurrentGas) || ((bVar11 == false && bVar10 == false) && bVar9 == false)) {
        return;
      }
      pSVar3 = (__this->fields)._humanInput;
      if ((pSVar3 != (Settings_HumanInputSettings_o *)0x0) &&
         (pSVar4 = (pSVar3->fields).HookLeft, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
        bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
        if (!bVar8) {
          pSVar3 = (__this->fields)._humanInput;
          if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
             (pSVar4 = (pSVar3->fields).HookRight, pSVar4 == (Settings_KeybindSetting_o *)0x0))
          goto label_18211ad38;
          bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
          if (!bVar8) {
            pSVar3 = (__this->fields)._humanInput;
            if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
               (pSVar4 = (pSVar3->fields).HookBoth, pSVar4 == (Settings_KeybindSetting_o *)0x0))
            goto label_18211ad38;
            bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
            if (!bVar8) {
              return;
            }
          }
        }
        pCVar1 = (__this->fields)._human;
        if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        pSVar7 = TypeInfo_Characters_HumanSounds->static_fields->NoGas;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        pPVar14 = Utility_Util__CreateLocalPhotonInfo(local_48,(MethodInfo *)0x0);
        if (pCVar1 != (Characters_Human_o *)0x0) {
          local_68.timeInt = (pPVar14->fields).timeInt;
          local_68._4_4_ = *(undefined4 *)&(pPVar14->fields).field_0x4;
          local_68.Sender = (pPVar14->fields).Sender;
          local_68.photonView = (pPVar14->fields).photonView;
          (*(pCVar1->klass->vtable)._86_PlaySoundRPC.methodPtr)
                    (pCVar1,pSVar7,(Photon_Pun_PhotonMessageInfo_o *)&local_68,
                     (pCVar1->klass->vtable)._86_PlaySoundRPC.method);
          return;
        }
      }
    }
  }
label_18211ad38:
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$TestScore
// il2cpp: void Controllers_HumanPlayerController__TestScore (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x182118600

void Controllers_HumanPlayerController__TestScore
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_HumanInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  UI_InGameMenu_o *pUVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184346adc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"test");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_184346adc = '\x01';
  }
  pSVar1 = (__this->fields)._humanInput;
  if ((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).HookLeft, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_182118724;
  bVar4 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_182118724;
    UI_InGameMenu__ShowKillFeed
              (pUVar3,"test","test",100,"Thunderspear",(MethodInfo *)0x0)
    ;
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_182118724;
    UI_InGameMenu__ShowKillScore(pUVar3,100,false,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields)._humanInput;
  if ((pSVar1 != (Settings_HumanInputSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).HookRight, pSVar2 != (Settings_KeybindSetting_o *)0x0)) {
    bVar4 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 != (UI_InGameMenu_o *)0x0) {
      UI_InGameMenu__ShowKillFeed
                (pUVar3,"test","test",3000,"Thunderspear",
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 != (UI_InGameMenu_o *)0x0) {
        UI_InGameMenu__ShowKillScore(pUVar3,3000,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_182118724:
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$UpdateActionInput
// il2cpp: void Controllers_HumanPlayerController__UpdateActionInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x182118810
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182118ffe: xor eax, eax
// asm:   0x182119000: mov ecx, r14d
// asm:   0x182119003: test ecx, ecx
// asm:   0x182119005: cmovne rax, r8
// asm:   0x182119009: jmp 0x182119019
// asm:   0x1821196cf: mov rdx, qword ptr [rip + 0x1f78e0a]  ; "UncarryRPC"
// asm:   0x1821196d6: mov r9, rax
// asm:   0x1821196d9: xor r8d, r8d
// asm:   0x1821196dc: mov qword ptr [rsp + 0x20], 0
// asm:   0x1821196e5: mov rcx, rbx
// asm:   0x1821196e8: call 0x181d4d940  ; Photon_Pun_PhotonView__RPC()
// asm:   0x1821196ed: jmp 0x182118ccf

void Controllers_HumanPlayerController__UpdateActionInput
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  Settings_HumanInputSettings_o *pSVar3;
  System_Collections_Generic_HashSet_HumanState__o *__this_00;
  Characters_ThunderspearWeapon_o *__this_01;
  UI_BaseMenu_o *pUVar4;
  UI_ChatPanel_o *__this_02;
  UI_InGameMenu_o *pUVar5;
  Characters_Human_o *pCVar6;
  Characters_BaseUseable_c *pCVar7;
  Characters_Horse_o *pCVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  Photon_Pun_PhotonView_o *__this_03;
  bool bVar11;
  bool bVar12;
  char cVar13;
  Characters_BaseUseable_o *pCVar14;
  Characters_Human_o *pCVar15;
  Characters_BaseUseable_o *pCVar16;
  UnityEngine_Vector3_o *pUVar17;
  System_Object_array *parameters;
  Settings_KeybindSetting_o *pSVar18;
  Settings_KeybindSetting_o *__this_04;
  bool bVar19;
  float fVar20;
  UnityEngine_Vector3_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184346add == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSTwinShot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseHoldAttackSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_EscapeSpecial);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_HumanState_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterTransformSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ThunderspearWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"UncarryRPC");
    Il2CppMethodInitialized_184346add = '\x01';
  }
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,inMenu,(MethodInfo *)0x0);
  Controllers_HumanPlayerController__UpdateHookInput(__this,inMenu,(MethodInfo *)0x0);
  Controllers_HumanPlayerController__UpdateReelInput(__this,inMenu,(MethodInfo *)0x0);
  Controllers_HumanPlayerController__UpdateDashInput(__this,inMenu,(MethodInfo *)0x0);
  if (!inMenu) {
    pCVar15 = (__this->fields)._human;
    if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
    if (((pCVar15->fields).Dead == false) && ((pCVar15->fields).Sheathed != false)) {
      bVar11 = Controllers_HumanPlayerController__SwapTSInput(__this,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._humanInput;
      if (pSVar3 == (Settings_HumanInputSettings_o *)0x0) goto label_1821196f2;
      if (bVar11) {
        pSVar18 = (pSVar3->fields).AttackSpecial;
      }
      else {
        pSVar18 = (pSVar3->fields).AttackDefault;
      }
      if (pSVar18 == (Settings_KeybindSetting_o *)0x0) goto label_1821196f2;
      bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar18,false,(MethodInfo *)0x0);
      if (!bVar11) {
        pSVar3 = (__this->fields)._humanInput;
        if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
           (pSVar18 = (pSVar3->fields).Reload, pSVar18 == (Settings_KeybindSetting_o *)0x0))
        goto label_1821196f2;
        bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar18,false,(MethodInfo *)0x0);
        if (!bVar11) goto label_1821189d9;
      }
      pCVar15 = (__this->fields)._human;
      if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
      Characters_Human__SetSheathed(pCVar15,false,(MethodInfo *)0x0);
    }
  }
label_1821189d9:
  pCVar15 = (__this->fields)._human;
  if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
  if ((pCVar15->fields).IsAttackableState == false) {
label_182118a3b:
    bVar11 = false;
  }
  else {
    __this_00 = (__this->fields)._illegalWeaponStates;
    if (__this_00 == (System_Collections_Generic_HashSet_HumanState__o *)0x0) goto label_1821196f2;
    bVar11 = System_Collections_Generic_HashSet_Int32Enum___Contains
                       ((System_Collections_Generic_HashSet_T__o *)__this_00,(pCVar15->fields)._state,
                        (MethodInfo_1759C90 *)
                        MethodInfo_System_Collections_Generic_HashSet_HumanState_Contains);
    if (bVar11 || inMenu) goto label_182118a3b;
    pCVar15 = (__this->fields)._human;
    if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
    if ((pCVar15->fields).Dead != false) goto label_182118a3b;
    bVar11 = (pCVar15->fields).Sheathed == false;
  }
  bVar12 = Controllers_HumanPlayerController__SwapTSInput(__this,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._humanInput;
  if (pSVar3 == (Settings_HumanInputSettings_o *)0x0) goto label_1821196f2;
  if (bVar12) {
    pSVar18 = (pSVar3->fields).AttackSpecial;
  }
  else {
    pSVar18 = (pSVar3->fields).AttackDefault;
  }
  bVar12 = Controllers_HumanPlayerController__SwapTSInput(__this,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._humanInput;
  if (pSVar3 == (Settings_HumanInputSettings_o *)0x0) goto label_1821196f2;
  if (bVar12) {
    __this_04 = (pSVar3->fields).AttackDefault;
  }
  else {
    __this_04 = (pSVar3->fields).AttackSpecial;
  }
  pCVar15 = (__this->fields)._human;
  if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
  (pCVar15->fields)._gunArmAim = false;
  pCVar15 = (__this->fields)._human;
  if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
  pCVar14 = (pCVar15->fields).Weapon;
  bVar12 = true;
  if (bVar11) {
    if (pCVar14 != (Characters_BaseUseable_o *)0x0) {
      bVar2 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
      if ((bVar2 <= (pCVar14->klass->_2).typeHierarchyDepth) &&
         ((pCVar14->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
        pCVar15 = (__this->fields)._human;
        if ((pCVar15 == (Characters_Human_o *)0x0) ||
           (pCVar14 = (pCVar15->fields).Weapon, pCVar14 == (Characters_BaseUseable_o *)0x0))
        goto label_1821196f2;
        bVar2 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
        if (((pCVar14->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pCVar14->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
          il2cpp_codegen_raise_invalid_cast_exception(pCVar14);
        }
        if ((*(uint32_t *)((char *)pCVar14 + 0x4c)) == 0) {
          bVar2 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
          pCVar7 = ((((__this->fields)._human)->fields).Weapon)->klass;
          if ((bVar2 <= (pCVar7->_2).typeHierarchyDepth) &&
             ((pCVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
              (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
            __this_01 = (Characters_ThunderspearWeapon_o *)(((__this->fields)._human)->fields).Weapon;
            bVar2 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
            if (((__this_01->klass->_2).typeHierarchyDepth < bVar2) ||
               ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Characters_ThunderspearWeapon);
            }
            bVar11 = Characters_ThunderspearWeapon__HasActiveProjectile(__this_01,(MethodInfo *)0x0);
            if (bVar11) goto label_182118bee;
          }
          if (pSVar18 == (Settings_KeybindSetting_o *)0x0) goto label_1821196f2;
          bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar18,false,(MethodInfo *)0x0);
          if (bVar11) {
            pCVar15 = (__this->fields)._human;
            if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
            if ((pCVar15->fields)._state == 0) {
              Characters_Human__Reload(pCVar15,(MethodInfo *)0x0);
            }
          }
          goto label_182118e9f;
        }
      }
    }
label_182118bee:
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar4 == (UI_BaseMenu_o *)0x0) goto label_1821196f2;
    bVar2 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((pUVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
    }
    __this_02 = (UI_ChatPanel_o *)(*(uint64_t *)((char *)pUVar4 + 0xd0));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar11) {
      if (__this_02 == (UI_ChatPanel_o *)0x0) goto label_1821196f2;
      bVar11 = UI_ChatPanel__IsPointerOverChatUI(__this_02,(MethodInfo *)0x0);
      if (bVar11) {
        pCVar15 = (__this->fields)._human;
        if ((pCVar15 != (Characters_Human_o *)0x0) &&
           (pCVar14 = (pCVar15->fields).Weapon, pCVar14 != (Characters_BaseUseable_o *)0x0)) {
          (*(pCVar14->klass->vtable)._12_SetInput.methodPtr)
                    (pCVar14,(System_Type_o *)0x0,(pCVar14->klass->vtable)._12_SetInput.method);
          return;
        }
        goto label_1821196f2;
      }
    }
    pCVar15 = (__this->fields)._human;
    if ((pCVar15 == (Characters_Human_o *)0x0) ||
       (pCVar14 = (pCVar15->fields).Weapon, pCVar14 == (Characters_BaseUseable_o *)0x0)) goto label_1821196f2;
    pCVar7 = pCVar14->klass;
    bVar2 = (TypeInfo_Characters_AHSSWeapon->_2).typeHierarchyDepth;
    if (((pCVar7->_2).typeHierarchyDepth < bVar2) ||
       ((pCVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_AHSSWeapon)) {
      pCVar14 = (((__this->fields)._human)->fields).Weapon;
      pCVar7 = pCVar14->klass;
      (*(pCVar7->vtable)._11_ReadInput.methodPtr)
                (pCVar14,(System_Type_o *)pSVar18,(pCVar7->vtable)._11_ReadInput.method);
    }
    else {
      if (pSVar18 == (Settings_KeybindSetting_o *)0x0) goto label_1821196f2;
      bVar11 = Settings_KeybindSetting__Contains_1f1ec20(pSVar18,0x143,(MethodInfo *)0x0);
      if (bVar11) {
        pUVar5 = (__this->fields)._inGameMenu;
        if (pUVar5 == (UI_InGameMenu_o *)0x0) goto label_1821196f2;
        if ((pUVar5->fields).SkipAHSSInput == false) goto label_182118dbd;
label_182118e1c:
        pUVar5 = (__this->fields)._inGameMenu;
        if (pUVar5 == (UI_InGameMenu_o *)0x0) goto label_1821196f2;
        (pUVar5->fields).SkipAHSSInput = false;
      }
      else {
label_182118dbd:
        bVar11 = Settings_KeybindSetting__GetKeyUp(pSVar18,false,(MethodInfo *)0x0);
        pCVar15 = (__this->fields)._human;
        if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
        pCVar14 = (pCVar15->fields).Weapon;
        if (bVar11) {
          if (pCVar14 == (Characters_BaseUseable_o *)0x0) goto label_1821196f2;
          (*(pCVar14->klass->vtable)._12_SetInput.methodPtr)
                    (pCVar14,(System_Type_o *)0x1,(pCVar14->klass->vtable)._12_SetInput.method);
          goto label_182118e1c;
        }
        if (pCVar14 == (Characters_BaseUseable_o *)0x0) goto label_1821196f2;
        (*(pCVar14->klass->vtable)._12_SetInput.methodPtr)
                  (pCVar14,(System_Type_o *)0x0,(pCVar14->klass->vtable)._12_SetInput.method);
      }
      pCVar15 = (__this->fields)._human;
      bVar11 = Settings_KeybindSetting__GetKey(pSVar18,false,(MethodInfo *)0x0);
      if (bVar11) {
        cVar13 = '\x01';
      }
      else {
        pCVar6 = (__this->fields)._human;
        if ((pCVar6 == (Characters_Human_o *)0x0) ||
           (pCVar14 = (pCVar6->fields).Weapon, pCVar14 == (Characters_BaseUseable_o *)0x0))
        goto label_1821196f2;
        cVar13 = (pCVar14->fields).IsActive;
      }
      if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
      (pCVar15->fields)._gunArmAim = cVar13 != '\0';
    }
  }
  else {
    if (pCVar14 == (Characters_BaseUseable_o *)0x0) goto label_1821196f2;
    (*(pCVar14->klass->vtable)._12_SetInput.methodPtr)
              (pCVar14,(System_Type_o *)0x0,(pCVar14->klass->vtable)._12_SetInput.method);
  }
label_182118e9f:
  pCVar15 = (__this->fields)._human;
  if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
  if ((pCVar15->fields).Special != (Characters_BaseUseable_o *)0x0) {
    if (Il2CppMethodInitialized_184346adf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSTwinShot);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseAttackSpecial);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DownStrikeSpecial);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
      Il2CppMethodInitialized_184346adf = '\x01';
    }
    pCVar15 = (__this->fields)._human;
    if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
    if ((pCVar15->fields).Sheathed == false) {
      bVar11 = false;
    }
    else {
      pCVar14 = (pCVar15->fields).Special;
      if (pCVar14 == (Characters_BaseUseable_o *)0x0) {
        pCVar14 = (Characters_BaseUseable_o *)0x0;
label_182119019:
        bVar11 = pCVar14 != (Characters_BaseUseable_o *)0x0;
      }
      else {
        pCVar7 = pCVar14->klass;
        bVar2 = (TypeInfo_Characters_BaseAttackSpecial->_2).typeHierarchyDepth;
        if (((pCVar7->_2).typeHierarchyDepth < bVar2) ||
           ((pCVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_BaseAttackSpecial)) {
          bVar2 = (TypeInfo_Characters_DownStrikeSpecial->_2).typeHierarchyDepth;
          pCVar7 = ((((__this->fields)._human)->fields).Special)->klass;
          if (((pCVar7->_2).typeHierarchyDepth < bVar2) ||
             ((pCVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_DownStrikeSpecial)) {
            bVar2 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth;
            pCVar7 = ((((__this->fields)._human)->fields).Special)->klass;
            if (((pCVar7->_2).typeHierarchyDepth < bVar2) ||
               ((pCVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_StockSpecial)) {
              pCVar14 = (((__this->fields)._human)->fields).Special;
              bVar2 = (TypeInfo_Characters_AHSSTwinShot->_2).typeHierarchyDepth;
              if (((pCVar14->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((pCVar14->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_Characters_AHSSTwinShot)) {
                pCVar14 = (Characters_BaseUseable_o *)0x0;
              }
              goto label_182119019;
            }
          }
        }
        bVar11 = true;
      }
      pCVar15 = (__this->fields)._human;
    }
    if (((pCVar15->fields).IsAttackableState == false) || (bVar11)) {
label_1821190ef:
      bVar19 = false;
    }
    else {
      pCVar14 = (((__this->fields)._human)->fields).Special;
      if (pCVar14 == (Characters_BaseUseable_o *)0x0) {
label_1821190ab:
        if ((((__this->fields)._human)->fields)._state == 7) goto label_1821190ef;
      }
      else {
        pCVar7 = pCVar14->klass;
        bVar2 = (TypeInfo_Characters_EscapeSpecial->_2).typeHierarchyDepth;
        if (((pCVar7->_2).typeHierarchyDepth < bVar2) ||
           ((pCVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_EscapeSpecial)) {
          bVar2 = (TypeInfo_Characters_ShifterTransformSpecial->_2).typeHierarchyDepth;
          pCVar7 = ((((__this->fields)._human)->fields).Special)->klass;
          if (((pCVar7->_2).typeHierarchyDepth < bVar2) ||
             ((pCVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial)) goto label_1821190ab;
        }
      }
      pCVar15 = (__this->fields)._human;
      if (((((pCVar15->fields).CarryState == 1) || ((pCVar15->fields)._state == 8)) ||
          ((pCVar15->fields)._state == 1)) || (((pCVar15->fields)._state == 9 || (inMenu))))
      goto label_1821190ef;
      bVar19 = (pCVar15->fields).Dead == false;
    }
    pCVar14 = (((__this->fields)._human)->fields).Special;
    if (pCVar14 == (Characters_BaseUseable_o *)0x0) {
label_18211917f:
      bVar11 = false;
    }
    else {
      pCVar7 = pCVar14->klass;
      bVar2 = (TypeInfo_Characters_BaseHoldAttackSpecial->_2).typeHierarchyDepth;
      if ((((pCVar7->_2).typeHierarchyDepth < bVar2) ||
          ((pCVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
           (Il2CppClass *)TypeInfo_Characters_BaseHoldAttackSpecial)) ||
         ((pCVar15 = (__this->fields)._human, (pCVar15->fields).IsAttackableState == false ||
          ((bVar11 || ((pCVar15->fields)._state == 7)))))) goto label_18211917f;
      if ((pCVar15->fields)._state != 1) {
        if ((pCVar15->fields)._state != 8) goto label_1821191bc;
        goto label_18211917f;
      }
      pCVar7 = ((pCVar15->fields).Special)->klass;
      bVar2 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth;
      if (((pCVar7->_2).typeHierarchyDepth < bVar2) ||
         ((pCVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_StockSpecial)
         ) goto label_18211917f;
label_1821191bc:
      pCVar15 = (__this->fields)._human;
      if (((pCVar15->fields).CarryState == 1) || (inMenu)) goto label_18211917f;
      bVar11 = (pCVar15->fields).Dead == false;
    }
    pCVar14 = (((__this->fields)._human)->fields).Special;
    if (bVar11 || bVar19) {
      if (pCVar14 == (Characters_BaseUseable_o *)0x0) {
        pCVar15 = (__this->fields)._human;
      }
      else {
        bVar2 = (TypeInfo_Characters_AHSSTwinShot->_2).typeHierarchyDepth;
        if (((pCVar14->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pCVar14->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_AHSSTwinShot)) {
          bVar12 = false;
        }
        pCVar15 = (__this->fields)._human;
        pCVar16 = (Characters_BaseUseable_o *)0x0;
        if (bVar12) {
          pCVar16 = pCVar14;
        }
        if (pCVar16 != (Characters_BaseUseable_o *)0x0) {
          if ((pCVar15 == (Characters_Human_o *)0x0) || (__this_04 == (Settings_KeybindSetting_o *)0x0))
          goto label_1821196f2;
          pCVar14 = (pCVar15->fields).Special;
          bVar11 = Settings_KeybindSetting__GetKeyUp(__this_04,false,(MethodInfo *)0x0);
          if (pCVar14 == (Characters_BaseUseable_o *)0x0) goto label_1821196f2;
          (*(pCVar14->klass->vtable)._12_SetInput.methodPtr)
                    (pCVar14,(System_Type_o *)(ulonglong)bVar11,(pCVar14->klass->vtable)._12_SetInput.method);
          goto label_182119290;
        }
      }
      if ((pCVar15 == (Characters_Human_o *)0x0) ||
         (pCVar14 = (pCVar15->fields).Special, pCVar14 == (Characters_BaseUseable_o *)0x0))
      goto label_1821196f2;
      (*(pCVar14->klass->vtable)._11_ReadInput.methodPtr)
                (pCVar14,(System_Type_o *)__this_04,(pCVar14->klass->vtable)._11_ReadInput.method);
    }
    else {
      if (pCVar14 == (Characters_BaseUseable_o *)0x0) goto label_1821196f2;
      (*(pCVar14->klass->vtable)._12_SetInput.methodPtr)
                (pCVar14,(System_Type_o *)0x0,(pCVar14->klass->vtable)._12_SetInput.method);
    }
  }
label_182119290:
  if (inMenu) {
    return;
  }
  pCVar15 = (__this->fields)._human;
  if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
  if ((pCVar15->fields).Dead != false) {
    return;
  }
  if ((pCVar15->fields)._state == 0xf) {
    return;
  }
  if ((pCVar15->fields).MountState == 0) {
    bVar11 = Characters_Human__CanJump(pCVar15,(MethodInfo *)0x0);
    if (bVar11) {
      pSVar3 = (__this->fields)._humanInput;
      if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
         (pSVar18 = (pSVar3->fields).Jump, pSVar18 == (Settings_KeybindSetting_o *)0x0)) goto label_1821196f2;
      bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar18,false,(MethodInfo *)0x0);
      if (bVar11) {
        pCVar15 = (__this->fields)._human;
        if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
        Characters_Human__Jump(pCVar15,(MethodInfo *)0x0);
      }
      else {
        pSVar3 = (__this->fields)._humanInput;
        if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
           (pSVar18 = (pSVar3->fields).HorseMount, pSVar18 == (Settings_KeybindSetting_o *)0x0))
        goto label_1821196f2;
        bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar18,false,(MethodInfo *)0x0);
        if (bVar11) {
          pCVar15 = (__this->fields)._human;
          if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
          pCVar8 = (pCVar15->fields).Horse;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar11 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar11) {
            pCVar15 = (__this->fields)._human;
            if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
            if ((pCVar15->fields).MountState == 0) {
              pCVar8 = (pCVar15->fields).Horse;
              if (((pCVar8 == (Characters_Horse_o *)0x0) ||
                  (pUVar9 = (pCVar8->fields).Cache, pUVar9 == (Utility_BaseComponentCache_o *)0x0)) ||
                 (pUVar10 = (pUVar9->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0))
              goto label_1821196f2;
              pUVar17 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)local_38,pUVar10,(MethodInfo *)0x0);
              pCVar15 = (__this->fields)._human;
              if (((pCVar15 == (Characters_Human_o *)0x0) ||
                  (pUVar9 = (pCVar15->fields).Cache, pUVar9 == (Utility_BaseComponentCache_o *)0x0)) ||
                 (pUVar10 = (pUVar9->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0))
              goto label_1821196f2;
              fVar20 = (pUVar17->fields).z;
              uVar1._0_4_ = (pUVar17->fields).x;
              uVar1._4_4_ = (pUVar17->fields).y;
              UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_38,pUVar10,(MethodInfo *)0x0)
              ;
              local_38[0]._0_8_ = uVar1;
              local_38[0].z = fVar20;
              fVar20 = (float)il2cpp_runtime_helper_180562c80(local_38);
              if (fVar20 < 15.0) {
                pCVar15 = (__this->fields)._human;
                if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
                if ((pCVar15->fields).HasDirection == false) {
                  if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
                  Characters_Human__MountHorse(pCVar15,(MethodInfo *)0x0);
                  goto label_182119610;
                }
              }
            }
          }
        }
        pSVar3 = (__this->fields)._humanInput;
        if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
           (pSVar18 = (pSVar3->fields).Dodge, pSVar18 == (Settings_KeybindSetting_o *)0x0))
        goto label_1821196f2;
        bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar18,false,(MethodInfo *)0x0);
        if (bVar11) {
          pCVar15 = (__this->fields)._human;
          if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
          fVar20 = (pCVar15->fields).TargetAngle;
          if ((pCVar15->fields).HasDirection == false) {
            Characters_Human__Dodge(pCVar15,fVar20,(MethodInfo *)0x0);
          }
          else {
            Characters_Human__Dodge(pCVar15,fVar20 + 180.0,(MethodInfo *)0x0);
          }
        }
      }
    }
label_182119610:
    pCVar15 = (__this->fields)._human;
    if (pCVar15 != (Characters_Human_o *)0x0) {
      if ((pCVar15->fields)._state == 0) {
        pSVar3 = (__this->fields)._humanInput;
        if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
           (pSVar18 = (pSVar3->fields).Reload, pSVar18 == (Settings_KeybindSetting_o *)0x0))
        goto label_1821196f2;
        bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar18,false,(MethodInfo *)0x0);
        if (bVar11) {
          pCVar15 = (__this->fields)._human;
          if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
          Characters_Human__Reload(pCVar15,(MethodInfo *)0x0);
        }
      }
      pCVar15 = (__this->fields)._human;
      if (pCVar15 != (Characters_Human_o *)0x0) {
        if ((pCVar15->fields).CarryState != 1) {
          return;
        }
        pSVar3 = (__this->fields)._humanInput;
        if ((pSVar3 != (Settings_HumanInputSettings_o *)0x0) &&
           (pSVar18 = (pSVar3->fields).HorseMount, pSVar18 != (Settings_KeybindSetting_o *)0x0)) {
          bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar18,false,(MethodInfo *)0x0);
          if (!bVar11) {
            return;
          }
          pCVar15 = (__this->fields)._human;
          if ((pCVar15 != (Characters_Human_o *)0x0) &&
             (pUVar9 = (pCVar15->fields).Cache, pUVar9 != (Utility_BaseComponentCache_o *)0x0)) {
            __this_03 = (pUVar9->fields).PhotonView;
            parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
            if (__this_03 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this_03,"UncarryRPC",0,parameters,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    goto label_1821196f2;
  }
  if ((pCVar15->fields).MountState != 1) {
    return;
  }
  pSVar3 = (__this->fields)._humanInput;
  if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar18 = (pSVar3->fields).HorseMount, pSVar18 == (Settings_KeybindSetting_o *)0x0)) goto label_1821196f2;
  bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar18,false,(MethodInfo *)0x0);
  if (bVar11) {
    pCVar15 = (__this->fields)._human;
    if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
    if ((pCVar15->fields)._state != 0) goto label_182119333;
    if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
    Characters_Human__Unmount(pCVar15,false,(MethodInfo *)0x0);
  }
  else {
label_182119333:
    pSVar3 = (__this->fields)._humanInput;
    if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
       (pSVar18 = (pSVar3->fields).HorseJump, pSVar18 == (Settings_KeybindSetting_o *)0x0))
    goto label_1821196f2;
    bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar18,false,(MethodInfo *)0x0);
    if (bVar11) {
      pCVar15 = (__this->fields)._human;
      if ((pCVar15 == (Characters_Human_o *)0x0) ||
         (pCVar8 = (pCVar15->fields).Horse, pCVar8 == (Characters_Horse_o *)0x0)) goto label_1821196f2;
      Characters_Horse__Jump(pCVar8,(MethodInfo *)0x0);
    }
  }
  pCVar15 = (__this->fields)._human;
  if (pCVar15 == (Characters_Human_o *)0x0) {
label_1821196f2:
    ThrowNullReferenceException();
  }
  if (((pCVar15->fields)._state == 0) && ((pCVar15->fields).IsAttackableState != false)) {
    pSVar3 = (__this->fields)._humanInput;
    if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
       (pSVar18 = (pSVar3->fields).Reload, pSVar18 == (Settings_KeybindSetting_o *)0x0)) goto label_1821196f2;
    bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar18,false,(MethodInfo *)0x0);
    if (bVar11) {
      pCVar15 = (__this->fields)._human;
      if (pCVar15 == (Characters_Human_o *)0x0) goto label_1821196f2;
      Characters_Human__Reload(pCVar15,(MethodInfo *)0x0);
    }
  }
  return;
}


// Controllers.HumanPlayerController$$SwapTSInput
// il2cpp: bool Controllers_HumanPlayerController__SwapTSInput (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x182118560

bool Controllers_HumanPlayerController__SwapTSInput
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Characters_BaseUseable_c *pCVar4;
  Settings_HumanInputSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  
  if (Il2CppMethodInitialized_184346ade == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ThunderspearWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346ade = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Weapon;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      pCVar4 = pCVar3->klass;
      bVar1 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar4->_2).typeHierarchyDepth) &&
         ((pCVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
        pSVar5 = (__this->fields)._humanInput;
        if ((pSVar5 != (Settings_HumanInputSettings_o *)0x0) &&
           (pSVar6 = (pSVar5->fields).SwapTSAttackSpecial, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
          return (pSVar6->fields)._value;
        }
        goto label_1821185f8;
      }
    }
    return false;
  }
label_1821185f8:
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$GetAttackInput
// il2cpp: Settings_KeybindSetting_o* Controllers_HumanPlayerController__GetAttackInput (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x182117db0

Settings_KeybindSetting_o *
Controllers_HumanPlayerController__GetAttackInput
          (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_HumanInputSettings_o *pSVar1;
  bool bVar2;
  
  bVar2 = Controllers_HumanPlayerController__SwapTSInput(__this,(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._humanInput;
  if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (bVar2) {
    return (pSVar1->fields).AttackSpecial;
  }
  return (pSVar1->fields).AttackDefault;
}


// Controllers.HumanPlayerController$$GetSpecialInput
// il2cpp: Settings_KeybindSetting_o* Controllers_HumanPlayerController__GetSpecialInput (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x182117f20

Settings_KeybindSetting_o *
Controllers_HumanPlayerController__GetSpecialInput
          (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_HumanInputSettings_o *pSVar1;
  bool bVar2;
  
  bVar2 = Controllers_HumanPlayerController__SwapTSInput(__this,(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._humanInput;
  if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (bVar2) {
    return (pSVar1->fields).AttackDefault;
  }
  return (pSVar1->fields).AttackSpecial;
}


// Controllers.HumanPlayerController$$IsSheathedWeaponSpecial
// il2cpp: bool Controllers_HumanPlayerController__IsSheathedWeaponSpecial (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x182118080

bool Controllers_HumanPlayerController__IsSheathedWeaponSpecial
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Characters_BaseUseable_c *pCVar4;
  bool bVar5;
  Characters_BaseUseable_o *pCVar6;
  
  if (Il2CppMethodInitialized_184346adf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSTwinShot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseAttackSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DownStrikeSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
    Il2CppMethodInitialized_184346adf = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar2->fields).Sheathed == false) {
    return false;
  }
  pCVar3 = (pCVar2->fields).Special;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    pCVar4 = pCVar3->klass;
    bVar1 = (TypeInfo_Characters_BaseAttackSpecial->_2).typeHierarchyDepth;
    if (((pCVar4->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_BaseAttackSpecial)) {
      bVar1 = (TypeInfo_Characters_DownStrikeSpecial->_2).typeHierarchyDepth;
      pCVar4 = ((((__this->fields)._human)->fields).Special)->klass;
      if (((pCVar4->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_DownStrikeSpecial)) {
        bVar1 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth;
        pCVar4 = ((((__this->fields)._human)->fields).Special)->klass;
        if (((pCVar4->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_StockSpecial)) {
          pCVar3 = (((__this->fields)._human)->fields).Special;
          bVar1 = (TypeInfo_Characters_AHSSTwinShot->_2).typeHierarchyDepth;
          pCVar4 = pCVar3->klass;
          if (((pCVar4->_2).typeHierarchyDepth < bVar1) ||
             (bVar5 = true,
             (pCVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
             (Il2CppClass *)TypeInfo_Characters_AHSSTwinShot)) {
            bVar5 = false;
          }
          pCVar6 = (Characters_BaseUseable_o *)0x0;
          if (bVar5) {
            pCVar6 = pCVar3;
          }
          return pCVar6 != (Characters_BaseUseable_o *)0x0;
        }
      }
    }
    return true;
  }
  return false;
}


// Controllers.HumanPlayerController$$UpdateSheatheInput
// il2cpp: void Controllers_HumanPlayerController__UpdateSheatheInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x18211b710

void Controllers_HumanPlayerController__UpdateSheatheInput
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Settings_HumanInputSettings_o *pSVar2;
  bool bVar3;
  Settings_KeybindSetting_o *pSVar4;
  
  if (inMenu) {
    return;
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields).Dead != false) {
      return;
    }
    if ((pCVar1->fields).Sheathed == false) {
      return;
    }
    bVar3 = Controllers_HumanPlayerController__SwapTSInput(__this,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._humanInput;
    if (pSVar2 != (Settings_HumanInputSettings_o *)0x0) {
      if (bVar3) {
        pSVar4 = (pSVar2->fields).AttackSpecial;
      }
      else {
        pSVar4 = (pSVar2->fields).AttackDefault;
      }
      if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
        bVar3 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
        if (!bVar3) {
          pSVar2 = (__this->fields)._humanInput;
          if ((pSVar2 == (Settings_HumanInputSettings_o *)0x0) ||
             (pSVar4 = (pSVar2->fields).Reload, pSVar4 == (Settings_KeybindSetting_o *)0x0))
          goto label_18211b7a3;
          bVar3 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
        }
        pCVar1 = (__this->fields)._human;
        if (pCVar1 != (Characters_Human_o *)0x0) {
          Characters_Human__SetSheathed(pCVar1,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_18211b7a3:
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$ToggleUI
// il2cpp: void Controllers_HumanPlayerController__ToggleUI (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x182118730

void Controllers_HumanPlayerController__ToggleUI
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Canvas_o *__this_00;
  UnityEngine_Canvas_o *__this_01;
  
  if (Il2CppMethodInitialized_184346ae0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultMenu(Clone)");
    Il2CppMethodInitialized_184346ae0 = '\x01';
  }
  x = (UnityEngine_Object_o *)UnityEngine_GameObject__Find("DefaultMenu(Clone)",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (x != (UnityEngine_Object_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)x,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)x,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
    if ((__this_01 != (UnityEngine_Canvas_o *)0x0) &&
       (bVar1 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this_01,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Canvas_o *)0x0)) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,!bVar1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$UpdateReelInput
// il2cpp: void Controllers_HumanPlayerController__UpdateReelInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x18211b250
// eh: try 0x18211b3b5..0x18211b702 -> pad 0x183317c60 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 60 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18211b40c: mov rdx, qword ptr [rip + 0x1f6c1b5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x18211b413: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18211b418: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18211b41d: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18211b422: test rcx, rcx
// asm:   0x18211b425: jne 0x18211b6cc
// asm:   0x18211b42b: mov rsi, qword ptr [rsp + 0xb0]
// asm:   0x18211b433: xorps xmm7, xmm7
// asm:   0x18211b436: movzx edi, byte ptr [rsp + 0xc8]
// asm:   0x18211b49f: nop 
// asm:   0x18211b527: mov rdx, qword ptr [rip + 0x1f6c09a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x18211b52e: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18211b533: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18211b538: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18211b53d: test rcx, rcx
// asm:   0x18211b540: jne 0x18211b6e2
// asm:   0x18211b546: mov rsi, qword ptr [rsp + 0xb0]
// asm:   0x18211b54e: jmp 0x18211b576
// asm:   0x18211b68a: mov rdx, qword ptr [rip + 0x1f6bf37]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x18211b691: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18211b696: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18211b69b: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18211b6a0: test rcx, rcx
// asm:   0x18211b6a3: jne 0x18211b702
// asm:   0x18211b6cc: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18211b6e2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18211b702: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317c60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317c65: push rbp
// asm:   0x183317c66: sub rsp, 0x20
// asm:   0x183317c6a: mov rbp, rdx
// asm:   0x183317c6d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317c71: mov rcx, qword ptr [rax]
// asm:   0x183317c74: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183317c78: movabs rax, 0
// asm:   0x183317c82: add rsp, 0x20
// asm:   0x183317c86: pop rbp
// asm:   0x183317c87: ret 
// asm:   0x183318f20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318f25: push rbp
// asm:   0x183318f26: sub rsp, 0x20
// asm:   0x183318f2a: mov rbp, rdx
// asm:   0x183318f2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183318f31: mov rcx, qword ptr [rax]
// asm:   0x183318f34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183318f38: movabs rax, 0
// asm:   0x183318f42: add rsp, 0x20
// asm:   0x183318f46: pop rbp
// asm:   0x183318f47: ret 
// asm:   0x183324cb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324cb5: push rbp
// asm:   0x183324cb6: sub rsp, 0x20
// asm:   0x183324cba: mov rbp, rdx
// asm:   0x183324cbd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183324cc1: mov rcx, qword ptr [rax]
// asm:   0x183324cc4: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183324cc8: movabs rax, 0
// asm:   0x183324cd2: add rsp, 0x20
// asm:   0x183324cd6: pop rbp
// asm:   0x183324cd7: ret 

void Controllers_HumanPlayerController__UpdateReelInput
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  float fVar1;
  Characters_Human_o *pCVar2;
  Settings_HumanInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *pSVar4;
  System_Collections_Generic_List_InputKey__o *pSVar5;
  Settings_InputSettings_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  Settings_InputKey_o *pSVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  undefined1 local_70 [16];
  Settings_InputKey_o *local_60;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  Settings_InputKey_o *local_48;
  
  if (Il2CppMethodInitialized_184346ae1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_184346ae1 = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_48 = (Settings_InputKey_o *)0x0;
  fVar1 = (__this->fields)._reelOutScrollTimeLeft;
  fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._reelOutScrollTimeLeft = fVar1 - fVar11;
  if (fVar1 - fVar11 <= 0.0) {
    pCVar2 = (__this->fields)._human;
    if (pCVar2 == (Characters_Human_o *)0x0) goto label_18211b708;
    (pCVar2->fields).ReelOutAxis = 0.0;
  }
  pSVar3 = (__this->fields)._humanInput;
  if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).ReelIn, pSVar4 == (Settings_KeybindSetting_o *)0x0)) goto label_18211b708;
  bVar9 = Settings_KeybindSetting__GetKey(pSVar4,false,(MethodInfo *)0x0);
  if (bVar9) {
    pCVar2 = (__this->fields)._human;
    if (pCVar2 == (Characters_Human_o *)0x0) goto label_18211b708;
    if ((pCVar2->fields)._reelInWaitForRelease == false) {
      (pCVar2->fields).ReelInAxis = -1.0;
    }
    (__this->fields)._reelInScrollCooldownLeft = (__this->fields)._reelInScrollCooldown;
  }
  else {
    fVar1 = (__this->fields)._reelInScrollCooldownLeft;
    fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._reelInScrollCooldownLeft = fVar1 - fVar11;
    pSVar3 = (__this->fields)._humanInput;
    if (((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
        (pSVar4 = (pSVar3->fields).ReelIn, pSVar4 == (Settings_KeybindSetting_o *)0x0)) ||
       (pSVar5 = (pSVar4->fields).InputKeys, pSVar5 == (System_Collections_Generic_List_InputKey__o *)0x0))
    goto label_18211b708;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_T__o *)pSVar5,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_58 = (undefined1  [8])local_70._0_8_;
    pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70._8_8_;
    local_48 = local_60;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    bVar9 = false;
    local_70._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
    while( true ) {
      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                          (MethodInfo_153A2A0 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
      if (!bVar10) break;
      if (local_48 == (Settings_InputKey_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar10 = Settings_InputKey__IsWheel(local_48,(MethodInfo *)0x0);
      if (bVar10) {
        bVar9 = true;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
               MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    pSVar3 = (__this->fields)._humanInput;
    if (((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
        (pSVar4 = (pSVar3->fields).ReelIn, pSVar4 == (Settings_KeybindSetting_o *)0x0)) ||
       (pSVar5 = (pSVar4->fields).InputKeys, pSVar5 == (System_Collections_Generic_List_InputKey__o *)0x0))
    goto label_18211b708;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_T__o *)pSVar5,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_58 = (undefined1  [8])local_70._0_8_;
    pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70._8_8_;
    local_48 = local_60;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_70._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
label_18211b4a0:
    bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                        (MethodInfo_153A2A0 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    pSVar8 = local_48;
    if (bVar10) {
      if (local_48 == (Settings_InputKey_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar10 = Settings_InputKey__IsWheel(local_48,(MethodInfo *)0x0);
      if (!bVar10) {
        if (bVar9) {
          bVar10 = Settings_InputKey__GetKeyUp(pSVar8,(MethodInfo *)0x0);
          if (!bVar10) goto label_18211b4a0;
        }
        pCVar2 = (__this->fields)._human;
        if (pCVar2 == (Characters_Human_o *)0x0) {
          ThrowNullReferenceException();
        }
        (pCVar2->fields)._reelInWaitForRelease = false;
        goto label_18211b4a0;
      }
      if ((__this->fields)._reelInScrollCooldownLeft <= 0.0) {
        pCVar2 = (__this->fields)._human;
        if (pCVar2 == (Characters_Human_o *)0x0) {
          ThrowNullReferenceException();
        }
        (pCVar2->fields)._reelInWaitForRelease = false;
      }
      goto label_18211b4a0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
               MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
  }
  pSVar3 = (__this->fields)._humanInput;
  if (((pSVar3 != (Settings_HumanInputSettings_o *)0x0) &&
      (pSVar4 = (pSVar3->fields).ReelOut, pSVar4 != (Settings_KeybindSetting_o *)0x0)) &&
     (pSVar5 = (pSVar4->fields).InputKeys, pSVar5 != (System_Collections_Generic_List_InputKey__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_T__o *)pSVar5,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_58 = (undefined1  [8])local_70._0_8_;
    pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70._8_8_;
    local_48 = local_60;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_70._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
    while( true ) {
      do {
        do {
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
          pSVar8 = local_48;
          if (!bVar9) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
                       MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
            return;
          }
          if (local_48 == (Settings_InputKey_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar9 = Settings_InputKey__GetKey(local_48,(MethodInfo *)0x0);
        } while (!bVar9);
        pCVar2 = (__this->fields)._human;
        if (pCVar2 == (Characters_Human_o *)0x0) {
          ThrowNullReferenceException();
        }
        (pCVar2->fields).ReelOutAxis = 1.0;
        bVar9 = Settings_InputKey__IsWheel(pSVar8,(MethodInfo *)0x0);
      } while (!bVar9);
      pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if (pSVar6 == (Settings_InputSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (pSVar6->fields).Human;
      if (pSVar3 == (Settings_HumanInputSettings_o *)0x0) break;
      pSVar7 = (pSVar3->fields).ReelOutScrollSmoothing;
      if (pSVar7 == (Settings_FloatSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this->fields)._reelOutScrollTimeLeft = (pSVar7->fields)._value;
    }
    ThrowNullReferenceException();
  }
label_18211b708:
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$UpdateDashInput
// il2cpp: void Controllers_HumanPlayerController__UpdateDashInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x182119720
// eh: try 0x182119970..0x1821199cb -> pad 0x183336e20 catch Il2CppExceptionWrapper
// eh: try 0x18211a384..0x18211a3aa -> pad 0x180357e10 cleanup
// eh: try 0x18211a540..0x18211a825 -> pad 0x183319370 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821199ed: mov rdx, qword ptr [rip + 0x1f92a94]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting
// asm:   0x1821199f4: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821199f9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821199fe: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182119a03: test rcx, rcx
// asm:   0x182119a06: jne 0x18211a7df
// asm:   0x182119a0c: xor r15d, r15d
// asm:   0x182119a0f: mov rdi, qword ptr [rsp + 0x170]
// asm:   0x182119a17: mov r14d, dword ptr [rsp + 0x188]
// asm:   0x182119a1f: test r14d, r14d
// asm:   0x182119a22: jne 0x18211a495
// asm:   0x18211a384: jmp 0x18211a421
// asm:   0x18211a495: xorps xmm6, xmm6
// asm:   0x18211a498: movss xmm7, dword ptr [rip + 0x123e78c]
// asm:   0x18211a549: nop dword ptr [rax]
// asm:   0x18211a6e5: mov rdx, qword ptr [rip + 0x1f91d9c]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting
// asm:   0x18211a6ec: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18211a6f1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18211a6f6: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18211a6fb: test rcx, rcx
// asm:   0x18211a6fe: jne 0x18211a825
// asm:   0x18211a704: mov rdi, qword ptr [rsp + 0x170]
// asm:   0x18211a70c: mov r14d, dword ptr [rsp + 0x188]
// asm:   0x18211a714: xorps xmm6, xmm6
// asm:   0x18211a7df: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18211a825: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183319370: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183319375: push rbp
// asm:   0x183319376: sub rsp, 0x30
// asm:   0x18331937a: mov rbp, rdx
// asm:   0x18331937d: mov rax, qword ptr [rbp + 0xa0]
// asm:   0x183319384: mov rcx, qword ptr [rax]
// asm:   0x183319387: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18331938b: movabs rax, 0
// asm:   0x183319395: add rsp, 0x30
// asm:   0x183319399: pop rbp
// asm:   0x18331939a: ret 
// asm:   0x183336e20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183336e25: push rbp
// asm:   0x183336e26: sub rsp, 0x30
// asm:   0x183336e2a: mov rbp, rdx
// asm:   0x183336e2d: mov rax, qword ptr [rbp + 0x98]
// asm:   0x183336e34: mov rcx, qword ptr [rax]
// asm:   0x183336e37: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183336e3b: movabs rax, 0
// asm:   0x183336e45: add rsp, 0x30
// asm:   0x183336e49: pop rbp
// asm:   0x183336e4a: ret 

void Controllers_HumanPlayerController__UpdateDashInput
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  undefined4 uVar5;
  float fVar6;
  Settings_HumanInputSettings_o *pSVar7;
  System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *pSVar8;
  Characters_HumanStats_o *pCVar9;
  Characters_OmniDashPerk_o *pCVar10;
  Cameras_BaseCamera_o *pCVar11;
  UnityEngine_Camera_o *pUVar12;
  Utility_BaseComponentCache_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Vector3_StaticFields *pUVar15;
  Characters_VerticalDashPerk_o *pCVar16;
  Settings_InputSettings_o *pSVar17;
  Settings_BoolSetting_o *pSVar18;
  System_Collections_Generic_Dictionary_HumanDashDirection__float__o *pSVar19;
  bool bVar20;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar21;
  Settings_KeybindSetting_o *pSVar22;
  UnityEngine_Vector3_o *pUVar23;
  UnityEngine_Ray_o *pUVar24;
  UnityEngine_Quaternion_o *pUVar25;
  int32_t iVar26;
  Characters_Human_o *pCVar27;
  int32_t right;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int local_res20;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_118;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_f8;
  UnityEngine_Quaternion_Fields local_e0 [12];
  
  if (Il2CppMethodInitialized_184346ae2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting_40ac568
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting_40ac648
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_HumanDashDirection_KeybindSetting_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346ae2 = '\x01';
  }
  local_f8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.fields._index = 0;
  local_f8.fields._version = 0;
  local_f8.fields._currentKey = (Il2CppObject *)0x0;
  local_e0[0].x = 0.0;
  local_e0[0].y = 0.0;
  local_e0[0].z = 0.0;
  local_e0[0].w = 0.0;
  pCVar27 = (__this->fields)._human;
  if (pCVar27 == (Characters_Human_o *)0x0) goto label_18211a7cd;
  if ((pCVar27->fields).Grounded != false) {
    return;
  }
  if ((pCVar27->fields)._state == 3) {
    return;
  }
  if ((pCVar27->fields).MountState != 0) {
    return;
  }
  if ((pCVar27->fields)._state == 7) {
    return;
  }
  if ((pCVar27->fields).CarryState == 1) {
    return;
  }
  if ((pCVar27->fields)._state == 0xf) {
    return;
  }
  if ((pCVar27->fields)._state == 8) {
    return;
  }
  if ((pCVar27->fields)._state == 10) {
    return;
  }
  if (inMenu) {
    return;
  }
  if ((pCVar27->fields).Dead != false) {
    return;
  }
  pSVar7 = (__this->fields)._humanInput;
  if ((pSVar7 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar22 = (pSVar7->fields).Dash, pSVar22 == (Settings_KeybindSetting_o *)0x0)) goto label_18211a7cd;
  local_res20 = 0;
  bVar20 = Settings_KeybindSetting__GetKeyDown(pSVar22,false,(MethodInfo *)0x0);
  if (bVar20) {
    pSVar8 = (__this->fields)._dashKeys;
    if ((pSVar8 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0) ||
       (pSVar21 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_get_Keys
                            ),
       pSVar21 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
    goto label_18211a7cd;
    System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
              (&local_118,pSVar21,
               (MethodInfo_F1E550 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_HumanDashDirection_KeybindSetting_GetEnumera
              );
    local_f8.fields._dictionary = local_118.fields._dictionary;
    local_f8.fields._index = local_118.fields._index;
    local_f8.fields._version = local_118.fields._version;
    local_f8.fields._currentKey = local_118.fields._currentValue;
    local_138._0_4_ = 0.0;
    local_138._4_4_ = 0.0;
    local_138._8_8_ = &local_f8;
    do {
      bVar20 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__object___MoveNext
                         (&local_f8,
                          (MethodInfo_15638A0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting_40ac568
                         );
      if (!bVar20) {
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_f8,
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting
                  );
        goto label_182119a28;
      }
      pSVar8 = (__this->fields)._dashKeys;
      if (pSVar8 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar26 = (int32_t)local_f8.fields._currentKey;
      pSVar22 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                           (int32_t)local_f8.fields._currentKey,
                           (MethodInfo_1454ED0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_get_Item
                          );
      if (pSVar22 == (Settings_KeybindSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar20 = Settings_KeybindSetting__GetKey(pSVar22,false,(MethodInfo *)0x0);
    } while (!bVar20);
    local_res20 = iVar26;
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_f8,
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting
              );
    if (iVar26 == 0) {
label_182119a28:
      pCVar27 = (__this->fields)._human;
      if (((pCVar27 == (Characters_Human_o *)0x0) ||
          (pCVar9 = (pCVar27->fields).Stats, pCVar9 == (Characters_HumanStats_o *)0x0)) ||
         (pCVar10 = (pCVar9->fields).OmniDashPerk, pCVar10 == (Characters_OmniDashPerk_o *)0x0))
      goto label_18211a7cd;
      bVar20 = (*(pCVar10->klass->vtable)._16_CanUse.methodPtr)
                         (pCVar10,(pCVar10->klass->vtable)._16_CanUse.method);
      if (bVar20) {
        pCVar27 = (__this->fields)._human;
        if (((pCVar27 == (Characters_Human_o *)0x0) ||
            (pCVar9 = (pCVar27->fields).Stats, pCVar9 == (Characters_HumanStats_o *)0x0)) ||
           (pCVar10 = (pCVar9->fields).OmniDashPerk, pCVar10 == (Characters_OmniDashPerk_o *)0x0))
        goto label_18211a7cd;
        bVar20 = Assets_Scripts_Characters_Human_Perks_PowerPerk__get_PerkEnabled
                           ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)pCVar10,(MethodInfo *)0x0);
        if (bVar20) {
          pCVar11 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
          if (pCVar11 == (Cameras_BaseCamera_o *)0x0) goto label_18211a7cd;
          pUVar12 = (pCVar11->fields).Camera;
          if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
          }
          pUVar23 = UI_CursorManager__GetInGameMousePosition
                              ((UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
          if (pUVar12 == (UnityEngine_Camera_o *)0x0) goto label_18211a7cd;
          local_138._0_4_ = (pUVar23->fields).x;
          local_138._4_4_ = (pUVar23->fields).y;
          local_138._8_4_ = (pUVar23->fields).z;
          pUVar24 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                              ((UnityEngine_Ray_o *)&local_118,pUVar12,(UnityEngine_Vector3_o *)local_138,
                               (MethodInfo *)0x0);
          pUVar23 = &(pUVar24->fields).m_Direction;
          fVar33 = (pUVar23->fields).x;
          fVar3 = (pUVar24->fields).m_Direction.fields.y;
          local_128 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&pUVar23->fields;
          fVar6 = (pUVar24->fields).m_Direction.fields.z;
          uStack_120._0_4_ = fVar6;
          if (Il2CppMethodInitialized_18433de5f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5f = '\x01';
          }
          fVar28 = (float)il2cpp_runtime_helper_180546a40(&local_128,0);
          if (fVar28 <= 1e-05) {
            pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar33 = (pUVar15->zeroVector).fields.x;
            fVar3 = (pUVar15->zeroVector).fields.y;
            fVar6 = (pUVar15->zeroVector).fields.z;
          }
          else {
            fVar33 = fVar33 / fVar28;
            fVar3 = fVar3 / fVar28;
            fVar6 = fVar6 / fVar28;
          }
          pCVar27 = (__this->fields)._human;
          if (((pCVar27 == (Characters_Human_o *)0x0) ||
              (pUVar13 = (pCVar27->fields).Cache, pUVar13 == (Utility_BaseComponentCache_o *)0x0)) ||
             (pUVar14 = (pUVar13->fields).Transform, pUVar14 == (UnityEngine_Transform_o *)0x0))
          goto label_18211a7cd;
          pUVar23 = UnityEngine_Transform__get_right
                              ((UnityEngine_Vector3_o *)local_138,pUVar14,(MethodInfo *)0x0);
          fVar28 = (pUVar23->fields).x;
          fVar29 = (pUVar23->fields).y;
          fVar1 = (pUVar23->fields).z;
          if (Il2CppMethodInitialized_18434528c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
            Il2CppMethodInitialized_18434528c = '\x01';
          }
          fVar30 = fVar1 * fVar1 + fVar29 * fVar29 + fVar28 * fVar28;
          fVar31 = fVar33;
          fVar32 = fVar3;
          fVar34 = fVar6;
          if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar30) {
            fVar30 = (fVar1 * fVar6 + fVar29 * fVar3 + fVar28 * fVar33) / fVar30;
            fVar31 = fVar33 - fVar28 * fVar30;
            fVar32 = fVar3 - fVar29 * fVar30;
            fVar34 = fVar6 - fVar1 * fVar30;
          }
          local_128 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)CONCAT44(fVar32,fVar31);
          uStack_120._0_4_ = fVar34;
          if (Il2CppMethodInitialized_18433de5f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5f = '\x01';
          }
          fVar28 = (float)il2cpp_runtime_helper_180546a40(&local_128,0);
          if (fVar28 <= 1e-05) {
            pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar31 = (pUVar15->zeroVector).fields.x;
            fVar32 = (pUVar15->zeroVector).fields.y;
            fVar34 = (pUVar15->zeroVector).fields.z;
          }
          else {
            fVar31 = fVar31 / fVar28;
            fVar32 = fVar32 / fVar28;
            fVar34 = fVar34 / fVar28;
          }
          pCVar27 = (__this->fields)._human;
          if (((pCVar27 == (Characters_Human_o *)0x0) ||
              (pUVar13 = (pCVar27->fields).Cache, pUVar13 == (Utility_BaseComponentCache_o *)0x0)) ||
             (pUVar14 = (pUVar13->fields).Transform, pUVar14 == (UnityEngine_Transform_o *)0x0))
          goto label_18211a7cd;
          pUVar23 = UnityEngine_Transform__get_forward
                              ((UnityEngine_Vector3_o *)local_138,pUVar14,(MethodInfo *)0x0);
          pCVar27 = (__this->fields)._human;
          if (((pCVar27 == (Characters_Human_o *)0x0) ||
              (pUVar13 = (pCVar27->fields).Cache, pUVar13 == (Utility_BaseComponentCache_o *)0x0)) ||
             (pUVar14 = (pUVar13->fields).Transform, pUVar14 == (UnityEngine_Transform_o *)0x0))
          goto label_18211a7cd;
          pSVar4 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&pUVar23->fields;
          fVar30 = (pUVar23->fields).z;
          pUVar23 = UnityEngine_Transform__get_right
                              ((UnityEngine_Vector3_o *)local_138,pUVar14,(MethodInfo *)0x0);
          fVar28 = (pUVar23->fields).x;
          fVar29 = (pUVar23->fields).y;
          fVar1 = (pUVar23->fields).z;
          local_138._4_4_ = fVar32;
          local_138._0_4_ = fVar31;
          local_138._8_4_ = fVar34;
          uStack_120._0_4_ = fVar30;
          local_128 = pSVar4;
          fVar31 = (float)il2cpp_runtime_helper_181ebaeb0(&local_128);
          if (((float)local_138._4_4_ * (float)local_128 - (float)local_138._0_4_ * local_128._4_4_) * -fVar1
              + ((float)local_138._0_4_ * (float)uStack_120 - (float)local_138._8_4_ * (float)local_128) *
                -fVar29 + ((float)local_138._8_4_ * local_128._4_4_ -
                          (float)local_138._4_4_ * (float)uStack_120) * -fVar28 < 0.0) {
            fVar28 = -1.0;
          }
          else {
            fVar28 = 1.0;
          }
          fVar28 = (fVar28 * fVar31) / 90.0;
          if (fVar28 < 0.0) {
            fVar28 = 0.0;
          }
          else if (1.0 < fVar28) {
            fVar28 = 1.0;
          }
          if (Il2CppMethodInitialized_18433dbeb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbeb = '\x01';
          }
          pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar29 = (pUVar15->oneVector).fields.x;
          fVar1 = (pUVar15->oneVector).fields.z;
          if (fVar28 <= 0.0) {
            fVar31 = (pUVar15->oneVector).fields.y;
          }
          else {
            pCVar27 = (__this->fields)._human;
            if (((pCVar27 == (Characters_Human_o *)0x0) ||
                (pCVar9 = (pCVar27->fields).Stats, pCVar9 == (Characters_HumanStats_o *)0x0)) ||
               (pCVar10 = (pCVar9->fields).OmniDashPerk, pCVar10 == (Characters_OmniDashPerk_o *)0x0))
            goto label_18211a7cd;
            fVar31 = Assets_Scripts_Characters_Human_Perks_PowerPerk__GetPowerRatio
                               ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)pCVar10,(MethodInfo *)0x0
                               );
          }
          pCVar27 = (__this->fields)._human;
          local_138._4_4_ = fVar3;
          local_138._0_4_ = fVar33;
          local_138._8_4_ = fVar6;
          fVar32 = Controllers_BasePlayerController__GetTargetAngle_20f3150
                             ((Controllers_BasePlayerController_o *)__this,(UnityEngine_Vector3_o *)local_138,
                              (MethodInfo *)0x0);
          local_128 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          uStack_120._0_4_ = 0.0;
          uStack_120._4_4_ = 0.0;
          local_138._4_4_ = fVar31;
          local_138._0_4_ = fVar29;
          local_138._8_4_ = fVar1;
          System_Nullable_Vector3____ctor
                    ((System_Nullable_Vector3__o *)&local_128,(UnityEngine_Vector3_o *)local_138,
                     (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
          if (pCVar27 == (Characters_Human_o *)0x0) {
            ThrowNullReferenceException();
          }
          local_118.fields._dictionary = local_128;
          local_118.fields._index = (int32_t)(float)uStack_120;
          local_118.fields._version = (int32_t)uStack_120._4_4_;
          local_138._4_4_ = fVar3;
          local_138._0_4_ = fVar33;
          local_138._8_4_ = fVar6;
          bVar20 = Characters_Human__DashVertical
                             (pCVar27,fVar32,(UnityEngine_Vector3_o *)local_138,
                              (System_Nullable_Vector3__o *)&local_118,(MethodInfo *)0x0);
          if (bVar20) {
            pCVar27 = (__this->fields)._human;
            if (((pCVar27 == (Characters_Human_o *)0x0) ||
                (pCVar9 = (pCVar27->fields).Stats, pCVar9 == (Characters_HumanStats_o *)0x0)) ||
               (pCVar10 = (pCVar9->fields).OmniDashPerk, pCVar10 == (Characters_OmniDashPerk_o *)0x0))
            goto label_18211a7cd;
            (*(pCVar10->klass->vtable)._18_OnUse.methodPtr)
                      (pCVar10,fVar28,(pCVar10->klass->vtable)._18_OnUse.method);
          }
          goto label_18211a4a0;
        }
      }
      pCVar27 = (__this->fields)._human;
      if (((pCVar27 == (Characters_Human_o *)0x0) ||
          (pCVar9 = (pCVar27->fields).Stats, pCVar9 == (Characters_HumanStats_o *)0x0)) ||
         (pCVar16 = (pCVar9->fields).VerticalDashPerk, pCVar16 == (Characters_VerticalDashPerk_o *)0x0))
      goto label_18211a7cd;
      bVar20 = (*(pCVar16->klass->vtable)._16_CanUse.methodPtr)
                         (pCVar16,(pCVar16->klass->vtable)._16_CanUse.method);
      if (bVar20) {
        pCVar27 = (__this->fields)._human;
        if (((pCVar27 == (Characters_Human_o *)0x0) ||
            (pCVar9 = (pCVar27->fields).Stats, pCVar9 == (Characters_HumanStats_o *)0x0)) ||
           (pCVar16 = (pCVar9->fields).VerticalDashPerk, pCVar16 == (Characters_VerticalDashPerk_o *)0x0))
        goto label_18211a7cd;
        bVar20 = Assets_Scripts_Characters_Human_Perks_PowerPerk__get_PerkEnabled
                           ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)pCVar16,(MethodInfo *)0x0);
        if (bVar20) {
          pCVar27 = (__this->fields)._human;
          if (((pCVar27 == (Characters_Human_o *)0x0) ||
              (pCVar9 = (pCVar27->fields).Stats, pCVar9 == (Characters_HumanStats_o *)0x0)) ||
             (pCVar10 = (pCVar9->fields).OmniDashPerk, pCVar10 == (Characters_OmniDashPerk_o *)0x0))
          goto label_18211a7cd;
          bVar20 = Assets_Scripts_Characters_Human_Perks_PowerPerk__get_PerkEnabled
                             ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)pCVar10,(MethodInfo *)0x0);
          if (!bVar20) {
            pCVar11 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
            if (((pCVar11 == (Cameras_BaseCamera_o *)0x0) ||
                (pUVar13 = (pCVar11->fields).Cache, pUVar13 == (Utility_BaseComponentCache_o *)0x0)) ||
               (pUVar14 = (pUVar13->fields).Transform, pUVar14 == (UnityEngine_Transform_o *)0x0))
            goto label_18211a7cd;
            pUVar25 = UnityEngine_Transform__get_rotation
                                ((UnityEngine_Quaternion_o *)&local_118,pUVar14,(MethodInfo *)0x0);
            local_e0[0].x = (pUVar25->fields).x;
            local_e0[0].y = (pUVar25->fields).y;
            local_e0[0].z = (pUVar25->fields).z;
            local_e0[0].w = (pUVar25->fields).w;
            pUVar23 = UnityEngine_Quaternion__Internal_ToEulerRad
                                ((UnityEngine_Vector3_o *)&local_128,(UnityEngine_Quaternion_o *)local_e0,
                                 (MethodInfo *)0x0);
            local_138._4_4_ = (pUVar23->fields).y * 57.29578;
            local_138._0_4_ = (pUVar23->fields).x * 57.29578;
            local_138._8_4_ = (pUVar23->fields).z * 57.29578;
            pUVar23 = UnityEngine_Quaternion__Internal_MakePositive
                                ((UnityEngine_Vector3_o *)&local_128,(UnityEngine_Vector3_o *)local_138,
                                 (MethodInfo *)0x0);
            fVar33 = (pUVar23->fields).x;
            if (fVar33 < 0.0) {
              fVar33 = fVar33 + 360.0;
            }
            if (360.0 <= fVar33) {
              fVar33 = fVar33 + -360.0;
            }
            pCVar11 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
            if (pCVar11 == (Cameras_BaseCamera_o *)0x0) goto label_18211a7cd;
            pUVar12 = (pCVar11->fields).Camera;
            if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
            }
            pUVar23 = UI_CursorManager__GetInGameMousePosition
                                ((UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
            if (pUVar12 == (UnityEngine_Camera_o *)0x0) goto label_18211a7cd;
            local_138._0_4_ = (pUVar23->fields).x;
            local_138._4_4_ = (pUVar23->fields).y;
            local_138._8_4_ = (pUVar23->fields).z;
            pUVar24 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                                ((UnityEngine_Ray_o *)&local_118,pUVar12,(UnityEngine_Vector3_o *)local_138,
                                 (MethodInfo *)0x0);
            pUVar23 = &(pUVar24->fields).m_Direction;
            fVar3 = (pUVar23->fields).x;
            fVar6 = (pUVar24->fields).m_Direction.fields.y;
            local_128 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&pUVar23->fields;
            fVar28 = (pUVar24->fields).m_Direction.fields.z;
            uStack_120._0_4_ = fVar28;
            if (Il2CppMethodInitialized_18433de5f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433de5f = '\x01';
            }
            fVar29 = (float)il2cpp_runtime_helper_180546a40(&local_128);
            if (fVar29 <= 1e-05) {
              pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar3 = (pUVar15->zeroVector).fields.x;
              fVar6 = (pUVar15->zeroVector).fields.y;
              fVar28 = (pUVar15->zeroVector).fields.z;
            }
            else {
              fVar3 = fVar3 / fVar29;
              fVar6 = fVar6 / fVar29;
              fVar28 = fVar28 / fVar29;
            }
            if (Il2CppMethodInitialized_18433dbeb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbeb = '\x01';
            }
            pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar29 = (pUVar15->oneVector).fields.x;
            fVar1 = (pUVar15->oneVector).fields.z;
            if ((fVar33 <= 0.0) || (180.0 <= fVar33)) {
              pCVar27 = (__this->fields)._human;
              if ((pCVar27 == (Characters_Human_o *)0x0) ||
                 ((pCVar9 = (pCVar27->fields).Stats, pCVar9 == (Characters_HumanStats_o *)0x0 ||
                  (pCVar10 = (pCVar9->fields).OmniDashPerk, pCVar10 == (Characters_OmniDashPerk_o *)0x0))))
              goto label_18211a7cd;
              fVar31 = Assets_Scripts_Characters_Human_Perks_PowerPerk__GetPowerRatio
                                 ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)pCVar10,
                                  (MethodInfo *)0x0);
              fVar32 = 1.0;
            }
            else {
              fVar31 = (pUVar15->oneVector).fields.y;
              fVar32 = 0.0;
            }
            if ((fVar33 <= 0.0) || (180.0 <= fVar33)) {
              pCVar27 = (__this->fields)._human;
              local_138._4_4_ = fVar6;
              local_138._0_4_ = fVar3;
              local_138._8_4_ = fVar28;
              fVar33 = Controllers_BasePlayerController__GetTargetAngle_20f3150
                                 ((Controllers_BasePlayerController_o *)__this,
                                  (UnityEngine_Vector3_o *)local_138,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18433de5c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5c = '\x01';
              }
              pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar3 = (pUVar15->upVector).fields.x;
              fVar6 = (pUVar15->upVector).fields.y;
              fVar28 = (pUVar15->upVector).fields.z;
              local_128 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              uStack_120._0_4_ = 0.0;
              uStack_120._4_4_ = 0.0;
              local_138._4_4_ = fVar31;
              local_138._0_4_ = fVar29;
              local_138._8_4_ = fVar1;
              System_Nullable_Vector3____ctor
                        ((System_Nullable_Vector3__o *)&local_128,(UnityEngine_Vector3_o *)local_138,
                         (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
              if (pCVar27 == (Characters_Human_o *)0x0) {
                ThrowNullReferenceException();
              }
            }
            else {
              pCVar27 = (__this->fields)._human;
              local_138._4_4_ = fVar6;
              local_138._0_4_ = fVar3;
              local_138._8_4_ = fVar28;
              fVar33 = Controllers_BasePlayerController__GetTargetAngle_20f3150
                                 ((Controllers_BasePlayerController_o *)__this,
                                  (UnityEngine_Vector3_o *)local_138,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18434494b == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18434494b = '\x01';
              }
              pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
              uVar2 = (pUVar15->downVector).fields.x;
              uVar5 = (pUVar15->downVector).fields.y;
              fVar28 = (pUVar15->downVector).fields.z;
              local_128 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              uStack_120._0_4_ = 0.0;
              uStack_120._4_4_ = 0.0;
              local_138._4_4_ = fVar31;
              local_138._0_4_ = fVar29;
              local_138._8_4_ = fVar1;
              System_Nullable_Vector3____ctor
                        ((System_Nullable_Vector3__o *)&local_128,(UnityEngine_Vector3_o *)local_138,
                         (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
              fVar3 = (float)uVar2;
              fVar6 = (float)uVar5;
              if (pCVar27 == (Characters_Human_o *)0x0) {
                ThrowNullReferenceException();
              }
            }
            local_118.fields._dictionary = local_128;
            local_118.fields._index = (int32_t)(float)uStack_120;
            local_118.fields._version = (int32_t)uStack_120._4_4_;
            local_138._4_4_ = fVar6;
            local_138._0_4_ = fVar3;
            local_138._8_4_ = fVar28;
            bVar20 = Characters_Human__DashVertical
                               (pCVar27,fVar33,(UnityEngine_Vector3_o *)local_138,
                                (System_Nullable_Vector3__o *)&local_118,(MethodInfo *)0x0);
            if (bVar20) {
              pCVar27 = (__this->fields)._human;
              if (((pCVar27 == (Characters_Human_o *)0x0) ||
                  (pCVar9 = (pCVar27->fields).Stats, pCVar9 == (Characters_HumanStats_o *)0x0)) ||
                 (pCVar16 = (pCVar9->fields).VerticalDashPerk, pCVar16 == (Characters_VerticalDashPerk_o *)0x0
                 )) goto label_18211a7cd;
              (*(pCVar16->klass->vtable)._18_OnUse.methodPtr)
                        (pCVar16,fVar32,(pCVar16->klass->vtable)._18_OnUse.method);
            }
          }
        }
      }
    }
  }
label_18211a4a0:
  fVar33 = 0.0;
  pSVar17 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar17 == (Settings_InputSettings_o *)0x0) ||
      (pSVar7 = (pSVar17->fields).Human, pSVar7 == (Settings_HumanInputSettings_o *)0x0)) ||
     (pSVar18 = (pSVar7->fields).DashDoubleTap, pSVar18 == (Settings_BoolSetting_o *)0x0)) goto label_18211a7cd;
  if ((pSVar18->fields)._value != false) {
    pSVar8 = (__this->fields)._dashKeys;
    if ((pSVar8 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0) ||
       (pSVar21 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_get_Keys
                            ),
       pSVar21 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
    goto label_18211a7cd;
    System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
              (&local_118,pSVar21,
               (MethodInfo_F1E550 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_HumanDashDirection_KeybindSetting_GetEnumera
              );
    local_f8.fields._dictionary = local_118.fields._dictionary;
    local_f8.fields._index = local_118.fields._index;
    local_f8.fields._version = local_118.fields._version;
    local_f8.fields._currentKey = local_118.fields._currentValue;
    local_138._0_4_ = 0.0;
    local_138._4_4_ = 0.0;
    local_138._8_8_ = &local_f8;
    while (bVar20 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__object___MoveNext
                              (&local_f8,
                               (MethodInfo_15638A0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting_40ac568
                              ), bVar20) {
      pSVar19 = (__this->fields)._dashTimes;
      if (pSVar19 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar26 = (int32_t)local_f8.fields._currentKey;
      fVar3 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar19,
                         (int32_t)local_f8.fields._currentKey,
                         (MethodInfo_1454CE0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_get_Item);
      if (0.0 <= fVar3) {
        pSVar19 = (__this->fields)._dashTimes;
        if (pSVar19 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar3 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar19,iVar26,
                           (MethodInfo_1454CE0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_get_Item)
        ;
        fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_Int32Enum__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar19,iVar26,fVar6 + fVar3,
                   (MethodInfo_1455180 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_set_Item);
        pSVar19 = (__this->fields)._dashTimes;
        if (pSVar19 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar3 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar19,iVar26,
                           (MethodInfo_1454CE0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_get_Item)
        ;
        if (0.2 < fVar3) {
          pSVar19 = (__this->fields)._dashTimes;
          if (pSVar19 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_Int32Enum__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar19,iVar26,-1.0,
                     (MethodInfo_1455180 *)
                     MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_set_Item);
        }
      }
      pSVar8 = (__this->fields)._dashKeys;
      if (pSVar8 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar22 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,iVar26,
                           (MethodInfo_1454ED0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_get_Item
                          );
      if (pSVar22 == (Settings_KeybindSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar20 = Settings_KeybindSetting__GetKeyDown(pSVar22,false,(MethodInfo *)0x0);
      if (bVar20) {
        pSVar19 = (__this->fields)._dashTimes;
        if (pSVar19 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar3 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar19,iVar26,
                           (MethodInfo_1454CE0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_get_Item)
        ;
        pSVar19 = (__this->fields)._dashTimes;
        if (fVar3 == -1.0) {
          if (pSVar19 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_Int32Enum__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar19,iVar26,0.0,
                     (MethodInfo_1455180 *)
                     MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_set_Item);
        }
        else {
          if (pSVar19 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar3 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar19,iVar26,
                             (MethodInfo_1454CE0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_get_Item
                            );
          if (0.0 < fVar3) {
            local_res20 = iVar26;
          }
        }
      }
    }
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_f8,
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting
              );
  }
  if (local_res20 == 0) {
    return;
  }
  pCVar27 = (__this->fields)._human;
  if (local_res20 == 1) {
    iVar26 = 1;
label_18211a758:
    right = 0;
label_18211a75b:
    fVar33 = Controllers_BasePlayerController__GetTargetAngle
                       ((Controllers_BasePlayerController_o *)__this,iVar26,right,(MethodInfo *)0x0);
  }
  else {
    if (local_res20 == 2) {
      iVar26 = -1;
      goto label_18211a758;
    }
    if (local_res20 == 4) {
      iVar26 = 0;
      right = 1;
      goto label_18211a75b;
    }
    if (local_res20 == 3) {
      iVar26 = 0;
      right = -1;
      goto label_18211a75b;
    }
  }
  if (pCVar27 != (Characters_Human_o *)0x0) {
    Characters_Human__Dash(pCVar27,fVar33,(MethodInfo *)0x0);
    return;
  }
label_18211a7cd:
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$GetDashAngle
// il2cpp: float Controllers_HumanPlayerController__GetDashAngle (Controllers_HumanPlayerController_o* __this, int32_t direction, const MethodInfo* method);
// 0x182117df0

float Controllers_HumanPlayerController__GetDashAngle
                (Controllers_HumanPlayerController_o *__this,int32_t direction,MethodInfo *method)

{
  float fVar1;
  
  if (direction == 1) {
    fVar1 = Controllers_BasePlayerController__GetTargetAngle
                      ((Controllers_BasePlayerController_o *)__this,1,0,(MethodInfo *)0x0);
    return fVar1;
  }
  if (direction == 2) {
    fVar1 = Controllers_BasePlayerController__GetTargetAngle
                      ((Controllers_BasePlayerController_o *)__this,-1,0,(MethodInfo *)0x0);
    return fVar1;
  }
  if (direction == 4) {
    fVar1 = Controllers_BasePlayerController__GetTargetAngle
                      ((Controllers_BasePlayerController_o *)__this,0,1,(MethodInfo *)0x0);
    return fVar1;
  }
  if (direction == 3) {
    fVar1 = Controllers_BasePlayerController__GetTargetAngle
                      ((Controllers_BasePlayerController_o *)__this,0,-1,(MethodInfo *)0x0);
    return fVar1;
  }
  return 0.0;
}


// Controllers.HumanPlayerController$$IsSpin3Special
// il2cpp: bool Controllers_HumanPlayerController__IsSpin3Special (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x182118200

bool Controllers_HumanPlayerController__IsSpin3Special
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  bool bVar4;
  Characters_BaseUseable_o *pCVar5;
  
  if (Il2CppMethodInitialized_184346ae3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin3Special);
    Il2CppMethodInitialized_184346ae3 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    if ((pCVar2->fields)._state != 9) {
      return false;
    }
    pCVar3 = (pCVar2->fields).Special;
    pCVar5 = (Characters_BaseUseable_o *)0x0;
    if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_Spin3Special->_2).typeHierarchyDepth;
      if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         (bVar4 = true,
         (pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
         (Il2CppClass *)TypeInfo_Characters_Spin3Special)) {
        bVar4 = false;
      }
      if (bVar4) {
        pCVar5 = pCVar3;
      }
    }
    return pCVar5 != (Characters_BaseUseable_o *)0x0;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$MovingLeft
// il2cpp: bool Controllers_HumanPlayerController__MovingLeft (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x1821182a0

bool Controllers_HumanPlayerController__MovingLeft
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346ae4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346ae4 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 != (Settings_InputSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_GeneralInputSettings_o *)0x0)) &&
     (__this_00 = (pSVar2->fields).Left, __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar3 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
    return bVar3;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$MovingRight
// il2cpp: bool Controllers_HumanPlayerController__MovingRight (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x182118300

bool Controllers_HumanPlayerController__MovingRight
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346ae5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346ae5 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 != (Settings_InputSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_GeneralInputSettings_o *)0x0)) &&
     (__this_00 = (pSVar2->fields).Right, __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar3 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
    return bVar3;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$UsingGas
// il2cpp: bool Controllers_HumanPlayerController__UsingGas (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x18211cad0

bool Controllers_HumanPlayerController__UsingGas
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_HumanInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346ae6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346ae6 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 != (Settings_InputSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Human, pSVar2 != (Settings_HumanInputSettings_o *)0x0)) &&
     (__this_00 = (pSVar2->fields).Jump, __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar3 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
    return bVar3;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$HookingLeft
// il2cpp: bool Controllers_HumanPlayerController__HookingLeft (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x182117fc0

bool Controllers_HumanPlayerController__HookingLeft
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_HumanInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346ae7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346ae7 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 != (Settings_InputSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Human, pSVar2 != (Settings_HumanInputSettings_o *)0x0)) &&
     (__this_00 = (pSVar2->fields).HookLeft, __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar3 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
    return bVar3;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$HookingRight
// il2cpp: bool Controllers_HumanPlayerController__HookingRight (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x182118020

bool Controllers_HumanPlayerController__HookingRight
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_HumanInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346ae8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346ae8 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 != (Settings_InputSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Human, pSVar2 != (Settings_HumanInputSettings_o *)0x0)) &&
     (__this_00 = (pSVar2->fields).HookRight, __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar3 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
    return bVar3;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$HookingBoth
// il2cpp: bool Controllers_HumanPlayerController__HookingBoth (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x182117f60

bool Controllers_HumanPlayerController__HookingBoth
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_HumanInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346ae9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346ae9 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 != (Settings_InputSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Human, pSVar2 != (Settings_HumanInputSettings_o *)0x0)) &&
     (__this_00 = (pSVar2->fields).HookBoth, __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar3 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
    return bVar3;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$.ctor
// il2cpp: void Controllers_HumanPlayerController___ctor (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x18211cc60

void Controllers_HumanPlayerController___ctor(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_HumanState__o *__this_00;
  
  if (Il2CppMethodInitialized_184346aea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_HumanState_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_HumanState);
    Il2CppMethodInitialized_184346aea = '\x01';
  }
  (__this->fields)._reelInScrollCooldown = 0.2;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_HumanState)
  ;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_ctor);
  if (__this_00 != (System_Collections_Generic_HashSet_HumanState__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,7,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,10,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,8,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,9,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0xf,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    (__this->fields)._illegalWeaponStates = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._illegalWeaponStates,__this_00);
    Controllers_BasePlayerController___ctor((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$.cctor
// il2cpp: void Controllers_HumanPlayerController___cctor (const MethodInfo* method);
// 0x18211cb30

void Controllers_HumanPlayerController___cctor(MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_184346aeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanPlayerController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_184346aeb = '\x01';
  }
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,5);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers != (System_Int32_array *)0x0) {
    if (((((int)layers->max_length != 0) &&
         (layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox,
         1 < (uint)layers->max_length)) &&
        (layers->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox,
        2 < (uint)layers->max_length)) &&
       ((layers->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
        3 < (uint)layers->max_length &&
        (layers->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles,
        4 < (uint)layers->max_length)))) {
      layers->m_Items[4] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll;
      UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (TypeInfo_Controllers_HumanPlayerController->static_fields->HookMask).fields.m_Mask =
           (int32_t)UVar1.fields.m_Mask;
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


