// Type: UI.SnapshotViewerMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SnapshotViewerMenu.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/SnapshotViewerMenu/SnapshotViewerMenu.cs  [CHANGED since prior version]
// --------------------------------

// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$.ctor
// il2cpp: void UI_SnapshotViewerMenu__SaveCoroutine_d__10___ctor (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x413d7c0

void UI_SnapshotViewerMenu_<SaveCoroutine>d__10___ctor
               (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$System.IDisposable.Dispose
// il2cpp: void UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_IDisposable_Dispose (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x413d7f0

void UI_SnapshotViewerMenu_<SaveCoroutine>d__10__System_IDisposable_Dispose
               (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this,MethodInfo *method)

{
  return;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$MoveNext
// il2cpp: bool UI_SnapshotViewerMenu__SaveCoroutine_d__10__MoveNext (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x413d800

bool_conflict
UI_SnapshotViewerMenu_<SaveCoroutine>d__10__MoveNext
          (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this,MethodInfo *method)

{
  UI_SnapshotViewerMenu_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  int32_t iVar3;
  int iVar4;
  int32_t iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Il2CppObject *__this_00;
  undefined8 uVar9;
  UnityEngine_Texture2D_o *__this_01;
  System_String_array *values;
  System_String_o *pSVar10;
  UnityEngine_Rect_o source;
  int32_t iStack_44;
  System_DateTime_Fields SStack_40;
  UI_SnapshotViewerMenu_o *pUStack_38;
  
  if (DAT_05704976 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    il2cpp_init_method_metadata(&"\\");
    il2cpp_init_method_metadata(&"Saving...");
    il2cpp_init_method_metadata(&"-");
    il2cpp_init_method_metadata(&"Saved snapshot to {0}");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&".png");
    DAT_05704976 = '\x01';
  }
  SStack_40._dateData = 0;
  iStack_44 = 0;
  iVar4 = (__this->fields).__1__state;
  pUVar1 = (__this->fields).__4__this;
  if (iVar4 == 1) {
    (__this->fields).__1__state = -1;
    if (pUVar1 != (UI_SnapshotViewerMenu_o *)0x0) {
      iVar3 = (pUVar1->fields)._width;
      iVar5 = (pUVar1->fields)._height;
      pUStack_38 = pUVar1;
      __this_01 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
      UnityEngine_Texture2D___ctor(__this_01,iVar3,iVar5,3,0,(MethodInfo *)0x0);
      iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Texture2D_o *)0x0) {
        iVar4 = (*(__this_01->klass->vtable)._5_get_width.methodPtr)
                          (__this_01,(__this_01->klass->vtable)._5_get_width.method);
        iVar5 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        iVar6 = (*(__this_01->klass->vtable)._7_get_height.methodPtr)
                          (__this_01,(__this_01->klass->vtable)._7_get_height.method);
        iVar7 = (*(__this_01->klass->vtable)._5_get_width.methodPtr)
                          (__this_01,(__this_01->klass->vtable)._5_get_width.method);
        iVar8 = (*(__this_01->klass->vtable)._7_get_height.methodPtr)(__this_01);
        source.fields.m_XMin = (float)iVar3 * 0.5 - (float)iVar4 * 0.5;
        source.fields.m_YMin = (float)iVar5 * 0.5 - (float)iVar6 * 0.5;
        source.fields.m_Width = (float)iVar7;
        source.fields.m_Height = (float)iVar8;
        UnityEngine_Texture2D__ReadPixels(__this_01,source,0,0,(MethodInfo *)0x0);
        UnityEngine_Texture2D__Apply(__this_01,(MethodInfo *)0x0);
        values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_init_class();
        }
        SStack_40._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
        iStack_44 = System_DateTime__get_Month((System_DateTime_o)&SStack_40,(MethodInfo *)0x0);
        pSVar10 = System_Int32__ToString((int32_t)&iStack_44,(MethodInfo *)0x0);
        if (values != (System_String_array *)0x0) {
          if ((int)values->max_length != 0) {
            values->m_Items[0] = pSVar10;
            il2cpp_runtime_glue();
            SStack_40._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
            iStack_44 = System_DateTime__get_Day((System_DateTime_o)&SStack_40,(MethodInfo *)0x0);
            pSVar10 = System_Int32__ToString((int32_t)&iStack_44,(MethodInfo *)0x0);
            if (1 < (uint)values->max_length) {
              values->m_Items[1] = pSVar10;
              il2cpp_runtime_glue();
              SStack_40._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
              iStack_44 = System_DateTime__get_Year((System_DateTime_o)&SStack_40,(MethodInfo *)0x0)
              ;
              pSVar10 = System_Int32__ToString((int32_t)&iStack_44,(MethodInfo *)0x0);
              if (2 < (uint)values->max_length) {
                values->m_Items[2] = pSVar10;
                il2cpp_runtime_glue(values->m_Items + 2,pSVar10);
                if (3 < (uint)values->max_length) {
                  values->m_Items[3] = "-";
                  il2cpp_runtime_glue();
                  SStack_40._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
                  iStack_44 = System_DateTime__get_Hour
                                        ((System_DateTime_o)&SStack_40,(MethodInfo *)0x0);
                  pSVar10 = System_Int32__ToString((int32_t)&iStack_44,(MethodInfo *)0x0);
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = pSVar10;
                    il2cpp_runtime_glue();
                    SStack_40._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
                    iStack_44 = System_DateTime__get_Minute
                                          ((System_DateTime_o)&SStack_40,(MethodInfo *)0x0);
                    pSVar10 = System_Int32__ToString((int32_t)&iStack_44,(MethodInfo *)0x0);
                    if (5 < (uint)values->max_length) {
                      values->m_Items[5] = pSVar10;
                      il2cpp_runtime_glue();
                      SStack_40._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
                      iStack_44 = System_DateTime__get_Second
                                            ((System_DateTime_o)&SStack_40,(MethodInfo *)0x0);
                      pSVar10 = System_Int32__ToString((int32_t)&iStack_44,(MethodInfo *)0x0);
                      if (6 < (uint)values->max_length) {
                        values->m_Items[6] = pSVar10;
                        il2cpp_runtime_glue(values->m_Items + 6,pSVar10);
                        if (7 < (uint)values->max_length) {
                          values->m_Items[7] = ".png";
                          il2cpp_runtime_glue(values->m_Items + 7);
                          pSVar10 = System_String__Concat(values,(MethodInfo *)0x0);
                          if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          ApplicationManagers_SnapshotManager__SaveSnapshotFinish
                                    (__this_01,pSVar10,(MethodInfo *)0x0);
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          UnityEngine_Object__Destroy
                                    ((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
                          pSVar10 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8);
                          if (pSVar10 != (System_String_o *)0x0) {
                            pUVar2 = (pUStack_38->fields)._statusLabel;
                            pSVar10 = System_String__Replace
                                                (pSVar10,"\\","/",(MethodInfo *)0x0
                                                );
                            pSVar10 = System_String__Format
                                                ("Saved snapshot to {0}",(Il2CppObject *)pSVar10,
                                                 (MethodInfo *)0x0);
                            if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                              (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                                        (pUVar2,pSVar10,(pUVar2->klass->vtable)._75_set_text.method)
                              ;
                              return 0;
                            }
                          }
                          goto LAB_0413dd45;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
  else {
    if (iVar4 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if ((pUVar1 != (UI_SnapshotViewerMenu_o *)0x0) &&
       (pUVar2 = (pUVar1->fields)._statusLabel, pUVar2 != (UnityEngine_UI_Text_o *)0x0)) {
      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                (pUVar2,"Saving...",(pUVar2->klass->vtable)._75_set_text.method);
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
      (__this->fields).__2__current = __this_00;
      uVar9 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar9 >> 8),1);
    }
  }
LAB_0413dd45:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x413dd50

Il2CppObject *
UI_SnapshotViewerMenu_<SaveCoroutine>d__10__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_IEnumerator_Reset (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x413dd60

void UI_SnapshotViewerMenu_<SaveCoroutine>d__10__System_Collections_IEnumerator_Reset
               (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_IEnumerator_get_Current (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x413dda0

Il2CppObject *
UI_SnapshotViewerMenu_<SaveCoroutine>d__10__System_Collections_IEnumerator_get_Current
          (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotViewerMenu$$Setup
// il2cpp: void UI_SnapshotViewerMenu__Setup (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x413d260

void UI_SnapshotViewerMenu__Setup(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  UI_SnapshotPopup_o **ppUVar1;
  UnityEngine_UI_Text_o **ppUVar2;
  UnityEngine_UI_Text_o **ppUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Component_o *pUVar5;
  UI_SnapshotViewerMainPanel_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UI_SnapshotPopup_o *pUVar8;
  UnityEngine_Canvas_o *__this_00;
  UI_KillScorePopup_o *pUVar9;
  UI_ElementStyle_o *pUVar10;
  UnityEngine_UI_Text_o *pUVar11;
  MethodInfo *method_00;
  float fVar12;
  
  if (DAT_05704973 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponent_Canvas);
    il2cpp_init_method_metadata(&MethodInfo_SnapshotViewerMainPanel_GetComponent_SnapshotVie);
    il2cpp_init_method_metadata(&MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
    il2cpp_init_method_metadata(&MethodInfo_SnapshotViewerMainPanel_CreateHeadedPanel_Snapsh);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopu);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Prefabs/Snapshot/SnapshotPopup");
    il2cpp_init_method_metadata(&"");
    DAT_05704973 = '\x01';
  }
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar5 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel<object>(pUVar4,1,MethodInfo_SnapshotViewerMainPanel_CreateHeadedPanel_Snapsh);
  if (pUVar5 != (UnityEngine_Component_o *)0x0) {
    pUVar6 = (UI_SnapshotViewerMainPanel_o *)
             UnityEngine_Component__GetComponent<object>(pUVar5,MethodInfo_SnapshotViewerMainPanel_GetComponent_SnapshotVie);
    (__this->fields)._mainPanel = pUVar6;
    il2cpp_runtime_glue(&(__this->fields)._mainPanel);
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar7 = UI_ElementFactory__InstantiateAndSetupPanel<object>(pUVar4,"Prefabs/Snapshot/SnapshotPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopu)
    ;
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      pUVar8 = (UI_SnapshotPopup_o *)
               UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
      ppUVar1 = &(__this->fields)._snapshotPopup;
      (__this->fields)._snapshotPopup = pUVar8;
      il2cpp_runtime_glue(ppUVar1);
      pUVar8 = (__this->fields)._snapshotPopup;
      if (pUVar8 != (UI_SnapshotPopup_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localScale
                    (pUVar4,(UnityEngine_Vector3_o)ZEXT812(0x3fc000003fc00000),(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pUVar5 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (pUVar5 != (UnityEngine_Component_o *)0x0) {
            __this_00 = (UnityEngine_Canvas_o *)
                        UnityEngine_Component__GetComponent<object>(pUVar5,MethodInfo_Canvas_GetComponent_Canvas);
            if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
              fVar12 = UnityEngine_Canvas__get_scaleFactor(__this_00,(MethodInfo *)0x0);
              (__this->fields)._width = (int)(fVar12 * 1152.0);
              (__this->fields)._height = (int)(fVar12 * 648.0);
              pUVar8 = (__this->fields)._snapshotPopup;
              if (pUVar8 != (UI_SnapshotPopup_o *)0x0) {
                pUVar4 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                if (DAT_056fde1e == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Quaternion);
                  DAT_056fde1e = '\x01';
                }
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localRotation
                            (pUVar4,(UnityEngine_Quaternion_o)
                                    **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                             (MethodInfo *)0x0);
                  pUVar4 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar9 = (UI_KillScorePopup_o *)
                           UI_ElementFactory__CreateDefaultPopup<object>(pUVar4,0,MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
                  (__this->fields)._killScorePopup = pUVar9;
                  il2cpp_runtime_glue();
                  pUVar4 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar10 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
                  UI_ElementStyle___ctor(pUVar10,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                  pUVar7 = UI_ElementFactory__CreateDefaultLabel
                                     (pUVar4,pUVar10,"",0,4,(MethodInfo *)0x0);
                  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar11 = (UnityEngine_UI_Text_o *)
                              UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_Text_GetComponent_Text);
                    ppUVar2 = &(__this->fields)._nameLabel;
                    (__this->fields)._nameLabel = pUVar11;
                    il2cpp_runtime_glue(ppUVar2);
                    pUVar4 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar10 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
                    UI_ElementStyle___ctor(pUVar10,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                    pUVar7 = UI_ElementFactory__CreateDefaultLabel
                                       (pUVar4,pUVar10,"",0,4,(MethodInfo *)0x0);
                    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar11 = (UnityEngine_UI_Text_o *)
                                UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_Text_GetComponent_Text);
                      ppUVar3 = &(__this->fields)._statusLabel;
                      (__this->fields)._statusLabel = pUVar11;
                      il2cpp_runtime_glue(ppUVar3);
                      pUVar6 = (__this->fields)._mainPanel;
                      if (pUVar6 != (UI_SnapshotViewerMainPanel_o *)0x0) {
                        pUVar7 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                        UI_ElementFactory__SetAnchor
                                  (pUVar7,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,
                                   (MethodInfo *)0x0);
                        pUVar8 = *ppUVar1;
                        if (pUVar8 != (UI_SnapshotPopup_o *)0x0) {
                          pUVar7 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                          UI_ElementFactory__SetAnchor
                                    (pUVar7,4,4,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
                          pUVar9 = (__this->fields)._killScorePopup;
                          if (pUVar9 != (UI_KillScorePopup_o *)0x0) {
                            pUVar7 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0)
                            ;
                            UI_ElementFactory__SetAnchor
                                      (pUVar7,4,4,(UnityEngine_Vector2_o)0x437a000043e60000,
                                       (MethodInfo *)0x0);
                            pUVar11 = *ppUVar2;
                            if (pUVar11 != (UnityEngine_UI_Text_o *)0x0) {
                              pUVar7 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)pUVar11,
                                                  (MethodInfo *)0x0);
                              UI_ElementFactory__SetAnchor
                                        (pUVar7,4,4,(UnityEngine_Vector2_o)0xc389800000000000,
                                         (MethodInfo *)0x0);
                              pUVar11 = *ppUVar3;
                              if (pUVar11 != (UnityEngine_UI_Text_o *)0x0) {
                                pUVar7 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)pUVar11,
                                                    (MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar7,7,7,(UnityEngine_Vector2_o)0x41a0000000000000,
                                           (MethodInfo *)0x0);
                                UI_SnapshotViewerMenu__LoadSnapshot(__this,0,method_00);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotViewerMenu$$Save
// il2cpp: void UI_SnapshotViewerMenu__Save (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x413cca0

void UI_SnapshotViewerMenu__Save(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704974 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SaveCoroutine_d__10);
    DAT_05704974 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SaveCoroutine_d__10);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotViewerMenu$$SaveCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_SnapshotViewerMenu__SaveCoroutine (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x413d750

System_Collections_IEnumerator_o *
UI_SnapshotViewerMenu__SaveCoroutine(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704974 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SaveCoroutine_d__10);
    DAT_05704974 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SaveCoroutine_d__10);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotViewerMenu$$LoadSnapshot
// il2cpp: void UI_SnapshotViewerMenu__LoadSnapshot (UI_SnapshotViewerMenu_o* __this, int32_t index, const MethodInfo* method);
// 0x413cd20

void UI_SnapshotViewerMenu__LoadSnapshot
               (UI_SnapshotViewerMenu_o *__this,int32_t index,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UI_SnapshotPopup_o *pUVar3;
  UI_KillScorePopup_o *pUVar4;
  long lVar5;
  UnityEngine_Texture2D_o *pUVar6;
  int32_t iVar7;
  int32_t score;
  bool_conflict bVar8;
  UnityEngine_Texture2D_o *pUVar9;
  System_String_o *str2;
  System_String_o *pSVar10;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Texture2D_o **ppUVar11;
  System_DateTime_Fields local_38;
  
  if (DAT_05704975 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"");
    DAT_05704975 = '\x01';
  }
  local_38._dateData = 0;
  pUVar2 = (__this->fields)._statusLabel;
  if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto LAB_0413d13c;
  (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
            (pUVar2,"",(pUVar2->klass->vtable)._75_set_text.method);
  pUVar2 = (__this->fields)._nameLabel;
  if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto LAB_0413d13c;
  (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
            (pUVar2,"",(pUVar2->klass->vtable)._75_set_text.method);
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704992 == '\0') goto LAB_0413cf28;
LAB_0413ce11:
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) != 0) goto LAB_0413ce22;
LAB_0413cf4c:
    il2cpp_init_class();
    iVar1 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  else {
    if (DAT_05704992 != '\0') goto LAB_0413ce11;
LAB_0413cf28:
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    DAT_05704992 = '\x01';
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) goto LAB_0413cf4c;
LAB_0413ce22:
    iVar1 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  if (0 < iVar1) {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_05704992 == '\0') goto LAB_0413cf7a;
LAB_0413ce4d:
      iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    else {
      if (DAT_05704992 != '\0') goto LAB_0413ce4d;
LAB_0413cf7a:
      il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
      DAT_05704992 = '\x01';
      iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    if ((-1 < index) && (index < *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28))) {
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar9 = ApplicationManagers_SnapshotManager__GetSnapshot(index,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._snapshotPopup;
      if (pUVar3 != (UI_SnapshotPopup_o *)0x0) {
        (*(pUVar3->klass->vtable)._59_Load.methodPtr)
                  (pUVar3,pUVar9,(pUVar3->klass->vtable)._59_Load.method);
        pUVar3 = (__this->fields)._snapshotPopup;
        if (pUVar3 != (UI_SnapshotPopup_o *)0x0) {
          score = 0;
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar3,(MethodInfo *)0x0);
          iVar7 = ApplicationManagers_SnapshotManager__GetDamage(index,(MethodInfo *)0x0);
          pUVar4 = (__this->fields)._killScorePopup;
          if (0 < iVar7) {
            if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            score = ApplicationManagers_SnapshotManager__GetDamage(index,(MethodInfo *)0x0);
          }
          if (pUVar4 != (UI_KillScorePopup_o *)0x0) {
            UI_KillScorePopup__ShowSnapshotViewer(pUVar4,score,(MethodInfo *)0x0);
            lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
            if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x30), lVar5 != 0)) {
              pUVar2 = (__this->fields)._nameLabel;
              pSVar10 = *(System_String_o **)(lVar5 + 0x18);
              if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                il2cpp_init_class();
              }
              local_38._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
              str2 = System_DateTime__ToShortDateString
                               ((System_DateTime_o)&local_38,(MethodInfo *)0x0);
              pSVar10 = System_String__Concat(pSVar10," ",str2,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                          (pUVar2,pSVar10,(pUVar2->klass->vtable)._75_set_text.method);
                pUVar2 = (__this->fields)._nameLabel;
                if ((pUVar2 != (UnityEngine_UI_Text_o *)0x0) &&
                   (__this_00 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
                   __this_00 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
                  pUVar6 = (__this->fields)._currentSnapshot;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  ppUVar11 = &(__this->fields)._currentSnapshot;
                  bVar8 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((char)bVar8 != '\0') {
                    pUVar6 = *ppUVar11;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    UnityEngine_Object__Destroy((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
                  }
                  *ppUVar11 = pUVar9;
                  il2cpp_runtime_glue(ppUVar11,pUVar9);
                  return;
                }
              }
            }
          }
        }
      }
      goto LAB_0413d13c;
    }
  }
  pUVar3 = (__this->fields)._snapshotPopup;
  if (pUVar3 != (UI_SnapshotPopup_o *)0x0) {
    (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
    pUVar4 = (__this->fields)._killScorePopup;
    if (pUVar4 != (UI_KillScorePopup_o *)0x0) {
      (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
      return;
    }
  }
LAB_0413d13c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotViewerMenu$$.ctor
// il2cpp: void UI_SnapshotViewerMenu___ctor (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x413d7e0

void UI_SnapshotViewerMenu___ctor(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


