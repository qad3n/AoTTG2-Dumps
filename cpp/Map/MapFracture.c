// Type: Map.MapFracture
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/MapFracture.cs
// Prior real C# source: none
// --------------------------------

// Map.MapFracture.Vertex$$.ctor
// il2cpp: void Map_MapFracture_Vertex___ctor (Map_MapFracture_Vertex_o __this, UnityEngine_Vector3_o position, UnityEngine_Vector3_o normal, UnityEngine_Vector2_o uv, float shade, const MethodInfo* method);
// 0x181ebac60

void Map_MapFracture_Vertex___ctor
               (Map_MapFracture_Vertex_o *__this,UnityEngine_Vector3_o *position,UnityEngine_Vector3_o *normal
               ,UnityEngine_Vector2_o uv,float shade,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (position->fields).y;
  fVar1 = (position->fields).z;
  (__this->fields).Position.fields.x = (position->fields).x;
  (__this->fields).Position.fields.y = fVar2;
  fVar2 = (normal->fields).y;
  (__this->fields).Normal.fields.x = (normal->fields).x;
  (__this->fields).Normal.fields.y = fVar2;
  (__this->fields).Position.fields.z = fVar1;
  fVar1 = (normal->fields).z;
  (__this->fields).Shade = shade;
  (__this->fields).Normal.fields.z = fVar1;
  (__this->fields).UV.fields = uv.fields;
  return;
}


// Map.MapFracture.Vertex$$Lerp
// il2cpp: Map_MapFracture_Vertex_o Map_MapFracture_Vertex__Lerp (Map_MapFracture_Vertex_o a, Map_MapFracture_Vertex_o b, float t, const MethodInfo* method);
// 0x181eba9e0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ebaa51: movaps xmm0, xmm6
// asm:   0x181ebaa54: jmp 0x181ebaa5e
// asm:   0x181ebaab6: movaps xmm0, xmm6
// asm:   0x181ebaab9: jmp 0x181ebaac3
// asm:   0x181ebab91: movaps xmm0, xmm6
// asm:   0x181ebab94: jmp 0x181ebab9e

Map_MapFracture_Vertex_o *
Map_MapFracture_Vertex__Lerp
          (Map_MapFracture_Vertex_o *__return_storage_ptr__,Map_MapFracture_Vertex_o *a,
          Map_MapFracture_Vertex_o *b,float t,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_StaticFields *pUVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_a8;
  float local_a4;
  float local_a0;
  
  fVar1 = (a->fields).Position.fields.x;
  fVar2 = (a->fields).Position.fields.y;
  fVar3 = (a->fields).Position.fields.z;
  if (t < 0.0) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = t;
    if (1.0 < t) {
      fVar13 = 1.0;
    }
  }
  fVar4 = (b->fields).Position.fields.x;
  fVar5 = (b->fields).Position.fields.y;
  fVar6 = (b->fields).Position.fields.z;
  fVar18 = (a->fields).Normal.fields.x;
  fVar16 = (a->fields).Normal.fields.y;
  fVar17 = (a->fields).Normal.fields.z;
  if (t < 0.0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = t;
    if (1.0 < t) {
      fVar14 = 1.0;
    }
  }
  fVar18 = ((b->fields).Normal.fields.x - fVar18) * fVar14 + fVar18;
  fVar16 = ((b->fields).Normal.fields.y - fVar16) * fVar14 + fVar16;
  fVar17 = ((b->fields).Normal.fields.z - fVar17) * fVar14 + fVar17;
  local_a8 = fVar18;
  local_a4 = fVar16;
  local_a0 = fVar17;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar14 = (float)il2cpp_runtime_helper_180546a40(&local_a8,0);
  if (fVar14 <= 1e-05) {
    pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar18 = (pUVar12->zeroVector).fields.x;
    fVar16 = (pUVar12->zeroVector).fields.y;
    fVar17 = (pUVar12->zeroVector).fields.z;
  }
  else {
    fVar18 = fVar18 / fVar14;
    fVar16 = fVar16 / fVar14;
    fVar17 = fVar17 / fVar14;
  }
  fVar14 = (a->fields).UV.fields.x;
  fVar7 = (a->fields).UV.fields.y;
  if (t < 0.0) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = t;
    if (1.0 < t) {
      fVar15 = 1.0;
    }
  }
  fVar8 = (b->fields).UV.fields.x;
  fVar9 = (b->fields).UV.fields.y;
  fVar10 = (a->fields).Shade;
  if (t < 0.0) {
    t = 0.0;
  }
  else if (1.0 < t) {
    t = 1.0;
  }
  fVar11 = (b->fields).Shade;
  (__return_storage_ptr__->fields).Position.fields.x = (fVar4 - fVar1) * fVar13 + fVar1;
  (__return_storage_ptr__->fields).Position.fields.y = (fVar5 - fVar2) * fVar13 + fVar2;
  (__return_storage_ptr__->fields).Normal.fields.x = fVar18;
  (__return_storage_ptr__->fields).Normal.fields.y = fVar16;
  (__return_storage_ptr__->fields).Position.fields.z = (fVar6 - fVar3) * fVar13 + fVar3;
  (__return_storage_ptr__->fields).Normal.fields.z = fVar17;
  (__return_storage_ptr__->fields).Shade = (fVar11 - fVar10) * t + fVar10;
  (__return_storage_ptr__->fields).UV.fields.x = (fVar8 - fVar14) * fVar15 + fVar14;
  (__return_storage_ptr__->fields).UV.fields.y = (fVar9 - fVar7) * fVar15 + fVar7;
  return __return_storage_ptr__;
}


// Map.MapFracture.Triangle$$.ctor
// il2cpp: void Map_MapFracture_Triangle___ctor (Map_MapFracture_Triangle_o __this, Map_MapFracture_Vertex_o a, Map_MapFracture_Vertex_o b, Map_MapFracture_Vertex_o c, int32_t submesh, const MethodInfo* method);
// 0x181eb6b10

void Map_MapFracture_Triangle___ctor
               (Map_MapFracture_Triangle_o *__this,Map_MapFracture_Vertex_o *a,Map_MapFracture_Vertex_o *b,
               Map_MapFracture_Vertex_o *c,int32_t submesh,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  UnityEngine_Vector2_Fields UVar3;
  Map_MapFracture_Vertex_o *pMVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = (a->fields).Position.fields.y;
  uVar2 = *(undefined8 *)&(a->fields).Position.fields.z;
  fVar1 = (a->fields).Shade;
  fVar6 = (a->fields).Normal.fields.y;
  fVar7 = (a->fields).Normal.fields.z;
  UVar3 = (a->fields).UV.fields;
  pMVar4 = &(__this->fields).A;
  (pMVar4->fields).Position.fields.x = (a->fields).Position.fields.x;
  (pMVar4->fields).Position.fields.y = fVar5;
  *(undefined8 *)&(__this->fields).A.fields.Position.fields.z = uVar2;
  fVar5 = (b->fields).Position.fields.x;
  fVar8 = (b->fields).Position.fields.y;
  uVar2 = *(undefined8 *)&(b->fields).Position.fields.z;
  pMVar4 = &(__this->fields).A;
  (pMVar4->fields).Normal.fields.y = fVar6;
  (pMVar4->fields).Normal.fields.z = fVar7;
  (__this->fields).A.fields.UV.fields = UVar3;
  (__this->fields).A.fields.Shade = fVar1;
  fVar6 = (b->fields).Normal.fields.y;
  fVar7 = (b->fields).Normal.fields.z;
  UVar3 = (b->fields).UV.fields;
  fVar1 = (b->fields).Shade;
  pMVar4 = &(__this->fields).B;
  (pMVar4->fields).Position.fields.x = fVar5;
  (pMVar4->fields).Position.fields.y = fVar8;
  *(undefined8 *)&(__this->fields).B.fields.Position.fields.z = uVar2;
  fVar5 = (c->fields).Position.fields.x;
  fVar8 = (c->fields).Position.fields.y;
  uVar2 = *(undefined8 *)&(c->fields).Position.fields.z;
  pMVar4 = &(__this->fields).B;
  (pMVar4->fields).Normal.fields.y = fVar6;
  (pMVar4->fields).Normal.fields.z = fVar7;
  (__this->fields).B.fields.UV.fields = UVar3;
  (__this->fields).B.fields.Shade = fVar1;
  fVar1 = (c->fields).Shade;
  fVar6 = (c->fields).Normal.fields.y;
  fVar7 = (c->fields).Normal.fields.z;
  UVar3 = (c->fields).UV.fields;
  pMVar4 = &(__this->fields).C;
  (pMVar4->fields).Position.fields.x = fVar5;
  (pMVar4->fields).Position.fields.y = fVar8;
  *(undefined8 *)&(__this->fields).C.fields.Position.fields.z = uVar2;
  pMVar4 = &(__this->fields).C;
  (pMVar4->fields).Normal.fields.y = fVar6;
  (pMVar4->fields).Normal.fields.z = fVar7;
  (__this->fields).C.fields.UV.fields = UVar3;
  (__this->fields).C.fields.Shade = fVar1;
  (__this->fields).Submesh = submesh;
  return;
}


// Map.MapFracture.Segment$$.ctor
// il2cpp: void Map_MapFracture_Segment___ctor (Map_MapFracture_Segment_o __this, Map_MapFracture_Vertex_o a, Map_MapFracture_Vertex_o b, int32_t submesh, const MethodInfo* method);
// 0x181eb6ad0

void Map_MapFracture_Segment___ctor
               (Map_MapFracture_Segment_o *__this,Map_MapFracture_Vertex_o *a,Map_MapFracture_Vertex_o *b,
               int32_t submesh,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  UnityEngine_Vector2_Fields UVar3;
  Map_MapFracture_Vertex_o *pMVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = (a->fields).Position.fields.x;
  fVar6 = (a->fields).Position.fields.y;
  uVar2 = *(undefined8 *)&(a->fields).Position.fields.z;
  fVar1 = (a->fields).Shade;
  fVar7 = (a->fields).Normal.fields.y;
  fVar8 = (a->fields).Normal.fields.z;
  UVar3 = (a->fields).UV.fields;
  (__this->fields).Submesh = submesh;
  pMVar4 = &(__this->fields).A;
  (pMVar4->fields).Position.fields.x = fVar5;
  (pMVar4->fields).Position.fields.y = fVar6;
  *(undefined8 *)&(__this->fields).A.fields.Position.fields.z = uVar2;
  fVar5 = (b->fields).Position.fields.x;
  fVar6 = (b->fields).Position.fields.y;
  uVar2 = *(undefined8 *)&(b->fields).Position.fields.z;
  pMVar4 = &(__this->fields).A;
  (pMVar4->fields).Normal.fields.y = fVar7;
  (pMVar4->fields).Normal.fields.z = fVar8;
  (__this->fields).A.fields.UV.fields = UVar3;
  (__this->fields).A.fields.Shade = fVar1;
  fVar7 = (b->fields).Normal.fields.y;
  fVar8 = (b->fields).Normal.fields.z;
  UVar3 = (b->fields).UV.fields;
  fVar1 = (b->fields).Shade;
  pMVar4 = &(__this->fields).B;
  (pMVar4->fields).Position.fields.x = fVar5;
  (pMVar4->fields).Position.fields.y = fVar6;
  *(undefined8 *)&(__this->fields).B.fields.Position.fields.z = uVar2;
  pMVar4 = &(__this->fields).B;
  (pMVar4->fields).Normal.fields.y = fVar7;
  (pMVar4->fields).Normal.fields.z = fVar8;
  (__this->fields).B.fields.UV.fields = UVar3;
  (__this->fields).B.fields.Shade = fVar1;
  return;
}


// Map.MapFracture.Opening$$.ctor
// il2cpp: void Map_MapFracture_Opening___ctor (Map_MapFracture_Opening_o __this, UnityEngine_Vector3_o normal, int32_t submesh, const MethodInfo* method);
// 0x18180f450

void
Map_MapFracture_Opening___ctor(Map_MapFracture_Opening_o __this, UnityEngine_Vector3_o normal, int32_t submesh, MethodInfo* method)

{
  int32_t iVar1;
  int32_t iVar2;
  
  iVar2 = (position->fields).m_Y;
  iVar1 = (position->fields).m_Z;
  (__this->fields).position.fields.m_X = (position->fields).m_X;
  (__this->fields).position.fields.m_Y = iVar2;
  (__this->fields).position.fields.m_Z = iVar1;
  (__this->fields).subdivisionLevel = subdivisionLevel;
  return;
}


// Map.MapFracture.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Map_MapFracture___c__DisplayClass16_0___ctor (Map_MapFracture___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapFracture___c__DisplayClass16_0___ctor(Map_MapFracture___c__DisplayClass16_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapFracture.<>c__DisplayClass16_1$$.ctor
// il2cpp: void Map_MapFracture___c__DisplayClass16_1___ctor (Map_MapFracture___c__DisplayClass16_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapFracture___c__DisplayClass16_1___ctor(Map_MapFracture___c__DisplayClass16_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapFracture.<>c__DisplayClass16_1$$<Shatter>b__0
// il2cpp: int32_t Map_MapFracture___c__DisplayClass16_1___Shatter_b__0 (Map_MapFracture___c__DisplayClass16_1_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x181eb9d30

int32_t Map_MapFracture___c__DisplayClass16_1___Shatter_b__0
                  (Map_MapFracture___c__DisplayClass16_1_o *__this,int32_t a,int32_t b,MethodInfo *method)

{
  Map_MapFracture___c__DisplayClass16_0_o *pMVar1;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  int32_t iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res8 [2];
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o local_18;
  
  if (Il2CppMethodInitialized_184345098 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    Il2CppMethodInitialized_184345098 = '\x01';
  }
  pMVar1 = (__this->fields).CS___8__locals1;
  local_res8[0] = 0.0;
  if ((pMVar1 != (Map_MapFracture___c__DisplayClass16_0_o *)0x0) &&
     (pSVar2 = (pMVar1->fields).seeds, pSVar2 != (System_Collections_Generic_List_Vector3__o *)0x0)) {
    System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
              (&local_18,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar2,a,
               (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    fVar6 = (float)local_18.fields.y - (__this->fields).own.fields.y;
    fVar4 = (float)local_18.fields.x - (__this->fields).own.fields.x;
    fVar5 = (float)local_18.fields.z - (__this->fields).own.fields.z;
    pMVar1 = (__this->fields).CS___8__locals1;
    local_res8[0] = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
    if ((pMVar1 != (Map_MapFracture___c__DisplayClass16_0_o *)0x0) &&
       (pSVar2 = (pMVar1->fields).seeds, pSVar2 != (System_Collections_Generic_List_Vector3__o *)0x0)) {
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                (&local_18,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar2,b,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      fVar5 = (float)local_18.fields.y - (__this->fields).own.fields.y;
      fVar4 = (float)local_18.fields.x - (__this->fields).own.fields.x;
      fVar6 = (float)local_18.fields.z - (__this->fields).own.fields.z;
      iVar3 = System_Single__CompareTo_1b49410
                        (local_res8,fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6,(MethodInfo *)0x0);
      return iVar3;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapFracture.<>c__DisplayClass18_0$$.ctor
// il2cpp: void Map_MapFracture___c__DisplayClass18_0___ctor (Map_MapFracture___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapFracture___c__DisplayClass18_0___ctor(Map_MapFracture___c__DisplayClass18_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapFracture.<>c__DisplayClass18_0$$<HasVolume>b__0
// il2cpp: float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__0 (Map_MapFracture___c__DisplayClass18_0_o* __this, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x181eb9e60

float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__0
                (Map_MapFracture___c__DisplayClass18_0_o *__this,UnityEngine_Vector3_o *point,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (point->fields).y - (__this->fields).origin.fields.y;
  fVar3 = (point->fields).x - (__this->fields).origin.fields.x;
  fVar2 = (point->fields).z - (__this->fields).origin.fields.z;
  return fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
}


// Map.MapFracture.<>c__DisplayClass18_0$$<HasVolume>b__1
// il2cpp: float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__1 (Map_MapFracture___c__DisplayClass18_0_o* __this, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x181eb9ea0

float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__1
                (Map_MapFracture___c__DisplayClass18_0_o *__this,UnityEngine_Vector3_o *point,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = (point->fields).z - (__this->fields).origin.fields.z;
  fVar7 = (__this->fields).axis.fields.y;
  fVar2 = (__this->fields).axis.fields.z;
  fVar1 = (__this->fields).axis.fields.x;
  fVar5 = (point->fields).x - (__this->fields).origin.fields.x;
  fVar6 = (point->fields).y - (__this->fields).origin.fields.y;
  fVar4 = fVar3 * fVar7 - fVar6 * fVar2;
  fVar2 = fVar5 * fVar2 - fVar3 * fVar1;
  fVar7 = fVar6 * fVar1 - fVar5 * fVar7;
  return fVar2 * fVar2 + fVar4 * fVar4 + fVar7 * fVar7;
}


// Map.MapFracture.<>c__DisplayClass18_0$$<HasVolume>b__2
// il2cpp: float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__2 (Map_MapFracture___c__DisplayClass18_0_o* __this, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x181eb9f30

float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__2
                (Map_MapFracture___c__DisplayClass18_0_o *__this,UnityEngine_Vector3_o *point,
                MethodInfo *method)

{
  return (point->fields).y * (__this->fields).normal.fields.y +
         (point->fields).x * (__this->fields).normal.fields.x +
         (point->fields).z * (__this->fields).normal.fields.z;
}


// Map.MapFracture.<>c__DisplayClass18_0$$<HasVolume>b__3
// il2cpp: float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__3 (Map_MapFracture___c__DisplayClass18_0_o* __this, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x181eb9f60

float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__3
                (Map_MapFracture___c__DisplayClass18_0_o *__this,UnityEngine_Vector3_o *point,
                MethodInfo *method)

{
  return -((point->fields).y * (__this->fields).normal.fields.y +
           (point->fields).x * (__this->fields).normal.fields.x +
          (point->fields).z * (__this->fields).normal.fields.z);
}


// Map.MapFracture$$.ctor
// il2cpp: void Map_MapFracture___ctor (Map_MapFracture_o* __this, System_Collections_Generic_List_MapFracture_Triangle__o* triangles, const MethodInfo* method);
// 0x181ea7ef0

void Map_MapFracture___ctor
               (Map_MapFracture_o *__this,System_Collections_Generic_List_MapFracture_Triangle__o *triangles,
               MethodInfo *method)

{
  Map_MapFracture_Vertex_array *pMVar1;
  System_Single_array *value;
  System_Collections_Generic_List_MapFracture_Segment__o *__this_00;
  
  if (Il2CppMethodInitialized_184345083 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Segment_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapFracture_Segment);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapFracture_Vertex_array);
    Il2CppMethodInitialized_184345083 = '\x01';
  }
  pMVar1 = (Map_MapFracture_Vertex_array *)SZArrayNew(TypeInfo_Map_MapFracture_Vertex_array,3);
  (__this->fields)._corners = pMVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._corners,pMVar1);
  value = (System_Single_array *)SZArrayNew(TypeInfo_float_array,3);
  (__this->fields)._distances = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._distances,value);
  pMVar1 = (Map_MapFracture_Vertex_array *)SZArrayNew(TypeInfo_Map_MapFracture_Vertex_array,6);
  (__this->fields)._polygon = pMVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._polygon,pMVar1);
  pMVar1 = (Map_MapFracture_Vertex_array *)SZArrayNew(TypeInfo_Map_MapFracture_Vertex_array,2);
  (__this->fields)._cut = pMVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cut,pMVar1);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Segment);
  System_Collections_Generic_List_MapFracture_Segment____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapFracture_Segment_ctor);
  (__this->fields)._segments = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._segments,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._triangles = triangles;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._triangles,triangles);
  return;
}


// Map.MapFracture$$Read
// il2cpp: Map_MapFracture_o* Map_MapFracture__Read (UnityEngine_MeshFilter_array* filters, UnityEngine_Transform_o* root, System_Collections_Generic_List_Material__o* materials, int32_t maxTriangles, const MethodInfo* method);
// 0x181ea6940
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea6d29: nop dword ptr [rax]
// asm:   0x181ea70ef: mov rdi, qword ptr [rbp + 8]
// asm:   0x181ea70f3: mov r15, qword ptr [rbp + 0x270]
// asm:   0x181ea70fa: mov r14, qword ptr [rsp + 0x78]

Map_MapFracture_o *
Map_MapFracture__Read
          (UnityEngine_MeshFilter_array *filters,UnityEngine_Transform_o *root,
          System_Collections_Generic_List_Material__o *materials,int32_t maxTriangles,MethodInfo *method)

{
  int iVar1;
  int32_t index;
  float fVar2;
  float fVar3;
  UnityEngine_MeshFilter_o *__this;
  UnityEngine_Material_o *x;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  UnityEngine_Vector2_Fields UVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  UnityEngine_Vector2_Fields UVar27;
  bool bVar28;
  bool bVar29;
  int32_t iVar30;
  uint uVar31;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_List_MapFracture_Triangle__o *__this_01;
  UnityEngine_Mesh_o *__this_02;
  UnityEngine_MeshRenderer_o *__this_03;
  UnityEngine_Material_array *pUVar32;
  UnityEngine_Matrix4x4_o *pUVar33;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Vector3_array *pUVar34;
  UnityEngine_Vector3_array *pUVar35;
  System_Int32_array *pSVar36;
  Map_MapFracture_Vertex_o *pMVar37;
  Map_MapFracture_o *__this_05;
  Map_MapFracture_Vertex_array *pMVar38;
  System_Single_array *value;
  System_Collections_Generic_List_MapFracture_Segment__o *__this_06;
  uint uVar39;
  uint submesh;
  uint uVar40;
  bool hasUV;
  float fVar41;
  UnityEngine_UIElements_TextureId_o local_304;
  uint local_300;
  UnityEngine_Vector2_array *local_2f8;
  UnityEngine_Vector3_array *local_2f0;
  UnityEngine_Vector3_array *local_2e8;
  System_Collections_Generic_Dictionary_Material__int__o *local_2e0;
  UnityEngine_Matrix4x4_Fields local_2d8;
  UnityEngine_Matrix4x4_Fields local_298;
  System_Collections_Generic_List_MapFracture_Triangle__o *local_258;
  UnityEngine_Mesh_o *local_250;
  undefined1 local_248 [64];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  UnityEngine_UIElements_TextureId_Fields UStack_1dc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  UnityEngine_Vector2_Fields UStack_178;
  float local_170;
  UnityEngine_UIElements_TextureId_Fields local_16c;
  UnityEngine_Matrix4x4_Fields local_168;
  undefined1 local_128 [232];
  
  if (Il2CppMethodInitialized_184345084 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_Material_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapFracture_Triangle)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapFracture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345084 = '\x01';
  }
  local_2d8.m00 = 0.0;
  local_2d8.m10 = 0.0;
  local_2d8.m20 = 0.0;
  local_2d8.m30 = 0.0;
  local_304.fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  local_2d8.m01 = 0.0;
  local_2d8.m11 = 0.0;
  local_2d8.m21 = 0.0;
  local_2d8.m31 = 0.0;
  local_2d8.m02 = 0.0;
  local_2d8.m12 = 0.0;
  local_2d8.m22 = 0.0;
  local_2d8.m32 = 0.0;
  local_2d8.m03 = 0.0;
  local_2d8.m13 = 0.0;
  local_2d8.m23 = 0.0;
  local_2d8.m33 = 0.0;
  local_168.m00 = 0.0;
  local_168.m10 = 0.0;
  local_168.m20 = 0.0;
  local_168.m30 = 0.0;
  local_168.m01 = 0.0;
  local_168.m11 = 0.0;
  local_168.m21 = 0.0;
  local_168.m31 = 0.0;
  local_168.m02 = 0.0;
  local_168.m12 = 0.0;
  local_168.m22 = 0.0;
  local_168.m32 = 0.0;
  local_168.m03 = 0.0;
  local_168.m13 = 0.0;
  local_168.m23 = 0.0;
  local_168.m33 = 0.0;
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Material_int);
  local_2e0 = (System_Collections_Generic_Dictionary_Material__int__o *)__this_00;
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Material_int_ctor);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Triangle);
  local_258 = __this_01;
  System_Collections_Generic_List_MapFracture_Triangle____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor);
  if (filters != (UnityEngine_MeshFilter_array *)0x0) {
    for (local_300 = 0; (int)local_300 < (int)filters->max_length; local_300 = local_300 + 1) {
      if ((uint)filters->max_length <= local_300) {
label_181ea72d9:
        ThrowIndexOutOfRangeException();
      }
      __this = filters->m_Items[(int)local_300];
      if ((__this == (UnityEngine_MeshFilter_o *)0x0) ||
         (__this_02 = UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0), local_250 = __this_02,
         __this_02 == (UnityEngine_Mesh_o *)0x0)) goto label_181ea72d3;
      bVar28 = UnityEngine_Mesh__get_isReadable(__this_02,(MethodInfo *)0x0);
      if (!bVar28) goto label_181ea7122;
      __this_03 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
      if ((__this_03 == (UnityEngine_MeshRenderer_o *)0x0) ||
         (pUVar32 = UnityEngine_Renderer__get_sharedMaterials
                              ((UnityEngine_Renderer_o *)__this_03,(MethodInfo *)0x0),
         root == (UnityEngine_Transform_o *)0x0)) goto label_181ea72d3;
      pUVar33 = UnityEngine_Transform__get_worldToLocalMatrix
                          ((UnityEngine_Matrix4x4_o *)local_248,root,(MethodInfo *)0x0);
      uVar19._0_4_ = (pUVar33->fields).m00;
      uVar19._4_4_ = (pUVar33->fields).m10;
      uVar24._0_4_ = (pUVar33->fields).m20;
      uVar24._4_4_ = (pUVar33->fields).m30;
      uVar4._0_4_ = (pUVar33->fields).m01;
      uVar4._4_4_ = (pUVar33->fields).m11;
      uVar5._0_4_ = (pUVar33->fields).m21;
      uVar5._4_4_ = (pUVar33->fields).m31;
      uVar6._0_4_ = (pUVar33->fields).m02;
      uVar6._4_4_ = (pUVar33->fields).m12;
      uVar7._0_4_ = (pUVar33->fields).m22;
      uVar7._4_4_ = (pUVar33->fields).m32;
      uVar8._0_4_ = (pUVar33->fields).m03;
      uVar8._4_4_ = (pUVar33->fields).m13;
      uVar9._0_4_ = (pUVar33->fields).m23;
      uVar9._4_4_ = (pUVar33->fields).m33;
      __this_04 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_04 == (UnityEngine_Transform_o *)0x0) goto label_181ea72d3;
      pUVar33 = UnityEngine_Transform__get_localToWorldMatrix
                          ((UnityEngine_Matrix4x4_o *)local_248,__this_04,(MethodInfo *)0x0);
      local_128._0_4_ = (pUVar33->fields).m00;
      local_128._4_4_ = (pUVar33->fields).m10;
      local_128._8_4_ = (pUVar33->fields).m20;
      local_128._12_4_ = (pUVar33->fields).m30;
      local_128._16_4_ = (pUVar33->fields).m01;
      local_128._20_4_ = (pUVar33->fields).m11;
      local_128._24_4_ = (pUVar33->fields).m21;
      local_128._28_4_ = (pUVar33->fields).m31;
      local_128._32_4_ = (pUVar33->fields).m02;
      local_128._36_4_ = (pUVar33->fields).m12;
      local_128._40_4_ = (pUVar33->fields).m22;
      local_128._44_4_ = (pUVar33->fields).m32;
      local_128._48_4_ = (pUVar33->fields).m03;
      local_128._52_4_ = (pUVar33->fields).m13;
      local_128._56_4_ = (pUVar33->fields).m23;
      local_128._60_4_ = (pUVar33->fields).m33;
      local_298._0_8_ = uVar19;
      local_298._8_8_ = uVar24;
      local_298._16_8_ = uVar4;
      local_298._24_8_ = uVar5;
      local_298._32_8_ = uVar6;
      local_298._40_8_ = uVar7;
      local_298._48_8_ = uVar8;
      local_298._56_8_ = uVar9;
      pUVar33 = UnityEngine_Matrix4x4__op_Multiply
                          ((UnityEngine_Matrix4x4_o *)local_248,(UnityEngine_Matrix4x4_o *)&local_298,
                           (UnityEngine_Matrix4x4_o *)local_128,(MethodInfo *)0x0);
      local_2d8.m00 = (pUVar33->fields).m00;
      local_2d8.m10 = (pUVar33->fields).m10;
      local_2d8.m20 = (pUVar33->fields).m20;
      local_2d8.m30 = (pUVar33->fields).m30;
      local_2d8.m01 = (pUVar33->fields).m01;
      local_2d8.m11 = (pUVar33->fields).m11;
      local_2d8.m21 = (pUVar33->fields).m21;
      local_2d8.m31 = (pUVar33->fields).m31;
      local_2d8.m02 = (pUVar33->fields).m02;
      local_2d8.m12 = (pUVar33->fields).m12;
      local_2d8.m22 = (pUVar33->fields).m22;
      local_2d8.m32 = (pUVar33->fields).m32;
      local_2d8.m03 = (pUVar33->fields).m03;
      local_2d8.m13 = (pUVar33->fields).m13;
      local_2d8.m23 = (pUVar33->fields).m23;
      local_2d8.m33 = (pUVar33->fields).m33;
      pUVar33 = UnityEngine_Matrix4x4__Internal_Inverse
                          ((UnityEngine_Matrix4x4_o *)local_248,(UnityEngine_Matrix4x4_o *)&local_2d8,
                           (MethodInfo *)0x0);
      local_168.m00 = (pUVar33->fields).m00;
      local_168.m10 = (pUVar33->fields).m10;
      local_168.m20 = (pUVar33->fields).m20;
      local_168.m30 = (pUVar33->fields).m30;
      local_168.m01 = (pUVar33->fields).m01;
      local_168.m11 = (pUVar33->fields).m11;
      local_168.m21 = (pUVar33->fields).m21;
      local_168.m31 = (pUVar33->fields).m31;
      local_168.m02 = (pUVar33->fields).m02;
      local_168.m12 = (pUVar33->fields).m12;
      local_168.m22 = (pUVar33->fields).m22;
      local_168.m32 = (pUVar33->fields).m32;
      local_168.m03 = (pUVar33->fields).m03;
      local_168.m13 = (pUVar33->fields).m13;
      local_168.m23 = (pUVar33->fields).m23;
      local_168.m33 = (pUVar33->fields).m33;
      pUVar33 = UnityEngine_Matrix4x4__Internal_Transpose
                          ((UnityEngine_Matrix4x4_o *)local_248,(UnityEngine_Matrix4x4_o *)&local_168,
                           (MethodInfo *)0x0);
      uVar10._0_4_ = (pUVar33->fields).m00;
      uVar10._4_4_ = (pUVar33->fields).m10;
      uVar11._0_4_ = (pUVar33->fields).m20;
      uVar11._4_4_ = (pUVar33->fields).m30;
      uVar12._0_4_ = (pUVar33->fields).m01;
      uVar12._4_4_ = (pUVar33->fields).m11;
      uVar13._0_4_ = (pUVar33->fields).m21;
      uVar13._4_4_ = (pUVar33->fields).m31;
      uVar14._0_4_ = (pUVar33->fields).m02;
      uVar14._4_4_ = (pUVar33->fields).m12;
      uVar15._0_4_ = (pUVar33->fields).m22;
      uVar15._4_4_ = (pUVar33->fields).m32;
      uVar16._0_4_ = (pUVar33->fields).m03;
      uVar16._4_4_ = (pUVar33->fields).m13;
      uVar17._0_4_ = (pUVar33->fields).m23;
      uVar17._4_4_ = (pUVar33->fields).m33;
      fVar41 = UnityEngine_Matrix4x4__get_determinant((UnityEngine_Matrix4x4_o *)&local_2d8,(MethodInfo *)0x0)
      ;
      pUVar34 = UnityEngine_Mesh__get_vertices(__this_02,(MethodInfo *)0x0);
      local_2e8 = pUVar34;
      pUVar35 = UnityEngine_Mesh__get_normals(__this_02,(MethodInfo *)0x0);
      local_2f0 = pUVar35;
      local_2f8 = UnityEngine_Mesh__get_uv(__this_02,(MethodInfo *)0x0);
      if ((pUVar35 == (UnityEngine_Vector3_array *)0x0) || (pUVar34 == (UnityEngine_Vector3_array *)0x0))
      goto label_181ea72d3;
      iVar1 = (int)pUVar34->max_length;
      bVar28 = (int)pUVar35->max_length == iVar1;
      if (local_2f8 == (UnityEngine_Vector2_array *)0x0) goto label_181ea72d3;
      hasUV = (int)local_2f8->max_length == iVar1;
      for (submesh = 0; iVar30 = UnityEngine_Mesh__get_subMeshCount(__this_02,(MethodInfo *)0x0),
          (int)submesh < iVar30; submesh = submesh + 1) {
        if (pUVar32 == (UnityEngine_Material_array *)0x0) goto label_181ea72d3;
        if (pUVar32->max_length == 0) break;
        uVar31 = (int)pUVar32->max_length - 1;
        uVar40 = submesh;
        if ((int)uVar31 <= (int)submesh) {
          uVar40 = uVar31;
        }
        if ((uint)pUVar32->max_length <= uVar40) goto label_181ea72d9;
        x = pUVar32->m_Items[(int)uVar40];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar29 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((!bVar29) &&
           (iVar30 = UnityEngine_Mesh__GetTopology(__this_02,submesh,(MethodInfo *)0x0), iVar30 == 0)) {
          if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_181ea72d3;
          bVar29 = System_Collections_Generic_Dictionary_object__int___TryGetValue
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                              (Il2CppObject *)x,&local_304,
                              (MethodInfo_1461BD0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Material_int_TryGetValue);
          if (!bVar29) {
            if (materials == (System_Collections_Generic_List_Material__o *)0x0) goto label_181ea72d3;
            local_304.fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)(materials->fields)._size;
            System_Collections_Generic_Dictionary_object__int___Add
                      (__this_00,(Il2CppObject *)x,(int32_t)local_304.fields.m_Index,
                       (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_Material_int_Add
                      );
            il2cpp_runtime_helper_180012890(materials,x);
          }
          pSVar36 = UnityEngine_Mesh__GetTriangles(__this_02,submesh,(MethodInfo *)0x0);
          if ((__this_01 == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) ||
             (pSVar36 == (System_Int32_array *)0x0)) goto label_181ea72d3;
          iVar1 = (int)pSVar36->max_length;
          if (maxTriangles <
              iVar1 / 3 + (iVar1 >> 0x1f) +
              (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f) +
              (__this_01->fields)._size) goto label_181ea7122;
          uVar40 = 0;
          iVar1 = (int)pSVar36->max_length;
          bVar29 = iVar1 != 0;
          __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)local_2e0;
          if (0 < iVar1) {
            do {
              if (((!bVar29) || (uVar31 = (fVar41 < 0.0) + 1 + uVar40, (uint)pSVar36->max_length <= uVar31))
                 || (uVar39 = (0.0 <= fVar41) + 1 + uVar40, (uint)pSVar36->max_length <= uVar39))
              goto label_181ea72d9;
              iVar30 = pSVar36->m_Items[(int)uVar31];
              index = pSVar36->m_Items[(int)uVar39];
              local_248._0_4_ = local_2d8.m00;
              local_248._4_4_ = local_2d8.m10;
              local_248._8_4_ = local_2d8.m20;
              local_248._12_4_ = local_2d8.m30;
              local_248._16_4_ = local_2d8.m01;
              local_248._20_4_ = local_2d8.m11;
              local_248._24_4_ = local_2d8.m21;
              local_248._28_4_ = local_2d8.m31;
              local_248._32_4_ = local_2d8.m02;
              local_248._36_4_ = local_2d8.m12;
              local_248._40_4_ = local_2d8.m22;
              local_248._44_4_ = local_2d8.m32;
              local_248._48_4_ = local_2d8.m03;
              local_248._52_4_ = local_2d8.m13;
              local_248._56_4_ = local_2d8.m23;
              local_248._60_4_ = local_2d8.m33;
              local_298._0_8_ = uVar10;
              local_298._8_8_ = uVar11;
              local_298._16_8_ = uVar12;
              local_298._24_8_ = uVar13;
              local_298._32_8_ = uVar14;
              local_298._40_8_ = uVar15;
              local_298._48_8_ = uVar16;
              local_298._56_8_ = uVar17;
              pMVar37 = Map_MapFracture__ReadVertex
                                  ((Map_MapFracture_Vertex_o *)local_128,local_2e8,local_2f0,local_2f8,
                                   pSVar36->m_Items[(int)uVar40],(UnityEngine_Matrix4x4_o *)local_248,
                                   (UnityEngine_Matrix4x4_o *)&local_298,bVar28,hasUV,(MethodInfo *)0x0);
              uVar18._0_4_ = (pMVar37->fields).Position.fields.x;
              uVar18._4_4_ = (pMVar37->fields).Position.fields.y;
              uVar19 = *(undefined8 *)&(pMVar37->fields).Position.fields.z;
              fVar2 = (pMVar37->fields).Shade;
              uVar20._0_4_ = (pMVar37->fields).Normal.fields.y;
              uVar20._4_4_ = (pMVar37->fields).Normal.fields.z;
              UVar21 = (pMVar37->fields).UV.fields;
              local_298.m00 = local_2d8.m00;
              local_298.m10 = local_2d8.m10;
              local_298.m20 = local_2d8.m20;
              local_298.m30 = local_2d8.m30;
              local_298.m01 = local_2d8.m01;
              local_298.m11 = local_2d8.m11;
              local_298.m21 = local_2d8.m21;
              local_298.m31 = local_2d8.m31;
              local_298.m02 = local_2d8.m02;
              local_298.m12 = local_2d8.m12;
              local_298.m22 = local_2d8.m22;
              local_298.m32 = local_2d8.m32;
              local_298.m03 = local_2d8.m03;
              local_298.m13 = local_2d8.m13;
              local_298.m23 = local_2d8.m23;
              local_298.m33 = local_2d8.m33;
              local_248._0_8_ = uVar10;
              local_248._8_8_ = uVar11;
              local_248._16_8_ = uVar12;
              local_248._24_8_ = uVar13;
              local_248._32_8_ = uVar14;
              local_248._40_8_ = uVar15;
              local_248._48_8_ = uVar16;
              local_248._56_8_ = uVar17;
              pMVar37 = Map_MapFracture__ReadVertex
                                  ((Map_MapFracture_Vertex_o *)local_128,local_2e8,local_2f0,local_2f8,iVar30,
                                   (UnityEngine_Matrix4x4_o *)&local_298,(UnityEngine_Matrix4x4_o *)local_248,
                                   bVar28,hasUV,(MethodInfo *)0x0);
              uVar22 = (pMVar37->fields).Position.fields.x;
              uVar23 = (pMVar37->fields).Position.fields.y;
              uVar24 = *(undefined8 *)&(pMVar37->fields).Position.fields.z;
              fVar3 = (pMVar37->fields).Shade;
              uVar25 = (pMVar37->fields).Normal.fields.y;
              uVar26 = (pMVar37->fields).Normal.fields.z;
              UVar27 = (pMVar37->fields).UV.fields;
              local_298.m00 = local_2d8.m00;
              local_298.m10 = local_2d8.m10;
              local_298.m20 = local_2d8.m20;
              local_298.m30 = local_2d8.m30;
              local_298.m01 = local_2d8.m01;
              local_298.m11 = local_2d8.m11;
              local_298.m21 = local_2d8.m21;
              local_298.m31 = local_2d8.m31;
              local_298.m02 = local_2d8.m02;
              local_298.m12 = local_2d8.m12;
              local_298.m22 = local_2d8.m22;
              local_298.m32 = local_2d8.m32;
              local_298.m03 = local_2d8.m03;
              local_298.m13 = local_2d8.m13;
              local_298.m23 = local_2d8.m23;
              local_298.m33 = local_2d8.m33;
              local_248._0_8_ = uVar10;
              local_248._8_8_ = uVar11;
              local_248._16_8_ = uVar12;
              local_248._24_8_ = uVar13;
              local_248._32_8_ = uVar14;
              local_248._40_8_ = uVar15;
              local_248._48_8_ = uVar16;
              local_248._56_8_ = uVar17;
              pMVar37 = Map_MapFracture__ReadVertex
                                  ((Map_MapFracture_Vertex_o *)local_128,local_2e8,local_2f0,local_2f8,index,
                                   (UnityEngine_Matrix4x4_o *)&local_298,(UnityEngine_Matrix4x4_o *)local_248,
                                   bVar28,hasUV,(MethodInfo *)0x0);
              __this_01 = local_258;
              fStack_1ac = (float)uVar24;
              fStack_1a8 = (float)((ulonglong)uVar24 >> 0x20);
              uStack_200._0_4_ = (pMVar37->fields).Position.fields.x;
              uStack_200._4_4_ = (pMVar37->fields).Position.fields.y;
              uVar24 = *(undefined8 *)&(pMVar37->fields).Position.fields.z;
              local_180._0_4_ = (pMVar37->fields).Normal.fields.y;
              local_180._4_4_ = (pMVar37->fields).Normal.fields.z;
              UStack_178 = (pMVar37->fields).UV.fields;
              fStack_1e0 = (pMVar37->fields).Shade;
              local_248._36_4_ = uVar22;
              local_248._32_4_ = fVar2;
              local_248._44_4_ = fStack_1ac;
              local_248._40_4_ = uVar23;
              local_16c = local_304.fields.m_Index;
              fStack_19c = UVar27.x;
              fStack_198 = UVar27.y;
              local_208 = CONCAT44(fVar3,fStack_198);
              local_248._52_4_ = uVar25;
              local_248._48_4_ = fStack_1a8;
              local_248._60_4_ = fStack_19c;
              local_248._56_4_ = uVar26;
              uStack_188._0_4_ = (undefined4)uVar24;
              uStack_188._4_4_ = (undefined4)((ulonglong)uVar24 >> 0x20);
              local_1e8 = UStack_178.x;
              fStack_1e4 = UStack_178.y;
              UStack_1dc = local_304.fields.m_Index;
              local_1f8 = (undefined4)uStack_188;
              uStack_1f4 = uStack_188._4_4_;
              uStack_1f0 = (undefined4)local_180;
              uStack_1ec = local_180._4_4_;
              local_248._0_8_ = uVar18;
              local_248._8_8_ = uVar19;
              local_248._16_8_ = uVar20;
              local_248._24_8_ = UVar21;
              local_1b8 = fVar2;
              fStack_1b4 = (float)uVar22;
              fStack_1b0 = (float)uVar23;
              fStack_1a4 = (float)uVar25;
              fStack_1a0 = (float)uVar26;
              local_194 = fVar3;
              local_190 = uStack_200;
              uStack_188 = uVar24;
              local_170 = fStack_1e0;
              il2cpp_runtime_helper_180043610(local_258);
              uVar40 = uVar40 + 3;
              uVar31 = (uint)pSVar36->max_length;
              bVar29 = uVar40 < uVar31;
              __this_02 = local_250;
              __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)local_2e0;
            } while ((int)uVar40 < (int)uVar31);
          }
        }
      }
    }
    if (__this_01 != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
      if ((__this_01->fields)._size == 0) {
label_181ea7122:
        __this_05 = (Map_MapFracture_o *)0x0;
      }
      else {
        __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapFracture);
        if (Il2CppMethodInitialized_184345083 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_MapFracture_Segment_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Collections_Generic_List_MapFracture_Segment);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapFracture_Vertex_array);
          Il2CppMethodInitialized_184345083 = '\x01';
        }
        pMVar38 = (Map_MapFracture_Vertex_array *)SZArrayNew(TypeInfo_Map_MapFracture_Vertex_array,3);
        (__this_05->fields)._corners = pMVar38;
        Il2CppCodeGenWriteBarrier(&(__this_05->fields)._corners,pMVar38);
        value = (System_Single_array *)SZArrayNew(TypeInfo_float_array,3);
        (__this_05->fields)._distances = value;
        Il2CppCodeGenWriteBarrier(&(__this_05->fields)._distances,value);
        pMVar38 = (Map_MapFracture_Vertex_array *)SZArrayNew(TypeInfo_Map_MapFracture_Vertex_array,6);
        (__this_05->fields)._polygon = pMVar38;
        Il2CppCodeGenWriteBarrier(&(__this_05->fields)._polygon,pMVar38);
        pMVar38 = (Map_MapFracture_Vertex_array *)SZArrayNew(TypeInfo_Map_MapFracture_Vertex_array,2);
        (__this_05->fields)._cut = pMVar38;
        Il2CppCodeGenWriteBarrier(&(__this_05->fields)._cut,pMVar38);
        __this_06 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Segment);
        System_Collections_Generic_List_MapFracture_Segment____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)__this_06,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapFracture_Segment_ctor);
        (__this_05->fields)._segments = __this_06;
        Il2CppCodeGenWriteBarrier(&(__this_05->fields)._segments,__this_06);
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_05,(MethodInfo *)0x0);
        (__this_05->fields)._triangles = __this_01;
        Il2CppCodeGenWriteBarrier(&(__this_05->fields)._triangles,__this_01);
      }
      return __this_05;
    }
  }
