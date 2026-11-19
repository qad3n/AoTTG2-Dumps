// Type: UI.SnapshotViewerMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/SnapshotViewerMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SnapshotViewerMenu/SnapshotViewerMenu.cs
// --------------------------------

// UI.SnapshotViewerMenu.<SaveCoroutine>d__12$$.ctor
// il2cpp: void UI_SnapshotViewerMenu__SaveCoroutine_d__12___ctor (UI_SnapshotViewerMenu__SaveCoroutine_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5dac280

void UI_SnapshotViewerMenu__SaveCoroutine_d__12___ctor
               (UI_SnapshotViewerMenu__SaveCoroutine_d__12_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__12$$System.IDisposable.Dispose
// il2cpp: void UI_SnapshotViewerMenu__SaveCoroutine_d__12__System_IDisposable_Dispose (UI_SnapshotViewerMenu__SaveCoroutine_d__12_o* __this, const MethodInfo* method);
// 0x5dac6e0

void UI_SnapshotViewerMenu__SaveCoroutine_d__12__System_IDisposable_Dispose
               (UI_SnapshotViewerMenu__SaveCoroutine_d__12_o *__this,MethodInfo *method)

{
  return;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__12$$MoveNext
// il2cpp: bool UI_SnapshotViewerMenu__SaveCoroutine_d__12__MoveNext (UI_SnapshotViewerMenu__SaveCoroutine_d__12_o* __this, const MethodInfo* method);
// 0x5dac6f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dac8a5: cmp byte ptr [rip + 0x1794a74], 0
// asm:   0x5dac8ac: je 0x5dac9b7

bool UI_SnapshotViewerMenu__SaveCoroutine_d__12__MoveNext
               (UI_SnapshotViewerMenu__SaveCoroutine_d__12_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  UI_SnapshotViewerMenu_o *pUVar3;
  UI_SnapshotPopup_o *__this_00;
  UnityEngine_Vector3_array *pUVar4;
  int32_t iVar5;
  int32_t iVar6;
  UnityEngine_RectTransform_o *__this_01;
  Il2CppObject *__this_02;
  UnityEngine_Texture2D_o *__this_03;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_04;
  System_String_o *title;
  System_String_o *format;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_05;
  UnityEngine_Vector3_array *fourCornersArray;
  MethodInfo *pMVar8;
  double dVar9;
  System_DateTime_o SVar10;
  double dVar11;
  System_DateTime_o SVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Rect_o source;
  System_DateTime_o SStack_60;
  undefined8 uStack_58;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  Il2CppClass *pIStack_40;
  
  if (Il2CppMethodInitialized_075480f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgToastDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&"\\");
    il2cpp_codegen_initialize_runtime_metadata(&"viewer.snapshot.save");
    il2cpp_codegen_initialize_runtime_metadata(&"Mdyyyy-Hms");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.SnapshotViewer.SavedToast");
    il2cpp_codegen_initialize_runtime_metadata(&"save");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.ToolsPopup.SnapshotViewerButton");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".png");
    Il2CppMethodInitialized_075480f0 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_02 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_02,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    pUVar3 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((pUVar3 != (UI_SnapshotViewerMenu_o *)0x0) &&
        (__this_00 = (pUVar3->fields)._snapshotPopup, __this_00 != (UI_SnapshotPopup_o *)0x0)) &&
       (__this_01 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
      if (__this_01->klass != TypeInfo_UnityEngine_RectTransform) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01);
      }
      fourCornersArray = (pUVar3->fields)._captureCorners;
      UnityEngine_RectTransform__GetWorldCorners(__this_01,fourCornersArray,(MethodInfo *)0x0);
      pUVar4 = (pUVar3->fields)._captureCorners;
      if (pUVar4 != (UnityEngine_Vector3_array *)0x0) {
        uVar2 = (uint)pUVar4->max_length;
        if ((uVar2 == 0) || (uVar2 < 3)) {
          ThrowIndexOutOfRangeException();
        }
        uStack_48 = *(char **)&pUVar4->m_Items[0].fields;
        pIStack_40 = (Il2CppClass *)0x0;
        fVar13 = pUVar4->m_Items[2].fields.x;
        fVar14 = pUVar4->m_Items[2].fields.y;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (Il2CppMethodInitialized_07541320 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_07541320 = '\x01';
        }
        fVar13 = fVar13 - (float)uStack_48;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        uStack_58 = (Il2CppMethodPointer)(double)fVar13;
        pMVar8 = (MethodInfo *)&SStack_60;
        dVar9 = modf((double)uStack_58,(double *)pMVar8,(MethodInfo *)fourCornersArray);
        SVar10.fields._dateData = SStack_60.fields._dateData;
        if (0.0 <= fVar13) {
          if ((dVar9 != 0.5) || (NAN(dVar9))) {
            SVar10.fields._dateData = (System_DateTime_Fields)floor((double)uStack_58 + 0.5,pMVar8);
          }
          else if (((long)(double)SStack_60.fields._dateData & 1U) != 0) {
            SVar10.fields._dateData = (System_DateTime_Fields)((double)SStack_60.fields._dateData + 1.0);
          }
        }
        else if ((dVar9 != -0.5) || (NAN(dVar9))) {
          SVar10.fields._dateData = (System_DateTime_Fields)ceil((double)uStack_58 + -0.5,pMVar8);
        }
        else if (((long)(double)SStack_60.fields._dateData & 1U) != 0) {
          SVar10.fields._dateData =
               (System_DateTime_Fields)(System_DateTime_Fields)((double)SStack_60.fields._dateData + -1.0);
        }
        fVar13 = uStack_48._4_4_;
        if (Il2CppMethodInitialized_07541320 == '\0') {
          uStack_58 = (Il2CppMethodPointer)CONCAT44(uStack_48._4_4_,uStack_48._4_4_);
          fStack_50 = uStack_48._4_4_;
          fStack_4c = uStack_48._4_4_;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_07541320 = '\x01';
          fVar13 = (float)uStack_58;
        }
        fVar14 = fVar14 - fVar13;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        dVar9 = (double)fVar14;
        pMVar8 = (MethodInfo *)&SStack_60;
        dVar11 = modf(dVar9,(double *)pMVar8,(MethodInfo *)fourCornersArray);
        SVar12.fields._dateData = SStack_60.fields._dateData;
        if (0.0 <= fVar14) {
          if ((dVar11 != 0.5) || (NAN(dVar11))) {
            SVar12.fields._dateData = (System_DateTime_Fields)floor(dVar9 + 0.5,pMVar8);
          }
          else if (((long)(double)SStack_60.fields._dateData & 1U) != 0) {
            SVar12.fields._dateData = (System_DateTime_Fields)((double)SStack_60.fields._dateData + 1.0);
          }
        }
        else if ((dVar11 != -0.5) || (NAN(dVar11))) {
          SVar12.fields._dateData = (System_DateTime_Fields)ceil(dVar9 + -0.5,pMVar8);
        }
        else if (((long)(double)SStack_60.fields._dateData & 1U) != 0) {
          SVar12.fields._dateData =
               (System_DateTime_Fields)(System_DateTime_Fields)((double)SStack_60.fields._dateData + -1.0);
        }
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
        UnityEngine_Texture2D___ctor_68efe30
                  (__this_03,(int)(double)SVar10.fields._dateData,(int)(double)SVar12.fields._dateData,3,false
                   ,(MethodInfo *)0x0);
        if (__this_03 != (UnityEngine_Texture2D_o *)0x0) {
          iVar5 = (*(__this_03->klass->vtable)._5_get_width.methodPtr)
                            (__this_03,(__this_03->klass->vtable)._5_get_width.method);
          iVar6 = (*(__this_03->klass->vtable)._7_get_height.methodPtr)
                            (__this_03,(__this_03->klass->vtable)._7_get_height.method);
          source.fields.m_Width = (float)iVar5;
          source.fields.m_Height = (float)iVar6;
          source.fields._0_8_ = uStack_48;
          UnityEngine_Texture2D__ReadPixels_68f0830(__this_03,source,0,0,(MethodInfo *)0x0);
          UnityEngine_Texture2D__Apply_68f05d0(__this_03,(MethodInfo *)0x0);
          if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
          }
          SStack_60 = System_DateTime__get_Now((MethodInfo *)0x0);
          pSVar7 = System_DateTime__ToString_5497760(&SStack_60,"Mdyyyy-Hms",(MethodInfo *)0x0);
          pSVar7 = System_String__Concat_52f0320(pSVar7,".png",(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
          }
          ApplicationManagers_SnapshotManager__SaveSnapshotFinish(__this_03,pSVar7,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)__this_03,(MethodInfo *)0x0);
          __this_04 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          }
          title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                            ("MainMenu.ToolsPopup.SnapshotViewerButton",(MethodInfo *)0x0);
          format = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                             ("MainMenu.SnapshotViewer.SavedToast",(MethodInfo *)0x0);
          pSVar7 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotPath;
          if (pSVar7 != (System_String_o *)0x0) {
            pSVar7 = System_String__Replace_5304550
                               (pSVar7,"\\","/",(MethodInfo *)0x0);
            pSVar7 = System_String__Format(format,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
            __this_05 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgToastDefinition);
            Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
                      (__this_05,4,"save",title,pSVar7,"viewer.snapshot.save",(MethodInfo *)0x0)
            ;
            if (__this_04 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(__this_04,__this_05,(MethodInfo *)0x0);
              goto label_05dacd18;
            }
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
label_05dacd18:
  return iVar1 == 0;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SnapshotViewerMenu__SaveCoroutine_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SnapshotViewerMenu__SaveCoroutine_d__12_o* __this, const MethodInfo* method);
// 0x5dacd40

Il2CppObject *
UI_SnapshotViewerMenu__SaveCoroutine_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_SnapshotViewerMenu__SaveCoroutine_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SnapshotViewerMenu__SaveCoroutine_d__12__System_Collections_IEnumerator_Reset (UI_SnapshotViewerMenu__SaveCoroutine_d__12_o* __this, const MethodInfo* method);
// 0x5dacd50

void UI_SnapshotViewerMenu__SaveCoroutine_d__12__System_Collections_IEnumerator_Reset
               (UI_SnapshotViewerMenu__SaveCoroutine_d__12_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_SnapshotViewerMenu_SaveCoroutine_d__12_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.SnapshotViewerMenu.<SaveCoroutine>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_SnapshotViewerMenu__SaveCoroutine_d__12__System_Collections_IEnumerator_get_Current (UI_SnapshotViewerMenu__SaveCoroutine_d__12_o* __this, const MethodInfo* method);
// 0x5dacd90

Il2CppObject *
UI_SnapshotViewerMenu__SaveCoroutine_d__12__System_Collections_IEnumerator_get_Current
          (UI_SnapshotViewerMenu__SaveCoroutine_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotViewerMenu$$get_Count
// il2cpp: int32_t UI_SnapshotViewerMenu__get_Count (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x5dabd40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dabd5d: cmp byte ptr [rip + 0x179c3b2], 0
// asm:   0x5dabd64: je 0x5dabdb2

int32_t UI_SnapshotViewerMenu__get_Count(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075480e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_075480e9 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  if (Il2CppMethodInitialized_07548116 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_07548116 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    return TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId;
  }
  return *(int32_t *)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager)->static_fields + 0x28);
}


// UI.SnapshotViewerMenu$$Setup
// il2cpp: void UI_SnapshotViewerMenu__Setup (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x5dabdf0

void UI_SnapshotViewerMenu__Setup(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  UI_SnapshotPopup_o **targetAddress;
  UI_KillScorePopup_o **targetAddress_00;
  UnityEngine_UI_Text_o **targetAddress_01;
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UI_SnapshotPopup_o *pUVar5;
  UI_KillScorePopup_o *pUVar6;
  UI_ElementStyle_o *__this_00;
  UnityEngine_UI_Text_o *pUVar7;
  
  if (Il2CppMethodInitialized_075480ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillScorePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_SnapshotPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_SnapshotPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SnapshotViewerMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ViewerMenu);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Snapshot/SnapshotPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480ea = '\x01';
  }
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                     (pUVar3,"Prefabs/Snapshot/SnapshotPopup",false,
                      (MethodInfo_34D7620 *)
                      MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_SnapshotPopup);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar4,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_SnapshotPopup);
    targetAddress = &(__this->fields)._snapshotPopup;
    (__this->fields)._snapshotPopup = pUVar5;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar5 = (__this->fields)._snapshotPopup;
    if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localScale
                  (pUVar3,(UnityEngine_Vector3_o)ZEXT812(0x3fc000003fc00000),(MethodInfo *)0x0);
        pUVar5 = *targetAddress;
        if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e72b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
            Il2CppMethodInitialized_0753e72b = '\x01';
          }
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localRotation
                      (pUVar3,(UnityEngine_Quaternion_o)
                              *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields
                       ,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            pUVar6 = UI_ElementFactory__CreateDefaultPopup_object_
                               (pUVar3,false,
                                (MethodInfo_34D7290 *)
                                MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillScorePopup);
            targetAddress_00 = &(__this->fields)._killScorePopup;
            (__this->fields)._killScorePopup = pUVar6;
            Il2CppCodeGenWriteBarrier(targetAddress_00);
            pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
            UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
            pUVar4 = UI_ElementFactory__CreateDefaultLabel
                               (pUVar3,__this_00,"",0,4,(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar4,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_Text);
              targetAddress_01 = &(__this->fields)._nameLabel;
              (__this->fields)._nameLabel = pUVar7;
              Il2CppCodeGenWriteBarrier(targetAddress_01);
              pUVar5 = (__this->fields)._snapshotPopup;
              if (pUVar5 != (UI_SnapshotPopup_o *)0x0) {
                pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                if ((TypeInfo_UI_ViewerMenu->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ViewerMenu);
                }
                UI_ElementFactory__SetAnchor
                          (pUVar4,4,4,
                           (UnityEngine_Vector2_o)
                           *(UnityEngine_Vector2_Fields *)TypeInfo_UI_ViewerMenu->static_fields,
                           (MethodInfo *)0x0);
                pUVar6 = *targetAddress_00;
                if (pUVar6 != (UI_KillScorePopup_o *)0x0) {
                  pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                  UVar1 = (TypeInfo_UI_ViewerMenu->static_fields->ContentCenter).fields;
                  if ((TypeInfo_UI_SnapshotViewerMenu->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_SnapshotViewerMenu);
                  }
                  UVar2 = (TypeInfo_UI_SnapshotViewerMenu->static_fields->KillScoreOffset).fields;
                  offset.fields.y = UVar1.y + UVar2.y;
                  offset.fields.x = UVar1.x + UVar2.x;
                  UI_ElementFactory__SetAnchor(pUVar4,4,4,offset,(MethodInfo *)0x0);
                  pUVar7 = *targetAddress_01;
                  if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
                    pUVar4 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                    UVar1 = (TypeInfo_UI_ViewerMenu->static_fields->ContentCenter).fields;
                    UVar2 = (TypeInfo_UI_SnapshotViewerMenu->static_fields->NameOffset).fields;
                    offset_00.fields.y = UVar2.y + UVar1.y;
                    offset_00.fields.x = UVar2.x + UVar1.x;
                    UI_ElementFactory__SetAnchor(pUVar4,4,4,offset_00,(MethodInfo *)0x0);
                    UI_ViewerMenu__ShowCurrent((UI_ViewerMenu_o *)__this,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// UI.SnapshotViewerMenu$$Save
// il2cpp: void UI_SnapshotViewerMenu__Save (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x5dac180

void UI_SnapshotViewerMenu__Save(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UI_SnapshotViewerMenu__SaveCoroutine_d__12_o *__this_00;
  
  iVar1 = (*(__this->klass->vtable)._8_get_Count.methodPtr)
                    (__this,(__this->klass->vtable)._8_get_Count.method);
  if (iVar1 < 1) {
    return;
  }
  if (Il2CppMethodInitialized_075480eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SnapshotViewerMenu_SaveCoroutine_d__12);
    Il2CppMethodInitialized_075480eb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SnapshotViewerMenu_SaveCoroutine_d__12);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMenu$$SaveCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_SnapshotViewerMenu__SaveCoroutine (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x5dac210

System_Collections_IEnumerator_o *
UI_SnapshotViewerMenu__SaveCoroutine(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  UI_SnapshotViewerMenu__SaveCoroutine_d__12_o *__this_00;
  
  if (Il2CppMethodInitialized_075480eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SnapshotViewerMenu_SaveCoroutine_d__12);
    Il2CppMethodInitialized_075480eb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SnapshotViewerMenu_SaveCoroutine_d__12);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.SnapshotViewerMenu$$Load
// il2cpp: void UI_SnapshotViewerMenu__Load (UI_SnapshotViewerMenu_o* __this, int32_t index, const MethodInfo* method);
// 0x5dac2a0

void UI_SnapshotViewerMenu__Load(UI_SnapshotViewerMenu_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UI_SnapshotPopup_o *pUVar2;
  UI_KillScorePopup_o *pUVar3;
  Settings_ProfileSettings_o *pSVar4;
  Settings_NameSetting_o *pSVar5;
  UnityEngine_Texture2D_o *pUVar6;
  bool bVar7;
  int32_t iVar8;
  UnityEngine_Texture2D_o *pUVar9;
  System_String_o *str2;
  System_String_o *pSVar10;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Texture2D_o **targetAddress;
  System_DateTime_o SStack_30;
  
  if (Il2CppMethodInitialized_075480ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075480ec = '\x01';
  }
  pUVar1 = (__this->fields)._nameLabel;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,"",(pUVar1->klass->vtable)._75_set_text.method);
    iVar8 = (*(__this->klass->vtable)._8_get_Count.methodPtr)
                      (__this,(__this->klass->vtable)._8_get_Count.method);
    if (index < iVar8) {
      if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
      }
      pUVar9 = ApplicationManagers_SnapshotManager__GetSnapshot(index,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._snapshotPopup;
      if (pUVar2 != (UI_SnapshotPopup_o *)0x0) {
        (*(pUVar2->klass->vtable)._62_Load.methodPtr)(pUVar2,pUVar9,(pUVar2->klass->vtable)._62_Load.method);
        pUVar2 = (__this->fields)._snapshotPopup;
        if (pUVar2 != (UI_SnapshotPopup_o *)0x0) {
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar2,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._killScorePopup;
          iVar8 = ApplicationManagers_SnapshotManager__GetDamage(index,(MethodInfo *)0x0);
          if (pUVar3 != (UI_KillScorePopup_o *)0x0) {
            if (iVar8 < 1) {
              iVar8 = 0;
            }
            UI_KillScorePopup__ShowSnapshotViewer(pUVar3,iVar8,(MethodInfo *)0x0);
            pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
            if ((pSVar4 != (Settings_ProfileSettings_o *)0x0) &&
               (pSVar5 = (pSVar4->fields).Name, pSVar5 != (Settings_NameSetting_o *)0x0)) {
              pUVar1 = (__this->fields)._nameLabel;
              pSVar10 = (pSVar5->fields)._value;
              if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
              }
              SStack_30 = System_DateTime__get_Today((MethodInfo *)0x0);
              str2 = System_DateTime__ToShortDateString(&SStack_30,(MethodInfo *)0x0);
              pSVar10 = System_String__Concat_5301f10(pSVar10," ",str2,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                          (pUVar1,pSVar10,(pUVar1->klass->vtable)._75_set_text.method);
                pUVar1 = (__this->fields)._nameLabel;
                if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                  __this_00 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
                    pUVar6 = (__this->fields)._currentSnapshot;
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    targetAddress = &(__this->fields)._currentSnapshot;
                    bVar7 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar7) {
                      pUVar6 = *targetAddress;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
                    }
                    *targetAddress = pUVar9;
                    Il2CppCodeGenWriteBarrier(targetAddress);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
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
  ThrowNullReferenceException();
}


// UI.SnapshotViewerMenu$$OnDestroy
// il2cpp: void UI_SnapshotViewerMenu__OnDestroy (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x5dac570

void UI_SnapshotViewerMenu__OnDestroy(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075480ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075480ed = '\x01';
  }
  pUVar1 = (__this->fields)._currentSnapshot;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._currentSnapshot;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.SnapshotViewerMenu$$.ctor
// il2cpp: void UI_SnapshotViewerMenu___ctor (UI_SnapshotViewerMenu_o* __this, const MethodInfo* method);
// 0x5dac5f0

void UI_SnapshotViewerMenu___ctor(UI_SnapshotViewerMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_array *pUVar1;
  
  if (Il2CppMethodInitialized_075480ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ViewerMenu);
    Il2CppMethodInitialized_075480ee = '\x01';
  }
  pUVar1 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
  (__this->fields)._captureCorners = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._captureCorners);
  if ((TypeInfo_UI_ViewerMenu->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ViewerMenu);
    UI_ViewerMenu___ctor((UI_ViewerMenu_o *)__this,(MethodInfo *)0x0);
    return;
  }
  UI_ViewerMenu___ctor((UI_ViewerMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SnapshotViewerMenu$$.cctor
// il2cpp: void UI_SnapshotViewerMenu___cctor (const MethodInfo* method);
// 0x5dac680

void UI_SnapshotViewerMenu___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_075480ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SnapshotViewerMenu);
    Il2CppMethodInitialized_075480ef = '\x01';
  }
  (TypeInfo_UI_SnapshotViewerMenu->static_fields->KillScoreOffset).fields =
       (UnityEngine_Vector2_Fields)0x437a000043e60000;
  (TypeInfo_UI_SnapshotViewerMenu->static_fields->NameOffset).fields =
       (UnityEngine_Vector2_Fields)0xc389800000000000;
  return;
}


