// Type: UI.SnapshotViewerMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SnapshotViewerMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SnapshotViewerMenu/SnapshotViewerMenu.cs
// --------------------------------

// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$.ctor
// il2cpp: void UI_SnapshotViewerMenu__SaveCoroutine_d__10___ctor (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4452b90

void UI_SnapshotViewerMenu__SaveCoroutine_d__10___ctor
               (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$System.IDisposable.Dispose
// il2cpp: void UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_IDisposable_Dispose (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4452bc0

void UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_IDisposable_Dispose
               (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this,MethodInfo *method)

{
  return;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$MoveNext
// il2cpp: bool UI_SnapshotViewerMenu__SaveCoroutine_d__10__MoveNext (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4452bd0

bool_conflict
UI_SnapshotViewerMenu__SaveCoroutine_d__10__MoveNext
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
  System_String_o **ppSVar11;
  UnityEngine_Rect_o source;
  int32_t iStack_44;
  System_DateTime_Fields SStack_40;
  UI_SnapshotViewerMenu_o *pUStack_38;
  
  ppSVar11 = (System_String_o **)__this;
  if (g_data_057ae719 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForEndOfFrame);
    il2cpp_runtime_helper_023445d0(&"\\");
    il2cpp_runtime_helper_023445d0(&"Saving...");
    il2cpp_runtime_helper_023445d0(&"-");
    il2cpp_runtime_helper_023445d0(&"Saved snapshot to {0}");
    il2cpp_runtime_helper_023445d0(&"/");
    ppSVar11 = &".png";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae719 = '\x01';
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
      __this_01 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
      UnityEngine_Texture2D___ctor_4dd9130(__this_01,iVar3,iVar5,3,0,(MethodInfo *)0x0);
      ppSVar11 = (System_String_o **)0x0;
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
        UnityEngine_Texture2D__ReadPixels_4dd9b70(__this_01,source,0,0,(MethodInfo *)0x0);
        UnityEngine_Texture2D__Apply_4dd97c0(__this_01,(MethodInfo *)0x0);
        values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        SStack_40._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
        iStack_44 = System_DateTime__get_Month((System_DateTime_o)&SStack_40,(MethodInfo *)0x0);
        ppSVar11 = (System_String_o **)&iStack_44;
        pSVar10 = System_Int32__ToString((int32_t)ppSVar11,(MethodInfo *)0x0);
        if (values != (System_String_array *)0x0) {
          if ((int)values->max_length != 0) {
            values->m_Items[0] = pSVar10;
            il2cpp_runtime_helper_022b4080();
            SStack_40._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
            iStack_44 = System_DateTime__get_Day((System_DateTime_o)&SStack_40,(MethodInfo *)0x0);
            ppSVar11 = (System_String_o **)&iStack_44;
            pSVar10 = System_Int32__ToString((int32_t)ppSVar11,(MethodInfo *)0x0);
            if (1 < (uint)values->max_length) {
              values->m_Items[1] = pSVar10;
              il2cpp_runtime_helper_022b4080();
              SStack_40._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
              iStack_44 = System_DateTime__get_Year((System_DateTime_o)&SStack_40,(MethodInfo *)0x0);
              ppSVar11 = (System_String_o **)&iStack_44;
              pSVar10 = System_Int32__ToString((int32_t)ppSVar11,(MethodInfo *)0x0);
              if (2 < (uint)values->max_length) {
                ppSVar11 = values->m_Items + 2;
                values->m_Items[2] = pSVar10;
                il2cpp_runtime_helper_022b4080(ppSVar11,pSVar10);
                if (3 < (uint)values->max_length) {
                  values->m_Items[3] = "-";
                  il2cpp_runtime_helper_022b4080();
                  SStack_40._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
                  iStack_44 = System_DateTime__get_Hour((System_DateTime_o)&SStack_40,(MethodInfo *)0x0);
                  ppSVar11 = (System_String_o **)&iStack_44;
                  pSVar10 = System_Int32__ToString((int32_t)ppSVar11,(MethodInfo *)0x0);
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = pSVar10;
                    il2cpp_runtime_helper_022b4080();
                    SStack_40._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
                    iStack_44 = System_DateTime__get_Minute((System_DateTime_o)&SStack_40,(MethodInfo *)0x0);
                    ppSVar11 = (System_String_o **)&iStack_44;
                    pSVar10 = System_Int32__ToString((int32_t)ppSVar11,(MethodInfo *)0x0);
                    if (5 < (uint)values->max_length) {
                      values->m_Items[5] = pSVar10;
                      il2cpp_runtime_helper_022b4080();
                      SStack_40._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
                      iStack_44 = System_DateTime__get_Second((System_DateTime_o)&SStack_40,(MethodInfo *)0x0)
                      ;
                      ppSVar11 = (System_String_o **)&iStack_44;
                      pSVar10 = System_Int32__ToString((int32_t)ppSVar11,(MethodInfo *)0x0);
                      if (6 < (uint)values->max_length) {
                        ppSVar11 = values->m_Items + 6;
                        values->m_Items[6] = pSVar10;
                        il2cpp_runtime_helper_022b4080(ppSVar11,pSVar10);
                        if (7 < (uint)values->max_length) {
                          values->m_Items[7] = ".png";
                          il2cpp_runtime_helper_022b4080(values->m_Items + 7);
                          pSVar10 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                          if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          ApplicationManagers_SnapshotManager__SaveSnapshotFinish
                                    (__this_01,pSVar10,(MethodInfo *)0x0);
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          UnityEngine_Object__Destroy_4e01c60
                                    ((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
                          pSVar10 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8);
                          ppSVar11 = (System_String_o **)0x0;
                          if (pSVar10 != (System_String_o *)0x0) {
                            pUVar2 = (pUStack_38->fields)._statusLabel;
                            pSVar10 = System_String__Replace_3af9030
                                                (pSVar10,"\\","/",(MethodInfo *)0x0);
                            ppSVar11 = (System_String_o **)"Saved snapshot to {0}";
                            pSVar10 = System_String__Format
                                                ((System_String_o *)"Saved snapshot to {0}",(Il2CppObject *)pSVar10,
                                                 (MethodInfo *)0x0);
                            if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                              (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                                        (pUVar2,pSVar10,(pUVar2->klass->vtable)._75_set_text.method);
                              return 0;
                            }
                          }
                          goto label_04453115;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          il2cpp_runtime_helper_022b2ca0();
        }
      }
    }
  }
  else {
    if (iVar4 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (pUVar1 != (UI_SnapshotViewerMenu_o *)0x0) {
      pUVar2 = (pUVar1->fields)._statusLabel;
      ppSVar11 = (System_String_o **)0x0;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                  (pUVar2,"Saving...",(pUVar2->klass->vtable)._75_set_text.method);
        __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
        (__this->fields).__2__current = __this_00;
        uVar9 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)uVar9 >> 8),1);
      }
    }
  }
label_04453115:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(((UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *)ppSVar11)->fields).__2__current;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4453120

Il2CppObject *
UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_IEnumerator_Reset (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4453130

void UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_IEnumerator_Reset
               (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_IEnumerator_get_Current (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4453170

Il2CppObject *
UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_IEnumerator_get_Current
          (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotViewerMenu$$Setup
// il2cpp: void UI_SnapshotViewerMenu__Setup (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x4452630

void UI_SnapshotViewerMenu__Setup(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  UI_SnapshotPopup_o **ppUVar1;
  UnityEngine_UI_Text_o **ppUVar2;
  UnityEngine_UI_Text_o **ppUVar3;
  int iVar4;
  long lVar5;
  UnityEngine_Texture2D_o *pUVar6;
  int32_t iVar7;
  int32_t score;
  bool_conflict bVar8;
  UnityEngine_Texture2D_o *pUVar9;
  System_String_o *pSVar10;
  long *parent;
  UnityEngine_Component_o *__this_00;
  UI_SnapshotViewerMainPanel_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  UI_SnapshotPopup_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Canvas_o *__this_01;
  UI_KillScorePopup_o *pUVar15;
  UI_ElementStyle_o *pUVar16;
  UnityEngine_UI_Text_o *pUVar17;
  Il2CppObject *__this_02;
  UnityEngine_Texture2D_o **ppUVar18;
  undefined4 uVar19;
  UnityEngine_UI_Text_o *__this_03;
  Il2CppObject *__this_04;
  float fVar20;
  System_DateTime_Fields SStack_38;
  
  if (g_data_057ae716 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotViewerMainPanel_GetComponent_SnapshotViewerMainP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotViewerMainPanel_CreateHeadedPanel_SnapshotViewer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Snapshot/SnapshotPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae716 = '\x01';
  }
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  parent = (long *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Component_o *)
              UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)parent,1,MethodInfo_SnapshotViewerMainPanel_CreateHeadedPanel_SnapshotViewer);
  if (__this_00 == (UnityEngine_Component_o *)0x0) {
label_04452b10:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae717 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
      g_data_057ae717 = '\x01';
    }
    __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
    uVar19 = 0;
    __this_04 = __this_02;
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    *(undefined4 *)&__this_02[1].klass = 0;
    if (__this_02 != (Il2CppObject *)0x0) {
      __this_02[2].klass = (Il2CppClass *)parent;
      il2cpp_runtime_helper_022b4080(__this_02 + 2,parent);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_04,(MethodInfo *)0x0);
    *(undefined4 *)&__this_04[1].klass = uVar19;
    return;
  }
  pUVar11 = (UI_SnapshotViewerMainPanel_o *)
            UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_SnapshotViewerMainPanel_GetComponent_SnapshotViewerMainP);
  (__this->fields)._mainPanel = pUVar11;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._mainPanel);
  parent = (long *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                      ((UnityEngine_Transform_o *)parent,"Prefabs/Snapshot/SnapshotPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
  if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_04452b10;
  pUVar13 = (UI_SnapshotPopup_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
  ppUVar1 = &(__this->fields)._snapshotPopup;
  (__this->fields)._snapshotPopup = pUVar13;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  parent = (long *)(__this->fields)._snapshotPopup;
  if (((Il2CppClass *)parent == (Il2CppClass *)0x0) ||
     (pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent,(MethodInfo *)0x0),
     pUVar14 == (UnityEngine_Transform_o *)0x0)) goto label_04452b10;
  UnityEngine_Transform__set_localScale
            (pUVar14,(UnityEngine_Vector3_o)ZEXT812(0x3fc000003fc00000),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  parent = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (((Il2CppClass *)parent == (Il2CppClass *)0x0) ||
     (__this_01 = (UnityEngine_Canvas_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)parent,MethodInfo_Canvas_GetComponent_Canvas),
     __this_01 == (UnityEngine_Canvas_o *)0x0)) goto label_04452b10;
  fVar20 = UnityEngine_Canvas__get_scaleFactor(__this_01,(MethodInfo *)0x0);
  (__this->fields)._width = (int)(fVar20 * 1152.0);
  (__this->fields)._height = (int)(fVar20 * 648.0);
  parent = (long *)(__this->fields)._snapshotPopup;
  if ((Il2CppClass *)parent == (Il2CppClass *)0x0) goto label_04452b10;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
  if (g_data_057a6843 == '\0') {
    parent = &TypeInfo_Quaternion;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6843 = '\x01';
  }
  if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_04452b10;
  SStack_38._dateData = (uint64_t)ppUVar1;
  UnityEngine_Transform__set_localRotation
            (pUVar14,(UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
             (MethodInfo *)0x0);
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar15 = (UI_KillScorePopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar14,0,MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
  (__this->fields)._killScorePopup = pUVar15;
  il2cpp_runtime_helper_022b4080();
  parent = (long *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar16 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar16,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar12 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)parent,pUVar16,"",0,4,(MethodInfo *)0x0);
  if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_04452b10;
  pUVar17 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Text_GetComponent_Text);
  ppUVar2 = &(__this->fields)._nameLabel;
  (__this->fields)._nameLabel = pUVar17;
  il2cpp_runtime_helper_022b4080(ppUVar2);
  parent = (long *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar16 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar16,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar12 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)parent,pUVar16,"",0,4,(MethodInfo *)0x0);
  if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_04452b10;
  pUVar17 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Text_GetComponent_Text);
  ppUVar3 = &(__this->fields)._statusLabel;
  (__this->fields)._statusLabel = pUVar17;
  il2cpp_runtime_helper_022b4080(ppUVar3);
  pUVar11 = (__this->fields)._mainPanel;
  parent = (long *)0x0;
  if (pUVar11 == (UI_SnapshotViewerMainPanel_o *)0x0) goto label_04452b10;
  pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(pUVar12,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
  parent = (long *)0x0;
  if (*(UI_SnapshotPopup_o **)SStack_38._dateData == (UI_SnapshotPopup_o *)0x0) goto label_04452b10;
  pUVar12 = UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)*(UI_SnapshotPopup_o **)SStack_38._dateData,
                       (MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(pUVar12,4,4,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  pUVar15 = (__this->fields)._killScorePopup;
  parent = (long *)0x0;
  if (pUVar15 == (UI_KillScorePopup_o *)0x0) goto label_04452b10;
  pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(pUVar12,4,4,(UnityEngine_Vector2_o)0x437a000043e60000,(MethodInfo *)0x0);
  pUVar17 = *ppUVar2;
  parent = (long *)0x0;
  if (pUVar17 == (UnityEngine_UI_Text_o *)0x0) goto label_04452b10;
  pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(pUVar12,4,4,(UnityEngine_Vector2_o)0xc389800000000000,(MethodInfo *)0x0);
  pUVar17 = *ppUVar3;
  parent = (long *)0x0;
  if (pUVar17 == (UnityEngine_UI_Text_o *)0x0) goto label_04452b10;
  pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(pUVar12,7,7,(UnityEngine_Vector2_o)0x41a0000000000000,(MethodInfo *)0x0);
  if (g_data_057ae718 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae718 = '\x01';
  }
  SStack_38._dateData = 0;
  pUVar17 = (__this->fields)._statusLabel;
  __this_03 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar17 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  (*(pUVar17->klass->vtable)._75_set_text.methodPtr)
            (pUVar17,"",(pUVar17->klass->vtable)._75_set_text.method);
  pUVar17 = (__this->fields)._nameLabel;
  __this_03 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar17 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  (*(pUVar17->klass->vtable)._75_set_text.methodPtr)
            (pUVar17,"",(pUVar17->klass->vtable)._75_set_text.method);
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae736 == '\0') goto label_044522f8;
label_044521e1:
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) != 0) goto label_044521f2;
label_0445231c:
    il2cpp_runtime_helper_02337ed0();
    iVar4 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  else {
    if (g_data_057ae736 != '\0') goto label_044521e1;
label_044522f8:
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057ae736 = '\x01';
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) goto label_0445231c;
label_044521f2:
    iVar4 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  if (0 < iVar4) {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae736 == '\0') goto label_0445234a;
label_0445221d:
      iVar4 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    else {
      if (g_data_057ae736 != '\0') goto label_0445221d;
label_0445234a:
      il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
      g_data_057ae736 = '\x01';
      iVar4 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    if (iVar4 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (0 < *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28)) {
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar9 = ApplicationManagers_SnapshotManager__GetSnapshot(0,(MethodInfo *)0x0);
      pUVar13 = (__this->fields)._snapshotPopup;
      __this_03 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar13 != (UI_SnapshotPopup_o *)0x0) {
        (*(pUVar13->klass->vtable)._59_Load.methodPtr)
                  (pUVar13,pUVar9,(pUVar13->klass->vtable)._59_Load.method);
        pUVar13 = (__this->fields)._snapshotPopup;
        __this_03 = (UnityEngine_UI_Text_o *)0x0;
        if (pUVar13 != (UI_SnapshotPopup_o *)0x0) {
          score = 0;
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar13,(MethodInfo *)0x0);
          __this_03 = (UnityEngine_UI_Text_o *)0x0;
          iVar7 = ApplicationManagers_SnapshotManager__GetDamage(0,(MethodInfo *)0x0);
          pUVar17 = (UnityEngine_UI_Text_o *)(__this->fields)._killScorePopup;
          if (0 < iVar7) {
            if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_03 = (UnityEngine_UI_Text_o *)0x0;
            score = ApplicationManagers_SnapshotManager__GetDamage(0,(MethodInfo *)0x0);
          }
          if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
            UI_KillScorePopup__ShowSnapshotViewer((UI_KillScorePopup_o *)pUVar17,score,(MethodInfo *)0x0);
            lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
            __this_03 = pUVar17;
            if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x30), lVar5 != 0)) {
              pUVar17 = (__this->fields)._nameLabel;
              __this_03 = *(UnityEngine_UI_Text_o **)(lVar5 + 0x18);
              if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              SStack_38._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
              pSVar10 = System_DateTime__ToShortDateString((System_DateTime_o)&SStack_38,(MethodInfo *)0x0);
              pSVar10 = System_String__Concat_3af7150
                                  ((System_String_o *)__this_03," ",pSVar10,(MethodInfo *)0x0);
              if (pUVar17 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar17->klass->vtable)._75_set_text.methodPtr)
                          (pUVar17,pSVar10,(pUVar17->klass->vtable)._75_set_text.method);
                __this_03 = (__this->fields)._nameLabel;
                if ((__this_03 != (UnityEngine_UI_Text_o *)0x0) &&
                   (pUVar14 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
                   pUVar14 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetAsLastSibling(pUVar14,(MethodInfo *)0x0);
                  pUVar6 = (__this->fields)._currentSnapshot;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  ppUVar18 = &(__this->fields)._currentSnapshot;
                  bVar8 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((char)bVar8 != '\0') {
                    pUVar6 = *ppUVar18;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
                  }
                  *ppUVar18 = pUVar9;
                  il2cpp_runtime_helper_022b4080(ppUVar18,pUVar9);
                  return;
                }
              }
            }
          }
        }
      }
      goto label_0445250c;
    }
  }
  pUVar13 = (__this->fields)._snapshotPopup;
  __this_03 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar13 != (UI_SnapshotPopup_o *)0x0) {
    (*(pUVar13->klass->vtable)._22_Hide.methodPtr)();
    pUVar15 = (__this->fields)._killScorePopup;
    __this_03 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar15 != (UI_KillScorePopup_o *)0x0) {
      (*(pUVar15->klass->vtable)._22_Hide.methodPtr)(pUVar15,(pUVar15->klass->vtable)._22_Hide.method);
      return;
    }
  }