label_181ea72d3:
  ThrowNullReferenceException();
}


// Map.MapFracture$$Shatter
// il2cpp: System_Collections_Generic_List_List_MapFracture_Triangle___o* Map_MapFracture__Shatter (Map_MapFracture_o* __this, int32_t pieceCount, float groundHeight, int32_t seed, const MethodInfo* method);
// 0x181ea72e0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea76fe: nop 
// asm:   0x181ea790a: mov r14, rbx
// asm:   0x181ea790d: jmp 0x181ea7775

System_Collections_Generic_List_List_MapFracture_Triangle___o *
Map_MapFracture__Shatter
          (Map_MapFracture_o *__this,int32_t pieceCount,float groundHeight,int32_t seed,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  int32_t iVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  Map_MapFracture___c__DisplayClass16_0_o *pMVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int32_t iVar10;
  int32_t iVar11;
  bool bVar12;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o index;
  Map_MapFracture___c__DisplayClass16_0_o *__this_00;
  System_Collections_Generic_List_List_MapFracture_Triangle___o *__this_01;
  System_Collections_Generic_List_MapFracture_Triangle__o *pSVar13;
  UnityEngine_Bounds_o *pUVar14;
  System_Random_o *__this_02;
  System_Collections_Generic_List_Vector3__o *pSVar15;
  System_Collections_Generic_List_T__o *__this_03;
  Map_MapFracture___c__DisplayClass16_1_o *object;
  System_Comparison_T__o *__this_04;
  int iVar16;
  int index_00;
  System_Collections_Generic_List_MapFracture_Triangle__o *pSVar17;
  float fVar18;
  UnityEngine_Vector3_Fields local_138;
  System_Collections_Generic_List_List_MapFracture_Triangle___o *local_128;
  System_Collections_Generic_List_MapFracture_Triangle__o *local_120;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o local_118;
  System_Collections_Generic_List_MapFracture_Triangle__o *local_108;
  System_Collections_Generic_List_MapFracture_Triangle__o *local_100;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_Fields local_f8;
  undefined8 local_e8;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Bounds_o local_c8 [6];
  
  if (Il2CppMethodInitialized_184345085 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Sort_40b3ca8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_4077448);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_4077368);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapFracture_Triangle)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_List_MapFracture_Triangle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Random);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapFracture_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapFracture_c__DisplayClass16_1_Shatter_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapFracture_c__DisplayClass16_1);
    Il2CppMethodInitialized_184345085 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapFracture_c__DisplayClass16_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  Map_MapFracture__CloseOpenings(__this,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_List_MapFracture_Triangle);
  local_128 = __this_01;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_ctor);
  pSVar17 = (__this->fields)._triangles;
  if (pSVar17 != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    iVar5 = (pSVar17->fields)._size;
    pSVar13 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Triangle);
    local_120 = pSVar13;
    System_Collections_Generic_List_MapFracture_Triangle____ctor
              ((System_Collections_Generic_List_T__o *)pSVar13,iVar5,
               (MethodInfo_92A4F0 *)
               MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_4077448);
    pSVar17 = (__this->fields)._triangles;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_138.x = (pUVar6->upVector).fields.x;
    local_138.y = (pUVar6->upVector).fields.y;
    local_138.z = (pUVar6->upVector).fields.z;
    bVar12 = Map_MapFracture__Clip
                       (__this,pSVar17,pSVar13,(UnityEngine_Vector3_o *)&local_138,groundHeight,
                        (MethodInfo *)0x0);
    if (!bVar12) {
      pSVar13 = (__this->fields)._triangles;
      local_120 = pSVar13;
    }
    if (pSVar13 != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
      if ((pSVar13->fields)._size == 0) {
        return __this_01;
      }
      pUVar14 = Map_MapFracture__GetBounds(local_c8,pSVar13,(MethodInfo *)0x0);
      uVar8._0_4_ = (pUVar14->fields).m_Center.fields.x;
      uVar8._4_4_ = (pUVar14->fields).m_Center.fields.y;
      uVar9 = *(undefined8 *)&(pUVar14->fields).m_Center.fields.z;
      uVar3._0_4_ = (pUVar14->fields).m_Extents.fields.y;
      uVar3._4_4_ = (pUVar14->fields).m_Extents.fields.z;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Random);
      System_Random___ctor_1b47f40(__this_02,seed,(MethodInfo *)0x0);
      local_c8[0].fields.m_Center.fields._0_8_ = uVar8;
      local_c8[0].fields._8_8_ = uVar9;
      local_c8[0].fields.m_Extents.fields._4_8_ = uVar3;
      pSVar15 = Map_MapFracture__CreateSeeds(local_c8,pieceCount,__this_02,(MethodInfo *)0x0);
      if (__this_00 != (Map_MapFracture___c__DisplayClass16_0_o *)0x0) {
        (__this_00->fields).seeds = pSVar15;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).seeds,pSVar15);
        pSVar15 = (__this_00->fields).seeds;
        if (pSVar15 != (System_Collections_Generic_List_Vector3__o *)0x0) {
          iVar5 = (pSVar15->fields)._size;
          __this_03 = (System_Collections_Generic_List_T__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
          System_Collections_Generic_List_int____ctor
                    (__this_03,iVar5,
                     (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
          iVar5 = (pSVar13->fields)._size;
          local_108 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Triangle)
          ;
          System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo____ctor_92a4f0
                    ((System_Collections_Generic_List_T__o *)local_108,iVar5,
                     (MethodInfo_92A4F0 *)
                     MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_4077448);
          iVar5 = (pSVar13->fields)._size;
          local_100 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Triangle)
          ;
          System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo____ctor_92a4f0
                    ((System_Collections_Generic_List_T__o *)local_100,iVar5,
                     (MethodInfo_92A4F0 *)
                     MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_4077448);
          index_00 = 0;
          while (pSVar15 = (__this_00->fields).seeds,
                pSVar15 != (System_Collections_Generic_List_Vector3__o *)0x0) {
            if ((pSVar15->fields)._size <= index_00) {
              return __this_01;
            }
            object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapFracture_c__DisplayClass16_1);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0)
            ;
            if (object == (Map_MapFracture___c__DisplayClass16_1_o *)0x0) break;
            (object->fields).CS___8__locals1 = __this_00;
            Il2CppCodeGenWriteBarrier(&(object->fields).CS___8__locals1,__this_00);
            pMVar7 = (object->fields).CS___8__locals1;
            if ((pMVar7 == (Map_MapFracture___c__DisplayClass16_0_o *)0x0) ||
               (pSVar15 = (pMVar7->fields).seeds, pSVar15 == (System_Collections_Generic_List_Vector3__o *)0x0
               )) break;
            System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                      ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_f8,
                       (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar15,index_00,
                       (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
            (object->fields).own.fields.x = (float)local_f8.x;
            (object->fields).own.fields.y = (float)local_f8.y;
            (object->fields).own.fields.z = (float)local_f8.z;
            if (__this_03 == (System_Collections_Generic_List_T__o *)0x0) break;
            piVar1 = &(__this_03->fields)._version;
            *piVar1 = *piVar1 + 1;
            (__this_03->fields)._size = 0;
            iVar16 = 0;
            while( true ) {
              pMVar7 = (object->fields).CS___8__locals1;
              if ((pMVar7 == (Map_MapFracture___c__DisplayClass16_0_o *)0x0) ||
                 (pSVar15 = (pMVar7->fields).seeds,
                 pSVar15 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto label_181ea79f2;
              if ((pSVar15->fields)._size <= iVar16) break;
              if (iVar16 != index_00) {
                il2cpp_runtime_helper_180026690(__this_03,iVar16,MethodInfo_System_Collections_Generic_List_int_Add);
              }
              iVar16 = iVar16 + 1;
            }
            __this_04 = (System_Comparison_T__o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_int);
            System_Comparison_int____ctor
                      (__this_04,(Il2CppObject *)object,
                       (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass16_1_Shatter_b__0,
                       (MethodInfo_13402B0 *)0x0);
            System_Collections_Generic_List_int___Sort
                      (__this_03,__this_04,
                       (MethodInfo_923EC0 *)MethodInfo_System_Collections_Generic_List_int_Sort_40b3ca8);
            iVar16 = 0;
            while ((pSVar17 = pSVar13, iVar16 < (__this_03->fields)._size && (iVar16 < 0x14))) {
              if (pSVar17 == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0)
              goto label_181ea79f2;
              if ((pSVar17->fields)._size < 1) goto label_181ea7973;
              pMVar7 = (object->fields).CS___8__locals1;
              if (pMVar7 == (Map_MapFracture___c__DisplayClass16_0_o *)0x0) goto label_181ea79f2;
              pSVar15 = (pMVar7->fields).seeds;
              index = System_Collections_Generic_List_int___get_Item
                                ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_03,
                                 iVar16,(MethodInfo_92B8E0 *)
                                        MethodInfo_System_Collections_Generic_List_int_get_Item);
              if (pSVar15 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_181ea79f2;
              System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                        (&local_118,
                         (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar15,
                         (int32_t)index.fields,
                         (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
              iVar11 = local_118.fields.z;
              iVar10 = local_118.fields.y;
              iVar5 = local_118.fields.x;
              fVar2 = (object->fields).own.fields.x - (float)local_118.fields.x;
              fVar4 = (object->fields).own.fields.y - (float)local_118.fields.y;
              fVar18 = (object->fields).own.fields.z - (float)local_118.fields.z;
              local_138.y = fVar4;
              local_138.x = fVar2;
              local_138.z = fVar18;
              if (Il2CppMethodInitialized_18433de5f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5f = '\x01';
              }
              local_d8.z = (float)il2cpp_runtime_helper_180546a40(&local_138,0);
              if (local_d8.z <= 1e-05) {
                pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar2 = (pUVar6->zeroVector).fields.x;
                fVar4 = (pUVar6->zeroVector).fields.y;
                local_d8.z = (pUVar6->zeroVector).fields.z;
              }
              else {
                fVar2 = fVar2 / local_d8.z;
                fVar4 = fVar4 / local_d8.z;
                local_d8.z = fVar18 / local_d8.z;
              }
              local_e8 = CONCAT44(fVar4,fVar2);
              pSVar13 = local_108;
              if (pSVar17 == local_108) {
                pSVar13 = local_100;
              }
              local_d8.y = fVar4;
              local_d8.x = fVar2;
              iVar16 = iVar16 + 1;
              bVar12 = Map_MapFracture__Clip
                                 (__this,pSVar17,pSVar13,(UnityEngine_Vector3_o *)&local_d8,
                                  ((float)iVar10 + (object->fields).own.fields.y) * 0.5 * fVar4 +
                                  ((float)iVar5 + (object->fields).own.fields.x) * 0.5 * fVar2 +
                                  ((float)iVar11 + (object->fields).own.fields.z) * 0.5 * local_d8.z,
                                  (MethodInfo *)0x0);
              if (!bVar12) {
                pSVar13 = pSVar17;
              }
            }
            if (pSVar17 == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) break;
            if ((pSVar17->fields)._size < 1) {
label_181ea7973:
              index_00 = index_00 + 1;
              __this_01 = local_128;
              pSVar13 = local_120;
            }
            else {
              pSVar13 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_List_MapFracture_Triangle);
              System_Collections_Generic_List_MapFracture_Triangle____ctor_9f08b0
                        (pSVar13,(System_Collections_Generic_IEnumerable_T__o *)pSVar17,
                         (MethodInfo_9F08B0 *)
                         MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_4077368);
              __this_01 = local_128;
              if (local_128 == (System_Collections_Generic_List_List_MapFracture_Triangle___o *)0x0) break;
              il2cpp_runtime_helper_180012890(local_128,pSVar13,
                            MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_Add);
              index_00 = index_00 + 1;
              pSVar13 = local_120;
            }
          }
        }
      }
    }
  }
label_181ea79f2:
  ThrowNullReferenceException();
}


// Map.MapFracture$$CreateMesh
// il2cpp: UnityEngine_Mesh_o* Map_MapFracture__CreateMesh (System_Collections_Generic_List_MapFracture_Triangle__o* triangles, int32_t submeshCount, UnityEngine_Vector3_o* center, const MethodInfo* method);
// 0x181ea4390
// eh: try 0x181ea4730..0x181ea4b00 -> pad 0x18333d440 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea45ce: nop 
// asm:   0x181ea463d: mov rbx, qword ptr [rsp + 0x350]
// asm:   0x181ea4976: mov rdx, qword ptr [rip + 0x2200423]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x181ea497d: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x181ea4982: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea4987: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181ea498c: test rcx, rcx
// asm:   0x181ea498f: jne 0x181ea4b00
// asm:   0x181ea4995: xor r14d, r14d
// asm:   0x181ea4998: mov r15d, dword ptr [rsp + 0x358]
// asm:   0x181ea49a0: mov rbx, qword ptr [rsp + 0x350]
// asm:   0x181ea49a8: mov r13, qword ptr [rsp + 0x80]
// asm:   0x181ea49b0: mov rax, qword ptr [rsp + 0x88]
// asm:   0x181ea49b8: mov qword ptr [rsp + 0x40], rax
// asm:   0x181ea49bd: mov rax, qword ptr [rsp + 0x90]
// asm:   0x181ea49c5: mov qword ptr [rsp + 0x48], rax
// asm:   0x181ea49ca: mov rsi, qword ptr [rsp + 0x98]
// asm:   0x181ea49d2: mov r12, rsi
// asm:   0x181ea4a7e: nop 
// asm:   0x181ea4b00: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333d440: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d445: push rbp
// asm:   0x18333d446: sub rsp, 0x40
// asm:   0x18333d44a: mov rbp, rdx
// asm:   0x18333d44d: mov rax, qword ptr [rbp + 0x160]
// asm:   0x18333d454: mov rcx, qword ptr [rax]
// asm:   0x18333d457: mov qword ptr [rbp + 0x68], rcx
// asm:   0x18333d45b: movabs rax, 0
// asm:   0x18333d465: add rsp, 0x40
// asm:   0x18333d469: pop rbp
// asm:   0x18333d46a: ret 

UnityEngine_Mesh_o *
Map_MapFracture__CreateMesh
          (System_Collections_Generic_List_MapFracture_Triangle__o *triangles,int32_t submeshCount,
          UnityEngine_Vector3_o *center,MethodInfo *method)

{
  int capacity;
  float fVar1;
  float fVar2;
  bool bVar3;
  UnityEngine_Bounds_o *pUVar4;
  System_Collections_Generic_List_Vector3__o *inVertices;
  System_Collections_Generic_List_Vector3__o *inNormals;
  System_Collections_Generic_List_Vector2__o *uvs;
  System_Collections_Generic_List_Color__o *inColors;
  Il2CppObject *pIVar5;
  Il2CppClass *pIVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Object_o *__this;
  ulonglong uVar8;
  uint uVar9;
  undefined1 local_2e0 [24];
  System_Collections_Generic_List_Vector3__o *local_2c8;
  System_Collections_Generic_List_Vector2__o *local_2c0;
  System_Collections_Generic_List_Color__o *local_2b8;
  Il2CppObject *local_2b0;
  UnityEngine_Vector3_Fields local_298;
  UnityEngine_Vector3_Fields local_288;
  UnityEngine_Vector3_Fields local_278;
  System_Collections_Generic_List_Enumerator_T__o local_268;
  undefined8 uStack_250;
  undefined8 local_248;
  UnityEngine_Vector2_Fields UStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  Il2CppObject *local_1d8 [3];
  UnityEngine_Vector2_Fields UStack_1c0;
  float local_1b8;
  Map_MapFracture_Vertex_o local_1a8;
  Map_MapFracture_Vertex_o local_178;
  System_Collections_Generic_List_Enumerator_T__o local_148;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  UnityEngine_Vector2_Fields UStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  ulonglong uVar10;
  
  if (Il2CppMethodInitialized_184345086 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int__array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector2_ctor_40efe18);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f06b0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color_ctor_408ed18)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&"Map debris");
    Il2CppMethodInitialized_184345086 = '\x01';
  }
  local_268.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_268.fields._index = 0;
  local_268.fields._version = 0;
  local_268.fields._current = (Il2CppObject *)0x0;
  uStack_250._0_4_ = 0.0;
  uStack_250._4_4_ = 0.0;
  local_248._0_4_ = 0.0;
  local_248._4_4_ = 0.0;
  UStack_240.x = 0.0;
  UStack_240.y = 0.0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208._0_4_ = 0.0;
  local_208._4_4_ = 0.0;
  uStack_200._0_4_ = 0.0;
  uStack_200._4_4_ = 0.0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  pUVar4 = Map_MapFracture__GetBounds((UnityEngine_Bounds_o *)local_2e0,triangles,(MethodInfo *)0x0);
  fVar1 = (pUVar4->fields).m_Center.fields.y;
  fVar2 = (pUVar4->fields).m_Center.fields.z;
  local_2e0._16_4_ = (pUVar4->fields).m_Extents.fields.y;
  local_2e0._20_4_ = (pUVar4->fields).m_Extents.fields.z;
  (center->fields).x = (pUVar4->fields).m_Center.fields.x;
  (center->fields).y = fVar1;
  (center->fields).z = fVar2;
  if (triangles != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    capacity = (triangles->fields)._size * 3;
    inVertices = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
    System_Collections_Generic_List_Vector3____ctor
              ((System_Collections_Generic_List_T__o *)inVertices,capacity,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f06b0);
    inNormals = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
    System_Collections_Generic_List_Vector3____ctor
              ((System_Collections_Generic_List_T__o *)inNormals,capacity,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f06b0);
    uvs = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector2);
    System_Collections_Generic_List_Vector2____ctor
              ((System_Collections_Generic_List_T__o *)uvs,capacity,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_Vector2_ctor_40efe18);
    inColors = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Color);
    System_Collections_Generic_List_Color____ctor
              ((System_Collections_Generic_List_T__o *)inColors,capacity,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_Color_ctor_408ed18);
    pIVar5 = SZArrayNew(TypeInfo_System_Collections_Generic_List_int__array,submeshCount);
    uVar8 = 0;
    uVar10 = uVar8;
    local_2b0 = pIVar5;
    if (0 < submeshCount) {
      do {
        pIVar6 = (Il2CppClass *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
        System_Collections_Generic_List_int____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)pIVar6,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
        if (pIVar5 == (Il2CppObject *)0x0) goto label_181ea4ade;
        if ((pIVar6 != (Il2CppClass *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)pIVar6,(pIVar5->klass->_1).element_class),
           pIVar7 == (Il2CppObject *)0x0)) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
        if (*(uint *)&pIVar5[1].monitor <= (uint)uVar10) goto label_181ea4b06;
        (&pIVar5[2].klass)[uVar10] = pIVar6;
        Il2CppCodeGenWriteBarrier(&pIVar5[2].klass + uVar10,pIVar6);
        uVar9 = (uint)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while ((int)uVar9 < submeshCount);
    }
    local_2c8 = inNormals;
    local_2c0 = uvs;
    local_2b8 = inColors;
    System_Collections_Generic_List_MapFracture_Triangle___GetEnumerator
              (&local_148,triangles,
               (MethodInfo_969260 *)
               MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    local_268.fields._list = local_148.fields._list;
    local_268.fields._index = local_148.fields._index;
    local_268.fields._version = local_148.fields._version;
    local_268.fields._current = local_148.fields._current;
    uStack_250._0_4_ = fStack_130;
    uStack_250._4_4_ = fStack_12c;
    local_248._0_4_ = local_128;
    local_248._4_4_ = fStack_124;
    UStack_240 = UStack_120;
    local_238 = local_118;
    uStack_230 = uStack_110;
    local_228 = local_108;
    uStack_220 = uStack_100;
    local_218 = local_f8;
    uStack_210 = uStack_f0;
    local_208._0_4_ = local_e8;
    local_208._4_4_ = fStack_e4;
    uStack_200._0_4_ = fStack_e0;
    uStack_200._4_4_ = fStack_dc;
    local_1f8 = local_d8;
    uStack_1f0 = uStack_d0;
    local_2e0._0_4_ = 0.0;
    local_2e0._4_4_ = 0.0;
    local_2e0._8_8_ = &local_268;
    while (bVar3 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                             (&local_268,
                              (MethodInfo_1558F50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext
                             ), bVar3) {
      local_a8 = (float)local_238;
      fStack_a4 = local_238._4_4_;
      fStack_a0 = (float)uStack_230;
      fStack_9c = uStack_230._4_4_;
      local_98 = (float)local_228;
      fStack_94 = (float)((ulonglong)local_228 >> 0x20);
      fStack_90 = (float)uStack_220;
      fStack_8c = (float)((ulonglong)uStack_220 >> 0x20);
      fVar1 = local_218._4_4_;
      local_88 = (float)local_218;
      fStack_84 = local_218._4_4_;
      fStack_80 = (float)uStack_210;
      fStack_7c = uStack_210._4_4_;
      local_78 = (float)local_208;
      fStack_74 = local_208._4_4_;
      fStack_70 = (float)uStack_200;
      fStack_6c = uStack_200._4_4_;
      fVar2 = (float)uStack_1f0;
      local_68 = (float)local_1f8;
      fStack_64 = local_1f8._4_4_;
      fStack_60 = (float)uStack_1f0;
      uStack_5c = uStack_1f0._4_4_;
      if (pIVar5 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (*(uint *)&pIVar5[1].monitor <= uStack_1f0._4_4_) {
        ThrowIndexOutOfRangeException();
      }
      pIVar6 = (&pIVar5[2].klass)[(int)uStack_1f0._4_4_];
      local_298.x = (center->fields).x;
      local_298.y = (center->fields).y;
      local_298.z = (center->fields).z;
      local_1d8[0] = local_268.fields._current;
      local_1d8[1] = (Il2CppObject *)uStack_250;
      local_1d8[2] = (Il2CppObject *)local_248;
      UStack_1c0 = UStack_240;
      local_1b8 = (float)local_238;
      Map_MapFracture__AddVertex
                ((Map_MapFracture_Vertex_o *)local_1d8,(UnityEngine_Vector3_o *)&local_298,
                 (System_Collections_Generic_List_int__o *)pIVar6,inVertices,inNormals,uvs,inColors,
                 (MethodInfo *)0x0);
      local_1a8.fields.Position.fields.y = fStack_a0;
      local_1a8.fields.Position.fields.x = fStack_a4;
      local_1a8.fields.Normal.fields.x = local_98;
      local_1a8.fields.Position.fields.z = fStack_9c;
      local_1a8.fields.Normal.fields.z = fStack_90;
      local_1a8.fields.Normal.fields.y = fStack_94;
      local_1a8.fields.UV.fields.y = local_88;
      local_1a8.fields.UV.fields.x = fStack_8c;
      local_288.x = (center->fields).x;
      local_288.y = (center->fields).y;
      local_288.z = (center->fields).z;
      local_1a8.fields.Shade = fVar1;
      Map_MapFracture__AddVertex
                (&local_1a8,(UnityEngine_Vector3_o *)&local_288,
                 (System_Collections_Generic_List_int__o *)pIVar6,inVertices,inNormals,uvs,inColors,
                 (MethodInfo *)0x0);
      local_178.fields.Position.fields.y = fStack_7c;
      local_178.fields.Position.fields.x = fStack_80;
      local_178.fields.UV.fields.y = fStack_64;
      local_178.fields.UV.fields.x = local_68;
      local_278.x = (center->fields).x;
      local_278.y = (center->fields).y;
      local_278.z = (center->fields).z;
      local_178.fields.Position.fields.z = local_78;
      local_178.fields.Normal.fields.x = fStack_74;
      local_178.fields.Normal.fields.y = fStack_70;
      local_178.fields.Normal.fields.z = fStack_6c;
      local_178.fields.Shade = fVar2;
      Map_MapFracture__AddVertex
                (&local_178,(UnityEngine_Vector3_o *)&local_278,
                 (System_Collections_Generic_List_int__o *)pIVar6,inVertices,inNormals,uvs,inColors,
                 (MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_268,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    __this = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
    UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this,"Map debris",(MethodInfo *)0x0);
      UnityEngine_Mesh__set_indexFormat
                ((UnityEngine_Mesh_o *)__this,(uint)(0xffff < capacity),(MethodInfo *)0x0);
      UnityEngine_Mesh__SetVertices((UnityEngine_Mesh_o *)__this,inVertices,(MethodInfo *)0x0);
      UnityEngine_Mesh__SetNormals((UnityEngine_Mesh_o *)__this,inNormals,(MethodInfo *)0x0);
      UnityEngine_Mesh__SetUVs((UnityEngine_Mesh_o *)__this,0,uvs,(MethodInfo *)0x0);
      UnityEngine_Mesh__SetColors((UnityEngine_Mesh_o *)__this,inColors,(MethodInfo *)0x0);
      UnityEngine_Mesh__set_subMeshCount((UnityEngine_Mesh_o *)__this,submeshCount,(MethodInfo *)0x0);
      if (0 < submeshCount) {
        if (pIVar5 == (Il2CppObject *)0x0) goto label_181ea4ade;
        do {
          uVar9 = (uint)uVar8;
          if (*(uint *)&pIVar5[1].monitor <= uVar9) {
label_181ea4b06:
            ThrowIndexOutOfRangeException();
          }
          UnityEngine_Mesh__SetTriangles_2eec840
                    ((UnityEngine_Mesh_o *)__this,
                     (System_Collections_Generic_List_int__o *)(&pIVar5[2].klass)[(int)uVar9],uVar9,false,
                     (MethodInfo *)0x0);
          uVar8 = (ulonglong)(uVar9 + 1);
        } while ((int)(uVar9 + 1) < submeshCount);
      }
      UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
      return (UnityEngine_Mesh_o *)__this;
    }
  }
label_181ea4ade:
  ThrowNullReferenceException();
}


// Map.MapFracture$$HasVolume
// il2cpp: bool Map_MapFracture__HasVolume (System_Collections_Generic_List_MapFracture_Triangle__o* triangles, float thickness, const MethodInfo* method);
// 0x181ea5e30

bool Map_MapFracture__HasVolume
               (System_Collections_Generic_List_MapFracture_Triangle__o *triangles,float thickness,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  Map_MapFracture___c__DisplayClass18_0_o *object;
  System_Func_Vector3__float__o *pSVar8;
  UnityEngine_Vector3_o *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o local_128;
  Map_MapFracture_Triangle_o local_118 [2];
  
  if (Il2CppMethodInitialized_184345087 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Vector3_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__1)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__2)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__3)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapFracture_c__DisplayClass18_0);
    Il2CppMethodInitialized_184345087 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapFracture_c__DisplayClass18_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (triangles != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    System_Collections_Generic_List_MapFracture_Triangle___get_Item
              (local_118,triangles,0,
               (MethodInfo_9721B0 *)MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Item);
    if (object != (Map_MapFracture___c__DisplayClass18_0_o *)0x0) {
      (object->fields).origin.fields.x = local_118[0].fields.A.fields.Position.fields.x;
      (object->fields).origin.fields.y = local_118[0].fields.A.fields.Position.fields.y;
      (object->fields).origin.fields.z = local_118[0].fields.A.fields.Position.fields.z;
      pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Vector3_float);
      System_Func_Vector3__float____ctor
                (pSVar8,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__0,
                 (MethodInfo_172A0E0 *)0x0);
      pUVar9 = Map_MapFracture__Extreme(&local_128,triangles,pSVar8,(MethodInfo *)0x0);
      uVar3 = (object->fields).origin.fields.x;
      uVar5 = (object->fields).origin.fields.y;
      uVar4 = (pUVar9->fields).x;
      uVar6 = (pUVar9->fields).y;
      (object->fields).axis.fields.z = (pUVar9->fields).z - (object->fields).origin.fields.z;
      (object->fields).axis.fields.x = (float)uVar4 - (float)uVar3;
      (object->fields).axis.fields.y = (float)uVar6 - (float)uVar5;
      pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Vector3_float);
      System_Func_Vector3__float____ctor
                (pSVar8,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__1,
                 (MethodInfo_172A0E0 *)0x0);
      pUVar9 = Map_MapFracture__Extreme(&local_128,triangles,pSVar8,(MethodInfo *)0x0);
      fVar16 = (object->fields).axis.fields.x;
      fVar10 = (object->fields).axis.fields.y;
      fVar12 = (object->fields).axis.fields.z;
      fVar15 = (pUVar9->fields).y - (object->fields).origin.fields.y;
      fVar13 = (pUVar9->fields).x - (object->fields).origin.fields.x;
      fVar11 = (pUVar9->fields).z - (object->fields).origin.fields.z;
      fVar14 = fVar11 * fVar10 - fVar15 * fVar12;
      fVar12 = fVar13 * fVar12 - fVar11 * fVar16;
      fVar16 = fVar15 * fVar16 - fVar13 * fVar10;
      (object->fields).normal.fields.x = fVar14;
      (object->fields).normal.fields.y = fVar12;
      (object->fields).normal.fields.z = fVar16;
      if (fVar12 * fVar12 + fVar14 * fVar14 + fVar16 * fVar16 < 0.0001) {
        bVar7 = false;
      }
      else {
        fVar16 = (float)il2cpp_runtime_helper_180546a40(&(object->fields).normal,0);
        if (1e-05 < fVar16) {
          fVar10 = (object->fields).normal.fields.z / fVar16;
          fVar12 = (object->fields).normal.fields.y / fVar16;
          fVar16 = (object->fields).normal.fields.x / fVar16;
        }
        else {
          fVar10 = 0.0;
          fVar12 = 0.0;
          fVar16 = 0.0;
        }
        (object->fields).normal.fields.x = fVar16;
        (object->fields).normal.fields.y = fVar12;
        (object->fields).normal.fields.z = fVar10;
        fVar16 = (object->fields).normal.fields.x;
        fVar12 = (object->fields).normal.fields.y;
        pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Vector3_float);
        System_Func_Vector3__float____ctor
                  (pSVar8,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__2,
                   (MethodInfo_172A0E0 *)0x0);
        pUVar9 = Map_MapFracture__Extreme(&local_128,triangles,pSVar8,(MethodInfo *)0x0);
        fVar11 = (object->fields).normal.fields.x;
        fVar13 = (object->fields).normal.fields.y;
        fVar14 = (pUVar9->fields).x;
        fVar15 = (pUVar9->fields).y;
        fVar1 = (pUVar9->fields).z;
        fVar2 = (object->fields).normal.fields.z;
        pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Vector3_float);
        System_Func_Vector3__float____ctor
                  (pSVar8,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__3,
                   (MethodInfo_172A0E0 *)0x0);
        pUVar9 = Map_MapFracture__Extreme(&local_128,triangles,pSVar8,(MethodInfo *)0x0);
        bVar7 = thickness <=
                (fVar15 * fVar12 + fVar14 * fVar16 + fVar1 * fVar10) -
                (fVar13 * (pUVar9->fields).y + fVar11 * (pUVar9->fields).x + fVar2 * (pUVar9->fields).z);
      }
      return bVar7;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$Extreme
