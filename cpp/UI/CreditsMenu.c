// Type: UI.CreditsMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CreditsMenu.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CreditsMenu/CreditsMenu.cs  [CHANGED since prior version]
// --------------------------------

// UI.CreditsMenu.<>c$$.cctor
// il2cpp: void UI_CreditsMenu___c___cctor (const MethodInfo* method);
// 0x40795e0

void UI_CreditsMenu_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057044c7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057044c7 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.CreditsMenu.<>c$$.ctor
// il2cpp: void UI_CreditsMenu___c___ctor (UI_CreditsMenu___c_o* __this, const MethodInfo* method);
// 0x4079650

void UI_CreditsMenu_<>c___ctor(UI_CreditsMenu___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreditsMenu.<>c$$<CreateTextElement>b__16_0
// il2cpp: int32_t UI_CreditsMenu___c___CreateTextElement_b__16_0 (UI_CreditsMenu___c_o* __this, System_String_o* l, const MethodInfo* method);
// 0x4079660

int32_t UI_CreditsMenu_<>c__<CreateTextElement>b__16_0
                  (UI_CreditsMenu___c_o *__this,System_String_o *l,MethodInfo *method)

{
  if (l != (System_String_o *)0x0) {
    return (l->fields)._stringLength;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreditsMenu.<FadeOutTip>d__21$$.ctor
// il2cpp: void UI_CreditsMenu__FadeOutTip_d__21___ctor (UI_CreditsMenu__FadeOutTip_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40794c0

void UI_CreditsMenu_<FadeOutTip>d__21___ctor
               (UI_CreditsMenu__FadeOutTip_d__21_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CreditsMenu.<FadeOutTip>d__21$$System.IDisposable.Dispose
// il2cpp: void UI_CreditsMenu__FadeOutTip_d__21__System_IDisposable_Dispose (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x4079670

void UI_CreditsMenu_<FadeOutTip>d__21__System_IDisposable_Dispose
               (UI_CreditsMenu__FadeOutTip_d__21_o *__this,MethodInfo *method)

{
  return;
}


// UI.CreditsMenu.<FadeOutTip>d__21$$MoveNext
// il2cpp: bool UI_CreditsMenu__FadeOutTip_d__21__MoveNext (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x4079680

bool_conflict
UI_CreditsMenu_<FadeOutTip>d__21__MoveNext
          (UI_CreditsMenu__FadeOutTip_d__21_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_CreditsMenu_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  iVar1 = (__this->fields).__1__state;
  pUVar2 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    fVar7 = (__this->fields)._elapsedTime_5__3;
    if ((__this->fields)._fadeTime_5__2 <= fVar7) {
      if (((pUVar2 != (UI_CreditsMenu_o *)0x0) &&
          (pUVar3 = (pUVar2->fields)._tipText, pUVar3 != (UnityEngine_UI_Text_o *)0x0)) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
        return 0;
      }
      goto LAB_0407982a;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._fadeTime_5__2 = 1.0;
    (__this->fields)._elapsedTime_5__3 = 0.0;
    fVar7 = 0.0;
  }
  fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._elapsedTime_5__3 = fVar5 + fVar7;
  if ((pUVar2 != (UI_CreditsMenu_o *)0x0) &&
     (pUVar3 = (pUVar2->fields)._tipText, pUVar3 != (UnityEngine_UI_Text_o *)0x0)) {
    uVar6 = (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
                      (pUVar3,(pUVar3->klass->vtable)._22_get_color.method);
    pUVar4 = (pUVar2->fields)._tipText;
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar4->klass->vtable)._22_get_color.methodPtr)
                (pUVar4,(pUVar4->klass->vtable)._22_get_color.method);
      pUVar4 = (pUVar2->fields)._tipText;
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        uVar8 = 0;
        (*(pUVar4->klass->vtable)._22_get_color.methodPtr)
                  (pUVar4,(pUVar4->klass->vtable)._22_get_color.method);
        (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                  (uVar6,uVar8,pUVar3,(pUVar3->klass->vtable)._23_set_color.method);
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        il2cpp_runtime_glue(&(__this->fields).__2__current,0);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
    }
  }
LAB_0407982a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreditsMenu.<FadeOutTip>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CreditsMenu__FadeOutTip_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x4079830

Il2CppObject *
UI_CreditsMenu_<FadeOutTip>d__21__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_CreditsMenu__FadeOutTip_d__21_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CreditsMenu.<FadeOutTip>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CreditsMenu__FadeOutTip_d__21__System_Collections_IEnumerator_Reset (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x4079840

void UI_CreditsMenu_<FadeOutTip>d__21__System_Collections_IEnumerator_Reset
               (UI_CreditsMenu__FadeOutTip_d__21_o *__this,MethodInfo *method)

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


// UI.CreditsMenu.<FadeOutTip>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CreditsMenu__FadeOutTip_d__21__System_Collections_IEnumerator_get_Current (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x4079880

Il2CppObject *
UI_CreditsMenu_<FadeOutTip>d__21__System_Collections_IEnumerator_get_Current
          (UI_CreditsMenu__FadeOutTip_d__21_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CreditsMenu$$Setup
// il2cpp: void UI_CreditsMenu__Setup (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x40761e0

void UI_CreditsMenu__Setup(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar3;
  UnityEngine_Color_o *pUVar4;
  uint uVar5;
  UnityEngine_Color_array *pUVar6;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar7;
  UI_ElementStyle_o *style;
  System_Type_array *pSVar8;
  System_Type_o *pSVar9;
  long lVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *pUVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_UI_AspectRatioFitter_o *__this_01;
  System_String_o *pSVar15;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar16;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  UnityEngine_Font_o *pUVar17;
  MethodInfo *method_00;
  undefined8 uVar18;
  MethodInfo *in_R8;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar23;
  UnityEngine_Color_o item;
  UnityEngine_Color_o item_00;
  UnityEngine_Color_o item_01;
  UnityEngine_Color_o item_02;
  UnityEngine_Color_o item_03;
  UnityEngine_Color_Fields UStack_98;
  UnityEngine_Color_Fields UStack_88;
  UnityEngine_Color_Fields UStack_78;
  UnityEngine_Color_Fields UStack_68;
  UnityEngine_Color_Fields UStack_58;
  undefined1 auStack_48 [16];
  
  if (DAT_057044bb == '\0') {
    il2cpp_init_method_metadata(&TypeRef_AspectRatioFitter);
    il2cpp_init_method_metadata(&TypeRef_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__11_0);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Color);
    il2cpp_init_method_metadata(&TypeInfo_List_Color);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Font_Load_Font);
    il2cpp_init_method_metadata(&MethodInfo_Sprite_Load_Sprite);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&TypeRef_VerticalLayoutGroup);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"UI/Backgrounds/DarkBackgroundTextured");
    il2cpp_init_method_metadata(&"UI/Fonts/Intensa Fuente");
    il2cpp_init_method_metadata(&"UI/Sprites/Elements/Brush");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"#29888a");
    il2cpp_init_method_metadata(&"#ba661f");
    il2cpp_init_method_metadata(&"CreditsContent");
    il2cpp_init_method_metadata(&"#813d52");
    il2cpp_init_method_metadata(&"#614c90");
    il2cpp_init_method_metadata(&"#2065a0");
    DAT_057044bb = '\x01';
  }
  UStack_58.r = 0.0;
  UStack_58.g = 0.0;
  UStack_58.b = 0.0;
  UStack_58.a = 0.0;
  UStack_68.r = 0.0;
  UStack_68.g = 0.0;
  UStack_68.b = 0.0;
  UStack_68.a = 0.0;
  UStack_78.r = 0.0;
  UStack_78.g = 0.0;
  UStack_78.b = 0.0;
  UStack_78.a = 0.0;
  UStack_88.r = 0.0;
  UStack_88.g = 0.0;
  UStack_88.b = 0.0;
  UStack_88.a = 0.0;
  UStack_98.r = 0.0;
  UStack_98.g = 0.0;
  UStack_98.b = 0.0;
  UStack_98.a = 0.0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  style = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  pSVar15 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 100.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar15;
  il2cpp_runtime_glue(&(style->fields).ThemePanel,pSVar15);
  pSVar8 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar9 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) goto LAB_04076dcd;
  if ((pSVar9 != (System_Type_o *)0x0) &&
     (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class), lVar10 == 0)) {
LAB_04076dd7:
    uVar18 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar18,0);
  }
  if ((int)pSVar8->max_length != 0) {
    pSVar8->m_Items[0] = pSVar9;
    il2cpp_runtime_glue(pSVar8->m_Items);
    pSVar9 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
    if ((pSVar9 != (System_Type_o *)0x0) &&
       (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class), lVar10 == 0))
    goto LAB_04076dd7;
    if (1 < (uint)pSVar8->max_length) {
      pSVar8->m_Items[1] = pSVar9;
      il2cpp_runtime_glue(pSVar8->m_Items + 1);
      pSVar9 = System_Type__GetTypeFromHandle(TypeRef_AspectRatioFitter,(MethodInfo *)0x0);
      if ((pSVar9 != (System_Type_o *)0x0) &&
         (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class), lVar10 == 0
         )) goto LAB_04076dd7;
      if (2 < (uint)pSVar8->max_length) {
        pSVar8->m_Items[2] = pSVar9;
        il2cpp_runtime_glue(pSVar8->m_Items + 2,pSVar9);
        pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(pUVar11,"Background",pSVar8,(MethodInfo *)0x0);
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(pUVar12,parent,0,(MethodInfo *)0x0);
            __this_00 = (UnityEngine_UI_Image_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar11,MethodInfo_Image_GetComponent_Image);
            pUVar13 = (UnityEngine_Sprite_o *)
                      UnityEngine_Resources__Load<object>("UI/Backgrounds/DarkBackgroundTextured",MethodInfo_Sprite_Load_Sprite);
            if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
              UnityEngine_UI_Image__set_sprite(__this_00,pUVar13,(MethodInfo *)0x0);
              UnityEngine_UI_Image__set_type(__this_00,1,(MethodInfo *)0x0);
              UnityEngine_UI_Image__set_preserveAspect(__this_00,1,(MethodInfo *)0x0);
              pUVar14 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
              if (DAT_056fe093 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector2);
                DAT_056fe093 = '\x01';
              }
              if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          (pUVar14,(UnityEngine_Vector2_o)
                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                           (MethodInfo *)0x0);
                if (DAT_0570136e == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector2);
                  DAT_0570136e = '\x01';
                }
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar14,(UnityEngine_Vector2_o)
                                   *(UnityEngine_Vector2_Fields *)
                                    (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                if (DAT_056fe093 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector2);
                  DAT_056fe093 = '\x01';
                }
                UnityEngine_RectTransform__set_sizeDelta
                          (pUVar14,(UnityEngine_Vector2_o)
                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                           (MethodInfo *)0x0);
                __this_01 = (UnityEngine_UI_AspectRatioFitter_o *)
                            UnityEngine_GameObject__GetComponent<object>(pUVar11,MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
                if (__this_01 != (UnityEngine_UI_AspectRatioFitter_o *)0x0) {
                  UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_01,4,(MethodInfo *)0x0);
                  pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                  if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                    UVar23 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                    auStack_48._8_4_ = in_XMM1_Dc;
                    auStack_48._0_8_ = UVar23.fields._8_8_;
                    auStack_48._12_4_ = in_XMM1_Dd;
                    pUVar13 = *(UnityEngine_Sprite_o **)&(__this_00->fields).m_ShouldRecalculate;
                    if (pUVar13 != (UnityEngine_Sprite_o *)0x0) {
                      UVar23 = UnityEngine_Sprite__get_rect(pUVar13,(MethodInfo *)0x0);
                      UnityEngine_UI_AspectRatioFitter__set_aspectRatio
                                (__this_01,(float)auStack_48._0_4_ / UVar23.fields.m_Height,
                                 (MethodInfo *)0x0);
                      pUVar12 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar15 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                      onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction)
                      ;
                      UnityEngine_Events_UnityAction___ctor();
                      pUVar11 = UI_ElementFactory__CreateDefaultButton
                                          (pUVar12,style,pSVar15,0.0,0.0,onClick,in_R8);
                      UI_ElementFactory__SetAnchor
                                (pUVar11,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,
                                 (MethodInfo *)onClick);
                      pSVar8 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
                      pSVar9 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                      if (pSVar8 != (System_Type_array *)0x0) {
                        if ((pSVar9 != (System_Type_o *)0x0) &&
                           (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).
                                                               element_class), lVar10 == 0))
                        goto LAB_04076dd7;
                        if ((int)pSVar8->max_length != 0) {
                          pSVar8->m_Items[0] = pSVar9;
                          il2cpp_runtime_glue(pSVar8->m_Items);
                          pSVar9 = System_Type__GetTypeFromHandle(TypeRef_VerticalLayoutGroup,(MethodInfo *)0x0);
                          if ((pSVar9 != (System_Type_o *)0x0) &&
                             (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).
                                                                 element_class), lVar10 == 0))
                          goto LAB_04076dd7;
                          if (1 < (uint)pSVar8->max_length) {
                            pSVar8->m_Items[1] = pSVar9;
                            il2cpp_runtime_glue(pSVar8->m_Items + 1);
                            pSVar9 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                            if ((pSVar9 != (System_Type_o *)0x0) &&
                               (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).
                                                                   element_class), lVar10 == 0))
                            goto LAB_04076dd7;
                            if (2 < (uint)pSVar8->max_length) {
                              pSVar8->m_Items[2] = pSVar9;
                              il2cpp_runtime_glue(pSVar8->m_Items + 2,pSVar9);
                              pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject)
                              ;
                              UnityEngine_GameObject___ctor
                                        (pUVar11,"CreditsContent",pSVar8,(MethodInfo *)0x0);
                              if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                                pUVar14 = (UnityEngine_RectTransform_o *)
                                          UnityEngine_GameObject__GetComponent<object>
                                                    (pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
                                ppUVar2 = &(__this->fields)._contentTransform;
                                (__this->fields)._contentTransform = pUVar14;
                                il2cpp_runtime_glue(ppUVar2,pUVar14);
                                pUVar16 = (UnityEngine_UI_VerticalLayoutGroup_o *)
                                          UnityEngine_GameObject__GetComponent<object>
                                                    (pUVar11,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
                                ppUVar3 = &(__this->fields)._layoutGroup;
                                (__this->fields)._layoutGroup = pUVar16;
                                il2cpp_runtime_glue(ppUVar3,pUVar16);
                                __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
                                            UnityEngine_GameObject__GetComponent<object>
                                                      (pUVar11,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                                pUVar14 = (__this->fields)._contentTransform;
                                pUVar12 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this,
                                                     (MethodInfo *)0x0);
                                if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                  UnityEngine_Transform__SetParent
                                            ((UnityEngine_Transform_o *)pUVar14,pUVar12,0,
                                             (MethodInfo *)0x0);
                                  if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_RectTransform__set_anchorMin
                                              (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                               (MethodInfo *)0x0);
                                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMax
                                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                 (MethodInfo *)0x0);
                                      pUVar14 = *ppUVar2;
                                      if (DAT_056fe093 == '\0') {
                                        il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                        DAT_056fe093 = '\x01';
                                      }
                                      if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchoredPosition
                                                  (pUVar14,(UnityEngine_Vector2_o)
                                                           **(UnityEngine_Vector2_Fields **)
                                                             (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
                                                  );
                                        if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_sizeDelta
                                                    (*ppUVar2,(UnityEngine_Vector2_o)0x44480000,
                                                     (MethodInfo *)0x0);
                                          if (*ppUVar3 !=
                                              (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                                            UnityEngine_UI_LayoutGroup__set_childAlignment
                                                      ((UnityEngine_UI_LayoutGroup_o *)*ppUVar3,1,
                                                       (MethodInfo *)0x0);
                                            if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                *ppUVar3 !=
                                                (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                0x0) {
                                              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                                        ((
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                  )*ppUVar3,1,(MethodInfo *)0x0);
                                              if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                   *)*ppUVar3 !=
                                                  (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                   *)0x0) {
                                                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                                          ((
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                  )*ppUVar3,0,(MethodInfo *)0x0);
                                                if (((
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                  )*ppUVar3 !=
                                                  (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                   *)0x0) &&
                                                  (
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                                            ((
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                  )*ppUVar3,10.0,(MethodInfo *)0x0),
                                                  __this_02 !=
                                                  (UnityEngine_UI_ContentSizeFitter_o *)0x0)) {
                                                  UnityEngine_UI_ContentSizeFitter__set_verticalFit
                                                            (__this_02,2,(MethodInfo *)0x0);
                                                  pUVar17 = (UnityEngine_Font_o *)
                                                            UnityEngine_Resources__Load<object>
                                                                      ("UI/Fonts/Intensa Fuente",MethodInfo_Font_Load_Font);
                                                  (__this->fields)._categoryFont = pUVar17;
                                                  il2cpp_runtime_glue(&(__this->fields)._categoryFont
                                                                     ,pUVar17);
                                                  pUVar13 = (UnityEngine_Sprite_o *)
                                                            UnityEngine_Resources__Load<object>
                                                                      ("UI/Sprites/Elements/Brush",MethodInfo_Sprite_Load_Sprite);
                                                  (__this->fields)._brushSprite = pUVar13;
                                                  il2cpp_runtime_glue(&(__this->fields)._brushSprite,
                                                                     pUVar13);
                                                  method_00 = (MethodInfo *)
                                                              il2cpp_runtime_glue(TypeInfo_List_Color);
                                                  System_Collections_Generic_List<Color>___ctor
                                                            ((
                                                  System_Collections_Generic_List_Color__o *)
                                                  method_00,MethodInfo_List_1_UnityEngine_Color);
                                                  bVar7 = 
                                                  UnityEngine_ColorUtility__TryParseHtmlString
                                                            ("#2065a0",
                                                             (UnityEngine_Color_o *)&UStack_58,
                                                             (MethodInfo *)0x0);
                                                  lVar10 = MethodInfo_Void_Add;
                                                  if ((char)bVar7 == '\0') {
                                                    fVar19 = 1.0;
                                                    fVar20 = 1.0;
                                                    fVar21 = fVar19;
                                                    fVar22 = fVar20;
                                                  }
                                                  else {
                                                    fVar19 = UStack_58.r;
                                                    fVar20 = UStack_58.g;
                                                    fVar21 = UStack_58.b;
                                                    fVar22 = UStack_58.a;
                                                  }
                                                  if (method_00 != (MethodInfo *)0x0) {
                                                    piVar1 = (int32_t *)((long)&method_00->name + 4)
                                                    ;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar6 = ((
                                                  System_Collections_Generic_List_Color__Fields *)
                                                  &method_00->invoker_method)->_items;
                                                  if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                    uVar5 = *(uint *)&method_00->name;
                                                    if (uVar5 < (uint)pUVar6->max_length) {
                                                      *(uint *)&method_00->name = uVar5 + 1;
                                                      pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                      (pUVar4->fields).r = fVar19;
                                                      (pUVar4->fields).g = fVar20;
                                                      (pUVar4->fields).b = fVar21;
                                                      (pUVar4->fields).a = fVar22;
                                                    }
                                                    else {
                                                      item.fields.g = fVar20;
                                                      item.fields.r = fVar19;
                                                      item.fields.a = fVar22;
                                                      item.fields.b = fVar21;
                                                                                                            
                                                  System_Collections_Generic_List<Color>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_Color__o *)
                                                  method_00,item,
                                                  *(MethodInfo_34FEFB0 **)
                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                   0x70));
                                                  }
                                                  bVar7 = 
                                                  UnityEngine_ColorUtility__TryParseHtmlString
                                                            ("#ba661f",
                                                             (UnityEngine_Color_o *)&UStack_68,
                                                             (MethodInfo *)0x0);
                                                  lVar10 = MethodInfo_Void_Add;
                                                  if ((char)bVar7 == '\0') {
                                                    fVar19 = 1.0;
                                                    fVar20 = 1.0;
                                                    fVar21 = fVar19;
                                                    fVar22 = fVar20;
                                                  }
                                                  else {
                                                    fVar19 = UStack_68.r;
                                                    fVar20 = UStack_68.g;
                                                    fVar21 = UStack_68.b;
                                                    fVar22 = UStack_68.a;
                                                  }
                                                  piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                  *piVar1 = *piVar1 + 1;
                                                  pUVar6 = ((
                                                  System_Collections_Generic_List_Color__Fields *)
                                                  &method_00->invoker_method)->_items;
                                                  if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                    uVar5 = *(uint *)&method_00->name;
                                                    if (uVar5 < (uint)pUVar6->max_length) {
                                                      *(uint *)&method_00->name = uVar5 + 1;
                                                      pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                      (pUVar4->fields).r = fVar19;
                                                      (pUVar4->fields).g = fVar20;
                                                      (pUVar4->fields).b = fVar21;
                                                      (pUVar4->fields).a = fVar22;
                                                    }
                                                    else {
                                                      item_00.fields.g = fVar20;
                                                      item_00.fields.r = fVar19;
                                                      item_00.fields.a = fVar22;
                                                      item_00.fields.b = fVar21;
                                                                                                            
                                                  System_Collections_Generic_List<Color>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_Color__o *)
                                                  method_00,item_00,
                                                  *(MethodInfo_34FEFB0 **)
                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                   0x70));
                                                  }
                                                  bVar7 = 
                                                  UnityEngine_ColorUtility__TryParseHtmlString
                                                            ("#29888a",
                                                             (UnityEngine_Color_o *)&UStack_78,
                                                             (MethodInfo *)0x0);
                                                  lVar10 = MethodInfo_Void_Add;
                                                  if ((char)bVar7 == '\0') {
                                                    fVar19 = 1.0;
                                                    fVar20 = 1.0;
                                                    fVar21 = fVar19;
                                                    fVar22 = fVar20;
                                                  }
                                                  else {
                                                    fVar19 = UStack_78.r;
                                                    fVar20 = UStack_78.g;
                                                    fVar21 = UStack_78.b;
                                                    fVar22 = UStack_78.a;
                                                  }
                                                  piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                  *piVar1 = *piVar1 + 1;
                                                  pUVar6 = ((
                                                  System_Collections_Generic_List_Color__Fields *)
                                                  &method_00->invoker_method)->_items;
                                                  if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                    uVar5 = *(uint *)&method_00->name;
                                                    if (uVar5 < (uint)pUVar6->max_length) {
                                                      *(uint *)&method_00->name = uVar5 + 1;
                                                      pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                      (pUVar4->fields).r = fVar19;
                                                      (pUVar4->fields).g = fVar20;
                                                      (pUVar4->fields).b = fVar21;
                                                      (pUVar4->fields).a = fVar22;
                                                    }
                                                    else {
                                                      item_01.fields.g = fVar20;
                                                      item_01.fields.r = fVar19;
                                                      item_01.fields.a = fVar22;
                                                      item_01.fields.b = fVar21;
                                                                                                            
                                                  System_Collections_Generic_List<Color>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_Color__o *)
                                                  method_00,item_01,
                                                  *(MethodInfo_34FEFB0 **)
                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                   0x70));
                                                  }
                                                  bVar7 = 
                                                  UnityEngine_ColorUtility__TryParseHtmlString
                                                            ("#813d52",
                                                             (UnityEngine_Color_o *)&UStack_88,
                                                             (MethodInfo *)0x0);
                                                  lVar10 = MethodInfo_Void_Add;
                                                  if ((char)bVar7 == '\0') {
                                                    fVar19 = 1.0;
                                                    fVar20 = 1.0;
                                                    fVar21 = fVar19;
                                                    fVar22 = fVar20;
                                                  }
                                                  else {
                                                    fVar19 = UStack_88.r;
                                                    fVar20 = UStack_88.g;
                                                    fVar21 = UStack_88.b;
                                                    fVar22 = UStack_88.a;
                                                  }
                                                  piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                  *piVar1 = *piVar1 + 1;
                                                  pUVar6 = ((
                                                  System_Collections_Generic_List_Color__Fields *)
                                                  &method_00->invoker_method)->_items;
                                                  if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                    uVar5 = *(uint *)&method_00->name;
                                                    if (uVar5 < (uint)pUVar6->max_length) {
                                                      *(uint *)&method_00->name = uVar5 + 1;
                                                      pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                      (pUVar4->fields).r = fVar19;
                                                      (pUVar4->fields).g = fVar20;
                                                      (pUVar4->fields).b = fVar21;
                                                      (pUVar4->fields).a = fVar22;
                                                    }
                                                    else {
                                                      item_02.fields.g = fVar20;
                                                      item_02.fields.r = fVar19;
                                                      item_02.fields.a = fVar22;
                                                      item_02.fields.b = fVar21;
                                                                                                            
                                                  System_Collections_Generic_List<Color>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_Color__o *)
                                                  method_00,item_02,
                                                  *(MethodInfo_34FEFB0 **)
                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                   0x70));
                                                  }
                                                  bVar7 = 
                                                  UnityEngine_ColorUtility__TryParseHtmlString
                                                            ("#614c90",
                                                             (UnityEngine_Color_o *)&UStack_98,
                                                             (MethodInfo *)0x0);
                                                  lVar10 = MethodInfo_Void_Add;
                                                  if ((char)bVar7 == '\0') {
                                                    fVar19 = 1.0;
                                                    fVar20 = 1.0;
                                                    fVar21 = fVar19;
                                                    fVar22 = fVar20;
                                                  }
                                                  else {
                                                    fVar19 = UStack_98.r;
                                                    fVar20 = UStack_98.g;
                                                    fVar21 = UStack_98.b;
                                                    fVar22 = UStack_98.a;
                                                  }
                                                  piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                  *piVar1 = *piVar1 + 1;
                                                  pUVar6 = ((
                                                  System_Collections_Generic_List_Color__Fields *)
                                                  &method_00->invoker_method)->_items;
                                                  if (pUVar6 != (UnityEngine_Color_array *)0x0) {
                                                    uVar5 = *(uint *)&method_00->name;
                                                    if (uVar5 < (uint)pUVar6->max_length) {
                                                      *(uint *)&method_00->name = uVar5 + 1;
                                                      pUVar4 = pUVar6->m_Items + (int)uVar5;
                                                      (pUVar4->fields).r = fVar19;
                                                      (pUVar4->fields).g = fVar20;
                                                      (pUVar4->fields).b = fVar21;
                                                      (pUVar4->fields).a = fVar22;
                                                    }
                                                    else {
                                                      item_03.fields.g = fVar20;
                                                      item_03.fields.r = fVar19;
                                                      item_03.fields.a = fVar22;
                                                      item_03.fields.b = fVar21;
                                                                                                            
                                                  System_Collections_Generic_List<Color>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_Color__o *)
                                                  method_00,item_03,
                                                  *(MethodInfo_34FEFB0 **)
                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                   0x70));
                                                  }
                                                  (__this->fields)._categoryColors =
                                                       (System_Collections_Generic_List_Color__o *)
                                                       method_00;
                                                  il2cpp_runtime_glue(&(__this->fields).
                                                                      _categoryColors);
                                                  UI_CreditsMenu__CreateTip(__this,method_00);
                                                  UI_CreditsMenu__PopulateCredits(__this,method_00);
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
                              goto LAB_04076dcd;
                            }
                          }
                        }
                        goto LAB_04076dd2;
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_04076dcd:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_04076dd2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreditsMenu$$CreateTip
// il2cpp: void UI_CreditsMenu__CreateTip (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x4076f80

