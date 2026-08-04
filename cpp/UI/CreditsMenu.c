// Type: UI.CreditsMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CreditsMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CreditsMenu/CreditsMenu.cs
// --------------------------------

// UI.CreditsMenu.<>c$$.cctor
// il2cpp: void UI_CreditsMenu___c___cctor (const MethodInfo* method);
// 0x4386ff0

void UI_CreditsMenu___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae241 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae241 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.CreditsMenu.<>c$$.ctor
// il2cpp: void UI_CreditsMenu___c___ctor (UI_CreditsMenu___c_o* __this, const MethodInfo* method);
// 0x4387060

void UI_CreditsMenu___c___ctor(UI_CreditsMenu___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreditsMenu.<>c$$<CreateTextElement>b__16_0
// il2cpp: int32_t UI_CreditsMenu___c___CreateTextElement_b__16_0 (UI_CreditsMenu___c_o* __this, System_String_o* l, const MethodInfo* method);
// 0x4387070

int32_t UI_CreditsMenu___c___CreateTextElement_b__16_0
                  (UI_CreditsMenu___c_o *__this,System_String_o *l,MethodInfo *method)

{
  int32_t iVar1;
  
  if (l != (System_String_o *)0x0) {
    return (l->fields)._stringLength;
  }
  iVar1 = il2cpp_runtime_helper_022b2c90();
  return iVar1;
}


// UI.CreditsMenu.<FadeOutTip>d__21$$.ctor
// il2cpp: void UI_CreditsMenu__FadeOutTip_d__21___ctor (UI_CreditsMenu__FadeOutTip_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4386ed0

void UI_CreditsMenu__FadeOutTip_d__21___ctor
               (UI_CreditsMenu__FadeOutTip_d__21_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CreditsMenu.<FadeOutTip>d__21$$System.IDisposable.Dispose
// il2cpp: void UI_CreditsMenu__FadeOutTip_d__21__System_IDisposable_Dispose (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x4387080

void UI_CreditsMenu__FadeOutTip_d__21__System_IDisposable_Dispose
               (UI_CreditsMenu__FadeOutTip_d__21_o *__this,MethodInfo *method)

{
  return;
}


// UI.CreditsMenu.<FadeOutTip>d__21$$MoveNext
// il2cpp: bool UI_CreditsMenu__FadeOutTip_d__21__MoveNext (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x4387090

bool_conflict
UI_CreditsMenu__FadeOutTip_d__21__MoveNext(UI_CreditsMenu__FadeOutTip_d__21_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_CreditsMenu_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
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
      __this_01 = (UnityEngine_UI_Text_o *)__this;
      if (((pUVar2 != (UI_CreditsMenu_o *)0x0) &&
          (__this_01 = (pUVar2->fields)._tipText, __this_01 != (UnityEngine_UI_Text_o *)0x0)) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
        return 0;
      }
      goto label_0438723a;
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
  __this_01 = (UnityEngine_UI_Text_o *)0x0;
  fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._elapsedTime_5__3 = fVar5 + fVar7;
  if ((pUVar2 != (UI_CreditsMenu_o *)0x0) &&
     (pUVar3 = (pUVar2->fields)._tipText, pUVar3 != (UnityEngine_UI_Text_o *)0x0)) {
    uVar6 = (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
                      (pUVar3,(pUVar3->klass->vtable)._22_get_color.method);
    pUVar4 = (pUVar2->fields)._tipText;
    __this_01 = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar4->klass->vtable)._22_get_color.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_get_color.method);
      pUVar4 = (pUVar2->fields)._tipText;
      __this_01 = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        uVar8 = 0;
        (*(pUVar4->klass->vtable)._22_get_color.methodPtr)
                  (pUVar4,(pUVar4->klass->vtable)._22_get_color.method);
        (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                  (uVar6,uVar8,pUVar3,(pUVar3->klass->vtable)._23_set_color.method);
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
    }
  }
label_0438723a:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(__this_01->fields).m_CancellationTokenSource;
}


// UI.CreditsMenu.<FadeOutTip>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CreditsMenu__FadeOutTip_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x4387240

Il2CppObject *
UI_CreditsMenu__FadeOutTip_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CreditsMenu__FadeOutTip_d__21_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CreditsMenu.<FadeOutTip>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CreditsMenu__FadeOutTip_d__21__System_Collections_IEnumerator_Reset (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x4387250

void UI_CreditsMenu__FadeOutTip_d__21__System_Collections_IEnumerator_Reset
               (UI_CreditsMenu__FadeOutTip_d__21_o *__this,MethodInfo *method)

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


// UI.CreditsMenu.<FadeOutTip>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CreditsMenu__FadeOutTip_d__21__System_Collections_IEnumerator_get_Current (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x4387290

Il2CppObject *
UI_CreditsMenu__FadeOutTip_d__21__System_Collections_IEnumerator_get_Current
          (UI_CreditsMenu__FadeOutTip_d__21_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CreditsMenu$$Setup
// il2cpp: void UI_CreditsMenu__Setup (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x4383bf0

void UI_CreditsMenu__Setup(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o **ppUVar3;
  UnityEngine_Color_o *pUVar4;
  uint uVar5;
  UnityEngine_Color_array *pUVar6;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
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
  ulong extraout_RDX;
  ulong uVar18;
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
  
  if (g_data_057ae235 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&TypeRef_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Color);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Font_Load_Font);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sprite_Load_Sprite);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeRef_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"UI/Backgrounds/DarkBackgroundTextured");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/Intensa Fuente");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"#29888a");
    il2cpp_runtime_helper_023445d0(&"#ba661f");
    il2cpp_runtime_helper_023445d0(&"CreditsContent");
    il2cpp_runtime_helper_023445d0(&"#813d52");
    il2cpp_runtime_helper_023445d0(&"#614c90");
    il2cpp_runtime_helper_023445d0(&"#2065a0");
    g_data_057ae235 = '\x01';
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
  style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar15 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 100.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar15;
  il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar15);
  pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) goto label_043847dd;
  if ((pSVar9 == (System_Type_o *)0x0) || (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 != 0)) {
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = pSVar9;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      pSVar9 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
      goto label_043847e7;
      if (1 < (uint)pSVar8->max_length) {
        pSVar8->m_Items[1] = pSVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_AspectRatioFitter,(MethodInfo *)0x0);
        if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
        goto label_043847e7;
        if (2 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[2] = pSVar9;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
          pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(pUVar11,"Background",pSVar8,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_4e09e30(pUVar12,parent,0,(MethodInfo *)0x0);
              __this_00 = (UnityEngine_UI_Image_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Image_GetComponent_Image);
              pUVar13 = (UnityEngine_Sprite_o *)UnityEngine_Resources__Load_object_("UI/Backgrounds/DarkBackgroundTextured",MethodInfo_Sprite_Load_Sprite)
              ;
              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_00,pUVar13,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_type(__this_00,1,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_00,1,(MethodInfo *)0x0);
                pUVar14 = (UnityEngine_RectTransform_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  if (g_data_057a9c86 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a9c86 = '\x01';
                  }
                  UnityEngine_RectTransform__set_anchorMax
                            (pUVar14,(UnityEngine_Vector2_o)
                                     *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                             (MethodInfo *)0x0);
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar14,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  __this_01 = (UnityEngine_UI_AspectRatioFitter_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_AspectRatioFitter_GetComponent_AspectRatioFitter);
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
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar15 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        pUVar11 = UI_ElementFactory__CreateDefaultButton
                                            (pUVar12,style,pSVar15,0.0,0.0,onClick,in_R8);
                        UI_ElementFactory__SetAnchor
                                  (pUVar11,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)onClick
                                  );
                        pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                        pSVar9 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                        if (pSVar8 != (System_Type_array *)0x0) {
                          if ((pSVar9 != (System_Type_o *)0x0) &&
                             (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                          if ((int)pSVar8->max_length != 0) {
                            pSVar8->m_Items[0] = pSVar9;
                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
                            pSVar9 = System_Type__GetTypeFromHandle(TypeRef_VerticalLayoutGroup,(MethodInfo *)0x0);
                            if ((pSVar9 != (System_Type_o *)0x0) &&
                               (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                            if (1 < (uint)pSVar8->max_length) {
                              pSVar8->m_Items[1] = pSVar9;
                              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
                              pSVar9 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
                              if ((pSVar9 != (System_Type_o *)0x0) &&
                                 (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0)) goto label_043847e7;
                              if (2 < (uint)pSVar8->max_length) {
                                pSVar8->m_Items[2] = pSVar9;
                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2,pSVar9);
                                pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                UnityEngine_GameObject___ctor_4dfc440
                                          (pUVar11,"CreditsContent",pSVar8,(MethodInfo *)0x0);
                                if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar14 = (UnityEngine_RectTransform_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform)
                                  ;
                                  ppUVar2 = &(__this->fields)._contentTransform;
                                  (__this->fields)._contentTransform = pUVar14;
                                  il2cpp_runtime_helper_022b4080(ppUVar2,pUVar14);
                                  pUVar16 = (UnityEngine_UI_VerticalLayoutGroup_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup)
                                  ;
                                  ppUVar3 = &(__this->fields)._layoutGroup;
                                  (__this->fields)._layoutGroup = pUVar16;
                                  il2cpp_runtime_helper_022b4080(ppUVar3,pUVar16);
                                  __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
                                              UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar11,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
                                  pUVar14 = (__this->fields)._contentTransform;
                                  pUVar12 = UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                  if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_Transform__SetParent_4e09e30
                                              ((UnityEngine_Transform_o *)pUVar14,pUVar12,0,(MethodInfo *)0x0)
                                    ;
                                    if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMin
                                                (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                 (MethodInfo *)0x0);
                                      if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (*ppUVar2,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                   (MethodInfo *)0x0);
                                        pUVar14 = *ppUVar2;
                                        if (g_data_057a694c == '\0') {
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a694c = '\x01';
                                        }
                                        if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar14,(UnityEngine_Vector2_o)
                                                             **(UnityEngine_Vector2_Fields **)
                                                               (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                          if (*ppUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_sizeDelta
                                                      (*ppUVar2,(UnityEngine_Vector2_o)0x44480000,
                                                       (MethodInfo *)0x0);
                                            if (*ppUVar3 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                                              UnityEngine_UI_LayoutGroup__set_childAlignment
                                                        ((UnityEngine_UI_LayoutGroup_o *)*ppUVar3,1,
                                                         (MethodInfo *)0x0);
                                              if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*ppUVar3
                                                  != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                              {
                                                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                           )*ppUVar3,1,(MethodInfo *)0x0);
                                                if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                    *ppUVar3 !=
                                                    (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                              *)*ppUVar3,0,(MethodInfo *)0x0);
                                                  if (((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3 !=
                                                       (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0
                                                      ) && (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                                                 ((
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       *ppUVar3,10.0,(MethodInfo *)0x0),
                                                       __this_02 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)
                                                     ) {
                                                    UnityEngine_UI_ContentSizeFitter__set_verticalFit
                                                              (__this_02,2,(MethodInfo *)0x0);
                                                    pUVar17 = (UnityEngine_Font_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Fonts/Intensa Fuente",MethodInfo_Font_Load_Font);
                                                    (__this->fields)._categoryFont = pUVar17;
                                                    il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryFont,pUVar17
                                                                      );
                                                    pUVar13 = (UnityEngine_Sprite_o *)
                                                              UnityEngine_Resources__Load_object_
                                                                        ("UI/Sprites/Elements/Brush",MethodInfo_Sprite_Load_Sprite);
                                                    (__this->fields)._brushSprite = pUVar13;
                                                    il2cpp_runtime_helper_022b4080(&(__this->fields)._brushSprite,pUVar13)
                                                    ;
                                                    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Color)
                                                    ;
                                                    System_Collections_Generic_List_Color____ctor
                                                              ((System_Collections_Generic_List_Color__o *)
                                                               method_00,MethodInfo_List_1_UnityEngine_Color);
                                                    bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
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
                                                      piVar1 = (int32_t *)((long)&method_00->name + 4);
                                                      *piVar1 = *piVar1 + 1;
                                                      pUVar6 = ((System_Collections_Generic_List_Color__Fields
                                                                 *)&method_00->invoker_method)->_items;
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
                                                                                                                    
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
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
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_00,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
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
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_01,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
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
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_02,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
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
                                                                                                                      
                                                       System_Collections_Generic_List_Color___AddWithResize
                                                                 ((System_Collections_Generic_List_Color__o *)
                                                                  method_00,item_03,
                                                                  *(MethodInfo_3585690 **)
                                                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       (__this->fields)._categoryColors =
                                                            (System_Collections_Generic_List_Color__o *)
                                                            method_00;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryColors);
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
                                goto label_043847dd;
                              }
                            }
                          }
                          goto label_043847e2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
label_043847dd:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
label_043847e2:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043847e7:
  pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_0231b270();
  uVar18 = 0;
  value_02.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae287 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057ae287 = '\x01';
  }
  pUVar14 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_043848dd;
  pUVar14 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar19 = 1.0;
  switch(uVar18 & 0xffffffff) {
  case 0:
    while( true ) {
      fVar20 = 0.0;
joined_r0x043848db:
      if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) break;
label_043848dd:
      il2cpp_runtime_helper_022b2c90();
label_043848e2:
      fVar19 = 0.0;
    }
    goto label_043848ea;
  case 1:
    fVar20 = 0.5;
    fVar19 = 1.0;
    break;
  case 2:
    fVar20 = 1.0;
    fVar19 = 1.0;
    break;
  case 3:
    fVar20 = 0.0;
    fVar19 = 0.5;
    break;
  case 4:
    fVar20 = 0.5;
    goto joined_r0x043848b3;
  case 5:
    fVar20 = 1.0;
joined_r0x043848b3:
    fVar19 = 0.5;
    break;
  case 6:
    fVar20 = 0.0;
    goto joined_r0x043848cc;
  case 7:
    fVar20 = 0.5;
joined_r0x043848cc:
    fVar19 = 0.0;
    break;
  case 8:
    fVar20 = 1.0;
    fVar19 = 0.0;
    goto joined_r0x043848db;
  default:
    goto label_043848e2;
  }
  if (pUVar14 == (UnityEngine_RectTransform_o *)0x0) goto label_043848dd;
label_043848ea:
  value.fields.y = fVar19;
  value.fields.x = fVar20;
  UnityEngine_RectTransform__set_anchorMax(pUVar14,value,(MethodInfo *)0x0);
  value_01.fields.y = fVar19;
  value_01.fields.x = fVar20;
  UnityEngine_RectTransform__set_anchorMin(pUVar14,value_01,(MethodInfo *)0x0);
  fVar19 = 0.0;
  fVar20 = 1.0;
  switch(extraout_RDX & 0xffffffff) {
  case 0:
    break;
  case 1:
    fVar19 = 0.5;
    fVar20 = 1.0;
    break;
  case 2:
    fVar19 = 1.0;
    fVar20 = 1.0;
    break;
  case 3:
    fVar19 = 0.0;
    fVar20 = 0.5;
    break;
  case 4:
    fVar19 = 0.5;
    fVar20 = 0.5;
    break;
  case 5:
    fVar19 = 1.0;
    fVar20 = 0.5;
    break;
  default:
    fVar19 = 0.0;
    fVar20 = 0.0;
    break;
  case 7:
    fVar19 = 0.5;
    fVar20 = 0.0;
    break;
  case 8:
    fVar19 = 1.0;
    fVar20 = 0.0;
  }
  value_00.fields.y = fVar20;
  value_00.fields.x = fVar19;
  UnityEngine_RectTransform__set_pivot(pUVar14,value_00,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchoredPosition(pUVar14,value_02,(MethodInfo *)0x0);
  return;
}


// UI.CreditsMenu$$CreateTip
// il2cpp: void UI_CreditsMenu__CreateTip (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x4384990

void UI_CreditsMenu__CreateTip(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar3;
  System_String_c *panel;
  System_Collections_Generic_List_Color__o *__this_00;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o UVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  bool_conflict bVar5;
  UI_ElementStyle_o *pUVar6;
  UI_CreditsMenu_o *pUVar7;
  UI_CreditsMenu_o *pUVar8;
  UnityEngine_UI_Text_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  long *plVar12;
  System_Collections_Generic_List_object__o *pSVar13;
  MethodInfo *pMVar14;
  UnityEngine_UI_Text_o *__this_08;
  UnityEngine_UI_Text_o *__this_09;
  UnityEngine_Object_o *pUVar15;
  UnityEngine_UI_ContentSizeFitter_o *__this_10;
  Il2CppObject *pIVar16;
  System_RuntimeTypeHandle_Fields components;
  System_Type_o *pSVar17;
  long lVar18;
  UnityEngine_GameObject_o *pUVar19;
  UnityEngine_Transform_o *pUVar20;
  UnityEngine_GameObject_o *pUVar21;
  System_RuntimeTypeHandle_o SVar22;
  UnityEngine_UI_Image_o *pUVar23;
  UnityEngine_RectTransform_o *pUVar24;
  UnityEngine_RectTransform_o *pUVar25;
  System_String_array *pSVar26;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_string__o *column;
  System_Type_array *column_00;
  System_String_o *pSVar27;
  System_String_o *content;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_11;
  undefined8 uVar28;
  System_Type_array *pSVar29;
  UnityEngine_Transform_o *parent;
  long lVar30;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar31;
  System_Collections_Generic_List_TSource__o *collection;
  System_Collections_Generic_List_TSource__o *collection_00;
  MethodInfo_362B8B0 *pMVar32;
  Il2CppClass *pIVar33;
  Il2CppObject *__this_12;
  System_Object_array *method_00;
  MethodInfo_255A0F0 **ppMVar34;
  MethodInfo_2525430 **ppMVar35;
  MethodInfo_2517960 **style;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  ulong extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_01;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  System_String_o *title;
  int32_t index;
  int iVar36;
  MethodInfo_24E7B40 *__this_13;
  MethodInfo_362B8B0 *__this_14;
  UnityEngine_UI_Text_o *pUVar37;
  int32_t value_01;
  ulong uVar38;
  ulong uVar39;
  MethodInfo *in_R9;
  int iVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  uint uVar44;
  UnityEngine_Color_o UVar45;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar46;
  undefined1 auVar47 [16];
  UnityEngine_Vector3_o UVar48;
  UnityEngine_Vector3_o value_02;
  float fStackY_2d0;
  float fStackY_2cc;
  UnityEngine_Vector2_o UStackY_228;
  UnityEngine_Vector2_o UStackY_1c0;
  undefined8 in_stack_fffffffffffffec0;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppMethodPointer pIVar49;
  InvokerMethod pIVar50;
  char *pcVar51;
  Il2CppType *pIVar52;
  SimpleJSONFixed_JSONNode_o *pSVar53;
  undefined1 auStack_e0 [80];
  Il2CppMethodPointer pIStack_90;
  Il2CppMethodPointer pIStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  Il2CppClass *pIStack_70;
  Il2CppType *pIStack_68;
  SimpleJSONFixed_JSONNode_o *pSStack_60;
  _union_13 _Stack_58;
  _union_14 _Stack_50;
  UI_ElementStyle_o *pUStack_48;
  
  if (g_data_057ae236 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Hold LMB or Space to fast forward, and RMB to go backwards");
    g_data_057ae236 = '\x01';
  }
  pUVar6 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar26 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
  (pUVar6->fields).FontSize = 0x18;
  (pUVar6->fields).TitleWidth = 120.0;
  (pUVar6->fields).Spacing = 20.0;
  (pUVar6->fields).ThemePanel = (System_String_o *)pSVar26;
  il2cpp_runtime_helper_022b4080(&(pUVar6->fields).ThemePanel);
  pUVar7 = (UI_CreditsMenu_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  method_00 = (System_Object_array *)0x0;
  uVar38 = 4;
  pUVar8 = (UI_CreditsMenu_o *)
           UI_ElementFactory__CreateWhiteLabel
                     ((UnityEngine_Transform_o *)pUVar7,pUVar6,"Hold LMB or Space to fast forward, and RMB to go backwards",0,4,in_R9);
  if (pUVar8 != (UI_CreditsMenu_o *)0x0) {
    pUVar9 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
    pUVar6 = (UI_ElementStyle_o *)&(__this->fields)._tipText;
    (__this->fields)._tipText = pUVar9;
    il2cpp_runtime_helper_022b4080(pUVar6);
    pUVar9 = (__this->fields)._tipText;
    pUVar7 = (UI_CreditsMenu_o *)0x0;
    if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
      UnityEngine_UI_Text__set_fontSize(pUVar9,0x14,(MethodInfo *)0x0);
      pUVar7 = (UI_CreditsMenu_o *)0x0;
      if (*(UnityEngine_UI_Text_o **)pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
        UnityEngine_UI_Text__set_alignment(*(UnityEngine_UI_Text_o **)pUVar6,4,(MethodInfo *)0x0);
        pUVar10 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_RectTransform_GetComponent_RectTransform);
        pUVar7 = pUVar8;
        if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchoredPosition
                    (pUVar10,(UnityEngine_Vector2_o)0xc248000000000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_sizeDelta
                    (pUVar10,(UnityEngine_Vector2_o)0x4248000044160000,(MethodInfo *)0x0);
          (__this->fields)._tipTimer = (__this->fields)._tipDisplayTime;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_48 = pUVar6;
  if (g_data_057ae237 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscInfo);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"Error loading data.");
    il2cpp_runtime_helper_023445d0(&"\nBased on the original game created by Feng Li and Jiang Li.");
    il2cpp_runtime_helper_023445d0(&"Category");
    il2cpp_runtime_helper_023445d0(&"Names");
    g_data_057ae237 = '\x01';
  }
  auStack_e0._48_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_e0._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_e0._32_8_ = (Il2CppClass *)0x0;
  auStack_e0._40_8_ = (Il2CppType *)0x0;
  auStack_e0._16_8_ = (InvokerMethod)0x0;
  auStack_e0._24_8_ = (char *)0x0;
  auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_e0._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_e0._64_8_ = (void *)0x0;
  pSVar53 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(pSVar53,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    UI_CreditsMenu__CreateTextElement(pUVar7,"Error loading data.",0,(MethodInfo *)method_00);
    return;
  }
  plVar12 = *(long **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 0x10);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x338))(&pIStack_90,plVar12,*(undefined8 *)(*plVar12 + 0x340));
    pIVar50 = (InvokerMethod)CONCAT44(uStack_7c,uStack_80);
    pcVar51 = (char *)CONCAT44(uStack_74,uStack_78);
    __this_01.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar7;
    __this_01.fields._0_8_ = in_stack_fffffffffffffec0;
    __this_01.fields.m_Object.fields._8_8_ = pIStack_90;
    __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_88;
    __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar50;
    __this_01.fields.m_Object.fields._32_8_ = pcVar51;
    __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_70;
    __this_01.fields.m_Array.fields._8_8_ = pIStack_68;
    __this_01.fields.m_Array.fields._current = pSStack_60;
    UNRECOVERED_JUMPTABLE_00 = pIStack_90;
    pIVar49 = pIStack_88;
    pIVar33 = pIStack_70;
    pIVar52 = pIStack_68;
    pSVar53 = pSStack_60;
    bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_01,(MethodInfo *)&stack0xfffffffffffffed0);
    if ((char)bVar5 != '\0') {
      do {
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar7;
        __this_02.fields._0_8_ = in_stack_fffffffffffffec0;
        __this_02.fields.m_Object.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar49;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar50;
        __this_02.fields.m_Object.fields._32_8_ = pcVar51;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar33;
        __this_02.fields.m_Array.fields._8_8_ = pIVar52;
        __this_02.fields.m_Array.fields._current = pSVar53;
        SVar46 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_02,(MethodInfo *)&stack0xfffffffffffffed0);
        pUVar8 = pUVar7;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pUVar8 = pUVar7;
        }
        pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar46,(MethodInfo *)0x0);
        if ((pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (plVar12 = (long *)(*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar11,"Category",(pSVar11->klass->vtable)._7_get_Item.method),
           plVar12 == (long *)0x0)) goto label_043850c6;
        auVar47 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
        UI_CreditsMenu__CreateCategoryElement(pUVar8,auVar47._0_8_,auVar47._8_8_);
        pSVar13 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(pSVar13,MethodInfo_List_1_System_String);
        plVar12 = (long *)(*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar11,"Names",(pSVar11->klass->vtable)._7_get_Item.method);
        if (plVar12 == (long *)0x0) goto label_043850c6;
        method_00 = (System_Object_array *)*plVar12;
        (*(code *)method_00->m_Items[99])(&pIStack_90,plVar12,method_00->m_Items[100]);
        auStack_e0._64_8_ = _Stack_50;
        auStack_e0._48_8_ = pSStack_60;
        auStack_e0._56_8_ = _Stack_58;
        auStack_e0._32_8_ = pIStack_70;
        auStack_e0._40_8_ = pIStack_68;
        auStack_e0._20_4_ = uStack_7c;
        auStack_e0._16_4_ = uStack_80;
        auStack_e0._28_4_ = uStack_74;
        auStack_e0._24_4_ = uStack_78;
        auStack_e0._0_8_ = pIStack_90;
        auStack_e0._8_8_ = pIStack_88;
        __this_03.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar8;
        __this_03.fields._0_8_ = in_stack_fffffffffffffec0;
        __this_03.fields.m_Object.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
        __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar49;
        __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar50;
        __this_03.fields.m_Object.fields._32_8_ = pcVar51;
        __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar33;
        __this_03.fields.m_Array.fields._8_8_ = pIVar52;
        __this_03.fields.m_Array.fields._current = pSVar53;
        bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)auStack_e0);
        if ((char)bVar5 != '\0') {
          if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) {
            __this_07.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar8;
            __this_07.fields._0_8_ = in_stack_fffffffffffffec0;
            __this_07.fields.m_Object.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
            __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar49;
            __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar50;
            __this_07.fields.m_Object.fields._32_8_ = pcVar51;
            __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar33;
            __this_07.fields.m_Array.fields._8_8_ = pIVar52;
            __this_07.fields.m_Array.fields._current = pSVar53;
            SVar46 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_07,(MethodInfo *)auStack_e0);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar9 = (UnityEngine_UI_Text_o *)
                     SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar46,(MethodInfo *)0x0);
            if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) goto label_043850cb;
            goto label_043850c6;
          }
          do {
            __this_05.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar8;
            __this_05.fields._0_8_ = in_stack_fffffffffffffec0;
            __this_05.fields.m_Object.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
            __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar49;
            __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar50;
            __this_05.fields.m_Object.fields._32_8_ = pcVar51;
            __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar33;
            __this_05.fields.m_Array.fields._8_8_ = pIVar52;
            __this_05.fields.m_Array.fields._current = pSVar53;
            SVar46 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_05,(MethodInfo *)auStack_e0);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar46,(MethodInfo *)0x0);
            if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_043850c6;
            pIVar16 = (Il2CppObject *)
                      (*(pSVar11->klass->vtable)._9_get_Value.methodPtr)
                                (pSVar11,(pSVar11->klass->vtable)._9_get_Value.method);
            bVar5 = System_Collections_Generic_List_object___Contains(pSVar13,pIVar16,MethodInfo_Boolean_Contains);
            if ((char)bVar5 == '\0') {
              pIVar16 = (Il2CppObject *)
                        (*(pSVar11->klass->vtable)._9_get_Value.methodPtr)
                                  (pSVar11,(pSVar11->klass->vtable)._9_get_Value.method);
              lVar18 = MethodInfo_Void_Add;
              piVar1 = &(pSVar13->fields)._version;
              *piVar1 = *piVar1 + 1;
              method_00 = (pSVar13->fields)._items;
              if (method_00 == (System_Object_array *)0x0) goto label_043850c6;
              uVar44 = (pSVar13->fields)._size;
              if (uVar44 < (uint)method_00->max_length) {
                (pSVar13->fields)._size = uVar44 + 1;
                method_00->m_Items[(int)uVar44] = pIVar16;
                il2cpp_runtime_helper_022b4080(method_00->m_Items + (int)uVar44,pIVar16);
              }
              else {
                method_00 = *(System_Object_array **)(*(long *)(lVar18 + 0x20) + 0xc0);
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar13,pIVar16,(MethodInfo_362C220 *)method_00->m_Items[10]);
              }
            }
            __this_04.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar8;
            __this_04.fields._0_8_ = in_stack_fffffffffffffec0;
            __this_04.fields.m_Object.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
            __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar49;
            __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar50;
            __this_04.fields.m_Object.fields._32_8_ = pcVar51;
            __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar33;
            __this_04.fields.m_Array.fields._8_8_ = pIVar52;
            __this_04.fields.m_Array.fields._current = pSVar53;
            bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_04,(MethodInfo *)auStack_e0);
          } while ((char)bVar5 != '\0');
        }
        if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) goto label_043850c6;
        System_Collections_Generic_List_object___Sort(pSVar13,MethodInfo_Void_Sort);
        pMVar14 = (MethodInfo *)
                  System_String__Join_3af7e00
                            ("\n",(System_Collections_Generic_IEnumerable_string__o *)pSVar13,
                             (MethodInfo *)0x0);
        pUVar7 = pUVar8;
        UI_CreditsMenu__CreateTextElement(pUVar8,(System_String_o *)pMVar14,0,(MethodInfo *)method_00);
        UI_CreditsMenu__CreateSpacerElement(pUVar8,20.0,pMVar14);
        __this_06.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar7;
        __this_06.fields._0_8_ = in_stack_fffffffffffffec0;
        __this_06.fields.m_Object.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
        __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar49;
        __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar50;
        __this_06.fields.m_Object.fields._32_8_ = pcVar51;
        __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar33;
        __this_06.fields.m_Array.fields._8_8_ = pIVar52;
        __this_06.fields.m_Array.fields._current = pSVar53;
        bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_06,(MethodInfo *)&stack0xfffffffffffffed0);
      } while ((char)bVar5 != '\0');
    }
    UI_CreditsMenu__CreateTextElement(pUVar7,"\nBased on the original game created by Feng Li and Jiang Li.",0,(MethodInfo *)method_00);
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    pUVar10 = (pUVar7->fields)._contentTransform;
    if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar10,(MethodInfo *)0x0);
    pUVar3 = (pUVar7->fields)._layoutGroup;
    if (pUVar3 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
      fVar42 = (float)(*(pUVar3->klass->vtable)._34_get_preferredHeight.methodPtr)();
      pUVar10 = (pUVar7->fields)._contentTransform;
      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar10,(UnityEngine_Vector2_o)((ulong)(uint)(fVar42 * -0.5 + -300.0) << 0x20),
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
label_043850c6:
  pUVar9 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_022b2c90();
label_043850cb:
  pSVar26 = (System_String_array *)pUVar9->klass;
  pSVar27 = pSVar26->m_Items[0x36];
  (*(code *)pSVar26->m_Items[0x35])();
  il2cpp_runtime_helper_022b2c90();
  ppMVar34 = (MethodInfo_255A0F0 **)pSVar26;
  pMVar14 = extraout_RDX;
  uVar39 = uVar38;
  if (g_data_057ae272 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/DefaultLabel");
    il2cpp_runtime_helper_023445d0(&"WhiteLabel");
    g_data_057ae272 = '\x01';
    pMVar14 = extraout_RDX_00;
  }
  __this_13 = "Prefabs/Elements/DefaultLabel";
  pUVar37 = pUVar9;
  __this_08 = (UnityEngine_UI_Text_o *)
              UI_ElementFactory__InstantiateAndBind
                        ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"Prefabs/Elements/DefaultLabel",pMVar14);
  if (((__this_08 != (UnityEngine_UI_Text_o *)0x0) &&
      (__this_13 = (MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text,
      __this_09 = (UnityEngine_UI_Text_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)__this_08,MethodInfo_Text_GetComponent_Text), pUVar37 = __this_08,
      pSVar27 != (System_String_o *)0x0)) && (__this_09 != (UnityEngine_UI_Text_o *)0x0)) {
    UnityEngine_UI_Text__set_fontSize(__this_09,(pSVar27->fields)._stringLength,(MethodInfo *)0x0);
    (*(__this_09->klass->vtable)._75_set_text.methodPtr)
              (__this_09,extraout_RDX,(__this_09->klass->vtable)._75_set_text.method);
    UnityEngine_UI_Text__set_fontStyle(__this_09,(int32_t)pSVar26,(MethodInfo *)0x0);
    panel = pSVar27[1].klass;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar39 = 0;
    ppMVar34 = (MethodInfo_255A0F0 **)"DefaultPanel";
    UVar45 = UI_UIManager__GetThemeColor
                       ((System_String_o *)panel,"WhiteLabel","TextColor",(System_String_o *)"DefaultPanel",
                        (MethodInfo *)0x0);
    (*(__this_09->klass->vtable)._23_set_color.methodPtr)
              (UVar45.fields.r,UVar45.fields.b,__this_09,(__this_09->klass->vtable)._23_set_color.method);
    __this_13 = (MethodInfo_24E7B40 *)(uVar38 & 0xffffffff);
    pUVar37 = __this_09;
    UnityEngine_UI_Text__set_alignment(__this_09,(int32_t)uVar38,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar15 = (UnityEngine_Object_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar9,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      __this_13 = MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter;
      pUVar37 = __this_09;
      __this_10 = (UnityEngine_UI_ContentSizeFitter_o *)
                  UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_09,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
      if (__this_10 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
        UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                  (__this_10,(uint)(byte)((byte)bVar5 ^ 1) * 2,(MethodInfo *)0x0);
        pUVar15 = (UnityEngine_Object_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar9,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Inequality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        __this_13 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
        pIVar16 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_09,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        pUVar37 = __this_09;
        if (pIVar16 != (Il2CppObject *)0x0) {
          (*pIVar16->klass->vtable[0x28].methodPtr)(0,pIVar16,pIVar16->klass->vtable[0x28].method);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SVar22.fields.value = (System_RuntimeTypeHandle_Fields)(extraout_RDX_01 & 0xffffffff);
  if (g_data_057ae23a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_String_OrderByDescending_Str);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_CreateTextElement_b__16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"TwoColumnContainer");
    il2cpp_runtime_helper_023445d0(&"CategoryContainer");
    g_data_057ae23a = '\x01';
  }
  pUVar6 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar26 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
  (pUVar6->fields).FontSize = 0x18;
  (pUVar6->fields).TitleWidth = 120.0;
  (pUVar6->fields).Spacing = 20.0;
  (pUVar6->fields).ThemePanel = (System_String_o *)pSVar26;
  il2cpp_runtime_helper_022b4080(&(pUVar6->fields).ThemePanel);
  value_01 = (int32_t)uVar39;
  if (SUB81(SVar22.fields.value,0) == '\0') {
    if (__this_13 == (MethodInfo_24E7B40 *)0x0) goto label_04385f90;
    ppMVar34 = (MethodInfo_255A0F0 **)0x0;
    pSVar26 = System_String__Split((System_String_o *)__this_13,10,0,(MethodInfo *)0x0);
    value_01 = (int32_t)uVar39;
    if (pSVar26 == (System_String_array *)0x0) goto label_04385f90;
    if ((int)pSVar26->max_length < 9) {
      ppMVar34 = (MethodInfo_255A0F0 **)0x0;
      value_01 = 4;
      pUVar19 = UI_ElementFactory__CreateWhiteLabel
                          ((UnityEngine_Transform_o *)(pUVar37->fields).m_ColorTweenRunner,pUVar6,
                           (System_String_o *)__this_13,0,4,in_R9);
      SVar22.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar26;
      if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
        ppMVar34 = &MethodInfo_Text_GetComponent_Text;
        pUVar9 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_Text_GetComponent_Text);
        if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
          UnityEngine_UI_Text__set_fontSize(pUVar9,0x12,(MethodInfo *)0x0);
          UnityEngine_UI_Text__set_alignment(pUVar9,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_04385f90;
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_int);
      System_Func_object__int____ctor();
      lVar18 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar18 + 8) = keySelector;
      il2cpp_runtime_helper_022b4080(lVar18 + 8,keySelector);
    }
    source = System_Linq_Enumerable__OrderByDescending_object__int_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar26,keySelector,MethodInfo_IOrderedEnumerable_1_System_String_OrderByDescending_Str)
    ;
    ppMVar35 = &MethodInfo_List_1_System_String_ToList_String;
    components.value =
         (intptr_t)
         System_Linq_Enumerable__ToList_object_
                   ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    column = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)column,MethodInfo_List_1_System_String);
    column_00 = (System_Type_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pSVar29 = column_00;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)column_00,MethodInfo_List_1_System_String);
    value_01 = (int32_t)uVar39;
    ppMVar34 = (MethodInfo_255A0F0 **)ppMVar35;
    SVar22.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)components.value;
    if ((System_Type_array *)components.value == (System_Type_array *)0x0) goto label_04385f90;
    iVar36 = (int)((System_Type_array *)components.value)->max_length;
    pMVar14 = extraout_RDX_02;
    if (column != (System_Collections_Generic_List_string__o *)0x0) {
      if (0 < iVar36) {
        index = 0;
        iVar36 = 0;
        iVar40 = 0;
        do {
          while( true ) {
            pSVar27 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)components.value,index,
                                 MethodInfo_String_get_Item);
            lVar18 = MethodInfo_Void_Add;
            value_01 = (int32_t)uVar39;
            pSVar29 = (System_Type_array *)components.value;
            if (iVar40 <= iVar36) break;
            if (column_00 == (System_Type_array *)0x0) goto label_04385f90;
            piVar2 = (int *)((long)&column_00->max_length + 4);
            *piVar2 = *piVar2 + 1;
            ppMVar34 = (MethodInfo_255A0F0 **)column_00->bounds;
            if ((System_String_array *)ppMVar34 == (System_String_array *)0x0) goto label_04385f90;
            uVar44 = (uint)column_00->max_length;
            if (uVar44 < (uint)((System_String_array *)ppMVar34)->max_length) {
              *(uint *)&column_00->max_length = uVar44 + 1;
              ((System_String_array *)ppMVar34)->m_Items[(int)uVar44] = pSVar27;
              il2cpp_runtime_helper_022b4080(((System_String_array *)ppMVar34)->m_Items + (int)uVar44,pSVar27);
            }
            else {
              ppMVar34 = *(MethodInfo_255A0F0 ***)(*(long *)(lVar18 + 0x20) + 0xc0);
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)column_00,(Il2CppObject *)pSVar27,
                         (MethodInfo_362C220 *)((System_String_array *)ppMVar34)->m_Items[10]);
            }
            pIVar16 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)components.value,index,
                                 MethodInfo_String_get_Item);
            value_01 = (int32_t)uVar39;
            if (pIVar16 == (Il2CppObject *)0x0) goto label_04385f90;
            iVar36 = iVar36 + *(int *)&pIVar16[1].klass;
            index = index + 1;
            ppMVar35 = (MethodInfo_2525430 **)ppMVar34;
            pMVar14 = extraout_RDX_03;
            if ((int)((System_Type_array *)components.value)->max_length <= index) goto label_04385d91;
          }
          piVar1 = &(column->fields)._version;
          *piVar1 = *piVar1 + 1;
          ppMVar34 = (MethodInfo_255A0F0 **)(column->fields)._items;
          if ((System_String_array *)ppMVar34 == (System_String_array *)0x0) goto label_04385f90;
          uVar44 = (column->fields)._size;
          if (uVar44 < (uint)((System_String_array *)ppMVar34)->max_length) {
            (column->fields)._size = uVar44 + 1;
            ((System_String_array *)ppMVar34)->m_Items[(int)uVar44] = pSVar27;
            il2cpp_runtime_helper_022b4080(((System_String_array *)ppMVar34)->m_Items + (int)uVar44,pSVar27);
          }
          else {
            ppMVar34 = *(MethodInfo_255A0F0 ***)(*(long *)(lVar18 + 0x20) + 0xc0);
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)column,(Il2CppObject *)pSVar27,
                       (MethodInfo_362C220 *)((System_String_array *)ppMVar34)->m_Items[10]);
          }
          pIVar16 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)components.value,index,
                               MethodInfo_String_get_Item);
          value_01 = (int32_t)uVar39;
          if (pIVar16 == (Il2CppObject *)0x0) goto label_04385f90;
          iVar40 = iVar40 + *(int *)&pIVar16[1].klass;
          index = index + 1;
          ppMVar35 = (MethodInfo_2525430 **)ppMVar34;
          pMVar14 = extraout_RDX_04;
        } while (index < (int)((System_Type_array *)components.value)->max_length);
      }
