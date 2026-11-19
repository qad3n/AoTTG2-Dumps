// Type: Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreatePreviewPlane.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__Setup (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o* __this, float depth, const MethodInfo* method);
// 0x5e88e50

void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *__this,float depth,MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *pUVar1;
  
  (__this->fields)._depth = depth;
  pUVar1 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_UI_Graphic_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._28_SetVerticesDirty.methodPtr)
            (pUVar1,(pUVar1->klass->vtable)._28_SetVerticesDirty.method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane$$SetTilt
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__SetTilt (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o* __this, UnityEngine_Vector2_o tilt, const MethodInfo* method);
// 0x5e898c0

void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__SetTilt
               (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *__this,UnityEngine_Vector2_o tilt,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_UI_Graphic_o *pUVar2;
  float fVar3;
  float fVar4;
  
  UVar1 = (__this->fields)._tilt.fields;
  fVar3 = UVar1.x - tilt.fields.x;
  fVar4 = UVar1.y - tilt.fields.y;
  if (fVar4 * fVar4 + fVar3 * fVar3 < 9.9999994e-11) {
    return;
  }
  (__this->fields)._tilt.fields = tilt.fields;
  pUVar2 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_UI_Graphic_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar2->klass->vtable)._28_SetVerticesDirty.methodPtr)
            (pUVar2,(pUVar2->klass->vtable)._28_SetVerticesDirty.method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane$$ModifyMesh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__ModifyMesh (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o* __this, UnityEngine_UI_VertexHelper_o* vertices, const MethodInfo* method);
// 0x5e8a1d0

void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__ModifyMesh
               (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *__this,
               UnityEngine_UI_VertexHelper_o *vertices,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined1 auVar2 [16];
  UnityEngine_UIVertex_o vertex;
  undefined1 auVar3 [16];
  bool bVar4;
  int32_t iVar5;
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  int i;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  float fVar10;
  float fVar11;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar12;
  UnityEngine_Rect_o UVar13;
  UnityEngine_Quaternion_o UVar14;
  UnityEngine_Vector3_o UVar15;
  float local_f8;
  float fStack_f4;
  float local_e8;
  float fStack_e4;
  UnityEngine_UIVertex_o local_c8;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_07548874 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07548874 = '\x01';
  }
  bVar4 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,(__this->klass->vtable)._9_IsActive.method);
  if (!bVar4) {
    return;
  }
  if (vertices != (UnityEngine_UI_VertexHelper_o *)0x0) {
    iVar5 = UnityEngine_UI_VertexHelper__get_currentVertCount(vertices,(MethodInfo *)0x0);
    if (iVar5 == 0) {
      return;
    }
    __this_00 = UnityEngine_UI_BaseMeshEffect__get_graphic
                          ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
    if ((__this_00 != (UnityEngine_UI_Graphic_o *)0x0) &&
       (__this_01 = UnityEngine_UI_Graphic__get_rectTransform(__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar13 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
      fVar10 = UVar13.fields.m_Width;
      fVar11 = UVar13.fields.m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (fVar10 <= 0.0) {
        return;
      }
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (fVar11 <= 0.0) {
        return;
      }
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      auVar3 = (undefined1  [16])local_c8.fields._0_16_;
      fVar6 = fVar10 * -0.2 * (__this->fields)._depth;
      UVar1 = (__this->fields)._tilt.fields;
      local_c8.fields.position.fields.y = UVar1.x * 9.0 * 0.017453292;
      local_c8.fields.position.fields.x = UVar1.y * -8.0 * 0.017453292;
      local_c8.fields.normal.fields.x = auVar3._12_4_;
      local_c8.fields.position.fields.z = 0.0;
      i = 0;
      UVar14 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
      local_38 = UVar14.fields._0_8_;
      local_48._8_4_ = in_XMM1_Dc;
      local_48._0_8_ = UVar14.fields._8_8_;
      local_48._12_4_ = in_XMM1_Dd;
      UVar1 = (__this->fields)._tilt.fields;
      local_58 = ZEXT416((uint)(__this->fields)._depth);
      local_c8.fields.position.fields = SUB1612(ZEXT816(0),0);
      local_c8.fields.normal.fields.x = 0.0;
      local_c8.fields.uv3.fields.y = 0.0;
      local_c8.fields.uv3.fields.z = 0.0;
      local_c8.fields.uv3.fields.w = 0.0;
      local_c8.fields.uv2.fields.y = 0.0;
      local_c8.fields.uv2.fields.z = 0.0;
      local_c8.fields.uv2.fields.w = 0.0;
      local_c8.fields.uv3.fields.x = 0.0;
      local_c8.fields._16_16_ = local_c8.fields._0_16_;
      local_c8.fields._32_16_ = local_c8.fields._0_16_;
      local_c8.fields._48_16_ = local_c8.fields._0_16_;
      local_c8.fields._64_16_ = local_c8.fields._0_16_;
      iVar5 = UnityEngine_UI_VertexHelper__get_currentVertCount(vertices,(MethodInfo *)0x0);
      if (iVar5 < 1) {
        return;
      }
      fVar7 = fVar11;
      if (fVar11 <= fVar10) {
        fVar7 = fVar10;
      }
      fVar12 = (float)local_58._0_4_ * fVar10 * 0.025;
      local_f8 = UVar13.fields.m_XMin;
      fStack_f4 = UVar13.fields.m_YMin;
      local_f8 = local_f8 + fVar10 * 0.5;
      fStack_f4 = fStack_f4 + fVar11 * 0.5;
      local_e8 = UVar1.x;
      fStack_e4 = UVar1.y;
      do {
        UnityEngine_UI_VertexHelper__PopulateUIVertex(vertices,&local_c8,i,(MethodInfo *)0x0);
        auVar3 = (undefined1  [16])local_c8.fields._0_16_;
        fVar10 = local_c8.fields.position.fields.y;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        UVar15.fields.x = (auVar3._0_4_ - local_f8) * 1.1;
        UVar15.fields.y = (fVar10 - fStack_f4) * 1.1;
        UVar14.fields.z = (float)local_48._0_4_;
        UVar14.fields.w = (float)local_48._4_4_;
        UVar14.fields.x = (float)(undefined4)local_38;
        UVar14.fields.y = (float)local_38._4_4_;
        UVar15.fields.z = fVar6;
        UVar15 = UnityEngine_Quaternion__op_Multiply_6905700(UVar14,UVar15,(MethodInfo *)0x0);
        auVar3 = (undefined1  [16])local_c8.fields._48_16_;
        auVar8._0_8_ = UVar15.fields._0_8_;
        auVar8._8_8_ = extraout_XMM0_Qb;
        fVar11 = (UVar15.fields.z + fVar7 * 2.5) / (fVar7 * 2.5 + fVar6);
        fVar10 = 0.01;
        if (0.01 <= fVar11) {
          fVar10 = fVar11;
        }
        auVar2._4_4_ = fVar10;
        auVar2._0_4_ = fVar10;
        auVar2._8_8_ = 0;
        auVar8 = divps(auVar8,auVar2);
        fVar11 = (auVar8._0_4_ + local_f8) - local_e8 * fVar12;
        fVar9 = (auVar8._4_4_ + fStack_f4) - fStack_e4 * fVar12;
        vertex.fields.position.fields.y = fVar9;
        vertex.fields.position.fields.x = fVar11;
        local_c8.fields.position.fields.z = 0.0;
        local_c8.fields.position.fields.x = fVar11;
        local_c8.fields.position.fields.y = fVar9;
        local_c8.fields.uv1.fields.x = fVar10;
        auVar8 = (undefined1  [16])local_c8.fields._48_16_;
        local_c8.fields.uv1.fields._4_12_ = ZEXT812(0);
        auVar2 = (undefined1  [16])local_c8.fields._64_16_;
        vertex.fields.position.fields.z = 0.0;
        vertex.fields.normal.fields.x = local_c8.fields.normal.fields.x;
        vertex.fields.normal.fields.y = local_c8.fields.normal.fields.y;
        vertex.fields.normal.fields.z = local_c8.fields.normal.fields.z;
        vertex.fields.tangent.fields.x = local_c8.fields.tangent.fields.x;
        vertex.fields.tangent.fields.y = local_c8.fields.tangent.fields.y;
        vertex.fields.tangent.fields.z = local_c8.fields.tangent.fields.z;
        vertex.fields.tangent.fields.w = local_c8.fields.tangent.fields.w;
        vertex.fields.color.fields._overlap_0 = local_c8.fields.color.fields._overlap_0;
        vertex.fields.uv0.fields.x = local_c8.fields.uv0.fields.x;
        local_c8.fields.uv0.fields.y = auVar3._0_4_;
        local_c8.fields.uv0.fields.z = auVar3._4_4_;
        vertex.fields.uv0.fields.y = local_c8.fields.uv0.fields.y;
        vertex.fields.uv0.fields.z = local_c8.fields.uv0.fields.z;
        local_c8.fields.uv0.fields.w = auVar3._8_4_;
        vertex.fields.uv0.fields.w = local_c8.fields.uv0.fields.w;
        vertex.fields.uv1.fields.x = fVar10;
        vertex.fields.uv1.fields.y = 0.0;
        vertex.fields.uv1.fields.z = 0.0;
        vertex.fields.uv1.fields.w = local_c8.fields.uv1.fields.w;
        vertex.fields.uv2.fields.x = local_c8.fields.uv2.fields.x;
        vertex.fields.uv2.fields.y = local_c8.fields.uv2.fields.y;
        vertex.fields.uv2.fields.z = local_c8.fields.uv2.fields.z;
        vertex.fields.uv2.fields.w = local_c8.fields.uv2.fields.w;
        vertex.fields.uv3.fields.x = local_c8.fields.uv3.fields.x;
        vertex.fields.uv3.fields.y = local_c8.fields.uv3.fields.y;
        vertex.fields.uv3.fields.z = local_c8.fields.uv3.fields.z;
        vertex.fields.uv3.fields.w = local_c8.fields.uv3.fields.w;
        local_c8.fields._48_16_ = auVar8;
        local_c8.fields._64_16_ = auVar2;
        UnityEngine_UI_VertexHelper__SetUIVertex(vertices,vertex,i,(MethodInfo *)0x0);
        i = i + 1;
        iVar5 = UnityEngine_UI_VertexHelper__get_currentVertCount(vertices,(MethodInfo *)0x0);
      } while (i < iVar5);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o* __this, const MethodInfo* method);
// 0x5e8a5d0

void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *__this,MethodInfo *method)

{
  UnityEngine_UI_BaseMeshEffect___ctor((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


