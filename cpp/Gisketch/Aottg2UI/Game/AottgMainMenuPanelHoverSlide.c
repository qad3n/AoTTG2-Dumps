// Type: Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuPanelHoverSlide.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Setup (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x44f72f0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Setup
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  (__this->fields)._root = root;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._root);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$Update
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Update (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x44f7300

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__Update
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  long lVar2;
  UnityEngine_Object_o *x_00;
  bool_conflict bVar3;
  uint uVar4;
  ulong uVar5;
  UnityEngine_GameObject_o *go;
  DG_Tweening_Tween_o *pDVar6;
  System_Object_array *pSVar7;
  uint uVar8;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_00;
  
  if (g_data_057aecb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057aecb7 = '\x01';
  }
  x = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar9 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    uVar5 = 1;
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x128), lVar2 != 0)) && (*(char *)(lVar2 + 0x11) != '\0'))
    {
      uVar4 = Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__HoverPanelBand(__this,pMVar9);
      uVar5 = (ulong)uVar4;
    }
    pMVar9 = (MethodInfo *)(uVar5 & 0xff);
    uVar4 = (uint)pMVar9;
    if (uVar4 != (byte)(__this->fields)._shown) {
      if (g_data_057aecba == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
        g_data_057aecba = '\x01';
      }
      *(byte *)&(__this->fields)._shown = (byte)uVar5;
      ppDVar1 = &(__this->fields)._tween;
      pDVar6 = (__this->fields)._tween;
      if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
        pMVar9 = (MethodInfo *)0x0;
        bVar3 = DG_Tweening_TweenExtensions__IsActive(pDVar6,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          pMVar9 = (MethodInfo *)0x0;
          DG_Tweening_TweenExtensions__Kill(*ppDVar1,0,(MethodInfo *)0x0);
        }
      }
      go = Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelVisual(__this,pMVar9);
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel(go,uVar4,0.22,(MethodInfo *)0x0);
      (__this->fields)._tween = pDVar6;
      il2cpp_runtime_helper_022b4080(ppDVar1,pDVar6);
      if (g_data_057aecbc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonFeedback_GetComponentsInChildren_Gisk);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aecbc = '\x01';
      }
      x_00 = (UnityEngine_Object_o *)(__this->fields)._panel;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return;
      }
      __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)(__this->fields)._panel;
      if ((__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) &&
         (pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object_
                             ((UnityEngine_GameObject_o *)__this_00,1,MethodInfo_GisketchBrushButtonFeedback_GetComponentsInChildren_Gisk),
         pSVar7 != (System_Object_array *)0x0)) {
        uVar4 = (uint)pSVar7->max_length;
        if ((int)uVar4 < 1) {
          return;
        }
        uVar8 = 0;
        while (uVar8 < uVar4) {
          __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pSVar7->m_Items[(int)uVar8];
          if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) goto label_044f785f;
          Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
                    (__this_00,(uint)(byte)((byte)uVar5 ^ 1),(MethodInfo *)0x0);
          uVar8 = uVar8 + 1;
          uVar4 = (uint)pSVar7->max_length;
          if ((int)uVar4 <= (int)uVar8) {
            return;
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
label_044f785f:
      il2cpp_runtime_helper_022b2c90();
      *(undefined1 *)&(__this_00->fields)._contentOrigin.fields.x = 1;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__OnDestroy (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x44f75b0

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
// 0x44f73c0

bool_conflict
Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__HoverPanelBand
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  uint uVar3;
  bool_conflict extraout_EAX;
  UnityEngine_RectTransform_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this_02;
  undefined8 extraout_RAX;
  UnityEngine_GameObject_o *go;
  DG_Tweening_Tween_o *pDVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  MethodInfo *pMVar7;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this_03;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_04;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Vector3_o UVar10;
  float local_1c;
  
  if (g_data_057aecb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponentInChildren_Canvas);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aecb8 = '\x01';
  }
  __this_01 = Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelRect(__this,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
  }
  __this_00 = (__this->fields)._root;
  __this_03 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *)0x0;
  if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    __this_02 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *)
                UnityEngine_Component__GetComponentInChildren_object__24e7d50
                          ((UnityEngine_Component_o *)__this_00,MethodInfo_Canvas_GetComponentInChildren_Canvas);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar7 = (MethodInfo *)0x0;
    __this_03 = __this_02;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      local_1c = 1.0;
    }
    else {
      if (__this_02 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *)0x0) goto label_044f74e1;
      pMVar7 = (MethodInfo *)0x0;
      local_1c = UnityEngine_Canvas__get_scaleFactor((UnityEngine_Canvas_o *)__this_02,(MethodInfo *)0x0);
      __this_03 = __this_02;
    }
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      UVar9 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
      fVar8 = 1.0;
      if (1.0 <= UVar9.fields.m_Width) {
        fVar8 = UVar9.fields.m_Width;
      }
      UVar10 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),UVar10.fields.x < local_1c * fVar8);
    }
  }
