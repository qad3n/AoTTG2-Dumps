// Type: Gisketch.Aottg2UI.Building.GisketchLayoutOffset
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchLayoutOffset.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$get_MotionOffset
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Building_GisketchLayoutOffset__get_MotionOffset (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x1818dad90

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Building_GisketchLayoutOffset__get_MotionOffset
          (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._motionOffset.fields;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$For
// il2cpp: Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x1818dabc0

Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *
Gisketch_Aottg2UI_Building_GisketchLayoutOffset__For(UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *pGVar2;
  UnityEngine_GameObject_o *__this;
  
  if (Il2CppMethodInitialized_184342132 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchLayoutOffset);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLayoutOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342132 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      pGVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)rect,
                          (MethodInfo_6651A0 *)
                          MethodInfo_UnityEngine_Component_GetComponent_GisketchLayoutOffset);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return pGVar2;
      }
      __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        pGVar2 = UnityEngine_GameObject__AddComponent_object_
                           (__this,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLayoutOffset);
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
        }
        if (pGVar2 != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
          Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Setup
                    (pGVar2,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          return pGVar2;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Setup (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x1818dad20

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Setup
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,UnityEngine_Vector2_o offset,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *value;
  
  if (Il2CppMethodInitialized_184342133 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_184342133 = '\x01';
  }
  (__this->fields)._layoutOffset.fields = offset.fields;
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  (__this->fields)._rect = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rect,value);
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$SetMotionOffset
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x1818dad10

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__SetMotionOffset
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,UnityEngine_Vector2_o offset,
               MethodInfo *method)

{
  (__this->fields)._motionOffset.fields = offset.fields;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__LateUpdate (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x1818dad00

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__LateUpdate
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$Apply
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x1818daa30

void Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply
               (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_o value;
  bool bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Vector2_Fields UVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_184342134 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342134 = '\x01';
  }
  pUVar4 = (__this->fields)._rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar4 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    (__this->fields)._rect = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rect,pUVar4);
  }
  pUVar4 = (__this->fields)._rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pUVar4 = (__this->fields)._rect;
  if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_anchoredPosition(pUVar4,(MethodInfo *)0x0);
    fStackX_c = UVar5.y;
    if (((__this->fields)._hasBase != false) &&
       (fVar8 = UVar5.x,
       fVar7 = fVar8 - ((__this->fields)._lastOffset.fields.x + (__this->fields)._basePosition.fields.x),
       fVar6 = fStackX_c - ((__this->fields)._lastOffset.fields.y + (__this->fields)._basePosition.fields.y),
       fVar6 * fVar6 + fVar7 * fVar7 < 0.01)) {
      UVar5.y = 0.0;
      UVar5.x = fVar8 - (__this->fields)._lastOffset.fields.x;
      fStackX_c = fStackX_c - (__this->fields)._lastOffset.fields.y;
    }
    UVar1 = (__this->fields)._layoutOffset.fields;
    UVar2 = (__this->fields)._motionOffset.fields;
    pUVar4 = (__this->fields)._rect;
    fVar6 = UVar2.x + UVar1.x;
    fVar7 = UVar2.y + UVar1.y;
    (__this->fields)._basePosition.fields.x = UVar5.x;
    (__this->fields)._basePosition.fields.y = fStackX_c;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.y = fVar7 + fStackX_c;
      value.fields.x = fVar6 + UVar5.x;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value,(MethodInfo *)0x0);
      UVar1.y = fVar7;
      UVar1.x = fVar6;
      (__this->fields)._lastOffset.fields = UVar1;
      (__this->fields)._hasBase = true;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchLayoutOffset$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchLayoutOffset___ctor (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Building_GisketchLayoutOffset___ctor(Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


