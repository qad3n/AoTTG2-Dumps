// Type: UI.BaseMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/BaseMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BaseMenu.cs
// --------------------------------

// UI.BaseMenu.<WaitAndApplyScale>d__17$$.ctor
// il2cpp: void UI_BaseMenu__WaitAndApplyScale_d__17___ctor (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4324320

void UI_BaseMenu__WaitAndApplyScale_d__17___ctor
               (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.IDisposable.Dispose
// il2cpp: void UI_BaseMenu__WaitAndApplyScale_d__17__System_IDisposable_Dispose (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x43250e0

void UI_BaseMenu__WaitAndApplyScale_d__17__System_IDisposable_Dispose
               (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  return;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$MoveNext
// il2cpp: bool UI_BaseMenu__WaitAndApplyScale_d__17__MoveNext (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x43250f0

bool_conflict
UI_BaseMenu__WaitAndApplyScale_d__17__MoveNext
          (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_Vector2_o value;
  uint uVar3;
  UnityEngine_UI_CanvasScaler_o *__this_00;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *__this_01;
  System_Object_array *pSVar5;
  uint uVar6;
  bool_conflict bVar7;
  UI_BaseMenu_o *pUVar8;
  UI_BaseMenu_o *__this_02;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  
  pUVar8 = (UI_BaseMenu_o *)__this;
  if (g_data_057ae016 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasScaler_GetComponent_CanvasScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseScaler_GetComponentsInChildren_BaseScaler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUVar8 = (UI_BaseMenu_o *)&TypeInfo_WaitForEndOfFrame;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae016 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_02 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if ((__this_02 == (UI_BaseMenu_o *)0x0) ||
       (pUVar8 = __this_02,
       __this_01 = (UnityEngine_Transform_o *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_02,MethodInfo_RectTransform_GetComponent_RectTransform),
       __this_01 == (UnityEngine_Transform_o *)0x0)) {
label_04325356:
      il2cpp_runtime_helper_022b2c90();
      __this_02 = pUVar8;
label_0432535b:
      il2cpp_runtime_helper_022b2ca0();
      return (bool_conflict)(__this_02->fields).m_CancellationTokenSource;
    }
    UVar10 = UnityEngine_Transform__get_localScale(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(UVar10.fields.x,UVar10.fields.z);
    }
    *(float *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x38) = UVar10.fields.x;
    pSVar5 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this_02,1,MethodInfo_BaseScaler_GetComponentsInChildren_BaseScaler);
    pUVar8 = __this_02;
    if (pSVar5 == (System_Object_array *)0x0) goto label_04325356;
    uVar3 = (uint)pSVar5->max_length;
    uVar6 = 0;
    if ((int)uVar3 < 1) {
      return 0;
    }
    do {
      if (uVar3 <= uVar6) goto label_0432535b;
      __this_02 = (UI_BaseMenu_o *)pSVar5->m_Items[(int)uVar6];
      pUVar8 = __this_02;
      if (__this_02 == (UI_BaseMenu_o *)0x0) goto label_04325356;
      (*(((UI_BaseMenu__WaitAndApplyScale_d__17_c *)__this_02->klass)->vtable)._5_System_IDisposable_Dispose.
        methodPtr)(__this_02,
                   (((UI_BaseMenu__WaitAndApplyScale_d__17_c *)__this_02->klass)->vtable).
                   _5_System_IDisposable_Dispose.method);
      uVar6 = uVar6 + 1;
      uVar3 = (uint)pSVar5->max_length;
    } while ((int)uVar6 < (int)uVar3);
label_0432530c:
    bVar7 = 0;
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
      (__this->fields).__1__state = 2;
    }
    else {
      if (iVar1 != 0) goto label_0432530c;
      (__this->fields).__1__state = -1;
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x40), lVar2 == 0)) goto label_04325356;
      fVar9 = 1.0;
      if (4 < (__this->fields).sceneName - 3U) {
        fVar9 = 1.0 / *(float *)(lVar2 + 0x14);
      }
      if ((__this_02 == (UI_BaseMenu_o *)0x0) ||
         (__this_00 = (UnityEngine_UI_CanvasScaler_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_02,MethodInfo_CanvasScaler_GetComponent_CanvasScaler), pUVar8 = __this_02,
         __this_00 == (UnityEngine_UI_CanvasScaler_o *)0x0)) goto label_04325356;
      value.fields.y = fVar9 * 1080.0;
      value.fields.x = fVar9 * 1920.0;
      UnityEngine_UI_CanvasScaler__set_referenceResolution(__this_00,value,(MethodInfo *)0x0);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
      (__this->fields).__1__state = 1;
    }
    bVar7 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  return bVar7;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x4325360

