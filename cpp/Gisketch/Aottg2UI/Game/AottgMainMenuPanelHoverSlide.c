// Type: Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuPanelHoverSlide.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Setup (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x41c6460

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Setup
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  (__this->fields)._root = root;
  il2cpp_runtime_glue(&(__this->fields)._root);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$Update
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Update (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x41c6470

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Update
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  long lVar1;
  bool_conflict bVar2;
  uint uVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_05704de8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704de8 = '\x01';
  }
  x = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_01 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    uVar3 = 1;
    method_00 = extraout_RDX;
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x128), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x11) != '\0')) {
      uVar3 = Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__HoverPanelBand(__this,method_01);
      method_00 = extraout_RDX_00;
    }
    if ((uVar3 & 0xff) != (uint)(byte)(__this->fields)._shown) {
      Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetShown(__this,uVar3 & 0xff,method_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__OnDestroy (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x41c6720

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  bool_conflict bVar1;
  
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    bVar1 = DG_Tweening_TweenExtensions__IsActive(t,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      DG_Tweening_TweenExtensions__Kill((__this->fields)._tween,0,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$HoverPanelBand
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__HoverPanelBand (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x41c6530

bool_conflict
Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__HoverPanelBand
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  bool_conflict bVar1;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Canvas_o *__this_02;
  undefined8 extraout_RAX;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Rect_o UVar4;
  float local_1c;
  
  if (DAT_05704de9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponentInChildren_Canvas);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704de9 = '\x01';
  }
  __this_01 = Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelRect(__this,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 != '\0') {
    return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
  }
  __this_00 = (__this->fields)._root;
  if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    __this_02 = (UnityEngine_Canvas_o *)
                UnityEngine_Component__GetComponentInChildren<object>
                          ((UnityEngine_Component_o *)__this_00,MethodInfo_Canvas_GetComponentInChildren_Canvas);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      local_1c = 1.0;
    }
    else {
      if (__this_02 == (UnityEngine_Canvas_o *)0x0) goto LAB_041c6651;
      local_1c = UnityEngine_Canvas__get_scaleFactor(__this_02,(MethodInfo *)0x0);
    }
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
      fVar2 = 1.0;
      if (1.0 <= UVar4.fields.m_Width) {
        fVar2 = UVar4.fields.m_Width;
      }
      UVar3 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      return (bool_conflict)
             CONCAT71((int7)((ulong)extraout_RAX >> 8),UVar3.fields.x < local_1c * fVar2);
    }
  }
LAB_041c6651:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$PanelRect
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelRect (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x41c6750

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelRect
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *__this_00;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  
  if (DAT_05704dea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"main-menu-panel");
    DAT_05704dea = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._panel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._panel;
  bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pGVar3 = (__this->fields)._root;
    if (pGVar3 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto LAB_041c6856;
    pGVar4 = (pGVar3->fields)._Manifest_k__BackingField;
    if ((pGVar4 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) &&
       (__this_00 = (pGVar4->fields).screens,
       __this_00 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0)) {
      pUVar6 = Gisketch_Aottg2UI_Building_GisketchView__Find
                         ((Gisketch_Aottg2UI_Building_GisketchView_o *)__this_00,"main-menu-panel",
                          (MethodInfo *)0x0);
      *ppUVar1 = pUVar6;
      il2cpp_runtime_glue(ppUVar1);
    }
  }
  pUVar2 = (UnityEngine_Object_o *)*ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return (UnityEngine_RectTransform_o *)0x0;
  }
  if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
    return pUVar7;
  }
LAB_041c6856:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$SetShown
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetShown (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, bool shown, const MethodInfo* method);
// 0x41c6660

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetShown
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,bool_conflict shown,
               MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *go;
  DG_Tweening_Tween_o *pDVar3;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,shown);
  if (DAT_05704deb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    DAT_05704deb = '\x01';
  }
  *(byte *)&(__this->fields)._shown = (byte)shown;
  ppDVar1 = &(__this->fields)._tween;
  pDVar3 = (__this->fields)._tween;
  if (pDVar3 != (DG_Tweening_Tween_o *)0x0) {
    method_01 = (MethodInfo *)0x0;
    bVar2 = DG_Tweening_TweenExtensions__IsActive(pDVar3,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      method_01 = (MethodInfo *)0x0;
      DG_Tweening_TweenExtensions__Kill(*ppDVar1,0,(MethodInfo *)0x0);
    }
  }
  go = Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelVisual(__this,method_01);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pDVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel
                     (go,shown & 0xff,0.22,(MethodInfo *)0x0);
  (__this->fields)._tween = pDVar3;
  il2cpp_runtime_glue(ppDVar1,pDVar3);
  Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetBrushButtonsFaded
            (__this,(uint)(byte)((byte)shown ^ 1),method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$PanelVisual
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelVisual (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x41c6860

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelVisual
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *__this_00;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  
  if (DAT_05704dec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"main-menu-panel-visual");
    DAT_05704dec = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._visual;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._visual;
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pGVar2 = (__this->fields)._root;
    if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pGVar3 = (pGVar2->fields)._Manifest_k__BackingField;
    if ((pGVar3 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) &&
       (__this_00 = (pGVar3->fields).screens,
       __this_00 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0)) {
      pUVar5 = Gisketch_Aottg2UI_Building_GisketchView__Find
                         ((Gisketch_Aottg2UI_Building_GisketchView_o *)__this_00,"main-menu-panel-visual",
                          (MethodInfo *)0x0);
      *ppUVar1 = pUVar5;
      il2cpp_runtime_glue(ppUVar1,pUVar5);
    }
  }
  return *ppUVar1;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$SetBrushButtonsFaded
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetBrushButtonsFaded (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, bool faded, const MethodInfo* method);
// 0x41c6910

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetBrushButtonsFaded
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,bool_conflict faded,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  
  if (DAT_05704ded == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchBrushButtonFeedback___GetComponentsInChi);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ded = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._panel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  __this_00 = (__this->fields)._panel;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar3 = UnityEngine_GameObject__GetComponentsInChildren<object>(__this_00,1,MethodInfo_GisketchBrushButtonFeedback___GetComponentsInChi),
     pSVar3 != (System_Object_array *)0x0)) {
    uVar2 = (uint)pSVar3->max_length;
    if ((int)uVar2 < 1) {
      return;
    }
    uVar4 = 0;
    while( true ) {
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pSVar3->m_Items[(int)uVar4] ==
          (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) break;
      Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
                ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)
                 pSVar3->m_Items[(int)uVar4],faded & 0xff,(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      uVar2 = (uint)pSVar3->max_length;
      if ((int)uVar2 <= (int)uVar4) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x41c69e0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._shown = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


