// Type: Controllers.ErenShifterPlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/ErenShifterPlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/ErenShifterPlayerController.cs
// --------------------------------

// Controllers.ErenShifterPlayerController$$Awake
// il2cpp: void Controllers_ErenShifterPlayerController__Awake (Controllers_ErenShifterPlayerController_o* __this, const MethodInfo* method);
// 0x5ba5fe0

void Controllers_ErenShifterPlayerController__Awake
               (Controllers_ErenShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_ErenShifter_o **targetAddress;
  byte bVar1;
  Settings_InputSettings_o *pSVar2;
  Characters_BaseTitanComponentCache_o *pCVar3;
  Characters_BaseHitbox_o *pCVar4;
  UnityEngine_SphereCollider_o *pUVar5;
  Characters_ErenShifter_o *pCVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  float fVar7;
  
  if (Il2CppMethodInitialized_07547485 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ErenShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547485 = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  pCVar6 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ErenShifter);
  targetAddress = &(__this->fields)._shifter;
  (__this->fields)._shifter = pCVar6;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar2 != (Settings_InputSettings_o *)0x0) {
    (__this->fields)._shifterInput = (pSVar2->fields).ErenShifter;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._shifterInput);
    pCVar6 = (__this->fields)._shifter;
    if (((pCVar6 != (Characters_ErenShifter_o *)0x0) &&
        (pCVar3 = (pCVar6->fields).BaseTitanCache, pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
       (pCVar4 = (pCVar3->fields).HandLHitbox, pCVar4 != (Characters_BaseHitbox_o *)0x0)) {
      if (Il2CppMethodInitialized_0754751f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
        Il2CppMethodInitialized_0754751f = '\x01';
      }
      pUVar5 = (UnityEngine_SphereCollider_o *)(pCVar4->fields)._collider;
      if (pUVar5 != (UnityEngine_SphereCollider_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
           ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
          fVar7 = UnityEngine_SphereCollider__get_radius(pUVar5,(MethodInfo *)0x0);
          UnityEngine_SphereCollider__set_radius(pUVar5,fVar7 * 1.5,(MethodInfo *)0x0);
          Characters_BaseHitbox__UpdateDebugCollider(pCVar4,pUVar5,method_00);
        }
      }
      if (((*targetAddress != (Characters_ErenShifter_o *)0x0) &&
          (pCVar3 = ((*targetAddress)->fields).BaseTitanCache,
          pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
         (pCVar4 = (pCVar3->fields).HandRHitbox, pCVar4 != (Characters_BaseHitbox_o *)0x0)) {
        if (Il2CppMethodInitialized_0754751f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
          Il2CppMethodInitialized_0754751f = '\x01';
        }
        pUVar5 = (UnityEngine_SphereCollider_o *)(pCVar4->fields)._collider;
        if (pUVar5 != (UnityEngine_SphereCollider_o *)0x0) {
          bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
          if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
             ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
            fVar7 = UnityEngine_SphereCollider__get_radius(pUVar5,(MethodInfo *)0x0);
            UnityEngine_SphereCollider__set_radius(pUVar5,fVar7 * 1.5,(MethodInfo *)0x0);
            Characters_BaseHitbox__UpdateDebugCollider(pCVar4,pUVar5,method_01);
          }
        }
        if (((*targetAddress != (Characters_ErenShifter_o *)0x0) &&
            (pCVar3 = ((*targetAddress)->fields).BaseTitanCache,
            pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
           (pCVar4 = (pCVar3->fields).FootLHitbox, pCVar4 != (Characters_BaseHitbox_o *)0x0)) {
          if (Il2CppMethodInitialized_0754751f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
            Il2CppMethodInitialized_0754751f = '\x01';
          }
          pUVar5 = (UnityEngine_SphereCollider_o *)(pCVar4->fields)._collider;
          if (pUVar5 != (UnityEngine_SphereCollider_o *)0x0) {
            bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
            if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
               ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
              fVar7 = UnityEngine_SphereCollider__get_radius(pUVar5,(MethodInfo *)0x0);
              UnityEngine_SphereCollider__set_radius(pUVar5,fVar7 * 1.5,(MethodInfo *)0x0);
              Characters_BaseHitbox__UpdateDebugCollider(pCVar4,pUVar5,method_02);
            }
          }
          if (((*targetAddress != (Characters_ErenShifter_o *)0x0) &&
              (pCVar3 = ((*targetAddress)->fields).BaseTitanCache,
              pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
             (pCVar4 = (pCVar3->fields).FootRHitbox, pCVar4 != (Characters_BaseHitbox_o *)0x0)) {
            if (Il2CppMethodInitialized_0754751f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
              Il2CppMethodInitialized_0754751f = '\x01';
            }
            pUVar5 = (UnityEngine_SphereCollider_o *)(pCVar4->fields)._collider;
            if (pUVar5 != (UnityEngine_SphereCollider_o *)0x0) {
              bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
              if ((bVar1 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
                 ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
                fVar7 = UnityEngine_SphereCollider__get_radius(pUVar5,(MethodInfo *)0x0);
                UnityEngine_SphereCollider__set_radius(pUVar5,fVar7 * 1.5,(MethodInfo *)0x0);
                Characters_BaseHitbox__UpdateDebugCollider(pCVar4,pUVar5,method_03);
                return;
              }
            }
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.ErenShifterPlayerController$$UpdateActionInput
// il2cpp: void Controllers_ErenShifterPlayerController__UpdateActionInput (Controllers_ErenShifterPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5ba63a0
// eh: try 0x5ba671f..0x5ba68cf -> pad 0x5ba68e9 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ba690a..0x5ba690f -> pad 0x5ba69a4 cleanup
// eh: try 0x5ba69a7..0x5ba69b1 -> pad 0x5ba69b9 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ba670d: nop dword ptr [rax]
// asm:   0x5ba68cf: jmp 0x5ba68e9
// asm:   0x5ba68d1: jmp 0x5ba68e9
// asm:   0x5ba68d3: jmp 0x5ba68e9
// asm:   0x5ba68d5: jmp 0x5ba68e9
// asm:   0x5ba68d7: jmp 0x5ba68e9
// asm:   0x5ba68d9: jmp 0x5ba68e9
// asm:   0x5ba68db: jmp 0x5ba68e9
// asm:   0x5ba68dd: jmp 0x5ba68e9
// asm:   0x5ba68df: jmp 0x5ba68e9
// asm:   0x5ba68e1: jmp 0x5ba68e9
// asm:   0x5ba68e3: jmp 0x5ba68e9
// asm:   0x5ba68e5: jmp 0x5ba68e9
// asm:   0x5ba68e7: jmp 0x5ba68e9
// asm:   0x5ba68e9: mov rbx, rax
// asm:   0x5ba68ec: cmp edx, 1
// asm:   0x5ba68ef: jne 0x5ba69a7
// asm:   0x5ba68f5: mov rdi, rbx
// asm:   0x5ba68f8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ba68fd: mov rcx, qword ptr [rax]
// asm:   0x5ba6900: mov qword ptr [rsp + 8], rcx
// asm:   0x5ba6905: mov qword ptr [rsp + 0x18], rcx
// asm:   0x5ba690a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ba69a4: mov rbx, rax
// asm:   0x5ba69a7: lea rdi, [rsp + 0x18]
// asm:   0x5ba69ac: call 0x2fd8650  ; il2cpp_runtime_helper_02fd8650()
// asm:   0x5ba69b1: mov rdi, rbx
// asm:   0x5ba69b4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ba69b9: mov rdi, rax
// asm:   0x5ba69bc: call 0x2ab61e0  ; __clang_call_terminate()

void Controllers_ErenShifterPlayerController__UpdateActionInput
               (Controllers_ErenShifterPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  Settings_ErenShifterInputSettings_o *pSVar4;
  Characters_ErenShifter_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar7;
  System_Collections_Specialized_OrderedDictionary_o *pSVar8;
  Il2CppClass *pIVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  bool bVar11;
  Characters_ErenShifter_o *pCVar12;
  Il2CppObject *pIVar13;
  VirtualInvokeData *pVVar14;
  System_String_o *__this_01;
  Settings_KeybindSetting_o *pSVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  Il2CppObject *pIStack_78;
  long lStack_70;
  Il2CppObject *pIStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  Il2CppObject **ppIStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_07547486 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    Il2CppMethodInitialized_07547486 = '\x01';
  }
  pIStack_78 = (Il2CppObject *)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,inMenu,(MethodInfo *)0x0);
  if (inMenu) {
    return;
  }
  pSVar4 = (__this->fields)._shifterInput;
  if ((pSVar4 != (Settings_ErenShifterInputSettings_o *)0x0) &&
     (pSVar15 = (pSVar4->fields).Walk, pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
    pCVar5 = (__this->fields)._shifter;
    bVar11 = Settings_KeybindSetting__GetKey(pSVar15,false,(MethodInfo *)0x0);
    if (pCVar5 != (Characters_ErenShifter_o *)0x0) {
      (pCVar5->fields).IsWalk = bVar11;
      pCVar5 = (__this->fields)._shifter;
      if (pCVar5 != (Characters_ErenShifter_o *)0x0) {
        bVar11 = (*(pCVar5->klass->vtable)._145_CanAction.methodPtr)
                           (pCVar5,(pCVar5->klass->vtable)._145_CanAction.method);
        if (!bVar11) {
          return;
        }
        pSVar4 = (__this->fields)._shifterInput;
        if ((pSVar4 != (Settings_ErenShifterInputSettings_o *)0x0) &&
           (pSVar15 = (pSVar4->fields).Jump, pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
          bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar15,false,(MethodInfo *)0x0);
          if (bVar11) {
            pCVar5 = (__this->fields)._shifter;
            if (pCVar5 != (Characters_ErenShifter_o *)0x0) {
              if ((pCVar5->fields).HasDirection == false) {
                if (Il2CppMethodInitialized_0753e72c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_0753e72c = '\x01';
                }
                pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar1 = (pUVar7->upVector).fields.x;
                fVar2 = (pUVar7->upVector).fields.y;
                fVar18 = (pUVar7->upVector).fields.z;
              }
              else {
                pCVar12 = pCVar5;
                if (Il2CppMethodInitialized_0753e72c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_0753e72c = '\x01';
                  pCVar12 = (__this->fields)._shifter;
                  if (pCVar12 == (Characters_ErenShifter_o *)0x0) goto label_05ba6897;
                }
                pUVar6 = (pCVar12->fields).Cache;
                if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
                   (__this_00 = (pUVar6->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
                goto label_05ba6897;
                pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
                uStack_48._0_4_ = (pUVar7->upVector).fields.x;
                uStack_48._4_4_ = (pUVar7->upVector).fields.y;
                uStack_40 = 0;
                lStack_70 = CONCAT44(lStack_70._4_4_,(pUVar7->upVector).fields.z);
                UVar19 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
                fVar1 = UVar19.fields.x + (float)uStack_48;
                fVar2 = UVar19.fields.y + uStack_48._4_4_;
                fVar18 = UVar19.fields.z + (float)lStack_70;
              }
              UVar19.fields.y = fVar2;
              UVar19.fields.x = fVar1;
              UVar19.fields.z = fVar18;
              (*(pCVar5->klass->vtable)._148_Jump.methodPtr)
                        (pCVar5,UVar19,(pCVar5->klass->vtable)._148_Jump.method);
              return;
            }
          }
          else {
            pSVar4 = (__this->fields)._shifterInput;
            if ((pSVar4 != (Settings_ErenShifterInputSettings_o *)0x0) &&
               (pSVar15 = (pSVar4->fields).Kick, pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
              bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar15,false,(MethodInfo *)0x0);
              if (bVar11) {
                pCVar5 = (__this->fields)._shifter;
                if (pCVar5 != (Characters_ErenShifter_o *)0x0) {
                  (*(pCVar5->klass->vtable)._153_Kick.methodPtr)
                            (pCVar5,(pCVar5->klass->vtable)._153_Kick.method);
                  return;
                }
              }
              else {
                pSVar4 = (__this->fields)._shifterInput;
                if (((pSVar4 != (Settings_ErenShifterInputSettings_o *)0x0) &&
                    (pSVar8 = (pSVar4->fields).Settings,
                    pSVar8 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) &&
                   (pIVar13 = (Il2CppObject *)
                              System_Collections_Specialized_OrderedDictionary__get_Keys
                                        (pSVar8,(MethodInfo *)0x0), pIVar13 != (Il2CppObject *)0x0)) {
                  pIVar9 = pIVar13->klass;
                  uVar16 = (ulong)(pIVar9->_2).interface_offsets_count;
                  if (uVar16 != 0) {
                    pIVar10 = (pIVar9->_1).interfaceOffsets;
                    lVar17 = 0;
                    do {
                      if (*(System_Collections_IEnumerable_c **)((long)&pIVar10->interfaceType + lVar17) ==
                          TypeInfo_System_Collections_IEnumerable) {
                        pVVar14 = pIVar9->vtable + *(int *)((long)&pIVar10->offset + lVar17);
                        goto label_05ba6687;
                      }
                      lVar17 = lVar17 + 0x10;
                    } while (uVar16 * 0x10 != lVar17);
                  }
                  pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                                      (pIVar13,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,0);
label_05ba6687:
                  pIStack_78 = (Il2CppObject *)(*pVVar14->methodPtr)(pIVar13,pVVar14->method);
                  puStack_58 = (undefined1 *)&pIStack_78;
                  uStack_60 = 0;
                  ppIStack_50 = &pIStack_68;
                  if (pIStack_78 != (Il2CppObject *)0x0) {
                    lStack_70 = 0;
                    puStack_58 = (undefined1 *)&pIStack_78;
                    do {
                      pIVar13 = pIStack_78;
                      pIVar9 = pIStack_78->klass;
                      uVar16 = (ulong)(pIVar9->_2).interface_offsets_count;
                      if (uVar16 != 0) {
                        pIVar10 = (pIVar9->_1).interfaceOffsets;
                        lVar17 = 0;
                        do {
                          if (*(System_Collections_IEnumerator_c **)((long)&pIVar10->interfaceType + lVar17)
                              == TypeInfo_System_Collections_IEnumerator) {
                            pVVar14 = pIVar9->vtable + *(int *)((long)&pIVar10->offset + lVar17);
                            goto label_05ba6743;
                          }
                          lVar17 = lVar17 + 0x10;
                        } while (uVar16 * 0x10 != lVar17);
                      }
                      pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                                          (pIStack_78,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0
                                          );
label_05ba6743:
                      bVar11 = (*pVVar14->methodPtr)(pIVar13,pVVar14->method);
                      pIVar13 = pIStack_78;
                      if (!bVar11) {
                        pIVar13 = il2cpp_vm_Object_IsInst
                                            (pIStack_78,(Il2CppClass *)TypeInfo_System_IDisposable);
                        pIStack_68 = pIVar13;
                        if (pIVar13 == (Il2CppObject *)0x0) goto label_05ba6986;
                        pIVar9 = pIVar13->klass;
                        uVar16 = (ulong)(pIVar9->_2).interface_offsets_count;
                        if (uVar16 == 0) goto label_05ba695f;
                        pIVar10 = (pIVar9->_1).interfaceOffsets;
                        lVar17 = 0;
                        goto label_05ba6950;
                      }
                      if (pIStack_78 == (Il2CppObject *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pIVar9 = pIStack_78->klass;
                      uVar16 = (ulong)(pIVar9->_2).interface_offsets_count;
                      if (uVar16 != 0) {
                        pIVar10 = (pIVar9->_1).interfaceOffsets;
                        lVar17 = 0;
                        do {
                          if (*(System_Collections_IEnumerator_c **)((long)&pIVar10->interfaceType + lVar17)
                              == TypeInfo_System_Collections_IEnumerator) {
                            pVVar14 = pIVar9->vtable + (*(int *)((long)&pIVar10->offset + lVar17) + 1);
                            goto label_05ba67d7;
                          }
                          lVar17 = lVar17 + 0x10;
                        } while (uVar16 * 0x10 != lVar17);
                      }
                      pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                                          (pIStack_78,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1
                                          );
label_05ba67d7:
                      __this_01 = (System_String_o *)(*pVVar14->methodPtr)(pIVar13,pVVar14->method);
                      if (__this_01 == (System_String_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      if (__this_01->klass != g_data_07556758) {
                        il2cpp_codegen_raise_invalid_cast_exception(__this_01);
                      }
                      bVar11 = System_String__StartsWith(__this_01,"Attack",(MethodInfo *)0x0);
                      if (bVar11) {
                        pSVar4 = (__this->fields)._shifterInput;
                        if (pSVar4 == (Settings_ErenShifterInputSettings_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pSVar8 = (pSVar4->fields).Settings;
                        if (pSVar8 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pSVar15 = (Settings_KeybindSetting_o *)
                                  System_Collections_Specialized_OrderedDictionary__get_Item
                                            (pSVar8,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
                        if (pSVar15 == (Settings_KeybindSetting_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        bVar3 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
                        if (((pSVar15->klass->_2).typeHierarchyDepth < bVar3) ||
                           ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                            (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
                          il2cpp_codegen_raise_invalid_cast_exception(pSVar15);
                        }
                        bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar15,false,(MethodInfo *)0x0);
                        if (bVar11) {
                          pCVar5 = (__this->fields)._shifter;
                          if (pCVar5 == (Characters_ErenShifter_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          (*(pCVar5->klass->vtable)._150_Attack.methodPtr)
                                    (pCVar5,__this_01,(pCVar5->klass->vtable)._150_Attack.method);
                        }
                      }
                    } while (pIStack_78 != (Il2CppObject *)0x0);
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
label_05ba6897:
  ThrowNullReferenceException();
  while (lVar17 = lVar17 + 0x10, uVar16 * 0x10 != lVar17) {
label_05ba6950:
    if (*(System_IDisposable_c **)((long)&pIVar10->interfaceType + lVar17) == TypeInfo_System_IDisposable) {
      pVVar14 = pIVar9->vtable + *(int *)((long)&pIVar10->offset + lVar17);
      goto label_05ba697d;
    }
  }
label_05ba695f:
  pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar13,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05ba697d:
  (*pVVar14->methodPtr)(pIVar13,pVVar14->method);
label_05ba6986:
  if (lStack_70 != 0) {
    il2cpp_codegen_rethrow();
  }
  return;
}


// Controllers.ErenShifterPlayerController$$.ctor
// il2cpp: void Controllers_ErenShifterPlayerController___ctor (Controllers_ErenShifterPlayerController_o* __this, const MethodInfo* method);
// 0x5ba69d0

void Controllers_ErenShifterPlayerController___ctor
               (Controllers_ErenShifterPlayerController_o *__this,MethodInfo *method)

{
  Controllers_BasePlayerController___ctor((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  return;
}


