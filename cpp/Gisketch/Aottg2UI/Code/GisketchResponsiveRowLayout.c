// Type: Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchResponsiveRowLayout.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout___cctor (const MethodInfo* method);
// 0x5370ef0

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RegisterFactory(method);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RegisterFactory (const MethodInfo* method);
// 0x5370f00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5370f38: jmp 0x5370faa
// asm:   0x5371052: jmp 0x53710fc

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RegisterFactory(MethodInfo *method)

{
  uint8_t uVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *pGVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *value;
  MethodInfo *pMVar3;
  char cVar4;
  bool bVar5;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *value_00;
  undefined1 *puVar6;
  Il2CppObject *ex;
  
  if (Il2CppMethodInitialized_07542a56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout);
    il2cpp_codegen_initialize_runtime_metadata(&"ResponsiveRowLayout");
    Il2CppMethodInitialized_07542a56 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout->_2).cctor_finished_or_no_cctor != 0)
    goto label_05370f28;
label_05370f91:
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout);
    cVar4 = TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout->static_fields->_registered;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout->_2).cctor_finished_or_no_cctor == 0)
    goto label_05370f91;
label_05370f28:
    cVar4 = TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout->static_fields->_registered;
  }
  if (cVar4 != '\0') {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  value_00 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  pMVar3 = MethodInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_BuildRuntime;
  (value_00->fields).method_ptr =
       (intptr_t)
       MethodInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_BuildRuntime->virtualMethodPointer;
  (value_00->fields).method = (intptr_t)pMVar3;
  (value_00->fields).m_target = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(value_00->fields).m_target);
  uVar1 = pMVar3->parameters_count;
  (value_00->fields).method_code = (intptr_t)value_00;
  cVar4 = il2cpp_runtime_helper_030d61c0();
  if (cVar4 == '\0') {
    if (uVar1 != 3) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
    puVar6 = &label_02d4ba20;
label_0537103e:
    (value_00->fields).invoke_impl = (intptr_t)puVar6;
    (value_00->fields).extra_arg = (intptr_t)&label_02d4b9b0;
    value = "ResponsiveRowLayout";
  }
  else {
    if (uVar1 == 4) {
      puVar6 = &label_02d4ba50;
      goto label_0537103e;
    }
    (value_00->fields).invoke_impl = (value_00->fields).method_ptr;
    (value_00->fields).method_code = (intptr_t)(value_00->fields).m_target;
    (value_00->fields).extra_arg = (intptr_t)&label_02d4b9b0;
    value = "ResponsiveRowLayout";
  }
  "ResponsiveRowLayout" = value;
  if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
label_053710fc:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07542aad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_set_Item);
    Il2CppMethodInitialized_07542aad = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar5) {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar2->fields)._factories;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_053710fc;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)value,(Il2CppObject *)value_00,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_set_Item);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout);
  }
  TypeInfo_Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout->static_fields->_registered = true;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5371120

bool Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  bool bVar1;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this;
  
  if (Il2CppMethodInitialized_07542a57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchResponsiveRowLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Compact");
    Il2CppMethodInitialized_07542a57 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((go != (UnityEngine_GameObject_o *)0x0) &&
       (__this = UnityEngine_GameObject__AddComponent_object_
                           (go,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_GisketchResponsiveRowLayout),
       context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) {
      theme = (context->fields).Theme;
      if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        bVar1 = false;
      }
      else {
        bVar1 = System_String__op_Equality((node->fields).value,"Compact",(MethodInfo *)0x0);
      }
      if (__this != (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)0x0) {
        Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Setup(__this,theme,bVar1,(MethodInfo *)view);
        return true;
      }
    }
    ThrowNullReferenceException();
  }
  return true;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Setup (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, bool compact, const MethodInfo* method);
// 0x53711f0

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Setup
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,bool compact,MethodInfo *method)

