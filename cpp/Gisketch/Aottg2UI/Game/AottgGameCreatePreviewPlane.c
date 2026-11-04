// Type: Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreatePreviewPlane.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__Setup (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o* __this, float depth, const MethodInfo* method);
// 0x1823cd7b0

void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *__this,float depth,MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *pUVar1;
  
  (__this->fields)._depth = depth;
  pUVar1 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_UI_Graphic_o *)0x0) {
    (*(pUVar1->klass->vtable)._28_SetVerticesDirty.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._28_SetVerticesDirty.method);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane$$SetTilt
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__SetTilt (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o* __this, UnityEngine_Vector2_o tilt, const MethodInfo* method);
// 0x1823cd740

void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__SetTilt
               (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *__this,UnityEngine_Vector2_o tilt,
               MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *pUVar1;
  float fVar2;
  float fStackX_c;
  
  fVar2 = (__this->fields)._tilt.fields.x - tilt.fields.x;
  fStackX_c = tilt.fields.y;
  fStackX_c = (__this->fields)._tilt.fields.y - fStackX_c;
  if (fStackX_c * fStackX_c + fVar2 * fVar2 < 9.9999994e-11) {
    return;
  }
  (__this->fields)._tilt.fields = tilt.fields;
  pUVar1 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_UI_Graphic_o *)0x0) {
    (*(pUVar1->klass->vtable)._28_SetVerticesDirty.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._28_SetVerticesDirty.method);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane$$ModifyMesh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__ModifyMesh (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o* __this, UnityEngine_UI_VertexHelper_o* vertices, const MethodInfo* method);
// 0x1823cd270
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823cd404: movaps xmm12, xmm8
// asm:   0x1823cd6c4: movaps xmm7, xmmword ptr [rsp + 0x1d0]
// asm:   0x1823cd6cc: mov rsi, qword ptr [rsp + 0x218]
// asm:   0x1823cd6d4: movaps xmm12, xmmword ptr [rsp + 0x180]
// asm:   0x1823cd6dd: movaps xmm11, xmmword ptr [rsp + 0x190]
// asm:   0x1823cd6e6: movaps xmm10, xmmword ptr [rsp + 0x1a0]
// asm:   0x1823cd6ef: movaps xmm15, xmmword ptr [rsp + 0x150]
// asm:   0x1823cd6f8: movaps xmm8, xmmword ptr [rsp + 0x1c0]
// asm:   0x1823cd701: movaps xmm9, xmmword ptr [rsp + 0x1b0]
// asm:   0x1823cd70a: movaps xmm6, xmmword ptr [rsp + 0x1e0]
// asm:   0x1823cd712: movaps xmm13, xmmword ptr [rsp + 0x170]
// asm:   0x1823cd71b: movaps xmm14, xmmword ptr [rsp + 0x160]

void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane__ModifyMesh
               (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *__this,
               UnityEngine_UI_VertexHelper_o *vertices,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int32_t iVar8;
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Rect_o *pUVar9;
  UnityEngine_Quaternion_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  int i;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o local_1e8;
  float local_1d8;
  float local_1d4;
  UnityEngine_UIVertex_o local_1c8;
  UnityEngine_Rect_Fields local_158;
  UnityEngine_Rect_Fields local_148;
  UnityEngine_Vector3_o local_138;
  UnityEngine_UIVertex_o local_128 [2];
  
  if (Il2CppMethodInitialized_184347d50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347d50 = '\x01';
  }
  local_1c8.fields.uv2.fields.y = 0.0;
  local_1c8.fields.uv2.fields.z = 0.0;
  local_1c8.fields.uv2.fields.w = 0.0;
  local_1c8.fields.position.fields.x = 0.0;
  local_1c8.fields.position.fields.y = 0.0;
  local_1c8.fields.position.fields.z = 0.0;
  local_1c8.fields.normal.fields.x = 0.0;
  local_1c8.fields.normal.fields.y = 0.0;
  local_1c8.fields.normal.fields.z = 0.0;
  local_1c8.fields.tangent.fields.x = 0.0;
  local_1c8.fields.tangent.fields.y = 0.0;
  local_1c8.fields.tangent.fields.z = 0.0;
  local_1c8.fields.tangent.fields.w = 0.0;
  local_1c8.fields.color.fields._overlap_0 = (UnityEngine_Color32_Fields)0x0;
  local_1c8.fields.uv0.fields.x = 0.0;
  local_1c8.fields.uv0.fields.y = 0.0;
  local_1c8.fields.uv0.fields.z = 0.0;
  local_1c8.fields.uv0.fields.w = 0.0;
  local_1c8.fields.uv1.fields.x = 0.0;
  local_1c8.fields.uv1.fields.y = 0.0;
  local_1c8.fields.uv1.fields.z = 0.0;
  local_1c8.fields.uv1.fields.w = 0.0;
  local_1c8.fields.uv2.fields.x = 0.0;
  local_1c8.fields.uv3.fields.x = 0.0;
  local_1c8.fields.uv3.fields.y = 0.0;
  local_1c8.fields.uv3.fields.z = 0.0;
  local_1c8.fields.uv3.fields.w = 0.0;
  bVar7 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,(__this->klass->vtable)._9_IsActive.method);
  if (bVar7) {
    if (vertices == (UnityEngine_UI_VertexHelper_o *)0x0) {
label_1823cd72f:
      ThrowNullReferenceException();
    }
    iVar8 = UnityEngine_UI_VertexHelper__get_currentVertCount(vertices,(MethodInfo *)0x0);
    if (iVar8 != 0) {
      __this_00 = UnityEngine_UI_BaseMeshEffect__get_graphic
                            ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
      if ((__this_00 == (UnityEngine_UI_Graphic_o *)0x0) ||
         (__this_01 = UnityEngine_UI_Graphic__get_rectTransform(__this_00,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_RectTransform_o *)0x0)) goto label_1823cd72f;
      pUVar9 = UnityEngine_RectTransform__get_rect
                         ((UnityEngine_Rect_o *)&local_158,__this_01,(MethodInfo *)0x0);
      fVar1 = (pUVar9->fields).m_XMin;
      fVar2 = (pUVar9->fields).m_YMin;
      fVar3 = (pUVar9->fields).m_Width;
      fVar4 = (pUVar9->fields).m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (0.0 < fVar3) {
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (0.0 < fVar4) {
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          fVar13 = fVar3;
          if (fVar3 < fVar4) {
            fVar13 = fVar4;
          }
          local_1e8.fields.z = 0.0;
          fVar12 = -fVar3 * 0.2 * (__this->fields)._depth;
          local_1e8.fields.x = -(__this->fields)._tilt.fields.y * 8.0 * 0.017453292;
          local_1e8.fields.y = (__this->fields)._tilt.fields.x * 9.0 * 0.017453292;
          pUVar10 = UnityEngine_Quaternion__Internal_FromEulerRad
                              ((UnityEngine_Quaternion_o *)&local_158,&local_1e8,(MethodInfo *)0x0);
          local_148.m_XMin = (pUVar10->fields).x;
          local_148.m_YMin = (pUVar10->fields).y;
          local_148.m_Width = (pUVar10->fields).z;
          local_148.m_Height = (pUVar10->fields).w;
          local_1d4 = fVar3 * (__this->fields)._depth * 0.025;
          local_1d8 = -(__this->fields)._tilt.fields.x * local_1d4;
          local_1d4 = -(__this->fields)._tilt.fields.y * local_1d4;
          local_1c8.fields.uv2.fields.y = 0.0;
          local_1c8.fields.uv2.fields.z = 0.0;
          local_1c8.fields.uv2.fields.w = 0.0;
          local_1c8.fields.position.fields.x = 0.0;
          local_1c8.fields.position.fields.y = 0.0;
          local_1c8.fields.position.fields.z = 0.0;
          local_1c8.fields.normal.fields.x = 0.0;
          local_1c8.fields.normal.fields.y = 0.0;
          local_1c8.fields.normal.fields.z = 0.0;
          local_1c8.fields.tangent.fields.x = 0.0;
          local_1c8.fields.tangent.fields.y = 0.0;
          local_1c8.fields.tangent.fields.z = 0.0;
          local_1c8.fields.tangent.fields.w = 0.0;
          local_1c8.fields.color.fields._overlap_0 = (UnityEngine_Color32_Fields)0x0;
          local_1c8.fields.uv0.fields.x = 0.0;
          local_1c8.fields.uv0.fields.y = 0.0;
          local_1c8.fields.uv0.fields.z = 0.0;
          local_1c8.fields.uv0.fields.w = 0.0;
          local_1c8.fields.uv1.fields.x = 0.0;
          local_1c8.fields.uv1.fields.y = 0.0;
          local_1c8.fields.uv1.fields.z = 0.0;
          local_1c8.fields.uv1.fields.w = 0.0;
          local_1c8.fields.uv2.fields.x = 0.0;
          local_1c8.fields.uv3.fields.x = 0.0;
          local_1c8.fields.uv3.fields.y = 0.0;
          local_1c8.fields.uv3.fields.z = 0.0;
          local_1c8.fields.uv3.fields.w = 0.0;
          for (i = 0; iVar8 = UnityEngine_UI_VertexHelper__get_currentVertCount(vertices,(MethodInfo *)0x0),
              i < iVar8; i = i + 1) {
            UnityEngine_UI_VertexHelper__PopulateUIVertex(vertices,&local_1c8,i,(MethodInfo *)0x0);
            fVar5 = local_1c8.fields.position.fields.x;
            fVar6 = local_1c8.fields.position.fields.y;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            local_1e8.fields.x = (fVar5 - (fVar3 * 0.5 + fVar1)) * 1.1;
            local_1e8.fields.y = (fVar6 - (fVar4 * 0.5 + fVar2)) * 1.1;
            local_158.m_XMin = local_148.m_XMin;
            local_158.m_YMin = local_148.m_YMin;
            local_158.m_Width = local_148.m_Width;
            local_158.m_Height = local_148.m_Height;
            local_1e8.fields.z = fVar12;
            pUVar11 = UnityEngine_Quaternion__op_Multiply_2f08cb0
                                (&local_138,(UnityEngine_Quaternion_o *)&local_158,&local_1e8,
                                 (MethodInfo *)0x0);
            local_128[0].fields.uv1.fields.x = (fVar13 * 2.5 + (pUVar11->fields).z) / (fVar12 + fVar13 * 2.5);
            if (local_128[0].fields.uv1.fields.x < 0.01) {
              local_128[0].fields.uv1.fields.x = 0.01;
            }
            local_128[0].fields.normal.fields.x = local_1c8.fields.normal.fields.x;
            local_1c8.fields.uv1.fields.y = 0.0;
            local_1c8.fields.uv1.fields.z = 0.0;
            local_1c8.fields._72_8_ = local_1c8.fields._72_8_ & 0xffffffff00000000;
            local_128[0].fields.position.fields.x =
                 local_1d8 + (pUVar11->fields).x / local_128[0].fields.uv1.fields.x + fVar3 * 0.5 + fVar1;
            local_128[0].fields.position.fields.y =
                 local_1d4 + (pUVar11->fields).y / local_128[0].fields.uv1.fields.x + fVar4 * 0.5 + fVar2;
            local_1c8.fields.position.fields.y = local_128[0].fields.position.fields.y;
            local_1c8.fields.position.fields.x = local_128[0].fields.position.fields.x;
            local_1c8.fields._8_8_ = (ulonglong)(uint)local_128[0].fields.normal.fields.x << 0x20;
            local_128[0].fields.position.fields.z = 0.0;
            local_128[0].fields.normal.fields.y = local_1c8.fields.normal.fields.y;
            local_128[0].fields.normal.fields.z = local_1c8.fields.normal.fields.z;
            local_128[0].fields.tangent.fields.x = local_1c8.fields.tangent.fields.x;
            local_128[0].fields.tangent.fields.y = local_1c8.fields.tangent.fields.y;
            local_128[0].fields.tangent.fields.z = local_1c8.fields.tangent.fields.z;
            local_128[0].fields.tangent.fields.w = local_1c8.fields.tangent.fields.w;
            local_128[0].fields.color.fields._overlap_0 = local_1c8.fields.color.fields._overlap_0;
            local_128[0].fields.uv0.fields.x = local_1c8.fields.uv0.fields.x;
            local_1c8.fields.uv1.fields.x = local_128[0].fields.uv1.fields.x;
            local_128[0].fields.uv0.fields.y = local_1c8.fields.uv0.fields.y;
            local_128[0].fields.uv0.fields.z = local_1c8.fields.uv0.fields.z;
            local_128[0].fields.uv0.fields.w = local_1c8.fields.uv0.fields.w;
            local_128[0].fields.uv1.fields.y = 0.0;
            local_128[0].fields.uv1.fields.z = 0.0;
            local_128[0].fields.uv1.fields.w = local_1c8.fields.uv1.fields.w;
            local_128[0].fields.uv2.fields.x = local_1c8.fields.uv2.fields.x;
            local_128[0].fields.uv2.fields.y = local_1c8.fields.uv2.fields.y;
            local_128[0].fields.uv2.fields.z = local_1c8.fields.uv2.fields.z;
            local_128[0].fields.uv2.fields.w = local_1c8.fields.uv2.fields.w;
            local_128[0].fields.uv3.fields.x = local_1c8.fields.uv3.fields.x;
            local_128[0].fields.uv3.fields.y = local_1c8.fields.uv3.fields.y;
            local_128[0].fields.uv3.fields.z = local_1c8.fields.uv3.fields.z;
            local_128[0].fields.uv3.fields.w = local_1c8.fields.uv3.fields.w;
            UnityEngine_UI_VertexHelper__SetUIVertex(vertices,local_128,i,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o* __this, const MethodInfo* method);
// 0x181e68d20

void
Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o* __this, MethodInfo* method)

{
  UnityEngine_UI_BaseMeshEffect___ctor
            ((Photon_Voice_PUN_UtilityScripts_VoiceDebugScript_o *)__this,(MethodInfo *)0x0);
  return;
}


