// Type: PatreonEffects.NameEffectApplier
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectApplier.cs
// Prior source: NEW in this update
// --------------------------------

// PatreonEffects.NameEffectApplier$$Awake
// il2cpp: void PatreonEffects_NameEffectApplier__Awake (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x3f21bb0

void PatreonEffects_NameEffectApplier__Awake
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  
  if (DAT_05703cec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    DAT_05703cec = '\x01';
  }
  pUVar1 = (UnityEngine_UI_Text_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Text_GetComponent_Text);
  (__this->fields)._legacyText = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._legacyText,pUVar1);
  return;
}


// PatreonEffects.NameEffectApplier$$ApplyForPlayer
// il2cpp: void PatreonEffects_NameEffectApplier__ApplyForPlayer (PatreonEffects_NameEffectApplier_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3f21c00

void PatreonEffects_NameEffectApplier__ApplyForPlayer
               (PatreonEffects_NameEffectApplier_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  bool_conflict bVar1;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_00;
  undefined1 local_1a8 [88];
  InvokerMethod pIStack_150;
  Il2CppMethodPointer local_148;
  Il2CppMethodPointer pIStack_140;
  InvokerMethod local_138;
  char *pcStack_130;
  Il2CppClass *local_128;
  Il2CppType *pIStack_120;
  Il2CppType **local_118;
  _union_13 _Stack_110;
  _union_14 local_108;
  Il2CppMethodPointer local_f8;
  Il2CppMethodPointer pIStack_f0;
  InvokerMethod local_e8;
  char *pcStack_e0;
  Il2CppClass *local_d8;
  Il2CppType *pIStack_d0;
  Il2CppType **local_c8;
  _union_13 _Stack_c0;
  _union_14 local_b8;
  Il2CppMethodPointer local_a8;
  Il2CppMethodPointer pIStack_a0;
  InvokerMethod local_98;
  char *pcStack_90;
  Il2CppClass *local_88;
  Il2CppType *pIStack_80;
  Il2CppType **local_78;
  _union_13 _Stack_70;
  _union_14 local_68;
  Il2CppMethodPointer local_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod local_48;
  char *pcStack_40;
  Il2CppClass *local_38;
  Il2CppType *pIStack_30;
  Il2CppType **local_28;
  _union_13 _Stack_20;
  _union_14 local_18;
  
  method_00 = (MethodInfo *)local_1a8;
  local_1a8._48_8_ = (Il2CppType **)0x0;
  local_1a8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_1a8._32_8_ = (Il2CppClass *)0x0;
  local_1a8._40_8_ = (Il2CppType *)0x0;
  local_1a8._16_8_ = (InvokerMethod)0x0;
  local_1a8._24_8_ = (char *)0x0;
  local_1a8._0_8_ = (Il2CppMethodPointer)0x0;
  local_1a8._8_8_ = (Il2CppMethodPointer)0x0;
  local_1a8._64_8_ = (void *)0x0;
  bVar1 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                    (player,(PatreonEffects_ResolvedNameEffect_o *)local_1a8,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    PatreonEffects_NameEffectApplier__ClearEffect(__this,method_00);
    return;
  }
  PatreonEffects_NameEffectApplier__EnsureOverlay(__this,method_00);
  settings = PatreonEffects_NameEffectPresets__GetPreset(local_1a8._4_4_,(MethodInfo *)0x0);
  local_18.genericMethod = (void *)local_1a8._64_8_;
  local_28 = (Il2CppType **)local_1a8._48_8_;
  _Stack_20.rgctx_data = (Il2CppRGCTXData *)local_1a8._56_8_;
  local_38 = (Il2CppClass *)local_1a8._32_8_;
  pIStack_30 = (Il2CppType *)local_1a8._40_8_;
  local_48 = (InvokerMethod)local_1a8._16_8_;
  pcStack_40 = (char *)local_1a8._24_8_;
  local_58 = (Il2CppMethodPointer)local_1a8._0_8_;
  pIStack_50 = (Il2CppMethodPointer)local_1a8._8_8_;
  local_1a8._80_8_ = local_1a8._8_8_;
  pIStack_150 = (InvokerMethod)local_1a8._16_8_;
  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (settings->fields).gradientA.fields.r = (float)local_1a8._8_4_;
    (settings->fields).gradientA.fields.g = (float)local_1a8._12_4_;
    (settings->fields).gradientA.fields.b = (float)local_1a8._16_4_;
    (settings->fields).gradientA.fields.a = (float)local_1a8._20_4_;
    local_88 = (Il2CppClass *)local_1a8._32_8_;
    pIStack_80 = (Il2CppType *)local_1a8._40_8_;
    local_98 = (InvokerMethod)local_1a8._16_8_;
    pcStack_90 = (char *)local_1a8._24_8_;
    local_68.genericMethod = (void *)local_1a8._64_8_;
    local_78 = (Il2CppType **)local_1a8._48_8_;
    _Stack_70.rgctx_data = (Il2CppRGCTXData *)local_1a8._56_8_;
    local_a8 = (Il2CppMethodPointer)local_1a8._0_8_;
    pIStack_a0 = (Il2CppMethodPointer)local_1a8._8_8_;
    (settings->fields).gradientB.fields.r = (float)local_1a8._24_4_;
    (settings->fields).gradientB.fields.g = (float)local_1a8._28_4_;
    (settings->fields).gradientB.fields.b = (float)local_1a8._32_4_;
    (settings->fields).gradientB.fields.a = (float)local_1a8._36_4_;
    local_c8 = (Il2CppType **)local_1a8._48_8_;
    _Stack_c0.rgctx_data = (Il2CppRGCTXData *)local_1a8._56_8_;
    local_d8 = (Il2CppClass *)local_1a8._32_8_;
    pIStack_d0 = (Il2CppType *)local_1a8._40_8_;
    local_b8.genericMethod = (void *)local_1a8._64_8_;
    local_e8 = (InvokerMethod)local_1a8._16_8_;
    pcStack_e0 = (char *)local_1a8._24_8_;
    local_f8 = (Il2CppMethodPointer)local_1a8._0_8_;
    pIStack_f0 = (Il2CppMethodPointer)local_1a8._8_8_;
    (settings->fields).gradientC.fields.r = (float)local_1a8._40_4_;
    (settings->fields).gradientC.fields.g = (float)local_1a8._44_4_;
    (settings->fields).gradientC.fields.b = (float)local_1a8._48_4_;
    (settings->fields).gradientC.fields.a = (float)local_1a8._52_4_;
    local_108.genericMethod = (void *)local_1a8._64_8_;
    local_118 = (Il2CppType **)local_1a8._48_8_;
    _Stack_110.rgctx_data = (Il2CppRGCTXData *)local_1a8._56_8_;
    local_128 = (Il2CppClass *)local_1a8._32_8_;
    pIStack_120 = (Il2CppType *)local_1a8._40_8_;
    local_138 = (InvokerMethod)local_1a8._16_8_;
    pcStack_130 = (char *)local_1a8._24_8_;
    local_148 = (Il2CppMethodPointer)local_1a8._0_8_;
    pIStack_140 = (Il2CppMethodPointer)local_1a8._8_8_;
    (settings->fields).gradientD.fields.r = (float)local_1a8._56_4_;
    (settings->fields).gradientD.fields.g = (float)local_1a8._60_4_;
    (settings->fields).gradientD.fields.b = (float)local_1a8._64_4_;
    (settings->fields).gradientD.fields.a = (float)local_1a8._68_4_;
    __this_00 = (__this->fields)._controller;
    if (__this_00 != (PatreonEffects_NameEffectController_o *)0x0) {
      PatreonEffects_NameEffectController__Apply(__this_00,settings,(MethodInfo *)0x0);
      PatreonEffects_NameEffectApplier__SyncText(__this,(MethodInfo *)settings);
      __this_01 = (__this->fields)._tmpOverlay;
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,1,(MethodInfo *)0x0);
        __this_02 = (__this->fields)._legacyText;
        if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
          UnityEngine_Behaviour__set_enabled
                    ((UnityEngine_Behaviour_o *)__this_02,0,(MethodInfo *)0x0);
          *(undefined1 *)&(__this->fields)._effectActive = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectApplier$$SyncText
// il2cpp: void PatreonEffects_NameEffectApplier__SyncText (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x3f22330

void PatreonEffects_NameEffectApplier__SyncText
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_UI_Text_o *pUVar2;
  TMPro_TextMeshProUGUI_c *pTVar3;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar4;
  undefined8 uVar5;
  
  if (DAT_05703ced == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703ced = '\x01';
  }
  pTVar1 = (__this->fields)._tmpText;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar2 = (__this->fields)._legacyText;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pUVar2 = (__this->fields)._legacyText;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        pTVar1 = (__this->fields)._tmpText;
        uVar5 = (*(pUVar2->klass->vtable)._74_get_text.methodPtr)
                          (pUVar2,(pUVar2->klass->vtable)._74_get_text.method);
        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pTVar3 = pTVar1->klass;
          vtable_dispatch = (pTVar3->vtable)._66_set_text.methodPtr;
          (*vtable_dispatch)
                    (pTVar1,uVar5,(pTVar3->vtable)._66_set_text.method,pTVar3,vtable_dispatch)
          ;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// PatreonEffects.NameEffectApplier$$ClearEffect
// il2cpp: void PatreonEffects_NameEffectApplier__ClearEffect (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x3f21e10

void PatreonEffects_NameEffectApplier__ClearEffect
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05703cee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703cee = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._tmpOverlay;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    __this_00 = (__this->fields)._tmpOverlay;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_03f21eb7;
    UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._legacyText;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._legacyText;
    if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) {
LAB_03f21eb7:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,1,(MethodInfo *)0x0);
  }
  *(undefined1 *)&(__this->fields)._effectActive = 0;
  return;
}