{
  UnityEngine_UI_Image_o **targetAddress;
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  UnityEngine_Color_o UVar5;
  
  if (Il2CppMethodInitialized_07542a58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&"surfaceSoft");
    Il2CppMethodInitialized_07542a58 = '\x01';
  }
  (__this->fields)._compact = compact;
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    fVar2 = 0.0;
    fVar3 = 0.0;
    uVar4 = 0;
  }
  else {
    UVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                      (theme,"surfaceSoft",(UnityEngine_Color_o)ZEXT416(0),(MethodInfo *)0x0);
    uVar4 = UVar5.fields._8_8_;
    fVar2 = UVar5.fields.r;
    fVar3 = UVar5.fields.g;
  }
  (__this->fields)._hoverColor.fields.r = fVar2;
  (__this->fields)._hoverColor.fields.g = fVar3;
  (__this->fields)._hoverColor.fields.b = (float)uVar4;
  (__this->fields)._hoverColor.fields.a = (float)((ulong)uVar4 >> 0x20);
  (__this->fields)._hoverColor.fields.a = 0.5;
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
  if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_053712f8;
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
  }
  targetAddress = &(__this->fields)._background;
  (__this->fields)._background = pUVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar1 = (__this->fields)._background;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,(UnityEngine_Color_o)ZEXT416(0),(pUVar1->klass->vtable)._23_set_color.method);
    pUVar1 = *targetAddress;
    if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
      (*(pUVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
                (pUVar1,true,(pUVar1->klass->vtable)._25_set_raycastTarget.method);
      return;
    }
  }