label_04385d91:
      pSVar27 = UI_CreditsMenu__ArrangeColumn((UI_CreditsMenu_o *)pSVar29,column,pMVar14);
      content = UI_CreditsMenu__ArrangeColumn
                          ((UI_CreditsMenu_o *)pSVar29,(System_Collections_Generic_List_string__o *)column_00,
                           method_01);
      pSVar29 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
      SVar22 = TypeRef_RectTransform;
      ppMVar34 = (MethodInfo_255A0F0 **)ppMVar35;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        ppMVar34 = (MethodInfo_255A0F0 **)ppMVar35;
      }
      components.value = (intptr_t)System_Type__GetTypeFromHandle(SVar22,(MethodInfo *)0x0);
      if (pSVar29 == (System_Type_array *)0x0) goto label_04385f90;
      if (((System_Type_array *)components.value == (System_Type_array *)0x0) ||
         (lVar18 = il2cpp_runtime_helper_023051f0(components.value), lVar18 != 0)) {
        if ((int)pSVar29->max_length != 0) {
          pSVar29->m_Items[0] = (System_Type_o *)components.value;
          il2cpp_runtime_helper_022b4080(pSVar29->m_Items);
          components.value = (intptr_t)System_Type__GetTypeFromHandle(TypeRef_HorizontalLayoutGroup,(MethodInfo *)0x0);
          if (((System_Type_array *)components.value != (System_Type_array *)0x0) &&
             (lVar18 = il2cpp_runtime_helper_023051f0(components.value), lVar18 == 0)) goto label_04385f9a;
          if (1 < (uint)pSVar29->max_length) {
            pSVar29->m_Items[1] = (System_Type_o *)components.value;
            il2cpp_runtime_helper_022b4080(pSVar29->m_Items + 1,components.value);
            SVar22.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            ppMVar34 = (MethodInfo_255A0F0 **)0x0;
            UnityEngine_GameObject___ctor_4dfc440
                      ((UnityEngine_GameObject_o *)SVar22.fields.value,"TwoColumnContainer",pSVar29,(MethodInfo *)0x0)
            ;
            if ((SVar22.fields.value != 0) &&
               (pUVar20 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar22.fields.value,(MethodInfo *)0x0),
               pUVar20 != (UnityEngine_Transform_o *)0x0)) {
              ppMVar34 = (MethodInfo_255A0F0 **)0x0;
              UnityEngine_Transform__SetParent_4e09e30
                        (pUVar20,(UnityEngine_Transform_o *)(pUVar37->fields).m_ColorTweenRunner,0,
                         (MethodInfo *)0x0);
              __this_11 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)SVar22.fields.value,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
              if (__this_11 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)__this_11,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                          (__this_11,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (__this_11,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_11,60.0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                          (__this_11,0,(MethodInfo *)0x0);
                pUVar7 = (UI_CreditsMenu_o *)SVar22.fields.value;
                pUVar20 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar22.fields.value,(MethodInfo *)0x0);
                UI_CreditsMenu__CreateColumnText(pUVar7,pUVar20,pSVar27,pUVar6,0,in_R9);
                pUVar20 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar22.fields.value,(MethodInfo *)0x0);
                UI_CreditsMenu__CreateColumnText
                          ((UI_CreditsMenu_o *)SVar22.fields.value,pUVar20,content,pUVar6,2,in_R9);
                return;
              }
            }
            goto label_04385f90;
          }
        }
        goto label_04385f95;
      }
      goto label_04385f9a;
    }
    if (iVar36 < 1) goto label_04385d91;
  }
  else {
    components.value = il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    SVar22 = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = System_Type__GetTypeFromHandle(SVar22,(MethodInfo *)0x0);
    SVar22.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)components.value;
    if ((System_Type_array *)components.value == (System_Type_array *)0x0) goto label_04385f90;
    if ((pSVar17 != (System_Type_o *)0x0) && (lVar18 = il2cpp_runtime_helper_023051f0(pSVar17), lVar18 == 0))
    goto label_04385f9a;
    if ((int)((System_Type_array *)components.value)->max_length == 0) goto label_04385f95;
    ((System_Type_array *)components.value)->m_Items[0] = pSVar17;
    il2cpp_runtime_helper_022b4080(((System_Type_array *)components.value)->m_Items,pSVar17);
    pUVar19 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    ppMVar34 = (MethodInfo_255A0F0 **)0x0;
    UnityEngine_GameObject___ctor_4dfc440
              (pUVar19,"CategoryContainer",(System_Type_array *)components.value,(MethodInfo *)0x0);
    if ((pUVar19 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar20 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0),
       pUVar20 != (UnityEngine_Transform_o *)0x0)) {
      ppMVar34 = (MethodInfo_255A0F0 **)0x0;
      UnityEngine_Transform__SetParent_4e09e30
                (pUVar20,(UnityEngine_Transform_o *)(pUVar37->fields).m_ColorTweenRunner,0,(MethodInfo *)0x0);
      pUVar10 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_RectTransform_GetComponent_RectTransform);
      components.value = il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
      pSVar17 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
      SVar22.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)components.value
      ;
      if ((System_Type_array *)components.value != (System_Type_array *)0x0) {
        if ((pSVar17 == (System_Type_o *)0x0) || (lVar18 = il2cpp_runtime_helper_023051f0(pSVar17), lVar18 != 0)) {
          if ((int)((System_Type_array *)components.value)->max_length != 0) {
            ((System_Type_array *)components.value)->m_Items[0] = pSVar17;
            il2cpp_runtime_helper_022b4080(((System_Type_array *)components.value)->m_Items);
            pSVar17 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
            if ((pSVar17 != (System_Type_o *)0x0) && (lVar18 = il2cpp_runtime_helper_023051f0(pSVar17), lVar18 == 0))
            goto label_04385f9a;
            if (1 < (uint)((System_Type_array *)components.value)->max_length) {
              ((System_Type_array *)components.value)->m_Items[1] = pSVar17;
              il2cpp_runtime_helper_022b4080(((System_Type_array *)components.value)->m_Items + 1,pSVar17);
              pUVar21 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              ppMVar34 = (MethodInfo_255A0F0 **)0x0;
              UnityEngine_GameObject___ctor_4dfc440
                        (pUVar21,"Background",(System_Type_array *)components.value,(MethodInfo *)0x0);
              if (pUVar21 != (UnityEngine_GameObject_o *)0x0) {
                SVar22.fields.value =
                     (System_RuntimeTypeHandle_Fields)
                     UnityEngine_GameObject__get_transform(pUVar21,(MethodInfo *)0x0);
                pUVar20 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                if (SVar22.fields.value != 0) {
                  ppMVar34 = (MethodInfo_255A0F0 **)0x0;
                  UnityEngine_Transform__SetParent_4e09e30
                            ((UnityEngine_Transform_o *)SVar22.fields.value,pUVar20,0,(MethodInfo *)0x0);
                  pUVar23 = (UnityEngine_UI_Image_o *)
                            UnityEngine_GameObject__GetComponent_object_(pUVar21,MethodInfo_Image_GetComponent_Image);
                  if (pUVar23 != (UnityEngine_UI_Image_o *)0x0) {
                    UnityEngine_UI_Image__set_sprite
                              (pUVar23,(UnityEngine_Sprite_o *)(pUVar37->fields).m_OnCullStateChanged,
                               (MethodInfo *)0x0);
                    if (g_data_057ae23d == '\0') {
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Item);
                      g_data_057ae23d = '\x01';
                    }
                    __this_00 = *(System_Collections_Generic_List_Color__o **)&(pUVar37->fields).m_Maskable;
                    SVar22.fields.value =
                         (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pUVar23;
                    if (__this_00 != (System_Collections_Generic_List_Color__o *)0x0) {
                      UVar45 = System_Collections_Generic_List_Color___get_Item
                                         (__this_00,(pUVar37->fields).m_IncludeForMasking,MethodInfo_Color_get_Item);
                      lVar18 = *(long *)&(pUVar37->fields).m_Maskable;
                      ppMVar34 = (MethodInfo_255A0F0 **)0x0;
                      if (lVar18 != 0) {
                        (pUVar37->fields).m_IncludeForMasking =
                             ((pUVar37->fields).m_IncludeForMasking + 1) % *(int *)(lVar18 + 0x18);
                        (*(pUVar23->klass->vtable)._23_set_color.methodPtr)
                                  (UVar45.fields.r,UVar45.fields.b,pUVar23,
                                   (pUVar23->klass->vtable)._23_set_color.method);
                        pUVar24 = (UnityEngine_RectTransform_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar21,MethodInfo_RectTransform_GetComponent_RectTransform);
                        pUVar20 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                        ppMVar34 = (MethodInfo_255A0F0 **)0x0;
                        value_01 = 4;
                        pUVar19 = UI_ElementFactory__CreateWhiteLabel
                                            (pUVar20,pUVar6,(System_String_o *)__this_13,0,4,in_R9);
                        if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
                          ppMVar34 = &MethodInfo_Text_GetComponent_Text;
                          pUVar9 = (UnityEngine_UI_Text_o *)
                                   UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_Text_GetComponent_Text);
                          if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                            UnityEngine_UI_Text__set_font
                                      (pUVar9,(UnityEngine_Font_o *)(pUVar37->fields).m_MaskMaterial,
                                       (MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_fontSize(pUVar9,0x20,(MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_fontStyle(pUVar9,1,(MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_alignment(pUVar9,4,(MethodInfo *)0x0);
                            (*(pUVar9->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pUVar9);
                            pUVar25 = UnityEngine_UI_Graphic__get_rectTransform
                                                ((UnityEngine_UI_Graphic_o *)pUVar9,(MethodInfo *)0x0);
                            SVar22.fields.value =
                                 (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pUVar10;
                            if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                              UnityEngine_RectTransform__set_anchorMin
                                        (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
                              UnityEngine_RectTransform__set_anchorMax
                                        (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
                              if (g_data_057a694c == '\0') {
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                g_data_057a694c = '\x01';
                              }
                              UnityEngine_RectTransform__set_anchoredPosition
                                        (pUVar10,(UnityEngine_Vector2_o)
                                                 **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                         (MethodInfo *)0x0);
                              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                                        (pUVar25,(MethodInfo *)0x0);
                              if (pUVar25 != (UnityEngine_RectTransform_o *)0x0) {
                                UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar25,(MethodInfo *)0x0);
                                UStackY_1c0.fields.x = UVar4.fields.x + 40.0;
                                UStackY_1c0.fields.y = UVar4.fields.y + 10.0;
                                UVar4.fields.y = UStackY_1c0.fields.y;
                                UVar4.fields.x = UStackY_1c0.fields.x;
                                UnityEngine_RectTransform__set_sizeDelta(pUVar10,UVar4,(MethodInfo *)0x0);
                                if (pUVar24 != (UnityEngine_RectTransform_o *)0x0) {
                                  value.fields.y = UStackY_1c0.fields.y + -35.0;
                                  value.fields.x = UStackY_1c0.fields.x + -25.0;
                                  UnityEngine_RectTransform__set_sizeDelta(pUVar24,value,(MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (pUVar25,UStackY_1c0,(MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMax
                                            (pUVar24,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMin
                                            (pUVar24,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchoredPosition
                                            (pUVar24,(UnityEngine_Vector2_o)0xc170000000000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMax
                                            (pUVar25,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMin
                                            (pUVar25,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  if (g_data_057a694c == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                    g_data_057a694c = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchoredPosition
                                            (pUVar25,(UnityEngine_Vector2_o)
                                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                             (MethodInfo *)0x0);
                                  pUVar20 = UnityEngine_GameObject__get_transform(pUVar21,(MethodInfo *)0x0);
                                  if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                    UnityEngine_Transform__SetAsFirstSibling(pUVar20,(MethodInfo *)0x0);
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
              goto label_04385f90;
            }
          }
          goto label_04385f95;
        }
        goto label_04385f9a;
      }
    }
label_04385f90:
    il2cpp_runtime_helper_022b2c90();
    components = SVar22.fields.value;
label_04385f95:
    il2cpp_runtime_helper_022b2ca0();
label_04385f9a:
    uVar28 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar28);
  }
  pSVar27 = (System_String_o *)0x0;
  System_Collections_Generic_List_object___get_Item
            ((System_Collections_Generic_List_object__o *)components.value,0,MethodInfo_String_get_Item);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae238 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"CategoryContainer");
    g_data_057ae238 = '\x01';
  }
  pSVar29 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar22 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar17 = System_Type__GetTypeFromHandle(SVar22,(MethodInfo *)0x0);
  if (pSVar29 == (System_Type_array *)0x0) goto label_043866b7;
  if ((pSVar17 == (System_Type_o *)0x0) ||
     (lVar18 = il2cpp_runtime_helper_023051f0(pSVar17,(((pSVar29->obj).klass)->_1).element_class), lVar18 != 0)) {
    if ((int)pSVar29->max_length != 0) {
      pSVar29->m_Items[0] = pSVar17;
      il2cpp_runtime_helper_022b4080(pSVar29->m_Items);
      pSVar17 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar17 != (System_Type_o *)0x0) &&
         (lVar18 = il2cpp_runtime_helper_023051f0(pSVar17,(((pSVar29->obj).klass)->_1).element_class), lVar18 == 0))
      goto label_043866c1;
      if (1 < (uint)pSVar29->max_length) {
        pSVar29->m_Items[1] = pSVar17;
        il2cpp_runtime_helper_022b4080(pSVar29->m_Items + 1,pSVar17);
        pUVar19 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        ppMVar34 = (MethodInfo_255A0F0 **)0x0;
        UnityEngine_GameObject___ctor_4dfc440(pUVar19,"CategoryContainer",pSVar29,(MethodInfo *)0x0);
        if ((pUVar19 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar20 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0),
           pUVar20 != (UnityEngine_Transform_o *)0x0)) {
          ppMVar34 = (MethodInfo_255A0F0 **)0x0;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar20,(UnityEngine_Transform_o *)((System_Type_array *)components.value)->m_Items[0x10]
                     ,0,(MethodInfo *)0x0);
          pUVar10 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_RectTransform_GetComponent_RectTransform);
          pIVar16 = UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          pSVar29 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
          pSVar17 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
          if (pSVar29 != (System_Type_array *)0x0) {
            if ((pSVar17 != (System_Type_o *)0x0) &&
               (lVar18 = il2cpp_runtime_helper_023051f0(pSVar17,(((pSVar29->obj).klass)->_1).element_class), lVar18 == 0))
            goto label_043866c1;
            if ((int)pSVar29->max_length != 0) {
              pSVar29->m_Items[0] = pSVar17;
              il2cpp_runtime_helper_022b4080(pSVar29->m_Items);
              pSVar17 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
              if ((pSVar17 != (System_Type_o *)0x0) &&
                 (lVar18 = il2cpp_runtime_helper_023051f0(pSVar17,(((pSVar29->obj).klass)->_1).element_class), lVar18 == 0
                 )) goto label_043866c1;
              if (1 < (uint)pSVar29->max_length) {
                pSVar29->m_Items[1] = pSVar17;
                il2cpp_runtime_helper_022b4080(pSVar29->m_Items + 1,pSVar17);
                pUVar21 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                ppMVar34 = (MethodInfo_255A0F0 **)0x0;
                UnityEngine_GameObject___ctor_4dfc440(pUVar21,"Background",pSVar29,(MethodInfo *)0x0);
                if (pUVar21 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar20 = UnityEngine_GameObject__get_transform(pUVar21,(MethodInfo *)0x0);
                  parent = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                  if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                    ppMVar34 = (MethodInfo_255A0F0 **)0x0;
                    UnityEngine_Transform__SetParent_4e09e30(pUVar20,parent,0,(MethodInfo *)0x0);
                    pUVar23 = (UnityEngine_UI_Image_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar21,MethodInfo_Image_GetComponent_Image);
                    if (pUVar23 != (UnityEngine_UI_Image_o *)0x0) {
                      UnityEngine_UI_Image__set_sprite
                                (pUVar23,(UnityEngine_Sprite_o *)
                                         ((System_Type_array *)components.value)->m_Items[0x16],
                                 (MethodInfo *)0x0);
                      if (g_data_057ae23d == '\0') {
                        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                        il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Item);
                        g_data_057ae23d = '\x01';
                      }
                      if ((System_Collections_Generic_List_Color__o *)
                          ((System_Type_array *)components.value)->m_Items[0x14] !=
                          (System_Collections_Generic_List_Color__o *)0x0) {
                        UVar45 = System_Collections_Generic_List_Color___get_Item
                                           ((System_Collections_Generic_List_Color__o *)
                                            ((System_Type_array *)components.value)->m_Items[0x14],
                                            *(int32_t *)
                                             (((System_Type_array *)components.value)->m_Items + 0x15),
                                            MethodInfo_Color_get_Item);
                        ppMVar34 = (MethodInfo_255A0F0 **)0x0;
                        if (((System_Type_array *)components.value)->m_Items[0x14] != (System_Type_o *)0x0) {
                          *(int *)(((System_Type_array *)components.value)->m_Items + 0x15) =
                               (*(int *)(((System_Type_array *)components.value)->m_Items + 0x15) + 1) %
                               *(int *)&((System_Type_array *)components.value)->m_Items[0x14][1].klass;
                          (*(pUVar23->klass->vtable)._23_set_color.methodPtr)
                                    (UVar45.fields.r,UVar45.fields.b,pUVar23,
                                     (pUVar23->klass->vtable)._23_set_color.method);
                          pUVar24 = (UnityEngine_RectTransform_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar21,MethodInfo_RectTransform_GetComponent_RectTransform);
                          pUVar20 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                          pUVar6 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                          pSVar26 = "DefaultPanel";
                          System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
                          (pUVar6->fields).FontSize = 0x18;
                          (pUVar6->fields).TitleWidth = 120.0;
                          (pUVar6->fields).Spacing = 20.0;
                          (pUVar6->fields).ThemePanel = (System_String_o *)pSVar26;
                          il2cpp_runtime_helper_022b4080(&(pUVar6->fields).ThemePanel,pSVar26);
                          ppMVar34 = (MethodInfo_255A0F0 **)0x0;
                          value_01 = 4;
                          pUVar19 = UI_ElementFactory__CreateWhiteLabel(pUVar20,pUVar6,pSVar27,0,4,in_R9);
                          if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
                            ppMVar34 = &MethodInfo_Text_GetComponent_Text;
                            pUVar9 = (UnityEngine_UI_Text_o *)
                                     UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_Text_GetComponent_Text);
                            if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                              UnityEngine_UI_Text__set_font
                                        (pUVar9,(UnityEngine_Font_o *)
                                                ((System_Type_array *)components.value)->m_Items[0x12],
                                         (MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_fontSize(pUVar9,0x20,(MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_fontStyle(pUVar9,1,(MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_alignment(pUVar9,4,(MethodInfo *)0x0);
                              (*(pUVar9->klass->vtable)._23_set_color.methodPtr)(pUVar9);
                              pUVar25 = UnityEngine_UI_Graphic__get_rectTransform
                                                  ((UnityEngine_UI_Graphic_o *)pUVar9,(MethodInfo *)0x0);
                              if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                                UnityEngine_RectTransform__set_anchorMin
                                          (pUVar10,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0
                                          );
                                UnityEngine_RectTransform__set_anchorMax
                                          (pUVar10,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0
                                          );
                                if (g_data_057a694c == '\0') {
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                  g_data_057a694c = '\x01';
                                }
                                UnityEngine_RectTransform__set_anchoredPosition
                                          (pUVar10,(UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                           (MethodInfo *)0x0);
                                if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                                          (pUVar25,(MethodInfo *)0x0);
                                if (pUVar25 != (UnityEngine_RectTransform_o *)0x0) {
                                  UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar25,(MethodInfo *)0x0);
                                  UStackY_228.fields.x = UVar4.fields.x + 40.0;
                                  UStackY_228.fields.y = UVar4.fields.y + 20.0;
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (pUVar10,(UnityEngine_Vector2_o)
                                                     ((ulong)(uint)UStackY_228.fields.y << 0x20),
                                             (MethodInfo *)0x0);
                                  if (pUVar24 != (UnityEngine_RectTransform_o *)0x0) {
                                    value_00.fields.y = UStackY_228.fields.y + -15.0;
                                    value_00.fields.x = UStackY_228.fields.x + -10.0;
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (pUVar24,value_00,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (pUVar25,UStackY_228,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMax
                                              (pUVar24,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMin
                                              (pUVar24,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchoredPosition
                                              (pUVar24,(UnityEngine_Vector2_o)0xc0a0000000000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMax
                                              (pUVar25,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMin
                                              (pUVar25,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    if (g_data_057a694c == '\0') {
                                      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                      g_data_057a694c = '\x01';
                                    }
                                    UnityEngine_RectTransform__set_anchoredPosition
                                              (pUVar25,(UnityEngine_Vector2_o)
                                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                               (MethodInfo *)0x0);
                                    pUVar20 = UnityEngine_GameObject__get_transform(pUVar21,(MethodInfo *)0x0)
                                    ;
                                    if ((pUVar20 != (UnityEngine_Transform_o *)0x0) &&
                                       (UnityEngine_Transform__SetAsFirstSibling(pUVar20,(MethodInfo *)0x0),
                                       pIVar16 != (Il2CppObject *)0x0)) {
                                      (*pIVar16->klass->vtable[0x22].methodPtr)
                                                (pIVar16,pIVar16->klass->vtable[0x22].method);
                                      UNRECOVERED_JUMPTABLE_00 = pIVar16->klass->vtable[0x26].methodPtr;
                                      (*UNRECOVERED_JUMPTABLE_00)
                                                (UStackY_228.fields.y,pIVar16,
                                                 pIVar16->klass->vtable[0x26].method,extraout_RDX_05,
                                                 UNRECOVERED_JUMPTABLE_00);
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
                goto label_043866b7;
              }
            }
            goto label_043866bc;
          }
        }
label_043866b7:
        il2cpp_runtime_helper_022b2c90();
      }
    }
label_043866bc:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043866c1:
  lVar18 = il2cpp_runtime_helper_0231b270();
  uVar41 = il2cpp_runtime_helper_022b2b10(lVar18,0);
  style = (MethodInfo_2517960 **)ppMVar34;
  if (g_data_057ae239 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"Spacer");
    g_data_057ae239 = '\x01';
    style = (MethodInfo_2517960 **)ppMVar34;
  }
  pSVar29 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar22 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar17 = System_Type__GetTypeFromHandle(SVar22,(MethodInfo *)0x0);
  if (pSVar29 == (System_Type_array *)0x0) {
label_043868c4:
    il2cpp_runtime_helper_022b2c90();
label_043868c9:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar17 == (System_Type_o *)0x0) || (lVar30 = il2cpp_runtime_helper_023051f0(pSVar17), lVar30 != 0)) {
    if ((int)pSVar29->max_length != 0) {
      pSVar29->m_Items[0] = pSVar17;
      il2cpp_runtime_helper_022b4080(pSVar29->m_Items);
      pSVar17 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar17 != (System_Type_o *)0x0) && (lVar30 = il2cpp_runtime_helper_023051f0(pSVar17), lVar30 == 0))
      goto label_043868ce;
      if (1 < (uint)pSVar29->max_length) {
        pSVar29->m_Items[1] = pSVar17;
        il2cpp_runtime_helper_022b4080(pSVar29->m_Items + 1,pSVar17);
        pUVar19 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        style = (MethodInfo_2517960 **)0x0;
        UnityEngine_GameObject___ctor_4dfc440(pUVar19,"Spacer",pSVar29,(MethodInfo *)0x0);
        if ((pUVar19 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar20 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0),
           pUVar20 != (UnityEngine_Transform_o *)0x0)) {
          style = (MethodInfo_2517960 **)0x0;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar20,*(UnityEngine_Transform_o **)(lVar18 + 0xa0),0,(MethodInfo *)0x0);
          pIVar16 = UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar16 != (Il2CppObject *)0x0) {
            (*pIVar16->klass->vtable[0x22].methodPtr)(uVar41,pIVar16,pIVar16->klass->vtable[0x22].method);
            UNRECOVERED_JUMPTABLE_00 = pIVar16->klass->vtable[0x26].methodPtr;
            (*UNRECOVERED_JUMPTABLE_00)
                      (uVar41,pIVar16,pIVar16->klass->vtable[0x26].method,extraout_RDX_06,
                       UNRECOVERED_JUMPTABLE_00);
            return;
          }
        }
        goto label_043868c4;
      }
    }
    goto label_043868c9;
  }
label_043868ce:
  lVar18 = il2cpp_runtime_helper_0231b270();
  pMVar32 = (MethodInfo_362B8B0 *)0x0;
  fVar42 = (float)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae23d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    fVar42 = (float)il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Item);
    g_data_057ae23d = '\x01';
  }
  if (*(System_Collections_Generic_List_Color__o **)(lVar18 + 0xc0) !=
      (System_Collections_Generic_List_Color__o *)0x0) {
    pMVar32 = (MethodInfo_362B8B0 *)(ulong)*(uint *)(lVar18 + 200);
    UVar45 = System_Collections_Generic_List_Color___get_Item
                       (*(System_Collections_Generic_List_Color__o **)(lVar18 + 0xc0),*(uint *)(lVar18 + 200),
                        MethodInfo_Color_get_Item);
    fVar42 = UVar45.fields.r;
    style = (MethodInfo_2517960 **)0x0;
    if (*(long *)(lVar18 + 0xc0) != 0) {
      *(int *)(lVar18 + 200) = (*(int *)(lVar18 + 200) + 1) % *(int *)(*(long *)(lVar18 + 0xc0) + 0x18);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90(fVar42);
  __this_14 = pMVar32;
  if (g_data_057ae23b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Reverse_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Take_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057ae23b = '\x01';
  }
  if (pMVar32 != (MethodInfo_362B8B0 *)0x0) {
    iVar36 = *(int *)&pMVar32->name / 2;
    pSVar31 = System_Linq_Enumerable__Take_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pMVar32,iVar36,MethodInfo_IEnumerable_1_System_String_Take_String);
    collection = System_Linq_Enumerable__ToList_object_(pSVar31,MethodInfo_List_1_System_String_ToList_String);
    pSVar31 = System_Linq_Enumerable__Skip_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pMVar32,iVar36,MethodInfo_IEnumerable_1_System_String_Skip_String);
    style = &MethodInfo_IEnumerable_1_System_String_Reverse_String;
    pSVar31 = System_Linq_Enumerable__Reverse_object_(pSVar31,MethodInfo_IEnumerable_1_System_String_Reverse_String);
    collection_00 = System_Linq_Enumerable__ToList_object_(pSVar31,MethodInfo_List_1_System_String_ToList_String);
    pSVar13 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    __this_14 = MethodInfo_List_1_System_String;
    System_Collections_Generic_List_object____ctor(pSVar13,MethodInfo_List_1_System_String);
    if (pSVar13 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___AddRange
                (pSVar13,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
      System_Collections_Generic_List_object___AddRange
                (pSVar13,(System_Collections_Generic_IEnumerable_T__o *)collection_00,MethodInfo_Void_AddRange);
      System_String__Join_3af7e00
                ("\n",(System_Collections_Generic_IEnumerable_string__o *)pSVar13,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae23c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    g_data_057ae23c = '\x01';
  }
  pMVar32 = (MethodInfo_362B8B0 *)
            UI_ElementFactory__CreateWhiteLabel
                      ((UnityEngine_Transform_o *)__this_14,(UI_ElementStyle_o *)style,title,0,4,in_R9);
  if ((pMVar32 != (MethodInfo_362B8B0 *)0x0) &&
     (__this_14 = pMVar32,
     pUVar9 = (UnityEngine_UI_Text_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar32,MethodInfo_Text_GetComponent_Text),
     pUVar9 != (UnityEngine_UI_Text_o *)0x0)) {
    UnityEngine_UI_Text__set_fontSize(pUVar9,0x12,(MethodInfo *)0x0);
    UnityEngine_UI_Text__set_alignment(pUVar9,value_01,(MethodInfo *)0x0);
    pUVar10 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar32,MethodInfo_RectTransform_GetComponent_RectTransform);
    __this_14 = pMVar32;
    if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_sizeDelta(pUVar10,(UnityEngine_Vector2_o)0x43b40000,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  fVar42 = *(float *)&__this_14[1].field8_0x40;
  bVar5 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
  if (((char)bVar5 == '\0') &&
     (bVar5 = UnityEngine_Input__GetKey(0x20,(MethodInfo *)0x0), (char)bVar5 == '\0')) {
    bVar5 = UnityEngine_Input__GetMouseButton(1,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      fVar42 = -(fVar42 * *(float *)((long)&__this_14[1].field8_0x40 + 4));
    }
  }
  else {
    fVar42 = fVar42 * *(float *)((long)&__this_14[1].field8_0x40 + 4);
  }
  plVar12 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_14[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar48 = UnityEngine_Transform__get_localPosition
                     (*(UnityEngine_Transform_o **)&__this_14[1].token,(MethodInfo *)0x0);
  fVar43 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  plVar12 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_14[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  fStackY_2d0 = UVar48.fields.x;
  fStackY_2cc = UVar48.fields.y;
  UVar48.fields.y = fVar42 * fVar43 + fStackY_2cc;
  UVar48.fields.x = fStackY_2d0;
  UnityEngine_Transform__set_localPosition
            (*(UnityEngine_Transform_o **)&__this_14[1].token,UVar48,(MethodInfo *)0x0);
  plVar12 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_14[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar48 = UnityEngine_Transform__get_localPosition
                     (*(UnityEngine_Transform_o **)&__this_14[1].token,(MethodInfo *)0x0);
  plVar12 = *(long **)&__this_14[1].slot;
  if ((Il2CppClass *)plVar12 == (Il2CppClass *)0x0) goto label_04386e57;
  fVar42 = (float)(*((((Il2CppClass *)plVar12)->_1).image)->vtable[0x22].methodPtr)
                            (UVar48.fields.y,UVar48.fields.z);
  pUVar20 = *(UnityEngine_Transform_o **)&__this_14[1].token;
  if (fVar42 <= UVar48.fields.y) {
    plVar12 = *(long **)&__this_14[1].slot;
    if (((Il2CppClass *)plVar12 == (Il2CppClass *)0x0) ||
       (uVar44 = (*((((Il2CppClass *)plVar12)->_1).image)->vtable[0x22].methodPtr)(),
       pUVar20 == (UnityEngine_Transform_o *)0x0)) goto label_04386e57;
    uVar44 = uVar44 ^ 0x80000000;
    uVar41 = 0;
    fVar42 = 0.0;
label_04386d76:
    value_02.fields.y = (float)uVar44;
    value_02.fields.x = (float)uVar41;
    value_02.fields.z = fVar42;
    UnityEngine_Transform__set_localPosition(pUVar20,value_02,(MethodInfo *)0x0);
  }
  else {
    if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
    UVar48 = UnityEngine_Transform__get_localPosition(pUVar20,(MethodInfo *)0x0);
    plVar12 = *(long **)&__this_14[1].slot;
    if ((Il2CppClass *)plVar12 == (Il2CppClass *)0x0) goto label_04386e57;
    fVar42 = (float)(*((((Il2CppClass *)plVar12)->_1).image)->vtable[0x22].methodPtr)();
    if (UVar48.fields.y <= -fVar42) {
      pUVar20 = *(UnityEngine_Transform_o **)&__this_14[1].token;
      if (g_data_057a65d5 == '\0') {
        plVar12 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
      uVar28 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar41 = (undefined4)uVar28;
      uVar44 = (uint)((ulong)uVar28 >> 0x20);
      fVar42 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      goto label_04386d76;
    }
  }
  fVar42 = *(float *)((long)&__this_14[2].virtualMethodPointer + 4);
  if (0.0 < fVar42) {
    fVar43 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar42 = fVar42 - fVar43;
    *(float *)((long)&__this_14[2].virtualMethodPointer + 4) = fVar42;
    if (fVar42 <= 0.0) {
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      pIVar33 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      plVar12 = (long *)pIVar33;
      System_Object___ctor((Il2CppObject *)pIVar33,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar33->_1).name = 0;
      if (pIVar33 != (Il2CppClass *)0x0) {
        (pIVar33->_1).byval_arg.data = __this_14;
        il2cpp_runtime_helper_022b4080(&(pIVar33->_1).byval_arg,__this_14);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this_14,(System_Collections_IEnumerator_o *)pIVar33,
                   (MethodInfo *)0x0);
        return;
      }
label_04386e57:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      uVar41 = 0;
      pIVar16 = __this_12;
      System_Object___ctor(__this_12,(MethodInfo *)0x0);
      *(undefined4 *)&__this_12[1].klass = 0;
      if (__this_12 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor(pIVar16,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar16[1].klass = uVar41;
        return;
      }
      __this_12[2].klass = (Il2CppClass *)plVar12;
      il2cpp_runtime_helper_022b4080(__this_12 + 2,plVar12);
      return;
    }
  }
  return;
}


// UI.CreditsMenu$$PopulateCredits
// il2cpp: void UI_CreditsMenu__PopulateCredits (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x4384b40

void UI_CreditsMenu__PopulateCredits(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar3;
  System_String_c *panel;
  System_Collections_Generic_List_Color__o *__this_00;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o UVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  bool_conflict bVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  long *plVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  MethodInfo *pMVar9;
  UnityEngine_UI_Text_o *pUVar10;
  UnityEngine_UI_Text_o *__this_08;
  UnityEngine_UI_Text_o *__this_09;
  UnityEngine_Object_o *pUVar11;
  UnityEngine_UI_ContentSizeFitter_o *__this_10;
  Il2CppObject *pIVar12;
  UI_ElementStyle_o *pUVar13;
  System_RuntimeTypeHandle_Fields components;
  System_Type_o *pSVar14;
  long lVar15;
  UnityEngine_GameObject_o *pUVar16;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_RectTransform_o *pUVar18;
  UnityEngine_GameObject_o *pUVar19;
  System_RuntimeTypeHandle_o SVar20;
  UnityEngine_UI_Image_o *pUVar21;
  UnityEngine_RectTransform_o *pUVar22;
  UnityEngine_RectTransform_o *pUVar23;
  System_String_array *pSVar24;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_string__o *column;
  System_Type_array *column_00;
  System_String_o *pSVar25;
  System_String_o *content;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_11;
  undefined8 uVar26;
  System_Type_array *pSVar27;
  UnityEngine_Transform_o *parent;
  long lVar28;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar29;
  System_Collections_Generic_List_TSource__o *collection;
  System_Collections_Generic_List_TSource__o *collection_00;
  MethodInfo_362B8B0 *pMVar30;
  Il2CppClass *pIVar31;
  Il2CppObject *__this_12;
  System_Object_array *in_RCX;
  MethodInfo_255A0F0 **ppMVar32;
  MethodInfo_2525430 **ppMVar33;
  MethodInfo_2517960 **style;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  ulong extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_00;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  System_String_o *title;
  int32_t index;
  int iVar34;
  MethodInfo_24E7B40 *__this_13;
  MethodInfo_362B8B0 *__this_14;
  UnityEngine_UI_Text_o *pUVar35;
  UI_CreditsMenu_o *pUVar36;
  int32_t value_01;
  ulong in_R8;
  ulong uVar37;
  MethodInfo *in_R9;
  int iVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  UnityEngine_Color_o UVar43;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar44;
  undefined1 auVar45 [16];
  UnityEngine_Vector3_o UVar46;
  UnityEngine_Vector3_o value_02;
  float fStackY_2b8;
  float fStackY_2b4;
  UnityEngine_Vector2_o UStackY_210;
  UnityEngine_Vector2_o UStackY_1a8;
  undefined8 in_stack_fffffffffffffed8;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppMethodPointer pIVar47;
  InvokerMethod pIVar48;
  char *pcVar49;
  Il2CppType *pIVar50;
  SimpleJSONFixed_JSONNode_o *pSVar51;
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
  
  if (g_data_057ae237 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscInfo);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"Error loading data.");
    il2cpp_runtime_helper_023445d0(&"\nBased on the original game created by Feng Li and Jiang Li.");
    il2cpp_runtime_helper_023445d0(&"Category");
    il2cpp_runtime_helper_023445d0(&"Names");
    g_data_057ae237 = '\x01';
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
  pSVar51 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(pSVar51,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    UI_CreditsMenu__CreateTextElement(__this,"Error loading data.",0,(MethodInfo *)in_RCX);
    return;
  }
  plVar7 = *(long **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 0x10);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x338))(&local_78,plVar7,*(undefined8 *)(*plVar7 + 0x340));
    pIVar48 = (InvokerMethod)CONCAT44(uStack_64,local_68);
    pcVar49 = (char *)CONCAT44(uStack_5c,uStack_60);
    __this_01.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
    __this_01.fields._0_8_ = in_stack_fffffffffffffed8;
    __this_01.fields.m_Object.fields._8_8_ = local_78;
    __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
    __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar48;
    __this_01.fields.m_Object.fields._32_8_ = pcVar49;
    __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
    __this_01.fields.m_Array.fields._8_8_ = pIStack_50;
    __this_01.fields.m_Array.fields._current = local_48;
    UNRECOVERED_JUMPTABLE_00 = local_78;
    pIVar47 = pIStack_70;
    pIVar31 = local_58;
    pIVar50 = pIStack_50;
    pSVar51 = local_48;
    bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_01,(MethodInfo *)&stack0xfffffffffffffee8);
    if ((char)bVar5 != '\0') {
      do {
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
        __this_02.fields._0_8_ = in_stack_fffffffffffffed8;
        __this_02.fields.m_Object.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar47;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar48;
        __this_02.fields.m_Object.fields._32_8_ = pcVar49;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar31;
        __this_02.fields.m_Array.fields._8_8_ = pIVar50;
        __this_02.fields.m_Array.fields._current = pSVar51;
        SVar44 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_02,(MethodInfo *)&stack0xfffffffffffffee8);
        pUVar36 = __this;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pUVar36 = __this;
        }
        pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar44,(MethodInfo *)0x0);
        if ((pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (plVar7 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar6,"Category",(pSVar6->klass->vtable)._7_get_Item.method),
           plVar7 == (long *)0x0)) goto label_043850c6;
        auVar45 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        UI_CreditsMenu__CreateCategoryElement(pUVar36,auVar45._0_8_,auVar45._8_8_);
        pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_String);
        plVar7 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar6,"Names",(pSVar6->klass->vtable)._7_get_Item.method);
        if (plVar7 == (long *)0x0) goto label_043850c6;
        in_RCX = (System_Object_array *)*plVar7;
        (*(code *)in_RCX->m_Items[99])(&local_78,plVar7,in_RCX->m_Items[100]);
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
        __this_03.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar36;
        __this_03.fields._0_8_ = in_stack_fffffffffffffed8;
        __this_03.fields.m_Object.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
        __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar47;
        __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar48;
        __this_03.fields.m_Object.fields._32_8_ = pcVar49;
        __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar31;
        __this_03.fields.m_Array.fields._8_8_ = pIVar50;
        __this_03.fields.m_Array.fields._current = pSVar51;
        bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)local_c8);
        if ((char)bVar5 != '\0') {
          if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) {
            __this_07.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar36;
            __this_07.fields._0_8_ = in_stack_fffffffffffffed8;
            __this_07.fields.m_Object.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
            __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar47;
            __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar48;
            __this_07.fields.m_Object.fields._32_8_ = pcVar49;
            __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar31;
            __this_07.fields.m_Array.fields._8_8_ = pIVar50;
            __this_07.fields.m_Array.fields._current = pSVar51;
            SVar44 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_07,(MethodInfo *)local_c8);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar10 = (UnityEngine_UI_Text_o *)
                      SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar44,(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) goto label_043850cb;
            goto label_043850c6;
          }
          do {
            __this_05.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar36;
            __this_05.fields._0_8_ = in_stack_fffffffffffffed8;
            __this_05.fields.m_Object.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
            __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar47;
            __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar48;
            __this_05.fields.m_Object.fields._32_8_ = pcVar49;
            __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar31;
            __this_05.fields.m_Array.fields._8_8_ = pIVar50;
            __this_05.fields.m_Array.fields._current = pSVar51;
            SVar44 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_05,(MethodInfo *)local_c8);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar44,(MethodInfo *)0x0);
            if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_043850c6;
            pIVar12 = (Il2CppObject *)
                      (*(pSVar6->klass->vtable)._9_get_Value.methodPtr)
                                (pSVar6,(pSVar6->klass->vtable)._9_get_Value.method);
            bVar5 = System_Collections_Generic_List_object___Contains(pSVar8,pIVar12,MethodInfo_Boolean_Contains);
            if ((char)bVar5 == '\0') {
              pIVar12 = (Il2CppObject *)
                        (*(pSVar6->klass->vtable)._9_get_Value.methodPtr)
                                  (pSVar6,(pSVar6->klass->vtable)._9_get_Value.method);
              lVar15 = MethodInfo_Void_Add;
              piVar1 = &(pSVar8->fields)._version;
              *piVar1 = *piVar1 + 1;
              in_RCX = (pSVar8->fields)._items;
              if (in_RCX == (System_Object_array *)0x0) goto label_043850c6;
              uVar42 = (pSVar8->fields)._size;
              if (uVar42 < (uint)in_RCX->max_length) {
                (pSVar8->fields)._size = uVar42 + 1;
                in_RCX->m_Items[(int)uVar42] = pIVar12;
                il2cpp_runtime_helper_022b4080(in_RCX->m_Items + (int)uVar42,pIVar12);
              }
              else {
                in_RCX = *(System_Object_array **)(*(long *)(lVar15 + 0x20) + 0xc0);
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar8,pIVar12,(MethodInfo_362C220 *)in_RCX->m_Items[10]);
              }
            }
            __this_04.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pUVar36;
            __this_04.fields._0_8_ = in_stack_fffffffffffffed8;
            __this_04.fields.m_Object.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
            __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar47;
            __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar48;
            __this_04.fields.m_Object.fields._32_8_ = pcVar49;
            __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar31;
            __this_04.fields.m_Array.fields._8_8_ = pIVar50;
            __this_04.fields.m_Array.fields._current = pSVar51;
            bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_04,(MethodInfo *)local_c8);
          } while ((char)bVar5 != '\0');
        }
        if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) goto label_043850c6;
        System_Collections_Generic_List_object___Sort(pSVar8,MethodInfo_Void_Sort);
        pMVar9 = (MethodInfo *)
                 System_String__Join_3af7e00
                           ("\n",(System_Collections_Generic_IEnumerable_string__o *)pSVar8,
                            (MethodInfo *)0x0);
        __this = pUVar36;
        UI_CreditsMenu__CreateTextElement(pUVar36,(System_String_o *)pMVar9,0,(MethodInfo *)in_RCX);
        UI_CreditsMenu__CreateSpacerElement(pUVar36,20.0,pMVar9);
        __this_06.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
        __this_06.fields._0_8_ = in_stack_fffffffffffffed8;
        __this_06.fields.m_Object.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
        __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar47;
        __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar48;
        __this_06.fields.m_Object.fields._32_8_ = pcVar49;
        __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar31;
        __this_06.fields.m_Array.fields._8_8_ = pIVar50;
        __this_06.fields.m_Array.fields._current = pSVar51;
        bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_06,(MethodInfo *)&stack0xfffffffffffffee8);
      } while ((char)bVar5 != '\0');
    }
    UI_CreditsMenu__CreateTextElement(__this,"\nBased on the original game created by Feng Li and Jiang Li.",0,(MethodInfo *)in_RCX);
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    pUVar18 = (__this->fields)._contentTransform;
    if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar18,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._layoutGroup;
    if (pUVar3 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
      fVar40 = (float)(*(pUVar3->klass->vtable)._34_get_preferredHeight.methodPtr)();
      pUVar18 = (__this->fields)._contentTransform;
      if (pUVar18 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar18,(UnityEngine_Vector2_o)((ulong)(uint)(fVar40 * -0.5 + -300.0) << 0x20),
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
label_043850c6:
  pUVar10 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_022b2c90();
label_043850cb:
  pSVar24 = (System_String_array *)pUVar10->klass;
  pSVar25 = pSVar24->m_Items[0x36];
  (*(code *)pSVar24->m_Items[0x35])();
  il2cpp_runtime_helper_022b2c90();
  ppMVar32 = (MethodInfo_255A0F0 **)pSVar24;
  pMVar9 = extraout_RDX;
  uVar37 = in_R8;
  if (g_data_057ae272 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/DefaultLabel");
    il2cpp_runtime_helper_023445d0(&"WhiteLabel");
    g_data_057ae272 = '\x01';
    pMVar9 = extraout_RDX_00;
  }
  __this_13 = "Prefabs/Elements/DefaultLabel";
  pUVar35 = pUVar10;
  __this_08 = (UnityEngine_UI_Text_o *)
              UI_ElementFactory__InstantiateAndBind
                        ((UnityEngine_Transform_o *)pUVar10,(System_String_o *)"Prefabs/Elements/DefaultLabel",pMVar9);
  if (((__this_08 != (UnityEngine_UI_Text_o *)0x0) &&
      (__this_13 = (MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text,
      __this_09 = (UnityEngine_UI_Text_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)__this_08,MethodInfo_Text_GetComponent_Text), pUVar35 = __this_08,
      pSVar25 != (System_String_o *)0x0)) && (__this_09 != (UnityEngine_UI_Text_o *)0x0)) {
    UnityEngine_UI_Text__set_fontSize(__this_09,(pSVar25->fields)._stringLength,(MethodInfo *)0x0);
    (*(__this_09->klass->vtable)._75_set_text.methodPtr)
              (__this_09,extraout_RDX,(__this_09->klass->vtable)._75_set_text.method);
    UnityEngine_UI_Text__set_fontStyle(__this_09,(int32_t)pSVar24,(MethodInfo *)0x0);
    panel = pSVar25[1].klass;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar37 = 0;
    ppMVar32 = (MethodInfo_255A0F0 **)"DefaultPanel";
    UVar43 = UI_UIManager__GetThemeColor
                       ((System_String_o *)panel,"WhiteLabel","TextColor",(System_String_o *)"DefaultPanel",
                        (MethodInfo *)0x0);
    (*(__this_09->klass->vtable)._23_set_color.methodPtr)
              (UVar43.fields.r,UVar43.fields.b,__this_09,(__this_09->klass->vtable)._23_set_color.method);
    __this_13 = (MethodInfo_24E7B40 *)(in_R8 & 0xffffffff);
    pUVar35 = __this_09;
    UnityEngine_UI_Text__set_alignment(__this_09,(int32_t)in_R8,(MethodInfo *)0x0);
    if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar11 = (UnityEngine_Object_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutGroup);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      __this_13 = MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter;
      pUVar35 = __this_09;
      __this_10 = (UnityEngine_UI_ContentSizeFitter_o *)
                  UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_09,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
      if (__this_10 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
        UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                  (__this_10,(uint)(byte)((byte)bVar5 ^ 1) * 2,(MethodInfo *)0x0);
        pUVar11 = (UnityEngine_Object_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup)
        ;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        __this_13 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
        pIVar12 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_09,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        pUVar35 = __this_09;
        if (pIVar12 != (Il2CppObject *)0x0) {
          (*pIVar12->klass->vtable[0x28].methodPtr)(0,pIVar12,pIVar12->klass->vtable[0x28].method);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SVar20.fields.value = (System_RuntimeTypeHandle_Fields)(extraout_RDX_01 & 0xffffffff);
  if (g_data_057ae23a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_String_OrderByDescending_Str);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_CreateTextElement_b__16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"TwoColumnContainer");
    il2cpp_runtime_helper_023445d0(&"CategoryContainer");
    g_data_057ae23a = '\x01';
  }
  pUVar13 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar24 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)pUVar13,(MethodInfo *)0x0);
  (pUVar13->fields).FontSize = 0x18;
  (pUVar13->fields).TitleWidth = 120.0;
  (pUVar13->fields).Spacing = 20.0;
  (pUVar13->fields).ThemePanel = (System_String_o *)pSVar24;
  il2cpp_runtime_helper_022b4080(&(pUVar13->fields).ThemePanel);
  value_01 = (int32_t)uVar37;
  if (SUB81(SVar20.fields.value,0) == '\0') {
    if (__this_13 == (MethodInfo_24E7B40 *)0x0) goto label_04385f90;
    ppMVar32 = (MethodInfo_255A0F0 **)0x0;
    pSVar24 = System_String__Split((System_String_o *)__this_13,10,0,(MethodInfo *)0x0);
    value_01 = (int32_t)uVar37;
    if (pSVar24 == (System_String_array *)0x0) goto label_04385f90;
    if ((int)pSVar24->max_length < 9) {
      ppMVar32 = (MethodInfo_255A0F0 **)0x0;
      value_01 = 4;
      pUVar16 = UI_ElementFactory__CreateWhiteLabel
                          ((UnityEngine_Transform_o *)(pUVar35->fields).m_ColorTweenRunner,pUVar13,
                           (System_String_o *)__this_13,0,4,in_R9);
      SVar20.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar24;
      if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
        ppMVar32 = &MethodInfo_Text_GetComponent_Text;
        pUVar10 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_Text_GetComponent_Text);
        if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
          UnityEngine_UI_Text__set_fontSize(pUVar10,0x12,(MethodInfo *)0x0);
          UnityEngine_UI_Text__set_alignment(pUVar10,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_04385f90;
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_int);
      System_Func_object__int____ctor();
      lVar15 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar15 + 8) = keySelector;
      il2cpp_runtime_helper_022b4080(lVar15 + 8,keySelector);
    }
    source = System_Linq_Enumerable__OrderByDescending_object__int_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar24,keySelector,MethodInfo_IOrderedEnumerable_1_System_String_OrderByDescending_Str)
    ;
    ppMVar33 = &MethodInfo_List_1_System_String_ToList_String;
    components.value =
         (intptr_t)
         System_Linq_Enumerable__ToList_object_
                   ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    column = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)column,MethodInfo_List_1_System_String);
    column_00 = (System_Type_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pSVar27 = column_00;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)column_00,MethodInfo_List_1_System_String);
    value_01 = (int32_t)uVar37;
    ppMVar32 = (MethodInfo_255A0F0 **)ppMVar33;
    SVar20.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)components.value;
    if ((System_Type_array *)components.value == (System_Type_array *)0x0) goto label_04385f90;
    iVar34 = (int)((System_Type_array *)components.value)->max_length;
    pMVar9 = extraout_RDX_02;
    if (column != (System_Collections_Generic_List_string__o *)0x0) {
      if (0 < iVar34) {
        index = 0;
        iVar34 = 0;
        iVar38 = 0;
        do {
          while( true ) {
            pSVar25 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)components.value,index,
                                 MethodInfo_String_get_Item);
            lVar15 = MethodInfo_Void_Add;
            value_01 = (int32_t)uVar37;
            pSVar27 = (System_Type_array *)components.value;
            if (iVar38 <= iVar34) break;
            if (column_00 == (System_Type_array *)0x0) goto label_04385f90;
            piVar2 = (int *)((long)&column_00->max_length + 4);
            *piVar2 = *piVar2 + 1;
            ppMVar32 = (MethodInfo_255A0F0 **)column_00->bounds;
            if ((System_String_array *)ppMVar32 == (System_String_array *)0x0) goto label_04385f90;
            uVar42 = (uint)column_00->max_length;
            if (uVar42 < (uint)((System_String_array *)ppMVar32)->max_length) {
              *(uint *)&column_00->max_length = uVar42 + 1;
              ((System_String_array *)ppMVar32)->m_Items[(int)uVar42] = pSVar25;
              il2cpp_runtime_helper_022b4080(((System_String_array *)ppMVar32)->m_Items + (int)uVar42,pSVar25);
            }
            else {
              ppMVar32 = *(MethodInfo_255A0F0 ***)(*(long *)(lVar15 + 0x20) + 0xc0);
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)column_00,(Il2CppObject *)pSVar25,
                         (MethodInfo_362C220 *)((System_String_array *)ppMVar32)->m_Items[10]);
            }
            pIVar12 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)components.value,index,
                                 MethodInfo_String_get_Item);
            value_01 = (int32_t)uVar37;
            if (pIVar12 == (Il2CppObject *)0x0) goto label_04385f90;
            iVar34 = iVar34 + *(int *)&pIVar12[1].klass;
            index = index + 1;
            ppMVar33 = (MethodInfo_2525430 **)ppMVar32;
            pMVar9 = extraout_RDX_03;
            if ((int)((System_Type_array *)components.value)->max_length <= index) goto label_04385d91;
          }
          piVar1 = &(column->fields)._version;
          *piVar1 = *piVar1 + 1;
          ppMVar32 = (MethodInfo_255A0F0 **)(column->fields)._items;
          if ((System_String_array *)ppMVar32 == (System_String_array *)0x0) goto label_04385f90;
          uVar42 = (column->fields)._size;
          if (uVar42 < (uint)((System_String_array *)ppMVar32)->max_length) {
            (column->fields)._size = uVar42 + 1;
            ((System_String_array *)ppMVar32)->m_Items[(int)uVar42] = pSVar25;
            il2cpp_runtime_helper_022b4080(((System_String_array *)ppMVar32)->m_Items + (int)uVar42,pSVar25);
          }
          else {
            ppMVar32 = *(MethodInfo_255A0F0 ***)(*(long *)(lVar15 + 0x20) + 0xc0);
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)column,(Il2CppObject *)pSVar25,
                       (MethodInfo_362C220 *)((System_String_array *)ppMVar32)->m_Items[10]);
          }
          pIVar12 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)components.value,index,
                               MethodInfo_String_get_Item);
          value_01 = (int32_t)uVar37;
          if (pIVar12 == (Il2CppObject *)0x0) goto label_04385f90;
          iVar38 = iVar38 + *(int *)&pIVar12[1].klass;
          index = index + 1;
          ppMVar33 = (MethodInfo_2525430 **)ppMVar32;
          pMVar9 = extraout_RDX_04;
        } while (index < (int)((System_Type_array *)components.value)->max_length);
      }