Il2CppObject *
UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_Reset (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x4325370

void UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_Reset
               (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

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


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_get_Current (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x43253b0

Il2CppObject *
UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_get_Current
          (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BaseMenu$$Setup
// il2cpp: void UI_BaseMenu__Setup (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x4324200

void UI_BaseMenu__Setup(UI_BaseMenu_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  
  vtableDispatch = (__this->klass->vtable)._5_SetupPopups.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._5_SetupPopups.method,in_RDX,vtableDispatch);
  return;
}


// UI.BaseMenu$$ApplyScale
// il2cpp: void UI_BaseMenu__ApplyScale (UI_BaseMenu_o* __this, int32_t sceneName, const MethodInfo* method);
// 0x4324220

void UI_BaseMenu__ApplyScale(UI_BaseMenu_o *__this,int32_t sceneName,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *__this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppObject *pIVar4;
  
  if (g_data_057ae012 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndApplyScale_d__17);
    g_data_057ae012 = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndApplyScale_d__17);
  uVar2 = 0;
  pIVar4 = pIVar1;
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar1[1].klass = 0;
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&pIVar1[2].monitor,__this);
    *(int32_t *)&pIVar1[2].klass = sceneName;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar1,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae012 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndApplyScale_d__17);
    g_data_057ae012 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndApplyScale_d__17);
  uVar3 = 0;
  pIVar1 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = pIVar4;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pIVar4);
    *(undefined4 *)&__this_00[2].klass = uVar2;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar1[1].klass = uVar3;
  return;
}


// UI.BaseMenu$$WaitAndApplyScale
// il2cpp: System_Collections_IEnumerator_o* UI_BaseMenu__WaitAndApplyScale (UI_BaseMenu_o* __this, int32_t sceneName, const MethodInfo* method);
// 0x43242a0

System_Collections_IEnumerator_o *
UI_BaseMenu__WaitAndApplyScale(UI_BaseMenu_o *__this,int32_t sceneName,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae012 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndApplyScale_d__17);
    g_data_057ae012 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndApplyScale_d__17);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    *(int32_t *)&__this_00[2].klass = sceneName;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.BaseMenu$$SetupPopups
// il2cpp: void UI_BaseMenu__SetupPopups (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x4324340

