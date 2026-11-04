// Type: Gisketch.Aottg2UI.Building.GisketchScaleToParent
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScaleToParent.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Setup (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, UnityEngine_RectTransform_o* content, float referenceWidth, float referenceHeight, const MethodInfo* method);
// 0x1818db080

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Setup
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,
               UnityEngine_RectTransform_o *content,float referenceWidth,float referenceHeight,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *value;
  float fVar1;
  
  if (Il2CppMethodInitialized_184342135 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_184342135 = '\x01';
  }
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  (__this->fields)._root = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._root,value);
  (__this->fields)._content = content;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._content,content);
  fVar1 = 1.0;
  if (1.0 <= referenceWidth) {
    fVar1 = referenceWidth;
  }
  (__this->fields)._referenceWidth = fVar1;
  fVar1 = 1.0;
  if (1.0 <= referenceHeight) {
    fVar1 = referenceHeight;
  }
  (__this->fields)._referenceHeight = fVar1;
  Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__LateUpdate (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x1818db070

void
Gisketch_Aottg2UI_Building_GisketchScaleToParent__LateUpdate(Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x1818db070

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$Apply
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x1818dade0

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_o value;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Rect_o *pUVar4;
  float fVar5;
  UnityEngine_Rect_o local_48 [4];
  
  if (Il2CppMethodInitialized_184342136 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342136 = '\x01';
  }
  pUVar3 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    (__this->fields)._root = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._root,pUVar3);
  }
  pUVar3 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar3 = (__this->fields)._content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar3 = (__this->fields)._content;
      fVar5 = 1.0;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMin
                  (pUVar3,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._content;
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar3,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._content;
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_pivot
                      (pUVar3,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._content;
            if (Il2CppMethodInitialized_18433e3c9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_18433e3c9 = '\x01';
            }
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchoredPosition
                        (pUVar3,(UnityEngine_Vector2_o)
                                (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                         (MethodInfo *)0x0);
              pUVar3 = (__this->fields)._content;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                value.fields.y = (__this->fields)._referenceHeight;
                value.fields.x = (__this->fields)._referenceWidth;
                UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
                pUVar3 = (__this->fields)._root;
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  pUVar4 = UnityEngine_RectTransform__get_rect(local_48,pUVar3,(MethodInfo *)0x0);
                  fVar1 = (pUVar4->fields).m_Height;
                  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                  }
                  if (0.0 < fVar1) {
                    pUVar3 = (__this->fields)._root;
                    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_1818db062;
                    pUVar4 = UnityEngine_RectTransform__get_rect(local_48,pUVar3,(MethodInfo *)0x0);
                    fVar5 = (pUVar4->fields).m_Height;
                    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                    }
                    fVar5 = fVar5 / (__this->fields)._referenceHeight;
                  }
                  pUVar3 = (__this->fields)._content;
                  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                    local_48[0].fields.m_Width = 1.0;
                    local_48[0].fields.m_XMin = fVar5;
                    local_48[0].fields.m_YMin = fVar5;
                    UnityEngine_Transform__set_localScale
                              ((UnityEngine_Transform_o *)pUVar3,(UnityEngine_Vector3_o *)local_48,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
label_1818db062:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent___ctor (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x1818db130

void Gisketch_Aottg2UI_Building_GisketchScaleToParent___ctor
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  (__this->fields)._referenceWidth = 1920.0;
  (__this->fields)._referenceHeight = 1080.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


