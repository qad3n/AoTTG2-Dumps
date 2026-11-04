// Type: Gisketch.Aottg2UI.Styling.GisketchDropShadow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchDropShadow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x181885090

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,UnityEngine_Color_o *color,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  UnityEngine_UI_Graphic_o *pUVar6;
  
  if (Il2CppMethodInitialized_184341efa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341efa = '\x01';
  }
  fVar1 = (color->fields).r;
  fVar2 = (color->fields).g;
  fVar3 = (color->fields).b;
  fVar4 = (color->fields).a;
  (__this->fields)._solid = false;
  (__this->fields)._color.fields.r = fVar1;
  (__this->fields)._color.fields.g = fVar2;
  (__this->fields)._color.fields.b = fVar3;
  (__this->fields)._color.fields.a = fVar4;
  pUVar6 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar6 = UnityEngine_UI_BaseMeshEffect__get_graphic
                       ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_UI_Graphic_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar6->klass->vtable)._28_SetVerticesDirty.methodPtr)
              (pUVar6,(pUVar6->klass->vtable)._28_SetVerticesDirty.method);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, UnityEngine_Color_o color, UnityEngine_Vector2_o offset, int32_t layers, float grain, bool solid, const MethodInfo* method);
// 0x181884fb0

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_1884fb0
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,UnityEngine_Color_o *color,
               UnityEngine_Vector2_o offset,int32_t layers,float grain,bool solid,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_UI_Graphic_o *pUVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_184341efb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341efb = '\x01';
  }
  fVar7 = (color->fields).r;
  fVar1 = (color->fields).g;
  fVar2 = (color->fields).b;
  fVar3 = (color->fields).a;
  (__this->fields)._offset.fields = offset.fields;
  (__this->fields)._color.fields.r = fVar7;
  (__this->fields)._color.fields.g = fVar1;
  (__this->fields)._color.fields.b = fVar2;
  (__this->fields)._color.fields.a = fVar3;
  iVar5 = 1;
  if (0 < layers) {
    iVar5 = layers;
  }
  (__this->fields)._layers = iVar5;
  fVar7 = 0.0;
  if (0.0 <= grain) {
    fVar7 = grain;
  }
  (__this->fields)._solid = solid;
  (__this->fields)._grain = fVar7;
  pUVar6 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar6 = UnityEngine_UI_BaseMeshEffect__get_graphic
                       ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_UI_Graphic_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar6->klass->vtable)._28_SetVerticesDirty.methodPtr)
              (pUVar6,(pUVar6->klass->vtable)._28_SetVerticesDirty.method);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$ModifyMesh
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__ModifyMesh (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
// 0x181884e30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181884f3d: xor edi, edi
// asm:   0x181884f3f: nop 

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__ModifyMesh
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,UnityEngine_UI_VertexHelper_o *vh,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_UIVertex__o *stream;
  System_Collections_Generic_List_UIVertex__o *output;
  int iVar4;
  
  if (Il2CppMethodInitialized_184341efc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIVertex_ctor_40ed170);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_UIVertex);
    Il2CppMethodInitialized_184341efc = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,(__this->klass->vtable)._9_IsActive.method);
  if (!bVar2) {
    return;
  }
  if (vh != (UnityEngine_UI_VertexHelper_o *)0x0) {
    iVar3 = UnityEngine_UI_VertexHelper__get_currentVertCount(vh,(MethodInfo *)0x0);
    if (iVar3 == 0) {
      return;
    }
    stream = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_UIVertex);
    System_Collections_Generic_List_UIVertex____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)stream,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_UIVertex_ctor);
    UnityEngine_UI_VertexHelper__GetUIVertexStream(vh,stream,(MethodInfo *)0x0);
    if (stream != (System_Collections_Generic_List_UIVertex__o *)0x0) {
      iVar4 = (__this->fields)._layers;
      iVar1 = (stream->fields)._size;
      output = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_UIVertex);
      System_Collections_Generic_List_UIVertex____ctor
                ((System_Collections_Generic_List_T__o *)output,(iVar4 + 1) * iVar1,
                 (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_UIVertex_ctor_40ed170);
      for (iVar4 = (__this->fields)._layers; 0 < iVar4; iVar4 = iVar4 + -1) {
        Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer(__this,stream,output,iVar4,(MethodInfo *)0x0);
      }
      if (output != (System_Collections_Generic_List_UIVertex__o *)0x0) {
        System_Collections_Generic_List_UIVertex___AddRange
                  (output,(System_Collections_Generic_IEnumerable_T__o *)stream,
                   (MethodInfo_9906D0 *)MethodInfo_System_Collections_Generic_List_UIVertex_AddRange);
        UnityEngine_UI_VertexHelper__Clear(vh,(MethodInfo *)0x0);
        UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream(vh,output,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$AddLayer
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, System_Collections_Generic_List_UIVertex__o* source, System_Collections_Generic_List_UIVertex__o* output, int32_t layer, const MethodInfo* method);
// 0x181884940

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,
               System_Collections_Generic_List_UIVertex__o *source,
               System_Collections_Generic_List_UIVertex__o *output,int32_t layer,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_UIVertex_o *pUVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  UnityEngine_UIVertex_array *pUVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  UnityEngine_UIVertex_Fields *pUVar9;
  MethodInfo *pMVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int index;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  UnityEngine_Color32_o local_res20;
  UnityEngine_Vector3_Fields local_288;
  undefined4 uStack_27c;
  UnityEngine_Color32_o UStack_260;
  float fStack_25c;
  UnityEngine_UIVertex_o local_218;
  UnityEngine_UIVertex_o local_1a8 [3];
  
  if (Il2CppMethodInitialized_184341efd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_get_Item);
    Il2CppMethodInitialized_184341efd = '\x01';
  }
  fVar35 = (__this->fields)._color.fields.a;
  fVar36 = (float)layer / (float)(__this->fields)._layers;
  if ((__this->fields)._solid == false) {
    fVar35 = ((1.1 - fVar36 * 0.55) * fVar35) / (float)(__this->fields)._layers;
  }
  if (source != (System_Collections_Generic_List_UIVertex__o *)0x0) {
    fVar3 = (__this->fields)._offset.fields.x;
    index = 0;
    fVar4 = (__this->fields)._offset.fields.y;
    while( true ) {
      if ((source->fields)._size <= index) {
        return;
      }
      System_Collections_Generic_List_UIVertex___get_Item
                (&local_218,source,index,
                 (MethodInfo_983930 *)MethodInfo_System_Collections_Generic_List_UIVertex_get_Item);
      uVar22 = local_218.fields.uv3.fields._8_8_;
      fVar21 = local_218.fields.uv3.fields.y;
      fVar20 = local_218.fields.uv3.fields.x;
      fVar19 = local_218.fields.uv2.fields.w;
      uVar17 = local_218.fields.uv2.fields._4_8_;
      uVar8 = local_218.fields._40_8_;
      uVar15 = local_218.fields.tangent.fields._8_8_;
      uVar13 = local_218.fields.tangent.fields._0_8_;
      uVar11 = local_218.fields.normal.fields._4_8_;
      auVar30 = (undefined1  [16])local_218.fields._0_16_;
      fVar26 = local_218.fields.position.fields.x;
      fVar34 = local_218.fields.position.fields.y;
      fVar28 = local_218.fields.position.fields.z;
      uVar7._0_4_ = local_218.fields.uv3.fields.z;
      uVar7._4_4_ = local_218.fields.uv3.fields.w;
      auVar29._4_12_ = local_218.fields._4_12_;
      auVar29._0_4_ = fVar26 * 12.9898 + fVar34 * 78.233 + (float)layer * 37.719;
      fVar24 = (float)il2cpp_runtime_helper_1804f5fc0(auVar29._0_8_);
      fVar25 = (float)il2cpp_runtime_helper_1804f4110();
      fVar27 = (__this->fields)._grain;
      fVar24 = (fVar24 * 43758.547 - fVar25) - 0.5;
      uStack_27c = auVar30._12_4_;
      local_288._0_8_ = auVar30._0_8_;
      local_288.z = fVar28 + 0.0;
      fVar26 = fVar24 * fVar27 * (float)layer + fVar36 * fVar3 + fVar26;
      fVar34 = -fVar24 * fVar27 * (float)layer + fVar36 * fVar4 + fVar34;
      fVar27 = (__this->fields)._color.fields.r;
      auVar30 = ZEXT416((uint)fVar27);
      if (fVar27 < 0.0) {
        auVar30 = ZEXT816(0);
      }
      else if (1.0 < fVar27) {
        auVar30._0_12_ = ZEXT812(0x3f800000);
        auVar30._12_4_ = 0;
      }
      auVar31._4_12_ = auVar30._4_12_;
      auVar31._0_4_ = auVar30._0_4_ * 255.0;
      fVar27 = (float)il2cpp_runtime_helper_180012930(auVar31._0_8_);
      fVar28 = (float)il2cpp_runtime_helper_180012930();
      local_res20.fields._overlap_0._at_g.g = (char)(int)fVar28;
      local_res20.fields._overlap_0._at_b._lead[0] = (char)(int)fVar27;
      fVar27 = (float)il2cpp_runtime_helper_180012930();
      local_res20.fields._overlap_0._at_b.b = (char)(int)fVar27;
      if (fVar35 < 0.0) {
        auVar32 = ZEXT816(0);
      }
      else if (1.0 < fVar35) {
        auVar32._0_12_ = ZEXT812(0x3f800000);
        auVar32._12_4_ = 0;
      }
      else {
        auVar32 = ZEXT416((uint)fVar35);
      }
      auVar33._4_12_ = auVar32._4_12_;
      auVar33._0_4_ = auVar32._0_4_ * 255.0;
      fVar27 = (float)il2cpp_runtime_helper_180012930(auVar33._0_8_);
      uVar23 = local_218.fields.uv3.fields._8_8_;
      uVar18 = local_218.fields.uv2.fields._4_8_;
      uVar16 = local_218.fields.tangent.fields._8_8_;
      uVar14 = local_218.fields.tangent.fields._0_8_;
      uVar12 = local_218.fields.normal.fields._4_8_;
      pMVar10 = MethodInfo_System_Collections_Generic_List_UIVertex_Add;
      local_res20.fields._overlap_0._at_a.a = (char)(int)fVar27;
      fStack_25c = SUB84(uVar8,4);
      if (output == (System_Collections_Generic_List_UIVertex__o *)0x0) break;
      piVar1 = &(output->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar6 = (output->fields)._items;
      if (pUVar6 == (UnityEngine_UIVertex_array *)0x0) break;
      local_218.fields.uv2.fields.y = (float)uVar17;
      local_218.fields.uv2.fields.z = SUB84(uVar17,4);
      uVar8._0_4_ = local_218.fields.uv2.fields.y;
      uVar8._4_4_ = local_218.fields.uv2.fields.z;
      uVar5 = (output->fields)._size;
      local_218.fields.uv2.fields.y = (float)uVar17;
      local_218.fields.uv2.fields.z = SUB84(uVar17,4);
      local_1a8[1].fields.uv2.fields.z = local_218.fields.uv2.fields.y;
      local_1a8[1].fields.uv2.fields.w = local_218.fields.uv2.fields.z;
      local_218.fields.uv3.fields.z = (float)uVar22;
      local_218.fields.uv3.fields.w = SUB84(uVar22,4);
      local_1a8[1].fields.uv3.fields.w = local_218.fields.uv3.fields.z;
      local_1a8[2].fields.position.fields.x = local_218.fields.uv3.fields.w;
      local_218.fields.normal.fields._4_8_ = uVar12;
      local_218.fields.tangent.fields._0_8_ = uVar14;
      local_218.fields.tangent.fields._8_8_ = uVar16;
      local_218.fields.uv2.fields._4_8_ = uVar18;
      local_218.fields.uv3.fields._8_8_ = uVar23;
      if (uVar5 < (uint)pUVar6->max_length) {
        (output->fields)._size = uVar5 + 1;
        if ((uint)pUVar6->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        index = index + 1;
        pUVar2 = pUVar6->m_Items + (int)uVar5;
        (pUVar2->fields).position.fields.x = fVar26;
        (pUVar2->fields).position.fields.y = fVar34;
        *(undefined8 *)&(pUVar2->fields).position.fields.z = stack0xfffffffffffffd80;
        pUVar9 = &pUVar6->m_Items[(int)uVar5].fields;
        local_218.fields.normal.fields.y = (float)uVar11;
        local_218.fields.normal.fields.z = SUB84(uVar11,4);
        (pUVar9->normal).fields.y = local_218.fields.normal.fields.y;
        (pUVar9->normal).fields.z = local_218.fields.normal.fields.z;
        local_218.fields.tangent.fields.x = (float)uVar13;
        local_218.fields.tangent.fields.y = SUB84(uVar13,4);
        (pUVar9->tangent).fields.x = local_218.fields.tangent.fields.x;
        (pUVar9->tangent).fields.y = local_218.fields.tangent.fields.y;
        pUVar9 = &pUVar6->m_Items[(int)uVar5].fields;
        local_218.fields.tangent.fields.z = (float)uVar15;
        local_218.fields.tangent.fields.w = SUB84(uVar15,4);
        (pUVar9->tangent).fields.z = local_218.fields.tangent.fields.z;
        (pUVar9->tangent).fields.w = local_218.fields.tangent.fields.w;
        pUVar9->color = (UnityEngine_Color32_o)local_res20.fields._overlap_0;
        (pUVar9->uv0).fields.x = fStack_25c;
        pUVar9 = &pUVar6->m_Items[(int)uVar5].fields;
        (pUVar9->uv0).fields.y = local_218.fields.uv0.fields.y;
        (pUVar9->uv0).fields.z = local_218.fields.uv0.fields.z;
        *(undefined8 *)&(pUVar9->uv0).fields.w = local_218.fields._56_8_;
        pUVar9 = &pUVar6->m_Items[(int)uVar5].fields;
        (pUVar9->uv1).fields.y = local_218.fields.uv1.fields.y;
        (pUVar9->uv1).fields.z = local_218.fields.uv1.fields.z;
        *(undefined8 *)&(pUVar9->uv1).fields.w = local_218.fields._72_8_;
        pUVar9 = &pUVar6->m_Items[(int)uVar5].fields;
        local_218.fields.uv2.fields.y = (float)uVar17;
        local_218.fields.uv2.fields.z = SUB84(uVar17,4);
        (pUVar9->uv2).fields.y = local_218.fields.uv2.fields.y;
        (pUVar9->uv2).fields.z = local_218.fields.uv2.fields.z;
        *(ulonglong *)&(pUVar9->uv2).fields.w = CONCAT44(fVar20,fVar19);
        pUVar9 = &pUVar6->m_Items[(int)uVar5].fields;
        (pUVar9->uv3).fields.x = fVar20;
        (pUVar9->uv3).fields.y = fVar21;
        local_218.fields.uv3.fields.z = (float)uVar22;
        local_218.fields.uv3.fields.w = SUB84(uVar22,4);
        (pUVar9->uv3).fields.z = local_218.fields.uv3.fields.z;
        (pUVar9->uv3).fields.w = local_218.fields.uv3.fields.w;
        local_1a8[1].fields.uv2.fields._8_8_ = uVar8;
        local_1a8._212_8_ = uVar7;
      }
      else {
        local_1a8[0].fields.position.fields.x = fVar26;
        local_1a8[0].fields.position.fields.y = fVar34;
        local_1a8[0].fields.position.fields.z = local_288.z;
        local_1a8[0].fields.normal.fields.x = uStack_27c;
        local_1a8[0].fields.uv0.fields.y = local_218.fields.uv0.fields.y;
        local_1a8[0].fields.uv0.fields.z = local_218.fields.uv0.fields.z;
        local_1a8[0].fields.uv0.fields.w = local_218.fields.uv0.fields.w;
        local_1a8[0].fields.uv1.fields.x = local_218.fields.uv1.fields.x;
        local_218.fields.uv2.fields.y = (float)uVar17;
        local_218.fields.uv2.fields.z = SUB84(uVar17,4);
        local_1a8[0].fields.uv2.fields.y = local_218.fields.uv2.fields.y;
        local_1a8[0].fields.uv2.fields.z = local_218.fields.uv2.fields.z;
        local_218.fields.normal.fields.y = (float)uVar11;
        local_218.fields.normal.fields.z = SUB84(uVar11,4);
        local_1a8[0].fields.normal.fields.y = local_218.fields.normal.fields.y;
        local_1a8[0].fields.normal.fields.z = local_218.fields.normal.fields.z;
        local_218.fields.tangent.fields.x = (float)uVar13;
        local_218.fields.tangent.fields.y = SUB84(uVar13,4);
        local_1a8[0].fields.tangent.fields.x = local_218.fields.tangent.fields.x;
        local_1a8[0].fields.tangent.fields.y = local_218.fields.tangent.fields.y;
        local_218.fields.tangent.fields.z = (float)uVar15;
        local_218.fields.tangent.fields.w = SUB84(uVar15,4);
        local_1a8[0].fields.tangent.fields.z = local_218.fields.tangent.fields.z;
        local_1a8[0].fields.tangent.fields.w = local_218.fields.tangent.fields.w;
        local_1a8[0].fields.color.fields._overlap_0 = local_res20.fields._overlap_0;
        local_1a8[0].fields.uv0.fields.x = fStack_25c;
        local_1a8[0].fields.uv1.fields.y = local_218.fields.uv1.fields.y;
        local_1a8[0].fields.uv1.fields.z = local_218.fields.uv1.fields.z;
        local_1a8[0].fields.uv1.fields.w = local_218.fields.uv1.fields.w;
        local_1a8[0].fields.uv2.fields.x = local_218.fields.uv2.fields.x;
        local_218.fields.uv3.fields.z = (float)uVar22;
        local_218.fields.uv3.fields.w = SUB84(uVar22,4);
        local_1a8[0].fields.uv3.fields.z = local_218.fields.uv3.fields.z;
        local_1a8[0].fields.uv3.fields.w = local_218.fields.uv3.fields.w;
        System_Collections_Generic_List_UIVertex___AddWithResize
                  (output,local_1a8,(MethodInfo_973C10 *)pMVar10->klass->rgctx_data[0xe].method);
        index = index + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Hash
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchDropShadow__Hash (UnityEngine_Vector3_o position, int32_t layer, const MethodInfo* method);
// 0x181884dc0

float Gisketch_Aottg2UI_Styling_GisketchDropShadow__Hash
                (UnityEngine_Vector3_o *position,int32_t layer,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)il2cpp_runtime_helper_1804f5fc0((position->fields).y * 78.233 + (position->fields).x * 12.9898 +
                               (float)layer * 37.719);
  fVar2 = (float)il2cpp_runtime_helper_1804f4110(fVar1 * 43758.547);
  return fVar1 * 43758.547 - fVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow___ctor (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, const MethodInfo* method);
// 0x181885130

void Gisketch_Aottg2UI_Styling_GisketchDropShadow___ctor
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,MethodInfo *method)

{
  (__this->fields)._color.fields.a = 0.32;
  (__this->fields)._color.fields.r = 0.0;
  (__this->fields)._color.fields.g = 0.0;
  (__this->fields)._color.fields.b = 0.0;
  (__this->fields)._offset.fields.x = -7.0;
  (__this->fields)._offset.fields.y = -7.0;
  (__this->fields)._layers = 5;
  (__this->fields)._grain = 1.25;
  UnityEngine_UI_BaseMeshEffect___ctor
            ((Photon_Voice_PUN_UtilityScripts_VoiceDebugScript_o *)__this,(MethodInfo *)0x0);
  return;
}


