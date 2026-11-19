// Type: Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuPanelHoverSlide.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Setup (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x58c10b0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Setup
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  (__this->fields)._root = root;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._root);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$Update
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Update (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x58c10c0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Update
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_075453d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075453d4 = '\x01';
  }
  x = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_01 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    bVar3 = true;
    method_00 = extraout_RDX;
    if (((pSVar1 != (Settings_UISettings_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).FadeMainMenu, pSVar2 != (Settings_BoolSetting_o *)0x0)) &&
       ((pSVar2->fields)._value != false)) {
      bVar3 = Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__HoverPanelBand(__this,method_01);
      method_00 = extraout_RDX_00;
    }
    if ((__this->fields)._shown != bVar3) {
      Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetShown(__this,bVar3,method_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__OnDestroy (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x58c1390

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  bool bVar1;
  
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    bVar1 = DG_Tweening_TweenExtensions__IsActive(t,(MethodInfo *)0x0);
    if (bVar1) {
      DG_Tweening_TweenExtensions__Kill((__this->fields)._tween,false,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$HoverPanelBand
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__HoverPanelBand (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x58c1180

bool Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__HoverPanelBand
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  bool bVar1;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Canvas_o *__this_02;
  float fVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Vector3_o UVar5;
  
  if (Il2CppMethodInitialized_075453d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075453d5 = '\x01';
  }
  __this_01 = Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelRect(__this,method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  __this_00 = (__this->fields)._root;
  if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    __this_02 = UnityEngine_Component__GetComponentInChildren_object__34b09d0
                          ((UnityEngine_Component_o *)__this_00,
                           (MethodInfo_34B09D0 *)
                           MethodInfo_UnityEngine_Component_GetComponentInChildren_Canvas);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_02 == (UnityEngine_Canvas_o *)0x0) goto label_058c12c8;
      fVar2 = UnityEngine_Canvas__get_scaleFactor(__this_02,(MethodInfo *)0x0);
    }
    else {
      fVar2 = 1.0;
    }
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar3 = 1.0;
      if (1.0 <= UVar4.fields.m_Width) {
        fVar3 = UVar4.fields.m_Width;
      }
      UVar5 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      return UVar5.fields.x < fVar2 * fVar3;
    }
  }
label_058c12c8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$PanelRect
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelRect (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x58c13c0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelRect
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_Object_o *pUVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar3;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  
  if (Il2CppMethodInitialized_075453d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-panel");
    Il2CppMethodInitialized_075453d6 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._panel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._panel;
  bVar4 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pGVar2 = (__this->fields)._root;
    if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_058c14c6;
    pGVar3 = (pGVar2->fields)._Screens_k__BackingField;
    if ((pGVar3 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) &&
       (__this_00 = (pGVar3->fields)._active, __this_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0))
    {
      pUVar5 = Gisketch_Aottg2UI_Building_GisketchView__Find
                         (__this_00,"main-menu-panel",(MethodInfo *)0x0);
      *targetAddress = pUVar5;
      Il2CppCodeGenWriteBarrier(targetAddress);
    }
  }
  pUVar1 = (UnityEngine_Object_o *)*targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return (UnityEngine_RectTransform_o *)0x0;
  }
  if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__GetComponent_object_
                       (*targetAddress,
                        (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    return pUVar6;
  }
label_058c14c6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$SetShown
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetShown (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, bool shown, const MethodInfo* method);
// 0x58c12d0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetShown
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,bool shown,MethodInfo *method)

{
  DG_Tweening_Tween_o **targetAddress;
  bool bVar1;
  UnityEngine_GameObject_o *go;
  DG_Tweening_Tween_o *pDVar2;
  MethodInfo *method_00;
  undefined7 in_register_00000031;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)CONCAT71(in_register_00000031,shown);
  if (Il2CppMethodInitialized_075453d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_075453d7 = '\x01';
  }
  (__this->fields)._shown = shown;
  targetAddress = &(__this->fields)._tween;
  pDVar2 = (__this->fields)._tween;
  if (pDVar2 != (DG_Tweening_Tween_o *)0x0) {
    method_01 = (MethodInfo *)0x0;
    bVar1 = DG_Tweening_TweenExtensions__IsActive(pDVar2,(MethodInfo *)0x0);
    if (bVar1) {
      method_01 = (MethodInfo *)0x0;
      DG_Tweening_TweenExtensions__Kill(*targetAddress,false,(MethodInfo *)0x0);
    }
  }
  go = Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelVisual(__this,method_01);
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  pDVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel(go,shown,0.22,(MethodInfo *)0x0);
  (__this->fields)._tween = pDVar2;
  Il2CppCodeGenWriteBarrier(targetAddress);
  Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetBrushButtonsFaded(__this,!shown,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$PanelVisual
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelVisual (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x58c14d0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelVisual
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (Il2CppMethodInitialized_075453d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-panel-visual");
    Il2CppMethodInitialized_075453d8 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._visual;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._visual;
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar2 = (pGVar1->fields)._Screens_k__BackingField;
    if ((pGVar2 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) &&
       (__this_00 = (pGVar2->fields)._active, __this_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0))
    {
      pUVar4 = Gisketch_Aottg2UI_Building_GisketchView__Find
                         (__this_00,"main-menu-panel-visual",(MethodInfo *)0x0);
      *targetAddress = pUVar4;
      Il2CppCodeGenWriteBarrier(targetAddress);
    }
  }
  return *targetAddress;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$SetBrushButtonsFaded
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetBrushButtonsFaded (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, bool faded, const MethodInfo* method);
// 0x58c1580

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetBrushButtonsFaded
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,bool faded,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_075453d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchBrushButtonFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075453d9 = '\x01';
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
     (pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object_
                         (__this_00,true,
                          (MethodInfo_353C0B0 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchBrushButtonFeedback
                         ), pSVar3 != (System_Object_array *)0x0)) {
    uVar2 = (uint)pSVar3->max_length;
    if ((int)uVar2 < 1) {
      return;
    }
    uVar4 = 0;
    while( true ) {
      if (uVar2 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pSVar3->m_Items[(int)uVar4] ==
          (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) break;
      Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
                ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pSVar3->m_Items[(int)uVar4],faded,
                 (MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      uVar2 = (uint)pSVar3->max_length;
      if ((int)uVar2 <= (int)uVar4) {
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x58c1650

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  (__this->fields)._shown = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


