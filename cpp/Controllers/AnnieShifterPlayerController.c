// Type: Controllers.AnnieShifterPlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Controllers/AnnieShifterPlayerController.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Controllers/AnnieShifterPlayerController.cs  [CHANGED since prior version]
// --------------------------------

// Controllers.AnnieShifterPlayerController$$Awake
// il2cpp: void Controllers_AnnieShifterPlayerController__Awake (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x3f7cb90

void Controllers_AnnieShifterPlayerController__Awake
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o **ppCVar1;
  long lVar2;
  System_Action_Hashtable__o *pSVar3;
  Characters_BaseHitbox_o *pCVar4;
  System_Action_Hashtable__c *__this_00;
  Characters_AnnieShifter_o *pCVar5;
  
  if (DAT_05703f4d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AnnieShifter_GetComponent_AnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703f4d = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,method);
  pCVar5 = (Characters_AnnieShifter_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_AnnieShifter_GetComponent_AnnieShifter);
  ppCVar1 = &(__this->fields)._shifter;
  (__this->fields)._shifter = pCVar5;
  il2cpp_runtime_glue(ppCVar1,pCVar5);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar2 != 0) {
    (__this->fields)._shifterInput = *(Settings_AnnieShifterInputSettings_o **)(lVar2 + 0x38);
    il2cpp_runtime_glue(&(__this->fields)._shifterInput);
    pCVar5 = (__this->fields)._shifter;
    if (((pCVar5 != (Characters_AnnieShifter_o *)0x0) &&
        (pSVar3 = (pCVar5->fields).OnPlayerPropertiesChanged,
        pSVar3 != (System_Action_Hashtable__o *)0x0)) &&
       (pCVar4 = pSVar3[1].monitor, pCVar4 != (Characters_BaseHitbox_o *)0x0)) {
      Characters_BaseHitbox__ScaleSphereCollider(pCVar4,1.5,(MethodInfo *)0x0);
      if (((*ppCVar1 != (Characters_AnnieShifter_o *)0x0) &&
          (pSVar3 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
          pSVar3 != (System_Action_Hashtable__o *)0x0)) &&
         (pCVar4 = (Characters_BaseHitbox_o *)pSVar3[1].fields.method_ptr,
         pCVar4 != (Characters_BaseHitbox_o *)0x0)) {
        Characters_BaseHitbox__ScaleSphereCollider(pCVar4,1.5,(MethodInfo *)0x0);
        if (((*ppCVar1 != (Characters_AnnieShifter_o *)0x0) &&
            (pSVar3 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
            pSVar3 != (System_Action_Hashtable__o *)0x0)) &&
           (pCVar4 = (Characters_BaseHitbox_o *)pSVar3[1].fields.invoke_impl,
           pCVar4 != (Characters_BaseHitbox_o *)0x0)) {
          Characters_BaseHitbox__ScaleSphereCollider(pCVar4,1.5,(MethodInfo *)0x0);
          if (((*ppCVar1 != (Characters_AnnieShifter_o *)0x0) &&
              (pSVar3 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
              pSVar3 != (System_Action_Hashtable__o *)0x0)) &&
             (pCVar4 = (Characters_BaseHitbox_o *)pSVar3[1].fields.m_target,
             pCVar4 != (Characters_BaseHitbox_o *)0x0)) {
            Characters_BaseHitbox__ScaleSphereCollider(pCVar4,1.5,(MethodInfo *)0x0);
            if (((*ppCVar1 != (Characters_AnnieShifter_o *)0x0) &&
                (pSVar3 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
                pSVar3 != (System_Action_Hashtable__o *)0x0)) &&
               (__this_00 = pSVar3[1].klass, __this_00 != (System_Action_Hashtable__c *)0x0)) {
              Characters_BaseHitbox__ScaleSphereCollider
                        ((Characters_BaseHitbox_o *)__this_00,1.5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.AnnieShifterPlayerController$$UpdateActionInput
// il2cpp: void Controllers_AnnieShifterPlayerController__UpdateActionInput (Controllers_AnnieShifterPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f7cf50

/* WARNING: Removing unreachable block (ram,0x03f7d700) */

void Controllers_AnnieShifterPlayerController__UpdateActionInput
               (Controllers_AnnieShifterPlayerController_o *__this,bool_conflict inMenu,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Settings_AnnieShifterInputSettings_o *pSVar3;
  Characters_AnnieShifter_o *pCVar4;
  Characters_AnnieShifter_o *pCVar5;
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
  MethodInfo *pMVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o UVar21;
  
  if (DAT_05703f4e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&"Attack");
    DAT_05703f4e = '\x01';
    method = extraout_RDX;
  }
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,inMenu & 0xff,method);
  if ((char)inMenu != '\0') {
    return;
  }
  pSVar3 = (__this->fields)._shifterInput;
  if ((pSVar3 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
     (pSVar15 = (pSVar3->fields).Walk, pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
    pCVar4 = (__this->fields)._shifter;
    bVar10 = Settings_KeybindSetting__GetKey(pSVar15,0,(MethodInfo *)0x0);
    if (pCVar4 != (Characters_AnnieShifter_o *)0x0) {
      *(char *)&(pCVar4->fields).State = (char)bVar10;
      pCVar4 = (__this->fields)._shifter;
      if (pCVar4 != (Characters_AnnieShifter_o *)0x0) {
        cVar9 = (*(pCVar4->klass->vtable)._123_CanAction.methodPtr)();
        if (cVar9 == '\0') {
          return;
        }
        pSVar3 = (__this->fields)._shifterInput;
        if ((pSVar3 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
           (pSVar15 = (pSVar3->fields).Jump, pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
          bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar15,0,(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            pSVar3 = (__this->fields)._shifterInput;
            if ((pSVar3 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
               (pSVar15 = (pSVar3->fields).Kick, pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
              bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar15,0,(MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                pSVar3 = (__this->fields)._shifterInput;
                if ((pSVar3 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                   (pSVar15 = (pSVar3->fields).AttackBrushFront,
                   pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
                  pMVar16 = (MethodInfo *)0x0;
                  bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar15,0,(MethodInfo *)0x0);
                  if ((char)bVar10 != '\0') {
                    Controllers_AnnieShifterPlayerController__AttackBrushFront(__this,pMVar16);
                    return;
                  }
                  pSVar3 = (__this->fields)._shifterInput;
                  if ((pSVar3 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                     (pSVar15 = (pSVar3->fields).AttackBrushHead,
                     pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
                    pMVar16 = (MethodInfo *)0x0;
                    bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar15,0,(MethodInfo *)0x0);
                    if ((char)bVar10 != '\0') {
                      Controllers_AnnieShifterPlayerController__AttackBrushHead(__this,pMVar16);
                      return;
                    }
                    pSVar3 = (__this->fields)._shifterInput;
                    if ((pSVar3 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                       (pSVar15 = (pSVar3->fields).AttackGrabBottom,
                       pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
                      pMVar16 = (MethodInfo *)0x0;
                      bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar15,0,(MethodInfo *)0x0);
                      if ((char)bVar10 != '\0') {
                        Controllers_AnnieShifterPlayerController__AttackGrabBottom(__this,pMVar16);
                        return;
                      }
                      pSVar3 = (__this->fields)._shifterInput;
                      if ((pSVar3 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                         (pSVar15 = (pSVar3->fields).AttackGrabMid,
                         pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
                        pMVar16 = (MethodInfo *)0x0;
                        bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar15,0,(MethodInfo *)0x0);
                        if ((char)bVar10 != '\0') {
                          Controllers_AnnieShifterPlayerController__AttackGrabMid(__this,pMVar16);
                          return;
                        }
                        pSVar3 = (__this->fields)._shifterInput;
                        if ((pSVar3 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                           (pSVar15 = (pSVar3->fields).AttackGrabUp,
                           pSVar15 != (Settings_KeybindSetting_o *)0x0)) {
                          pMVar16 = (MethodInfo *)0x0;
                          bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar15,0,(MethodInfo *)0x0);
                          if ((char)bVar10 != '\0') {
                            Controllers_AnnieShifterPlayerController__AttackGrabUp(__this,pMVar16);
                            return;
                          }
                          pSVar3 = (__this->fields)._shifterInput;
                          if (((pSVar3 != (Settings_AnnieShifterInputSettings_o *)0x0) &&
                              (pSVar6 = (pSVar3->fields).Settings,
                              pSVar6 != (System_Collections_Specialized_OrderedDictionary_o *)0x0))
                             && (pSVar11 = System_Collections_Specialized_OrderedDictionary__get_Keys
                                                     (pSVar6,(MethodInfo *)0x0),
                                pSVar11 != (System_Collections_ICollection_o *)0x0)) {
                            pSVar7 = pSVar11->klass;
                            uVar2._0_1_ = (pSVar7->_2).rank;
                            uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
                            if ((ulong)uVar2 != 0) {
                              pIVar8 = (pSVar7->_1).interfaceOffsets;
                              lVar17 = 0;
                              do {
                                if (*(long *)((long)&pIVar8->interfaceType + lVar17) == TypeInfo_IEnumerable
                                   ) {
                                  pVVar12 = pSVar7->vtable +
                                            *(int *)((long)&pIVar8->offset + lVar17);
                                  goto LAB_03f7d312;
                                }
                                lVar17 = lVar17 + 0x10;
                              } while ((ulong)uVar2 << 4 != lVar17);
                            }
                            pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar11,TypeInfo_IEnumerable,0);
LAB_03f7d312:
                            plVar13 = (long *)(*pVVar12->methodPtr)(pSVar11,pVVar12->method);
                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            do {
                              lVar17 = *plVar13;
                              if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
                                lVar18 = 0;
                                do {
                                  if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar18) == TypeInfo_IEnumerator)
                                  {
                                    puVar14 = (undefined8 *)
                                              ((long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar18)
                                               * 0x10 + lVar17 + 0x138);
                                    goto LAB_03f7d3a1;
                                  }
                                  lVar18 = lVar18 + 0x10;
                                } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar18);
                              }
                              puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IEnumerator,0);
LAB_03f7d3a1:
                              cVar9 = (*(code *)*puVar14)(plVar13,puVar14[1]);
                              if (cVar9 == '\0') {
                                plVar13 = (long *)il2cpp_runtime_glue(plVar13,TypeInfo_IDisposable);
                                if (plVar13 == (long *)0x0) {
                                  return;
                                }
                                lVar17 = *plVar13;
                                if ((ulong)*(ushort *)(lVar17 + 0x12e) == 0) goto LAB_03f7d626;
                                lVar18 = 0;
                                goto LAB_03f7d617;
                              }
                              lVar17 = *plVar13;
                              if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
                                lVar18 = 0;
                                do {
                                  if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar18) == TypeInfo_IEnumerator)
                                  {
                                    puVar14 = (undefined8 *)
                                              ((long)(*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar18
                                                              ) + 1) * 0x10 + lVar17 + 0x138);
                                    goto LAB_03f7d419;
                                  }
                                  lVar18 = lVar18 + 0x10;
                                } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar18);
                              }
                              puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IEnumerator,1);
LAB_03f7d419:
                              __this_01 = (System_String_o *)(*(code *)*puVar14)(plVar13,puVar14[1])
                              ;
                              if (__this_01 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_raise_exception();
                              }
                              if (__this_01->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_unwind_resume(__this_01);
                              }
                              bVar10 = System_String__StartsWith
                                                 (__this_01,"Attack",(MethodInfo *)0x0);
                              if ((char)bVar10 != '\0') {
                                pSVar3 = (__this->fields)._shifterInput;
                                if (pSVar3 == (Settings_AnnieShifterInputSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  il2cpp_raise_exception();
                                }
                                pSVar6 = (pSVar3->fields).Settings;
                                if (pSVar6 == (System_Collections_Specialized_OrderedDictionary_o *)
                                              0x0) {
                    /* WARNING: Subroutine does not return */
                                  il2cpp_raise_exception();
                                }
                                pSVar15 = (Settings_KeybindSetting_o *)
                                          System_Collections_Specialized_OrderedDictionary__get_Item
                                                    (pSVar6,(Il2CppObject *)__this_01,
                                                     (MethodInfo *)0x0);
                                if (pSVar15 == (Settings_KeybindSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  il2cpp_raise_exception();
                                }
                                bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
                                if (((pSVar15->klass->_2).naturalAligment < bVar1) ||
                                   ((pSVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                                    TypeInfo_KeybindSetting)) {
                    /* WARNING: Subroutine does not return */
                                  il2cpp_unwind_resume(pSVar15);
                                }
                                bVar10 = Settings_KeybindSetting__GetKeyDown
                                                   (pSVar15,0,(MethodInfo *)0x0);
                                if ((char)bVar10 != '\0') {
                                  pCVar4 = (__this->fields)._shifter;
                                  if (pCVar4 == (Characters_AnnieShifter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    il2cpp_raise_exception();
                                  }
                                  (*(pCVar4->klass->vtable)._128_Attack.methodPtr)
                                            (pCVar4,__this_01,
                                             (pCVar4->klass->vtable)._128_Attack.method);
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
              else {
                pCVar4 = (__this->fields)._shifter;
                if (pCVar4 != (Characters_AnnieShifter_o *)0x0) {
                  (*(pCVar4->klass->vtable)._131_Kick.methodPtr)
                            (pCVar4,(pCVar4->klass->vtable)._131_Kick.method);
                  return;
                }
              }
            }
          }
          else {
            pCVar4 = (__this->fields)._shifter;
            if (pCVar4 != (Characters_AnnieShifter_o *)0x0) {
              cVar9 = *(char *)((long)&(pCVar4->fields).Detection + 4);
              if (DAT_056fde1f == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_056fde1f = '\x01';
              }
              fVar19 = (float)*(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
              fVar20 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
              if (cVar9 != '\0') {
                pCVar5 = (__this->fields)._shifter;
                if (((pCVar5 == (Characters_AnnieShifter_o *)0x0) ||
                    (lVar17 = *(long *)&(pCVar5->fields).Dead, lVar17 == 0)) ||
                   (__this_00 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
                   __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f7d4e0;
                UVar21 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
                fVar19 = UVar21.fields.x + fVar19;
                fVar20 = UVar21.fields.z + fVar20;
              }
              (*(pCVar4->klass->vtable)._126_Jump.methodPtr)
                        (fVar19,fVar20,pCVar4,(pCVar4->klass->vtable)._126_Jump.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_03f7d4e0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar18 = lVar18 + 0x10, (ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar18) {
LAB_03f7d617:
    if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar18) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)
                (lVar17 + (long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar18) * 0x10 + 0x138);
      goto LAB_03f7d644;
    }
  }
LAB_03f7d626:
  puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IDisposable,0);
LAB_03f7d644:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
  return;
}


// Controllers.AnnieShifterPlayerController$$AttackBrushFront
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackBrushFront (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x3f7d8f0

void Controllers_AnnieShifterPlayerController__AttackBrushFront
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  
  if (DAT_05703f4f == '\0') {
    il2cpp_init_method_metadata(&"AttackBrushFrontL");
    il2cpp_init_method_metadata(&"AttackBrushFrontR");
    DAT_05703f4f = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackBrushFrontL";
      }
      else {
        puVar3 = &"AttackBrushFrontR";
      }
      vtable_dispatch = (pCVar1->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar1,*puVar3,(pCVar1->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.AnnieShifterPlayerController$$AttackBrushHead
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackBrushHead (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x3f7d980

void Controllers_AnnieShifterPlayerController__AttackBrushHead
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  
  if (DAT_05703f50 == '\0') {
    il2cpp_init_method_metadata(&"AttackBrushHeadL");
    il2cpp_init_method_metadata(&"AttackBrushHeadR");
    DAT_05703f50 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackBrushHeadL";
      }
      else {
        puVar3 = &"AttackBrushHeadR";
      }
      vtable_dispatch = (pCVar1->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar1,*puVar3,(pCVar1->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.AnnieShifterPlayerController$$AttackGrabBottom
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackGrabBottom (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x3f7da10

void Controllers_AnnieShifterPlayerController__AttackGrabBottom
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  
  if (DAT_05703f51 == '\0') {
    il2cpp_init_method_metadata(&"AttackGrabBottomLeft");
    il2cpp_init_method_metadata(&"AttackGrabBottomRight");
    DAT_05703f51 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabBottomLeft";
      }
      else {
        puVar3 = &"AttackGrabBottomRight";
      }
      vtable_dispatch = (pCVar1->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar1,*puVar3,(pCVar1->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.AnnieShifterPlayerController$$AttackGrabMid
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackGrabMid (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x3f7daa0

void Controllers_AnnieShifterPlayerController__AttackGrabMid
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  
  if (DAT_05703f52 == '\0') {
    il2cpp_init_method_metadata(&"AttackGrabMidRight");
    il2cpp_init_method_metadata(&"AttackGrabMidLeft");
    DAT_05703f52 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pCVar1 = (__this->fields)._shifter;
    if (pCVar1 != (Characters_AnnieShifter_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabMidLeft";
      }
      else {
        puVar3 = &"AttackGrabMidRight";
      }
      vtable_dispatch = (pCVar1->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar1,*puVar3,(pCVar1->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.AnnieShifterPlayerController$$AttackGrabUp
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackGrabUp (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x3f7db30

void Controllers_AnnieShifterPlayerController__AttackGrabUp
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar1;
  undefined8 *puVar2;
  Characters_AnnieShifter_o *pCVar3;
  
  if (DAT_05703f53 == '\0') {
    il2cpp_init_method_metadata(&"AttackGrabUpLeft");
    il2cpp_init_method_metadata(&"AttackGrabUpRight");
    il2cpp_init_method_metadata(&"AttackGrabUp");
    DAT_05703f53 = '\x01';
  }
  pSVar1 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar1 != (System_Single_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pSVar1->m_Items[0] <= 45.0) {
      if (pSVar1->m_Items[0] < -45.0) {
        puVar2 = &"AttackGrabUpLeft";
        pCVar3 = (__this->fields)._shifter;
        if (pCVar3 == (Characters_AnnieShifter_o *)0x0) goto LAB_03f7dbdf;
        goto LAB_03f7db99;
      }
      puVar2 = &"AttackGrabUp";
      pCVar3 = (__this->fields)._shifter;
    }
    else {
      puVar2 = &"AttackGrabUpRight";
      pCVar3 = (__this->fields)._shifter;
    }
    if (pCVar3 != (Characters_AnnieShifter_o *)0x0) {
LAB_03f7db99:
      vtable_dispatch = (pCVar3->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar3,*puVar2,(pCVar3->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
LAB_03f7dbdf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.AnnieShifterPlayerController$$.ctor
// il2cpp: void Controllers_AnnieShifterPlayerController___ctor (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x3f7dfa0

void Controllers_AnnieShifterPlayerController___ctor
               (Controllers_ErenShifterPlayerController_o *__this,MethodInfo *method)

{
  Controllers_BasePlayerController___ctor(__this,method);
  return;
}


