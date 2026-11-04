// Type: Controllers.BasicTitanPlayerController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/BasicTitanPlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/BasicTitanPlayerController.cs
// --------------------------------

// Controllers.BasicTitanPlayerController$$Awake
// il2cpp: void Controllers_BasicTitanPlayerController__Awake (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x1820fa070

void Controllers_BasicTitanPlayerController__Awake
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_TitanInputSettings_o *value;
  Characters_BasicTitanComponentCache_o *pCVar2;
  Characters_BaseHitbox_o *pCVar3;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  Characters_BasicTitan_o *pCVar4;
  
  if (Il2CppMethodInitialized_184346aad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirL");
    Il2CppMethodInitialized_184346aad = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  pCVar4 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasicTitan);
  (__this->fields)._titan = pCVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titan,pCVar4);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar1 != (Settings_InputSettings_o *)0x0) {
    value = (pSVar1->fields).Titan;
    (__this->fields)._titanInput = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._titanInput,value);
    pCVar4 = (__this->fields)._titan;
    if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
      (pCVar4->fields).RotateSpeed = 8.0;
      pCVar4 = (__this->fields)._titan;
      if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
        (pCVar4->fields).RunSpeedBase = 12.0;
        pCVar4 = (__this->fields)._titan;
        if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
          (pCVar4->fields).RunSpeedPerLevel = 18.0;
          pCVar4 = (__this->fields)._titan;
          if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
            (pCVar4->fields).WalkSpeedBase = 5.0;
            pCVar4 = (__this->fields)._titan;
            if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
              (pCVar4->fields).WalkSpeedPerLevel = 1.0;
              pCVar4 = (__this->fields)._titan;
              if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
                (pCVar4->fields).BellyFlopTime = 2.6;
                pCVar4 = (__this->fields)._titan;
                if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
                  (pCVar4->fields).AttackSpeedMultiplier = 1.2;
                  pCVar4 = (__this->fields)._titan;
                  if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
                    (pCVar4->fields).JumpForce = 200.0;
                    pCVar4 = (__this->fields)._titan;
                    if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
                      (pCVar4->fields).AttackPause = 0.1;
                      pCVar4 = (__this->fields)._titan;
                      if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
                        (pCVar4->fields).ActionPause = 0.1;
                        pCVar4 = (__this->fields)._titan;
                        if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
                          (pCVar4->fields).RockThrow1Speed = 450.0;
                          pCVar4 = (__this->fields)._titan;
                          if (((pCVar4 != (Characters_BasicTitan_o *)0x0) &&
                              (pCVar2 = (pCVar4->fields).BasicCache,
                              pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0)) &&
                             (pCVar3 = (pCVar2->fields).HandLHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)
                             ) {
                            Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
                            pCVar4 = (__this->fields)._titan;
                            if (((pCVar4 != (Characters_BasicTitan_o *)0x0) &&
                                (pCVar2 = (pCVar4->fields).BasicCache,
                                pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0)) &&
                               (pCVar3 = (pCVar2->fields).HandRHitbox,
                               pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
                              Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
                              pCVar4 = (__this->fields)._titan;
                              if (((pCVar4 != (Characters_BasicTitan_o *)0x0) &&
                                  (pCVar2 = (pCVar4->fields).BasicCache,
                                  pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0)) &&
                                 (pCVar3 = (pCVar2->fields).FootLHitbox,
                                 pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
                                Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
                                pCVar4 = (__this->fields)._titan;
                                if (((pCVar4 != (Characters_BasicTitan_o *)0x0) &&
                                    (pCVar2 = (pCVar4->fields).BasicCache,
                                    pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0)) &&
                                   (pCVar3 = (pCVar2->fields).FootRHitbox,
                                   pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
                                  Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
                                  pCVar4 = (__this->fields)._titan;
                                  if (((pCVar4 != (Characters_BasicTitan_o *)0x0) &&
                                      (pCVar2 = (pCVar4->fields).BasicCache,
                                      pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0)) &&
                                     (pCVar3 = (pCVar2->fields).MouthHitbox,
                                     pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
                                    Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.2,(MethodInfo *)0x0);
                                    pCVar4 = (__this->fields)._titan;
                                    if ((pCVar4 != (Characters_BasicTitan_o *)0x0) &&
                                       (__this_00 = (pCVar4->fields).AttackSpeeds,
                                       __this_00 !=
                                       (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
                                      System_Collections_Generic_Dictionary_object__float___set_Item
                                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                 __this_00,(Il2CppObject *)"AttackGrabAirL",0.7,
                                                 (MethodInfo_1488DA0 *)
                                                 MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item
                                                );
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
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$UpdateUI
// il2cpp: void Controllers_BasicTitanPlayerController__UpdateUI (Controllers_BasicTitanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x1820fb100

void Controllers_BasicTitanPlayerController__UpdateUI
               (Controllers_BasicTitanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  System_String_o *text;
  
  if (Il2CppMethodInitialized_184346aae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_184346aae = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UI_CursorManager__SetCrosshairText(text,(MethodInfo *)0x0);
  UI_CursorManager__SetCrosshairColor(true,(MethodInfo *)0x0);
  return;
}


// Controllers.BasicTitanPlayerController$$UpdateActionInput
// il2cpp: void Controllers_BasicTitanPlayerController__UpdateActionInput (Controllers_BasicTitanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x1820fa370
// eh: try 0x1820fa820..0x1820fb0e9 -> pad 0x183317fd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820fa971: lea rcx, [rsp + 0x38]
// asm:   0x1820fa976: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1820fa97b: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820fa980: test rcx, rcx
// asm:   0x1820fa983: jne 0x1820fb0e9
// asm:   0x1820fa989: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x1820faba1: jmp 0x1820fafb8
// asm:   0x1820fac04: jmp 0x1820fafb8
// asm:   0x1820fac7f: mov rdx, qword ptr [rip + 0x1fbcbc2]  ; "AttackGrabHeadFrontR"
// asm:   0x1820fac86: jmp 0x1820fafb8
// asm:   0x1820facaa: mov rdx, qword ptr [rip + 0x1fbc8f7]  ; "AttackGrabHeadBackL"
// asm:   0x1820facb1: jmp 0x1820fafb8
// asm:   0x1820facb6: mov rdx, qword ptr [rip + 0x1fbc9cb]  ; "AttackGrabHeadBackR"
// asm:   0x1820facbd: jmp 0x1820fafb8
// asm:   0x1820fad38: mov rdx, qword ptr [rip + 0x1fbc6a9]  ; "AttackGrabGroundFrontR"
// asm:   0x1820fad3f: jmp 0x1820fafb8
// asm:   0x1820fad63: mov rdx, qword ptr [rip + 0x1fbc3de]  ; "AttackGrabGroundBackL"
// asm:   0x1820fad6a: jmp 0x1820fafb8
// asm:   0x1820fad6f: mov rdx, qword ptr [rip + 0x1fbc4b2]  ; "AttackGrabGroundBackR"
// asm:   0x1820fad76: jmp 0x1820fafb8
// asm:   0x1820fadd9: jmp 0x1820fafb8
// asm:   0x1820fae54: mov rdx, qword ptr [rip + 0x1fbd0ed]  ; "AttackGrabStomachR"
// asm:   0x1820fae5b: jmp 0x1820fafb8
// asm:   0x1820fae7f: mov rdx, qword ptr [rip + 0x1fbba02]  ; "AttackGrabBackL"
// asm:   0x1820fae86: jmp 0x1820fafb8
// asm:   0x1820fae8b: mov rdx, qword ptr [rip + 0x1fbbad6]  ; "AttackGrabBackR"
// asm:   0x1820fae92: jmp 0x1820fafb8
// asm:   0x1820faef5: jmp 0x1820fafb8
// asm:   0x1820faf58: jmp 0x1820fafb8
// asm:   0x1820fb022: xor edx, edx
// asm:   0x1820fb024: call 0x182185030  ; Characters_BasicTitan__CoverNape()
// asm:   0x1820fb029: jmp 0x1820fafd5
// asm:   0x1820fb0a2: xor edx, edx
// asm:   0x1820fb0a4: call 0x182187fb0  ; Characters_BasicTitan__JumpImmediate()
// asm:   0x1820fb0a9: jmp 0x1820fafd5
// asm:   0x1820fb0e9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void Controllers_BasicTitanPlayerController__UpdateActionInput
               (Controllers_BasicTitanPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  Settings_TitanInputSettings_o *pSVar6;
  System_Collections_Specialized_OrderedDictionary_o *pSVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UnityEngine_Transform_o *__this_00;
  bool bVar10;
  Il2CppObject *obj;
  void *pvVar11;
  System_String_o *pSVar12;
  Settings_KeybindSetting_o *pSVar13;
  UnityEngine_Vector3_o *pUVar14;
  System_Single_array *pSVar15;
  Characters_BasicTitan_c *pCVar16;
  Characters_BasicTitan_o *pCVar17;
  System_String_o *__this_01;
  MethodInfo *pMVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  Il2CppObject *local_res20;
  Il2CppObject *local_68 [2];
  undefined1 local_58 [16];
  Il2CppObject **local_48;
  
  if (Il2CppMethodInitialized_184346aaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackJump");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    Il2CppMethodInitialized_184346aaf = '\x01';
  }
  local_res20 = (Il2CppObject *)0x0;
  local_68[0] = (Il2CppObject *)0x0;
  fVar20 = (__this->fields)._rockCooldownLeft;
  fVar19 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._rockCooldownLeft = fVar20 - fVar19;
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,inMenu,(MethodInfo *)0x0);
  if (inMenu) {
    return;
  }
  pSVar6 = (__this->fields)._titanInput;
  if ((pSVar6 != (Settings_TitanInputSettings_o *)0x0) &&
     (pSVar13 = (pSVar6->fields).Walk, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
    pCVar17 = (__this->fields)._titan;
    bVar10 = Settings_KeybindSetting__GetKey(pSVar13,false,(MethodInfo *)0x0);
    if (pCVar17 != (Characters_BasicTitan_o *)0x0) {
      (pCVar17->fields).IsWalk = bVar10;
      pSVar6 = (__this->fields)._titanInput;
      if ((pSVar6 != (Settings_TitanInputSettings_o *)0x0) &&
         (pSVar13 = (pSVar6->fields).Sit, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
        pCVar17 = (__this->fields)._titan;
        bVar10 = Settings_KeybindSetting__GetKey(pSVar13,false,(MethodInfo *)0x0);
        if (pCVar17 != (Characters_BasicTitan_o *)0x0) {
          (pCVar17->fields).IsSit = bVar10;
          pSVar6 = (__this->fields)._titanInput;
          if ((pSVar6 != (Settings_TitanInputSettings_o *)0x0) &&
             (pSVar13 = (pSVar6->fields).Sprint, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
            pCVar17 = (__this->fields)._titan;
            bVar10 = Settings_KeybindSetting__GetKey(pSVar13,false,(MethodInfo *)0x0);
            if (pCVar17 != (Characters_BasicTitan_o *)0x0) {
              (pCVar17->fields).IsSprint = bVar10;
              fVar20 = (__this->fields)._enemyTimeLeft;
              fVar19 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              (__this->fields)._enemyTimeLeft = fVar20 - fVar19;
              pSVar6 = (__this->fields)._titanInput;
              if ((pSVar6 != (Settings_TitanInputSettings_o *)0x0) &&
                 (pSVar13 = (pSVar6->fields).CoverNape1, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                bVar10 = Settings_KeybindSetting__GetKeyUp(pSVar13,false,(MethodInfo *)0x0);
                if (bVar10) {
                  pCVar17 = (__this->fields)._titan;
                  if (pCVar17 == (Characters_BasicTitan_o *)0x0) goto label_1820fb0ae;
                  Characters_BasicTitan__UncoverNape(pCVar17,(MethodInfo *)0x0);
                }
                pCVar17 = (__this->fields)._titan;
                if (pCVar17 != (Characters_BasicTitan_o *)0x0) {
                  bVar10 = (*(pCVar17->klass->vtable)._145_CanAction.methodPtr)
                                     (pCVar17,(pCVar17->klass->vtable)._145_CanAction.method);
                  if (bVar10) {
                    pSVar6 = (__this->fields)._titanInput;
                    if ((pSVar6 == (Settings_TitanInputSettings_o *)0x0) ||
                       (pSVar13 = (pSVar6->fields).Jump, pSVar13 == (Settings_KeybindSetting_o *)0x0))
                    goto label_1820fb0ae;
                    bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar13,false,(MethodInfo *)0x0);
                    if (bVar10) {
                      pCVar17 = (__this->fields)._titan;
                      if (pCVar17 == (Characters_BasicTitan_o *)0x0) goto label_1820fb0ae;
                      (pCVar17->fields).JumpForce = 200.0;
                      pCVar17 = (__this->fields)._titan;
                      if (pCVar17 == (Characters_BasicTitan_o *)0x0) goto label_1820fb0ae;
                      pCVar16 = pCVar17->klass;
                      pMVar18 = (pCVar16->vtable)._150_Attack.method;
                      pSVar12 = "AttackJump";
                    }
                    else {
                      pSVar6 = (__this->fields)._titanInput;
                      if ((pSVar6 == (Settings_TitanInputSettings_o *)0x0) ||
                         (pSVar13 = (pSVar6->fields).CoverNape1, pSVar13 == (Settings_KeybindSetting_o *)0x0))
                      goto label_1820fb0ae;
                      bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar13,false,(MethodInfo *)0x0);
                      if (bVar10) {
                        pCVar17 = (__this->fields)._titan;
                        if (pCVar17 != (Characters_BasicTitan_o *)0x0) {
                          Characters_BasicTitan__CoverNape(pCVar17,(MethodInfo *)0x0);
                          return;
                        }
                        goto label_1820fb0ae;
                      }
                      pSVar6 = (__this->fields)._titanInput;
                      if ((pSVar6 == (Settings_TitanInputSettings_o *)0x0) ||
                         (pSVar13 = (pSVar6->fields).Kick, pSVar13 == (Settings_KeybindSetting_o *)0x0))
                      goto label_1820fb0ae;
                      bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar13,false,(MethodInfo *)0x0);
                      if (bVar10) {
                        pCVar17 = (__this->fields)._titan;
                        if (pCVar17 == (Characters_BasicTitan_o *)0x0) goto label_1820fb0ae;
                        pCVar16 = pCVar17->klass;
                        pMVar18 = (pCVar16->vtable)._150_Attack.method;
                        pSVar12 = "AttackKick";
                      }
                      else {
                        pSVar6 = (__this->fields)._titanInput;
                        if ((pSVar6 == (Settings_TitanInputSettings_o *)0x0) ||
                           (pSVar13 = (pSVar6->fields).AttackSwing,
                           pSVar13 == (Settings_KeybindSetting_o *)0x0)) goto label_1820fb0ae;
                        bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar13,false,(MethodInfo *)0x0);
                        if (bVar10) {
                          if (Il2CppMethodInitialized_184346ab0 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&"AttackSwingL");
                            il2cpp_codegen_initialize_runtime_metadata(&"AttackSwingR");
                            Il2CppMethodInitialized_184346ab0 = '\x01';
                          }
                          pSVar15 = Controllers_BasePlayerController__GetAimAngles
                                              ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0)
                          ;
                          if (pSVar15 == (System_Single_array *)0x0) goto label_1820fb0ae;
                          if ((int)pSVar15->max_length == 0) {
label_1820fb0ef:
                            ThrowIndexOutOfRangeException();
                          }
                          pSVar12 = "AttackSwingL";
                          if (pSVar15->m_Items[0] <= 0.0) {
                            pSVar12 = "AttackSwingR";
                          }
                        }
                        else {
                          pSVar6 = (__this->fields)._titanInput;
                          if ((pSVar6 == (Settings_TitanInputSettings_o *)0x0) ||
                             (pSVar13 = (pSVar6->fields).AttackGrabAirFar,
                             pSVar13 == (Settings_KeybindSetting_o *)0x0)) goto label_1820fb0ae;
                          bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar13,false,(MethodInfo *)0x0);
                          if (bVar10) {
                            if (Il2CppMethodInitialized_184346ab1 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFarL");
                              il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFarR");
                              Il2CppMethodInitialized_184346ab1 = '\x01';
                            }
                            pSVar15 = Controllers_BasePlayerController__GetAimAngles
                                                ((Controllers_BasePlayerController_o *)__this,
                                                 (MethodInfo *)0x0);
                            if (pSVar15 == (System_Single_array *)0x0) goto label_1820fb0ae;
                            if ((int)pSVar15->max_length == 0) goto label_1820fb0ef;
                            pSVar12 = "AttackGrabAirFarR";
                            if (pSVar15->m_Items[0] <= 0.0) {
                              pSVar12 = "AttackGrabAirFarL";
                            }
                          }
                          else {
                            pSVar6 = (__this->fields)._titanInput;
                            if ((pSVar6 == (Settings_TitanInputSettings_o *)0x0) ||
                               (pSVar13 = (pSVar6->fields).AttackGrabAir,
                               pSVar13 == (Settings_KeybindSetting_o *)0x0)) goto label_1820fb0ae;
                            bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar13,false,(MethodInfo *)0x0);
                            if (bVar10) {
                              if (Il2CppMethodInitialized_184346ab2 == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirL");
                                il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirR");
                                Il2CppMethodInitialized_184346ab2 = '\x01';
                              }
                              pSVar15 = Controllers_BasePlayerController__GetAimAngles
                                                  ((Controllers_BasePlayerController_o *)__this,
                                                   (MethodInfo *)0x0);
                              if (pSVar15 == (System_Single_array *)0x0) goto label_1820fb0ae;
                              if ((int)pSVar15->max_length == 0) goto label_1820fb0ef;
                              pSVar12 = "AttackGrabAirR";
                              if (pSVar15->m_Items[0] <= 0.0) {
                                pSVar12 = "AttackGrabAirL";
                              }
                            }
                            else {
                              pSVar6 = (__this->fields)._titanInput;
                              if ((pSVar6 == (Settings_TitanInputSettings_o *)0x0) ||
                                 (pSVar13 = (pSVar6->fields).AttackGrabBody,
                                 pSVar13 == (Settings_KeybindSetting_o *)0x0)) goto label_1820fb0ae;
                              bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar13,false,(MethodInfo *)0x0);
                              if (bVar10) {
                                if (Il2CppMethodInitialized_184346ab3 == '\0') {
                                  il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabStomachL");
                                  il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabStomachR");
                                  il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBackR");
                                  il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBackL");
                                  Il2CppMethodInitialized_184346ab3 = '\x01';
                                }
                                pSVar15 = Controllers_BasePlayerController__GetAimAngles
                                                    ((Controllers_BasePlayerController_o *)__this,
                                                     (MethodInfo *)0x0);
                                if (pSVar15 == (System_Single_array *)0x0) goto label_1820fb0ae;
                                if ((int)pSVar15->max_length == 0) goto label_1820fb0ef;
                                fVar20 = pSVar15->m_Items[0];
                                if ((((fVar20 <= 0.0) || (pSVar12 = "AttackGrabStomachR", 90.0 < fVar20)) &&
                                    (pSVar12 = "AttackGrabBackR", fVar20 <= 90.0)) &&
                                   ((pSVar12 = "AttackGrabBackL", fVar20 < 0.0 && (-90.0 <= fVar20)))) {
                                  pSVar12 = "AttackGrabStomachL";
                                }
                              }
                              else {
                                pSVar6 = (__this->fields)._titanInput;
                                if ((pSVar6 == (Settings_TitanInputSettings_o *)0x0) ||
                                   (pSVar13 = (pSVar6->fields).AttackGrabCore,
                                   pSVar13 == (Settings_KeybindSetting_o *)0x0)) goto label_1820fb0ae;
                                bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar13,false,(MethodInfo *)0x0);
                                if (bVar10) {
                                  if (Il2CppMethodInitialized_184346ab4 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCoreR");
                                    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCoreL");
                                    Il2CppMethodInitialized_184346ab4 = '\x01';
                                  }
                                  pSVar15 = Controllers_BasePlayerController__GetAimAngles
                                                      ((Controllers_BasePlayerController_o *)__this,
                                                       (MethodInfo *)0x0);
                                  if (pSVar15 == (System_Single_array *)0x0) goto label_1820fb0ae;
                                  if ((int)pSVar15->max_length == 0) goto label_1820fb0ef;
                                  pSVar12 = "AttackGrabCoreR";
                                  if (pSVar15->m_Items[0] <= 0.0) {
                                    pSVar12 = "AttackGrabCoreL";
                                  }
                                }
                                else {
                                  pSVar6 = (__this->fields)._titanInput;
                                  if ((pSVar6 == (Settings_TitanInputSettings_o *)0x0) ||
                                     (pSVar13 = (pSVar6->fields).AttackGrabGround,
                                     pSVar13 == (Settings_KeybindSetting_o *)0x0)) goto label_1820fb0ae;
                                  bVar10 = Settings_KeybindSetting__GetKeyDown
                                                     (pSVar13,false,(MethodInfo *)0x0);
                                  if (bVar10) {
                                    if (Il2CppMethodInitialized_184346ab5 == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundBackL");
                                      il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundFrontL");
                                      il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundFrontR");
                                      il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundBackR");
                                      Il2CppMethodInitialized_184346ab5 = '\x01';
                                    }
                                    pSVar15 = Controllers_BasePlayerController__GetAimAngles
                                                        ((Controllers_BasePlayerController_o *)__this,
                                                         (MethodInfo *)0x0);
                                    if (pSVar15 == (System_Single_array *)0x0) goto label_1820fb0ae;
                                    if ((int)pSVar15->max_length == 0) goto label_1820fb0ef;
                                    fVar20 = pSVar15->m_Items[0];
                                    if ((((fVar20 <= 0.0) || (pSVar12 = "AttackGrabGroundFrontR", 90.0 < fVar20))
                                        && (pSVar12 = "AttackGrabGroundBackR", fVar20 <= 90.0)) &&
                                       ((pSVar12 = "AttackGrabGroundBackL", fVar20 < 0.0 && (-90.0 <= fVar20))))
                                    {
                                      pSVar12 = "AttackGrabGroundFrontL";
                                    }
                                  }
                                  else {
                                    pSVar6 = (__this->fields)._titanInput;
                                    if ((pSVar6 == (Settings_TitanInputSettings_o *)0x0) ||
                                       (pSVar13 = (pSVar6->fields).AttackGrabHead,
                                       pSVar13 == (Settings_KeybindSetting_o *)0x0)) goto label_1820fb0ae;
                                    bVar10 = Settings_KeybindSetting__GetKeyDown
                                                       (pSVar13,false,(MethodInfo *)0x0);
                                    if (bVar10) {
                                      if (Il2CppMethodInitialized_184346ab6 == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadBackL");
                                        il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadBackR");
                                        il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadFrontL");
                                        il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadFrontR");
                                        Il2CppMethodInitialized_184346ab6 = '\x01';
                                      }
                                      pSVar15 = Controllers_BasePlayerController__GetAimAngles
                                                          ((Controllers_BasePlayerController_o *)__this,
                                                           (MethodInfo *)0x0);
                                      if (pSVar15 == (System_Single_array *)0x0) goto label_1820fb0ae;
                                      if ((int)pSVar15->max_length == 0) goto label_1820fb0ef;
                                      fVar20 = pSVar15->m_Items[0];
                                      if ((((fVar20 <= 0.0) ||
                                           (pSVar12 = "AttackGrabHeadFrontR", 90.0 < fVar20)) &&
                                          (pSVar12 = "AttackGrabHeadBackR", fVar20 <= 90.0)) &&
                                         ((pSVar12 = "AttackGrabHeadBackL", fVar20 < 0.0 && (-90.0 <= fVar20))
                                         )) {
                                        pSVar12 = "AttackGrabHeadFrontL";
                                      }
                                    }
                                    else {
                                      pSVar6 = (__this->fields)._titanInput;
                                      if ((pSVar6 == (Settings_TitanInputSettings_o *)0x0) ||
                                         (pSVar13 = (pSVar6->fields).AttackGrabHigh,
                                         pSVar13 == (Settings_KeybindSetting_o *)0x0)) goto label_1820fb0ae;
                                      bVar10 = Settings_KeybindSetting__GetKeyDown
                                                         (pSVar13,false,(MethodInfo *)0x0);
                                      if (bVar10) {
                                        if (Il2CppMethodInitialized_184346ab7 == '\0') {
                                          il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHighR");
                                          il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHighL");
                                          Il2CppMethodInitialized_184346ab7 = '\x01';
                                        }
                                        pSVar15 = Controllers_BasePlayerController__GetAimAngles
                                                            ((Controllers_BasePlayerController_o *)__this,
                                                             (MethodInfo *)0x0);
                                        if (pSVar15 == (System_Single_array *)0x0) goto label_1820fb0ae;
                                        if ((int)pSVar15->max_length == 0) goto label_1820fb0ef;
                                        pSVar12 = "AttackGrabHighR";
                                        if (pSVar15->m_Items[0] <= 0.0) {
                                          pSVar12 = "AttackGrabHighL";
                                        }
                                      }
                                      else {
                                        pSVar6 = (__this->fields)._titanInput;
                                        if ((pSVar6 == (Settings_TitanInputSettings_o *)0x0) ||
                                           (pSVar13 = (pSVar6->fields).AttackBrushChest,
                                           pSVar13 == (Settings_KeybindSetting_o *)0x0)) goto label_1820fb0ae;
                                        bVar10 = Settings_KeybindSetting__GetKeyDown
                                                           (pSVar13,false,(MethodInfo *)0x0);
                                        if (!bVar10) {
                                          pSVar6 = (__this->fields)._titanInput;
                                          if ((pSVar6 != (Settings_TitanInputSettings_o *)0x0) &&
                                             (pSVar13 = (pSVar6->fields).AttackRockThrow,
                                             pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                            bVar10 = Settings_KeybindSetting__GetKeyDown
                                                               (pSVar13,false,(MethodInfo *)0x0);
                                            if (bVar10) {
                                              if (0.0 < (__this->fields)._rockCooldownLeft) {
                                                return;
                                              }
                                              pCVar17 = (__this->fields)._titan;
                                              if (pCVar17 != (Characters_BasicTitan_o *)0x0) {
                                                if ((pCVar17->fields).Grounded == false) {
                                                  return;
                                                }
                                                (*(pCVar17->klass->vtable)._150_Attack.methodPtr)
                                                          (pCVar17,"AttackRockThrow",
                                                           (pCVar17->klass->vtable)._150_Attack.method);
                                                (__this->fields)._rockCooldownLeft =
                                                     (__this->fields).RockCooldown;
                                                return;
                                              }
                                            }
                                            else {
                                              pSVar6 = (__this->fields)._titanInput;
                                              if (((pSVar6 != (Settings_TitanInputSettings_o *)0x0) &&
                                                  (pSVar7 = (pSVar6->fields).Settings,
                                                  pSVar7 != (
                                                       System_Collections_Specialized_OrderedDictionary_o *)
                                                       0x0)) &&
                                                 (obj = (Il2CppObject *)
                                                                                                                
                                                       System_Collections_Specialized_OrderedDictionary__get_Keys
                                                                 (pSVar7,(MethodInfo *)0x0),
                                                 obj != (Il2CppObject *)0x0)) {
                                                local_res20 = InterfaceInvoker0_Invoke
                                                                        (0,(Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_System_Collections_IEnumerable,obj);
                                                local_58._0_4_ = 0.0;
                                                local_58._4_4_ = 0.0;
                                                local_58._8_8_ = &local_res20;
                                                local_48 = local_68;
                                                while( true ) {
                                                  do {
                                                    if (local_res20 == (Il2CppObject *)0x0) {
                                                      ThrowNullReferenceException();
                                                    }
                                                    pvVar11 = InterfaceInvoker0_Invoke
                                                                        (0,(Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_System_Collections_IEnumerator,local_res20);
                                                    if ((char)pvVar11 == '\0') {
                                                      local_68[0] = il2cpp_vm_Object_IsInst
                                                                              (local_res20,
                                                                               (Il2CppClass *)
                                                                               TypeInfo_System_IDisposable);
                                                      if (local_68[0] == (Il2CppObject *)0x0) {
                                                        return;
                                                      }
                                                      InterfaceInvoker0_Invoke
                                                                (0,(Il2CppClass *)TypeInfo_System_IDisposable,
                                                                 local_68[0]);
                                                      return;
                                                    }
                                                    if (local_res20 == (Il2CppObject *)0x0) {
                                                      ThrowNullReferenceException();
                                                    }
                                                    pSVar12 = InterfaceInvoker0_Invoke
                                                                        (1,(Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_System_Collections_IEnumerator,local_res20);
                                                    if (pSVar12 == (System_String_o *)0x0) {
                                                      ThrowNullReferenceException();
                                                    }
                                                    __this_01 = (System_String_o *)0x0;
                                                    if (pSVar12->klass == g_data_184354e50) {
                                                      __this_01 = pSVar12;
                                                    }
                                                    if (__this_01 == (System_String_o *)0x0) {
                                                      il2cpp_codegen_raise_invalid_cast_exception(pSVar12);
                                                    }
                                                    bVar10 = System_String__StartsWith
                                                                       (__this_01,"Attack",
                                                                        (MethodInfo *)0x0);
                                                  } while (!bVar10);
                                                  pSVar6 = (__this->fields)._titanInput;
                                                  if (pSVar6 == (Settings_TitanInputSettings_o *)0x0) {
                                                    ThrowNullReferenceException();
                                                  }
                                                  pSVar7 = (pSVar6->fields).Settings;
                                                  if (pSVar7 == (
                                                       System_Collections_Specialized_OrderedDictionary_o *)
                                                       0x0) {
                                                    ThrowNullReferenceException();
                                                  }
                                                  pSVar13 = (Settings_KeybindSetting_o *)
                                                                                                                        
                                                       System_Collections_Specialized_OrderedDictionary__get_Item
                                                                 (pSVar7,(Il2CppObject *)__this_01,
                                                                  (MethodInfo *)0x0);
                                                  if (pSVar13 == (Settings_KeybindSetting_o *)0x0) {
                                                    ThrowNullReferenceException();
                                                  }
                                                  bVar5 = (TypeInfo_Settings_KeybindSetting->_2).
                                                          typeHierarchyDepth;
                                                  if (((pSVar13->klass->_2).typeHierarchyDepth < bVar5) ||
                                                     ((pSVar13->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1]
                                                      != (Il2CppClass *)TypeInfo_Settings_KeybindSetting))
                                                  break;
                                                  bVar10 = Settings_KeybindSetting__GetKeyDown
                                                                     (pSVar13,false,(MethodInfo *)0x0);
                                                  if (bVar10) {
                                                    pCVar17 = (__this->fields)._titan;
                                                    if (pCVar17 == (Characters_BasicTitan_o *)0x0) {
                                                      ThrowNullReferenceException();
                                                    }
                                                    (*(pCVar17->klass->vtable)._150_Attack.methodPtr)
                                                              (pCVar17,__this_01,
                                                               (pCVar17->klass->vtable)._150_Attack.method);
                                                  }
                                                }
                                                il2cpp_codegen_raise_invalid_cast_exception(pSVar13);
                                              }
                                            }
                                          }
                                          goto label_1820fb0ae;
                                        }
                                        if (Il2CppMethodInitialized_184346ab8 == '\0') {
                                          il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChestL");
                                          il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChestR");
                                          Il2CppMethodInitialized_184346ab8 = '\x01';
                                        }
                                        pSVar15 = Controllers_BasePlayerController__GetAimAngles
                                                            ((Controllers_BasePlayerController_o *)__this,
                                                             (MethodInfo *)0x0);
                                        if (pSVar15 == (System_Single_array *)0x0) goto label_1820fb0ae;
                                        if ((int)pSVar15->max_length == 0) goto label_1820fb0ef;
                                        pSVar12 = "AttackBrushChestL";
                                        if (pSVar15->m_Items[0] <= 0.0) {
                                          pSVar12 = "AttackBrushChestR";
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        pCVar17 = (__this->fields)._titan;
                        if (pCVar17 == (Characters_BasicTitan_o *)0x0) goto label_1820fb0ae;
                        pCVar16 = pCVar17->klass;
                        pMVar18 = (pCVar16->vtable)._150_Attack.method;
                      }
                    }
                    (*(pCVar16->vtable)._150_Attack.methodPtr)(pCVar17,pSVar12,pMVar18);
                  }
                  else {
                    pCVar17 = (__this->fields)._titan;
                    if (pCVar17 == (Characters_BasicTitan_o *)0x0) goto label_1820fb0ae;
                    if ((pCVar17->fields).State == 4) {
                      pSVar6 = (__this->fields)._titanInput;
                      if ((pSVar6 != (Settings_TitanInputSettings_o *)0x0) &&
                         (pSVar13 = (pSVar6->fields).Jump, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                        bVar10 = Settings_KeybindSetting__GetKeyUp(pSVar13,false,(MethodInfo *)0x0);
                        if (!bVar10) {
                          return;
                        }
                        pCVar17 = (__this->fields)._titan;
                        if (Il2CppMethodInitialized_18433de5c == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                          Il2CppMethodInitialized_18433de5c = '\x01';
                        }
                        if (pCVar17 != (Characters_BasicTitan_o *)0x0) {
                          pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
                          fVar20 = (pUVar8->upVector).fields.z;
                          fVar19 = (pUVar8->upVector).fields.y;
                          (pCVar17->fields)._jumpDirection.fields.x = (pUVar8->upVector).fields.x;
                          (pCVar17->fields)._jumpDirection.fields.y = fVar19;
                          (pCVar17->fields)._jumpDirection.fields.z = fVar20;
                          pCVar17 = (__this->fields)._titan;
                          if (pCVar17 != (Characters_BasicTitan_o *)0x0) {
                            (pCVar17->fields).JumpForce = 120.0;
                            pCVar17 = (__this->fields)._titan;
                            if (pCVar17 != (Characters_BasicTitan_o *)0x0) {
                              if ((pCVar17->fields).HasDirection != false) {
                                pUVar9 = (pCVar17->fields).Cache;
                                if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
                                   (__this_00 = (pUVar9->fields).Transform,
                                   __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_1820fb0ae;
                                uVar1 = (pCVar17->fields)._jumpDirection.fields.x;
                                uVar3 = (pCVar17->fields)._jumpDirection.fields.y;
                                fVar20 = (pCVar17->fields)._jumpDirection.fields.z;
                                pUVar14 = UnityEngine_Transform__get_forward
                                                    ((UnityEngine_Vector3_o *)local_58,__this_00,
                                                     (MethodInfo *)0x0);
                                fVar19 = (pUVar14->fields).z;
                                uVar2 = (pUVar14->fields).x;
                                uVar4 = (pUVar14->fields).y;
                                (pCVar17->fields)._jumpDirection.fields.x = (float)uVar2 * 0.5 + (float)uVar1;
                                (pCVar17->fields)._jumpDirection.fields.y = (float)uVar4 * 0.5 + (float)uVar3;
                                (pCVar17->fields)._jumpDirection.fields.z = fVar19 * 0.5 + fVar20;
                                pCVar17 = (__this->fields)._titan;
                                if (pCVar17 == (Characters_BasicTitan_o *)0x0) goto label_1820fb0ae;
                                fVar20 = (float)il2cpp_runtime_helper_180546a40(&(pCVar17->fields)._jumpDirection);
                                if (1e-05 < fVar20) {
                                  fVar19 = (pCVar17->fields)._jumpDirection.fields.z / fVar20;
                                  fVar21 = (pCVar17->fields)._jumpDirection.fields.y / fVar20;
                                  fVar20 = (pCVar17->fields)._jumpDirection.fields.x / fVar20;
                                }
                                else {
                                  fVar19 = 0.0;
                                  fVar21 = 0.0;
                                  fVar20 = 0.0;
                                }
                                (pCVar17->fields)._jumpDirection.fields.x = fVar20;
                                (pCVar17->fields)._jumpDirection.fields.y = fVar21;
                                (pCVar17->fields)._jumpDirection.fields.z = fVar19;
                              }
                              pCVar17 = (__this->fields)._titan;
                              if (pCVar17 != (Characters_BasicTitan_o *)0x0) {
                                Characters_BasicTitan__JumpImmediate(pCVar17,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                      }
                      goto label_1820fb0ae;
                    }
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_1820fb0ae:
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackSwing
// il2cpp: void Controllers_BasicTitanPlayerController__AttackSwing (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x1820f9fe0

void Controllers_BasicTitanPlayerController__AttackSwing
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346ab0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwingL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwingR");
    Il2CppMethodInitialized_184346ab0 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = "AttackSwingL";
    if (pSVar2->m_Items[0] <= 0.0) {
      pSVar3 = "AttackSwingR";
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,pSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabAirFar
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabAirFar (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x1820f9b00

void Controllers_BasicTitanPlayerController__AttackGrabAirFar
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346ab1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFarL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFarR");
    Il2CppMethodInitialized_184346ab1 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = "AttackGrabAirFarR";
    if (pSVar2->m_Items[0] <= 0.0) {
      pSVar3 = "AttackGrabAirFarL";
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,pSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabAir
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabAir (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x1820f9b90

void Controllers_BasicTitanPlayerController__AttackGrabAir
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346ab2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirR");
    Il2CppMethodInitialized_184346ab2 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = "AttackGrabAirR";
    if (pSVar2->m_Items[0] <= 0.0) {
      pSVar3 = "AttackGrabAirL";
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,pSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabBody
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabBody (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x1820f9c20
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f9c98: mov rdx, qword ptr [rip + 0x1fbe2a9]  ; "AttackGrabStomachR"
// asm:   0x1820f9c9f: jmp 0x1820f9ccd
// asm:   0x1820f9cbd: mov rdx, qword ptr [rip + 0x1fbcbc4]  ; "AttackGrabBackL"
// asm:   0x1820f9cc4: jmp 0x1820f9ccd
// asm:   0x1820f9cc6: mov rdx, qword ptr [rip + 0x1fbcc9b]  ; "AttackGrabBackR"

void Controllers_BasicTitanPlayerController__AttackGrabBody
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BasicTitan_o *pCVar2;
  System_Single_array *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184346ab3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabStomachL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabStomachR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBackR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBackL");
    Il2CppMethodInitialized_184346ab3 = '\x01';
  }
  pSVar3 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar3 != (System_Single_array *)0x0) {
    if ((int)pSVar3->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    fVar1 = pSVar3->m_Items[0];
    if ((((fVar1 <= 0.0) || (pSVar4 = "AttackGrabStomachR", 90.0 < fVar1)) &&
        (pSVar4 = "AttackGrabBackR", fVar1 <= 90.0)) &&
       ((pSVar4 = "AttackGrabBackL", fVar1 < 0.0 && (-90.0 <= fVar1)))) {
      pSVar4 = "AttackGrabStomachL";
    }
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 != (Characters_BasicTitan_o *)0x0) {
      (*(pCVar2->klass->vtable)._150_Attack.methodPtr)
                (pCVar2,pSVar4,(pCVar2->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabCore
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabCore (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x1820f9d00

void Controllers_BasicTitanPlayerController__AttackGrabCore
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346ab4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCoreR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCoreL");
    Il2CppMethodInitialized_184346ab4 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = "AttackGrabCoreR";
    if (pSVar2->m_Items[0] <= 0.0) {
      pSVar3 = "AttackGrabCoreL";
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,pSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabGround
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabGround (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x1820f9d90
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f9e08: mov rdx, qword ptr [rip + 0x1fbd5d9]  ; "AttackGrabGroundFrontR"
// asm:   0x1820f9e0f: jmp 0x1820f9e3d
// asm:   0x1820f9e2d: mov rdx, qword ptr [rip + 0x1fbd314]  ; "AttackGrabGroundBackL"
// asm:   0x1820f9e34: jmp 0x1820f9e3d
// asm:   0x1820f9e36: mov rdx, qword ptr [rip + 0x1fbd3eb]  ; "AttackGrabGroundBackR"

void Controllers_BasicTitanPlayerController__AttackGrabGround
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BasicTitan_o *pCVar2;
  System_Single_array *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184346ab5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundBackL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundFrontL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundFrontR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGroundBackR");
    Il2CppMethodInitialized_184346ab5 = '\x01';
  }
  pSVar3 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar3 != (System_Single_array *)0x0) {
    if ((int)pSVar3->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    fVar1 = pSVar3->m_Items[0];
    if ((((fVar1 <= 0.0) || (pSVar4 = "AttackGrabGroundFrontR", 90.0 < fVar1)) &&
        (pSVar4 = "AttackGrabGroundBackR", fVar1 <= 90.0)) &&
       ((pSVar4 = "AttackGrabGroundBackL", fVar1 < 0.0 && (-90.0 <= fVar1)))) {
      pSVar4 = "AttackGrabGroundFrontL";
    }
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 != (Characters_BasicTitan_o *)0x0) {
      (*(pCVar2->klass->vtable)._150_Attack.methodPtr)
                (pCVar2,pSVar4,(pCVar2->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabHead
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabHead (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x1820f9e70
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f9ee8: mov rdx, qword ptr [rip + 0x1fbd959]  ; "AttackGrabHeadFrontR"
// asm:   0x1820f9eef: jmp 0x1820f9f1d
// asm:   0x1820f9f0d: mov rdx, qword ptr [rip + 0x1fbd694]  ; "AttackGrabHeadBackL"
// asm:   0x1820f9f14: jmp 0x1820f9f1d
// asm:   0x1820f9f16: mov rdx, qword ptr [rip + 0x1fbd76b]  ; "AttackGrabHeadBackR"

void Controllers_BasicTitanPlayerController__AttackGrabHead
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BasicTitan_o *pCVar2;
  System_Single_array *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184346ab6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadBackL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadBackR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadFrontL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHeadFrontR");
    Il2CppMethodInitialized_184346ab6 = '\x01';
  }
  pSVar3 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar3 != (System_Single_array *)0x0) {
    if ((int)pSVar3->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    fVar1 = pSVar3->m_Items[0];
    if ((((fVar1 <= 0.0) || (pSVar4 = "AttackGrabHeadFrontR", 90.0 < fVar1)) &&
        (pSVar4 = "AttackGrabHeadBackR", fVar1 <= 90.0)) &&
       ((pSVar4 = "AttackGrabHeadBackL", fVar1 < 0.0 && (-90.0 <= fVar1)))) {
      pSVar4 = "AttackGrabHeadFrontL";
    }
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 != (Characters_BasicTitan_o *)0x0) {
      (*(pCVar2->klass->vtable)._150_Attack.methodPtr)
                (pCVar2,pSVar4,(pCVar2->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackGrabHigh
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabHigh (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x1820f9f50

void Controllers_BasicTitanPlayerController__AttackGrabHigh
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346ab7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHighR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHighL");
    Il2CppMethodInitialized_184346ab7 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = "AttackGrabHighR";
    if (pSVar2->m_Items[0] <= 0.0) {
      pSVar3 = "AttackGrabHighL";
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,pSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$AttackBrushChest
// il2cpp: void Controllers_BasicTitanPlayerController__AttackBrushChest (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x1820f9a70

void Controllers_BasicTitanPlayerController__AttackBrushChest
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346ab8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChestL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChestR");
    Il2CppMethodInitialized_184346ab8 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = "AttackBrushChestL";
    if (pSVar2->m_Items[0] <= 0.0) {
      pSVar3 = "AttackBrushChestR";
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,pSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasicTitanPlayerController$$.ctor
// il2cpp: void Controllers_BasicTitanPlayerController___ctor (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x1820fb160

void Controllers_BasicTitanPlayerController___ctor
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  (__this->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  return;
}