label_044f74e1:
  il2cpp_runtime_helper_022b2c90();
  method_00 = pMVar7;
  if (g_data_057aecba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057aecba = '\x01';
  }
  *(byte *)&(__this_03->fields)._shown = (byte)pMVar7;
  ppDVar1 = &(__this_03->fields)._tween;
  pDVar4 = (__this_03->fields)._tween;
  if (pDVar4 != (DG_Tweening_Tween_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = DG_Tweening_TweenExtensions__IsActive(pDVar4,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      method_00 = (MethodInfo *)0x0;
      DG_Tweening_TweenExtensions__Kill(*ppDVar1,0,(MethodInfo *)0x0);
    }
  }
  go = Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelVisual(__this_03,method_00);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel
                     (go,(uint)pMVar7 & 0xff,0.22,(MethodInfo *)0x0);
  (__this_03->fields)._tween = pDVar4;
  il2cpp_runtime_helper_022b4080(ppDVar1,pDVar4);
  if (g_data_057aecbc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonFeedback_GetComponentsInChildren_Gisk);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aecbc = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this_03->fields)._panel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)uVar3 == '\0') {
    __this_04 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)(__this_03->fields)._panel;
    if ((__this_04 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) ||
       (pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object_
                           ((UnityEngine_GameObject_o *)__this_04,1,MethodInfo_GisketchBrushButtonFeedback_GetComponentsInChildren_Gisk),
       pSVar5 == (System_Object_array *)0x0)) {
label_044f785f:
      il2cpp_runtime_helper_022b2c90();
      *(undefined1 *)&(__this_04->fields)._contentOrigin.fields.x = 1;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_04,(MethodInfo *)0x0);
      return extraout_EAX;
    }
    uVar3 = (uint)pSVar5->max_length;
    if (0 < (int)uVar3) {
      uVar6 = 0;
      do {
        if (uVar3 <= uVar6) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_044f785f;
        }
        __this_04 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pSVar5->m_Items[(int)uVar6];
        if (__this_04 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) goto label_044f785f;
        Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
                  (__this_04,(uint)(byte)((byte)pMVar7 ^ 1),(MethodInfo *)0x0);
        uVar6 = uVar6 + 1;
        uVar3 = (uint)pSVar5->max_length;
      } while ((int)uVar6 < (int)uVar3);
    }
  }
  return uVar3;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$PanelRect
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelRect (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x44f75e0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelRect
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  uint uVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *__this_00;
  long lVar6;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_01;
  bool_conflict bVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_Object_c *pUVar10;
  undefined4 extraout_var;
  System_Object_array *pSVar11;
  UnityEngine_RectTransform_o *extraout_RAX;
  uint uVar12;
  uint uVar13;
  UnityEngine_Object_o *pUVar14;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_02;
  
  if (g_data_057aecb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"main-menu-panel");
    g_data_057aecb9 = '\x01';
  }
  pUVar14 = (UnityEngine_Object_o *)(__this->fields)._panel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._panel;
  bVar7 = UnityEngine_Object__op_Equality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pGVar4 = (__this->fields)._root;
    if (pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_044f76e6;
    pGVar5 = (pGVar4->fields)._Manifest_k__BackingField;
    if ((pGVar5 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) &&
       (__this_00 = (pGVar5->fields).screens,
       __this_00 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0)) {
      pUVar8 = Gisketch_Aottg2UI_Building_GisketchView__Find
                         ((Gisketch_Aottg2UI_Building_GisketchView_o *)__this_00,"main-menu-panel",
                          (MethodInfo *)0x0);
      *ppUVar1 = pUVar8;
      il2cpp_runtime_helper_022b4080(ppUVar1);
    }
  }
  pUVar14 = (UnityEngine_Object_o *)*ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return (UnityEngine_RectTransform_o *)0x0;
  }
  pUVar14 = (UnityEngine_Object_o *)0x0;
  if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar9 = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent_object_(*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
    return pUVar9;
  }
