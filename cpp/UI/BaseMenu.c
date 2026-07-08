// Type: UI.BaseMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/BaseMenu.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/BaseMenu.cs  [CHANGED since prior version]
// --------------------------------

// UI.BaseMenu.<WaitAndApplyScale>d__17$$.ctor
// il2cpp: void UI_BaseMenu__WaitAndApplyScale_d__17___ctor (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4017920

void UI_BaseMenu_<WaitAndApplyScale>d__17___ctor
               (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,int32_t __1__state,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.IDisposable.Dispose
// il2cpp: void UI_BaseMenu__WaitAndApplyScale_d__17__System_IDisposable_Dispose (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x40186e0

void UI_BaseMenu_<WaitAndApplyScale>d__17__System_IDisposable_Dispose
               (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  return;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$MoveNext
// il2cpp: bool UI_BaseMenu__WaitAndApplyScale_d__17__MoveNext (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x40186f0

bool_conflict
UI_BaseMenu_<WaitAndApplyScale>d__17__MoveNext
          (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BaseMenu_o *__this_00;
  long lVar2;
  UnityEngine_Vector2_o value;
  uint uVar3;
  UnityEngine_UI_CanvasScaler_o *__this_01;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *__this_02;
  System_Object_array *pSVar5;
  uint uVar6;
  bool_conflict bVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  
  if (DAT_057042a8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CanvasScaler_GetComponent_CanvasScaler);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_BaseScaler___GetComponentsInChildren_BaseScaler);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_057042a8 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if ((__this_00 == (UI_BaseMenu_o *)0x0) ||
       (__this_02 = (UnityEngine_Transform_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)__this_00,MethodInfo_RectTransform_GetComponent_RectTransform),
       __this_02 == (UnityEngine_Transform_o *)0x0)) {
LAB_04018956:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar9 = UnityEngine_Transform__get_localScale(__this_02,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class(UVar9.fields.x,UVar9.fields.z);
    }
    *(float *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x38) = UVar9.fields.x;
    pSVar5 = UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)__this_00,1,MethodInfo_BaseScaler___GetComponentsInChildren_BaseScaler);
    if (pSVar5 == (System_Object_array *)0x0) goto LAB_04018956;
    uVar3 = (uint)pSVar5->max_length;
    uVar6 = 0;
    if ((int)uVar3 < 1) {
      return 0;
    }
    do {
      if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar4 = pSVar5->m_Items[(int)uVar6];
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_04018956;
      (*pIVar4->klass->vtable[5].methodPtr)(pIVar4,pIVar4->klass->vtable[5].method);
      uVar6 = uVar6 + 1;
      uVar3 = (uint)pSVar5->max_length;
    } while ((int)uVar6 < (int)uVar3);
LAB_0401890c:
    bVar7 = 0;
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
      (__this->fields).__1__state = 2;
    }
    else {
      if (iVar1 != 0) goto LAB_0401890c;
      (__this->fields).__1__state = -1;
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x40), lVar2 == 0)) goto LAB_04018956;
      fVar8 = 1.0;
      if (4 < (__this->fields).sceneName - 3U) {
        fVar8 = 1.0 / *(float *)(lVar2 + 0x14);
      }
      if ((__this_00 == (UI_BaseMenu_o *)0x0) ||
         (__this_01 = (UnityEngine_UI_CanvasScaler_o *)
                      UnityEngine_Component__GetComponent<object>
                                ((UnityEngine_Component_o *)__this_00,MethodInfo_CanvasScaler_GetComponent_CanvasScaler),
         __this_01 == (UnityEngine_UI_CanvasScaler_o *)0x0)) goto LAB_04018956;
      value.fields.y = fVar8 * 1080.0;
      value.fields.x = fVar8 * 1920.0;
      UnityEngine_UI_CanvasScaler__set_referenceResolution(__this_01,value,(MethodInfo *)0x0);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
      (__this->fields).__1__state = 1;
    }
    bVar7 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  return bVar7;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x4018960