void UI_CreditsMenu__CreateTip(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *style;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *in_R9;
  
  if (DAT_057044bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Hold LMB or Space to fast forward, and RMB to go backwards");
    DAT_057044bc = '\x01';
  }
  style = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  pSVar2 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar2;
  il2cpp_runtime_glue(&(style->fields).ThemePanel);
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  __this_00 = UI_ElementFactory__CreateWhiteLabel(parent,style,"Hold LMB or Space to fast forward, and RMB to go backwards",0,4,in_R9);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields)._tipText;
    (__this->fields)._tipText = pUVar3;
    il2cpp_runtime_glue(ppUVar1,pUVar3);
    pUVar3 = (__this->fields)._tipText;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      UnityEngine_UI_Text__set_fontSize(pUVar3,0x14,(MethodInfo *)0x0);
      pUVar3 = *ppUVar1;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        UnityEngine_UI_Text__set_alignment(pUVar3,4,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (__this_01,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchoredPosition
                    (__this_01,(UnityEngine_Vector2_o)0xc248000000000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_01,(UnityEngine_Vector2_o)0x4248000044160000,(MethodInfo *)0x0);
          (__this->fields)._tipTimer = (__this->fields)._tipDisplayTime;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreditsMenu$$PopulateCredits
// il2cpp: void UI_CreditsMenu__PopulateCredits (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x4077130

void UI_CreditsMenu__PopulateCredits(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  long lVar5;
  bool_conflict bVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  long *plVar8;
  System_Collections_Generic_List_object__o *__this_07;
  Il2CppObject *pIVar9;
  MethodInfo *method_00;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_Object_array *in_RCX;
  float fVar11;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_fffffffffffffed8;
  UI_CreditsMenu_o *__this_08;
  Il2CppMethodPointer pIVar14;
  Il2CppMethodPointer pIVar15;
  InvokerMethod pIVar16;
  char *pcVar17;
  Il2CppClass *pIVar18;
  Il2CppType *pIVar19;
  undefined1 local_c8 [80];
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_057044bd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_LayoutRebuilder);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Void_Sort);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MiscInfo);
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"Error loading data.");
    il2cpp_init_method_metadata(&"\nBased on the original game created by Feng Li and Jiang Li.");
    il2cpp_init_method_metadata(&"Category");
    il2cpp_init_method_metadata(&"Names");
    DAT_057044bd = '\x01';
  }
  local_c8._48_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_c8._32_8_ = (Il2CppClass *)0x0;
  local_c8._40_8_ = (Il2CppType *)0x0;
  local_c8._16_8_ = (InvokerMethod)0x0;
  local_c8._24_8_ = (char *)0x0;
  local_c8._0_8_ = (Il2CppMethodPointer)0x0;
  local_c8._8_8_ = (Il2CppMethodPointer)0x0;
  local_c8._64_8_ = (void *)0x0;
  pSVar10 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    UI_CreditsMenu__CreateTextElement(__this,"Error loading data.",0,(MethodInfo *)in_RCX);
    return;
  }
  plVar8 = *(long **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 0x10);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x338))(&local_78,plVar8,*(undefined8 *)(*plVar8 + 0x340));
    pIVar16 = (InvokerMethod)CONCAT44(uStack_64,local_68);
    pcVar17 = (char *)CONCAT44(uStack_5c,uStack_60);
    __this_00.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
    __this_00.fields._0_8_ = in_stack_fffffffffffffed8;
    __this_00.fields.m_Object.fields._8_8_ = local_78;
    __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
    __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
    __this_00.fields.m_Object.fields._32_8_ = pcVar17;
    __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
    __this_00.fields.m_Array.fields._8_8_ = pIStack_50;
    __this_00.fields.m_Array.fields._current = local_48;
    pIVar14 = local_78;
    pIVar15 = pIStack_70;
    pIVar18 = local_58;
    pIVar19 = pIStack_50;
    pSVar10 = local_48;
    bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      (__this_00,(MethodInfo *)&stack0xfffffffffffffee8);
    if ((char)bVar6 != '\0') {
      do {
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
        __this_01.fields._0_8_ = in_stack_fffffffffffffed8;
        __this_01.fields.m_Object.fields._8_8_ = pIVar14;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar15;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
        __this_01.fields.m_Object.fields._32_8_ = pcVar17;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar18;
        __this_01.fields.m_Array.fields._8_8_ = pIVar19;
        __this_01.fields.m_Array.fields._current = pSVar10;
        SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_01,(MethodInfo *)&stack0xfffffffffffffee8);
        __this_08 = __this;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
          __this_08 = __this;
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
        if ((pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (plVar8 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar7,"Category",
                                        (pSVar7->klass->vtable)._7_get_Item.method),
           plVar8 == (long *)0x0)) goto LAB_040776b6;
        auVar13 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
        UI_CreditsMenu__CreateCategoryElement(__this_08,auVar13._0_8_,auVar13._8_8_);
        __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
        System_Collections_Generic_List<object>___ctor(__this_07,MethodInfo_List_1_System_String);
        plVar8 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar7,"Names",(pSVar7->klass->vtable)._7_get_Item.method);
        if (plVar8 == (long *)0x0) goto LAB_040776b6;
        in_RCX = (System_Object_array *)*plVar8;
        (*(code *)in_RCX->m_Items[99])(&local_78,plVar8,in_RCX->m_Items[100]);
        local_c8._64_8_ = local_38;
        local_c8._48_8_ = local_48;
        local_c8._56_8_ = _Stack_40;
        local_c8._32_8_ = local_58;
        local_c8._40_8_ = pIStack_50;
        local_c8._20_4_ = uStack_64;
        local_c8._16_4_ = local_68;
        local_c8._28_4_ = uStack_5c;
        local_c8._24_4_ = uStack_60;
        local_c8._0_8_ = local_78;
        local_c8._8_8_ = pIStack_70;
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_08;
        __this_02.fields._0_8_ = in_stack_fffffffffffffed8;
        __this_02.fields.m_Object.fields._8_8_ = pIVar14;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar15;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
        __this_02.fields.m_Object.fields._32_8_ = pcVar17;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar18;
        __this_02.fields.m_Array.fields._8_8_ = pIVar19;
        __this_02.fields.m_Array.fields._current = pSVar10;
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_02,(MethodInfo *)local_c8);
        if ((char)bVar6 != '\0') {
          if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) {
            __this_06.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_08;
            __this_06.fields._0_8_ = in_stack_fffffffffffffed8;
            __this_06.fields.m_Object.fields._8_8_ = pIVar14;
            __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar15;
            __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
            __this_06.fields.m_Object.fields._32_8_ = pcVar17;
            __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar18;
            __this_06.fields.m_Array.fields._8_8_ = pIVar19;
            __this_06.fields.m_Array.fields._current = pSVar10;
            SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_06,(MethodInfo *)local_c8);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
            if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              (*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                        (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            goto LAB_040776b6;
          }
          do {
            __this_04.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_08;
            __this_04.fields._0_8_ = in_stack_fffffffffffffed8;
            __this_04.fields.m_Object.fields._8_8_ = pIVar14;
            __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar15;
            __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
            __this_04.fields.m_Object.fields._32_8_ = pcVar17;
            __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar18;
            __this_04.fields.m_Array.fields._8_8_ = pIVar19;
            __this_04.fields.m_Array.fields._current = pSVar10;
            SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_04,(MethodInfo *)local_c8);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
            if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_040776b6;
            pIVar9 = (Il2CppObject *)
                     (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
            bVar6 = System_Collections_Generic_List<object>__Contains(__this_07,pIVar9,MethodInfo_Boolean_Contains)
            ;
            if ((char)bVar6 == '\0') {
              pIVar9 = (Il2CppObject *)
                       (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                                 (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
              lVar5 = MethodInfo_Void_Add;
              piVar1 = &(__this_07->fields)._version;
              *piVar1 = *piVar1 + 1;
              in_RCX = (__this_07->fields)._items;
              if (in_RCX == (System_Object_array *)0x0) goto LAB_040776b6;
              uVar2 = (__this_07->fields)._size;
              if (uVar2 < (uint)in_RCX->max_length) {
                (__this_07->fields)._size = uVar2 + 1;
                in_RCX->m_Items[(int)uVar2] = pIVar9;
                il2cpp_runtime_glue(in_RCX->m_Items + (int)uVar2,pIVar9);
              }
              else {
                in_RCX = *(System_Object_array **)(*(long *)(lVar5 + 0x20) + 0xc0);
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_07,pIVar9,(MethodInfo_35A7350 *)in_RCX->m_Items[10]);
              }
            }
            __this_03.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_08;
            __this_03.fields._0_8_ = in_stack_fffffffffffffed8;
            __this_03.fields.m_Object.fields._8_8_ = pIVar14;
            __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar15;
            __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
            __this_03.fields.m_Object.fields._32_8_ = pcVar17;
            __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar18;
            __this_03.fields.m_Array.fields._8_8_ = pIVar19;
            __this_03.fields.m_Array.fields._current = pSVar10;
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)local_c8);
          } while ((char)bVar6 != '\0');
        }
        if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_040776b6;
        System_Collections_Generic_List<object>__Sort(__this_07,MethodInfo_Void_Sort);
        method_00 = (MethodInfo *)
                    System_String__Join("\n",
                                        (System_Collections_Generic_IEnumerable_string__o *)
                                        __this_07,(MethodInfo *)0x0);
        __this = __this_08;
        UI_CreditsMenu__CreateTextElement
                  (__this_08,(System_String_o *)method_00,0,(MethodInfo *)in_RCX);
        UI_CreditsMenu__CreateSpacerElement(__this_08,20.0,method_00);
        __this_05.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
        __this_05.fields._0_8_ = in_stack_fffffffffffffed8;
        __this_05.fields.m_Object.fields._8_8_ = pIVar14;
        __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar15;
        __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
        __this_05.fields.m_Object.fields._32_8_ = pcVar17;
        __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar18;
        __this_05.fields.m_Array.fields._8_8_ = pIVar19;
        __this_05.fields.m_Array.fields._current = pSVar10;
        bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_05,(MethodInfo *)&stack0xfffffffffffffee8);
      } while ((char)bVar6 != '\0');
    }
    UI_CreditsMenu__CreateTextElement(__this,"\nBased on the original game created by Feng Li and Jiang Li.",0,(MethodInfo *)in_RCX);
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    pUVar3 = (__this->fields)._contentTransform;
    if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar3,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._layoutGroup;
    if (pUVar4 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
      fVar11 = (float)(*(pUVar4->klass->vtable)._34_get_preferredHeight.methodPtr)();
      pUVar3 = (__this->fields)._contentTransform;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar3,(UnityEngine_Vector2_o)((ulong)(uint)(fVar11 * -0.5 + -300.0) << 0x20),
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_040776b6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreditsMenu$$CreateCategoryElement
// il2cpp: void UI_CreditsMenu__CreateCategoryElement (UI_CreditsMenu_o* __this, System_String_o* content, const MethodInfo* method);
// 0x40785c0

void UI_CreditsMenu__CreateCategoryElement
               (UI_CreditsMenu_o *__this,System_String_o *content,MethodInfo *method)

{
  System_Collections_Generic_List_Color__o *pSVar1;
  Il2CppMethodPointer vtable_dispatch;
  UnityEngine_Vector2_o UVar2;
  System_RuntimeTypeHandle_o handle;
  System_String_o *pSVar3;
  System_Type_array *pSVar4;
  System_Type_o *pSVar5;
  long lVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *__this_00;
  Il2CppObject *pIVar9;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UI_ElementStyle_o *style;
  UnityEngine_UI_Text_o *__this_04;
  UnityEngine_RectTransform_o *layoutRoot;
  undefined8 uVar10;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *in_R9;
  UnityEngine_Color_o UVar11;
  UnityEngine_Vector2_o local_58;
  
  if (DAT_057044be == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_LayoutRebuilder);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"CategoryContainer");
    DAT_057044be = '\x01';
    method = extraout_RDX;
  }
  pSVar4 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type,2,method);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar4 == (System_Type_array *)0x0) goto LAB_04078ca7;
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_04078cb1;
  }
  if ((int)pSVar4->max_length == 0) goto LAB_04078cac;
  pSVar4->m_Items[0] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items);
  pSVar5 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
  if (pSVar5 != (System_Type_o *)0x0) {
    lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
    if (lVar6 == 0) goto LAB_04078cb1;
  }
  if ((uint)pSVar4->max_length < 2) goto LAB_04078cac;
  pSVar4->m_Items[1] = pSVar5;
  il2cpp_runtime_glue(pSVar4->m_Items + 1,pSVar5);
  pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar7,"CategoryContainer",pSVar4,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_04078ca7;
    UnityEngine_Transform__SetParent
              (pUVar8,(UnityEngine_Transform_o *)(__this->fields)._contentTransform,0,
               (MethodInfo *)0x0);
    __this_00 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
    pIVar9 = UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pSVar4 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
    pSVar5 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
    if (pSVar4 == (System_Type_array *)0x0) goto LAB_04078ca7;
    if (pSVar5 != (System_Type_o *)0x0) {
      lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (lVar6 == 0) goto LAB_04078cb1;
    }
    if ((int)pSVar4->max_length != 0) {
      pSVar4->m_Items[0] = pSVar5;
      il2cpp_runtime_glue(pSVar4->m_Items);
      pSVar5 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if (pSVar5 != (System_Type_o *)0x0) {
        lVar6 = il2cpp_runtime_glue(pSVar5,(((pSVar4->obj).klass)->_1).element_class);
        if (lVar6 == 0) {
LAB_04078cb1:
          uVar10 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar10,0);
        }
      }
      if (1 < (uint)pSVar4->max_length) {
        pSVar4->m_Items[1] = pSVar5;
        il2cpp_runtime_glue(pSVar4->m_Items + 1,pSVar5);
        __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(__this_01,"Background",pSVar4,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          pUVar8 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
          parent = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(pUVar8,parent,0,(MethodInfo *)0x0);
            __this_02 = (UnityEngine_UI_Image_o *)
                        UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Image_GetComponent_Image);
            if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
              UnityEngine_UI_Image__set_sprite
                        (__this_02,(__this->fields)._brushSprite,(MethodInfo *)0x0);
              if (DAT_057044c3 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
                il2cpp_init_method_metadata(&MethodInfo_Color_get_Item);
                DAT_057044c3 = '\x01';
              }
              pSVar1 = (__this->fields)._categoryColors;
              if (pSVar1 != (System_Collections_Generic_List_Color__o *)0x0) {
                UVar11 = System_Collections_Generic_List<Color>__get_Item
                                   (pSVar1,(__this->fields)._currentColorIndex,MethodInfo_Color_get_Item);
                pSVar1 = (__this->fields)._categoryColors;
                if (pSVar1 != (System_Collections_Generic_List_Color__o *)0x0) {
                  (__this->fields)._currentColorIndex =
                       ((__this->fields)._currentColorIndex + 1) % (pSVar1->fields)._size;
                  (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                            (UVar11.fields.r,UVar11.fields._8_8_,__this_02,
                             (__this_02->klass->vtable)._23_set_color.method);
                  __this_03 = (UnityEngine_RectTransform_o *)
                              UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
                  pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                  style = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
                  pSVar3 = "DefaultPanel";
                  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
                  (style->fields).FontSize = 0x18;
                  (style->fields).TitleWidth = 120.0;
                  (style->fields).Spacing = 20.0;
                  (style->fields).ThemePanel = pSVar3;
                  il2cpp_runtime_glue(&(style->fields).ThemePanel,pSVar3);
                  pUVar7 = UI_ElementFactory__CreateWhiteLabel(pUVar8,style,content,0,4,in_R9);
                  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                    __this_04 = (UnityEngine_UI_Text_o *)
                                UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_Text_GetComponent_Text);
                    if (__this_04 != (UnityEngine_UI_Text_o *)0x0) {
                      UnityEngine_UI_Text__set_font
                                (__this_04,(__this->fields)._categoryFont,(MethodInfo *)0x0);
                      UnityEngine_UI_Text__set_fontSize(__this_04,0x20,(MethodInfo *)0x0);
                      UnityEngine_UI_Text__set_fontStyle(__this_04,1,(MethodInfo *)0x0);
                      UnityEngine_UI_Text__set_alignment(__this_04,4,(MethodInfo *)0x0);
                      (*(__this_04->klass->vtable)._23_set_color.methodPtr)(__this_04);
                      layoutRoot = UnityEngine_UI_Graphic__get_rectTransform
                                             ((UnityEngine_UI_Graphic_o *)__this_04,
                                              (MethodInfo *)0x0);
                      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchorMin
                                  (__this_00,(UnityEngine_Vector2_o)0x3f80000000000000,
                                   (MethodInfo *)0x0);
                        UnityEngine_RectTransform__set_anchorMax
                                  (__this_00,(UnityEngine_Vector2_o)0x3f8000003f800000,
                                   (MethodInfo *)0x0);
                        if (DAT_056fe093 == '\0') {
                          il2cpp_init_method_metadata(&TypeInfo_Vector2);
                          DAT_056fe093 = '\x01';
                        }
                        UnityEngine_RectTransform__set_anchoredPosition
                                  (__this_00,
                                   (UnityEngine_Vector2_o)
                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                   (MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                                  (layoutRoot,(MethodInfo *)0x0);
                        if (layoutRoot != (UnityEngine_RectTransform_o *)0x0) {
                          UVar2 = UnityEngine_RectTransform__get_sizeDelta
                                            (layoutRoot,(MethodInfo *)0x0);
                          local_58.fields.x = UVar2.fields.x + 40.0;
                          local_58.fields.y = UVar2.fields.y + 20.0;
                          UnityEngine_RectTransform__set_sizeDelta
                                    (__this_00,
                                     (UnityEngine_Vector2_o)((ulong)(uint)local_58.fields.y << 0x20)
                                     ,(MethodInfo *)0x0);
                          if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                            UVar2.fields.y = local_58.fields.y + -15.0;
                            UVar2.fields.x = local_58.fields.x + -10.0;
                            UnityEngine_RectTransform__set_sizeDelta
                                      (__this_03,UVar2,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_sizeDelta
                                      (layoutRoot,local_58,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMax
                                      (__this_03,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMin
                                      (__this_03,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (__this_03,(UnityEngine_Vector2_o)0xc0a0000000000000,
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMax
                                      (layoutRoot,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                       (MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMin
                                      (layoutRoot,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                       (MethodInfo *)0x0);
                            if (DAT_056fe093 == '\0') {
                              il2cpp_init_method_metadata(&TypeInfo_Vector2);
                              DAT_056fe093 = '\x01';
                            }
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (layoutRoot,
                                       (UnityEngine_Vector2_o)
                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                       (MethodInfo *)0x0);
                            pUVar8 = UnityEngine_GameObject__get_transform
                                               (__this_01,(MethodInfo *)0x0);
                            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                              UnityEngine_Transform__SetAsFirstSibling(pUVar8,(MethodInfo *)0x0);
                              if (pIVar9 != (Il2CppObject *)0x0) {
                                (*pIVar9->klass->vtable[0x22].methodPtr)
                                          (pIVar9,pIVar9->klass->vtable[0x22].method);
                                vtable_dispatch = pIVar9->klass->vtable[0x26].methodPtr;
                                (*vtable_dispatch)
                                          (local_58.fields.y,pIVar9,
                                           pIVar9->klass->vtable[0x26].method,extraout_RDX_00,
                                           vtable_dispatch);
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
        goto LAB_04078ca7;
      }
    }
LAB_04078cac:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04078ca7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreditsMenu$$CreateSpacerElement
// il2cpp: void UI_CreditsMenu__CreateSpacerElement (UI_CreditsMenu_o* __this, float height, const MethodInfo* method);
// 0x4078cc0

void UI_CreditsMenu__CreateSpacerElement(UI_CreditsMenu_o *__this,float height,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  
  if (DAT_057044bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"Spacer");
    DAT_057044bf = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
LAB_04078eb4:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
    if (lVar2 == 0) goto LAB_04078ebe;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
LAB_04078ebe:
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      il2cpp_runtime_glue(components->m_Items + 1,pSVar1);
      __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor(__this_00,"Spacer",components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent
                    (__this_01,(UnityEngine_Transform_o *)(__this->fields)._contentTransform,0,
                     (MethodInfo *)0x0);
          pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar3 != (Il2CppObject *)0x0) {
            (*pIVar3->klass->vtable[0x22].methodPtr)
                      (height,pIVar3,pIVar3->klass->vtable[0x22].method);
            vtable_dispatch = pIVar3->klass->vtable[0x26].methodPtr;
            (*vtable_dispatch)
                      (height,pIVar3,pIVar3->klass->vtable[0x26].method,extraout_RDX,
                       vtable_dispatch);
            return;
          }
        }
      }
      goto LAB_04078eb4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreditsMenu$$CreateTextElement
// il2cpp: void UI_CreditsMenu__CreateTextElement (UI_CreditsMenu_o* __this, System_String_o* content, bool isCategory, const MethodInfo* method);
// 0x4077960

void UI_CreditsMenu__CreateTextElement
               (UI_CreditsMenu_o *__this,System_String_o *content,bool_conflict isCategory,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_Color__o *pSVar3;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar4;
  System_RuntimeTypeHandle_o SVar5;
  UI_ElementStyle_o *style;
  System_Type_array *pSVar6;
  System_Type_o *pSVar7;
  long lVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_UI_Text_o *pUVar11;
  UnityEngine_RectTransform_o *layoutRoot;
  System_String_array *pSVar12;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  UI_CreditsMenu_o *pUVar13;
  System_Collections_Generic_List_string__o *column;
  UI_CreditsMenu_o *column_00;
  Il2CppObject *pIVar14;
  System_String_o *pSVar15;
  System_String_o *content_00;
  UI_CreditsMenu_o *pUVar16;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_04;
  undefined8 uVar17;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar18;
  MethodInfo *method_00;
  int iVar19;
  MethodInfo *in_R9;
  int iVar20;
  int iVar21;
  UnityEngine_Color_o UVar22;
  UnityEngine_Vector2_o local_48;
  
  if (DAT_057044c0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_System_String__OrderByDesce);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__int);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_HorizontalLayoutGroup);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeInfo_LayoutRebuilder);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&MethodInfo_Int32__CreateTextElement_b__16_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"TwoColumnContainer");
    il2cpp_init_method_metadata(&"CategoryContainer");
    DAT_057044c0 = '\x01';
  }
  style = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  pSVar15 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar15;
  il2cpp_runtime_glue(&(style->fields).ThemePanel,pSVar15);
  if ((char)isCategory == '\0') {
    if ((content != (System_String_o *)0x0) &&
       (pSVar12 = System_String__Split(content,10,0,(MethodInfo *)0x0),
       pSVar12 != (System_String_array *)0x0)) {
      if ((int)pSVar12->max_length < 9) {
        pUVar9 = UI_ElementFactory__CreateWhiteLabel
                           ((UnityEngine_Transform_o *)(__this->fields)._contentTransform,style,
                            content,0,4,in_R9);
        if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar11 = (UnityEngine_UI_Text_o *)
                      UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_Text_GetComponent_Text),
           pUVar11 != (UnityEngine_UI_Text_o *)0x0)) {
          UnityEngine_UI_Text__set_fontSize(pUVar11,0x12,(MethodInfo *)0x0);
          UnityEngine_UI_Text__set_alignment(pUVar11,1,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
          keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_string__int);
          System_Func<object__int>___ctor();
          lVar8 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_TSource__TKey__o **)(lVar8 + 8) = keySelector;
          il2cpp_runtime_glue(lVar8 + 8,keySelector);
        }
        source = System_Linq_Enumerable__OrderByDescending<object__int>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar12,keySelector
                            ,MethodInfo_IOrderedEnumerable_1_System_String__OrderByDesce);
        pUVar13 = (UI_CreditsMenu_o *)
                  System_Linq_Enumerable__ToList<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             MethodInfo_List_1_System_String__ToList_String);
        column = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)column,MethodInfo_List_1_System_String);
        column_00 = (UI_CreditsMenu_o *)il2cpp_runtime_glue(TypeInfo_List_string);
        pUVar16 = column_00;
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)column_00,MethodInfo_List_1_System_String);
        if (pUVar13 != (UI_CreditsMenu_o *)0x0) {
          iVar19 = *(int *)&(pUVar13->fields).m_CancellationTokenSource;
          pMVar18 = extraout_RDX;
          if (column == (System_Collections_Generic_List_string__o *)0x0) {
            if (0 < iVar19) {
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pUVar13,0,MethodInfo_String_get_Item);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
          else if (0 < iVar19) {
            iVar19 = 0;
            iVar20 = 0;
            iVar21 = 0;
            do {
              while (pSVar15 = (System_String_o *)
                               System_Collections_Generic_List<object>__get_Item
                                         ((System_Collections_Generic_List_object__o *)pUVar13,
                                          iVar19,MethodInfo_String_get_Item), lVar8 = MethodInfo_Void_Add,
                    pUVar16 = pUVar13, iVar21 <= iVar20) {
                piVar1 = &(column->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar12 = (column->fields)._items;
                if (pSVar12 == (System_String_array *)0x0) goto LAB_04078580;
                uVar2 = (column->fields)._size;
                if (uVar2 < (uint)pSVar12->max_length) {
                  (column->fields)._size = uVar2 + 1;
                  pSVar12->m_Items[(int)uVar2] = pSVar15;
                  il2cpp_runtime_glue(pSVar12->m_Items + (int)uVar2,pSVar15);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)column,
                             (Il2CppObject *)pSVar15,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                pIVar14 = System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pUVar13,iVar19,
                                     MethodInfo_String_get_Item);
                if (pIVar14 == (Il2CppObject *)0x0) goto LAB_04078580;
                iVar21 = iVar21 + *(int *)&pIVar14[1].klass;
                iVar19 = iVar19 + 1;
                pMVar18 = extraout_RDX_01;
                if (*(int *)&(pUVar13->fields).m_CancellationTokenSource <= iVar19)
                goto LAB_04078381;
              }
              if (column_00 == (UI_CreditsMenu_o *)0x0) goto LAB_04078580;
              piVar1 = (int32_t *)((long)&(column_00->fields).m_CancellationTokenSource + 4);
              *piVar1 = *piVar1 + 1;
              pSVar12 = (System_String_array *)(column_00->fields).m_CachedPtr;
              if (pSVar12 == (System_String_array *)0x0) goto LAB_04078580;
              uVar2 = *(uint *)&(column_00->fields).m_CancellationTokenSource;
              if (uVar2 < (uint)pSVar12->max_length) {
                *(uint *)&(column_00->fields).m_CancellationTokenSource = uVar2 + 1;
                pSVar12->m_Items[(int)uVar2] = pSVar15;
                il2cpp_runtime_glue(pSVar12->m_Items + (int)uVar2,pSVar15);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)column_00,
                           (Il2CppObject *)pSVar15,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              pIVar14 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pUVar13,iVar19,
                                   MethodInfo_String_get_Item);
              if (pIVar14 == (Il2CppObject *)0x0) goto LAB_04078580;
              iVar20 = iVar20 + *(int *)&pIVar14[1].klass;
              iVar19 = iVar19 + 1;
              pMVar18 = extraout_RDX_00;
            } while (iVar19 < *(int *)&(pUVar13->fields).m_CancellationTokenSource);
          }
LAB_04078381:
          pSVar15 = UI_CreditsMenu__ArrangeColumn(pUVar16,column,pMVar18);
          content_00 = UI_CreditsMenu__ArrangeColumn
                                 (pUVar16,(System_Collections_Generic_List_string__o *)column_00,
                                  method_00);
          pSVar6 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
          SVar5 = TypeRef_RectTransform;
          if (*(int *)(DAT_05711100 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
          if (pSVar6 != (System_Type_array *)0x0) {
            if ((pSVar7 != (System_Type_o *)0x0) &&
               (lVar8 = il2cpp_runtime_glue(pSVar7,(((pSVar6->obj).klass)->_1).element_class),
               lVar8 == 0)) {
LAB_0407858a:
              uVar17 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar17,0);
            }
            if ((int)pSVar6->max_length != 0) {
              pSVar6->m_Items[0] = pSVar7;
              il2cpp_runtime_glue(pSVar6->m_Items);
              pSVar7 = System_Type__GetTypeFromHandle(TypeRef_HorizontalLayoutGroup,(MethodInfo *)0x0);
              if ((pSVar7 != (System_Type_o *)0x0) &&
                 (lVar8 = il2cpp_runtime_glue(pSVar7,(((pSVar6->obj).klass)->_1).element_class),
                 lVar8 == 0)) goto LAB_0407858a;
              if (1 < (uint)pSVar6->max_length) {
                pSVar6->m_Items[1] = pSVar7;
                il2cpp_runtime_glue(pSVar6->m_Items + 1,pSVar7);
                pUVar16 = (UI_CreditsMenu_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                UnityEngine_GameObject___ctor
                          ((UnityEngine_GameObject_o *)pUVar16,"TwoColumnContainer",pSVar6,(MethodInfo *)0x0
                          );
                if ((pUVar16 != (UI_CreditsMenu_o *)0x0) &&
                   (pUVar10 = UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)pUVar16,(MethodInfo *)0x0),
                   pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetParent
                            (pUVar10,(UnityEngine_Transform_o *)(__this->fields)._contentTransform,0
                             ,(MethodInfo *)0x0);
                  __this_04 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                              UnityEngine_GameObject__GetComponent<object>
                                        ((UnityEngine_GameObject_o *)pUVar16,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
                  if (__this_04 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                    UnityEngine_UI_LayoutGroup__set_childAlignment
                              ((UnityEngine_UI_LayoutGroup_o *)__this_04,1,(MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                              (__this_04,1,(MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                              (__this_04,0,(MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                              (__this_04,60.0,(MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                              (__this_04,0,(MethodInfo *)0x0);
                    pUVar13 = pUVar16;
                    pUVar10 = UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)pUVar16,(MethodInfo *)0x0);
                    UI_CreditsMenu__CreateColumnText(pUVar13,pUVar10,pSVar15,style,0,in_R9);
                    pUVar10 = UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)pUVar16,(MethodInfo *)0x0);
                    UI_CreditsMenu__CreateColumnText(pUVar16,pUVar10,content_00,style,2,in_R9);
                    return;
                  }
                }
                goto LAB_04078580;
              }
            }
LAB_04078585:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
  }
  else {
    pSVar6 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
    SVar5 = TypeRef_RectTransform;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar7 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
    if (pSVar6 != (System_Type_array *)0x0) {
      if ((pSVar7 != (System_Type_o *)0x0) &&
         (lVar8 = il2cpp_runtime_glue(pSVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0))
      goto LAB_0407858a;
      if ((int)pSVar6->max_length == 0) goto LAB_04078585;
      pSVar6->m_Items[0] = pSVar7;
      il2cpp_runtime_glue(pSVar6->m_Items,pSVar7);
      pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor(pUVar9,"CategoryContainer",pSVar6,(MethodInfo *)0x0);
      if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
         pUVar10 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent
                  (pUVar10,(UnityEngine_Transform_o *)(__this->fields)._contentTransform,0,
                   (MethodInfo *)0x0);
        __this_00 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_RectTransform_GetComponent_RectTransform);
        pSVar6 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
        pSVar7 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
        if (pSVar6 != (System_Type_array *)0x0) {
          if ((pSVar7 == (System_Type_o *)0x0) ||
             (lVar8 = il2cpp_runtime_glue(pSVar7,(((pSVar6->obj).klass)->_1).element_class),
             lVar8 != 0)) {
            if ((int)pSVar6->max_length != 0) {
              pSVar6->m_Items[0] = pSVar7;
              il2cpp_runtime_glue(pSVar6->m_Items);
              pSVar7 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
              if ((pSVar7 != (System_Type_o *)0x0) &&
                 (lVar8 = il2cpp_runtime_glue(pSVar7,(((pSVar6->obj).klass)->_1).element_class),
                 lVar8 == 0)) goto LAB_0407858a;
              if (1 < (uint)pSVar6->max_length) {
                pSVar6->m_Items[1] = pSVar7;
                il2cpp_runtime_glue(pSVar6->m_Items + 1,pSVar7);
                __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                UnityEngine_GameObject___ctor(__this_01,"Background",pSVar6,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar10 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                  parent = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__SetParent(pUVar10,parent,0,(MethodInfo *)0x0);
                    __this_02 = (UnityEngine_UI_Image_o *)
                                UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Image_GetComponent_Image)
                    ;
                    if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
                      UnityEngine_UI_Image__set_sprite
                                (__this_02,(__this->fields)._brushSprite,(MethodInfo *)0x0);
                      if (DAT_057044c3 == '\0') {
                        il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
                        il2cpp_init_method_metadata(&MethodInfo_Color_get_Item);
                        DAT_057044c3 = '\x01';
                      }
                      pSVar3 = (__this->fields)._categoryColors;
                      if (pSVar3 != (System_Collections_Generic_List_Color__o *)0x0) {
                        UVar22 = System_Collections_Generic_List<Color>__get_Item
                                           (pSVar3,(__this->fields)._currentColorIndex,MethodInfo_Color_get_Item)
                        ;
                        pSVar3 = (__this->fields)._categoryColors;
                        if (pSVar3 != (System_Collections_Generic_List_Color__o *)0x0) {
                          (__this->fields)._currentColorIndex =
                               ((__this->fields)._currentColorIndex + 1) % (pSVar3->fields)._size;
                          (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                                    (UVar22.fields.r,UVar22.fields._8_8_,__this_02,
                                     (__this_02->klass->vtable)._23_set_color.method);
                          __this_03 = (UnityEngine_RectTransform_o *)
                                      UnityEngine_GameObject__GetComponent<object>
                                                (__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
                          pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                          pUVar9 = UI_ElementFactory__CreateWhiteLabel
                                             (pUVar10,style,content,0,4,in_R9);
                          if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
                             (pUVar11 = (UnityEngine_UI_Text_o *)
                                        UnityEngine_GameObject__GetComponent<object>
                                                  (pUVar9,MethodInfo_Text_GetComponent_Text),
                             pUVar11 != (UnityEngine_UI_Text_o *)0x0)) {
                            UnityEngine_UI_Text__set_font
                                      (pUVar11,(__this->fields)._categoryFont,(MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_fontSize(pUVar11,0x20,(MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_fontStyle(pUVar11,1,(MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_alignment(pUVar11,4,(MethodInfo *)0x0);
                            (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                                      (0x3f800000,0x3f8000003f800000,pUVar11);
                            layoutRoot = UnityEngine_UI_Graphic__get_rectTransform
                                                   ((UnityEngine_UI_Graphic_o *)pUVar11,
                                                    (MethodInfo *)0x0);
                            if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                              UnityEngine_RectTransform__set_anchorMin
                                        (__this_00,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                         (MethodInfo *)0x0);
                              UnityEngine_RectTransform__set_anchorMax
                                        (__this_00,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                         (MethodInfo *)0x0);
                              if (DAT_056fe093 == '\0') {
                                il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                DAT_056fe093 = '\x01';
                              }
                              UnityEngine_RectTransform__set_anchoredPosition
                                        (__this_00,
                                         (UnityEngine_Vector2_o)
                                         **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                         (MethodInfo *)0x0);
                              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                                il2cpp_init_class();
                              }
                              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                                        (layoutRoot,(MethodInfo *)0x0);
                              if (layoutRoot != (UnityEngine_RectTransform_o *)0x0) {
                                UVar4 = UnityEngine_RectTransform__get_sizeDelta
                                                  (layoutRoot,(MethodInfo *)0x0);
                                local_48.fields.x = UVar4.fields.x + 40.0;
                                local_48.fields.y = UVar4.fields.y + 10.0;
                                UVar4.fields.y = local_48.fields.y;
                                UVar4.fields.x = local_48.fields.x;
                                UnityEngine_RectTransform__set_sizeDelta
                                          (__this_00,UVar4,(MethodInfo *)0x0);
                                if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                                  value.fields.y = local_48.fields.y + -35.0;
                                  value.fields.x = local_48.fields.x + -25.0;
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (__this_03,value,(MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (layoutRoot,local_48,(MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMax
                                            (__this_03,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMin
                                            (__this_03,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchoredPosition
                                            (__this_03,(UnityEngine_Vector2_o)0xc170000000000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMax
                                            (layoutRoot,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMin
                                            (layoutRoot,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  if (DAT_056fe093 == '\0') {
                                    il2cpp_init_method_metadata(&TypeInfo_Vector2);
                                    DAT_056fe093 = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchoredPosition
                                            (layoutRoot,
                                             (UnityEngine_Vector2_o)
                                             **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                             (MethodInfo *)0x0);
                                  pUVar10 = UnityEngine_GameObject__get_transform
                                                      (__this_01,(MethodInfo *)0x0);
                                  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                    UnityEngine_Transform__SetAsFirstSibling
                                              (pUVar10,(MethodInfo *)0x0);
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
                goto LAB_04078580;
              }
            }
            goto LAB_04078585;
          }
          goto LAB_0407858a;
        }
      }
    }
  }
LAB_04078580:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreditsMenu$$ArrangeColumn
// il2cpp: System_String_o* UI_CreditsMenu__ArrangeColumn (UI_CreditsMenu_o* __this, System_Collections_Generic_List_string__o* column, const MethodInfo* method);
// 0x4078f50

System_String_o *
UI_CreditsMenu__ArrangeColumn
          (UI_CreditsMenu_o *__this,System_Collections_Generic_List_string__o *column,
          MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *pSVar1;
  System_Collections_Generic_List_TSource__o *collection;
  System_Collections_Generic_List_TSource__o *collection_00;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar2;
  int count;
  
  if (DAT_057044c1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Reverse_String);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Skip_String);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Take_String);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"\n");
    DAT_057044c1 = '\x01';
  }
  if (column != (System_Collections_Generic_List_string__o *)0x0) {
    count = (column->fields)._size / 2;
    pSVar1 = System_Linq_Enumerable__Take<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)column,count,
                        MethodInfo_IEnumerable_1_System_String__Take_String);
    collection = System_Linq_Enumerable__ToList<object>(pSVar1,MethodInfo_List_1_System_String__ToList_String);
    pSVar1 = System_Linq_Enumerable__Skip<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)column,count,
                        MethodInfo_IEnumerable_1_System_String__Skip_String);
    pSVar1 = System_Linq_Enumerable__Reverse<object>(pSVar1,MethodInfo_IEnumerable_1_System_String__Reverse_String);
    collection_00 = System_Linq_Enumerable__ToList<object>(pSVar1,MethodInfo_List_1_System_String__ToList_String);
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__AddRange
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
      System_Collections_Generic_List<object>__AddRange
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection_00,MethodInfo_Void_AddRange
                );
      pSVar2 = System_String__Join("\n",
                                   (System_Collections_Generic_IEnumerable_string__o *)__this_00,
                                   (MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreditsMenu$$CreateColumnText
// il2cpp: void UI_CreditsMenu__CreateColumnText (UI_CreditsMenu_o* __this, UnityEngine_Transform_o* parent, System_String_o* content, UI_ElementStyle_o* style, int32_t alignment, const MethodInfo* method);
// 0x40790c0

void UI_CreditsMenu__CreateColumnText
               (UI_CreditsMenu_o *__this,UnityEngine_Transform_o *parent,System_String_o *content,
               UI_ElementStyle_o *style,int32_t alignment,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  
  if (DAT_057044c2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    DAT_057044c2 = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateWhiteLabel(parent,style,content,0,4,method);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = (UnityEngine_UI_Text_o *)
                UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Text_GetComponent_Text);
    if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
      UnityEngine_UI_Text__set_fontSize(__this_01,0x12,(MethodInfo *)0x0);
      UnityEngine_UI_Text__set_alignment(__this_01,alignment,(MethodInfo *)0x0);
      __this_02 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_sizeDelta
                  (__this_02,(UnityEngine_Vector2_o)0x43b40000,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreditsMenu$$GetNextCategoryColor
// il2cpp: UnityEngine_Color_o UI_CreditsMenu__GetNextCategoryColor (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x4078ed0

UnityEngine_Color_o
UI_CreditsMenu__GetNextCategoryColor(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Color__o *pSVar1;
  UnityEngine_Color_Fields UVar2;
  
  if (DAT_057044c3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Color_get_Item);
    DAT_057044c3 = '\x01';
  }
  pSVar1 = (__this->fields)._categoryColors;
  if (pSVar1 != (System_Collections_Generic_List_Color__o *)0x0) {
    UVar2 = (UnityEngine_Color_Fields)
            System_Collections_Generic_List<Color>__get_Item
                      (pSVar1,(__this->fields)._currentColorIndex,MethodInfo_Color_get_Item);
    pSVar1 = (__this->fields)._categoryColors;
    if (pSVar1 != (System_Collections_Generic_List_Color__o *)0x0) {
      (__this->fields)._currentColorIndex =
           ((__this->fields)._currentColorIndex + 1) % (pSVar1->fields)._size;
      return (UnityEngine_Color_o)UVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreditsMenu$$Update
// il2cpp: void UI_CreditsMenu__Update (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x4079190

void UI_CreditsMenu__Update(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  UnityEngine_RectTransform_o *pUVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined4 uVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o value;
  float fStack_28;
  float fStack_24;
  
  fVar5 = (__this->fields).scrollSpeed;
  bVar3 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
  if (((char)bVar3 == '\0') &&
     (bVar3 = UnityEngine_Input__GetKey(0x20,(MethodInfo *)0x0), (char)bVar3 == '\0')) {
    bVar3 = UnityEngine_Input__GetMouseButton(1,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      fVar5 = -(fVar5 * (__this->fields).fastScrollMultiplier);
    }
  }
  else {
    fVar5 = fVar5 * (__this->fields).fastScrollMultiplier;
  }
  pUVar4 = (__this->fields)._contentTransform;
  if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04079447;
  UVar9 = UnityEngine_Transform__get_localPosition
                    ((UnityEngine_Transform_o *)pUVar4,(MethodInfo *)0x0);
  fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar4 = (__this->fields)._contentTransform;
  if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04079447;
  fStack_28 = UVar9.fields.x;
  fStack_24 = UVar9.fields.y;
  UVar9.fields.y = fVar5 * fVar6 + fStack_24;
  UVar9.fields.x = fStack_28;
  UnityEngine_Transform__set_localPosition
            ((UnityEngine_Transform_o *)pUVar4,UVar9,(MethodInfo *)0x0);
  pUVar4 = (__this->fields)._contentTransform;
  if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04079447;
  UVar9 = UnityEngine_Transform__get_localPosition
                    ((UnityEngine_Transform_o *)pUVar4,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._layoutGroup;
  if (pUVar2 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto LAB_04079447;
  fVar5 = (float)(*(pUVar2->klass->vtable)._34_get_preferredHeight.methodPtr)
                           (UVar9.fields.y,UVar9.fields.z);
  pUVar4 = (__this->fields)._contentTransform;
  if (fVar5 <= UVar9.fields.y) {
    pUVar2 = (__this->fields)._layoutGroup;
    if ((pUVar2 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) ||
       (uVar7 = (*(pUVar2->klass->vtable)._34_get_preferredHeight.methodPtr)(),
       pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_04079447;
    uVar7 = uVar7 ^ 0x80000000;
    uVar8 = 0;
    fVar5 = 0.0;
LAB_04079366:
    value.fields.y = (float)uVar7;
    value.fields.x = (float)uVar8;
    value.fields.z = fVar5;
    UnityEngine_Transform__set_localPosition
              ((UnityEngine_Transform_o *)pUVar4,value,(MethodInfo *)0x0);
  }
  else {
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04079447;
    UVar9 = UnityEngine_Transform__get_localPosition
                      ((UnityEngine_Transform_o *)pUVar4,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._layoutGroup;
    if (pUVar2 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto LAB_04079447;
    fVar5 = (float)(*(pUVar2->klass->vtable)._34_get_preferredHeight.methodPtr)();
    if (UVar9.fields.y <= -fVar5) {
      pUVar4 = (__this->fields)._contentTransform;
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04079447;
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar8 = (undefined4)uVar1;
      uVar7 = (uint)((ulong)uVar1 >> 0x20);
      fVar5 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      goto LAB_04079366;
    }
  }
  fVar5 = (__this->fields)._tipTimer;
  if (0.0 < fVar5) {
    fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar5 = fVar5 - fVar6;
    (__this->fields)._tipTimer = fVar5;
    if (fVar5 <= 0.0) {
      if (DAT_057044c4 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_FadeOutTip_d__21);
        DAT_057044c4 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_FadeOutTip_d__21);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = (Il2CppClass *)__this;
        il2cpp_runtime_glue(__this_00 + 2,__this);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
LAB_04079447:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// UI.CreditsMenu$$FadeOutTip
// il2cpp: System_Collections_IEnumerator_o* UI_CreditsMenu__FadeOutTip (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x4079450

System_Collections_IEnumerator_o *
UI_CreditsMenu__FadeOutTip(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057044c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FadeOutTip_d__21);
    DAT_057044c4 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_FadeOutTip_d__21);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreditsMenu$$OnButtonClick
// il2cpp: void UI_CreditsMenu__OnButtonClick (UI_CreditsMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40794e0

void UI_CreditsMenu__OnButtonClick
               (UI_CreditsMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057044c5 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_057044c5 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.CreditsMenu$$.ctor
// il2cpp: void UI_CreditsMenu___ctor (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x4079530

void UI_CreditsMenu___ctor(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  (__this->fields).scrollSpeed = 60.0;
  (__this->fields).fastScrollMultiplier = 5.0;
  (__this->fields)._tipDisplayTime = 5.0;
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreditsMenu$$<Setup>b__11_0
// il2cpp: void UI_CreditsMenu___Setup_b__11_0 (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x4079560

void UI_CreditsMenu__<Setup>b__11_0(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool_conflict bVar1;
  
  if (DAT_057044c6 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_057044c6 = '\x01';
  }
  a = "Back";
  if (DAT_057044c5 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_057044c5 = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  return;
}