// il2cpp: UnityEngine_Vector3_o Map_MapFracture__Extreme (System_Collections_Generic_List_MapFracture_Triangle__o* triangles, System_Func_Vector3__float__o* score, const MethodInfo* method);
// 0x181ea55f0
// eh: try 0x181ea57c0..0x181ea58c4 -> pad 0x18333d490 catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea57c0: movaps xmm7, xmm6
// asm:   0x181ea5844: movaps xmm6, xmm7
// asm:   0x181ea58d5: mov rdx, qword ptr [rip + 0x21ff4c4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x181ea58dc: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181ea58e1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea58e6: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181ea58eb: test rcx, rcx
// asm:   0x181ea58ee: jne 0x181ea5930
// asm:   0x181ea58f0: mov rdi, qword ptr [rsp + 0x200]
// asm:   0x181ea5930: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333d490: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d495: push rbp
// asm:   0x18333d496: sub rsp, 0x20
// asm:   0x18333d49a: mov rbp, rdx
// asm:   0x18333d49d: mov rax, qword ptr [rbp + 0x160]
// asm:   0x18333d4a4: mov rcx, qword ptr [rax]
// asm:   0x18333d4a7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333d4ab: movabs rax, 0
// asm:   0x18333d4b5: add rsp, 0x20
// asm:   0x18333d4b9: pop rbp
// asm:   0x18333d4ba: ret 