label_0445250c:
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this_03,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMenu$$Save
// il2cpp: void UI_SnapshotViewerMenu__Save (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x4452070

void UI_SnapshotViewerMenu__Save(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  UnityEngine_Object_o *pUVar5;
  int32_t iVar6;
  int32_t score;
  bool_conflict bVar7;
  Il2CppObject *__this_00;
  UnityEngine_Texture2D_o *pUVar8;
  System_String_o *pSVar9;
  UnityEngine_Transform_o *__this_01;
  void **ppvVar10;
  ulong uVar11;
  Il2CppObject *pIVar12;
  Il2CppClass *__this_02;
  Il2CppClass *pIVar13;
  Il2CppClass *pIVar14;
  int iVar15;
  System_DateTime_Fields SStack_50;
  Il2CppObject *pIStack_48;
  
  if (g_data_057ae717 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
    g_data_057ae717 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
  uVar11 = 0;
  pIVar12 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  SStack_50._dateData = il2cpp_runtime_helper_022b2c90();
  pIVar13 = (Il2CppClass *)(uVar11 & 0xffffffff);
  pIStack_48 = __this_00;
  if (g_data_057ae718 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae718 = '\x01';
  }
  SStack_50._dateData = 0;
  plVar2 = pIVar12[0xb].monitor;
  __this_02 = (Il2CppClass *)0x0;
  if (plVar2 == (long *)0x0) goto label_0445250c;
  (**(code **)(*plVar2 + 0x5e8))(plVar2,"",*(undefined8 *)(*plVar2 + 0x5f0));
  pIVar14 = pIVar12[0xb].klass;
  __this_02 = (Il2CppClass *)0x0;
  if (pIVar14 == (Il2CppClass *)0x0) goto label_0445250c;
  pvVar3 = (pIVar14->_1).image;
  (**(code **)((long)pvVar3 + 0x5e8))(pIVar14,"",*(undefined8 *)((long)pvVar3 + 0x5f0));
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae736 == '\0') goto label_044522f8;
label_044521e1:
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) != 0) goto label_044521f2;
label_0445231c:
    il2cpp_runtime_helper_02337ed0();
    iVar15 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  else {
    if (g_data_057ae736 != '\0') goto label_044521e1;
label_044522f8:
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057ae736 = '\x01';
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) goto label_0445231c;
label_044521f2:
    iVar15 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  if (0 < iVar15) {
    iVar15 = (int)uVar11;
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae736 == '\0') goto label_0445234a;
label_0445221d:
      iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    else {
      if (g_data_057ae736 != '\0') goto label_0445221d;
label_0445234a:
      il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
      g_data_057ae736 = '\x01';
      iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((-1 < iVar15) && (iVar15 < *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28))) {
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar8 = ApplicationManagers_SnapshotManager__GetSnapshot(iVar15,(MethodInfo *)0x0);
      pIVar14 = pIVar12[10].klass;
      __this_02 = (Il2CppClass *)0x0;
      if (pIVar14 != (Il2CppClass *)0x0) {
        pvVar3 = (pIVar14->_1).image;
        (**(code **)((long)pvVar3 + 0x4e8))(pIVar14,pUVar8,*(undefined8 *)((long)pvVar3 + 0x4f0));
        __this_02 = (Il2CppClass *)0x0;
        if (pIVar12[10].klass != (Il2CppClass *)0x0) {
          score = 0;
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pIVar12[10].klass,(MethodInfo *)0x0);
          __this_02 = pIVar13;
          iVar6 = ApplicationManagers_SnapshotManager__GetDamage(iVar15,(MethodInfo *)0x0);
          pIVar14 = pIVar12[10].monitor;
          if (0 < iVar6) {
            if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            score = ApplicationManagers_SnapshotManager__GetDamage(iVar15,(MethodInfo *)0x0);
            __this_02 = pIVar13;
          }
          if (pIVar14 != (Il2CppClass *)0x0) {
            UI_KillScorePopup__ShowSnapshotViewer((UI_KillScorePopup_o *)pIVar14,score,(MethodInfo *)0x0);
            lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
            __this_02 = pIVar14;
            if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x30), lVar4 != 0)) {
              pIVar13 = pIVar12[0xb].klass;
              __this_02 = *(Il2CppClass **)(lVar4 + 0x18);
              if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              SStack_50._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
              pSVar9 = System_DateTime__ToShortDateString((System_DateTime_o)&SStack_50,(MethodInfo *)0x0);
              pSVar9 = System_String__Concat_3af7150
                                 ((System_String_o *)__this_02," ",pSVar9,(MethodInfo *)0x0);
              if (pIVar13 != (Il2CppClass *)0x0) {
                pvVar3 = (pIVar13->_1).image;
                (**(code **)((long)pvVar3 + 0x5e8))(pIVar13,pSVar9,*(undefined8 *)((long)pvVar3 + 0x5f0));
                __this_02 = pIVar12[0xb].klass;
                if ((__this_02 != (Il2CppClass *)0x0) &&
                   (__this_01 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
                   __this_01 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
                  pUVar5 = pIVar12[0xc].monitor;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  ppvVar10 = &pIVar12[0xc].monitor;
                  bVar7 = UnityEngine_Object__op_Inequality
                                    (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar7 != '\0') {
                    pUVar5 = *ppvVar10;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Object__Destroy_4e01c60(pUVar5,(MethodInfo *)0x0);
                  }
                  *ppvVar10 = pUVar8;
                  il2cpp_runtime_helper_022b4080(ppvVar10,pUVar8);
                  return;
                }
              }
            }
          }
        }
      }
      goto label_0445250c;
    }
  }
  __this_02 = (Il2CppClass *)0x0;
  if (pIVar12[10].klass != (Il2CppClass *)0x0) {
    (**(code **)((long)((pIVar12[10].klass)->_1).image + 0x298))();
    plVar2 = pIVar12[10].monitor;
    __this_02 = (Il2CppClass *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
      return;
    }
  }
