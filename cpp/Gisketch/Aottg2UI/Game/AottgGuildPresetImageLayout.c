// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetImageLayout.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Configure
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Configure (UnityEngine_UI_Image_o* image, float width, float height, const MethodInfo* method);
// 0x181e12ea0

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Configure
               (UnityEngine_UI_Image_o *image,float width,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this;
  
  __this = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
    (__this->fields)._baseWidth = width;
    (__this->fields)._baseHeight = height;
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(__this,1.0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Scale
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Scale (UnityEngine_UI_Image_o* image, float scale, const MethodInfo* method);
// 0x181e13170

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Scale
               (UnityEngine_UI_Image_o *image,float scale,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this;
  
  __this = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(__this,scale,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Runtime
// il2cpp: Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o* Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime (UnityEngine_UI_Image_o* image, const MethodInfo* method);
// 0x181e12f00

Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(UnityEngine_UI_Image_o *image,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *x;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Rect_o *pUVar4;
  float fVar5;
  UnityEngine_Rect_o local_28 [2];
  
  if (Il2CppMethodInitialized_184344c6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgGuildPresetImageLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetImageLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184344c6c = '\x01';
  }
  if (image != (UnityEngine_UI_Image_o *)0x0) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)image,
                   (MethodInfo_6651A0 *)
                   MethodInfo_UnityEngine_Component_GetComponent_AottgGuildPresetImageLayout);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        x = UnityEngine_GameObject__AddComponent_object_
                      (__this,(MethodInfo_6F4D60 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetImageLayout);
        pUVar2 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)image,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_181e13168;
          fVar5 = (*(pUVar2->klass->vtable)._35_get_preferredWidth.methodPtr)
                            (pUVar2,(pUVar2->klass->vtable)._35_get_preferredWidth.method);
        }
        else {
          pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)image,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_181e13168;
          pUVar4 = UnityEngine_RectTransform__get_rect(local_28,pUVar3,(MethodInfo *)0x0);
          fVar5 = (pUVar4->fields).m_Width;
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
        }
        if (x != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
          (x->fields)._baseWidth = fVar5;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_181e13168;
            fVar5 = (*(pUVar2->klass->vtable)._37_get_preferredHeight.methodPtr)
                              (pUVar2,(pUVar2->klass->vtable)._37_get_preferredHeight.method);
            (x->fields)._baseHeight = fVar5;
          }
          else {
            pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)image,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_181e13168;
            pUVar4 = UnityEngine_RectTransform__get_rect(local_28,pUVar3,(MethodInfo *)0x0);
            fVar5 = (pUVar4->fields).m_Height;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            (x->fields)._baseHeight = fVar5;
          }
label_181e13107:
          pUVar2 = (x->fields)._layout;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar2 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)image,
                                (MethodInfo_6651A0 *)
                                MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
            (x->fields)._layout = pUVar2;
            Il2CppCodeGenWriteBarrier(&(x->fields)._layout,pUVar2);
          }
          return x;
        }
      }
    }
    else if (x != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) goto label_181e13107;
  }
label_181e13168:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Apply
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o* __this, float scale, const MethodInfo* method);
// 0x181e12d80

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this,float scale,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344c6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c6d = '\x01';
  }
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18433dbeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbeb = '\x01';
  }
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_28[0].x = (pUVar1->oneVector).fields.x;
    local_28[0].y = (pUVar1->oneVector).fields.y;
    local_28[0].z = (pUVar1->oneVector).fields.z;
    UnityEngine_Transform__set_localScale(__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._layout;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    pUVar2 = (__this->fields)._layout;
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar2,scale * (__this->fields)._baseWidth,
                 (pUVar2->klass->vtable)._36_set_preferredWidth.method);
      pUVar2 = (__this->fields)._layout;
      if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                  (pUVar2,scale * (__this->fields)._baseHeight,
                   (pUVar2->klass->vtable)._38_set_preferredHeight.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout___ctor(Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


