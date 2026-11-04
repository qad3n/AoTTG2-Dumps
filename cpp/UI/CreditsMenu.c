// Type: UI.CreditsMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CreditsMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CreditsMenu/CreditsMenu.cs
// --------------------------------

// UI.CreditsMenu.<>c$$.cctor
// il2cpp: void UI_CreditsMenu___c___cctor (const MethodInfo* method);
// 0x18221b0f0

void UI_CreditsMenu___c___cctor(MethodInfo *method)

{
  UI_CreditsMenu___c_o *__this;
  
  if (Il2CppMethodInitialized_1843470a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CreditsMenu_c);
    Il2CppMethodInitialized_1843470a6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CreditsMenu_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_CreditsMenu_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CreditsMenu_c->static_fields->__9,__this);
  return;
}


// UI.CreditsMenu.<>c$$.ctor
// il2cpp: void UI_CreditsMenu___c___ctor (UI_CreditsMenu___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CreditsMenu___c___ctor(UI_CreditsMenu___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreditsMenu.<>c$$<CreateTextElement>b__16_0
// il2cpp: int32_t UI_CreditsMenu___c___CreateTextElement_b__16_0 (UI_CreditsMenu___c_o* __this, System_String_o* l, const MethodInfo* method);
// 0x18221ae10

int32_t
UI_CreditsMenu___c___CreateTextElement_b__16_0(UI_CreditsMenu___c_o* __this, System_String_o* l, MethodInfo* method)

{
  if (s != (TMPro_KerningPair_o *)0x0) {
    return (s->fields).m_FirstGlyph;
  }
  ThrowNullReferenceException();
}


// UI.CreditsMenu.<FadeOutTip>d__21$$.ctor
// il2cpp: void UI_CreditsMenu__FadeOutTip_d__21___ctor (UI_CreditsMenu__FadeOutTip_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_CreditsMenu__FadeOutTip_d__21___ctor(UI_CreditsMenu__FadeOutTip_d__21_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CreditsMenu.<FadeOutTip>d__21$$System.IDisposable.Dispose
// il2cpp: void UI_CreditsMenu__FadeOutTip_d__21__System_IDisposable_Dispose (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_CreditsMenu__FadeOutTip_d__21__System_IDisposable_Dispose(UI_CreditsMenu__FadeOutTip_d__21_o* __this, MethodInfo* method)

{
  return;
}


// UI.CreditsMenu.<FadeOutTip>d__21$$MoveNext
// il2cpp: bool UI_CreditsMenu__FadeOutTip_d__21__MoveNext (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x18221a9f0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18221aba6: xor r8d, r8d
// asm:   0x18221aba9: xor edx, edx
// asm:   0x18221abab: mov rcx, rax
// asm:   0x18221abae: call 0x182f1a770  ; UnityEngine_GameObject__SetActive()
// asm:   0x18221abb3: xor al, al
// asm:   0x18221abb5: jmp 0x18221ab69

