// Type: Gisketch.Aottg2UI.Styling.GisketchDropShadow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchDropShadow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x532ece0

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,UnityEngine_Color_o color,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Graphic_o *pUVar2;
  
  if (Il2CppMethodInitialized_07542855 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542855 = '\x01';
  }
  (__this->fields)._color.fields.r = color.fields.r;
  (__this->fields)._color.fields.g = color.fields.g;
  (__this->fields)._color.fields.b = color.fields.b;
  (__this->fields)._color.fields.a = color.fields.a;
  (__this->fields)._solid = false;
  pUVar2 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_UI_BaseMeshEffect__get_graphic
                       ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_UI_Graphic_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar2->klass->vtable)._28_SetVerticesDirty.methodPtr)
              (pUVar2,(pUVar2->klass->vtable)._28_SetVerticesDirty.method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, UnityEngine_Color_o color, UnityEngine_Vector2_o offset, int32_t layers, float grain, bool solid, const MethodInfo* method);
// 0x532eda0

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_522eda0
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,UnityEngine_Color_o color,
               UnityEngine_Vector2_o offset,int32_t layers,float grain,bool solid,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_UI_Graphic_o *pUVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07542856 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542856 = '\x01';
  }
  (__this->fields)._color.fields.r = color.fields.r;
  (__this->fields)._color.fields.g = color.fields.g;
  (__this->fields)._color.fields.b = color.fields.b;
  (__this->fields)._color.fields.a = color.fields.a;
  (__this->fields)._offset.fields = offset.fields;
  iVar2 = 1;
  if (1 < layers) {
    iVar2 = layers;
  }
  (__this->fields)._layers = iVar2;
  fVar4 = 0.0;
  if (0.0 <= grain) {
    fVar4 = grain;
  }
  (__this->fields)._grain = fVar4;
  (__this->fields)._solid = solid;
  pUVar3 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = UnityEngine_UI_BaseMeshEffect__get_graphic
                       ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_UI_Graphic_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar3->klass->vtable)._28_SetVerticesDirty.methodPtr)
              (pUVar3,(pUVar3->klass->vtable)._28_SetVerticesDirty.method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$ModifyMesh
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__ModifyMesh (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
// 0x532ee90

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__ModifyMesh
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,UnityEngine_UI_VertexHelper_o *vh,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_UIVertex__o *__this_00;
  System_Collections_Generic_List_UIVertex__o *__this_01;
  uint layer;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07542857 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIVertex_ctor_7197378);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_UIVertex);
    Il2CppMethodInitialized_07542857 = '\x01';
  }
  bVar3 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,(__this->klass->vtable)._9_IsActive.method);
  if (!bVar3) {
    return;
  }
  if (vh != (UnityEngine_UI_VertexHelper_o *)0x0) {
    iVar4 = UnityEngine_UI_VertexHelper__get_currentVertCount(vh,(MethodInfo *)0x0);
    if (iVar4 == 0) {
      return;
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_UIVertex);
    System_Collections_Generic_List_UIVertex____ctor
              (__this_00,(MethodInfo_39DE010 *)MethodInfo_System_Collections_Generic_List_UIVertex_ctor);
    UnityEngine_UI_VertexHelper__GetUIVertexStream(vh,__this_00,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
      iVar1 = (__this->fields)._layers;
      iVar2 = (__this_00->fields)._size;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_UIVertex);
      System_Collections_Generic_List_UIVertex____ctor_39de090
                (__this_01,(iVar1 + 1) * iVar2,
                 (MethodInfo_39DE090 *)MethodInfo_System_Collections_Generic_List_UIVertex_ctor_7197378);
      layer = (__this->fields)._layers;
      if (0 < (int)layer) {
        do {
          Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer(__this,__this_00,__this_01,layer,in_R8);
          bVar3 = 1 < layer;
          layer = layer - 1;
        } while (bVar3);
      }
      if (__this_01 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
        System_Collections_Generic_List_UIVertex___AddRange
                  (__this_01,(System_Collections_Generic_IEnumerable_T__o *)__this_00,
                   (MethodInfo_39DEF10 *)MethodInfo_System_Collections_Generic_List_UIVertex_AddRange);
        UnityEngine_UI_VertexHelper__Clear(vh,(MethodInfo *)0x0);
        UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream(vh,__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$AddLayer
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, System_Collections_Generic_List_UIVertex__o* source, System_Collections_Generic_List_UIVertex__o* output, int32_t layer, const MethodInfo* method);
// 0x532f000

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,
               System_Collections_Generic_List_UIVertex__o *source,
               System_Collections_Generic_List_UIVertex__o *output,int32_t layer,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_UIVertex_o *pUVar2;
  undefined4 uVar3;
  UnityEngine_Vector2_Fields UVar4;
  uint uVar5;
  UnityEngine_UIVertex_array *pUVar6;
  UnityEngine_UIVertex_o item;
  UnityEngine_UIVertex_Fields *pUVar7;
  MethodInfo *pMVar8;
  UnityEngine_Color32_o UVar9;
  int index;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_UIVertex_o local_158;
  undefined8 local_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_07542858 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_get_Item);
    Il2CppMethodInitialized_07542858 = '\x01';
  }
  fVar11 = (float)layer;
  fVar10 = (float)(__this->fields)._layers;
  fVar13 = fVar11 / fVar10;
  fVar12 = (__this->fields)._color.fields.a;
  if ((__this->fields)._solid == false) {
    fVar12 = ((fVar13 * -0.55 + 1.1) * fVar12) / fVar10;
  }
  local_a8 = ZEXT416((uint)fVar12);
  if (source == (System_Collections_Generic_List_UIVertex__o *)0x0) {
label_0532f3f3:
    ThrowNullReferenceException();
  }
  if (0 < (source->fields)._size) {
    UVar4 = (__this->fields)._offset.fields;
    local_c8 = fVar13 * UVar4.x;
    fStack_c4 = fVar13 * UVar4.y;
    fStack_c0 = fVar13 * 0.0;
    fStack_bc = fVar13 * 0.0;
    index = 0;
    local_b8 = fVar11;
    fStack_b4 = fVar11;
    fStack_b0 = fVar11;
    fStack_ac = fVar11;
    do {
      while( true ) {
        System_Collections_Generic_List_UIVertex___get_Item
                  (&local_158,source,index,
                   (MethodInfo_39DE620 *)MethodInfo_System_Collections_Generic_List_UIVertex_get_Item);
        fVar12 = local_158.fields.position.fields.z;
        local_e8 = CONCAT44(local_158.fields.normal.fields.y,local_158.fields.normal.fields.x);
        fStack_e0 = local_158.fields.normal.fields.z;
        fStack_dc = local_158.fields.tangent.fields.x;
        fStack_d8 = local_158.fields.tangent.fields.y;
        fStack_d4 = local_158.fields.tangent.fields.z;
        fStack_d0 = local_158.fields.tangent.fields.w;
        local_78 = CONCAT44(local_158.fields.uv0.fields.y,local_158.fields.uv0.fields.x);
        uStack_70 = CONCAT44(local_158.fields.uv0.fields.w,local_158.fields.uv0.fields.z);
        local_68 = CONCAT44(local_158.fields.uv1.fields.y,local_158.fields.uv1.fields.x);
        uStack_60 = CONCAT44(local_158.fields.uv1.fields.w,local_158.fields.uv1.fields.z);
        local_58 = CONCAT44(local_158.fields.uv2.fields.y,local_158.fields.uv2.fields.x);
        uStack_50 = CONCAT44(local_158.fields.uv2.fields.w,local_158.fields.uv2.fields.z);
        local_48 = CONCAT44(local_158.fields.uv3.fields.y,local_158.fields.uv3.fields.x);
        fStack_40 = local_158.fields.uv3.fields.z;
        fStack_3c = local_158.fields.uv3.fields.w;
        local_88._0_4_ = local_158.fields.position.fields.x;
        local_88._4_4_ = local_158.fields.position.fields.y;
        local_88._8_8_ = 0;
        fVar10 = sinf(local_158.fields.position.fields.y * 78.233 +
                      local_158.fields.position.fields.x * 12.9898 + fVar11 * 37.719);
        local_98 = ZEXT416((uint)(__this->fields)._grain);
        uVar3 = (__this->fields)._color.fields.r;
        UVar9.fields._overlap_0 =
             (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(uVar3,(__this->fields)._color.fields.b,0);
        if (output == (System_Collections_Generic_List_UIVertex__o *)0x0) goto label_0532f3f3;
        fVar12 = fVar12 + 0.0;
        fVar13 = floorf(fVar10 * 43758.547);
        pMVar8 = MethodInfo_System_Collections_Generic_List_UIVertex_Add;
        fVar13 = (fVar10 * 43758.547 - fVar13) + -0.5;
        fVar10 = (float)local_88._0_4_ + fVar13 * (float)local_98._0_4_ * local_b8 + local_c8;
        fVar13 = (float)local_88._4_4_ + -fVar13 * (float)local_98._0_4_ * fStack_b4 + fStack_c4;
        local_158.fields.position.fields.y = fVar13;
        local_158.fields.position.fields.x = fVar10;
        local_158.fields.tangent.fields.y = fStack_d8;
        local_158.fields.tangent.fields.z = fStack_d4;
        local_158.fields.tangent.fields.w = fStack_d0;
        local_158.fields.normal.fields.x = (float)local_e8;
        local_158.fields.normal.fields.y = (float)((ulong)local_e8 >> 0x20);
        local_158.fields.normal.fields.z = fStack_e0;
        local_158.fields.tangent.fields.x = fStack_dc;
        local_158.fields.uv3.fields.x = (float)local_48;
        local_158.fields.uv3.fields.y = (float)((ulong)local_48 >> 0x20);
        local_158.fields.uv3.fields.z = fStack_40;
        local_158.fields.uv3.fields.w = fStack_3c;
        local_158.fields.uv2.fields.x = (float)local_58;
        local_158.fields.uv2.fields.y = (float)((ulong)local_58 >> 0x20);
        local_158.fields.uv2.fields.z = (float)uStack_50;
        local_158.fields.uv2.fields.w = (float)((ulong)uStack_50 >> 0x20);
        local_158.fields.uv1.fields.x = (float)local_68;
        local_158.fields.uv1.fields.y = (float)((ulong)local_68 >> 0x20);
        local_158.fields.uv1.fields.z = (float)uStack_60;
        local_158.fields.uv1.fields.w = (float)((ulong)uStack_60 >> 0x20);
        local_158.fields.uv0.fields.x = (float)local_78;
        local_158.fields.uv0.fields.y = (float)((ulong)local_78 >> 0x20);
        local_158.fields.uv0.fields.z = (float)uStack_70;
        local_158.fields.uv0.fields.w = (float)((ulong)uStack_70 >> 0x20);
        piVar1 = &(output->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar6 = (output->fields)._items;
        local_158.fields.position.fields.z = fVar12;
        local_158.fields.color.fields._overlap_0 = UVar9.fields._overlap_0;
        if (pUVar6 == (UnityEngine_UIVertex_array *)0x0) goto label_0532f3f3;
        uVar5 = (output->fields)._size;
        if ((uint)pUVar6->max_length <= uVar5) break;
        (output->fields)._size = uVar5 + 1;
        pUVar7 = &pUVar6->m_Items[(int)uVar5].fields;
        (pUVar7->uv3).fields.x = (float)(undefined4)local_48;
        (pUVar7->uv3).fields.y = (float)local_48._4_4_;
        (pUVar7->uv3).fields.z = fStack_40;
        (pUVar7->uv3).fields.w = fStack_3c;
        pUVar7 = &pUVar6->m_Items[(int)uVar5].fields;
        (pUVar7->uv2).fields.y = local_158.fields.uv2.fields.y;
        (pUVar7->uv2).fields.z = local_158.fields.uv2.fields.z;
        *(ulong *)&(pUVar7->uv2).fields.w =
             CONCAT44(local_158.fields.uv3.fields.x,local_158.fields.uv2.fields.w);
        pUVar7 = &pUVar6->m_Items[(int)uVar5].fields;
        (pUVar7->uv1).fields.y = local_158.fields.uv1.fields.y;
        (pUVar7->uv1).fields.z = local_158.fields.uv1.fields.z;
        *(ulong *)&(pUVar7->uv1).fields.w =
             CONCAT44(local_158.fields.uv2.fields.x,local_158.fields.uv1.fields.w);
        pUVar7 = &pUVar6->m_Items[(int)uVar5].fields;
        (pUVar7->uv0).fields.y = local_158.fields.uv0.fields.y;
        (pUVar7->uv0).fields.z = local_158.fields.uv0.fields.z;
        *(ulong *)&(pUVar7->uv0).fields.w =
             CONCAT44(local_158.fields.uv1.fields.x,local_158.fields.uv0.fields.w);
        pUVar7 = &pUVar6->m_Items[(int)uVar5].fields;
        (pUVar7->tangent).fields.z = fStack_d4;
        (pUVar7->tangent).fields.w = fStack_d0;
        pUVar7->color = (UnityEngine_Color32_o)UVar9.fields._overlap_0;
        (pUVar7->uv0).fields.x = local_158.fields.uv0.fields.x;
        pUVar7 = &pUVar6->m_Items[(int)uVar5].fields;
        (pUVar7->normal).fields.y = local_158.fields.normal.fields.y;
        (pUVar7->normal).fields.z = fStack_e0;
        (pUVar7->tangent).fields.x = fStack_dc;
        (pUVar7->tangent).fields.y = fStack_d8;
        pUVar2 = pUVar6->m_Items + (int)uVar5;
        (pUVar2->fields).position.fields.x = fVar10;
        (pUVar2->fields).position.fields.y = fVar13;
        *(ulong *)&(pUVar2->fields).position.fields.z = CONCAT44(local_158.fields.normal.fields.x,fVar12);
        index = index + 1;
        if ((source->fields)._size <= index) {
          return;
        }
      }
      item.fields.uv2.fields.z = local_158.fields.uv2.fields.z;
      item.fields.uv2.fields.y = local_158.fields.uv2.fields.y;
      item.fields.uv1.fields.z = local_158.fields.uv1.fields.z;
      item.fields.uv1.fields.y = local_158.fields.uv1.fields.y;
      item.fields.uv2.fields.x = local_158.fields.uv2.fields.x;
      item.fields.uv1.fields.w = local_158.fields.uv1.fields.w;
      item.fields.normal.fields.x = local_158.fields.normal.fields.x;
      item.fields.position.fields.z = fVar12;
      item.fields.normal.fields.z = fStack_e0;
      item.fields.normal.fields.y = local_158.fields.normal.fields.y;
      item.fields.tangent.fields.y = fStack_d8;
      item.fields.tangent.fields.x = fStack_dc;
      item.fields.uv0.fields.x = local_158.fields.uv0.fields.x;
      item.fields.color.fields._overlap_0 = UVar9.fields._overlap_0;
      item.fields.uv0.fields.z = local_158.fields.uv0.fields.z;
      item.fields.uv0.fields.y = local_158.fields.uv0.fields.y;
      item.fields.uv1.fields.x = local_158.fields.uv1.fields.x;
      item.fields.uv0.fields.w = local_158.fields.uv0.fields.w;
      item.fields.position.fields.x = fVar10;
      item.fields.position.fields.y = fVar13;
      item.fields.tangent.fields.z = fStack_d4;
      item.fields.tangent.fields.w = fStack_d0;
      item.fields.uv2.fields.w = local_158.fields.uv2.fields.w;
      item.fields.uv3.fields.x = local_158.fields.uv3.fields.x;
      item.fields.uv3.fields.y = local_158.fields.uv3.fields.y;
      item.fields.uv3.fields.z = fStack_40;
      item.fields.uv3.fields.w = fStack_3c;
      System_Collections_Generic_List_UIVertex___AddWithResize
                (output,item,(MethodInfo_39DEAE0 *)pMVar8->klass->rgctx_data[0xe].method);
      index = index + 1;
    } while (index < (source->fields)._size);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Hash
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchDropShadow__Hash (UnityEngine_Vector3_o position, int32_t layer, const MethodInfo* method);
// 0x532f400

float Gisketch_Aottg2UI_Styling_GisketchDropShadow__Hash
                (UnityEngine_Vector3_o position,int32_t layer,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = sinf(position.fields.x * 12.9898 + position.fields.y * 78.233 + (float)layer * 37.719);
  fVar2 = floorf(fVar1 * 43758.547);
  return fVar1 * 43758.547 - fVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow___ctor (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, const MethodInfo* method);
// 0x532f450

void Gisketch_Aottg2UI_Styling_GisketchDropShadow___ctor
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,MethodInfo *method)

{
  (__this->fields)._color.fields.r = 0.0;
  (__this->fields)._color.fields.g = 0.0;
  (__this->fields)._color.fields.b = 0.0;
  (__this->fields)._color.fields.a = 0.32;
  (__this->fields)._offset.fields = (UnityEngine_Vector2_Fields)0xc0e00000c0e00000;
  (__this->fields)._layers = 5;
  (__this->fields)._grain = 1.25;
  UnityEngine_UI_BaseMeshEffect___ctor((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