label_044f76e6:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecbb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"main-menu-panel-visual");
    g_data_057aecbb = '\x01';
  }
  pUVar10 = pUVar14[2].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar2 = pUVar14 + 2;
  uVar13 = 0;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (pUVar14[1].monitor == (void *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aecbc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonFeedback_GetComponentsInChildren_Gisk);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aecbc = '\x01';
      }
      pUVar14 = *(UnityEngine_Object_o **)&(pUVar10->_1).byval_arg.bits;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Equality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return (UnityEngine_RectTransform_o *)CONCAT44(extraout_var,bVar7);
      }
      __this_02 = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)&(pUVar10->_1).byval_arg.bits;
      if ((__this_02 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) &&
         (pSVar11 = UnityEngine_GameObject__GetComponentsInChildren_object_
                              ((UnityEngine_GameObject_o *)__this_02,1,MethodInfo_GisketchBrushButtonFeedback_GetComponentsInChildren_Gisk),
         pSVar11 != (System_Object_array *)0x0)) {
        uVar12 = (uint)pSVar11->max_length;
        pUVar9 = (UnityEngine_RectTransform_o *)(ulong)uVar12;
        if ((int)uVar12 < 1) {
          return pUVar9;
        }
        uVar12 = 0;
        while (uVar12 < (uint)pUVar9) {
          __this_02 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pSVar11->m_Items[(int)uVar12]
          ;
          if (__this_02 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) goto label_044f785f;
          Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
                    (__this_02,uVar13 & 0xff,(MethodInfo *)0x0);
          uVar12 = uVar12 + 1;
          uVar3 = (uint)pSVar11->max_length;
          pUVar9 = (UnityEngine_RectTransform_o *)(ulong)uVar3;
          if ((int)uVar3 <= (int)uVar12) {
            return pUVar9;
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
label_044f785f:
      il2cpp_runtime_helper_022b2c90();
      *(undefined1 *)&(__this_02->fields)._contentOrigin.fields.x = 1;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    lVar6 = *(long *)((long)pUVar14[1].monitor + 0x80);
    if ((lVar6 != 0) &&
       (__this_01 = *(Gisketch_Aottg2UI_Building_GisketchView_o **)(lVar6 + 0x28),
       __this_01 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
      pUVar10 = (UnityEngine_Object_c *)
                Gisketch_Aottg2UI_Building_GisketchView__Find(__this_01,"main-menu-panel-visual",(MethodInfo *)0x0);
      pUVar2->klass = pUVar10;
      il2cpp_runtime_helper_022b4080(pUVar2,pUVar10);
    }
  }
  return (UnityEngine_RectTransform_o *)pUVar2->klass;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$SetShown
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetShown (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, bool shown, const MethodInfo* method);
// 0x44f74f0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetShown
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,bool_conflict shown,
               MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  uint uVar3;
  UnityEngine_GameObject_o *go;
  DG_Tweening_Tween_o *pDVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,shown);
  if (g_data_057aecba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    g_data_057aecba = '\x01';
  }
  *(byte *)&(__this->fields)._shown = (byte)shown;
  ppDVar1 = &(__this->fields)._tween;
  pDVar4 = (__this->fields)._tween;
  if (pDVar4 != (DG_Tweening_Tween_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = DG_Tweening_TweenExtensions__IsActive(pDVar4,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      method_00 = (MethodInfo *)0x0;
      DG_Tweening_TweenExtensions__Kill(*ppDVar1,0,(MethodInfo *)0x0);
    }
  }
  go = Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelVisual(__this,method_00);
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pDVar4 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayMainMenuPanel
                     (go,shown & 0xff,0.22,(MethodInfo *)0x0);
  (__this->fields)._tween = pDVar4;
  il2cpp_runtime_helper_022b4080(ppDVar1,pDVar4);
  if (g_data_057aecbc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonFeedback_GetComponentsInChildren_Gisk);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aecbc = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._panel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)(__this->fields)._panel;
  if ((__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) &&
     (pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object_
                         ((UnityEngine_GameObject_o *)__this_00,1,MethodInfo_GisketchBrushButtonFeedback_GetComponentsInChildren_Gisk),
     pSVar5 != (System_Object_array *)0x0)) {
    uVar3 = (uint)pSVar5->max_length;
    if ((int)uVar3 < 1) {
      return;
    }
    uVar6 = 0;
    while (uVar6 < uVar3) {
      __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pSVar5->m_Items[(int)uVar6];
      if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) goto label_044f785f;
      Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
                (__this_00,(uint)(byte)((byte)shown ^ 1),(MethodInfo *)0x0);
      uVar6 = uVar6 + 1;
      uVar3 = (uint)pSVar5->max_length;
      if ((int)uVar3 <= (int)uVar6) {
        return;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_044f785f:
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&(__this_00->fields)._contentOrigin.fields.x = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$PanelVisual
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelVisual (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x44f76f0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__PanelVisual
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  uint uVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *__this_00;
  UnityEngine_Object_o *x;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *pUVar6;
  undefined4 extraout_var;
  System_Object_array *pSVar7;
  UnityEngine_GameObject_o *extraout_RAX;
  uint uVar8;
  uint uVar9;
  UnityEngine_Object_o *x_00;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_01;
  
  if (g_data_057aecbb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"main-menu-panel-visual");
    g_data_057aecbb = '\x01';
  }
  x_00 = (UnityEngine_Object_o *)(__this->fields)._visual;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._visual;
  uVar9 = 0;
  bVar5 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pGVar3 = (__this->fields)._root;
    if (pGVar3 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aecbc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonFeedback_GetComponentsInChildren_Gisk);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aecbc = '\x01';
      }
      x = (UnityEngine_Object_o *)x_00[1].fields.m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return (UnityEngine_GameObject_o *)CONCAT44(extraout_var,bVar5);
      }
      __this_01 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)x_00[1].fields.m_CachedPtr;
      if ((__this_01 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) &&
         (pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object_
                             ((UnityEngine_GameObject_o *)__this_01,1,MethodInfo_GisketchBrushButtonFeedback_GetComponentsInChildren_Gisk),
         pSVar7 != (System_Object_array *)0x0)) {
        uVar8 = (uint)pSVar7->max_length;
        pUVar6 = (UnityEngine_GameObject_o *)(ulong)uVar8;
        if ((int)uVar8 < 1) {
          return pUVar6;
        }
        uVar8 = 0;
        while (uVar8 < (uint)pUVar6) {
          __this_01 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pSVar7->m_Items[(int)uVar8];
          if (__this_01 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) goto label_044f785f;
          Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
                    (__this_01,uVar9 & 0xff,(MethodInfo *)0x0);
          uVar8 = uVar8 + 1;
          uVar2 = (uint)pSVar7->max_length;
          pUVar6 = (UnityEngine_GameObject_o *)(ulong)uVar2;
          if ((int)uVar2 <= (int)uVar8) {
            return pUVar6;
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
label_044f785f:
      il2cpp_runtime_helper_022b2c90();
      *(undefined1 *)&(__this_01->fields)._contentOrigin.fields.x = 1;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    pGVar4 = (pGVar3->fields)._Manifest_k__BackingField;
    if ((pGVar4 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) &&
       (__this_00 = (pGVar4->fields).screens,
       __this_00 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0)) {
      pUVar6 = Gisketch_Aottg2UI_Building_GisketchView__Find
                         ((Gisketch_Aottg2UI_Building_GisketchView_o *)__this_00,"main-menu-panel-visual",
                          (MethodInfo *)0x0);
      *ppUVar1 = pUVar6;
      il2cpp_runtime_helper_022b4080(ppUVar1,pUVar6);
    }
  }
  return *ppUVar1;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$SetBrushButtonsFaded
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetBrushButtonsFaded (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, bool faded, const MethodInfo* method);
// 0x44f77a0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide__SetBrushButtonsFaded
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,bool_conflict faded,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_00;
  
  if (g_data_057aecbc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonFeedback_GetComponentsInChildren_Gisk);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aecbc = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._panel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)(__this->fields)._panel;
  if ((__this_00 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) &&
     (pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object_
                         ((UnityEngine_GameObject_o *)__this_00,1,MethodInfo_GisketchBrushButtonFeedback_GetComponentsInChildren_Gisk),
     pSVar3 != (System_Object_array *)0x0)) {
    uVar2 = (uint)pSVar3->max_length;
    if ((int)uVar2 < 1) {
      return;
    }
    uVar4 = 0;
    while (uVar4 < uVar2) {
      __this_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pSVar3->m_Items[(int)uVar4];
      if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) goto label_044f785f;
      Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
                (__this_00,faded & 0xff,(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      uVar2 = (uint)pSVar3->max_length;
      if ((int)uVar2 <= (int)uVar4) {
        return;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_044f785f:
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&(__this_00->fields)._contentOrigin.fields.x = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o* __this, const MethodInfo* method);
// 0x44f7870

void Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanelHoverSlide_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._shown = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


