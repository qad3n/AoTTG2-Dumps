// Type: UI.ViewportScaler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/ViewportScaler.cs
// Prior real C# source: none
// --------------------------------

// UI.ViewportScaler$$ApplyScale
// il2cpp: void UI_ViewportScaler__ApplyScale (UI_ViewportScaler_o* __this, const MethodInfo* method);
// 0x5cecea0
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cecf74: xorps xmm0, xmm0
// asm:   0x5cecf77: ucomiss xmm0, xmm1
// asm:   0x5cecf7a: jb 0x5cecf9a
// asm:   0x5cecf7c: jmp 0x5ced0df
// asm:   0x5cecfb1: shufps xmm1, xmm1, 0x55
// asm:   0x5cecfb5: xorps xmm0, xmm0
// asm:   0x5cecfb8: ucomiss xmm0, xmm1
// asm:   0x5cecfbb: jb 0x5cecfdf
// asm:   0x5cecfbd: jmp 0x5ced0df

void UI_ViewportScaler__ApplyScale(UI_ViewportScaler_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *__this_01;
  undefined1 auVar5 [12];
  float fVar4;
  float fVar7;
  undefined1 auVar6 [16];
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Rect_o UVar13;
  undefined1 local_58 [12];
  float fStack_4c;
  float local_48;
  
  if (Il2CppMethodInitialized_07547c6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547c6d = '\x01';
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
label_05ced0eb:
    ThrowNullReferenceException();
  }
  if (__this_00->klass != TypeInfo_UnityEngine_RectTransform) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = (UnityEngine_RectTransform_o *)0x0, pUVar3->klass == TypeInfo_UnityEngine_RectTransform)) {
    __this_01 = pUVar3;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    UVar12 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (0.0 < UVar12.fields.m_Width) {
      UVar12 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      fVar4 = UVar12.fields.m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (0.0 < fVar4) {
        fVar7 = fVar4;
        UVar12 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
        local_58._8_4_ = fVar4;
        local_58._0_8_ = UVar12.fields._8_8_;
        fStack_4c = fVar7;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto label_05ced0eb;
        UVar1 = (__this->fields).ContentSize.fields;
        UVar12 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
        UVar13 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = UVar1;
        auVar6 = maxps(_local_58,auVar6);
        local_48 = UVar12.fields.m_Width;
        auVar10._0_4_ = local_48 * (float)0x3f666666;
        auVar10._4_4_ = UVar13.fields.m_Height * (float)0x3f666666;
        auVar10._8_4_ = fVar4 * 0.0;
        auVar10._12_4_ = fVar7 * 0.0;
        auVar6 = divps(auVar10,auVar6);
        fVar4 = auVar6._0_4_;
        if (auVar6._4_4_ <= auVar6._0_4_) {
          fVar4 = auVar6._4_4_;
        }
        auVar5 = ZEXT812(0x3f800000);
        if (fVar4 <= auVar5._0_4_) {
          auVar5._4_8_ = auVar5._4_8_;
          auVar5._0_4_ = fVar4;
        }
        fVar8 = (float)(-(uint)(0.0 <= fVar4) & auVar5._0_4_);
        (__this->fields).Scale = fVar8;
        UVar11 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0)
        ;
        fVar9 = UVar11.fields.z + -1.0;
        fVar4 = UVar11.fields.x - fVar8;
        fVar7 = UVar11.fields.y - fVar8;
        if (9.9999994e-11 <= fVar9 * fVar9 + fVar7 * fVar7 + fVar4 * fVar4) {
          UVar11.fields.y = fVar8;
          UVar11.fields.x = fVar8;
          UVar11.fields.z = 1.0;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_00,UVar11,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
  return;
}


// UI.ViewportScaler$$LateUpdate
// il2cpp: void UI_ViewportScaler__LateUpdate (UI_ViewportScaler_o* __this, const MethodInfo* method);
// 0x5ced100

void UI_ViewportScaler__LateUpdate(UI_ViewportScaler_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._5_ApplyScale.methodPtr)(__this,(__this->klass->vtable)._5_ApplyScale.method);
  return;
}


// UI.ViewportScaler$$.ctor
// il2cpp: void UI_ViewportScaler___ctor (UI_ViewportScaler_o* __this, const MethodInfo* method);
// 0x5ced120

void UI_ViewportScaler___ctor(UI_ViewportScaler_o *__this,MethodInfo *method)

{
  (__this->fields).Scale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


