// Type: Controllers.AnnieShifterPlayerController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/AnnieShifterPlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/AnnieShifterPlayerController.cs
// --------------------------------

// Controllers.AnnieShifterPlayerController$$Awake
// il2cpp: void Controllers_AnnieShifterPlayerController__Awake (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x1820efba0

void Controllers_AnnieShifterPlayerController__Awake
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_AnnieShifterInputSettings_o *value;
  Characters_BaseTitanComponentCache_o *pCVar2;
  Characters_BaseHitbox_o *pCVar3;
  Characters_AnnieShifter_o *pCVar4;
  
  if (Il2CppMethodInitialized_184346a76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_AnnieShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346a76 = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  pCVar4 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_AnnieShifter);
  (__this->fields)._shifter = pCVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._shifter,pCVar4);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar1 != (Settings_InputSettings_o *)0x0) {
    value = (pSVar1->fields).AnnieShifter;
    (__this->fields)._shifterInput = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._shifterInput,value);
    pCVar4 = (__this->fields)._shifter;
    if (((pCVar4 != (Characters_AnnieShifter_o *)0x0) &&
        (pCVar2 = (pCVar4->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
       (pCVar3 = (pCVar2->fields).HandLHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
      Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.5,(MethodInfo *)0x0);
      pCVar4 = (__this->fields)._shifter;
      if (((pCVar4 != (Characters_AnnieShifter_o *)0x0) &&
          (pCVar2 = (pCVar4->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0))
         && (pCVar3 = (pCVar2->fields).HandRHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
        Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.5,(MethodInfo *)0x0);
        pCVar4 = (__this->fields)._shifter;
        if (((pCVar4 != (Characters_AnnieShifter_o *)0x0) &&
            (pCVar2 = (pCVar4->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0))
           && (pCVar3 = (pCVar2->fields).FootLHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
          Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.5,(MethodInfo *)0x0);
          pCVar4 = (__this->fields)._shifter;
          if (((pCVar4 != (Characters_AnnieShifter_o *)0x0) &&
              (pCVar2 = (pCVar4->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0
              )) && (pCVar3 = (pCVar2->fields).FootRHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
            Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.5,(MethodInfo *)0x0);
            pCVar4 = (__this->fields)._shifter;
            if (((pCVar4 != (Characters_AnnieShifter_o *)0x0) &&
                (pCVar2 = (pCVar4->fields).BaseTitanCache,
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
// 0x1820efd40
// eh: try 0x1820effe0..0x1820f0103 -> pad 0x183317f60 catch Il2CppExceptionWrapper
// eh: try 0x1820f0148..0x1820f015d -> pad 0x180026a30 cleanup
// eh: try 0x1820f049c..0x1820f04d1 -> pad 0x183317f60 catch Il2CppExceptionWrapper
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820effd9: nop dword ptr [rax]
// asm:   0x1820f0130: lea rcx, [rsp + 0x48]
// asm:   0x1820f0135: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1820f013a: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820f013f: test rcx, rcx
// asm:   0x1820f0142: jne 0x1820f04d1
// asm:   0x1820f0148: jmp 0x1820f037c
// asm:   0x1820f01c6: jmp 0x1820f035f
// asm:   0x1820f01cb: mov rdx, qword ptr [rip + 0x1fc8016]  ; "AttackGrabUpRight"
// asm:   0x1820f01d2: jmp 0x1820f035f
// asm:   0x1820f0236: jmp 0x1820f035f
// asm:   0x1820f029a: jmp 0x1820f035f
// asm:   0x1820f02fe: jmp 0x1820f035f
// asm:   0x1820f03a1: mov rax, qword ptr [rcx]
// asm:   0x1820f03a4: mov rdx, qword ptr [rax + 0xad0]
// asm:   0x1820f03ab: call qword ptr [rax + 0xac8]  ; vtable slot 153
// asm:   0x1820f03b1: jmp 0x1820f037c
// asm:   0x1820f0472: movsd qword ptr [rsp + 0x30], xmm0
// asm:   0x1820f0478: mov r9, qword ptr [rdi]
// asm:   0x1820f047b: mov r8, qword ptr [r9 + 0xa80]
// asm:   0x1820f0482: lea rdx, [rsp + 0x30]
// asm:   0x1820f0487: mov rcx, rdi
// asm:   0x1820f048a: call qword ptr [r9 + 0xa78]  ; vtable slot 148
// asm:   0x1820f0491: jmp 0x1820f037c
// asm:   0x1820f04d1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f65: push rbp
// asm:   0x183317f66: sub rsp, 0x20
// asm:   0x183317f6a: mov rbp, rdx
// asm:   0x183317f6d: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317f71: mov rcx, qword ptr [rax]
// asm:   0x183317f74: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317f78: movabs rax, 0
// asm:   0x183317f82: add rsp, 0x20
// asm:   0x183317f86: pop rbp
// asm:   0x183317f87: ret 

void Controllers_AnnieShifterPlayerController__UpdateActionInput
               (Controllers_AnnieShifterPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  Settings_AnnieShifterInputSettings_o *pSVar7;
  Characters_AnnieShifter_o *pCVar8;
  System_Collections_Specialized_OrderedDictionary_o *pSVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  Characters_AnnieShifter_o *pCVar11;
  Utility_BaseComponentCache_o *pUVar12;
  UnityEngine_Transform_o *__this_00;
  bool bVar13;
  Il2CppObject *obj;
  void *pvVar14;
  System_String_o *pSVar15;
  Settings_KeybindSetting_o *pSVar16;
  System_Single_array *pSVar17;
  UnityEngine_Vector3_o *pUVar18;
  System_String_o *__this_01;
  Il2CppObject *local_res20;
  Il2CppObject *local_88 [2];
  UnityEngine_Vector3_Fields local_78;
  undefined1 local_68 [16];
  Il2CppObject **local_58;
  
  if (Il2CppMethodInitialized_184346a77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    Il2CppMethodInitialized_184346a77 = '\x01';
  }
  local_res20 = (Il2CppObject *)0x0;
  local_88[0] = (Il2CppObject *)0x0;
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,inMenu,(MethodInfo *)0x0);
  if (inMenu) {
    return;
  }
  pSVar7 = (__this->fields)._shifterInput;
  if ((pSVar7 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
     (pSVar16 = (pSVar7->fields).Walk, pSVar16 != (Settings_KeybindSetting_o *)0x0)) {
    pCVar8 = (__this->fields)._shifter;
    bVar13 = Settings_KeybindSetting__GetKey(pSVar16,false,(MethodInfo *)0x0);
    if (pCVar8 != (Characters_AnnieShifter_o *)0x0) {
      (pCVar8->fields).IsWalk = bVar13;
      pCVar8 = (__this->fields)._shifter;
      if (pCVar8 != (Characters_AnnieShifter_o *)0x0) {
        bVar13 = (*(pCVar8->klass->vtable)._145_CanAction.methodPtr)
                           (pCVar8,(pCVar8->klass->vtable)._145_CanAction.method);
        if (!bVar13) {
          return;
        }
        pSVar7 = (__this->fields)._shifterInput;
        if ((pSVar7 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
           (pSVar16 = (pSVar7->fields).Jump, pSVar16 != (Settings_KeybindSetting_o *)0x0)) {
          bVar13 = Settings_KeybindSetting__GetKeyDown(pSVar16,false,(MethodInfo *)0x0);
          if (bVar13) {
            pCVar8 = (__this->fields)._shifter;
            if (pCVar8 != (Characters_AnnieShifter_o *)0x0) {
              if ((pCVar8->fields).HasDirection == false) {
                if (Il2CppMethodInitialized_18433de5c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5c = '\x01';
                }
                pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
                local_78.x = (pUVar10->upVector).fields.x;
                local_78.y = (pUVar10->upVector).fields.y;
                local_78.z = (pUVar10->upVector).fields.z;
              }
              else {
                if (Il2CppMethodInitialized_18433de5c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_18433de5c = '\x01';
                }
                pCVar11 = (__this->fields)._shifter;
                if (((pCVar11 == (Characters_AnnieShifter_o *)0x0) ||
                    (pUVar12 = (pCVar11->fields).Cache, pUVar12 == (Utility_BaseComponentCache_o *)0x0)) ||
                   (__this_00 = (pUVar12->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
                goto label_1820f0496;
                pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
                uVar2 = (pUVar10->upVector).fields.x;
                uVar4 = (pUVar10->upVector).fields.y;
                fVar1 = (pUVar10->upVector).fields.z;
                pUVar18 = UnityEngine_Transform__get_forward
                                    ((UnityEngine_Vector3_o *)local_68,__this_00,(MethodInfo *)0x0);
                uVar3 = (pUVar18->fields).x;
                uVar5 = (pUVar18->fields).y;
                local_78.x = (float)uVar3 + (float)uVar2;
                local_78.y = (float)uVar5 + (float)uVar4;
                local_78.z = fVar1 + (pUVar18->fields).z;
              }
              (*(pCVar8->klass->vtable)._148_Jump.methodPtr)
                        (pCVar8,(UnityEngine_Vector3_o *)&local_78,(pCVar8->klass->vtable)._148_Jump.method);
              return;
            }
          }
          else {
            pSVar7 = (__this->fields)._shifterInput;
            if ((pSVar7 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
               (pSVar16 = (pSVar7->fields).Kick, pSVar16 != (Settings_KeybindSetting_o *)0x0)) {
              bVar13 = Settings_KeybindSetting__GetKeyDown(pSVar16,false,(MethodInfo *)0x0);
              if (bVar13) {
                pCVar8 = (__this->fields)._shifter;
                if (pCVar8 != (Characters_AnnieShifter_o *)0x0) {
                  (*(pCVar8->klass->vtable)._153_Kick.methodPtr)
                            (pCVar8,(pCVar8->klass->vtable)._153_Kick.method);
                  return;
                }
              }
              else {
                pSVar7 = (__this->fields)._shifterInput;
                if ((pSVar7 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                   (pSVar16 = (pSVar7->fields).AttackBrushFront, pSVar16 != (Settings_KeybindSetting_o *)0x0))
                {
                  bVar13 = Settings_KeybindSetting__GetKeyDown(pSVar16,false,(MethodInfo *)0x0);
                  if (bVar13) {
                    if (Il2CppMethodInitialized_184346a78 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFrontL");
                      il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFrontR");
                      Il2CppMethodInitialized_184346a78 = '\x01';
                    }
                    pSVar17 = Controllers_BasePlayerController__GetAimAngles
                                        ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
                    if (pSVar17 == (System_Single_array *)0x0) goto label_1820f0496;
                    if ((int)pSVar17->max_length == 0) {
label_1820f04d7:
                      ThrowIndexOutOfRangeException();
                    }
                    pSVar15 = "AttackBrushFrontR";
                    if (pSVar17->m_Items[0] <= 0.0) {
                      pSVar15 = "AttackBrushFrontL";
                    }
                  }
                  else {
                    pSVar7 = (__this->fields)._shifterInput;
                    if ((pSVar7 == (Settings_AnnieShifterInputSettings_o *)0x0) ||
                       (pSVar16 = (pSVar7->fields).AttackBrushHead,
                       pSVar16 == (Settings_KeybindSetting_o *)0x0)) goto label_1820f0496;
                    bVar13 = Settings_KeybindSetting__GetKeyDown(pSVar16,false,(MethodInfo *)0x0);
                    if (bVar13) {
                      if (Il2CppMethodInitialized_184346a79 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHeadL");
                        il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHeadR");
                        Il2CppMethodInitialized_184346a79 = '\x01';
                      }
                      pSVar17 = Controllers_BasePlayerController__GetAimAngles
                                          ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
                      if (pSVar17 == (System_Single_array *)0x0) goto label_1820f0496;
                      if ((int)pSVar17->max_length == 0) goto label_1820f04d7;
                      pSVar15 = "AttackBrushHeadR";
                      if (pSVar17->m_Items[0] <= 0.0) {
                        pSVar15 = "AttackBrushHeadL";
                      }
                    }
                    else {
                      pSVar7 = (__this->fields)._shifterInput;
                      if ((pSVar7 == (Settings_AnnieShifterInputSettings_o *)0x0) ||
                         (pSVar16 = (pSVar7->fields).AttackGrabBottom,
                         pSVar16 == (Settings_KeybindSetting_o *)0x0)) goto label_1820f0496;
                      bVar13 = Settings_KeybindSetting__GetKeyDown(pSVar16,false,(MethodInfo *)0x0);
                      if (bVar13) {
                        if (Il2CppMethodInitialized_184346a7a == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottomLeft");
                          il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottomRight");
                          Il2CppMethodInitialized_184346a7a = '\x01';
                        }
                        pSVar17 = Controllers_BasePlayerController__GetAimAngles
                                            ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
                        if (pSVar17 == (System_Single_array *)0x0) goto label_1820f0496;
                        if ((int)pSVar17->max_length == 0) goto label_1820f04d7;
                        pSVar15 = "AttackGrabBottomRight";
                        if (pSVar17->m_Items[0] <= 0.0) {
                          pSVar15 = "AttackGrabBottomLeft";
                        }
                      }
                      else {
                        pSVar7 = (__this->fields)._shifterInput;
                        if ((pSVar7 == (Settings_AnnieShifterInputSettings_o *)0x0) ||
                           (pSVar16 = (pSVar7->fields).AttackGrabMid,
                           pSVar16 == (Settings_KeybindSetting_o *)0x0)) goto label_1820f0496;
                        bVar13 = Settings_KeybindSetting__GetKeyDown(pSVar16,false,(MethodInfo *)0x0);
                        if (bVar13) {
                          if (Il2CppMethodInitialized_184346a7b == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMidRight");
                            il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMidLeft");
                            Il2CppMethodInitialized_184346a7b = '\x01';
                          }
                          pSVar17 = Controllers_BasePlayerController__GetAimAngles
                                              ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0)
                          ;
                          if (pSVar17 == (System_Single_array *)0x0) goto label_1820f0496;
                          if ((int)pSVar17->max_length == 0) goto label_1820f04d7;
                          pSVar15 = "AttackGrabMidRight";
                          if (pSVar17->m_Items[0] <= 0.0) {
                            pSVar15 = "AttackGrabMidLeft";
                          }
                        }
                        else {
                          pSVar7 = (__this->fields)._shifterInput;
                          if ((pSVar7 == (Settings_AnnieShifterInputSettings_o *)0x0) ||
                             (pSVar16 = (pSVar7->fields).AttackGrabUp,
                             pSVar16 == (Settings_KeybindSetting_o *)0x0)) goto label_1820f0496;
                          bVar13 = Settings_KeybindSetting__GetKeyDown(pSVar16,false,(MethodInfo *)0x0);
                          if (!bVar13) {
                            pSVar7 = (__this->fields)._shifterInput;
                            if (((pSVar7 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                                (pSVar9 = (pSVar7->fields).Settings,
                                pSVar9 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) &&
                               (obj = (Il2CppObject *)
                                      System_Collections_Specialized_OrderedDictionary__get_Keys
                                                (pSVar9,(MethodInfo *)0x0), obj != (Il2CppObject *)0x0)) {
                              local_res20 = InterfaceInvoker0_Invoke
                                                      (0,(Il2CppClass *)
                                                         TypeInfo_System_Collections_IEnumerable,obj);
                              local_68._0_4_ = 0.0;
                              local_68._4_4_ = 0.0;
                              local_68._8_8_ = &local_res20;
                              local_58 = local_88;
                              while( true ) {
                                do {
                                  if (local_res20 == (Il2CppObject *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  pvVar14 = InterfaceInvoker0_Invoke
                                                      (0,(Il2CppClass *)
                                                         TypeInfo_System_Collections_IEnumerator,local_res20);
                                  if ((char)pvVar14 == '\0') {
                                    local_88[0] = il2cpp_vm_Object_IsInst
                                                            (local_res20,
                                                             (Il2CppClass *)TypeInfo_System_IDisposable);
                                    if (local_88[0] == (Il2CppObject *)0x0) {
                                      return;
                                    }
                                    InterfaceInvoker0_Invoke
                                              (0,(Il2CppClass *)TypeInfo_System_IDisposable,local_88[0]);
                                    return;
                                  }
                                  if (local_res20 == (Il2CppObject *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  pSVar15 = InterfaceInvoker0_Invoke
                                                      (1,(Il2CppClass *)
                                                         TypeInfo_System_Collections_IEnumerator,local_res20);
                                  if (pSVar15 == (System_String_o *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  __this_01 = (System_String_o *)0x0;
                                  if (pSVar15->klass == g_data_184354e50) {
                                    __this_01 = pSVar15;
                                  }
                                  if (__this_01 == (System_String_o *)0x0) {
                                    il2cpp_codegen_raise_invalid_cast_exception(pSVar15);
                                  }
                                  bVar13 = System_String__StartsWith
                                                     (__this_01,"Attack",(MethodInfo *)0x0);
                                } while (!bVar13);
                                pSVar7 = (__this->fields)._shifterInput;
                                if (pSVar7 == (Settings_AnnieShifterInputSettings_o *)0x0) {
                                  ThrowNullReferenceException();
                                }
                                pSVar9 = (pSVar7->fields).Settings;
                                if (pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                                  ThrowNullReferenceException();
                                }
                                pSVar16 = (Settings_KeybindSetting_o *)
                                          System_Collections_Specialized_OrderedDictionary__get_Item
                                                    (pSVar9,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
                                if (pSVar16 == (Settings_KeybindSetting_o *)0x0) {
                                  ThrowNullReferenceException();
                                }
                                bVar6 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
                                if (((pSVar16->klass->_2).typeHierarchyDepth < bVar6) ||
                                   ((pSVar16->klass->_2).typeHierarchy[(ulonglong)bVar6 - 1] !=
                                    (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) break;
                                bVar13 = Settings_KeybindSetting__GetKeyDown(pSVar16,false,(MethodInfo *)0x0);
                                if (bVar13) {
                                  pCVar8 = (__this->fields)._shifter;
                                  if (pCVar8 == (Characters_AnnieShifter_o *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  (*(pCVar8->klass->vtable)._150_Attack.methodPtr)
                                            (pCVar8,__this_01,(pCVar8->klass->vtable)._150_Attack.method);
                                }
                              }
                              il2cpp_codegen_raise_invalid_cast_exception(pSVar16);
                            }
                            goto label_1820f0496;
                          }
                          if (Il2CppMethodInitialized_184346a7c == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUpLeft");
                            il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUpRight");
                            il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUp");
                            Il2CppMethodInitialized_184346a7c = '\x01';
                          }
                          pSVar17 = Controllers_BasePlayerController__GetAimAngles
                                              ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0)
                          ;
                          if (pSVar17 == (System_Single_array *)0x0) goto label_1820f0496;
                          if ((int)pSVar17->max_length == 0) goto label_1820f04d7;
                          pSVar15 = "AttackGrabUpRight";
                          if ((pSVar17->m_Items[0] <= 45.0) &&
                             (pSVar15 = "AttackGrabUpLeft", -45.0 <= pSVar17->m_Items[0])) {
                            pSVar15 = "AttackGrabUp";
                          }
                        }
                      }
                    }
                  }
                  pCVar8 = (__this->fields)._shifter;
                  if (pCVar8 != (Characters_AnnieShifter_o *)0x0) {
                    (*(pCVar8->klass->vtable)._150_Attack.methodPtr)
                              (pCVar8,pSVar15,(pCVar8->klass->vtable)._150_Attack.method);
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
label_1820f0496:
  ThrowNullReferenceException();
}


// Controllers.AnnieShifterPlayerController$$AttackBrushFront
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackBrushFront (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x1820ef8b0

void Controllers_AnnieShifterPlayerController__AttackBrushFront
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346a78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFrontL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFrontR");
    Il2CppMethodInitialized_184346a78 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = "AttackBrushFrontR";
    if (pSVar2->m_Items[0] <= 0.0) {
      pSVar3 = "AttackBrushFrontL";
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,pSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.AnnieShifterPlayerController$$AttackBrushHead
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackBrushHead (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x1820ef940

void Controllers_AnnieShifterPlayerController__AttackBrushHead
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346a79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHeadL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHeadR");
    Il2CppMethodInitialized_184346a79 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = "AttackBrushHeadR";
    if (pSVar2->m_Items[0] <= 0.0) {
      pSVar3 = "AttackBrushHeadL";
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,pSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.AnnieShifterPlayerController$$AttackGrabBottom
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackGrabBottom (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x1820ef9d0

void Controllers_AnnieShifterPlayerController__AttackGrabBottom
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346a7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottomLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottomRight");
    Il2CppMethodInitialized_184346a7a = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = "AttackGrabBottomRight";
    if (pSVar2->m_Items[0] <= 0.0) {
      pSVar3 = "AttackGrabBottomLeft";
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,pSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.AnnieShifterPlayerController$$AttackGrabMid
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackGrabMid (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x1820efa60

void Controllers_AnnieShifterPlayerController__AttackGrabMid
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346a7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMidRight");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMidLeft");
    Il2CppMethodInitialized_184346a7b = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = "AttackGrabMidRight";
    if (pSVar2->m_Items[0] <= 0.0) {
      pSVar3 = "AttackGrabMidLeft";
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,pSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.AnnieShifterPlayerController$$AttackGrabUp
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackGrabUp (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x1820efaf0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820efb6a: jmp 0x1820efb73
// asm:   0x1820efb6c: mov rdx, qword ptr [rip + 0x1fc8675]  ; "AttackGrabUpRight"

void Controllers_AnnieShifterPlayerController__AttackGrabUp
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  System_Single_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346a7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUpLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUpRight");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUp");
    Il2CppMethodInitialized_184346a7c = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = "AttackGrabUpRight";
    if ((pSVar2->m_Items[0] <= 45.0) && (pSVar3 = "AttackGrabUpLeft", -45.0 <= pSVar2->m_Items[0])) {
      pSVar3 = "AttackGrabUp";
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,pSVar3,(pCVar1->klass->vtable)._150_Attack.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.AnnieShifterPlayerController$$.ctor
// il2cpp: void Controllers_AnnieShifterPlayerController___ctor (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x1820f04e0

void
Controllers_AnnieShifterPlayerController___ctor(Controllers_AnnieShifterPlayerController_o* __this, MethodInfo* method)

{
  Controllers_BasePlayerController___ctor((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  return;
}


