// Type: UI.SnapshotViewerMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SnapshotViewerMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SnapshotViewerMenu/SnapshotViewerMenu.cs
// --------------------------------

// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$.ctor
// il2cpp: void UI_SnapshotViewerMenu__SaveCoroutine_d__10___ctor (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_SnapshotViewerMenu__SaveCoroutine_d__10___ctor(UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$System.IDisposable.Dispose
// il2cpp: void UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_IDisposable_Dispose (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_IDisposable_Dispose(UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, MethodInfo* method)

{
  return;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$MoveNext
// il2cpp: bool UI_SnapshotViewerMenu__SaveCoroutine_d__10__MoveNext (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x1822fdf10

bool UI_SnapshotViewerMenu__SaveCoroutine_d__10__MoveNext
               (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_SnapshotViewerMenu_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  int32_t iVar7;
  int32_t iVar8;
  int32_t iVar9;
  Il2CppObject *__this_00;
  UnityEngine_Texture2D_o *__this_01;
  System_String_array *values;
  System_String_o *pSVar10;
  int32_t local_res8 [2];
  System_DateTime_Fields local_res18 [2];
  UnityEngine_Rect_o local_48;
  
  if (Il2CppMethodInitialized_18434765c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&"\\");
    il2cpp_codegen_initialize_runtime_metadata(&"Saving...");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"Saved snapshot to {0}");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".png");
    Il2CppMethodInitialized_18434765c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pUVar2 = (__this->fields).__4__this;
  local_res18[0]._dateData = 0;
  local_res8[0] = 0;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((pUVar2 == (UI_SnapshotViewerMenu_o *)0x0) ||
       (pUVar3 = (pUVar2->fields)._statusLabel, pUVar3 == (UnityEngine_UI_Text_o *)0x0)) goto label_1822fe45a;
    (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
              (pUVar3,"Saving...",(pUVar3->klass->vtable)._75_set_text.method);
    __this_00 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
    bVar4 = true;
    (__this->fields).__1__state = 1;
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (pUVar2 == (UI_SnapshotViewerMenu_o *)0x0) {
label_1822fe45a:
        ThrowNullReferenceException();
      }
      iVar5 = (pUVar2->fields)._width;
      iVar6 = (pUVar2->fields)._height;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
      UnityEngine_Texture2D___ctor_2efc630(__this_01,iVar5,iVar6,3,false,(MethodInfo *)0x0);
      iVar5 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Texture2D_o *)0x0) goto label_1822fe45a;
      iVar6 = (*(__this_01->klass->vtable)._5_get_width.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._5_get_width.method);
      iVar7 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      iVar8 = (*(__this_01->klass->vtable)._7_get_height.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._7_get_height.method);
      iVar9 = (*(__this_01->klass->vtable)._5_get_width.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._5_get_width.method);
      local_48.fields.m_XMin = (float)iVar5 * 0.5 - (float)iVar6 * 0.5;
      local_48.fields.m_YMin = (float)iVar7 * 0.5 - (float)iVar8 * 0.5;
      local_48.fields.m_Width = (float)iVar9;
      iVar5 = (*(__this_01->klass->vtable)._7_get_height.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._7_get_height.method);
      local_48.fields.m_Height = (float)iVar5;
      UnityEngine_Texture2D__ReadPixels_2efaf30(__this_01,&local_48,0,0,(MethodInfo *)0x0);
      UnityEngine_Texture2D__Apply_2ef9fd0(__this_01,(MethodInfo *)0x0);
      values = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
      if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
      }
      local_res18[0]._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
      local_res8[0] = System_DateTime__get_Month((System_DateTime_o *)local_res18,(MethodInfo *)0x0);
      pSVar10 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      if (values == (System_String_array *)0x0) goto label_1822fe45a;
      if ((int)values->max_length == 0) {
label_1822fe460:
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[0] = pSVar10;
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar10);
      local_res18[0]._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
      local_res8[0] = System_DateTime__get_Day((System_DateTime_o *)local_res18,(MethodInfo *)0x0);
      pSVar10 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      if ((uint)values->max_length < 2) goto label_1822fe460;
      values->m_Items[1] = pSVar10;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar10);
      local_res18[0]._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
      local_res8[0] = System_DateTime__get_Year((System_DateTime_o *)local_res18,(MethodInfo *)0x0);
      pSVar10 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      if ((uint)values->max_length < 3) goto label_1822fe460;
      values->m_Items[2] = pSVar10;
      Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar10);
      pSVar10 = "-";
      if ((uint)values->max_length < 4) goto label_1822fe460;
      values->m_Items[3] = "-";
      Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar10);
      local_res18[0]._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
      local_res8[0] = System_DateTime__get_Hour((System_DateTime_o *)local_res18,(MethodInfo *)0x0);
      pSVar10 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      if ((uint)values->max_length < 5) goto label_1822fe460;
      values->m_Items[4] = pSVar10;
      Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar10);
      local_res18[0]._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
      local_res8[0] = System_DateTime__get_Minute((System_DateTime_o *)local_res18,(MethodInfo *)0x0);
      pSVar10 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      if ((uint)values->max_length < 6) goto label_1822fe460;
      values->m_Items[5] = pSVar10;
      Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar10);
      local_res18[0]._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
      local_res8[0] = System_DateTime__get_Second((System_DateTime_o *)local_res18,(MethodInfo *)0x0);
      pSVar10 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      if ((uint)values->max_length < 7) goto label_1822fe460;
      values->m_Items[6] = pSVar10;
      Il2CppCodeGenWriteBarrier(values->m_Items + 6,pSVar10);
      pSVar10 = ".png";
      if ((uint)values->max_length < 8) goto label_1822fe460;
      values->m_Items[7] = ".png";
      Il2CppCodeGenWriteBarrier(values->m_Items + 7,pSVar10);
      pSVar10 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
      }
      ApplicationManagers_SnapshotManager__SaveSnapshotFinish(__this_01,pSVar10,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
      pSVar10 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotPath;
      if (pSVar10 == (System_String_o *)0x0) goto label_1822fe45a;
      pUVar3 = (pUVar2->fields)._statusLabel;
      pSVar10 = System_String__Replace_1970e80
                          (pSVar10,"\\","/",(MethodInfo *)0x0);
      pSVar10 = System_String__Format("Saved snapshot to {0}",(Il2CppObject *)pSVar10,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) goto label_1822fe45a;
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,pSVar10,(pUVar3->klass->vtable)._75_set_text.method);
    }
    bVar4 = false;
  }
  return bVar4;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_IEnumerator_Reset (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x1822fe470

void UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_IEnumerator_Reset
               (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_SnapshotViewerMenu_SaveCoroutine_d__10_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_IEnumerator_get_Current (UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_SnapshotViewerMenu__SaveCoroutine_d__10__System_Collections_IEnumerator_get_Current(UI_SnapshotViewerMenu__SaveCoroutine_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotViewerMenu$$Setup
// il2cpp: void UI_SnapshotViewerMenu__Setup (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x1822fd910

void UI_SnapshotViewerMenu__Setup(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu_o *__this_00;
  UnityEngine_Quaternion_StaticFields *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_SnapshotViewerMainPanel_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UI_SnapshotPopup_o *pUVar9;
  UnityEngine_Canvas_o *__this_01;
  UI_KillScorePopup_o *pUVar10;
  UI_ElementStyle_o *pUVar11;
  UnityEngine_UI_Text_o *pUVar12;
  float fVar13;
  UnityEngine_Quaternion_o local_58 [5];
  
  if (Il2CppMethodInitialized_184347659 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SnapshotViewerMainPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillScorePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_SnapshotViewerMainPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_SnapshotPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_SnapshotPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Snapshot/SnapshotPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347659 = '\x01';
  }
  UI_BaseMenu__Setup((System_Net_TimerThread_Timer_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar6,true,
                      (MethodInfo_6ABA40 *)
                      MethodInfo_UI_ElementFactory_CreateHeadedPanel_SnapshotViewerMainPanel);
  if (pUVar7 != (UI_SnapshotViewerMainPanel_o *)0x0) {
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar7,
                        (MethodInfo_6651A0 *)
                        MethodInfo_UnityEngine_Component_GetComponent_SnapshotViewerMainPanel);
    (__this->fields)._mainPanel = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._mainPanel,pUVar7);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                       (pUVar6,"Prefabs/Snapshot/SnapshotPopup",false,
                        (MethodInfo_6ABD60 *)
                        MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_SnapshotPopup);
    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
      pUVar9 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar8,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_SnapshotPopup);
      (__this->fields)._snapshotPopup = pUVar9;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._snapshotPopup,pUVar9);
      pUVar9 = (__this->fields)._snapshotPopup;
      if (pUVar9 != (UI_SnapshotPopup_o *)0x0) {
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          local_58[0].fields.x = 1.5;
          local_58[0].fields.y = 1.5;
          local_58[0].fields.z = 0.0;
          UnityEngine_Transform__set_localScale(pUVar6,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (__this_00 != (UI_BaseMenu_o *)0x0) {
            __this_01 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)__this_00,
                                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
            if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
              fVar13 = UnityEngine_Canvas__get_scaleFactor(__this_01,(MethodInfo *)0x0);
              pUVar9 = (__this->fields)._snapshotPopup;
              (__this->fields)._width = (int)(fVar13 * 1152.0);
              (__this->fields)._height = (int)(fVar13 * 648.0);
              if (pUVar9 != (UI_SnapshotPopup_o *)0x0) {
                pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18433de5b == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                  Il2CppMethodInitialized_18433de5b = '\x01';
                }
                if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                  pUVar1 = TypeInfo_UnityEngine_Quaternion->static_fields;
                  uVar2 = (pUVar1->identityQuaternion).fields.x;
                  uVar3 = (pUVar1->identityQuaternion).fields.y;
                  uVar4 = (pUVar1->identityQuaternion).fields.z;
                  uVar5 = (pUVar1->identityQuaternion).fields.w;
                  local_58[0].fields.x = (float)uVar2;
                  local_58[0].fields.y = (float)uVar3;
                  local_58[0].fields.z = (float)uVar4;
                  local_58[0].fields.w = (float)uVar5;
                  UnityEngine_Transform__set_localRotation(pUVar6,local_58,(MethodInfo *)0x0);
                  pUVar6 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar10 = UI_ElementFactory__CreateHeadedPanel_object_
                                      (pUVar6,false,
                                       (MethodInfo_6ABA40 *)
                                       MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillScorePopup);
                  (__this->fields)._killScorePopup = pUVar10;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._killScorePopup,pUVar10);
                  pUVar6 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                  UI_ElementStyle___ctor(pUVar11,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                  pUVar8 = UI_ElementFactory__CreateDefaultLabel
                                     (pUVar6,pUVar11,"",0,4,(MethodInfo *)0x0);
                  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar12 = UnityEngine_GameObject__GetComponent_object_
                                        (pUVar8,(MethodInfo_6F5650 *)
                                                MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                    (__this->fields)._nameLabel = pUVar12;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._nameLabel,pUVar12);
                    pUVar6 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                    UI_ElementStyle___ctor(pUVar11,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
                    pUVar8 = UI_ElementFactory__CreateDefaultLabel
                                       (pUVar6,pUVar11,"",0,4,(MethodInfo *)0x0);
                    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar12 = UnityEngine_GameObject__GetComponent_object_
                                          (pUVar8,(MethodInfo_6F5650 *)
                                                  MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                      (__this->fields)._statusLabel = pUVar12;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._statusLabel,pUVar12);
                      pUVar7 = (__this->fields)._mainPanel;
                      if (pUVar7 != (UI_SnapshotViewerMainPanel_o *)0x0) {
                        pUVar8 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                        UI_ElementFactory__SetAnchor
                                  (pUVar8,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
                        pUVar9 = (__this->fields)._snapshotPopup;
                        if (pUVar9 != (UI_SnapshotPopup_o *)0x0) {
                          pUVar8 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                          UI_ElementFactory__SetAnchor
                                    (pUVar8,4,4,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
                          pUVar10 = (__this->fields)._killScorePopup;
                          if (pUVar10 != (UI_KillScorePopup_o *)0x0) {
                            pUVar8 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
                            UI_ElementFactory__SetAnchor
                                      (pUVar8,4,4,(UnityEngine_Vector2_o)0x437a000043e60000,(MethodInfo *)0x0)
                            ;
                            pUVar12 = (__this->fields)._nameLabel;
                            if (pUVar12 != (UnityEngine_UI_Text_o *)0x0) {
                              pUVar8 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
                              UI_ElementFactory__SetAnchor
                                        (pUVar8,4,4,(UnityEngine_Vector2_o)0xc389800000000000,
                                         (MethodInfo *)0x0);
                              pUVar12 = (__this->fields)._statusLabel;
                              if (pUVar12 != (UnityEngine_UI_Text_o *)0x0) {
                                pUVar8 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar8,7,7,(UnityEngine_Vector2_o)0x41a0000000000000,
                                           (MethodInfo *)0x0);
                                UI_SnapshotViewerMenu__LoadSnapshot(__this,0,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// UI.SnapshotViewerMenu$$Save
// il2cpp: void UI_SnapshotViewerMenu__Save (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x1822fd890

void UI_SnapshotViewerMenu__Save(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *routine;
  
  if (Il2CppMethodInitialized_18434765a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SnapshotViewerMenu_SaveCoroutine_d__10);
    Il2CppMethodInitialized_18434765a = '\x01';
  }
  routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SnapshotViewerMenu_SaveCoroutine_d__10);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
             (MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMenu$$SaveCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_SnapshotViewerMenu__SaveCoroutine (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x1822fd820

System_Collections_IEnumerator_o *
UI_SnapshotViewerMenu__SaveCoroutine(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  UI_SnapshotViewerMenu__SaveCoroutine_d__10_o *__this_00;
  
  if (Il2CppMethodInitialized_18434765a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SnapshotViewerMenu_SaveCoroutine_d__10);
    Il2CppMethodInitialized_18434765a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SnapshotViewerMenu_SaveCoroutine_d__10);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.SnapshotViewerMenu$$LoadSnapshot
// il2cpp: void UI_SnapshotViewerMenu__LoadSnapshot (UI_SnapshotViewerMenu_o* __this, int32_t index, const MethodInfo* method);
// 0x1822fd450
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822fd7fd: mov rax, qword ptr [rcx]
// asm:   0x1822fd800: mov rdx, qword ptr [rax + 0x2a0]
// asm:   0x1822fd807: call qword ptr [rax + 0x298]  ; vtable slot 22
// asm:   0x1822fd80d: jmp 0x1822fd7c0

void UI_SnapshotViewerMenu__LoadSnapshot(UI_SnapshotViewerMenu_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UI_SnapshotPopup_o *pUVar2;
  UI_KillScorePopup_o *pUVar3;
  Settings_ProfileSettings_o *pSVar4;
  Settings_NameSetting_o *pSVar5;
  UnityEngine_Texture2D_o *pUVar6;
  bool bVar7;
  int32_t iVar8;
  UnityEngine_Texture2D_o *value;
  System_String_o *str2;
  System_String_o *pSVar9;
  UnityEngine_Transform_o *__this_00;
  System_DateTime_Fields local_res8;
  
  if (Il2CppMethodInitialized_18434765b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434765b = '\x01';
  }
  pUVar1 = (__this->fields)._statusLabel;
  local_res8._dateData = 0;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,"",(pUVar1->klass->vtable)._75_set_text.method);
    pUVar1 = (__this->fields)._nameLabel;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,"",(pUVar1->klass->vtable)._75_set_text.method);
      if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
      }
      if (Il2CppMethodInitialized_1843476bf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
        Il2CppMethodInitialized_1843476bf = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
      }
      if (0 < TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId) {
        if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
        }
        if (Il2CppMethodInitialized_1843476bf == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
          Il2CppMethodInitialized_1843476bf = '\x01';
        }
        if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
        }
        if ((index < TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId) &&
           (-1 < index)) {
          if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
          }
          value = ApplicationManagers_SnapshotManager__GetSnapshot(index,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._snapshotPopup;
          if (pUVar2 != (UI_SnapshotPopup_o *)0x0) {
            (*(pUVar2->klass->vtable)._62_Load.methodPtr)
                      (pUVar2,value,(pUVar2->klass->vtable)._62_Load.method);
            pUVar2 = (__this->fields)._snapshotPopup;
            if (pUVar2 != (UI_SnapshotPopup_o *)0x0) {
              UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar2,(MethodInfo *)0x0);
              iVar8 = ApplicationManagers_SnapshotManager__GetDamage(index,(MethodInfo *)0x0);
              pUVar3 = (__this->fields)._killScorePopup;
              if (iVar8 < 1) {
                if (pUVar3 == (UI_KillScorePopup_o *)0x0) goto label_1822fd80f;
                iVar8 = 0;
              }
              else {
                if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
                }
                iVar8 = ApplicationManagers_SnapshotManager__GetDamage(index,(MethodInfo *)0x0);
                if (pUVar3 == (UI_KillScorePopup_o *)0x0) goto label_1822fd80f;
              }
              UI_KillScorePopup__ShowSnapshotViewer(pUVar3,iVar8,(MethodInfo *)0x0);
              pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
              if ((pSVar4 != (Settings_ProfileSettings_o *)0x0) &&
                 (pSVar5 = (pSVar4->fields).Name, pSVar5 != (Settings_NameSetting_o *)0x0)) {
                pUVar1 = (__this->fields)._nameLabel;
                pSVar9 = (pSVar5->fields)._value;
                if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
                }
                local_res8._dateData = (uint64_t)System_DateTime__get_Today((MethodInfo *)0x0);
                str2 = System_DateTime__ToShortDateString((System_DateTime_o *)&local_res8,(MethodInfo *)0x0);
                pSVar9 = System_String__Concat_1969b70(pSVar9," ",str2,(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                  (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                            (pUVar1,pSVar9,(pUVar1->klass->vtable)._75_set_text.method);
                  pUVar1 = (__this->fields)._nameLabel;
                  if ((pUVar1 != (UnityEngine_UI_Text_o *)0x0) &&
                     (__this_00 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                     __this_00 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
                    pUVar6 = (__this->fields)._currentSnapshot;
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar7 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar7) {
                      pUVar6 = (__this->fields)._currentSnapshot;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
                    }
                    (__this->fields)._currentSnapshot = value;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentSnapshot,value);
                    return;
                  }
                }
              }
            }
          }
          goto label_1822fd80f;
        }
      }
      pUVar2 = (__this->fields)._snapshotPopup;
      if (pUVar2 != (UI_SnapshotPopup_o *)0x0) {
        (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
        pUVar3 = (__this->fields)._killScorePopup;
        if (pUVar3 != (UI_KillScorePopup_o *)0x0) {
          (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
          return;
        }
      }
    }
  }
label_1822fd80f:
  ThrowNullReferenceException();
}


// UI.SnapshotViewerMenu$$.ctor
// il2cpp: void UI_SnapshotViewerMenu___ctor (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x1821da7e0

void UI_SnapshotViewerMenu___ctor(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


