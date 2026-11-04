// Type: Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuPanelHoverSlide.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Setup (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x180ace2f0

void
Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Setup(Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, MethodInfo* method)

{
  (__this->fields)._root = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._root,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$Update
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Update (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x181de1800

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Update
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  Settings_UISettings_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344b19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184344b19 = '\x01';
  }
  x = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (((TypeInfo_Settings_SettingsManager->static_fields->UISettings == (Settings_UISettings_o *)0x0) ||
        (pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings,
        (pSVar1->fields).FadeMainMenu == (Settings_BoolSetting_o *)0x0)) ||
       ((((pSVar1->fields).FadeMainMenu)->fields)._value == false)) {
      bVar2 = true;
    }
    else {
      bVar2 = Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__HoverPanelBand(__this,(MethodInfo *)0x0);
    }
    if (bVar2 != (__this->fields)._shown) {
      Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetShown(__this,bVar2,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__OnDestroy (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x181de1310

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if ((__this->fields)._tween != (DG_Tweening_Tween_o *)0x0) {
    bVar1 = DG_Tweening_TweenExtensions__IsActive((__this->fields)._tween,(MethodInfo *)0x0);
    if (bVar1) {
      DG_Tweening_TweenExtensions__Kill((__this->fields)._tween,false,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$HoverPanelBand
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__HoverPanelBand (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x181de10d0

bool Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__HoverPanelBand
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Object_o *pUVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar3;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar4;
  bool bVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_Rect_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o local_48 [4];
  
  if (Il2CppMethodInitialized_184344b1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184344b1a = '\x01';
  }
  if (Il2CppMethodInitialized_184344b1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-panel");
    Il2CppMethodInitialized_184344b1b = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._panel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pGVar3 = (__this->fields)._root;
    if (pGVar3 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_181de130a;
    if (((pGVar3->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)
       && (pGVar4 = (pGVar3->fields)._Screens_k__BackingField,
          (pGVar4->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
      pUVar6 = Gisketch_Aottg2UI_Building_GisketchView__Find
                         ((pGVar4->fields)._active,"main-menu-panel",(MethodInfo *)0x0);
      (__this->fields)._panel = pUVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._panel,pUVar6);
    }
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._panel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar6 = (__this->fields)._panel;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_181de130a;
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar6,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  else {
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return true;
  }
  pGVar3 = (__this->fields)._root;
  if (pGVar3 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    __this_01 = UnityEngine_Component__GetComponentInChildren_object__664b50
                          ((UnityEngine_Component_o *)pGVar3,
                           (MethodInfo_664B50 *)MethodInfo_UnityEngine_Component_GetComponentInChildren_Canvas
                          );
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (__this_01 == (UnityEngine_Canvas_o *)0x0) goto label_181de130a;
      fVar9 = UnityEngine_Canvas__get_scaleFactor(__this_01,(MethodInfo *)0x0);
    }
    else {
      fVar9 = 1.0;
    }
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar7 = UnityEngine_RectTransform__get_rect(local_48,__this_00,(MethodInfo *)0x0);
      fVar1 = (pUVar7->fields).m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      pUVar8 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)local_48,(MethodInfo *)0x0);
      fVar10 = 1.0;
      if (1.0 <= fVar1) {
        fVar10 = fVar1;
      }
      return (pUVar8->fields).x <= fVar10 * fVar9 && fVar10 * fVar9 != (pUVar8->fields).x;
    }
  }
label_181de130a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$PanelRect
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelRect (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x181de1350

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelRect
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar3;
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  
  if (Il2CppMethodInitialized_184344b1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-panel");
    Il2CppMethodInitialized_184344b1b = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._panel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pGVar2 = (__this->fields)._root;
    if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_181de1459;
    if (((pGVar2->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)
       && (pGVar3 = (pGVar2->fields)._Screens_k__BackingField,
          (pGVar3->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
      pUVar5 = Gisketch_Aottg2UI_Building_GisketchView__Find
                         ((pGVar3->fields)._active,"main-menu-panel",(MethodInfo *)0x0);
      (__this->fields)._panel = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._panel,pUVar5);
    }
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._panel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return (UnityEngine_RectTransform_o *)0x0;
  }
  pUVar5 = (__this->fields)._panel;
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar5,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    return pUVar6;
  }
label_181de1459:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$SetShown
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetShown (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, bool shown, const MethodInfo* method);
// 0x181de1600
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181de17ac: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetShown
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,bool shown,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__this_00;
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  DG_Tweening_Tween_o *value;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar6;
  uint uVar7;
  
  if (Il2CppMethodInitialized_184344b1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_184344b1c = '\x01';
  }
  (__this->fields)._shown = shown;
  if (((__this->fields)._tween != (DG_Tweening_Tween_o *)0x0) &&
     (bVar4 = DG_Tweening_TweenExtensions__IsActive((__this->fields)._tween,(MethodInfo *)0x0), bVar4)) {
    DG_Tweening_TweenExtensions__Kill((__this->fields)._tween,false,(MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_184344b1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-panel-visual");
    Il2CppMethodInitialized_184344b1d = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._visual;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pGVar2 = (__this->fields)._root;
    if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_181de17ef;
    if (((pGVar2->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)
       && (pGVar3 = (pGVar2->fields)._Screens_k__BackingField,
          (pGVar3->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
      pUVar5 = Gisketch_Aottg2UI_Building_GisketchView__Find
                         ((pGVar3->fields)._active,"main-menu-panel-visual",(MethodInfo *)0x0);
      (__this->fields)._visual = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._visual,pUVar5);
    }
  }
  pUVar5 = (__this->fields)._visual;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  value = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel(pUVar5,shown,0.22,(MethodInfo *)0x0);
  (__this->fields)._tween = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tween,value);
  if (Il2CppMethodInitialized_184344b1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchBrushButtonFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b1e = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._panel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pUVar5 = (__this->fields)._panel;
  if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar6 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                         (pUVar5,true,
                          (MethodInfo_6F5750 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchBrushButtonFeedback
                         ), pUVar6 != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)) {
    uVar7 = 0;
    while( true ) {
      if ((int)pUVar6->max_length <= (int)uVar7) {
        return;
      }
      if ((uint)pUVar6->max_length <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (&pUVar6->m_Items[0].klass)[(int)uVar7];
      if (__this_00 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) break;
      Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
                ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)__this_00,!shown,(MethodInfo *)0x0
                );
      uVar7 = uVar7 + 1;
    }
  }
label_181de17ef:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$PanelVisual
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelVisual (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x181de1460

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelVisual
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar2;
  bool bVar3;
  UnityEngine_GameObject_o *value;
  
  if (Il2CppMethodInitialized_184344b1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-panel-visual");
    Il2CppMethodInitialized_184344b1d = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._visual;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (((pGVar1->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)
       && (pGVar2 = (pGVar1->fields)._Screens_k__BackingField,
          (pGVar2->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
      value = Gisketch_Aottg2UI_Building_GisketchView__Find
                        ((pGVar2->fields)._active,"main-menu-panel-visual",(MethodInfo *)0x0);
      (__this->fields)._visual = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._visual,value);
    }
  }
  return (__this->fields)._visual;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$SetBrushButtonsFaded
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetBrushButtonsFaded (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, bool faded, const MethodInfo* method);
// 0x181de1520

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetBrushButtonsFaded
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,bool faded,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__this_01;
  bool bVar1;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184344b1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchBrushButtonFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b1e = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._panel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = (__this->fields)._panel;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                         (__this_00,true,
                          (MethodInfo_6F5750 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchBrushButtonFeedback
                         ), pUVar2 != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)) {
    uVar3 = 0;
    while( true ) {
      if ((int)pUVar2->max_length <= (int)uVar3) {
        return;
      }
      if ((uint)pUVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      __this_01 = (&pUVar2->m_Items[0].klass)[(int)uVar3];
      if (__this_01 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) break;
      Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
                ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)__this_01,faded,(MethodInfo *)0x0)
      ;
      uVar3 = uVar3 + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x181de18d0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  (__this->fields)._shown = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


