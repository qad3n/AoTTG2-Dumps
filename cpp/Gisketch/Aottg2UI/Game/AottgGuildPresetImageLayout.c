// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetImageLayout.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Configure
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Configure (UnityEngine_UI_Image_o* image, float width, float height, const MethodInfo* method);
// 0x58f78e0

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Configure
               (UnityEngine_UI_Image_o *image,float width,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this;
  
  __this = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,method);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._baseWidth = width;
  (__this->fields)._baseHeight = height;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(__this,1.0,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Scale
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Scale (UnityEngine_UI_Image_o* image, float scale, const MethodInfo* method);
// 0x58f7a30

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Scale
               (UnityEngine_UI_Image_o *image,float scale,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this;
  
  __this = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,method);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(__this,scale,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Runtime
// il2cpp: Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o* Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime (UnityEngine_UI_Image_o* image, const MethodInfo* method);
// 0x58f7d70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f7e99: jmp 0x58f7ff3
// asm:   0x58f7fee: jmp 0x58f7f49

Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(UnityEngine_UI_Image_o *image,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o **targetAddress;
  uint32_t uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *x;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  
  if (Il2CppMethodInitialized_075455df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgGuildPresetImageLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetImageLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075455df = '\x01';
  }
  if (image == (UnityEngine_UI_Image_o *)0x0) goto label_058f7ff3;
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)image,
                 (MethodInfo_34B0830 *)
                 MethodInfo_UnityEngine_Component_GetComponent_AottgGuildPresetImageLayout);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
    if (__this == (UnityEngine_GameObject_o *)0x0) {
label_058f7ff3:
      ThrowNullReferenceException();
    }
    x = UnityEngine_GameObject__AddComponent_object_
                  (__this,(MethodInfo_353B6A0 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetImageLayout);
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)image,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_058f7ff3;
      fVar5 = (*(pUVar3->klass->vtable)._35_get_preferredWidth.methodPtr)
                        (pUVar3,(pUVar3->klass->vtable)._35_get_preferredWidth.method);
    }
    else {
      pUVar4 = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)image,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_058f7ff3;
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
      fVar5 = UVar6.fields.m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
    }
    if (x == (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) goto label_058f7ff3;
    (x->fields)._baseWidth = fVar5;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar4 = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)image,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_058f7ff3;
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      (x->fields)._baseHeight = UVar6.fields.m_Height;
      pUVar3 = (x->fields)._layout;
      uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      goto joined_r0x058f7f47;
    }
    if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_058f7ff3;
    fVar5 = (*(pUVar3->klass->vtable)._37_get_preferredHeight.methodPtr)
                      (pUVar3,(pUVar3->klass->vtable)._37_get_preferredHeight.method);
    (x->fields)._baseHeight = fVar5;
  }
  else if (x == (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) goto label_058f7ff3;
  pUVar3 = (x->fields)._layout;
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
joined_r0x058f7f47:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    targetAddress = &(x->fields)._layout;
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)image,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    *targetAddress = pUVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  return x;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Apply
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o* __this, float scale, const MethodInfo* method);
// 0x58f8000

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this,float scale,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (Il2CppMethodInitialized_075455e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075455e0 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e4b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b7 = '\x01';
  }
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localScale
              (__this_00,
               (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    pUVar1 = (__this->fields)._layout;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pUVar1 = (__this->fields)._layout;
    if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar1,(__this->fields)._baseWidth * scale,
                 (pUVar1->klass->vtable)._36_set_preferredWidth.method);
      pUVar1 = (__this->fields)._layout;
      if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)
                  (pUVar1,scale * (__this->fields)._baseHeight,
                   (pUVar1->klass->vtable)._38_set_preferredHeight.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o* __this, const MethodInfo* method);
// 0x58f8110

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout___ctor
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