UnityEngine_Vector3_o *
Map_MapFracture__Extreme
          (UnityEngine_Vector3_o *__return_storage_ptr__,
          System_Collections_Generic_List_MapFracture_Triangle__o *triangles,
          System_Func_Vector3__float__o *score,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  System_Collections_Generic_List_T__o *local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  System_Collections_Generic_List_Enumerator_T__o *local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  System_Collections_Generic_List_Enumerator_T__o local_198;
  UnityEngine_Vector2_Fields UStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [12];
  float fStack_15c;
  undefined8 local_158;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  UnityEngine_Vector2_Fields local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [24];
  UnityEngine_Vector2_Fields UStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  UnityEngine_Vector3_Fields local_e8 [2];
  UnityEngine_Vector3_Fields aUStack_d0 [2];
  UnityEngine_Vector2_Fields local_b8;
  float fStack_b0;
  int32_t iStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  if (Il2CppMethodInitialized_184345088 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Item);
    Il2CppMethodInitialized_184345088 = '\x01';
  }
  (__return_storage_ptr__->fields).x = 0.0;
  (__return_storage_ptr__->fields).y = 0.0;
  (__return_storage_ptr__->fields).z = 0.0;
  local_198.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_198.fields._index = 0;
  local_198.fields._version = 0;
  local_198.fields._current = (Il2CppObject *)0x0;
  UStack_180.x = 0.0;
  UStack_180.y = 0.0;
  local_178 = 0;
  uStack_170 = 0;
  local_168._0_8_ = 0;
  stack0xfffffffffffffea0 = 0;
  local_158 = 0;
  auStack_150._0_8_ = 0;
  auStack_150._8_8_ = 0;
  uStack_140 = 0;
  local_138.x = 0.0;
  local_138.y = 0.0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  if (triangles != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    System_Collections_Generic_List_MapFracture_Triangle___get_Item
              ((Map_MapFracture_Triangle_o *)local_118,triangles,0,
               (MethodInfo_9721B0 *)MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Item);
    (__return_storage_ptr__->fields).x = (float)local_118._0_4_;
    (__return_storage_ptr__->fields).y = (float)local_118._4_4_;
    (__return_storage_ptr__->fields).z = (float)local_118._8_4_;
    if (score != (System_Func_Vector3__float__o *)0x0) {
      local_1d8 = (System_Collections_Generic_List_T__o *)local_118._0_8_;
      local_1d0 = (float)local_118._8_4_;
      fVar9 = (float)(*(code *)(score->fields).invoke_impl)
                               ((score->fields).method_code,&local_1d8,(score->fields).method);
      System_Collections_Generic_List_MapFracture_Triangle___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_118,triangles,
                 (MethodInfo_969260 *)
                 MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
      local_198.fields._list = (System_Collections_Generic_List_T__o *)local_118._0_8_;
      local_198.fields._current = (Il2CppObject *)local_118._16_8_;
      UStack_180 = UStack_100;
      local_168._0_4_ = local_e8[0].x;
      local_168._4_4_ = local_e8[0].y;
      local_168._8_4_ = local_e8[0].z;
      fStack_15c = local_e8[1].x;
      local_158._0_4_ = local_e8[1].y;
      local_158._4_4_ = local_e8[1].z;
      auStack_150._0_4_ = aUStack_d0[0].x;
      auStack_150._4_4_ = aUStack_d0[0].y;
      auStack_150._8_4_ = aUStack_d0[0].z;
      auStack_150._12_4_ = aUStack_d0[1].x;
      uStack_140._0_4_ = aUStack_d0[1].y;
      uStack_140._4_4_ = aUStack_d0[1].z;
      local_138 = local_b8;
      uStack_130._0_4_ = fStack_b0;
      uStack_130._4_4_ = iStack_ac;
      local_128 = local_a8;
      uStack_120 = uStack_a0;
      local_1c8 = 0;
      local_1c0 = &local_198;
      while (bVar7 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                               (&local_198,
                                (MethodInfo_1558F50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext
                               ), uVar2 = uStack_140, pIVar1 = local_198.fields._current, bVar7) {
        fVar11 = fStack_15c;
        local_f8 = (float)local_168._0_4_;
        fStack_f4 = (float)local_168._4_4_;
        fStack_f0 = (float)local_168._8_4_;
        fStack_ec = fStack_15c;
        fVar4 = local_138.x;
        fVar8 = UStack_180.x;
        local_1d8 = (System_Collections_Generic_List_T__o *)local_198.fields._current;
        local_1d0 = fVar8;
        fVar10 = (float)(*(code *)(score->fields).invoke_impl)
                                  ((score->fields).method_code,&local_1d8,(score->fields).method);
        fVar6 = fStack_f0;
        fVar5 = fStack_f4;
        if (fVar9 < fVar10) {
          *(Il2CppObject **)&__return_storage_ptr__->fields = pIVar1;
          (__return_storage_ptr__->fields).z = fVar8;
          fVar9 = fVar10;
        }
        local_1b8 = CONCAT44(fStack_f0,fStack_f4);
        local_1b0 = fVar11;
        fVar8 = (float)(*(code *)(score->fields).invoke_impl)
                                 ((score->fields).method_code,&local_1b8,(score->fields).method);
        uVar3 = uStack_140;
        if (fVar9 < fVar8) {
          (__return_storage_ptr__->fields).x = fVar5;
          (__return_storage_ptr__->fields).y = fVar6;
          (__return_storage_ptr__->fields).z = fVar11;
          fVar9 = fVar8;
        }
        uStack_140._0_4_ = (float)uVar2;
        uStack_140._4_4_ = SUB84(uVar2,4);
        local_1a8._0_4_ = (float)uStack_140;
        local_1a8._4_4_ = uStack_140._4_4_;
        local_1a0 = fVar4;
        uStack_140 = uVar3;
        fVar11 = (float)(*(code *)(score->fields).invoke_impl)
                                  ((score->fields).method_code,&local_1a8,(score->fields).method);
        if (fVar9 < fVar11) {
          uStack_140._0_4_ = (float)uVar2;
          uStack_140._4_4_ = SUB84(uVar2,4);
          (__return_storage_ptr__->fields).x = (float)uStack_140;
          (__return_storage_ptr__->fields).y = uStack_140._4_4_;
          (__return_storage_ptr__->fields).z = fVar4;
          fVar9 = fVar11;
        }
      }
      System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_198,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$Consider
// il2cpp: void Map_MapFracture__Consider (UnityEngine_Vector3_o point, System_Func_Vector3__float__o* score, UnityEngine_Vector3_o* best, float* bestScore, const MethodInfo* method);
// 0x181ea3c40

void Map_MapFracture__Consider
               (UnityEngine_Vector3_o *point,System_Func_Vector3__float__o *score,UnityEngine_Vector3_o *best,
               float *bestScore,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_18;
  float local_10;
  
  if (score != (System_Func_Vector3__float__o *)0x0) {
    local_18._0_4_ = (point->fields).x;
    local_18._4_4_ = (point->fields).y;
    local_10 = (point->fields).z;
    fVar3 = (float)(*(code *)(score->fields).invoke_impl)
                             ((score->fields).method_code,&local_18,(score->fields).method);
    if (*bestScore < fVar3) {
      fVar2 = (point->fields).y;
      fVar1 = (point->fields).z;
      (best->fields).x = (point->fields).x;
      (best->fields).y = fVar2;
      (best->fields).z = fVar1;
      *bestScore = fVar3;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$CreateCollisionMesh
// il2cpp: UnityEngine_Mesh_o* Map_MapFracture__CreateCollisionMesh (System_Collections_Generic_List_MapFracture_Triangle__o* triangles, UnityEngine_Vector3_o center, float scale, const MethodInfo* method);
// 0x181ea3cc0
// eh: try 0x181ea3f10..0x181ea4380 -> pad 0x18333d400 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea4259: mov rdx, qword ptr [rip + 0x2200b40]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x181ea4260: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181ea4265: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea426a: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181ea426f: test rcx, rcx
// asm:   0x181ea4272: jne 0x181ea4380
// asm:   0x181ea4278: mov rsi, qword ptr [rsp + 0x200]
// asm:   0x181ea4280: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x181ea4380: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333d400: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d405: push rbp
// asm:   0x18333d406: sub rsp, 0x30
// asm:   0x18333d40a: mov rbp, rdx
// asm:   0x18333d40d: mov rax, qword ptr [rbp + 0x100]
// asm:   0x18333d414: mov rcx, qword ptr [rax]
// asm:   0x18333d417: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333d41b: movabs rax, 0
// asm:   0x18333d425: add rsp, 0x30
// asm:   0x18333d429: pop rbp
// asm:   0x18333d42a: ret 

UnityEngine_Mesh_o *
Map_MapFracture__CreateCollisionMesh
          (System_Collections_Generic_List_MapFracture_Triangle__o *triangles,UnityEngine_Vector3_o *center,
          float scale,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint32_t uVar5;
  uint uVar6;
  System_Object_array *pSVar7;
  UnityEngine_Vector3_array *pUVar8;
  MethodInfo *pMVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  System_Collections_Generic_List_Vector3__o *inVertices;
  System_Collections_Generic_List_T__o *__this;
  UnityEngine_Object_o *__this_00;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o local_1c8;
  UnityEngine_Vector3_o local_1b8;
  UnityEngine_Vector3_o local_1a8;
  undefined8 local_198;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_190;
  System_Collections_Generic_List_T__o *local_188;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  System_Collections_Generic_List_Enumerator_T__o local_e8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (Il2CppMethodInitialized_184345089 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f06b0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&"Map debris collision");
    Il2CppMethodInitialized_184345089 = '\x01';
  }
  local_178._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_178._8_8_ = 0;
  local_168 = (Il2CppObject *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  if (triangles != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    iVar4 = (triangles->fields)._size;
    inVertices = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
    System_Collections_Generic_List_Vector3____ctor
              ((System_Collections_Generic_List_T__o *)inVertices,iVar4 * 3,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f06b0);
    iVar4 = (triangles->fields)._size;
    __this = (System_Collections_Generic_List_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor
              (__this,iVar4 * 3,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
    local_188 = __this;
    System_Collections_Generic_List_MapFracture_Triangle___GetEnumerator
              (&local_e8,triangles,
               (MethodInfo_969260 *)
               MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    local_178._0_8_ = local_e8.fields._list;
    local_178._8_4_ = local_e8.fields._index;
    local_178._12_4_ = local_e8.fields._version;
    local_168 = local_e8.fields._current;
    uStack_160 = uStack_d0;
    local_158 = local_c8;
    uStack_150 = uStack_c0;
    local_148 = local_b8;
    uStack_140 = uStack_b0;
    local_138 = local_a8;
    uStack_130 = uStack_a0;
    local_128 = local_98;
    uStack_120 = uStack_90;
    local_118 = local_88;
    uStack_110 = uStack_80;
    local_108 = local_78;
    uStack_100 = uStack_70;
    local_198 = 0;
    local_190 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178;
    while( true ) {
      bVar16 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                         ((System_Collections_Generic_List_Enumerator_T__o *)local_178,
                          (MethodInfo_1558F50 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext)
      ;
      pMVar9 = MethodInfo_System_Collections_Generic_List_int_Add;
      if (!bVar16) break;
      if (inVertices == (System_Collections_Generic_List_Vector3__o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this == (System_Collections_Generic_List_T__o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar17 = (float)local_168;
      fVar18 = local_168._4_4_;
      fVar20 = (float)uStack_160;
      fVar10 = local_148._4_4_;
      fVar11 = (float)uStack_140;
      fVar12 = uStack_140._4_4_;
      fVar13 = (float)uStack_120;
      fVar14 = uStack_120._4_4_;
      fVar15 = (float)local_118;
      uVar5 = (inVertices->fields)._size;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar7 = (__this->fields)._items;
      if (pSVar7 == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar6 = (__this->fields)._size;
      if (uVar6 < (uint)pSVar7->max_length) {
        (__this->fields)._size = uVar6 + 1;
        if ((uint)pSVar7->max_length <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        *(uint32_t *)((longlong)pSVar7->m_Items + (longlong)(int)uVar6 * 4) = uVar5;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize
                  ((System_Collections_Generic_List_uint__o *)__this,uVar5,
                   (MethodInfo_91A500 *)pMVar9->klass->rgctx_data[0xe].method);
      }
      pMVar9 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
      fVar19 = (center->fields).x;
      fVar2 = (center->fields).y;
      fVar3 = (center->fields).z;
      piVar1 = &(inVertices->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar8 = (inVertices->fields)._items;
      if (pUVar8 == (UnityEngine_Vector3_array *)0x0) {
        ThrowNullReferenceException();
      }
      fVar19 = (fVar17 - fVar19) * scale;
      fVar17 = (fVar18 - fVar2) * scale;
      fVar18 = (fVar20 - fVar3) * scale;
      uVar6 = (inVertices->fields)._size;
      if (uVar6 < (uint)pUVar8->max_length) {
        (inVertices->fields)._size = uVar6 + 1;
        if ((uint)pUVar8->max_length <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        pUVar8->m_Items[(int)uVar6].fields.x = fVar19;
        pUVar8->m_Items[(int)uVar6].fields.y = fVar17;
        pUVar8->m_Items[(int)uVar6].fields.z = fVar18;
      }
      else {
        local_1c8.fields.x = fVar19;
        local_1c8.fields.y = fVar17;
        local_1c8.fields.z = fVar18;
        System_Collections_Generic_List_Vector3___AddWithResize
                  (inVertices,&local_1c8,(MethodInfo_99C850 *)pMVar9->klass->rgctx_data[0xe].method);
      }
      pMVar9 = MethodInfo_System_Collections_Generic_List_int_Add;
      uVar5 = (inVertices->fields)._size;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar7 = (__this->fields)._items;
      if (pSVar7 == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar6 = (__this->fields)._size;
      if (uVar6 < (uint)pSVar7->max_length) {
        (__this->fields)._size = uVar6 + 1;
        if ((uint)pSVar7->max_length <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        *(uint32_t *)((longlong)pSVar7->m_Items + (longlong)(int)uVar6 * 4) = uVar5;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize
                  ((System_Collections_Generic_List_uint__o *)__this,uVar5,
                   (MethodInfo_91A500 *)pMVar9->klass->rgctx_data[0xe].method);
      }
      pMVar9 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
      fVar17 = (center->fields).x;
      fVar18 = (center->fields).y;
      fVar20 = (center->fields).z;
      piVar1 = &(inVertices->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar8 = (inVertices->fields)._items;
      if (pUVar8 == (UnityEngine_Vector3_array *)0x0) {
        ThrowNullReferenceException();
      }
      fVar17 = (fVar10 - fVar17) * scale;
      fVar18 = (fVar11 - fVar18) * scale;
      fVar20 = (fVar12 - fVar20) * scale;
      uVar6 = (inVertices->fields)._size;
      if (uVar6 < (uint)pUVar8->max_length) {
        (inVertices->fields)._size = uVar6 + 1;
        if ((uint)pUVar8->max_length <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        pUVar8->m_Items[(int)uVar6].fields.x = fVar17;
        pUVar8->m_Items[(int)uVar6].fields.y = fVar18;
        pUVar8->m_Items[(int)uVar6].fields.z = fVar20;
      }
      else {
        local_1b8.fields.x = fVar17;
        local_1b8.fields.y = fVar18;
        local_1b8.fields.z = fVar20;
        System_Collections_Generic_List_Vector3___AddWithResize
                  (inVertices,&local_1b8,(MethodInfo_99C850 *)pMVar9->klass->rgctx_data[0xe].method);
      }
      pMVar9 = MethodInfo_System_Collections_Generic_List_int_Add;
      uVar5 = (inVertices->fields)._size;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar7 = (__this->fields)._items;
      if (pSVar7 == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar6 = (__this->fields)._size;
      if (uVar6 < (uint)pSVar7->max_length) {
        (__this->fields)._size = uVar6 + 1;
        if ((uint)pSVar7->max_length <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        *(uint32_t *)((longlong)pSVar7->m_Items + (longlong)(int)uVar6 * 4) = uVar5;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize
                  ((System_Collections_Generic_List_uint__o *)__this,uVar5,
                   (MethodInfo_91A500 *)pMVar9->klass->rgctx_data[0xe].method);
      }
      pMVar9 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
      fVar17 = (center->fields).x;
      fVar18 = (center->fields).y;
      fVar20 = (center->fields).z;
      piVar1 = &(inVertices->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar8 = (inVertices->fields)._items;
      if (pUVar8 == (UnityEngine_Vector3_array *)0x0) {
        ThrowNullReferenceException();
      }
      fVar17 = (fVar13 - fVar17) * scale;
      fVar18 = (fVar14 - fVar18) * scale;
      fVar20 = (fVar15 - fVar20) * scale;
      uVar6 = (inVertices->fields)._size;
      if (uVar6 < (uint)pUVar8->max_length) {
        (inVertices->fields)._size = uVar6 + 1;
        if ((uint)pUVar8->max_length <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        pUVar8->m_Items[(int)uVar6].fields.x = fVar17;
        pUVar8->m_Items[(int)uVar6].fields.y = fVar18;
        pUVar8->m_Items[(int)uVar6].fields.z = fVar20;
      }
      else {
        local_1a8.fields.x = fVar17;
        local_1a8.fields.y = fVar18;
        local_1a8.fields.z = fVar20;
        System_Collections_Generic_List_Vector3___AddWithResize
                  (inVertices,&local_1a8,(MethodInfo_99C850 *)pMVar9->klass->rgctx_data[0xe].method);
      }
    }
    System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    __this_00 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
    UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,"Map debris collision",(MethodInfo *)0x0);
      if (inVertices != (System_Collections_Generic_List_Vector3__o *)0x0) {
        UnityEngine_Mesh__set_indexFormat
                  ((UnityEngine_Mesh_o *)__this_00,(uint)(0xffff < (inVertices->fields)._size),
                   (MethodInfo *)0x0);
        UnityEngine_Mesh__SetVertices((UnityEngine_Mesh_o *)__this_00,inVertices,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetTriangles_2eec840
                  ((UnityEngine_Mesh_o *)__this_00,(System_Collections_Generic_List_int__o *)__this,0,false,
                   (MethodInfo *)0x0);
        return (UnityEngine_Mesh_o *)__this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$AddVertex
// il2cpp: void Map_MapFracture__AddVertex (Map_MapFracture_Vertex_o vertex, UnityEngine_Vector3_o center, System_Collections_Generic_List_int__o* indices, System_Collections_Generic_List_Vector3__o* positions, System_Collections_Generic_List_Vector3__o* normals, System_Collections_Generic_List_Vector2__o* uv, System_Collections_Generic_List_Color__o* colors, const MethodInfo* method);
// 0x181ea1c80

void Map_MapFracture__AddVertex
               (Map_MapFracture_Vertex_o *vertex,UnityEngine_Vector3_o *center,
               System_Collections_Generic_List_int__o *indices,
               System_Collections_Generic_List_Vector3__o *positions,
               System_Collections_Generic_List_Vector3__o *normals,
               System_Collections_Generic_List_Vector2__o *uv,System_Collections_Generic_List_Color__o *colors
               ,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint32_t item;
  uint uVar6;
  System_Int32_array *pSVar7;
  UnityEngine_Vector3_array *pUVar8;
  UnityEngine_Color_array *pUVar9;
  undefined8 uVar10;
  MethodInfo *pMVar11;
  float fVar12;
  undefined8 uVar13;
  UnityEngine_UILineInfo_Fields local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  int32_t iStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_18434508a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    Il2CppMethodInitialized_18434508a = '\x01';
  }
  pMVar11 = MethodInfo_System_Collections_Generic_List_int_Add;
  if ((positions != (System_Collections_Generic_List_Vector3__o *)0x0) &&
     (indices != (System_Collections_Generic_List_int__o *)0x0)) {
    item = (positions->fields)._size;
    piVar1 = &(indices->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (indices->fields)._items;
    if (pSVar7 == (System_Int32_array *)0x0) goto label_181ea1f33;
    uVar6 = (indices->fields)._size;
    if (uVar6 < (uint)pSVar7->max_length) {
      (indices->fields)._size = uVar6 + 1;
      if ((uint)pSVar7->max_length <= uVar6) goto label_181ea1f39;
      pSVar7->m_Items[(int)uVar6] = item;
    }
    else {
      System_Collections_Generic_List_uint___AddWithResize
                ((System_Collections_Generic_List_uint__o *)indices,item,
                 (MethodInfo_91A500 *)pMVar11->klass->rgctx_data[0xe].method);
    }
    pMVar11 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    piVar1 = &(positions->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar8 = (positions->fields)._items;
    uVar2 = (center->fields).x;
    uVar4 = (center->fields).y;
    uVar3 = (vertex->fields).Position.fields.x;
    uVar5 = (vertex->fields).Position.fields.y;
    uVar13._0_4_ = (float)uVar3 - (float)uVar2;
    uVar13._4_4_ = (float)uVar5 - (float)uVar4;
    if (pUVar8 == (UnityEngine_Vector3_array *)0x0) goto label_181ea1f33;
    uVar6 = (positions->fields)._size;
    fVar12 = (vertex->fields).Position.fields.z - (center->fields).z;
    if (uVar6 < (uint)pUVar8->max_length) {
      (positions->fields)._size = uVar6 + 1;
      if ((uint)pUVar8->max_length <= uVar6) goto label_181ea1f39;
      pUVar8->m_Items[(int)uVar6].fields.x = (float)uVar13;
      pUVar8->m_Items[(int)uVar6].fields.y = uVar13._4_4_;
      pUVar8->m_Items[(int)uVar6].fields.z = fVar12;
    }
    else {
      local_68._0_8_ = uVar13;
      local_68.topY = fVar12;
      System_Collections_Generic_List_Vector3___AddWithResize
                (positions,(UnityEngine_Vector3_o *)&local_68,
                 (MethodInfo_99C850 *)pMVar11->klass->rgctx_data[0xe].method);
    }
    pMVar11 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    local_58._0_4_ = (vertex->fields).Position.fields.x;
    local_58._4_4_ = (vertex->fields).Position.fields.y;
    uVar13 = *(undefined8 *)&(vertex->fields).Position.fields.z;
    fStack_48 = (vertex->fields).Normal.fields.y;
    fStack_44 = (vertex->fields).Normal.fields.z;
    fStack_40 = (vertex->fields).UV.fields.x;
    fStack_3c = (vertex->fields).UV.fields.y;
    uStack_50 = (undefined4)uVar13;
    iStack_4c = (int32_t)((ulonglong)uVar13 >> 0x20);
    if (normals == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_181ea1f33;
    piVar1 = &(normals->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar8 = (normals->fields)._items;
    if (pUVar8 == (UnityEngine_Vector3_array *)0x0) goto label_181ea1f33;
    uVar6 = (normals->fields)._size;
    uVar10._4_4_ = (int32_t)fStack_48;
    uVar10._0_4_ = iStack_4c;
    if (uVar6 < (uint)pUVar8->max_length) {
      (normals->fields)._size = uVar6 + 1;
      if ((uint)pUVar8->max_length <= uVar6) goto label_181ea1f39;
      pUVar8->m_Items[(int)uVar6].fields.x = (float)iStack_4c;
      pUVar8->m_Items[(int)uVar6].fields.y = fStack_48;
      pUVar8->m_Items[(int)uVar6].fields.z = fStack_44;
    }
    else {
      local_68._0_8_ = uVar10;
      local_68.topY = fStack_44;
      System_Collections_Generic_List_Vector3___AddWithResize
                (normals,(UnityEngine_Vector3_o *)&local_68,
                 (MethodInfo_99C850 *)pMVar11->klass->rgctx_data[0xe].method);
    }
    if (uv != (System_Collections_Generic_List_Vector2__o *)0x0) {
      il2cpp_runtime_helper_18003dee0(uv,(vertex->fields).UV.fields,MethodInfo_System_Collections_Generic_List_Vector2_Add);
      pMVar11 = MethodInfo_System_Collections_Generic_List_Color_Add;
      if (colors != (System_Collections_Generic_List_Color__o *)0x0) {
        piVar1 = &(colors->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar9 = (colors->fields)._items;
        if (pUVar9 != (UnityEngine_Color_array *)0x0) {
          uVar6 = (colors->fields)._size;
          fVar12 = (vertex->fields).Shade;
          if ((uint)pUVar9->max_length <= uVar6) {
            local_68.height = (int32_t)fVar12;
            local_68.startCharIdx = (int32_t)fVar12;
            local_68.leading = 1.0;
            local_68.topY = fVar12;
            System_Collections_Generic_List_UILineInfo___AddWithResize
                      ((System_Collections_Generic_List_UILineInfo__o *)colors,
                       (UnityEngine_UILineInfo_o *)&local_68,
                       (MethodInfo_91A940 *)pMVar11->klass->rgctx_data[0xe].method);
            return;
          }
          (colors->fields)._size = uVar6 + 1;
          if (uVar6 < (uint)pUVar9->max_length) {
            pUVar9->m_Items[(int)uVar6].fields.r = fVar12;
            pUVar9->m_Items[(int)uVar6].fields.g = fVar12;
            pUVar9->m_Items[(int)uVar6].fields.b = fVar12;
            pUVar9->m_Items[(int)uVar6].fields.a = 1.0;
            return;
          }
label_181ea1f39:
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_181ea1f33:
  ThrowNullReferenceException();
}


// Map.MapFracture$$ReadVertex
// il2cpp: Map_MapFracture_Vertex_o Map_MapFracture__ReadVertex (UnityEngine_Vector3_array* positions, UnityEngine_Vector3_array* normals, UnityEngine_Vector2_array* uv, int32_t index, UnityEngine_Matrix4x4_o toRoot, UnityEngine_Matrix4x4_o normalToRoot, bool hasNormals, bool hasUV, const MethodInfo* method);
// 0x181ea6640
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea6836: unpcklps xmm7, xmm9
// asm:   0x181ea683a: movaps xmm9, xmmword ptr [rsp + 0x50]
// asm:   0x181ea6840: movd ebp, xmm8
// asm:   0x181ea6845: movaps xmm8, xmmword ptr [rsp + 0x60]
// asm:   0x181ea684b: jmp 0x181ea687f

Map_MapFracture_Vertex_o *
Map_MapFracture__ReadVertex
          (Map_MapFracture_Vertex_o *__return_storage_ptr__,UnityEngine_Vector3_array *positions,
          UnityEngine_Vector3_array *normals,UnityEngine_Vector2_array *uv,int32_t index,
          UnityEngine_Matrix4x4_o *toRoot,UnityEngine_Matrix4x4_o *normalToRoot,bool hasNormals,bool hasUV,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_StaticFields *pUVar19;
  UnityEngine_Vector2_StaticFields *pUVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float local_98;
  float local_94;
  float local_90;
  
  if (positions == (UnityEngine_Vector3_array *)0x0) {
label_181ea692c:
    ThrowNullReferenceException();
  }
  lVar21 = (longlong)index;
  if ((uint)positions->max_length <= (uint)index) {
label_181ea6932:
    ThrowIndexOutOfRangeException();
  }
  fVar1 = positions->m_Items[lVar21].fields.x;
  fVar2 = positions->m_Items[lVar21].fields.y;
  fVar3 = positions->m_Items[lVar21].fields.z;
  fVar4 = (toRoot->fields).m01;
  fVar5 = (toRoot->fields).m00;
  fVar6 = (toRoot->fields).m02;
  fVar7 = (toRoot->fields).m11;
  fVar8 = (toRoot->fields).m21;
  fVar9 = (toRoot->fields).m10;
  fVar10 = (toRoot->fields).m20;
  fVar11 = (toRoot->fields).m22;
  fVar12 = (toRoot->fields).m12;
  fVar13 = (toRoot->fields).m03;
  fVar14 = (toRoot->fields).m13;
  fVar15 = (toRoot->fields).m23;
  if (hasNormals) {
    if (normals == (UnityEngine_Vector3_array *)0x0) goto label_181ea692c;
    if ((uint)normals->max_length <= (uint)index) goto label_181ea6932;
    fVar18 = normals->m_Items[lVar21].fields.x;
    fVar22 = normals->m_Items[lVar21].fields.z;
    fVar16 = normals->m_Items[lVar21].fields.y;
    fVar17 = fVar16 * (normalToRoot->fields).m01 + fVar18 * (normalToRoot->fields).m00 +
             fVar22 * (normalToRoot->fields).m02;
    fVar23 = fVar16 * (normalToRoot->fields).m21 + fVar18 * (normalToRoot->fields).m20 +
             fVar22 * (normalToRoot->fields).m22;
    fVar18 = fVar16 * (normalToRoot->fields).m11 + fVar18 * (normalToRoot->fields).m10 +
             fVar22 * (normalToRoot->fields).m12;
    local_98 = fVar17;
    local_94 = fVar18;
    local_90 = fVar23;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar22 = (float)il2cpp_runtime_helper_180546a40(&local_98,0);
    if (fVar22 <= 1e-05) {
      pUVar19 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar17 = (pUVar19->zeroVector).fields.x;
      fVar18 = (pUVar19->zeroVector).fields.y;
      fVar23 = (pUVar19->zeroVector).fields.z;
    }
    else {
      fVar17 = fVar17 / fVar22;
      fVar18 = fVar18 / fVar22;
      fVar23 = fVar23 / fVar22;
    }
  }
  else {
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar19 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar17 = (pUVar19->upVector).fields.x;
    fVar18 = (pUVar19->upVector).fields.y;
    fVar23 = (pUVar19->upVector).fields.z;
  }
  if (hasUV) {
    if (uv == (UnityEngine_Vector2_array *)0x0) goto label_181ea692c;
    if ((uint)uv->max_length <= (uint)index) goto label_181ea6932;
    pUVar20 = (UnityEngine_Vector2_StaticFields *)(uv->m_Items + lVar21);
  }
  else {
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    pUVar20 = TypeInfo_UnityEngine_Vector2->static_fields;
  }
  fVar22 = (pUVar20->zeroVector).fields.y;
  fVar16 = (pUVar20->zeroVector).fields.x;
  (__return_storage_ptr__->fields).Position.fields.x = fVar2 * fVar4 + fVar1 * fVar5 + fVar3 * fVar6 + fVar13;
  (__return_storage_ptr__->fields).Position.fields.y = fVar2 * fVar7 + fVar1 * fVar9 + fVar3 * fVar12 + fVar14
  ;
  (__return_storage_ptr__->fields).Normal.fields.x = fVar17;
  (__return_storage_ptr__->fields).Normal.fields.y = fVar18;
  (__return_storage_ptr__->fields).UV.fields.x = fVar16;
  (__return_storage_ptr__->fields).Position.fields.z =
       fVar2 * fVar8 + fVar1 * fVar10 + fVar3 * fVar11 + fVar15;
  (__return_storage_ptr__->fields).Normal.fields.z = fVar23;
  (__return_storage_ptr__->fields).UV.fields.y = fVar22;
  (__return_storage_ptr__->fields).Shade = 1.0;
  return __return_storage_ptr__;
}


// Map.MapFracture$$CreateSeeds
// il2cpp: System_Collections_Generic_List_Vector3__o* Map_MapFracture__CreateSeeds (UnityEngine_Bounds_o bounds, int32_t count, System_Random_o* random, const MethodInfo* method);
// 0x181ea4b10
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea4d0d: movss xmm9, dword ptr [rip + 0x14b3eee]
// asm:   0x181ea4d16: movss xmm13, dword ptr [rip + 0x14b405d]
// asm:   0x181ea4d1f: nop 
// asm:   0x181ea4d2b: nop dword ptr [rax + rax]
// asm:   0x181ea4d6b: nop dword ptr [rax + rax]
// asm:   0x181ea4e78: mov ebx, dword ptr [rsp + 0x110]

System_Collections_Generic_List_Vector3__o *
Map_MapFracture__CreateSeeds
          (UnityEngine_Bounds_o *bounds,int32_t count,System_Random_o *random,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  System_Collections_Generic_List_Vector3__o *__this;
  int iVar8;
  int iVar9;
  int iVar10;
  UnityEngine_Object_o *pUVar11;
  UnityEngine_Object_o *pUVar12;
  UnityEngine_Object_o *pUVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_e8;
  float local_e4;
  float local_e0;
  
  if (Il2CppMethodInitialized_18434508b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f06b0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    Il2CppMethodInitialized_18434508b = '\x01';
  }
  fVar17 = (bounds->fields).m_Extents.fields.x;
  fVar19 = (bounds->fields).m_Extents.fields.y;
  fVar17 = fVar17 + fVar17;
  fVar18 = (bounds->fields).m_Extents.fields.z;
  fVar19 = fVar19 + fVar19;
  fVar18 = fVar18 + fVar18;
  if (Il2CppMethodInitialized_18433dbeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbeb = '\x01';
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar16 = (pUVar4->oneVector).fields.x * 0.0001;
  fVar14 = (pUVar4->oneVector).fields.y * 0.0001;
  fVar15 = (pUVar4->oneVector).fields.z * 0.0001;
  if (fVar17 <= fVar16) {
    fVar17 = fVar16;
  }
  if (fVar19 <= fVar14) {
    fVar19 = fVar14;
  }
  if (fVar18 <= fVar15) {
    fVar18 = fVar15;
  }
  if (count < 2) {
    count = 1;
  }
  fVar14 = (float)il2cpp_runtime_helper_1804f6b50((fVar19 * fVar17 * fVar18) / (float)count);
  iVar5 = il2cpp_runtime_helper_181290af0(fVar17 / fVar14,0);
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  iVar6 = il2cpp_runtime_helper_181290af0(fVar19 / fVar14,0);
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  iVar7 = il2cpp_runtime_helper_181290af0(fVar18 / fVar14,0);
  if (iVar7 < 1) {
    iVar7 = 1;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_List_T__o *)__this,iVar7 * iVar6 * iVar5,
             (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f06b0);
  iVar10 = 0;
  if (iVar5 != 0) {
    do {
      iVar9 = 0;
      if (iVar6 != 0) {
        do {
          if (iVar7 != 0) {
            fVar14 = (bounds->fields).m_Center.fields.x;
            fVar15 = (bounds->fields).m_Center.fields.y;
            fVar16 = (bounds->fields).m_Center.fields.z;
            fVar1 = (bounds->fields).m_Extents.fields.x;
            fVar2 = (bounds->fields).m_Extents.fields.y;
            fVar3 = (bounds->fields).m_Extents.fields.z;
            iVar8 = 0;
            if (random == (System_Random_o *)0x0) {
label_181ea4eec:
              ThrowNullReferenceException();
            }
            do {
              pUVar11 = (*(random->klass->vtable)._8_NextDouble.methodPtr)
                                  (random,(random->klass->vtable)._8_NextDouble.method);
              pUVar12 = (*(random->klass->vtable)._8_NextDouble.methodPtr)
                                  (random,(random->klass->vtable)._8_NextDouble.method);
              pUVar13 = (*(random->klass->vtable)._8_NextDouble.methodPtr)
                                  (random,(random->klass->vtable)._8_NextDouble.method);
              if (__this == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_181ea4eec;
              local_e8 = ((float)iVar10 + 0.5 + ((float)(double)pUVar11 - 0.5) * 0.8) *
                         (fVar17 / (float)iVar5) + (fVar14 - fVar1);
              local_e4 = ((float)iVar9 + 0.5 + ((float)(double)pUVar12 - 0.5) * 0.8) * (fVar19 / (float)iVar6)
                         + (fVar15 - fVar2);
              local_e0 = (((float)(double)pUVar13 - 0.5) * 0.8 + (float)iVar8 + 0.5) * (fVar18 / (float)iVar7)
                         + (fVar16 - fVar3);
              il2cpp_runtime_helper_180012810(__this,&local_e8,MethodInfo_System_Collections_Generic_List_Vector3_Add);
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar7);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar6);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar5);
  }
  return __this;
}


// Map.MapFracture$$Clip
// il2cpp: bool Map_MapFracture__Clip (Map_MapFracture_o* __this, System_Collections_Generic_List_MapFracture_Triangle__o* source, System_Collections_Generic_List_MapFracture_Triangle__o* target, UnityEngine_Vector3_o normal, float distance, const MethodInfo* method);
// 0x181ea27a0
// eh: try 0x181ea2980..0x181ea2a3c -> pad 0x18333d300 catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea2a4d: mov rdx, qword ptr [rip + 0x220234c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x181ea2a54: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181ea2a59: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea2a5e: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181ea2a63: test rcx, rcx
// asm:   0x181ea2a66: jne 0x181ea2aff
// asm:   0x181ea2a6c: mov rsi, qword ptr [rsp + 0x1d8]
// asm:   0x181ea2a74: mov rdi, qword ptr [rsp + 0x1d0]
// asm:   0x181ea2a7c: mov r14, qword ptr [rsp + 0x1c0]
// asm:   0x181ea2aff: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333d300: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d305: push rbp
// asm:   0x18333d306: sub rsp, 0x30
// asm:   0x18333d30a: mov rbp, rdx
// asm:   0x18333d30d: mov rax, qword ptr [rbp + 0x150]
// asm:   0x18333d314: mov rcx, qword ptr [rax]
// asm:   0x18333d317: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18333d31b: movabs rax, 0
// asm:   0x18333d325: add rsp, 0x30
// asm:   0x18333d329: pop rbp
// asm:   0x18333d32a: ret 

bool Map_MapFracture__Clip
               (Map_MapFracture_o *__this,System_Collections_Generic_List_MapFracture_Triangle__o *source,
               System_Collections_Generic_List_MapFracture_Triangle__o *target,UnityEngine_Vector3_o *normal,
               float distance,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_MapFracture_Segment__o *pSVar2;
  ulonglong uVar3;
  bool bVar4;
  UnityEngine_Vector3_Fields local_188;
  undefined8 local_178;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_170;
  undefined1 local_168 [8];
  UnityEngine_Vector2_Fields UStack_160;
  UnityEngine_Vector2_Fields local_158;
  UnityEngine_Vector2_Fields UStack_150;
  UnityEngine_Vector2_Fields local_148;
  UnityEngine_Vector2_Fields UStack_140;
  UnityEngine_Vector2_Fields local_138;
  UnityEngine_Vector2_Fields UStack_130;
  UnityEngine_Vector2_Fields local_128;
  UnityEngine_Vector2_Fields UStack_120;
  UnityEngine_Vector2_Fields local_118;
  UnityEngine_Vector2_Fields UStack_110;
  UnityEngine_Vector2_Fields local_108;
  UnityEngine_Vector2_Fields UStack_100;
  UnityEngine_Vector2_Fields local_f8;
  UnityEngine_Vector2_Fields UStack_f0;
  undefined1 local_e8 [16];
  UnityEngine_Vector2_Fields local_d8;
  UnityEngine_Vector2_Fields UStack_d0;
  UnityEngine_Vector2_Fields local_c8;
  UnityEngine_Vector2_Fields UStack_c0;
  UnityEngine_Vector2_Fields local_b8;
  UnityEngine_Vector2_Fields UStack_b0;
  UnityEngine_Vector2_Fields local_a8;
  UnityEngine_Vector2_Fields UStack_a0;
  UnityEngine_Vector2_Fields local_98;
  UnityEngine_Vector2_Fields UStack_90;
  UnityEngine_Vector2_Fields local_88;
  UnityEngine_Vector2_Fields UStack_80;
  UnityEngine_Vector2_Fields local_78;
  UnityEngine_Vector2_Fields UStack_70;
  
  if (Il2CppMethodInitialized_18434508c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Segment_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Segment_get_Count);
    Il2CppMethodInitialized_18434508c = '\x01';
  }
  local_168._0_4_ = 0.0;
  local_168._4_4_ = 0.0;
  UStack_160.x = 0.0;
  UStack_160.y = 0.0;
  local_158.x = 0.0;
  local_158.y = 0.0;
  UStack_150.x = 0.0;
  UStack_150.y = 0.0;
  local_148.x = 0.0;
  local_148.y = 0.0;
  UStack_140.x = 0.0;
  UStack_140.y = 0.0;
  local_138.x = 0.0;
  local_138.y = 0.0;
  UStack_130.x = 0.0;
  UStack_130.y = 0.0;
  local_128.x = 0.0;
  local_128.y = 0.0;
  UStack_120.x = 0.0;
  UStack_120.y = 0.0;
  local_118.x = 0.0;
  local_118.y = 0.0;
  UStack_110.x = 0.0;
  UStack_110.y = 0.0;
  local_108.x = 0.0;
  local_108.y = 0.0;
  UStack_100.x = 0.0;
  UStack_100.y = 0.0;
  local_f8.x = 0.0;
  local_f8.y = 0.0;
  UStack_f0.x = 0.0;
  UStack_f0.y = 0.0;
  local_188.x = (normal->fields).x;
  local_188.y = (normal->fields).y;
  local_188.z = (normal->fields).z;
  bVar4 = Map_MapFracture__Crosses(source,(UnityEngine_Vector3_o *)&local_188,distance,(MethodInfo *)0x0);
  if (!bVar4) {
    return false;
  }
  if (target != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    piVar1 = &(target->fields)._version;
    *piVar1 = *piVar1 + 1;
    (target->fields)._size = 0;
    pSVar2 = (__this->fields)._segments;
    if (pSVar2 != (System_Collections_Generic_List_MapFracture_Segment__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar2->fields)._size = 0;
      if (source != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
        System_Collections_Generic_List_MapFracture_Triangle___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_e8,source,
                   (MethodInfo_969260 *)
                   MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
        local_168 = (undefined1  [8])local_e8._0_8_;
        UStack_160.x = (float)local_e8._8_4_;
        UStack_160.y = (float)local_e8._12_4_;
        local_158 = local_d8;
        UStack_150 = UStack_d0;
        local_148 = local_c8;
        UStack_140 = UStack_c0;
        local_138 = local_b8;
        UStack_130 = UStack_b0;
        local_128 = local_a8;
        UStack_120 = UStack_a0;
        local_118 = local_98;
        UStack_110 = UStack_90;
        local_108 = local_88;
        UStack_100 = UStack_80;
        local_f8 = local_78;
        UStack_f0 = UStack_70;
        local_178 = 0;
        local_170 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_168;
        while (bVar4 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_T__o *)local_168,
                                  (MethodInfo_1558F50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext
                                 ), bVar4) {
          local_188.x = (normal->fields).x;
          local_188.y = (normal->fields).y;
          local_188.z = (normal->fields).z;
          local_e8._0_4_ = local_158.x;
          local_e8._4_4_ = local_158.y;
          local_e8._8_4_ = UStack_150.x;
          local_e8._12_4_ = UStack_150.y;
          local_d8 = local_148;
          UStack_d0 = UStack_140;
          local_c8 = local_138;
          UStack_c0 = UStack_130;
          local_b8 = local_128;
          UStack_b0 = UStack_120;
          local_a8 = local_118;
          UStack_a0 = UStack_110;
          local_98 = local_108;
          UStack_90 = UStack_100;
          local_88 = local_f8;
          UStack_80 = UStack_f0;
          Map_MapFracture__ClipTriangle
                    (__this,(Map_MapFracture_Triangle_o *)local_e8,(UnityEngine_Vector3_o *)&local_188,
                     distance,target,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_168,
                   MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
        pSVar2 = (__this->fields)._segments;
        if (pSVar2 != (System_Collections_Generic_List_MapFracture_Segment__o *)0x0) {
          if (0 < (pSVar2->fields)._size) {
            uVar3._0_4_ = (normal->fields).x;
            uVar3._4_4_ = (normal->fields).y;
            local_188._0_8_ = uVar3 ^ 0x8000000080000000;
            local_188.z = -(normal->fields).z;
            Map_MapFracture__AddCaps(pSVar2,(UnityEngine_Vector3_o *)&local_188,target,(MethodInfo *)0x0);
          }
          return true;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$Crosses
// il2cpp: bool Map_MapFracture__Crosses (System_Collections_Generic_List_MapFracture_Triangle__o* triangles, UnityEngine_Vector3_o normal, float distance, const MethodInfo* method);
// 0x181ea4f30
// eh: try 0x181ea5068..0x181ea512f -> pad 0x1833245d0 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea516c: mov rdx, qword ptr [rip + 0x21ffc2d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x181ea5173: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181ea5178: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea517d: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181ea5182: test rcx, rcx
// asm:   0x181ea5185: jne 0x181ea5191
// asm:   0x181ea5191: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833245d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833245d5: push rbp
// asm:   0x1833245d6: sub rsp, 0x20
// asm:   0x1833245da: mov rbp, rdx
// asm:   0x1833245dd: mov rax, qword ptr [rbp + 0xb0]
// asm:   0x1833245e4: mov rcx, qword ptr [rax]
// asm:   0x1833245e7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x1833245eb: movabs rax, 0
// asm:   0x1833245f5: add rsp, 0x20
// asm:   0x1833245f9: pop rbp
// asm:   0x1833245fa: ret 

bool Map_MapFracture__Crosses
               (System_Collections_Generic_List_MapFracture_Triangle__o *triangles,
               UnityEngine_Vector3_o *normal,float distance,MethodInfo *method)

{
  bool bVar1;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_18434508d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    Il2CppMethodInitialized_18434508d = '\x01';
  }
  local_138._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_138._8_8_ = 0;
  local_128 = (Il2CppObject *)0x0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  if (triangles != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    System_Collections_Generic_List_MapFracture_Triangle___GetEnumerator
              (&local_a8,triangles,
               (MethodInfo_969260 *)
               MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    local_138._0_8_ = local_a8.fields._list;
    local_138._8_4_ = local_a8.fields._index;
    local_138._12_4_ = local_a8.fields._version;
    local_128 = local_a8.fields._current;
    uStack_120 = uStack_90;
    local_118 = local_88;
    uStack_110 = uStack_80;
    local_108 = local_78;
    uStack_100 = uStack_70;
    local_f8 = local_68;
    uStack_f0 = uStack_60;
    local_e8 = local_58;
    uStack_e0 = uStack_50;
    local_d8 = local_48;
    uStack_d0 = uStack_40;
    local_c8 = local_38;
    uStack_c0 = uStack_30;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_138,
                         (MethodInfo_1558F50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_138,
                   MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
        return false;
      }
    } while (((-0.0001 <=
               ((float)uStack_120 * (normal->fields).z +
               local_128._4_4_ * (normal->fields).y + (float)local_128 * (normal->fields).x) - distance) &&
             (-0.0001 <=
              (uStack_100._4_4_ * (normal->fields).z +
              (float)uStack_100 * (normal->fields).y + local_108._4_4_ * (normal->fields).x) - distance)) &&
            (-0.0001 <=
             ((float)local_d8 * (normal->fields).z +
             uStack_e0._4_4_ * (normal->fields).y + (float)uStack_e0 * (normal->fields).x) - distance));
    System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_138,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    return true;
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$ClipTriangle
// il2cpp: void Map_MapFracture__ClipTriangle (Map_MapFracture_o* __this, Map_MapFracture_Triangle_o triangle, UnityEngine_Vector3_o normal, float distance, System_Collections_Generic_List_MapFracture_Triangle__o* kept, const MethodInfo* method);
// 0x181ea1f40
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea21e6: movdqa xmm8, xmmword ptr [rip + 0x14b6a61]
// asm:   0x181ea21ef: mov r14d, r12d
// asm:   0x181ea21f2: mov edi, r12d
// asm:   0x181ea21f5: mov esi, r12d
// asm:   0x181ea21f8: nop dword ptr [rax + rax]
// asm:   0x181ea2707: movaps xmm0, xmmword ptr [rsp + 0x60]
// asm:   0x181ea270c: imul rcx, r8, 0x4c
// asm:   0x181ea2710: movups xmmword ptr [rcx + rdx + 0x20], xmm3
// asm:   0x181ea2715: movups xmmword ptr [rcx + rdx + 0x30], xmm4
// asm:   0x181ea271a: movups xmmword ptr [rcx + rdx + 0x40], xmm2
// asm:   0x181ea271f: movups xmmword ptr [rcx + rdx + 0x50], xmm0
// asm:   0x181ea2724: movups xmmword ptr [rcx + rdx + 0x5c], xmm1
// asm:   0x181ea2729: jmp 0x181ea26b0

void Map_MapFracture__ClipTriangle
               (Map_MapFracture_o *__this,Map_MapFracture_Triangle_o *triangle,UnityEngine_Vector3_o *normal,
               float distance,System_Collections_Generic_List_MapFracture_Triangle__o *kept,MethodInfo *method
               )

{
  UnityEngine_Vector2_o *pUVar1;
  int32_t *piVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  Map_MapFracture_Vertex_array *pMVar8;
  System_Single_array *pSVar9;
  Map_MapFracture_Triangle_array *pMVar10;
  System_Collections_Generic_List_MapFracture_Segment__o *__this_00;
  Map_MapFracture_Segment_array *pMVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  UnityEngine_Vector2_Fields UVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  UnityEngine_Vector2_Fields UVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  bool bVar67;
  bool bVar68;
  Map_MapFracture_Vertex_Fields *pMVar69;
  Map_MapFracture_Triangle_Fields *pMVar70;
  Map_MapFracture_Segment_Fields *pMVar71;
  float fVar72;
  float fVar73;
  MethodInfo *pMVar74;
  Map_MapFracture_Vertex_o *pMVar75;
  uint uVar76;
  ulonglong uVar77;
  ulonglong uVar78;
  int iVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  ulonglong uVar83;
  Map_MapFracture_Triangle_o local_1c8;
  Map_MapFracture_Segment_o local_158;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  Map_MapFracture_Vertex_o local_e8;
  Map_MapFracture_Vertex_o local_b8;
  Map_MapFracture_Vertex_o local_88 [2];
  
  if (Il2CppMethodInitialized_18434508e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Segment_Add);
    Il2CppMethodInitialized_18434508e = '\x01';
  }
  pMVar75 = &(triangle->fields).B;
  uVar13 = (pMVar75->fields).Normal.fields.x;
  uVar14 = (pMVar75->fields).Normal.fields.y;
  uVar15 = *(undefined8 *)&(triangle->fields).B.fields.Normal.fields.z;
  pMVar8 = (__this->fields)._corners;
  local_1c8.fields.B.fields.Normal.fields.z = (float)uVar15;
  local_1c8.fields.B.fields.UV.fields.x = (float)((ulonglong)uVar15 >> 0x20);
  uVar15 = *(undefined8 *)&(triangle->fields).B.fields.UV.fields.y;
  pMVar75 = &(triangle->fields).C;
  uVar16 = (pMVar75->fields).Position.fields.x;
  uVar17 = (pMVar75->fields).Position.fields.y;
  local_1c8.fields.C.fields._8_8_ = *(undefined8 *)&(triangle->fields).C.fields.Position.fields.z;
  pMVar75 = &(triangle->fields).C;
  uVar18 = (pMVar75->fields).Normal.fields.y;
  uVar19 = (pMVar75->fields).Normal.fields.z;
  local_1c8.fields.B.fields.UV.fields.y = (float)uVar15;
  local_1c8.fields.B.fields.Shade = (float)((ulonglong)uVar15 >> 0x20);
  UVar20 = (triangle->fields).C.fields.UV.fields;
  uVar15 = *(undefined8 *)&(triangle->fields).C.fields.Shade;
  pMVar75 = &(triangle->fields).A;
  uVar30._0_4_ = (pMVar75->fields).Position.fields.x;
  uVar30._4_4_ = (pMVar75->fields).Position.fields.y;
  uVar21 = *(undefined8 *)&(triangle->fields).A.fields.Position.fields.z;
  local_1c8.fields.C.fields.UV.fields.x = UVar20.x;
  local_1c8.fields.C.fields.UV.fields.y = UVar20.y;
  local_1c8.fields.C.fields.Shade = (float)uVar15;
  local_1c8.fields.Submesh = (int32_t)((ulonglong)uVar15 >> 0x20);
  pMVar75 = &(triangle->fields).A;
  uVar15._0_4_ = (pMVar75->fields).Normal.fields.y;
  uVar15._4_4_ = (pMVar75->fields).Normal.fields.z;
  UVar20 = (triangle->fields).A.fields.UV.fields;
  fVar4 = (triangle->fields).A.fields.Shade;
  pMVar75 = &(triangle->fields).B;
  fVar5 = (pMVar75->fields).Position.fields.x;
  fVar6 = (triangle->fields).B.fields.Position.fields.y;
  fVar72 = (pMVar75->fields).Position.fields.x;
  fVar73 = (pMVar75->fields).Position.fields.y;
  fVar12 = (triangle->fields).B.fields.Position.fields.z;
  local_1c8.fields.B.fields.Normal.fields.x = (float)uVar13;
  local_1c8.fields.B.fields.Normal.fields.y = (float)uVar14;
  local_1c8.fields.C.fields.Position.fields.x = (float)uVar16;
  local_1c8.fields.C.fields.Position.fields.y = (float)uVar17;
  local_1c8.fields.C.fields.Normal.fields.y = (float)uVar18;
  local_1c8.fields.C.fields.Normal.fields.z = (float)uVar19;
  if (pMVar8 != (Map_MapFracture_Vertex_array *)0x0) {
    local_1c8.fields.C.fields.Position.fields.x = (float)uVar16;
    if ((int)pMVar8->max_length == 0) {
label_181ea2796:
      ThrowIndexOutOfRangeException();
    }
    pMVar75 = &(triangle->fields).B;
    uVar22 = (pMVar75->fields).Normal.fields.x;
    uVar23 = (pMVar75->fields).Normal.fields.y;
    uVar24 = *(undefined8 *)&(triangle->fields).B.fields.Normal.fields.z;
    pMVar8->m_Items[0].fields.Position.fields.x = (float)uVar30;
    pMVar8->m_Items[0].fields.Position.fields.y = uVar30._4_4_;
    *(undefined8 *)&pMVar8->m_Items[0].fields.Position.fields.z = uVar21;
    pMVar8->m_Items[0].fields.Normal.fields.y = (float)uVar15;
    pMVar8->m_Items[0].fields.Normal.fields.z = uVar15._4_4_;
    pMVar8->m_Items[0].fields.UV.fields = UVar20;
    pMVar8->m_Items[0].fields.Shade = fVar4;
    pMVar8 = (__this->fields)._corners;
    local_1c8.fields.B.fields.Normal.fields.z = (float)uVar24;
    local_1c8.fields.B.fields.UV.fields.x = (float)((ulonglong)uVar24 >> 0x20);
    UVar25 = (triangle->fields).C.fields.UV.fields;
    uVar24 = *(undefined8 *)&(triangle->fields).C.fields.Shade;
    local_1c8.fields.B.fields.UV.fields.y = (triangle->fields).B.fields.UV.fields.y;
    local_1c8.fields.B.fields.Shade = (triangle->fields).B.fields.Shade;
    local_1c8.fields.C.fields.Position.fields.x = (triangle->fields).C.fields.Position.fields.x;
    local_1c8.fields.C.fields.Position.fields.y = (triangle->fields).C.fields.Position.fields.y;
    local_1c8.fields.C.fields.UV.fields.x = UVar25.x;
    local_1c8.fields.C.fields.UV.fields.y = UVar25.y;
    local_1c8.fields.C.fields.Shade = (float)uVar24;
    local_1c8.fields.Submesh = (int32_t)((ulonglong)uVar24 >> 0x20);
    local_1c8.fields.A.fields.Position.fields._0_8_ = uVar30;
    local_1c8.fields.A.fields._8_8_ = uVar21;
    local_1c8.fields.A.fields.Normal.fields._4_8_ = uVar15;
    local_1c8.fields.A.fields.UV.fields = UVar20;
    local_1c8.fields.A.fields.Shade = fVar4;
    local_1c8.fields.B.fields.Position.fields.x = fVar5;
    local_1c8.fields.B.fields.Position.fields.y = fVar6;
    local_1c8.fields.B.fields.Position.fields.z = fVar12;
    local_1c8.fields.B.fields.Normal.fields.x = (float)uVar22;
    local_1c8.fields.B.fields.Normal.fields.y = (float)uVar23;
    if (pMVar8 != (Map_MapFracture_Vertex_array *)0x0) {
      if ((uint)pMVar8->max_length < 2) goto label_181ea2796;
      uVar15 = CONCAT44(uVar22,fVar12);
      UVar20.y = local_1c8.fields.B.fields.UV.fields.y;
      UVar20.x = local_1c8.fields.B.fields.UV.fields.x;
      pMVar8->m_Items[1].fields.Position.fields.x = fVar72;
      pMVar8->m_Items[1].fields.Position.fields.y = fVar73;
      *(undefined8 *)&pMVar8->m_Items[1].fields.Position.fields.z = uVar15;
      uVar15 = *(undefined8 *)&(triangle->fields).A.fields.Shade;
      pMVar75 = &(triangle->fields).B;
      uVar26 = (pMVar75->fields).Position.fields.y;
      uVar27 = (pMVar75->fields).Position.fields.z;
      pMVar8->m_Items[1].fields.Normal.fields.y = (float)uVar23;
      pMVar8->m_Items[1].fields.Normal.fields.z = local_1c8.fields.B.fields.Normal.fields.z;
      pMVar8->m_Items[1].fields.UV.fields = UVar20;
      pMVar75 = &(triangle->fields).B;
      uVar28 = (pMVar75->fields).Normal.fields.x;
      uVar29 = (pMVar75->fields).Normal.fields.y;
      uVar30 = *(undefined8 *)&(triangle->fields).B.fields.Normal.fields.z;
      pMVar8->m_Items[1].fields.Shade = local_1c8.fields.B.fields.Shade;
      pUVar1 = &(triangle->fields).C.fields.UV;
      local_1c8.fields.C.fields.UV.fields.x = (pUVar1->fields).x;
      local_1c8.fields.C.fields.UV.fields.y = (triangle->fields).C.fields.UV.fields.y;
      UVar20 = pUVar1->fields;
      local_1c8.fields.C.fields.Shade = (triangle->fields).C.fields.Shade;
      local_1c8.fields.Submesh = (triangle->fields).Submesh;
      pMVar8 = (__this->fields)._corners;
      local_1c8.fields.B.fields.Normal.fields.z = (float)uVar30;
      local_1c8.fields.B.fields.UV.fields.x = (float)((ulonglong)uVar30 >> 0x20);
      local_1c8.fields.A.fields.Shade = (float)uVar15;
      local_1c8.fields.B.fields.Position.fields.x = (float)((ulonglong)uVar15 >> 0x20);
      local_1c8.fields.C.fields._8_8_ = *(undefined8 *)&(triangle->fields).C.fields.Position.fields.z;
      pMVar75 = &(triangle->fields).C;
      uVar31 = (pMVar75->fields).Normal.fields.y;
      uVar32 = (pMVar75->fields).Normal.fields.z;
      uVar15 = *(undefined8 *)&(triangle->fields).B.fields.UV.fields.y;
      pMVar75 = &(triangle->fields).C;
      uVar33 = (pMVar75->fields).Position.fields.x;
      uVar34 = (pMVar75->fields).Position.fields.y;
      local_1c8.fields.B.fields.UV.fields.y = (float)uVar15;
      local_1c8.fields.B.fields.Shade = (float)((ulonglong)uVar15 >> 0x20);
      local_1c8.fields.B.fields.Position.fields.y = (float)uVar26;
      local_1c8.fields.B.fields.Position.fields.z = (float)uVar27;
      local_1c8.fields.B.fields.Normal.fields.x = (float)uVar28;
      local_1c8.fields.B.fields.Normal.fields.y = (float)uVar29;
      local_1c8.fields.C.fields.Position.fields.x = (float)uVar33;
      local_1c8.fields.C.fields.Position.fields.y = (float)uVar34;
      local_1c8.fields.C.fields.Normal.fields.y = (float)uVar31;
      local_1c8.fields.C.fields.Normal.fields.z = (float)uVar32;
      if (pMVar8 != (Map_MapFracture_Vertex_array *)0x0) {
        if ((uint)pMVar8->max_length < 3) goto label_181ea2796;
        fVar4 = (normal->fields).x;
        fVar5 = (normal->fields).y;
        fVar6 = (normal->fields).z;
        pMVar8->m_Items[2].fields.Position.fields.x = (float)uVar33;
        pMVar8->m_Items[2].fields.Position.fields.y = (float)uVar34;
        *(undefined8 *)&pMVar8->m_Items[2].fields.Position.fields.z = local_1c8.fields.C.fields._8_8_;
        pMVar8->m_Items[2].fields.Normal.fields.y = (float)uVar31;
        pMVar8->m_Items[2].fields.Normal.fields.z = (float)uVar32;
        pMVar8->m_Items[2].fields.UV.fields = UVar20;
        pMVar8->m_Items[2].fields.Shade = local_1c8.fields.C.fields.Shade;
        pSVar9 = (__this->fields)._distances;
        pMVar8 = (__this->fields)._corners;
        if (pMVar8 != (Map_MapFracture_Vertex_array *)0x0) {
          uVar78 = 0;
          bVar68 = false;
          bVar67 = false;
          uVar81 = 1;
          uVar77 = uVar78;
          do {
            uVar76 = (uint)uVar77;
            if ((uint)pMVar8->max_length <= uVar76) goto label_181ea2796;
            if (pSVar9 == (System_Single_array *)0x0) goto label_181ea2790;
            if ((uint)pSVar9->max_length <= uVar76) goto label_181ea2796;
            pSVar9->m_Items[(int)uVar76] =
                 (fVar5 * pMVar8->m_Items[(int)uVar76].fields.Position.fields.y +
                  fVar4 * pMVar8->m_Items[(int)uVar76].fields.Position.fields.x +
                 fVar6 * pMVar8->m_Items[(int)uVar76].fields.Position.fields.z) - distance;
            if ((uint)pSVar9->max_length <= uVar76) goto label_181ea2796;
            if (0.0001 < pSVar9->m_Items[(int)uVar76]) {
              bVar68 = true;
            }
            if (pSVar9->m_Items[(int)uVar76] <= -0.0001 && pSVar9->m_Items[(int)uVar76] != -0.0001) {
              bVar67 = true;
            }
            uVar77 = (ulonglong)(uVar76 + 1);
          } while ((int)(uVar76 + 1) < 3);
          if (bVar67) {
            uVar77 = uVar78;
            uVar83 = uVar78;
            if (bVar68) {
              do {
                pMVar8 = (__this->fields)._corners;
                if (pMVar8 == (Map_MapFracture_Vertex_array *)0x0) goto label_181ea2790;
                uVar76 = (uint)uVar78;
                if ((uint)pMVar8->max_length <= uVar76) goto label_181ea2796;
                pSVar9 = (__this->fields)._distances;
                if (pSVar9 == (System_Single_array *)0x0) goto label_181ea2790;
                if ((uint)pSVar9->max_length <= uVar76) goto label_181ea2796;
                iVar79 = uVar76 + 1;
                uVar80 = iVar79 + (iVar79 / 3 + (iVar79 >> 0x1f) +
                                  (int)(((longlong)iVar79 / 3 + ((longlong)iVar79 >> 0x3f) & 0xffffffffU) >>
                                       0x1f)) * -3;
                if ((uint)pSVar9->max_length <= uVar80) goto label_181ea2796;
                pMVar75 = pMVar8->m_Items + uVar78;
                uVar21._0_4_ = (pMVar75->fields).Position.fields.x;
                uVar21._4_4_ = (pMVar75->fields).Position.fields.y;
                uVar15 = *(undefined8 *)&(pMVar75->fields).Position.fields.z;
                fVar6 = pMVar8->m_Items[uVar78].fields.Shade;
                pMVar69 = &pMVar8->m_Items[uVar78].fields;
                uVar24._0_4_ = (pMVar69->Normal).fields.y;
                uVar24._4_4_ = (pMVar69->Normal).fields.z;
                UVar20 = (pMVar69->UV).fields;
                fVar4 = pSVar9->m_Items[uVar78];
                fVar5 = pSVar9->m_Items[(int)uVar80];
                if (-0.0001 <= fVar4) {
                  pMVar8 = (__this->fields)._polygon;
                  if (pMVar8 == (Map_MapFracture_Vertex_array *)0x0) goto label_181ea2790;
                  uVar82 = (uint)uVar83;
                  if ((uint)pMVar8->max_length <= uVar82) goto label_181ea2796;
                  uVar83 = (ulonglong)(uVar82 + 1);
                  pMVar75 = pMVar8->m_Items + (int)uVar82;
                  (pMVar75->fields).Position.fields.x = (float)uVar21;
                  (pMVar75->fields).Position.fields.y = uVar21._4_4_;
                  *(undefined8 *)&(pMVar75->fields).Position.fields.z = uVar15;
                  pMVar69 = &pMVar8->m_Items[(int)uVar82].fields;
                  (pMVar69->Normal).fields.y = (float)uVar24;
                  (pMVar69->Normal).fields.z = uVar24._4_4_;
                  (pMVar69->UV).fields = UVar20;
                  pMVar8->m_Items[(int)uVar82].fields.Shade = fVar6;
                }
                uVar82 = (uint)uVar77;
                if (ABS(fVar4) <= 0.0001) {
                  pMVar8 = (__this->fields)._cut;
                  if (pMVar8 == (Map_MapFracture_Vertex_array *)0x0) goto label_181ea2790;
                  uVar80 = (uint)pMVar8->max_length;
                  if ((int)uVar82 < (int)uVar80) {
                    if (uVar80 <= uVar82) goto label_181ea2796;
                    pMVar75 = pMVar8->m_Items + (int)uVar82;
                    (pMVar75->fields).Position.fields.x = (float)uVar21;
                    (pMVar75->fields).Position.fields.y = uVar21._4_4_;
                    *(undefined8 *)&(pMVar75->fields).Position.fields.z = uVar15;
                    pMVar69 = &pMVar8->m_Items[(int)uVar82].fields;
                    (pMVar69->Normal).fields.y = (float)uVar24;
                    (pMVar69->Normal).fields.z = uVar24._4_4_;
                    (pMVar69->UV).fields = UVar20;
                    pMVar8->m_Items[(int)uVar82].fields.Shade = fVar6;
                  }
label_181ea23e0:
                  uVar77 = (ulonglong)(uVar82 + 1);
                }
                else if (((0.0001 < fVar4) && (fVar5 < -0.0001)) || ((fVar4 < -0.0001 && (0.0001 < fVar5)))) {
                  pMVar8 = (__this->fields)._corners;
                  if (pMVar8 != (Map_MapFracture_Vertex_array *)0x0) {
                    if (uVar80 < (uint)pMVar8->max_length) {
                      pMVar75 = pMVar8->m_Items + (int)uVar80;
                      local_e8.fields.Position.fields.x = (pMVar75->fields).Position.fields.x;
                      local_e8.fields.Position.fields.y = (pMVar75->fields).Position.fields.y;
                      local_e8.fields._8_8_ = *(undefined8 *)&(pMVar75->fields).Position.fields.z;
                      pMVar69 = &pMVar8->m_Items[(int)uVar80].fields;
                      local_e8.fields.Normal.fields.y = (pMVar69->Normal).fields.y;
                      local_e8.fields.Normal.fields.z = (pMVar69->Normal).fields.z;
                      local_e8.fields.UV.fields = (pMVar69->UV).fields;
                      local_e8.fields.Shade = pMVar8->m_Items[(int)uVar80].fields.Shade;
                      local_b8.fields.Position.fields._0_8_ = uVar21;
                      local_b8.fields._8_8_ = uVar15;
                      local_b8.fields.Normal.fields._4_8_ = uVar24;
                      local_b8.fields.UV.fields = UVar20;
                      local_b8.fields.Shade = fVar6;
                      pMVar75 = Map_MapFracture_Vertex__Lerp
                                          (local_88,&local_b8,&local_e8,fVar4 / (fVar4 - fVar5),
                                           (MethodInfo *)0x0);
                      pMVar8 = (__this->fields)._polygon;
                      if (pMVar8 != (Map_MapFracture_Vertex_array *)0x0) {
                        uVar80 = (uint)uVar83;
                        if (uVar80 < (uint)pMVar8->max_length) {
                          uVar35 = (pMVar75->fields).Position.fields.x;
                          uVar36 = (pMVar75->fields).Position.fields.y;
                          uVar15 = *(undefined8 *)&(pMVar75->fields).Position.fields.z;
                          fVar4 = (pMVar75->fields).Shade;
                          uVar37 = (pMVar75->fields).Normal.fields.y;
                          uVar38 = (pMVar75->fields).Normal.fields.z;
                          UVar20 = (pMVar75->fields).UV.fields;
                          pMVar75 = pMVar8->m_Items + (int)uVar80;
                          (pMVar75->fields).Position.fields.x = (float)uVar35;
                          (pMVar75->fields).Position.fields.y = (float)uVar36;
                          *(undefined8 *)&(pMVar75->fields).Position.fields.z = uVar15;
                          pMVar69 = &pMVar8->m_Items[(int)uVar80].fields;
                          (pMVar69->Normal).fields.y = (float)uVar37;
                          (pMVar69->Normal).fields.z = (float)uVar38;
                          (pMVar69->UV).fields = UVar20;
                          pMVar8->m_Items[(int)uVar80].fields.Shade = fVar4;
                          pMVar8 = (__this->fields)._cut;
                          if (pMVar8 == (Map_MapFracture_Vertex_array *)0x0) goto label_181ea2790;
                          uVar7 = (uint)pMVar8->max_length;
                          if ((int)uVar82 < (int)uVar7) {
                            if (uVar7 <= uVar82) goto label_181ea2796;
                            pMVar75 = pMVar8->m_Items + (int)uVar82;
                            (pMVar75->fields).Position.fields.x = (float)uVar35;
                            (pMVar75->fields).Position.fields.y = (float)uVar36;
                            *(undefined8 *)&(pMVar75->fields).Position.fields.z = uVar15;
                            pMVar69 = &pMVar8->m_Items[(int)uVar82].fields;
                            (pMVar69->Normal).fields.y = (float)uVar37;
                            (pMVar69->Normal).fields.z = (float)uVar38;
                            (pMVar69->UV).fields = UVar20;
                            pMVar8->m_Items[(int)uVar82].fields.Shade = fVar4;
                          }
                          uVar83 = (ulonglong)(uVar80 + 1);
                          goto label_181ea23e0;
                        }
                        goto label_181ea2796;
                      }
                      goto label_181ea2790;
                    }
                    goto label_181ea2796;
                  }
                  goto label_181ea2790;
                }
                uVar78 = (ulonglong)(uVar76 + 1);
              } while ((int)(uVar76 + 1) < 3);
              iVar79 = (int)uVar83 + -1;
              if (1 < iVar79) {
                do {
                  pMVar74 = MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_Add;
                  pMVar8 = (__this->fields)._polygon;
                  if (pMVar8 == (Map_MapFracture_Vertex_array *)0x0) goto label_181ea2790;
                  if ((((int)pMVar8->max_length == 0) || ((uint)pMVar8->max_length <= uVar81)) ||
                     ((uint)pMVar8->max_length <= uVar81 + 1)) goto label_181ea2796;
                  pMVar75 = &(triangle->fields).A;
                  local_158.fields.A.fields.Position.fields.x = (pMVar75->fields).Position.fields.x;
                  local_158.fields.A.fields.Position.fields.y = (pMVar75->fields).Position.fields.y;
                  local_158.fields.A.fields._8_8_ =
                       *(undefined8 *)&(triangle->fields).A.fields.Position.fields.z;
                  local_1c8.fields.A.fields.Shade = pMVar8->m_Items[0].fields.Shade;
                  pMVar75 = &(triangle->fields).A;
                  local_158.fields.A.fields.Normal.fields.y = (pMVar75->fields).Normal.fields.y;
                  local_158.fields.A.fields.Normal.fields.z = (pMVar75->fields).Normal.fields.z;
                  local_158.fields.A.fields.UV.fields = (triangle->fields).A.fields.UV.fields;
                  local_1c8.fields.Submesh = (triangle->fields).Submesh;
                  uVar39._0_4_ = pMVar8->m_Items[0].fields.Position.fields.x;
                  uVar39._4_4_ = pMVar8->m_Items[0].fields.Position.fields.y;
                  uVar15 = *(undefined8 *)&pMVar8->m_Items[0].fields.Position.fields.z;
                  uVar40._0_4_ = pMVar8->m_Items[0].fields.Normal.fields.y;
                  uVar40._4_4_ = pMVar8->m_Items[0].fields.Normal.fields.z;
                  UVar20 = pMVar8->m_Items[0].fields.UV.fields;
                  uVar30 = *(undefined8 *)&(triangle->fields).A.fields.Shade;
                  pMVar75 = &(triangle->fields).B;
                  uVar41 = (pMVar75->fields).Position.fields.y;
                  uVar42 = (pMVar75->fields).Position.fields.z;
                  pMVar75 = &(triangle->fields).B;
                  uVar43 = (pMVar75->fields).Normal.fields.x;
                  uVar44 = (pMVar75->fields).Normal.fields.y;
                  uVar21 = *(undefined8 *)&(triangle->fields).B.fields.Normal.fields.z;
                  local_158.fields.A.fields.Shade = (float)uVar30;
                  local_158.fields.B.fields.Position.fields.x = (float)((ulonglong)uVar30 >> 0x20);
                  uVar30 = *(undefined8 *)&(triangle->fields).B.fields.UV.fields.y;
                  pMVar75 = &(triangle->fields).C;
                  uVar45 = (pMVar75->fields).Position.fields.x;
                  uVar46 = (pMVar75->fields).Position.fields.y;
                  local_158.fields.B.fields.Normal.fields.z = (float)uVar21;
                  local_158.fields.B.fields.UV.fields.x = (float)((ulonglong)uVar21 >> 0x20);
                  local_108 = *(undefined8 *)&(triangle->fields).C.fields.Position.fields.z;
                  pMVar75 = &(triangle->fields).C;
                  uStack_100._0_4_ = (pMVar75->fields).Normal.fields.y;
                  uStack_100._4_4_ = (pMVar75->fields).Normal.fields.z;
                  local_158.fields.B.fields.UV.fields.y = (float)uVar30;
                  local_158.fields.B.fields.Shade = (float)((ulonglong)uVar30 >> 0x20);
                  pMVar69 = &pMVar8->m_Items[uVar81].fields;
                  uVar47 = (pMVar69->Normal).fields.y;
                  uVar48 = (pMVar69->Normal).fields.z;
                  UVar25 = (pMVar69->UV).fields;
                  local_1c8.fields.A.fields.Position.fields.x = 0.0;
                  local_1c8.fields.A.fields.Position.fields.y = 0.0;
                  local_1c8.fields.A.fields.Position.fields.z = 0.0;
                  local_1c8.fields.A.fields.Normal.fields.x = 0.0;
                  local_1c8.fields.A.fields.Normal.fields.y = 0.0;
                  local_1c8.fields.A.fields.Normal.fields.z = 0.0;
                  local_1c8.fields.A.fields.UV.fields.x = 0.0;
                  local_1c8.fields.A.fields.UV.fields.y = 0.0;
                  pMVar75 = pMVar8->m_Items + uVar81;
                  uVar49 = (pMVar75->fields).Position.fields.x;
                  uVar50 = (pMVar75->fields).Position.fields.y;
                  uVar30 = *(undefined8 *)&(pMVar75->fields).Position.fields.z;
                  local_1c8.fields.B.fields.Shade = pMVar8->m_Items[uVar81].fields.Shade;
                  local_1c8.fields.B.fields.Position.fields.z = (float)uVar30;
                  local_1c8.fields.B.fields.Normal.fields.x = (float)((ulonglong)uVar30 >> 0x20);
                  local_1c8.fields.B.fields.UV.fields.x = UVar25.x;
                  local_1c8.fields.B.fields.UV.fields.y = UVar25.y;
                  pMVar75 = pMVar8->m_Items + (ulonglong)uVar81 + 1;
                  uVar51._0_4_ = (pMVar75->fields).Position.fields.x;
                  uVar51._4_4_ = (pMVar75->fields).Position.fields.y;
                  local_1c8.fields.C.fields._8_8_ = *(undefined8 *)&(pMVar75->fields).Position.fields.z;
                  pMVar69 = &pMVar8->m_Items[(ulonglong)uVar81 + 1].fields;
                  uVar52._0_4_ = (pMVar69->Normal).fields.y;
                  uVar52._4_4_ = (pMVar69->Normal).fields.z;
                  UVar25 = (pMVar69->UV).fields;
                  local_1c8.fields.C.fields.Shade = pMVar8->m_Items[(ulonglong)uVar81 + 1].fields.Shade;
                  local_1c8.fields.C.fields.UV.fields.x = UVar25.x;
                  local_1c8.fields.C.fields.UV.fields.y = UVar25.y;
                  local_1c8.fields.B.fields.Position.fields.x = (float)uVar49;
                  local_1c8.fields.B.fields.Position.fields.y = (float)uVar50;
                  local_1c8.fields.B.fields.Normal.fields.y = (float)uVar47;
                  local_1c8.fields.B.fields.Normal.fields.z = (float)uVar48;
                  local_1c8.fields.C.fields.Position.fields.x = (float)(undefined4)uVar51;
                  local_1c8.fields.C.fields.Position.fields.y = (float)uVar51._4_4_;
                  local_1c8.fields.C.fields.Normal.fields.y = (float)(undefined4)uVar52;
                  local_1c8.fields.C.fields.Normal.fields.z = (float)uVar52._4_4_;
                  local_158.fields.B.fields.Position.fields.y = (float)uVar41;
                  local_158.fields.B.fields.Position.fields.z = (float)uVar42;
                  local_158.fields.B.fields.Normal.fields.x = (float)uVar43;
                  local_158.fields.B.fields.Normal.fields.y = (float)uVar44;
                  local_158.fields.Submesh = uVar45;
                  uStack_10c = uVar46;
                  if (kept == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0)
                  goto label_181ea2790;
                  piVar2 = &(kept->fields)._version;
                  *piVar2 = *piVar2 + 1;
                  pMVar10 = (kept->fields)._items;
                  if (pMVar10 == (Map_MapFracture_Triangle_array *)0x0) goto label_181ea2790;
                  uVar76 = (kept->fields)._size;
                  uVar30 = CONCAT44(uVar49,local_1c8.fields.A.fields.Shade);
                  if (uVar76 < (uint)pMVar10->max_length) {
                    (kept->fields)._size = uVar76 + 1;
                    if ((uint)pMVar10->max_length <= uVar76) goto label_181ea2796;
                    *(undefined8 *)&pMVar10->m_Items[(int)uVar76].fields.A.fields.Position = uVar39;
                    *(undefined8 *)((longlong)&pMVar10->m_Items[(int)uVar76].fields.A.fields.Position + 8) =
                         uVar15;
                    pMVar70 = &pMVar10->m_Items[(int)uVar76].fields;
                    *(undefined8 *)((longlong)&(pMVar70->A).fields.Normal.fields + 4) = uVar40;
                    (pMVar70->A).fields.UV.fields = UVar20;
                    pMVar70 = &pMVar10->m_Items[(int)uVar76].fields;
                    *(undefined8 *)&(pMVar70->A).fields.Shade = uVar30;
                    *(ulonglong *)((longlong)&(pMVar70->B).fields.Position.fields + 4) =
                         CONCAT44(local_1c8.fields.B.fields.Position.fields.z,uVar50);
                    pMVar70 = &pMVar10->m_Items[(int)uVar76].fields;
                    pMVar75 = &pMVar70->B;
                    (pMVar75->fields).Normal.fields.x = local_1c8.fields.B.fields.Normal.fields.x;
                    (pMVar75->fields).Normal.fields.y = (float)uVar47;
                    *(ulonglong *)((longlong)&(pMVar70->B).fields.Normal.fields + 8) =
                         CONCAT44(local_1c8.fields.B.fields.UV.fields.x,uVar48);
                    pMVar70 = &pMVar10->m_Items[(int)uVar76].fields;
                    *(ulonglong *)((longlong)&(pMVar70->B).fields.UV.fields + 4) =
                         CONCAT44(local_1c8.fields.B.fields.Shade,local_1c8.fields.B.fields.UV.fields.y);
                    *(undefined8 *)&(pMVar70->C).fields.Position.fields = uVar51;
                    pMVar70 = &pMVar10->m_Items[(int)uVar76].fields;
                    *(undefined8 *)((longlong)&(pMVar70->C).fields.Position.fields + 8) =
                         local_1c8.fields.C.fields._8_8_;
                    *(undefined8 *)((longlong)&(pMVar70->C).fields.Normal.fields + 4) = uVar52;
                    pUVar1 = &pMVar10->m_Items[(int)uVar76].fields.C.fields.UV;
                    pUVar1->fields = UVar25;
                    pUVar1[1] = (UnityEngine_Vector2_o)
                                CONCAT44(local_1c8.fields.Submesh,local_1c8.fields.C.fields.Shade);
                  }
                  else {
                    local_1c8.fields.A.fields.Position.fields._0_8_ = uVar39;
                    local_1c8.fields.A.fields._8_8_ = uVar15;
                    local_1c8.fields.A.fields.Normal.fields._4_8_ = uVar40;
                    local_1c8.fields.A.fields.UV.fields = UVar20;
                    System_Collections_Generic_List_MapFracture_Triangle___AddWithResize
                              (kept,&local_1c8,(MethodInfo_9E3880 *)pMVar74->klass->rgctx_data[0xe].method);
                  }
                  uVar81 = uVar81 + 1;
                } while ((int)uVar81 < iVar79);
              }
              pMVar74 = MethodInfo_System_Collections_Generic_List_MapFracture_Segment_Add;
              if ((int)uVar77 == 2) {
                pMVar8 = (__this->fields)._cut;
                if (pMVar8 != (Map_MapFracture_Vertex_array *)0x0) {
                  if (((int)pMVar8->max_length == 0) || ((uint)pMVar8->max_length < 2)) goto label_181ea2796;
                  pMVar75 = &(triangle->fields).B;
                  uVar53 = (pMVar75->fields).Normal.fields.x;
                  uVar54 = (pMVar75->fields).Normal.fields.y;
                  uVar15 = *(undefined8 *)&(triangle->fields).B.fields.Normal.fields.z;
                  __this_00 = (__this->fields)._segments;
                  local_1c8.fields.B.fields.Normal.fields.z = (float)uVar15;
                  local_1c8.fields.B.fields.UV.fields.x = (float)((ulonglong)uVar15 >> 0x20);
                  local_158.fields.A.fields.Normal.fields.y = 0.0;
                  local_158.fields.A.fields.Normal.fields.z = 0.0;
                  local_158.fields.A.fields.UV.fields.x = 0.0;
                  local_158.fields.A.fields.UV.fields.y = 0.0;
                  local_158.fields.A.fields.Position.fields.x = 0.0;
                  local_158.fields.A.fields.Position.fields.y = 0.0;
                  local_158.fields.A.fields.Position.fields.z = 0.0;
                  local_158.fields.A.fields.Normal.fields.x = 0.0;
                  uVar55._0_4_ = pMVar8->m_Items[0].fields.Position.fields.x;
                  uVar55._4_4_ = pMVar8->m_Items[0].fields.Position.fields.y;
                  uVar15 = *(undefined8 *)&pMVar8->m_Items[0].fields.Position.fields.z;
                  uVar56._0_4_ = pMVar8->m_Items[0].fields.Normal.fields.y;
                  uVar56._4_4_ = pMVar8->m_Items[0].fields.Normal.fields.z;
                  UVar20 = pMVar8->m_Items[0].fields.UV.fields;
                  pfVar3 = &pMVar8->m_Items[0].fields.Shade;
                  local_158.fields.A.fields.Shade = *pfVar3;
                  local_158.fields.B.fields.Shade = pMVar8->m_Items[1].fields.Shade;
                  local_158.fields.Submesh = (triangle->fields).Submesh;
                  uVar57 = pMVar8->m_Items[1].fields.Normal.fields.y;
                  uVar58 = pMVar8->m_Items[1].fields.Normal.fields.z;
                  UVar25 = pMVar8->m_Items[1].fields.UV.fields;
                  uVar59 = pMVar8->m_Items[1].fields.Position.fields.x;
                  uVar60 = pMVar8->m_Items[1].fields.Position.fields.y;
                  uVar21 = *(undefined8 *)pfVar3;
                  uVar30 = *(undefined8 *)&pMVar8->m_Items[1].fields.Position.fields.z;
                  local_158.fields.B.fields.UV.fields.x = UVar25.x;
                  local_158.fields.B.fields.UV.fields.y = UVar25.y;
                  local_158.fields.B.fields.Position.fields.z = (float)uVar30;
                  local_158.fields.B.fields.Normal.fields.x = (float)((ulonglong)uVar30 >> 0x20);
                  local_1c8.fields.B.fields.Normal.fields.x = (float)uVar53;
                  local_1c8.fields.B.fields.Normal.fields.y = (float)uVar54;
                  local_158.fields.B.fields.Position.fields.x = (float)uVar59;
                  local_158.fields.B.fields.Position.fields.y = (float)uVar60;
                  local_158.fields.B.fields.Normal.fields.y = (float)uVar57;
                  local_158.fields.B.fields.Normal.fields.z = (float)uVar58;
                  if (__this_00 != (System_Collections_Generic_List_MapFracture_Segment__o *)0x0) {
                    piVar2 = &(__this_00->fields)._version;
                    *piVar2 = *piVar2 + 1;
                    pMVar11 = (__this_00->fields)._items;
                    if (pMVar11 != (Map_MapFracture_Segment_array *)0x0) {
                      uVar81 = (__this_00->fields)._size;
                      local_1c8.fields.B.fields.Normal.fields.x = local_158.fields.B.fields.Normal.fields.x;
                      local_1c8.fields.B.fields.Normal.fields.y = (float)uVar57;
                      local_1c8.fields.B.fields.Normal.fields.z = (float)uVar58;
                      local_1c8.fields.B.fields.UV.fields.x = local_158.fields.B.fields.UV.fields.x;
                      local_1c8.fields.B.fields.UV.fields.y = local_158.fields.B.fields.UV.fields.y;
                      local_1c8.fields.B.fields.Shade = local_158.fields.B.fields.Shade;
                      local_1c8.fields.C.fields.Position.fields.x = (float)local_158.fields.Submesh;
                      if ((uint)pMVar11->max_length <= uVar81) {
                        local_158.fields.A.fields.Shade = (float)uVar21;
                        local_158.fields.B.fields.Position.fields.x = (float)((ulonglong)uVar21 >> 0x20);
                        local_158.fields.A.fields.Position.fields._0_8_ = uVar55;
                        local_158.fields.A.fields._8_8_ = uVar15;
                        local_158.fields.A.fields.Normal.fields._4_8_ = uVar56;
                        local_158.fields.A.fields.UV.fields = UVar20;
                        System_Collections_Generic_List_MapFracture_Segment___AddWithResize
                                  (__this_00,&local_158,
                                   (MethodInfo_9E3990 *)pMVar74->klass->rgctx_data[0xe].method);
                        return;
                      }
                      (__this_00->fields)._size = uVar81 + 1;
                      if (uVar81 < (uint)pMVar11->max_length) {
                        *(undefined8 *)&pMVar11->m_Items[(int)uVar81].fields.A.fields.Position = uVar55;
                        *(undefined8 *)((longlong)&pMVar11->m_Items[(int)uVar81].fields.A.fields.Position + 8)
                             = uVar15;
                        pMVar71 = &pMVar11->m_Items[(int)uVar81].fields;
                        *(undefined8 *)((longlong)&(pMVar71->A).fields.Normal.fields + 4) = uVar56;
                        (pMVar71->A).fields.UV.fields = UVar20;
                        pMVar71 = &pMVar11->m_Items[(int)uVar81].fields;
                        *(undefined8 *)&(pMVar71->A).fields.Shade = uVar21;
                        *(ulonglong *)((longlong)&(pMVar71->B).fields.Position.fields + 4) =
                             CONCAT44(local_158.fields.B.fields.Position.fields.z,uVar60);
                        pMVar71 = &pMVar11->m_Items[(int)uVar81].fields;
                        pMVar75 = &pMVar71->B;
                        (pMVar75->fields).Normal.fields.x = local_158.fields.B.fields.Normal.fields.x;
                        (pMVar75->fields).Normal.fields.y = (float)uVar57;
                        *(ulonglong *)((longlong)&(pMVar71->B).fields.Normal.fields + 8) =
                             CONCAT44(local_158.fields.B.fields.UV.fields.x,uVar58);
                        pUVar1 = &pMVar11->m_Items[(int)uVar81].fields.B.fields.UV;
                        pUVar1->fields = UVar25;
                        pUVar1[1] = (UnityEngine_Vector2_o)
                                    CONCAT44(local_158.fields.Submesh,local_158.fields.B.fields.Shade);
                        return;
                      }
                      goto label_181ea2796;
                    }
                  }
                }
                goto label_181ea2790;
              }
            }
          }
          else {
            if (kept == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) goto label_181ea2790;
            pMVar75 = &(triangle->fields).A;
            local_1c8.fields.A.fields.Position.fields.x = (pMVar75->fields).Position.fields.x;
            local_1c8.fields.A.fields.Position.fields.y = (pMVar75->fields).Position.fields.y;
            local_1c8.fields.A.fields._8_8_ = *(undefined8 *)&(triangle->fields).A.fields.Position.fields.z;
            pMVar75 = &(triangle->fields).A;
            local_1c8.fields.A.fields.Normal.fields.y = (pMVar75->fields).Normal.fields.y;
            local_1c8.fields.A.fields.Normal.fields.z = (pMVar75->fields).Normal.fields.z;
            local_1c8.fields.A.fields.UV.fields = (triangle->fields).A.fields.UV.fields;
            uVar15 = *(undefined8 *)&(triangle->fields).A.fields.Shade;
            pMVar75 = &(triangle->fields).B;
            uVar61 = (pMVar75->fields).Position.fields.y;
            uVar62 = (pMVar75->fields).Position.fields.z;
            pMVar75 = &(triangle->fields).B;
            uVar63 = (pMVar75->fields).Normal.fields.x;
            uVar64 = (pMVar75->fields).Normal.fields.y;
            uVar30 = *(undefined8 *)&(triangle->fields).B.fields.Normal.fields.z;
            local_1c8.fields.A.fields.Shade = (float)uVar15;
            local_1c8.fields.B.fields.Position.fields.x = (float)((ulonglong)uVar15 >> 0x20);
            uVar15 = *(undefined8 *)&(triangle->fields).B.fields.UV.fields.y;
            pMVar75 = &(triangle->fields).C;
            uVar65 = (pMVar75->fields).Position.fields.x;
            uVar66 = (pMVar75->fields).Position.fields.y;
            local_1c8.fields.B.fields.Normal.fields.z = (float)uVar30;
            local_1c8.fields.B.fields.UV.fields.x = (float)((ulonglong)uVar30 >> 0x20);
            local_1c8.fields.C.fields._8_8_ = *(undefined8 *)&(triangle->fields).C.fields.Position.fields.z;
            local_1c8.fields.C.fields.Normal.fields.y = (triangle->fields).C.fields.Normal.fields.y;
            local_1c8.fields.C.fields.Normal.fields.z = (triangle->fields).C.fields.Normal.fields.z;
            local_1c8.fields.B.fields.UV.fields.y = (float)uVar15;
            local_1c8.fields.B.fields.Shade = (float)((ulonglong)uVar15 >> 0x20);
            local_1c8.fields.C.fields.UV.fields.x = (triangle->fields).C.fields.UV.fields.x;
            local_1c8.fields.C.fields.UV.fields.y = (triangle->fields).C.fields.UV.fields.y;
            local_1c8.fields.C.fields.Shade = (triangle->fields).C.fields.Shade;
            local_1c8.fields.Submesh = (triangle->fields).Submesh;
            local_1c8.fields.B.fields.Position.fields.y = (float)uVar61;
            local_1c8.fields.B.fields.Position.fields.z = (float)uVar62;
            local_1c8.fields.B.fields.Normal.fields.x = (float)uVar63;
            local_1c8.fields.B.fields.Normal.fields.y = (float)uVar64;
            local_1c8.fields.C.fields.Position.fields.x = (float)uVar65;
            local_1c8.fields.C.fields.Position.fields.y = (float)uVar66;
            il2cpp_runtime_helper_180043610(kept,&local_1c8,MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_Add)
            ;
          }
          return;
        }
      }
    }
  }
label_181ea2790:
  ThrowNullReferenceException();
}


// Map.MapFracture$$AddCut
// il2cpp: void Map_MapFracture__AddCut (Map_MapFracture_o* __this, Map_MapFracture_Vertex_o vertex, int32_t* count, const MethodInfo* method);
// 0x181ea1b40

void Map_MapFracture__AddCut
               (Map_MapFracture_o *__this,Map_MapFracture_Vertex_o *vertex,int32_t *count,MethodInfo *method)

{
  Map_MapFracture_Vertex_o *pMVar1;
  uint uVar2;
  float fVar3;
  Map_MapFracture_Vertex_array *pMVar4;
  undefined8 uVar5;
  UnityEngine_Vector2_Fields UVar6;
  Map_MapFracture_Vertex_Fields *pMVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pMVar4 = (__this->fields)._cut;
  if (pMVar4 == (Map_MapFracture_Vertex_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (*count < (int)pMVar4->max_length) {
    pMVar4 = (__this->fields)._cut;
    uVar2 = *count;
    if ((uint)pMVar4->max_length <= uVar2) {
      ThrowIndexOutOfRangeException();
    }
    fVar8 = (vertex->fields).Position.fields.y;
    uVar5 = *(undefined8 *)&(vertex->fields).Position.fields.z;
    fVar3 = (vertex->fields).Shade;
    fVar9 = (vertex->fields).Normal.fields.y;
    fVar10 = (vertex->fields).Normal.fields.z;
    UVar6 = (vertex->fields).UV.fields;
    pMVar1 = pMVar4->m_Items + (int)uVar2;
    (pMVar1->fields).Position.fields.x = (vertex->fields).Position.fields.x;
    (pMVar1->fields).Position.fields.y = fVar8;
    *(undefined8 *)&(pMVar1->fields).Position.fields.z = uVar5;
    pMVar7 = &pMVar4->m_Items[(int)uVar2].fields;
    (pMVar7->Normal).fields.y = fVar9;
    (pMVar7->Normal).fields.z = fVar10;
    (pMVar7->UV).fields = UVar6;
    pMVar4->m_Items[(int)uVar2].fields.Shade = fVar3;
  }
  *count = *count + 1;
  return;
}


// Map.MapFracture$$CloseOpenings
// il2cpp: void Map_MapFracture__CloseOpenings (Map_MapFracture_o* __this, const MethodInfo* method);
// 0x181ea2b10
// eh: try 0x181ea2f40..0x181ea359a -> pad 0x18333d360 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181ea3763..0x181ea3784 -> pad 0x1803567d0 cleanup
// eh: try 0x181ea3a50..0x181ea3c29 -> pad 0x18333d3c0 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 76 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea2f4b: mov r12, qword ptr [rsp + 0x468]
// asm:   0x181ea3406: mov rdx, qword ptr [rip + 0x2201993]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x181ea340d: mov rcx, qword ptr [rsp + 0xb0]
// asm:   0x181ea3415: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea341a: mov rcx, qword ptr [rsp + 0xa8]
// asm:   0x181ea3422: test rcx, rcx
// asm:   0x181ea3425: jne 0x181ea3c18
// asm:   0x181ea342b: xor r15d, r15d
// asm:   0x181ea342e: mov r14, qword ptr [rsp + 0x90]
// asm:   0x181ea3436: mov rdi, qword ptr [rsp + 0x60]
// asm:   0x181ea34ec: nop dword ptr [rax]
// asm:   0x181ea35bf: mov rdx, qword ptr [rip + 0x220676a]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int_int_MapFracture_Opening_Dispose
// asm:   0x181ea35c6: mov rcx, qword ptr [rsp + 0x88]
// asm:   0x181ea35ce: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea35d3: mov rcx, qword ptr [rsp + 0x80]
// asm:   0x181ea35db: test rcx, rcx
// asm:   0x181ea35de: jne 0x181ea3c29
// asm:   0x181ea35e4: xor r15d, r15d
// asm:   0x181ea35e7: mov r14, qword ptr [rsp + 0x90]
// asm:   0x181ea35ef: mov rsi, qword ptr [rsp + 0x120]
// asm:   0x181ea35f7: mov r12, qword ptr [rsp + 0x60]
// asm:   0x181ea3659: movdqa xmm15, xmmword ptr [rip + 0x14b55ee]
// asm:   0x181ea3662: xorps xmm14, xmm14
// asm:   0x181ea3666: nop word ptr [rax + rax]
// asm:   0x181ea3abf: mov rdx, qword ptr [rip + 0x21f924a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x181ea3ac6: mov rcx, qword ptr [rsp + 0x130]
// asm:   0x181ea3ace: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea3ad3: mov rcx, qword ptr [rsp + 0x128]
// asm:   0x181ea3adb: test rcx, rcx
// asm:   0x181ea3ade: jne 0x181ea3c2f
// asm:   0x181ea3ae4: xor r15d, r15d
// asm:   0x181ea3ae7: mov r14, qword ptr [rsp + 0x90]
// asm:   0x181ea3aef: mov rsi, qword ptr [rsp + 0x120]
// asm:   0x181ea3af7: mov r12, qword ptr [rsp + 0x60]
// asm:   0x181ea3afc: mov rdi, qword ptr [rsp + 0xa8]
// asm:   0x181ea3b04: mov r13, qword ptr [rsp + 0x98]
// asm:   0x181ea3b0c: mov eax, dword ptr [rsp + 0x30]
// asm:   0x181ea3b10: movss xmm6, dword ptr [rsp + 0x48]
// asm:   0x181ea3b16: movdqa xmm15, xmmword ptr [rip + 0x14b5131]
// asm:   0x181ea3b1f: xorps xmm14, xmm14
// asm:   0x181ea3c18: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181ea3c29: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181ea3c2f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333d360: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d365: push rbp
// asm:   0x18333d366: sub rsp, 0x30
// asm:   0x18333d36a: mov rbp, rdx
// asm:   0x18333d36d: mov rax, qword ptr [rbp + 0x260]
// asm:   0x18333d374: mov rcx, qword ptr [rax]
// asm:   0x18333d377: mov qword ptr [rbp + 0xa8], rcx
// asm:   0x18333d37e: movabs rax, 0
// asm:   0x18333d388: add rsp, 0x30
// asm:   0x18333d38c: pop rbp
// asm:   0x18333d38d: ret 
// asm:   0x18333d390: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d395: push rbp
// asm:   0x18333d396: sub rsp, 0x30
// asm:   0x18333d39a: mov rbp, rdx
// asm:   0x18333d39d: mov rax, qword ptr [rbp + 0x268]
// asm:   0x18333d3a4: mov rcx, qword ptr [rax]
// asm:   0x18333d3a7: mov qword ptr [rbp + 0x80], rcx
// asm:   0x18333d3ae: movabs rax, 0
// asm:   0x18333d3b8: add rsp, 0x30
// asm:   0x18333d3bc: pop rbp
// asm:   0x18333d3bd: ret 
// asm:   0x18333d3c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d3c5: push rbp
// asm:   0x18333d3c6: sub rsp, 0x30
// asm:   0x18333d3ca: mov rbp, rdx
// asm:   0x18333d3cd: mov rax, qword ptr [rbp + 0x270]
// asm:   0x18333d3d4: mov rcx, qword ptr [rax]
// asm:   0x18333d3d7: mov qword ptr [rbp + 0x128], rcx
// asm:   0x18333d3de: movabs rax, 0
// asm:   0x18333d3e8: add rsp, 0x30
// asm:   0x18333d3ec: pop rbp
// asm:   0x18333d3ed: ret 

void Map_MapFracture__CloseOpenings(Map_MapFracture_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_MapFracture_Triangle__o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int32_t iVar9;
  int32_t tileX;
  int32_t tileX_00;
  System_Collections_Generic_Dictionary_Vector3Int__int__o *points;
  System_Collections_Generic_List_MapFracture_Vertex__o *__this_01;
  System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *__this_02;
  System_Collections_Generic_Dictionary_int__int__o *__this_03;
  System_Collections_Generic_Dictionary_int__MapFracture_Opening__o *__this_04;
  System_Collections_Generic_List_MapFracture_Vertex__o *loop;
  System_Collections_Generic_List_Vector3__o *__this_05;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_06;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res18 [2];
  System_Collections_Generic_Dictionary_Vector3Int__int__o *local_res20;
  System_ValueTuple_int__int__Fields local_418;
  UnityEngine_Vector3_Fields local_410;
  float local_400;
  Map_MapFracture_Opening_o local_3f8;
  System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *local_3e8;
  UnityEngine_Vector3_Fields local_3d8;
  float fStack_3cc;
  undefined1 local_3c8 [16];
  System_Collections_Generic_List_MapFracture_Vertex__o *local_3b8;
  undefined8 local_3b0;
  float local_3a8;
  System_Collections_Generic_List_MapFracture_Vertex__o *local_3a0;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_398;
  undefined1 local_388 [8];
  float fStack_380;
  float fStack_37c;
  Il2CppObject *local_378;
  UnityEngine_Vector2_Fields UStack_370;
  float local_368;
  float fStack_364;
  undefined8 uStack_360;
  undefined1 local_358 [24];
  UnityEngine_Vector2_Fields UStack_340;
  float local_338;
  System_Collections_Generic_Dictionary_int__int__o *local_328;
  undefined8 local_320;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_318;
  Map_MapFracture_Vertex_o local_308;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  UnityEngine_Vector2_Fields UStack_2c0;
  System_Collections_Generic_List_MapFracture_Vertex__o *local_2b8;
  undefined1 local_2b0 [16];
  Il2CppObject *local_2a0;
  undefined1 local_298 [16];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  undefined8 uStack_270;
  undefined1 local_268 [16];
  undefined8 local_258;
  uint64_t uStack_250;
  Il2CppObject *local_248;
  UnityEngine_Vector2_Fields UStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  System_Collections_Generic_List_Enumerator_T__o local_1c8;
  uint64_t uStack_1b0;
  Il2CppObject *local_1a8;
  UnityEngine_Vector2_Fields UStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  
  if (Il2CppMethodInitialized_18434508f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_TryAdd);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_int)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int_int_MapFracture_Opening_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int_int_MapFracture_Opening_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_get_Current)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int_int_MapFracture_Opening_get_Curr
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_ValueTuple_int_int_MapFracture_Opening_get_Key
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_ValueTuple_int_int_MapFracture_Opening_get_Value
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapFracture_Vertex);
    Il2CppMethodInitialized_18434508f = '\x01';
  }
  local_268._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_268._8_8_ = 0;
  local_258 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  uStack_250 = 0;
  local_248 = (Il2CppObject *)0x0;
  UStack_240.x = 0.0;
  UStack_240.y = 0.0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0.0;
  fStack_224 = 0.0;
  fStack_220 = 0.0;
  fStack_21c = 0.0;
  local_218 = 0.0;
  fStack_214 = 0.0;
  fStack_210 = 0.0;
  fStack_20c = 0.0;
  local_208 = 0.0;
  fStack_204 = 0.0;
  fStack_200 = 0.0;
  fStack_1fc = 0.0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_3d8.x = 0.0;
  local_3d8.y = 0.0;
  local_3d8.z = 0.0;
  fStack_3cc = 0.0;
  local_298._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_298._8_8_ = 0;
  local_288 = 0.0;
  fStack_284 = 0.0;
  fStack_280 = 0.0;
  fStack_27c = 0.0;
  local_278 = 0.0;
  fStack_274 = 0.0;
  uStack_270 = 0;
  local_2b0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_2b0._8_8_ = 0;
  local_2a0 = (Il2CppObject *)0x0;
  local_410.x = 0.0;
  local_410.y = 0.0;
  local_410.z = 0.0;
  local_res18[0] = 0.0;
  local_2d8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_2d8._8_8_ = 0;
  local_2c8 = (Il2CppObject *)0x0;
  UStack_2c0.x = 0.0;
  UStack_2c0.y = 0.0;
  points = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_int);
  local_res20 = points;
  System_Collections_Generic_Dictionary_Vector3Int__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)points,
             (MethodInfo_14CF520 *)MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_ctor);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Vertex);
  System_Collections_Generic_List_MapFracture_Vertex____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_ctor);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening
                        );
  System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening____ctor
            (__this_02,
             (MethodInfo_13CC630 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_ctor);
  __this_00 = (__this->fields)._triangles;
  if (__this_00 != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    local_3e8 = __this_02;
    local_3b8 = __this_01;
    System_Collections_Generic_List_MapFracture_Triangle___GetEnumerator
              (&local_1c8,__this_00,
               (MethodInfo_969260 *)
               MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    local_268._0_8_ = local_1c8.fields._list;
    local_268._8_4_ = local_1c8.fields._index;
    local_268._12_4_ = local_1c8.fields._version;
    local_258 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_1c8.fields._current;
    uStack_250 = uStack_1b0;
    local_248 = local_1a8;
    UStack_240 = UStack_1a0;
    local_238 = local_198;
    uStack_230 = uStack_190;
    local_228 = local_188;
    fStack_224 = fStack_184;
    fStack_220 = fStack_180;
    fStack_21c = fStack_17c;
    local_218 = local_178;
    fStack_214 = fStack_174;
    fStack_210 = fStack_170;
    fStack_20c = fStack_16c;
    local_208 = local_168;
    fStack_204 = fStack_164;
    fStack_200 = fStack_160;
    fStack_1fc = fStack_15c;
    local_1f8 = local_158;
    uStack_1f0 = uStack_150;
    local_3a0 = (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0;
    local_398 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_268;
    while (bVar8 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                             ((System_Collections_Generic_List_Enumerator_T__o *)local_268,
                              (MethodInfo_1558F50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext
                             ), fVar17 = local_208, fVar16 = fStack_214, bVar8) {
      fVar13 = (float)local_258;
      fVar10 = local_258._4_4_;
      fVar5 = (float)uStack_250;
      fVar12 = local_238._4_4_;
      fVar11 = (float)uStack_230;
      fVar15 = uStack_230._4_4_;
      local_188 = local_218;
      fStack_184 = fStack_214;
      fStack_180 = fStack_210;
      fStack_17c = fStack_20c;
      local_178 = local_208;
      fStack_174 = fStack_204;
      fStack_170 = fStack_200;
      fStack_16c = fStack_1fc;
      fVar6 = (float)uStack_1f0;
      fVar7 = uStack_1f0._4_4_;
      local_168 = (float)local_1f8;
      fStack_164 = local_1f8._4_4_;
      fStack_160 = (float)uStack_1f0;
      fStack_15c = uStack_1f0._4_4_;
      local_128 = (float)local_238;
      fStack_124 = local_238._4_4_;
      fStack_120 = (float)uStack_230;
      fStack_11c = uStack_230._4_4_;
      local_118 = local_228;
      fStack_114 = fStack_224;
      fStack_110 = fStack_220;
      fStack_10c = fStack_21c;
      local_108 = local_218;
      fStack_104 = fStack_214;
      fStack_100 = fStack_210;
      fStack_fc = fStack_20c;
      local_358._0_8_ = local_258;
      local_358._8_8_ = uStack_250;
      local_358._16_8_ = local_248;
      UStack_340 = UStack_240;
      local_338 = (float)local_238;
      iVar9 = Map_MapFracture__Weld(points,__this_01,(Map_MapFracture_Vertex_o *)local_358,(MethodInfo *)0x0);
      local_308.fields.Position.fields.x = fStack_124;
      local_308.fields.Position.fields.y = fStack_120;
      local_308.fields.Position.fields.z = fStack_11c;
      local_308.fields.Normal.fields.x = local_118;
      local_308.fields.UV.fields.y = local_108;
      local_308.fields.UV.fields.x = fStack_10c;
      local_308.fields.Normal.fields.y = fStack_114;
      local_308.fields.Normal.fields.z = fStack_110;
      local_308.fields.Shade = fVar16;
      tileX = Map_MapFracture__Weld(points,__this_01,&local_308,(MethodInfo *)0x0);
      fVar14 = fStack_17c;
      fVar16 = fStack_180;
      local_388._0_4_ = fStack_180;
      local_388._4_4_ = fStack_17c;
      fStack_380 = local_178;
      fStack_37c = fStack_174;
      local_378 = (Il2CppObject *)CONCAT44(fStack_16c,fStack_170);
      UStack_370.y = fStack_164;
      UStack_370.x = local_168;
      local_368 = fVar6;
      tileX_00 = Map_MapFracture__Weld
                           (points,__this_01,(Map_MapFracture_Vertex_o *)local_388,(MethodInfo *)0x0);
      fVar12 = fVar12 - fVar13;
      fVar11 = fVar11 - fVar10;
      fVar15 = fVar15 - fVar5;
      fVar16 = fVar16 - fVar13;
      fVar14 = fVar14 - fVar10;
      fVar17 = fVar17 - fVar5;
      fVar13 = fVar17 * fVar11 - fVar14 * fVar15;
      fVar17 = fVar16 * fVar15 - fVar17 * fVar12;
      fVar16 = fVar14 * fVar12 - fVar16 * fVar11;
      local_3b0 = (System_Collections_Generic_List_Vector3__o *)CONCAT44(fVar17,fVar13);
      local_3a8 = fVar16;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      local_3c8._0_4_ = 0.0;
      local_3c8._4_4_ = 0.0;
      local_3c8._8_8_ = local_3c8._8_8_ & 0xffffffff00000000;
      fVar10 = (float)il2cpp_runtime_helper_180546a40(&local_3b0,0);
      if (fVar10 <= 1e-05) {
        pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_3d8.x = (pUVar2->zeroVector).fields.x;
        local_3d8.y = (pUVar2->zeroVector).fields.y;
        local_3d8.z = (pUVar2->zeroVector).fields.z;
      }
      else {
        local_3d8.x = fVar13 / fVar10;
        local_3d8.z = fVar16 / fVar10;
        local_3d8.y = fVar17 / fVar10;
      }
      fStack_3cc = fVar7;
      if (Il2CppMethodInitialized_184345090 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_Remove
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_set_Item
                  );
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_ctor);
        Il2CppMethodInitialized_184345090 = '\x01';
      }
      if (iVar9 == tileX) {
label_181ea3282:
        fVar16 = local_3d8.x;
        fVar17 = local_3d8.y;
        fVar13 = local_3d8.z;
        fVar10 = fStack_3cc;
      }
      else {
        local_418.Item1 = 0;
        local_418.Item2 = 0;
        System_ValueTuple_int__int____ctor
                  ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)&local_418,tileX,iVar9,
                   MethodInfo_System_ValueTuple_int_int_ctor);
        if (__this_02 ==
            (System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar8 = System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening___Remove
                          (__this_02,(System_ValueTuple_int__int__o)local_418,
                           (MethodInfo_13C3940 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_Remove
                          );
        if (bVar8) goto label_181ea3282;
        local_418.Item1 = 0;
        local_418.Item2 = 0;
        System_ValueTuple_int__int____ctor
                  ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)&local_418,iVar9,tileX,
                   MethodInfo_System_ValueTuple_int_int_ctor);
        fVar10 = fStack_3cc;
        fVar13 = local_3d8.z;
        fVar16 = local_3d8.x;
        fVar17 = local_3d8.y;
        local_3f8.fields.Normal.fields.x = local_3d8.x;
        local_3f8.fields.Normal.fields.y = local_3d8.y;
        local_3f8.fields.Submesh = (int32_t)fStack_3cc;
        local_3f8.fields.Normal.fields.z = local_3d8.z;
        System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening___set_Item
                  (__this_02,(System_ValueTuple_int__int__o)local_418,&local_3f8,
                   (MethodInfo_13CE290 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_set_Item
                  );
      }
      if (Il2CppMethodInitialized_184345090 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_Remove
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_set_Item
                  );
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_ctor);
        Il2CppMethodInitialized_184345090 = '\x01';
      }
      if (tileX != tileX_00) {
        local_418.Item1 = 0;
        local_418.Item2 = 0;
        System_ValueTuple_int__int____ctor
                  ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)&local_418,tileX_00,tileX,
                   MethodInfo_System_ValueTuple_int_int_ctor);
        if (__this_02 ==
            (System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar8 = System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening___Remove
                          (__this_02,(System_ValueTuple_int__int__o)local_418,
                           (MethodInfo_13C3940 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_Remove
                          );
        if (!bVar8) {
          local_418.Item1 = 0;
          local_418.Item2 = 0;
          System_ValueTuple_int__int____ctor
                    ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)&local_418,tileX,tileX_00,
                     MethodInfo_System_ValueTuple_int_int_ctor);
          local_3f8.fields.Normal.fields.y = fVar17;
          local_3f8.fields.Normal.fields.x = fVar16;
          local_3f8.fields.Submesh = (int32_t)fVar10;
          local_3f8.fields.Normal.fields.z = fVar13;
          System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening___set_Item
                    (__this_02,(System_ValueTuple_int__int__o)local_418,&local_3f8,
                     (MethodInfo_13CE290 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_set_Item
                    );
        }
      }
      if (Il2CppMethodInitialized_184345090 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_Remove
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_set_Item
                  );
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_ctor);
        Il2CppMethodInitialized_184345090 = '\x01';
      }
      points = local_res20;
      if (tileX_00 != iVar9) {
        local_418.Item1 = 0;
        local_418.Item2 = 0;
        System_ValueTuple_int__int____ctor
                  ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)&local_418,iVar9,tileX_00,
                   MethodInfo_System_ValueTuple_int_int_ctor);
        if (__this_02 ==
            (System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar8 = System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening___Remove
                          (__this_02,(System_ValueTuple_int__int__o)local_418,
                           (MethodInfo_13C3940 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_Remove
                          );
        points = local_res20;
        if (!bVar8) {
          local_418.Item1 = 0;
          local_418.Item2 = 0;
          System_ValueTuple_int__int____ctor
                    ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)&local_418,tileX_00,iVar9,
                     MethodInfo_System_ValueTuple_int_int_ctor);
          local_3f8.fields.Normal.fields.y = fVar17;
          local_3f8.fields.Normal.fields.x = fVar16;
          local_3f8.fields.Submesh = (int32_t)fVar10;
          local_3f8.fields.Normal.fields.z = fVar13;
          System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening___set_Item
                    (__this_02,(System_ValueTuple_int__int__o)local_418,&local_3f8,
                     (MethodInfo_13CE290 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_set_Item
                    );
          points = local_res20;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_268,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    __this_03 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
    System_Collections_Generic_Dictionary_int__int____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
               (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
    __this_04 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening);
    System_Collections_Generic_Dictionary_int__MapFracture_Opening____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
               (MethodInfo_1404750 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening_ctor);
    if (__this_02 != (System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *)0x0
       ) {
      local_3e8 = (System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *)
                  __this_04;
      local_328 = __this_03;
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_388,
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                 (MethodInfo_13C1110 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_GetEnumerator
                );
      local_298._0_8_ = CONCAT44(local_388._4_4_,local_388._0_4_);
      local_298._8_8_ = CONCAT44(fStack_37c,fStack_380);
      local_288 = SUB84(local_378,0);
      fStack_284 = (float)((ulonglong)local_378 >> 0x20);
      fStack_280 = UStack_370.x;
      fStack_27c = UStack_370.y;
      local_278 = local_368;
      fStack_274 = fStack_364;
      uStack_270 = uStack_360;
      local_3c8._0_4_ = 0.0;
      local_3c8._4_4_ = 0.0;
      local_3c8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_298;
      while (bVar8 = System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int__int___MapFracture_Opening___MoveNext
                               ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_298,
                                (MethodInfo_155CE70 *)
                                MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int_int_MapFracture_Opening_MoveNext
                               ), fVar16 = fStack_284, bVar8) {
        local_308.fields.Position.fields.x = local_288;
        local_308.fields.Position.fields.y = fStack_284;
        local_308.fields.Position.fields.z = fStack_280;
        local_308.fields.Normal.fields.x = fStack_27c;
        local_308.fields.Normal.fields.y = local_278;
        local_308.fields.Normal.fields.z = fStack_274;
        if (__this_03 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar8 = System_Collections_Generic_Dictionary_int__int___TryAdd
                          (__this_03,(int32_t)fStack_284,(int32_t)local_288,
                           (MethodInfo_14116F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_int_TryAdd);
        if (!bVar8) {
          System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int__int___MapFracture_Opening___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_298,
                     MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int_int_MapFracture_Opening_Dispose
                    );
          return;
        }
        if (__this_04 == (System_Collections_Generic_Dictionary_int__MapFracture_Opening__o *)0x0) {
          ThrowNullReferenceException();
        }
        local_3f8.fields.Normal.fields.y = local_308.fields.Normal.fields.x;
        local_3f8.fields.Normal.fields.x = local_308.fields.Position.fields.z;
        local_3f8.fields.Submesh = (int32_t)local_308.fields.Normal.fields.z;
        local_3f8.fields.Normal.fields.z = local_308.fields.Normal.fields.y;
        System_Collections_Generic_Dictionary_int__MapFracture_Opening___Add
                  (__this_04,(int32_t)fVar16,&local_3f8,
                   (MethodInfo_1423810 *)
                   MethodInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening_Add);
      }
      System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int__int___MapFracture_Opening___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_298,
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int_int_MapFracture_Opening_Dispose
                );
      loop = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Vertex);
      System_Collections_Generic_List_MapFracture_Vertex____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)loop,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_ctor);
      local_3a0 = loop;
      local_2b8 = loop;
      __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
      System_Collections_Generic_List_Vector3____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_05,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
      local_3b0 = __this_05;
      if (__this_03 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
label_181ea3670:
        do {
          iVar9 = System_Collections_Generic_Dictionary_int__int___get_Count
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                             (MethodInfo_13CDEB0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Count);
          if (iVar9 < 1) {
            return;
          }
          __this_06 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                                 (MethodInfo_13C6500 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Keys);
          if (__this_06 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
          break;
          System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_358,__this_06,
                     (MethodInfo_F1E550 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_int_GetEnumerator);
          local_2b0._0_8_ = local_358._0_8_;
          local_2b0._8_8_ = local_358._8_8_;
          local_2a0 = (Il2CppObject *)local_358._16_8_;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__int___MoveNext
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     local_2b0,
                     (MethodInfo_1563BB0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_MoveNext
                    );
          local_res20 = (System_Collections_Generic_Dictionary_Vector3Int__int__o *)
                        CONCAT44(local_res20._4_4_,local_2a0._0_4_);
          local_418.Item1 = (int32_t)local_2a0._0_4_;
          fVar16 = local_2a0._0_4_;
          if (Il2CppMethodInitialized_18433dbea == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbea = '\x01';
            fVar16 = local_res20._0_4_;
          }
          pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar17 = (pUVar2->zeroVector).fields.x;
          fVar13 = (pUVar2->zeroVector).fields.y;
          fVar10 = (pUVar2->zeroVector).fields.z;
          if (loop == (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) break;
          piVar1 = &(loop->fields)._version;
          *piVar1 = *piVar1 + 1;
          (loop->fields)._size = 0;
          if (__this_05 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
          piVar1 = &(__this_05->fields)._version;
          *piVar1 = *piVar1 + 1;
          (__this_05->fields)._size = 0;
          do {
            bVar8 = System_Collections_Generic_Dictionary_int__int___TryGetValue
                              ((System_Collections_Generic_Dictionary_int__float__o *)__this_03,
                               (int32_t)fVar16,local_res18,
                               (MethodInfo_1411820 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
            if ((!bVar8) || (0x7ff < (local_2b8->fields)._size)) {
              System_Collections_Generic_Dictionary_int__int___Remove
                        ((System_Collections_Generic_Dictionary_int__float__o *)__this_03,(int32_t)fVar16,
                         (MethodInfo_140B8F0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Remove
                        );
              goto label_181ea3670;
            }
            if (__this_01 == (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) goto label_181ea3c35;
            System_Collections_Generic_List_MapFracture_Vertex___get_Item
                      ((Map_MapFracture_Vertex_o *)local_388,__this_01,(int32_t)fVar16,
                       (MethodInfo_965440 *)
                       MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
            local_358._0_8_ = CONCAT44(local_388._4_4_,local_388._0_4_);
            local_358._8_8_ = CONCAT44(fStack_37c,fStack_380);
            local_358._16_8_ = local_378;
            UStack_340 = UStack_370;
            local_338 = local_368;
            il2cpp_runtime_helper_18003b8f0(loop,local_358,MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add);
            if (__this_04 == (System_Collections_Generic_Dictionary_int__MapFracture_Opening__o *)0x0)
            goto label_181ea3c35;
            System_Collections_Generic_Dictionary_int__MapFracture_Opening___get_Item
                      (&local_3f8,__this_04,(int32_t)fVar16,
                       (MethodInfo_14233B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening_get_Item);
            local_3d8.x = local_3f8.fields.Normal.fields.x;
            local_3d8.y = local_3f8.fields.Normal.fields.y;
            local_3d8.z = local_3f8.fields.Normal.fields.z;
            il2cpp_runtime_helper_180012810(__this_05,&local_3d8,MethodInfo_System_Collections_Generic_List_Vector3_Add);
            System_Collections_Generic_List_MapFracture_Vertex___get_Item
                      ((Map_MapFracture_Vertex_o *)local_388,__this_01,(int32_t)fVar16,
                       (MethodInfo_965440 *)
                       MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
            fVar5 = fStack_380;
            uVar4 = local_388._4_4_;
            uVar3 = local_388._0_4_;
            System_Collections_Generic_List_MapFracture_Vertex___get_Item
                      ((Map_MapFracture_Vertex_o *)local_388,__this_01,(int32_t)local_res18[0],
                       (MethodInfo_965440 *)
                       MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
            fVar17 = (fStack_380 * (float)uVar4 - (float)local_388._4_4_ * fVar5) + fVar17;
            fVar13 = ((float)local_388._0_4_ * fVar5 - fStack_380 * (float)uVar3) + fVar13;
            fVar10 = ((float)local_388._4_4_ * (float)uVar3 - (float)local_388._0_4_ * (float)uVar4) + fVar10;
            local_410.y = fVar13;
            local_410.x = fVar17;
            local_410.z = fVar10;
            System_Collections_Generic_Dictionary_int__int___Remove
                      ((System_Collections_Generic_Dictionary_int__float__o *)__this_03,(int32_t)fVar16,
                       (MethodInfo_140B8F0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Remove);
            fVar16 = local_res18[0];
          } while (local_res18[0] != local_res20._0_4_);
          if ((2 < (loop->fields)._size) && (0.0001 <= fVar10 * fVar10 + fVar13 * fVar13 + fVar17 * fVar17)) {
            local_410.z = (float)il2cpp_runtime_helper_180546a40(&local_410,0);
            if (1e-05 < local_410.z) {
              fVar17 = fVar17 / local_410.z;
              fVar13 = fVar13 / local_410.z;
              local_410.y = fVar13;
              local_410.x = fVar17;
              local_410.z = fVar10 / local_410.z;
            }
            else {
              fVar17 = 0.0;
              fVar13 = 0.0;
              local_410.x = 0.0;
              local_410.y = 0.0;
              local_410.z = 0.0;
            }
            fVar16 = local_410.z;
            fVar10 = 0.0;
            local_400 = 0.0;
            System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_358,
                       (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)__this_05,
                       (MethodInfo_930B50 *)MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
            local_2d8._0_8_ = local_358._0_8_;
            local_2d8._8_8_ = local_358._8_8_;
            local_2c8 = (Il2CppObject *)local_358._16_8_;
            UStack_2c0 = UStack_340;
            local_320 = 0;
            local_318 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_2d8;
            while (bVar8 = System_Collections_Generic_List_Enumerator_ProbeBrickPool_BrickChunkAlloc___MoveNext
                                     ((System_Collections_Generic_List_Enumerator_T__o *)local_2d8,
                                      (MethodInfo_15296D0 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext),
                  bVar8) {
              fVar10 = fVar10 + ABS(fVar13 * local_2c8._4_4_ + fVar17 * (float)local_2c8 +
                                    fVar16 * UStack_2c0.x);
              local_400 = fVar10;
            }
            System_Collections_Generic_List_Enumerator_Vector3___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_2d8,
                       MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
            if (fVar10 / (float)(loop->fields)._size <= 0.9) {
              System_Collections_Generic_Dictionary_int__MapFracture_Opening___get_Item
                        ((Map_MapFracture_Opening_o *)&local_308,__this_04,(int32_t)local_res20._0_4_,
                         (MethodInfo_14233B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening_get_Item);
              local_3c8._0_4_ = local_410.x;
              local_3c8._4_4_ = local_410.y;
              local_3c8._8_4_ = local_410.z;
              Map_MapFracture__AddCap
                        (loop,(UnityEngine_Vector3_o *)local_3c8,(int32_t)local_308.fields.Normal.fields.x,
                         (__this->fields)._triangles,(MethodInfo *)0x0);
            }
          }
        } while( true );
      }
    }
  }
label_181ea3c35:
  ThrowNullReferenceException();
}


// Map.MapFracture$$AddEdge
// il2cpp: void Map_MapFracture__AddEdge (System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o* edges, int32_t a, int32_t b, Map_MapFracture_Opening_o opening, const MethodInfo* method);
// 0x181ea1ba0

void Map_MapFracture__AddEdge
               (System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *edges,
               int32_t a,int32_t b,Map_MapFracture_Opening_o *opening,MethodInfo *method)

{
  bool bVar1;
  System_ValueTuple_int__int__Fields local_48 [2];
  Map_MapFracture_Opening_o local_38;
  
  if (Il2CppMethodInitialized_184345090 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_Remove
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_ctor);
    Il2CppMethodInitialized_184345090 = '\x01';
  }
  if (a != b) {
    local_48[0].Item1 = 0;
    local_48[0].Item2 = 0;
    System_ValueTuple_int__int____ctor
              ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)local_48,b,a,
               MethodInfo_System_ValueTuple_int_int_ctor);
    if (edges == (System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening___Remove
                      (edges,(System_ValueTuple_int__int__o)local_48[0],
                       (MethodInfo_13C3940 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_Remove
                      );
    if (!bVar1) {
      local_48[0].Item1 = 0;
      local_48[0].Item2 = 0;
      System_ValueTuple_int__int____ctor
                ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)local_48,a,b,
                 MethodInfo_System_ValueTuple_int_int_ctor);
      local_38.fields.Normal.fields.x = (opening->fields).Normal.fields.x;
      local_38.fields.Normal.fields.y = (opening->fields).Normal.fields.y;
      local_38.fields._8_8_ = *(undefined8 *)&(opening->fields).Normal.fields.z;
      System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening___set_Item
                (edges,(System_ValueTuple_int__int__o)local_48[0],&local_38,
                 (MethodInfo_13CE290 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_set_Item
                );
    }
  }
  return;
}


// Map.MapFracture$$AddCaps
// il2cpp: void Map_MapFracture__AddCaps (System_Collections_Generic_List_MapFracture_Segment__o* segments, UnityEngine_Vector3_o normal, System_Collections_Generic_List_MapFracture_Triangle__o* target, const MethodInfo* method);
// 0x181ea1500
// eh: try 0x181ea17a0..0x181ea1b28 -> pad 0x18333d2c0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea18a2: mov r12d, dword ptr [rsp + 0x188]
// asm:   0x181ea18aa: nop word ptr [rax + rax]
// asm:   0x181ea19c5: mov rdx, qword ptr [rip + 0x2203134]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Segment_Dispose
// asm:   0x181ea19cc: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181ea19d1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea19d6: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181ea19db: test rcx, rcx
// asm:   0x181ea19de: jne 0x181ea1b28
// asm:   0x181ea19e4: xor r13d, r13d
// asm:   0x181ea19e7: mov r15, qword ptr [rsp + 0x60]
// asm:   0x181ea19ec: mov r14, qword ptr [rsp + 0x68]
// asm:   0x181ea19f1: mov rdi, qword ptr [rsp + 0x40]
// asm:   0x181ea1a1d: nop dword ptr [rax]
// asm:   0x181ea1adf: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181ea1b28: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333d2c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d2c5: push rbp
// asm:   0x18333d2c6: sub rsp, 0x30
// asm:   0x18333d2ca: mov rbp, rdx
// asm:   0x18333d2cd: mov rax, qword ptr [rbp + 0xd0]
// asm:   0x18333d2d4: mov rcx, qword ptr [rax]
// asm:   0x18333d2d7: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333d2db: movabs rax, 0
// asm:   0x18333d2e5: add rsp, 0x30
// asm:   0x18333d2e9: pop rbp
// asm:   0x18333d2ea: ret 

void Map_MapFracture__AddCaps
               (System_Collections_Generic_List_MapFracture_Segment__o *segments,UnityEngine_Vector3_o *normal
               ,System_Collections_Generic_List_MapFracture_Triangle__o *target,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  int32_t index;
  int32_t item;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o submesh;
  System_Collections_Generic_Dictionary_Vector3Int__int__o *points;
  System_Collections_Generic_List_MapFracture_Vertex__o *vertices;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this;
  System_Collections_Generic_List_List_int___o *neighbors;
  System_Collections_Generic_List_T__o *__this_00;
  System_Collections_Generic_List_int__o *__this_01;
  Il2CppObject *pIVar3;
  System_Boolean_array *visited;
  System_Collections_Generic_List_MapFracture_Vertex__o *loop;
  uint index_00;
  System_Collections_Generic_List_List_int___o *local_1f8;
  float local_1f0;
  undefined8 local_1e8;
  System_Collections_Generic_List_Enumerator_T__o *local_1e0;
  System_Collections_Generic_List_MapFracture_Vertex__o *local_1d8;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *local_1d0;
  System_Collections_Generic_List_Enumerator_T__o local_1c8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  UnityEngine_Vector2_Fields UStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  Il2CppObject *local_158 [3];
  UnityEngine_Vector2_Fields UStack_140;
  float local_138;
  Map_MapFracture_Vertex_o local_128 [2];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  UnityEngine_Vector2_Fields UStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  if (Il2CppMethodInitialized_184345091 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_bool_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_int)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Segment_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Segment_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Segment_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Segment_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_List_int_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapFracture_Vertex);
    Il2CppMethodInitialized_184345091 = '\x01';
  }
  local_1c8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_1c8.fields._index = 0;
  local_1c8.fields._version = 0;
  local_1c8.fields._current = (Il2CppObject *)0x0;
  uStack_1b0._0_4_ = 0.0;
  uStack_1b0._4_4_ = 0.0;
  local_1a8._0_4_ = 0.0;
  local_1a8._4_4_ = 0.0;
  UStack_1a0.x = 0.0;
  UStack_1a0.y = 0.0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  fStack_180 = 0.0;
  fStack_17c = 0.0;
  local_178 = 0;
  uStack_170 = 0;
  points = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_int);
  System_Collections_Generic_Dictionary_Vector3Int__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)points,
             (MethodInfo_14CF520 *)MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_ctor);
  vertices = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Vertex);
  System_Collections_Generic_List_MapFracture_Vertex____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)vertices,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_ctor);
  __this = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  neighbors = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_List_int);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)neighbors,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_List_int_ctor);
  if (segments != (System_Collections_Generic_List_MapFracture_Segment__o *)0x0) {
    local_1f8 = neighbors;
    local_1d8 = vertices;
    local_1d0 = __this;
    System_Collections_Generic_List_MapFracture_Segment___GetEnumerator
              (&local_a8,segments,
               (MethodInfo_9E6670 *)
               MethodInfo_System_Collections_Generic_List_MapFracture_Segment_GetEnumerator);
    local_1c8.fields._list = local_a8.fields._list;
    local_1c8.fields._index = local_a8.fields._index;
    local_1c8.fields._version = local_a8.fields._version;
    local_1c8.fields._current = local_a8.fields._current;
    uStack_1b0._0_4_ = fStack_90;
    uStack_1b0._4_4_ = fStack_8c;
    local_1a8._0_4_ = local_88;
    local_1a8._4_4_ = fStack_84;
    UStack_1a0 = UStack_80;
    local_198 = local_78;
    uStack_190 = uStack_70;
    local_188 = CONCAT44(fStack_64,local_68);
    fStack_180 = fStack_60;
    fStack_17c = fStack_5c;
    local_178 = local_58;
    uStack_170 = uStack_50;
    local_1e8 = 0;
    local_1e0 = &local_1c8;
    while (bVar2 = System_Collections_Generic_List_Enumerator_MapFracture_Segment___MoveNext
                             (&local_1c8,
                              (MethodInfo_1559880 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Segment_MoveNext
                             ), bVar2) {
      local_78 = local_188;
      fVar1 = local_178._4_4_;
      local_68 = (float)local_178;
      fStack_64 = local_178._4_4_;
      fStack_60 = (float)uStack_170;
      local_d8 = (float)local_198;
      fStack_d4 = local_198._4_4_;
      fStack_d0 = (float)uStack_190;
      fStack_cc = uStack_190._4_4_;
      local_c8 = (float)local_188;
      fStack_c4 = (float)((ulonglong)local_188 >> 0x20);
      fStack_c0 = fStack_180;
      fStack_bc = fStack_17c;
      fStack_b8 = (float)local_178;
      fStack_b4 = local_178._4_4_;
      local_b0 = (float)uStack_170;
      local_158[0] = local_1c8.fields._current;
      local_158[1] = (Il2CppObject *)uStack_1b0;
      local_158[2] = (Il2CppObject *)local_1a8;
      UStack_140 = UStack_1a0;
      local_138 = (float)local_198;
      index = Map_MapFracture__Weld(points,vertices,(Map_MapFracture_Vertex_o *)local_158,(MethodInfo *)0x0);
      local_128[0].fields.Position.fields.y = fStack_d0;
      local_128[0].fields.Position.fields.x = fStack_d4;
      local_128[0].fields.Normal.fields.x = local_c8;
      local_128[0].fields.Position.fields.z = fStack_cc;
      local_128[0].fields.Normal.fields.z = fStack_c0;
      local_128[0].fields.Normal.fields.y = fStack_c4;
      local_128[0].fields.UV.fields.y = fStack_b8;
      local_128[0].fields.UV.fields.x = fStack_bc;
      local_128[0].fields.Shade = fVar1;
      item = Map_MapFracture__Weld(points,vertices,local_128,(MethodInfo *)0x0);
      fVar1 = local_b0;
      if (neighbors == (System_Collections_Generic_List_List_int___o *)0x0) {
        ThrowNullReferenceException();
      }
      if (vertices == (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) {
        ThrowNullReferenceException();
      }
      while ((neighbors->fields)._size < (vertices->fields)._size) {
        __this_00 = (System_Collections_Generic_List_T__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
        System_Collections_Generic_List_int____ctor
                  (__this_00,2,
                   (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
        il2cpp_runtime_helper_180012890(neighbors,__this_00,MethodInfo_System_Collections_Generic_List_List_int_Add);
        if (__this == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180026690(__this,fVar1,MethodInfo_System_Collections_Generic_List_int_Add);
      }
      if (index != item) {
        __this_01 = (System_Collections_Generic_List_int__o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)neighbors,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_List_int_get_Item);
        if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = System_Collections_Generic_List_int___Contains
                          (__this_01,item,
                           (MethodInfo_91C120 *)MethodInfo_System_Collections_Generic_List_int_Contains);
        if (!bVar2) {
          pIVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)neighbors,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_List_int_get_Item);
          if (pIVar3 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180026690(pIVar3,item,MethodInfo_System_Collections_Generic_List_int_Add);
          pIVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)neighbors,item,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_List_int_get_Item);
          if (pIVar3 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180026690(pIVar3,index,MethodInfo_System_Collections_Generic_List_int_Add);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_MapFracture_Segment___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_1c8,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Segment_Dispose);
    index_00 = 0;
    if (vertices != (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) {
      visited = (System_Boolean_array *)SZArrayNew(TypeInfo_bool_array,(vertices->fields)._size);
      while( true ) {
        if ((vertices->fields)._size <= (int)index_00) {
          return;
        }
        if (visited == (System_Boolean_array *)0x0) break;
        if ((uint)visited->max_length <= index_00) {
          ThrowIndexOutOfRangeException();
        }
        if (visited->m_Items[(int)index_00] == false) {
          if ((neighbors == (System_Collections_Generic_List_List_int___o *)0x0) ||
             (pIVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)neighbors,index_00,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_List_int_get_Item),
             pIVar3 == (Il2CppObject *)0x0)) break;
          if ((*(int *)&pIVar3[1].monitor == 2) &&
             (loop = Map_MapFracture__TraceLoop(index_00,vertices,neighbors,visited,(MethodInfo *)0x0),
             loop != (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0)) {
            if (__this == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
            local_1f8 = *(System_Collections_Generic_List_List_int___o **)&normal->fields;
            local_1f0 = (normal->fields).z;
            submesh = System_Collections_Generic_List_int___get_Item
                                (__this,index_00,
                                 (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item)
            ;
            Map_MapFracture__AddCap
                      (loop,(UnityEngine_Vector3_o *)&local_1f8,(int32_t)submesh.fields,target,
                       (MethodInfo *)0x0);
          }
        }
        index_00 = index_00 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$TraceLoop
// il2cpp: System_Collections_Generic_List_MapFracture_Vertex__o* Map_MapFracture__TraceLoop (int32_t start, System_Collections_Generic_List_MapFracture_Vertex__o* vertices, System_Collections_Generic_List_List_int___o* neighbors, System_Boolean_array* visited, const MethodInfo* method);
// 0x181ea7a00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea7bc0: mov r15d, r14d

System_Collections_Generic_List_MapFracture_Vertex__o *
Map_MapFracture__TraceLoop
          (int32_t start,System_Collections_Generic_List_MapFracture_Vertex__o *vertices,
          System_Collections_Generic_List_List_int___o *neighbors,System_Boolean_array *visited,
          MethodInfo *method)

{
  int32_t *piVar1;
  Map_MapFracture_Vertex_o *pMVar2;
  uint uVar3;
  Map_MapFracture_Vertex_array *pMVar4;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields SVar5;
  Map_MapFracture_Vertex_Fields *pMVar6;
  MethodInfo *pMVar7;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields index;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields SVar8;
  System_Collections_Generic_List_MapFracture_Vertex__o *__this;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *pSVar9;
  Il2CppObject *pIVar10;
  System_Collections_Generic_List_MapFracture_Vertex__o *pSVar11;
  int32_t index_00;
  Map_MapFracture_Vertex_o local_78;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  
  if (Il2CppMethodInitialized_184345092 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapFracture_Vertex);
    Il2CppMethodInitialized_184345092 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Vertex);
  System_Collections_Generic_List_MapFracture_Vertex____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_ctor);
  if ((vertices != (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) &&
     (System_Collections_Generic_List_MapFracture_Vertex___get_Item
                (&local_78,vertices,start,
                 (MethodInfo_965440 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item),
     pMVar7 = MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add,
     __this != (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0)) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar4 = (__this->fields)._items;
    if (pMVar4 == (Map_MapFracture_Vertex_array *)0x0) goto label_181ea7d10;
    uVar3 = (__this->fields)._size;
    if (uVar3 < (uint)pMVar4->max_length) {
      (__this->fields)._size = uVar3 + 1;
      if ((uint)pMVar4->max_length <= uVar3) goto label_181ea7d16;
      pMVar2 = pMVar4->m_Items + (int)uVar3;
      (pMVar2->fields).Position.fields.x = local_78.fields.Position.fields.x;
      (pMVar2->fields).Position.fields.y = local_78.fields.Position.fields.y;
      *(undefined8 *)&(pMVar2->fields).Position.fields.z = local_78.fields._8_8_;
      pMVar6 = &pMVar4->m_Items[(int)uVar3].fields;
      (pMVar6->Normal).fields.y = local_78.fields.Normal.fields.y;
      (pMVar6->Normal).fields.z = local_78.fields.Normal.fields.z;
      (pMVar6->UV).fields = local_78.fields.UV.fields;
      pMVar4->m_Items[(int)uVar3].fields.Shade = local_78.fields.Shade;
    }
    else {
      System_Collections_Generic_List_MapFracture_Vertex___AddWithResize
                (__this,&local_78,(MethodInfo_952080 *)pMVar7->klass->rgctx_data[0xe].method);
    }
    if (visited != (System_Boolean_array *)0x0) {
      if ((uint)start < (uint)visited->max_length) {
        visited->m_Items[start] = true;
        if ((neighbors == (System_Collections_Generic_List_List_int___o *)0x0) ||
           (pSVar9 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                     System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)neighbors,start,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_List_int_get_Item),
           pSVar9 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0))
        goto label_181ea7d10;
        index = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                          (pSVar9,0,(MethodInfo_92B8E0 *)
                                    MethodInfo_System_Collections_Generic_List_int_get_Item);
        SVar5 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)start;
        while( true ) {
          if (index == (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)start) {
            pSVar11 = (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0;
            if (2 < (__this->fields)._size) {
              pSVar11 = __this;
            }
            return pSVar11;
          }
          if ((uint)*(System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields *)&visited->max_length
              <= (uint)index) break;
          if (visited->m_Items[(int)index] != false) {
            return (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0;
          }
          pIVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)neighbors,(int32_t)index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_List_int_get_Item);
          if (pIVar10 == (Il2CppObject *)0x0) goto label_181ea7d10;
          if (*(int *)&pIVar10[1].monitor != 2) {
            return (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0;
          }
          if (0x7ff < (__this->fields)._size) {
            return (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0;
          }
          if ((uint)*(System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields *)&visited->max_length
              <= (uint)index) break;
          visited->m_Items[(int)index] = true;
          System_Collections_Generic_List_MapFracture_Vertex___get_Item
                    (&local_78,vertices,(int32_t)index,
                     (MethodInfo_965440 *)
                     MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
          local_48 = local_78.fields.Position.fields.x;
          fStack_44 = local_78.fields.Position.fields.y;
          fStack_40 = local_78.fields.Position.fields.z;
          fStack_3c = local_78.fields.Normal.fields.x;
          local_38 = local_78.fields.Normal.fields.y;
          fStack_34 = local_78.fields.Normal.fields.z;
          fStack_30 = local_78.fields.UV.fields.x;
          fStack_2c = local_78.fields.UV.fields.y;
          local_28 = local_78.fields.Shade;
          il2cpp_runtime_helper_18003b8f0(__this,&local_48,MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add);
          pSVar9 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                   System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)neighbors,(int32_t)index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_List_int_get_Item);
          if (pSVar9 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
          goto label_181ea7d10;
          SVar8 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                  System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                            (pSVar9,0,(MethodInfo_92B8E0 *)
                                      MethodInfo_System_Collections_Generic_List_int_get_Item);
          if (SVar8 == SVar5) {
            pSVar9 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                     System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)neighbors,(int32_t)index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_List_int_get_Item);
            if (pSVar9 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
            goto label_181ea7d10;
            index_00 = 1;
          }
          else {
            pSVar9 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                     System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)neighbors,(int32_t)index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_List_int_get_Item);
            if (pSVar9 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
            goto label_181ea7d10;
            index_00 = 0;
          }
          SVar8 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                  System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                            (pSVar9,index_00,
                             (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          SVar5 = index;
          index = SVar8;
        }
      }
label_181ea7d16:
      ThrowIndexOutOfRangeException();
    }
  }
label_181ea7d10:
  ThrowNullReferenceException();
}


// Map.MapFracture$$AddCap
// il2cpp: void Map_MapFracture__AddCap (System_Collections_Generic_List_MapFracture_Vertex__o* loop, UnityEngine_Vector3_o normal, int32_t submesh, System_Collections_Generic_List_MapFracture_Triangle__o* target, const MethodInfo* method);
// 0x181ea0c20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea12ef: nop 

void Map_MapFracture__AddCap
               (System_Collections_Generic_List_MapFracture_Vertex__o *loop,UnityEngine_Vector3_o *normal,
               int32_t submesh,System_Collections_Generic_List_MapFracture_Triangle__o *target,
               MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 *puVar2;
  UnityEngine_Vector2_o *pUVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int32_t capacity;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_Vector2_array *pUVar7;
  Map_MapFracture_Triangle_array *pMVar8;
  double dVar9;
  UnityEngine_Vector2_o item;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  UnityEngine_Vector2_Fields UVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  Map_MapFracture_Triangle_Fields *pMVar18;
  Map_MapFracture_Vertex_o *pMVar19;
  MethodInfo *pMVar20;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields SVar21;
  System_Collections_Generic_List_Vector2__o *_flat;
  Il2CppObject *pIVar22;
  longlong lVar23;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this;
  int iVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 local_1e0;
  float local_1d8;
  Map_MapFracture_Vertex_o local_1d0;
  Map_MapFracture_Vertex_o local_1a8;
  Map_MapFracture_Triangle_o local_178;
  Map_MapFracture_Vertex_o local_108 [5];
  
  if (Il2CppMethodInitialized_184345093 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector2_ctor_40efe18);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapFracture_Vertex_array);
    Il2CppMethodInitialized_184345093 = '\x01';
  }
  uVar10._0_4_ = (normal->fields).x;
  uVar10._4_4_ = (normal->fields).y;
  local_1e0 = uVar10;
  if (0.9 <= ABS((normal->fields).y)) {
    if (Il2CppMethodInitialized_1843445b8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_1843445b8 = '\x01';
    }
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar34 = (pUVar6->rightVector).fields.x;
    fVar26 = (pUVar6->rightVector).fields.y;
    fVar37 = (pUVar6->rightVector).fields.z;
  }
  else {
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar34 = (pUVar6->upVector).fields.x;
    fVar26 = (pUVar6->upVector).fields.y;
    fVar37 = (pUVar6->upVector).fields.z;
  }
  fVar35 = (normal->fields).z;
  fVar36 = fVar37 * local_1e0._4_4_ - fVar26 * fVar35;
  fVar37 = fVar34 * fVar35 - fVar37 * (float)(undefined4)uVar10;
  fVar34 = fVar26 * (float)(undefined4)uVar10 - fVar34 * local_1e0._4_4_;
  local_1e0 = CONCAT44(fVar37,fVar36);
  local_1d8 = fVar34;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar26 = (float)il2cpp_runtime_helper_180546a40(&local_1e0,0);
  if (fVar26 <= 1e-05) {
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar36 = (pUVar6->zeroVector).fields.x;
    fVar37 = (pUVar6->zeroVector).fields.y;
    fVar34 = (pUVar6->zeroVector).fields.z;
  }
  else {
    fVar36 = fVar36 / fVar26;
    fVar37 = fVar37 / fVar26;
    fVar34 = fVar34 / fVar26;
  }
  fVar26 = (normal->fields).z;
  fVar35 = (normal->fields).x;
  fVar38 = (normal->fields).y;
  if (loop != (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) {
    fVar30 = fVar34 * fVar38 - fVar37 * fVar26;
    capacity = (loop->fields)._size;
    fVar31 = fVar36 * fVar26 - fVar34 * fVar35;
    fVar26 = fVar37 * fVar35 - fVar36 * fVar38;
    _flat = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector2);
    System_Collections_Generic_List_Vector2____ctor
              ((System_Collections_Generic_List_T__o *)_flat,capacity,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_Vector2_ctor_40efe18);
    fVar38 = 0.0;
    fVar35 = 0.0;
    for (iVar24 = 0; iVar24 < (loop->fields)._size; iVar24 = iVar24 + 1) {
      System_Collections_Generic_List_MapFracture_Vertex___get_Item
                (&local_1d0,loop,iVar24,
                 (MethodInfo_965440 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
      System_Collections_Generic_List_MapFracture_Vertex___get_Item
                (&local_1a8,loop,(iVar24 + 1) % (loop->fields)._size,
                 (MethodInfo_965440 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
      fVar33 = local_1d0.fields.Position.fields.z;
      pMVar20 = MethodInfo_System_Collections_Generic_List_Vector2_Add;
      fVar32 = local_1d0.fields.Position.fields.x;
      fVar29 = local_1d0.fields.Position.fields.y;
      fVar27 = fVar37 * local_1d0.fields.Position.fields.y + fVar36 * local_1d0.fields.Position.fields.x +
               fVar34 * local_1d0.fields.Position.fields.z;
      fVar28 = fVar31 * local_1d0.fields.Position.fields.y + fVar30 * local_1d0.fields.Position.fields.x +
               fVar26 * local_1d0.fields.Position.fields.z;
      if (_flat == (System_Collections_Generic_List_Vector2__o *)0x0) goto label_181ea14f5;
      piVar1 = &(_flat->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar7 = (_flat->fields)._items;
      if (pUVar7 == (UnityEngine_Vector2_array *)0x0) goto label_181ea14f5;
      uVar25 = (_flat->fields)._size;
      if (uVar25 < (uint)pUVar7->max_length) {
        (_flat->fields)._size = uVar25 + 1;
        if ((uint)pUVar7->max_length <= uVar25) goto label_181ea14ef;
        pUVar7->m_Items[(int)uVar25].fields.x = fVar27;
        pUVar7->m_Items[(int)uVar25].fields.y = fVar28;
      }
      else {
        item.fields.y = fVar28;
        item.fields.x = fVar27;
        System_Collections_Generic_List_Vector2___AddWithResize
                  (_flat,item,(MethodInfo_99C3D0 *)pMVar20->klass->rgctx_data[0xe].method);
      }
      fVar28 = local_1d0.fields.UV.fields.y;
      fVar27 = local_1d0.fields.UV.fields.x;
      if (Il2CppMethodInitialized_18433dee7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433dee7 = '\x01';
      }
      fVar32 = fVar32 - local_1a8.fields.Position.fields.x;
      fVar29 = fVar29 - local_1a8.fields.Position.fields.y;
      fVar33 = fVar33 - local_1a8.fields.Position.fields.z;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar9 = (double)(fVar29 * fVar29 + fVar32 * fVar32 + fVar33 * fVar33);
      if (dVar9 < 0.0) {
        dVar9 = sqrt(dVar9);
      }
      else {
        dVar9 = SQRT(dVar9);
      }
      fVar38 = fVar38 + (float)dVar9;
      if (Il2CppMethodInitialized_18433de5e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433de5e = '\x01';
      }
      fVar27 = fVar27 - local_1a8.fields.UV.fields.x;
      fVar28 = fVar28 - local_1a8.fields.UV.fields.y;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar9 = (double)(fVar28 * fVar28 + fVar27 * fVar27);
      if (dVar9 < 0.0) {
        dVar9 = sqrt(dVar9);
      }
      else {
        dVar9 = SQRT(dVar9);
      }
      fVar35 = fVar35 + (float)dVar9;
    }
    if (fVar38 <= 0.0001) {
      fVar35 = 0.0;
    }
    else {
      fVar35 = (fVar35 / fVar38) * 0.15;
    }
    System_Collections_Generic_List_MapFracture_Vertex___get_Item
              (&local_1a8,loop,0,
               (MethodInfo_965440 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
    pIVar22 = SZArrayNew(TypeInfo_Map_MapFracture_Vertex_array,(loop->fields)._size);
    for (uVar25 = 0; (int)uVar25 < (loop->fields)._size; uVar25 = uVar25 + 1) {
      System_Collections_Generic_List_MapFracture_Vertex___get_Item
                (local_108,loop,uVar25,
                 (MethodInfo_965440 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
      fVar32 = local_108[0].fields.Position.fields.x - local_1a8.fields.Position.fields.x;
      fVar29 = local_108[0].fields.Position.fields.y - local_1a8.fields.Position.fields.y;
      fVar38 = local_108[0].fields.Position.fields.z - local_1a8.fields.Position.fields.z;
      System_Collections_Generic_List_MapFracture_Vertex___get_Item
                (local_108,loop,uVar25,
                 (MethodInfo_965440 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
      local_1d0.fields.Position.fields.z = local_108[0].fields.Position.fields.z;
      uVar4 = (normal->fields).x;
      uVar5 = (normal->fields).y;
      local_1d0.fields.Normal.fields.z = (normal->fields).z;
      local_1d0.fields.UV.fields.x =
           (fVar37 * fVar29 + fVar36 * fVar32 + fVar34 * fVar38) * fVar35 + local_1a8.fields.UV.fields.x;
      local_1d0.fields.UV.fields.y =
           (fVar31 * fVar29 + fVar30 * fVar32 + fVar26 * fVar38) * fVar35 + local_1a8.fields.UV.fields.y;
      local_1d0.fields.Normal.fields.x = (float)uVar4;
      local_1d0.fields.Normal.fields.y = (float)uVar5;
      if (pIVar22 == (Il2CppObject *)0x0) goto label_181ea14f5;
      if (*(uint *)&pIVar22[1].monitor <= uVar25) goto label_181ea14ef;
      uVar10 = CONCAT44(uVar4,local_108[0].fields.Position.fields.z);
      lVar23 = (longlong)(int)uVar25;
      puVar2 = (undefined8 *)((longlong)pIVar22 + lVar23 * 0x24 + 0x20);
      *puVar2 = CONCAT44(local_108[0].fields.Position.fields.y,local_108[0].fields.Position.fields.x);
      puVar2[1] = uVar10;
      puVar2 = (undefined8 *)((longlong)pIVar22 + lVar23 * 0x24 + 0x30);
      *puVar2 = CONCAT44(local_1d0.fields.Normal.fields.z,uVar5);
      puVar2[1] = CONCAT44(local_1d0.fields.UV.fields.y,local_1d0.fields.UV.fields.x);
      *(undefined4 *)((longlong)pIVar22 + lVar23 * 0x24 + 0x40) = 0x3f400000;
    }
    __this = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
             Map_MapFracture__EarClip(_flat,(MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
      iVar24 = 0;
      while( true ) {
        if ((__this->fields)._size <= iVar24) {
          return;
        }
        SVar21 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                 System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                           (__this,iVar24,
                            (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        if (pIVar22 == (Il2CppObject *)0x0) break;
        if ((uint)*(System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields *)&pIVar22[1].monitor <=
            (uint)SVar21) {
label_181ea14ef:
          ThrowIndexOutOfRangeException();
        }
        lVar23 = (longlong)(int)SVar21;
        puVar2 = (undefined8 *)((longlong)pIVar22 + lVar23 * 0x24 + 0x20);
        uVar10 = *puVar2;
        uVar11 = puVar2[1];
        fVar34 = *(float *)((longlong)pIVar22 + lVar23 * 0x24 + 0x40);
        puVar2 = (undefined8 *)((longlong)pIVar22 + lVar23 * 0x24 + 0x30);
        uVar12 = *puVar2;
        UVar13 = *(UnityEngine_Vector2_Fields *)(puVar2 + 1);
        SVar21 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                 System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                           (__this,iVar24 + 1,
                            (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        if ((uint)*(System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields *)&pIVar22[1].monitor <=
            (uint)SVar21) goto label_181ea14ef;
        lVar23 = (longlong)(int)SVar21;
        puVar2 = (undefined8 *)((longlong)pIVar22 + lVar23 * 0x24 + 0x20);
        uVar14 = *puVar2;
        uVar15 = puVar2[1];
        fVar26 = *(float *)((longlong)pIVar22 + lVar23 * 0x24 + 0x40);
        puVar2 = (undefined8 *)((longlong)pIVar22 + lVar23 * 0x24 + 0x30);
        uVar16 = *puVar2;
        uVar17 = puVar2[1];
        SVar21 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                 System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                           (__this,iVar24 + 2,
                            (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        pMVar20 = MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_Add;
        if ((uint)*(System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields *)&pIVar22[1].monitor <=
            (uint)SVar21) goto label_181ea14ef;
        lVar23 = (longlong)(int)SVar21;
        puVar2 = (undefined8 *)((longlong)pIVar22 + lVar23 * 0x24 + 0x20);
        local_178.fields.C.fields.Position.fields._0_8_ = *puVar2;
        local_178.fields.C.fields._8_8_ = puVar2[1];
        puVar2 = (undefined8 *)((longlong)pIVar22 + lVar23 * 0x24 + 0x30);
        local_178.fields.C.fields.Normal.fields._4_8_ = *puVar2;
        local_178.fields.C.fields.UV.fields = *(UnityEngine_Vector2_Fields *)(puVar2 + 1);
        local_178.fields.Submesh = submesh;
        local_178.fields.C.fields.Shade = *(float *)((longlong)pIVar22 + lVar23 * 0x24 + 0x40);
        local_178.fields.B.fields.Position.fields.x = (float)uVar14;
        local_178.fields.B.fields.Position.fields.y = (float)((ulonglong)uVar14 >> 0x20);
        local_178.fields.B.fields.Position.fields.z = (float)uVar15;
        local_178.fields.B.fields.Normal.fields.x = (float)((ulonglong)uVar15 >> 0x20);
        local_178.fields.B.fields.Normal.fields.y = (float)uVar16;
        local_178.fields.B.fields.Normal.fields.z = (float)((ulonglong)uVar16 >> 0x20);
        local_178.fields.B.fields.UV.fields.x = (float)uVar17;
        local_178.fields.B.fields.UV.fields.y = (float)((ulonglong)uVar17 >> 0x20);
        local_178.fields.A.fields.Shade = fVar34;
        local_178.fields.B.fields.Shade = fVar26;
        if (target == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) break;
        piVar1 = &(target->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar8 = (target->fields)._items;
        if (pMVar8 == (Map_MapFracture_Triangle_array *)0x0) break;
        uVar25 = (target->fields)._size;
        if (uVar25 < (uint)pMVar8->max_length) {
          (target->fields)._size = uVar25 + 1;
          if ((uint)pMVar8->max_length <= uVar25) goto label_181ea14ef;
          iVar24 = iVar24 + 3;
          *(undefined8 *)&pMVar8->m_Items[(int)uVar25].fields.A.fields.Position = uVar10;
          *(undefined8 *)((longlong)&pMVar8->m_Items[(int)uVar25].fields.A.fields.Position + 8) = uVar11;
          pMVar18 = &pMVar8->m_Items[(int)uVar25].fields;
          *(undefined8 *)((longlong)&(pMVar18->A).fields.Normal.fields + 4) = uVar12;
          (pMVar18->A).fields.UV.fields = UVar13;
          pMVar18 = &pMVar8->m_Items[(int)uVar25].fields;
          *(ulonglong *)&(pMVar18->A).fields.Shade =
               CONCAT44(local_178.fields.B.fields.Position.fields.x,fVar34);
          *(ulonglong *)((longlong)&(pMVar18->B).fields.Position.fields + 4) =
               CONCAT44(local_178.fields.B.fields.Position.fields.z,
                        local_178.fields.B.fields.Position.fields.y);
          pMVar18 = &pMVar8->m_Items[(int)uVar25].fields;
          pMVar19 = &pMVar18->B;
          (pMVar19->fields).Normal.fields.x = local_178.fields.B.fields.Normal.fields.x;
          (pMVar19->fields).Normal.fields.y = local_178.fields.B.fields.Normal.fields.y;
          *(ulonglong *)((longlong)&(pMVar18->B).fields.Normal.fields + 8) =
               CONCAT44(local_178.fields.B.fields.UV.fields.x,local_178.fields.B.fields.Normal.fields.z);
          pMVar18 = &pMVar8->m_Items[(int)uVar25].fields;
          *(ulonglong *)((longlong)&(pMVar18->B).fields.UV.fields + 4) =
               CONCAT44(fVar26,local_178.fields.B.fields.UV.fields.y);
          *(undefined8 *)&(pMVar18->C).fields.Position.fields =
               local_178.fields.C.fields.Position.fields._0_8_;
          pMVar18 = &pMVar8->m_Items[(int)uVar25].fields;
          *(undefined8 *)((longlong)&(pMVar18->C).fields.Position.fields + 8) =
               local_178.fields.C.fields._8_8_;
          *(undefined8 *)((longlong)&(pMVar18->C).fields.Normal.fields + 4) =
               local_178.fields.C.fields.Normal.fields._4_8_;
          pUVar3 = &pMVar8->m_Items[(int)uVar25].fields.C.fields.UV;
          pUVar3->fields = local_178.fields.C.fields.UV.fields;
          pUVar3[1] = (UnityEngine_Vector2_o)local_178.fields._104_8_;
        }
        else {
          local_178.fields.A.fields.Position.fields._0_8_ = uVar10;
          local_178.fields.A.fields._8_8_ = uVar11;
          local_178.fields.A.fields.Normal.fields._4_8_ = uVar12;
          local_178.fields.A.fields.UV.fields = UVar13;
          System_Collections_Generic_List_MapFracture_Triangle___AddWithResize
                    (target,&local_178,(MethodInfo_9E3880 *)pMVar20->klass->rgctx_data[0xe].method);
          iVar24 = iVar24 + 3;
        }
      }
    }
  }
label_181ea14f5:
  ThrowNullReferenceException();
}


// Map.MapFracture$$EarClip
// il2cpp: System_Collections_Generic_List_int__o* Map_MapFracture__EarClip (System_Collections_Generic_List_Vector2__o* _flat, const MethodInfo* method);
// 0x181ea51a0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea5349: nop dword ptr [rax]
// asm:   0x181ea535b: mov edx, ebx
// asm:   0x181ea535d: jmp 0x181ea5366
// asm:   0x181ea538d: nop dword ptr [rax]
// asm:   0x181ea539a: mov ebx, r13d
// asm:   0x181ea539d: nop dword ptr [rax]
// asm:   0x181ea540f: jmp 0x181ea559c

System_Collections_Generic_List_int__o *
Map_MapFracture__EarClip(System_Collections_Generic_List_Vector2__o *_flat,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t capacity;
  uint uVar2;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o a;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o b;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o c;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields SVar6;
  System_Collections_Generic_List_T__o *__this;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_List_T__o *__this_00;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fStackX_c;
  float fStackX_1c;
  
  if (Il2CppMethodInitialized_184345094 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    Il2CppMethodInitialized_184345094 = '\x01';
  }
  if (_flat != (System_Collections_Generic_List_Vector2__o *)0x0) {
    iVar10 = (_flat->fields)._size;
    __this = (System_Collections_Generic_List_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor
              (__this,(iVar10 + -2) * 3,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
    fVar12 = 0.0;
    iVar11 = 0;
    for (iVar10 = iVar11; iVar10 < (_flat->fields)._size; iVar10 = iVar10 + 1) {
      pIVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)_flat,iVar10,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
      pIVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)_flat,
                          (iVar10 + 1) % (_flat->fields)._size,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
      fStackX_c = (float)((ulonglong)pIVar8 >> 0x20);
      fStackX_1c = (float)((ulonglong)pIVar7 >> 0x20);
      fVar12 = fVar12 + (SUB84(pIVar7,0) * fStackX_c - SUB84(pIVar8,0) * fStackX_1c);
    }
    if (ABS(fVar12) < 0.0001) {
      return (System_Collections_Generic_List_int__o *)__this;
    }
    capacity = (_flat->fields)._size;
    __this_00 = (System_Collections_Generic_List_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor
              (__this_00,capacity,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
    for (iVar10 = iVar11; iVar10 < (_flat->fields)._size; iVar10 = iVar10 + 1) {
      iVar9 = iVar10;
      if (fVar12 <= 0.0) {
        iVar9 = ((_flat->fields)._size - iVar10) + -1;
      }
      if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto label_181ea55df;
      il2cpp_runtime_helper_180026690(__this_00,iVar9,MethodInfo_System_Collections_Generic_List_int_Add);
    }
    if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto label_181ea55df;
    while (iVar10 = iVar11, 3 < (__this_00->fields)._size) {
      while( true ) {
        a = System_Collections_Generic_List_int___get_Item
                      ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_00,
                       ((__this_00->fields)._size + -1 + iVar10) % (__this_00->fields)._size,
                       (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        b = System_Collections_Generic_List_int___get_Item
                      ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_00,iVar10,
                       (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        c = System_Collections_Generic_List_int___get_Item
                      ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_00,
                       (iVar10 + 1) % (__this_00->fields)._size,
                       (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        bVar5 = Map_MapFracture__IsEar
                          (_flat,(System_Collections_Generic_List_int__o *)__this_00,(int32_t)a.fields,
                           (int32_t)b.fields,(int32_t)c.fields,(MethodInfo *)0x0);
        if (bVar5) break;
        iVar10 = iVar10 + 1;
        if ((__this_00->fields)._size <= iVar10) {
          return (System_Collections_Generic_List_int__o *)__this;
        }
      }
      if (__this == (System_Collections_Generic_List_T__o *)0x0) goto label_181ea55df;
      il2cpp_runtime_helper_180026690(__this,a.fields,MethodInfo_System_Collections_Generic_List_int_Add);
      il2cpp_runtime_helper_180026690(__this,b.fields,MethodInfo_System_Collections_Generic_List_int_Add);
      il2cpp_runtime_helper_180026690(__this,c.fields,MethodInfo_System_Collections_Generic_List_int_Add);
      System_Collections_Generic_List_int___RemoveAt
                ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_00,iVar10,
                 (MethodInfo_922DE0 *)MethodInfo_System_Collections_Generic_List_int_RemoveAt);
    }
    SVar6 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
            System_Collections_Generic_List_int___get_Item
                      ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_00,0,
                       (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    pMVar4 = MethodInfo_System_Collections_Generic_List_int_Add;
    if (__this == (System_Collections_Generic_List_T__o *)0x0) goto label_181ea55df;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) goto label_181ea55df;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181ea55e5;
      *(System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields *)
       ((longlong)pSVar3->m_Items + (longlong)(int)uVar2 * 4) = SVar6;
    }
    else {
      System_Collections_Generic_List_int___AddWithResize
                ((System_Collections_Generic_List_uint__o *)__this,(uint32_t)SVar6,
                 (MethodInfo_91A500 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    SVar6 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
            System_Collections_Generic_List_int___get_Item
                      ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_00,1,
                       (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    pMVar4 = MethodInfo_System_Collections_Generic_List_int_Add;
    pSVar3 = (__this->fields)._items;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_Object_array *)0x0) goto label_181ea55df;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181ea55e5;
      *(System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields *)
       ((longlong)pSVar3->m_Items + (longlong)(int)uVar2 * 4) = SVar6;
    }
    else {
      System_Collections_Generic_List_int___AddWithResize
                ((System_Collections_Generic_List_uint__o *)__this,(uint32_t)SVar6,
                 (MethodInfo_91A500 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    SVar6 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
            System_Collections_Generic_List_int___get_Item
                      ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_00,2,
                       (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    pMVar4 = MethodInfo_System_Collections_Generic_List_int_Add;
    pSVar3 = (__this->fields)._items;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if ((uint)pSVar3->max_length <= uVar2) {
        System_Collections_Generic_List_int___AddWithResize
                  ((System_Collections_Generic_List_uint__o *)__this,(uint32_t)SVar6,
                   (MethodInfo_91A500 *)pMVar4->klass->rgctx_data[0xe].method);
        return (System_Collections_Generic_List_int__o *)__this;
      }
      (__this->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pSVar3->max_length) {
        *(System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields *)
         ((longlong)pSVar3->m_Items + (longlong)(int)uVar2 * 4) = SVar6;
        return (System_Collections_Generic_List_int__o *)__this;
      }
label_181ea55e5:
      ThrowIndexOutOfRangeException();
    }
  }
label_181ea55df:
  ThrowNullReferenceException();
}


// Map.MapFracture$$IsEar
// il2cpp: bool Map_MapFracture__IsEar (System_Collections_Generic_List_Vector2__o* _flat, System_Collections_Generic_List_int__o* remaining, int32_t a, int32_t b, int32_t c, const MethodInfo* method);
// 0x181ea6340
// eh: try 0x181ea64f0..0x181ea6592 -> pad 0x18333d4c0 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea65b4: mov rdx, qword ptr [rip + 0x21e1d2d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x181ea65bb: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181ea65c0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea65c5: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181ea65ca: test rcx, rcx
// asm:   0x181ea65cd: jne 0x181ea6609
// asm:   0x181ea6609: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333d4c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d4c5: push rbp
// asm:   0x18333d4c6: sub rsp, 0x30
// asm:   0x18333d4ca: mov rbp, rdx
// asm:   0x18333d4cd: mov rax, qword ptr [rbp + 0x48]
// asm:   0x18333d4d1: mov rcx, qword ptr [rax]
// asm:   0x18333d4d4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333d4d8: movabs rax, 0
// asm:   0x18333d4e2: add rsp, 0x30
// asm:   0x18333d4e6: pop rbp
// asm:   0x18333d4e7: ret 

bool Map_MapFracture__IsEar
               (System_Collections_Generic_List_Vector2__o *_flat,
               System_Collections_Generic_List_int__o *remaining,int32_t a,int32_t b,int32_t c,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Vector2_o point;
  UnityEngine_Vector2_o a_00;
  UnityEngine_Vector2_o b_00;
  UnityEngine_Vector2_o c_00;
  float fStackX_c;
  undefined1 local_c8 [8];
  System_Collections_Generic_List_Enumerator_T__o *pSStack_c0;
  Il2CppObject *local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a8 [5];
  
  if (Il2CppMethodInitialized_184345095 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
    Il2CppMethodInitialized_184345095 = '\x01';
  }
  local_a8[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a8[0].fields._index = 0;
  local_a8[0].fields._version = 0;
  local_a8[0].fields._current = (Il2CppObject *)0x0;
  if (_flat == (System_Collections_Generic_List_Vector2__o *)0x0) {
label_181ea6603:
    ThrowNullReferenceException();
  }
  pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                     ((System_Collections_Generic_List_object__o *)_flat,b,
                      (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
  fStackX_c = (float)((ulonglong)pIVar4 >> 0x20);
  fVar1 = fStackX_c;
  pSVar5 = (System_Collections_Generic_List_T__o *)
           System_Collections_Generic_List_object___System_Collections_IList_get_Item
                     ((System_Collections_Generic_List_object__o *)_flat,a,
                      (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
  local_c8 = (undefined1  [8])pSVar5;
  pIVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                     ((System_Collections_Generic_List_object__o *)_flat,c,
                      (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
  fStackX_c = (float)((ulonglong)pIVar6 >> 0x20);
  fVar2 = fStackX_c;
  pIVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                     ((System_Collections_Generic_List_object__o *)_flat,b,
                      (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
  fStackX_c = (float)((ulonglong)pIVar7 >> 0x20);
  if (9.999999e-09 <
      (fVar2 - fStackX_c) * (SUB84(pIVar4,0) - SUB84(pSVar5,0)) -
      (SUB84(pIVar6,0) - SUB84(pIVar7,0)) * (fVar1 - (float)local_c8._4_4_)) {
    if (remaining == (System_Collections_Generic_List_int__o *)0x0) goto label_181ea6603;
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_c8,
               (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)remaining,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_a8[0].fields._list = (System_Collections_Generic_List_T__o *)local_c8;
    local_a8[0].fields._8_8_ = pSStack_c0;
    local_a8[0].fields._current = local_b8;
    local_c8 = (undefined1  [8])0x0;
    pSStack_c0 = local_a8;
    do {
      do {
        bVar3 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                          (local_a8,(MethodInfo_1530180 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator_int___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8,
                     MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
          return true;
        }
      } while ((((int)local_a8[0].fields._current == a) || ((int)local_a8[0].fields._current == b)) ||
              ((int)local_a8[0].fields._current == c));
      point.fields = (UnityEngine_Vector2_Fields)
                     System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)_flat,
                                (int)local_a8[0].fields._current,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
      a_00.fields = (UnityEngine_Vector2_Fields)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)_flat,a,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
      b_00.fields = (UnityEngine_Vector2_Fields)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)_flat,b,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
      c_00.fields = (UnityEngine_Vector2_Fields)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)_flat,c,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
      bVar3 = Map_MapFracture__InTriangle(point,a_00,b_00,c_00,(MethodInfo *)0x0);
    } while (!bVar3);
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8,
               MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
  }
  return false;
}


// Map.MapFracture$$InTriangle
// il2cpp: bool Map_MapFracture__InTriangle (UnityEngine_Vector2_o point, UnityEngine_Vector2_o a, UnityEngine_Vector2_o b, UnityEngine_Vector2_o c, const MethodInfo* method);
// 0x181ea6230

bool Map_MapFracture__InTriangle
               (UnityEngine_Vector2_o point,UnityEngine_Vector2_o a,UnityEngine_Vector2_o b,
               UnityEngine_Vector2_o c,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  
  fVar2 = point.fields.x;
  uStack_54 = a.fields.y;
  fVar3 = a.fields.x;
  fVar5 = b.fields.x;
  uStack_64 = b.fields.y;
  uStack_4c = point.fields.y;
  if (((uStack_4c - uStack_54) * (fVar5 - fVar3) - (fVar2 - fVar3) * (uStack_64 - uStack_54) < 0.0) ||
     (uStack_5c = c.fields.y, fVar4 = c.fields.x,
     (uStack_4c - uStack_64) * (fVar4 - fVar5) - (fVar2 - fVar5) * (uStack_5c - uStack_64) < 0.0)) {
    bVar1 = false;
  }
  else {
    bVar1 = 0.0 <= (uStack_4c - uStack_5c) * (fVar3 - fVar4) - (fVar2 - fVar4) * (uStack_54 - uStack_5c);
  }
  return bVar1;
}


// Map.MapFracture$$Cross
// il2cpp: float Map_MapFracture__Cross (UnityEngine_Vector2_o a, UnityEngine_Vector2_o b, const MethodInfo* method);
// 0x181ea4f00

float Map_MapFracture__Cross(UnityEngine_Vector2_o a,UnityEngine_Vector2_o b,MethodInfo *method)

{
  undefined4 uStackX_24;
  
  uStackX_24 = a.fields.y;
  return b.fields.y * a.fields.x - b.fields.x * uStackX_24;
}


// Map.MapFracture$$Weld
// il2cpp: int32_t Map_MapFracture__Weld (System_Collections_Generic_Dictionary_Vector3Int__int__o* points, System_Collections_Generic_List_MapFracture_Vertex__o* vertices, Map_MapFracture_Vertex_o vertex, const MethodInfo* method);
// 0x181ea7d20

int32_t Map_MapFracture__Weld
                  (System_Collections_Generic_Dictionary_Vector3Int__int__o *points,
                  System_Collections_Generic_List_MapFracture_Vertex__o *vertices,
                  Map_MapFracture_Vertex_o *vertex,MethodInfo *method)

{
  int32_t *piVar1;
  Map_MapFracture_Vertex_o *pMVar2;
  uint uVar3;
  float fVar4;
  Map_MapFracture_Vertex_array *pMVar5;
  undefined8 uVar6;
  UnityEngine_Vector2_Fields UVar7;
  Map_MapFracture_Vertex_Fields *pMVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  MethodInfo *pMVar12;
  bool bVar13;
  int32_t iVar14;
  int32_t iVar15;
  int32_t iVar16;
  int32_t local_res8 [8];
  UnityEngine_Vector3Int_o local_78;
  Map_MapFracture_Vertex_o local_68;
  
  if (Il2CppMethodInitialized_184345096 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Count);
    Il2CppMethodInitialized_184345096 = '\x01';
  }
  local_res8[0] = 0;
  iVar14 = il2cpp_runtime_helper_181290af0((vertex->fields).Position.fields.x / 0.01,0);
  iVar15 = il2cpp_runtime_helper_181290af0((vertex->fields).Position.fields.y / 0.01,0);
  iVar16 = il2cpp_runtime_helper_181290af0((vertex->fields).Position.fields.z / 0.01,0);
  if (points != (System_Collections_Generic_Dictionary_Vector3Int__int__o *)0x0) {
    local_78.fields.m_X = iVar14;
    local_78.fields.m_Y = iVar15;
    local_78.fields.m_Z = iVar16;
    bVar13 = System_Collections_Generic_Dictionary_Vector3Int__int___TryGetValue
                       (points,&local_78,local_res8,
                        (MethodInfo_14CA790 *)
                        MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_TryGetValue);
    if (bVar13) {
      return local_res8[0];
    }
    if (vertices != (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) {
      local_res8[0] = (vertices->fields)._size;
      local_78.fields.m_X = iVar14;
      local_78.fields.m_Y = iVar15;
      local_78.fields.m_Z = iVar16;
      System_Collections_Generic_Dictionary_Vector3Int__int___Add
                (points,&local_78,local_res8[0],
                 (MethodInfo_14BA290 *)MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_Add);
      pMVar12 = MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add;
      piVar1 = &(vertices->fields)._version;
      *piVar1 = *piVar1 + 1;
      pMVar5 = (vertices->fields)._items;
      if (pMVar5 != (Map_MapFracture_Vertex_array *)0x0) {
        uVar3 = (vertices->fields)._size;
        if ((uint)pMVar5->max_length <= uVar3) {
          local_68.fields.Shade = (vertex->fields).Shade;
          local_68.fields.Position.fields.x = (vertex->fields).Position.fields.x;
          local_68.fields.Position.fields.y = (vertex->fields).Position.fields.y;
          local_68.fields._8_8_ = *(undefined8 *)&(vertex->fields).Position.fields.z;
          local_68.fields.Normal.fields.y = (vertex->fields).Normal.fields.y;
          local_68.fields.Normal.fields.z = (vertex->fields).Normal.fields.z;
          local_68.fields.UV.fields = (vertex->fields).UV.fields;
          System_Collections_Generic_List_MapFracture_Vertex___AddWithResize
                    (vertices,&local_68,(MethodInfo_952080 *)pMVar12->klass->rgctx_data[0xe].method);
          return local_res8[0];
        }
        (vertices->fields)._size = uVar3 + 1;
        if (uVar3 < (uint)pMVar5->max_length) {
          fVar9 = (vertex->fields).Position.fields.y;
          uVar6 = *(undefined8 *)&(vertex->fields).Position.fields.z;
          fVar4 = (vertex->fields).Shade;
          fVar10 = (vertex->fields).Normal.fields.y;
          fVar11 = (vertex->fields).Normal.fields.z;
          UVar7 = (vertex->fields).UV.fields;
          pMVar2 = pMVar5->m_Items + (int)uVar3;
          (pMVar2->fields).Position.fields.x = (vertex->fields).Position.fields.x;
          (pMVar2->fields).Position.fields.y = fVar9;
          *(undefined8 *)&(pMVar2->fields).Position.fields.z = uVar6;
          pMVar8 = &pMVar5->m_Items[(int)uVar3].fields;
          (pMVar8->Normal).fields.y = fVar10;
          (pMVar8->Normal).fields.z = fVar11;
          (pMVar8->UV).fields = UVar7;
          pMVar5->m_Items[(int)uVar3].fields.Shade = fVar4;
          return local_res8[0];
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$GetBounds
// il2cpp: UnityEngine_Bounds_o Map_MapFracture__GetBounds (System_Collections_Generic_List_MapFracture_Triangle__o* triangles, const MethodInfo* method);
// 0x181ea5940
// eh: try 0x181ea5b60..0x181ea5da8 -> pad 0x183316e50 catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea5b5e: nop 
// asm:   0x181ea5db9: mov rdx, qword ptr [rip + 0x21fefe0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x181ea5dc0: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181ea5dc5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea5dca: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181ea5dcf: test rcx, rcx
// asm:   0x181ea5dd2: jne 0x181ea5e26
// asm:   0x181ea5dd4: mov rdi, qword ptr [rsp + 0x1e0]
// asm:   0x181ea5e26: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183316e50: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183316e55: push rbp
// asm:   0x183316e56: sub rsp, 0x20
// asm:   0x183316e5a: mov rbp, rdx
// asm:   0x183316e5d: mov rax, qword ptr [rbp + 0x130]
// asm:   0x183316e64: mov rcx, qword ptr [rax]
// asm:   0x183316e67: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183316e6b: movabs rax, 0
// asm:   0x183316e75: add rsp, 0x20
// asm:   0x183316e79: pop rbp
// asm:   0x183316e7a: ret 

UnityEngine_Bounds_o *
Map_MapFracture__GetBounds
          (UnityEngine_Bounds_o *__return_storage_ptr__,
          System_Collections_Generic_List_MapFracture_Triangle__o *triangles,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  UnityEngine_Vector2_Fields UStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [12];
  float fStack_16c;
  undefined8 local_168;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  UnityEngine_Vector2_Fields local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [24];
  UnityEngine_Vector2_Fields UStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  UnityEngine_Vector3_Fields local_f8 [2];
  UnityEngine_Vector3_Fields aUStack_e0 [2];
  UnityEngine_Vector2_Fields local_c8;
  float fStack_c0;
  int32_t iStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  if (Il2CppMethodInitialized_184345097 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Item);
    Il2CppMethodInitialized_184345097 = '\x01';
  }
  (__return_storage_ptr__->fields).m_Center.fields.x = 0.0;
  (__return_storage_ptr__->fields).m_Center.fields.y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Center.fields.z = 0;
  (__return_storage_ptr__->fields).m_Extents.fields.y = 0.0;
  (__return_storage_ptr__->fields).m_Extents.fields.z = 0.0;
  local_1a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_1a8._8_8_ = 0;
  local_198 = (Il2CppObject *)0x0;
  UStack_190.x = 0.0;
  UStack_190.y = 0.0;
  local_188 = 0;
  uStack_180 = 0;
  local_178._0_8_ = 0;
  stack0xfffffffffffffe90 = 0;
  local_168 = 0;
  auStack_160._0_8_ = 0;
  auStack_160._8_8_ = 0;
  uStack_150 = 0;
  local_148.x = 0.0;
  local_148.y = 0.0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  if (triangles != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    System_Collections_Generic_List_MapFracture_Triangle___get_Item
              ((Map_MapFracture_Triangle_o *)local_128,triangles,0,
               (MethodInfo_9721B0 *)MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Item);
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar6 = (pUVar1->zeroVector).fields.x;
    fVar8 = (pUVar1->zeroVector).fields.y;
    fVar10 = (pUVar1->zeroVector).fields.z;
    (__return_storage_ptr__->fields).m_Center.fields.x = (float)local_128._0_4_;
    (__return_storage_ptr__->fields).m_Center.fields.y = (float)local_128._4_4_;
    (__return_storage_ptr__->fields).m_Center.fields.z = (float)local_128._8_4_;
    (__return_storage_ptr__->fields).m_Extents.fields.x = fVar6 * 0.5;
    (__return_storage_ptr__->fields).m_Extents.fields.y = fVar8 * 0.5;
    (__return_storage_ptr__->fields).m_Extents.fields.z = fVar10 * 0.5;
    System_Collections_Generic_List_MapFracture_Triangle___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_128,triangles,
               (MethodInfo_969260 *)
               MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    local_198 = (Il2CppObject *)local_128._16_8_;
    UStack_190 = UStack_110;
    local_188._0_4_ = local_108;
    local_188._4_4_ = fStack_104;
    uStack_180._0_4_ = fStack_100;
    uStack_180._4_4_ = fStack_fc;
    local_178._0_4_ = local_f8[0].x;
    local_178._4_4_ = local_f8[0].y;
    local_178._8_4_ = local_f8[0].z;
    fStack_16c = local_f8[1].x;
    local_168._0_4_ = local_f8[1].y;
    local_168._4_4_ = local_f8[1].z;
    auStack_160._0_4_ = aUStack_e0[0].x;
    auStack_160._4_4_ = aUStack_e0[0].y;
    auStack_160._8_4_ = aUStack_e0[0].z;
    auStack_160._12_4_ = aUStack_e0[1].x;
    uStack_150._0_4_ = aUStack_e0[1].y;
    uStack_150._4_4_ = aUStack_e0[1].z;
    local_148 = local_c8;
    uStack_140._0_4_ = fStack_c0;
    uStack_140._4_4_ = iStack_bc;
    local_138 = local_b8;
    uStack_130 = uStack_b0;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_1a8,
                         (MethodInfo_1558F50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext);
      if (!bVar2) break;
      fVar6 = (__return_storage_ptr__->fields).m_Center.fields.x -
              (__return_storage_ptr__->fields).m_Extents.fields.x;
      fVar8 = (__return_storage_ptr__->fields).m_Center.fields.y -
              (__return_storage_ptr__->fields).m_Extents.fields.y;
      fVar10 = (__return_storage_ptr__->fields).m_Center.fields.z -
               (__return_storage_ptr__->fields).m_Extents.fields.z;
      if ((float)local_198 <= fVar6) {
        fVar6 = (float)local_198;
      }
      if (local_198._4_4_ <= fVar8) {
        fVar8 = local_198._4_4_;
      }
      if (UStack_190.x <= fVar10) {
        fVar10 = UStack_190.x;
      }
      fVar7 = (__return_storage_ptr__->fields).m_Extents.fields.x +
              (__return_storage_ptr__->fields).m_Center.fields.x;
      fVar4 = (__return_storage_ptr__->fields).m_Extents.fields.y +
              (__return_storage_ptr__->fields).m_Center.fields.y;
      fVar3 = (__return_storage_ptr__->fields).m_Extents.fields.z +
              (__return_storage_ptr__->fields).m_Center.fields.z;
      if (fVar7 <= (float)local_198) {
        fVar7 = (float)local_198;
      }
      if (fVar4 <= local_198._4_4_) {
        fVar4 = local_198._4_4_;
      }
      if (fVar3 <= UStack_190.x) {
        fVar3 = UStack_190.x;
      }
      fVar7 = (fVar7 - fVar6) * 0.5;
      (__return_storage_ptr__->fields).m_Extents.fields.x = fVar7;
      fVar4 = (fVar4 - fVar8) * 0.5;
      fVar3 = (fVar3 - fVar10) * 0.5;
      fVar6 = fVar6 + fVar7;
      (__return_storage_ptr__->fields).m_Center.fields.x = fVar6;
      fVar6 = fVar6 - (__return_storage_ptr__->fields).m_Extents.fields.x;
      fVar7 = (fVar4 + fVar8) - fVar4;
      fVar9 = (fVar3 + fVar10) - fVar3;
      if ((float)local_178._4_4_ <= fVar6) {
        fVar6 = (float)local_178._4_4_;
      }
      if ((float)local_178._8_4_ <= fVar7) {
        fVar7 = (float)local_178._8_4_;
      }
      if (fStack_16c <= fVar9) {
        fVar9 = fStack_16c;
      }
      fVar5 = (__return_storage_ptr__->fields).m_Extents.fields.x +
              (__return_storage_ptr__->fields).m_Center.fields.x;
      fVar4 = fVar4 + fVar4 + fVar8;
      fVar3 = fVar3 + fVar3 + fVar10;
      if (fVar5 <= (float)local_178._4_4_) {
        fVar5 = (float)local_178._4_4_;
      }
      if (fVar4 <= (float)local_178._8_4_) {
        fVar4 = (float)local_178._8_4_;
      }
      if (fVar3 <= fStack_16c) {
        fVar3 = fStack_16c;
      }
      fVar5 = (fVar5 - fVar6) * 0.5;
      (__return_storage_ptr__->fields).m_Extents.fields.x = fVar5;
      fVar10 = (fVar4 - fVar7) * 0.5;
      fVar8 = (fVar3 - fVar9) * 0.5;
      (__return_storage_ptr__->fields).m_Center.fields.x = fVar6 + fVar5;
      fVar6 = (fVar6 + fVar5) - (__return_storage_ptr__->fields).m_Extents.fields.x;
      fVar3 = (fVar10 + fVar7) - fVar10;
      fVar4 = (fVar8 + fVar9) - fVar8;
      if ((float)uStack_150 <= fVar6) {
        fVar6 = (float)uStack_150;
      }
      if (uStack_150._4_4_ <= fVar3) {
        fVar3 = uStack_150._4_4_;
      }
      if (local_148.x <= fVar4) {
        fVar4 = local_148.x;
      }
      fVar5 = fVar5 + (__return_storage_ptr__->fields).m_Center.fields.x;
      fVar10 = fVar10 + fVar10 + fVar7;
      fVar8 = fVar8 + fVar8 + fVar9;
      if (fVar5 <= (float)uStack_150) {
        fVar5 = (float)uStack_150;
      }
      if (fVar10 <= uStack_150._4_4_) {
        fVar10 = uStack_150._4_4_;
      }
      if (fVar8 <= local_148.x) {
        fVar8 = local_148.x;
      }
      (__return_storage_ptr__->fields).m_Extents.fields.x = (fVar5 - fVar6) * 0.5;
      fVar10 = (fVar10 - fVar3) * 0.5;
      (__return_storage_ptr__->fields).m_Extents.fields.y = fVar10;
      fVar8 = (fVar8 - fVar4) * 0.5;
      (__return_storage_ptr__->fields).m_Extents.fields.z = fVar8;
      (__return_storage_ptr__->fields).m_Center.fields.x =
           fVar6 + (__return_storage_ptr__->fields).m_Extents.fields.x;
      (__return_storage_ptr__->fields).m_Center.fields.y = fVar10 + fVar3;
      (__return_storage_ptr__->fields).m_Center.fields.z = fVar8 + fVar4;
    }
    System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_1a8,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$Next
// il2cpp: float Map_MapFracture__Next (System_Random_o* random, const MethodInfo* method);
// 0x181ea6610

float Map_MapFracture__Next(System_Random_o *random,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  
  if (random != (System_Random_o *)0x0) {
    pUVar1 = (*(random->klass->vtable)._8_NextDouble.methodPtr)
                       (random,(random->klass->vtable)._8_NextDouble.method);
    return (float)(double)pUVar1 - 0.5;
  }
  ThrowNullReferenceException();
}


