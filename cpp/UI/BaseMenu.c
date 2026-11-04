// Type: UI.BaseMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/BaseMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BaseMenu.cs
// --------------------------------

// UI.BaseMenu.<WaitAndApplyScale>d__17$$.ctor
// il2cpp: void UI_BaseMenu__WaitAndApplyScale_d__17___ctor (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_BaseMenu__WaitAndApplyScale_d__17___ctor(UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.IDisposable.Dispose
// il2cpp: void UI_BaseMenu__WaitAndApplyScale_d__17__System_IDisposable_Dispose (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_BaseMenu__WaitAndApplyScale_d__17__System_IDisposable_Dispose(UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, MethodInfo* method)

{
  return;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$MoveNext
// il2cpp: bool UI_BaseMenu__WaitAndApplyScale_d__17__MoveNext (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x1821d0f40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821d106d: nop dword ptr [rax]

bool UI_BaseMenu__WaitAndApplyScale_d__17__MoveNext
               (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BaseMenu_o *__this_00;
  Settings_UISettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  UnityEngine_Vector2_o value;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector3_o *pUVar4;
  System_Object_array *pSVar5;
  Il2CppObject *pIVar6;
  UnityEngine_UI_CanvasScaler_o *__this_02;
  uint uVar7;
  float fVar8;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_184346eb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasScaler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_BaseScaler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_184346eb7 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar2 != (Settings_UISettings_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).UIMasterScale, pSVar3 != (Settings_FloatSetting_o *)0x0)) {
      fVar8 = 1.0 / (pSVar3->fields)._value;
      if ((((__this->fields).sceneName == 4) ||
          ((((__this->fields).sceneName == 3 || ((__this->fields).sceneName == 5)) ||
           ((__this->fields).sceneName == 6)))) || ((__this->fields).sceneName == 7)) {
        fVar8 = 1.0;
      }
      if (__this_00 != (UI_BaseMenu_o *)0x0) {
        __this_02 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_00,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasScaler
                              );
        if (__this_02 != (UnityEngine_UI_CanvasScaler_o *)0x0) {
          value.fields.y = fVar8 * 1080.0;
          value.fields.x = fVar8 * 1920.0;
          UnityEngine_UI_CanvasScaler__set_referenceResolution(__this_02,value,(MethodInfo *)0x0);
          pIVar6 = (Il2CppObject *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
          UnityEngine_WaitForEndOfFrame___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar6,(MethodInfo *)0x0);
          (__this->fields).__2__current = pIVar6;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar6);
          (__this->fields).__1__state = 1;
          return true;
        }
      }
    }
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      pIVar6 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar6,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar6);
      (__this->fields).__1__state = 2;
      return true;
    }
    if (iVar1 != 2) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((__this_00 != (UI_BaseMenu_o *)0x0) &&
       (__this_01 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_00,
                               (MethodInfo_6651A0 *)
                               MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
       __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
      pUVar4 = UnityEngine_Transform__get_localScale
                         (local_28,(UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
      fVar8 = (pUVar4->fields).x;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      TypeInfo_UI_UIManager->static_fields->CurrentCanvasScale = fVar8;
      pSVar5 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)__this_00,true,
                          (MethodInfo_665440 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_BaseScaler);
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar7 = 0;
        while( true ) {
          if ((int)pSVar5->max_length <= (int)uVar7) {
            return false;
          }
          if ((uint)pSVar5->max_length <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          pIVar6 = pSVar5->m_Items[(int)uVar7];
          if (pIVar6 == (Il2CppObject *)0x0) break;
          (*pIVar6->klass->vtable[5].methodPtr)(pIVar6,pIVar6->klass->vtable[5].method);
          uVar7 = uVar7 + 1;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_Reset (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x1821d11e0

void UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_Reset
               (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_BaseMenu_WaitAndApplyScale_d__17_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_get_Current (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_get_Current(UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BaseMenu$$Setup
// il2cpp: void UI_BaseMenu__Setup (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x1821b8ea0

void
UI_BaseMenu__Setup(UI_BaseMenu_o* __this, MethodInfo* method)

{
  (*(__this->klass->vtable)._5_Cancel.methodPtr)(__this,(__this->klass->vtable)._5_Cancel.method);
  return;
}


// UI.BaseMenu$$ApplyScale
// il2cpp: void UI_BaseMenu__ApplyScale (UI_BaseMenu_o* __this, int32_t sceneName, const MethodInfo* method);
// 0x1821b8150

void UI_BaseMenu__ApplyScale(UI_BaseMenu_o *__this,int32_t sceneName,MethodInfo *method)

{
  UI_BaseMenu__WaitAndApplyScale_d__17_o *routine;
  
  if (Il2CppMethodInitialized_184346eb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BaseMenu_WaitAndApplyScale_d__17);
    Il2CppMethodInitialized_184346eb3 = '\x01';
  }
  routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BaseMenu_WaitAndApplyScale_d__17);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
  (routine->fields).sceneName = sceneName;
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
             (MethodInfo *)0x0);
  return;
}


// UI.BaseMenu$$WaitAndApplyScale
// il2cpp: System_Collections_IEnumerator_o* UI_BaseMenu__WaitAndApplyScale (UI_BaseMenu_o* __this, int32_t sceneName, const MethodInfo* method);
// 0x1821b8ec0

System_Collections_IEnumerator_o *
UI_BaseMenu__WaitAndApplyScale(UI_BaseMenu_o *__this,int32_t sceneName,MethodInfo *method)

{
  UI_BaseMenu__WaitAndApplyScale_d__17_o *__this_00;
  
  if (Il2CppMethodInitialized_184346eb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BaseMenu_WaitAndApplyScale_d__17);
    Il2CppMethodInitialized_184346eb3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BaseMenu_WaitAndApplyScale_d__17);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).sceneName = sceneName;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BaseMenu$$SetupPopups
// il2cpp: void UI_BaseMenu__SetupPopups (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x1821b82f0

void UI_BaseMenu__SetupPopups(UI_BaseMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UI_TooltipPopup_o *pUVar9;
  UI_MessagePopup_o *pUVar10;
  UI_ConfirmPopup_o *pUVar11;
  UI_ExternalLinkPopup_o *pUVar12;
  UI_ColorPickPopup_o *pUVar13;
  UI_Vector3Popup_o *pUVar14;
  UI_ExportPopup_o *pUVar15;
  UI_ImportPopup_o *pUVar16;
  UI_NewImportPopup_o *pUVar17;
  UI_KeybindPopup_o *pUVar18;
  UI_SetNamePopup_o *pUVar19;
  UI_SelectListPopup_o *pUVar20;
  UI_IconPickPopup_o *pUVar21;
  UI_RoleSpritePickPopup_o *pUVar22;
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *x;
  
  if (Il2CppMethodInitialized_184346eb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgExternalLinkDialogHost);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ColorPickPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ConfirmPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ExportPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_ExternalLinkPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_IconPickPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ImportPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_KeybindPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MessagePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_NewImportPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_RoleSpritePickPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_SelectListPopup)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_SetNamePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Vector3Popup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ColorPickPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ConfirmPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ExportPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ExternalLinkPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_IconPickPopup)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ImportPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_KeybindPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MessagePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_NewImportPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_RoleSpritePickPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_SelectListPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_SetNamePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_Vector3Popup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateTooltipPopup_TooltipPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgExternalLinkDialogHost);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TooltipPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346eb4 = '\x01';
  }
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateTooltipPopup_object_
                     (pUVar7,false,
                      (MethodInfo_6ABCF0 *)MethodInfo_UI_ElementFactory_CreateTooltipPopup_TooltipPopup);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    pUVar9 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar8,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_TooltipPopup);
    (__this->fields).TooltipPopup = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields).TooltipPopup,pUVar9);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar10 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar7,false,
                         (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_MessagePopup);
    if (pUVar10 == (UI_MessagePopup_o *)0x0) goto label_1821b8e88;
    pUVar10 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar10,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_MessagePopup);
    (__this->fields).MessagePopup = pUVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields).MessagePopup,pUVar10);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar11 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar7,false,
                         (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_ConfirmPopup);
    if (pUVar11 == (UI_ConfirmPopup_o *)0x0) goto label_1821b8e88;
    pUVar11 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar11,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ConfirmPopup);
    (__this->fields).ConfirmPopup = pUVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ConfirmPopup,pUVar11);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar12 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar7,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_ExternalLinkPopup);
    if (pUVar12 == (UI_ExternalLinkPopup_o *)0x0) goto label_1821b8e88;
    pUVar12 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar12,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ExternalLinkPopup)
    ;
    (__this->fields).ExternalLinkPopup = pUVar12;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ExternalLinkPopup,pUVar12);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar13 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar7,false,
                         (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_ColorPickPopup);
    if (pUVar13 == (UI_ColorPickPopup_o *)0x0) goto label_1821b8e88;
    pUVar13 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar13,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ColorPickPopup);
    (__this->fields).ColorPickPopup = pUVar13;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ColorPickPopup,pUVar13);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar14 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar7,false,
                         (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_Vector3Popup);
    if (pUVar14 == (UI_Vector3Popup_o *)0x0) goto label_1821b8e88;
    pUVar14 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar14,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Vector3Popup);
    (__this->fields).Vector3Popup = pUVar14;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Vector3Popup,pUVar14);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar15 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar7,false,
                         (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_ExportPopup);
    if (pUVar15 == (UI_ExportPopup_o *)0x0) goto label_1821b8e88;
    pUVar15 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar15,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ExportPopup);
    (__this->fields).ExportPopup = pUVar15;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ExportPopup,pUVar15);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar16 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar7,false,
                         (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_ImportPopup);
    if (pUVar16 == (UI_ImportPopup_o *)0x0) goto label_1821b8e88;
    pUVar16 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar16,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ImportPopup);
    (__this->fields).ImportPopup = pUVar16;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ImportPopup,pUVar16);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar17 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar7,false,
                         (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_NewImportPopup);
    if (pUVar17 == (UI_NewImportPopup_o *)0x0) goto label_1821b8e88;
    pUVar17 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar17,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_NewImportPopup);
    (__this->fields).NewImportPopup = pUVar17;
    Il2CppCodeGenWriteBarrier(&(__this->fields).NewImportPopup,pUVar17);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar18 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar7,false,
                         (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_KeybindPopup);
    if (pUVar18 == (UI_KeybindPopup_o *)0x0) goto label_1821b8e88;
    pUVar18 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar18,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_KeybindPopup);
    (__this->fields).KeybindPopup = pUVar18;
    Il2CppCodeGenWriteBarrier(&(__this->fields).KeybindPopup,pUVar18);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar19 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar7,false,
                         (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_SetNamePopup);
    if (pUVar19 == (UI_SetNamePopup_o *)0x0) goto label_1821b8e88;
    pUVar19 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar19,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_SetNamePopup);
    (__this->fields).SetNamePopup = pUVar19;
    Il2CppCodeGenWriteBarrier(&(__this->fields).SetNamePopup,pUVar19);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar20 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar7,false,
                         (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_SelectListPopup)
    ;
    if (pUVar20 == (UI_SelectListPopup_o *)0x0) goto label_1821b8e88;
    pUVar20 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar20,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_SelectListPopup);
    (__this->fields).SelectListPopup = pUVar20;
    Il2CppCodeGenWriteBarrier(&(__this->fields).SelectListPopup,pUVar20);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar21 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar7,false,
                         (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_IconPickPopup);
    if (pUVar21 == (UI_IconPickPopup_o *)0x0) goto label_1821b8e88;
    pUVar21 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar21,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_IconPickPopup);
    (__this->fields).IconPickPopup = pUVar21;
    Il2CppCodeGenWriteBarrier(&(__this->fields).IconPickPopup,pUVar21);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar22 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar7,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_RoleSpritePickPopup);
    if (pUVar22 == (UI_RoleSpritePickPopup_o *)0x0) goto label_1821b8e88;
    pUVar22 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar22,
                         (MethodInfo_6651A0 *)
                         MethodInfo_UnityEngine_Component_GetComponent_RoleSpritePickPopup);
    (__this->fields).RoleSpritePickPopup = pUVar22;
    Il2CppCodeGenWriteBarrier(&(__this->fields).RoleSpritePickPopup,pUVar22);
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)__this,
                   (MethodInfo_6651A0 *)
                   MethodInfo_UnityEngine_Component_GetComponent_AottgExternalLinkDialogHost);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_1821b8e88;
      UnityEngine_GameObject__AddComponent_object_
                (pUVar8,(MethodInfo_6F4D60 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_AottgExternalLinkDialogHost);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821b8e88;
    pUVar9 = (__this->fields).TooltipPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1821b8e88;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821b8e8e;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar9,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821b8e88;
    pUVar10 = (__this->fields).MessagePopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1821b8e88;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821b8e8e;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar10;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar10);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar10,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821b8e88;
    pUVar11 = (__this->fields).ConfirmPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1821b8e88;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821b8e8e;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar11;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar11);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar11,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821b8e88;
    pUVar12 = (__this->fields).ExternalLinkPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1821b8e88;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821b8e8e;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar12;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar12);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar12,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821b8e88;
    pUVar13 = (__this->fields).ColorPickPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1821b8e88;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821b8e8e;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar13;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar13);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar13,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821b8e88;
    pUVar14 = (__this->fields).Vector3Popup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1821b8e88;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821b8e8e;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar14;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar14);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar14,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821b8e88;
    pUVar15 = (__this->fields).ExportPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1821b8e88;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821b8e8e;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar15;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar15);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar15,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821b8e88;
    pUVar16 = (__this->fields).ImportPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1821b8e88;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821b8e8e;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar16;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar16);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar16,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821b8e88;
    pUVar17 = (__this->fields).NewImportPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1821b8e88;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821b8e8e;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar17;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar17);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar17,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821b8e88;
    pUVar18 = (__this->fields).KeybindPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1821b8e88;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821b8e8e;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar18;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar18);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar18,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821b8e88;
    pUVar19 = (__this->fields).SetNamePopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1821b8e88;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821b8e8e;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar19;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar19);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar19,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821b8e88;
    pUVar20 = (__this->fields).SelectListPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1821b8e88;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821b8e8e;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar20;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar20,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821b8e88;
    pUVar21 = (__this->fields).IconPickPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_1821b8e88;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821b8e8e;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar21;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar21);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar21,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      pUVar22 = (__this->fields).RoleSpritePickPopup;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (pSVar3->fields)._items;
      if (pUVar4 != (UI_BasePopup_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if ((uint)pUVar4->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar22,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          return;
        }
        (pSVar3->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pUVar4->max_length) {
          pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar22;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar22);
          return;
        }
label_1821b8e8e:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1821b8e88:
  ThrowNullReferenceException();
}


// UI.BaseMenu$$HideAllPopups
// il2cpp: void UI_BaseMenu__HideAllPopups (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x1821b81d0
// eh: try 0x1821b8270..0x1821b82d9 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b826f: nop 
// asm:   0x1821b82b2: mov rdx, qword ptr [rip + 0x1ebda3f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x1821b82b9: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821b82be: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821b82c3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821b82c8: test rcx, rcx
// asm:   0x1821b82cb: jne 0x1821b82d9
// asm:   0x1821b82d9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_BaseMenu__HideAllPopups(UI_BaseMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  bool bVar1;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184346eb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    Il2CppMethodInitialized_184346eb5 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
        return;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      (*(local_28.fields._current)->klass->vtable[0x16].methodPtr)
                (local_28.fields._current,(local_28.fields._current)->klass->vtable[0x16].method);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.BaseMenu$$.ctor
// il2cpp: void UI_BaseMenu___ctor (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x1821b8f40

void UI_BaseMenu___ctor(UI_BaseMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
  if (Il2CppMethodInitialized_184346eb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BasePopup);
    Il2CppMethodInitialized_184346eb6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BasePopup_ctor);
  (__this->fields)._popups = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._popups,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


