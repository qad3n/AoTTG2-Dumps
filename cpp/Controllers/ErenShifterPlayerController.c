// Type: Controllers.ErenShifterPlayerController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/ErenShifterPlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/ErenShifterPlayerController.cs
// --------------------------------

// Controllers.ErenShifterPlayerController$$Awake
// il2cpp: void Controllers_ErenShifterPlayerController__Awake (Controllers_ErenShifterPlayerController_o* __this, const MethodInfo* method);
// 0x1820fd670

void Controllers_ErenShifterPlayerController__Awake
               (Controllers_ErenShifterPlayerController_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_ErenShifterInputSettings_o *value;
  Characters_BaseTitanComponentCache_o *pCVar2;
  Characters_BaseHitbox_o *pCVar3;
  Characters_ErenShifter_o *pCVar4;
  
  if (Il2CppMethodInitialized_184346ab9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ErenShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346ab9 = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  pCVar4 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ErenShifter);
  (__this->fields)._shifter = pCVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._shifter,pCVar4);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar1 != (Settings_InputSettings_o *)0x0) {
    value = (pSVar1->fields).ErenShifter;
    (__this->fields)._shifterInput = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._shifterInput,value);
    pCVar4 = (__this->fields)._shifter;
    if (((pCVar4 != (Characters_ErenShifter_o *)0x0) &&
        (pCVar2 = (pCVar4->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
       (pCVar3 = (pCVar2->fields).HandLHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
      Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.5,(MethodInfo *)0x0);
      pCVar4 = (__this->fields)._shifter;
      if (((pCVar4 != (Characters_ErenShifter_o *)0x0) &&
          (pCVar2 = (pCVar4->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0))
         && (pCVar3 = (pCVar2->fields).HandRHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
        Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.5,(MethodInfo *)0x0);
        pCVar4 = (__this->fields)._shifter;
        if (((pCVar4 != (Characters_ErenShifter_o *)0x0) &&
            (pCVar2 = (pCVar4->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0))
           && (pCVar3 = (pCVar2->fields).FootLHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
          Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.5,(MethodInfo *)0x0);
          pCVar4 = (__this->fields)._shifter;
          if (((pCVar4 != (Characters_ErenShifter_o *)0x0) &&
              (pCVar2 = (pCVar4->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0
              )) && (pCVar3 = (pCVar2->fields).FootRHitbox, pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
            Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.5,(MethodInfo *)0x0);
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
// 0x1820fd7e0
// eh: try 0x1820fd990..0x1820fdab3 -> pad 0x183317f60 catch Il2CppExceptionWrapper
// eh: try 0x1820fdaf5..0x1820fdb0e -> pad 0x180026a30 cleanup
// eh: try 0x1820fdc15..0x1820fdc4a -> pad 0x183317f60 catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820fd98c: nop dword ptr [rax]
// asm:   0x1820fdadd: lea rcx, [rsp + 0x48]
// asm:   0x1820fdae2: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1820fdae7: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820fdaec: test rcx, rcx
// asm:   0x1820fdaef: jne 0x1820fdc4a
// asm:   0x1820fdaf5: jmp 0x1820fdb14
// asm:   0x1820fdbeb: movsd qword ptr [rsp + 0x30], xmm0
// asm:   0x1820fdbf1: mov r9, qword ptr [rbx]
// asm:   0x1820fdbf4: mov r8, qword ptr [r9 + 0xa80]
// asm:   0x1820fdbfb: lea rdx, [rsp + 0x30]
// asm:   0x1820fdc00: mov rcx, rbx
// asm:   0x1820fdc03: call qword ptr [r9 + 0xa78]  ; vtable slot 148
// asm:   0x1820fdc0a: jmp 0x1820fdb14
// asm:   0x1820fdc4a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Controllers_ErenShifterPlayerController__UpdateActionInput
               (Controllers_ErenShifterPlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  Settings_ErenShifterInputSettings_o *pSVar7;
  Characters_ErenShifter_o *pCVar8;
  System_Collections_Specialized_OrderedDictionary_o *pSVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  Characters_ErenShifter_o *pCVar11;
  Utility_BaseComponentCache_o *pUVar12;
  UnityEngine_Transform_o *__this_00;
  bool bVar13;
  Il2CppObject *obj;
  void *pvVar14;
  System_String_o *pSVar15;
  Settings_KeybindSetting_o *pSVar16;
  UnityEngine_Vector3_o *pUVar17;
  System_String_o *__this_01;
  Il2CppObject *local_res20;
  Il2CppObject *local_88 [2];
  UnityEngine_Vector3_Fields local_78;
  undefined1 local_68 [16];
  Il2CppObject **local_58;
  
  if (Il2CppMethodInitialized_184346aba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    Il2CppMethodInitialized_184346aba = '\x01';
  }
  local_res20 = (Il2CppObject *)0x0;
  local_88[0] = (Il2CppObject *)0x0;
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,inMenu,(MethodInfo *)0x0);
  if (inMenu) {
    return;
  }
  pSVar7 = (__this->fields)._shifterInput;
  if ((pSVar7 != (Settings_ErenShifterInputSettings_o *)0x0) &&
     (pSVar16 = (pSVar7->fields).Walk, pSVar16 != (Settings_KeybindSetting_o *)0x0)) {
    pCVar8 = (__this->fields)._shifter;
    bVar13 = Settings_KeybindSetting__GetKey(pSVar16,false,(MethodInfo *)0x0);
    if (pCVar8 != (Characters_ErenShifter_o *)0x0) {
      (pCVar8->fields).IsWalk = bVar13;
      pCVar8 = (__this->fields)._shifter;
      if (pCVar8 != (Characters_ErenShifter_o *)0x0) {
        bVar13 = (*(pCVar8->klass->vtable)._145_CanAction.methodPtr)
                           (pCVar8,(pCVar8->klass->vtable)._145_CanAction.method);
        if (!bVar13) {
          return;
        }
        pSVar7 = (__this->fields)._shifterInput;
        if ((pSVar7 != (Settings_ErenShifterInputSettings_o *)0x0) &&
           (pSVar16 = (pSVar7->fields).Jump, pSVar16 != (Settings_KeybindSetting_o *)0x0)) {
          bVar13 = Settings_KeybindSetting__GetKeyDown(pSVar16,false,(MethodInfo *)0x0);
          if (bVar13) {
            pCVar8 = (__this->fields)._shifter;
            if (pCVar8 != (Characters_ErenShifter_o *)0x0) {
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
                if (((pCVar11 == (Characters_ErenShifter_o *)0x0) ||
                    (pUVar12 = (pCVar11->fields).Cache, pUVar12 == (Utility_BaseComponentCache_o *)0x0)) ||
                   (__this_00 = (pUVar12->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
                goto label_1820fdc0f;
                pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
                uVar2 = (pUVar10->upVector).fields.x;
                uVar4 = (pUVar10->upVector).fields.y;
                fVar1 = (pUVar10->upVector).fields.z;
                pUVar17 = UnityEngine_Transform__get_forward
                                    ((UnityEngine_Vector3_o *)local_68,__this_00,(MethodInfo *)0x0);
                uVar3 = (pUVar17->fields).x;
                uVar5 = (pUVar17->fields).y;
                local_78.x = (float)uVar3 + (float)uVar2;
                local_78.y = (float)uVar5 + (float)uVar4;
                local_78.z = fVar1 + (pUVar17->fields).z;
              }
              (*(pCVar8->klass->vtable)._148_Jump.methodPtr)
                        (pCVar8,(UnityEngine_Vector3_o *)&local_78,(pCVar8->klass->vtable)._148_Jump.method);
              return;
            }
          }
          else {
            pSVar7 = (__this->fields)._shifterInput;
            if ((pSVar7 != (Settings_ErenShifterInputSettings_o *)0x0) &&
               (pSVar16 = (pSVar7->fields).Kick, pSVar16 != (Settings_KeybindSetting_o *)0x0)) {
              bVar13 = Settings_KeybindSetting__GetKeyDown(pSVar16,false,(MethodInfo *)0x0);
              if (bVar13) {
                pCVar8 = (__this->fields)._shifter;
                if (pCVar8 != (Characters_ErenShifter_o *)0x0) {
                  (*(pCVar8->klass->vtable)._153_Kick.methodPtr)
                            (pCVar8,(pCVar8->klass->vtable)._153_Kick.method);
                  return;
                }
              }
              else {
                pSVar7 = (__this->fields)._shifterInput;
                if (((pSVar7 != (Settings_ErenShifterInputSettings_o *)0x0) &&
                    (pSVar9 = (pSVar7->fields).Settings,
                    pSVar9 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) &&
                   (obj = (Il2CppObject *)
                          System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar9,(MethodInfo *)0x0)
                   , obj != (Il2CppObject *)0x0)) {
                  local_res20 = InterfaceInvoker0_Invoke
                                          (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,obj);
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
                                          (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,
                                           local_res20);
                      if ((char)pvVar14 == '\0') {
                        local_88[0] = il2cpp_vm_Object_IsInst
                                                (local_res20,(Il2CppClass *)TypeInfo_System_IDisposable);
                        if (local_88[0] == (Il2CppObject *)0x0) {
                          return;
                        }
                        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_88[0]);
                        return;
                      }
                      if (local_res20 == (Il2CppObject *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar15 = InterfaceInvoker0_Invoke
                                          (1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,
                                           local_res20);
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
                      bVar13 = System_String__StartsWith(__this_01,"Attack",(MethodInfo *)0x0);
                    } while (!bVar13);
                    pSVar7 = (__this->fields)._shifterInput;
                    if (pSVar7 == (Settings_ErenShifterInputSettings_o *)0x0) {
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
                      if (pCVar8 == (Characters_ErenShifter_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      (*(pCVar8->klass->vtable)._150_Attack.methodPtr)
                                (pCVar8,__this_01,(pCVar8->klass->vtable)._150_Attack.method);
                    }
                  }
                  il2cpp_codegen_raise_invalid_cast_exception(pSVar16);
                }
              }
            }
          }
        }
      }
    }
  }
label_1820fdc0f:
  ThrowNullReferenceException();
}


// Controllers.ErenShifterPlayerController$$.ctor
// il2cpp: void Controllers_ErenShifterPlayerController___ctor (Controllers_ErenShifterPlayerController_o* __this, const MethodInfo* method);
// 0x1820f04e0

void Controllers_ErenShifterPlayerController___ctor
               (Controllers_ErenShifterPlayerController_o *__this,MethodInfo *method)

{
  Controllers_BasePlayerController___ctor((Controllers_BasePlayerController_o *)__this,(MethodInfo *)0x0);
  return;
}