void UI_BaseMenu__SetupPopups(UI_BaseMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  UI_BaseMenu_o *__this_05;
  UnityEngine_GameObject_o *pUVar6;
  UI_TooltipPopup_o *pUVar7;
  UnityEngine_Component_o *pUVar8;
  UI_MessagePopup_o *pUVar9;
  UI_ConfirmPopup_o *pUVar10;
  UI_ExternalLinkPopup_o *pUVar11;
  UI_ColorPickPopup_o *pUVar12;
  UI_Vector3Popup_o *pUVar13;
  UI_ExportPopup_o *pUVar14;
  UI_ImportPopup_o *pUVar15;
  UI_NewImportPopup_o *pUVar16;
  UI_KeybindPopup_o *pUVar17;
  UI_SetNamePopup_o *pUVar18;
  UI_SelectListPopup_o *pUVar19;
  UI_IconPickPopup_o *pUVar20;
  UI_RoleSpritePickPopup_o *pUVar21;
  UnityEngine_Object_o *x;
  long *plVar22;
  undefined1 auVar23 [12];
  System_Collections_Generic_List_T__o *pSVar24;
  Il2CppMethodPointer pIVar25;
  Il2CppObject *pIVar26;
  
  if (g_data_057ae013 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgExternalLinkDialogHost_GetComponent_AottgExternalLi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ColorPickPopup_GetComponent_ColorPickPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ConfirmPopup_GetComponent_ConfirmPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ExportPopup_GetComponent_ExportPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ExternalLinkPopup_GetComponent_ExternalLinkPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IconPickPopup_GetComponent_IconPickPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ImportPopup_GetComponent_ImportPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeybindPopup_GetComponent_KeybindPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MessagePopup_GetComponent_MessagePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_NewImportPopup_GetComponent_NewImportPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoleSpritePickPopup_GetComponent_RoleSpritePickPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SelectListPopup_GetComponent_SelectListPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetNamePopup_GetComponent_SetNamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3Popup_GetComponent_Vector3Popup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ColorPickPopup_CreateDefaultPopup_ColorPickPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ConfirmPopup_CreateDefaultPopup_ConfirmPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ExportPopup_CreateDefaultPopup_ExportPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ExternalLinkPopup_CreateDefaultPopup_ExternalLinkPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IconPickPopup_CreateDefaultPopup_IconPickPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ImportPopup_CreateDefaultPopup_ImportPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeybindPopup_CreateDefaultPopup_KeybindPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MessagePopup_CreateDefaultPopup_MessagePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_NewImportPopup_CreateDefaultPopup_NewImportPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoleSpritePickPopup_CreateDefaultPopup_RoleSpritePickPop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SelectListPopup_CreateDefaultPopup_SelectListPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetNamePopup_CreateDefaultPopup_SetNamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3Popup_CreateDefaultPopup_Vector3Popup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_CreateTooltipPopup_TooltipPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgExternalLinkDialogHost_AddComponent_AottgExternalLi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TooltipPopup_GetComponent_TooltipPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae013 = '\x01';
  }
  __this_05 = (UI_BaseMenu_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UI_ElementFactory__CreateTooltipPopup_object_((UnityEngine_Transform_o *)__this_05,0,MethodInfo_GameObject_CreateTooltipPopup_TooltipPopup);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UI_TooltipPopup_o *)UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_TooltipPopup_GetComponent_TooltipPopup);
    (__this->fields).TooltipPopup = pUVar7;
    il2cpp_runtime_helper_022b4080(&(__this->fields).TooltipPopup);
    __this_05 = (UI_BaseMenu_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateDefaultPopup_object_
                       ((UnityEngine_Transform_o *)__this_05,0,MethodInfo_MessagePopup_CreateDefaultPopup_MessagePopup);
    if (pUVar8 != (UnityEngine_Component_o *)0x0) {
      pUVar9 = (UI_MessagePopup_o *)UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_MessagePopup_GetComponent_MessagePopup);
      (__this->fields).MessagePopup = pUVar9;
      il2cpp_runtime_helper_022b4080(&(__this->fields).MessagePopup);
      __this_05 = (UI_BaseMenu_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar8 = (UnityEngine_Component_o *)
               UI_ElementFactory__CreateDefaultPopup_object_
                         ((UnityEngine_Transform_o *)__this_05,0,MethodInfo_ConfirmPopup_CreateDefaultPopup_ConfirmPopup);
      if (pUVar8 != (UnityEngine_Component_o *)0x0) {
        pUVar10 = (UI_ConfirmPopup_o *)UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_ConfirmPopup_GetComponent_ConfirmPopup);
        (__this->fields).ConfirmPopup = pUVar10;
        il2cpp_runtime_helper_022b4080(&(__this->fields).ConfirmPopup);
        __this_05 = (UI_BaseMenu_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar8 = (UnityEngine_Component_o *)
                 UI_ElementFactory__CreateDefaultPopup_object_
                           ((UnityEngine_Transform_o *)__this_05,0,MethodInfo_ExternalLinkPopup_CreateDefaultPopup_ExternalLinkPopup);
        if (pUVar8 != (UnityEngine_Component_o *)0x0) {
          pUVar11 = (UI_ExternalLinkPopup_o *)UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_ExternalLinkPopup_GetComponent_ExternalLinkPopup)
          ;
          (__this->fields).ExternalLinkPopup = pUVar11;
          il2cpp_runtime_helper_022b4080(&(__this->fields).ExternalLinkPopup);
          __this_05 = (UI_BaseMenu_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar8 = (UnityEngine_Component_o *)
                   UI_ElementFactory__CreateDefaultPopup_object_
                             ((UnityEngine_Transform_o *)__this_05,0,MethodInfo_ColorPickPopup_CreateDefaultPopup_ColorPickPopup);
          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
            pUVar12 = (UI_ColorPickPopup_o *)UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_ColorPickPopup_GetComponent_ColorPickPopup);
            (__this->fields).ColorPickPopup = pUVar12;
            il2cpp_runtime_helper_022b4080(&(__this->fields).ColorPickPopup);
            __this_05 = (UI_BaseMenu_o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pUVar8 = (UnityEngine_Component_o *)
                     UI_ElementFactory__CreateDefaultPopup_object_
                               ((UnityEngine_Transform_o *)__this_05,0,MethodInfo_Vector3Popup_CreateDefaultPopup_Vector3Popup);
            if (pUVar8 != (UnityEngine_Component_o *)0x0) {
              pUVar13 = (UI_Vector3Popup_o *)UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_Vector3Popup_GetComponent_Vector3Popup);
              (__this->fields).Vector3Popup = pUVar13;
              il2cpp_runtime_helper_022b4080(&(__this->fields).Vector3Popup);
              __this_05 = (UI_BaseMenu_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pUVar8 = (UnityEngine_Component_o *)
                       UI_ElementFactory__CreateDefaultPopup_object_
                                 ((UnityEngine_Transform_o *)__this_05,0,MethodInfo_ExportPopup_CreateDefaultPopup_ExportPopup);
              if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                pUVar14 = (UI_ExportPopup_o *)UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_ExportPopup_GetComponent_ExportPopup)
                ;
                (__this->fields).ExportPopup = pUVar14;
                il2cpp_runtime_helper_022b4080(&(__this->fields).ExportPopup);
                __this_05 = (UI_BaseMenu_o *)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                pUVar8 = (UnityEngine_Component_o *)
                         UI_ElementFactory__CreateDefaultPopup_object_
                                   ((UnityEngine_Transform_o *)__this_05,0,MethodInfo_ImportPopup_CreateDefaultPopup_ImportPopup);
                if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                  pUVar15 = (UI_ImportPopup_o *)
                            UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_ImportPopup_GetComponent_ImportPopup);
                  (__this->fields).ImportPopup = pUVar15;
                  il2cpp_runtime_helper_022b4080(&(__this->fields).ImportPopup);
                  __this_05 = (UI_BaseMenu_o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar8 = (UnityEngine_Component_o *)
                           UI_ElementFactory__CreateDefaultPopup_object_
                                     ((UnityEngine_Transform_o *)__this_05,0,MethodInfo_NewImportPopup_CreateDefaultPopup_NewImportPopup);
                  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                    pUVar16 = (UI_NewImportPopup_o *)
                              UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_NewImportPopup_GetComponent_NewImportPopup);
                    (__this->fields).NewImportPopup = pUVar16;
                    il2cpp_runtime_helper_022b4080(&(__this->fields).NewImportPopup);
                    __this_05 = (UI_BaseMenu_o *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar8 = (UnityEngine_Component_o *)
                             UI_ElementFactory__CreateDefaultPopup_object_
                                       ((UnityEngine_Transform_o *)__this_05,0,MethodInfo_KeybindPopup_CreateDefaultPopup_KeybindPopup);
                    if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                      pUVar17 = (UI_KeybindPopup_o *)
                                UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_KeybindPopup_GetComponent_KeybindPopup);
                      (__this->fields).KeybindPopup = pUVar17;
                      il2cpp_runtime_helper_022b4080(&(__this->fields).KeybindPopup);
                      __this_05 = (UI_BaseMenu_o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      pUVar8 = (UnityEngine_Component_o *)
                               UI_ElementFactory__CreateDefaultPopup_object_
                                         ((UnityEngine_Transform_o *)__this_05,0,MethodInfo_SetNamePopup_CreateDefaultPopup_SetNamePopup);
                      if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                        pUVar18 = (UI_SetNamePopup_o *)
                                  UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_SetNamePopup_GetComponent_SetNamePopup);
                        (__this->fields).SetNamePopup = pUVar18;
                        il2cpp_runtime_helper_022b4080(&(__this->fields).SetNamePopup);
                        __this_05 = (UI_BaseMenu_o *)
                                    UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        pUVar8 = (UnityEngine_Component_o *)
                                 UI_ElementFactory__CreateDefaultPopup_object_
                                           ((UnityEngine_Transform_o *)__this_05,0,MethodInfo_SelectListPopup_CreateDefaultPopup_SelectListPopup);
                        if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                          pUVar19 = (UI_SelectListPopup_o *)
                                    UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_SelectListPopup_GetComponent_SelectListPopup);
                          (__this->fields).SelectListPopup = pUVar19;
                          il2cpp_runtime_helper_022b4080(&(__this->fields).SelectListPopup);
                          __this_05 = (UI_BaseMenu_o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                          pUVar8 = (UnityEngine_Component_o *)
                                   UI_ElementFactory__CreateDefaultPopup_object_
                                             ((UnityEngine_Transform_o *)__this_05,0,MethodInfo_IconPickPopup_CreateDefaultPopup_IconPickPopup);
                          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                            pUVar20 = (UI_IconPickPopup_o *)
                                      UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_IconPickPopup_GetComponent_IconPickPopup);
                            (__this->fields).IconPickPopup = pUVar20;
                            il2cpp_runtime_helper_022b4080(&(__this->fields).IconPickPopup);
                            __this_05 = (UI_BaseMenu_o *)
                                        UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                            pUVar8 = (UnityEngine_Component_o *)
                                     UI_ElementFactory__CreateDefaultPopup_object_
                                               ((UnityEngine_Transform_o *)__this_05,0,MethodInfo_RoleSpritePickPopup_CreateDefaultPopup_RoleSpritePickPop);
                            if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                              pUVar21 = (UI_RoleSpritePickPopup_o *)
                                        UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_RoleSpritePickPopup_GetComponent_RoleSpritePickPopup);
                              (__this->fields).RoleSpritePickPopup = pUVar21;
                              il2cpp_runtime_helper_022b4080(&(__this->fields).RoleSpritePickPopup,pUVar21);
                              x = (UnityEngine_Object_o *)
                                  UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)__this,MethodInfo_AottgExternalLinkDialogHost_GetComponent_AottgExternalLi);
                              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              bVar5 = UnityEngine_Object__op_Equality
                                                (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                              if ((char)bVar5 != '\0') {
                                __this_05 = __this;
                                pUVar6 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_04324f02;
                                UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_AottgExternalLinkDialogHost_AddComponent_AottgExternalLi);
                              }
                              lVar4 = MethodInfo_Void_Add;
                              __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                              if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                pUVar7 = (__this->fields).TooltipPopup;
                                piVar1 = (int32_t *)((long)&(__this_05->fields).m_CancellationTokenSource + 4)
                                ;
                                *piVar1 = *piVar1 + 1;
                                pSVar3 = (System_Object_array *)(__this_05->fields).m_CachedPtr;
                                if (pSVar3 != (System_Object_array *)0x0) {
                                  uVar2 = *(uint *)&(__this_05->fields).m_CancellationTokenSource;
                                  if (uVar2 < (uint)pSVar3->max_length) {
                                    *(uint *)&(__this_05->fields).m_CancellationTokenSource = uVar2 + 1;
                                    pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pUVar7;
                                    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                    __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                    lVar4 = MethodInfo_Void_Add;
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize
                                              ((System_Collections_Generic_List_object__o *)__this_05,
                                               (Il2CppObject *)pUVar7,
                                               *(MethodInfo_362C220 **)
                                                (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                    __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                    lVar4 = MethodInfo_Void_Add;
                                  }
                                  MethodInfo_Void_Add = lVar4;
                                  if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                    pUVar9 = (__this->fields).MessagePopup;
                                    piVar1 = (int32_t *)
                                             ((long)&(__this_05->fields).m_CancellationTokenSource + 4);
                                    *piVar1 = *piVar1 + 1;
                                    pSVar3 = (System_Object_array *)(__this_05->fields).m_CachedPtr;
                                    if (pSVar3 != (System_Object_array *)0x0) {
                                      uVar2 = *(uint *)&(__this_05->fields).m_CancellationTokenSource;
                                      if (uVar2 < (uint)pSVar3->max_length) {
                                        *(uint *)&(__this_05->fields).m_CancellationTokenSource = uVar2 + 1;
                                        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pUVar9;
                                        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                        __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                        lVar4 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)__this_05,
                                                   (Il2CppObject *)pUVar9,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                        __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                        lVar4 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar4;
                                      if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                        pUVar10 = (__this->fields).ConfirmPopup;
                                        piVar1 = (int32_t *)
                                                 ((long)&(__this_05->fields).m_CancellationTokenSource + 4);
                                        *piVar1 = *piVar1 + 1;
                                        pSVar3 = (System_Object_array *)(__this_05->fields).m_CachedPtr;
                                        if (pSVar3 != (System_Object_array *)0x0) {
                                          uVar2 = *(uint *)&(__this_05->fields).m_CancellationTokenSource;
                                          if (uVar2 < (uint)pSVar3->max_length) {
                                            *(uint *)&(__this_05->fields).m_CancellationTokenSource =
                                                 uVar2 + 1;
                                            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pUVar10;
                                            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                            __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                            lVar4 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)__this_05,
                                                       (Il2CppObject *)pUVar10,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                            __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                            lVar4 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar4;
                                          if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                            pUVar11 = (__this->fields).ExternalLinkPopup;
                                            piVar1 = (int32_t *)
                                                     ((long)&(__this_05->fields).m_CancellationTokenSource + 4
                                                     );
                                            *piVar1 = *piVar1 + 1;
                                            pSVar3 = (System_Object_array *)(__this_05->fields).m_CachedPtr;
                                            if (pSVar3 != (System_Object_array *)0x0) {
                                              uVar2 = *(uint *)&(__this_05->fields).m_CancellationTokenSource;
                                              if (uVar2 < (uint)pSVar3->max_length) {
                                                *(uint *)&(__this_05->fields).m_CancellationTokenSource =
                                                     uVar2 + 1;
                                                pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pUVar11;
                                                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                                __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                                lVar4 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          ((System_Collections_Generic_List_object__o *)
                                                           __this_05,(Il2CppObject *)pUVar11,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                                                          );
                                                __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                                lVar4 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar4;
                                              if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                                pUVar12 = (__this->fields).ColorPickPopup;
                                                piVar1 = (int32_t *)
                                                         ((long)&(__this_05->fields).m_CancellationTokenSource
                                                         + 4);
                                                *piVar1 = *piVar1 + 1;
                                                pSVar3 = (System_Object_array *)
                                                         (__this_05->fields).m_CachedPtr;
                                                if (pSVar3 != (System_Object_array *)0x0) {
                                                  uVar2 = *(uint *)&(__this_05->fields).
                                                                    m_CancellationTokenSource;
                                                  if (uVar2 < (uint)pSVar3->max_length) {
                                                    *(uint *)&(__this_05->fields).m_CancellationTokenSource =
                                                         uVar2 + 1;
                                                    pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pUVar12;
                                                    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                                    __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                                    lVar4 = MethodInfo_Void_Add;
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              ((System_Collections_Generic_List_object__o *)
                                                               __this_05,(Il2CppObject *)pUVar12,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) +
                                                                0x70));
                                                    __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                                    lVar4 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar4;
                                                  if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                                    pUVar13 = (__this->fields).Vector3Popup;
                                                    piVar1 = (int32_t *)
                                                             ((long)&(__this_05->fields).
                                                                     m_CancellationTokenSource + 4);
                                                    *piVar1 = *piVar1 + 1;
                                                    pSVar3 = (System_Object_array *)
                                                             (__this_05->fields).m_CachedPtr;
                                                    if (pSVar3 != (System_Object_array *)0x0) {
                                                      uVar2 = *(uint *)&(__this_05->fields).
                                                                        m_CancellationTokenSource;
                                                      if (uVar2 < (uint)pSVar3->max_length) {
                                                        *(uint *)&(__this_05->fields).
                                                                  m_CancellationTokenSource = uVar2 + 1;
                                                        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pUVar13;
                                                        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                                        __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                                        lVar4 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  ((System_Collections_Generic_List_object__o
                                                                    *)__this_05,(Il2CppObject *)pUVar13,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                    + 0x70));
                                                        __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                                        lVar4 = MethodInfo_Void_Add;
                                                      }
                                                      MethodInfo_Void_Add = lVar4;
                                                      if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                                        pUVar14 = (__this->fields).ExportPopup;
                                                        piVar1 = (int32_t *)
                                                                 ((long)&(__this_05->fields).
                                                                         m_CancellationTokenSource + 4);
                                                        *piVar1 = *piVar1 + 1;
                                                        pSVar3 = (System_Object_array *)
                                                                 (__this_05->fields).m_CachedPtr;
                                                        if (pSVar3 != (System_Object_array *)0x0) {
                                                          uVar2 = *(uint *)&(__this_05->fields).
                                                                            m_CancellationTokenSource;
                                                          if (uVar2 < (uint)pSVar3->max_length) {
                                                            *(uint *)&(__this_05->fields).
                                                                      m_CancellationTokenSource = uVar2 + 1;
                                                            pSVar3->m_Items[(int)uVar2] =
                                                                 (Il2CppObject *)pUVar14;
                                                            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                                            __this_05 = (UI_BaseMenu_o *)
                                                                        (__this->fields)._popups;
                                                            lVar4 = MethodInfo_Void_Add;
                                                          }
                                                          else {
                                                                                                                        
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_05,(Il2CppObject *)pUVar14,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                                         pUVar15 = (__this->fields).ImportPopup;
                                                         piVar1 = (int32_t *)
                                                                  ((long)&(__this_05->fields).
                                                                          m_CancellationTokenSource + 4);
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar3 = (System_Object_array *)
                                                                  (__this_05->fields).m_CachedPtr;
                                                         if (pSVar3 != (System_Object_array *)0x0) {
                                                           uVar2 = *(uint *)&(__this_05->fields).
                                                                             m_CancellationTokenSource;
                                                           if (uVar2 < (uint)pSVar3->max_length) {
                                                             *(uint *)&(__this_05->fields).
                                                                       m_CancellationTokenSource = uVar2 + 1;
                                                             pSVar3->m_Items[(int)uVar2] =
                                                                  (Il2CppObject *)pUVar15;
                                                             il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                                             __this_05 = (UI_BaseMenu_o *)
                                                                         (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_05,(Il2CppObject *)pUVar15,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                                         pUVar16 = (__this->fields).NewImportPopup;
                                                         piVar1 = (int32_t *)
                                                                  ((long)&(__this_05->fields).
                                                                          m_CancellationTokenSource + 4);
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar3 = (System_Object_array *)
                                                                  (__this_05->fields).m_CachedPtr;
                                                         if (pSVar3 != (System_Object_array *)0x0) {
                                                           uVar2 = *(uint *)&(__this_05->fields).
                                                                             m_CancellationTokenSource;
                                                           if (uVar2 < (uint)pSVar3->max_length) {
                                                             *(uint *)&(__this_05->fields).
                                                                       m_CancellationTokenSource = uVar2 + 1;
                                                             pSVar3->m_Items[(int)uVar2] =
                                                                  (Il2CppObject *)pUVar16;
                                                             il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                                             __this_05 = (UI_BaseMenu_o *)
                                                                         (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_05,(Il2CppObject *)pUVar16,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                                         pUVar17 = (__this->fields).KeybindPopup;
                                                         piVar1 = (int32_t *)
                                                                  ((long)&(__this_05->fields).
                                                                          m_CancellationTokenSource + 4);
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar3 = (System_Object_array *)
                                                                  (__this_05->fields).m_CachedPtr;
                                                         if (pSVar3 != (System_Object_array *)0x0) {
                                                           uVar2 = *(uint *)&(__this_05->fields).
                                                                             m_CancellationTokenSource;
                                                           if (uVar2 < (uint)pSVar3->max_length) {
                                                             *(uint *)&(__this_05->fields).
                                                                       m_CancellationTokenSource = uVar2 + 1;
                                                             pSVar3->m_Items[(int)uVar2] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                                             __this_05 = (UI_BaseMenu_o *)
                                                                         (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_05,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                                         pUVar18 = (__this->fields).SetNamePopup;
                                                         piVar1 = (int32_t *)
                                                                  ((long)&(__this_05->fields).
                                                                          m_CancellationTokenSource + 4);
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar3 = (System_Object_array *)
                                                                  (__this_05->fields).m_CachedPtr;
                                                         if (pSVar3 != (System_Object_array *)0x0) {
                                                           uVar2 = *(uint *)&(__this_05->fields).
                                                                             m_CancellationTokenSource;
                                                           if (uVar2 < (uint)pSVar3->max_length) {
                                                             *(uint *)&(__this_05->fields).
                                                                       m_CancellationTokenSource = uVar2 + 1;
                                                             pSVar3->m_Items[(int)uVar2] =
                                                                  (Il2CppObject *)pUVar18;
                                                             il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                                             __this_05 = (UI_BaseMenu_o *)
                                                                         (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_05,(Il2CppObject *)pUVar18,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                                         pUVar19 = (__this->fields).SelectListPopup;
                                                         piVar1 = (int32_t *)
                                                                  ((long)&(__this_05->fields).
                                                                          m_CancellationTokenSource + 4);
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar3 = (System_Object_array *)
                                                                  (__this_05->fields).m_CachedPtr;
                                                         if (pSVar3 != (System_Object_array *)0x0) {
                                                           uVar2 = *(uint *)&(__this_05->fields).
                                                                             m_CancellationTokenSource;
                                                           if (uVar2 < (uint)pSVar3->max_length) {
                                                             *(uint *)&(__this_05->fields).
                                                                       m_CancellationTokenSource = uVar2 + 1;
                                                             pSVar3->m_Items[(int)uVar2] =
                                                                  (Il2CppObject *)pUVar19;
                                                             il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                                             __this_05 = (UI_BaseMenu_o *)
                                                                         (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_05,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                                         pUVar20 = (__this->fields).IconPickPopup;
                                                         piVar1 = (int32_t *)
                                                                  ((long)&(__this_05->fields).
                                                                          m_CancellationTokenSource + 4);
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar3 = (System_Object_array *)
                                                                  (__this_05->fields).m_CachedPtr;
                                                         if (pSVar3 != (System_Object_array *)0x0) {
                                                           uVar2 = *(uint *)&(__this_05->fields).
                                                                             m_CancellationTokenSource;
                                                           if (uVar2 < (uint)pSVar3->max_length) {
                                                             *(uint *)&(__this_05->fields).
                                                                       m_CancellationTokenSource = uVar2 + 1;
                                                             pSVar3->m_Items[(int)uVar2] =
                                                                  (Il2CppObject *)pUVar20;
                                                             il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                                             __this_05 = (UI_BaseMenu_o *)
                                                                         (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_05,(Il2CppObject *)pUVar20,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_05 = (UI_BaseMenu_o *)(__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_05 != (UI_BaseMenu_o *)0x0) {
                                                         pUVar21 = (__this->fields).RoleSpritePickPopup;
                                                         piVar1 = (int32_t *)
                                                                  ((long)&(__this_05->fields).
                                                                          m_CancellationTokenSource + 4);
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar3 = (System_Object_array *)
                                                                  (__this_05->fields).m_CachedPtr;
                                                         if (pSVar3 != (System_Object_array *)0x0) {
                                                           uVar2 = *(uint *)&(__this_05->fields).
                                                                             m_CancellationTokenSource;
                                                           if (uVar2 < (uint)pSVar3->max_length) {
                                                             *(uint *)&(__this_05->fields).
                                                                       m_CancellationTokenSource = uVar2 + 1;
                                                             pSVar3->m_Items[(int)uVar2] =
                                                                  (Il2CppObject *)pUVar21;
                                                             il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                                             return;
                                                           }
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_05,(Il2CppObject *)pUVar21,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
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
label_04324f02:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae014 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae014 = '\x01';
  }
  pSVar24 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar25 = (Il2CppMethodPointer)0x0;
  pIVar26 = (Il2CppObject *)0x0;
  __this_00 = (__this_05->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc0,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar25;
      __this_01.fields._list = pSVar24;
      __this_01.fields._current = pIVar26;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc0);
      if ((char)bVar5 == '\0') {
        __this_02.fields._8_8_ = pIVar25;
        __this_02.fields._list = pSVar24;
        __this_02.fields._current = pIVar26;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
        return;
      }
      if (pIVar26 == (Il2CppObject *)0x0) break;
      (*pIVar26->klass->vtable[0x16].methodPtr)(pIVar26,pIVar26->klass->vtable[0x16].method);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar23 = il2cpp_runtime_helper_022b2c90();
  if (auVar23._8_4_ == 1) {
    plVar22 = (long *)__cxa_begin_catch(auVar23._0_8_);
    lVar4 = *plVar22;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar25;
    __this_03.fields._list = pSVar24;
    __this_03.fields._current = pIVar26;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._8_8_ = pIVar25;
  __this_04.fields._list = pSVar24;
  __this_04.fields._current = pIVar26;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
  _Unwind_Resume(auVar23._0_8_);
}


// UI.BaseMenu$$HideAllPopups
// il2cpp: void UI_BaseMenu__HideAllPopups (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x4324f10

void UI_BaseMenu__HideAllPopups(UI_BaseMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057ae014 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae014 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._list = pSVar5;
      __this_01.fields._current = pIVar7;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffd8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar6;
        __this_02.fields._list = pSVar5;
        __this_02.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
        return;
      }
      if (pIVar7 == (Il2CppObject *)0x0) break;
      (*pIVar7->klass->vtable[0x16].methodPtr)(pIVar7,pIVar7->klass->vtable[0x16].method);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
  _Unwind_Resume(auVar4._0_8_);
}


// UI.BaseMenu$$.ctor
// il2cpp: void UI_BaseMenu___ctor (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x4325060

void UI_BaseMenu___ctor(UI_BaseMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
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


