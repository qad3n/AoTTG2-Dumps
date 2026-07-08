// Type: Gisketch.Aottg2UI.Building.GisketchLayoutOffset
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchLayoutOffset.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$get_MotionOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Building_GisketchLayoutOffset__get_MotionOffset (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x3b07710

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Building_GisketchLayoutOffset__get_MotionOffset
          (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._motionOffset.fields;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$For
// il2cpp: Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x3b07720

Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *
Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For
          (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar3;
  UnityEngine_GameObject_o *__this;
  MethodInfo *method_00;
  
  if (DAT_057014e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchLayoutOffset_GetComponent_GisketchLayout);
    il2cpp_init_method_metadata(&MethodInfo_GisketchLayoutOffset_AddComponent_GisketchLayout);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014e6 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    pGVar3 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)rect,MethodInfo_GisketchLayoutOffset_GetComponent_GisketchLayout);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      return pGVar3;
    }
    __this = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pGVar3 = (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)
               UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_GisketchLayoutOffset_AddComponent_GisketchLayout);
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
      }
      if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
        UVar1 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
        if (DAT_057014e7 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
          DAT_057014e7 = '\x01';
        }
        (pGVar3->fields)._layoutOffset.fields = UVar1;
        method_00 = (MethodInfo *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pGVar3,MethodInfo_RectTransform_GetComponent_RectTransform);
        (pGVar3->fields)._rect = (UnityEngine_RectTransform_o *)method_00;
        il2cpp_runtime_glue(&(pGVar3->fields)._rect);
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(pGVar3,method_00);
        return pGVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Setup (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x3b07890

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Setup
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,
               UnityEngine_Vector2_o offset,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (DAT_057014e7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    DAT_057014e7 = '\x01';
  }
  (__this->fields)._layoutOffset.fields = offset.fields;
  method_00 = (MethodInfo *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  (__this->fields)._rect = (UnityEngine_RectTransform_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields)._rect);
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$SetMotionOffset
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x3b07a60

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,
               UnityEngine_Vector2_o offset,MethodInfo *method)

{
  (__this->fields)._motionOffset.fields = offset.fields;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__LateUpdate (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x3b07a70

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__LateUpdate
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$Apply
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x3b078f0

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  UnityEngine_Vector2_Fields UVar2;
  bool_conflict bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Vector2_Fields UVar5;
  UnityEngine_Vector2_o value;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (DAT_057014e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014e8 = '\x01';
  }
  pUVar4 = (__this->fields)._rect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._rect;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar4 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
    (__this->fields)._rect = pUVar4;
    il2cpp_runtime_glue(ppUVar1);
  }
  pUVar4 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_anchoredPosition(*ppUVar1,(MethodInfo *)0x0);
    if ((char)(__this->fields)._hasBase != '\0') {
      UVar2 = (__this->fields)._lastOffset.fields;
      fVar8 = UVar2.x;
      fVar7 = UVar2.y;
      UVar2 = (__this->fields)._basePosition.fields;
      fVar6 = UVar5.x;
      fVar9 = fVar6 - (UVar2.x + fVar8);
      fVar10 = UVar5.y - (UVar2.y + fVar7);
      if (fVar10 * fVar10 + fVar9 * fVar9 < 0.01) {
        UVar5.y = UVar5.y - fVar7;
        UVar5.x = fVar6 - fVar8;
      }
    }
    (__this->fields)._basePosition.fields = UVar5;
    pUVar4 = (__this->fields)._rect;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar5 = (__this->fields)._layoutOffset.fields;
      UVar2 = (__this->fields)._motionOffset.fields;
      fVar6 = UVar2.x + UVar5.x;
      fVar8 = UVar2.y + UVar5.y;
      UVar2.y = fVar8;
      UVar2.x = fVar6;
      UVar5 = (__this->fields)._basePosition.fields;
      value.fields.x = UVar5.x + fVar6;
      value.fields.y = UVar5.y + fVar8;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value,(MethodInfo *)0x0);
      (__this->fields)._lastOffset.fields = UVar2;
      *(undefined1 *)&(__this->fields)._hasBase = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset___ctor (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x3b07a80

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset___ctor
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


