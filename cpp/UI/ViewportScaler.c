// Type: UI.ViewportScaler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/ViewportScaler.cs
// Prior real C# source: none
// --------------------------------

// UI.ViewportScaler$$ApplyScale
// il2cpp: void UI_ViewportScaler__ApplyScale (UI_ViewportScaler_o* __this, const MethodInfo* method);
// 0x18221b790

void UI_ViewportScaler__ApplyScale(UI_ViewportScaler_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Rect_o *pUVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_RectTransform_o *__this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Rect_o local_78 [7];
  
  if (Il2CppMethodInitialized_184347100 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347100 = '\x01';
  }
  pUVar2 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar2->klass == TypeInfo_UnityEngine_RectTransform) {
      __this_00 = pUVar2;
    }
    if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__GetParent((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar3->klass == TypeInfo_UnityEngine_RectTransform)) {
      pUVar2 = pUVar3;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      pUVar4 = UnityEngine_RectTransform__get_rect(local_78,__this_00,(MethodInfo *)0x0);
      fVar9 = (pUVar4->fields).m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (0.0 < fVar9) {
        pUVar4 = UnityEngine_RectTransform__get_rect(local_78,__this_00,(MethodInfo *)0x0);
        fVar9 = (pUVar4->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (0.0 < fVar9) {
          pUVar4 = UnityEngine_RectTransform__get_rect(local_78,__this_00,(MethodInfo *)0x0);
          fVar9 = (pUVar4->fields).m_Width;
          fVar6 = (pUVar4->fields).m_Height;
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          fVar7 = (__this->fields).ContentSize.fields.x;
          fVar8 = (__this->fields).ContentSize.fields.y;
          if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_18221ba55;
          pUVar4 = UnityEngine_RectTransform__get_rect(local_78,pUVar2,(MethodInfo *)0x0);
          if (fVar6 <= fVar8) {
            fVar6 = fVar8;
          }
          fVar8 = (pUVar4->fields).m_Width;
          pUVar4 = UnityEngine_RectTransform__get_rect(local_78,pUVar2,(MethodInfo *)0x0);
          if (fVar9 <= fVar7) {
            fVar9 = fVar7;
          }
          fVar9 = (fVar8 * 0.9) / fVar9;
          fVar6 = ((pUVar4->fields).m_Height * 0.9) / fVar6;
          if (fVar6 <= fVar9) {
            fVar9 = fVar6;
          }
          if (fVar9 < 0.0) {
            fVar9 = 0.0;
          }
          else if (1.0 < fVar9) {
            fVar9 = 1.0;
          }
          (__this->fields).Scale = fVar9;
          pUVar5 = UnityEngine_Transform__get_localScale
                             ((UnityEngine_Vector3_o *)local_78,(UnityEngine_Transform_o *)__this_00,
                              (MethodInfo *)0x0);
          fVar7 = (pUVar5->fields).x - fVar9;
          fVar8 = (pUVar5->fields).y - fVar9;
          fVar6 = (pUVar5->fields).z - 1.0;
          if (9.9999994e-11 <= fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) {
            local_78[0].fields.m_Width = 1.0;
            local_78[0].fields.m_XMin = fVar9;
            local_78[0].fields.m_YMin = fVar9;
            UnityEngine_Transform__set_localScale
                      ((UnityEngine_Transform_o *)__this_00,(UnityEngine_Vector3_o *)local_78,
                       (MethodInfo *)0x0);
          }
        }
      }
    }
    return;
  }
label_18221ba55:
  ThrowNullReferenceException();
}


// UI.ViewportScaler$$LateUpdate
// il2cpp: void UI_ViewportScaler__LateUpdate (UI_ViewportScaler_o* __this, const MethodInfo* method);
// 0x1821b8ea0

void
UI_ViewportScaler__LateUpdate(UI_ViewportScaler_o* __this, MethodInfo* method)

{
  (*(__this->klass->vtable)._5_Cancel.methodPtr)(__this,(__this->klass->vtable)._5_Cancel.method);
  return;
}


// UI.ViewportScaler$$.ctor
// il2cpp: void UI_ViewportScaler___ctor (UI_ViewportScaler_o* __this, const MethodInfo* method);
// 0x182206f90

void UI_ViewportScaler___ctor(UI_ViewportScaler_o *__this,MethodInfo *method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