label_04385d91:
      pSVar25 = UI_CreditsMenu__ArrangeColumn((UI_CreditsMenu_o *)pSVar27,column,pMVar9);
      content = UI_CreditsMenu__ArrangeColumn
                          ((UI_CreditsMenu_o *)pSVar27,(System_Collections_Generic_List_string__o *)column_00,
                           method_00);
      pSVar27 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
      SVar20 = TypeRef_RectTransform;
      ppMVar32 = (MethodInfo_255A0F0 **)ppMVar33;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        ppMVar32 = (MethodInfo_255A0F0 **)ppMVar33;
      }
      components.value = (intptr_t)System_Type__GetTypeFromHandle(SVar20,(MethodInfo *)0x0);
      if (pSVar27 == (System_Type_array *)0x0) goto label_04385f90;
      if (((System_Type_array *)components.value == (System_Type_array *)0x0) ||
         (lVar15 = il2cpp_runtime_helper_023051f0(components.value), lVar15 != 0)) {
        if ((int)pSVar27->max_length != 0) {
          pSVar27->m_Items[0] = (System_Type_o *)components.value;
          il2cpp_runtime_helper_022b4080(pSVar27->m_Items);
          components.value = (intptr_t)System_Type__GetTypeFromHandle(TypeRef_HorizontalLayoutGroup,(MethodInfo *)0x0);
          if (((System_Type_array *)components.value != (System_Type_array *)0x0) &&
             (lVar15 = il2cpp_runtime_helper_023051f0(components.value), lVar15 == 0)) goto label_04385f9a;
          if (1 < (uint)pSVar27->max_length) {
            pSVar27->m_Items[1] = (System_Type_o *)components.value;
            il2cpp_runtime_helper_022b4080(pSVar27->m_Items + 1,components.value);
            SVar20.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            ppMVar32 = (MethodInfo_255A0F0 **)0x0;
            UnityEngine_GameObject___ctor_4dfc440
                      ((UnityEngine_GameObject_o *)SVar20.fields.value,"TwoColumnContainer",pSVar27,(MethodInfo *)0x0)
            ;
            if ((SVar20.fields.value != 0) &&
               (pUVar17 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar20.fields.value,(MethodInfo *)0x0),
               pUVar17 != (UnityEngine_Transform_o *)0x0)) {
              ppMVar32 = (MethodInfo_255A0F0 **)0x0;
              UnityEngine_Transform__SetParent_4e09e30
                        (pUVar17,(UnityEngine_Transform_o *)(pUVar35->fields).m_ColorTweenRunner,0,
                         (MethodInfo *)0x0);
              __this_11 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)SVar20.fields.value,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
              if (__this_11 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)__this_11,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                          (__this_11,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (__this_11,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_11,60.0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                          (__this_11,0,(MethodInfo *)0x0);
                pUVar36 = (UI_CreditsMenu_o *)SVar20.fields.value;
                pUVar17 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar20.fields.value,(MethodInfo *)0x0);
                UI_CreditsMenu__CreateColumnText(pUVar36,pUVar17,pSVar25,pUVar13,0,in_R9);
                pUVar17 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar20.fields.value,(MethodInfo *)0x0);
                UI_CreditsMenu__CreateColumnText
                          ((UI_CreditsMenu_o *)SVar20.fields.value,pUVar17,content,pUVar13,2,in_R9);
                return;
              }
            }
            goto label_04385f90;
          }
        }
        goto label_04385f95;
      }
      goto label_04385f9a;
    }
    if (iVar34 < 1) goto label_04385d91;
  }
  else {
    components.value = il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    SVar20 = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar14 = System_Type__GetTypeFromHandle(SVar20,(MethodInfo *)0x0);
    SVar20.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)components.value;
    if ((System_Type_array *)components.value == (System_Type_array *)0x0) goto label_04385f90;
    if ((pSVar14 != (System_Type_o *)0x0) && (lVar15 = il2cpp_runtime_helper_023051f0(pSVar14), lVar15 == 0))
    goto label_04385f9a;
    if ((int)((System_Type_array *)components.value)->max_length == 0) goto label_04385f95;
    ((System_Type_array *)components.value)->m_Items[0] = pSVar14;
    il2cpp_runtime_helper_022b4080(((System_Type_array *)components.value)->m_Items,pSVar14);
    pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    ppMVar32 = (MethodInfo_255A0F0 **)0x0;
    UnityEngine_GameObject___ctor_4dfc440
              (pUVar16,"CategoryContainer",(System_Type_array *)components.value,(MethodInfo *)0x0);
    if ((pUVar16 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0),
       pUVar17 != (UnityEngine_Transform_o *)0x0)) {
      ppMVar32 = (MethodInfo_255A0F0 **)0x0;
      UnityEngine_Transform__SetParent_4e09e30
                (pUVar17,(UnityEngine_Transform_o *)(pUVar35->fields).m_ColorTweenRunner,0,(MethodInfo *)0x0);
      pUVar18 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_RectTransform_GetComponent_RectTransform);
      components.value = il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
      pSVar14 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
      SVar20.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)components.value
      ;
      if ((System_Type_array *)components.value != (System_Type_array *)0x0) {
        if ((pSVar14 == (System_Type_o *)0x0) || (lVar15 = il2cpp_runtime_helper_023051f0(pSVar14), lVar15 != 0)) {
          if ((int)((System_Type_array *)components.value)->max_length != 0) {
            ((System_Type_array *)components.value)->m_Items[0] = pSVar14;
            il2cpp_runtime_helper_022b4080(((System_Type_array *)components.value)->m_Items);
            pSVar14 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
            if ((pSVar14 != (System_Type_o *)0x0) && (lVar15 = il2cpp_runtime_helper_023051f0(pSVar14), lVar15 == 0))
            goto label_04385f9a;
            if (1 < (uint)((System_Type_array *)components.value)->max_length) {
              ((System_Type_array *)components.value)->m_Items[1] = pSVar14;
              il2cpp_runtime_helper_022b4080(((System_Type_array *)components.value)->m_Items + 1,pSVar14);
              pUVar19 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              ppMVar32 = (MethodInfo_255A0F0 **)0x0;
              UnityEngine_GameObject___ctor_4dfc440
                        (pUVar19,"Background",(System_Type_array *)components.value,(MethodInfo *)0x0);
              if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
                SVar20.fields.value =
                     (System_RuntimeTypeHandle_Fields)
                     UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
                if (SVar20.fields.value != 0) {
                  ppMVar32 = (MethodInfo_255A0F0 **)0x0;
                  UnityEngine_Transform__SetParent_4e09e30
                            ((UnityEngine_Transform_o *)SVar20.fields.value,pUVar17,0,(MethodInfo *)0x0);
                  pUVar21 = (UnityEngine_UI_Image_o *)
                            UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_Image_GetComponent_Image);
                  if (pUVar21 != (UnityEngine_UI_Image_o *)0x0) {
                    UnityEngine_UI_Image__set_sprite
                              (pUVar21,(UnityEngine_Sprite_o *)(pUVar35->fields).m_OnCullStateChanged,
                               (MethodInfo *)0x0);
                    if (g_data_057ae23d == '\0') {
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Item);
                      g_data_057ae23d = '\x01';
                    }
                    __this_00 = *(System_Collections_Generic_List_Color__o **)&(pUVar35->fields).m_Maskable;
                    SVar20.fields.value =
                         (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pUVar21;
                    if (__this_00 != (System_Collections_Generic_List_Color__o *)0x0) {
                      UVar43 = System_Collections_Generic_List_Color___get_Item
                                         (__this_00,(pUVar35->fields).m_IncludeForMasking,MethodInfo_Color_get_Item);
                      lVar15 = *(long *)&(pUVar35->fields).m_Maskable;
                      ppMVar32 = (MethodInfo_255A0F0 **)0x0;
                      if (lVar15 != 0) {
                        (pUVar35->fields).m_IncludeForMasking =
                             ((pUVar35->fields).m_IncludeForMasking + 1) % *(int *)(lVar15 + 0x18);
                        (*(pUVar21->klass->vtable)._23_set_color.methodPtr)
                                  (UVar43.fields.r,UVar43.fields.b,pUVar21,
                                   (pUVar21->klass->vtable)._23_set_color.method);
                        pUVar22 = (UnityEngine_RectTransform_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_RectTransform_GetComponent_RectTransform);
                        pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
                        ppMVar32 = (MethodInfo_255A0F0 **)0x0;
                        value_01 = 4;
                        pUVar16 = UI_ElementFactory__CreateWhiteLabel
                                            (pUVar17,pUVar13,(System_String_o *)__this_13,0,4,in_R9);
                        if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
                          ppMVar32 = &MethodInfo_Text_GetComponent_Text;
                          pUVar10 = (UnityEngine_UI_Text_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_Text_GetComponent_Text);
                          if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
                            UnityEngine_UI_Text__set_font
                                      (pUVar10,(UnityEngine_Font_o *)(pUVar35->fields).m_MaskMaterial,
                                       (MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_fontSize(pUVar10,0x20,(MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_fontStyle(pUVar10,1,(MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_alignment(pUVar10,4,(MethodInfo *)0x0);
                            (*(pUVar10->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pUVar10)
                            ;
                            pUVar23 = UnityEngine_UI_Graphic__get_rectTransform
                                                ((UnityEngine_UI_Graphic_o *)pUVar10,(MethodInfo *)0x0);
                            SVar20.fields.value =
                                 (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pUVar18;
                            if (pUVar18 != (UnityEngine_RectTransform_o *)0x0) {
                              UnityEngine_RectTransform__set_anchorMin
                                        (pUVar18,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
                              UnityEngine_RectTransform__set_anchorMax
                                        (pUVar18,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
                              if (g_data_057a694c == '\0') {
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                g_data_057a694c = '\x01';
                              }
                              UnityEngine_RectTransform__set_anchoredPosition
                                        (pUVar18,(UnityEngine_Vector2_o)
                                                 **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                         (MethodInfo *)0x0);
                              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                                        (pUVar23,(MethodInfo *)0x0);
                              if (pUVar23 != (UnityEngine_RectTransform_o *)0x0) {
                                UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar23,(MethodInfo *)0x0);
                                UStackY_1a8.fields.x = UVar4.fields.x + 40.0;
                                UStackY_1a8.fields.y = UVar4.fields.y + 10.0;
                                UVar4.fields.y = UStackY_1a8.fields.y;
                                UVar4.fields.x = UStackY_1a8.fields.x;
                                UnityEngine_RectTransform__set_sizeDelta(pUVar18,UVar4,(MethodInfo *)0x0);
                                if (pUVar22 != (UnityEngine_RectTransform_o *)0x0) {
                                  value.fields.y = UStackY_1a8.fields.y + -35.0;
                                  value.fields.x = UStackY_1a8.fields.x + -25.0;
                                  UnityEngine_RectTransform__set_sizeDelta(pUVar22,value,(MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (pUVar23,UStackY_1a8,(MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMax
                                            (pUVar22,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMin
                                            (pUVar22,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchoredPosition
                                            (pUVar22,(UnityEngine_Vector2_o)0xc170000000000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMax
                                            (pUVar23,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMin
                                            (pUVar23,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  if (g_data_057a694c == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                    g_data_057a694c = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchoredPosition
                                            (pUVar23,(UnityEngine_Vector2_o)
                                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                             (MethodInfo *)0x0);
                                  pUVar17 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                                  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                                    UnityEngine_Transform__SetAsFirstSibling(pUVar17,(MethodInfo *)0x0);
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
              goto label_04385f90;
            }
          }
          goto label_04385f95;
        }
        goto label_04385f9a;
      }
    }
label_04385f90:
    il2cpp_runtime_helper_022b2c90();
    components = SVar20.fields.value;
label_04385f95:
    il2cpp_runtime_helper_022b2ca0();
label_04385f9a:
    uVar26 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar26);
  }
  pSVar25 = (System_String_o *)0x0;
  System_Collections_Generic_List_object___get_Item
            ((System_Collections_Generic_List_object__o *)components.value,0,MethodInfo_String_get_Item);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae238 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"CategoryContainer");
    g_data_057ae238 = '\x01';
  }
  pSVar27 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar20 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = System_Type__GetTypeFromHandle(SVar20,(MethodInfo *)0x0);
  if (pSVar27 == (System_Type_array *)0x0) goto label_043866b7;
  if ((pSVar14 == (System_Type_o *)0x0) ||
     (lVar15 = il2cpp_runtime_helper_023051f0(pSVar14,(((pSVar27->obj).klass)->_1).element_class), lVar15 != 0)) {
    if ((int)pSVar27->max_length != 0) {
      pSVar27->m_Items[0] = pSVar14;
      il2cpp_runtime_helper_022b4080(pSVar27->m_Items);
      pSVar14 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar14 != (System_Type_o *)0x0) &&
         (lVar15 = il2cpp_runtime_helper_023051f0(pSVar14,(((pSVar27->obj).klass)->_1).element_class), lVar15 == 0))
      goto label_043866c1;
      if (1 < (uint)pSVar27->max_length) {
        pSVar27->m_Items[1] = pSVar14;
        il2cpp_runtime_helper_022b4080(pSVar27->m_Items + 1,pSVar14);
        pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        ppMVar32 = (MethodInfo_255A0F0 **)0x0;
        UnityEngine_GameObject___ctor_4dfc440(pUVar16,"CategoryContainer",pSVar27,(MethodInfo *)0x0);
        if ((pUVar16 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0),
           pUVar17 != (UnityEngine_Transform_o *)0x0)) {
          ppMVar32 = (MethodInfo_255A0F0 **)0x0;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar17,(UnityEngine_Transform_o *)((System_Type_array *)components.value)->m_Items[0x10]
                     ,0,(MethodInfo *)0x0);
          pUVar18 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_RectTransform_GetComponent_RectTransform);
          pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          pSVar27 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
          pSVar14 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
          if (pSVar27 != (System_Type_array *)0x0) {
            if ((pSVar14 != (System_Type_o *)0x0) &&
               (lVar15 = il2cpp_runtime_helper_023051f0(pSVar14,(((pSVar27->obj).klass)->_1).element_class), lVar15 == 0))
            goto label_043866c1;
            if ((int)pSVar27->max_length != 0) {
              pSVar27->m_Items[0] = pSVar14;
              il2cpp_runtime_helper_022b4080(pSVar27->m_Items);
              pSVar14 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
              if ((pSVar14 != (System_Type_o *)0x0) &&
                 (lVar15 = il2cpp_runtime_helper_023051f0(pSVar14,(((pSVar27->obj).klass)->_1).element_class), lVar15 == 0
                 )) goto label_043866c1;
              if (1 < (uint)pSVar27->max_length) {
                pSVar27->m_Items[1] = pSVar14;
                il2cpp_runtime_helper_022b4080(pSVar27->m_Items + 1,pSVar14);
                pUVar19 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                ppMVar32 = (MethodInfo_255A0F0 **)0x0;
                UnityEngine_GameObject___ctor_4dfc440(pUVar19,"Background",pSVar27,(MethodInfo *)0x0);
                if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar17 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                  parent = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
                  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                    ppMVar32 = (MethodInfo_255A0F0 **)0x0;
                    UnityEngine_Transform__SetParent_4e09e30(pUVar17,parent,0,(MethodInfo *)0x0);
                    pUVar21 = (UnityEngine_UI_Image_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_Image_GetComponent_Image);
                    if (pUVar21 != (UnityEngine_UI_Image_o *)0x0) {
                      UnityEngine_UI_Image__set_sprite
                                (pUVar21,(UnityEngine_Sprite_o *)
                                         ((System_Type_array *)components.value)->m_Items[0x16],
                                 (MethodInfo *)0x0);
                      if (g_data_057ae23d == '\0') {
                        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                        il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Item);
                        g_data_057ae23d = '\x01';
                      }
                      if ((System_Collections_Generic_List_Color__o *)
                          ((System_Type_array *)components.value)->m_Items[0x14] !=
                          (System_Collections_Generic_List_Color__o *)0x0) {
                        UVar43 = System_Collections_Generic_List_Color___get_Item
                                           ((System_Collections_Generic_List_Color__o *)
                                            ((System_Type_array *)components.value)->m_Items[0x14],
                                            *(int32_t *)
                                             (((System_Type_array *)components.value)->m_Items + 0x15),
                                            MethodInfo_Color_get_Item);
                        ppMVar32 = (MethodInfo_255A0F0 **)0x0;
                        if (((System_Type_array *)components.value)->m_Items[0x14] != (System_Type_o *)0x0) {
                          *(int *)(((System_Type_array *)components.value)->m_Items + 0x15) =
                               (*(int *)(((System_Type_array *)components.value)->m_Items + 0x15) + 1) %
                               *(int *)&((System_Type_array *)components.value)->m_Items[0x14][1].klass;
                          (*(pUVar21->klass->vtable)._23_set_color.methodPtr)
                                    (UVar43.fields.r,UVar43.fields.b,pUVar21,
                                     (pUVar21->klass->vtable)._23_set_color.method);
                          pUVar22 = (UnityEngine_RectTransform_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_RectTransform_GetComponent_RectTransform);
                          pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
                          pUVar13 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                          pSVar24 = "DefaultPanel";
                          System_Object___ctor((Il2CppObject *)pUVar13,(MethodInfo *)0x0);
                          (pUVar13->fields).FontSize = 0x18;
                          (pUVar13->fields).TitleWidth = 120.0;
                          (pUVar13->fields).Spacing = 20.0;
                          (pUVar13->fields).ThemePanel = (System_String_o *)pSVar24;
                          il2cpp_runtime_helper_022b4080(&(pUVar13->fields).ThemePanel,pSVar24);
                          ppMVar32 = (MethodInfo_255A0F0 **)0x0;
                          value_01 = 4;
                          pUVar16 = UI_ElementFactory__CreateWhiteLabel(pUVar17,pUVar13,pSVar25,0,4,in_R9);
                          if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
                            ppMVar32 = &MethodInfo_Text_GetComponent_Text;
                            pUVar10 = (UnityEngine_UI_Text_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_Text_GetComponent_Text);
                            if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
                              UnityEngine_UI_Text__set_font
                                        (pUVar10,(UnityEngine_Font_o *)
                                                 ((System_Type_array *)components.value)->m_Items[0x12],
                                         (MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_fontSize(pUVar10,0x20,(MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_fontStyle(pUVar10,1,(MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_alignment(pUVar10,4,(MethodInfo *)0x0);
                              (*(pUVar10->klass->vtable)._23_set_color.methodPtr)(pUVar10);
                              pUVar23 = UnityEngine_UI_Graphic__get_rectTransform
                                                  ((UnityEngine_UI_Graphic_o *)pUVar10,(MethodInfo *)0x0);
                              if (pUVar18 != (UnityEngine_RectTransform_o *)0x0) {
                                UnityEngine_RectTransform__set_anchorMin
                                          (pUVar18,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0
                                          );
                                UnityEngine_RectTransform__set_anchorMax
                                          (pUVar18,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0
                                          );
                                if (g_data_057a694c == '\0') {
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                  g_data_057a694c = '\x01';
                                }
                                UnityEngine_RectTransform__set_anchoredPosition
                                          (pUVar18,(UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                           (MethodInfo *)0x0);
                                if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                                          (pUVar23,(MethodInfo *)0x0);
                                if (pUVar23 != (UnityEngine_RectTransform_o *)0x0) {
                                  UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar23,(MethodInfo *)0x0);
                                  UStackY_210.fields.x = UVar4.fields.x + 40.0;
                                  UStackY_210.fields.y = UVar4.fields.y + 20.0;
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (pUVar18,(UnityEngine_Vector2_o)
                                                     ((ulong)(uint)UStackY_210.fields.y << 0x20),
                                             (MethodInfo *)0x0);
                                  if (pUVar22 != (UnityEngine_RectTransform_o *)0x0) {
                                    value_00.fields.y = UStackY_210.fields.y + -15.0;
                                    value_00.fields.x = UStackY_210.fields.x + -10.0;
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (pUVar22,value_00,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (pUVar23,UStackY_210,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMax
                                              (pUVar22,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMin
                                              (pUVar22,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchoredPosition
                                              (pUVar22,(UnityEngine_Vector2_o)0xc0a0000000000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMax
                                              (pUVar23,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMin
                                              (pUVar23,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    if (g_data_057a694c == '\0') {
                                      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                      g_data_057a694c = '\x01';
                                    }
                                    UnityEngine_RectTransform__set_anchoredPosition
                                              (pUVar23,(UnityEngine_Vector2_o)
                                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                               (MethodInfo *)0x0);
                                    pUVar17 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0)
                                    ;
                                    if ((pUVar17 != (UnityEngine_Transform_o *)0x0) &&
                                       (UnityEngine_Transform__SetAsFirstSibling(pUVar17,(MethodInfo *)0x0),
                                       pIVar12 != (Il2CppObject *)0x0)) {
                                      (*pIVar12->klass->vtable[0x22].methodPtr)
                                                (pIVar12,pIVar12->klass->vtable[0x22].method);
                                      UNRECOVERED_JUMPTABLE_00 = pIVar12->klass->vtable[0x26].methodPtr;
                                      (*UNRECOVERED_JUMPTABLE_00)
                                                (UStackY_210.fields.y,pIVar12,
                                                 pIVar12->klass->vtable[0x26].method,extraout_RDX_05,
                                                 UNRECOVERED_JUMPTABLE_00);
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
                goto label_043866b7;
              }
            }
            goto label_043866bc;
          }
        }
label_043866b7:
        il2cpp_runtime_helper_022b2c90();
      }
    }
label_043866bc:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043866c1:
  lVar15 = il2cpp_runtime_helper_0231b270();
  uVar39 = il2cpp_runtime_helper_022b2b10(lVar15,0);
  style = (MethodInfo_2517960 **)ppMVar32;
  if (g_data_057ae239 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"Spacer");
    g_data_057ae239 = '\x01';
    style = (MethodInfo_2517960 **)ppMVar32;
  }
  pSVar27 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar20 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = System_Type__GetTypeFromHandle(SVar20,(MethodInfo *)0x0);
  if (pSVar27 == (System_Type_array *)0x0) {
label_043868c4:
    il2cpp_runtime_helper_022b2c90();
label_043868c9:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar14 == (System_Type_o *)0x0) || (lVar28 = il2cpp_runtime_helper_023051f0(pSVar14), lVar28 != 0)) {
    if ((int)pSVar27->max_length != 0) {
      pSVar27->m_Items[0] = pSVar14;
      il2cpp_runtime_helper_022b4080(pSVar27->m_Items);
      pSVar14 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar14 != (System_Type_o *)0x0) && (lVar28 = il2cpp_runtime_helper_023051f0(pSVar14), lVar28 == 0))
      goto label_043868ce;
      if (1 < (uint)pSVar27->max_length) {
        pSVar27->m_Items[1] = pSVar14;
        il2cpp_runtime_helper_022b4080(pSVar27->m_Items + 1,pSVar14);
        pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        style = (MethodInfo_2517960 **)0x0;
        UnityEngine_GameObject___ctor_4dfc440(pUVar16,"Spacer",pSVar27,(MethodInfo *)0x0);
        if ((pUVar16 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0),
           pUVar17 != (UnityEngine_Transform_o *)0x0)) {
          style = (MethodInfo_2517960 **)0x0;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar17,*(UnityEngine_Transform_o **)(lVar15 + 0xa0),0,(MethodInfo *)0x0);
          pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar12 != (Il2CppObject *)0x0) {
            (*pIVar12->klass->vtable[0x22].methodPtr)(uVar39,pIVar12,pIVar12->klass->vtable[0x22].method);
            UNRECOVERED_JUMPTABLE_00 = pIVar12->klass->vtable[0x26].methodPtr;
            (*UNRECOVERED_JUMPTABLE_00)
                      (uVar39,pIVar12,pIVar12->klass->vtable[0x26].method,extraout_RDX_06,
                       UNRECOVERED_JUMPTABLE_00);
            return;
          }
        }
        goto label_043868c4;
      }
    }
    goto label_043868c9;
  }
label_043868ce:
  lVar15 = il2cpp_runtime_helper_0231b270();
  pMVar30 = (MethodInfo_362B8B0 *)0x0;
  fVar40 = (float)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae23d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    fVar40 = (float)il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Item);
    g_data_057ae23d = '\x01';
  }
  if (*(System_Collections_Generic_List_Color__o **)(lVar15 + 0xc0) !=
      (System_Collections_Generic_List_Color__o *)0x0) {
    pMVar30 = (MethodInfo_362B8B0 *)(ulong)*(uint *)(lVar15 + 200);
    UVar43 = System_Collections_Generic_List_Color___get_Item
                       (*(System_Collections_Generic_List_Color__o **)(lVar15 + 0xc0),*(uint *)(lVar15 + 200),
                        MethodInfo_Color_get_Item);
    fVar40 = UVar43.fields.r;
    style = (MethodInfo_2517960 **)0x0;
    if (*(long *)(lVar15 + 0xc0) != 0) {
      *(int *)(lVar15 + 200) = (*(int *)(lVar15 + 200) + 1) % *(int *)(*(long *)(lVar15 + 0xc0) + 0x18);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90(fVar40);
  __this_14 = pMVar30;
  if (g_data_057ae23b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Reverse_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Take_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057ae23b = '\x01';
  }
  if (pMVar30 != (MethodInfo_362B8B0 *)0x0) {
    iVar34 = *(int *)&pMVar30->name / 2;
    pSVar29 = System_Linq_Enumerable__Take_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pMVar30,iVar34,MethodInfo_IEnumerable_1_System_String_Take_String);
    collection = System_Linq_Enumerable__ToList_object_(pSVar29,MethodInfo_List_1_System_String_ToList_String);
    pSVar29 = System_Linq_Enumerable__Skip_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pMVar30,iVar34,MethodInfo_IEnumerable_1_System_String_Skip_String);
    style = &MethodInfo_IEnumerable_1_System_String_Reverse_String;
    pSVar29 = System_Linq_Enumerable__Reverse_object_(pSVar29,MethodInfo_IEnumerable_1_System_String_Reverse_String);
    collection_00 = System_Linq_Enumerable__ToList_object_(pSVar29,MethodInfo_List_1_System_String_ToList_String);
    pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    __this_14 = MethodInfo_List_1_System_String;
    System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_String);
    if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___AddRange
                (pSVar8,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
      System_Collections_Generic_List_object___AddRange
                (pSVar8,(System_Collections_Generic_IEnumerable_T__o *)collection_00,MethodInfo_Void_AddRange);
      System_String__Join_3af7e00
                ("\n",(System_Collections_Generic_IEnumerable_string__o *)pSVar8,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae23c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    g_data_057ae23c = '\x01';
  }
  pMVar30 = (MethodInfo_362B8B0 *)
            UI_ElementFactory__CreateWhiteLabel
                      ((UnityEngine_Transform_o *)__this_14,(UI_ElementStyle_o *)style,title,0,4,in_R9);
  if ((pMVar30 != (MethodInfo_362B8B0 *)0x0) &&
     (__this_14 = pMVar30,
     pUVar10 = (UnityEngine_UI_Text_o *)
               UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar30,MethodInfo_Text_GetComponent_Text),
     pUVar10 != (UnityEngine_UI_Text_o *)0x0)) {
    UnityEngine_UI_Text__set_fontSize(pUVar10,0x12,(MethodInfo *)0x0);
    UnityEngine_UI_Text__set_alignment(pUVar10,value_01,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar30,MethodInfo_RectTransform_GetComponent_RectTransform);
    __this_14 = pMVar30;
    if (pUVar18 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_sizeDelta(pUVar18,(UnityEngine_Vector2_o)0x43b40000,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  fVar40 = *(float *)&__this_14[1].field8_0x40;
  bVar5 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
  if (((char)bVar5 == '\0') &&
     (bVar5 = UnityEngine_Input__GetKey(0x20,(MethodInfo *)0x0), (char)bVar5 == '\0')) {
    bVar5 = UnityEngine_Input__GetMouseButton(1,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      fVar40 = -(fVar40 * *(float *)((long)&__this_14[1].field8_0x40 + 4));
    }
  }
  else {
    fVar40 = fVar40 * *(float *)((long)&__this_14[1].field8_0x40 + 4);
  }
  plVar7 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_14[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar46 = UnityEngine_Transform__get_localPosition
                     (*(UnityEngine_Transform_o **)&__this_14[1].token,(MethodInfo *)0x0);
  fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  plVar7 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_14[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  fStackY_2b8 = UVar46.fields.x;
  fStackY_2b4 = UVar46.fields.y;
  UVar46.fields.y = fVar40 * fVar41 + fStackY_2b4;
  UVar46.fields.x = fStackY_2b8;
  UnityEngine_Transform__set_localPosition
            (*(UnityEngine_Transform_o **)&__this_14[1].token,UVar46,(MethodInfo *)0x0);
  plVar7 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_14[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar46 = UnityEngine_Transform__get_localPosition
                     (*(UnityEngine_Transform_o **)&__this_14[1].token,(MethodInfo *)0x0);
  plVar7 = *(long **)&__this_14[1].slot;
  if ((Il2CppClass *)plVar7 == (Il2CppClass *)0x0) goto label_04386e57;
  fVar40 = (float)(*((((Il2CppClass *)plVar7)->_1).image)->vtable[0x22].methodPtr)
                            (UVar46.fields.y,UVar46.fields.z);
  pUVar17 = *(UnityEngine_Transform_o **)&__this_14[1].token;
  if (fVar40 <= UVar46.fields.y) {
    plVar7 = *(long **)&__this_14[1].slot;
    if (((Il2CppClass *)plVar7 == (Il2CppClass *)0x0) ||
       (uVar42 = (*((((Il2CppClass *)plVar7)->_1).image)->vtable[0x22].methodPtr)(),
       pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_04386e57;
    uVar42 = uVar42 ^ 0x80000000;
    uVar39 = 0;
    fVar40 = 0.0;
label_04386d76:
    value_02.fields.y = (float)uVar42;
    value_02.fields.x = (float)uVar39;
    value_02.fields.z = fVar40;
    UnityEngine_Transform__set_localPosition(pUVar17,value_02,(MethodInfo *)0x0);
  }
  else {
    if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
    UVar46 = UnityEngine_Transform__get_localPosition(pUVar17,(MethodInfo *)0x0);
    plVar7 = *(long **)&__this_14[1].slot;
    if ((Il2CppClass *)plVar7 == (Il2CppClass *)0x0) goto label_04386e57;
    fVar40 = (float)(*((((Il2CppClass *)plVar7)->_1).image)->vtable[0x22].methodPtr)();
    if (UVar46.fields.y <= -fVar40) {
      pUVar17 = *(UnityEngine_Transform_o **)&__this_14[1].token;
      if (g_data_057a65d5 == '\0') {
        plVar7 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
      uVar26 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar39 = (undefined4)uVar26;
      uVar42 = (uint)((ulong)uVar26 >> 0x20);
      fVar40 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      goto label_04386d76;
    }
  }
  fVar40 = *(float *)((long)&__this_14[2].virtualMethodPointer + 4);
  if (0.0 < fVar40) {
    fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar40 = fVar40 - fVar41;
    *(float *)((long)&__this_14[2].virtualMethodPointer + 4) = fVar40;
    if (fVar40 <= 0.0) {
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      pIVar31 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      plVar7 = (long *)pIVar31;
      System_Object___ctor((Il2CppObject *)pIVar31,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar31->_1).name = 0;
      if (pIVar31 != (Il2CppClass *)0x0) {
        (pIVar31->_1).byval_arg.data = __this_14;
        il2cpp_runtime_helper_022b4080(&(pIVar31->_1).byval_arg,__this_14);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this_14,(System_Collections_IEnumerator_o *)pIVar31,
                   (MethodInfo *)0x0);
        return;
      }
label_04386e57:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      uVar39 = 0;
      pIVar12 = __this_12;
      System_Object___ctor(__this_12,(MethodInfo *)0x0);
      *(undefined4 *)&__this_12[1].klass = 0;
      if (__this_12 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor(pIVar12,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar12[1].klass = uVar39;
        return;
      }
      __this_12[2].klass = (Il2CppClass *)plVar7;
      il2cpp_runtime_helper_022b4080(__this_12 + 2,plVar7);
      return;
    }
  }
  return;
}


// UI.CreditsMenu$$CreateCategoryElement
// il2cpp: void UI_CreditsMenu__CreateCategoryElement (UI_CreditsMenu_o* __this, System_String_o* content, const MethodInfo* method);
// 0x4385fd0

void UI_CreditsMenu__CreateCategoryElement
               (UI_CreditsMenu_o *__this,System_String_o *content,MethodInfo *method)

{
  undefined8 uVar1;
  System_Collections_Generic_List_Color__o *pSVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  UnityEngine_Vector2_o UVar3;
  System_RuntimeTypeHandle_o SVar4;
  System_String_o *pSVar5;
  bool_conflict bVar6;
  System_Type_array *pSVar7;
  System_Type_o *pSVar8;
  long lVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_RectTransform_o *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UI_ElementStyle_o *style;
  UnityEngine_UI_Text_o *pUVar14;
  UnityEngine_RectTransform_o *layoutRoot;
  long lVar15;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar16;
  System_Collections_Generic_List_TSource__o *collection;
  System_Collections_Generic_List_TSource__o *collection_00;
  System_Collections_Generic_List_object__o *__this_03;
  MethodInfo_362B8B0 *pMVar17;
  Il2CppClass *__this_04;
  Il2CppObject *__this_05;
  MethodInfo_255A0F0 **in_RCX;
  MethodInfo_2517960 **style_00;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  System_String_o *title;
  int count;
  MethodInfo_362B8B0 *__this_06;
  long *plVar18;
  int32_t in_R8D;
  MethodInfo *in_R9;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  UnityEngine_Color_o UVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o value;
  float fStack_100;
  float fStack_fc;
  UnityEngine_Vector2_o local_58;
  
  if (g_data_057ae238 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"CategoryContainer");
    g_data_057ae238 = '\x01';
    method = extraout_RDX;
  }
  pSVar7 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type,2,method);
  SVar4 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
  if (pSVar7 == (System_Type_array *)0x0) goto label_043866b7;
  if ((pSVar8 == (System_Type_o *)0x0) ||
     (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((pSVar7->obj).klass)->_1).element_class), lVar9 != 0)) {
    if ((int)pSVar7->max_length != 0) {
      pSVar7->m_Items[0] = pSVar8;
      il2cpp_runtime_helper_022b4080(pSVar7->m_Items);
      pSVar8 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar8 != (System_Type_o *)0x0) &&
         (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((pSVar7->obj).klass)->_1).element_class), lVar9 == 0))
      goto label_043866c1;
      if (1 < (uint)pSVar7->max_length) {
        pSVar7->m_Items[1] = pSVar8;
        il2cpp_runtime_helper_022b4080(pSVar7->m_Items + 1,pSVar8);
        pUVar10 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        in_RCX = (MethodInfo_255A0F0 **)0x0;
        UnityEngine_GameObject___ctor_4dfc440(pUVar10,"CategoryContainer",pSVar7,(MethodInfo *)0x0);
        if ((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar11 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0),
           pUVar11 != (UnityEngine_Transform_o *)0x0)) {
          in_RCX = (MethodInfo_255A0F0 **)0x0;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar11,(UnityEngine_Transform_o *)(__this->fields)._contentTransform,0,(MethodInfo *)0x0
                    );
          pUVar12 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_RectTransform_GetComponent_RectTransform);
          pIVar13 = UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          pSVar7 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
          pSVar8 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
          if (pSVar7 != (System_Type_array *)0x0) {
            if ((pSVar8 != (System_Type_o *)0x0) &&
               (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((pSVar7->obj).klass)->_1).element_class), lVar9 == 0))
            goto label_043866c1;
            if ((int)pSVar7->max_length != 0) {
              pSVar7->m_Items[0] = pSVar8;
              il2cpp_runtime_helper_022b4080(pSVar7->m_Items);
              pSVar8 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
              if ((pSVar8 != (System_Type_o *)0x0) &&
                 (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,(((pSVar7->obj).klass)->_1).element_class), lVar9 == 0))
              goto label_043866c1;
              if (1 < (uint)pSVar7->max_length) {
                pSVar7->m_Items[1] = pSVar8;
                il2cpp_runtime_helper_022b4080(pSVar7->m_Items + 1,pSVar8);
                __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                in_RCX = (MethodInfo_255A0F0 **)0x0;
                UnityEngine_GameObject___ctor_4dfc440(__this_00,"Background",pSVar7,(MethodInfo *)0x0);
                if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar11 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                  parent = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
                  if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                    in_RCX = (MethodInfo_255A0F0 **)0x0;
                    UnityEngine_Transform__SetParent_4e09e30(pUVar11,parent,0,(MethodInfo *)0x0);
                    __this_01 = (UnityEngine_UI_Image_o *)
                                UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Image_GetComponent_Image);
                    if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
                      UnityEngine_UI_Image__set_sprite
                                (__this_01,(__this->fields)._brushSprite,(MethodInfo *)0x0);
                      if (g_data_057ae23d == '\0') {
                        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                        il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Item);
                        g_data_057ae23d = '\x01';
                      }
                      pSVar2 = (__this->fields)._categoryColors;
                      if (pSVar2 != (System_Collections_Generic_List_Color__o *)0x0) {
                        UVar23 = System_Collections_Generic_List_Color___get_Item
                                           (pSVar2,(__this->fields)._currentColorIndex,MethodInfo_Color_get_Item);
                        pSVar2 = (__this->fields)._categoryColors;
                        in_RCX = (MethodInfo_255A0F0 **)0x0;
                        if (pSVar2 != (System_Collections_Generic_List_Color__o *)0x0) {
                          (__this->fields)._currentColorIndex =
                               ((__this->fields)._currentColorIndex + 1) % (pSVar2->fields)._size;
                          (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                                    (UVar23.fields.r,UVar23.fields._8_8_,__this_01,
                                     (__this_01->klass->vtable)._23_set_color.method);
                          __this_02 = (UnityEngine_RectTransform_o *)
                                      UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
                          pUVar11 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
                          style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                          pSVar5 = "DefaultPanel";
                          System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
                          (style->fields).FontSize = 0x18;
                          (style->fields).TitleWidth = 120.0;
                          (style->fields).Spacing = 20.0;
                          (style->fields).ThemePanel = pSVar5;
                          il2cpp_runtime_helper_022b4080(&(style->fields).ThemePanel,pSVar5);
                          in_RCX = (MethodInfo_255A0F0 **)0x0;
                          in_R8D = 4;
                          pUVar10 = UI_ElementFactory__CreateWhiteLabel(pUVar11,style,content,0,4,in_R9);
                          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                            in_RCX = &MethodInfo_Text_GetComponent_Text;
                            pUVar14 = (UnityEngine_UI_Text_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_Text_GetComponent_Text);
                            if (pUVar14 != (UnityEngine_UI_Text_o *)0x0) {
                              UnityEngine_UI_Text__set_font
                                        (pUVar14,(__this->fields)._categoryFont,(MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_fontSize(pUVar14,0x20,(MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_fontStyle(pUVar14,1,(MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_alignment(pUVar14,4,(MethodInfo *)0x0);
                              (*(pUVar14->klass->vtable)._23_set_color.methodPtr)(pUVar14);
                              layoutRoot = UnityEngine_UI_Graphic__get_rectTransform
                                                     ((UnityEngine_UI_Graphic_o *)pUVar14,(MethodInfo *)0x0);
                              if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
                                UnityEngine_RectTransform__set_anchorMin
                                          (pUVar12,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0
                                          );
                                UnityEngine_RectTransform__set_anchorMax
                                          (pUVar12,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0
                                          );
                                if (g_data_057a694c == '\0') {
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                  g_data_057a694c = '\x01';
                                }
                                UnityEngine_RectTransform__set_anchoredPosition
                                          (pUVar12,(UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                           (MethodInfo *)0x0);
                                if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                                          (layoutRoot,(MethodInfo *)0x0);
                                if (layoutRoot != (UnityEngine_RectTransform_o *)0x0) {
                                  UVar3 = UnityEngine_RectTransform__get_sizeDelta
                                                    (layoutRoot,(MethodInfo *)0x0);
                                  local_58.fields.x = UVar3.fields.x + 40.0;
                                  local_58.fields.y = UVar3.fields.y + 20.0;
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (pUVar12,(UnityEngine_Vector2_o)
                                                     ((ulong)(uint)local_58.fields.y << 0x20),
                                             (MethodInfo *)0x0);
                                  if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                                    UVar3.fields.y = local_58.fields.y + -15.0;
                                    UVar3.fields.x = local_58.fields.x + -10.0;
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (__this_02,UVar3,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (layoutRoot,local_58,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMax
                                              (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMin
                                              (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchoredPosition
                                              (__this_02,(UnityEngine_Vector2_o)0xc0a0000000000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMax
                                              (layoutRoot,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMin
                                              (layoutRoot,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    if (g_data_057a694c == '\0') {
                                      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                      g_data_057a694c = '\x01';
                                    }
                                    UnityEngine_RectTransform__set_anchoredPosition
                                              (layoutRoot,
                                               (UnityEngine_Vector2_o)
                                               **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                               (MethodInfo *)0x0);
                                    pUVar11 = UnityEngine_GameObject__get_transform
                                                        (__this_00,(MethodInfo *)0x0);
                                    if ((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
                                       (UnityEngine_Transform__SetAsFirstSibling(pUVar11,(MethodInfo *)0x0),
                                       pIVar13 != (Il2CppObject *)0x0)) {
                                      (*pIVar13->klass->vtable[0x22].methodPtr)
                                                (pIVar13,pIVar13->klass->vtable[0x22].method);
                                      UNRECOVERED_JUMPTABLE_00 = pIVar13->klass->vtable[0x26].methodPtr;
                                      (*UNRECOVERED_JUMPTABLE_00)
                                                (local_58.fields.y,pIVar13,pIVar13->klass->vtable[0x26].method
                                                 ,extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
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
                goto label_043866b7;
              }
            }
            goto label_043866bc;
          }
        }
label_043866b7:
        il2cpp_runtime_helper_022b2c90();
      }
    }
label_043866bc:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043866c1:
  lVar9 = il2cpp_runtime_helper_0231b270();
  uVar19 = il2cpp_runtime_helper_022b2b10(lVar9,0);
  style_00 = (MethodInfo_2517960 **)in_RCX;
  if (g_data_057ae239 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"Spacer");
    g_data_057ae239 = '\x01';
    style_00 = (MethodInfo_2517960 **)in_RCX;
  }
  pSVar7 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar4 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
  if (pSVar7 == (System_Type_array *)0x0) {
label_043868c4:
    il2cpp_runtime_helper_022b2c90();
label_043868c9:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar8 == (System_Type_o *)0x0) || (lVar15 = il2cpp_runtime_helper_023051f0(pSVar8), lVar15 != 0)) {
    if ((int)pSVar7->max_length != 0) {
      pSVar7->m_Items[0] = pSVar8;
      il2cpp_runtime_helper_022b4080(pSVar7->m_Items);
      pSVar8 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar8 != (System_Type_o *)0x0) && (lVar15 = il2cpp_runtime_helper_023051f0(pSVar8), lVar15 == 0))
      goto label_043868ce;
      if (1 < (uint)pSVar7->max_length) {
        pSVar7->m_Items[1] = pSVar8;
        il2cpp_runtime_helper_022b4080(pSVar7->m_Items + 1,pSVar8);
        pUVar10 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        style_00 = (MethodInfo_2517960 **)0x0;
        UnityEngine_GameObject___ctor_4dfc440(pUVar10,"Spacer",pSVar7,(MethodInfo *)0x0);
        if ((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar11 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0),
           pUVar11 != (UnityEngine_Transform_o *)0x0)) {
          style_00 = (MethodInfo_2517960 **)0x0;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar11,*(UnityEngine_Transform_o **)(lVar9 + 0xa0),0,(MethodInfo *)0x0);
          pIVar13 = UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar13 != (Il2CppObject *)0x0) {
            (*pIVar13->klass->vtable[0x22].methodPtr)(uVar19,pIVar13,pIVar13->klass->vtable[0x22].method);
            UNRECOVERED_JUMPTABLE_00 = pIVar13->klass->vtable[0x26].methodPtr;
            (*UNRECOVERED_JUMPTABLE_00)
                      (uVar19,pIVar13,pIVar13->klass->vtable[0x26].method,extraout_RDX_01,
                       UNRECOVERED_JUMPTABLE_00);
            return;
          }
        }
        goto label_043868c4;
      }
    }
    goto label_043868c9;
  }
label_043868ce:
  lVar9 = il2cpp_runtime_helper_0231b270();
  pMVar17 = (MethodInfo_362B8B0 *)0x0;
  fVar20 = (float)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae23d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    fVar20 = (float)il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Item);
    g_data_057ae23d = '\x01';
  }
  if (*(System_Collections_Generic_List_Color__o **)(lVar9 + 0xc0) !=
      (System_Collections_Generic_List_Color__o *)0x0) {
    pMVar17 = (MethodInfo_362B8B0 *)(ulong)*(uint *)(lVar9 + 200);
    UVar23 = System_Collections_Generic_List_Color___get_Item
                       (*(System_Collections_Generic_List_Color__o **)(lVar9 + 0xc0),*(uint *)(lVar9 + 200),
                        MethodInfo_Color_get_Item);
    fVar20 = UVar23.fields.r;
    style_00 = (MethodInfo_2517960 **)0x0;
    if (*(long *)(lVar9 + 0xc0) != 0) {
      *(int *)(lVar9 + 200) = (*(int *)(lVar9 + 200) + 1) % *(int *)(*(long *)(lVar9 + 0xc0) + 0x18);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90(fVar20);
  __this_06 = pMVar17;
  if (g_data_057ae23b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Reverse_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Take_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057ae23b = '\x01';
  }
  if (pMVar17 != (MethodInfo_362B8B0 *)0x0) {
    count = *(int *)&pMVar17->name / 2;
    pSVar16 = System_Linq_Enumerable__Take_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pMVar17,count,MethodInfo_IEnumerable_1_System_String_Take_String);
    collection = System_Linq_Enumerable__ToList_object_(pSVar16,MethodInfo_List_1_System_String_ToList_String);
    pSVar16 = System_Linq_Enumerable__Skip_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pMVar17,count,MethodInfo_IEnumerable_1_System_String_Skip_String);
    style_00 = &MethodInfo_IEnumerable_1_System_String_Reverse_String;
    pSVar16 = System_Linq_Enumerable__Reverse_object_(pSVar16,MethodInfo_IEnumerable_1_System_String_Reverse_String);
    collection_00 = System_Linq_Enumerable__ToList_object_(pSVar16,MethodInfo_List_1_System_String_ToList_String);
    __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    __this_06 = MethodInfo_List_1_System_String;
    System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_System_String);
    if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___AddRange
                (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
      System_Collections_Generic_List_object___AddRange
                (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection_00,MethodInfo_Void_AddRange);
      System_String__Join_3af7e00
                ("\n",(System_Collections_Generic_IEnumerable_string__o *)__this_03,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae23c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    g_data_057ae23c = '\x01';
  }
  pMVar17 = (MethodInfo_362B8B0 *)
            UI_ElementFactory__CreateWhiteLabel
                      ((UnityEngine_Transform_o *)__this_06,(UI_ElementStyle_o *)style_00,title,0,4,in_R9);
  if ((pMVar17 != (MethodInfo_362B8B0 *)0x0) &&
     (__this_06 = pMVar17,
     pUVar14 = (UnityEngine_UI_Text_o *)
               UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar17,MethodInfo_Text_GetComponent_Text),
     pUVar14 != (UnityEngine_UI_Text_o *)0x0)) {
    UnityEngine_UI_Text__set_fontSize(pUVar14,0x12,(MethodInfo *)0x0);
    UnityEngine_UI_Text__set_alignment(pUVar14,in_R8D,(MethodInfo *)0x0);
    pUVar12 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar17,MethodInfo_RectTransform_GetComponent_RectTransform);
    __this_06 = pMVar17;
    if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_sizeDelta(pUVar12,(UnityEngine_Vector2_o)0x43b40000,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  fVar20 = *(float *)&__this_06[1].field8_0x40;
  bVar6 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
  if (((char)bVar6 == '\0') &&
     (bVar6 = UnityEngine_Input__GetKey(0x20,(MethodInfo *)0x0), (char)bVar6 == '\0')) {
    bVar6 = UnityEngine_Input__GetMouseButton(1,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      fVar20 = -(fVar20 * *(float *)((long)&__this_06[1].field8_0x40 + 4));
    }
  }
  else {
    fVar20 = fVar20 * *(float *)((long)&__this_06[1].field8_0x40 + 4);
  }
  plVar18 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_06[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar24 = UnityEngine_Transform__get_localPosition
                     (*(UnityEngine_Transform_o **)&__this_06[1].token,(MethodInfo *)0x0);
  fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  plVar18 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_06[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  fStack_100 = UVar24.fields.x;
  fStack_fc = UVar24.fields.y;
  UVar24.fields.y = fVar20 * fVar21 + fStack_fc;
  UVar24.fields.x = fStack_100;
  uVar19 = 0;
  UnityEngine_Transform__set_localPosition
            (*(UnityEngine_Transform_o **)&__this_06[1].token,UVar24,(MethodInfo *)0x0);
  plVar18 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_06[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar24 = UnityEngine_Transform__get_localPosition
                     (*(UnityEngine_Transform_o **)&__this_06[1].token,(MethodInfo *)0x0);
  plVar18 = *(long **)&__this_06[1].slot;
  if ((Il2CppClass *)plVar18 == (Il2CppClass *)0x0) goto label_04386e57;
  fVar20 = (float)(*((((Il2CppClass *)plVar18)->_1).image)->vtable[0x22].methodPtr)
                            (UVar24.fields.y,CONCAT44(uVar19,UVar24.fields.z));
  pUVar11 = *(UnityEngine_Transform_o **)&__this_06[1].token;
  if (fVar20 <= UVar24.fields.y) {
    plVar18 = *(long **)&__this_06[1].slot;
    if (((Il2CppClass *)plVar18 == (Il2CppClass *)0x0) ||
       (uVar22 = (*((((Il2CppClass *)plVar18)->_1).image)->vtable[0x22].methodPtr)(),
       pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_04386e57;
    uVar22 = uVar22 ^ 0x80000000;
    uVar19 = 0;
    fVar20 = 0.0;
label_04386d76:
    value.fields.y = (float)uVar22;
    value.fields.x = (float)uVar19;
    value.fields.z = fVar20;
    UnityEngine_Transform__set_localPosition(pUVar11,value,(MethodInfo *)0x0);
  }
  else {
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
    UVar24 = UnityEngine_Transform__get_localPosition(pUVar11,(MethodInfo *)0x0);
    plVar18 = *(long **)&__this_06[1].slot;
    if ((Il2CppClass *)plVar18 == (Il2CppClass *)0x0) goto label_04386e57;
    fVar20 = (float)(*((((Il2CppClass *)plVar18)->_1).image)->vtable[0x22].methodPtr)();
    if (UVar24.fields.y <= -fVar20) {
      pUVar11 = *(UnityEngine_Transform_o **)&__this_06[1].token;
      if (g_data_057a65d5 == '\0') {
        plVar18 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar19 = (undefined4)uVar1;
      uVar22 = (uint)((ulong)uVar1 >> 0x20);
      fVar20 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      goto label_04386d76;
    }
  }
  fVar20 = *(float *)((long)&__this_06[2].virtualMethodPointer + 4);
  if (0.0 < fVar20) {
    fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar20 = fVar20 - fVar21;
    *(float *)((long)&__this_06[2].virtualMethodPointer + 4) = fVar20;
    if (fVar20 <= 0.0) {
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_04 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      plVar18 = (long *)__this_04;
      System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_04->_1).name = 0;
      if (__this_04 != (Il2CppClass *)0x0) {
        (__this_04->_1).byval_arg.data = __this_06;
        il2cpp_runtime_helper_022b4080(&(__this_04->_1).byval_arg,__this_06);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this_06,(System_Collections_IEnumerator_o *)__this_04,
                   (MethodInfo *)0x0);
        return;
      }
label_04386e57:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_05 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      uVar19 = 0;
      pIVar13 = __this_05;
      System_Object___ctor(__this_05,(MethodInfo *)0x0);
      *(undefined4 *)&__this_05[1].klass = 0;
      if (__this_05 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor(pIVar13,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar13[1].klass = uVar19;
        return;
      }
      __this_05[2].klass = (Il2CppClass *)plVar18;
      il2cpp_runtime_helper_022b4080(__this_05 + 2,plVar18);
      return;
    }
  }
  return;
}


// UI.CreditsMenu$$CreateSpacerElement
// il2cpp: void UI_CreditsMenu__CreateSpacerElement (UI_CreditsMenu_o* __this, float height, const MethodInfo* method);
// 0x43866d0

void UI_CreditsMenu__CreateSpacerElement(UI_CreditsMenu_o *__this,float height,MethodInfo *method)

{
  undefined8 uVar1;
  Il2CppMethodPointer vtableDispatch;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  System_Type_array *components;
  System_Type_o *pSVar3;
  long lVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar7;
  System_Collections_Generic_List_TSource__o *collection;
  System_Collections_Generic_List_TSource__o *collection_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo_362B8B0 *pMVar8;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  Il2CppClass *__this_04;
  Il2CppObject *__this_05;
  MethodInfo_2517960 **in_RCX;
  undefined8 extraout_RDX;
  System_String_o *title;
  int count;
  MethodInfo_362B8B0 *__this_06;
  long *plVar9;
  int32_t in_R8D;
  MethodInfo *in_R9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  uint uVar13;
  UnityEngine_Color_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o value;
  float fStack_a8;
  float fStack_a4;
  
  if (g_data_057ae239 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"Spacer");
    g_data_057ae239 = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_043868c4:
    il2cpp_runtime_helper_022b2c90();
label_043868c9:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar3 == (System_Type_o *)0x0) || (lVar4 = il2cpp_runtime_helper_023051f0(pSVar3), lVar4 != 0)) {
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar3;
      il2cpp_runtime_helper_022b4080(components->m_Items);
      pSVar3 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar3 != (System_Type_o *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pSVar3), lVar4 == 0))
      goto label_043868ce;
      if (1 < (uint)components->max_length) {
        components->m_Items[1] = pSVar3;
        il2cpp_runtime_helper_022b4080(components->m_Items + 1,pSVar3);
        __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        in_RCX = (MethodInfo_2517960 **)0x0;
        UnityEngine_GameObject___ctor_4dfc440(__this_00,"Spacer",components,(MethodInfo *)0x0);
        if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_Transform_o *)0x0)) {
          in_RCX = (MethodInfo_2517960 **)0x0;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar5,(UnityEngine_Transform_o *)(__this->fields)._contentTransform,0,(MethodInfo *)0x0)
          ;
          pIVar6 = UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar6 != (Il2CppObject *)0x0) {
            (*pIVar6->klass->vtable[0x22].methodPtr)(height,pIVar6,pIVar6->klass->vtable[0x22].method);
            vtableDispatch = pIVar6->klass->vtable[0x26].methodPtr;
            (*vtableDispatch)
                      (height,pIVar6,pIVar6->klass->vtable[0x26].method,extraout_RDX,vtableDispatch);
            return;
          }
        }
        goto label_043868c4;
      }
    }
    goto label_043868c9;
  }
label_043868ce:
  lVar4 = il2cpp_runtime_helper_0231b270();
  pMVar8 = (MethodInfo_362B8B0 *)0x0;
  fVar10 = (float)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae23d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    fVar10 = (float)il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Item);
    g_data_057ae23d = '\x01';
  }
  if (*(System_Collections_Generic_List_Color__o **)(lVar4 + 0xc0) !=
      (System_Collections_Generic_List_Color__o *)0x0) {
    pMVar8 = (MethodInfo_362B8B0 *)(ulong)*(uint *)(lVar4 + 200);
    UVar14 = System_Collections_Generic_List_Color___get_Item
                       (*(System_Collections_Generic_List_Color__o **)(lVar4 + 0xc0),*(uint *)(lVar4 + 200),
                        MethodInfo_Color_get_Item);
    fVar10 = UVar14.fields.r;
    in_RCX = (MethodInfo_2517960 **)0x0;
    if (*(long *)(lVar4 + 0xc0) != 0) {
      *(int *)(lVar4 + 200) = (*(int *)(lVar4 + 200) + 1) % *(int *)(*(long *)(lVar4 + 0xc0) + 0x18);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90(fVar10);
  __this_06 = pMVar8;
  if (g_data_057ae23b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Reverse_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Take_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057ae23b = '\x01';
  }
  if (pMVar8 != (MethodInfo_362B8B0 *)0x0) {
    count = *(int *)&pMVar8->name / 2;
    pSVar7 = System_Linq_Enumerable__Take_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pMVar8,count,MethodInfo_IEnumerable_1_System_String_Take_String);
    collection = System_Linq_Enumerable__ToList_object_(pSVar7,MethodInfo_List_1_System_String_ToList_String);
    pSVar7 = System_Linq_Enumerable__Skip_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pMVar8,count,MethodInfo_IEnumerable_1_System_String_Skip_String);
    in_RCX = &MethodInfo_IEnumerable_1_System_String_Reverse_String;
    pSVar7 = System_Linq_Enumerable__Reverse_object_(pSVar7,MethodInfo_IEnumerable_1_System_String_Reverse_String);
    collection_00 = System_Linq_Enumerable__ToList_object_(pSVar7,MethodInfo_List_1_System_String_ToList_String);
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    __this_06 = MethodInfo_List_1_System_String;
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___AddRange
                (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
      System_Collections_Generic_List_object___AddRange
                (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection_00,MethodInfo_Void_AddRange);
      System_String__Join_3af7e00
                ("\n",(System_Collections_Generic_IEnumerable_string__o *)__this_01,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae23c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    g_data_057ae23c = '\x01';
  }
  pMVar8 = (MethodInfo_362B8B0 *)
           UI_ElementFactory__CreateWhiteLabel
                     ((UnityEngine_Transform_o *)__this_06,(UI_ElementStyle_o *)in_RCX,title,0,4,in_R9);
  if ((pMVar8 != (MethodInfo_362B8B0 *)0x0) &&
     (__this_06 = pMVar8,
     __this_02 = (UnityEngine_UI_Text_o *)
                 UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar8,MethodInfo_Text_GetComponent_Text)
     , __this_02 != (UnityEngine_UI_Text_o *)0x0)) {
    UnityEngine_UI_Text__set_fontSize(__this_02,0x12,(MethodInfo *)0x0);
    UnityEngine_UI_Text__set_alignment(__this_02,in_R8D,(MethodInfo *)0x0);
    __this_03 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar8,MethodInfo_RectTransform_GetComponent_RectTransform);
    __this_06 = pMVar8;
    if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_sizeDelta(__this_03,(UnityEngine_Vector2_o)0x43b40000,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  fVar10 = *(float *)&__this_06[1].field8_0x40;
  bVar2 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') &&
     (bVar2 = UnityEngine_Input__GetKey(0x20,(MethodInfo *)0x0), (char)bVar2 == '\0')) {
    bVar2 = UnityEngine_Input__GetMouseButton(1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      fVar10 = -(fVar10 * *(float *)((long)&__this_06[1].field8_0x40 + 4));
    }
  }
  else {
    fVar10 = fVar10 * *(float *)((long)&__this_06[1].field8_0x40 + 4);
  }
  plVar9 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_06[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar15 = UnityEngine_Transform__get_localPosition
                     (*(UnityEngine_Transform_o **)&__this_06[1].token,(MethodInfo *)0x0);
  fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  plVar9 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_06[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  fStack_a8 = UVar15.fields.x;
  fStack_a4 = UVar15.fields.y;
  UVar15.fields.y = fVar10 * fVar11 + fStack_a4;
  UVar15.fields.x = fStack_a8;
  uVar12 = 0;
  UnityEngine_Transform__set_localPosition
            (*(UnityEngine_Transform_o **)&__this_06[1].token,UVar15,(MethodInfo *)0x0);
  plVar9 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_06[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar15 = UnityEngine_Transform__get_localPosition
                     (*(UnityEngine_Transform_o **)&__this_06[1].token,(MethodInfo *)0x0);
  plVar9 = *(long **)&__this_06[1].slot;
  if ((Il2CppClass *)plVar9 == (Il2CppClass *)0x0) goto label_04386e57;
  fVar10 = (float)(*((((Il2CppClass *)plVar9)->_1).image)->vtable[0x22].methodPtr)
                            (UVar15.fields.y,CONCAT44(uVar12,UVar15.fields.z));
  pUVar5 = *(UnityEngine_Transform_o **)&__this_06[1].token;
  if (fVar10 <= UVar15.fields.y) {
    plVar9 = *(long **)&__this_06[1].slot;
    if (((Il2CppClass *)plVar9 == (Il2CppClass *)0x0) ||
       (uVar13 = (*((((Il2CppClass *)plVar9)->_1).image)->vtable[0x22].methodPtr)(),
       pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_04386e57;
    uVar13 = uVar13 ^ 0x80000000;
    uVar12 = 0;
    fVar10 = 0.0;
label_04386d76:
    value.fields.y = (float)uVar13;
    value.fields.x = (float)uVar12;
    value.fields.z = fVar10;
    UnityEngine_Transform__set_localPosition(pUVar5,value,(MethodInfo *)0x0);
  }
  else {
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
    UVar15 = UnityEngine_Transform__get_localPosition(pUVar5,(MethodInfo *)0x0);
    plVar9 = *(long **)&__this_06[1].slot;
    if ((Il2CppClass *)plVar9 == (Il2CppClass *)0x0) goto label_04386e57;
    fVar10 = (float)(*((((Il2CppClass *)plVar9)->_1).image)->vtable[0x22].methodPtr)();
    if (UVar15.fields.y <= -fVar10) {
      pUVar5 = *(UnityEngine_Transform_o **)&__this_06[1].token;
      if (g_data_057a65d5 == '\0') {
        plVar9 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar12 = (undefined4)uVar1;
      uVar13 = (uint)((ulong)uVar1 >> 0x20);
      fVar10 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      goto label_04386d76;
    }
  }
  fVar10 = *(float *)((long)&__this_06[2].virtualMethodPointer + 4);
  if (0.0 < fVar10) {
    fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar10 = fVar10 - fVar11;
    *(float *)((long)&__this_06[2].virtualMethodPointer + 4) = fVar10;
    if (fVar10 <= 0.0) {
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_04 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      plVar9 = (long *)__this_04;
      System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_04->_1).name = 0;
      if (__this_04 != (Il2CppClass *)0x0) {
        (__this_04->_1).byval_arg.data = __this_06;
        il2cpp_runtime_helper_022b4080(&(__this_04->_1).byval_arg,__this_06);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this_06,(System_Collections_IEnumerator_o *)__this_04,
                   (MethodInfo *)0x0);
        return;
      }
label_04386e57:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_05 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      uVar12 = 0;
      pIVar6 = __this_05;
      System_Object___ctor(__this_05,(MethodInfo *)0x0);
      *(undefined4 *)&__this_05[1].klass = 0;
      if (__this_05 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor(pIVar6,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar6[1].klass = uVar12;
        return;
      }
      __this_05[2].klass = (Il2CppClass *)plVar9;
      il2cpp_runtime_helper_022b4080(__this_05 + 2,plVar9);
      return;
    }
  }
  return;
}


// UI.CreditsMenu$$CreateTextElement
// il2cpp: void UI_CreditsMenu__CreateTextElement (UI_CreditsMenu_o* __this, System_String_o* content, bool isCategory, const MethodInfo* method);
// 0x4385370

void UI_CreditsMenu__CreateTextElement
               (UI_CreditsMenu_o *__this,System_String_o *content,bool_conflict isCategory,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  System_Collections_Generic_List_Color__o *pSVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o UVar4;
  bool_conflict bVar5;
  UI_ElementStyle_o *pUVar6;
  System_RuntimeTypeHandle_Fields components;
  System_Type_o *pSVar7;
  long lVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  System_RuntimeTypeHandle_o SVar13;
  UnityEngine_UI_Image_o *pUVar14;
  UnityEngine_RectTransform_o *pUVar15;
  UnityEngine_UI_Text_o *pUVar16;
  UnityEngine_RectTransform_o *pUVar17;
  System_String_array *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_string__o *column;
  System_Type_array *column_00;
  System_String_o *pSVar18;
  System_String_o *pSVar19;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  undefined8 uVar20;
  System_Type_array *pSVar21;
  Il2CppObject *pIVar22;
  UnityEngine_Transform_o *parent;
  long lVar23;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar24;
  System_Collections_Generic_List_TSource__o *collection;
  System_Collections_Generic_List_TSource__o *collection_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo_362B8B0 *pMVar25;
  Il2CppClass *__this_02;
  Il2CppObject *__this_03;
  MethodInfo_255A0F0 **ppMVar26;
  MethodInfo_2525430 **ppMVar27;
  MethodInfo_2517960 **style;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar28;
  MethodInfo *method_00;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  System_String_o *title;
  int32_t index;
  int iVar29;
  MethodInfo_362B8B0 *__this_04;
  UI_CreditsMenu_o *__this_05;
  long *plVar30;
  int32_t value_01;
  undefined8 in_R8;
  MethodInfo *in_R9;
  int iVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  UnityEngine_Color_o UVar36;
  UnityEngine_Vector3_o UVar37;
  UnityEngine_Vector3_o value_02;
  float fStack_158;
  float fStack_154;
  UnityEngine_Vector2_o UStack_b0;
  UnityEngine_Vector2_o local_48;
  
  ppMVar26 = (MethodInfo_255A0F0 **)method;
  if (g_data_057ae23a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_String_OrderByDescending_Str);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_CreateTextElement_b__16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"TwoColumnContainer");
    il2cpp_runtime_helper_023445d0(&"CategoryContainer");
    g_data_057ae23a = '\x01';
    ppMVar26 = (MethodInfo_255A0F0 **)method;
  }
  pUVar6 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSVar18 = "DefaultPanel";
  System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
  (pUVar6->fields).FontSize = 0x18;
  (pUVar6->fields).TitleWidth = 120.0;
  (pUVar6->fields).Spacing = 20.0;
  (pUVar6->fields).ThemePanel = pSVar18;
  il2cpp_runtime_helper_022b4080(&(pUVar6->fields).ThemePanel);
  value_01 = (int32_t)in_R8;
  if ((char)isCategory == '\0') {
    SVar13.fields.value =
         (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)(ulong)(uint)isCategory;
    if (content == (System_String_o *)0x0) goto label_04385f90;
    ppMVar26 = (MethodInfo_255A0F0 **)0x0;
    source = System_String__Split(content,10,0,(MethodInfo *)0x0);
    value_01 = (int32_t)in_R8;
    if (source == (System_String_array *)0x0) goto label_04385f90;
    if ((int)source->max_length < 9) {
      ppMVar26 = (MethodInfo_255A0F0 **)0x0;
      value_01 = 4;
      pUVar9 = UI_ElementFactory__CreateWhiteLabel
                         ((UnityEngine_Transform_o *)(__this->fields)._contentTransform,pUVar6,content,0,4,
                          in_R9);
      SVar13.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)source;
      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
        ppMVar26 = &MethodInfo_Text_GetComponent_Text;
        pUVar16 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_Text_GetComponent_Text);
        if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
          UnityEngine_UI_Text__set_fontSize(pUVar16,0x12,(MethodInfo *)0x0);
          UnityEngine_UI_Text__set_alignment(pUVar16,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_04385f90;
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_int);
      System_Func_object__int____ctor();
      lVar8 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TKey__o **)(lVar8 + 8) = keySelector;
      il2cpp_runtime_helper_022b4080(lVar8 + 8,keySelector);
    }
    source_00 = System_Linq_Enumerable__OrderByDescending_object__int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                           MethodInfo_IOrderedEnumerable_1_System_String_OrderByDescending_Str);
    ppMVar27 = &MethodInfo_List_1_System_String_ToList_String;
    components.value =
         (intptr_t)
         System_Linq_Enumerable__ToList_object_
                   ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_String_ToList_String);
    column = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)column,MethodInfo_List_1_System_String);
    column_00 = (System_Type_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pSVar21 = column_00;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)column_00,MethodInfo_List_1_System_String);
    value_01 = (int32_t)in_R8;
    ppMVar26 = (MethodInfo_255A0F0 **)ppMVar27;
    SVar13.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)components.value;
    if ((System_Type_array *)components.value == (System_Type_array *)0x0) goto label_04385f90;
    iVar29 = (int)((System_Type_array *)components.value)->max_length;
    pMVar28 = extraout_RDX;
    if (column != (System_Collections_Generic_List_string__o *)0x0) {
      if (0 < iVar29) {
        index = 0;
        iVar29 = 0;
        iVar31 = 0;
        do {
          while( true ) {
            pSVar18 = (System_String_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)components.value,index,
                                 MethodInfo_String_get_Item);
            lVar8 = MethodInfo_Void_Add;
            value_01 = (int32_t)in_R8;
            pSVar21 = (System_Type_array *)components.value;
            if (iVar31 <= iVar29) break;
            if (column_00 == (System_Type_array *)0x0) goto label_04385f90;
            piVar2 = (int *)((long)&column_00->max_length + 4);
            *piVar2 = *piVar2 + 1;
            ppMVar26 = (MethodInfo_255A0F0 **)column_00->bounds;
            if ((System_String_array *)ppMVar26 == (System_String_array *)0x0) goto label_04385f90;
            uVar35 = (uint)column_00->max_length;
            if (uVar35 < (uint)((System_String_array *)ppMVar26)->max_length) {
              *(uint *)&column_00->max_length = uVar35 + 1;
              ((System_String_array *)ppMVar26)->m_Items[(int)uVar35] = pSVar18;
              il2cpp_runtime_helper_022b4080(((System_String_array *)ppMVar26)->m_Items + (int)uVar35,pSVar18);
            }
            else {
              ppMVar26 = *(MethodInfo_255A0F0 ***)(*(long *)(lVar8 + 0x20) + 0xc0);
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)column_00,(Il2CppObject *)pSVar18,
                         (MethodInfo_362C220 *)((System_String_array *)ppMVar26)->m_Items[10]);
            }
            pIVar22 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)components.value,index,
                                 MethodInfo_String_get_Item);
            value_01 = (int32_t)in_R8;
            if (pIVar22 == (Il2CppObject *)0x0) goto label_04385f90;
            iVar29 = iVar29 + *(int *)&pIVar22[1].klass;
            index = index + 1;
            ppMVar27 = (MethodInfo_2525430 **)ppMVar26;
            pMVar28 = extraout_RDX_00;
            if ((int)((System_Type_array *)components.value)->max_length <= index) goto label_04385d91;
          }
          piVar1 = &(column->fields)._version;
          *piVar1 = *piVar1 + 1;
          ppMVar26 = (MethodInfo_255A0F0 **)(column->fields)._items;
          if ((System_String_array *)ppMVar26 == (System_String_array *)0x0) goto label_04385f90;
          uVar35 = (column->fields)._size;
          if (uVar35 < (uint)((System_String_array *)ppMVar26)->max_length) {
            (column->fields)._size = uVar35 + 1;
            ((System_String_array *)ppMVar26)->m_Items[(int)uVar35] = pSVar18;
            il2cpp_runtime_helper_022b4080(((System_String_array *)ppMVar26)->m_Items + (int)uVar35,pSVar18);
          }
          else {
            ppMVar26 = *(MethodInfo_255A0F0 ***)(*(long *)(lVar8 + 0x20) + 0xc0);
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)column,(Il2CppObject *)pSVar18,
                       (MethodInfo_362C220 *)((System_String_array *)ppMVar26)->m_Items[10]);
          }
          pIVar22 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)components.value,index,
                               MethodInfo_String_get_Item);
          value_01 = (int32_t)in_R8;
          if (pIVar22 == (Il2CppObject *)0x0) goto label_04385f90;
          iVar31 = iVar31 + *(int *)&pIVar22[1].klass;
          index = index + 1;
          ppMVar27 = (MethodInfo_2525430 **)ppMVar26;
          pMVar28 = extraout_RDX_01;
        } while (index < (int)((System_Type_array *)components.value)->max_length);
      }
label_04385d91:
      pSVar18 = UI_CreditsMenu__ArrangeColumn((UI_CreditsMenu_o *)pSVar21,column,pMVar28);
      pSVar19 = UI_CreditsMenu__ArrangeColumn
                          ((UI_CreditsMenu_o *)pSVar21,(System_Collections_Generic_List_string__o *)column_00,
                           method_00);
      pSVar21 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
      SVar13 = TypeRef_RectTransform;
      ppMVar26 = (MethodInfo_255A0F0 **)ppMVar27;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        ppMVar26 = (MethodInfo_255A0F0 **)ppMVar27;
      }
      components.value = (intptr_t)System_Type__GetTypeFromHandle(SVar13,(MethodInfo *)0x0);
      if (pSVar21 == (System_Type_array *)0x0) goto label_04385f90;
      if (((System_Type_array *)components.value == (System_Type_array *)0x0) ||
         (lVar8 = il2cpp_runtime_helper_023051f0(components.value), lVar8 != 0)) {
        if ((int)pSVar21->max_length != 0) {
          pSVar21->m_Items[0] = (System_Type_o *)components.value;
          il2cpp_runtime_helper_022b4080(pSVar21->m_Items);
          components.value = (intptr_t)System_Type__GetTypeFromHandle(TypeRef_HorizontalLayoutGroup,(MethodInfo *)0x0);
          if (((System_Type_array *)components.value != (System_Type_array *)0x0) &&
             (lVar8 = il2cpp_runtime_helper_023051f0(components.value), lVar8 == 0)) goto label_04385f9a;
          if (1 < (uint)pSVar21->max_length) {
            pSVar21->m_Items[1] = (System_Type_o *)components.value;
            il2cpp_runtime_helper_022b4080(pSVar21->m_Items + 1,components.value);
            SVar13.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            ppMVar26 = (MethodInfo_255A0F0 **)0x0;
            UnityEngine_GameObject___ctor_4dfc440
                      ((UnityEngine_GameObject_o *)SVar13.fields.value,"TwoColumnContainer",pSVar21,(MethodInfo *)0x0)
            ;
            if ((SVar13.fields.value != 0) &&
               (pUVar10 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar13.fields.value,(MethodInfo *)0x0),
               pUVar10 != (UnityEngine_Transform_o *)0x0)) {
              ppMVar26 = (MethodInfo_255A0F0 **)0x0;
              UnityEngine_Transform__SetParent_4e09e30
                        (pUVar10,(UnityEngine_Transform_o *)(__this->fields)._contentTransform,0,
                         (MethodInfo *)0x0);
              __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)SVar13.fields.value,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
              if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)__this_00,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                          (__this_00,1,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          (__this_00,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_00,60.0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                          (__this_00,0,(MethodInfo *)0x0);
                __this_05 = (UI_CreditsMenu_o *)SVar13.fields.value;
                pUVar10 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar13.fields.value,(MethodInfo *)0x0);
                UI_CreditsMenu__CreateColumnText(__this_05,pUVar10,pSVar18,pUVar6,0,in_R9);
                pUVar10 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar13.fields.value,(MethodInfo *)0x0);
                UI_CreditsMenu__CreateColumnText
                          ((UI_CreditsMenu_o *)SVar13.fields.value,pUVar10,pSVar19,pUVar6,2,in_R9);
                return;
              }
            }
            goto label_04385f90;
          }
        }
        goto label_04385f95;
      }
      goto label_04385f9a;
    }
    if (iVar29 < 1) goto label_04385d91;
  }
  else {
    components.value = il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    SVar13 = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = System_Type__GetTypeFromHandle(SVar13,(MethodInfo *)0x0);
    SVar13.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)components.value;
    if ((System_Type_array *)components.value == (System_Type_array *)0x0) goto label_04385f90;
    if ((pSVar7 != (System_Type_o *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7), lVar8 == 0))
    goto label_04385f9a;
    if ((int)((System_Type_array *)components.value)->max_length == 0) goto label_04385f95;
    ((System_Type_array *)components.value)->m_Items[0] = pSVar7;
    il2cpp_runtime_helper_022b4080(((System_Type_array *)components.value)->m_Items,pSVar7);
    pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    ppMVar26 = (MethodInfo_255A0F0 **)0x0;
    UnityEngine_GameObject___ctor_4dfc440
              (pUVar9,"CategoryContainer",(System_Type_array *)components.value,(MethodInfo *)0x0);
    if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
       pUVar10 != (UnityEngine_Transform_o *)0x0)) {
      ppMVar26 = (MethodInfo_255A0F0 **)0x0;
      UnityEngine_Transform__SetParent_4e09e30
                (pUVar10,(UnityEngine_Transform_o *)(__this->fields)._contentTransform,0,(MethodInfo *)0x0);
      pUVar11 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_RectTransform_GetComponent_RectTransform);
      components.value = il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
      pSVar7 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
      SVar13.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)components.value
      ;
      if ((System_Type_array *)components.value != (System_Type_array *)0x0) {
        if ((pSVar7 == (System_Type_o *)0x0) || (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7), lVar8 != 0)) {
          if ((int)((System_Type_array *)components.value)->max_length != 0) {
            ((System_Type_array *)components.value)->m_Items[0] = pSVar7;
            il2cpp_runtime_helper_022b4080(((System_Type_array *)components.value)->m_Items);
            pSVar7 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
            if ((pSVar7 != (System_Type_o *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7), lVar8 == 0))
            goto label_04385f9a;
            if (1 < (uint)((System_Type_array *)components.value)->max_length) {
              ((System_Type_array *)components.value)->m_Items[1] = pSVar7;
              il2cpp_runtime_helper_022b4080(((System_Type_array *)components.value)->m_Items + 1,pSVar7);
              pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              ppMVar26 = (MethodInfo_255A0F0 **)0x0;
              UnityEngine_GameObject___ctor_4dfc440
                        (pUVar12,"Background",(System_Type_array *)components.value,(MethodInfo *)0x0);
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                SVar13.fields.value =
                     (System_RuntimeTypeHandle_Fields)
                     UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                if (SVar13.fields.value != 0) {
                  ppMVar26 = (MethodInfo_255A0F0 **)0x0;
                  UnityEngine_Transform__SetParent_4e09e30
                            ((UnityEngine_Transform_o *)SVar13.fields.value,pUVar10,0,(MethodInfo *)0x0);
                  pUVar14 = (UnityEngine_UI_Image_o *)
                            UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Image_GetComponent_Image);
                  if (pUVar14 != (UnityEngine_UI_Image_o *)0x0) {
                    UnityEngine_UI_Image__set_sprite(pUVar14,(__this->fields)._brushSprite,(MethodInfo *)0x0);
                    if (g_data_057ae23d == '\0') {
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Item);
                      g_data_057ae23d = '\x01';
                    }
                    pSVar3 = (__this->fields)._categoryColors;
                    SVar13.fields.value =
                         (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pUVar14;
                    if (pSVar3 != (System_Collections_Generic_List_Color__o *)0x0) {
                      UVar36 = System_Collections_Generic_List_Color___get_Item
                                         (pSVar3,(__this->fields)._currentColorIndex,MethodInfo_Color_get_Item);
                      pSVar3 = (__this->fields)._categoryColors;
                      ppMVar26 = (MethodInfo_255A0F0 **)0x0;
                      if (pSVar3 != (System_Collections_Generic_List_Color__o *)0x0) {
                        (__this->fields)._currentColorIndex =
                             ((__this->fields)._currentColorIndex + 1) % (pSVar3->fields)._size;
                        (*(pUVar14->klass->vtable)._23_set_color.methodPtr)
                                  (UVar36.fields.r,UVar36.fields._8_8_,pUVar14,
                                   (pUVar14->klass->vtable)._23_set_color.method);
                        pUVar15 = (UnityEngine_RectTransform_o *)
                                  UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_RectTransform_GetComponent_RectTransform);
                        pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                        ppMVar26 = (MethodInfo_255A0F0 **)0x0;
                        value_01 = 4;
                        pUVar9 = UI_ElementFactory__CreateWhiteLabel(pUVar10,pUVar6,content,0,4,in_R9);
                        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                          ppMVar26 = &MethodInfo_Text_GetComponent_Text;
                          pUVar16 = (UnityEngine_UI_Text_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_Text_GetComponent_Text);
                          if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
                            UnityEngine_UI_Text__set_font
                                      (pUVar16,(__this->fields)._categoryFont,(MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_fontSize(pUVar16,0x20,(MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_fontStyle(pUVar16,1,(MethodInfo *)0x0);
                            UnityEngine_UI_Text__set_alignment(pUVar16,4,(MethodInfo *)0x0);
                            (*(pUVar16->klass->vtable)._23_set_color.methodPtr)
                                      (0x3f800000,0x3f8000003f800000,pUVar16);
                            pUVar17 = UnityEngine_UI_Graphic__get_rectTransform
                                                ((UnityEngine_UI_Graphic_o *)pUVar16,(MethodInfo *)0x0);
                            SVar13.fields.value =
                                 (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pUVar11;
                            if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
                              UnityEngine_RectTransform__set_anchorMin
                                        (pUVar11,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
                              UnityEngine_RectTransform__set_anchorMax
                                        (pUVar11,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
                              if (g_data_057a694c == '\0') {
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                g_data_057a694c = '\x01';
                              }
                              UnityEngine_RectTransform__set_anchoredPosition
                                        (pUVar11,(UnityEngine_Vector2_o)
                                                 **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                         (MethodInfo *)0x0);
                              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                                        (pUVar17,(MethodInfo *)0x0);
                              if (pUVar17 != (UnityEngine_RectTransform_o *)0x0) {
                                UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar17,(MethodInfo *)0x0);
                                local_48.fields.x = UVar4.fields.x + 40.0;
                                local_48.fields.y = UVar4.fields.y + 10.0;
                                UVar4.fields.y = local_48.fields.y;
                                UVar4.fields.x = local_48.fields.x;
                                UnityEngine_RectTransform__set_sizeDelta(pUVar11,UVar4,(MethodInfo *)0x0);
                                if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                  value.fields.y = local_48.fields.y + -35.0;
                                  value.fields.x = local_48.fields.x + -25.0;
                                  UnityEngine_RectTransform__set_sizeDelta(pUVar15,value,(MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_sizeDelta(pUVar17,local_48,(MethodInfo *)0x0)
                                  ;
                                  UnityEngine_RectTransform__set_anchorMax
                                            (pUVar15,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMin
                                            (pUVar15,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchoredPosition
                                            (pUVar15,(UnityEngine_Vector2_o)0xc170000000000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMax
                                            (pUVar17,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  UnityEngine_RectTransform__set_anchorMin
                                            (pUVar17,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                             (MethodInfo *)0x0);
                                  if (g_data_057a694c == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                    g_data_057a694c = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchoredPosition
                                            (pUVar17,(UnityEngine_Vector2_o)
                                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                             (MethodInfo *)0x0);
                                  pUVar10 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                                  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                    UnityEngine_Transform__SetAsFirstSibling(pUVar10,(MethodInfo *)0x0);
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
              goto label_04385f90;
            }
          }
          goto label_04385f95;
        }
        goto label_04385f9a;
      }
    }
label_04385f90:
    il2cpp_runtime_helper_022b2c90();
    components = SVar13.fields.value;
label_04385f95:
    il2cpp_runtime_helper_022b2ca0();
label_04385f9a:
    uVar20 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar20);
  }
  pSVar18 = (System_String_o *)0x0;
  System_Collections_Generic_List_object___get_Item
            ((System_Collections_Generic_List_object__o *)components.value,0,MethodInfo_String_get_Item);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae238 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"CategoryContainer");
    g_data_057ae238 = '\x01';
  }
  pSVar21 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar13 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = System_Type__GetTypeFromHandle(SVar13,(MethodInfo *)0x0);
  if (pSVar21 == (System_Type_array *)0x0) goto label_043866b7;
  if ((pSVar7 == (System_Type_o *)0x0) ||
     (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7,(((pSVar21->obj).klass)->_1).element_class), lVar8 != 0)) {
    if ((int)pSVar21->max_length != 0) {
      pSVar21->m_Items[0] = pSVar7;
      il2cpp_runtime_helper_022b4080(pSVar21->m_Items);
      pSVar7 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar7 != (System_Type_o *)0x0) &&
         (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7,(((pSVar21->obj).klass)->_1).element_class), lVar8 == 0))
      goto label_043866c1;
      if (1 < (uint)pSVar21->max_length) {
        pSVar21->m_Items[1] = pSVar7;
        il2cpp_runtime_helper_022b4080(pSVar21->m_Items + 1,pSVar7);
        pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        ppMVar26 = (MethodInfo_255A0F0 **)0x0;
        UnityEngine_GameObject___ctor_4dfc440(pUVar9,"CategoryContainer",pSVar21,(MethodInfo *)0x0);
        if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
           pUVar10 != (UnityEngine_Transform_o *)0x0)) {
          ppMVar26 = (MethodInfo_255A0F0 **)0x0;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar10,(UnityEngine_Transform_o *)((System_Type_array *)components.value)->m_Items[0x10]
                     ,0,(MethodInfo *)0x0);
          pUVar11 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_RectTransform_GetComponent_RectTransform);
          pIVar22 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          pSVar21 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
          pSVar7 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
          if (pSVar21 != (System_Type_array *)0x0) {
            if ((pSVar7 != (System_Type_o *)0x0) &&
               (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7,(((pSVar21->obj).klass)->_1).element_class), lVar8 == 0))
            goto label_043866c1;
            if ((int)pSVar21->max_length != 0) {
              pSVar21->m_Items[0] = pSVar7;
              il2cpp_runtime_helper_022b4080(pSVar21->m_Items);
              pSVar7 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
              if ((pSVar7 != (System_Type_o *)0x0) &&
                 (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7,(((pSVar21->obj).klass)->_1).element_class), lVar8 == 0))
              goto label_043866c1;
              if (1 < (uint)pSVar21->max_length) {
                pSVar21->m_Items[1] = pSVar7;
                il2cpp_runtime_helper_022b4080(pSVar21->m_Items + 1,pSVar7);
                pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                ppMVar26 = (MethodInfo_255A0F0 **)0x0;
                UnityEngine_GameObject___ctor_4dfc440(pUVar12,"Background",pSVar21,(MethodInfo *)0x0);
                if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar10 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                  parent = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                    ppMVar26 = (MethodInfo_255A0F0 **)0x0;
                    UnityEngine_Transform__SetParent_4e09e30(pUVar10,parent,0,(MethodInfo *)0x0);
                    pUVar14 = (UnityEngine_UI_Image_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Image_GetComponent_Image);
                    if (pUVar14 != (UnityEngine_UI_Image_o *)0x0) {
                      UnityEngine_UI_Image__set_sprite
                                (pUVar14,(UnityEngine_Sprite_o *)
                                         ((System_Type_array *)components.value)->m_Items[0x16],
                                 (MethodInfo *)0x0);
                      if (g_data_057ae23d == '\0') {
                        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                        il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Item);
                        g_data_057ae23d = '\x01';
                      }
                      if ((System_Collections_Generic_List_Color__o *)
                          ((System_Type_array *)components.value)->m_Items[0x14] !=
                          (System_Collections_Generic_List_Color__o *)0x0) {
                        UVar36 = System_Collections_Generic_List_Color___get_Item
                                           ((System_Collections_Generic_List_Color__o *)
                                            ((System_Type_array *)components.value)->m_Items[0x14],
                                            *(int32_t *)
                                             (((System_Type_array *)components.value)->m_Items + 0x15),
                                            MethodInfo_Color_get_Item);
                        ppMVar26 = (MethodInfo_255A0F0 **)0x0;
                        if (((System_Type_array *)components.value)->m_Items[0x14] != (System_Type_o *)0x0) {
                          *(int *)(((System_Type_array *)components.value)->m_Items + 0x15) =
                               (*(int *)(((System_Type_array *)components.value)->m_Items + 0x15) + 1) %
                               *(int *)&((System_Type_array *)components.value)->m_Items[0x14][1].klass;
                          (*(pUVar14->klass->vtable)._23_set_color.methodPtr)
                                    (UVar36.fields.r,UVar36.fields._8_8_,pUVar14,
                                     (pUVar14->klass->vtable)._23_set_color.method);
                          pUVar15 = (UnityEngine_RectTransform_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_RectTransform_GetComponent_RectTransform);
                          pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                          pUVar6 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                          pSVar19 = "DefaultPanel";
                          System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
                          (pUVar6->fields).FontSize = 0x18;
                          (pUVar6->fields).TitleWidth = 120.0;
                          (pUVar6->fields).Spacing = 20.0;
                          (pUVar6->fields).ThemePanel = pSVar19;
                          il2cpp_runtime_helper_022b4080(&(pUVar6->fields).ThemePanel,pSVar19);
                          ppMVar26 = (MethodInfo_255A0F0 **)0x0;
                          value_01 = 4;
                          pUVar9 = UI_ElementFactory__CreateWhiteLabel(pUVar10,pUVar6,pSVar18,0,4,in_R9);
                          if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                            ppMVar26 = &MethodInfo_Text_GetComponent_Text;
                            pUVar16 = (UnityEngine_UI_Text_o *)
                                      UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_Text_GetComponent_Text);
                            if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
                              UnityEngine_UI_Text__set_font
                                        (pUVar16,(UnityEngine_Font_o *)
                                                 ((System_Type_array *)components.value)->m_Items[0x12],
                                         (MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_fontSize(pUVar16,0x20,(MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_fontStyle(pUVar16,1,(MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_alignment(pUVar16,4,(MethodInfo *)0x0);
                              (*(pUVar16->klass->vtable)._23_set_color.methodPtr)(pUVar16);
                              pUVar17 = UnityEngine_UI_Graphic__get_rectTransform
                                                  ((UnityEngine_UI_Graphic_o *)pUVar16,(MethodInfo *)0x0);
                              if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
                                UnityEngine_RectTransform__set_anchorMin
                                          (pUVar11,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0
                                          );
                                UnityEngine_RectTransform__set_anchorMax
                                          (pUVar11,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0
                                          );
                                if (g_data_057a694c == '\0') {
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                  g_data_057a694c = '\x01';
                                }
                                UnityEngine_RectTransform__set_anchoredPosition
                                          (pUVar11,(UnityEngine_Vector2_o)
                                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                           (MethodInfo *)0x0);
                                if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                                          (pUVar17,(MethodInfo *)0x0);
                                if (pUVar17 != (UnityEngine_RectTransform_o *)0x0) {
                                  UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar17,(MethodInfo *)0x0);
                                  UStack_b0.fields.x = UVar4.fields.x + 40.0;
                                  UStack_b0.fields.y = UVar4.fields.y + 20.0;
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (pUVar11,(UnityEngine_Vector2_o)
                                                     ((ulong)(uint)UStack_b0.fields.y << 0x20),
                                             (MethodInfo *)0x0);
                                  if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                    value_00.fields.y = UStack_b0.fields.y + -15.0;
                                    value_00.fields.x = UStack_b0.fields.x + -10.0;
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (pUVar15,value_00,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (pUVar17,UStack_b0,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMax
                                              (pUVar15,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMin
                                              (pUVar15,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchoredPosition
                                              (pUVar15,(UnityEngine_Vector2_o)0xc0a0000000000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMax
                                              (pUVar17,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMin
                                              (pUVar17,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                               (MethodInfo *)0x0);
                                    if (g_data_057a694c == '\0') {
                                      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                      g_data_057a694c = '\x01';
                                    }
                                    UnityEngine_RectTransform__set_anchoredPosition
                                              (pUVar17,(UnityEngine_Vector2_o)
                                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                               (MethodInfo *)0x0);
                                    pUVar10 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0)
                                    ;
                                    if ((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
                                       (UnityEngine_Transform__SetAsFirstSibling(pUVar10,(MethodInfo *)0x0),
                                       pIVar22 != (Il2CppObject *)0x0)) {
                                      (*pIVar22->klass->vtable[0x22].methodPtr)
                                                (pIVar22,pIVar22->klass->vtable[0x22].method);
                                      UNRECOVERED_JUMPTABLE_00 = pIVar22->klass->vtable[0x26].methodPtr;
                                      (*UNRECOVERED_JUMPTABLE_00)
                                                (UStack_b0.fields.y,pIVar22,
                                                 pIVar22->klass->vtable[0x26].method,extraout_RDX_02,
                                                 UNRECOVERED_JUMPTABLE_00);
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
                goto label_043866b7;
              }
            }
            goto label_043866bc;
          }
        }
label_043866b7:
        il2cpp_runtime_helper_022b2c90();
      }
    }
label_043866bc:
    il2cpp_runtime_helper_022b2ca0();
  }
label_043866c1:
  lVar8 = il2cpp_runtime_helper_0231b270();
  uVar32 = il2cpp_runtime_helper_022b2b10(lVar8,0);
  style = (MethodInfo_2517960 **)ppMVar26;
  if (g_data_057ae239 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"Spacer");
    g_data_057ae239 = '\x01';
    style = (MethodInfo_2517960 **)ppMVar26;
  }
  pSVar21 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar13 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = System_Type__GetTypeFromHandle(SVar13,(MethodInfo *)0x0);
  if (pSVar21 == (System_Type_array *)0x0) {
label_043868c4:
    il2cpp_runtime_helper_022b2c90();
label_043868c9:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar7 == (System_Type_o *)0x0) || (lVar23 = il2cpp_runtime_helper_023051f0(pSVar7), lVar23 != 0)) {
    if ((int)pSVar21->max_length != 0) {
      pSVar21->m_Items[0] = pSVar7;
      il2cpp_runtime_helper_022b4080(pSVar21->m_Items);
      pSVar7 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if ((pSVar7 != (System_Type_o *)0x0) && (lVar23 = il2cpp_runtime_helper_023051f0(pSVar7), lVar23 == 0))
      goto label_043868ce;
      if (1 < (uint)pSVar21->max_length) {
        pSVar21->m_Items[1] = pSVar7;
        il2cpp_runtime_helper_022b4080(pSVar21->m_Items + 1,pSVar7);
        pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        style = (MethodInfo_2517960 **)0x0;
        UnityEngine_GameObject___ctor_4dfc440(pUVar9,"Spacer",pSVar21,(MethodInfo *)0x0);
        if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar10 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
           pUVar10 != (UnityEngine_Transform_o *)0x0)) {
          style = (MethodInfo_2517960 **)0x0;
          UnityEngine_Transform__SetParent_4e09e30
                    (pUVar10,*(UnityEngine_Transform_o **)(lVar8 + 0xa0),0,(MethodInfo *)0x0);
          pIVar22 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar22 != (Il2CppObject *)0x0) {
            (*pIVar22->klass->vtable[0x22].methodPtr)(uVar32,pIVar22,pIVar22->klass->vtable[0x22].method);
            UNRECOVERED_JUMPTABLE_00 = pIVar22->klass->vtable[0x26].methodPtr;
            (*UNRECOVERED_JUMPTABLE_00)
                      (uVar32,pIVar22,pIVar22->klass->vtable[0x26].method,extraout_RDX_03,
                       UNRECOVERED_JUMPTABLE_00);
            return;
          }
        }
        goto label_043868c4;
      }
    }
    goto label_043868c9;
  }
label_043868ce:
  lVar8 = il2cpp_runtime_helper_0231b270();
  pMVar25 = (MethodInfo_362B8B0 *)0x0;
  fVar33 = (float)il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae23d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    fVar33 = (float)il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Item);
    g_data_057ae23d = '\x01';
  }
  if (*(System_Collections_Generic_List_Color__o **)(lVar8 + 0xc0) !=
      (System_Collections_Generic_List_Color__o *)0x0) {
    pMVar25 = (MethodInfo_362B8B0 *)(ulong)*(uint *)(lVar8 + 200);
    UVar36 = System_Collections_Generic_List_Color___get_Item
                       (*(System_Collections_Generic_List_Color__o **)(lVar8 + 0xc0),*(uint *)(lVar8 + 200),
                        MethodInfo_Color_get_Item);
    fVar33 = UVar36.fields.r;
    style = (MethodInfo_2517960 **)0x0;
    if (*(long *)(lVar8 + 0xc0) != 0) {
      *(int *)(lVar8 + 200) = (*(int *)(lVar8 + 200) + 1) % *(int *)(*(long *)(lVar8 + 0xc0) + 0x18);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90(fVar33);
  __this_04 = pMVar25;
  if (g_data_057ae23b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Reverse_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Take_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057ae23b = '\x01';
  }
  if (pMVar25 != (MethodInfo_362B8B0 *)0x0) {
    iVar29 = *(int *)&pMVar25->name / 2;
    pSVar24 = System_Linq_Enumerable__Take_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pMVar25,iVar29,MethodInfo_IEnumerable_1_System_String_Take_String);
    collection = System_Linq_Enumerable__ToList_object_(pSVar24,MethodInfo_List_1_System_String_ToList_String);
    pSVar24 = System_Linq_Enumerable__Skip_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pMVar25,iVar29,MethodInfo_IEnumerable_1_System_String_Skip_String);
    style = &MethodInfo_IEnumerable_1_System_String_Reverse_String;
    pSVar24 = System_Linq_Enumerable__Reverse_object_(pSVar24,MethodInfo_IEnumerable_1_System_String_Reverse_String);
    collection_00 = System_Linq_Enumerable__ToList_object_(pSVar24,MethodInfo_List_1_System_String_ToList_String);
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    __this_04 = MethodInfo_List_1_System_String;
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___AddRange
                (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
      System_Collections_Generic_List_object___AddRange
                (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection_00,MethodInfo_Void_AddRange);
      System_String__Join_3af7e00
                ("\n",(System_Collections_Generic_IEnumerable_string__o *)__this_01,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae23c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    g_data_057ae23c = '\x01';
  }
  pMVar25 = (MethodInfo_362B8B0 *)
            UI_ElementFactory__CreateWhiteLabel
                      ((UnityEngine_Transform_o *)__this_04,(UI_ElementStyle_o *)style,title,0,4,in_R9);
  if ((pMVar25 != (MethodInfo_362B8B0 *)0x0) &&
     (__this_04 = pMVar25,
     pUVar16 = (UnityEngine_UI_Text_o *)
               UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar25,MethodInfo_Text_GetComponent_Text),
     pUVar16 != (UnityEngine_UI_Text_o *)0x0)) {
    UnityEngine_UI_Text__set_fontSize(pUVar16,0x12,(MethodInfo *)0x0);
    UnityEngine_UI_Text__set_alignment(pUVar16,value_01,(MethodInfo *)0x0);
    pUVar11 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar25,MethodInfo_RectTransform_GetComponent_RectTransform);
    __this_04 = pMVar25;
    if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_sizeDelta(pUVar11,(UnityEngine_Vector2_o)0x43b40000,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  fVar33 = *(float *)&__this_04[1].field8_0x40;
  bVar5 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
  if (((char)bVar5 == '\0') &&
     (bVar5 = UnityEngine_Input__GetKey(0x20,(MethodInfo *)0x0), (char)bVar5 == '\0')) {
    bVar5 = UnityEngine_Input__GetMouseButton(1,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      fVar33 = -(fVar33 * *(float *)((long)&__this_04[1].field8_0x40 + 4));
    }
  }
  else {
    fVar33 = fVar33 * *(float *)((long)&__this_04[1].field8_0x40 + 4);
  }
  plVar30 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_04[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar37 = UnityEngine_Transform__get_localPosition
                     (*(UnityEngine_Transform_o **)&__this_04[1].token,(MethodInfo *)0x0);
  fVar34 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  plVar30 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_04[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  fStack_158 = UVar37.fields.x;
  fStack_154 = UVar37.fields.y;
  UVar37.fields.y = fVar33 * fVar34 + fStack_154;
  UVar37.fields.x = fStack_158;
  uVar32 = 0;
  UnityEngine_Transform__set_localPosition
            (*(UnityEngine_Transform_o **)&__this_04[1].token,UVar37,(MethodInfo *)0x0);
  plVar30 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_04[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar37 = UnityEngine_Transform__get_localPosition
                     (*(UnityEngine_Transform_o **)&__this_04[1].token,(MethodInfo *)0x0);
  plVar30 = *(long **)&__this_04[1].slot;
  if ((Il2CppClass *)plVar30 == (Il2CppClass *)0x0) goto label_04386e57;
  fVar33 = (float)(*((((Il2CppClass *)plVar30)->_1).image)->vtable[0x22].methodPtr)
                            (UVar37.fields.y,CONCAT44(uVar32,UVar37.fields.z));
  pUVar10 = *(UnityEngine_Transform_o **)&__this_04[1].token;
  if (fVar33 <= UVar37.fields.y) {
    plVar30 = *(long **)&__this_04[1].slot;
    if (((Il2CppClass *)plVar30 == (Il2CppClass *)0x0) ||
       (uVar35 = (*((((Il2CppClass *)plVar30)->_1).image)->vtable[0x22].methodPtr)(),
       pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_04386e57;
    uVar35 = uVar35 ^ 0x80000000;
    uVar32 = 0;
    fVar33 = 0.0;
label_04386d76:
    value_02.fields.y = (float)uVar35;
    value_02.fields.x = (float)uVar32;
    value_02.fields.z = fVar33;
    UnityEngine_Transform__set_localPosition(pUVar10,value_02,(MethodInfo *)0x0);
  }
  else {
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
    UVar37 = UnityEngine_Transform__get_localPosition(pUVar10,(MethodInfo *)0x0);
    plVar30 = *(long **)&__this_04[1].slot;
    if ((Il2CppClass *)plVar30 == (Il2CppClass *)0x0) goto label_04386e57;
    fVar33 = (float)(*((((Il2CppClass *)plVar30)->_1).image)->vtable[0x22].methodPtr)();
    if (UVar37.fields.y <= -fVar33) {
      pUVar10 = *(UnityEngine_Transform_o **)&__this_04[1].token;
      if (g_data_057a65d5 == '\0') {
        plVar30 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
      uVar20 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar32 = (undefined4)uVar20;
      uVar35 = (uint)((ulong)uVar20 >> 0x20);
      fVar33 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      goto label_04386d76;
    }
  }
  fVar33 = *(float *)((long)&__this_04[2].virtualMethodPointer + 4);
  if (0.0 < fVar33) {
    fVar34 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar33 = fVar33 - fVar34;
    *(float *)((long)&__this_04[2].virtualMethodPointer + 4) = fVar33;
    if (fVar33 <= 0.0) {
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_02 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      plVar30 = (long *)__this_02;
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_02->_1).name = 0;
      if (__this_02 != (Il2CppClass *)0x0) {
        (__this_02->_1).byval_arg.data = __this_04;
        il2cpp_runtime_helper_022b4080(&(__this_02->_1).byval_arg,__this_04);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this_04,(System_Collections_IEnumerator_o *)__this_02,
                   (MethodInfo *)0x0);
        return;
      }
label_04386e57:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_03 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      uVar32 = 0;
      pIVar22 = __this_03;
      System_Object___ctor(__this_03,(MethodInfo *)0x0);
      *(undefined4 *)&__this_03[1].klass = 0;
      if (__this_03 != (Il2CppObject *)0x0) {
        __this_03[2].klass = (Il2CppClass *)plVar30;
        il2cpp_runtime_helper_022b4080(__this_03 + 2,plVar30);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(pIVar22,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar22[1].klass = uVar32;
      return;
    }
  }
  return;
}


// UI.CreditsMenu$$ArrangeColumn
// il2cpp: System_String_o* UI_CreditsMenu__ArrangeColumn (UI_CreditsMenu_o* __this, System_Collections_Generic_List_string__o* column, const MethodInfo* method);
// 0x4386960

System_String_o *
UI_CreditsMenu__ArrangeColumn
          (UI_CreditsMenu_o *__this,System_Collections_Generic_List_string__o *column,MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  System_Collections_Generic_List_TSource__o *collection;
  System_Collections_Generic_List_TSource__o *collection_00;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar4;
  Il2CppClass *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  System_String_o *extraout_RAX_01;
  Il2CppObject *__this_04;
  System_String_o *__this_05;
  System_String_o *extraout_RAX_02;
  MethodInfo_2517960 **in_RCX;
  System_String_o *title;
  UnityEngine_Transform_o *pUVar5;
  int count;
  int32_t iVar6;
  Il2CppClass *__this_06;
  long *plVar7;
  int32_t in_R8D;
  MethodInfo *in_R9;
  float fVar8;
  float fVar9;
  float extraout_XMM0_Da;
  uint uVar10;
  undefined4 uVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o value;
  float fStack_78;
  float fStack_74;
  
  __this_06 = (Il2CppClass *)column;
  if (g_data_057ae23b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Reverse_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Take_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057ae23b = '\x01';
  }
  if (column != (System_Collections_Generic_List_string__o *)0x0) {
    count = (column->fields)._size / 2;
    pSVar3 = System_Linq_Enumerable__Take_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)column,count,MethodInfo_IEnumerable_1_System_String_Take_String);
    collection = System_Linq_Enumerable__ToList_object_(pSVar3,MethodInfo_List_1_System_String_ToList_String);
    pSVar3 = System_Linq_Enumerable__Skip_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)column,count,MethodInfo_IEnumerable_1_System_String_Skip_String);
    in_RCX = &MethodInfo_IEnumerable_1_System_String_Reverse_String;
    pSVar3 = System_Linq_Enumerable__Reverse_object_(pSVar3,MethodInfo_IEnumerable_1_System_String_Reverse_String);
    collection_00 = System_Linq_Enumerable__ToList_object_(pSVar3,MethodInfo_List_1_System_String_ToList_String);
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    __this_06 = MethodInfo_List_1_System_String;
    System_Collections_Generic_List_object____ctor(__this_00,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___AddRange
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
      System_Collections_Generic_List_object___AddRange
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection_00,MethodInfo_Void_AddRange);
      pSVar4 = System_String__Join_3af7e00
                         ("\n",(System_Collections_Generic_IEnumerable_string__o *)__this_00,
                          (MethodInfo *)0x0);
      return pSVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae23c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    g_data_057ae23c = '\x01';
  }
  __this_01 = (Il2CppClass *)
              UI_ElementFactory__CreateWhiteLabel
                        ((UnityEngine_Transform_o *)__this_06,(UI_ElementStyle_o *)in_RCX,title,0,4,in_R9);
  if ((__this_01 != (Il2CppClass *)0x0) &&
     (__this_06 = __this_01,
     __this_02 = (UnityEngine_UI_Text_o *)
                 UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)__this_01,MethodInfo_Text_GetComponent_Text),
     __this_02 != (UnityEngine_UI_Text_o *)0x0)) {
    UnityEngine_UI_Text__set_fontSize(__this_02,0x12,(MethodInfo *)0x0);
    UnityEngine_UI_Text__set_alignment(__this_02,in_R8D,(MethodInfo *)0x0);
    __this_03 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
    __this_06 = __this_01;
    if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_sizeDelta(__this_03,(UnityEngine_Vector2_o)0x43b40000,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  fVar8 = *(float *)&(__this_06->_1).methods;
  bVar2 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') &&
     (bVar2 = UnityEngine_Input__GetKey(0x20,(MethodInfo *)0x0), (char)bVar2 == '\0')) {
    bVar2 = UnityEngine_Input__GetMouseButton(1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      fVar8 = -(fVar8 * *(float *)((long)&(__this_06->_1).methods + 4));
    }
  }
  else {
    fVar8 = fVar8 * *(float *)((long)&(__this_06->_1).methods + 4);
  }
  pUVar5 = (UnityEngine_Transform_o *)(__this_06->_1).nestedTypes;
  plVar7 = (long *)0x0;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar12 = UnityEngine_Transform__get_localPosition(pUVar5,(MethodInfo *)0x0);
  fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Transform_o *)(__this_06->_1).nestedTypes;
  plVar7 = (long *)0x0;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  fStack_78 = UVar12.fields.x;
  fStack_74 = UVar12.fields.y;
  UVar12.fields.y = fVar8 * fVar9 + fStack_74;
  UVar12.fields.x = fStack_78;
  UnityEngine_Transform__set_localPosition(pUVar5,UVar12,(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Transform_o *)(__this_06->_1).nestedTypes;
  plVar7 = (long *)0x0;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar12 = UnityEngine_Transform__get_localPosition(pUVar5,(MethodInfo *)0x0);
  plVar7 = (long *)(__this_06->_1).implementedInterfaces;
  if ((Il2CppObject *)plVar7 == (Il2CppObject *)0x0) goto label_04386e57;
  fVar8 = (float)(*((Il2CppObject *)plVar7)->klass->vtable[0x22].methodPtr)(UVar12.fields.y,UVar12.fields.z);
  pUVar5 = (UnityEngine_Transform_o *)(__this_06->_1).nestedTypes;
  if (fVar8 <= UVar12.fields.y) {
    plVar7 = (long *)(__this_06->_1).implementedInterfaces;
    if (((Il2CppObject *)plVar7 == (Il2CppObject *)0x0) ||
       (uVar10 = (*((Il2CppObject *)plVar7)->klass->vtable[0x22].methodPtr)(),
       pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_04386e57;
    uVar10 = uVar10 ^ 0x80000000;
    uVar11 = 0;
    fVar8 = 0.0;
label_04386d76:
    value.fields.y = (float)uVar10;
    value.fields.x = (float)uVar11;
    value.fields.z = fVar8;
    UnityEngine_Transform__set_localPosition(pUVar5,value,(MethodInfo *)0x0);
    pSVar4 = extraout_RAX_00;
  }
  else {
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
    UVar12 = UnityEngine_Transform__get_localPosition(pUVar5,(MethodInfo *)0x0);
    plVar7 = (long *)(__this_06->_1).implementedInterfaces;
    if ((Il2CppObject *)plVar7 == (Il2CppObject *)0x0) goto label_04386e57;
    pSVar4 = (System_String_o *)(*((Il2CppObject *)plVar7)->klass->vtable[0x22].methodPtr)();
    if (UVar12.fields.y <= -extraout_XMM0_Da) {
      pUVar5 = (UnityEngine_Transform_o *)(__this_06->_1).nestedTypes;
      if (g_data_057a65d5 == '\0') {
        plVar7 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar11 = (undefined4)uVar1;
      uVar10 = (uint)((ulong)uVar1 >> 0x20);
      fVar8 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      goto label_04386d76;
    }
  }
  fVar8 = *(float *)((long)&__this_06->static_fields + 4);
  if (0.0 < fVar8) {
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar8 = fVar8 - fVar9;
    *(float *)((long)&__this_06->static_fields + 4) = fVar8;
    pSVar4 = extraout_RAX_01;
    if (fVar8 <= 0.0) {
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_04 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      plVar7 = (long *)__this_04;
      System_Object___ctor(__this_04,(MethodInfo *)0x0);
      *(undefined4 *)&__this_04[1].klass = 0;
      if (__this_04 != (Il2CppObject *)0x0) {
        __this_04[2].klass = __this_06;
        il2cpp_runtime_helper_022b4080(__this_04 + 2,__this_06);
        pSVar4 = (System_String_o *)
                 UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           ((UnityEngine_MonoBehaviour_o *)__this_06,
                            (System_Collections_IEnumerator_o *)__this_04,(MethodInfo *)0x0);
        return pSVar4;
      }
label_04386e57:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_05 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      iVar6 = 0;
      pSVar4 = __this_05;
      System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
      (__this_05->fields)._stringLength = 0;
      if (__this_05 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
        (pSVar4->fields)._stringLength = iVar6;
        return extraout_RAX_02;
      }
      __this_05[1].monitor = plVar7;
      il2cpp_runtime_helper_022b4080(&__this_05[1].monitor,plVar7);
      return __this_05;
    }
  }
  return pSVar4;
}


// UI.CreditsMenu$$CreateColumnText
// il2cpp: void UI_CreditsMenu__CreateColumnText (UI_CreditsMenu_o* __this, UnityEngine_Transform_o* parent, System_String_o* content, UI_ElementStyle_o* style, int32_t alignment, const MethodInfo* method);
// 0x4386ad0

void UI_CreditsMenu__CreateColumnText
               (UI_CreditsMenu_o *__this,UnityEngine_Transform_o *parent,System_String_o *content,
               UI_ElementStyle_o *style,int32_t alignment,MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  UnityEngine_MonoBehaviour_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Il2CppClass *__this_03;
  Il2CppObject *__this_04;
  UnityEngine_MonoBehaviour_c *__this_05;
  long *plVar3;
  Il2CppObject *__this_06;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o value;
  float local_50;
  float fStack_4c;
  
  if (g_data_057ae23c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    g_data_057ae23c = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)
              UI_ElementFactory__CreateWhiteLabel(parent,style,content,0,4,method);
  if ((__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) &&
     (parent = (UnityEngine_Transform_o *)__this_00,
     __this_01 = (UnityEngine_UI_Text_o *)
                 UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)__this_00,MethodInfo_Text_GetComponent_Text),
     __this_01 != (UnityEngine_UI_Text_o *)0x0)) {
    UnityEngine_UI_Text__set_fontSize(__this_01,0x12,(MethodInfo *)0x0);
    UnityEngine_UI_Text__set_alignment(__this_01,alignment,(MethodInfo *)0x0);
    __this_02 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
    parent = (UnityEngine_Transform_o *)__this_00;
    if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_sizeDelta(__this_02,(UnityEngine_Vector2_o)0x43b40000,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  fVar4 = *(float *)&(((UnityEngine_MonoBehaviour_o *)((long)parent + 0x80))->fields).
                     m_CancellationTokenSource;
  bVar2 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') &&
     (bVar2 = UnityEngine_Input__GetKey(0x20,(MethodInfo *)0x0), (char)bVar2 == '\0')) {
    bVar2 = UnityEngine_Input__GetMouseButton(1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      fVar4 = -(fVar4 * *(float *)((long)&(((UnityEngine_MonoBehaviour_o *)((long)parent + 0x80))->fields).
                                          m_CancellationTokenSource + 4));
    }
  }
  else {
    fVar4 = fVar4 * *(float *)((long)&(((UnityEngine_MonoBehaviour_o *)((long)parent + 0x80))->fields).
                                      m_CancellationTokenSource + 4);
  }
  plVar3 = (long *)0x0;
  if (((UnityEngine_MonoBehaviour_o *)((long)parent + 0xa0))->klass == (UnityEngine_MonoBehaviour_c *)0x0)
  goto label_04386e57;
  UVar8 = UnityEngine_Transform__get_localPosition
                    ((UnityEngine_Transform_o *)((UnityEngine_MonoBehaviour_o *)((long)parent + 0xa0))->klass,
                     (MethodInfo *)0x0);
  fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  plVar3 = (long *)0x0;
  if (((UnityEngine_MonoBehaviour_o *)((long)parent + 0xa0))->klass == (UnityEngine_MonoBehaviour_c *)0x0)
  goto label_04386e57;
  local_50 = UVar8.fields.x;
  fStack_4c = UVar8.fields.y;
  UVar8.fields.y = fVar4 * fVar5 + fStack_4c;
  UVar8.fields.x = local_50;
  UnityEngine_Transform__set_localPosition
            ((UnityEngine_Transform_o *)((UnityEngine_MonoBehaviour_o *)((long)parent + 0xa0))->klass,UVar8,
             (MethodInfo *)0x0);
  plVar3 = (long *)0x0;
  if (((UnityEngine_MonoBehaviour_o *)((long)parent + 0xa0))->klass == (UnityEngine_MonoBehaviour_c *)0x0)
  goto label_04386e57;
  UVar8 = UnityEngine_Transform__get_localPosition
                    ((UnityEngine_Transform_o *)((UnityEngine_MonoBehaviour_o *)((long)parent + 0xa0))->klass,
                     (MethodInfo *)0x0);
  plVar3 = ((UnityEngine_MonoBehaviour_o *)((long)parent + 0xa0))->monitor;
  if ((Il2CppClass *)plVar3 == (Il2CppClass *)0x0) goto label_04386e57;
  fVar4 = (float)(*((((Il2CppClass *)plVar3)->_1).image)->vtable[0x22].methodPtr)
                           (UVar8.fields.y,UVar8.fields.z);
  __this_05 = ((UnityEngine_MonoBehaviour_o *)((long)parent + 0xa0))->klass;
  if (fVar4 <= UVar8.fields.y) {
    plVar3 = ((UnityEngine_MonoBehaviour_o *)((long)parent + 0xa0))->monitor;
    if (((Il2CppClass *)plVar3 == (Il2CppClass *)0x0) ||
       (uVar6 = (*((((Il2CppClass *)plVar3)->_1).image)->vtable[0x22].methodPtr)(),
       __this_05 == (UnityEngine_MonoBehaviour_c *)0x0)) goto label_04386e57;
    uVar6 = uVar6 ^ 0x80000000;
    uVar7 = 0;
    fVar4 = 0.0;
label_04386d76:
    value.fields.y = (float)uVar6;
    value.fields.x = (float)uVar7;
    value.fields.z = fVar4;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)__this_05,value,(MethodInfo *)0x0);
  }
  else {
    if (__this_05 == (UnityEngine_MonoBehaviour_c *)0x0) goto label_04386e57;
    UVar8 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)__this_05,(MethodInfo *)0x0);
    plVar3 = ((UnityEngine_MonoBehaviour_o *)((long)parent + 0xa0))->monitor;
    if ((Il2CppClass *)plVar3 == (Il2CppClass *)0x0) goto label_04386e57;
    fVar4 = (float)(*((((Il2CppClass *)plVar3)->_1).image)->vtable[0x22].methodPtr)();
    if (UVar8.fields.y <= -fVar4) {
      __this_05 = ((UnityEngine_MonoBehaviour_o *)((long)parent + 0xa0))->klass;
      if (g_data_057a65d5 == '\0') {
        plVar3 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      if (__this_05 == (UnityEngine_MonoBehaviour_c *)0x0) goto label_04386e57;
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar7 = (undefined4)uVar1;
      uVar6 = (uint)((ulong)uVar1 >> 0x20);
      fVar4 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      goto label_04386d76;
    }
  }
  fVar4 = *(float *)((long)&(((UnityEngine_MonoBehaviour_o *)((long)parent + 0xa0))->fields).
                            m_CancellationTokenSource + 4);
  if (0.0 < fVar4) {
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 - fVar5;
    *(float *)((long)&(((UnityEngine_MonoBehaviour_o *)((long)parent + 0xa0))->fields).
                      m_CancellationTokenSource + 4) = fVar4;
    if (fVar4 <= 0.0) {
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_03 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      plVar3 = (long *)__this_03;
      System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_03->_1).name = 0;
      if (__this_03 != (Il2CppClass *)0x0) {
        (__this_03->_1).byval_arg.data = parent;
        il2cpp_runtime_helper_022b4080(&(__this_03->_1).byval_arg,parent);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)parent,(System_Collections_IEnumerator_o *)__this_03,
                   (MethodInfo *)0x0);
        return;
      }
label_04386e57:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_04 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      uVar7 = 0;
      __this_06 = __this_04;
      System_Object___ctor(__this_04,(MethodInfo *)0x0);
      *(undefined4 *)&__this_04[1].klass = 0;
      if (__this_04 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor(__this_06,(MethodInfo *)0x0);
        *(undefined4 *)&__this_06[1].klass = uVar7;
        return;
      }
      __this_04[2].klass = (Il2CppClass *)plVar3;
      il2cpp_runtime_helper_022b4080(__this_04 + 2,plVar3);
      return;
    }
  }
  return;
}


// UI.CreditsMenu$$GetNextCategoryColor
// il2cpp: UnityEngine_Color_o UI_CreditsMenu__GetNextCategoryColor (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x43868e0

UnityEngine_Color_o UI_CreditsMenu__GetNextCategoryColor(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_Collections_Generic_List_Color__o *pSVar2;
  bool_conflict bVar3;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  System_Collections_Generic_List_TSource__o *collection;
  System_Collections_Generic_List_TSource__o *collection_00;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  Il2CppClass *__this_04;
  Il2CppObject *__this_05;
  MethodInfo_2517960 **in_RCX;
  System_String_o *title;
  UnityEngine_Transform_o *__this_06;
  int count;
  MethodInfo *__this_07;
  long *plVar5;
  Il2CppObject *__this_08;
  int32_t in_R8D;
  MethodInfo *in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db_02;
  ulong in_XMM1_Qa;
  UnityEngine_Color_Fields UVar10;
  UnityEngine_Color_o UVar11;
  UnityEngine_Color_o UVar12;
  UnityEngine_Color_o UVar13;
  UnityEngine_Color_o UVar14;
  UnityEngine_Color_o UVar15;
  UnityEngine_Color_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o value;
  undefined8 uStack_a0;
  float fStack_80;
  float fStack_7c;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  uStack_a0 = in_XMM1_Qa;
  if (g_data_057ae23d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color_get_Item);
    g_data_057ae23d = '\x01';
    uStack_a0 = in_XMM1_Qa;
  }
  pSVar2 = (__this->fields)._categoryColors;
  if (pSVar2 != (System_Collections_Generic_List_Color__o *)0x0) {
    uVar9 = (__this->fields)._currentColorIndex;
    method = (MethodInfo *)(ulong)uVar9;
    UVar10 = (UnityEngine_Color_Fields)
             System_Collections_Generic_List_Color___get_Item(pSVar2,uVar9,MethodInfo_Color_get_Item);
    uStack_a0 = UVar10._8_8_;
    pSVar2 = (__this->fields)._categoryColors;
    in_RCX = (MethodInfo_2517960 **)0x0;
    if (pSVar2 != (System_Collections_Generic_List_Color__o *)0x0) {
      (__this->fields)._currentColorIndex = ((__this->fields)._currentColorIndex + 1) % (pSVar2->fields)._size
      ;
      return (UnityEngine_Color_o)UVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_07 = method;
  if (g_data_057ae23b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Reverse_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Take_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057ae23b = '\x01';
  }
  if (method != (MethodInfo *)0x0) {
    count = *(int *)&method->name / 2;
    pSVar4 = System_Linq_Enumerable__Take_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)method,count,MethodInfo_IEnumerable_1_System_String_Take_String);
    collection = System_Linq_Enumerable__ToList_object_(pSVar4,MethodInfo_List_1_System_String_ToList_String);
    pSVar4 = System_Linq_Enumerable__Skip_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)method,count,MethodInfo_IEnumerable_1_System_String_Skip_String);
    in_RCX = &MethodInfo_IEnumerable_1_System_String_Reverse_String;
    pSVar4 = System_Linq_Enumerable__Reverse_object_(pSVar4,MethodInfo_IEnumerable_1_System_String_Reverse_String);
    collection_00 = System_Linq_Enumerable__ToList_object_(pSVar4,MethodInfo_List_1_System_String_ToList_String);
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    __this_07 = MethodInfo_List_1_System_String;
    System_Collections_Generic_List_object____ctor(__this_00,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___AddRange
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
      System_Collections_Generic_List_object___AddRange
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection_00,MethodInfo_Void_AddRange);
      System_String__Join_3af7e00
                ("\n",(System_Collections_Generic_IEnumerable_string__o *)__this_00,(MethodInfo *)0x0)
      ;
      UVar11.fields.g = (float)extraout_XMM0_Db;
      UVar11.fields.r = (float)extraout_XMM0_Da;
      UVar11.fields.b = (float)(int)uStack_a0;
      UVar11.fields.a = (float)(int)(uStack_a0 >> 0x20);
      return (UnityEngine_Color_o)UVar11.fields;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae23c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    g_data_057ae23c = '\x01';
  }
  __this_01 = (MethodInfo *)
              UI_ElementFactory__CreateWhiteLabel
                        ((UnityEngine_Transform_o *)__this_07,(UI_ElementStyle_o *)in_RCX,title,0,4,in_R9);
  if ((__this_01 != (MethodInfo *)0x0) &&
     (__this_07 = __this_01,
     __this_02 = (UnityEngine_UI_Text_o *)
                 UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)__this_01,MethodInfo_Text_GetComponent_Text),
     __this_02 != (UnityEngine_UI_Text_o *)0x0)) {
    UnityEngine_UI_Text__set_fontSize(__this_02,0x12,(MethodInfo *)0x0);
    UnityEngine_UI_Text__set_alignment(__this_02,in_R8D,(MethodInfo *)0x0);
    __this_03 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
    __this_07 = __this_01;
    if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_sizeDelta(__this_03,(UnityEngine_Vector2_o)0x43b40000,(MethodInfo *)0x0);
      UVar12.fields.g = (float)extraout_XMM0_Db_00;
      UVar12.fields.r = (float)extraout_XMM0_Da_00;
      UVar12.fields.b = (float)(int)uStack_a0;
      UVar12.fields.a = (float)(int)(uStack_a0 >> 0x20);
      return (UnityEngine_Color_o)UVar12.fields;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  fVar6 = *(float *)&__this_07[1].field8_0x40;
  bVar3 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
  if (((char)bVar3 == '\0') &&
     (bVar3 = UnityEngine_Input__GetKey(0x20,(MethodInfo *)0x0), (char)bVar3 == '\0')) {
    bVar3 = UnityEngine_Input__GetMouseButton(1,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      fVar6 = -(fVar6 * *(float *)((long)&__this_07[1].field8_0x40 + 4));
    }
  }
  else {
    fVar6 = fVar6 * *(float *)((long)&__this_07[1].field8_0x40 + 4);
  }
  plVar5 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_07[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar17 = UnityEngine_Transform__get_localPosition
                     (*(UnityEngine_Transform_o **)&__this_07[1].token,(MethodInfo *)0x0);
  uStack_a0 = CONCAT44((int)(uStack_a0 >> 0x20),UVar17.fields.z);
  fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  plVar5 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_07[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  fStack_80 = UVar17.fields.x;
  fStack_7c = UVar17.fields.y;
  UVar17.fields.y = fVar6 * fVar7 + fStack_7c;
  UVar17.fields.x = fStack_80;
  uStack_a0 = (ulong)(uint)UVar17.fields.z;
  UnityEngine_Transform__set_localPosition
            (*(UnityEngine_Transform_o **)&__this_07[1].token,UVar17,(MethodInfo *)0x0);
  plVar5 = (long *)0x0;
  if (*(UnityEngine_Transform_o **)&__this_07[1].token == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
  UVar17 = UnityEngine_Transform__get_localPosition
                     (*(UnityEngine_Transform_o **)&__this_07[1].token,(MethodInfo *)0x0);
  uStack_a0 = CONCAT44((int)(uStack_a0 >> 0x20),UVar17.fields.z);
  fVar6 = UVar17.fields.y;
  plVar5 = *(long **)&__this_07[1].slot;
  if ((Il2CppClass *)plVar5 == (Il2CppClass *)0x0) goto label_04386e57;
  uStack_a0 = CONCAT44(fVar6,fVar6);
  fVar7 = (float)(*((((Il2CppClass *)plVar5)->_1).image)->vtable[0x22].methodPtr)();
  __this_06 = *(UnityEngine_Transform_o **)&__this_07[1].token;
  if (fVar7 <= fVar6) {
    plVar5 = *(long **)&__this_07[1].slot;
    if (((Il2CppClass *)plVar5 == (Il2CppClass *)0x0) ||
       (uVar9 = (*((((Il2CppClass *)plVar5)->_1).image)->vtable[0x22].methodPtr)(),
       __this_06 == (UnityEngine_Transform_o *)0x0)) goto label_04386e57;
    uVar9 = uVar9 ^ 0x80000000;
    uVar8 = 0;
    fVar6 = 0.0;
label_04386d76:
    value.fields.y = (float)uVar9;
    value.fields.x = (float)uVar8;
    value.fields.z = fVar6;
    UnityEngine_Transform__set_localPosition(__this_06,value,(MethodInfo *)0x0);
  }
  else {
    if (__this_06 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
    UVar17 = UnityEngine_Transform__get_localPosition(__this_06,(MethodInfo *)0x0);
    uStack_a0 = CONCAT44((int)(uStack_a0 >> 0x20),UVar17.fields.z);
    plVar5 = *(long **)&__this_07[1].slot;
    if ((Il2CppClass *)plVar5 == (Il2CppClass *)0x0) goto label_04386e57;
    fVar6 = (float)(*((((Il2CppClass *)plVar5)->_1).image)->vtable[0x22].methodPtr)();
    if (UVar17.fields.y <= -fVar6) {
      __this_06 = *(UnityEngine_Transform_o **)&__this_07[1].token;
      if (g_data_057a65d5 == '\0') {
        plVar5 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      if (__this_06 == (UnityEngine_Transform_o *)0x0) goto label_04386e57;
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar8 = (undefined4)uVar1;
      uVar9 = (uint)((ulong)uVar1 >> 0x20);
      fVar6 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      goto label_04386d76;
    }
  }
  fVar6 = *(float *)((long)&__this_07[2].virtualMethodPointer + 4);
  uStack_a0 = 0;
  if (0.0 < fVar6) {
    fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar7 = fVar6 - fVar7;
    uStack_a0 = (ulong)(uint)fVar7;
    *(float *)((long)&__this_07[2].virtualMethodPointer + 4) = fVar7;
    fVar6 = 0.0;
    if (fVar7 <= 0.0) {
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_04 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      plVar5 = (long *)__this_04;
      System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_04->_1).name = 0;
      if (__this_04 != (Il2CppClass *)0x0) {
        (__this_04->_1).byval_arg.data = __this_07;
        il2cpp_runtime_helper_022b4080(&(__this_04->_1).byval_arg,__this_07);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this_07,(System_Collections_IEnumerator_o *)__this_04,
                   (MethodInfo *)0x0);
        UVar14.fields.g = (float)extraout_XMM0_Db_01;
        UVar14.fields.r = (float)extraout_XMM0_Da_01;
        UVar14.fields.b = (float)(int)uStack_a0;
        UVar14.fields.a = (float)(int)(uStack_a0 >> 0x20);
        return (UnityEngine_Color_o)UVar14.fields;
      }
label_04386e57:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_05 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      uVar8 = 0;
      __this_08 = __this_05;
      System_Object___ctor(__this_05,(MethodInfo *)0x0);
      *(undefined4 *)&__this_05[1].klass = 0;
      if (__this_05 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor(__this_08,(MethodInfo *)0x0);
        *(undefined4 *)&__this_08[1].klass = uVar8;
        UVar16.fields.g = (float)extraout_XMM0_Db_02;
        UVar16.fields.r = (float)extraout_XMM0_Da_02;
        UVar16.fields.b = (float)(int)uStack_a0;
        UVar16.fields.a = (float)(int)(uStack_a0 >> 0x20);
        return (UnityEngine_Color_o)UVar16.fields;
      }
      __this_05[2].klass = (Il2CppClass *)plVar5;
      uVar1 = il2cpp_runtime_helper_022b4080(__this_05 + 2,plVar5);
      UVar15.fields.b = (float)(int)uStack_a0;
      UVar15.fields.a = (float)(int)(uStack_a0 >> 0x20);
      UVar15.fields.r = (float)(int)uVar1;
      UVar15.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
      return (UnityEngine_Color_o)UVar15.fields;
    }
  }
  UVar13.fields.g = 0.0;
  UVar13.fields.r = fVar6;
  UVar13.fields.b = (float)(int)uStack_a0;
  UVar13.fields.a = (float)(int)(uStack_a0 >> 0x20);
  return (UnityEngine_Color_o)UVar13.fields;
}


// UI.CreditsMenu$$Update
// il2cpp: void UI_CreditsMenu__Update (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x4386ba0

void UI_CreditsMenu__Update(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  bool_conflict bVar2;
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  UnityEngine_RectTransform_o *pUVar3;
  long *plVar4;
  Il2CppObject *__this_02;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined4 uVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o value;
  float fStack_28;
  float fStack_24;
  
  fVar5 = (__this->fields).scrollSpeed;
  bVar2 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') &&
     (bVar2 = UnityEngine_Input__GetKey(0x20,(MethodInfo *)0x0), (char)bVar2 == '\0')) {
    bVar2 = UnityEngine_Input__GetMouseButton(1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      fVar5 = -(fVar5 * (__this->fields).fastScrollMultiplier);
    }
  }
  else {
    fVar5 = fVar5 * (__this->fields).fastScrollMultiplier;
  }
  pUVar3 = (__this->fields)._contentTransform;
  plVar4 = (long *)0x0;
  if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_04386e57;
  UVar9 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
  fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar3 = (__this->fields)._contentTransform;
  plVar4 = (long *)0x0;
  if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_04386e57;
  fStack_28 = UVar9.fields.x;
  fStack_24 = UVar9.fields.y;
  UVar9.fields.y = fVar5 * fVar6 + fStack_24;
  UVar9.fields.x = fStack_28;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)pUVar3,UVar9,(MethodInfo *)0x0);
  pUVar3 = (__this->fields)._contentTransform;
  plVar4 = (long *)0x0;
  if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_04386e57;
  UVar9 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
  plVar4 = (long *)(__this->fields)._layoutGroup;
  if ((Il2CppClass *)plVar4 == (Il2CppClass *)0x0) goto label_04386e57;
  fVar5 = (float)(*((((Il2CppClass *)plVar4)->_1).image)->vtable[0x22].methodPtr)
                           (UVar9.fields.y,UVar9.fields.z);
  pUVar3 = (__this->fields)._contentTransform;
  if (fVar5 <= UVar9.fields.y) {
    plVar4 = (long *)(__this->fields)._layoutGroup;
    if (((Il2CppClass *)plVar4 == (Il2CppClass *)0x0) ||
       (uVar7 = (*((((Il2CppClass *)plVar4)->_1).image)->vtable[0x22].methodPtr)(),
       pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto label_04386e57;
    uVar7 = uVar7 ^ 0x80000000;
    uVar8 = 0;
    fVar5 = 0.0;
label_04386d76:
    value.fields.y = (float)uVar7;
    value.fields.x = (float)uVar8;
    value.fields.z = fVar5;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)pUVar3,value,(MethodInfo *)0x0);
  }
  else {
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_04386e57;
    UVar9 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
    plVar4 = (long *)(__this->fields)._layoutGroup;
    if ((Il2CppClass *)plVar4 == (Il2CppClass *)0x0) goto label_04386e57;
    fVar5 = (float)(*((((Il2CppClass *)plVar4)->_1).image)->vtable[0x22].methodPtr)();
    if (UVar9.fields.y <= -fVar5) {
      pUVar3 = (__this->fields)._contentTransform;
      if (g_data_057a65d5 == '\0') {
        plVar4 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_04386e57;
      uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar8 = (undefined4)uVar1;
      uVar7 = (uint)((ulong)uVar1 >> 0x20);
      fVar5 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      goto label_04386d76;
    }
  }
  fVar5 = (__this->fields)._tipTimer;
  if (0.0 < fVar5) {
    fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar5 = fVar5 - fVar6;
    (__this->fields)._tipTimer = fVar5;
    if (fVar5 <= 0.0) {
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      plVar4 = (long *)__this_00;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_00->_1).name = 0;
      if (__this_00 != (Il2CppClass *)0x0) {
        (__this_00->_1).byval_arg.data = __this;
        il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                   (MethodInfo *)0x0);
        return;
      }
label_04386e57:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae23e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
        g_data_057ae23e = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
      uVar8 = 0;
      __this_02 = __this_01;
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&__this_01[1].klass = 0;
      if (__this_01 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor(__this_02,(MethodInfo *)0x0);
        *(undefined4 *)&__this_02[1].klass = uVar8;
        return;
      }
      __this_01[2].klass = (Il2CppClass *)plVar4;
      il2cpp_runtime_helper_022b4080(__this_01 + 2,plVar4);
      return;
    }
  }
  return;
}


// UI.CreditsMenu$$FadeOutTip
// il2cpp: System_Collections_IEnumerator_o* UI_CreditsMenu__FadeOutTip (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x4386e60

System_Collections_IEnumerator_o * UI_CreditsMenu__FadeOutTip(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae23e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOutTip_d__21);
    g_data_057ae23e = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOutTip_d__21);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.CreditsMenu$$OnButtonClick
// il2cpp: void UI_CreditsMenu__OnButtonClick (UI_CreditsMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4386ef0

void UI_CreditsMenu__OnButtonClick(UI_CreditsMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ae23f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae23f = '\x01';
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
// 0x4386f40

void UI_CreditsMenu___ctor(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
  (__this->fields).scrollSpeed = 60.0;
  (__this->fields).fastScrollMultiplier = 5.0;
  (__this->fields)._tipDisplayTime = 5.0;
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
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


// UI.CreditsMenu$$<Setup>b__11_0
// il2cpp: void UI_CreditsMenu___Setup_b__11_0 (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x4386f70

void UI_CreditsMenu___Setup_b__11_0(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool_conflict bVar1;
  
  if (g_data_057ae240 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae240 = '\x01';
  }
  a = "Back";
  if (g_data_057ae23f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae23f = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  return;
}