bool UI_CreditsMenu__FadeOutTip_d__21__MoveNext(UI_CreditsMenu__FadeOutTip_d__21_o *__this,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  UI_CreditsMenu_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_UI_Text_o *pUVar7;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar8;
  UnityEngine_GameObject_o *__this_00;
  float fVar9;
  UnityEngine_Color_o local_48 [4];
  
  iVar4 = (__this->fields).__1__state;
  if (iVar4 == 0) {
    (__this->fields)._fadeTime_5__2 = 1.0;
    (__this->fields)._elapsedTime_5__3 = 0.0;
  }
  else if (iVar4 != 1) {
    return false;
  }
  fVar2 = (__this->fields)._fadeTime_5__2;
  pfVar1 = &(__this->fields)._elapsedTime_5__3;
  pUVar5 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
    if (((pUVar5 != (UI_CreditsMenu_o *)0x0) &&
        (pUVar6 = (pUVar5->fields)._tipText, pUVar6 != (UnityEngine_UI_Text_o *)0x0)) &&
       (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0)
       , __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return false;
    }
  }
  else {
    fVar2 = (__this->fields)._elapsedTime_5__3;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar9 = fVar9 + fVar2;
    (__this->fields)._elapsedTime_5__3 = fVar9;
    fVar9 = fVar9 / (__this->fields)._fadeTime_5__2;
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
    }
    else if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
    if ((pUVar5 != (UI_CreditsMenu_o *)0x0) &&
       (pUVar6 = (pUVar5->fields)._tipText, pUVar6 != (UnityEngine_UI_Text_o *)0x0)) {
      pUVar8 = (*(pUVar6->klass->vtable)._22_get_color.methodPtr)
                         ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_48,pUVar6,
                          (pUVar6->klass->vtable)._22_get_color.method);
      pUVar7 = (pUVar5->fields)._tipText;
      if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
        fVar2 = *(float *)&(pUVar8->fields).m_Ptr;
        pUVar8 = (*(pUVar7->klass->vtable)._22_get_color.methodPtr)
                           ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_48,pUVar7,
                            (pUVar7->klass->vtable)._22_get_color.method);
        pUVar7 = (pUVar5->fields)._tipText;
        if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
          fVar3 = *(float *)((longlong)&(pUVar8->fields).m_Ptr + 4);
          pUVar8 = (*(pUVar7->klass->vtable)._22_get_color.methodPtr)
                             ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_48,
                              pUVar7,(pUVar7->klass->vtable)._22_get_color.method);
          local_48[0].fields.b = (float)(pUVar8->fields).m_Count;
          local_48[0].fields.a = fVar9 * -1.0 + 1.0;
          local_48[0].fields.r = fVar2;
          local_48[0].fields.g = fVar3;
          (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                    (pUVar6,local_48,(pUVar6->klass->vtable)._23_set_color.method);
          (__this->fields).__2__current = (Il2CppObject *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
          (__this->fields).__1__state = 1;
          return true;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CreditsMenu.<FadeOutTip>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CreditsMenu__FadeOutTip_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CreditsMenu__FadeOutTip_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_CreditsMenu__FadeOutTip_d__21_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CreditsMenu.<FadeOutTip>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CreditsMenu__FadeOutTip_d__21__System_Collections_IEnumerator_Reset (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x18221abd0

void UI_CreditsMenu__FadeOutTip_d__21__System_Collections_IEnumerator_Reset
               (UI_CreditsMenu__FadeOutTip_d__21_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_CreditsMenu_FadeOutTip_d__21_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CreditsMenu.<FadeOutTip>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CreditsMenu__FadeOutTip_d__21__System_Collections_IEnumerator_get_Current (UI_CreditsMenu__FadeOutTip_d__21_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CreditsMenu__FadeOutTip_d__21__System_Collections_IEnumerator_get_Current(UI_CreditsMenu__FadeOutTip_d__21_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CreditsMenu$$Setup
// il2cpp: void UI_CreditsMenu__Setup (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x1822059b0

void UI_CreditsMenu__Setup(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Color_o *pUVar2;
  uint uVar3;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar4;
  UnityEngine_Color_array *pUVar5;
  MethodInfo *pMVar6;
  Il2CppType *handle;
  bool bVar7;
  UI_ElementStyle_o *pUVar8;
  System_Type_array *pSVar9;
  System_Type_o *pSVar10;
  Il2CppObject *pIVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *pUVar14;
  UnityEngine_RectTransform_o *pUVar15;
  UnityEngine_UI_AspectRatioFitter_o *__this_01;
  UnityEngine_Rect_o *pUVar16;
  System_String_o *pSVar17;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar18;
  UnityEngine_UI_ContentSizeFitter_o *__this_03;
  UnityEngine_Font_o *value;
  System_Collections_Generic_List_Color__o *__this_04;
  UnityEngine_UI_Text_o *pUVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Color_Fields local_a8;
  UnityEngine_Color_Fields local_98;
  UnityEngine_Color_Fields local_88;
  UnityEngine_Color_Fields local_78;
  UnityEngine_Color_Fields local_68;
  UnityEngine_Rect_o local_58 [4];
  
  if (Il2CppMethodInitialized_18434709a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_AspectRatioFitter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CreditsMenu_Setup_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_AspectRatioFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Font);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Sprite);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Backgrounds/DarkBackgroundTextured");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Intensa Fuente");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/Elements/Brush");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"#29888a");
    il2cpp_codegen_initialize_runtime_metadata(&"#ba661f");
    il2cpp_codegen_initialize_runtime_metadata(&"CreditsContent");
    il2cpp_codegen_initialize_runtime_metadata(&"#813d52");
    il2cpp_codegen_initialize_runtime_metadata(&"#614c90");
    il2cpp_codegen_initialize_runtime_metadata(&"#2065a0");
    Il2CppMethodInitialized_18434709a = '\x01';
  }
  local_a8.r = 0.0;
  local_a8.g = 0.0;
  local_a8.b = 0.0;
  local_a8.a = 0.0;
  local_98.r = 0.0;
  local_98.g = 0.0;
  local_98.b = 0.0;
  local_98.a = 0.0;
  local_88.r = 0.0;
  local_88.g = 0.0;
  local_88.b = 0.0;
  local_88.a = 0.0;
  local_78.r = 0.0;
  local_78.g = 0.0;
  local_78.b = 0.0;
  local_78.a = 0.0;
  local_68.r = 0.0;
  local_68.g = 0.0;
  local_68.b = 0.0;
  local_68.a = 0.0;
  UI_BaseMenu__Setup((System_Net_TimerThread_Timer_o *)__this,(MethodInfo *)0x0);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  pSVar17 = "DefaultPanel";
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pUVar8,(MethodInfo *)0x0);
  (pUVar8->fields).FontSize = 0x18;
  (pUVar8->fields).TitleWidth = 100.0;
  (pUVar8->fields).Spacing = 20.0;
  (pUVar8->fields).ThemePanel = pSVar17;
  Il2CppCodeGenWriteBarrier(&(pUVar8->fields).ThemePanel,pSVar17);
  pSVar9 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar10 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar9 == (System_Type_array *)0x0) goto label_1822069ac;
  if (pSVar10 != (System_Type_o *)0x0) {
    pIVar11 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar10,(((pSVar9->obj).klass)->_1).element_class);
    if (pIVar11 == (Il2CppObject *)0x0) {
      pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
    }
  }
  if ((int)pSVar9->max_length != 0) {
    pSVar9->m_Items[0] = pSVar10;
    Il2CppCodeGenWriteBarrier(pSVar9->m_Items,pSVar10);
    pSVar10 = System_Type__GetTypeFromHandle
                        ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar10 != (System_Type_o *)0x0) {
      pIVar11 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar10,(((pSVar9->obj).klass)->_1).element_class);
      if (pIVar11 == (Il2CppObject *)0x0) {
        pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)pSVar9->max_length) {
      pSVar9->m_Items[1] = pSVar10;
      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 1,pSVar10);
      pSVar10 = System_Type__GetTypeFromHandle
                          ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_AspectRatioFitter,
                           (MethodInfo *)0x0);
      if (pSVar10 != (System_Type_o *)0x0) {
        pIVar11 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar10,(((pSVar9->obj).klass)->_1).element_class);
        if (pIVar11 == (Il2CppObject *)0x0) {
          pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)pSVar9->max_length) {
        pSVar9->m_Items[2] = pSVar10;
        Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 2,pSVar10);
        pUVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(pUVar12,"Background",pSVar9,(MethodInfo *)0x0);
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pUVar13 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0(pUVar13,parent,false,(MethodInfo *)0x0);
            __this_00 = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar12,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_Image);
            pUVar14 = UnityEngine_Resources__Load_object_
                                ("UI/Backgrounds/DarkBackgroundTextured",
                                 (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Sprite);
            if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
              UnityEngine_UI_Image__set_sprite(__this_00,pUVar14,(MethodInfo *)0x0);
              UnityEngine_UI_Image__set_type(__this_00,1,(MethodInfo *)0x0);
              UnityEngine_UI_Image__set_preserveAspect(__this_00,true,(MethodInfo *)0x0);
              pUVar15 = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar12,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_18433e3c9 = '\x01';
              }
              if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          (pUVar15,(UnityEngine_Vector2_o)
                                   (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                           (MethodInfo *)0x0);
                if (Il2CppMethodInitialized_184341f36 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_184341f36 = '\x01';
                }
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar15,(UnityEngine_Vector2_o)
                                   (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                           (MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_18433e3c9 = '\x01';
                }
                UnityEngine_RectTransform__set_sizeDelta
                          (pUVar15,(UnityEngine_Vector2_o)
                                   (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                           (MethodInfo *)0x0);
                __this_01 = UnityEngine_GameObject__GetComponent_object_
                                      (pUVar12,(MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_AspectRatioFitter
                                      );
                if (__this_01 != (UnityEngine_UI_AspectRatioFitter_o *)0x0) {
                  UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_01,4,(MethodInfo *)0x0);
                  pUVar14 = (__this_00->fields).m_Sprite;
                  if (pUVar14 != (UnityEngine_Sprite_o *)0x0) {
                    pUVar16 = UnityEngine_Sprite__get_rect(local_58,pUVar14,(MethodInfo *)0x0);
                    fVar20 = (pUVar16->fields).m_Width;
                    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                    }
                    pUVar14 = (__this_00->fields).m_Sprite;
                    if (pUVar14 != (UnityEngine_Sprite_o *)0x0) {
                      pUVar16 = UnityEngine_Sprite__get_rect(local_58,pUVar14,(MethodInfo *)0x0);
                      UnityEngine_UI_AspectRatioFitter__set_aspectRatio
                                (__this_01,fVar20 / (pUVar16->fields).m_Height,(MethodInfo *)0x0);
                      pUVar13 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      }
                      pSVar17 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
                      __this_02 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,
                                 (Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CreditsMenu_Setup_b__11_0,
                                 (MethodInfo *)0x0);
                      pUVar12 = UI_ElementFactory__CreateDefaultButton
                                          (pUVar13,pUVar8,pSVar17,0.0,0.0,__this_02,(MethodInfo *)0x0);
                      if (Il2CppMethodInitialized_1843470f6 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                        Il2CppMethodInitialized_1843470f6 = '\x01';
                      }
                      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar15 = UnityEngine_GameObject__GetComponent_object_
                                            (pUVar12,(MethodInfo_6F5650 *)
                                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                            );
                        if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_anchorMax
                                    (pUVar15,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_anchorMin
                                    (pUVar15,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_pivot
                                    (pUVar15,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_anchoredPosition
                                    (pUVar15,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
                          pSVar9 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
                          pSVar10 = System_Type__GetTypeFromHandle
                                              ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,
                                               (MethodInfo *)0x0);
                          if (pSVar9 != (System_Type_array *)0x0) {
                            if (pSVar10 != (System_Type_o *)0x0) {
                              pIVar11 = il2cpp_vm_Object_IsInst
                                                  ((Il2CppObject *)pSVar10,
                                                   (((pSVar9->obj).klass)->_1).element_class);
                              if (pIVar11 == (Il2CppObject *)0x0) {
                                pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
                              }
                            }
                            if ((int)pSVar9->max_length != 0) {
                              pSVar9->m_Items[0] = pSVar10;
                              Il2CppCodeGenWriteBarrier(pSVar9->m_Items,pSVar10);
                              pSVar10 = System_Type__GetTypeFromHandle
                                                  ((System_RuntimeTypeHandle_o)
                                                   TypeRef_UnityEngine_UI_VerticalLayoutGroup,
                                                   (MethodInfo *)0x0);
                              if (pSVar10 != (System_Type_o *)0x0) {
                                pIVar11 = il2cpp_vm_Object_IsInst
                                                    ((Il2CppObject *)pSVar10,
                                                     (((pSVar9->obj).klass)->_1).element_class);
                                if (pIVar11 == (Il2CppObject *)0x0) {
                                  pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
                                  il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
                                }
                              }
                              if (1 < (uint)pSVar9->max_length) {
                                pSVar9->m_Items[1] = pSVar10;
                                Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 1,pSVar10);
                                pSVar10 = System_Type__GetTypeFromHandle
                                                    ((System_RuntimeTypeHandle_o)
                                                     TypeRef_UnityEngine_UI_ContentSizeFitter,
                                                     (MethodInfo *)0x0);
                                if (pSVar10 != (System_Type_o *)0x0) {
                                  pIVar11 = il2cpp_vm_Object_IsInst
                                                      ((Il2CppObject *)pSVar10,
                                                       (((pSVar9->obj).klass)->_1).element_class);
                                  if (pIVar11 == (Il2CppObject *)0x0) {
                                    pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
                                    il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
                                  }
                                }
                                if (2 < (uint)pSVar9->max_length) {
                                  pSVar9->m_Items[2] = pSVar10;
                                  Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 2,pSVar10);
                                  pUVar12 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                  UnityEngine_GameObject___ctor_2f1abe0
                                            (pUVar12,"CreditsContent",pSVar9,(MethodInfo *)0x0);
                                  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                                    pUVar15 = UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar12,(MethodInfo_6F5650 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                    (__this->fields)._contentTransform = pUVar15;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields)._contentTransform,pUVar15);
                                    pUVar18 = UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar12,(MethodInfo_6F5650 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup
                                                       );
                                    (__this->fields)._layoutGroup = pUVar18;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields)._layoutGroup,pUVar18);
                                    __this_03 = UnityEngine_GameObject__GetComponent_object_
                                                          (pUVar12,(MethodInfo_6F5650 *)
                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter
                                                       );
                                    pUVar15 = (__this->fields)._contentTransform;
                                    pUVar13 = UnityEngine_Component__get_transform
                                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                    if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_Transform__SetParent_2f5a7e0
                                                ((UnityEngine_Transform_o *)pUVar15,pUVar13,false,
                                                 (MethodInfo *)0x0);
                                      pUVar15 = (__this->fields)._contentTransform;
                                      if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMin
                                                  (pUVar15,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                   (MethodInfo *)0x0);
                                        pUVar15 = (__this->fields)._contentTransform;
                                        if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchorMax
                                                    (pUVar15,(UnityEngine_Vector2_o)0x3f8000003f000000,
                                                     (MethodInfo *)0x0);
                                          pUVar15 = (__this->fields)._contentTransform;
                                          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                            il2cpp_codegen_initialize_runtime_metadata
                                                      (&TypeInfo_UnityEngine_Vector2);
                                            Il2CppMethodInitialized_18433e3c9 = '\x01';
                                          }
                                          if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                            UnityEngine_RectTransform__set_anchoredPosition
                                                      (pUVar15,(UnityEngine_Vector2_o)
                                                               (TypeInfo_UnityEngine_Vector2->static_fields->
                                                               zeroVector).fields,(MethodInfo *)0x0);
                                            pUVar15 = (__this->fields)._contentTransform;
                                            if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                              UnityEngine_RectTransform__set_sizeDelta
                                                        (pUVar15,(UnityEngine_Vector2_o)0x44480000,
                                                         (MethodInfo *)0x0);
                                              pUVar18 = (__this->fields)._layoutGroup;
                                              if (pUVar18 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                                                UnityEngine_UI_LayoutGroup__set_childAlignment
                                                          ((UnityEngine_UI_LayoutGroup_o *)pUVar18,1,
                                                           (MethodInfo *)0x0);
                                                pUVar4 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                         (__this->fields)._layoutGroup;
                                                if (pUVar4 != (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                                {
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                                            (pUVar4,true,(MethodInfo *)0x0);
                                                  pUVar4 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                           )(__this->fields)._layoutGroup;
                                                  if (pUVar4 != (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                                  {
                                                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                                              (pUVar4,false,(MethodInfo *)0x0);
                                                    pUVar4 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                              *)(__this->fields)._layoutGroup;
                                                    if (pUVar4 != (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                                    {
                                                      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                                                (pUVar4,10.0,(MethodInfo *)0x0);
                                                      if (__this_03 !=
                                                          (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
                                                        UnityEngine_UI_ContentSizeFitter__set_verticalFit
                                                                  (__this_03,2,(MethodInfo *)0x0);
                                                        value = UnityEngine_Resources__Load_object_
                                                                          ("UI/Fonts/Intensa Fuente",
                                                                           (MethodInfo_7965D0 *)
                                                                                                                                                      
                                                       MethodInfo_UnityEngine_Resources_Load_Font);
                                                       (__this->fields)._categoryFont = value;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._categoryFont,value);
                                                       pUVar14 = UnityEngine_Resources__Load_object_
                                                                           ("UI/Sprites/Elements/Brush",
                                                                            (MethodInfo_7965D0 *)
                                                                                                                                                        
                                                       MethodInfo_UnityEngine_Resources_Load_Sprite);
                                                       (__this->fields)._brushSprite = pUVar14;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._brushSprite,pUVar14);
                                                       __this_04 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_System_Collections_Generic_List_Color);
                                                       System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
                                                                 ((
                                                       System_Collections_Generic_LowLevelList_T__o *)
                                                       __this_04,
                                                       (MethodInfo_92A240 *)
                                                       MethodInfo_System_Collections_Generic_List_Color_ctor);
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#2065a0",
                                                                          (UnityEngine_Color_o *)&local_a8,
                                                                          (MethodInfo *)0x0);
                                                       pMVar6 = 
                                                       MethodInfo_System_Collections_Generic_List_Color_Add;
                                                       if (bVar7) {
                                                         fVar20 = local_a8.r;
                                                         fVar21 = local_a8.g;
                                                         fVar22 = local_a8.b;
                                                         fVar23 = local_a8.a;
                                                       }
                                                       else {
                                                         fVar20 = 1.0;
                                                         fVar21 = 1.0;
                                                         fVar22 = 1.0;
                                                         fVar23 = 1.0;
                                                       }
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_Color__o *)0x0) {
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (__this_04->fields)._items;
                                                         if (pUVar5 != (UnityEngine_Color_array *)0x0) {
                                                           uVar3 = (__this_04->fields)._size;
                                                           if (uVar3 < (uint)pUVar5->max_length) {
                                                             (__this_04->fields)._size = uVar3 + 1;
                                                             if ((uint)pUVar5->max_length <= uVar3)
                                                             goto label_182206a12;
                                                             pUVar2 = pUVar5->m_Items + (int)uVar3;
                                                             (pUVar2->fields).r = fVar20;
                                                             (pUVar2->fields).g = fVar21;
                                                             (pUVar2->fields).b = fVar22;
                                                             (pUVar2->fields).a = fVar23;
                                                             local_58[0].fields.m_XMin = fVar20;
                                                             local_58[0].fields.m_YMin = fVar21;
                                                             local_58[0].fields.m_Width = fVar22;
                                                             local_58[0].fields.m_Height = fVar23;
                                                           }
                                                           else {
                                                             local_58[0].fields.m_XMin = fVar20;
                                                             local_58[0].fields.m_YMin = fVar21;
                                                             local_58[0].fields.m_Width = fVar22;
                                                             local_58[0].fields.m_Height = fVar23;
                                                                                                                          
                                                       System_Collections_Generic_List_UILineInfo___AddWithResize
                                                                 ((
                                                       System_Collections_Generic_List_UILineInfo__o *)
                                                       __this_04,(UnityEngine_UILineInfo_o *)local_58,
                                                       (MethodInfo_91A940 *)
                                                       pMVar6->klass->rgctx_data[0xe].method);
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#ba661f",
                                                                          (UnityEngine_Color_o *)&local_98,
                                                                          (MethodInfo *)0x0);
                                                       pMVar6 = 
                                                       MethodInfo_System_Collections_Generic_List_Color_Add;
                                                       if (bVar7) {
                                                         fVar20 = local_98.r;
                                                         fVar21 = local_98.g;
                                                         fVar22 = local_98.b;
                                                         fVar23 = local_98.a;
                                                       }
                                                       else {
                                                         fVar20 = 1.0;
                                                         fVar21 = 1.0;
                                                         fVar22 = 1.0;
                                                         fVar23 = 1.0;
                                                       }
                                                       piVar1 = &(__this_04->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar5 = (__this_04->fields)._items;
                                                       if (pUVar5 != (UnityEngine_Color_array *)0x0) {
                                                         uVar3 = (__this_04->fields)._size;
                                                         if (uVar3 < (uint)pUVar5->max_length) {
                                                           (__this_04->fields)._size = uVar3 + 1;
                                                           if ((uint)pUVar5->max_length <= uVar3)
                                                           goto label_182206a12;
                                                           pUVar2 = pUVar5->m_Items + (int)uVar3;
                                                           (pUVar2->fields).r = fVar20;
                                                           (pUVar2->fields).g = fVar21;
                                                           (pUVar2->fields).b = fVar22;
                                                           (pUVar2->fields).a = fVar23;
                                                           local_58[0].fields.m_XMin = fVar20;
                                                           local_58[0].fields.m_YMin = fVar21;
                                                           local_58[0].fields.m_Width = fVar22;
                                                           local_58[0].fields.m_Height = fVar23;
                                                         }
                                                         else {
                                                           local_58[0].fields.m_XMin = fVar20;
                                                           local_58[0].fields.m_YMin = fVar21;
                                                           local_58[0].fields.m_Width = fVar22;
                                                           local_58[0].fields.m_Height = fVar23;
                                                                                                                      
                                                       System_Collections_Generic_List_UILineInfo___AddWithResize
                                                                 ((
                                                       System_Collections_Generic_List_UILineInfo__o *)
                                                       __this_04,(UnityEngine_UILineInfo_o *)local_58,
                                                       (MethodInfo_91A940 *)
                                                       pMVar6->klass->rgctx_data[0xe].method);
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#29888a",
                                                                          (UnityEngine_Color_o *)&local_88,
                                                                          (MethodInfo *)0x0);
                                                       pMVar6 = 
                                                       MethodInfo_System_Collections_Generic_List_Color_Add;
                                                       if (bVar7) {
                                                         fVar20 = local_88.r;
                                                         fVar21 = local_88.g;
                                                         fVar22 = local_88.b;
                                                         fVar23 = local_88.a;
                                                       }
                                                       else {
                                                         fVar20 = 1.0;
                                                         fVar21 = 1.0;
                                                         fVar22 = 1.0;
                                                         fVar23 = 1.0;
                                                       }
                                                       piVar1 = &(__this_04->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar5 = (__this_04->fields)._items;
                                                       if (pUVar5 != (UnityEngine_Color_array *)0x0) {
                                                         uVar3 = (__this_04->fields)._size;
                                                         if (uVar3 < (uint)pUVar5->max_length) {
                                                           (__this_04->fields)._size = uVar3 + 1;
                                                           if ((uint)pUVar5->max_length <= uVar3)
                                                           goto label_182206a12;
                                                           pUVar2 = pUVar5->m_Items + (int)uVar3;
                                                           (pUVar2->fields).r = fVar20;
                                                           (pUVar2->fields).g = fVar21;
                                                           (pUVar2->fields).b = fVar22;
                                                           (pUVar2->fields).a = fVar23;
                                                           local_58[0].fields.m_XMin = fVar20;
                                                           local_58[0].fields.m_YMin = fVar21;
                                                           local_58[0].fields.m_Width = fVar22;
                                                           local_58[0].fields.m_Height = fVar23;
                                                         }
                                                         else {
                                                           local_58[0].fields.m_XMin = fVar20;
                                                           local_58[0].fields.m_YMin = fVar21;
                                                           local_58[0].fields.m_Width = fVar22;
                                                           local_58[0].fields.m_Height = fVar23;
                                                                                                                      
                                                       System_Collections_Generic_List_UILineInfo___AddWithResize
                                                                 ((
                                                       System_Collections_Generic_List_UILineInfo__o *)
                                                       __this_04,(UnityEngine_UILineInfo_o *)local_58,
                                                       (MethodInfo_91A940 *)
                                                       pMVar6->klass->rgctx_data[0xe].method);
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#813d52",
                                                                          (UnityEngine_Color_o *)&local_78,
                                                                          (MethodInfo *)0x0);
                                                       pMVar6 = 
                                                       MethodInfo_System_Collections_Generic_List_Color_Add;
                                                       if (bVar7) {
                                                         fVar20 = local_78.r;
                                                         fVar21 = local_78.g;
                                                         fVar22 = local_78.b;
                                                         fVar23 = local_78.a;
                                                       }
                                                       else {
                                                         fVar20 = 1.0;
                                                         fVar21 = 1.0;
                                                         fVar22 = 1.0;
                                                         fVar23 = 1.0;
                                                       }
                                                       piVar1 = &(__this_04->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar5 = (__this_04->fields)._items;
                                                       if (pUVar5 != (UnityEngine_Color_array *)0x0) {
                                                         uVar3 = (__this_04->fields)._size;
                                                         if (uVar3 < (uint)pUVar5->max_length) {
                                                           (__this_04->fields)._size = uVar3 + 1;
                                                           if ((uint)pUVar5->max_length <= uVar3)
                                                           goto label_182206a12;
                                                           pUVar2 = pUVar5->m_Items + (int)uVar3;
                                                           (pUVar2->fields).r = fVar20;
                                                           (pUVar2->fields).g = fVar21;
                                                           (pUVar2->fields).b = fVar22;
                                                           (pUVar2->fields).a = fVar23;
                                                           local_58[0].fields.m_XMin = fVar20;
                                                           local_58[0].fields.m_YMin = fVar21;
                                                           local_58[0].fields.m_Width = fVar22;
                                                           local_58[0].fields.m_Height = fVar23;
                                                         }
                                                         else {
                                                           local_58[0].fields.m_XMin = fVar20;
                                                           local_58[0].fields.m_YMin = fVar21;
                                                           local_58[0].fields.m_Width = fVar22;
                                                           local_58[0].fields.m_Height = fVar23;
                                                                                                                      
                                                       System_Collections_Generic_List_UILineInfo___AddWithResize
                                                                 ((
                                                       System_Collections_Generic_List_UILineInfo__o *)
                                                       __this_04,(UnityEngine_UILineInfo_o *)local_58,
                                                       (MethodInfo_91A940 *)
                                                       pMVar6->klass->rgctx_data[0xe].method);
                                                       }
                                                       bVar7 = UnityEngine_ColorUtility__TryParseHtmlString
                                                                         ("#614c90",
                                                                          (UnityEngine_Color_o *)&local_68,
                                                                          (MethodInfo *)0x0);
                                                       pMVar6 = 
                                                       MethodInfo_System_Collections_Generic_List_Color_Add;
                                                       if (bVar7) {
                                                         fVar20 = local_68.r;
                                                         fVar21 = local_68.g;
                                                         fVar22 = local_68.b;
                                                         fVar23 = local_68.a;
                                                       }
                                                       else {
                                                         fVar20 = 1.0;
                                                         fVar21 = 1.0;
                                                         fVar22 = 1.0;
                                                         fVar23 = 1.0;
                                                       }
                                                       piVar1 = &(__this_04->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pUVar5 = (__this_04->fields)._items;
                                                       if (pUVar5 != (UnityEngine_Color_array *)0x0) {
                                                         uVar3 = (__this_04->fields)._size;
                                                         if (uVar3 < (uint)pUVar5->max_length) {
                                                           (__this_04->fields)._size = uVar3 + 1;
                                                           if ((uint)pUVar5->max_length <= uVar3)
                                                           goto label_182206a12;
                                                           pUVar2 = pUVar5->m_Items + (int)uVar3;
                                                           (pUVar2->fields).r = fVar20;
                                                           (pUVar2->fields).g = fVar21;
                                                           (pUVar2->fields).b = fVar22;
                                                           (pUVar2->fields).a = fVar23;
                                                         }
                                                         else {
                                                           local_58[0].fields.m_XMin = fVar20;
                                                           local_58[0].fields.m_YMin = fVar21;
                                                           local_58[0].fields.m_Width = fVar22;
                                                           local_58[0].fields.m_Height = fVar23;
                                                                                                                      
                                                       System_Collections_Generic_List_UILineInfo___AddWithResize
                                                                 ((
                                                       System_Collections_Generic_List_UILineInfo__o *)
                                                       __this_04,(UnityEngine_UILineInfo_o *)local_58,
                                                       (MethodInfo_91A940 *)
                                                       pMVar6->klass->rgctx_data[0xe].method);
                                                       }
                                                       (__this->fields)._categoryColors = __this_04;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._categoryColors,__this_04)
                                                       ;
                                                       if (Il2CppMethodInitialized_18434709b == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&TypeInfo_UI_ElementStyle);
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"DefaultPanel");
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&"Hold LMB or Space to fast forward, and RMB to go backwards");
                                                       Il2CppMethodInitialized_18434709b = '\x01';
                                                       }
                                                       pUVar8 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_UI_ElementStyle);
                                                       pSVar17 = "DefaultPanel";
                                                       System_Configuration_ConfigurationCollectionAttribute___ctor
                                                                 ((
                                                       UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o
                                                       *)pUVar8,(MethodInfo *)0x0);
                                                       (pUVar8->fields).FontSize = 0x18;
                                                       (pUVar8->fields).TitleWidth = 120.0;
                                                       (pUVar8->fields).Spacing = 20.0;
                                                       (pUVar8->fields).ThemePanel = pSVar17;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(pUVar8->fields).ThemePanel,pSVar17);
                                                       pUVar13 = UnityEngine_Component__get_transform
                                                                           ((UnityEngine_Component_o *)__this,
                                                                            (MethodInfo *)0x0);
                                                       pUVar12 = UI_ElementFactory__CreateWhiteLabel
                                                                           (pUVar13,pUVar8,
                                                                            "Hold LMB or Space to fast forward, and RMB to go backwards",0,4,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                                                         pUVar19 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar12,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                       (__this->fields)._tipText = pUVar19;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields)._tipText,pUVar19);
                                                       pUVar19 = (__this->fields)._tipText;
                                                       if (pUVar19 != (UnityEngine_UI_Text_o *)0x0) {
                                                         UnityEngine_UI_Text__set_fontSize
                                                                   (pUVar19,0x14,(MethodInfo *)0x0);
                                                         pUVar19 = (__this->fields)._tipText;
                                                         if (pUVar19 != (UnityEngine_UI_Text_o *)0x0) {
                                                           UnityEngine_UI_Text__set_alignment
                                                                     (pUVar19,4,(MethodInfo *)0x0);
                                                           pUVar15 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar12,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                                       if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                                         UnityEngine_RectTransform__set_anchorMin
                                                                   (pUVar15,(UnityEngine_Vector2_o)
                                                                            0x3f8000003f000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchorMax
                                                                   (pUVar15,(UnityEngine_Vector2_o)
                                                                            0x3f8000003f000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_anchoredPosition
                                                                   (pUVar15,(UnityEngine_Vector2_o)
                                                                            0xc248000000000000,
                                                                    (MethodInfo *)0x0);
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar15,(UnityEngine_Vector2_o)
                                                                            0x4248000044160000,
                                                                    (MethodInfo *)0x0);
                                                         (__this->fields)._tipTimer =
                                                              (__this->fields)._tipDisplayTime;
                                                         UI_CreditsMenu__PopulateCredits
                                                                   (__this,(MethodInfo *)0x0);
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
                                  goto label_1822069ac;
                                }
                              }
                            }
                            goto label_182206a12;
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
label_1822069ac:
        ThrowNullReferenceException();
      }
    }
  }
label_182206a12:
  ThrowIndexOutOfRangeException();
}


// UI.CreditsMenu$$CreateTip
// il2cpp: void UI_CreditsMenu__CreateTip (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x182205130

void UI_CreditsMenu__CreateTip(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  System_String_o *value;
  UI_ElementStyle_o *style;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_RectTransform_o *__this_01;
  
  if (Il2CppMethodInitialized_18434709b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Hold LMB or Space to fast forward, and RMB to go backwards");
    Il2CppMethodInitialized_18434709b = '\x01';
  }
  style = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  value = "DefaultPanel";
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = value;
  Il2CppCodeGenWriteBarrier(&(style->fields).ThemePanel,value);
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__CreateWhiteLabel(parent,style,"Hold LMB or Space to fast forward, and RMB to go backwards",0,4,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._tipText = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tipText,pUVar1);
    pUVar1 = (__this->fields)._tipText;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      UnityEngine_UI_Text__set_fontSize(pUVar1,0x14,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._tipText;
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        UnityEngine_UI_Text__set_alignment(pUVar1,4,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this_00,
                               (MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
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
  ThrowNullReferenceException();
}


// UI.CreditsMenu$$PopulateCredits
// il2cpp: void UI_CreditsMenu__PopulateCredits (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x1822054b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18220566e: movss xmm7, dword ptr [rip + 0x1154036]
// asm:   0x182205676: nop word ptr [rax + rax]
// asm:   0x1822057a8: nop dword ptr [rax + rax]

void UI_CreditsMenu__PopulateCredits(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar3;
  bool bVar4;
  undefined8 *puVar5;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_string__o *__this_00;
  float fVar10;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_148;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_138;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_e8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_98;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  undefined1 local_78 [112];
  
  if (Il2CppMethodInitialized_18434709c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_LayoutRebuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Sort);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MiscInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"Error loading data.");
    il2cpp_codegen_initialize_runtime_metadata(&"\nBased on the original game created by Feng Li and Jiang Li.");
    il2cpp_codegen_initialize_runtime_metadata(&"Category");
    il2cpp_codegen_initialize_runtime_metadata(&"Names");
    Il2CppMethodInitialized_18434709c = '\x01';
  }
  local_e8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_138.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_e8.type = 0;
  local_e8._4_4_ = 0;
  local_e8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_e8.m_Object.fields._version = 0;
  local_e8.m_Object.fields._index = 0;
  local_e8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_e8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_e8.m_Object.fields._getEnumeratorRetType = 0;
  local_e8.m_Object.fields._36_4_ = 0;
  local_e8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e8.m_Array.fields._index = 0;
  local_e8.m_Array.fields._version = 0;
  local_138.type = 0;
  local_138._4_4_ = 0;
  local_138.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_138.m_Object.fields._version = 0;
  local_138.m_Object.fields._index = 0;
  local_138.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_138.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_138.m_Object.fields._getEnumeratorRetType = 0;
  local_138.m_Object.fields._36_4_ = 0;
  local_138.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_138.m_Array.fields._index = 0;
  local_138.m_Array.fields._version = 0;
  pSVar7 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Credits;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    UI_CreditsMenu__CreateTextElement(__this,"Error loading data.",false,(MethodInfo *)0x0);
    return;
  }
  pSVar7 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Credits;
  if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    puVar5 = (undefined8 *)(*(pSVar7->klass->vtable)._32_unknown.methodPtr)(local_78);
    local_e8._0_8_ = *puVar5;
    local_e8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar5[1];
    local_e8.m_Object.fields._8_8_ = puVar5[2];
    local_e8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar5[3];
    local_e8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar5[4];
    local_e8.m_Object.fields._32_8_ = puVar5[5];
    local_e8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar5[6];
    local_e8.m_Array.fields._8_8_ = puVar5[7];
    local_e8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar5[8];
    bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_e8,(MethodInfo *)0x0);
    if (bVar4) {
      do {
        pSVar6 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (&local_98,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_e8,(MethodInfo *)0x0);
        pSVar9 = (pSVar6->fields).key;
        pSVar7 = (pSVar6->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_148.fields.key = pSVar9;
        local_148.fields.value = pSVar7;
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_148,(MethodInfo *)0x0);
        if ((pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (pSVar8 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar7,(MethodInfo *)"Category"),
           pSVar8 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_18220599b;
        pSVar1 = pSVar8->klass;
        pSVar9 = (System_String_o *)
                 (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar8,(UnityEngine_GameObject_o *)
                                   (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
        UI_CreditsMenu__CreateCategoryElement(__this,pSVar9,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
        pSVar8 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)(pSVar7,(MethodInfo *)"Names");
        if (pSVar8 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18220599b;
        puVar5 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar8->klass)->vtable[32].methodPtr)(local_78);
        local_138._0_8_ = *puVar5;
        local_138.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar5[1];
        local_138.m_Object.fields._8_8_ = puVar5[2];
        local_138.m_Object.fields._current.fields.key = (Il2CppObject *)puVar5[3];
        local_138.m_Object.fields._current.fields.value = (Il2CppObject *)puVar5[4];
        local_138.m_Object.fields._32_8_ = puVar5[5];
        local_138.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar5[6];
        local_138.m_Array.fields._8_8_ = puVar5[7];
        local_138.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar5[8];
        bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_138,(MethodInfo *)0x0);
        if (bVar4) {
          do {
            pSVar6 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (&local_88,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_138,
                                (MethodInfo *)0x0);
            pSVar9 = (pSVar6->fields).key;
            pSVar7 = (pSVar6->fields).value;
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            local_148.fields.key = pSVar9;
            local_148.fields.value = pSVar7;
            pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_148,(MethodInfo *)0x0);
            if ((pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (pSVar9 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method),
               __this_00 == (System_Collections_Generic_List_string__o *)0x0)) goto label_18220599b;
            bVar4 = System_Collections_Generic_List_object___Contains
                              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                               (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains
                              );
            if (!bVar4) {
              (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                        (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
              il2cpp_runtime_helper_180012890(__this_00);
            }
            bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_138,(MethodInfo *)0x0);
          } while (bVar4);
        }
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_18220599b;
        System_Collections_Generic_List_object___Sort
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (MethodInfo_948480 *)MethodInfo_System_Collections_Generic_List_string_Sort);
        pSVar9 = System_String__Join_196ecd0
                           ("\n",
                            (System_Collections_Generic_IEnumerable_string__o *)__this_00,(MethodInfo *)0x0);
        UI_CreditsMenu__CreateTextElement(__this,pSVar9,false,(MethodInfo *)0x0);
        UI_CreditsMenu__CreateSpacerElement(__this,20.0,(MethodInfo *)0x0);
        bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_e8,(MethodInfo *)0x0);
      } while (bVar4);
    }
    UI_CreditsMenu__CreateTextElement(__this,"\nBased on the original game created by Feng Li and Jiang Li.",false,(MethodInfo *)0x0);
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    pUVar2 = (__this->fields)._contentTransform;
    if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar2,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._layoutGroup;
    if (pUVar3 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
      fVar10 = (*(pUVar3->klass->vtable)._34_get_preferredHeight.methodPtr)
                         (pUVar3,(pUVar3->klass->vtable)._34_get_preferredHeight.method);
      pUVar2 = (__this->fields)._contentTransform;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar2,(UnityEngine_Vector2_o)((ulonglong)(uint)(-fVar10 * 0.5 - 300.0) << 0x20),
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
label_18220599b:
  ThrowNullReferenceException();
}


// UI.CreditsMenu$$CreateCategoryElement
// il2cpp: void UI_CreditsMenu__CreateCategoryElement (UI_CreditsMenu_o* __this, System_String_o* content, const MethodInfo* method);
// 0x1822039d0

void UI_CreditsMenu__CreateCategoryElement
               (UI_CreditsMenu_o *__this,System_String_o *content,MethodInfo *method)

{
  System_Collections_Generic_List_Color__o *pSVar1;
  UnityEngine_Vector2_o value;
  System_String_o *value_00;
  Il2CppType *handle;
  System_Type_array *pSVar2;
  System_Type_o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UI_ElementStyle_o *style;
  UnityEngine_UI_Text_o *__this_04;
  UnityEngine_RectTransform_o *layoutRoot;
  UnityEngine_Vector2_o UVar8;
  float fStackX_24;
  System_String_o *local_98;
  undefined8 uStack_90;
  
  if (Il2CppMethodInitialized_18434709d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_LayoutRebuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"CategoryContainer");
    Il2CppMethodInitialized_18434709d = '\x01';
  }
  pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar2 == (System_Type_array *)0x0) goto label_182204193;
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = pSVar3;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar3);
    pSVar3 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar3 != (System_Type_o *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)pSVar2->max_length) {
      pSVar2->m_Items[1] = pSVar3;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar3);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(pUVar5,"CategoryContainer",pSVar2,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0
                    (pUVar6,(UnityEngine_Transform_o *)(__this->fields)._contentTransform,false,
                     (MethodInfo *)0x0);
          __this_00 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar5,(MethodInfo_6F5650 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          pUVar7 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar5,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
          pSVar3 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0)
          ;
          if (pSVar2 != (System_Type_array *)0x0) {
            if (pSVar3 != (System_Type_o *)0x0) {
              pIVar4 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
              if (pIVar4 == (Il2CppObject *)0x0) {
                pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
              }
            }
            if ((int)pSVar2->max_length != 0) {
              pSVar2->m_Items[0] = pSVar3;
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar3);
              pSVar3 = System_Type__GetTypeFromHandle
                                 ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
              if (pSVar3 != (System_Type_o *)0x0) {
                pIVar4 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
                if (pIVar4 == (Il2CppObject *)0x0) {
                  pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
                }
              }
              if (1 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[1] = pSVar3;
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar3);
                __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                UnityEngine_GameObject___ctor_2f1abe0
                          (__this_01,"Background",pSVar2,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar6 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                  parent = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__SetParent_2f5a7e0(pUVar6,parent,false,(MethodInfo *)0x0);
                    __this_02 = UnityEngine_GameObject__GetComponent_object_
                                          (__this_01,
                                           (MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                    if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
                      UnityEngine_UI_Image__set_sprite
                                (__this_02,(__this->fields)._brushSprite,(MethodInfo *)0x0);
                      if (Il2CppMethodInitialized_1843470a2 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&MethodInfo_System_Collections_Generic_List_Color_get_Count);
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&MethodInfo_System_Collections_Generic_List_Color_get_Item);
                        Il2CppMethodInitialized_1843470a2 = '\x01';
                      }
                      pSVar1 = (__this->fields)._categoryColors;
                      if (pSVar1 != (System_Collections_Generic_List_Color__o *)0x0) {
                        System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___get_Item
                                  ((UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_o
                                    *)&local_98,(System_Collections_Generic_List_T__o *)pSVar1,
                                   (__this->fields)._currentColorIndex,
                                   (MethodInfo_92B880 *)
                                   MethodInfo_System_Collections_Generic_List_Color_get_Item);
                        pSVar1 = (__this->fields)._categoryColors;
                        if (pSVar1 != (System_Collections_Generic_List_Color__o *)0x0) {
                          (__this->fields)._currentColorIndex =
                               ((__this->fields)._currentColorIndex + 1) % (pSVar1->fields)._size;
                          (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                                    (__this_02,(UnityEngine_Color_o *)&local_98,
                                     (__this_02->klass->vtable)._23_set_color.method);
                          __this_03 = UnityEngine_GameObject__GetComponent_object_
                                                (__this_01,
                                                 (MethodInfo_6F5650 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
                          ;
                          pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                          style = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                          value_00 = "DefaultPanel";
                          System_Object___ctor
                                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)style,
                                     (MethodInfo *)0x0);
                          (style->fields).FontSize = 0x18;
                          (style->fields).TitleWidth = 120.0;
                          (style->fields).Spacing = 20.0;
                          (style->fields).ThemePanel = value_00;
                          Il2CppCodeGenWriteBarrier(&(style->fields).ThemePanel,value_00);
                          pUVar5 = UI_ElementFactory__CreateWhiteLabel
                                             (pUVar6,style,content,0,4,(MethodInfo *)0x0);
                          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                            __this_04 = UnityEngine_GameObject__GetComponent_object_
                                                  (pUVar5,(MethodInfo_6F5650 *)
                                                          MethodInfo_UnityEngine_GameObject_GetComponent_Text)
                            ;
                            if (__this_04 != (UnityEngine_UI_Text_o *)0x0) {
                              UnityEngine_UI_Text__set_font
                                        (__this_04,(__this->fields)._categoryFont,(MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_fontSize(__this_04,0x20,(MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_fontStyle(__this_04,1,(MethodInfo *)0x0);
                              UnityEngine_UI_Text__set_alignment(__this_04,4,(MethodInfo *)0x0);
                              local_98 = (System_String_o *)0x3f8000003f800000;
                              uStack_90._0_4_ = 1.0;
                              uStack_90._4_4_ = 1.0;
                              (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                                        (__this_04,(UnityEngine_Color_o *)&local_98,
                                         (__this_04->klass->vtable)._23_set_color.method);
                              layoutRoot = UnityEngine_UI_Graphic__get_rectTransform
                                                     ((UnityEngine_UI_Graphic_o *)__this_04,(MethodInfo *)0x0)
                              ;
                              if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                                UnityEngine_RectTransform__set_anchorMin
                                          (__this_00,(UnityEngine_Vector2_o)0x3f80000000000000,
                                           (MethodInfo *)0x0);
                                UnityEngine_RectTransform__set_anchorMax
                                          (__this_00,(UnityEngine_Vector2_o)0x3f8000003f800000,
                                           (MethodInfo *)0x0);
                                if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                  Il2CppMethodInitialized_18433e3c9 = '\x01';
                                }
                                UnityEngine_RectTransform__set_anchoredPosition
                                          (__this_00,
                                           (UnityEngine_Vector2_o)
                                           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                           (MethodInfo *)0x0);
                                if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor
                                    == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
                                }
                                UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                                          (layoutRoot,(MethodInfo *)0x0);
                                if (layoutRoot != (UnityEngine_RectTransform_o *)0x0) {
                                  UVar8 = UnityEngine_RectTransform__get_sizeDelta
                                                    (layoutRoot,(MethodInfo *)0x0);
                                  fStackX_24 = UVar8.fields.y;
                                  fStackX_24 = fStackX_24 + 20.0;
                                  UVar8.fields.x = UVar8.fields.x + 40.0;
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (__this_00,
                                             (UnityEngine_Vector2_o)((ulonglong)(uint)fStackX_24 << 0x20),
                                             (MethodInfo *)0x0);
                                  if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                                    value.fields.y = fStackX_24 - 15.0;
                                    value.fields.x = UVar8.fields.x - 10.0;
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (__this_03,value,(MethodInfo *)0x0);
                                    UVar8.fields.y = fStackX_24;
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (layoutRoot,UVar8,(MethodInfo *)0x0);
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
                                    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata
                                                (&TypeInfo_UnityEngine_Vector2);
                                      Il2CppMethodInitialized_18433e3c9 = '\x01';
                                    }
                                    UnityEngine_RectTransform__set_anchoredPosition
                                              (layoutRoot,
                                               (UnityEngine_Vector2_o)
                                               (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).
                                               fields,(MethodInfo *)0x0);
                                    pUVar6 = UnityEngine_GameObject__get_transform
                                                       (__this_01,(MethodInfo *)0x0);
                                    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                      UnityEngine_Transform__SetAsFirstSibling(pUVar6,(MethodInfo *)0x0);
                                      if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                        (*(pUVar7->klass->vtable)._34_set_minHeight.methodPtr)
                                                  (pUVar7,fStackX_24,
                                                   (pUVar7->klass->vtable)._34_set_minHeight.method);
                                        (*(pUVar7->klass->vtable)._38_set_preferredHeight.methodPtr)
                                                  (pUVar7,fStackX_24,
                                                   (pUVar7->klass->vtable)._38_set_preferredHeight.method);
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
                goto label_182204193;
              }
            }
            goto label_1822041d9;
          }
        }
      }
label_182204193:
      ThrowNullReferenceException();
    }
  }
label_1822041d9:
  ThrowIndexOutOfRangeException();
}


// UI.CreditsMenu$$CreateSpacerElement
// il2cpp: void UI_CreditsMenu__CreateSpacerElement (UI_CreditsMenu_o* __this, float height, const MethodInfo* method);
// 0x1822042d0

void UI_CreditsMenu__CreateSpacerElement(UI_CreditsMenu_o *__this,float height,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  
  if (Il2CppMethodInitialized_18434709e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Spacer");
    Il2CppMethodInitialized_18434709e = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_1822044ac:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar1);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(__this_00,"Spacer",components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0
                    (__this_01,(UnityEngine_Transform_o *)(__this->fields)._contentTransform,false,
                     (MethodInfo *)0x0);
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar3->klass->vtable)._34_set_minHeight.methodPtr)
                      (pUVar3,height,(pUVar3->klass->vtable)._34_set_minHeight.method);
            (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar3,height,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
            return;
          }
        }
      }
      goto label_1822044ac;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.CreditsMenu$$CreateTextElement
// il2cpp: void UI_CreditsMenu__CreateTextElement (UI_CreditsMenu_o* __this, System_String_o* content, bool isCategory, const MethodInfo* method);
// 0x1822044e0
// asm: 14 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822047fe: nop 
// asm:   0x182204b1a: xor r8d, r8d
// asm:   0x182204b1d: mov edx, 0x12
// asm:   0x182204b22: mov rcx, rax
// asm:   0x182204b25: call 0x1832ecb30  ; UnityEngine_UI_Text__set_fontSize()
// asm:   0x182204b2a: xor r8d, r8d
// asm:   0x182204b2d: mov edx, 1
// asm:   0x182204b32: mov rcx, rbx
// asm:   0x182204b35: call 0x1832ecad0  ; UnityEngine_UI_Text__set_alignment()
// asm:   0x182204b3a: jmp 0x182204a8c
// asm:   0x1822050ba: xor edx, edx
// asm:   0x1822050bc: mov rcx, rax
// asm:   0x1822050bf: call 0x182f5a580  ; UnityEngine_Transform__SetAsFirstSibling()
// asm:   0x1822050c4: jmp 0x182204a8c

void UI_CreditsMenu__CreateTextElement
               (UI_CreditsMenu_o *__this,System_String_o *content,bool isCategory,MethodInfo *method)

{
  System_Collections_Generic_List_Color__o *pSVar1;
  UnityEngine_Vector2_o value;
  Il2CppType *pIVar2;
  UI_ElementStyle_o *style;
  System_String_array *source;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_01;
  System_Collections_Generic_List_string__o *column;
  System_Collections_Generic_List_string__o *column_00;
  System_String_o *pSVar3;
  System_String_o *content_00;
  System_Type_array *pSVar4;
  System_Type_o *pSVar5;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_02;
  UnityEngine_UI_Text_o *pUVar9;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_05;
  UnityEngine_RectTransform_o *__this_06;
  UnityEngine_RectTransform_o *layoutRoot;
  int index;
  int iVar10;
  int iVar11;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  float fVar12;
  UnityEngine_Vector2_Fields local_88;
  undefined8 uStack_80;
  
  if (Il2CppMethodInitialized_18434709f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderByDescending_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_LayoutRebuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CreditsMenu_c_CreateTextElement_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CreditsMenu_c);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"TwoColumnContainer");
    il2cpp_codegen_initialize_runtime_metadata(&"CategoryContainer");
    Il2CppMethodInitialized_18434709f = '\x01';
  }
  style = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  pSVar3 = "DefaultPanel";
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 120.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar3;
  Il2CppCodeGenWriteBarrier(&(style->fields).ThemePanel,pSVar3);
  if (isCategory) {
    pSVar4 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    pIVar2 = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_array *)0x0) {
      if ((pSVar5 != (System_Type_o *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) {
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
      if ((int)pSVar4->max_length == 0) goto label_18220511f;
      pSVar4->m_Items[0] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar5);
      pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(pUVar7,"CategoryContainer",pSVar4,(MethodInfo *)0x0);
      if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
         pUVar8 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_2f5a7e0
                  (pUVar8,(UnityEngine_Transform_o *)(__this->fields)._contentTransform,false,
                   (MethodInfo *)0x0);
        __this_03 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar7,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        pSVar4 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
        pSVar5 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
        if (pSVar4 != (System_Type_array *)0x0) {
          if ((pSVar5 != (System_Type_o *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if ((int)pSVar4->max_length != 0) {
            pSVar4->m_Items[0] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar5);
            pSVar5 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
            if ((pSVar5 != (System_Type_o *)0x0) &&
               (pIVar6 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class),
               pIVar6 == (Il2CppObject *)0x0)) {
              pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
            }
            if (1 < (uint)pSVar4->max_length) {
              pSVar4->m_Items[1] = pSVar5;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar5);
              __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_2f1abe0(__this_04,"Background",pSVar4,(MethodInfo *)0x0);
              if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
                pUVar8 = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0);
                parent = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent_2f5a7e0(pUVar8,parent,false,(MethodInfo *)0x0);
                  __this_05 = UnityEngine_GameObject__GetComponent_object_
                                        (__this_04,
                                         (MethodInfo_6F5650 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                  if (__this_05 != (UnityEngine_UI_Image_o *)0x0) {
                    UnityEngine_UI_Image__set_sprite
                              (__this_05,(__this->fields)._brushSprite,(MethodInfo *)0x0);
                    if (Il2CppMethodInitialized_1843470a2 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_System_Collections_Generic_List_Color_get_Count);
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_System_Collections_Generic_List_Color_get_Item);
                      Il2CppMethodInitialized_1843470a2 = '\x01';
                    }
                    pSVar1 = (__this->fields)._categoryColors;
                    if (pSVar1 != (System_Collections_Generic_List_Color__o *)0x0) {
                      System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___get_Item
                                ((UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_o
                                  *)&local_88,(System_Collections_Generic_List_T__o *)pSVar1,
                                 (__this->fields)._currentColorIndex,
                                 (MethodInfo_92B880 *)
                                 MethodInfo_System_Collections_Generic_List_Color_get_Item);
                      pSVar1 = (__this->fields)._categoryColors;
                      if (pSVar1 != (System_Collections_Generic_List_Color__o *)0x0) {
                        (__this->fields)._currentColorIndex =
                             ((__this->fields)._currentColorIndex + 1) % (pSVar1->fields)._size;
                        (*(__this_05->klass->vtable)._23_set_color.methodPtr)
                                  (__this_05,(UnityEngine_Color_o *)&local_88,
                                   (__this_05->klass->vtable)._23_set_color.method);
                        __this_06 = UnityEngine_GameObject__GetComponent_object_
                                              (__this_04,
                                               (MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                        pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                        pUVar7 = UI_ElementFactory__CreateWhiteLabel
                                           (pUVar8,style,content,0,4,(MethodInfo *)0x0);
                        if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
                           (pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                               (pUVar7,(MethodInfo_6F5650 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text),
                           pUVar9 != (UnityEngine_UI_Text_o *)0x0)) {
                          UnityEngine_UI_Text__set_font
                                    (pUVar9,(__this->fields)._categoryFont,(MethodInfo *)0x0);
                          UnityEngine_UI_Text__set_fontSize(pUVar9,0x20,(MethodInfo *)0x0);
                          UnityEngine_UI_Text__set_fontStyle(pUVar9,1,(MethodInfo *)0x0);
                          UnityEngine_UI_Text__set_alignment(pUVar9,4,(MethodInfo *)0x0);
                          local_88.x = 1.0;
                          local_88.y = 1.0;
                          uStack_80 = 0x3f8000003f800000;
                          (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                                    (pUVar9,(UnityEngine_Color_o *)&local_88,
                                     (pUVar9->klass->vtable)._23_set_color.method);
                          layoutRoot = UnityEngine_UI_Graphic__get_rectTransform
                                                 ((UnityEngine_UI_Graphic_o *)pUVar9,(MethodInfo *)0x0);
                          if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__set_anchorMin
                                      (__this_03,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMax
                                      (__this_03,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
                            if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                              Il2CppMethodInitialized_18433e3c9 = '\x01';
                            }
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (__this_03,
                                       (UnityEngine_Vector2_o)
                                       (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                       (MethodInfo *)0x0);
                            if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0)
                            {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
                            }
                            UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                                      (layoutRoot,(MethodInfo *)0x0);
                            if (layoutRoot != (UnityEngine_RectTransform_o *)0x0) {
                              local_88 = (UnityEngine_Vector2_Fields)
                                         UnityEngine_RectTransform__get_sizeDelta
                                                   (layoutRoot,(MethodInfo *)0x0);
                              value_01.fields.x = local_88.x + 40.0;
                              fVar12 = local_88.y + 10.0;
                              value_00.fields.y = fVar12;
                              value_00.fields.x = value_01.fields.x;
                              UnityEngine_RectTransform__set_sizeDelta(__this_03,value_00,(MethodInfo *)0x0);
                              if (__this_06 != (UnityEngine_RectTransform_o *)0x0) {
                                value.fields.y = fVar12 - 35.0;
                                value.fields.x = value_01.fields.x - 25.0;
                                UnityEngine_RectTransform__set_sizeDelta(__this_06,value,(MethodInfo *)0x0);
                                value_01.fields.y = fVar12;
                                UnityEngine_RectTransform__set_sizeDelta
                                          (layoutRoot,value_01,(MethodInfo *)0x0);
                                UnityEngine_RectTransform__set_anchorMax
                                          (__this_06,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                           (MethodInfo *)0x0);
                                UnityEngine_RectTransform__set_anchorMin
                                          (__this_06,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                           (MethodInfo *)0x0);
                                UnityEngine_RectTransform__set_anchoredPosition
                                          (__this_06,(UnityEngine_Vector2_o)0xc170000000000000,
                                           (MethodInfo *)0x0);
                                UnityEngine_RectTransform__set_anchorMax
                                          (layoutRoot,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                           (MethodInfo *)0x0);
                                UnityEngine_RectTransform__set_anchorMin
                                          (layoutRoot,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                           (MethodInfo *)0x0);
                                if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                  Il2CppMethodInitialized_18433e3c9 = '\x01';
                                }
                                UnityEngine_RectTransform__set_anchoredPosition
                                          (layoutRoot,
                                           (UnityEngine_Vector2_o)
                                           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                           (MethodInfo *)0x0);
                                pUVar8 = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0);
                                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                  UnityEngine_Transform__SetAsFirstSibling(pUVar8,(MethodInfo *)0x0);
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
              goto label_1822050c9;
            }
          }
          goto label_18220511f;
        }
      }
    }
  }
  else if ((content != (System_String_o *)0x0) &&
          (source = System_String__Split(content,10,0,(MethodInfo *)0x0), source != (System_String_array *)0x0
          )) {
    if ((int)source->max_length < 9) {
      pUVar7 = UI_ElementFactory__CreateWhiteLabel
                         ((UnityEngine_Transform_o *)(__this->fields)._contentTransform,style,content,0,4,
                          (MethodInfo *)0x0);
      if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar9 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar7,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text)
         , pUVar9 != (UnityEngine_UI_Text_o *)0x0)) {
        UnityEngine_UI_Text__set_fontSize(pUVar9,0x12,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_alignment(pUVar9,1,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((TypeInfo_UI_CreditsMenu_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CreditsMenu_c);
      }
      __this_00 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                  TypeInfo_UI_CreditsMenu_c->static_fields->__9__16_0;
      if (__this_00 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
        if ((TypeInfo_UI_CreditsMenu_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CreditsMenu_c);
        }
        pIVar6 = (Il2CppObject *)TypeInfo_UI_CreditsMenu_c->static_fields->__9;
        __this_00 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_int);
        System_Func_object__int____ctor
                  (__this_00,pIVar6,(intptr_t)MethodInfo_UI_CreditsMenu_c_CreateTextElement_b__16_0,
                   (MethodInfo_AF4D50 *)0x0);
        TypeInfo_UI_CreditsMenu_c->static_fields->__9__16_0 = (System_Func_string__int__o *)__this_00;
        Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CreditsMenu_c->static_fields->__9__16_0,__this_00);
      }
      source_00 = System_Linq_Enumerable__OrderByDescending_object__int_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__TKey__o *)__this_00,
                             (MethodInfo_6C0F60 *)
                             MethodInfo_System_Linq_Enumerable_OrderByDescending_string_int);
      __this_01 = System_Linq_Enumerable__ToList_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                             (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
      column = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)column,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      column_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)column_00,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      iVar11 = 0;
      iVar10 = 0;
      index = 0;
      if (__this_01 != (System_Collections_Generic_List_TSource__o *)0x0) {
        while (index < (__this_01->fields)._size) {
          pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index,
                              (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
          ;
          if (iVar10 < iVar11) {
            if (column_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822050c9;
            il2cpp_runtime_helper_180012890(column_00,pSVar3,MethodInfo_System_Collections_Generic_List_string_Add);
            pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_string_get_Item);
            if (pSVar3 == (System_String_o *)0x0) goto label_1822050c9;
            iVar10 = iVar10 + (pSVar3->fields)._stringLength;
            index = index + 1;
          }
          else {
            if (column == (System_Collections_Generic_List_string__o *)0x0) goto label_1822050c9;
            il2cpp_runtime_helper_180012890(column,pSVar3,MethodInfo_System_Collections_Generic_List_string_Add);
            pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_string_get_Item);
            if (pSVar3 == (System_String_o *)0x0) goto label_1822050c9;
            iVar11 = iVar11 + (pSVar3->fields)._stringLength;
            index = index + 1;
          }
        }
        pSVar3 = UI_CreditsMenu__ArrangeColumn(__this,column,(MethodInfo *)0x0);
        content_00 = UI_CreditsMenu__ArrangeColumn(__this,column_00,(MethodInfo *)0x0);
        pSVar4 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
        pIVar2 = TypeRef_UnityEngine_RectTransform;
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
        if (pSVar4 != (System_Type_array *)0x0) {
          if ((pSVar5 != (System_Type_o *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if ((int)pSVar4->max_length != 0) {
            pSVar4->m_Items[0] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar5);
            pSVar5 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_HorizontalLayoutGroup,
                                (MethodInfo *)0x0);
            if ((pSVar5 != (System_Type_o *)0x0) &&
               (pIVar6 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class),
               pIVar6 == (Il2CppObject *)0x0)) {
              pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
            }
            if (1 < (uint)pSVar4->max_length) {
              pSVar4->m_Items[1] = pSVar5;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar5);
              pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_2f1abe0(pUVar7,"TwoColumnContainer",pSVar4,(MethodInfo *)0x0);
              if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
                 pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent_2f5a7e0
                          (pUVar8,(UnityEngine_Transform_o *)(__this->fields)._contentTransform,false,
                           (MethodInfo *)0x0);
                __this_02 = UnityEngine_GameObject__GetComponent_object_
                                      (pUVar7,(MethodInfo_6F5650 *)
                                              MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup
                                      );
                if (__this_02 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                  UnityEngine_UI_LayoutGroup__set_childAlignment
                            ((UnityEngine_UI_LayoutGroup_o *)__this_02,1,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,true,
                             (MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,
                             (MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,60.0,
                             (MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,
                             (MethodInfo *)0x0);
                  pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                  UI_CreditsMenu__CreateColumnText(__this,pUVar8,pSVar3,style,0,(MethodInfo *)0x0);
                  pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                  UI_CreditsMenu__CreateColumnText(__this,pUVar8,content_00,style,2,(MethodInfo *)0x0);
                  return;
                }
              }
              goto label_1822050c9;
            }
          }
label_18220511f:
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_1822050c9:
  ThrowNullReferenceException();
}


// UI.CreditsMenu$$ArrangeColumn
// il2cpp: System_String_o* UI_CreditsMenu__ArrangeColumn (UI_CreditsMenu_o* __this, System_Collections_Generic_List_string__o* column, const MethodInfo* method);
// 0x182203860

System_String_o *
UI_CreditsMenu__ArrangeColumn
          (UI_CreditsMenu_o *__this,System_Collections_Generic_List_string__o *column,MethodInfo *method)

{
  int count;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar1;
  System_Collections_Generic_List_TSource__o *collection;
  System_Collections_Generic_List_TSource__o *collection_00;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843470a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Reverse_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Skip_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Take_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_1843470a0 = '\x01';
  }
  if (column != (System_Collections_Generic_List_string__o *)0x0) {
    count = (column->fields)._size / 2;
    pSVar1 = System_Linq_Enumerable__Take_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)column,count,
                        (MethodInfo_6C7960 *)MethodInfo_System_Linq_Enumerable_Take_string);
    collection = System_Linq_Enumerable__ToList_object_
                           (pSVar1,(MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
    pSVar1 = System_Linq_Enumerable__Skip_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)column,count,
                        (MethodInfo_6C73A0 *)MethodInfo_System_Linq_Enumerable_Skip_string);
    pSVar1 = System_Linq_Enumerable__Reverse_object_
                       (pSVar1,(MethodInfo_6C1910 *)MethodInfo_System_Linq_Enumerable_Reverse_string);
    collection_00 =
         System_Linq_Enumerable__ToList_object_
                   (pSVar1,(MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)collection_00,
                 (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
      pSVar2 = System_String__Join_196ecd0
                         ("\n",(System_Collections_Generic_IEnumerable_string__o *)__this_00,
                          (MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.CreditsMenu$$CreateColumnText
// il2cpp: void UI_CreditsMenu__CreateColumnText (UI_CreditsMenu_o* __this, UnityEngine_Transform_o* parent, System_String_o* content, UI_ElementStyle_o* style, int32_t alignment, const MethodInfo* method);
// 0x1822041e0

void UI_CreditsMenu__CreateColumnText
               (UI_CreditsMenu_o *__this,UnityEngine_Transform_o *parent,System_String_o *content,
               UI_ElementStyle_o *style,int32_t alignment,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  
  if (Il2CppMethodInitialized_1843470a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    Il2CppMethodInitialized_1843470a1 = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateWhiteLabel(parent,style,content,0,4,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text)
    ;
    if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
      UnityEngine_UI_Text__set_fontSize(__this_01,0x12,(MethodInfo *)0x0);
      UnityEngine_UI_Text__set_alignment(__this_01,alignment,(MethodInfo *)0x0);
      __this_02 = UnityEngine_GameObject__GetComponent_object_
                            (__this_00,
                             (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                            );
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_sizeDelta
                  (__this_02,(UnityEngine_Vector2_o)0x43b40000,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CreditsMenu$$GetNextCategoryColor
// il2cpp: UnityEngine_Color_o UI_CreditsMenu__GetNextCategoryColor (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x1822053b0

UnityEngine_Color_o *
UI_CreditsMenu__GetNextCategoryColor
          (UnityEngine_Color_o *__return_storage_ptr__,UI_CreditsMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Color__o *pSVar1;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_o
  local_18;
  
  if (Il2CppMethodInitialized_1843470a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color_get_Item);
    Il2CppMethodInitialized_1843470a2 = '\x01';
  }
  pSVar1 = (__this->fields)._categoryColors;
  if (pSVar1 != (System_Collections_Generic_List_Color__o *)0x0) {
    System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___get_Item
              (&local_18,(System_Collections_Generic_List_T__o *)pSVar1,(__this->fields)._currentColorIndex,
               (MethodInfo_92B880 *)MethodInfo_System_Collections_Generic_List_Color_get_Item);
    pSVar1 = (__this->fields)._categoryColors;
    *(System_String_o **)&__return_storage_ptr__->fields = local_18.fields.message;
    *(undefined8 *)&(__return_storage_ptr__->fields).b = local_18.fields._8_8_;
    if (pSVar1 != (System_Collections_Generic_List_Color__o *)0x0) {
      (__this->fields)._currentColorIndex = ((__this->fields)._currentColorIndex + 1) % (pSVar1->fields)._size
      ;
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// UI.CreditsMenu$$Update
// il2cpp: void UI_CreditsMenu__Update (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x182206aa0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182206afd: movaps xmm7, xmm6
// asm:   0x182206b00: jmp 0x182206b0d

void UI_CreditsMenu__Update(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  bool bVar5;
  UnityEngine_Vector3_o *pUVar6;
  UI_CreditsMenu__FadeOutTip_d__21_o *routine;
  UnityEngine_RectTransform_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o local_38 [4];
  
  fVar10 = (__this->fields).scrollSpeed;
  bVar5 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
  if ((bVar5) || (bVar5 = UnityEngine_Input__GetKey(0x20,(MethodInfo *)0x0), bVar5)) {
    fVar10 = fVar10 * (__this->fields).fastScrollMultiplier;
  }
  else {
    bVar5 = UnityEngine_Input__GetMouseButton(1,(MethodInfo *)0x0);
    if (bVar5) {
      fVar10 = -(__this->fields).fastScrollMultiplier * fVar10;
    }
  }
  pUVar7 = (__this->fields)._contentTransform;
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
label_182206d5a:
    ThrowNullReferenceException();
  }
  pUVar6 = UnityEngine_Transform__get_localPosition
                     (local_38,(UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
  fVar1 = (pUVar6->fields).x;
  fVar9 = (pUVar6->fields).y;
  fVar2 = (pUVar6->fields).z;
  fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar7 = (__this->fields)._contentTransform;
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_182206d5a;
  local_38[0].fields.y = fVar8 * fVar10 + fVar9;
  local_38[0].fields.x = fVar1;
  local_38[0].fields.z = fVar2;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)pUVar7,local_38,(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._contentTransform;
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_182206d5a;
  pUVar6 = UnityEngine_Transform__get_localPosition
                     (local_38,(UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
  pUVar3 = (__this->fields)._layoutGroup;
  if (pUVar3 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_182206d5a;
  fVar10 = (pUVar6->fields).y;
  fVar9 = (*(pUVar3->klass->vtable)._34_get_preferredHeight.methodPtr)
                    (pUVar3,(pUVar3->klass->vtable)._34_get_preferredHeight.method);
  pUVar7 = (__this->fields)._contentTransform;
  if (fVar9 <= fVar10) {
    pUVar3 = (__this->fields)._layoutGroup;
    if (pUVar3 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_182206d5a;
    fVar10 = (*(pUVar3->klass->vtable)._34_get_preferredHeight.methodPtr)
                       (pUVar3,(pUVar3->klass->vtable)._34_get_preferredHeight.method);
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_182206d5a;
    local_38[0].fields._0_8_ = (ulonglong)(uint)-fVar10 << 0x20;
    local_38[0].fields.z = 0.0;
  }
  else {
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_182206d5a;
    pUVar6 = UnityEngine_Transform__get_localPosition
                       (local_38,(UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._layoutGroup;
    if (pUVar3 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_182206d5a;
    fVar10 = (pUVar6->fields).y;
    fVar9 = (*(pUVar3->klass->vtable)._34_get_preferredHeight.methodPtr)
                      (pUVar3,(pUVar3->klass->vtable)._34_get_preferredHeight.method);
    if (-fVar9 < fVar10) goto label_182206cbe;
    pUVar7 = (__this->fields)._contentTransform;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_182206d5a;
    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_38[0].fields.x = (pUVar4->zeroVector).fields.x;
    local_38[0].fields.y = (pUVar4->zeroVector).fields.y;
    local_38[0].fields.z = (pUVar4->zeroVector).fields.z;
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)pUVar7,local_38,(MethodInfo *)0x0);
label_182206cbe:
  fVar10 = (__this->fields)._tipTimer;
  if (0.0 < fVar10) {
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar10 = fVar10 - fVar9;
    (__this->fields)._tipTimer = fVar10;
    if (fVar10 <= 0.0) {
      if (Il2CppMethodInitialized_1843470a3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CreditsMenu_FadeOutTip_d__21);
        Il2CppMethodInitialized_1843470a3 = '\x01';
      }
      routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CreditsMenu_FadeOutTip_d__21);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
    }
  }
  return;
}


// UI.CreditsMenu$$FadeOutTip
// il2cpp: System_Collections_IEnumerator_o* UI_CreditsMenu__FadeOutTip (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x182205340

System_Collections_IEnumerator_o * UI_CreditsMenu__FadeOutTip(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  UI_CreditsMenu__FadeOutTip_d__21_o *__this_00;
  
  if (Il2CppMethodInitialized_1843470a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CreditsMenu_FadeOutTip_d__21);
    Il2CppMethodInitialized_1843470a3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CreditsMenu_FadeOutTip_d__21);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CreditsMenu$$OnButtonClick
// il2cpp: void UI_CreditsMenu__OnButtonClick (UI_CreditsMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182205450

void UI_CreditsMenu__OnButtonClick(UI_CreditsMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843470a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843470a4 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar1) {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.CreditsMenu$$.ctor
// il2cpp: void UI_CreditsMenu___ctor (UI_CreditsMenu_o* __this, const MethodInfo* method);
// 0x182206d60

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
// 0x182206a20

void UI_CreditsMenu___Setup_b__11_0(UI_CreditsMenu_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843470a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843470a5 = '\x01';
  }
  a = "Back";
  if (Il2CppMethodInitialized_1843470a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843470a4 = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if (bVar1) {
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  return;
}


