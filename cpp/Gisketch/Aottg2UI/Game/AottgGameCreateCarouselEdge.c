// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateCarouselEdge.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o* __this, bool right, const MethodInfo* method);
// 0x1823be600

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *__this,bool right,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_c *pGVar1;
  UnityEngine_Color_Fields local_18;
  
  pGVar1 = __this->klass;
  (__this->fields)._right = right;
  (*(pGVar1->vtable)._25_set_raycastTarget.methodPtr)
            (__this,false,(pGVar1->vtable)._25_set_raycastTarget.method);
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 0.0;
  (*(__this->klass->vtable)._23_set_color.methodPtr)
            (__this,(UnityEngine_Color_o *)&local_18,(__this->klass->vtable)._23_set_color.method);
  (*(__this->klass->vtable)._28_SetVerticesDirty.methodPtr)
            (__this,(__this->klass->vtable)._28_SetVerticesDirty.method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge$$SetOpacity
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__SetOpacity (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o* __this, float opacity, const MethodInfo* method);
// 0x1823be580

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__SetOpacity
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *__this,float opacity,MethodInfo *method)

{
  char cVar1;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar2;
  UnityEngine_Color_Fields local_28 [2];
  
  pUVar2 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                     ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_28,__this,
                      (__this->klass->vtable)._22_get_color.method);
  cVar1 = il2cpp_runtime_helper_180562af0(*(undefined4 *)&(pUVar2->fields).field_0xc,opacity,0);
  if (cVar1 == '\0') {
    local_28[0].r = 0.0;
    local_28[0].g = 0.0;
    local_28[0].b = 0.0;
    local_28[0].a = opacity;
    (*(__this->klass->vtable)._23_set_color.methodPtr)
              (__this,(UnityEngine_Color_o *)local_28,(__this->klass->vtable)._23_set_color.method);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge$$OnPopulateMesh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__OnPopulateMesh (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
// 0x1823bdfb0

void Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge__OnPopulateMesh
               (Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o *__this,UnityEngine_UI_VertexHelper_o *vh
               ,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Color32_o UVar5;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Rect_o *pUVar6;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int32_t iVar15;
  undefined4 uVar16;
  UnityEngine_Color_o local_d8;
  UnityEngine_Vector2_Fields local_c8;
  undefined8 uStack_c0;
  
  if (Il2CppMethodInitialized_184347d5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347d5f = '\x01';
  }
  if (vh != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(vh,(MethodInfo *)0x0);
    __this_00 = UnityEngine_UI_Graphic__get_rectTransform
                          ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar6 = UnityEngine_RectTransform__get_rect
                         ((UnityEngine_Rect_o *)&local_c8,__this_00,(MethodInfo *)0x0);
      fVar10 = 0.0;
      fVar1 = (pUVar6->fields).m_XMin;
      fVar2 = (pUVar6->fields).m_YMin;
      fVar3 = (pUVar6->fields).m_Width;
      fVar4 = (pUVar6->fields).m_Height;
      if ((__this->fields)._right == false) {
        pUVar7 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                           ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_c8,__this
                            ,(__this->klass->vtable)._22_get_color.method);
        fVar9 = *(float *)&(pUVar7->fields).m_Ptr;
        fVar11 = *(float *)((longlong)&(pUVar7->fields).m_Ptr + 4);
        fVar12 = (float)(pUVar7->fields).m_Count;
        fVar13 = *(float *)&(pUVar7->fields).field_0xc;
      }
      else {
        fVar9 = 0.0;
        fVar11 = 0.0;
        fVar12 = 0.0;
        fVar13 = 0.0;
      }
      if ((__this->fields)._right == false) {
        fVar14 = 0.0;
        iVar15 = 0;
        uVar16 = 0;
      }
      else {
        pUVar7 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                           ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_c8,__this
                            ,(__this->klass->vtable)._22_get_color.method);
        fVar10 = *(float *)&(pUVar7->fields).m_Ptr;
        fVar14 = *(float *)((longlong)&(pUVar7->fields).m_Ptr + 4);
        iVar15 = (pUVar7->fields).m_Count;
        uVar16 = *(undefined4 *)&(pUVar7->fields).field_0xc;
      }
      pUVar7 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                         ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_c8,__this,
                          (__this->klass->vtable)._22_get_color.method);
      fVar8 = *(float *)&(pUVar7->fields).field_0xc * 0.75;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      local_d8.fields.r = fVar9;
      local_d8.fields.g = fVar11;
      local_d8.fields.b = fVar12;
      local_d8.fields.a = fVar13;
      UVar5 = UnityEngine_Color32__op_Implicit(&local_d8,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      uStack_c0 = 0;
      local_d8.fields.b = 0.0;
      local_c8 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      local_d8.fields.r = fVar1;
      local_d8.fields.g = fVar2;
      UnityEngine_UI_VertexHelper__AddVert_32eeec0
                (vh,(UnityEngine_Vector3_o *)&local_d8,UVar5,(UnityEngine_Vector4_o *)&local_c8,
                 (MethodInfo *)0x0);
      local_c8.y = fVar11;
      local_c8.x = fVar9;
      uStack_c0 = CONCAT44(fVar13,fVar12);
      UVar5 = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)&local_c8,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341707 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_184341707 = '\x01';
      }
      uStack_c0 = 0;
      local_d8.fields.b = 0.0;
      local_c8 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
      local_d8.fields.r = fVar1;
      local_d8.fields.g = fVar2 + fVar4;
      UnityEngine_UI_VertexHelper__AddVert_32eeec0
                (vh,(UnityEngine_Vector3_o *)&local_d8,UVar5,(UnityEngine_Vector4_o *)&local_c8,
                 (MethodInfo *)0x0);
      local_c8.x = 0.0;
      local_c8.y = 0.0;
      uStack_c0 = (ulonglong)(uint)fVar8 << 0x20;
      UVar5 = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)&local_c8,(MethodInfo *)0x0);
      local_c8.x = 0.5;
      local_c8.y = 1.0;
      uStack_c0 = 0;
      local_d8.fields.b = 0.0;
      local_d8.fields.g = fVar2 + fVar4;
      local_d8.fields.r = fVar3 * 0.5 + fVar1;
      UnityEngine_UI_VertexHelper__AddVert_32eeec0
                (vh,(UnityEngine_Vector3_o *)&local_d8,UVar5,(UnityEngine_Vector4_o *)&local_c8,
                 (MethodInfo *)0x0);
      local_c8.x = 0.0;
      local_c8.y = 0.0;
      uStack_c0 = (ulonglong)(uint)fVar8 << 0x20;
      UVar5 = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)&local_c8,(MethodInfo *)0x0);
      local_c8.x = 0.5;
      local_c8.y = 0.0;
      uStack_c0 = 0;
      local_d8.fields.b = 0.0;
      local_d8.fields.r = fVar3 * 0.5 + fVar1;
      local_d8.fields.g = fVar2;
      UnityEngine_UI_VertexHelper__AddVert_32eeec0
                (vh,(UnityEngine_Vector3_o *)&local_d8,UVar5,(UnityEngine_Vector4_o *)&local_c8,
                 (MethodInfo *)0x0);
      local_c8.y = fVar14;
      local_c8.x = fVar10;
      uStack_c0 = CONCAT44(uVar16,iVar15);
      UVar5 = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)&local_c8,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341f36 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_184341f36 = '\x01';
      }
      uStack_c0 = 0;
      local_d8.fields.b = 0.0;
      local_c8 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
      local_d8.fields.r = fVar3 + fVar1;
      local_d8.fields.g = fVar2 + fVar4;
      UnityEngine_UI_VertexHelper__AddVert_32eeec0
                (vh,(UnityEngine_Vector3_o *)&local_d8,UVar5,(UnityEngine_Vector4_o *)&local_c8,
                 (MethodInfo *)0x0);
      uStack_c0 = CONCAT44(uVar16,iVar15);
      UVar5 = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)&local_c8,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433df27 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433df27 = '\x01';
      }
      uStack_c0 = 0;
      local_d8.fields.b = 0.0;
      local_c8 = (TypeInfo_UnityEngine_Vector2->static_fields->rightVector).fields;
      local_d8.fields.r = fVar3 + fVar1;
      local_d8.fields.g = fVar2;
      UnityEngine_UI_VertexHelper__AddVert_32eeec0
                (vh,(UnityEngine_Vector3_o *)&local_d8,UVar5,(UnityEngine_Vector4_o *)&local_c8,
                 (MethodInfo *)0x0);
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
// 0x1823be660

void
Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateCarouselEdge_o* __this, MethodInfo* method)

{
  UnityEngine_UI_MaskableGraphic___ctor((UnityEngine_UI_MaskableGraphic_o *)__this,(MethodInfo *)0x0);
  return;
}


