// Type: Gisketch.Aottg2UI.Building.GisketchLayoutOffset
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchLayoutOffset.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$get_MotionOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Building_GisketchLayoutOffset__get_MotionOffset (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x537b970

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Building_GisketchLayoutOffset__get_MotionOffset
          (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._motionOffset.fields;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$For
// il2cpp: Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x537b980

Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *
Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar3;
  UnityEngine_GameObject_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542ab1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchLayoutOffset);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLayoutOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542ab1 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    pGVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)rect,
                        (MethodInfo_34B0830 *)
                        MethodInfo_UnityEngine_Component_GetComponent_GisketchLayoutOffset);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return pGVar3;
    }
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pGVar3 = UnityEngine_GameObject__AddComponent_object_
                         (__this,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLayoutOffset);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
        UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
        if (Il2CppMethodInitialized_07542ab2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
          Il2CppMethodInitialized_07542ab2 = '\x01';
        }
        (pGVar3->fields)._layoutOffset.fields = UVar1;
        method_00 = (MethodInfo *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pGVar3,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        (pGVar3->fields)._rect = (UnityEngine_RectTransform_o *)method_00;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields)._rect);
        Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(pGVar3,method_00);
        return pGVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Setup (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x537bb00

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Setup
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,UnityEngine_Vector2_o offset,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542ab2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_07542ab2 = '\x01';
  }
  (__this->fields)._layoutOffset.fields = offset.fields;
  method_00 = (MethodInfo *)
              UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  (__this->fields)._rect = (UnityEngine_RectTransform_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rect);
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$SetMotionOffset
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x537bcd0

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,UnityEngine_Vector2_o offset,
               MethodInfo *method)

{
  (__this->fields)._motionOffset.fields = offset.fields;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__LateUpdate (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x537bce0

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__LateUpdate
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this,method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$Apply
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x537bb60

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Vector2_Fields UVar5;
  UnityEngine_Vector2_o value;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (Il2CppMethodInitialized_07542ab3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542ab3 = '\x01';
  }
  pUVar4 = (__this->fields)._rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._rect;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar4 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    (__this->fields)._rect = pUVar4;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pUVar4 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_anchoredPosition(*targetAddress,(MethodInfo *)0x0);
    if ((__this->fields)._hasBase != false) {
      UVar1 = (__this->fields)._basePosition.fields;
      UVar2 = (__this->fields)._lastOffset.fields;
      fVar6 = UVar2.x;
      fVar8 = UVar2.y;
      fVar7 = UVar5.y;
      fVar9 = UVar5.x - (UVar1.x + fVar6);
      fVar10 = fVar7 - (UVar1.y + fVar8);
      if (0.01 <= fVar10 * fVar10 + fVar9 * fVar9) {
        fVar6 = 0.0;
        fVar8 = 0.0;
      }
      UVar5.x = UVar5.x - fVar6;
      UVar5.y = fVar7 - fVar8;
    }
    (__this->fields)._basePosition.fields = UVar5;
    pUVar4 = (__this->fields)._rect;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar5 = (__this->fields)._layoutOffset.fields;
      UVar1 = (__this->fields)._motionOffset.fields;
      fVar7 = UVar1.x + UVar5.x;
      fVar6 = UVar1.y + UVar5.y;
      UVar1.y = fVar6;
      UVar1.x = fVar7;
      UVar5 = (__this->fields)._basePosition.fields;
      value.fields.x = UVar5.x + fVar7;
      value.fields.y = UVar5.y + fVar6;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value,(MethodInfo *)0x0);
      (__this->fields)._lastOffset.fields = UVar1;
      (__this->fields)._hasBase = true;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset___ctor (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x537bcf0

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset___ctor
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


