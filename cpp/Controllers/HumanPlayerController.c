// Type: Controllers.HumanPlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Controllers/HumanPlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/HumanPlayerController.cs
// --------------------------------

// Controllers.HumanPlayerController$$Awake
// il2cpp: void Controllers_HumanPlayerController__Awake (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baaae0

void Controllers_HumanPlayerController__Awake(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Characters_Human_o *pCVar2;
  Settings_HumanInputSettings_o *method_00;
  
  if (Il2CppMethodInitialized_075474a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075474a2 = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  pCVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
  (__this->fields)._human = pCVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar1 == (Settings_InputSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (pSVar1->fields).Human;
  (__this->fields)._humanInput = method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._humanInput);
  Controllers_HumanPlayerController__SetupDash(__this,(MethodInfo *)method_00);
  return;
}


// Controllers.HumanPlayerController$$SetupDash
// il2cpp: void Controllers_HumanPlayerController__SetupDash (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baab80

void Controllers_HumanPlayerController__SetupDash
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *__this_00;
  System_Collections_Generic_Dictionary_HumanDashDirection__float__o *__this_01;
  
  if (Il2CppMethodInitialized_075474a3 == '\0') {
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
    Il2CppMethodInitialized_075474a3 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar1 != (Settings_InputSettings_o *)0x0) {
    pSVar2 = (pSVar1->fields).General;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting);
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_4A543B0 *)
               MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_ctor);
    if ((pSVar2 != (Settings_GeneralInputSettings_o *)0x0) &&
       (__this_00 != (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0)) {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,1,
                 (Il2CppObject *)(pSVar2->fields).Forward,
                 (MethodInfo_4A54FE0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,2,
                 (Il2CppObject *)(pSVar2->fields).Back,
                 (MethodInfo_4A54FE0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,3,
                 (Il2CppObject *)(pSVar2->fields).Left,
                 (MethodInfo_4A54FE0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,4,
                 (Il2CppObject *)(pSVar2->fields).Right,
                 (MethodInfo_4A54FE0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_Add);
      (__this->fields)._dashKeys = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._dashKeys);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float);
      System_Collections_Generic_Dictionary_Int32Enum__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 (MethodInfo_4A581E0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_ctor);
      if (__this_01 != (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,1,-1.0,
                   (MethodInfo_4A58E20 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,2,-1.0,
                   (MethodInfo_4A58E20 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,3,-1.0,
                   (MethodInfo_4A58E20 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,4,-1.0,
                   (MethodInfo_4A58E20 *)
                   MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_Add);
        (__this->fields)._dashTimes = __this_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._dashTimes);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$Update
// il2cpp: void Controllers_HumanPlayerController__Update (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baad70

void Controllers_HumanPlayerController__Update(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar1->fields).FinishSetup == false) {
    return;
  }
  Controllers_BasePlayerController__Update((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanPlayerController$$UpdateMovementInput
// il2cpp: void Controllers_HumanPlayerController__UpdateMovementInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5baada0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5baaf63: jmp 0x5baaeeb
// asm:   0x5baafff: mov dword ptr [rax + 0x238], 0
// asm:   0x5bab009: jmp 0x5baae3b
// asm:   0x5bab049: jmp 0x5baafc8
// asm:   0x5bab21d: jmp 0x5baaeeb
// asm:   0x5bab2ee: movss dword ptr [rax + 0x238], xmm1
// asm:   0x5bab2f6: jmp 0x5baae3b

void Controllers_HumanPlayerController__UpdateMovementInput
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  bool *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  Characters_Human_o *pCVar5;
  Settings_HumanInputSettings_o *pSVar6;
  Settings_KeybindSetting_o *pSVar7;
  Characters_Human_o *pCVar8;
  Settings_GeneralInputSettings_o *pSVar9;
  Characters_BaseCharacter_o *pCVar10;
  Characters_BaseUseable_o *pCVar11;
  Characters_BaseUseable_c *pCVar12;
  Characters_AnimationHandler_o *pCVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t forward;
  uint right;
  int32_t iVar17;
  float fVar18;
  float fVar19;
  ulong uStack_30;
  float fStack_28;
  
  if (Il2CppMethodInitialized_075474a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DownStrikeSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&"jump");
    il2cpp_codegen_initialize_runtime_metadata(&"dash");
    Il2CppMethodInitialized_075474a4 = '\x01';
  }
  fStack_28 = 0.0;
  uStack_30 = 0;
  if (inMenu) {
label_05baae21:
    if ((__this->fields)._autorun != false) {
      return;
    }
    pCVar5 = (__this->fields)._human;
    if (pCVar5 != (Characters_Human_o *)0x0) {
      (pCVar5->fields).HasDirection = false;
      return;
    }
    goto label_05bab2fb;
  }
  pCVar5 = (__this->fields)._human;
  if (pCVar5 == (Characters_Human_o *)0x0) goto label_05bab2fb;
  if (((pCVar5->fields).Dead != false) || ((pCVar5->fields)._state == 0xf)) goto label_05baae21;
  pSVar6 = (__this->fields)._humanInput;
  if ((pSVar6 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar7 = (pSVar6->fields).HorseWalk, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_05bab2fb;
  bVar14 = Settings_KeybindSetting__GetKey(pSVar7,false,(MethodInfo *)0x0);
  if (bVar14) {
    pCVar8 = (__this->fields)._human;
    if (pCVar8 == (Characters_Human_o *)0x0) goto label_05bab2fb;
    bVar14 = true;
    method_00 = extraout_RDX;
    if ((pCVar8->fields).MountState != 1) goto label_05baae89;
  }
  else {
label_05baae89:
    pSVar6 = (__this->fields)._humanInput;
    if ((pSVar6 == (Settings_HumanInputSettings_o *)0x0) ||
       (pSVar7 = (pSVar6->fields).Walk, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_05bab2fb;
    bVar14 = false;
    bVar15 = Settings_KeybindSetting__GetKey(pSVar7,false,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
    if (bVar15) {
      pCVar8 = (__this->fields)._human;
      if (pCVar8 == (Characters_Human_o *)0x0) goto label_05bab2fb;
      bVar14 = (pCVar8->fields).MountState == 0;
    }
  }
  (pCVar5->fields).IsWalk = bVar14;
  pCVar5 = (__this->fields)._human;
  if (pCVar5 == (Characters_Human_o *)0x0) goto label_05bab2fb;
  if ((pCVar5->fields).MountState != 1) {
    iVar4 = (pCVar5->fields)._state;
    if ((pCVar5->fields).Grounded == false) {
      if (iVar4 == 8) {
        return;
      }
      if (iVar4 == 9) {
        pCVar11 = (pCVar5->fields).Special;
        if (pCVar11 == (Characters_BaseUseable_o *)0x0) {
          return;
        }
        pCVar12 = pCVar11->klass;
        bVar2 = (pCVar12->_2).typeHierarchyDepth;
        method_00 = (MethodInfo *)(ulong)bVar2;
        bVar3 = (TypeInfo_Characters_DownStrikeSpecial->_2).typeHierarchyDepth;
        if ((bVar2 < bVar3) ||
           ((pCVar12->_2).typeHierarchy[(ulong)bVar3 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_DownStrikeSpecial)) {
          bVar3 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth;
          if (bVar2 < bVar3) {
            return;
          }
          if ((pCVar12->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_StockSpecial
             ) {
            return;
          }
        }
      }
      pCVar13 = (pCVar5->fields).Animation;
      if (pCVar13 == (Characters_AnimationHandler_o *)0x0) goto label_05bab2fb;
      bVar14 = Characters_AnimationHandler__IsPlaying(pCVar13,"dash",method_00);
      if (bVar14) {
        return;
      }
      pCVar5 = (__this->fields)._human;
      if ((pCVar5 == (Characters_Human_o *)0x0) ||
         (pCVar13 = (pCVar5->fields).Animation, pCVar13 == (Characters_AnimationHandler_o *)0x0))
      goto label_05bab2fb;
      bVar14 = Characters_AnimationHandler__IsPlaying(pCVar13,"jump",method_01);
      if (bVar14) {
        return;
      }
      pCVar5 = (__this->fields)._human;
      if (pCVar5 == (Characters_Human_o *)0x0) goto label_05bab2fb;
      bVar14 = Characters_Human__IsFiringThunderspear(pCVar5,(MethodInfo *)0x0);
      if (bVar14) {
        return;
      }
    }
    else if (iVar4 != 0) {
      return;
    }
  }
  pSVar9 = (__this->fields)._generalInput;
  if ((pSVar9 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar7 = (pSVar9->fields).Autorun, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_05bab2fb;
  bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar7,false,(MethodInfo *)0x0);
  if (bVar14) {
    pbVar1 = &(__this->fields)._autorun;
    *pbVar1 = (bool)(*pbVar1 ^ 1);
  }
  pSVar9 = (__this->fields)._generalInput;
  if ((pSVar9 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar7 = (pSVar9->fields).Forward, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_05bab2fb;
  bVar14 = false;
  bVar15 = Settings_KeybindSetting__GetKey(pSVar7,false,(MethodInfo *)0x0);
  if (bVar15) {
    iVar17 = 1;
  }
  else {
    pSVar9 = (__this->fields)._generalInput;
    if ((pSVar9 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar7 = (pSVar9->fields).Back, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_05bab2fb;
    bVar15 = Settings_KeybindSetting__GetKey(pSVar7,false,(MethodInfo *)0x0);
    bVar14 = !bVar15;
    iVar17 = -(uint)bVar15;
  }
  pSVar9 = (__this->fields)._generalInput;
  if ((pSVar9 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar7 = (pSVar9->fields).Left, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_05bab2fb;
  bVar15 = Settings_KeybindSetting__GetKey(pSVar7,false,(MethodInfo *)0x0);
  uVar16 = 0xffffffff;
  if (bVar15) {
label_05baafc2:
    (__this->fields)._autorun = false;
    bVar14 = true;
label_05baafc8:
    right = uVar16;
  }
  else {
    pSVar9 = (__this->fields)._generalInput;
    if ((pSVar9 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar7 = (pSVar9->fields).Right, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_05bab2fb;
    bVar15 = Settings_KeybindSetting__GetKey(pSVar7,false,(MethodInfo *)0x0);
    uVar16 = (uint)bVar15;
    if ((!bVar14) || (bVar15)) goto label_05baafc2;
    right = 0;
    bVar14 = (__this->fields)._autorun == false;
    if (bVar14) goto label_05baafc8;
  }
  forward = 1;
  if (bVar14) {
    forward = iVar17;
  }
  pCVar10 = (__this->fields)._character;
  if (forward == 0 && right == 0) {
    if (pCVar10 != (Characters_BaseCharacter_o *)0x0) {
      (pCVar10->fields).HasDirection = false;
      pCVar5 = (__this->fields)._human;
      if (pCVar5 != (Characters_Human_o *)0x0) {
        (pCVar5->fields).TargetMagnitude = 0.0;
        return;
      }
    }
    goto label_05bab2fb;
  }
  fVar18 = Controllers_BasePlayerController__GetTargetAngle
                     ((Controllers_BasePlayerController_o *)__this,forward,right,(MethodInfo *)0x0);
  if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto label_05bab2fb;
  (pCVar10->fields).TargetAngle = fVar18;
  pCVar10 = (__this->fields)._character;
  if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto label_05bab2fb;
  (pCVar10->fields).HasDirection = true;
  fVar19 = (float)(int)right;
  fVar18 = (float)forward;
  uStack_30 = (ulong)(uint)fVar19;
  fStack_28 = fVar18;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar18 = fVar18 * fVar18 + fVar19 * fVar19 + 0.0;
  if (fVar18 < 0.0) {
    fVar19 = sqrtf(fVar18);
  }
  else {
    fVar19 = SQRT(fVar18);
  }
  if (fVar19 <= 0.95) {
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05bab287;
label_05bab254:
      if (0.0 <= fVar18) goto label_05bab261;
label_05bab299:
      fVar18 = sqrtf(fVar18);
    }
    else {
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05bab254;
label_05bab287:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      if (fVar18 < 0.0) goto label_05bab299;
label_05bab261:
      fVar18 = SQRT(fVar18);
    }
    fVar19 = 0.0;
    if (0.25 <= fVar18) {
      fVar19 = (float)il2cpp_runtime_helper_0599adc0(&uStack_30,0);
    }
  }
  else {
    fVar19 = 1.0;
  }
  pCVar5 = (__this->fields)._human;
  if (pCVar5 != (Characters_Human_o *)0x0) {
    if (((((pCVar5->fields).IsWalk != false) && ((pCVar5->fields).MountState == 0)) &&
        ((pCVar5->fields)._state == 0)) && ((pCVar5->fields).Grounded != false)) {
      fVar19 = fVar19 * 0.25;
    }
    (pCVar5->fields).TargetMagnitude = fVar19;
    return;
  }
label_05bab2fb:
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$UpdateUI
// il2cpp: void Controllers_HumanPlayerController__UpdateUI (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5bab300
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5baba62: mov r15, rax
// asm:   0x5baba65: jmp 0x5babd9e
// asm:   0x5babe43: jmp 0x5babe67
// asm:   0x5babe57: mov r13, rbp
// asm:   0x5bac90d: jmp 0x5babe67

void Controllers_HumanPlayerController__UpdateUI
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint32_t uVar10;
  Cameras_BaseCamera_o *pCVar11;
  UnityEngine_Camera_o *pUVar12;
  UnityEngine_Rigidbody_o *__this_00;
  Utility_BaseComponentCache_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  Settings_BoolSetting_o *pSVar15;
  Settings_IntSetting_o *pSVar16;
  Settings_AbilitySettings_o *pSVar17;
  Settings_InGameSet_o *pSVar18;
  Settings_InGameMiscSettings_o *pSVar19;
  Characters_BaseUseable_o *pCVar20;
  Characters_BaseUseable_c *pCVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float *pfVar24;
  UnityEngine_Ray_o ray;
  float fVar25;
  float fVar26;
  bool bVar27;
  int32_t iVar28;
  Characters_Human_o *pCVar29;
  System_String_o *pSVar30;
  System_String_o *str0;
  Settings_UISettings_o *pSVar31;
  System_String_o **ppSVar32;
  SimpleJSONFixed_JSONNode_o *pSVar33;
  UnityEngine_Vector3_StaticFields *pUVar34;
  UnityEngine_Vector3_o *pUVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar40;
  float extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  float extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dc_09;
  undefined4 extraout_XMM0_Dc_10;
  undefined4 extraout_XMM0_Dc_11;
  float extraout_XMM0_Dc_12;
  float fVar41;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  float extraout_XMM0_Dd_08;
  undefined4 extraout_XMM0_Dd_09;
  undefined4 extraout_XMM0_Dd_10;
  undefined4 extraout_XMM0_Dd_11;
  float extraout_XMM0_Dd_12;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  undefined1 auVar46 [12];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  UnityEngine_Quaternion_o UVar49;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar50;
  UnityEngine_Vector3_o UVar51;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o direction_00;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 auStack_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  float fStack_18c;
  undefined1 auStack_188 [8];
  float fStack_180;
  float fStack_17c;
  undefined1 auStack_178 [8];
  float fStack_170;
  float fStack_16c;
  float fStack_160;
  int32_t iStack_15c;
  UnityEngine_Vector3_StaticFields UStack_158;
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [16];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [16];
  UnityEngine_RaycastHit_o UStack_68;
  
  if (Il2CppMethodInitialized_075474a5 == '\0') {
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
    Il2CppMethodInitialized_075474a5 = '\x01';
  }
  UStack_68.fields.m_UV.fields.x = 0.0;
  UStack_68.fields.m_UV.fields.y = 0.0;
  UStack_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  UStack_68.fields.m_Normal.fields.y = 0.0;
  UStack_68.fields.m_Normal.fields.z = 0.0;
  UStack_68.fields.m_FaceID = 0;
  UStack_68.fields.m_Distance = 0.0;
  UStack_68.fields.m_Point.fields.x = 0.0;
  UStack_68.fields.m_Point.fields.y = 0.0;
  UStack_68.fields.m_Point.fields.z = 0.0;
  UStack_68.fields.m_Normal.fields.x = 0.0;
  fStack_1b0 = 0.0;
  iStack_15c = 0;
  fStack_1ac = 0.0;
  fStack_160 = 0.0;
  UStack_158.positiveInfinityVector.fields.x = 0.0;
  UStack_158.positiveInfinityVector.fields.y = 0.0;
  UStack_158.positiveInfinityVector.fields.z = 0.0;
  UStack_158.negativeInfinityVector.fields.x = 0.0;
  UStack_158.negativeInfinityVector.fields.y = 0.0;
  UStack_158.negativeInfinityVector.fields.z = 0.0;
  UStack_158.rightVector.fields.y = 0.0;
  UStack_158.rightVector.fields.z = 0.0;
  UStack_158.forwardVector.fields.x = 0.0;
  UStack_158.forwardVector.fields.y = 0.0;
  UStack_158.forwardVector.fields.z = 0.0;
  UStack_158.backVector.fields.x = 0.0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  pCVar11 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar11 == (Cameras_BaseCamera_o *)0x0) goto label_05bac912;
  pUVar12 = (pCVar11->fields).Camera;
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UVar50 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  if (pUVar12 == (UnityEngine_Camera_o *)0x0) goto label_05bac912;
  UnityEngine_Camera__ScreenPointToRay_68c1290
            ((UnityEngine_Ray_o *)&UStack_158,pUVar12,UVar50,(MethodInfo *)0x0);
  pSVar30 = "???";
  pCVar29 = (__this->fields)._human;
  if (pCVar29 == (Characters_Human_o *)0x0) goto label_05bac912;
  str0 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if ((pCVar29->fields).CarryState == 1) {
    UStack_158.forwardVector.fields.z = UStack_158.oneVector.fields.y;
    UStack_158.backVector.fields.x = UStack_158.oneVector.fields.z;
    UStack_158.forwardVector.fields.y = UStack_158.oneVector.fields.x;
    UStack_158.forwardVector.fields.x = UStack_158.zeroVector.fields.z;
    UStack_158.rightVector.fields.y = UStack_158.zeroVector.fields.x;
    UStack_158.rightVector.fields.z = UStack_158.zeroVector.fields.y;
    pCVar29 = (pCVar29->fields).Carrier;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar27 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar27) {
      UStack_158.negativeInfinityVector.fields.y = UStack_158.forwardVector.fields.z;
      UStack_158.negativeInfinityVector.fields.z = UStack_158.backVector.fields.x;
      UStack_158.positiveInfinityVector.fields.x = UStack_158.rightVector.fields.y;
      UStack_158.positiveInfinityVector.fields.y = UStack_158.rightVector.fields.z;
      UStack_158.positiveInfinityVector.fields.z = UStack_158.forwardVector.fields.x;
      UStack_158.negativeInfinityVector.fields.x = UStack_158.forwardVector.fields.y;
      pCVar29 = (__this->fields)._human;
      if (pCVar29 == (Characters_Human_o *)0x0) goto label_05bac912;
      goto label_05bab6e7;
    }
    pCVar29 = (__this->fields)._human;
    if (pCVar29 == (Characters_Human_o *)0x0) goto label_05bac912;
    pCVar29 = (pCVar29->fields).Carrier;
    if (pCVar29 == (Characters_Human_o *)0x0) goto label_05bac912;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
    }
    fVar42 = (pCVar29->fields).CarryVelocity.fields.x;
    uVar1 = (pCVar29->fields).CarryVelocity.fields.y;
    uVar4 = (pCVar29->fields).CarryVelocity.fields.z;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar42 = (float)uVar4 * (float)uVar4 + fVar42 * fVar42 + (float)uVar1 * (float)uVar1;
    pUVar35 = (UnityEngine_Vector3_o *)&UStack_158.rightVector.fields.y;
    if (fVar42 < 0.0) goto label_05bab68b;
label_05bab759:
    fStack_1b0 = SQRT(fVar42);
  }
  else {
    UStack_158.negativeInfinityVector.fields.y = UStack_158.oneVector.fields.y;
    UStack_158.negativeInfinityVector.fields.z = UStack_158.oneVector.fields.z;
    UStack_158.negativeInfinityVector.fields.x = UStack_158.oneVector.fields.x;
    UStack_158.positiveInfinityVector.fields.z = UStack_158.zeroVector.fields.z;
    UStack_158.positiveInfinityVector.fields.x = UStack_158.zeroVector.fields.x;
    UStack_158.positiveInfinityVector.fields.y = UStack_158.zeroVector.fields.y;
label_05bab6e7:
    pUVar13 = (pCVar29->fields).Cache;
    if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
       (__this_00 = (pUVar13->fields).Rigidbody, __this_00 == (UnityEngine_Rigidbody_o *)0x0))
    goto label_05bac912;
    UVar50 = UnityEngine_Rigidbody__get_linearVelocity(__this_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar10 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar10 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar10 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar42 = UVar50.fields.z * UVar50.fields.z +
             UVar50.fields.y * UVar50.fields.y + UVar50.fields.x * UVar50.fields.x;
    pUVar35 = &UStack_158.positiveInfinityVector;
    if (0.0 <= fVar42) goto label_05bab759;
label_05bab68b:
    fStack_1b0 = sqrtf(fVar42);
  }
  uStack_a8._0_4_ = (*(uint32_t *)((char *)pUVar35 + 0x30));
  uStack_a8._4_4_ = (*(uint32_t *)((char *)pUVar35 + 0x34));
  fVar42 = (pUVar35->fields).y;
  uStack_b8._0_4_ = (pUVar35->fields).x;
  uStack_b8._4_4_ = (pUVar35->fields).y;
  pfVar24 = &(pUVar35->fields).z;
  fStack_1d0 = *pfVar24;
  fStack_1cc = (*(uint32_t *)((char *)pUVar35 + 0x2c));
  uStack_b0 = *(undefined8 *)pfVar24;
  if ((TypeInfo_Controllers_HumanPlayerController->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_HumanPlayerController);
  }
  iVar28 = UnityEngine_LayerMask__get_value
                     (&TypeInfo_Controllers_HumanPlayerController->static_fields->HookMask,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  fStack_1c8 = 1000.0;
  ray.fields.m_Origin.fields.z = (float)(undefined4)uStack_b0;
  ray.fields.m_Direction.fields.x = (float)uStack_b0._4_4_;
  ray.fields.m_Origin.fields.x = (float)(undefined4)uStack_b8;
  ray.fields.m_Origin.fields.y = (float)uStack_b8._4_4_;
  ray.fields.m_Direction.fields.y = (float)(undefined4)uStack_a8;
  ray.fields.m_Direction.fields.z = (float)uStack_a8._4_4_;
  bVar27 = UnityEngine_Physics__Raycast_69da1f0(ray,&UStack_68,1000.0,iVar28,(MethodInfo *)0x0);
  if (bVar27) {
    UVar50 = UnityEngine_RaycastHit__get_point(&UStack_68,(MethodInfo *)0x0);
    pCVar29 = (__this->fields)._human;
    if (pCVar29 == (Characters_Human_o *)0x0) goto label_05bac912;
    pUVar13 = (pCVar29->fields).Cache;
    if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_05bac912;
    pUVar14 = (pUVar13->fields).Transform;
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_05bac912;
    UVar51 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
    auVar46._0_8_ = UVar51.fields._0_8_;
    auVar46._8_4_ = extraout_XMM0_Dc;
    auVar48._12_4_ = extraout_XMM0_Dd;
    auVar48._0_12_ = auVar46;
    fStack_1d8 = UVar50.fields.x;
    fStack_1d4 = UVar50.fields.y;
    fVar45 = UVar51.fields.z;
    fVar37 = UVar51.fields.x;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      auStack_1a8._4_4_ = UVar51.fields.x;
      auStack_1a8._0_4_ = UVar51.fields.z;
      fStack_1a0 = fVar42;
      fStack_19c = UVar51.fields.y;
      _auStack_178 = auVar48;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      fVar45 = (float)auStack_1a8._0_4_;
      fVar37 = (float)auStack_1a8._4_4_;
      auVar46 = _auStack_178;
    }
    fStack_1d4 = fStack_1d4 - auVar46._4_4_;
    fVar45 = UVar50.fields.z - fVar45;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fStack_1c8 = fStack_1d4 * fStack_1d4 + (fStack_1d8 - fVar37) * (fStack_1d8 - fVar37) + fVar45 * fVar45;
    fVar42 = 0.0;
    fStack_1d0 = 0.0;
    fStack_1cc = 0.0;
    if (fStack_1c8 < 0.0) {
      fStack_1c8 = sqrtf(fStack_1c8);
    }
    else {
      fStack_1c8 = SQRT(fStack_1c8);
    }
    iStack_15c = (int32_t)fStack_1c8;
    pSVar30 = System_Int32__ToString(&iStack_15c,(MethodInfo *)0x0);
  }
  pSVar31 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (pSVar31 == (Settings_UISettings_o *)0x0) goto label_05bac912;
  pSVar15 = (pSVar31->fields).ShowCrosshairDistance;
  if (pSVar15 == (Settings_BoolSetting_o *)0x0) goto label_05bac912;
  fStack_1d4 = fVar42;
  if ((pSVar15->fields)._value != false) {
    str0 = System_String__Concat_52f0320(str0,pSVar30,(MethodInfo *)0x0);
    pSVar31 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    fStack_1d4 = fVar42;
    if (pSVar31 == (Settings_UISettings_o *)0x0) goto label_05bac912;
  }
  pSVar16 = (pSVar31->fields).Speedometer;
  if (pSVar16 == (Settings_IntSetting_o *)0x0) goto label_05bac912;
  iVar9 = (pSVar16->fields)._value;
  if (iVar9 == 2) {
    bVar27 = System_String__op_Inequality
                       (str0,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    if (bVar27) {
      str0 = System_String__Concat_52f0320(str0,"\n",(MethodInfo *)0x0);
    }
    fVar42 = fStack_1b0;
    fStack_1ac = fStack_1b0;
    pCVar29 = (__this->fields)._human;
    if (pCVar29 == (Characters_Human_o *)0x0) goto label_05bac912;
    pCVar20 = (pCVar29->fields).Weapon;
    if (pCVar20 == (Characters_BaseUseable_o *)0x0) goto label_05babd10;
    pCVar21 = pCVar20->klass;
    bVar8 = (pCVar21->_2).typeHierarchyDepth;
    bVar7 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
    if ((bVar8 < bVar7) ||
       ((pCVar21->_2).typeHierarchy[(ulong)bVar7 - 1] != (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
      bVar7 = (TypeInfo_Characters_AHSSWeapon->_2).typeHierarchyDepth;
      if ((bVar7 <= bVar8) &&
         ((pCVar21->_2).typeHierarchy[(ulong)bVar7 - 1] == (Il2CppClass *)TypeInfo_Characters_AHSSWeapon)) {
        if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
        }
        pSVar33 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
        if (pSVar33 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05bac912;
        ppSVar32 = &"AHSS";
        goto label_05babcab;
      }
      bVar7 = (TypeInfo_Characters_APGWeapon->_2).typeHierarchyDepth;
      if ((bVar7 <= bVar8) &&
         ((pCVar21->_2).typeHierarchy[(ulong)bVar7 - 1] == (Il2CppClass *)TypeInfo_Characters_APGWeapon)) {
        if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
        }
        pSVar33 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
        if (pSVar33 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05bac912;
        ppSVar32 = &"APG";
        goto label_05babcab;
      }
      bVar7 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
      if ((bVar7 <= bVar8) &&
         ((pCVar21->_2).typeHierarchy[(ulong)bVar7 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
        pSVar18 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if ((pSVar18 == (Settings_InGameSet_o *)0x0) ||
           ((pSVar19 = (pSVar18->fields).Misc, pSVar19 == (Settings_InGameMiscSettings_o *)0x0 ||
            (pSVar15 = (pSVar19->fields).ThunderspearPVP, pSVar15 == (Settings_BoolSetting_o *)0x0))))
        goto label_05bac912;
        if ((pSVar15->fields)._value == false) {
          if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
          }
          pSVar33 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
          if (pSVar33 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05bac912;
          ppSVar32 = &"Thunderspear";
          goto label_05babcab;
        }
      }
    }
    else {
      if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
      }
      pSVar33 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
      if (pSVar33 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05bac912;
      ppSVar32 = &"Blade";
label_05babcab:
      pSVar33 = (*(pSVar33->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar33,*ppSVar32,(pSVar33->klass->vtable)._7_get_Item.method);
      if ((pSVar33 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar33 = (*(pSVar33->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar33,"DamageMultiplier",(pSVar33->klass->vtable)._7_get_Item.method),
         pSVar33 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05bac912;
      fVar45 = (*(pSVar33->klass->vtable)._37_get_AsFloat.methodPtr)
                         (pSVar33,(pSVar33->klass->vtable)._37_get_AsFloat.method);
      fStack_1d4 = 0.0;
      fStack_1d0 = 0.0;
      fStack_1cc = 0.0;
      fStack_1b0 = (float)(int)(fVar42 * fVar45);
    }
label_05babd10:
    if (fStack_1b0 <= 10.0) {
      fStack_1b0 = 10.0;
    }
    fStack_1b0 = fStack_1b0 / 100.0;
    pSVar30 = System_Single__ToString_54d0a60(&fStack_1b0,"F1",(MethodInfo *)0x0);
    str0 = System_String__Concat_5301f10(str0,pSVar30,"K",(MethodInfo *)0x0);
    pCVar29 = (__this->fields)._human;
    if (pCVar29 == (Characters_Human_o *)0x0) goto label_05bac912;
    pCVar20 = (pCVar29->fields).Special;
    if (pCVar20 != (Characters_BaseUseable_o *)0x0) {
      pCVar21 = pCVar20->klass;
      bVar8 = (TypeInfo_Characters_AHSSTwinShot->_2).typeHierarchyDepth;
      if ((bVar8 <= (pCVar21->_2).typeHierarchyDepth) &&
         ((pCVar21->_2).typeHierarchy[(ulong)bVar8 - 1] == (Il2CppClass *)TypeInfo_Characters_AHSSTwinShot)) {
        fStack_1ac = (float)(int)fStack_1ac;
        if (fStack_1ac <= 10.0) {
          fStack_1ac = 10.0;
        }
        fStack_1ac = fStack_1ac / 100.0;
        pSVar30 = System_Single__ToString_54d0a60(&fStack_1ac,"F1",(MethodInfo *)0x0);
        str0 = System_String__Concat_5302810
                         (str0," | ",pSVar30,"K",(MethodInfo *)0x0);
      }
    }
  }
  else if (iVar9 == 1) {
    bVar27 = System_String__op_Inequality
                       (str0,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    if (bVar27) {
      str0 = System_String__Concat_52f0320(str0,"\n",(MethodInfo *)0x0);
    }
    pSVar30 = System_Single__ToString_54d0a60(&fStack_1b0,"F1",(MethodInfo *)0x0);
    str0 = System_String__Concat_5301f10(str0,pSVar30," u/s",(MethodInfo *)0x0);
  }
  pSVar17 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
  if (pSVar17 == (Settings_AbilitySettings_o *)0x0) goto label_05bac912;
  pSVar15 = (pSVar17->fields).CursorCooldown;
  if (pSVar15 == (Settings_BoolSetting_o *)0x0) goto label_05bac912;
  fVar42 = fStack_1d4;
  if ((pSVar15->fields)._value == false) {
label_05babe5a:
    uVar10 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    pSVar18 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (pSVar18 == (Settings_InGameSet_o *)0x0) goto label_05bac912;
    pSVar19 = (pSVar18->fields).Misc;
    if (pSVar19 == (Settings_InGameMiscSettings_o *)0x0) goto label_05bac912;
    pSVar15 = (pSVar19->fields).ThunderspearPVP;
    if (pSVar15 == (Settings_BoolSetting_o *)0x0) goto label_05bac912;
    if ((pSVar15->fields)._value == false) goto label_05babe5a;
    pCVar29 = (__this->fields)._human;
    if (pCVar29 == (Characters_Human_o *)0x0) goto label_05bac912;
    pCVar20 = (pCVar29->fields).Weapon;
    if (pCVar20 != (Characters_BaseUseable_o *)0x0) {
      pCVar21 = pCVar20->klass;
      bVar8 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
      if (bVar8 <= (pCVar21->_2).typeHierarchyDepth) {
        if ((pCVar21->_2).typeHierarchy[(ulong)bVar8 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon) goto label_05babe5a;
        bVar27 = System_String__op_Inequality
                           (str0,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
        if (bVar27) {
          str0 = System_String__Concat_52f0320(str0,"\n",(MethodInfo *)0x0);
        }
        pCVar29 = (__this->fields)._human;
        if ((pCVar29 == (Characters_Human_o *)0x0) ||
           (pCVar20 = (pCVar29->fields).Weapon, pCVar20 == (Characters_BaseUseable_o *)0x0))
        goto label_05bac912;
        bVar8 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
        if (((pCVar20->klass->_2).typeHierarchyDepth < bVar8) ||
           ((pCVar20->klass->_2).typeHierarchy[(ulong)bVar8 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
          il2cpp_codegen_raise_invalid_cast_exception(pCVar20);
        }
        fVar45 = (pCVar20->fields).Cooldown;
        fVar37 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        fStack_160 = (pCVar20->fields).Cooldown;
        fVar42 = 0.0;
        fStack_1d0 = 0.0;
        fStack_1cc = 0.0;
        fVar45 = fVar45 - (fVar37 - (pCVar20->fields)._lastUseTime);
        if (fVar45 <= fStack_160) {
          fStack_160 = fVar45;
        }
        fStack_160 = (float)(-(uint)(0.0 <= fVar45) & (uint)fStack_160);
        if (fStack_160 <= 0.0) {
          str0 = System_String__Concat_52f0320(str0,"<color=#008000>READY</color>",(MethodInfo *)0x0);
        }
        else {
          pSVar30 = System_Single__ToString_54d0a60(&fStack_160,"F2",(MethodInfo *)0x0);
          str0 = System_String__Concat_5302810
                           (str0,"<color=#FF0000>",pSVar30,"</color>",(MethodInfo *)0x0);
        }
        uVar10 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
        goto joined_r0x05babe65;
      }
    }
    uVar10 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
  }
joined_r0x05babe65:
  if (uVar10 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UI_CursorManager__SetCrosshairText(str0,(MethodInfo *)0x0);
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UI_CursorManager__SetCrosshairColor(fStack_1c8 <= 120.0,(MethodInfo *)0x0);
  pSVar31 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (pSVar31 == (Settings_UISettings_o *)0x0) goto label_05bac912;
  pSVar15 = (pSVar31->fields).ShowCrosshairArrows;
  if (pSVar15 == (Settings_BoolSetting_o *)0x0) goto label_05bac912;
  if ((pSVar15->fields)._value == false) {
    return;
  }
  pCVar29 = (__this->fields)._human;
  if (pCVar29 == (Characters_Human_o *)0x0) goto label_05bac912;
  UVar50 = (*(pCVar29->klass->vtable)._76_GetAimPoint.methodPtr)
                     (pCVar29,(pCVar29->klass->vtable)._76_GetAimPoint.method);
  fVar45 = UVar50.fields.z;
  pCVar11 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar11 == (Cameras_BaseCamera_o *)0x0) goto label_05bac912;
  pUVar13 = (pCVar11->fields).Cache;
  if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_05bac912;
  pUVar14 = (pUVar13->fields).Transform;
  if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_05bac912;
  fVar39 = fVar42;
  fVar40 = fStack_1d0;
  fVar41 = fStack_1cc;
  UVar51 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
  fVar37 = UVar51.fields.z;
  fVar36 = UVar51.fields.x;
  fVar38 = UVar51.fields.y;
  if (g_data_0753e7b7 == '\0') {
    fStack_1a0 = (float)extraout_XMM0_Dc_01;
    auStack_1a8 = (undefined1  [8])UVar51.fields._0_8_;
    fStack_19c = (float)extraout_XMM0_Dd_01;
    auStack_178._4_4_ = fVar39;
    auStack_178._0_4_ = fVar37;
    fStack_170 = fVar40;
    fStack_16c = fVar41;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_0753e7b7 = '\x01';
    uVar10 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    fVar37 = (float)auStack_178._0_4_;
    fVar39 = (float)auStack_178._4_4_;
    fVar40 = fStack_170;
    fVar41 = fStack_16c;
    fVar36 = (float)auStack_1a8._0_4_;
    fVar38 = (float)auStack_1a8._4_4_;
    fVar25 = fStack_1a0;
    fVar26 = fStack_19c;
  }
  else {
    uVar10 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    fVar25 = (float)extraout_XMM0_Dc_01;
    fVar26 = (float)extraout_XMM0_Dd_01;
  }
  if (uVar10 == 0) {
    auStack_1a8._4_4_ = fVar38;
    auStack_1a8._0_4_ = fVar36;
    fStack_1a0 = fVar25;
    fStack_19c = fVar26;
    auStack_178._4_4_ = fVar39;
    auStack_178._0_4_ = fVar37;
    fStack_170 = fVar40;
    fStack_16c = fVar41;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar36 = (float)auStack_1a8._0_4_;
    fVar38 = (float)auStack_1a8._4_4_;
    fVar37 = (float)auStack_178._0_4_;
  }
  fStack_1d8 = UVar50.fields.x;
  fStack_1d4 = UVar50.fields.y;
  fVar39 = (fVar38 - fStack_1d4) * (fVar38 - fStack_1d4) + (fVar36 - fStack_1d8) * (fVar36 - fStack_1d8);
  fVar37 = fVar39 + (fVar37 - fVar45) * (fVar37 - fVar45);
  if (fVar37 < 0.0) {
    fVar37 = sqrtf(fVar37);
    fVar39 = extraout_XMM0_Db;
    fVar40 = extraout_XMM0_Dc_02;
    fVar41 = extraout_XMM0_Dd_02;
  }
  else {
    fVar37 = SQRT(fVar37);
    fVar40 = fVar39;
    fVar41 = fVar39;
  }
  pCVar29 = (__this->fields)._human;
  if (pCVar29 == (Characters_Human_o *)0x0) goto label_05bac912;
  pUVar13 = (pCVar29->fields).Cache;
  if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_05bac912;
  auStack_178._4_4_ = fVar39;
  auStack_178._0_4_ = fVar37;
  fStack_170 = fVar40;
  fStack_16c = fVar41;
  pUVar14 = (pUVar13->fields).Transform;
  if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_05bac912;
  UVar50 = UnityEngine_Transform__get_right(pUVar14,(MethodInfo *)0x0);
  pCVar29 = (__this->fields)._human;
  if (pCVar29 == (Characters_Human_o *)0x0) goto label_05bac912;
  pUVar13 = (pCVar29->fields).Cache;
  if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_05bac912;
  fStack_180 = (float)extraout_XMM0_Dc_03;
  auStack_188 = (undefined1  [8])UVar50.fields._0_8_;
  fStack_17c = (float)extraout_XMM0_Dd_03;
  auStack_1a8._0_4_ = UVar50.fields.z;
  pUVar14 = (pUVar13->fields).Transform;
  if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_05bac912;
  UVar50 = UnityEngine_Transform__get_right(pUVar14,(MethodInfo *)0x0);
  pCVar11 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar11 == (Cameras_BaseCamera_o *)0x0) goto label_05bac912;
  fStack_c0 = (float)extraout_XMM0_Dc_04;
  auStack_c8 = UVar50.fields._0_8_;
  fStack_bc = (float)extraout_XMM0_Dd_04;
  pUVar12 = (pCVar11->fields).Camera;
  if (pUVar12 == (UnityEngine_Camera_o *)0x0) goto label_05bac912;
  fStack_88 = (float)auStack_178._0_4_ * *(float *)(&g_data_0100ae98 + (ulong)(50.0 < fVar37) * 4);
  auStack_178._0_4_ = fStack_88;
  UVar51.fields.x = fStack_1d8 - (float)auStack_188._0_4_ * fStack_88;
  UVar51.fields.y = fStack_1d4 - (float)auStack_188._4_4_ * fStack_88;
  UVar51.fields.z = fVar45 - (float)auStack_1a8._0_4_ * fStack_88;
  auStack_188._4_4_ = UVar51.fields.y;
  auStack_188._0_4_ = UVar51.fields.x;
  fStack_180 = extraout_XMM0_Dc_00 - fStack_180 * fStack_88;
  fStack_17c = extraout_XMM0_Dd_00 - fStack_17c * fStack_88;
  auStack_1a8._4_4_ = fVar42;
  auStack_1a8._0_4_ = UVar51.fields.z;
  fStack_1a0 = fStack_1d0;
  fStack_19c = fStack_1cc;
  fStack_84 = fStack_88;
  fStack_80 = fStack_88;
  fStack_7c = fStack_88;
  UVar51 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(pUVar12,UVar51,(MethodInfo *)0x0);
  UStack_158.leftVector.fields.z = extraout_XMM0_Dc_05;
  UStack_158.leftVector.fields._0_8_ = UVar51.fields._0_8_;
  UStack_158.rightVector.fields.x = extraout_XMM0_Dd_05;
  if (Il2CppMethodInitialized_075474a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_075474a6 = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UVar51 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  fVar37 = atan2f(UStack_158.leftVector.fields.y - UVar51.fields.y,
                  UStack_158.leftVector.fields.x - UVar51.fields.x);
  uVar43 = 0;
  uVar44 = 0;
  UStack_158.zeroVector.fields.x = 0.0;
  UStack_158.zeroVector.fields.y = 0.0;
  UStack_158.zeroVector.fields.z = fVar37 * 57.29578 * 0.017453292;
  pUVar34 = &UStack_158;
  UVar49 = UnityEngine_Quaternion__Internal_FromEulerRad(&pUVar34->zeroVector,(MethodInfo *)0x0);
  pCVar29 = (__this->fields)._human;
  if (pCVar29 == (Characters_Human_o *)0x0) goto label_05bac912;
  pUVar13 = (pCVar29->fields).Cache;
  if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_05bac912;
  auStack_78._8_4_ = uVar43;
  auStack_78._0_8_ = UVar49.fields._8_8_;
  auStack_78._12_4_ = uVar44;
  UStack_158.downVector.fields.y = (float)extraout_XMM0_Dc_06;
  UStack_158._32_8_ = UVar49.fields._0_8_;
  UStack_158.downVector.fields.z = (float)extraout_XMM0_Dd_06;
  pUVar14 = (pUVar13->fields).Transform;
  if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_05bac912;
  UVar51 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
  pCVar29 = (__this->fields)._human;
  if (pCVar29 == (Characters_Human_o *)0x0) goto label_05bac912;
  pUVar13 = (pCVar29->fields).Cache;
  if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_05bac912;
  auStack_98._8_4_ = extraout_XMM0_Dc_07;
  auStack_98._0_8_ = UVar51.fields._0_8_;
  auStack_98._12_4_ = extraout_XMM0_Dd_07;
  pUVar14 = (pUVar13->fields).Transform;
  UStack_158.upVector.fields.y = UVar51.fields.z;
  if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_05bac912;
  UVar51 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
  fVar37 = UVar51.fields.x;
  fVar39 = UVar51.fields.y;
  if (g_data_0753e72d == '\0') {
    fStack_d0 = extraout_XMM0_Dc_08;
    auStack_d8 = (undefined1  [8])UVar51.fields._0_8_;
    fStack_cc = extraout_XMM0_Dd_08;
    fStack_18c = UVar51.fields.z;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72d = '\x01';
    UStack_158.zeroVector.fields.x = 0.0;
    UStack_158.zeroVector.fields.y = 0.0;
    fVar37 = (float)auStack_d8._0_4_;
    fVar39 = (float)auStack_d8._4_4_;
    fVar40 = fStack_d0;
    fVar41 = fStack_cc;
    fVar38 = fStack_18c;
    fVar36 = fStack_18c;
  }
  else {
    UStack_158.zeroVector.fields.x = 0.0;
    UStack_158.zeroVector.fields.y = 0.0;
    fVar40 = extraout_XMM0_Dc_08;
    fVar41 = extraout_XMM0_Dd_08;
    fVar38 = UVar51.fields.z;
    fVar36 = fStack_18c;
  }
  fStack_18c = fVar38;
  UStack_158.zeroVector.fields.x = 0.0;
  UStack_158.zeroVector.fields.y = 0.0;
  fVar38 = fStack_18c;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    UStack_158.zeroVector.fields.x = 0.0;
    UStack_158.zeroVector.fields.y = 0.0;
    auStack_d8._4_4_ = fVar39;
    auStack_d8._0_4_ = fVar37;
    fStack_d0 = fVar40;
    fStack_cc = fVar41;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar37 = (float)auStack_d8._0_4_;
    fVar39 = (float)auStack_d8._4_4_;
    fVar40 = fStack_d0;
    fVar41 = fStack_cc;
    fVar38 = fStack_18c;
    fVar36 = fStack_18c;
  }
  fStack_18c = fVar36;
  auStack_188._0_4_ = (float)auStack_188._0_4_ - fVar37;
  auStack_188._4_4_ = (float)auStack_188._4_4_ - fVar39;
  fStack_180 = fStack_180 - fVar40;
  fStack_17c = fStack_17c - fVar41;
  auStack_1a8._0_4_ = (float)auStack_1a8._0_4_ - fVar38;
  uVar43 = auStack_1a8._4_4_;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar43 = auStack_1a8._4_4_;
  }
  fVar37 = (float)auStack_1a8._0_4_ * (float)auStack_1a8._0_4_ +
           auStack_188._4_4_ * auStack_188._4_4_ + auStack_188._0_4_ * auStack_188._0_4_;
  if (fVar37 < 0.0) {
    auStack_1a8._4_4_ = uVar43;
    fVar37 = sqrtf(fVar37);
    uVar43 = extraout_XMM0_Db_00;
    if (1e-05 < fVar37) goto label_05bac294;
label_05bac25a:
    pUVar34 = TypeInfo_UnityEngine_Vector3->static_fields;
    auStack_1a8._0_4_ = (pUVar34->zeroVector).fields.z;
    auStack_1a8._4_4_ = 0;
    fStack_1a0 = 0.0;
    fStack_19c = 0.0;
  }
  else {
    fVar37 = SQRT(fVar37);
    auStack_1a8._4_4_ = uVar43;
    if (fVar37 <= 1e-05) goto label_05bac25a;
label_05bac294:
    auStack_1a8._0_4_ = (float)auStack_1a8._0_4_ / fVar37;
    auVar23._4_4_ = fVar37;
    auVar23._0_4_ = fVar37;
    auVar23._8_4_ = uVar43;
    auVar23._12_4_ = uVar43;
    auVar48 = divps(_auStack_188,auVar23);
    UStack_158.zeroVector.fields.x = auVar48._0_4_;
    UStack_158.zeroVector.fields.y = auVar48._4_4_;
  }
  uVar2 = (pUVar34->zeroVector).fields.x;
  uVar5 = (pUVar34->zeroVector).fields.y;
  auStack_188._4_4_ = uVar5;
  auStack_188._0_4_ = uVar2;
  _fStack_180 = 0;
  if ((TypeInfo_Controllers_HumanPlayerController->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_HumanPlayerController);
  }
  iVar28 = UnityEngine_LayerMask__get_value
                     (&TypeInfo_Controllers_HumanPlayerController->static_fields->HookMask,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  origin.fields.z = UStack_158.upVector.fields.y;
  origin.fields.x = (float)auStack_98._0_4_;
  origin.fields.y = (float)auStack_98._4_4_;
  direction.fields.z = (float)auStack_1a8._0_4_;
  direction.fields.x = (float)auStack_188._0_4_;
  direction.fields.y = (float)auStack_188._4_4_;
  bVar27 = UnityEngine_Physics__Raycast_69d96f0(origin,direction,120.0,iVar28,(MethodInfo *)0x0);
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UVar49.fields.z = (float)auStack_78._0_4_;
  UVar49.fields.w = (float)auStack_78._4_4_;
  UVar49.fields.x = UStack_158.upVector.fields.z;
  UVar49.fields.y = UStack_158.downVector.fields.x;
  position.fields.z = 0.0;
  position.fields.x = UStack_158.leftVector.fields.x;
  position.fields.y = UStack_158.leftVector.fields.y;
  UI_CursorManager__SetHookArrow(true,position,UVar49,bVar27,(MethodInfo *)0x0);
  pCVar11 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((pCVar11 != (Cameras_BaseCamera_o *)0x0) &&
     (pUVar12 = (pCVar11->fields).Camera, pUVar12 != (UnityEngine_Camera_o *)0x0)) {
    fVar37 = fStack_80 * fStack_c0;
    fVar39 = fStack_7c * fStack_bc;
    position_00.fields.x = fStack_1d8 + fStack_88 * (float)auStack_c8._0_4_;
    position_00.fields.y = fStack_1d4 + fStack_84 * (float)auStack_c8._4_4_;
    position_00.fields.z = fVar45 + (float)auStack_178._0_4_ * UVar50.fields.z;
    UVar50 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(pUVar12,position_00,(MethodInfo *)0x0);
    fStack_1a0 = (float)extraout_XMM0_Dc_09;
    auStack_1a8 = (undefined1  [8])UVar50.fields._0_8_;
    fStack_19c = (float)extraout_XMM0_Dd_09;
    if (Il2CppMethodInitialized_075474a6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
      Il2CppMethodInitialized_075474a6 = '\x01';
    }
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    UVar50 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    fVar45 = atan2f((float)auStack_1a8._4_4_ - UVar50.fields.y,(float)auStack_1a8._0_4_ - UVar50.fields.x);
    uVar43 = 0;
    uVar44 = 0;
    UStack_158.zeroVector.fields.x = 0.0;
    UStack_158.zeroVector.fields.y = 0.0;
    UStack_158.zeroVector.fields.z = fVar45 * 57.29578 * 0.017453292;
    pUVar34 = &UStack_158;
    UVar49 = UnityEngine_Quaternion__Internal_FromEulerRad(&pUVar34->zeroVector,(MethodInfo *)0x0);
    pCVar29 = (__this->fields)._human;
    if ((pCVar29 != (Characters_Human_o *)0x0) &&
       (pUVar13 = (pCVar29->fields).Cache, pUVar13 != (Utility_BaseComponentCache_o *)0x0)) {
      fStack_180 = (float)uVar43;
      auStack_188 = (undefined1  [8])UVar49.fields._8_8_;
      fStack_17c = (float)uVar44;
      fStack_170 = (float)extraout_XMM0_Dc_10;
      auStack_178 = (undefined1  [8])UVar49.fields._0_8_;
      fStack_16c = (float)extraout_XMM0_Dd_10;
      pUVar14 = (pUVar13->fields).Transform;
      if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
        UVar50 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
        pCVar29 = (__this->fields)._human;
        if ((pCVar29 != (Characters_Human_o *)0x0) &&
           (pUVar13 = (pCVar29->fields).Cache, pUVar13 != (Utility_BaseComponentCache_o *)0x0)) {
          auStack_c8._0_4_ = UVar50.fields.z;
          UStack_158.leftVector.fields.z = extraout_XMM0_Dc_11;
          UStack_158.leftVector.fields._0_8_ = UVar50.fields._0_8_;
          UStack_158.rightVector.fields.x = extraout_XMM0_Dd_11;
          pUVar14 = (pUVar13->fields).Transform;
          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
            UVar50 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
            fVar45 = UVar50.fields.x;
            fVar40 = UVar50.fields.y;
            if (g_data_0753e72d == '\0') {
              UStack_158.downVector.fields.y = extraout_XMM0_Dc_12;
              UStack_158._32_8_ = UVar50.fields._0_8_;
              UStack_158.downVector.fields.z = extraout_XMM0_Dd_12;
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              g_data_0753e72d = '\x01';
              UStack_158.zeroVector.fields.x = 0.0;
              UStack_158.zeroVector.fields.y = 0.0;
              fVar45 = UStack_158.upVector.fields.z;
              fVar40 = UStack_158.downVector.fields.x;
              fVar41 = UStack_158.downVector.fields.y;
              fVar36 = UStack_158.downVector.fields.z;
            }
            else {
              UStack_158.zeroVector.fields.x = 0.0;
              UStack_158.zeroVector.fields.y = 0.0;
              fVar41 = extraout_XMM0_Dc_12;
              fVar36 = extraout_XMM0_Dd_12;
            }
            UStack_158.zeroVector.fields.x = 0.0;
            UStack_158.zeroVector.fields.y = 0.0;
            if (Il2CppMethodInitialized_0753e729 == '\0') {
              UStack_158.zeroVector.fields.x = 0.0;
              UStack_158.zeroVector.fields.y = 0.0;
              UStack_158.downVector.fields.x = fVar40;
              UStack_158.upVector.fields.z = fVar45;
              UStack_158.downVector.fields.y = fVar41;
              UStack_158.downVector.fields.z = fVar36;
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              Il2CppMethodInitialized_0753e729 = '\x01';
              fVar45 = UStack_158.upVector.fields.z;
              fVar40 = UStack_158.downVector.fields.x;
              fVar41 = UStack_158.downVector.fields.y;
              fVar36 = UStack_158.downVector.fields.z;
            }
            auVar47._0_4_ = position_00.fields.x - fVar45;
            auVar47._4_4_ = position_00.fields.y - fVar40;
            auVar47._8_4_ = (extraout_XMM0_Dc_00 + fVar37) - fVar41;
            auVar47._12_4_ = (extraout_XMM0_Dd_00 + fVar39) - fVar36;
            fVar45 = position_00.fields.z - UVar50.fields.z;
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            }
            fVar37 = fVar45 * fVar45 + auVar47._4_4_ * auVar47._4_4_ + auVar47._0_4_ * auVar47._0_4_;
            if (fVar37 < 0.0) {
              fVar37 = sqrtf(fVar37);
              fVar42 = extraout_XMM0_Db_01;
            }
            else {
              fVar37 = SQRT(fVar37);
            }
            if (1e-05 < fVar37) {
              fVar45 = fVar45 / fVar37;
              auVar22._4_4_ = fVar37;
              auVar22._0_4_ = fVar37;
              auVar22._8_4_ = fVar42;
              auVar22._12_4_ = fVar42;
              auVar48 = divps(auVar47,auVar22);
              UStack_158.zeroVector.fields.x = auVar48._0_4_;
              UStack_158.zeroVector.fields.y = auVar48._4_4_;
            }
            else {
              pUVar34 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar45 = (pUVar34->zeroVector).fields.z;
            }
            uVar3 = (pUVar34->zeroVector).fields.x;
            uVar6 = (pUVar34->zeroVector).fields.y;
            direction_00.fields.y = (float)uVar6;
            direction_00.fields.x = (float)uVar3;
            iVar28 = UnityEngine_LayerMask__get_value
                               (&TypeInfo_Controllers_HumanPlayerController->static_fields->HookMask,
                                (MethodInfo *)0x0);
            UVar50.fields.z = (float)auStack_c8._0_4_;
            UVar50.fields.x = UStack_158.leftVector.fields.x;
            UVar50.fields.y = UStack_158.leftVector.fields.y;
            direction_00.fields.z = fVar45;
            bVar27 = UnityEngine_Physics__Raycast_69d96f0(UVar50,direction_00,120.0,iVar28,(MethodInfo *)0x0);
            rotation.fields.z = (float)auStack_188._0_4_;
            rotation.fields.w = (float)auStack_188._4_4_;
            rotation.fields.x = (float)auStack_178._0_4_;
            rotation.fields.y = (float)auStack_178._4_4_;
            position_01.fields.z = 0.0;
            position_01.fields.x = (float)auStack_1a8._0_4_;
            position_01.fields.y = (float)auStack_1a8._4_4_;
            UI_CursorManager__SetHookArrow(false,position_01,rotation,bVar27,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_05bac912:
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$GetHookArrowRotation
// il2cpp: UnityEngine_Quaternion_o Controllers_HumanPlayerController__GetHookArrowRotation (Controllers_HumanPlayerController_o* __this, bool left, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x5bac970

UnityEngine_Quaternion_o
Controllers_HumanPlayerController__GetHookArrowRotation
          (Controllers_HumanPlayerController_o *__this,bool left,UnityEngine_Vector3_o position,
          MethodInfo *method)

{
  float fVar1;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Quaternion_Fields UVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_Fields local_28;
  undefined1 local_18 [24];
  
  local_18._8_4_ = in_XMM0_Dc;
  local_18._0_8_ = position.fields._0_8_;
  local_18._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_075474a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_075474a6 = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UVar3 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  fVar1 = atan2f((float)local_18._4_4_ - UVar3.fields.y,(float)local_18._0_4_ - UVar3.fields.x);
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_28.z = fVar1 * 57.29578 * 0.017453292;
  UVar2 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar2;
}


// Controllers.HumanPlayerController$$UpdateHookInput
// il2cpp: void Controllers_HumanPlayerController__UpdateHookInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5baca00
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bacba9: and bpl, r13b
// asm:   0x5bacbac: jmp 0x5bacbb7
// asm:   0x5bacbca: and r13b, r15b
// asm:   0x5bacbcd: jmp 0x5bacbd9
// asm:   0x5bacbeb: and r15b, bl
// asm:   0x5bacbee: jmp 0x5bacbfa
// asm:   0x5bacca0: movzx esi, r13b
// asm:   0x5bacca4: jmp 0x5baccff
// asm:   0x5bacf47: jmp 0x5bacdc0

void Controllers_HumanPlayerController__UpdateHookInput
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  byte bVar1;
  Characters_HumanSetup_o *__this_00;
  Characters_HumanStats_o *pCVar2;
  Settings_HumanInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *pSVar4;
  Characters_HookUseable_o *pCVar5;
  Characters_HookUseable_o *pCVar6;
  Characters_BaseUseable_o *pCVar7;
  Characters_BaseUseable_c *pCVar8;
  System_String_o *pSVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  Photon_Pun_PhotonMessageInfo_o PVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  Characters_Human_o *pCVar23;
  bool bVar24;
  byte bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  Photon_Pun_PhotonMessageInfo_Fields local_48;
  
  if (Il2CppMethodInitialized_075474a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075474a7 = '\x01';
  }
  if (inMenu) {
    return;
  }
  pCVar23 = (__this->fields)._human;
  if ((pCVar23 == (Characters_Human_o *)0x0) ||
     (__this_00 = (pCVar23->fields).Setup, __this_00 == (Characters_HumanSetup_o *)0x0)) goto label_05bacf4c;
  bVar17 = Characters_HumanSetup__get_HasODM(__this_00,(MethodInfo *)0x0);
  if (!bVar17) {
    return;
  }
  pCVar23 = (__this->fields)._human;
  if (pCVar23 == (Characters_Human_o *)0x0) goto label_05bacf4c;
  bVar25 = 0;
  if (((pCVar23->fields)._state | 8U) != 0xf) {
    pCVar2 = (pCVar23->fields).Stats;
    if (pCVar2 == (Characters_HumanStats_o *)0x0) goto label_05bacf4c;
    if ((0.0 < (pCVar2->fields).CurrentGas) &&
       (((pCVar23->fields).MountState != 2 || ((pCVar23->fields).CanMountedAttack != false)))) {
      bVar25 = (pCVar23->fields).Dead ^ 1;
    }
  }
  pSVar3 = (__this->fields)._humanInput;
  if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).HookBoth, pSVar4 == (Settings_KeybindSetting_o *)0x0)) goto label_05bacf4c;
  bVar17 = Settings_KeybindSetting__GetKey(pSVar4,false,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._humanInput;
  if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).HookLeft, pSVar4 == (Settings_KeybindSetting_o *)0x0)) goto label_05bacf4c;
  bVar18 = Settings_KeybindSetting__GetKey(pSVar4,false,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._humanInput;
  if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).HookRight, pSVar4 == (Settings_KeybindSetting_o *)0x0)) goto label_05bacf4c;
  bVar19 = Settings_KeybindSetting__GetKey(pSVar4,false,(MethodInfo *)0x0);
  pCVar23 = (__this->fields)._human;
  if ((pCVar23 == (Characters_Human_o *)0x0) ||
     (pCVar5 = (pCVar23->fields).HookLeft, pCVar5 == (Characters_HookUseable_o *)0x0)) goto label_05bacf4c;
  bVar20 = Characters_HookUseable__HasHook(pCVar5,(MethodInfo *)0x0);
  bVar21 = true;
  if (!bVar20) {
    pCVar23 = (__this->fields)._human;
    if ((pCVar23 == (Characters_Human_o *)0x0) ||
       (pCVar5 = (pCVar23->fields).HookRight, pCVar5 == (Characters_HookUseable_o *)0x0)) goto label_05bacf4c;
    bVar21 = Characters_HookUseable__HasHook(pCVar5,(MethodInfo *)0x0);
  }
  pCVar23 = (__this->fields)._human;
  if (pCVar23 == (Characters_Human_o *)0x0) goto label_05bacf4c;
  bVar20 = (pCVar23->fields).CancelHookBothKey == false;
  if (!bVar20 && !bVar17) {
    (pCVar23->fields).CancelHookBothKey = false;
  }
  bVar10 = bVar20;
  bVar11 = bVar17;
  bVar29 = (bVar10 || bVar11) && (bVar20 && bVar17);
  bVar26 = (pCVar23->fields).CancelHookLeftKey == false;
  if (!bVar26 && !bVar18) {
    (pCVar23->fields).CancelHookLeftKey = false;
  }
  bVar12 = bVar26;
  bVar13 = bVar18;
  bVar24 = (bVar12 || bVar13) && (bVar26 && bVar18);
  bVar27 = (pCVar23->fields).CancelHookRightKey == false;
  if (!bVar27 && !bVar19) {
    (pCVar23->fields).CancelHookRightKey = false;
  }
  bVar14 = bVar27;
  bVar15 = bVar19;
  bVar22 = (bVar14 || bVar15) && (bVar27 && bVar19);
  pCVar5 = (pCVar23->fields).HookLeft;
  if (pCVar5 == (Characters_HookUseable_o *)0x0) goto label_05bacf4c;
  (pCVar5->fields).HookBoth = (!bVar12 && !bVar13 || (!bVar26 || !bVar18)) && bVar29;
  pCVar6 = (pCVar23->fields).HookRight;
  if (pCVar6 == (Characters_HookUseable_o *)0x0) goto label_05bacf4c;
  (pCVar6->fields).HookBoth = (!bVar14 && !bVar15 || (!bVar27 || !bVar19)) && bVar29;
  if (bVar25 == 0) {
    bVar24 = false;
  }
  else {
    if (Il2CppMethodInitialized_075474af == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin3Special);
      Il2CppMethodInitialized_075474af = '\x01';
      pCVar23 = (__this->fields)._human;
      if (pCVar23 == (Characters_Human_o *)0x0) goto label_05bacf4c;
    }
    if (((pCVar23->fields)._state == 9) &&
       (pCVar7 = (pCVar23->fields).Special, pCVar7 != (Characters_BaseUseable_o *)0x0)) {
      pCVar8 = pCVar7->klass;
      bVar1 = (TypeInfo_Characters_Spin3Special->_2).typeHierarchyDepth;
      if ((pCVar8->_2).typeHierarchyDepth < bVar1) goto label_05bacc96;
      bVar28 = (pCVar8->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Spin3Special
      ;
      bVar29 = bVar28 || bVar24;
      bVar24 = bVar28 != bVar29;
      if ((bVar29) || (!bVar10 && !bVar11 || (!bVar20 || !bVar17))) goto label_05baccff;
    }
    else {
label_05bacc96:
      if ((!bVar10 && !bVar11 || (!bVar20 || !bVar17)) || (bVar12 || bVar13) && (bVar26 && bVar18))
      goto label_05baccff;
    }
    pCVar6 = (pCVar23->fields).HookLeft;
    if (pCVar6 == (Characters_HookUseable_o *)0x0) goto label_05bacf4c;
    bVar29 = Characters_HookUseable__IsHooked(pCVar6,(MethodInfo *)0x0);
    bVar24 = true;
    if (!bVar29) {
      bVar24 = (bool)(bVar21 ^ 1);
    }
    if (!bVar10 && !bVar11 || (!bVar20 || !bVar17)) goto label_05bacf4c;
  }
label_05baccff:
  (*(pCVar5->klass->vtable)._12_SetInput.methodPtr)(pCVar5,bVar24,(pCVar5->klass->vtable)._12_SetInput.method)
  ;
  pCVar23 = (__this->fields)._human;
  if (pCVar23 == (Characters_Human_o *)0x0) goto label_05bacf4c;
  pCVar5 = (pCVar23->fields).HookRight;
  if (bVar25 == 0) {
    bVar22 = false;
  }
  else {
    if (Il2CppMethodInitialized_075474af == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin3Special);
      Il2CppMethodInitialized_075474af = '\x01';
      pCVar23 = (__this->fields)._human;
      if (pCVar23 == (Characters_Human_o *)0x0) goto label_05bacf4c;
    }
    if (((pCVar23->fields)._state == 9) &&
       (pCVar7 = (pCVar23->fields).Special, pCVar7 != (Characters_BaseUseable_o *)0x0)) {
      pCVar8 = pCVar7->klass;
      bVar25 = (TypeInfo_Characters_Spin3Special->_2).typeHierarchyDepth;
      if ((pCVar8->_2).typeHierarchyDepth < bVar25) goto label_05bacd8e;
      bVar29 = (pCVar8->_2).typeHierarchy[(ulong)bVar25 - 1] ==
               (Il2CppClass *)TypeInfo_Characters_Spin3Special;
      bVar22 = bVar29 != (bVar29 || bVar22);
      if ((bVar29 || (bVar14 || bVar15) && (bVar27 && bVar19)) || (!bVar10 && !bVar11 || (!bVar20 || !bVar17))
         ) goto label_05bacdc0;
    }
    else {
label_05bacd8e:
      if ((!bVar10 && !bVar11 || (!bVar20 || !bVar17)) || (bVar14 || bVar15) && (bVar27 && bVar19))
      goto label_05bacdc0;
    }
    pCVar6 = (pCVar23->fields).HookRight;
    if (pCVar6 == (Characters_HookUseable_o *)0x0) goto label_05bacf4c;
    bVar22 = Characters_HookUseable__IsHooked(pCVar6,(MethodInfo *)0x0);
    bVar22 = bVar21 == false || bVar22;
  }
label_05bacdc0:
  if (pCVar5 != (Characters_HookUseable_o *)0x0) {
    (*(pCVar5->klass->vtable)._12_SetInput.methodPtr)
              (pCVar5,bVar22,(pCVar5->klass->vtable)._12_SetInput.method);
    pCVar23 = (__this->fields)._human;
    if ((pCVar23 != (Characters_Human_o *)0x0) &&
       (pCVar2 = (pCVar23->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
      if ((0.0 < (pCVar2->fields).CurrentGas) ||
         ((!bVar10 && !bVar11 || (!bVar20 || !bVar17)) &&
          ((!bVar12 && !bVar13 || (!bVar26 || !bVar18)) && (!bVar14 && !bVar15 || (!bVar27 || !bVar19))))) {
        return;
      }
      pSVar3 = (__this->fields)._humanInput;
      if ((pSVar3 != (Settings_HumanInputSettings_o *)0x0) &&
         (pSVar4 = (pSVar3->fields).HookLeft, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
        bVar17 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
        if (!bVar17) {
          pSVar3 = (__this->fields)._humanInput;
          if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
             (pSVar4 = (pSVar3->fields).HookRight, pSVar4 == (Settings_KeybindSetting_o *)0x0))
          goto label_05bacf4c;
          bVar17 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
          if (!bVar17) {
            pSVar3 = (__this->fields)._humanInput;
            if ((pSVar3 == (Settings_HumanInputSettings_o *)0x0) ||
               (pSVar4 = (pSVar3->fields).HookBoth, pSVar4 == (Settings_KeybindSetting_o *)0x0))
            goto label_05bacf4c;
            bVar17 = Settings_KeybindSetting__GetKeyDown(pSVar4,false,(MethodInfo *)0x0);
            if (!bVar17) {
              return;
            }
          }
        }
        pCVar23 = (__this->fields)._human;
        if ((TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
        }
        pSVar9 = TypeInfo_Characters_HumanSounds->static_fields->NoGas;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        Utility_Util__CreateLocalPhotonInfo((Photon_Pun_PhotonMessageInfo_o *)&local_48,(MethodInfo *)0x0);
        if (pCVar23 != (Characters_Human_o *)0x0) {
          PVar16.fields.Sender = local_48.Sender;
          PVar16.fields.timeInt = local_48.timeInt;
          PVar16.fields._4_4_ = local_48._4_4_;
          PVar16.fields.photonView = local_48.photonView;
          (*(pCVar23->klass->vtable)._86_PlaySoundRPC.methodPtr)
                    (pCVar23,pSVar9,PVar16,(pCVar23->klass->vtable)._86_PlaySoundRPC.method);
          return;
        }
      }
    }
  }
label_05bacf4c:
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$TestScore
// il2cpp: void Controllers_HumanPlayerController__TestScore (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5bacfe0

void Controllers_HumanPlayerController__TestScore
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_HumanInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  UI_InGameMenu_o *pUVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_075474a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"test");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_075474a8 = '\x01';
  }
  pSVar1 = (__this->fields)._humanInput;
  if ((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).HookLeft, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05bad0e1;
  bVar4 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05bad0e1;
    UI_InGameMenu__ShowKillFeed
              (pUVar3,"test","test",100,"Thunderspear",(MethodInfo *)0x0)
    ;
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05bad0e1;
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
label_05bad0e1:
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$UpdateActionInput
// il2cpp: void Controllers_HumanPlayerController__UpdateActionInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5bad0f0
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bad600: jmp 0x5badc0e
// asm:   0x5bad617: test r15b, r15b
// asm:   0x5bad6b6: jmp 0x5badc78
// asm:   0x5bad6ce: mov rbx, rsi
// asm:   0x5bad6d1: je 0x5bad709
// asm:   0x5bad709: mov eax, r8d
// asm:   0x5bad70c: jmp 0x5bad5b9
// asm:   0x5bad7d0: jmp 0x5badc0e
// asm:   0x5bad950: mov eax, r8d

void Controllers_HumanPlayerController__UpdateActionInput
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  Characters_Human_o **ppCVar1;
  byte bVar2;
  byte bVar3;
  uint item;
  int iVar4;
  Characters_Human_o *pCVar5;
  System_Collections_Generic_HashSet_HumanState__o *__this_00;
  Settings_HumanInputSettings_o *pSVar6;
  Settings_KeybindSetting_o *pSVar7;
  Characters_ThunderspearWeapon_o *__this_01;
  Il2CppClass **ppIVar8;
  UI_BaseMenu_o *pUVar9;
  UI_ChatPanel_o *__this_02;
  Characters_BaseUseable_o *pCVar10;
  Characters_BaseUseable_c *pCVar11;
  Characters_Horse_o *pCVar12;
  UnityEngine_Transform_o *pUVar13;
  Utility_BaseComponentCache_o *pUVar14;
  Photon_Pun_PhotonView_o *__this_03;
  bool bVar15;
  bool bVar16;
  UI_InGameMenu_o *pUVar17;
  System_Object_array *parameters;
  Settings_KeybindSetting_o **ppSVar18;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *pMVar19;
  MethodInfo *__this_04;
  byte bVar20;
  byte bVar21;
  float fVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o UVar24;
  float fStack_48;
  
  if (Il2CppMethodInitialized_075474a9 == '\0') {
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
    Il2CppMethodInitialized_075474a9 = '\x01';
  }
  pMVar19 = (MethodInfo *)(ulong)inMenu;
  bVar21 = 0;
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,inMenu,(MethodInfo *)0x0);
  Controllers_HumanPlayerController__UpdateHookInput(__this,inMenu,method_00);
  Controllers_HumanPlayerController__UpdateReelInput(__this,false,method_01);
  Controllers_HumanPlayerController__UpdateDashInput(__this,inMenu,method_02);
  Controllers_HumanPlayerController__UpdateSheatheInput(__this,inMenu,method_03);
  pCVar5 = (__this->fields)._human;
  if (pCVar5 == (Characters_Human_o *)0x0) goto label_05badc78;
  ppCVar1 = &(__this->fields)._human;
  if ((pCVar5->fields).IsAttackableState != false) {
    __this_00 = (__this->fields)._illegalWeaponStates;
    if (__this_00 == (System_Collections_Generic_HashSet_HumanState__o *)0x0) goto label_05badc78;
    item = (pCVar5->fields)._state;
    pMVar19 = (MethodInfo *)(ulong)item;
    bVar15 = System_Collections_Generic_HashSet_Int32Enum___Contains
                       ((System_Collections_Generic_HashSet_T__o *)__this_00,item,
                        (MethodInfo_4FADAC0 *)
                        MethodInfo_System_Collections_Generic_HashSet_HumanState_Contains);
    if ((!bVar15) && (!inMenu)) {
      pCVar5 = *ppCVar1;
      if (pCVar5 == (Characters_Human_o *)0x0) goto label_05badc78;
      if ((pCVar5->fields).Dead == false) {
        bVar21 = (pCVar5->fields).Sheathed ^ 1;
      }
    }
  }
  bVar15 = Controllers_HumanPlayerController__SwapTSInput(__this,pMVar19);
  pSVar6 = (__this->fields)._humanInput;
  if (bVar15) {
    if (pSVar6 == (Settings_HumanInputSettings_o *)0x0) goto label_05badc78;
    ppSVar18 = &(pSVar6->fields).AttackSpecial;
  }
  else {
    if (pSVar6 == (Settings_HumanInputSettings_o *)0x0) goto label_05badc78;
    ppSVar18 = &(pSVar6->fields).AttackDefault;
  }
  __this_04 = (MethodInfo *)*ppSVar18;
  bVar15 = Controllers_HumanPlayerController__SwapTSInput(__this,pMVar19);
  pSVar6 = (__this->fields)._humanInput;
  if (bVar15) {
    if (pSVar6 == (Settings_HumanInputSettings_o *)0x0) goto label_05badc78;
    ppSVar18 = &(pSVar6->fields).AttackDefault;
  }
  else {
    if (pSVar6 == (Settings_HumanInputSettings_o *)0x0) goto label_05badc78;
    ppSVar18 = &(pSVar6->fields).AttackSpecial;
  }
  pCVar5 = *ppCVar1;
  if (pCVar5 == (Characters_Human_o *)0x0) goto label_05badc78;
  pSVar7 = *ppSVar18;
  (pCVar5->fields)._gunArmAim = false;
  __this_01 = (Characters_ThunderspearWeapon_o *)(pCVar5->fields).Weapon;
  if (bVar21 == 0) {
    if (__this_01 == (Characters_ThunderspearWeapon_o *)0x0) goto label_05badc78;
    pMVar19 = (MethodInfo *)0x0;
    (*(__this_01->klass->vtable)._12_SetInput.methodPtr)
              (__this_01,false,(__this_01->klass->vtable)._12_SetInput.method);
  }
  else {
    if (__this_01 != (Characters_ThunderspearWeapon_o *)0x0) {
      bVar21 = (__this_01->klass->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
      if ((((bVar2 <= bVar21) &&
           (ppIVar8 = (__this_01->klass->_2).typeHierarchy,
           ppIVar8[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) &&
          ((__this_01->fields).RoundLeft == 0)) &&
         (((bVar2 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth, bVar21 < bVar2 ||
           (ppIVar8[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) ||
          (bVar15 = Characters_ThunderspearWeapon__HasActiveProjectile(__this_01,(MethodInfo *)0x0), !bVar15))
         )) {
        if (__this_04 == (MethodInfo *)0x0) goto label_05badc78;
        pMVar19 = (MethodInfo *)0x0;
        bVar15 = Settings_KeybindSetting__GetKeyDown
                           ((Settings_KeybindSetting_o *)__this_04,false,(MethodInfo *)0x0);
        if (bVar15) {
          pCVar5 = *ppCVar1;
          if (pCVar5 == (Characters_Human_o *)0x0) goto label_05badc78;
          if ((pCVar5->fields)._state == 0) {
            pMVar19 = (MethodInfo *)0x0;
            Characters_Human__Reload(pCVar5,(MethodInfo *)0x0);
          }
        }
        goto label_05bad483;
      }
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar9 == (UI_BaseMenu_o *)0x0) goto label_05badc78;
    bVar21 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((pUVar9->klass->_2).typeHierarchyDepth < bVar21) ||
       ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar21 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_02 = (UI_ChatPanel_o *)(*(uint64_t *)((char *)pUVar9 + 0xd0));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar15 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar15) {
      if (__this_02 == (UI_ChatPanel_o *)0x0) goto label_05badc78;
      bVar15 = UI_ChatPanel__IsPointerOverChatUI(__this_02,(MethodInfo *)0x0);
      if (bVar15) {
        if ((*ppCVar1 != (Characters_Human_o *)0x0) &&
           (pCVar10 = ((*ppCVar1)->fields).Weapon, pCVar10 != (Characters_BaseUseable_o *)0x0)) {
          (*(pCVar10->klass->vtable)._12_SetInput.methodPtr)
                    (pCVar10,false,(pCVar10->klass->vtable)._12_SetInput.method);
          return;
        }
        goto label_05badc78;
      }
    }
    if ((*ppCVar1 == (Characters_Human_o *)0x0) ||
       (pCVar10 = ((*ppCVar1)->fields).Weapon, pCVar10 == (Characters_BaseUseable_o *)0x0)) goto label_05badc78;
    pCVar11 = pCVar10->klass;
    bVar21 = (TypeInfo_Characters_AHSSWeapon->_2).typeHierarchyDepth;
    if (((pCVar11->_2).typeHierarchyDepth < bVar21) ||
       ((pCVar11->_2).typeHierarchy[(ulong)bVar21 - 1] != (Il2CppClass *)TypeInfo_Characters_AHSSWeapon)) {
      (*(pCVar11->vtable)._11_ReadInput.methodPtr)
                (pCVar10,(Settings_KeybindSetting_o *)__this_04,(pCVar11->vtable)._11_ReadInput.method);
      pMVar19 = __this_04;
      goto label_05bad483;
    }
    if (__this_04 == (MethodInfo *)0x0) goto label_05badc78;
    bVar15 = Settings_KeybindSetting__Contains_5a570b0
                       ((Settings_KeybindSetting_o *)__this_04,0x143,(MethodInfo *)0x0);
    if (bVar15) {
      pUVar17 = (__this->fields)._inGameMenu;
      if (pUVar17 == (UI_InGameMenu_o *)0x0) goto label_05badc78;
      if ((pUVar17->fields).SkipAHSSInput == false) goto label_05bad743;
label_05bad791:
      (pUVar17->fields).SkipAHSSInput = false;
    }
    else {
label_05bad743:
      bVar15 = Settings_KeybindSetting__GetKeyUp
                         ((Settings_KeybindSetting_o *)__this_04,false,(MethodInfo *)0x0);
      pCVar5 = *ppCVar1;
      if (bVar15) {
        if ((pCVar5 == (Characters_Human_o *)0x0) ||
           (pCVar10 = (pCVar5->fields).Weapon, pCVar10 == (Characters_BaseUseable_o *)0x0)) goto label_05badc78;
        (*(pCVar10->klass->vtable)._12_SetInput.methodPtr)
                  (pCVar10,true,(pCVar10->klass->vtable)._12_SetInput.method);
        pUVar17 = (__this->fields)._inGameMenu;
        if (pUVar17 == (UI_InGameMenu_o *)0x0) goto label_05badc78;
        goto label_05bad791;
      }
      if ((pCVar5 == (Characters_Human_o *)0x0) ||
         (pCVar10 = (pCVar5->fields).Weapon, pCVar10 == (Characters_BaseUseable_o *)0x0)) goto label_05badc78;
      (*(pCVar10->klass->vtable)._12_SetInput.methodPtr)
                (pCVar10,false,(pCVar10->klass->vtable)._12_SetInput.method);
    }
    pCVar5 = *ppCVar1;
    pMVar19 = (MethodInfo *)0x0;
    bVar16 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this_04,false,(MethodInfo *)0x0);
    bVar15 = true;
    if (!bVar16) {
      if ((*ppCVar1 == (Characters_Human_o *)0x0) ||
         (pCVar10 = ((*ppCVar1)->fields).Weapon, pCVar10 == (Characters_BaseUseable_o *)0x0))
      goto label_05badc78;
      bVar15 = (pCVar10->fields).IsActive;
    }
    if (pCVar5 == (Characters_Human_o *)0x0) goto label_05badc78;
    (pCVar5->fields)._gunArmAim = bVar15;
  }
label_05bad483:
  if (*ppCVar1 == (Characters_Human_o *)0x0) goto label_05badc78;
  if (((*ppCVar1)->fields).Special != (Characters_BaseUseable_o *)0x0) {
    bVar15 = Controllers_HumanPlayerController__IsSheathedWeaponSpecial(__this,pMVar19);
    pCVar5 = (__this->fields)._human;
    if (pCVar5 == (Characters_Human_o *)0x0) goto label_05badc78;
    bVar16 = (pCVar5->fields).IsAttackableState;
    bVar21 = 0;
    pCVar10 = (pCVar5->fields).Special;
    if (bVar16 != false && !bVar15) {
      if (pCVar10 == (Characters_BaseUseable_o *)0x0) {
label_05bad52f:
        if ((pCVar5->fields)._state == 7) goto label_05bad564;
      }
      else {
        pCVar11 = pCVar10->klass;
        bVar2 = (pCVar11->_2).typeHierarchyDepth;
        bVar20 = (TypeInfo_Characters_EscapeSpecial->_2).typeHierarchyDepth;
        if (((bVar2 < bVar20) ||
            ((pCVar11->_2).typeHierarchy[(ulong)bVar20 - 1] !=
             (Il2CppClass *)TypeInfo_Characters_EscapeSpecial)) &&
           ((bVar20 = (TypeInfo_Characters_ShifterTransformSpecial->_2).typeHierarchyDepth, bVar2 < bVar20 ||
            ((pCVar11->_2).typeHierarchy[(ulong)bVar20 - 1] !=
             (Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial)))) goto label_05bad52f;
      }
      if (((((pCVar5->fields).CarryState != 1) && (iVar4 = (pCVar5->fields)._state, iVar4 != 1)) &&
          (iVar4 != 8)) && ((iVar4 != 9 && (!inMenu)))) {
        bVar21 = (pCVar5->fields).Dead ^ 1;
      }
    }
label_05bad564:
    if (pCVar10 == (Characters_BaseUseable_o *)0x0) goto label_05badc78;
    pCVar11 = pCVar10->klass;
    bVar2 = (pCVar11->_2).typeHierarchyDepth;
    bVar20 = (TypeInfo_Characters_BaseHoldAttackSpecial->_2).typeHierarchyDepth;
    if ((bVar2 < bVar20) ||
       (ppIVar8 = (pCVar11->_2).typeHierarchy,
       (ppIVar8[(ulong)bVar20 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseHoldAttackSpecial ||
       bVar16 == false) || bVar15)) {
label_05bad5b3:
      bVar20 = 0;
    }
    else {
      iVar4 = (pCVar5->fields)._state;
      bVar20 = 0;
      if ((iVar4 != 7) && (iVar4 != 8)) {
        if (iVar4 == 1) {
          bVar3 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth;
          if (bVar2 < bVar3) goto label_05bad5b3;
          if (ppIVar8[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_StockSpecial) goto label_05bad5b9;
        }
        if (((pCVar5->fields).CarryState != 1) && (!inMenu)) {
          bVar20 = (pCVar5->fields).Dead ^ 1;
        }
      }
    }
label_05bad5b9:
    if (bVar21 == 0 && bVar20 == 0) {
      (*(pCVar11->vtable)._12_SetInput.methodPtr)(pCVar10,false,(pCVar11->vtable)._12_SetInput.method);
    }
    else {
      bVar21 = (TypeInfo_Characters_AHSSTwinShot->_2).typeHierarchyDepth;
      if ((bVar2 < bVar21) ||
         ((pCVar11->_2).typeHierarchy[(ulong)bVar21 - 1] != (Il2CppClass *)TypeInfo_Characters_AHSSTwinShot))
      {
        (*(pCVar11->vtable)._11_ReadInput.methodPtr)(pCVar10,pSVar7,(pCVar11->vtable)._11_ReadInput.method);
      }
      else {
        if (pSVar7 == (Settings_KeybindSetting_o *)0x0) goto label_05badc78;
        bVar15 = Settings_KeybindSetting__GetKeyUp(pSVar7,false,(MethodInfo *)0x0);
        (*(pCVar10->klass->vtable)._12_SetInput.methodPtr)
                  (pCVar10,bVar15,(pCVar10->klass->vtable)._12_SetInput.method);
      }
    }
  }
  if (inMenu) {
    return;
  }
  pCVar5 = *ppCVar1;
  if (pCVar5 == (Characters_Human_o *)0x0) goto label_05badc78;
  if ((pCVar5->fields).Dead != false) {
    return;
  }
  if ((pCVar5->fields)._state == 0xf) {
    return;
  }
  iVar4 = (pCVar5->fields).MountState;
  if (iVar4 == 1) {
    pSVar6 = (__this->fields)._humanInput;
    if ((pSVar6 == (Settings_HumanInputSettings_o *)0x0) ||
       (pSVar7 = (pSVar6->fields).HorseMount, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_05badc78;
    bVar15 = Settings_KeybindSetting__GetKeyDown(pSVar7,false,(MethodInfo *)0x0);
    if (bVar15) {
      pCVar5 = *ppCVar1;
      if (pCVar5 == (Characters_Human_o *)0x0) goto label_05badc78;
      if ((pCVar5->fields)._state != 0) goto label_05bad8fa;
      Characters_Human__Unmount(pCVar5,false,(MethodInfo *)0x0);
    }
    else {
label_05bad8fa:
      pSVar6 = (__this->fields)._humanInput;
      if ((pSVar6 == (Settings_HumanInputSettings_o *)0x0) ||
         (pSVar7 = (pSVar6->fields).HorseJump, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_05badc78;
      bVar15 = Settings_KeybindSetting__GetKeyDown(pSVar7,false,(MethodInfo *)0x0);
      if (bVar15) {
        if ((*ppCVar1 == (Characters_Human_o *)0x0) ||
           (pCVar12 = ((*ppCVar1)->fields).Horse, pCVar12 == (Characters_Horse_o *)0x0)) goto label_05badc78;
        Characters_Horse__Jump(pCVar12,(MethodInfo *)0x0);
      }
    }
    pCVar5 = *ppCVar1;
    if (pCVar5 != (Characters_Human_o *)0x0) {
      if ((pCVar5->fields)._state != 0) {
        return;
      }
      if ((pCVar5->fields).IsAttackableState == false) {
        return;
      }
      pSVar6 = (__this->fields)._humanInput;
      if ((pSVar6 != (Settings_HumanInputSettings_o *)0x0) &&
         (pSVar7 = (pSVar6->fields).Reload, pSVar7 != (Settings_KeybindSetting_o *)0x0)) {
        bVar15 = Settings_KeybindSetting__GetKeyDown(pSVar7,false,(MethodInfo *)0x0);
        if (!bVar15) {
          return;
        }
        if (*ppCVar1 != (Characters_Human_o *)0x0) {
          Characters_Human__Reload(*ppCVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
    goto label_05badc78;
  }
  if (iVar4 != 0) {
    return;
  }
  bVar15 = Characters_Human__CanJump(pCVar5,(MethodInfo *)0x0);
  if (bVar15) {
    pSVar6 = (__this->fields)._humanInput;
    if ((pSVar6 == (Settings_HumanInputSettings_o *)0x0) ||
       (pSVar7 = (pSVar6->fields).Jump, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_05badc78;
    bVar15 = Settings_KeybindSetting__GetKeyDown(pSVar7,false,(MethodInfo *)0x0);
    if (!bVar15) {
      pSVar6 = (__this->fields)._humanInput;
      if ((pSVar6 == (Settings_HumanInputSettings_o *)0x0) ||
         (pSVar7 = (pSVar6->fields).HorseMount, pSVar7 == (Settings_KeybindSetting_o *)0x0))
      goto label_05badc78;
      bVar15 = Settings_KeybindSetting__GetKeyDown(pSVar7,false,(MethodInfo *)0x0);
      if (bVar15) {
        if (*ppCVar1 == (Characters_Human_o *)0x0) goto label_05badc78;
        pCVar12 = ((*ppCVar1)->fields).Horse;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar15 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pCVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar15) {
          pCVar5 = *ppCVar1;
          if (pCVar5 == (Characters_Human_o *)0x0) goto label_05badc78;
          if ((pCVar5->fields).MountState == 0) {
            pCVar12 = (pCVar5->fields).Horse;
            if (((pCVar12 == (Characters_Horse_o *)0x0) ||
                (pUVar14 = (pCVar12->fields).Cache, pUVar14 == (Utility_BaseComponentCache_o *)0x0)) ||
               (pUVar13 = (pUVar14->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0))
            goto label_05badc78;
            UVar23 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
            if (((*ppCVar1 == (Characters_Human_o *)0x0) ||
                (pUVar14 = ((*ppCVar1)->fields).Cache, pUVar14 == (Utility_BaseComponentCache_o *)0x0)) ||
               (pUVar13 = (pUVar14->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0))
            goto label_05badc78;
            UVar24 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
            fStack_48 = UVar23.fields.x;
            fVar22 = (float)il2cpp_runtime_helper_05956b50(fStack_48,UVar23.fields.z,UVar24.fields.x,UVar24.fields.z,0);
            if (fVar22 < 15.0) {
              pCVar5 = *ppCVar1;
              if (pCVar5 == (Characters_Human_o *)0x0) goto label_05badc78;
              if ((pCVar5->fields).HasDirection == false) {
                Characters_Human__MountHorse(pCVar5,(MethodInfo *)0x0);
                pCVar5 = *ppCVar1;
                goto joined_r0x05badc72;
              }
            }
          }
        }
      }
      pSVar6 = (__this->fields)._humanInput;
      if ((pSVar6 == (Settings_HumanInputSettings_o *)0x0) ||
         (pSVar7 = (pSVar6->fields).Dodge, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_05badc78;
      bVar15 = Settings_KeybindSetting__GetKeyDown(pSVar7,false,(MethodInfo *)0x0);
      if (bVar15) {
        pCVar5 = *ppCVar1;
        if (pCVar5 == (Characters_Human_o *)0x0) goto label_05badc78;
        fVar22 = (pCVar5->fields).TargetAngle;
        if ((pCVar5->fields).HasDirection != false) {
          fVar22 = fVar22 + 180.0;
        }
        Characters_Human__Dodge(pCVar5,fVar22,(MethodInfo *)0x0);
      }
      goto label_05badafd;
    }
    if (*ppCVar1 == (Characters_Human_o *)0x0) goto label_05badc78;
    Characters_Human__Jump(*ppCVar1,(MethodInfo *)0x0);
    pCVar5 = *ppCVar1;
  }
  else {
label_05badafd:
    pCVar5 = *ppCVar1;
  }
joined_r0x05badc72:
  if (pCVar5 != (Characters_Human_o *)0x0) {
    if ((pCVar5->fields)._state == 0) {
      pSVar6 = (__this->fields)._humanInput;
      if ((pSVar6 == (Settings_HumanInputSettings_o *)0x0) ||
         (pSVar7 = (pSVar6->fields).Reload, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_05badc78;
      bVar15 = Settings_KeybindSetting__GetKeyDown(pSVar7,false,(MethodInfo *)0x0);
      if (bVar15) {
        if (*ppCVar1 == (Characters_Human_o *)0x0) goto label_05badc78;
        Characters_Human__Reload(*ppCVar1,(MethodInfo *)0x0);
      }
    }
    if (*ppCVar1 != (Characters_Human_o *)0x0) {
      if (((*ppCVar1)->fields).CarryState != 1) {
        return;
      }
      pSVar6 = (__this->fields)._humanInput;
      if ((pSVar6 != (Settings_HumanInputSettings_o *)0x0) &&
         (pSVar7 = (pSVar6->fields).HorseMount, pSVar7 != (Settings_KeybindSetting_o *)0x0)) {
        bVar15 = Settings_KeybindSetting__GetKeyDown(pSVar7,false,(MethodInfo *)0x0);
        if (!bVar15) {
          return;
        }
        if ((*ppCVar1 != (Characters_Human_o *)0x0) &&
           (pUVar14 = ((*ppCVar1)->fields).Cache, pUVar14 != (Utility_BaseComponentCache_o *)0x0)) {
          __this_03 = (pUVar14->fields).PhotonView;
          parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
          if (__this_03 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_03,"UncarryRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_05badc78:
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$SwapTSInput
// il2cpp: bool Controllers_HumanPlayerController__SwapTSInput (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baf110

bool Controllers_HumanPlayerController__SwapTSInput
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Characters_BaseUseable_c *pCVar4;
  Settings_HumanInputSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  
  if (Il2CppMethodInitialized_075474aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ThunderspearWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075474aa = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
label_05baf19d:
    ThrowNullReferenceException();
  }
  pCVar3 = (pCVar2->fields).Weapon;
  if (pCVar3 != (Characters_BaseUseable_o *)0x0) {
    pCVar4 = pCVar3->klass;
    bVar1 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar4->_2).typeHierarchyDepth) &&
       ((pCVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)
       ) {
      pSVar5 = (__this->fields)._humanInput;
      if ((pSVar5 != (Settings_HumanInputSettings_o *)0x0) &&
         (pSVar6 = (pSVar5->fields).SwapTSAttackSpecial, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
        return (pSVar6->fields)._value != false;
      }
      goto label_05baf19d;
    }
  }
  return false;
}


// Controllers.HumanPlayerController$$GetAttackInput
// il2cpp: Settings_KeybindSetting_o* Controllers_HumanPlayerController__GetAttackInput (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baef70

Settings_KeybindSetting_o *
Controllers_HumanPlayerController__GetAttackInput
          (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_HumanInputSettings_o *pSVar1;
  bool bVar2;
  
  bVar2 = Controllers_HumanPlayerController__SwapTSInput(__this,method);
  pSVar1 = (__this->fields)._humanInput;
  if (bVar2) {
    if (pSVar1 != (Settings_HumanInputSettings_o *)0x0) {
      return (pSVar1->fields).AttackSpecial;
    }
  }
  else if (pSVar1 != (Settings_HumanInputSettings_o *)0x0) {
    return (pSVar1->fields).AttackDefault;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$GetSpecialInput
// il2cpp: Settings_KeybindSetting_o* Controllers_HumanPlayerController__GetSpecialInput (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baefb0

Settings_KeybindSetting_o *
Controllers_HumanPlayerController__GetSpecialInput
          (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_HumanInputSettings_o *pSVar1;
  bool bVar2;
  
  bVar2 = Controllers_HumanPlayerController__SwapTSInput(__this,method);
  pSVar1 = (__this->fields)._humanInput;
  if (bVar2) {
    if (pSVar1 != (Settings_HumanInputSettings_o *)0x0) {
      return (pSVar1->fields).AttackDefault;
    }
  }
  else if (pSVar1 != (Settings_HumanInputSettings_o *)0x0) {
    return (pSVar1->fields).AttackSpecial;
  }
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$IsSheathedWeaponSpecial
// il2cpp: bool Controllers_HumanPlayerController__IsSheathedWeaponSpecial (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baeff0

bool Controllers_HumanPlayerController__IsSheathedWeaponSpecial
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_Human_o *pCVar3;
  Characters_BaseUseable_o *pCVar4;
  Characters_BaseUseable_c *pCVar5;
  
  if (Il2CppMethodInitialized_075474ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSTwinShot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseAttackSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DownStrikeSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
    Il2CppMethodInitialized_075474ab = '\x01';
  }
  pCVar3 = (__this->fields)._human;
  if (pCVar3 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((pCVar3->fields).Sheathed == false) ||
     (pCVar4 = (pCVar3->fields).Special, pCVar4 == (Characters_BaseUseable_o *)0x0)) {
    return false;
  }
  pCVar5 = pCVar4->klass;
  bVar1 = (pCVar5->_2).typeHierarchyDepth;
  bVar2 = (TypeInfo_Characters_BaseAttackSpecial->_2).typeHierarchyDepth;
  if ((((bVar2 <= bVar1) &&
       ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseAttackSpecial))
      || ((bVar2 = (TypeInfo_Characters_DownStrikeSpecial->_2).typeHierarchyDepth, bVar2 <= bVar1 &&
          ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] ==
           (Il2CppClass *)TypeInfo_Characters_DownStrikeSpecial)))) ||
     ((bVar2 = (TypeInfo_Characters_StockSpecial->_2).typeHierarchyDepth, bVar2 <= bVar1 &&
      ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_StockSpecial)))) {
    return true;
  }
  bVar2 = (TypeInfo_Characters_AHSSTwinShot->_2).typeHierarchyDepth;
  if (bVar1 < bVar2) {
    return false;
  }
  return (pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_AHSSTwinShot;
}


// Controllers.HumanPlayerController$$UpdateSheatheInput
// il2cpp: void Controllers_HumanPlayerController__UpdateSheatheInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5baeed0

void Controllers_HumanPlayerController__UpdateSheatheInput
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Settings_HumanInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  Settings_KeybindSetting_o **ppSVar4;
  undefined7 in_register_00000031;
  
  if ((int)(MethodInfo *)CONCAT71(in_register_00000031,inMenu) != 0) {
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
    bVar3 = Controllers_HumanPlayerController__SwapTSInput
                      (__this,(MethodInfo *)CONCAT71(in_register_00000031,inMenu));
    pSVar2 = (__this->fields)._humanInput;
    if (bVar3) {
      if (pSVar2 == (Settings_HumanInputSettings_o *)0x0) goto label_05baef60;
      ppSVar4 = &(pSVar2->fields).AttackSpecial;
    }
    else {
      if (pSVar2 == (Settings_HumanInputSettings_o *)0x0) goto label_05baef60;
      ppSVar4 = &(pSVar2->fields).AttackDefault;
    }
    if (*ppSVar4 != (Settings_KeybindSetting_o *)0x0) {
      bVar3 = Settings_KeybindSetting__GetKeyDown(*ppSVar4,false,(MethodInfo *)0x0);
      if (!bVar3) {
        pSVar2 = (__this->fields)._humanInput;
        if ((pSVar2 == (Settings_HumanInputSettings_o *)0x0) ||
           (__this_00 = (pSVar2->fields).Reload, __this_00 == (Settings_KeybindSetting_o *)0x0))
        goto label_05baef60;
        bVar3 = Settings_KeybindSetting__GetKeyDown(__this_00,false,(MethodInfo *)0x0);
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
label_05baef60:
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$ToggleUI
// il2cpp: void Controllers_HumanPlayerController__ToggleUI (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baf1b0

void Controllers_HumanPlayerController__ToggleUI
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Canvas_o *__this_00;
  UnityEngine_Canvas_o *__this_01;
  
  if (Il2CppMethodInitialized_075474ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultMenu(Clone)");
    Il2CppMethodInitialized_075474ac = '\x01';
  }
  x = (UnityEngine_Object_o *)UnityEngine_GameObject__Find("DefaultMenu(Clone)",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x != (UnityEngine_Object_o *)0x0) {
      __this_00 = UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)x,
                             (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
      __this_01 = UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)x,
                             (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
      if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
        bVar1 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this_01,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,!bVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Controllers.HumanPlayerController$$UpdateReelInput
// il2cpp: void Controllers_HumanPlayerController__UpdateReelInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5badc90
// eh: try 0x5bade54..0x5bae146 -> pad 0x5bae1c2 (+18 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5bae185..0x5bae18a -> pad 0x5bae1ac cleanup
// eh: try 0x5bae1af..0x5bae1b9 -> pad 0x5bae268 catch (...) [compiler noexcept guard]
// eh: try 0x5bae1da..0x5bae1df -> pad 0x5bae1fe cleanup
// eh: try 0x5bae201..0x5bae20b -> pad 0x5bae268 catch (...) [compiler noexcept guard]
// eh: try 0x5bae229..0x5bae22e -> pad 0x5bae253 cleanup
// eh: try 0x5bae256..0x5bae260 -> pad 0x5bae268 catch (...) [compiler noexcept guard]
// asm: 80 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bade7f: jmp 0x5bade50
// asm:   0x5badf50: jmp 0x5badf00
// asm:   0x5bae069: nop dword ptr [rax]
// asm:   0x5bae146: jmp 0x5bae16d
// asm:   0x5bae148: jmp 0x5bae16d
// asm:   0x5bae14a: jmp 0x5bae16d
// asm:   0x5bae14c: jmp 0x5bae16d
// asm:   0x5bae14e: jmp 0x5bae16d
// asm:   0x5bae150: jmp 0x5bae211
// asm:   0x5bae155: jmp 0x5bae211
// asm:   0x5bae15a: jmp 0x5bae211
// asm:   0x5bae15f: jmp 0x5bae16d
// asm:   0x5bae161: jmp 0x5bae16d
// asm:   0x5bae163: jmp 0x5bae211
// asm:   0x5bae168: jmp 0x5bae211
// asm:   0x5bae16d: mov rbx, rax
// asm:   0x5bae170: cmp edx, 1
// asm:   0x5bae173: jne 0x5bae1af
// asm:   0x5bae175: mov rdi, rbx
// asm:   0x5bae178: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bae17d: mov rbx, qword ptr [rax]
// asm:   0x5bae180: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5bae185: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bae18a: lea rax, [rip + 0x16dffef]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x5bae191: mov rsi, qword ptr [rax]
// asm:   0x5bae194: lea rdi, [rsp + 0x10]
// asm:   0x5bae199: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5bae19e: test rbx, rbx
// asm:   0x5bae1a1: je 0x5badff8
// asm:   0x5bae1a7: jmp 0x5bae24b
// asm:   0x5bae1ac: mov rbx, rax
// asm:   0x5bae1af: lea rdi, [rsp + 0x30]
// asm:   0x5bae1b4: call 0x2fd8720  ; il2cpp_runtime_helper_02fd8720()
// asm:   0x5bae1b9: jmp 0x5bae260
// asm:   0x5bae1be: jmp 0x5bae1c2
// asm:   0x5bae1c0: jmp 0x5bae1c2
// asm:   0x5bae1c2: mov rbx, rax
// asm:   0x5bae1c5: cmp edx, 1
// asm:   0x5bae1c8: jne 0x5bae201
// asm:   0x5bae1ca: mov rdi, rbx
// asm:   0x5bae1cd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bae1d2: mov rbx, qword ptr [rax]
// asm:   0x5bae1d5: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5bae1da: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bae1df: lea rax, [rip + 0x16dff9a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x5bae1e6: mov rsi, qword ptr [rax]
// asm:   0x5bae1e9: lea rdi, [rsp + 0x10]
// asm:   0x5bae1ee: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5bae1f3: test rbx, rbx
// asm:   0x5bae1f6: je 0x5bade95
// asm:   0x5bae1fc: jmp 0x5bae24b
// asm:   0x5bae1fe: mov rbx, rax
// asm:   0x5bae201: lea rdi, [rsp + 0x30]
// asm:   0x5bae206: call 0x2fd86f0  ; il2cpp_runtime_helper_02fd86f0()
// asm:   0x5bae20b: jmp 0x5bae260
// asm:   0x5bae20d: jmp 0x5bae211
// asm:   0x5bae20f: jmp 0x5bae211
// asm:   0x5bae211: mov rbx, rax
// asm:   0x5bae214: cmp edx, 1
// asm:   0x5bae217: jne 0x5bae256
// asm:   0x5bae219: mov rdi, rbx
// asm:   0x5bae21c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bae221: mov rbx, qword ptr [rax]
// asm:   0x5bae224: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5bae229: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bae22e: lea rax, [rip + 0x16dff4b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x5bae235: mov rsi, qword ptr [rax]
// asm:   0x5bae238: lea rdi, [rsp + 0x10]
// asm:   0x5bae23d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5bae242: test rbx, rbx
// asm:   0x5bae245: je 0x5bae10f
// asm:   0x5bae24b: mov rdi, rbx
// asm:   0x5bae24e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5bae253: mov rbx, rax
// asm:   0x5bae256: lea rdi, [rsp + 0x30]
// asm:   0x5bae25b: call 0x2fd8750  ; il2cpp_runtime_helper_02fd8750()
// asm:   0x5bae260: mov rdi, rbx
// asm:   0x5bae263: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bae268: mov rdi, rax
// asm:   0x5bae26b: call 0x2ab61e0  ; __clang_call_terminate()

void Controllers_HumanPlayerController__UpdateReelInput
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  Settings_HumanInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  System_Collections_Generic_List_InputKey__o *pSVar3;
  Settings_InputSettings_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Settings_InputKey_o *pSVar6;
  bool bVar7;
  bool bVar8;
  Characters_Human_o *pCVar9;
  float fVar10;
  float fVar11;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  Settings_InputKey_o *local_58;
  undefined1 local_48 [16];
  Settings_InputKey_o *local_38;
  
  if (Il2CppMethodInitialized_075474ad == '\0') {
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
    Il2CppMethodInitialized_075474ad = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (Settings_InputKey_o *)0x0;
  fVar11 = (__this->fields)._reelOutScrollTimeLeft;
  fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar11 = fVar11 - fVar10;
  (__this->fields)._reelOutScrollTimeLeft = fVar11;
  if (fVar11 <= 0.0) {
    pCVar9 = (__this->fields)._human;
    if (pCVar9 == (Characters_Human_o *)0x0) goto label_05bae132;
    (pCVar9->fields).ReelOutAxis = 0.0;
  }
  pSVar1 = (__this->fields)._humanInput;
  if ((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ReelIn, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05bae132;
  bVar7 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (bVar7) {
    pCVar9 = (__this->fields)._human;
    if (pCVar9 == (Characters_Human_o *)0x0) goto label_05bae132;
    if ((pCVar9->fields)._reelInWaitForRelease == false) {
      (pCVar9->fields).ReelInAxis = -1.0;
    }
    (__this->fields)._reelInScrollCooldownLeft = (__this->fields)._reelInScrollCooldown;
  }
  else {
    fVar11 = (__this->fields)._reelInScrollCooldownLeft;
    fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._reelInScrollCooldownLeft = fVar11 - fVar10;
    pSVar1 = (__this->fields)._humanInput;
    if (((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
        (pSVar2 = (pSVar1->fields).ReelIn, pSVar2 == (Settings_KeybindSetting_o *)0x0)) ||
       (pSVar3 = (pSVar2->fields).InputKeys, pSVar3 == (System_Collections_Generic_List_InputKey__o *)0x0))
    goto label_05bae132;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_58 = local_38;
    local_68 = (undefined1  [8])local_48._0_8_;
    pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
    bVar7 = false;
    while (bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext), bVar8)
    {
      if (local_58 == (Settings_InputKey_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar8 = Settings_InputKey__IsWheel(local_58,(MethodInfo *)0x0);
      if (bVar8) {
        bVar7 = true;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    pSVar1 = (__this->fields)._humanInput;
    if (((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
        (pSVar2 = (pSVar1->fields).ReelIn, pSVar2 == (Settings_KeybindSetting_o *)0x0)) ||
       (pSVar3 = (pSVar2->fields).InputKeys, pSVar3 == (System_Collections_Generic_List_InputKey__o *)0x0))
    goto label_05bae132;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_58 = local_38;
    local_68 = (undefined1  [8])local_48._0_8_;
    pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    if (!bVar7) {
      local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
label_05badfa1:
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
      if (bVar7) {
        if (local_58 != (Settings_InputKey_o *)0x0) {
          bVar7 = Settings_InputKey__IsWheel(local_58,(MethodInfo *)0x0);
          if (bVar7) goto code_r0x05badfca;
          pCVar9 = (__this->fields)._human;
          if (pCVar9 != (Characters_Human_o *)0x0) goto label_05badf9a;
          goto label_05badf78;
        }
        goto label_05bae128;
      }
      goto label_05badfe4;
    }
    local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
label_05badf15:
    while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext),
          pSVar6 = local_58, bVar7) {
      if (local_58 == (Settings_InputKey_o *)0x0) {
label_05bae128:
        ThrowNullReferenceException();
      }
      bVar7 = Settings_InputKey__IsWheel(local_58,(MethodInfo *)0x0);
      if (!bVar7) goto label_05badf60;
      if ((__this->fields)._reelInScrollCooldownLeft <= 0.0) {
        pCVar9 = (__this->fields)._human;
        if (pCVar9 == (Characters_Human_o *)0x0) {
label_05badfdf:
          ThrowNullReferenceException();
        }
        goto label_05badf0e;
      }
    }
label_05badfe4:
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
  }
  pSVar1 = (__this->fields)._humanInput;
  if (((pSVar1 != (Settings_HumanInputSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).ReelOut, pSVar2 != (Settings_KeybindSetting_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).InputKeys, pSVar3 != (System_Collections_Generic_List_InputKey__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_58 = local_38;
    local_68 = (undefined1  [8])local_48._0_8_;
    pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
    while( true ) {
      do {
        do {
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
          pSVar6 = local_58;
          if (!bVar7) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
            return;
          }
          if (local_58 == (Settings_InputKey_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar7 = Settings_InputKey__GetKey(local_58,(MethodInfo *)0x0);
        } while (!bVar7);
        pCVar9 = (__this->fields)._human;
        if (pCVar9 == (Characters_Human_o *)0x0) {
          ThrowNullReferenceException();
        }
        (pCVar9->fields).ReelOutAxis = 1.0;
        bVar7 = Settings_InputKey__IsWheel(pSVar6,(MethodInfo *)0x0);
      } while (!bVar7);
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if (pSVar4 == (Settings_InputSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar1 = (pSVar4->fields).Human;
      if (pSVar1 == (Settings_HumanInputSettings_o *)0x0) break;
      pSVar5 = (pSVar1->fields).ReelOutScrollSmoothing;
      if (pSVar5 == (Settings_FloatSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this->fields)._reelOutScrollTimeLeft = (pSVar5->fields)._value;
    }
    ThrowNullReferenceException();
  }
label_05bae132:
  ThrowNullReferenceException();
code_r0x05badfca:
  if ((__this->fields)._reelInScrollCooldownLeft <= 0.0) {
    pCVar9 = (__this->fields)._human;
    if (pCVar9 == (Characters_Human_o *)0x0) goto label_05badfdf;
label_05badf9a:
    (pCVar9->fields)._reelInWaitForRelease = false;
  }
  goto label_05badfa1;
label_05badf60:
  bVar7 = Settings_InputKey__GetKeyUp(pSVar6,(MethodInfo *)0x0);
  if (bVar7) {
    pCVar9 = (__this->fields)._human;
    if (pCVar9 == (Characters_Human_o *)0x0) {
label_05badf78:
      ThrowNullReferenceException();
    }
label_05badf0e:
    (pCVar9->fields)._reelInWaitForRelease = false;
  }
  goto label_05badf15;
}


// Controllers.HumanPlayerController$$UpdateDashInput
// il2cpp: void Controllers_HumanPlayerController__UpdateDashInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5bae270
// eh: try 0x5bae473..0x5bae4cd -> pad 0x5bae4d5 (+4 call sites) catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5bae4f1..0x5bae4f6 -> pad 0x5baee23 cleanup
// eh: try 0x5baec8a..0x5baee23 -> pad 0x5baee5b (+19 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5baee26..0x5baee30 -> pad 0x5baeec8 catch (...) [compiler noexcept guard]
// eh: try 0x5baee73..0x5baee78 -> pad 0x5baeeb3 cleanup
// eh: try 0x5baeeb6..0x5baeec0 -> pad 0x5baeec8 catch (...) [compiler noexcept guard]
// asm: 55 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bae4c1: jmp 0x5bae500
// asm:   0x5bae4cd: jmp 0x5bae4d5
// asm:   0x5bae4cf: jmp 0x5bae4d5
// asm:   0x5bae4d1: jmp 0x5bae4d5
// asm:   0x5bae4d3: jmp 0x5bae4d5
// asm:   0x5bae4d5: mov rbx, rax
// asm:   0x5bae4d8: cmp edx, 1
// asm:   0x5bae4db: jne 0x5baee26
// asm:   0x5bae4e1: mov rdi, rbx
// asm:   0x5bae4e4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bae4e9: mov rax, qword ptr [rax]
// asm:   0x5bae4ec: mov qword ptr [rsp + 0x10], rax
// asm:   0x5bae4f1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5baec79: nop dword ptr [rax]
// asm:   0x5baedea: jmp 0x5baec73
// asm:   0x5baedef: mov esi, ebx
// asm:   0x5baedf1: jmp 0x5baee86
// asm:   0x5baee23: mov rbx, rax
// asm:   0x5baee26: lea rdi, [rsp + 0x10]
// asm:   0x5baee2b: call 0x2fd8780  ; il2cpp_runtime_helper_02fd8780()
// asm:   0x5baee30: jmp 0x5baeec0
// asm:   0x5baee35: jmp 0x5baee5b
// asm:   0x5baee37: jmp 0x5baee5b
// asm:   0x5baee39: jmp 0x5baee5b
// asm:   0x5baee3b: jmp 0x5baee5b
// asm:   0x5baee3d: jmp 0x5baee5b
// asm:   0x5baee3f: jmp 0x5baee5b
// asm:   0x5baee41: jmp 0x5baee5b
// asm:   0x5baee43: jmp 0x5baee5b
// asm:   0x5baee45: jmp 0x5baee5b
// asm:   0x5baee47: jmp 0x5baee5b
// asm:   0x5baee49: jmp 0x5baee5b
// asm:   0x5baee4b: jmp 0x5baee5b
// asm:   0x5baee4d: jmp 0x5baee5b
// asm:   0x5baee4f: jmp 0x5baee5b
// asm:   0x5baee51: jmp 0x5baee5b
// asm:   0x5baee53: jmp 0x5baee5b
// asm:   0x5baee55: jmp 0x5baee5b
// asm:   0x5baee57: jmp 0x5baee5b
// asm:   0x5baee59: jmp 0x5baee5b
// asm:   0x5baee5b: mov rbx, rax
// asm:   0x5baee5e: cmp edx, 1
// asm:   0x5baee61: jne 0x5baeeb6
// asm:   0x5baee63: mov rdi, rbx
// asm:   0x5baee66: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5baee6b: mov rax, qword ptr [rax]
// asm:   0x5baee6e: mov qword ptr [rsp + 0x10], rax
// asm:   0x5baee73: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5baeeb3: mov rbx, rax
// asm:   0x5baeeb6: lea rdi, [rsp + 0x10]
// asm:   0x5baeebb: call 0x2fd87b0  ; il2cpp_runtime_helper_02fd87b0()
// asm:   0x5baeec0: mov rdi, rbx
// asm:   0x5baeec3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5baeec8: mov rdi, rax
// asm:   0x5baeecb: call 0x2ab61e0  ; __clang_call_terminate()

void Controllers_HumanPlayerController__UpdateDashInput
               (Controllers_HumanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Settings_HumanInputSettings_o *pSVar2;
  System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *pSVar3;
  Characters_HumanStats_o *pCVar4;
  Characters_OmniDashPerk_o *pCVar5;
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *pAVar6;
  Cameras_BaseCamera_o *pCVar7;
  UnityEngine_Camera_o *pUVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  Characters_VerticalDashPerk_o *pCVar11;
  Settings_InputSettings_o *pSVar12;
  Settings_BoolSetting_o *pSVar13;
  System_Collections_Generic_Dictionary_HumanDashDirection__float__o *pSVar14;
  System_Nullable_Vector3__o percentPower;
  System_Nullable_Vector3__o percentPower_00;
  undefined8 uVar15;
  bool bVar16;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar17;
  Settings_KeybindSetting_o *pSVar18;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_08;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o direction_00;
  UnityEngine_Vector3_o direction_01;
  undefined1 local_e8 [12];
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_c8;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_68 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_60;
  Il2CppObject *local_58;
  UnityEngine_Quaternion_o local_48;
  
  if (Il2CppMethodInitialized_075474ae == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting_718f730
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting_718f738
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_HumanDashDirection_KeybindSetting_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075474ae = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_58 = (Il2CppObject *)0x0;
  local_b0 = 0.0;
  local_b8 = 0;
  local_48.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  pCVar1 = (__this->fields)._human;
  unique0x10002263 =
       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
       CONCAT44(fStack_dc,local_e8._8_4_);
  uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
  uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
  local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
  if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
  if ((pCVar1->fields).Grounded != false) {
    return;
  }
  iVar19 = (pCVar1->fields)._state;
  if (iVar19 == 3) {
    return;
  }
  if ((pCVar1->fields).MountState != 0) {
    return;
  }
  if (iVar19 == 7) {
    return;
  }
  if ((pCVar1->fields).CarryState == 1) {
    return;
  }
  if (iVar19 == 0xf) {
    return;
  }
  if (iVar19 == 8) {
    return;
  }
  if (iVar19 == 10) {
    return;
  }
  if (inMenu) {
    return;
  }
  if ((pCVar1->fields).Dead != false) {
    return;
  }
  pSVar2 = (__this->fields)._humanInput;
  unique0x1000226b =
       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
       CONCAT44(fStack_dc,local_e8._8_4_);
  uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
  uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
  local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
  if (pSVar2 == (Settings_HumanInputSettings_o *)0x0) goto label_05baeeae;
  pSVar18 = (pSVar2->fields).Dash;
  unique0x10002273 =
       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
       CONCAT44(fStack_dc,local_e8._8_4_);
  uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
  uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
  local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
  if (pSVar18 == (Settings_KeybindSetting_o *)0x0) goto label_05baeeae;
  iVar19 = 0;
  bVar16 = Settings_KeybindSetting__GetKeyDown(pSVar18,false,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  unique0x10002433 =
       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
       CONCAT44(fStack_dc,local_e8._8_4_);
  local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
  if (bVar16) {
    pSVar3 = (__this->fields)._dashKeys;
    uVar23 = local_c8;
    uVar15 = local_78;
    if (pSVar3 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0)
    goto label_05baeeae;
    pSVar17 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Keys
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                         (MethodInfo_4A54BD0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_get_Keys
                        );
    unique0x10002283 =
         (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
         CONCAT44(fStack_dc,local_e8._8_4_);
    uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
    uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
    local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
    if (pSVar17 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
    goto label_05baeeae;
    System_Collections_Generic_Dictionary_KeyCollection_Int32Enum__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_e8,
               pSVar17,(MethodInfo_5112B20 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_HumanDashDirection_KeybindSetting_GetEnumera
              );
    local_58 = (Il2CppObject *)CONCAT44(fStack_d4,fStack_d8);
    pSStack_60 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 CONCAT44(fStack_dc,local_e8._8_4_);
    local_68 = (undefined1  [8])local_e8._0_8_;
    local_e8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    unique0x1000225b =
         (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_68;
    do {
      bVar16 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Int32Enum__object___MoveNext
                         ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                          local_68,(MethodInfo_4CDBED0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting_718f730
                         );
      if (!bVar16) {
        il2cpp_runtime_helper_02fd8780(local_e8);
        goto label_05bae500;
      }
      pSVar3 = (__this->fields)._dashKeys;
      if (pSVar3 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar19 = (int32_t)local_58;
      pSVar18 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(int32_t)local_58,
                           (MethodInfo_4A54F30 *)
                           MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_get_Item
                          );
      if (pSVar18 == (Settings_KeybindSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar16 = Settings_KeybindSetting__GetKey(pSVar18,false,(MethodInfo *)0x0);
    } while (!bVar16);
    il2cpp_runtime_helper_02fd8780(local_e8);
    method_00 = extraout_RDX_00;
    local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
    if (iVar19 == 0) {
label_05bae500:
      pCVar1 = (__this->fields)._human;
      uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
      uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
      local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
      pCVar4 = (pCVar1->fields).Stats;
      uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
      uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
      local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
      if (pCVar4 == (Characters_HumanStats_o *)0x0) goto label_05baeeae;
      pCVar5 = (pCVar4->fields).OmniDashPerk;
      uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
      uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
      local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
      if (pCVar5 == (Characters_OmniDashPerk_o *)0x0) goto label_05baeeae;
      bVar16 = (*(pCVar5->klass->vtable)._16_CanUse.methodPtr)
                         (pCVar5,(pCVar5->klass->vtable)._16_CanUse.method);
      if (bVar16) {
        pCVar1 = (__this->fields)._human;
        uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
        uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
        local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
        if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
        pCVar4 = (pCVar1->fields).Stats;
        uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
        uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
        local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
        if (pCVar4 == (Characters_HumanStats_o *)0x0) goto label_05baeeae;
        pAVar6 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)(pCVar4->fields).OmniDashPerk;
        uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
        uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
        local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
        if (pAVar6 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0) goto label_05baeeae;
        bVar16 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                           (pAVar6,(MethodInfo *)0x0);
        if (bVar16) {
          pCVar7 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
          uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
          uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pCVar7 == (Cameras_BaseCamera_o *)0x0) goto label_05baeeae;
          pUVar8 = (pCVar7->fields).Camera;
          if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
          }
          UVar24 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
          uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
          uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pUVar8 == (UnityEngine_Camera_o *)0x0) goto label_05baeeae;
          UnityEngine_Camera__ScreenPointToRay_68c1290
                    ((UnityEngine_Ray_o *)local_e8,pUVar8,UVar24,(MethodInfo *)0x0);
          local_b8 = CONCAT44(fStack_d8,fStack_dc);
          local_b0 = fStack_d4;
          fVar21 = fStack_d4;
          uVar22 = il2cpp_runtime_helper_059d80e0(&local_b8);
          pCVar1 = (__this->fields)._human;
          uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
          uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
          pUVar9 = (pCVar1->fields).Cache;
          uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
          uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pUVar9 == (Utility_BaseComponentCache_o *)0x0) goto label_05baeeae;
          pUVar10 = (pUVar9->fields).Transform;
          uVar23 = uVar22;
          uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
          local_a8 = CONCAT44(local_a8._4_4_,fVar21);
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05baeeae;
          local_a8._0_4_ = fVar21;
          local_c8 = uVar22;
          UVar24 = UnityEngine_Transform__get_right(pUVar10,(MethodInfo *)0x0);
          fVar21 = (float)local_a8;
          local_b8 = il2cpp_runtime_helper_05bbcf50((float)local_c8,(float)local_a8,UVar24.fields.x,UVar24.fields.z,0);
          local_b0 = fVar21;
          uVar22 = il2cpp_runtime_helper_059d80e0(&local_b8);
          pCVar1 = (__this->fields)._human;
          uVar23 = local_c8;
          uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
          pUVar9 = (pCVar1->fields).Cache;
          uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pUVar9 == (Utility_BaseComponentCache_o *)0x0) goto label_05baeeae;
          local_88._0_4_ = fVar21;
          pUVar10 = (pUVar9->fields).Transform;
          uVar15 = uVar22;
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05baeeae;
          local_78 = uVar22;
          UVar24 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
          pCVar1 = (__this->fields)._human;
          uVar23 = local_c8;
          uVar15 = local_78;
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
          pUVar9 = (pCVar1->fields).Cache;
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pUVar9 == (Utility_BaseComponentCache_o *)0x0) goto label_05baeeae;
          local_98._8_4_ = extraout_XMM0_Dc;
          local_98._0_8_ = UVar24.fields._0_8_;
          local_98._12_4_ = extraout_XMM0_Dd;
          pUVar10 = (pUVar9->fields).Transform;
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05baeeae;
          UnityEngine_Transform__get_right(pUVar10,(MethodInfo *)0x0);
          fVar20 = (float)il2cpp_runtime_helper_059fb780(local_98._0_4_,UVar24.fields.z,(float)local_78,local_88._0_4_,0);
          fVar20 = fVar20 / 90.0;
          fVar21 = 1.0;
          if (fVar20 <= 1.0) {
            fVar21 = fVar20;
          }
          local_88 = ZEXT416(-(uint)(0.0 <= fVar20) & (uint)fVar21);
          uVar22 = il2cpp_runtime_helper_05bbd010(0);
          local_98._0_4_ = fVar21;
          if (0.0 < (float)local_88._0_4_) {
            pCVar1 = (__this->fields)._human;
            uVar23 = local_c8;
            uVar15 = local_78;
            local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
            if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
            pCVar4 = (pCVar1->fields).Stats;
            local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
            if (pCVar4 == (Characters_HumanStats_o *)0x0) goto label_05baeeae;
            pAVar6 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)
                     (pCVar4->fields).OmniDashPerk;
            uVar15 = uVar22;
            local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
            if (pAVar6 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0) goto label_05baeeae;
            local_78 = uVar22;
            fVar21 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetPowerRatio
                               (pAVar6,(MethodInfo *)0x0);
            uVar22 = CONCAT44(fVar21,(float)local_78);
          }
          pCVar1 = (__this->fields)._human;
          iVar19 = 0;
          UVar24.fields.z = (float)local_a8;
          UVar24.fields.x = (float)(int)local_c8;
          UVar24.fields.y = (float)(int)((ulong)local_c8 >> 0x20);
          local_78 = uVar22;
          fVar21 = Controllers_BasePlayerController__GetTargetAngle_5a9e8a0
                             ((Controllers_BasePlayerController_o *)__this,UVar24,(MethodInfo *)0x0);
          local_e8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_e8._8_4_ = 0.0;
          fStack_dc = 0.0;
          value.fields.z = (float)local_98._0_4_;
          value.fields.x = (float)local_78;
          value.fields.y = (float)local_78._4_4_;
          System_Nullable_Vector3____ctor
                    ((System_Nullable_Vector3__o *)local_e8,value,
                     (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
          unique0x1000232b =
               (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               CONCAT44(fStack_dc,local_e8._8_4_);
          uVar23 = local_c8;
          uVar15 = local_78;
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
          percentPower.fields.value.fields.y = (float)local_e8._8_4_;
          percentPower.fields.hasValue = (bool)local_e8[0];
          percentPower.fields._1_3_ = local_e8._1_3_;
          percentPower.fields.value.fields.x = (float)local_e8._4_4_;
          percentPower.fields.value.fields.z = fStack_dc;
          direction_00.fields.z = (float)local_a8;
          direction_00.fields.x = (float)local_c8;
          direction_00.fields.y = (float)local_c8._4_4_;
          bVar16 = Characters_Human__DashVertical(pCVar1,fVar21,direction_00,percentPower,(MethodInfo *)0x0);
          method_00 = extraout_RDX_01;
          unique0x10002443 =
               (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               CONCAT44(fStack_dc,local_e8._8_4_);
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (bVar16) {
            pCVar1 = (__this->fields)._human;
            unique0x10002333 =
                 (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 CONCAT44(fStack_dc,local_e8._8_4_);
            uVar23 = local_c8;
            uVar15 = local_78;
            local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
            if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
            pCVar4 = (pCVar1->fields).Stats;
            unique0x1000233b =
                 (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 CONCAT44(fStack_dc,local_e8._8_4_);
            local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
            if (pCVar4 == (Characters_HumanStats_o *)0x0) goto label_05baeeae;
            pCVar5 = (pCVar4->fields).OmniDashPerk;
            unique0x10002343 =
                 (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 CONCAT44(fStack_dc,local_e8._8_4_);
            local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
            if (pCVar5 == (Characters_OmniDashPerk_o *)0x0) goto label_05baeeae;
            (*(pCVar5->klass->vtable)._18_OnUse.methodPtr)
                      (pCVar5,(float)local_88._0_4_,(pCVar5->klass->vtable)._18_OnUse.method);
            method_00 = extraout_RDX_02;
            unique0x1000244b =
                 (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 CONCAT44(fStack_dc,local_e8._8_4_);
            local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          }
          goto label_05baebb4;
        }
      }
      pCVar1 = (__this->fields)._human;
      uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
      uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
      local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
      if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
      pCVar4 = (pCVar1->fields).Stats;
      uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
      uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
      local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
      if (pCVar4 == (Characters_HumanStats_o *)0x0) goto label_05baeeae;
      pCVar11 = (pCVar4->fields).VerticalDashPerk;
      uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
      uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
      local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
      if (pCVar11 == (Characters_VerticalDashPerk_o *)0x0) goto label_05baeeae;
      bVar16 = (*(pCVar11->klass->vtable)._16_CanUse.methodPtr)
                         (pCVar11,(pCVar11->klass->vtable)._16_CanUse.method);
      iVar19 = 0;
      method_00 = extraout_RDX_03;
      local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
      if (bVar16) {
        pCVar1 = (__this->fields)._human;
        uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
        uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
        local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
        if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
        pCVar4 = (pCVar1->fields).Stats;
        uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
        uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
        local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
        if (pCVar4 == (Characters_HumanStats_o *)0x0) goto label_05baeeae;
        pAVar6 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)
                 (pCVar4->fields).VerticalDashPerk;
        uVar23 = local_c8;
        uVar15 = local_78;
        local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
        if (pAVar6 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0) goto label_05baeeae;
        iVar19 = 0;
        bVar16 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                           (pAVar6,(MethodInfo *)0x0);
        method_00 = extraout_RDX_04;
        local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
        if (bVar16) {
          pCVar1 = (__this->fields)._human;
          uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
          uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
          pCVar4 = (pCVar1->fields).Stats;
          uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
          uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pCVar4 == (Characters_HumanStats_o *)0x0) goto label_05baeeae;
          pAVar6 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)(pCVar4->fields).OmniDashPerk;
          uVar23 = local_c8;
          uVar15 = local_78;
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (pAVar6 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0) goto label_05baeeae;
          iVar19 = 0;
          bVar16 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                             (pAVar6,(MethodInfo *)0x0);
          method_00 = extraout_RDX_05;
          local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
          if (!bVar16) {
            pCVar7 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
            uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
            uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
            local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
            if (pCVar7 == (Cameras_BaseCamera_o *)0x0) goto label_05baeeae;
            pUVar9 = (pCVar7->fields).Cache;
            uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
            uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
            local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
            if (pUVar9 == (Utility_BaseComponentCache_o *)0x0) goto label_05baeeae;
            pUVar10 = (pUVar9->fields).Transform;
            uVar23 = local_c8;
            uVar15 = local_78;
            local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
            if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05baeeae;
            local_48 = UnityEngine_Transform__get_rotation(pUVar10,(MethodInfo *)0x0);
            uVar22 = il2cpp_runtime_helper_05bbd050(&local_48,0);
            pCVar7 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
            uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
            uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
            local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
            if (pCVar7 == (Cameras_BaseCamera_o *)0x0) goto label_05baeeae;
            pUVar8 = (pCVar7->fields).Camera;
            local_c8 = uVar22;
            if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
            }
            UVar24 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
            uVar23 = local_c8;
            uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
            local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
            if (pUVar8 == (UnityEngine_Camera_o *)0x0) goto label_05baeeae;
            fVar21 = (float)(~-(uint)((float)local_c8 < 0.0) & (uint)(float)local_c8 |
                            (uint)((float)local_c8 + 360.0) & -(uint)((float)local_c8 < 0.0));
            local_c8._0_4_ =
                 (float)(~-(uint)(fVar21 < 360.0) & (uint)(fVar21 + -360.0) |
                        -(uint)(fVar21 < 360.0) & (uint)fVar21);
            UnityEngine_Camera__ScreenPointToRay_68c1290
                      ((UnityEngine_Ray_o *)local_e8,pUVar8,UVar24,(MethodInfo *)0x0);
            local_b8 = CONCAT44(fStack_d8,fStack_dc);
            local_b0 = fStack_d4;
            fVar21 = fStack_d4;
            local_88._0_8_ = il2cpp_runtime_helper_059d80e0(&local_b8);
            local_88._8_4_ = extraout_XMM0_Dc_00;
            local_88._12_4_ = extraout_XMM0_Dd_00;
            local_98._0_4_ = fVar21;
            uVar22 = il2cpp_runtime_helper_05bbd010(0);
            fVar20 = 0.0;
            local_78._0_4_ = fVar21;
            if (((float)local_c8 <= 0.0) || (180.0 <= (float)local_c8)) {
              pCVar1 = (__this->fields)._human;
              uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
              uVar15 = CONCAT44(local_78._4_4_,fVar21);
              local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
              if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
              pCVar4 = (pCVar1->fields).Stats;
              uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
              uVar15 = CONCAT44(local_78._4_4_,fVar21);
              local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8);
              if (pCVar4 == (Characters_HumanStats_o *)0x0) goto label_05baeeae;
              pAVar6 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)
                       (pCVar4->fields).OmniDashPerk;
              uVar23 = CONCAT44(local_c8._4_4_,(float)local_c8);
              uVar15 = CONCAT44(local_78._4_4_,fVar21);
              local_a8 = uVar22;
              if (pAVar6 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0)
              goto label_05baeeae;
              fVar21 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetPowerRatio
                                 (pAVar6,(MethodInfo *)0x0);
              uVar22 = CONCAT44(fVar21,(float)local_a8);
              fVar20 = 1.0;
            }
            pCVar1 = (__this->fields)._human;
            direction.fields.z = (float)local_98._0_4_;
            direction.fields.x = (float)local_88._0_4_;
            direction.fields.y = (float)local_88._4_4_;
            local_a8 = uVar22;
            fVar21 = Controllers_BasePlayerController__GetTargetAngle_5a9e8a0
                               ((Controllers_BasePlayerController_o *)__this,direction,(MethodInfo *)0x0);
            local_88._0_4_ = fVar21;
            if (((float)local_c8 <= 0.0) || (180.0 <= (float)local_c8)) {
              uVar23 = il2cpp_runtime_helper_05bbcf10(0);
            }
            else {
              uVar23 = il2cpp_runtime_helper_05bbd070(0);
            }
            iVar19 = 0;
            local_98._0_4_ = (float)local_c8;
            local_e8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            local_e8._8_4_ = 0.0;
            fStack_dc = 0.0;
            value_00.fields.z = (float)local_78;
            value_00.fields.x = (float)(int)local_a8;
            value_00.fields.y = (float)(int)((ulong)local_a8 >> 0x20);
            local_c8 = uVar23;
            System_Nullable_Vector3____ctor
                      ((System_Nullable_Vector3__o *)local_e8,value_00,
                       (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
            unique0x10002403 =
                 (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 CONCAT44(fStack_dc,local_e8._8_4_);
            uVar23 = local_c8;
            uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
            if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
            percentPower_00.fields.value.fields.y = (float)local_e8._8_4_;
            percentPower_00.fields.hasValue = (bool)local_e8[0];
            percentPower_00.fields._1_3_ = local_e8._1_3_;
            percentPower_00.fields.value.fields.x = (float)local_e8._4_4_;
            percentPower_00.fields.value.fields.z = fStack_dc;
            direction_01.fields.z = (float)local_98._0_4_;
            direction_01.fields.x = (float)local_c8;
            direction_01.fields.y = (float)local_c8._4_4_;
            bVar16 = Characters_Human__DashVertical
                               (pCVar1,(float)local_88._0_4_,direction_01,percentPower_00,(MethodInfo *)0x0);
            method_00 = extraout_RDX_06;
            unique0x1000246b =
                 (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 CONCAT44(fStack_dc,local_e8._8_4_);
            if (bVar16) {
              pCVar1 = (__this->fields)._human;
              unique0x1000240b =
                   (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   CONCAT44(fStack_dc,local_e8._8_4_);
              uVar23 = local_c8;
              uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
              if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
              pCVar4 = (pCVar1->fields).Stats;
              unique0x10002413 =
                   (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   CONCAT44(fStack_dc,local_e8._8_4_);
              uVar15 = CONCAT44(local_78._4_4_,(float)local_78);
              if (pCVar4 == (Characters_HumanStats_o *)0x0) goto label_05baeeae;
              pCVar11 = (pCVar4->fields).VerticalDashPerk;
              unique0x1000241b =
                   (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   CONCAT44(fStack_dc,local_e8._8_4_);
              uVar15 = local_78;
              if (pCVar11 == (Characters_VerticalDashPerk_o *)0x0) goto label_05baeeae;
              (*(pCVar11->klass->vtable)._18_OnUse.methodPtr)
                        (pCVar11,fVar20,(pCVar11->klass->vtable)._18_OnUse.method);
              iVar19 = 0;
              method_00 = extraout_RDX_07;
            }
          }
        }
      }
    }
  }
label_05baebb4:
  pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  uVar23 = local_c8;
  uVar15 = local_78;
  if (pSVar12 != (Settings_InputSettings_o *)0x0) {
    pSVar2 = (pSVar12->fields).Human;
    if (pSVar2 != (Settings_HumanInputSettings_o *)0x0) {
      pSVar13 = (pSVar2->fields).DashDoubleTap;
      if (pSVar13 != (Settings_BoolSetting_o *)0x0) {
        if ((pSVar13->fields)._value == false) {
label_05baee86:
          if (iVar19 != 0) {
            pCVar1 = (__this->fields)._human;
            fVar21 = Controllers_HumanPlayerController__GetDashAngle(__this,iVar19,method_00);
            uVar23 = local_c8;
            uVar15 = local_78;
            if (pCVar1 == (Characters_Human_o *)0x0) goto label_05baeeae;
            Characters_Human__Dash(pCVar1,fVar21,(MethodInfo *)0x0);
          }
          return;
        }
        pSVar3 = (__this->fields)._dashKeys;
        if (pSVar3 != (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0) {
          pSVar17 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Keys
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                               (MethodInfo_4A54BD0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_get_Keys
                              );
          uVar23 = local_c8;
          uVar15 = local_78;
          if (pSVar17 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
            System_Collections_Generic_Dictionary_KeyCollection_Int32Enum__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       local_e8,pSVar17,
                       (MethodInfo_5112B20 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_HumanDashDirection_KeybindSetting_GetEnumera
                      );
            local_58 = (Il2CppObject *)CONCAT44(fStack_d4,fStack_d8);
            pSStack_60 = stack0xffffffffffffff20;
            local_68 = (undefined1  [8])local_e8._0_8_;
            local_e8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            unique0x10002423 =
                 (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_68;
            do {
              local_a8._0_4_ = (float)iVar19;
              do {
                while( true ) {
                  do {
                    bVar16 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Int32Enum__object___MoveNext
                                       ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                         *)local_68,
                                        (MethodInfo_4CDBED0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_HumanDashDirection_KeybindSetting_718f730
                                       );
                    if (!bVar16) {
                      il2cpp_runtime_helper_02fd87b0(local_e8);
                      method_00 = extraout_RDX_08;
                      iVar19 = (int)(float)local_a8;
                      goto label_05baee86;
                    }
                    pSVar14 = (__this->fields)._dashTimes;
                    if (pSVar14 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0)
                    {
                      ThrowNullReferenceException();
                    }
                    iVar19 = (int32_t)local_58;
                    fVar21 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,
                                        (int32_t)local_58,
                                        (MethodInfo_4A58D70 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_get_Item
                                       );
                    if (0.0 <= fVar21) {
                      pSVar14 = (__this->fields)._dashTimes;
                      if (pSVar14 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0
                         ) {
                        ThrowNullReferenceException();
                      }
                      fVar21 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,
                                          iVar19,(MethodInfo_4A58D70 *)
                                                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_get_Item
                                         );
                      local_c8._0_4_ = fVar21;
                      fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                      System_Collections_Generic_Dictionary_Int32Enum__float___set_Item
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,iVar19,
                                 (float)local_c8 + fVar21,
                                 (MethodInfo_4A58E00 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_set_Item
                                );
                      pSVar14 = (__this->fields)._dashTimes;
                      if (pSVar14 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0
                         ) {
                        ThrowNullReferenceException();
                      }
                      fVar21 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,
                                          iVar19,(MethodInfo_4A58D70 *)
                                                 MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_get_Item
                                         );
                      if (0.2 < fVar21) {
                        pSVar14 = (__this->fields)._dashTimes;
                        if (pSVar14 ==
                            (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        System_Collections_Generic_Dictionary_Int32Enum__float___set_Item
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,iVar19,
                                   -1.0,(MethodInfo_4A58E00 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_set_Item
                                  );
                      }
                    }
                    pSVar3 = (__this->fields)._dashKeys;
                    if (pSVar3 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o
                                   *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar18 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                                         iVar19,(MethodInfo_4A54F30 *)
                                                MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_KeybindSetting_get_Item
                                        );
                    if (pSVar18 == (Settings_KeybindSetting_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    bVar16 = Settings_KeybindSetting__GetKeyDown(pSVar18,false,(MethodInfo *)0x0);
                  } while (!bVar16);
                  pSVar14 = (__this->fields)._dashTimes;
                  if (pSVar14 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  fVar21 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,iVar19,
                                      (MethodInfo_4A58D70 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_get_Item
                                     );
                  pSVar14 = (__this->fields)._dashTimes;
                  if ((fVar21 != -1.0) || (NAN(fVar21))) break;
                  if (pSVar14 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_Dictionary_Int32Enum__float___set_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,iVar19,0.0,
                             (MethodInfo_4A58E00 *)
                             MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_set_Item
                            );
                }
                if (pSVar14 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
                  ThrowNullReferenceException();
                }
                fVar21 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                                   ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,iVar19,
                                    (MethodInfo_4A58D70 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_HumanDashDirection_float_get_Item
                                   );
              } while (fVar21 <= 0.0);
            } while( true );
          }
        }
      }
    }
  }
label_05baeeae:
  local_c8 = uVar23;
  local_78 = uVar15;
  ThrowNullReferenceException();
}


// Controllers.HumanPlayerController$$GetDashAngle
// il2cpp: float Controllers_HumanPlayerController__GetDashAngle (Controllers_HumanPlayerController_o* __this, int32_t direction, const MethodInfo* method);
// 0x5baf280

float Controllers_HumanPlayerController__GetDashAngle
                (Controllers_HumanPlayerController_o *__this,int32_t direction,MethodInfo *method)

{
  float fVar1;
  
  switch(direction) {
  case 1:
    fVar1 = Controllers_BasePlayerController__GetTargetAngle
                      ((Controllers_BasePlayerController_o *)__this,1,0,(MethodInfo *)0x0);
    return fVar1;
  case 2:
    fVar1 = Controllers_BasePlayerController__GetTargetAngle
                      ((Controllers_BasePlayerController_o *)__this,-1,0,(MethodInfo *)0x0);
    return fVar1;
  case 3:
    fVar1 = Controllers_BasePlayerController__GetTargetAngle
                      ((Controllers_BasePlayerController_o *)__this,0,-1,(MethodInfo *)0x0);
    return fVar1;
  case 4:
    fVar1 = Controllers_BasePlayerController__GetTargetAngle
                      ((Controllers_BasePlayerController_o *)__this,0,1,(MethodInfo *)0x0);
    return fVar1;
  default:
    return 0.0;
  }
}


// Controllers.HumanPlayerController$$IsSpin3Special
// il2cpp: bool Controllers_HumanPlayerController__IsSpin3Special (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5bacf60

bool Controllers_HumanPlayerController__IsSpin3Special
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  Characters_BaseUseable_c *pCVar4;
  
  if (Il2CppMethodInitialized_075474af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin3Special);
    Il2CppMethodInitialized_075474af = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((pCVar2->fields)._state == 9) &&
     (pCVar3 = (pCVar2->fields).Special, pCVar3 != (Characters_BaseUseable_o *)0x0)) {
    pCVar4 = pCVar3->klass;
    bVar1 = (TypeInfo_Characters_Spin3Special->_2).typeHierarchyDepth;
    if (bVar1 <= (pCVar4->_2).typeHierarchyDepth) {
      return (pCVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Spin3Special;
    }
  }
  return false;
}


// Controllers.HumanPlayerController$$MovingLeft
// il2cpp: bool Controllers_HumanPlayerController__MovingLeft (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baf2e0

bool Controllers_HumanPlayerController__MovingLeft
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075474b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075474b0 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 == (Settings_InputSettings_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_GeneralInputSettings_o *)0x0)) ||
     (__this_00 = (pSVar2->fields).Left, __this_00 == (Settings_KeybindSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar3 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
  return bVar3;
}


// Controllers.HumanPlayerController$$MovingRight
// il2cpp: bool Controllers_HumanPlayerController__MovingRight (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baf340

bool Controllers_HumanPlayerController__MovingRight
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075474b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075474b1 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 == (Settings_InputSettings_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_GeneralInputSettings_o *)0x0)) ||
     (__this_00 = (pSVar2->fields).Right, __this_00 == (Settings_KeybindSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar3 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
  return bVar3;
}


// Controllers.HumanPlayerController$$UsingGas
// il2cpp: bool Controllers_HumanPlayerController__UsingGas (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baf3a0

bool Controllers_HumanPlayerController__UsingGas
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_HumanInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075474b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075474b2 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 == (Settings_InputSettings_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Human, pSVar2 == (Settings_HumanInputSettings_o *)0x0)) ||
     (__this_00 = (pSVar2->fields).Jump, __this_00 == (Settings_KeybindSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar3 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
  return bVar3;
}


// Controllers.HumanPlayerController$$HookingLeft
// il2cpp: bool Controllers_HumanPlayerController__HookingLeft (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baf400

bool Controllers_HumanPlayerController__HookingLeft
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_HumanInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075474b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075474b3 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 == (Settings_InputSettings_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Human, pSVar2 == (Settings_HumanInputSettings_o *)0x0)) ||
     (__this_00 = (pSVar2->fields).HookLeft, __this_00 == (Settings_KeybindSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar3 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
  return bVar3;
}


// Controllers.HumanPlayerController$$HookingRight
// il2cpp: bool Controllers_HumanPlayerController__HookingRight (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baf460

bool Controllers_HumanPlayerController__HookingRight
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_HumanInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075474b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075474b4 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 == (Settings_InputSettings_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Human, pSVar2 == (Settings_HumanInputSettings_o *)0x0)) ||
     (__this_00 = (pSVar2->fields).HookRight, __this_00 == (Settings_KeybindSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar3 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
  return bVar3;
}


// Controllers.HumanPlayerController$$HookingBoth
// il2cpp: bool Controllers_HumanPlayerController__HookingBoth (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baf4c0

bool Controllers_HumanPlayerController__HookingBoth
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_HumanInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075474b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075474b5 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 == (Settings_InputSettings_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Human, pSVar2 == (Settings_HumanInputSettings_o *)0x0)) ||
     (__this_00 = (pSVar2->fields).HookBoth, __this_00 == (Settings_KeybindSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar3 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
  return bVar3;
}


// Controllers.HumanPlayerController$$GetAimPoint
// il2cpp: UnityEngine_Vector3_o Controllers_HumanPlayerController__GetAimPoint (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baf520

UnityEngine_Vector3_o
Controllers_HumanPlayerController__GetAimPoint(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  UnityEngine_Ray_o ray;
  bool bVar1;
  int32_t layerMask;
  UnityEngine_Vector3_Fields UVar2;
  UnityEngine_Vector3_o UVar3;
  float fStack_7c;
  float fStack_78;
  UnityEngine_Ray_o local_70;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  UnityEngine_RaycastHit_o local_38;
  
  if (Il2CppMethodInitialized_075474b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_075474b6 = '\x01';
  }
  local_38.fields.m_UV.fields.x = 0.0;
  local_38.fields.m_UV.fields.y = 0.0;
  local_38.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_38.fields.m_Normal.fields.y = 0.0;
  local_38.fields.m_Normal.fields.z = 0.0;
  local_38.fields.m_FaceID = 0;
  local_38.fields.m_Distance = 0.0;
  local_38.fields.m_Point.fields.x = 0.0;
  local_38.fields.m_Point.fields.y = 0.0;
  local_38.fields.m_Point.fields.z = 0.0;
  local_38.fields.m_Normal.fields.x = 0.0;
  __this_00 = (__this->fields)._human;
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_Human__GetAimRayAfterHumanCheap(&local_70,__this_00,(MethodInfo *)0x0);
  local_48._0_4_ = local_70.fields.m_Origin.fields.x;
  local_48._4_4_ = local_70.fields.m_Origin.fields.y;
  local_48._8_8_ = 0;
  local_58._0_4_ = local_70.fields.m_Direction.fields.x;
  local_58._4_4_ = local_70.fields.m_Direction.fields.y;
  local_58._8_8_ = 0;
  if ((TypeInfo_Characters_Human->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Human);
  }
  layerMask = UnityEngine_LayerMask__get_value
                        (&TypeInfo_Characters_Human->static_fields->AimMask,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  fStack_7c = local_58._0_4_;
  fStack_78 = local_58._4_4_;
  ray.fields.m_Direction.fields.z = local_70.fields.m_Direction.fields.z;
  ray.fields.m_Direction.fields.y = fStack_78;
  ray.fields.m_Direction.fields.x = fStack_7c;
  ray.fields.m_Origin.fields.z = local_70.fields.m_Origin.fields.z;
  ray.fields.m_Origin.fields.x = (float)local_48._0_4_;
  ray.fields.m_Origin.fields.y = (float)local_48._4_4_;
  bVar1 = UnityEngine_Physics__Raycast_69da1f0(ray,&local_38,1000.0,layerMask,(MethodInfo *)0x0);
  if (bVar1) {
    UVar2 = (UnityEngine_Vector3_Fields)UnityEngine_RaycastHit__get_point(&local_38,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar2;
  }
  UVar3.fields.x = (float)local_48._0_4_ + (float)local_58._0_4_ * 1000.0;
  UVar3.fields.y = (float)local_48._4_4_ + (float)local_58._4_4_ * 1000.0;
  UVar3.fields.z = local_70.fields.m_Origin.fields.z + local_70.fields.m_Direction.fields.z * 1000.0;
  return (UnityEngine_Vector3_o)UVar3.fields;
}


// Controllers.HumanPlayerController$$.ctor
// il2cpp: void Controllers_HumanPlayerController___ctor (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x5baf6a0

void Controllers_HumanPlayerController___ctor(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_HumanState__o *__this_00;
  
  if (Il2CppMethodInitialized_075474b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_HumanState_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_HumanState);
    Il2CppMethodInitialized_075474b7 = '\x01';
  }
  (__this->fields)._reelInScrollCooldown = 0.2;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_HumanState)
  ;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_4FAD1E0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_ctor);
  if (__this_00 == (System_Collections_Generic_HashSet_HumanState__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,7,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,10,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,8,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,4,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,9,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,0xf,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_HumanState_Add);
  (__this->fields)._illegalWeaponStates = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._illegalWeaponStates);
  Controllers_BasePlayerController___ctor((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  return;
}


// Controllers.HumanPlayerController$$.cctor
// il2cpp: void Controllers_HumanPlayerController___cctor (const MethodInfo* method);
// 0x5baf7b0

void Controllers_HumanPlayerController___cctor(MethodInfo *method)

{
  uint uVar1;
  Utility_PhysicsLayer_StaticFields *pUVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_075474b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_HumanPlayerController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_075474b8 = '\x01';
  }
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,5);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)layers->max_length;
  if (uVar1 != 0) {
    pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
    layers->m_Items[0] = pUVar2->TitanMovebox;
    if ((((uVar1 != 1) && (layers->m_Items[1] = pUVar2->TitanPushbox, 2 < uVar1)) &&
        (layers->m_Items[2] = pUVar2->MapObjectEntities, uVar1 != 3)) &&
       (layers->m_Items[3] = pUVar2->MapObjectProjectiles, 4 < uVar1)) {
      layers->m_Items[4] = pUVar2->MapObjectAll;
      UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (TypeInfo_Controllers_HumanPlayerController->static_fields->HookMask).fields.m_Mask =
           (int32_t)UVar3.fields.m_Mask;
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


