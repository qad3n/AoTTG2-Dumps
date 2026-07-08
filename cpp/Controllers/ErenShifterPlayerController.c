// Type: Controllers.ErenShifterPlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Controllers/ErenShifterPlayerController.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Controllers/ErenShifterPlayerController.cs  [CHANGED since prior version]
// --------------------------------

// Controllers.ErenShifterPlayerController$$Awake
// il2cpp: void Controllers_ErenShifterPlayerController__Awake (Controllers_ErenShifterPlayerController_o* __this, const MethodInfo* method);
// 0x3f867d0

void Controllers_ErenShifterPlayerController__Awake
               (Controllers_ErenShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_ErenShifter_o **ppCVar1;
  long lVar2;
  System_Action_Hashtable__o *pSVar3;
  Characters_BaseHitbox_o *pCVar4;
  Characters_ErenShifter_o *pCVar5;
  
  if (DAT_05703f78 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ErenShifter_GetComponent_ErenShifter);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703f78 = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,method);
  pCVar5 = (Characters_ErenShifter_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_ErenShifter_GetComponent_ErenShifter);
  ppCVar1 = &(__this->fields)._shifter;
  (__this->fields)._shifter = pCVar5;
  il2cpp_runtime_glue(ppCVar1,pCVar5);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar2 != 0) {
    (__this->fields)._shifterInput = *(Settings_ErenShifterInputSettings_o **)(lVar2 + 0x40);
    il2cpp_runtime_glue(&(__this->fields)._shifterInput);
    pCVar5 = (__this->fields)._shifter;
    if (((pCVar5 != (Characters_ErenShifter_o *)0x0) &&
        (pSVar3 = (pCVar5->fields).OnPlayerPropertiesChanged,
        pSVar3 != (System_Action_Hashtable__o *)0x0)) &&
       (pCVar4 = pSVar3[1].monitor, pCVar4 != (Characters_BaseHitbox_o *)0x0)) {
      Characters_BaseHitbox__ScaleSphereCollider(pCVar4,1.5,(MethodInfo *)0x0);
      if (((*ppCVar1 != (Characters_ErenShifter_o *)0x0) &&
          (pSVar3 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
          pSVar3 != (System_Action_Hashtable__o *)0x0)) &&
         (pCVar4 = (Characters_BaseHitbox_o *)pSVar3[1].fields.method_ptr,
         pCVar4 != (Characters_BaseHitbox_o *)0x0)) {
        Characters_BaseHitbox__ScaleSphereCollider(pCVar4,1.5,(MethodInfo *)0x0);
        if (((*ppCVar1 != (Characters_ErenShifter_o *)0x0) &&
            (pSVar3 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
            pSVar3 != (System_Action_Hashtable__o *)0x0)) &&
           (pCVar4 = (Characters_BaseHitbox_o *)pSVar3[1].fields.invoke_impl,
           pCVar4 != (Characters_BaseHitbox_o *)0x0)) {
          Characters_BaseHitbox__ScaleSphereCollider(pCVar4,1.5,(MethodInfo *)0x0);
          if (((*ppCVar1 != (Characters_ErenShifter_o *)0x0) &&
              (pSVar3 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
              pSVar3 != (System_Action_Hashtable__o *)0x0)) &&
             (pCVar4 = (Characters_BaseHitbox_o *)pSVar3[1].fields.m_target,
             pCVar4 != (Characters_BaseHitbox_o *)0x0)) {
            Characters_BaseHitbox__ScaleSphereCollider(pCVar4,1.5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.ErenShifterPlayerController$$UpdateActionInput
// il2cpp: void Controllers_ErenShifterPlayerController__UpdateActionInput (Controllers_ErenShifterPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f86940

/* WARNING: Removing unreachable block (ram,0x03f86ff0) */

void Controllers_ErenShifterPlayerController__UpdateActionInput
               (Controllers_ErenShifterPlayerController_o *__this,bool_conflict inMenu,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Settings_ErenShifterInputSettings_o *pSVar3;
  Characters_ErenShifter_o *pCVar4;
  Characters_ErenShifter_o *pCVar5;
  UnityEngine_Transform_o *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar6;
  System_Collections_ICollection_c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  char cVar9;
  bool_conflict bVar10;
  System_Collections_ICollection_o *pSVar11;
  VirtualInvokeData *pVVar12;
  long *plVar13;
  undefined8 *puVar14;
  System_String_o *__this_01;
  Settings_KeybindSetting_o *pSVar15;
  MethodInfo *extraout_RDX;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o UVar20;
  
  if (DAT_05703f79 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&"Attack");
    DAT_05703f79 = '\x01';
    method = extraout_RDX;
  }
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,inMenu & 0xff,method);
  if ((char)inMenu != '\0') {
    return;
  }
  pSVar3 = (__this->fields)._shifterInput;
  if ((pSVar3 != (Settings_ErenShifterInputSettings_o *)0x0) &&
     (pSVar15 = (pSVar3->fields).Walk, pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
    pCVar4 = (__this->fields)._shifter;
    bVar10 = Settings_KeybindSetting__GetKey(pSVar15,0,(MethodInfo *)0x0);
    if (pCVar4 != (Characters_ErenShifter_o *)0x0) {
      *(char *)&(pCVar4->fields).State = (char)bVar10;
      pCVar4 = (__this->fields)._shifter;
      if (pCVar4 != (Characters_ErenShifter_o *)0x0) {
        cVar9 = (*(pCVar4->klass->vtable)._123_CanAction.methodPtr)();
        if (cVar9 == '\0') {
          return;
        }
        pSVar3 = (__this->fields)._shifterInput;
        if ((pSVar3 != (Settings_ErenShifterInputSettings_o *)0x0) &&
           (pSVar15 = (pSVar3->fields).Jump, pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
          bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar15,0,(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            pSVar3 = (__this->fields)._shifterInput;
            if ((pSVar3 != (Settings_ErenShifterInputSettings_o *)0x0) &&
               (pSVar15 = (pSVar3->fields).Kick, pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
              bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar15,0,(MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                pSVar3 = (__this->fields)._shifterInput;
                if (((pSVar3 != (Settings_ErenShifterInputSettings_o *)0x0) &&
                    (pSVar6 = (pSVar3->fields).Settings,
                    pSVar6 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) &&
                   (pSVar11 = System_Collections_Specialized_OrderedDictionary__get_Keys
                                        (pSVar6,(MethodInfo *)0x0),
                   pSVar11 != (System_Collections_ICollection_o *)0x0)) {
                  pSVar7 = pSVar11->klass;
                  uVar2._0_1_ = (pSVar7->_2).rank;
                  uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
                  if ((ulong)uVar2 != 0) {
                    pIVar8 = (pSVar7->_1).interfaceOffsets;
                    lVar16 = 0;
                    do {
                      if (*(long *)((long)&pIVar8->interfaceType + lVar16) == TypeInfo_IEnumerable) {
                        pVVar12 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar16);
                        goto LAB_03f86bd1;
                      }
                      lVar16 = lVar16 + 0x10;
                    } while ((ulong)uVar2 << 4 != lVar16);
                  }
                  pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar11,TypeInfo_IEnumerable,0);
LAB_03f86bd1:
                  plVar13 = (long *)(*pVVar12->methodPtr)(pSVar11,pVVar12->method);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  do {
                    lVar16 = *plVar13;
                    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
                      lVar17 = 0;
                      do {
                        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
                          puVar14 = (undefined8 *)
                                    ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 +
                                     lVar16 + 0x138);
                          goto LAB_03f86c73;
                        }
                        lVar17 = lVar17 + 0x10;
                      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
                    }
                    puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IEnumerator,0);
LAB_03f86c73:
                    cVar9 = (*(code *)*puVar14)(plVar13,puVar14[1]);
                    if (cVar9 == '\0') {
                      plVar13 = (long *)il2cpp_runtime_glue(plVar13,TypeInfo_IDisposable);
                      if (plVar13 == (long *)0x0) {
                        return;
                      }
                      lVar16 = *plVar13;
                      if ((ulong)*(ushort *)(lVar16 + 0x12e) == 0) goto LAB_03f86f0f;
                      lVar17 = 0;
                      goto LAB_03f86f00;
                    }
                    lVar16 = *plVar13;
                    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
                      lVar17 = 0;
                      do {
                        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
                          puVar14 = (undefined8 *)
                                    ((long)(*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) + 1) *
                                     0x10 + lVar16 + 0x138);
                          goto LAB_03f86cf8;
                        }
                        lVar17 = lVar17 + 0x10;
                      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
                    }
                    puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IEnumerator,1);
LAB_03f86cf8:
                    __this_01 = (System_String_o *)(*(code *)*puVar14)(plVar13,puVar14[1]);
                    if (__this_01 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    if (__this_01->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_unwind_resume(__this_01);
                    }
                    bVar10 = System_String__StartsWith(__this_01,"Attack",(MethodInfo *)0x0);
                    if ((char)bVar10 != '\0') {
                      pSVar3 = (__this->fields)._shifterInput;
                      if (pSVar3 == (Settings_ErenShifterInputSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pSVar6 = (pSVar3->fields).Settings;
                      if (pSVar6 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pSVar15 = (Settings_KeybindSetting_o *)
                                System_Collections_Specialized_OrderedDictionary__get_Item
                                          (pSVar6,(Il2CppObject *)__this_01,(MethodInfo *)0x0);
                      if (pSVar15 == (Settings_KeybindSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
                      if (((pSVar15->klass->_2).naturalAligment < bVar1) ||
                         ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_unwind_resume(pSVar15);
                      }
                      bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar15,0,(MethodInfo *)0x0);
                      if ((char)bVar10 != '\0') {
                        pCVar4 = (__this->fields)._shifter;
                        if (pCVar4 == (Characters_ErenShifter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        (*(pCVar4->klass->vtable)._128_Attack.methodPtr)
                                  (pCVar4,__this_01,(pCVar4->klass->vtable)._128_Attack.method);
                      }
                    }
                  } while( true );
                }
              }
              else {
                pCVar4 = (__this->fields)._shifter;
                if (pCVar4 != (Characters_ErenShifter_o *)0x0) {
                  (*(pCVar4->klass->vtable)._131_Kick.methodPtr)
                            (pCVar4,(pCVar4->klass->vtable)._131_Kick.method);
                  return;
                }
              }
            }
          }
          else {
            pCVar4 = (__this->fields)._shifter;
            if (pCVar4 != (Characters_ErenShifter_o *)0x0) {
              cVar9 = *(char *)((long)&(pCVar4->fields).Detection + 4);
              if (DAT_056fde1f == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_056fde1f = '\x01';
              }
              fVar18 = (float)*(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
              fVar19 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
              if (cVar9 != '\0') {
                pCVar5 = (__this->fields)._shifter;
                if (((pCVar5 == (Characters_ErenShifter_o *)0x0) ||
                    (lVar16 = *(long *)&(pCVar5->fields).Dead, lVar16 == 0)) ||
                   (__this_00 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
                   __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f86dbe;
                UVar20 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
                fVar18 = UVar20.fields.x + fVar18;
                fVar19 = UVar20.fields.z + fVar19;
              }
              (*(pCVar4->klass->vtable)._126_Jump.methodPtr)
                        (fVar18,fVar19,pCVar4,(pCVar4->klass->vtable)._126_Jump.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_03f86dbe:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar17 = lVar17 + 0x10, (ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17) {
LAB_03f86f00:
    if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)
                (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
      goto LAB_03f86f2d;
    }
  }
LAB_03f86f0f:
  puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IDisposable,0);
LAB_03f86f2d:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
  return;
}


// Controllers.ErenShifterPlayerController$$.ctor
// il2cpp: void Controllers_ErenShifterPlayerController___ctor (Controllers_ErenShifterPlayerController_o* __this, const MethodInfo* method);
// 0x3f87010

void Controllers_ErenShifterPlayerController___ctor
               (Controllers_ErenShifterPlayerController_o *__this,MethodInfo *method)

{
  Controllers_BasePlayerController___ctor(__this,method);
  return;
}