label_0445250c:
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMenu$$SaveCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_SnapshotViewerMenu__SaveCoroutine (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x4452b20

System_Collections_IEnumerator_o *
UI_SnapshotViewerMenu__SaveCoroutine(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae717 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SaveCoroutine_d__10);
    g_data_057ae717 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SaveCoroutine_d__10);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.SnapshotViewerMenu$$LoadSnapshot
// il2cpp: void UI_SnapshotViewerMenu__LoadSnapshot (UI_SnapshotViewerMenu_o* __this, int32_t index, const MethodInfo* method);
// 0x44520f0

void UI_SnapshotViewerMenu__LoadSnapshot(UI_SnapshotViewerMenu_o *__this,int32_t index,MethodInfo *method)

{
  int iVar1;
  UI_SnapshotPopup_o *pUVar2;
  UI_KillScorePopup_o *pUVar3;
  long lVar4;
  UnityEngine_Texture2D_o *pUVar5;
  int32_t iVar6;
  int32_t score;
  bool_conflict bVar7;
  UnityEngine_Texture2D_o *pUVar8;
  System_String_o *pSVar9;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Texture2D_o **ppUVar10;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_Text_o *pUVar11;
  System_DateTime_Fields SStack_38;
  
  if (g_data_057ae718 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae718 = '\x01';
  }
  SStack_38._dateData = 0;
  pUVar11 = (__this->fields)._statusLabel;
  __this_01 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar11 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  (*(pUVar11->klass->vtable)._75_set_text.methodPtr)
            (pUVar11,"",(pUVar11->klass->vtable)._75_set_text.method);
  pUVar11 = (__this->fields)._nameLabel;
  __this_01 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar11 == (UnityEngine_UI_Text_o *)0x0) goto label_0445250c;
  (*(pUVar11->klass->vtable)._75_set_text.methodPtr)
            (pUVar11,"",(pUVar11->klass->vtable)._75_set_text.method);
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae736 == '\0') goto label_044522f8;
label_044521e1:
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) != 0) goto label_044521f2;
label_0445231c:
    il2cpp_runtime_helper_02337ed0();
    iVar1 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  else {
    if (g_data_057ae736 != '\0') goto label_044521e1;
label_044522f8:
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057ae736 = '\x01';
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) goto label_0445231c;
label_044521f2:
    iVar1 = *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  if (0 < iVar1) {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae736 == '\0') goto label_0445234a;
