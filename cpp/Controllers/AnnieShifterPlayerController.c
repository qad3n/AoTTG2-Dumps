// Type: Controllers.AnnieShifterPlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/AnnieShifterPlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/AnnieShifterPlayerController.cs
// --------------------------------

// Controllers.AnnieShifterPlayerController$$Awake
// il2cpp: void Controllers_AnnieShifterPlayerController__Awake (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x5b99eb0

void Controllers_AnnieShifterPlayerController__Awake
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o **targetAddress;
  Settings_InputSettings_o *pSVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  Characters_BaseHitbox_o *pCVar3;
  Characters_AnnieShifter_o *pCVar4;
  
  if (Il2CppMethodInitialized_07547442 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_AnnieShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547442 = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,method);
  pCVar4 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_AnnieShifter);
  targetAddress = &(__this->fields)._shifter;
  (__this->fields)._shifter = pCVar4;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar1 != (Settings_InputSettings_o *)0x0) {
    (__this->fields)._shifterInput = (pSVar1->fields).AnnieShifter;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._shifterInput);
    pCVar4 = (__this->fields)._shifter;
    if (((pCVar4 != (Characters_AnnieShifter_o *)0x0) &&
        (pCVar2 = (pCVar4->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
       (pCVar3 = (pCVar2->fields).HandLHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
      Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.5,(MethodInfo *)0x0);
      if (((*targetAddress != (Characters_AnnieShifter_o *)0x0) &&
          (pCVar2 = ((*targetAddress)->fields).BaseTitanCache,
          pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
         (pCVar3 = (pCVar2->fields).HandRHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
        Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.5,(MethodInfo *)0x0);
        if (((*targetAddress != (Characters_AnnieShifter_o *)0x0) &&
            (pCVar2 = ((*targetAddress)->fields).BaseTitanCache,
            pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
           (pCVar3 = (pCVar2->fields).FootLHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
          Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.5,(MethodInfo *)0x0);
          if (((*targetAddress != (Characters_AnnieShifter_o *)0x0) &&
              (pCVar2 = ((*targetAddress)->fields).BaseTitanCache,
              pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
             (pCVar3 = (pCVar2->fields).FootRHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
            Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.5,(MethodInfo *)0x0);
            if (((*targetAddress != (Characters_AnnieShifter_o *)0x0) &&
                (pCVar2 = ((*targetAddress)->fields).BaseTitanCache,
                pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
               (pCVar3 = (pCVar2->fields).MouthHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
              Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.AnnieShifterPlayerController$$UpdateActionInput
// il2cpp: void Controllers_AnnieShifterPlayerController__UpdateActionInput (Controllers_AnnieShifterPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5b9a270
// eh: try 0x5b9a6cf..0x5b9a861 -> pad 0x5b9a87b (+14 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5b9a893..0x5b9a898 -> pad 0x5b9a8b1 cleanup
// eh: try 0x5b9a8b4..0x5b9a8be -> pad 0x5b9a8c6 catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9a674: lea rbp, [rip + 0x16ded7d]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5b9a67b: lea r15, [rip + 0x19bc046]
// asm:   0x5b9a682: lea r12, [rip + 0x173a667]  ; "Attack"
// asm:   0x5b9a689: lea r13, [rip + 0x16dfc78]  ; TypeInfo_Settings_KeybindSetting
// asm:   0x5b9a690: jmp 0x5b9a69f
// asm:   0x5b9a692: mov r14, qword ptr [rsp]
// asm:   0x5b9a696: test r14, r14
// asm:   0x5b9a699: je 0x5b9a82e
// asm:   0x5b9a6bf: nop 
// asm:   0x5b9a72f: nop 
// asm:   0x5b9a861: jmp 0x5b9a87b
// asm:   0x5b9a863: jmp 0x5b9a87b
// asm:   0x5b9a865: jmp 0x5b9a87b
// asm:   0x5b9a867: jmp 0x5b9a87b
// asm:   0x5b9a869: jmp 0x5b9a87b
// asm:   0x5b9a86b: jmp 0x5b9a87b
// asm:   0x5b9a86d: jmp 0x5b9a87b
// asm:   0x5b9a86f: jmp 0x5b9a87b
// asm:   0x5b9a871: jmp 0x5b9a87b
// asm:   0x5b9a873: jmp 0x5b9a87b
// asm:   0x5b9a875: jmp 0x5b9a87b
// asm:   0x5b9a877: jmp 0x5b9a87b
// asm:   0x5b9a879: jmp 0x5b9a87b
// asm:   0x5b9a87b: mov rbx, rax
// asm:   0x5b9a87e: cmp edx, 1
// asm:   0x5b9a881: jne 0x5b9a8b4
// asm:   0x5b9a883: mov rdi, rbx
// asm:   0x5b9a886: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b9a88b: mov rax, qword ptr [rax]
// asm:   0x5b9a88e: mov qword ptr [rsp + 0x10], rax
// asm:   0x5b9a893: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b9a8b1: mov rbx, rax
// asm:   0x5b9a8b4: lea rdi, [rsp + 0x10]
// asm:   0x5b9a8b9: call 0x2fd8340  ; il2cpp_runtime_helper_02fd8340()
// asm:   0x5b9a8be: mov rdi, rbx
// asm:   0x5b9a8c1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b9a8c6: mov rdi, rax
// asm:   0x5b9a8c9: call 0x2ab61e0  ; __clang_call_terminate()

void Controllers_AnnieShifterPlayerController__UpdateActionInput
               (Controllers_AnnieShifterPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  Settings_AnnieShifterInputSettings_o *pSVar4;
  Characters_AnnieShifter_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar7;
  System_Collections_Specialized_OrderedDictionary_o *pSVar8;
  Il2CppClass *pIVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  bool bVar11;
  char cVar12;
  Characters_AnnieShifter_o *pCVar13;
  System_Collections_ICollection_o *pSVar14;
  Il2CppObject *pIVar15;
  VirtualInvokeData *pVVar16;
  System_String_o *__this_01;
  Settings_KeybindSetting_o *pSVar17;
  ulong uVar18;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar19;
  long lVar20;
  float fVar21;
  UnityEngine_Vector3_o UVar22;
  Il2CppObject *pIStack_78;
  float fStack_6c;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_07547443 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    Il2CppMethodInitialized_07547443 = '\x01';
    method = extraout_RDX;
  }
  pIStack_78 = (Il2CppObject *)0x0;
  uStack_50 = 0;
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,inMenu,method);
  if (inMenu) {
    return;
  }
  pSVar4 = (__this->fields)._shifterInput;
  if ((pSVar4 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
     (pSVar17 = (pSVar4->fields).Walk, pSVar17 != (Settings_KeybindSetting_o *)0x0)) {
    pCVar5 = (__this->fields)._shifter;
    bVar11 = Settings_KeybindSetting__GetKey(pSVar17,false,(MethodInfo *)0x0);
    if (pCVar5 != (Characters_AnnieShifter_o *)0x0) {
      (pCVar5->fields).IsWalk = bVar11;
      pCVar5 = (__this->fields)._shifter;
      if (pCVar5 != (Characters_AnnieShifter_o *)0x0) {
        bVar11 = (*(pCVar5->klass->vtable)._145_CanAction.methodPtr)
                           (pCVar5,(pCVar5->klass->vtable)._145_CanAction.method);
        if (!bVar11) {
          return;
        }
        pSVar4 = (__this->fields)._shifterInput;
        if ((pSVar4 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
           (pSVar17 = (pSVar4->fields).Jump, pSVar17 != (Settings_KeybindSetting_o *)0x0)) {
          bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar17,false,(MethodInfo *)0x0);
          if (bVar11) {
            pCVar5 = (__this->fields)._shifter;
            if (pCVar5 != (Characters_AnnieShifter_o *)0x0) {
              if ((pCVar5->fields).HasDirection == false) {
                if (Il2CppMethodInitialized_0753e72c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_0753e72c = '\x01';
                }
                pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar1 = (pUVar7->upVector).fields.x;
                fVar2 = (pUVar7->upVector).fields.y;
                fVar21 = (pUVar7->upVector).fields.z;
              }
              else {
                pCVar13 = pCVar5;
                if (Il2CppMethodInitialized_0753e72c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_0753e72c = '\x01';
                  pCVar13 = (__this->fields)._shifter;
                  if (pCVar13 == (Characters_AnnieShifter_o *)0x0) goto label_05b9a829;
                }
                pUVar6 = (pCVar13->fields).Cache;
                if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
                   (__this_00 = (pUVar6->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
                goto label_05b9a829;
                pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
                uStack_48._0_4_ = (pUVar7->upVector).fields.x;
                uStack_48._4_4_ = (pUVar7->upVector).fields.y;
                uStack_40 = 0;
                fStack_6c = (pUVar7->upVector).fields.z;
                UVar22 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
                fVar1 = UVar22.fields.x + (float)uStack_48;
                fVar2 = UVar22.fields.y + uStack_48._4_4_;
                fVar21 = UVar22.fields.z + fStack_6c;
              }
              UVar22.fields.y = fVar2;
              UVar22.fields.x = fVar1;
              UVar22.fields.z = fVar21;
              (*(pCVar5->klass->vtable)._148_Jump.methodPtr)
                        (pCVar5,UVar22,(pCVar5->klass->vtable)._148_Jump.method);
              return;
            }
          }
          else {
            pSVar4 = (__this->fields)._shifterInput;
            if ((pSVar4 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
               (pSVar17 = (pSVar4->fields).Kick, pSVar17 != (Settings_KeybindSetting_o *)0x0)) {
              bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar17,false,(MethodInfo *)0x0);
              if (bVar11) {
                pCVar5 = (__this->fields)._shifter;
                if (pCVar5 != (Characters_AnnieShifter_o *)0x0) {
                  (*(pCVar5->klass->vtable)._153_Kick.methodPtr)
                            (pCVar5,(pCVar5->klass->vtable)._153_Kick.method);
                  return;
                }
              }
              else {
                pSVar4 = (__this->fields)._shifterInput;
                if ((pSVar4 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                   (pSVar17 = (pSVar4->fields).AttackBrushFront, pSVar17 != (Settings_KeybindSetting_o *)0x0))
                {
                  pMVar19 = (MethodInfo *)0x0;
                  bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar17,false,(MethodInfo *)0x0);
                  if (bVar11) {
                    Controllers_AnnieShifterPlayerController__AttackBrushFront(__this,pMVar19);
                    return;
                  }
                  pSVar4 = (__this->fields)._shifterInput;
                  if ((pSVar4 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                     (pSVar17 = (pSVar4->fields).AttackBrushHead, pSVar17 != (Settings_KeybindSetting_o *)0x0)
                     ) {
                    pMVar19 = (MethodInfo *)0x0;
                    bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar17,false,(MethodInfo *)0x0);
                    if (bVar11) {
                      Controllers_AnnieShifterPlayerController__AttackBrushHead(__this,pMVar19);
                      return;
                    }
                    pSVar4 = (__this->fields)._shifterInput;
                    if ((pSVar4 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                       (pSVar17 = (pSVar4->fields).AttackGrabBottom,
                       pSVar17 != (Settings_KeybindSetting_o *)0x0)) {
                      pMVar19 = (MethodInfo *)0x0;
                      bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar17,false,(MethodInfo *)0x0);
                      if (bVar11) {
                        Controllers_AnnieShifterPlayerController__AttackGrabBottom(__this,pMVar19);
                        return;
                      }
                      pSVar4 = (__this->fields)._shifterInput;
                      if ((pSVar4 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                         (pSVar17 = (pSVar4->fields).AttackGrabMid,
                         pSVar17 != (Settings_KeybindSetting_o *)0x0)) {
                        pMVar19 = (MethodInfo *)0x0;
                        bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar17,false,(MethodInfo *)0x0);
                        if (bVar11) {
                          Controllers_AnnieShifterPlayerController__AttackGrabMid(__this,pMVar19);
                          return;
                        }
                        pSVar4 = (__this->fields)._shifterInput;
                        if ((pSVar4 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                           (pSVar17 = (pSVar4->fields).AttackGrabUp,
                           pSVar17 != (Settings_KeybindSetting_o *)0x0)) {
                          pMVar19 = (MethodInfo *)0x0;
                          bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar17,false,(MethodInfo *)0x0);
                          if (bVar11) {
                            Controllers_AnnieShifterPlayerController__AttackGrabUp(__this,pMVar19);
                            return;
                          }
                          pSVar4 = (__this->fields)._shifterInput;
                          if (((pSVar4 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                              (pSVar8 = (pSVar4->fields).Settings,
                              pSVar8 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) &&
                             (pSVar14 = System_Collections_Specialized_OrderedDictionary__get_Keys
                                                  (pSVar8,(MethodInfo *)0x0),
                             pSVar14 != (System_Collections_ICollection_o *)0x0)) {
                            pIVar15 = (Il2CppObject *)
                                      il2cpp_runtime_helper_02ad5a70(0,TypeInfo_System_Collections_IEnumerable,pSVar14);
                            puStack_60 = (undefined1 *)&pIStack_78;
                            uStack_68 = 0;
                            puStack_58 = &uStack_50;
                            do {
                              pIStack_78 = pIVar15;
                              if (pIVar15 == (Il2CppObject *)0x0) {
                                ThrowNullReferenceException();
                              }
                              pIVar9 = pIVar15->klass;
                              uVar18 = (ulong)(pIVar9->_2).interface_offsets_count;
                              if (uVar18 != 0) {
                                pIVar10 = (pIVar9->_1).interfaceOffsets;
                                lVar20 = 0;
                                do {
                                  if (*(Il2CppClass **)((long)&pIVar10->interfaceType + lVar20) ==
                                      (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                                    pVVar16 = pIVar9->vtable + *(int *)((long)&pIVar10->offset + lVar20);
                                    goto label_05b9a6f1;
                                  }
                                  lVar20 = lVar20 + 0x10;
                                } while (uVar18 * 0x10 != lVar20);
                              }
                              pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                                                  (pIVar15,(Il2CppClass *)
                                                           TypeInfo_System_Collections_IEnumerator,0);
label_05b9a6f1:
                              cVar12 = (*pVVar16->methodPtr)(pIVar15,pVVar16->method);
                              pIVar15 = pIStack_78;
                              if (cVar12 == '\0') {
                                il2cpp_runtime_helper_02fd8340(&uStack_68);
                                return;
                              }
                              if (pIStack_78 == (Il2CppObject *)0x0) {
                                ThrowNullReferenceException();
                              }
                              pIVar9 = pIStack_78->klass;
                              uVar18 = (ulong)(pIVar9->_2).interface_offsets_count;
                              if (uVar18 != 0) {
                                pIVar10 = (pIVar9->_1).interfaceOffsets;
                                lVar20 = 0;
                                do {
                                  if (*(System_Collections_IEnumerator_c **)
                                       ((long)&pIVar10->interfaceType + lVar20) ==
                                      TypeInfo_System_Collections_IEnumerator) {
                                    pVVar16 = pIVar9->vtable + (*(int *)((long)&pIVar10->offset + lVar20) + 1)
                                    ;
                                    goto label_05b9a768;
                                  }
                                  lVar20 = lVar20 + 0x10;
                                } while (uVar18 * 0x10 != lVar20);
                              }
                              pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                                                  (pIStack_78,
                                                   (Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05b9a768:
                              __this_01 = (System_String_o *)(*pVVar16->methodPtr)(pIVar15,pVVar16->method);
                              if (__this_01 == (System_String_o *)0x0) {
                                ThrowNullReferenceException();
                              }
                              if (__this_01->klass != g_data_07556758) {
                                il2cpp_codegen_raise_invalid_cast_exception(__this_01);
                              }
                              bVar11 = System_String__StartsWith
                                                 (__this_01,"Attack",(MethodInfo *)0x0);
                              pIVar15 = pIStack_78;
                              if (bVar11) {
                                pSVar4 = (__this->fields)._shifterInput;
                                if (pSVar4 == (Settings_AnnieShifterInputSettings_o *)0x0) {
                                  ThrowNullReferenceException();
                                }
                                pSVar8 = (pSVar4->fields).Settings;
                                if (pSVar8 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                                  ThrowNullReferenceException();
                                }
                                pSVar17 = (Settings_KeybindSetting_o *)
                                          System_Collections_Specialized_OrderedDictionary__get_Item
                                                    (pSVar8,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
                                if (pSVar17 == (Settings_KeybindSetting_o *)0x0) {
                                  ThrowNullReferenceException();
                                }
                                bVar3 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
                                if (((pSVar17->klass->_2).typeHierarchyDepth < bVar3) ||
                                   ((pSVar17->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                                    (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
                                  il2cpp_codegen_raise_invalid_cast_exception(pSVar17);
                                }
                                bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar17,false,(MethodInfo *)0x0);
                                pIVar15 = pIStack_78;
                                if (bVar11) {
                                  pCVar5 = (__this->fields)._shifter;
                                  if (pCVar5 == (Characters_AnnieShifter_o *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  (*(pCVar5->klass->vtable)._150_Attack.methodPtr)
                                            (pCVar5,__this_01,(pCVar5->klass->vtable)._150_Attack.method);
                                  pIVar15 = pIStack_78;
                                }
                              }
                            } while( true );
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
label_05b9a829:
  ThrowNullReferenceException();
}


// Controllers.AnnieShifterPlayerController$$AttackBrushFront
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackBrushFront (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x5b9aa90

void Controllers_AnnieShifterPlayerController__AttackBrushFront
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547444 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFrontL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFrontR");
    Il2CppMethodInitialized_07547444 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        ppSVar3 = &"AttackBrushFrontL";
      }
      else {
        ppSVar3 = &"AttackBrushFrontR";
      }
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,*ppSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.AnnieShifterPlayerController$$AttackBrushHead
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackBrushHead (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x5b9ab20

void Controllers_AnnieShifterPlayerController__AttackBrushHead
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547445 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHeadL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHeadR");
    Il2CppMethodInitialized_07547445 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        ppSVar3 = &"AttackBrushHeadL";
      }
      else {
        ppSVar3 = &"AttackBrushHeadR";
      }
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,*ppSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.AnnieShifterPlayerController$$AttackGrabBottom
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackGrabBottom (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x5b9abb0

void Controllers_AnnieShifterPlayerController__AttackGrabBottom
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547446 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottomLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottomRight");
    Il2CppMethodInitialized_07547446 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        ppSVar3 = &"AttackGrabBottomLeft";
      }
      else {
        ppSVar3 = &"AttackGrabBottomRight";
      }
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,*ppSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.AnnieShifterPlayerController$$AttackGrabMid
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackGrabMid (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x5b9ac40

void Controllers_AnnieShifterPlayerController__AttackGrabMid
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547447 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMidRight");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMidLeft");
    Il2CppMethodInitialized_07547447 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        ppSVar3 = &"AttackGrabMidLeft";
      }
      else {
        ppSVar3 = &"AttackGrabMidRight";
      }
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,*ppSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.AnnieShifterPlayerController$$AttackGrabUp
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackGrabUp (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x5b9acd0

void Controllers_AnnieShifterPlayerController__AttackGrabUp
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547448 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUpLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUpRight");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUp");
    Il2CppMethodInitialized_07547448 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pSVar2->m_Items[0] <= 45.0) {
      if (-45.0 <= pSVar2->m_Items[0]) {
        ppSVar3 = &"AttackGrabUp";
      }
      else {
        ppSVar3 = &"AttackGrabUpLeft";
      }
    }
    else {
      ppSVar3 = &"AttackGrabUpRight";
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,*ppSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.AnnieShifterPlayerController$$.ctor
// il2cpp: void Controllers_AnnieShifterPlayerController___ctor (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x5b9b150

void Controllers_AnnieShifterPlayerController___ctor
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Controllers_BasePlayerController___ctor((Controllers_BasePlayerController_o *)__this,method);
  return;
}


