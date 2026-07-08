// Type: Gisketch.Aottg2UI.Building.GisketchScaleToParent
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScaleToParent.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Setup (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, UnityEngine_RectTransform_o* content, float referenceWidth, float referenceHeight, const MethodInfo* method);
// 0x3b07a90

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Setup
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,
               UnityEngine_RectTransform_o *content,float referenceWidth,float referenceHeight,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  float fVar2;
  
  if (DAT_057014e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    DAT_057014e9 = '\x01';
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  (__this->fields)._root = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._root,pUVar1);
  (__this->fields)._content = content;
  il2cpp_runtime_glue(&(__this->fields)._content);
  fVar2 = 1.0;
  if (1.0 <= referenceWidth) {
    fVar2 = referenceWidth;
  }
  (__this->fields)._referenceWidth = fVar2;
  fVar2 = 1.0;
  if (1.0 <= referenceHeight) {
    fVar2 = referenceHeight;
  }
  (__this->fields)._referenceHeight = fVar2;
  Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply(__this,(MethodInfo *)content);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__LateUpdate (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x3b07d40

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__LateUpdate
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x3b07d50

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$Apply
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x3b07b20

void Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  UnityEngine_Vector2_o value;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  float fVar4;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Rect_o UVar5;
  
  if (DAT_057014ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014ea = '\x01';
  }
  pUVar3 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._root;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
    (__this->fields)._root = pUVar3;
    il2cpp_runtime_glue(ppUVar1);
  }
  pUVar3 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar3 = (__this->fields)._content;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      pUVar3 = (__this->fields)._content;
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
            if (DAT_056fe093 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector2);
              DAT_056fe093 = '\x01';
            }
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchoredPosition
                        (pUVar3,(UnityEngine_Vector2_o)
                                **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              pUVar3 = (__this->fields)._content;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                value.fields.x = (__this->fields)._referenceWidth;
                value.fields.y = (__this->fields)._referenceHeight;
                UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
                pUVar3 = (__this->fields)._root;
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar5 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
                  if (UVar5.fields.m_Height <= 0.0) {
                    fVar4 = 1.0;
                    pUVar3 = (__this->fields)._content;
                  }
                  else {
                    if (*ppUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03b07d2c;
                    UVar5 = UnityEngine_RectTransform__get_rect(*ppUVar1,(MethodInfo *)0x0);
                    fVar4 = UVar5.fields.m_Height / (__this->fields)._referenceHeight;
                    pUVar3 = (__this->fields)._content;
                  }
                  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                    value_00.fields.y = fVar4;
                    value_00.fields.x = fVar4;
                    value_00.fields.z = 1.0;
                    UnityEngine_Transform__set_localScale
                              ((UnityEngine_Transform_o *)pUVar3,value_00,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LAB_03b07d2c:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScaleToParent$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScaleToParent___ctor (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o* __this, const MethodInfo* method);
// 0x3b07d60

void Gisketch_Aottg2UI_Building_GisketchScaleToParent___ctor
               (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this,MethodInfo *method)

{
  (__this->fields)._referenceWidth = 1920.0;
  (__this->fields)._referenceHeight = 1080.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