label_0445221d:
      iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    else {
      if (g_data_057ae736 != '\0') goto label_0445221d;
label_0445234a:
      il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
      g_data_057ae736 = '\x01';
      iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((-1 < index) && (index < *(int *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28))) {
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar8 = ApplicationManagers_SnapshotManager__GetSnapshot(index,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._snapshotPopup;
      __this_01 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar2 != (UI_SnapshotPopup_o *)0x0) {
        (*(pUVar2->klass->vtable)._59_Load.methodPtr)(pUVar2,pUVar8,(pUVar2->klass->vtable)._59_Load.method);
        pUVar2 = (__this->fields)._snapshotPopup;
        __this_01 = (UnityEngine_UI_Text_o *)0x0;
        if (pUVar2 != (UI_SnapshotPopup_o *)0x0) {
          score = 0;
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar2,(MethodInfo *)0x0);
          __this_01 = (UnityEngine_UI_Text_o *)(ulong)(uint)index;
          iVar6 = ApplicationManagers_SnapshotManager__GetDamage(index,(MethodInfo *)0x0);
          pUVar11 = (UnityEngine_UI_Text_o *)(__this->fields)._killScorePopup;
          if (0 < iVar6) {
            if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_01 = (UnityEngine_UI_Text_o *)(ulong)(uint)index;
            score = ApplicationManagers_SnapshotManager__GetDamage(index,(MethodInfo *)0x0);
          }
          if (pUVar11 != (UnityEngine_UI_Text_o *)0x0) {
            UI_KillScorePopup__ShowSnapshotViewer((UI_KillScorePopup_o *)pUVar11,score,(MethodInfo *)0x0);
            lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
            __this_01 = pUVar11;
            if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x30), lVar4 != 0)) {
              pUVar11 = (__this->fields)._nameLabel;
              __this_01 = *(UnityEngine_UI_Text_o **)(lVar4 + 0x18);
              if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              SStack_38._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
              pSVar9 = System_DateTime__ToShortDateString((System_DateTime_o)&SStack_38,(MethodInfo *)0x0);
              pSVar9 = System_String__Concat_3af7150
                                 ((System_String_o *)__this_01," ",pSVar9,(MethodInfo *)0x0);
              if (pUVar11 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar11->klass->vtable)._75_set_text.methodPtr)
                          (pUVar11,pSVar9,(pUVar11->klass->vtable)._75_set_text.method);
                __this_01 = (__this->fields)._nameLabel;
                if ((__this_01 != (UnityEngine_UI_Text_o *)0x0) &&
                   (__this_00 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
                   __this_00 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
                  pUVar5 = (__this->fields)._currentSnapshot;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  ppUVar10 = &(__this->fields)._currentSnapshot;
                  bVar7 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((char)bVar7 != '\0') {
                    pUVar5 = *ppUVar10;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
                  }
                  *ppUVar10 = pUVar8;
                  il2cpp_runtime_helper_022b4080(ppUVar10,pUVar8);
                  return;
                }
              }
            }
          }
        }
      }
      goto label_0445250c;
    }
  }
  pUVar2 = (__this->fields)._snapshotPopup;
  __this_01 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar2 != (UI_SnapshotPopup_o *)0x0) {
    (*(pUVar2->klass->vtable)._22_Hide.methodPtr)();
    pUVar3 = (__this->fields)._killScorePopup;
    __this_01 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar3 != (UI_KillScorePopup_o *)0x0) {
      (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
      return;
    }
  }
label_0445250c:
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMenu$$.ctor
// il2cpp: void UI_SnapshotViewerMenu___ctor (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x4452bb0

void UI_SnapshotViewerMenu___ctor(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