label_053712f8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$Awake
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Awake (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, const MethodInfo* method);
// 0x5371300

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Awake
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if (Il2CppMethodInitialized_07542a59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_07542a59 = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  (__this->fields)._rect = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rect);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__LateUpdate (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, const MethodInfo* method);
// 0x5371350

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__LateUpdate
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__CacheLabel(__this,method);
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyForCurrentWidth(__this,method);
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RefreshHover(__this,method);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ApplyForCurrentWidth
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyForCurrentWidth (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, const MethodInfo* method);
// 0x5371500

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyForCurrentWidth
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  
  if (Il2CppMethodInitialized_07542a5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542a5a = '\x01';
  }
  if ((__this->fields)._compact != false) {
    Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyCompact(__this,method);
    return;
  }
  pUVar1 = (__this->fields)._rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar3 = 0.0;
  method_00 = extraout_RDX;
  if (bVar2) {
    pUVar1 = (__this->fields)._rect;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    fVar3 = UVar4.fields.m_Width;
    method_00 = extraout_RDX_00;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      method_00 = extraout_RDX_01;
    }
  }
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Apply
            (__this,(bool)((-(fVar3 <= 0.0) | -(620.0 <= fVar3)) & 1),method_00);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$Apply
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Apply (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, bool wide, const MethodInfo* method);
// 0x5371a30

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Apply
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,bool wide,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o **targetAddress;
  System_Nullable_bool__o *__this_00;
  bool bVar1;
  ulong in_RAX;
  Gilzoide_FlexUi_FlexLayout_o *pGVar2;
  Gilzoide_FlexUi_FlexLayout_o *label;
  Gilzoide_FlexUi_FlexLayout_o *control;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ulong uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07542a5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a5b = '\x01';
  }
  pGVar2 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._root;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pGVar2 = *targetAddress;
  }
  else {
    pGVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
  }
  (__this->fields)._root = pGVar2;
  Il2CppCodeGenWriteBarrier(targetAddress);
  label = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex(__this,0,method_00);
  control = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex(__this,1,method_01);
  pGVar2 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)control,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        __this_00 = &(__this->fields)._wide;
        if (((__this->fields)._wide.fields.hasValue != false) &&
           (bVar1 = System_Nullable_bool___get_Value
                              (__this_00,(MethodInfo_3CCFD40 *)MethodInfo_System_Nullable_bool_get_Value),
           bVar1 == wide)) {
          return;
        }
        uStack_38 = uStack_38 & 0xffffffffffff0000;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o *)&uStack_38,wide,
                   (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
        __this_00->fields = uStack_38._0_2_;
        if (wide) {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide(__this,label,control,in_RCX);
        }
        else {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow(__this,label,control,in_RCX);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ApplyWide
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* label, Gilzoide_FlexUi_FlexLayout_o* control, const MethodInfo* method);
// 0x5371c80

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,
               Gilzoide_FlexUi_FlexLayout_o *label,Gilzoide_FlexUi_FlexLayout_o *control,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *pGVar1;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar2;
  
  if (Il2CppMethodInitialized_07542a5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_07542a5c = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    Gilzoide_FlexUi_FlexLayout__set_FlexDirection(pGVar1,2,(MethodInfo *)0x0);
    pGVar1 = (__this->fields)._root;
    if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__set_FlexWrap(pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (__this->fields)._root;
      if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        Gilzoide_FlexUi_FlexLayout__set_AlignItems(pGVar1,2,(MethodInfo *)0x0);
        pGVar1 = (__this->fields)._root;
        if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          Gilzoide_FlexUi_FlexLayout__set_GapColumn(pGVar1,14.0,(MethodInfo *)0x0);
          pGVar1 = (__this->fields)._root;
          if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
            Gilzoide_FlexUi_FlexLayout__set_GapRow(pGVar1,14.0,(MethodInfo *)0x0);
            if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
            }
            GVar2 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(300.0,(MethodInfo *)0x0);
            if (label != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
              Gilzoide_FlexUi_FlexLayout__set_Width(label,GVar2,(MethodInfo *)0x0);
              GVar2 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(180.0,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_MinWidth(label,GVar2,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_FlexGrow(label,0.0,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_FlexShrink(label,1.0,(MethodInfo *)0x0);
              if (control != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                Gilzoide_FlexUi_FlexLayout__set_Width
                          (control,(Gilzoide_FlexUi_Yoga_YGValue_o)
                                   (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields,
                           (MethodInfo *)0x0);
                GVar2 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(260.0,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_MinWidth(control,GVar2,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexGrow(control,1.0,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexShrink(control,1.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ApplyNarrow
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* label, Gilzoide_FlexUi_FlexLayout_o* control, const MethodInfo* method);
// 0x5371e10

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,
               Gilzoide_FlexUi_FlexLayout_o *label,Gilzoide_FlexUi_FlexLayout_o *control,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o *pGVar1;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar2;
  
  if (Il2CppMethodInitialized_07542a5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_07542a5d = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    Gilzoide_FlexUi_FlexLayout__set_FlexDirection(pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (__this->fields)._root;
    if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__set_FlexWrap(pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (__this->fields)._root;
      if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        Gilzoide_FlexUi_FlexLayout__set_AlignItems(pGVar1,4,(MethodInfo *)0x0);
        pGVar1 = (__this->fields)._root;
        if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          Gilzoide_FlexUi_FlexLayout__set_GapColumn(pGVar1,8.0,(MethodInfo *)0x0);
          pGVar1 = (__this->fields)._root;
          if (pGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
            Gilzoide_FlexUi_FlexLayout__set_GapRow(pGVar1,8.0,(MethodInfo *)0x0);
            if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
            }
            GVar2 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
            if (label != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
              Gilzoide_FlexUi_FlexLayout__set_Width(label,GVar2,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_MinWidth
                        (label,(Gilzoide_FlexUi_Yoga_YGValue_o)
                               (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields,
                         (MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_FlexGrow(label,0.0,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_FlexShrink(label,1.0,(MethodInfo *)0x0);
              GVar2 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
              if (control != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                Gilzoide_FlexUi_FlexLayout__set_Width(control,GVar2,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_MinWidth
                          (control,(Gilzoide_FlexUi_Yoga_YGValue_o)
                                   (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields,
                           (MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexGrow(control,0.0,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexShrink(control,1.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ApplyCompact
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyCompact (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, const MethodInfo* method);
// 0x5371730

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyCompact
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o **targetAddress;
  System_Nullable_bool__o *__this_00;
  bool bVar1;
  ulong in_RAX;
  Gilzoide_FlexUi_FlexLayout_o *pGVar2;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ulong uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07542a5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_07542a5e = '\x01';
  }
  pGVar2 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._root;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pGVar2 = *targetAddress;
  }
  else {
    pGVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
  }
  (__this->fields)._root = pGVar2;
  Il2CppCodeGenWriteBarrier(targetAddress);
  __this_01 = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex(__this,0,method_00);
  __this_02 = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex(__this,1,method_01);
  pGVar2 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        __this_00 = &(__this->fields)._wide;
        if (((__this->fields)._wide.fields.hasValue != false) &&
           (bVar1 = System_Nullable_bool___get_Value
                              (__this_00,(MethodInfo_3CCFD40 *)MethodInfo_System_Nullable_bool_get_Value),
           bVar1)) {
          return;
        }
        uStack_38 = uStack_38 & 0xffffffffffff0000;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o *)&uStack_38,true,
                   (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
        __this_00->fields = uStack_38._0_2_;
        if (*targetAddress != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          Gilzoide_FlexUi_FlexLayout__set_FlexDirection(*targetAddress,2,(MethodInfo *)0x0);
          if (*targetAddress != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
            Gilzoide_FlexUi_FlexLayout__set_FlexWrap(*targetAddress,0,(MethodInfo *)0x0);
            if (*targetAddress != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
              Gilzoide_FlexUi_FlexLayout__set_AlignItems(*targetAddress,2,(MethodInfo *)0x0);
              if (*targetAddress != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                Gilzoide_FlexUi_FlexLayout__set_GapColumn(*targetAddress,12.0,(MethodInfo *)0x0);
                if (*targetAddress != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                  Gilzoide_FlexUi_FlexLayout__set_GapRow(*targetAddress,12.0,(MethodInfo *)0x0);
                  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
                  }
                  if (__this_01 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                    Gilzoide_FlexUi_FlexLayout__set_Width
                              (__this_01,
                               (Gilzoide_FlexUi_Yoga_YGValue_o)
                               (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields,
                               (MethodInfo *)0x0);
                    value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(0.0,(MethodInfo *)0x0);
                    Gilzoide_FlexUi_FlexLayout__set_MinWidth(__this_01,value,(MethodInfo *)0x0);
                    Gilzoide_FlexUi_FlexLayout__set_FlexGrow(__this_01,1.0,(MethodInfo *)0x0);
                    Gilzoide_FlexUi_FlexLayout__set_FlexShrink(__this_01,1.0,(MethodInfo *)0x0);
                    if (__this_02 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                      Gilzoide_FlexUi_FlexLayout__set_Width
                                (__this_02,
                                 (Gilzoide_FlexUi_Yoga_YGValue_o)
                                 (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields,
                                 (MethodInfo *)0x0);
                      Gilzoide_FlexUi_FlexLayout__set_MinWidth
                                (__this_02,
                                 (Gilzoide_FlexUi_Yoga_YGValue_o)
                                 (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields,
                                 (MethodInfo *)0x0);
                      Gilzoide_FlexUi_FlexLayout__set_FlexGrow(__this_02,0.0,(MethodInfo *)0x0);
                      Gilzoide_FlexUi_FlexLayout__set_FlexShrink(__this_02,0.0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ChildFlex
// il2cpp: Gilzoide_FlexUi_FlexLayout_o* Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, int32_t index, const MethodInfo* method);
// 0x5371bf0

Gilzoide_FlexUi_FlexLayout_o *
Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
          (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,int32_t index,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Transform_o *pUVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGVar3;
  
  if (Il2CppMethodInitialized_07542a5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
    Il2CppMethodInitialized_07542a5f = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    iVar1 = UnityEngine_Transform__get_childCount(pUVar2,(MethodInfo *)0x0);
    if (iVar1 <= index) {
      return (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    }
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__GetChild(pUVar2,index,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pGVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_FlexLayout);
        return pGVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__OnPointerEnter (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5371f90

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__OnPointerEnter
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._hovered = true;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RefreshHover(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__OnPointerExit (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5371fa0

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__OnPointerExit
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RefreshHover(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$CacheLabel
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__CacheLabel (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, const MethodInfo* method);
// 0x5371370

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__CacheLabel
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o **targetAddress;
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *pUVar3;
  TMPro_TextMeshProUGUI_o *pTVar4;
  System_String_o *requiredText;
  TMPro_TMP_FontAsset_o *pTVar5;
  
  if (Il2CppMethodInitialized_07542a60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_TextMeshProUGUI_71a4df0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_07542a60 = '\x01';
  }
  pTVar4 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    iVar2 = UnityEngine_Transform__get_childCount(pUVar3,(MethodInfo *)0x0);
    if (iVar2 == 0) {
      return;
    }
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar3 = UnityEngine_Transform__GetChild(pUVar3,0,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      targetAddress = &(__this->fields)._label;
      pTVar4 = UnityEngine_Component__GetComponentInChildren_object_
                         ((UnityEngine_Component_o *)pUVar3,true,
                          (MethodInfo_34B0B60 *)
                          MethodInfo_UnityEngine_Component_GetComponentInChildren_TextMeshProUGUI_71a4df0);
      *targetAddress = pTVar4;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pTVar4 = *targetAddress;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      if (*targetAddress != (TMPro_TextMeshProUGUI_o *)0x0) {
        (__this->fields)._normalFont = ((*targetAddress)->fields).m_fontAsset;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._normalFont);
        pTVar4 = (__this->fields)._label;
        if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (__this->fields)._normalWeight = (pTVar4->fields).m_fontWeight;
          requiredText = (*(pTVar4->klass->vtable)._65_get_text.methodPtr)
                                   (pTVar4,(pTVar4->klass->vtable)._65_get_text.method);
          pTVar5 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                             ("text",700,requiredText,(MethodInfo *)0x0);
          (__this->fields)._hoverFont = pTVar5;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._hoverFont);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$RefreshHover
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RefreshHover (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, const MethodInfo* method);
// 0x53715e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5371650: jmp 0x537171e

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RefreshHover
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  TMPro_TMP_FontAsset_o *x;
  bool bVar3;
  TMPro_TMP_FontAsset_o **ppTVar4;
  int32_t value;
  undefined8 uVar5;
  undefined8 uVar6;
  UnityEngine_Color_o UVar7;
  
  if (Il2CppMethodInitialized_07542a61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a61 = '\x01';
  }
  pUVar1 = (__this->fields)._background;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._background;
    if ((__this->fields)._hovered == false) {
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      uVar5._0_4_ = (__this->fields)._hoverColor.fields.r;
      uVar5._4_4_ = (__this->fields)._hoverColor.fields.g;
      uVar6._0_4_ = (__this->fields)._hoverColor.fields.b;
      uVar6._4_4_ = (__this->fields)._hoverColor.fields.a;
    }
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_0537171e;
    UVar7.fields.b = (float)(int)uVar6;
    UVar7.fields.a = (float)(int)((ulong)uVar6 >> 0x20);
    UVar7.fields.r = (float)(int)uVar5;
    UVar7.fields.g = (float)(int)((ulong)uVar5 >> 0x20);
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,UVar7,(pUVar1->klass->vtable)._23_set_color.method);
  }
  pTVar2 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pTVar2 = (__this->fields)._label;
  if ((__this->fields)._hovered == false) {
label_053716dd:
    ppTVar4 = &(__this->fields)._normalFont;
  }
  else {
    x = (__this->fields)._hoverFont;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) goto label_053716dd;
    ppTVar4 = &(__this->fields)._hoverFont;
  }
  if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar2,*ppTVar4,(MethodInfo *)0x0);
    pTVar2 = (__this->fields)._label;
    value = 700;
    if ((__this->fields)._hovered == false) {
      value = (__this->fields)._normalWeight;
    }
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
label_0537171e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout___ctor (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, const MethodInfo* method);
// 0x5371fb0

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout___ctor
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