Il2CppObject *
UI_BaseMenu_<WaitAndApplyScale>d__17__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_Reset (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x4018970

void UI_BaseMenu_<WaitAndApplyScale>d__17__System_Collections_IEnumerator_Reset
               (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

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


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_get_Current (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x40189b0

Il2CppObject *
UI_BaseMenu_<WaitAndApplyScale>d__17__System_Collections_IEnumerator_get_Current
          (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BaseMenu$$Setup
// il2cpp: void UI_BaseMenu__Setup (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x4017800

void UI_BaseMenu__Setup(UI_BaseMenu_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  vtable_dispatch = (__this->klass->vtable)._5_SetupPopups.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._5_SetupPopups.method,in_RDX,vtable_dispatch);
  return;
}


// UI.BaseMenu$$ApplyScale
// il2cpp: void UI_BaseMenu__ApplyScale (UI_BaseMenu_o* __this, int32_t sceneName, const MethodInfo* method);
// 0x4017820

void UI_BaseMenu__ApplyScale(UI_BaseMenu_o *__this,int32_t sceneName,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057042a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndApplyScale_d__17);
    DAT_057042a4 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndApplyScale_d__17);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    *(int32_t *)&__this_00[2].klass = sceneName;
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BaseMenu$$WaitAndApplyScale
// il2cpp: System_Collections_IEnumerator_o* UI_BaseMenu__WaitAndApplyScale (UI_BaseMenu_o* __this, int32_t sceneName, const MethodInfo* method);
// 0x40178a0

System_Collections_IEnumerator_o *
UI_BaseMenu__WaitAndApplyScale(UI_BaseMenu_o *__this,int32_t sceneName,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057042a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndApplyScale_d__17);
    DAT_057042a4 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndApplyScale_d__17);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    *(int32_t *)&__this_00[2].klass = sceneName;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BaseMenu$$SetupPopups
// il2cpp: void UI_BaseMenu__SetupPopups (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x4017940

void UI_BaseMenu__SetupPopups(UI_BaseMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  long lVar5;
  bool_conflict bVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UI_TooltipPopup_o *pUVar9;
  UnityEngine_Component_o *pUVar10;
  UI_MessagePopup_o *pUVar11;
  UI_ConfirmPopup_o *pUVar12;
  UI_ExternalLinkPopup_o *pUVar13;
  UI_ColorPickPopup_o *pUVar14;
  UI_Vector3Popup_o *pUVar15;
  UI_ExportPopup_o *pUVar16;
  UI_ImportPopup_o *pUVar17;
  UI_NewImportPopup_o *pUVar18;
  UI_KeybindPopup_o *pUVar19;
  UI_SetNamePopup_o *pUVar20;
  UI_SelectListPopup_o *pUVar21;
  UI_IconPickPopup_o *pUVar22;
  UI_RoleSpritePickPopup_o *pUVar23;
  UnityEngine_Object_o *x;
  
  if (DAT_057042a5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgExternalLinkDialogHost_GetComponent_AottgEx);
    il2cpp_init_method_metadata(&MethodInfo_ColorPickPopup_GetComponent_ColorPickPopup);
    il2cpp_init_method_metadata(&MethodInfo_ConfirmPopup_GetComponent_ConfirmPopup);
    il2cpp_init_method_metadata(&MethodInfo_ExportPopup_GetComponent_ExportPopup);
    il2cpp_init_method_metadata(&MethodInfo_ExternalLinkPopup_GetComponent_ExternalLinkPopup);
    il2cpp_init_method_metadata(&MethodInfo_IconPickPopup_GetComponent_IconPickPopup);
    il2cpp_init_method_metadata(&MethodInfo_ImportPopup_GetComponent_ImportPopup);
    il2cpp_init_method_metadata(&MethodInfo_KeybindPopup_GetComponent_KeybindPopup);
    il2cpp_init_method_metadata(&MethodInfo_MessagePopup_GetComponent_MessagePopup);
    il2cpp_init_method_metadata(&MethodInfo_NewImportPopup_GetComponent_NewImportPopup);
    il2cpp_init_method_metadata(&MethodInfo_RoleSpritePickPopup_GetComponent_RoleSpritePickP);
    il2cpp_init_method_metadata(&MethodInfo_SelectListPopup_GetComponent_SelectListPopup);
    il2cpp_init_method_metadata(&MethodInfo_SetNamePopup_GetComponent_SetNamePopup);
    il2cpp_init_method_metadata(&MethodInfo_Vector3Popup_GetComponent_Vector3Popup);
    il2cpp_init_method_metadata(&MethodInfo_ColorPickPopup_CreateDefaultPopup_ColorPickPopup);
    il2cpp_init_method_metadata(&MethodInfo_ConfirmPopup_CreateDefaultPopup_ConfirmPopup);
    il2cpp_init_method_metadata(&MethodInfo_ExportPopup_CreateDefaultPopup_ExportPopup);
    il2cpp_init_method_metadata(&MethodInfo_ExternalLinkPopup_CreateDefaultPopup_ExternalLin);
    il2cpp_init_method_metadata(&MethodInfo_IconPickPopup_CreateDefaultPopup_IconPickPopup);
    il2cpp_init_method_metadata(&MethodInfo_ImportPopup_CreateDefaultPopup_ImportPopup);
    il2cpp_init_method_metadata(&MethodInfo_KeybindPopup_CreateDefaultPopup_KeybindPopup);
    il2cpp_init_method_metadata(&MethodInfo_MessagePopup_CreateDefaultPopup_MessagePopup);
    il2cpp_init_method_metadata(&MethodInfo_NewImportPopup_CreateDefaultPopup_NewImportPopup);
    il2cpp_init_method_metadata(&MethodInfo_RoleSpritePickPopup_CreateDefaultPopup_RoleSprit);
    il2cpp_init_method_metadata(&MethodInfo_SelectListPopup_CreateDefaultPopup_SelectListPop);
    il2cpp_init_method_metadata(&MethodInfo_SetNamePopup_CreateDefaultPopup_SetNamePopup);
    il2cpp_init_method_metadata(&MethodInfo_Vector3Popup_CreateDefaultPopup_Vector3Popup);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_CreateTooltipPopup_TooltipPopup);
    il2cpp_init_method_metadata(&MethodInfo_AottgExternalLinkDialogHost_AddComponent_AottgEx);
    il2cpp_init_method_metadata(&MethodInfo_TooltipPopup_GetComponent_TooltipPopup);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057042a5 = '\x01';
  }
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar8 = UI_ElementFactory__CreateTooltipPopup<object>(pUVar7,0,MethodInfo_GameObject_CreateTooltipPopup_TooltipPopup);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    pUVar9 = (UI_TooltipPopup_o *)UnityEngine_GameObject__GetComponent<object>(pUVar8,MethodInfo_TooltipPopup_GetComponent_TooltipPopup);
    (__this->fields).TooltipPopup = pUVar9;
    il2cpp_runtime_glue(&(__this->fields).TooltipPopup);
    pUVar7 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar10 = (UnityEngine_Component_o *)
              UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_MessagePopup_CreateDefaultPopup_MessagePopup);
    if (pUVar10 != (UnityEngine_Component_o *)0x0) {
      pUVar11 = (UI_MessagePopup_o *)
                UnityEngine_Component__GetComponent<object>(pUVar10,MethodInfo_MessagePopup_GetComponent_MessagePopup);
      (__this->fields).MessagePopup = pUVar11;
      il2cpp_runtime_glue(&(__this->fields).MessagePopup);
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar10 = (UnityEngine_Component_o *)
                UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_ConfirmPopup_CreateDefaultPopup_ConfirmPopup);
      if (pUVar10 != (UnityEngine_Component_o *)0x0) {
        pUVar12 = (UI_ConfirmPopup_o *)
                  UnityEngine_Component__GetComponent<object>(pUVar10,MethodInfo_ConfirmPopup_GetComponent_ConfirmPopup);
        (__this->fields).ConfirmPopup = pUVar12;
        il2cpp_runtime_glue(&(__this->fields).ConfirmPopup);
        pUVar7 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar10 = (UnityEngine_Component_o *)
                  UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_ExternalLinkPopup_CreateDefaultPopup_ExternalLin);
        if (pUVar10 != (UnityEngine_Component_o *)0x0) {
          pUVar13 = (UI_ExternalLinkPopup_o *)
                    UnityEngine_Component__GetComponent<object>(pUVar10,MethodInfo_ExternalLinkPopup_GetComponent_ExternalLinkPopup);
          (__this->fields).ExternalLinkPopup = pUVar13;
          il2cpp_runtime_glue(&(__this->fields).ExternalLinkPopup);
          pUVar7 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar10 = (UnityEngine_Component_o *)
                    UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_ColorPickPopup_CreateDefaultPopup_ColorPickPopup);
          if (pUVar10 != (UnityEngine_Component_o *)0x0) {
            pUVar14 = (UI_ColorPickPopup_o *)
                      UnityEngine_Component__GetComponent<object>(pUVar10,MethodInfo_ColorPickPopup_GetComponent_ColorPickPopup);
            (__this->fields).ColorPickPopup = pUVar14;
            il2cpp_runtime_glue(&(__this->fields).ColorPickPopup);
            pUVar7 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pUVar10 = (UnityEngine_Component_o *)
                      UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_Vector3Popup_CreateDefaultPopup_Vector3Popup);
            if (pUVar10 != (UnityEngine_Component_o *)0x0) {
              pUVar15 = (UI_Vector3Popup_o *)
                        UnityEngine_Component__GetComponent<object>(pUVar10,MethodInfo_Vector3Popup_GetComponent_Vector3Popup);
              (__this->fields).Vector3Popup = pUVar15;
              il2cpp_runtime_glue(&(__this->fields).Vector3Popup);
              pUVar7 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pUVar10 = (UnityEngine_Component_o *)
                        UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_ExportPopup_CreateDefaultPopup_ExportPopup);
              if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                pUVar16 = (UI_ExportPopup_o *)
                          UnityEngine_Component__GetComponent<object>(pUVar10,MethodInfo_ExportPopup_GetComponent_ExportPopup);
                (__this->fields).ExportPopup = pUVar16;
                il2cpp_runtime_glue(&(__this->fields).ExportPopup);
                pUVar7 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                pUVar10 = (UnityEngine_Component_o *)
                          UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_ImportPopup_CreateDefaultPopup_ImportPopup);
                if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                  pUVar17 = (UI_ImportPopup_o *)
                            UnityEngine_Component__GetComponent<object>(pUVar10,MethodInfo_ImportPopup_GetComponent_ImportPopup);
                  (__this->fields).ImportPopup = pUVar17;
                  il2cpp_runtime_glue(&(__this->fields).ImportPopup);
                  pUVar7 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar10 = (UnityEngine_Component_o *)
                            UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_NewImportPopup_CreateDefaultPopup_NewImportPopup);
                  if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                    pUVar18 = (UI_NewImportPopup_o *)
                              UnityEngine_Component__GetComponent<object>(pUVar10,MethodInfo_NewImportPopup_GetComponent_NewImportPopup);
                    (__this->fields).NewImportPopup = pUVar18;
                    il2cpp_runtime_glue(&(__this->fields).NewImportPopup);
                    pUVar7 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar10 = (UnityEngine_Component_o *)
                              UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_KeybindPopup_CreateDefaultPopup_KeybindPopup);
                    if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                      pUVar19 = (UI_KeybindPopup_o *)
                                UnityEngine_Component__GetComponent<object>(pUVar10,MethodInfo_KeybindPopup_GetComponent_KeybindPopup);
                      (__this->fields).KeybindPopup = pUVar19;
                      il2cpp_runtime_glue(&(__this->fields).KeybindPopup);
                      pUVar7 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      pUVar10 = (UnityEngine_Component_o *)
                                UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_SetNamePopup_CreateDefaultPopup_SetNamePopup)
                      ;
                      if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                        pUVar20 = (UI_SetNamePopup_o *)
                                  UnityEngine_Component__GetComponent<object>(pUVar10,MethodInfo_SetNamePopup_GetComponent_SetNamePopup);
                        (__this->fields).SetNamePopup = pUVar20;
                        il2cpp_runtime_glue(&(__this->fields).SetNamePopup);
                        pUVar7 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        pUVar10 = (UnityEngine_Component_o *)
                                  UI_ElementFactory__CreateDefaultPopup<object>
                                            (pUVar7,0,MethodInfo_SelectListPopup_CreateDefaultPopup_SelectListPop);
                        if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                          pUVar21 = (UI_SelectListPopup_o *)
                                    UnityEngine_Component__GetComponent<object>
                                              (pUVar10,MethodInfo_SelectListPopup_GetComponent_SelectListPopup);
                          (__this->fields).SelectListPopup = pUVar21;
                          il2cpp_runtime_glue(&(__this->fields).SelectListPopup);
                          pUVar7 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                          pUVar10 = (UnityEngine_Component_o *)
                                    UI_ElementFactory__CreateDefaultPopup<object>
                                              (pUVar7,0,MethodInfo_IconPickPopup_CreateDefaultPopup_IconPickPopup);
                          if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                            pUVar22 = (UI_IconPickPopup_o *)
                                      UnityEngine_Component__GetComponent<object>
                                                (pUVar10,MethodInfo_IconPickPopup_GetComponent_IconPickPopup);
                            (__this->fields).IconPickPopup = pUVar22;
                            il2cpp_runtime_glue(&(__this->fields).IconPickPopup);
                            pUVar7 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
                            ;
                            pUVar10 = (UnityEngine_Component_o *)
                                      UI_ElementFactory__CreateDefaultPopup<object>
                                                (pUVar7,0,MethodInfo_RoleSpritePickPopup_CreateDefaultPopup_RoleSprit);
                            if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                              pUVar23 = (UI_RoleSpritePickPopup_o *)
                                        UnityEngine_Component__GetComponent<object>
                                                  (pUVar10,MethodInfo_RoleSpritePickPopup_GetComponent_RoleSpritePickP);
                              (__this->fields).RoleSpritePickPopup = pUVar23;
                              il2cpp_runtime_glue(&(__this->fields).RoleSpritePickPopup,pUVar23);
                              x = (UnityEngine_Object_o *)
                                  UnityEngine_Component__GetComponent<object>
                                            ((UnityEngine_Component_o *)__this,MethodInfo_AottgExternalLinkDialogHost_GetComponent_AottgEx);
                              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                il2cpp_init_class();
                              }
                              bVar6 = UnityEngine_Object__op_Equality
                                                (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                              if ((char)bVar6 != '\0') {
                                pUVar8 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)__this,
                                                    (MethodInfo *)0x0);
                                if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_04018502;
                                UnityEngine_GameObject__AddComponent<object>(pUVar8,MethodInfo_AottgExternalLinkDialogHost_AddComponent_AottgEx);
                              }
                              lVar5 = MethodInfo_Void_Add;
                              pSVar3 = (__this->fields)._popups;
                              if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                pUVar9 = (__this->fields).TooltipPopup;
                                piVar1 = &(pSVar3->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pUVar4 = (pSVar3->fields)._items;
                                if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                  uVar2 = (pSVar3->fields)._size;
                                  if (uVar2 < (uint)pUVar4->max_length) {
                                    (pSVar3->fields)._size = uVar2 + 1;
                                    pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
                                    il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                    pSVar3 = (__this->fields)._popups;
                                    lVar5 = MethodInfo_Void_Add;
                                  }
                                  else {
                                    System_Collections_Generic_List<object>__AddWithResize
                                              ((System_Collections_Generic_List_object__o *)pSVar3,
                                               (Il2CppObject *)pUVar9,
                                               *(MethodInfo_35A7350 **)
                                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                    pSVar3 = (__this->fields)._popups;
                                    lVar5 = MethodInfo_Void_Add;
                                  }
                                  MethodInfo_Void_Add = lVar5;
                                  if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0)
                                  {
                                    pUVar11 = (__this->fields).MessagePopup;
                                    piVar1 = &(pSVar3->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar4 = (pSVar3->fields)._items;
                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                      uVar2 = (pSVar3->fields)._size;
                                      if (uVar2 < (uint)pUVar4->max_length) {
                                        (pSVar3->fields)._size = uVar2 + 1;
                                        pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar11;
                                        il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                        pSVar3 = (__this->fields)._popups;
                                        lVar5 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List<object>__AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)
                                                   pSVar3,(Il2CppObject *)pUVar11,
                                                   *(MethodInfo_35A7350 **)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                    0x70));
                                        pSVar3 = (__this->fields)._popups;
                                        lVar5 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar5;
                                      if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)
                                                    0x0) {
                                        pUVar12 = (__this->fields).ConfirmPopup;
                                        piVar1 = &(pSVar3->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pUVar4 = (pSVar3->fields)._items;
                                        if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                          uVar2 = (pSVar3->fields)._size;
                                          if (uVar2 < (uint)pUVar4->max_length) {
                                            (pSVar3->fields)._size = uVar2 + 1;
                                            pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar12;
                                            il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                            pSVar3 = (__this->fields)._popups;
                                            lVar5 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List<object>__AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)
                                                       pSVar3,(Il2CppObject *)pUVar12,
                                                       *(MethodInfo_35A7350 **)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                            pSVar3 = (__this->fields)._popups;
                                            lVar5 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar5;
                                          if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                             ) {
                                            pUVar13 = (__this->fields).ExternalLinkPopup;
                                            piVar1 = &(pSVar3->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pUVar4 = (pSVar3->fields)._items;
                                            if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                              uVar2 = (pSVar3->fields)._size;
                                              if (uVar2 < (uint)pUVar4->max_length) {
                                                (pSVar3->fields)._size = uVar2 + 1;
                                                pUVar4->m_Items[(int)uVar2] =
                                                     (UI_BasePopup_o *)pUVar13;
                                                il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                                pSVar3 = (__this->fields)._popups;
                                                lVar5 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List<object>__AddWithResize
                                                          ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar13,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                pSVar3 = (__this->fields)._popups;
                                                lVar5 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar5;
                                              if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                 ) {
                                                pUVar14 = (__this->fields).ColorPickPopup;
                                                piVar1 = &(pSVar3->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pUVar4 = (pSVar3->fields)._items;
                                                if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                  uVar2 = (pSVar3->fields)._size;
                                                  if (uVar2 < (uint)pUVar4->max_length) {
                                                    (pSVar3->fields)._size = uVar2 + 1;
                                                    pUVar4->m_Items[(int)uVar2] =
                                                         (UI_BasePopup_o *)pUVar14;
                                                    il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2)
                                                    ;
                                                    pSVar3 = (__this->fields)._popups;
                                                    lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  else {
                                                                                                        
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar14,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar15 = (__this->fields).Vector3Popup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] =
                                                             (UI_BasePopup_o *)pUVar15;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar15,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar16 = (__this->fields).ExportPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] =
                                                             (UI_BasePopup_o *)pUVar16;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar16,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar17 = (__this->fields).ImportPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] =
                                                             (UI_BasePopup_o *)pUVar17;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar17,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar18 = (__this->fields).NewImportPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] =
                                                             (UI_BasePopup_o *)pUVar18;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar18,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar19 = (__this->fields).KeybindPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] =
                                                             (UI_BasePopup_o *)pUVar19;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar19,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar20 = (__this->fields).SetNamePopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] =
                                                             (UI_BasePopup_o *)pUVar20;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar20,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar21 = (__this->fields).SelectListPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] =
                                                             (UI_BasePopup_o *)pUVar21;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar21,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar22 = (__this->fields).IconPickPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] =
                                                             (UI_BasePopup_o *)pUVar22;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar22,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar23 = (__this->fields).RoleSpritePickPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] =
                                                             (UI_BasePopup_o *)pUVar23;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        return;
                                                      }
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar23,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
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
LAB_04018502:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BaseMenu$$HideAllPopups
// il2cpp: void UI_BaseMenu__HideAllPopups (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x4018510

void UI_BaseMenu__HideAllPopups(UI_BaseMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_057042a6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
    DAT_057042a6 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = pIVar4;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffd8);
      if ((char)bVar1 == '\0') {
        __this_02.fields._8_8_ = pIVar3;
        __this_02.fields._list = pSVar2;
        __this_02.fields._current = pIVar4;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffd8);
        return;
      }
      if (pIVar4 == (Il2CppObject *)0x0) break;
      (*pIVar4->klass->vtable[0x16].methodPtr)(pIVar4,pIVar4->klass->vtable[0x16].method);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BaseMenu$$.ctor
// il2cpp: void UI_BaseMenu___ctor (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x4018660

void UI_BaseMenu___ctor(UI_BaseMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
  if (DAT_057042a7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_init_method_metadata(&TypeInfo_List_BasePopup);
    DAT_057042a7 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_glue(TypeInfo_List_BasePopup);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._popups);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


