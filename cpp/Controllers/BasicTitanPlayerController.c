// Type: Controllers.BasicTitanPlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Controllers/BasicTitanPlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/BasicTitanPlayerController.cs
// --------------------------------

// Controllers.BasicTitanPlayerController$$Awake
// il2cpp: void Controllers_BasicTitanPlayerController__Awake (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x5ba4d40

void Controllers_BasicTitanPlayerController__Awake
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o **targetAddress;
  Settings_InputSettings_o *pSVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  Characters_BaseHitbox_o *pCVar3;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  Characters_BasicTitan_o *pCVar4;
  
  if (Il2CppMethodInitialized_07547479 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirL");
    Il2CppMethodInitialized_07547479 = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,method);
  pCVar4 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BasicTitan);
  targetAddress = &(__this->fields)._titan;
  (__this->fields)._titan = pCVar4;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar1 != (Settings_InputSettings_o *)0x0) {
    (__this->fields)._titanInput = (pSVar1->fields).Titan;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._titanInput);
    pCVar4 = (__this->fields)._titan;
    if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
      (pCVar4->fields).RunSpeedBase = 12.0;
      (pCVar4->fields).WalkSpeedBase = 5.0;
      (pCVar4->fields).RunSpeedPerLevel = 18.0;
      (pCVar4->fields).WalkSpeedPerLevel = 1.0;
      (pCVar4->fields).BellyFlopTime = 2.6;
      (pCVar4->fields).AttackSpeedMultiplier = 1.2;
      (pCVar4->fields).JumpForce = 200.0;
      (pCVar4->fields).RotateSpeed = 8.0;
      (pCVar4->fields).ActionPause = 0.1;
      (pCVar4->fields).AttackPause = 0.1;
      (pCVar4->fields).RockThrow1Speed = 450.0;
      pCVar2 = (pCVar4->fields).BasicCache;
      if ((pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pCVar3 = (pCVar2->fields).HandLHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
        Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
        if ((*targetAddress != (Characters_BasicTitan_o *)0x0) &&
           ((pCVar2 = ((*targetAddress)->fields).BasicCache,
            pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0 &&
            (pCVar3 = (pCVar2->fields).HandRHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)))) {
          Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
          if ((*targetAddress != (Characters_BasicTitan_o *)0x0) &&
             ((pCVar2 = ((*targetAddress)->fields).BasicCache,
              pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0 &&
              (pCVar3 = (pCVar2->fields).FootLHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)))) {
            Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
            if ((*targetAddress != (Characters_BasicTitan_o *)0x0) &&
               ((pCVar2 = ((*targetAddress)->fields).BasicCache,
                pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0 &&
                (pCVar3 = (pCVar2->fields).FootRHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)))) {
              Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
              if ((*targetAddress != (Characters_BasicTitan_o *)0x0) &&
                 ((pCVar2 = ((*targetAddress)->fields).BasicCache,
                  pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0 &&
                  (pCVar3 = (pCVar2->fields).MouthHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)))) {
                Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.2,(MethodInfo *)0x0);
                if ((*targetAddress != (Characters_BasicTitan_o *)0x0) &&
                   (__this_00 = ((*targetAddress)->fields).AttackSpeeds,
                   __this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
                  System_Collections_Generic_Dictionary_object__float___set_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (Il2CppObject *)"AttackGrabAirL",0.7,
                             (MethodInfo_4AB5450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$UpdateUI
// il2cpp: void Controllers_BasicTitanPlayerController__UpdateUI (Controllers_BasicTitanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5ba4f90

void Controllers_BasicTitanPlayerController__UpdateUI
               (Controllers_BasicTitanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  System_String_o *text;
  
  if (Il2CppMethodInitialized_0754747a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_0754747a = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UI_CursorManager__SetCrosshairText(text,(MethodInfo *)0x0);
  UI_CursorManager__SetCrosshairColor(true,(MethodInfo *)0x0);
  return;
}


// Controllers.BasicTitanPlayerController$$UpdateActionInput
// il2cpp: void Controllers_BasicTitanPlayerController__UpdateActionInput (Controllers_BasicTitanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5ba5000
// eh: try 0x5ba563b..0x5ba574d -> pad 0x5ba5765 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5ba5783..0x5ba5788 -> pad 0x5ba59a5 cleanup
// eh: try 0x5ba59a8..0x5ba59b2 -> pad 0x5ba59ba catch (...) [compiler noexcept guard]
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba557e: lea rax, [rip + 0x172f9d3]  ; "AttackRockThrow"
// asm:   0x5ba5585: mov rsi, qword ptr [rax]
// asm:   0x5ba5588: mov rax, qword ptr [rdi]
// asm:   0x5ba558b: mov rdx, qword ptr [rax + 0xaa0]
// asm:   0x5ba5592: call qword ptr [rax + 0xa98]  ; vtable slot 150
// asm:   0x5ba5598: movss xmm0, dword ptr [rbx + 0x6c]
// asm:   0x5ba559d: movss dword ptr [rbx + 0x70], xmm0
// asm:   0x5ba55a2: jmp 0x5ba50c9
// asm:   0x5ba5613: lea r15, [rip + 0x16d3dde]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5ba561a: lea r13, [rip + 0x172f6cf]  ; "Attack"
// asm:   0x5ba5621: lea r12, [rip + 0x16d4ce0]  ; TypeInfo_Settings_KeybindSetting
// asm:   0x5ba5628: jmp 0x5ba5638
// asm:   0x5ba562a: mov rdx, qword ptr [rsp + 8]
// asm:   0x5ba562f: test rdx, rdx
// asm:   0x5ba5632: je 0x5ba5722
// asm:   0x5ba5713: lea rdi, [rsp + 0x28]
// asm:   0x5ba5718: call 0x2fd8580  ; il2cpp_runtime_helper_02fd8580()
// asm:   0x5ba571d: jmp 0x5ba50c9
// asm:   0x5ba574d: jmp 0x5ba5767
// asm:   0x5ba574f: jmp 0x5ba5767
// asm:   0x5ba5751: jmp 0x5ba5767
// asm:   0x5ba5753: jmp 0x5ba5767
// asm:   0x5ba5755: jmp 0x5ba5767
// asm:   0x5ba5757: jmp 0x5ba5767
// asm:   0x5ba5759: jmp 0x5ba5767
// asm:   0x5ba575b: jmp 0x5ba5767
// asm:   0x5ba575d: jmp 0x5ba5767
// asm:   0x5ba575f: jmp 0x5ba5767
// asm:   0x5ba5761: jmp 0x5ba5767
// asm:   0x5ba5763: jmp 0x5ba5767
// asm:   0x5ba5765: jmp 0x5ba5767
// asm:   0x5ba5767: mov r14, rax
// asm:   0x5ba576a: cmp edx, 1
// asm:   0x5ba576d: jne 0x5ba59a8
// asm:   0x5ba5773: mov rdi, r14
// asm:   0x5ba5776: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ba577b: mov rax, qword ptr [rax]
// asm:   0x5ba577e: mov qword ptr [rsp + 0x28], rax
// asm:   0x5ba5783: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ba5788: lea rdi, [rsp + 0x28]
// asm:   0x5ba578d: call 0x2fd8580  ; il2cpp_runtime_helper_02fd8580()
// asm:   0x5ba5991: mov rdi, rbp
// asm:   0x5ba5994: xor esi, esi
// asm:   0x5ba5996: call 0x5c32ff0  ; Characters_BasicTitan__JumpImmediate()
// asm:   0x5ba599b: jmp 0x5ba50c9
// asm:   0x5ba59a5: mov r14, rax
// asm:   0x5ba59a8: lea rdi, [rsp + 0x28]
// asm:   0x5ba59ad: call 0x2fd8580  ; il2cpp_runtime_helper_02fd8580()
// asm:   0x5ba59b2: mov rdi, r14
// asm:   0x5ba59b5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ba59ba: mov rdi, rax
// asm:   0x5ba59bd: call 0x2ab61e0  ; __clang_call_terminate()

void Controllers_BasicTitanPlayerController__UpdateActionInput
               (Controllers_BasicTitanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  Settings_TitanInputSettings_o *pSVar4;
  System_Collections_Specialized_OrderedDictionary_o *pSVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *__this_00;
  bool bVar8;
  char cVar9;
  System_String_o **ppSVar10;
  System_Collections_ICollection_o *pSVar11;
  System_String_o *__this_01;
  Il2CppObject *obj;
  Il2CppObject *pIVar12;
  Settings_KeybindSetting_o *pSVar13;
  MethodInfo *method_00;
  Characters_BasicTitan_o *pCVar14;
  MethodInfo *pMVar15;
  float fVar16;
  float extraout_XMM0_Db;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  UnityEngine_Vector3_o UVar19;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  if (Il2CppMethodInitialized_0754747b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackJump");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    Il2CppMethodInitialized_0754747b = '\x01';
  }
  lStack_70 = 0;
  uStack_38 = 0;
  uStack_68 = CONCAT44(uStack_68._4_4_,(__this->fields)._rockCooldownLeft);
  fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._rockCooldownLeft = (float)uStack_68 - fVar16;
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,inMenu,method_00);
  if (inMenu) {
    return;
  }
  pSVar4 = (__this->fields)._titanInput;
  if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
     (pSVar13 = (pSVar4->fields).Walk, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
    pCVar14 = (__this->fields)._titan;
    bVar8 = Settings_KeybindSetting__GetKey(pSVar13,false,(MethodInfo *)0x0);
    if (pCVar14 != (Characters_BasicTitan_o *)0x0) {
      (pCVar14->fields).IsWalk = bVar8;
      pSVar4 = (__this->fields)._titanInput;
      if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
         (pSVar13 = (pSVar4->fields).Sit, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
        pCVar14 = (__this->fields)._titan;
        bVar8 = Settings_KeybindSetting__GetKey(pSVar13,false,(MethodInfo *)0x0);
        if (pCVar14 != (Characters_BasicTitan_o *)0x0) {
          (pCVar14->fields).IsSit = bVar8;
          pSVar4 = (__this->fields)._titanInput;
          if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
             (pSVar13 = (pSVar4->fields).Sprint, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
            pCVar14 = (__this->fields)._titan;
            bVar8 = Settings_KeybindSetting__GetKey(pSVar13,false,(MethodInfo *)0x0);
            if (pCVar14 != (Characters_BasicTitan_o *)0x0) {
              (pCVar14->fields).IsSprint = bVar8;
              uStack_68 = CONCAT44(uStack_68._4_4_,(__this->fields)._enemyTimeLeft);
              fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              (__this->fields)._enemyTimeLeft = (float)uStack_68 - fVar16;
              pSVar4 = (__this->fields)._titanInput;
              if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                 (pSVar13 = (pSVar4->fields).CoverNape1, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                bVar8 = Settings_KeybindSetting__GetKeyUp(pSVar13,false,(MethodInfo *)0x0);
                if (bVar8) {
                  pCVar14 = (__this->fields)._titan;
                  if (pCVar14 == (Characters_BasicTitan_o *)0x0) goto label_05ba59a0;
                  Characters_BasicTitan__UncoverNape(pCVar14,(MethodInfo *)0x0);
                }
                pCVar14 = (__this->fields)._titan;
                if (pCVar14 != (Characters_BasicTitan_o *)0x0) {
                  bVar8 = (*(pCVar14->klass->vtable)._145_CanAction.methodPtr)
                                    (pCVar14,(pCVar14->klass->vtable)._145_CanAction.method);
                  if (bVar8) {
                    pSVar4 = (__this->fields)._titanInput;
                    if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                       (pSVar13 = (pSVar4->fields).Jump, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                      bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar13,false,(MethodInfo *)0x0);
                      if (bVar8) {
                        pCVar14 = (__this->fields)._titan;
                        if (pCVar14 != (Characters_BasicTitan_o *)0x0) {
                          (pCVar14->fields).JumpForce = 200.0;
                          ppSVar10 = &"AttackJump";
label_05ba5240:
                          (*(pCVar14->klass->vtable)._150_Attack.methodPtr)
                                    (pCVar14,*ppSVar10,(pCVar14->klass->vtable)._150_Attack.method);
                          return;
                        }
                      }
                      else {
                        pSVar4 = (__this->fields)._titanInput;
                        if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                           (pSVar13 = (pSVar4->fields).CoverNape1, pSVar13 != (Settings_KeybindSetting_o *)0x0
                           )) {
                          bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar13,false,(MethodInfo *)0x0);
                          if (bVar8) {
                            pCVar14 = (__this->fields)._titan;
                            if (pCVar14 != (Characters_BasicTitan_o *)0x0) {
                              Characters_BasicTitan__CoverNape(pCVar14,(MethodInfo *)0x0);
                              return;
                            }
                          }
                          else {
                            pSVar4 = (__this->fields)._titanInput;
                            if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                               (pSVar13 = (pSVar4->fields).Kick, pSVar13 != (Settings_KeybindSetting_o *)0x0))
                            {
                              bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar13,false,(MethodInfo *)0x0);
                              if (bVar8) {
                                pCVar14 = (__this->fields)._titan;
                                if (pCVar14 != (Characters_BasicTitan_o *)0x0) {
                                  ppSVar10 = &"AttackKick";
                                  goto label_05ba5240;
                                }
                              }
                              else {
                                pSVar4 = (__this->fields)._titanInput;
                                if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                                   (pSVar13 = (pSVar4->fields).AttackSwing,
                                   pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                  pMVar15 = (MethodInfo *)0x0;
                                  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar13,false,(MethodInfo *)0x0)
                                  ;
                                  if (bVar8) {
                                    Controllers_BasicTitanPlayerController__AttackSwing(__this,pMVar15);
                                    return;
                                  }
                                  pSVar4 = (__this->fields)._titanInput;
                                  if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                                     (pSVar13 = (pSVar4->fields).AttackGrabAirFar,
                                     pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                    pMVar15 = (MethodInfo *)0x0;
                                    bVar8 = Settings_KeybindSetting__GetKeyDown
                                                      (pSVar13,false,(MethodInfo *)0x0);
                                    if (bVar8) {
                                      Controllers_BasicTitanPlayerController__AttackGrabAirFar(__this,pMVar15)
                                      ;
                                      return;
                                    }
                                    pSVar4 = (__this->fields)._titanInput;
                                    if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                                       (pSVar13 = (pSVar4->fields).AttackGrabAir,
                                       pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                      pMVar15 = (MethodInfo *)0x0;
                                      bVar8 = Settings_KeybindSetting__GetKeyDown
                                                        (pSVar13,false,(MethodInfo *)0x0);
                                      if (bVar8) {
                                        Controllers_BasicTitanPlayerController__AttackGrabAir(__this,pMVar15);
                                        return;
                                      }
                                      pSVar4 = (__this->fields)._titanInput;
                                      if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                                         (pSVar13 = (pSVar4->fields).AttackGrabBody,
                                         pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                        pMVar15 = (MethodInfo *)0x0;
                                        bVar8 = Settings_KeybindSetting__GetKeyDown
                                                          (pSVar13,false,(MethodInfo *)0x0);
                                        if (bVar8) {
                                          Controllers_BasicTitanPlayerController__AttackGrabBody
                                                    (__this,pMVar15);
                                          return;
                                        }
                                        pSVar4 = (__this->fields)._titanInput;
                                        if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                                           (pSVar13 = (pSVar4->fields).AttackGrabCore,
                                           pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                          pMVar15 = (MethodInfo *)0x0;
                                          bVar8 = Settings_KeybindSetting__GetKeyDown
                                                            (pSVar13,false,(MethodInfo *)0x0);
                                          if (bVar8) {
                                            Controllers_BasicTitanPlayerController__AttackGrabCore
                                                      (__this,pMVar15);
                                            return;
                                          }
                                          pSVar4 = (__this->fields)._titanInput;
                                          if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                                             (pSVar13 = (pSVar4->fields).AttackGrabGround,
                                             pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                            pMVar15 = (MethodInfo *)0x0;
                                            bVar8 = Settings_KeybindSetting__GetKeyDown
                                                              (pSVar13,false,(MethodInfo *)0x0);
                                            if (bVar8) {
                                              Controllers_BasicTitanPlayerController__AttackGrabGround
                                                        (__this,pMVar15);
                                              return;
                                            }
                                            pSVar4 = (__this->fields)._titanInput;
                                            if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                                               (pSVar13 = (pSVar4->fields).AttackGrabHead,
                                               pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                              pMVar15 = (MethodInfo *)0x0;
                                              bVar8 = Settings_KeybindSetting__GetKeyDown
                                                                (pSVar13,false,(MethodInfo *)0x0);
                                              if (bVar8) {
                                                Controllers_BasicTitanPlayerController__AttackGrabHead
                                                          (__this,pMVar15);
                                                return;
                                              }
                                              pSVar4 = (__this->fields)._titanInput;
                                              if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                                                 (pSVar13 = (pSVar4->fields).AttackGrabHigh,
                                                 pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                                pMVar15 = (MethodInfo *)0x0;
                                                bVar8 = Settings_KeybindSetting__GetKeyDown
                                                                  (pSVar13,false,(MethodInfo *)0x0);
                                                if (bVar8) {
                                                  Controllers_BasicTitanPlayerController__AttackGrabHigh
                                                            (__this,pMVar15);
                                                  return;
                                                }
                                                pSVar4 = (__this->fields)._titanInput;
                                                if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                                                   (pSVar13 = (pSVar4->fields).AttackBrushChest,
                                                   pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                                  pMVar15 = (MethodInfo *)0x0;
                                                  bVar8 = Settings_KeybindSetting__GetKeyDown
                                                                    (pSVar13,false,(MethodInfo *)0x0);
                                                  if (bVar8) {
                                                    Controllers_BasicTitanPlayerController__AttackBrushChest
                                                              (__this,pMVar15);
                                                    return;
                                                  }
                                                  pSVar4 = (__this->fields)._titanInput;
                                                  if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                                                     (pSVar13 = (pSVar4->fields).AttackRockThrow,
                                                     pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                                    bVar8 = Settings_KeybindSetting__GetKeyDown
                                                                      (pSVar13,false,(MethodInfo *)0x0);
                                                    if (bVar8) {
                                                      if (0.0 < (__this->fields)._rockCooldownLeft) {
                                                        return;
                                                      }
                                                      pCVar14 = (__this->fields)._titan;
                                                      if (pCVar14 != (Characters_BasicTitan_o *)0x0) {
                                                        if ((pCVar14->fields).Grounded == false) {
                                                          return;
                                                        }
                                                        (*(pCVar14->klass->vtable)._150_Attack.methodPtr)
                                                                  (pCVar14,"AttackRockThrow",
                                                                   (pCVar14->klass->vtable)._150_Attack.method
                                                                  );
                                                        (__this->fields)._rockCooldownLeft =
                                                             (__this->fields).RockCooldown;
                                                        return;
                                                      }
                                                    }
                                                    else {
                                                      pSVar4 = (__this->fields)._titanInput;
                                                      if (((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                                                          (pSVar5 = (pSVar4->fields).Settings,
                                                          pSVar5 != (
                                                       System_Collections_Specialized_OrderedDictionary_o *)
                                                       0x0)) && (pSVar11 = 
                                                       System_Collections_Specialized_OrderedDictionary__get_Keys
                                                                 (pSVar5,(MethodInfo *)0x0),
                                                       pSVar11 != (System_Collections_ICollection_o *)0x0)) {
                                                        lStack_70 = il2cpp_runtime_helper_02ad5a70(0,
                                                       TypeInfo_System_Collections_IEnumerable,pSVar11);
                                                       uStack_50 = 0;
                                                       plStack_48 = &lStack_70;
                                                       puStack_40 = &uStack_38;
                                                       while( true ) {
                                                         if (lStack_70 == 0) {
                                                           ThrowNullReferenceException();
                                                         }
                                                         cVar9 = il2cpp_runtime_helper_02ad5af0(0,
                                                       TypeInfo_System_Collections_IEnumerator);
                                                       if (cVar9 == '\0') {
                                                         il2cpp_runtime_helper_02fd8580(&uStack_50);
                                                         return;
                                                       }
                                                       if (lStack_70 == 0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       __this_01 = (System_String_o *)
                                                                   il2cpp_runtime_helper_02ad5a70(1,
                                                       TypeInfo_System_Collections_IEnumerator);
                                                       if (__this_01 == (System_String_o *)0x0) break;
                                                       if (__this_01->klass != g_data_07556758) {
                                                         il2cpp_codegen_raise_invalid_cast_exception
                                                                   (__this_01);
                                                       }
                                                       bVar8 = System_String__StartsWith
                                                                         (__this_01,"Attack",
                                                                          (MethodInfo *)0x0);
                                                       if (bVar8) {
                                                         pSVar4 = (__this->fields)._titanInput;
                                                         if (pSVar4 == (Settings_TitanInputSettings_o *)0x0) {
                                                           ThrowNullReferenceException();
                                                         }
                                                         pSVar5 = (pSVar4->fields).Settings;
                                                         if (pSVar5 == (
                                                       System_Collections_Specialized_OrderedDictionary_o *)
                                                       0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       obj = 
                                                       System_Collections_Specialized_OrderedDictionary__get_Item
                                                                 (pSVar5,(Il2CppObject *)__this_01,
                                                                  (MethodInfo *)0x0);
                                                       pIVar12 = il2cpp_codegen_is_inst_class
                                                                           (obj,(Il2CppClass *)
                                                                                                                                                                
                                                       TypeInfo_Settings_KeybindSetting);
                                                       if (pIVar12 == (Il2CppObject *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       pSVar13 = (Settings_KeybindSetting_o *)
                                                                 il2cpp_codegen_is_inst_class
                                                                           (obj,(Il2CppClass *)
                                                                                                                                                                
                                                       TypeInfo_Settings_KeybindSetting);
                                                       bVar8 = Settings_KeybindSetting__GetKeyDown
                                                                         (pSVar13,false,(MethodInfo *)0x0);
                                                       if (bVar8) {
                                                         pCVar14 = (__this->fields)._titan;
                                                         if (pCVar14 == (Characters_BasicTitan_o *)0x0) {
                                                           ThrowNullReferenceException();
                                                         }
                                                         (*(pCVar14->klass->vtable)._150_Attack.methodPtr)
                                                                   (pCVar14,__this_01,
                                                                    (pCVar14->klass->vtable)._150_Attack.
                                                                    method);
                                                       }
                                                       }
                                                       }
                                                       ThrowNullReferenceException();
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
                  else {
                    pCVar14 = (__this->fields)._titan;
                    if (pCVar14 != (Characters_BasicTitan_o *)0x0) {
                      if ((pCVar14->fields).State != 4) {
                        return;
                      }
                      pSVar4 = (__this->fields)._titanInput;
                      if ((pSVar4 != (Settings_TitanInputSettings_o *)0x0) &&
                         (pSVar13 = (pSVar4->fields).Jump, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                        bVar8 = Settings_KeybindSetting__GetKeyUp(pSVar13,false,(MethodInfo *)0x0);
                        if (!bVar8) {
                          return;
                        }
                        pCVar14 = (__this->fields)._titan;
                        if (Il2CppMethodInitialized_0753e72c == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                          Il2CppMethodInitialized_0753e72c = '\x01';
                        }
                        if (pCVar14 != (Characters_BasicTitan_o *)0x0) {
                          pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
                          fVar16 = (pUVar6->upVector).fields.z;
                          uVar2._0_4_ = (pUVar6->upVector).fields.y;
                          (pCVar14->fields)._jumpDirection.fields.x = (pUVar6->upVector).fields.x;
                          (pCVar14->fields)._jumpDirection.fields.y = (float)uVar2;
                          (pCVar14->fields)._jumpDirection.fields.z = fVar16;
                          pCVar14 = (__this->fields)._titan;
                          if (pCVar14 != (Characters_BasicTitan_o *)0x0) {
                            (pCVar14->fields).JumpForce = 120.0;
                            if ((pCVar14->fields).HasDirection == false) {
label_05ba5991:
                              Characters_BasicTitan__JumpImmediate(pCVar14,(MethodInfo *)0x0);
                              return;
                            }
                            pUVar7 = (pCVar14->fields).Cache;
                            if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
                               (__this_00 = (pUVar7->fields).Transform,
                               __this_00 != (UnityEngine_Transform_o *)0x0)) {
                              uStack_68._0_4_ = (pCVar14->fields)._jumpDirection.fields.x;
                              uStack_68._4_4_ = (pCVar14->fields)._jumpDirection.fields.y;
                              uStack_60 = 0;
                              fVar16 = (pCVar14->fields)._jumpDirection.fields.z;
                              UVar19 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
                              (pCVar14->fields)._jumpDirection.fields.x =
                                   UVar19.fields.x * 0.5 + (float)uStack_68;
                              (pCVar14->fields)._jumpDirection.fields.y =
                                   UVar19.fields.y * 0.5 + uStack_68._4_4_;
                              (pCVar14->fields)._jumpDirection.fields.z = UVar19.fields.z * 0.5 + fVar16;
                              pCVar14 = (__this->fields)._titan;
                              if (pCVar14 != (Characters_BasicTitan_o *)0x0) {
                                if (Il2CppMethodInitialized_0753e729 == '\0') {
                                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                                  Il2CppMethodInitialized_0753e729 = '\x01';
                                }
                                fVar16 = (pCVar14->fields)._jumpDirection.fields.x;
                                uVar2._0_4_ = (pCVar14->fields)._jumpDirection.fields.y;
                                uVar2._4_4_ = (pCVar14->fields)._jumpDirection.fields.z;
                                if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                                  uStack_60 = 0;
                                  uStack_68 = uVar2;
                                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                                  uVar2._0_4_ = (float)uStack_68;
                                  uVar2._4_4_ = uStack_68._4_4_;
                                }
                                uVar2._4_4_ = uVar2._4_4_ * uVar2._4_4_;
                                fVar16 = uVar2._4_4_ + fVar16 * fVar16 + (float)uVar2 * (float)uVar2;
                                if (fVar16 < 0.0) {
                                  fVar16 = sqrtf(fVar16);
                                  uVar2._4_4_ = extraout_XMM0_Db;
                                }
                                else {
                                  fVar16 = SQRT(fVar16);
                                }
                                if (fVar16 <= 1e-05) {
                                  (pCVar14->fields)._jumpDirection.fields.x = 0.0;
                                  (pCVar14->fields)._jumpDirection.fields.y = 0.0;
                                  fVar16 = 0.0;
                                }
                                else {
                                  uVar1 = (pCVar14->fields)._jumpDirection.fields.x;
                                  uVar3 = (pCVar14->fields)._jumpDirection.fields.y;
                                  auVar17._4_4_ = uVar3;
                                  auVar17._0_4_ = uVar1;
                                  auVar17._8_8_ = 0;
                                  auVar18._4_4_ = fVar16;
                                  auVar18._0_4_ = fVar16;
                                  auVar18._8_4_ = uVar2._4_4_;
                                  auVar18._12_4_ = uVar2._4_4_;
                                  auVar18 = divps(auVar17,auVar18);
                                  (pCVar14->fields)._jumpDirection.fields.x = (float)auVar18._0_4_;
                                  (pCVar14->fields)._jumpDirection.fields.y = (float)auVar18._4_4_;
                                  fVar16 = (pCVar14->fields)._jumpDirection.fields.z / fVar16;
                                }
                                (pCVar14->fields)._jumpDirection.fields.z = fVar16;
                                pCVar14 = (__this->fields)._titan;
                                if (pCVar14 != (Characters_BasicTitan_o *)0x0) goto label_05ba5991;
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
label_05ba59a0:
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackSwing
// il2cpp: void Controllers_BasicTitanPlayerController__AttackSwing (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x5ba59d0

void Controllers_BasicTitanPlayerController__AttackSwing
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_0754747c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwingL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwingR");
    Il2CppMethodInitialized_0754747c = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        ppSVar3 = &"AttackSwingR";
      }
      else {
        ppSVar3 = &"AttackSwingL";
      }
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,*ppSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabAirFar
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabAirFar (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x5ba5a60

void Controllers_BasicTitanPlayerController__AttackGrabAirFar
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_0754747d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFarL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFarR");
    Il2CppMethodInitialized_0754747d = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        ppSVar3 = &"AttackGrabAirFarL";
      }
      else {
        ppSVar3 = &"AttackGrabAirFarR";
      }
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,*ppSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabAir
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabAir (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x5ba5af0

void Controllers_BasicTitanPlayerController__AttackGrabAir
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_0754747e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirR");
    Il2CppMethodInitialized_0754747e = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        ppSVar3 = &"AttackGrabAirL";
      }
      else {
        ppSVar3 = &"AttackGrabAirR";
      }
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,*ppSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabBody
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabBody (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x5ba5b80

void Controllers_BasicTitanPlayerController__AttackGrabBody
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BasicTitan_o *pCVar2;
  System_Single_array *pSVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_0754747f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabStomachL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabStomachR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBackR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBackL");
    Il2CppMethodInitialized_0754747f = '\x01';
  }
  pSVar3 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar3 != (System_Single_array *)0x0) {
    if ((int)pSVar3->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    fVar1 = pSVar3->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (fVar1 <= 90.0) {
        ppSVar4 = &"AttackGrabBackL";
        if (-90.0 <= fVar1) {
          ppSVar4 = &"AttackGrabStomachL";
        }
        if (0.0 <= fVar1) {
          ppSVar4 = &"AttackGrabBackL";
        }
      }
      else {
        ppSVar4 = &"AttackGrabBackR";
      }
    }
    else {
      ppSVar4 = &"AttackGrabStomachR";
    }
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 != (Characters_BasicTitan_o *)0x0) {
      (*(pCVar2->klass->vtable)._150_Attack.methodPtr)
                (pCVar2,*ppSVar4,(pCVar2->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabCore
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabCore (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x5ba5c60

void Controllers_BasicTitanPlayerController__AttackGrabCore
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547480 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCoreR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCoreL");
    Il2CppMethodInitialized_07547480 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        ppSVar3 = &"AttackGrabCoreL";
      }
      else {
        ppSVar3 = &"AttackGrabCoreR";
      }
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,*ppSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabGround
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabGround (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x5ba5cf0

void Controllers_BasicTitanPlayerController__AttackGrabGround
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BasicTitan_o *pCVar2;
  System_Single_array *pSVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_07547481 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundBackL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundFrontL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundFrontR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundBackR");
    Il2CppMethodInitialized_07547481 = '\x01';
  }
  pSVar3 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar3 != (System_Single_array *)0x0) {
    if ((int)pSVar3->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    fVar1 = pSVar3->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (fVar1 <= 90.0) {
        ppSVar4 = &"AttackGrabGroundBackL";
        if (-90.0 <= fVar1) {
          ppSVar4 = &"AttackGrabGroundFrontL";
        }
        if (0.0 <= fVar1) {
          ppSVar4 = &"AttackGrabGroundBackL";
        }
      }
      else {
        ppSVar4 = &"AttackGrabGroundBackR";
      }
    }
    else {
      ppSVar4 = &"AttackGrabGroundFrontR";
    }
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 != (Characters_BasicTitan_o *)0x0) {
      (*(pCVar2->klass->vtable)._150_Attack.methodPtr)
                (pCVar2,*ppSVar4,(pCVar2->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabHead
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabHead (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x5ba5dd0

void Controllers_BasicTitanPlayerController__AttackGrabHead
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BasicTitan_o *pCVar2;
  System_Single_array *pSVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_07547482 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadBackL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadBackR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadFrontL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadFrontR");
    Il2CppMethodInitialized_07547482 = '\x01';
  }
  pSVar3 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar3 != (System_Single_array *)0x0) {
    if ((int)pSVar3->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    fVar1 = pSVar3->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (fVar1 <= 90.0) {
        ppSVar4 = &"AttackGrabHeadBackL";
        if (-90.0 <= fVar1) {
          ppSVar4 = &"AttackGrabHeadFrontL";
        }
        if (0.0 <= fVar1) {
          ppSVar4 = &"AttackGrabHeadBackL";
        }
      }
      else {
        ppSVar4 = &"AttackGrabHeadBackR";
      }
    }
    else {
      ppSVar4 = &"AttackGrabHeadFrontR";
    }
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 != (Characters_BasicTitan_o *)0x0) {
      (*(pCVar2->klass->vtable)._150_Attack.methodPtr)
                (pCVar2,*ppSVar4,(pCVar2->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabHigh
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabHigh (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x5ba5eb0

void Controllers_BasicTitanPlayerController__AttackGrabHigh
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547483 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHighR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHighL");
    Il2CppMethodInitialized_07547483 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        ppSVar3 = &"AttackGrabHighL";
      }
      else {
        ppSVar3 = &"AttackGrabHighR";
      }
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,*ppSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackBrushChest
// il2cpp: void Controllers_BasicTitanPlayerController__AttackBrushChest (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x5ba5f40

void Controllers_BasicTitanPlayerController__AttackBrushChest
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547484 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChestL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChestR");
    Il2CppMethodInitialized_07547484 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        ppSVar3 = &"AttackBrushChestR";
      }
      else {
        ppSVar3 = &"AttackBrushChestL";
      }
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,*ppSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$.ctor
// il2cpp: void Controllers_BasicTitanPlayerController___ctor (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x5ba5fd0

void Controllers_BasicTitanPlayerController___ctor
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  (__this->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor((Controllers_BasePlayerController_o *)__this,method);
  return;
}