// PatreonEffects.NameEffectApplier$$get_IsEffectActive
// il2cpp: bool PatreonEffects_NameEffectApplier__get_IsEffectActive (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x3f22400

bool_conflict
PatreonEffects_NameEffectApplier__get_IsEffectActive
          (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._effectActive);
}


// PatreonEffects.NameEffectApplier$$EnsureOverlay
// il2cpp: void PatreonEffects_NameEffectApplier__EnsureOverlay (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x3f21ec0

void PatreonEffects_NameEffectApplier__EnsureOverlay
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  TMPro_TextMeshProUGUI_o **ppTVar2;
  UnityEngine_Object_o *x;
  UnityEngine_UI_Text_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  int32_t iVar4;
  System_Type_array *components;
  System_Type_o *pSVar5;
  long lVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  TMPro_TextMeshProUGUI_o *pTVar9;
  PatreonEffects_NameEffectController_o *pPVar10;
  undefined8 uVar11;
  UnityEngine_Vector2_o UVar12;
  UnityEngine_Vector3_o value;
  
  if (DAT_05703cef == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CanvasRenderer);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_NameEffectController_AddComponent_NameEffectCont);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeRef_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"NameEffectOverlay");
    DAT_05703cef = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._tmpOverlay;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
LAB_03f2230f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((components->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_03f22319;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar5;
    il2cpp_runtime_glue(components->m_Items);
    pSVar5 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar5 != (System_Type_o *)0x0) {
      lVar6 = il2cpp_runtime_glue(pSVar5,(((components->obj).klass)->_1).element_class);
      if (lVar6 == 0) goto LAB_03f22319;
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar5;
      il2cpp_runtime_glue(components->m_Items + 1);
      pSVar5 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
      if (pSVar5 != (System_Type_o *)0x0) {
        lVar6 = il2cpp_runtime_glue(pSVar5,(((components->obj).klass)->_1).element_class);
        if (lVar6 == 0) {
LAB_03f22319:
          uVar11 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar11,0);
        }
      }
      if (2 < (uint)components->max_length) {
        ppUVar1 = &(__this->fields)._tmpOverlay;
        components->m_Items[2] = pSVar5;
        il2cpp_runtime_glue(components->m_Items + 2,pSVar5);
        pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(pUVar7,"NameEffectOverlay",components,(MethodInfo *)0x0);
        *ppUVar1 = pUVar7;
        il2cpp_runtime_glue(ppUVar1);
        if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pUVar8 = UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent(__this_01,pUVar8,0,(MethodInfo *)0x0);
              __this_02 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
              pUVar7 = (__this->fields)._tmpOverlay;
              if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                __this_03 = (UnityEngine_RectTransform_o *)
                            UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
                if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar12 = UnityEngine_RectTransform__get_anchorMin(__this_02,(MethodInfo *)0x0);
                  if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMin(__this_03,UVar12,(MethodInfo *)0x0);
                    UVar12 = UnityEngine_RectTransform__get_anchorMax(__this_02,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_anchorMax(__this_03,UVar12,(MethodInfo *)0x0);
                    UVar12 = UnityEngine_RectTransform__get_pivot(__this_02,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_pivot(__this_03,UVar12,(MethodInfo *)0x0);
                    UVar12 = UnityEngine_RectTransform__get_anchoredPosition
                                       (__this_02,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_anchoredPosition
                              (__this_03,UVar12,(MethodInfo *)0x0);
                    UVar12 = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_sizeDelta(__this_03,UVar12,(MethodInfo *)0x0);
                    value = UnityEngine_Transform__get_localScale
                                      ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
                    UnityEngine_Transform__set_localScale
                              ((UnityEngine_Transform_o *)__this_03,value,(MethodInfo *)0x0);
                    if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                      pTVar9 = (TMPro_TextMeshProUGUI_o *)
                               UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                      ppTVar2 = &(__this->fields)._tmpText;
                      (__this->fields)._tmpText = pTVar9;
                      il2cpp_runtime_glue(ppTVar2);
                      __this_00 = (__this->fields)._legacyText;
                      if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
                        pTVar9 = (__this->fields)._tmpText;
                        iVar4 = UnityEngine_UI_Text__get_fontSize(__this_00,(MethodInfo *)0x0);
                        if (pTVar9 != (TMPro_TextMeshProUGUI_o *)0x0) {
                          TMPro_TMP_Text__set_fontSize
                                    ((TMPro_TMP_Text_o *)pTVar9,(float)iVar4,(MethodInfo *)0x0);
                          pTVar9 = *ppTVar2;
                          if (pTVar9 != (TMPro_TextMeshProUGUI_o *)0x0) {
                            (*(pTVar9->klass->vtable)._23_set_color.methodPtr)
                                      (0x3f8000003f800000,0x3f800000,pTVar9,
                                       (pTVar9->klass->vtable)._23_set_color.method);
                            if (*ppTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                              TMPro_TMP_Text__set_alignment
                                        ((TMPro_TMP_Text_o *)*ppTVar2,0x1002,(MethodInfo *)0x0);
                              if (*ppTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                TMPro_TMP_Text__set_enableWordWrapping
                                          ((TMPro_TMP_Text_o *)*ppTVar2,0,(MethodInfo *)0x0);
                                if (*ppTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                  TMPro_TMP_Text__set_overflowMode
                                            ((TMPro_TMP_Text_o *)*ppTVar2,0,(MethodInfo *)0x0);
                                  if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                    pPVar10 = (PatreonEffects_NameEffectController_o *)
                                              UnityEngine_GameObject__AddComponent<object>
                                                        (*ppUVar1,MethodInfo_NameEffectController_AddComponent_NameEffectCont);
                                    (__this->fields)._controller = pPVar10;
                                    il2cpp_runtime_glue(&(__this->fields)._controller);
                                    pPVar10 = (__this->fields)._controller;
                                    if (pPVar10 != (PatreonEffects_NameEffectController_o *)0x0) {
                                      PatreonEffects_NameEffectController__AutoConfigure
                                                (pPVar10,(MethodInfo *)0x0);
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
        goto LAB_03f2230f;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectApplier$$ParseHex
// il2cpp: UnityEngine_Color_o PatreonEffects_NameEffectApplier__ParseHex (System_String_o* hex, const MethodInfo* method);
// 0x3f22410

UnityEngine_Color_o
PatreonEffects_NameEffectApplier__ParseHex(System_String_o *hex,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  bool_conflict bVar2;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_Fields local_18;
  
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 0.0;
  bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                    (hex,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    UVar3.fields.b = 1.0;
    UVar3.fields.a = 1.0;
    UVar3.fields.r = 1.0;
    UVar3.fields.g = 1.0;
    return (UnityEngine_Color_o)UVar3.fields;
  }
  UVar1.b = local_18.b;
  UVar1.a = local_18.a;
  UVar1.r = local_18.r;
  UVar1.g = local_18.g;
  return (UnityEngine_Color_o)UVar1;
}


// PatreonEffects.NameEffectApplier$$OnDestroy
// il2cpp: void PatreonEffects_NameEffectApplier__OnDestroy (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x3f22450

void PatreonEffects_NameEffectApplier__OnDestroy
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05703cf0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703cf0 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._tmpOverlay;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._tmpOverlay;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// PatreonEffects.NameEffectApplier$$.ctor
// il2cpp: void PatreonEffects_NameEffectApplier___ctor (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x3f224d0

void PatreonEffects_NameEffectApplier___ctor
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


