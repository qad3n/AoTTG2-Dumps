// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateCarouselEdge.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o* __this, bool right, const MethodInfo* method);
// 0x5e8b500

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *__this,bool right,MethodInfo *method)

{
  (__this->fields)._right = right;
  (*(__this->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this,false,(__this->klass->vtable)._25_set_raycastTarget.method);
  (*(__this->klass->vtable)._23_set_color.methodPtr)
            (__this,(UnityEngine_Color_o)ZEXT816(0),(__this->klass->vtable)._23_set_color.method);
  (*(__this->klass->vtable)._28_SetVerticesDirty.methodPtr)
            (__this,(__this->klass->vtable)._28_SetVerticesDirty.method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge$$SetOpacity
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__SetOpacity (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o* __this, float opacity, const MethodInfo* method);
// 0x5e8c3f0

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__SetOpacity
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *__this,float opacity,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Color_o UVar4;
  
  UVar4 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                    (__this,(__this->klass->vtable)._22_get_color.method);
  if (Il2CppMethodInitialized_0753e7b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_0753e7b4 = '\x01';
  }
  fVar2 = ABS(UVar4.fields.a);
  if (fVar2 <= ABS(opacity)) {
    fVar2 = ABS(opacity);
  }
  fVar3 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
  fVar1 = fVar2 * 1e-06;
  if (fVar2 * 1e-06 <= fVar3) {
    fVar1 = fVar3;
  }
  if (ABS(opacity - UVar4.fields.a) < fVar1) {
    return;
  }
  (*(__this->klass->vtable)._23_set_color.methodPtr)
            (__this,(UnityEngine_Color_o)(ZEXT416((uint)opacity) << 0x60),
             (__this->klass->vtable)._23_set_color.method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge$$OnPopulateMesh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__OnPopulateMesh (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
// 0x5e8cae0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e8ce87: movaps xmmword ptr [rsp + 0x30], xmm0
// asm:   0x5e8ce8c: movaps xmmword ptr [rsp + 0x40], xmm1
// asm:   0x5e8ce91: xorps xmm0, xmm0
// asm:   0x5e8ce94: movaps xmmword ptr [rsp + 0x60], xmm0
// asm:   0x5e8ce99: xorps xmm0, xmm0
// asm:   0x5e8ce9c: movaps xmmword ptr [rsp + 0x50], xmm0
// asm:   0x5e8cea1: jmp 0x5e8cb9e

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__OnPopulateMesh
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *__this,UnityEngine_UI_VertexHelper_o *vh
               ,MethodInfo *method)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  UnityEngine_Color32_o UVar3;
  UnityEngine_RectTransform_o *__this_00;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector4_o uv0;
  UnityEngine_Vector4_o uv0_00;
  UnityEngine_Vector4_o uv0_01;
  UnityEngine_Vector4_o uv0_02;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o position_04;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (Il2CppMethodInitialized_07548892 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07548892 = '\x01';
  }
  if (vh != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(vh,(MethodInfo *)0x0);
    __this_00 = UnityEngine_UI_Graphic__get_rectTransform
                          ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar8 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      position.fields._0_8_ = UVar8.fields._0_8_;
      if (((__this->fields)._right != false) ||
         ((*(__this->klass->vtable)._22_get_color.methodPtr)
                    (__this,(__this->klass->vtable)._22_get_color.method), (__this->fields)._right != false))
      {
        (*(__this->klass->vtable)._22_get_color.methodPtr)
                  (__this,(__this->klass->vtable)._22_get_color.method);
      }
      (*(__this->klass->vtable)._22_get_color.methodPtr)(__this,(__this->klass->vtable)._22_get_color.method);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      UVar3.fields._overlap_0 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(0);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      uv0.fields.z = 0.0;
      uv0.fields.w = 0.0;
      uv0.fields._0_8_ = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      position.fields.z = 0.0;
      UnityEngine_UI_VertexHelper__AddVert_6ce95a0(vh,position,UVar3,uv0,(MethodInfo *)0x0);
      local_98 = UVar8.fields.m_Width;
      fStack_94 = UVar8.fields.m_Height;
      local_88 = UVar8.fields.m_XMin;
      fStack_84 = UVar8.fields.m_YMin;
      fStack_80 = (float)extraout_XMM0_Qb;
      fStack_7c = (float)((ulong)extraout_XMM0_Qb >> 0x20);
      position_03.fields.x = local_98 + local_88;
      position_00.fields.y = fStack_94 + fStack_84;
      auVar4._8_4_ = in_XMM1_Dc + fStack_80;
      auVar4._12_4_ = in_XMM1_Dd + fStack_7c;
      UVar3.fields._overlap_0 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(0);
      if (Il2CppMethodInitialized_0754205f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0754205f = '\x01';
      }
      position_00.fields.x = local_88;
      uv0_00.fields.z = 0.0;
      uv0_00.fields.w = 0.0;
      uv0_00.fields._0_8_ = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
      position_00.fields.z = 0.0;
      UnityEngine_UI_VertexHelper__AddVert_6ce95a0(vh,position_00,UVar3,uv0_00,(MethodInfo *)0x0);
      auVar5._0_4_ = local_98 * 0.5 + local_88;
      UVar3.fields._overlap_0 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(0);
      auVar1._4_8_ = extraout_XMM0_Qb_00;
      auVar1._0_4_ = position_00.fields.y;
      auVar4._0_8_ = auVar1._0_8_ << 0x20;
      auVar5._4_12_ = auVar4._4_12_;
      position_01.fields._0_8_ = auVar5._0_8_;
      position_01.fields.z = 0.0;
      UnityEngine_UI_VertexHelper__AddVert_6ce95a0
                (vh,position_01,UVar3,(UnityEngine_Vector4_o)ZEXT816(0x3f8000003f000000),(MethodInfo *)0x0);
      UVar3.fields._overlap_0 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(0);
      auVar2._4_8_ = extraout_XMM0_Qb_01;
      auVar2._0_4_ = fStack_84;
      auVar6._0_8_ = auVar2._0_8_ << 0x20;
      auVar6._8_4_ = fStack_80;
      auVar6._12_4_ = fStack_7c;
      auVar7._4_12_ = auVar6._4_12_;
      auVar7._0_4_ = auVar5._0_4_;
      position_02.fields._0_8_ = auVar7._0_8_;
      position_02.fields.z = 0.0;
      UnityEngine_UI_VertexHelper__AddVert_6ce95a0
                (vh,position_02,UVar3,(UnityEngine_Vector4_o)ZEXT816(0x3f000000),(MethodInfo *)0x0);
      position_03.fields.y = position_00.fields.y;
      UVar3.fields._overlap_0 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(0);
      if (Il2CppMethodInitialized_07542885 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_07542885 = '\x01';
      }
      uv0_01.fields.z = 0.0;
      uv0_01.fields.w = 0.0;
      uv0_01.fields._0_8_ = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
      position_03.fields.z = 0.0;
      UnityEngine_UI_VertexHelper__AddVert_6ce95a0(vh,position_03,UVar3,uv0_01,(MethodInfo *)0x0);
      UVar3.fields._overlap_0 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(0);
      if (Il2CppMethodInitialized_0753e7f7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753e7f7 = '\x01';
      }
      position_04.fields.y = fStack_84;
      position_04.fields.x = position_03.fields.x;
      uv0_02.fields.z = 0.0;
      uv0_02.fields.w = 0.0;
      uv0_02.fields._0_8_ = (TypeInfo_UnityEngine_Vector2->static_fields->rightVector).fields;
      position_04.fields.z = 0.0;
      UnityEngine_UI_VertexHelper__AddVert_6ce95a0(vh,position_04,UVar3,uv0_02,(MethodInfo *)0x0);
      UnityEngine_UI_VertexHelper__AddTriangle(vh,0,1,2,(MethodInfo *)0x0);
      UnityEngine_UI_VertexHelper__AddTriangle(vh,2,3,0,(MethodInfo *)0x0);
      UnityEngine_UI_VertexHelper__AddTriangle(vh,3,2,4,(MethodInfo *)0x0);
      UnityEngine_UI_VertexHelper__AddTriangle(vh,4,5,3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o* __this, const MethodInfo* method);
// 0x5e8ceb0

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *__this,MethodInfo *method)

{
  UnityEngine_UI_MaskableGraphic___ctor((UnityEngine_UI_MaskableGraphic_o *)__this,(MethodInfo *)0x0);
  return;
}


