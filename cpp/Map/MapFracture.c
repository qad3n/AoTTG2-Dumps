// Type: Map.MapFracture
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapFracture.cs
// Prior real C# source: none
// --------------------------------

// Map.MapFracture.Vertex$$.ctor
// il2cpp: void Map_MapFracture_Vertex___ctor (Map_MapFracture_Vertex_o __this, UnityEngine_Vector3_o position, UnityEngine_Vector3_o normal, UnityEngine_Vector2_o uv, float shade, const MethodInfo* method);
// 0x598b720

void Map_MapFracture_Vertex___ctor
               (Map_MapFracture_Vertex_o *__this,UnityEngine_Vector3_o position,UnityEngine_Vector3_o normal,
               UnityEngine_Vector2_o uv,float shade,MethodInfo *method)

{
  (__this->fields).Position.fields.x = position.fields.x;
  (__this->fields).Position.fields.y = position.fields.y;
  (__this->fields).Position.fields.z = position.fields.z;
  (__this->fields).Normal.fields.x = normal.fields.x;
  (__this->fields).Normal.fields.y = normal.fields.y;
  (__this->fields).Normal.fields.z = normal.fields.z;
  (__this->fields).UV.fields = uv.fields;
  (__this->fields).Shade = shade;
  return;
}


// Map.MapFracture.Vertex$$Lerp
// il2cpp: Map_MapFracture_Vertex_o Map_MapFracture_Vertex__Lerp (Map_MapFracture_Vertex_o a, Map_MapFracture_Vertex_o b, float t, const MethodInfo* method);
// 0x598d0a0

Map_MapFracture_Vertex_o *
Map_MapFracture_Vertex__Lerp
          (Map_MapFracture_Vertex_o *__return_storage_ptr__,Map_MapFracture_Vertex_o a,
          Map_MapFracture_Vertex_o b,float t,MethodInfo *method)

{
  undefined1 auVar1 [16];
  UnityEngine_Vector3_StaticFields *pUVar2;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Db;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector2_Fields UVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_Fields local_70;
  float fStack_64;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [8];
  UnityEngine_Vector3_Fields UStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  local_48._0_4_ = a.fields.Position.fields.x;
  local_48._4_4_ = a.fields.Position.fields.y;
  UStack_40.x = 0.0;
  UStack_40.y = 0.0;
  local_18._0_4_ = b.fields.Position.fields.x;
  local_18._4_4_ = b.fields.Position.fields.y;
  local_18._8_4_ = 0.0;
  local_18._12_4_ = 0.0;
  UStack_40.z = 1.0;
  if (t <= 1.0) {
    UStack_40.z = t;
  }
  UStack_40.z = (float)(-(uint)(0.0 <= t) & (uint)UStack_40.z);
  fVar4 = b.fields.Normal.fields.x - a.fields.Normal.fields.x;
  fVar6 = b.fields.Normal.fields.y - a.fields.Normal.fields.y;
  local_28 = ZEXT416((uint)UStack_40.z);
  fStack_34 = UStack_40.z;
  fStack_30 = UStack_40.z;
  fStack_2c = UStack_40.z;
  fVar8 = 0.0;
  fVar10 = 0.0;
  fVar14 = UStack_40.z;
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    _local_58 = ZEXT416((uint)UStack_40.z);
    fStack_64 = fVar6;
    local_70.z = fVar4;
    uStack_60._0_4_ = 0.0;
    uStack_60._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    fVar4 = local_70.z;
    fVar6 = fStack_64;
    fVar8 = (float)uStack_60;
    fVar10 = uStack_60._4_4_;
    fVar14 = (float)local_58._0_4_;
    fVar15 = (float)local_58._4_4_;
    fVar16 = fStack_50;
    fVar17 = fStack_4c;
  }
  fVar14 = fVar14 * (b.fields.Normal.fields.z - a.fields.Normal.fields.z);
  local_70.x = 0.0;
  local_70.y = 0.0;
  fVar5 = fVar4 * UStack_40.z;
  fVar7 = fVar6 * fStack_34;
  fVar9 = fVar8 * fStack_30;
  fVar11 = fVar10 * fStack_2c;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_58._4_4_ = fVar15;
    local_58._0_4_ = fVar14;
    fStack_50 = fVar16;
    fStack_4c = fVar17;
    fStack_64 = fVar6 * fStack_34;
    local_70.z = fVar4 * UStack_40.z;
    uStack_60._4_4_ = fVar10 * fStack_2c;
    uStack_60._0_4_ = fVar8 * fStack_30;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar5 = local_70.z;
    fVar7 = fStack_64;
    fVar9 = (float)uStack_60;
    fVar11 = uStack_60._4_4_;
    fVar14 = (float)local_58._0_4_;
  }
  auVar13._0_4_ = a.fields.Normal.fields.x + fVar5;
  auVar13._4_4_ = a.fields.Normal.fields.y + fVar7;
  auVar13._8_4_ = fVar9 + 0.0;
  auVar13._12_4_ = fVar11 + 0.0;
  fVar14 = a.fields.Normal.fields.z + fVar14;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar3 = 0;
  fVar4 = fVar14 * fVar14 + auVar13._4_4_ * auVar13._4_4_ + auVar13._0_4_ * auVar13._0_4_;
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
    uVar3 = extraout_XMM0_Db;
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  if (fVar4 <= 1e-05) {
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar14 = (pUVar2->zeroVector).fields.z;
  }
  else {
    fVar14 = fVar14 / fVar4;
    auVar1._4_4_ = fVar4;
    auVar1._0_4_ = fVar4;
    auVar1._8_4_ = uVar3;
    auVar1._12_4_ = uVar3;
    auVar13 = divps(auVar13,auVar1);
    local_70.x = auVar13._0_4_;
    local_70.y = auVar13._4_4_;
    pUVar2 = (UnityEngine_Vector3_StaticFields *)&local_70;
  }
  fVar4 = (pUVar2->zeroVector).fields.x;
  fVar6 = (pUVar2->zeroVector).fields.y;
  UVar12.x = (b.fields.UV.fields.x - a.fields.UV.fields.x) * UStack_40.z + a.fields.UV.fields.x;
  UVar12.y = (b.fields.UV.fields.y - a.fields.UV.fields.y) * fStack_34 + a.fields.UV.fields.y;
  (__return_storage_ptr__->fields).Position.fields.x =
       ((float)local_18._0_4_ - (float)local_48._0_4_) * UStack_40.z + (float)local_48._0_4_;
  (__return_storage_ptr__->fields).Position.fields.y =
       ((float)local_18._4_4_ - (float)local_48._4_4_) * fStack_34 + (float)local_48._4_4_;
  (__return_storage_ptr__->fields).Position.fields.z =
       (b.fields.Position.fields.z - a.fields.Position.fields.z) * (float)local_28._0_4_ +
       a.fields.Position.fields.z;
  (__return_storage_ptr__->fields).Normal.fields.x = fVar4;
  (__return_storage_ptr__->fields).Normal.fields.y = fVar6;
  (__return_storage_ptr__->fields).Normal.fields.z = fVar14;
  (__return_storage_ptr__->fields).UV.fields = UVar12;
  (__return_storage_ptr__->fields).Shade =
       (b.fields.Shade - a.fields.Shade) * (float)local_28._0_4_ + a.fields.Shade;
  return __return_storage_ptr__;
}


// Map.MapFracture.Triangle$$.ctor
// il2cpp: void Map_MapFracture_Triangle___ctor (Map_MapFracture_Triangle_o __this, Map_MapFracture_Vertex_o a, Map_MapFracture_Vertex_o b, Map_MapFracture_Vertex_o c, int32_t submesh, const MethodInfo* method);
// 0x5988f60

void Map_MapFracture_Triangle___ctor
               (Map_MapFracture_Triangle_o *__this,Map_MapFracture_Vertex_o a,Map_MapFracture_Vertex_o b,
               Map_MapFracture_Vertex_o c,int32_t submesh,MethodInfo *method)

{
  Map_MapFracture_Vertex_o *pMVar1;
  
  (__this->fields).A.fields.Shade = a.fields.Shade;
  pMVar1 = &(__this->fields).A;
  (pMVar1->fields).Normal.fields.y = a.fields.Normal.fields.y;
  (pMVar1->fields).Normal.fields.z = a.fields.Normal.fields.z;
  (__this->fields).A.fields.UV.fields = a.fields.UV.fields;
  pMVar1 = &(__this->fields).A;
  (pMVar1->fields).Position.fields.x = a.fields.Position.fields.x;
  (pMVar1->fields).Position.fields.y = a.fields.Position.fields.y;
  *(undefined8 *)&(__this->fields).A.fields.Position.fields.z = a.fields._8_8_;
  pMVar1 = &(__this->fields).B;
  (pMVar1->fields).Position.fields.x = b.fields.Position.fields.x;
  (pMVar1->fields).Position.fields.y = b.fields.Position.fields.y;
  *(undefined8 *)&(__this->fields).B.fields.Position.fields.z = b.fields._8_8_;
  pMVar1 = &(__this->fields).B;
  (pMVar1->fields).Normal.fields.y = b.fields.Normal.fields.y;
  (pMVar1->fields).Normal.fields.z = b.fields.Normal.fields.z;
  (__this->fields).B.fields.UV.fields = b.fields.UV.fields;
  (__this->fields).B.fields.Shade = b.fields.Shade;
  pMVar1 = &(__this->fields).C;
  (pMVar1->fields).Normal.fields.y = c.fields.Normal.fields.y;
  (pMVar1->fields).Normal.fields.z = c.fields.Normal.fields.z;
  (__this->fields).C.fields.UV.fields = c.fields.UV.fields;
  pMVar1 = &(__this->fields).C;
  (pMVar1->fields).Position.fields.x = c.fields.Position.fields.x;
  (pMVar1->fields).Position.fields.y = c.fields.Position.fields.y;
  *(undefined8 *)&(__this->fields).C.fields.Position.fields.z = c.fields._8_8_;
  (__this->fields).C.fields.Shade = c.fields.Shade;
  (__this->fields).Submesh = submesh;
  return;
}


// Map.MapFracture.Segment$$.ctor
// il2cpp: void Map_MapFracture_Segment___ctor (Map_MapFracture_Segment_o __this, Map_MapFracture_Vertex_o a, Map_MapFracture_Vertex_o b, int32_t submesh, const MethodInfo* method);
// 0x598d340

void Map_MapFracture_Segment___ctor
               (Map_MapFracture_Segment_o *__this,Map_MapFracture_Vertex_o a,Map_MapFracture_Vertex_o b,
               int32_t submesh,MethodInfo *method)

{
  Map_MapFracture_Vertex_o *pMVar1;
  
  (__this->fields).A.fields.Shade = a.fields.Shade;
  pMVar1 = &(__this->fields).A;
  (pMVar1->fields).Normal.fields.y = a.fields.Normal.fields.y;
  (pMVar1->fields).Normal.fields.z = a.fields.Normal.fields.z;
  (__this->fields).A.fields.UV.fields = a.fields.UV.fields;
  pMVar1 = &(__this->fields).A;
  (pMVar1->fields).Position.fields.x = a.fields.Position.fields.x;
  (pMVar1->fields).Position.fields.y = a.fields.Position.fields.y;
  *(undefined8 *)&(__this->fields).A.fields.Position.fields.z = a.fields._8_8_;
  pMVar1 = &(__this->fields).B;
  (pMVar1->fields).Position.fields.x = b.fields.Position.fields.x;
  (pMVar1->fields).Position.fields.y = b.fields.Position.fields.y;
  *(undefined8 *)&(__this->fields).B.fields.Position.fields.z = b.fields._8_8_;
  pMVar1 = &(__this->fields).B;
  (pMVar1->fields).Normal.fields.y = b.fields.Normal.fields.y;
  (pMVar1->fields).Normal.fields.z = b.fields.Normal.fields.z;
  (__this->fields).B.fields.UV.fields = b.fields.UV.fields;
  (__this->fields).B.fields.Shade = b.fields.Shade;
  (__this->fields).Submesh = submesh;
  return;
}


// Map.MapFracture.Opening$$.ctor
// il2cpp: void Map_MapFracture_Opening___ctor (Map_MapFracture_Opening_o __this, UnityEngine_Vector3_o normal, int32_t submesh, const MethodInfo* method);
// 0x598d880

void Map_MapFracture_Opening___ctor
               (Map_MapFracture_Opening_o *__this,UnityEngine_Vector3_o normal,int32_t submesh,
               MethodInfo *method)

{
  (__this->fields).Normal.fields.x = normal.fields.x;
  (__this->fields).Normal.fields.y = normal.fields.y;
  (__this->fields).Normal.fields.z = normal.fields.z;
  (__this->fields).Submesh = submesh;
  return;
}


// Map.MapFracture.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Map_MapFracture___c__DisplayClass16_0___ctor (Map_MapFracture___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5988fb0

void Map_MapFracture___c__DisplayClass16_0___ctor
               (Map_MapFracture___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapFracture.<>c__DisplayClass16_1$$.ctor
// il2cpp: void Map_MapFracture___c__DisplayClass16_1___ctor (Map_MapFracture___c__DisplayClass16_1_o* __this, const MethodInfo* method);
// 0x598b070

void Map_MapFracture___c__DisplayClass16_1___ctor
               (Map_MapFracture___c__DisplayClass16_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapFracture.<>c__DisplayClass16_1$$<Shatter>b__0
// il2cpp: int32_t Map_MapFracture___c__DisplayClass16_1___Shatter_b__0 (Map_MapFracture___c__DisplayClass16_1_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x598f380

int32_t Map_MapFracture___c__DisplayClass16_1___Shatter_b__0
                  (Map_MapFracture___c__DisplayClass16_1_o *__this,int32_t a,int32_t b,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Map_MapFracture___c__DisplayClass16_0_o *pMVar5;
  System_Collections_Generic_List_Vector3__o *pSVar6;
  int32_t iVar7;
  undefined8 in_RAX;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_07545a29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    Il2CppMethodInitialized_07545a29 = '\x01';
  }
  pMVar5 = (__this->fields).CS___8__locals1;
  if ((pMVar5 != (Map_MapFracture___c__DisplayClass16_0_o *)0x0) &&
     (pSVar6 = (pMVar5->fields).seeds, pSVar6 != (System_Collections_Generic_List_Vector3__o *)0x0)) {
    UVar11 = System_Collections_Generic_List_Vector3___get_Item
                       (pSVar6,a,(MethodInfo_39FF5D0 *)
                                 MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    uVar1 = (__this->fields).own.fields.x;
    uVar3 = (__this->fields).own.fields.y;
    fVar8 = UVar11.fields.x - (float)uVar1;
    fVar9 = UVar11.fields.y - (float)uVar3;
    fVar10 = UVar11.fields.z - (__this->fields).own.fields.z;
    uStack_28 = CONCAT44(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8,(undefined4)uStack_28);
    pMVar5 = (__this->fields).CS___8__locals1;
    if ((pMVar5 != (Map_MapFracture___c__DisplayClass16_0_o *)0x0) &&
       (pSVar6 = (pMVar5->fields).seeds, pSVar6 != (System_Collections_Generic_List_Vector3__o *)0x0)) {
      UVar11 = System_Collections_Generic_List_Vector3___get_Item
                         (pSVar6,b,(MethodInfo_39FF5D0 *)
                                   MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      uVar2 = (__this->fields).own.fields.x;
      uVar4 = (__this->fields).own.fields.y;
      fVar8 = UVar11.fields.y - (float)uVar4;
      fVar9 = UVar11.fields.z - (__this->fields).own.fields.z;
      fVar10 = UVar11.fields.x - (float)uVar2;
      iVar7 = System_Single__CompareTo_54d0870
                        ((float *)((long)&uStack_28 + 4),fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9,
                         (MethodInfo *)0x0);
      return iVar7;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapFracture.<>c__DisplayClass18_0$$.ctor
// il2cpp: void Map_MapFracture___c__DisplayClass18_0___ctor (Map_MapFracture___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x598b300

void Map_MapFracture___c__DisplayClass18_0___ctor
               (Map_MapFracture___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapFracture.<>c__DisplayClass18_0$$<HasVolume>b__0
// il2cpp: float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__0 (Map_MapFracture___c__DisplayClass18_0_o* __this, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x598f460

float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__0
                (Map_MapFracture___c__DisplayClass18_0_o *__this,UnityEngine_Vector3_o point,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = (__this->fields).origin.fields.x;
  uVar2 = (__this->fields).origin.fields.y;
  fVar3 = point.fields.y - (float)uVar2;
  fVar4 = point.fields.z - (__this->fields).origin.fields.z;
  fVar5 = point.fields.x - (float)uVar1;
  return fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
}


// Map.MapFracture.<>c__DisplayClass18_0$$<HasVolume>b__1
// il2cpp: float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__1 (Map_MapFracture___c__DisplayClass18_0_o* __this, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x598f490

float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__1
                (Map_MapFracture___c__DisplayClass18_0_o *__this,UnityEngine_Vector3_o point,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = (__this->fields).axis.fields.x;
  uVar3 = (__this->fields).axis.fields.y;
  fVar9 = (__this->fields).axis.fields.z;
  uVar2 = (__this->fields).origin.fields.x;
  uVar4 = (__this->fields).origin.fields.y;
  fVar5 = point.fields.x - (float)uVar2;
  fVar6 = point.fields.y - (float)uVar4;
  fVar7 = point.fields.z - (__this->fields).origin.fields.z;
  fVar8 = fVar9 * fVar5 - fVar7 * (float)uVar1;
  fVar5 = (float)uVar1 * fVar6 - (float)uVar3 * fVar5;
  fVar9 = (float)uVar3 * fVar7 - fVar9 * fVar6;
  return fVar9 * fVar9 + fVar8 * fVar8 + fVar5 * fVar5;
}


// Map.MapFracture.<>c__DisplayClass18_0$$<HasVolume>b__2
// il2cpp: float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__2 (Map_MapFracture___c__DisplayClass18_0_o* __this, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x598f500

float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__2
                (Map_MapFracture___c__DisplayClass18_0_o *__this,UnityEngine_Vector3_o point,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (__this->fields).normal.fields.x;
  uVar2 = (__this->fields).normal.fields.y;
  return point.fields.x * (float)uVar1 + point.fields.y * (float)uVar2 +
         point.fields.z * (__this->fields).normal.fields.z;
}


// Map.MapFracture.<>c__DisplayClass18_0$$<HasVolume>b__3
// il2cpp: float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__3 (Map_MapFracture___c__DisplayClass18_0_o* __this, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x598f520

float Map_MapFracture___c__DisplayClass18_0___HasVolume_b__3
                (Map_MapFracture___c__DisplayClass18_0_o *__this,UnityEngine_Vector3_o point,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (__this->fields).normal.fields.x;
  uVar2 = (__this->fields).normal.fields.y;
  return -(point.fields.x * (float)uVar1 + point.fields.y * (float)uVar2 +
          point.fields.z * (__this->fields).normal.fields.z);
}


// Map.MapFracture$$.ctor
// il2cpp: void Map_MapFracture___ctor (Map_MapFracture_o* __this, System_Collections_Generic_List_MapFracture_Triangle__o* triangles, const MethodInfo* method);
// 0x5988a20

void Map_MapFracture___ctor
               (Map_MapFracture_o *__this,System_Collections_Generic_List_MapFracture_Triangle__o *triangles,
               MethodInfo *method)

{
  Map_MapFracture_Vertex_array *pMVar1;
  System_Single_array *pSVar2;
  System_Collections_Generic_List_MapFracture_Segment__o *__this_00;
  
  if (Il2CppMethodInitialized_07545a14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Segment_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapFracture_Segment);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapFracture_Vertex_array);
    Il2CppMethodInitialized_07545a14 = '\x01';
  }
  pMVar1 = (Map_MapFracture_Vertex_array *)SZArrayNew(TypeInfo_Map_MapFracture_Vertex_array,3);
  (__this->fields)._corners = pMVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._corners);
  pSVar2 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,3);
  (__this->fields)._distances = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._distances);
  pMVar1 = (Map_MapFracture_Vertex_array *)SZArrayNew(TypeInfo_Map_MapFracture_Vertex_array,6);
  (__this->fields)._polygon = pMVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._polygon);
  pMVar1 = (Map_MapFracture_Vertex_array *)SZArrayNew(TypeInfo_Map_MapFracture_Vertex_array,2);
  (__this->fields)._cut = pMVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cut);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Segment);
  System_Collections_Generic_List_MapFracture_Segment____ctor
            (__this_00,
             (MethodInfo_3AAD510 *)MethodInfo_System_Collections_Generic_List_MapFracture_Segment_ctor);
  (__this->fields)._segments = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._segments);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._triangles = triangles;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._triangles);
  return;
}


// Map.MapFracture$$Read
// il2cpp: Map_MapFracture_o* Map_MapFracture__Read (UnityEngine_MeshFilter_array* filters, UnityEngine_Transform_o* root, System_Collections_Generic_List_Material__o* materials, int32_t maxTriangles, const MethodInfo* method);
// 0x5983710

Map_MapFracture_o *
Map_MapFracture__Read
          (UnityEngine_MeshFilter_array *filters,UnityEngine_Transform_o *root,
          System_Collections_Generic_List_Material__o *materials,int32_t maxTriangles,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Vector2_o *pUVar2;
  UnityEngine_MeshFilter_o *pUVar3;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Material_array *pUVar5;
  Map_MapFracture_Triangle_array *pMVar6;
  UnityEngine_Matrix4x4_o toRoot;
  UnityEngine_Matrix4x4_o toRoot_00;
  UnityEngine_Matrix4x4_o toRoot_01;
  Map_MapFracture_Triangle_o item;
  UnityEngine_Matrix4x4_o normalToRoot;
  UnityEngine_Matrix4x4_o normalToRoot_00;
  UnityEngine_Matrix4x4_o normalToRoot_01;
  Map_MapFracture_Triangle_Fields *pMVar7;
  Map_MapFracture_Vertex_o *pMVar8;
  MethodInfo *pMVar9;
  System_Collections_Generic_List_Material__o *__this;
  bool bVar10;
  int32_t iVar11;
  System_Collections_Generic_List_MapFracture_Triangle__o *__this_00;
  UnityEngine_Mesh_o *pUVar12;
  UnityEngine_MeshRenderer_o *pUVar13;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_array *pUVar14;
  UnityEngine_Vector3_array *pUVar15;
  UnityEngine_Vector2_array *pUVar16;
  System_Int32_array *pSVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  MethodInfo *method_00;
  uint uVar21;
  il2cpp_array_size_t iVar22;
  uint uVar23;
  bool hasNormals;
  float fVar24;
  MethodInfo *in_stack_fffffffffffffcf0;
  float local_304;
  UnityEngine_Mesh_o *local_300;
  UnityEngine_Material_array *local_2f8;
  Map_MapFracture_o *local_2f0;
  System_Collections_Generic_Dictionary_Material__int__o *local_2e8;
  int32_t local_2dc;
  uint local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  undefined8 local_2c8;
  float fStack_2c0;
  float fStack_2bc;
  undefined8 local_2b8;
  UnityEngine_Vector2_Fields UStack_2b0;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined8 local_288;
  UnityEngine_Vector3_Fields UStack_280;
  float fStack_274;
  float fStack_270;
  float local_26c;
  float fStack_268;
  float fStack_264;
  float local_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  UnityEngine_Transform_o *local_248;
  System_Int32_array *local_240;
  UnityEngine_Matrix4x4_Fields local_238;
  undefined8 local_1f8;
  UnityEngine_Vector2_Fields UStack_1f0;
  undefined8 local_1e8;
  float fStack_1e0;
  float fStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  UnityEngine_Vector3_array *local_1c8;
  float fStack_1c0;
  float fStack_1bc;
  UnityEngine_Vector3_array *local_1b8;
  UnityEngine_Vector2_Fields UStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  System_Collections_Generic_List_Material__o *local_188;
  UnityEngine_MeshFilter_array *local_180;
  System_Collections_Generic_List_MapFracture_Triangle__o *local_178;
  ulong local_170;
  ulong local_168;
  UnityEngine_Vector2_array *local_160;
  UnityEngine_Vector3_array *local_158 [2];
  UnityEngine_Vector3_array *local_148;
  UnityEngine_Vector2_Fields UStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  UnityEngine_Vector3_Fields UStack_110;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  UnityEngine_Vector3_array *local_e8;
  undefined8 uStack_e0;
  UnityEngine_Vector3_array *local_d8;
  UnityEngine_Vector2_Fields UStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  Map_MapFracture_Vertex_o local_a8;
  Map_MapFracture_Vertex_o local_80;
  UnityEngine_Vector3_array *local_58 [2];
  UnityEngine_Vector3_array *local_48;
  UnityEngine_Vector2_Fields UStack_40;
  float local_38;
  
  local_2dc = maxTriangles;
  local_248 = root;
  if (Il2CppMethodInitialized_07545a15 == '\0') {
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
    Il2CppMethodInitialized_07545a15 = '\x01';
  }
  local_238.m03 = 0.0;
  local_238.m13 = 0.0;
  local_238.m23 = 0.0;
  local_238.m33 = 0.0;
  local_238.m02 = 0.0;
  local_238.m12 = 0.0;
  local_238.m22 = 0.0;
  local_238.m32 = 0.0;
  local_238.m01 = 0.0;
  local_238.m11 = 0.0;
  local_238.m21 = 0.0;
  local_238.m31 = 0.0;
  local_238.m00 = 0.0;
  local_238.m10 = 0.0;
  local_238.m20 = 0.0;
  local_238.m30 = 0.0;
  local_b8._0_4_ = 0.0;
  local_b8._4_4_ = 0.0;
  uStack_b0._0_4_ = 0.0;
  uStack_b0._4_4_ = 0.0;
  local_c8._0_4_ = 0.0;
  local_c8._4_4_ = 0.0;
  uStack_c0._0_4_ = 0.0;
  uStack_c0._4_4_ = 0.0;
  local_d8 = (UnityEngine_Vector3_array *)0x0;
  UStack_d0.x = 0.0;
  UStack_d0.y = 0.0;
  local_e8 = (UnityEngine_Vector3_array *)0x0;
  uStack_e0._0_4_ = 0.0;
  uStack_e0._4_4_ = 0.0;
  local_304 = 0.0;
  local_2e8 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Material_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)local_2e8,
             (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_Material_int_ctor);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Triangle);
  System_Collections_Generic_List_MapFracture_Triangle____ctor
            (__this_00,
             (MethodInfo_3AB14C0 *)MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor);
  if (filters != (UnityEngine_MeshFilter_array *)0x0) {
    uVar21 = (uint)filters->max_length;
    if (local_248 == (UnityEngine_Transform_o *)0x0) {
      if (0 < (int)uVar21) {
        pUVar3 = filters->m_Items[0];
        if ((pUVar3 != (UnityEngine_MeshFilter_o *)0x0) &&
           (pUVar12 = UnityEngine_MeshFilter__get_sharedMesh(pUVar3,(MethodInfo *)0x0),
           pUVar12 != (UnityEngine_Mesh_o *)0x0)) {
          local_2f0 = (Map_MapFracture_o *)0x0;
          bVar10 = UnityEngine_Mesh__get_isReadable(pUVar12,(MethodInfo *)0x0);
          if (!bVar10) {
            return local_2f0;
          }
          pUVar13 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar3,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
          if (pUVar13 != (UnityEngine_MeshRenderer_o *)0x0) {
            UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)pUVar13,(MethodInfo *)0x0);
            ThrowNullReferenceException();
          }
        }
        goto label_059843bd;
      }
    }
    else {
      local_188 = materials;
      if (0 < (int)uVar21) {
        local_2f0 = (Map_MapFracture_o *)0x0;
        uVar23 = 0;
        local_180 = filters;
        local_178 = __this_00;
        do {
          if (uVar21 <= uVar23) {
label_0598446f:
            ThrowIndexOutOfRangeException();
          }
          pUVar3 = local_180->m_Items[(int)uVar23];
          local_2d8 = uVar23;
          if ((pUVar3 == (UnityEngine_MeshFilter_o *)0x0) ||
             (pUVar12 = UnityEngine_MeshFilter__get_sharedMesh(pUVar3,(MethodInfo *)0x0),
             pUVar12 == (UnityEngine_Mesh_o *)0x0)) goto label_059843bd;
          bVar10 = UnityEngine_Mesh__get_isReadable(pUVar12,(MethodInfo *)0x0);
          if (!bVar10) {
            return local_2f0;
          }
          local_300 = pUVar12;
          pUVar13 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar3,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
          if (pUVar13 == (UnityEngine_MeshRenderer_o *)0x0) goto label_059843bd;
          local_2f8 = UnityEngine_Renderer__get_sharedMaterials
                                ((UnityEngine_Renderer_o *)pUVar13,(MethodInfo *)0x0);
          UnityEngine_Transform__get_worldToLocalMatrix
                    ((UnityEngine_Matrix4x4_o *)&local_2c8,local_248,(MethodInfo *)0x0);
          local_1e8 = local_2c8;
          fStack_1e0 = fStack_2c0;
          fStack_1dc = fStack_2bc;
          local_1f8 = local_2b8;
          UStack_1f0 = UStack_2b0;
          local_1d8 = CONCAT44(fStack_2a4,local_2a8);
          uStack_1d0 = CONCAT44(fStack_29c,fStack_2a0);
          local_258 = local_298;
          fStack_254 = fStack_294;
          fStack_250 = fStack_290;
          fStack_24c = fStack_28c;
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_059843bd;
          UnityEngine_Transform__get_localToWorldMatrix
                    ((UnityEngine_Matrix4x4_o *)&local_2c8,__this_01,(MethodInfo *)0x0);
          local_238.m10 =
               fStack_2bc * fStack_254 +
               fStack_2c0 * local_1d8._4_4_ +
               local_2c8._4_4_ * local_1f8._4_4_ + (float)local_2c8 * local_1e8._4_4_;
          local_238.m00 =
               fStack_2bc * local_258 +
               fStack_2c0 * (float)local_1d8 +
               local_2c8._4_4_ * (float)local_1f8 + (float)local_2c8 * (float)local_1e8;
          local_238.m30 =
               fStack_2bc * fStack_24c +
               fStack_2c0 * uStack_1d0._4_4_ + local_2c8._4_4_ * UStack_1f0.y + (float)local_2c8 * fStack_1dc;
          local_238.m20 =
               fStack_2bc * fStack_250 +
               fStack_2c0 * (float)uStack_1d0 + local_2c8._4_4_ * UStack_1f0.x + (float)local_2c8 * fStack_1e0
          ;
          local_238.m11 =
               UStack_2b0.y * fStack_254 +
               UStack_2b0.x * local_1d8._4_4_ +
               local_2b8._4_4_ * local_1f8._4_4_ + (float)local_2b8 * local_1e8._4_4_;
          local_238.m01 =
               UStack_2b0.y * local_258 +
               UStack_2b0.x * (float)local_1d8 +
               local_2b8._4_4_ * (float)local_1f8 + (float)local_2b8 * (float)local_1e8;
          local_238.m31 =
               UStack_2b0.y * fStack_24c +
               UStack_2b0.x * uStack_1d0._4_4_ +
               local_2b8._4_4_ * UStack_1f0.y + (float)local_2b8 * fStack_1dc;
          local_238.m21 =
               UStack_2b0.y * fStack_250 +
               UStack_2b0.x * (float)uStack_1d0 +
               local_2b8._4_4_ * UStack_1f0.x + (float)local_2b8 * fStack_1e0;
          local_238.m12 =
               fStack_29c * fStack_254 +
               fStack_2a0 * local_1d8._4_4_ + fStack_2a4 * local_1f8._4_4_ + local_2a8 * local_1e8._4_4_;
          local_238.m02 =
               fStack_29c * local_258 +
               fStack_2a0 * (float)local_1d8 + fStack_2a4 * (float)local_1f8 + local_2a8 * (float)local_1e8;
          local_238.m32 =
               fStack_29c * fStack_24c +
               fStack_2a0 * uStack_1d0._4_4_ + fStack_2a4 * UStack_1f0.y + local_2a8 * fStack_1dc;
          local_238.m22 =
               fStack_29c * fStack_250 +
               fStack_2a0 * (float)uStack_1d0 + fStack_2a4 * UStack_1f0.x + local_2a8 * fStack_1e0;
          local_238.m13 =
               fStack_28c * fStack_254 +
               fStack_290 * local_1d8._4_4_ + fStack_294 * local_1f8._4_4_ + local_298 * local_1e8._4_4_;
          local_238.m03 =
               fStack_28c * local_258 +
               fStack_290 * (float)local_1d8 + fStack_294 * (float)local_1f8 + local_298 * (float)local_1e8;
          local_238.m33 =
               fStack_28c * fStack_24c +
               fStack_290 * uStack_1d0._4_4_ + fStack_294 * UStack_1f0.y + local_298 * fStack_1dc;
          local_238.m23 =
               fStack_28c * fStack_250 +
               fStack_290 * (float)uStack_1d0 + fStack_294 * UStack_1f0.x + local_298 * fStack_1e0;
          UnityEngine_Matrix4x4__Internal_Inverse
                    ((UnityEngine_Matrix4x4_o *)&local_2c8,(UnityEngine_Matrix4x4_o *)&local_238,
                     (MethodInfo *)0x0);
          local_c8._4_4_ = fStack_2a4;
          local_c8._0_4_ = local_2a8;
          uStack_c0._4_4_ = fStack_29c;
          uStack_c0._0_4_ = fStack_2a0;
          local_b8._0_4_ = local_298;
          local_b8._4_4_ = fStack_294;
          uStack_b0._0_4_ = fStack_290;
          uStack_b0._4_4_ = fStack_28c;
          local_d8 = local_2b8;
          UStack_d0 = UStack_2b0;
          local_e8 = local_2c8;
          uStack_e0._0_4_ = fStack_2c0;
          uStack_e0._4_4_ = fStack_2bc;
          UnityEngine_Matrix4x4__Internal_Transpose
                    ((UnityEngine_Matrix4x4_o *)local_158,(UnityEngine_Matrix4x4_o *)&local_e8,
                     (MethodInfo *)0x0);
          local_1a8 = CONCAT44(fStack_134,local_138);
          uStack_1a0 = CONCAT44(fStack_12c,fStack_130);
          local_198 = CONCAT44(fStack_124,local_128);
          uStack_190 = CONCAT44(fStack_11c,fStack_120);
          local_1b8 = local_148;
          UStack_1b0 = UStack_140;
          local_1c8 = local_158[0];
          _fStack_1c0 = local_158[1];
          fVar24 = UnityEngine_Matrix4x4__GetDeterminant
                             ((UnityEngine_Matrix4x4_o *)&local_238,(MethodInfo *)0x0);
          pUVar12 = local_300;
          local_258 = fVar24;
          pUVar14 = UnityEngine_Mesh__get_vertices(local_300,(MethodInfo *)0x0);
          pUVar15 = UnityEngine_Mesh__get_normals(pUVar12,(MethodInfo *)0x0);
          pUVar16 = UnityEngine_Mesh__get_uv(pUVar12,(MethodInfo *)0x0);
          local_1f8 = pUVar15;
          if (((pUVar15 == (UnityEngine_Vector3_array *)0x0) || (pUVar14 == (UnityEngine_Vector3_array *)0x0))
             || (pUVar16 == (UnityEngine_Vector2_array *)0x0)) goto label_059843bd;
          local_2cc = (int)pUVar15->max_length;
          local_2d0 = (int)pUVar14->max_length;
          local_2d4 = (int)pUVar16->max_length;
          local_1e8 = pUVar14;
          local_160 = pUVar16;
          iVar11 = UnityEngine_Mesh__get_subMeshCount(pUVar12,(MethodInfo *)0x0);
          if (0 < iVar11) {
            if (local_2f8 == (UnityEngine_Material_array *)0x0) goto label_059843bd;
            if (local_2e8 == (System_Collections_Generic_Dictionary_Material__int__o *)0x0) {
              uVar21 = 0;
              do {
                if (local_2f8->max_length == 0) break;
                uVar23 = (uint)local_2f8->max_length;
                uVar18 = uVar23 - 1;
                if ((int)uVar21 < (int)uVar18) {
                  uVar18 = uVar21;
                }
                if (uVar23 <= uVar18) goto label_0598446f;
                pUVar4 = local_2f8->m_Items[(int)uVar18];
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar10 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                pUVar12 = local_300;
                if ((!bVar10) &&
                   (iVar11 = UnityEngine_Mesh__GetTopology(local_300,uVar21,(MethodInfo *)0x0), iVar11 == 0))
                goto label_059843bd;
                uVar21 = uVar21 + 1;
                iVar11 = UnityEngine_Mesh__get_subMeshCount(pUVar12,(MethodInfo *)0x0);
              } while ((int)uVar21 < iVar11);
            }
            else {
              local_170 = (ulong)(2 - (local_258 < 0.0));
              local_168 = (ulong)((local_258 < 0.0) + 1);
              uVar21 = 0;
              do {
                if (local_2f8->max_length == 0) break;
                uVar23 = (uint)local_2f8->max_length;
                uVar18 = uVar23 - 1;
                if ((int)uVar21 < (int)uVar18) {
                  uVar18 = uVar21;
                }
                if (uVar23 <= uVar18) goto label_0598446f;
                pUVar4 = local_2f8->m_Items[(int)uVar18];
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar10 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((!bVar10) &&
                   (iVar11 = UnityEngine_Mesh__GetTopology(local_300,uVar21,(MethodInfo *)0x0), iVar11 == 0))
                {
                  bVar10 = System_Collections_Generic_Dictionary_object__int___TryGetValue
                                     ((System_Collections_Generic_Dictionary_object__int__o *)local_2e8,
                                      (Il2CppObject *)pUVar4,(int32_t *)&local_304,
                                      (MethodInfo_4A9F630 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_Material_int_TryGetValue
                                     );
                  __this = local_188;
                  if (!bVar10) {
                    if (local_188 == (System_Collections_Generic_List_Material__o *)0x0) goto label_059843bd;
                    local_304 = (float)(local_188->fields)._size;
                    System_Collections_Generic_Dictionary_object__int___Add
                              ((System_Collections_Generic_Dictionary_object__int__o *)local_2e8,
                               (Il2CppObject *)pUVar4,(int32_t)local_304,
                               (MethodInfo_4A9D780 *)
                               MethodInfo_System_Collections_Generic_Dictionary_Material_int_Add);
                    pMVar9 = MethodInfo_System_Collections_Generic_List_Material_Add;
                    piVar1 = &(__this->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar5 = (__this->fields)._items;
                    if (pUVar5 == (UnityEngine_Material_array *)0x0) goto label_059843bd;
                    uVar23 = (__this->fields)._size;
                    if (uVar23 < (uint)pUVar5->max_length) {
                      (__this->fields)._size = uVar23 + 1;
                      pUVar5->m_Items[(int)uVar23] = pUVar4;
                      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar23);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pUVar4,
                                 (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
                    }
                  }
                  pSVar17 = UnityEngine_Mesh__GetTriangles(local_300,uVar21,(MethodInfo *)0x0);
                  if ((__this_00 == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) ||
                     (pSVar17 == (System_Int32_array *)0x0)) goto label_059843bd;
                  iVar22 = pSVar17->max_length;
                  if (local_2dc < (int)iVar22 / 3 + (__this_00->fields)._size) {
                    return local_2f0;
                  }
                  if (0 < (int)iVar22) {
                    uVar23 = 0;
                    local_240 = pSVar17;
                    do {
                      pUVar16 = local_160;
                      pUVar15 = local_1e8;
                      pUVar14 = local_1f8;
                      uVar18 = (uint)iVar22;
                      if (((uVar18 <= uVar23) || (uVar19 = (int)local_168 + uVar23, uVar18 <= uVar19)) ||
                         (uVar20 = (int)local_170 + uVar23, uVar18 <= uVar20)) goto label_0598446f;
                      bVar10 = local_2d4 == local_2d0;
                      hasNormals = local_2cc == local_2d0;
                      local_1d8 = CONCAT44(local_1d8._4_4_,local_240->m_Items[(int)uVar19]);
                      local_258 = (float)local_240->m_Items[(int)uVar20];
                      toRoot.fields.m20 = local_238.m20;
                      toRoot.fields.m30 = local_238.m30;
                      toRoot.fields.m00 = local_238.m00;
                      toRoot.fields.m10 = local_238.m10;
                      toRoot.fields.m01 = local_238.m01;
                      toRoot.fields.m11 = local_238.m11;
                      toRoot.fields.m21 = local_238.m21;
                      toRoot.fields.m31 = local_238.m31;
                      toRoot.fields.m02 = local_238.m02;
                      toRoot.fields.m12 = local_238.m12;
                      toRoot.fields.m22 = local_238.m22;
                      toRoot.fields.m32 = local_238.m32;
                      toRoot.fields.m03 = local_238.m03;
                      toRoot.fields.m13 = local_238.m13;
                      toRoot.fields.m23 = local_238.m23;
                      toRoot.fields.m33 = local_238.m33;
                      normalToRoot.fields.m20 = fStack_1c0;
                      normalToRoot.fields.m30 = fStack_1bc;
                      normalToRoot.fields._0_8_ = local_1c8;
                      normalToRoot.fields._16_8_ = local_1b8;
                      normalToRoot.fields.m21 = UStack_1b0.x;
                      normalToRoot.fields.m31 = UStack_1b0.y;
                      normalToRoot.fields.m02 = (float)(undefined4)local_1a8;
                      normalToRoot.fields.m12 = (float)local_1a8._4_4_;
                      normalToRoot.fields.m22 = (float)(undefined4)uStack_1a0;
                      normalToRoot.fields.m32 = (float)uStack_1a0._4_4_;
                      normalToRoot.fields.m03 = (float)(undefined4)local_198;
                      normalToRoot.fields.m13 = (float)local_198._4_4_;
                      normalToRoot.fields.m23 = (float)(undefined4)uStack_190;
                      normalToRoot.fields.m33 = (float)uStack_190._4_4_;
                      Map_MapFracture__ReadVertex
                                ((Map_MapFracture_Vertex_o *)local_58,local_1e8,local_1f8,local_160,
                                 local_240->m_Items[(int)uVar23],toRoot,normalToRoot,hasNormals,bVar10,
                                 in_stack_fffffffffffffcf0);
                      toRoot_00.fields.m20 = local_238.m20;
                      toRoot_00.fields.m30 = local_238.m30;
                      toRoot_00.fields.m00 = local_238.m00;
                      toRoot_00.fields.m10 = local_238.m10;
                      toRoot_00.fields.m01 = local_238.m01;
                      toRoot_00.fields.m11 = local_238.m11;
                      toRoot_00.fields.m21 = local_238.m21;
                      toRoot_00.fields.m31 = local_238.m31;
                      toRoot_00.fields.m02 = local_238.m02;
                      toRoot_00.fields.m12 = local_238.m12;
                      toRoot_00.fields.m22 = local_238.m22;
                      toRoot_00.fields.m32 = local_238.m32;
                      toRoot_00.fields.m03 = local_238.m03;
                      toRoot_00.fields.m13 = local_238.m13;
                      toRoot_00.fields.m23 = local_238.m23;
                      toRoot_00.fields.m33 = local_238.m33;
                      normalToRoot_00.fields.m20 = fStack_1c0;
                      normalToRoot_00.fields.m30 = fStack_1bc;
                      normalToRoot_00.fields._0_8_ = local_1c8;
                      normalToRoot_00.fields._16_8_ = local_1b8;
                      normalToRoot_00.fields.m21 = UStack_1b0.x;
                      normalToRoot_00.fields.m31 = UStack_1b0.y;
                      normalToRoot_00.fields.m02 = (float)(undefined4)local_1a8;
                      normalToRoot_00.fields.m12 = (float)local_1a8._4_4_;
                      normalToRoot_00.fields.m22 = (float)(undefined4)uStack_1a0;
                      normalToRoot_00.fields.m32 = (float)uStack_1a0._4_4_;
                      normalToRoot_00.fields.m03 = (float)(undefined4)local_198;
                      normalToRoot_00.fields.m13 = (float)local_198._4_4_;
                      normalToRoot_00.fields.m23 = (float)(undefined4)uStack_190;
                      normalToRoot_00.fields.m33 = (float)uStack_190._4_4_;
                      Map_MapFracture__ReadVertex
                                (&local_80,pUVar15,pUVar14,pUVar16,(int32_t)(float)local_1d8,toRoot_00,
                                 normalToRoot_00,hasNormals,bVar10,in_stack_fffffffffffffcf0);
                      toRoot_01.fields.m20 = local_238.m20;
                      toRoot_01.fields.m30 = local_238.m30;
                      toRoot_01.fields.m00 = local_238.m00;
                      toRoot_01.fields.m10 = local_238.m10;
                      toRoot_01.fields.m01 = local_238.m01;
                      toRoot_01.fields.m11 = local_238.m11;
                      toRoot_01.fields.m21 = local_238.m21;
                      toRoot_01.fields.m31 = local_238.m31;
                      toRoot_01.fields.m02 = local_238.m02;
                      toRoot_01.fields.m12 = local_238.m12;
                      toRoot_01.fields.m22 = local_238.m22;
                      toRoot_01.fields.m32 = local_238.m32;
                      toRoot_01.fields.m03 = local_238.m03;
                      toRoot_01.fields.m13 = local_238.m13;
                      toRoot_01.fields.m23 = local_238.m23;
                      toRoot_01.fields.m33 = local_238.m33;
                      normalToRoot_01.fields.m20 = fStack_1c0;
                      normalToRoot_01.fields.m30 = fStack_1bc;
                      normalToRoot_01.fields._0_8_ = local_1c8;
                      normalToRoot_01.fields._16_8_ = local_1b8;
                      normalToRoot_01.fields.m21 = UStack_1b0.x;
                      normalToRoot_01.fields.m31 = UStack_1b0.y;
                      normalToRoot_01.fields.m02 = (float)(undefined4)local_1a8;
                      normalToRoot_01.fields.m12 = (float)local_1a8._4_4_;
                      normalToRoot_01.fields.m22 = (float)(undefined4)uStack_1a0;
                      normalToRoot_01.fields.m32 = (float)uStack_1a0._4_4_;
                      normalToRoot_01.fields.m03 = (float)(undefined4)local_198;
                      normalToRoot_01.fields.m13 = (float)local_198._4_4_;
                      normalToRoot_01.fields.m23 = (float)(undefined4)uStack_190;
                      normalToRoot_01.fields.m33 = (float)uStack_190._4_4_;
                      Map_MapFracture__ReadVertex
                                (&local_a8,pUVar15,pUVar14,pUVar16,(int32_t)local_258,toRoot_01,
                                 normalToRoot_01,hasNormals,bVar10,in_stack_fffffffffffffcf0);
                      __this_00 = local_178;
                      pMVar9 = MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_Add;
                      local_f0 = local_a8.fields.Shade;
                      fStack_100 = local_a8.fields.Normal.fields.y;
                      fStack_fc = local_a8.fields.Normal.fields.z;
                      fStack_f8 = local_a8.fields.UV.fields.x;
                      fStack_f4 = local_a8.fields.UV.fields.y;
                      UStack_110.x = local_a8.fields.Position.fields.x;
                      UStack_110.y = local_a8.fields.Position.fields.y;
                      UStack_110.z = local_a8.fields.Position.fields.z;
                      fStack_104 = local_a8.fields.Normal.fields.x;
                      local_158[0] = local_58[0];
                      local_158[1] = local_58[1];
                      local_148 = local_48;
                      UStack_140 = UStack_40;
                      local_138 = local_38;
                      fStack_114 = local_80.fields.Shade;
                      fStack_124 = local_80.fields.Normal.fields.y;
                      fStack_120 = local_80.fields.Normal.fields.z;
                      fStack_11c = local_80.fields.UV.fields.x;
                      local_118 = local_80.fields.UV.fields.y;
                      fStack_134 = local_80.fields.Position.fields.x;
                      fStack_130 = local_80.fields.Position.fields.y;
                      fStack_12c = local_80.fields.Position.fields.z;
                      local_128 = local_80.fields.Normal.fields.x;
                      fStack_268 = fStack_f8;
                      fStack_264 = fStack_f4;
                      fStack_294 = fStack_124;
                      local_298 = local_128;
                      fStack_28c = fStack_11c;
                      fStack_290 = fStack_120;
                      local_288 = CONCAT44(local_80.fields.Shade,local_118);
                      UStack_280.z = local_a8.fields.Position.fields.z;
                      fStack_274 = local_a8.fields.Normal.fields.x;
                      UStack_280.x = local_a8.fields.Position.fields.x;
                      UStack_280.y = local_a8.fields.Position.fields.y;
                      local_2a8 = local_38;
                      fStack_29c = fStack_12c;
                      local_2b8 = local_48;
                      UStack_2b0 = UStack_40;
                      local_2c8 = local_58[0];
                      _fStack_2c0 = local_58[1];
                      local_25c = local_304;
                      piVar1 = &(local_178->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pMVar6 = (local_178->fields)._items;
                      fStack_2a4 = fStack_134;
                      fStack_2a0 = fStack_130;
                      fStack_270 = fStack_100;
                      local_26c = fStack_fc;
                      if (pMVar6 == (Map_MapFracture_Triangle_array *)0x0) goto label_059843bd;
                      uVar18 = (local_178->fields)._size;
                      if (uVar18 < (uint)pMVar6->max_length) {
                        (local_178->fields)._size = uVar18 + 1;
                        pUVar2 = &pMVar6->m_Items[(int)uVar18].fields.C.fields.UV;
                        pUVar2->fields = local_a8.fields.UV.fields;
                        pUVar2[1] = (UnityEngine_Vector2_o)CONCAT44(local_304,local_a8.fields.Shade);
                        pMVar7 = &pMVar6->m_Items[(int)uVar18].fields;
                        *(undefined8 *)((long)&(pMVar7->C).fields.Position.fields + 8) = local_a8.fields._8_8_
                        ;
                        *(undefined8 *)((long)&(pMVar7->C).fields.Normal.fields + 4) =
                             local_a8.fields.Normal.fields._4_8_;
                        pMVar7 = &pMVar6->m_Items[(int)uVar18].fields;
                        *(undefined8 *)((long)&(pMVar7->B).fields.UV.fields + 4) = local_288;
                        *(undefined8 *)&(pMVar7->C).fields.Position.fields =
                             local_a8.fields.Position.fields._0_8_;
                        pMVar7 = &pMVar6->m_Items[(int)uVar18].fields;
                        pMVar8 = &pMVar7->B;
                        (pMVar8->fields).Normal.fields.x = local_128;
                        (pMVar8->fields).Normal.fields.y = fStack_124;
                        *(undefined8 *)((long)&(pMVar7->B).fields.Normal.fields + 8) = _fStack_290;
                        pMVar7 = &pMVar6->m_Items[(int)uVar18].fields;
                        *(ulong *)&(pMVar7->A).fields.Shade = CONCAT44(fStack_134,local_38);
                        *(ulong *)((long)&(pMVar7->B).fields.Position.fields + 4) =
                             CONCAT44(fStack_12c,fStack_130);
                        pMVar7 = &pMVar6->m_Items[(int)uVar18].fields;
                        *(UnityEngine_Vector3_array **)((long)&(pMVar7->A).fields.Normal.fields + 4) =
                             local_48;
                        (pMVar7->A).fields.UV.fields = UStack_40;
                        *(UnityEngine_Vector3_array **)&pMVar6->m_Items[(int)uVar18].fields.A.fields.Position
                             = local_58[0];
                        *(UnityEngine_Vector3_array **)
                         ((long)&pMVar6->m_Items[(int)uVar18].fields.A.fields.Position + 8) = local_58[1];
                      }
                      else {
                        item.fields.Submesh = (int32_t)local_304;
                        item.fields.C.fields.Shade = local_a8.fields.Shade;
                        item.fields.B.fields.Position.fields.x = fStack_134;
                        item.fields.A.fields.Shade = local_38;
                        item.fields.B.fields.Position.fields.z = fStack_12c;
                        item.fields.B.fields.Position.fields.y = fStack_130;
                        item.fields.A.fields._8_8_ = local_58[1];
                        item.fields.A.fields.Position.fields._0_8_ = local_58[0];
                        item.fields.A.fields.Normal.fields._4_8_ = local_48;
                        item.fields.A.fields.UV.fields = UStack_40;
                        item.fields.B.fields.Normal.fields.x = local_128;
                        item.fields.B.fields.Normal.fields.y = fStack_124;
                        item.fields.B.fields.Normal.fields.z = fStack_120;
                        item.fields.B.fields.UV.fields.x = fStack_11c;
                        item.fields.B.fields.UV.fields.y = local_118;
                        item.fields.B.fields.Shade = local_80.fields.Shade;
                        item.fields.C.fields.Position.fields.x = local_a8.fields.Position.fields.x;
                        item.fields.C.fields.Position.fields.y = local_a8.fields.Position.fields.y;
                        item.fields.C.fields.Position.fields.z = local_a8.fields.Position.fields.z;
                        item.fields.C.fields.Normal.fields.x = local_a8.fields.Normal.fields.x;
                        item.fields.C.fields.Normal.fields.y = local_a8.fields.Normal.fields.y;
                        item.fields.C.fields.Normal.fields.z = local_a8.fields.Normal.fields.z;
                        item.fields.C.fields.UV.fields = local_a8.fields.UV.fields;
                        System_Collections_Generic_List_MapFracture_Triangle___AddWithResize
                                  (local_178,item,(MethodInfo_3AB1FB0 *)pMVar9->klass->rgctx_data[0xe].method)
                        ;
                      }
                      uVar23 = uVar23 + 3;
                      iVar22 = local_240->max_length;
                    } while ((int)uVar23 < (int)iVar22);
                  }
                }
                uVar21 = uVar21 + 1;
                iVar11 = UnityEngine_Mesh__get_subMeshCount(local_300,(MethodInfo *)0x0);
              } while ((int)uVar21 < iVar11);
            }
          }
          uVar23 = local_2d8 + 1;
          uVar21 = (uint)local_180->max_length;
        } while ((int)uVar23 < (int)uVar21);
      }
    }
    if (__this_00 != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
      if ((__this_00->fields)._size == 0) {
        local_2f0 = (Map_MapFracture_o *)0x0;
      }
      else {
        local_2f0 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapFracture);
        Map_MapFracture___ctor(local_2f0,__this_00,method_00);
      }
      return local_2f0;
    }
  }
label_059843bd:
  ThrowNullReferenceException();
}


// Map.MapFracture$$Shatter
// il2cpp: System_Collections_Generic_List_List_MapFracture_Triangle___o* Map_MapFracture__Shatter (Map_MapFracture_o* __this, int32_t pieceCount, float groundHeight, int32_t seed, const MethodInfo* method);
// 0x5987eb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59884ea: jmp 0x598853e
// asm:   0x59885cb: jmp 0x5988650

System_Collections_Generic_List_List_MapFracture_Triangle___o *
Map_MapFracture__Shatter
          (Map_MapFracture_o *__this,int32_t pieceCount,float groundHeight,int32_t seed,MethodInfo *method)

{
  int32_t *piVar1;
  Map_MapFracture___c__DisplayClass16_1_Fields *pMVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  uint32_t uVar7;
  System_Int32_array *pSVar8;
  UnityEngine_Vector3_StaticFields *pUVar9;
  System_Collections_Generic_List_MapFracture_Triangle__array *pSVar10;
  undefined1 auVar11 [16];
  UnityEngine_Bounds_o bounds;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  int32_t iVar15;
  Map_MapFracture___c__DisplayClass16_0_o *pMVar16;
  System_Collections_Generic_List_List_MapFracture_Triangle___o *__this_00;
  System_Collections_Generic_List_MapFracture_Triangle__o *__this_01;
  System_Random_o *__this_02;
  System_Collections_Generic_List_Vector3__o *pSVar17;
  System_Collections_Generic_List_int__o *__this_03;
  System_Collections_Generic_List_MapFracture_Triangle__o *pSVar18;
  System_Collections_Generic_List_MapFracture_Triangle__o *__this_04;
  Map_MapFracture___c__DisplayClass16_1_o *pMVar19;
  Map_MapFracture___c__DisplayClass16_0_o *pMVar20;
  System_Comparison_T__o *comparison;
  System_Collections_Generic_List_MapFracture_Triangle__o *pSVar21;
  MethodInfo **method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int item;
  int index;
  Map_MapFracture___c__DisplayClass16_0_Fields *targetAddress;
  MethodInfo *pMVar22;
  Map_MapFracture___c__DisplayClass16_0_o **targetAddress_00;
  uint uVar23;
  System_Collections_Generic_List_MapFracture_Triangle__o *source;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar24;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar25;
  undefined1 auVar26 [16];
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o normal;
  float fStack_c8;
  float fStack_c4;
  float fStack_68;
  float fStack_64;
  UnityEngine_Bounds_o UStack_48;
  
  if (Il2CppMethodInitialized_07545a16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Sort_7195140);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_7198628);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_7198620);
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
    Il2CppMethodInitialized_07545a16 = '\x01';
  }
  pMVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapFracture_c__DisplayClass16_0);
  pMVar22 = (MethodInfo *)0x0;
  System_Object___ctor((Il2CppObject *)pMVar16,(MethodInfo *)0x0);
  Map_MapFracture__CloseOpenings(__this,pMVar22);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_List_MapFracture_Triangle);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_ctor);
  pSVar18 = (__this->fields)._triangles;
  if (pSVar18 != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    iVar15 = (pSVar18->fields)._size;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Triangle);
    System_Collections_Generic_List_MapFracture_Triangle____ctor_3ab1540
              (__this_01,iVar15,
               (MethodInfo_3AB1540 *)
               MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_7198628);
    pSVar18 = (__this->fields)._triangles;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    bVar14 = Map_MapFracture__Clip
                       (__this,pSVar18,__this_01,
                        (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields,
                        groundHeight,method);
    if (!bVar14) {
      __this_01 = (__this->fields)._triangles;
    }
    if (__this_01 != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
      if ((__this_01->fields)._size == 0) {
        return __this_00;
      }
      Map_MapFracture__GetBounds(&UStack_48,__this_01,method_01);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Random);
      System_Random___ctor_54cebf0(__this_02,seed,(MethodInfo *)0x0);
      bounds.fields.m_Center.fields.z = UStack_48.fields.m_Center.fields.z;
      bounds.fields.m_Extents.fields.x = UStack_48.fields.m_Extents.fields.x;
      bounds.fields.m_Center.fields.x = UStack_48.fields.m_Center.fields.x;
      bounds.fields.m_Center.fields.y = UStack_48.fields.m_Center.fields.y;
      bounds.fields.m_Extents.fields.y = UStack_48.fields.m_Extents.fields.y;
      bounds.fields.m_Extents.fields.z = UStack_48.fields.m_Extents.fields.z;
      pSVar17 = Map_MapFracture__CreateSeeds(bounds,pieceCount,__this_02,method_02);
      if (pMVar16 != (Map_MapFracture___c__DisplayClass16_0_o *)0x0) {
        targetAddress = &pMVar16->fields;
        (pMVar16->fields).seeds = pSVar17;
        Il2CppCodeGenWriteBarrier(&targetAddress->seeds);
        pSVar17 = (pMVar16->fields).seeds;
        if (pSVar17 != (System_Collections_Generic_List_Vector3__o *)0x0) {
          iVar15 = (pSVar17->fields)._size;
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
          System_Collections_Generic_List_int____ctor_3916240
                    (__this_03,iVar15,
                     (MethodInfo_3916240 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
          iVar15 = (__this_01->fields)._size;
          pSVar18 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Triangle);
          System_Collections_Generic_List_MapFracture_Triangle____ctor_3ab1540
                    (pSVar18,iVar15,
                     (MethodInfo_3AB1540 *)
                     MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_7198628);
          iVar15 = (__this_01->fields)._size;
          __this_04 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Triangle)
          ;
          System_Collections_Generic_List_MapFracture_Triangle____ctor_3ab1540
                    (__this_04,iVar15,
                     (MethodInfo_3AB1540 *)
                     MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_7198628);
          pSVar17 = targetAddress->seeds;
          if (pSVar17 != (System_Collections_Generic_List_Vector3__o *)0x0) {
            if (__this_03 == (System_Collections_Generic_List_int__o *)0x0) {
              if ((pSVar17->fields)._size < 1) {
                return __this_00;
              }
              pMVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapFracture_c__DisplayClass16_1)
              ;
              System_Object___ctor((Il2CppObject *)pMVar19,(MethodInfo *)0x0);
              if (pMVar19 != (Map_MapFracture___c__DisplayClass16_1_o *)0x0) {
                (pMVar19->fields).CS___8__locals1 = pMVar16;
                Il2CppCodeGenWriteBarrier(&(pMVar19->fields).CS___8__locals1);
                pMVar16 = (pMVar19->fields).CS___8__locals1;
                if ((pMVar16 != (Map_MapFracture___c__DisplayClass16_0_o *)0x0) &&
                   (pSVar17 = (pMVar16->fields).seeds,
                   pSVar17 != (System_Collections_Generic_List_Vector3__o *)0x0)) {
                  UVar27 = System_Collections_Generic_List_Vector3___get_Item
                                     (pSVar17,0,
                                      (MethodInfo_39FF5D0 *)
                                      MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                  (pMVar19->fields).own.fields.x = UVar27.fields.x;
                  (pMVar19->fields).own.fields.y = UVar27.fields.y;
                  (pMVar19->fields).own.fields.z = UVar27.fields.z;
                  ThrowNullReferenceException();
                }
              }
            }
            else {
              index = 0;
              while( true ) {
                if ((pSVar17->fields)._size <= index) {
                  return __this_00;
                }
                pMVar19 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_Map_MapFracture_c__DisplayClass16_1);
                System_Object___ctor((Il2CppObject *)pMVar19,(MethodInfo *)0x0);
                if (pMVar19 == (Map_MapFracture___c__DisplayClass16_1_o *)0x0) break;
                targetAddress_00 = &(pMVar19->fields).CS___8__locals1;
                (pMVar19->fields).CS___8__locals1 = pMVar16;
                Il2CppCodeGenWriteBarrier(targetAddress_00);
                pMVar20 = (pMVar19->fields).CS___8__locals1;
                if ((pMVar20 == (Map_MapFracture___c__DisplayClass16_0_o *)0x0) ||
                   (pSVar17 = (pMVar20->fields).seeds,
                   pSVar17 == (System_Collections_Generic_List_Vector3__o *)0x0)) break;
                UVar27 = System_Collections_Generic_List_Vector3___get_Item
                                   (pSVar17,index,
                                    (MethodInfo_39FF5D0 *)
                                    MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                (pMVar19->fields).own.fields.x = UVar27.fields.x;
                (pMVar19->fields).own.fields.y = UVar27.fields.y;
                (pMVar19->fields).own.fields.z = UVar27.fields.z;
                piVar1 = &(__this_03->fields)._version;
                *piVar1 = *piVar1 + 1;
                (__this_03->fields)._size = 0;
                pMVar20 = (pMVar19->fields).CS___8__locals1;
                if (pMVar20 == (Map_MapFracture___c__DisplayClass16_0_o *)0x0) break;
                item = 0;
                while( true ) {
                  pMVar22 = MethodInfo_System_Collections_Generic_List_int_Add;
                  pSVar17 = (pMVar20->fields).seeds;
                  if (pSVar17 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05988743;
                  if ((pSVar17->fields)._size <= item) break;
                  if (index != item) {
                    piVar1 = &(__this_03->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar8 = (__this_03->fields)._items;
                    if (pSVar8 == (System_Int32_array *)0x0) goto label_05988743;
                    uVar23 = (__this_03->fields)._size;
                    if (uVar23 < (uint)pSVar8->max_length) {
                      (__this_03->fields)._size = uVar23 + 1;
                      pSVar8->m_Items[(int)uVar23] = item;
                    }
                    else {
                      System_Collections_Generic_List_int___AddWithResize
                                (__this_03,item,(MethodInfo_3916AC0 *)pMVar22->klass->rgctx_data[0xe].method);
                      pMVar20 = *targetAddress_00;
                    }
                  }
                  item = item + 1;
                  if (pMVar20 == (Map_MapFracture___c__DisplayClass16_0_o *)0x0) goto label_05988743;
                }
                comparison = (System_Comparison_T__o *)
                             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_int);
                System_Comparison_int____ctor
                          ((System_Comparison_int__o *)comparison,(Il2CppObject *)pMVar19,
                           (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass16_1_Shatter_b__0,
                           (MethodInfo_48E1930 *)0x0);
                System_Collections_Generic_List_int___Sort_3918cc0
                          (__this_03,comparison,
                           (MethodInfo_3918CC0 *)MethodInfo_System_Collections_Generic_List_int_Sort_7195140);
                source = __this_01;
                if (0 < (__this_03->fields)._size) {
                  uVar23 = 0;
                  do {
                    if (source == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0)
                    goto label_05988743;
                    if ((source->fields)._size < 1) goto label_05988227;
                    if (*targetAddress_00 == (Map_MapFracture___c__DisplayClass16_0_o *)0x0)
                    goto label_05988743;
                    pSVar17 = ((*targetAddress_00)->fields).seeds;
                    iVar15 = System_Collections_Generic_List_int___get_Item
                                       (__this_03,uVar23,
                                        (MethodInfo_39167D0 *)
                                        MethodInfo_System_Collections_Generic_List_int_get_Item);
                    if (pSVar17 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05988743;
                    method_00 = &MethodInfo_System_Collections_Generic_List_Vector3_get_Item;
                    UVar27 = System_Collections_Generic_List_Vector3___get_Item
                                       (pSVar17,iVar15,
                                        (MethodInfo_39FF5D0 *)
                                        MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                    pMVar2 = &pMVar19->fields;
                    uVar12 = (pMVar2->own).fields.x;
                    uVar13 = (pMVar2->own).fields.y;
                    fVar25 = (pMVar19->fields).own.fields.z;
                    if (Il2CppMethodInitialized_0753e72d == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                      Il2CppMethodInitialized_0753e72d = '\x01';
                      fVar3 = (float)uVar12;
                      fVar5 = (float)uVar13;
                      if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05988603;
label_05988467:
                      uVar7 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                    }
                    else {
                      fVar3 = (pMVar2->own).fields.x;
                      fVar5 = (pMVar19->fields).own.fields.y;
                      if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05988467;
label_05988603:
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                      Il2CppMethodInitialized_0753e729 = '\x01';
                      uVar7 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                      fVar3 = (float)uVar12;
                      fVar5 = (float)uVar13;
                    }
                    if (uVar7 == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                      fVar3 = (float)uVar12;
                      fVar5 = (float)uVar13;
                    }
                    uVar24 = 0;
                    fStack_68 = UVar27.fields.x;
                    fStack_64 = UVar27.fields.y;
                    auVar26._0_4_ = fVar3 - fStack_68;
                    auVar26._4_4_ = fVar5 - fStack_64;
                    auVar26._8_4_ = 0.0 - extraout_XMM0_Dc;
                    auVar26._12_4_ = 0.0 - extraout_XMM0_Dd;
                    fVar25 = fVar25 - UVar27.fields.z;
                    fVar3 = fVar25 * fVar25 + auVar26._4_4_ * auVar26._4_4_ + auVar26._0_4_ * auVar26._0_4_;
                    if (fVar3 < 0.0) {
                      fVar3 = sqrtf(fVar3);
                      uVar24 = extraout_XMM0_Db;
                      if (1e-05 < fVar3) goto label_05988512;
label_059884c1:
                      pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
                      fVar25 = (pUVar9->zeroVector).fields.z;
                      fVar3 = (pUVar9->zeroVector).fields.x;
                      fVar5 = (pUVar9->zeroVector).fields.y;
                    }
                    else {
                      fVar3 = SQRT(fVar3);
                      if (fVar3 <= 1e-05) goto label_059884c1;
label_05988512:
                      fVar25 = fVar25 / fVar3;
                      auVar11._4_4_ = fVar3;
                      auVar11._0_4_ = fVar3;
                      auVar11._8_4_ = uVar24;
                      auVar11._12_4_ = uVar24;
                      auVar26 = divps(auVar26,auVar11);
                      fVar3 = auVar26._0_4_;
                      fVar5 = auVar26._4_4_;
                    }
                    pSVar21 = __this_04;
                    if (source != pSVar18) {
                      pSVar21 = pSVar18;
                    }
                    uVar4 = (pMVar19->fields).own.fields.x;
                    uVar6 = (pMVar19->fields).own.fields.y;
                    normal.fields.y = fVar5;
                    normal.fields.x = fVar3;
                    normal.fields.z = fVar25;
                    bVar14 = Map_MapFracture__Clip
                                       (__this,source,pSVar21,normal,
                                        fVar3 * ((float)uVar4 + fStack_68) * 0.5 +
                                        fVar5 * (fStack_64 + (float)uVar6) * 0.5 +
                                        fVar25 * ((pMVar19->fields).own.fields.z + UVar27.fields.z) * 0.5,
                                        (MethodInfo *)method_00);
                    if (!bVar14) {
                      pSVar21 = source;
                    }
                    source = pSVar21;
                  } while ((uVar23 < 0x13) && (uVar23 = uVar23 + 1, (int)uVar23 < (__this_03->fields)._size));
                }
                if (source == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) break;
                if (0 < (source->fields)._size) {
                  pSVar21 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_List_MapFracture_Triangle);
                  System_Collections_Generic_List_MapFracture_Triangle____ctor_3ab1620
                            (pSVar21,(System_Collections_Generic_IEnumerable_T__o *)source,
                             (MethodInfo_3AB1620 *)
                             MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_7198620);
                  pMVar22 = MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_Add;
                  if (__this_00 == (System_Collections_Generic_List_List_MapFracture_Triangle___o *)0x0)
                  break;
                  piVar1 = &(__this_00->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar10 = (__this_00->fields)._items;
                  if (pSVar10 == (System_Collections_Generic_List_MapFracture_Triangle__array *)0x0) break;
                  uVar23 = (__this_00->fields)._size;
                  if (uVar23 < (uint)pSVar10->max_length) {
                    (__this_00->fields)._size = uVar23 + 1;
                    pSVar10->m_Items[(int)uVar23] = pSVar21;
                    Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar23);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar21,
                               (MethodInfo_395D230 *)pMVar22->klass->rgctx_data[0xe].method);
                  }
                }
label_05988227:
                index = index + 1;
                pSVar17 = targetAddress->seeds;
                if (pSVar17 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
              }
            }
          }
        }
      }
    }
  }
label_05988743:
  ThrowNullReferenceException();
}


// Map.MapFracture$$CreateMesh
// il2cpp: UnityEngine_Mesh_o* Map_MapFracture__CreateMesh (System_Collections_Generic_List_MapFracture_Triangle__o* triangles, int32_t submeshCount, UnityEngine_Vector3_o* center, const MethodInfo* method);
// 0x59862c0
// eh: try 0x598668a..0x5986ac1 -> pad 0x5986ad2 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5986aed..0x5986af2 -> pad 0x5986b24 cleanup
// eh: try 0x5986b27..0x5986b34 -> pad 0x5986b3c catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598653e: nop 
// asm:   0x5986671: mov rbp, qword ptr [rsp + 0x30]
// asm:   0x5986676: mov qword ptr [rsp + 0x28], r14
// asm:   0x598667b: mov r13, qword ptr [rsp + 0x30]
// asm:   0x5986ac1: jmp 0x5986ad2
// asm:   0x5986ac3: mov qword ptr [rsp + 0x28], r14
// asm:   0x5986ac8: jmp 0x5986ad2
// asm:   0x5986aca: jmp 0x5986ad2
// asm:   0x5986acc: jmp 0x5986ad2
// asm:   0x5986ace: jmp 0x5986ad2
// asm:   0x5986ad0: jmp 0x5986ad2
// asm:   0x5986ad2: mov rbp, rax
// asm:   0x5986ad5: cmp edx, 1
// asm:   0x5986ad8: jne 0x5986b27
// asm:   0x5986ada: mov rdi, rbp
// asm:   0x5986add: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5986ae2: mov rbx, qword ptr [rax]
// asm:   0x5986ae5: mov qword ptr [rsp + 0xe0], rbx
// asm:   0x5986aed: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5986af2: lea rax, [rip + 0x19087df]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x5986af9: mov rsi, qword ptr [rax]
// asm:   0x5986afc: lea rdi, [rsp + 0xf0]
// asm:   0x5986b04: call 0x4d821f0  ; System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose()
// asm:   0x5986b09: test rbx, rbx
// asm:   0x5986b0c: mov rbp, qword ptr [rsp + 0x30]
// asm:   0x5986b11: mov r14, qword ptr [rsp + 0x28]
// asm:   0x5986b16: je 0x5986926
// asm:   0x5986b1c: mov rdi, rbx
// asm:   0x5986b1f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5986b24: mov rbp, rax
// asm:   0x5986b27: lea rdi, [rsp + 0xe0]
// asm:   0x5986b2f: call 0x2fd43b0  ; il2cpp_runtime_helper_02fd43b0()
// asm:   0x5986b34: mov rdi, rbp
// asm:   0x5986b37: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5986b3c: mov rdi, rax
// asm:   0x5986b3f: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Mesh_o *
Map_MapFracture__CreateMesh
          (System_Collections_Generic_List_MapFracture_Triangle__o *triangles,int32_t submeshCount,
          UnityEngine_Vector3_o *center,MethodInfo *method)

{
  int capacity;
  Map_MapFracture_Vertex_o vertex;
  Map_MapFracture_Vertex_o vertex_00;
  Map_MapFracture_Vertex_o vertex_01;
  undefined8 uVar1;
  undefined8 uVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  bool bVar21;
  System_Collections_Generic_List_Vector3__o *__this;
  System_Collections_Generic_List_Vector3__o *__this_00;
  System_Collections_Generic_List_Vector2__o *__this_01;
  System_Collections_Generic_List_Color__o *__this_02;
  Il2CppObject *pIVar22;
  Il2CppClass *pIVar23;
  Il2CppObject *pIVar24;
  UnityEngine_Object_o *__this_03;
  System_Collections_Generic_List_int__o *__this_04;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  ulong uVar25;
  Il2CppObject *pIVar26;
  MethodInfo *in_R9;
  System_Collections_Generic_List_Enumerator_T__o local_1d8;
  undefined8 uStack_1c0;
  System_Collections_Generic_List_T__o *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  float fStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  float fStack_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  System_Collections_Generic_List_Enumerator_T__o local_128;
  int32_t iStack_110;
  int32_t iStack_10c;
  float local_108;
  undefined4 uStack_104;
  int32_t iStack_100;
  int32_t iStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  System_Collections_Generic_List_T__o *local_a8;
  int32_t iStack_a0;
  int32_t iStack_9c;
  System_Collections_Generic_List_T__o *local_98;
  int32_t iStack_90;
  int32_t iStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  
  method_00 = (MethodInfo *)center;
  if (Il2CppMethodInitialized_07545a17 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_Vector2_ctor_7197518);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197570);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color_ctor_7193c18)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&"Map debris");
    Il2CppMethodInitialized_07545a17 = '\x01';
    method_00 = extraout_RDX;
  }
  local_168 = 0;
  uStack_164 = 0;
  fStack_160 = 0.0;
  uStack_15c = 0;
  local_178 = 0;
  fStack_170 = 0.0;
  uStack_16c = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_1b0._0_4_ = 0;
  uStack_1b0._4_4_ = 0;
  local_1d8.fields._current = (Il2CppObject *)0x0;
  uStack_1c0._0_4_ = 0;
  uStack_1c0._4_4_ = 0;
  local_1d8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_1d8.fields._index = 0;
  local_1d8.fields._version = 0;
  Map_MapFracture__GetBounds((UnityEngine_Bounds_o *)&local_128,triangles,method_00);
  *(System_Collections_Generic_List_T__o **)&center->fields = local_128.fields._list;
  (center->fields).z = (float)local_128.fields._index;
  if (triangles != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    capacity = (triangles->fields)._size * 3;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
    System_Collections_Generic_List_Vector3____ctor_39ff040
              (__this,capacity,
               (MethodInfo_39FF040 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197570);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
    System_Collections_Generic_List_Vector3____ctor_39ff040
              (__this_00,capacity,
               (MethodInfo_39FF040 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197570);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector2);
    System_Collections_Generic_List_Vector2____ctor_39f8cf0
              (__this_01,capacity,
               (MethodInfo_39F8CF0 *)MethodInfo_System_Collections_Generic_List_Vector2_ctor_7197518);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Color);
    System_Collections_Generic_List_Color____ctor_51eb4b0
              (__this_02,capacity,
               (MethodInfo_51EB4B0 *)MethodInfo_System_Collections_Generic_List_Color_ctor_7193c18);
    pIVar22 = SZArrayNew(TypeInfo_System_Collections_Generic_List_int__array,submeshCount);
    if (0 < submeshCount) {
      if (pIVar22 == (Il2CppObject *)0x0) {
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
        System_Collections_Generic_List_int____ctor
                  (__this_04,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
        ThrowNullReferenceException();
      }
      pIVar26 = pIVar22 + 2;
      uVar25 = 0;
      do {
        pIVar23 = (Il2CppClass *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
        System_Collections_Generic_List_int____ctor
                  ((System_Collections_Generic_List_int__o *)pIVar23,
                   (MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
        if ((pIVar23 != (Il2CppClass *)0x0) &&
           (pIVar24 = il2cpp_vm_Object_IsInst((Il2CppObject *)pIVar23,(pIVar22->klass->_1).element_class),
           pIVar24 == (Il2CppObject *)0x0)) {
          pIVar22 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar22,(MethodInfo *)0x0);
        }
        if (*(uint *)&pIVar22[1].monitor <= uVar25) goto label_05986a26;
        pIVar26->klass = pIVar23;
        Il2CppCodeGenWriteBarrier(&pIVar26->klass);
        uVar25 = uVar25 + 1;
        pIVar26 = (Il2CppObject *)&pIVar26->monitor;
      } while ((uint)submeshCount != uVar25);
    }
    System_Collections_Generic_List_MapFracture_Triangle___GetEnumerator
              (&local_128,triangles,
               (MethodInfo_3AB3540 *)
               MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    local_168 = (undefined4)local_b8;
    uStack_164 = (undefined4)((ulong)local_b8 >> 0x20);
    fStack_160 = (float)uStack_b0;
    uStack_15c = (uint)((ulong)uStack_b0 >> 0x20);
    local_178 = CONCAT44(uStack_c4,local_c8);
    fStack_170 = fStack_c0;
    uStack_16c = uStack_bc;
    uStack_180 = CONCAT44(uStack_cc,uStack_d0);
    local_188 = local_d8;
    local_198 = CONCAT44(fStack_e4,local_e8);
    uStack_190 = uStack_e0;
    local_1b8 = (System_Collections_Generic_List_T__o *)CONCAT44(uStack_104,local_108);
    uStack_1b0._4_4_ = iStack_fc;
    uStack_1b0._0_4_ = iStack_100;
    local_1a8 = CONCAT44(uStack_f4,local_f8);
    uStack_1a0 = CONCAT44(uStack_ec,uStack_f0);
    local_1d8.fields._current = local_128.fields._current;
    uStack_1c0._0_4_ = iStack_110;
    uStack_1c0._4_4_ = iStack_10c;
    local_1d8.fields._list = local_128.fields._list;
    local_1d8.fields._index = local_128.fields._index;
    local_1d8.fields._version = local_128.fields._version;
    if (pIVar22 == (Il2CppObject *)0x0) {
      bVar21 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                         (&local_1d8,
                          (MethodInfo_4C82200 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext)
      ;
      if (bVar21) {
        ThrowNullReferenceException();
      }
    }
    else {
      while (bVar21 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                                (&local_1d8,
                                 (MethodInfo_4C82200 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext
                                ), fVar20 = fStack_160, uVar19 = uStack_164, uVar18 = local_168,
            uVar17 = uStack_16c, fVar16 = fStack_170, uVar14 = local_178, uVar12 = uStack_180,
            uVar11 = local_188, uVar10 = uStack_190, uVar9 = local_198, uVar8 = uStack_1a0, uVar7 = local_1a8,
            uVar4 = uStack_1b0, pSVar3 = local_1b8, uVar1 = uStack_1c0, pIVar26 = local_1d8.fields._current,
            bVar21) {
        if (*(uint *)&pIVar22[1].monitor <= uStack_15c) {
          ThrowIndexOutOfRangeException();
        }
        pIVar23 = (&pIVar22[2].klass)[(int)uStack_15c];
        fVar6 = (float)local_1a8;
        vertex.fields.Position.fields.z = (float)(int32_t)uStack_1c0;
        vertex.fields.Normal.fields.x = (float)uStack_1c0._4_4_;
        vertex.fields.Position.fields._0_8_ = local_1d8.fields._current;
        vertex.fields.Normal.fields._4_8_ = local_1b8;
        vertex.fields.UV.fields.x = (float)(int32_t)uStack_1b0;
        vertex.fields.UV.fields.y = (float)uStack_1b0._4_4_;
        vertex.fields.Shade = (float)local_1a8;
        Map_MapFracture__AddVertex
                  (vertex,(UnityEngine_Vector3_o)center->fields,
                   (System_Collections_Generic_List_int__o *)pIVar23,__this,__this_00,__this_01,__this_02,
                   in_R9);
        uVar5 = uStack_1b0;
        uVar2 = uStack_1c0;
        local_c8 = uVar18;
        uStack_c4 = uVar19;
        fStack_c0 = fVar20;
        local_d8 = uVar14;
        local_e8 = (undefined4)uVar11;
        fStack_e4 = (float)((ulong)uVar11 >> 0x20);
        uStack_e0 = uVar12;
        local_f8 = (undefined4)uVar9;
        uStack_f4 = (undefined4)((ulong)uVar9 >> 0x20);
        uStack_f0 = (undefined4)uVar10;
        uStack_ec = (undefined4)((ulong)uVar10 >> 0x20);
        uStack_104 = (undefined4)((ulong)uVar7 >> 0x20);
        iStack_100 = (int32_t)uVar8;
        iStack_fc = (int32_t)((ulong)uVar8 >> 0x20);
        local_128.fields._current = (Il2CppObject *)pSVar3;
        uStack_1b0._0_4_ = (int32_t)uVar4;
        uStack_1b0._4_4_ = SUB84(uVar4,4);
        iStack_110 = (int32_t)uStack_1b0;
        iStack_10c = uStack_1b0._4_4_;
        local_128.fields._list = (System_Collections_Generic_List_T__o *)pIVar26;
        uStack_1c0._0_4_ = (int32_t)uVar1;
        uStack_1c0._4_4_ = SUB84(uVar1,4);
        local_128.fields._index = (int32_t)uStack_1c0;
        local_128.fields._version = uStack_1c0._4_4_;
        local_158 = CONCAT44(iStack_100,uStack_104);
        uStack_150 = CONCAT44(local_f8,iStack_fc);
        local_148 = CONCAT44(uStack_f0,uStack_f4);
        uStack_140 = CONCAT44(local_e8,uStack_ec);
        local_138 = fStack_e4;
        vertex_00.fields.Position.fields.z = (float)iStack_fc;
        vertex_00.fields.Normal.fields.x = (float)local_f8;
        vertex_00.fields.Position.fields.x = (float)uStack_104;
        vertex_00.fields.Position.fields.y = (float)iStack_100;
        vertex_00.fields.Normal.fields.y = (float)uStack_f4;
        vertex_00.fields.Normal.fields.z = (float)uStack_f0;
        vertex_00.fields.UV.fields.x = (float)uStack_ec;
        vertex_00.fields.UV.fields.y = (float)local_e8;
        vertex_00.fields.Shade = fStack_e4;
        uStack_1c0 = uVar2;
        uStack_1b0 = uVar5;
        local_108 = fVar6;
        Map_MapFracture__AddVertex
                  (vertex_00,(UnityEngine_Vector3_o)center->fields,
                   (System_Collections_Generic_List_int__o *)pIVar23,__this,__this_00,__this_01,__this_02,
                   in_R9);
        uVar15 = local_178;
        uVar13 = uStack_180;
        uVar5 = uStack_1b0;
        uVar2 = uStack_1c0;
        uStack_48 = uVar18;
        uStack_44 = uVar19;
        fStack_40 = fVar20;
        uStack_58 = uVar14;
        local_68 = uVar11;
        uStack_60 = uVar12;
        local_78 = uVar9;
        uStack_70 = uVar10;
        local_88 = uVar7;
        uStack_80 = uVar8;
        local_98 = pSVar3;
        uStack_1b0._0_4_ = (int32_t)uVar4;
        uStack_1b0._4_4_ = SUB84(uVar4,4);
        iStack_90 = (int32_t)uStack_1b0;
        iStack_8c = uStack_1b0._4_4_;
        local_a8 = (System_Collections_Generic_List_T__o *)pIVar26;
        uStack_1c0._0_4_ = (int32_t)uVar1;
        uStack_1c0._4_4_ = SUB84(uVar1,4);
        iStack_a0 = (int32_t)uStack_1c0;
        iStack_9c = uStack_1c0._4_4_;
        vertex_01.fields.Normal.fields.z = (float)uVar17;
        vertex_01.fields.Normal.fields.y = fVar16;
        vertex_01.fields.UV.fields.y = (float)uVar19;
        vertex_01.fields.UV.fields.x = (float)uVar18;
        local_178._0_4_ = (undefined4)uVar14;
        local_178._4_4_ = SUB84(uVar14,4);
        vertex_01.fields.Position.fields.z = (float)(undefined4)local_178;
        vertex_01.fields.Normal.fields.x = (float)local_178._4_4_;
        uStack_180._0_4_ = (undefined4)uVar12;
        uStack_180._4_4_ = SUB84(uVar12,4);
        vertex_01.fields.Position.fields.x = (float)(undefined4)uStack_180;
        vertex_01.fields.Position.fields.y = (float)uStack_180._4_4_;
        vertex_01.fields.Shade = fVar20;
        uStack_1c0 = uVar2;
        uStack_1b0 = uVar5;
        uStack_180 = uVar13;
        local_178 = uVar15;
        Map_MapFracture__AddVertex
                  (vertex_01,(UnityEngine_Vector3_o)center->fields,
                   (System_Collections_Generic_List_int__o *)pIVar23,__this,__this_00,__this_01,__this_02,
                   in_R9);
      }
    }
    System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
              (&local_1d8,
               (MethodInfo_4C821F0 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    __this_03 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
    UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this_03,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_03,"Map debris",(MethodInfo *)0x0);
      UnityEngine_Mesh__set_indexFormat
                ((UnityEngine_Mesh_o *)__this_03,(uint)(0xffff < capacity),(MethodInfo *)0x0);
      UnityEngine_Mesh__SetVertices((UnityEngine_Mesh_o *)__this_03,__this,(MethodInfo *)0x0);
      UnityEngine_Mesh__SetNormals((UnityEngine_Mesh_o *)__this_03,__this_00,(MethodInfo *)0x0);
      UnityEngine_Mesh__SetUVs((UnityEngine_Mesh_o *)__this_03,0,__this_01,(MethodInfo *)0x0);
      UnityEngine_Mesh__SetColors((UnityEngine_Mesh_o *)__this_03,__this_02,(MethodInfo *)0x0);
      UnityEngine_Mesh__set_subMeshCount((UnityEngine_Mesh_o *)__this_03,submeshCount,(MethodInfo *)0x0);
      if (0 < submeshCount) {
        if (pIVar22 == (Il2CppObject *)0x0) goto label_05986a3f;
        uVar25 = 0;
        do {
          if (*(uint *)&pIVar22[1].monitor <= uVar25) {
label_05986a26:
            ThrowIndexOutOfRangeException();
          }
          UnityEngine_Mesh__SetTriangles_68eb2d0
                    ((UnityEngine_Mesh_o *)__this_03,
                     (System_Collections_Generic_List_int__o *)(&pIVar22[2].klass)[uVar25],(int32_t)uVar25,
                     false,(MethodInfo *)0x0);
          uVar25 = uVar25 + 1;
        } while ((uint)submeshCount != uVar25);
      }
      UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)__this_03,(MethodInfo *)0x0);
      return (UnityEngine_Mesh_o *)__this_03;
    }
  }
label_05986a3f:
  ThrowNullReferenceException();
}


// Map.MapFracture$$HasVolume
// il2cpp: bool Map_MapFracture__HasVolume (System_Collections_Generic_List_MapFracture_Triangle__o* triangles, float thickness, const MethodInfo* method);
// 0x5986b50

bool Map_MapFracture__HasVolume
               (System_Collections_Generic_List_MapFracture_Triangle__o *triangles,float thickness,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint32_t uVar13;
  Map_MapFracture___c__DisplayClass18_0_o *__this;
  System_Func_Vector3__float__o *pSVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o UVar24;
  float local_f8;
  float fStack_f4;
  float local_d8;
  float fStack_d4;
  float local_c8;
  float fStack_c4;
  Map_MapFracture_Triangle_o local_98;
  
  if (Il2CppMethodInitialized_07545a18 == '\0') {
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
    Il2CppMethodInitialized_07545a18 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapFracture_c__DisplayClass18_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((triangles == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) ||
     (System_Collections_Generic_List_MapFracture_Triangle___get_Item
                (&local_98,triangles,0,
                 (MethodInfo_3AB1AD0 *)
                 MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Item),
     __this == (Map_MapFracture___c__DisplayClass18_0_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (__this->fields).origin.fields.z = local_98.fields.A.fields.Position.fields.z;
  (__this->fields).origin.fields.x = local_98.fields.A.fields.Position.fields.x;
  (__this->fields).origin.fields.y = local_98.fields.A.fields.Position.fields.y;
  pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Vector3_float);
  System_Func_Vector3__float____ctor
            (pSVar14,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__0,(MethodInfo_4F1C360 *)0x0
            );
  UVar23 = Map_MapFracture__Extreme(triangles,pSVar14,method_00);
  uVar1 = (__this->fields).origin.fields.x;
  uVar7 = (__this->fields).origin.fields.y;
  fVar22 = (__this->fields).origin.fields.z;
  (__this->fields).axis.fields.x = UVar23.fields.x - (float)uVar1;
  (__this->fields).axis.fields.y = UVar23.fields.y - (float)uVar7;
  (__this->fields).axis.fields.z = UVar23.fields.z - fVar22;
  pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Vector3_float);
  System_Func_Vector3__float____ctor
            (pSVar14,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__1,(MethodInfo_4F1C360 *)0x0
            );
  UVar23 = Map_MapFracture__Extreme(triangles,pSVar14,method_01);
  uVar2 = (__this->fields).origin.fields.x;
  uVar8 = (__this->fields).origin.fields.y;
  fVar21 = UVar23.fields.x - (float)uVar2;
  uVar3 = (__this->fields).axis.fields.x;
  uVar9 = (__this->fields).axis.fields.y;
  fVar22 = (__this->fields).axis.fields.z;
  fVar15 = UVar23.fields.z - (__this->fields).origin.fields.z;
  fVar16 = UVar23.fields.y - (float)uVar8;
  fVar20 = (float)uVar9 * fVar15 - fVar22 * fVar16;
  fVar16 = (float)uVar3 * fVar16 - (float)uVar9 * fVar21;
  fVar22 = fVar21 * fVar22 - fVar15 * (float)uVar3;
  (__this->fields).normal.fields.x = fVar20;
  (__this->fields).normal.fields.y = fVar22;
  (__this->fields).normal.fields.z = fVar16;
  if (0.0001 <= fVar16 * fVar16 + fVar22 * fVar22 + fVar20 * fVar20) {
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      fVar22 = (__this->fields).normal.fields.y;
      fVar16 = (__this->fields).normal.fields.z;
      fVar20 = (__this->fields).normal.fields.x;
      uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar13 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar22 = fVar16 * fVar16 + fVar22 * fVar22 + fVar20 * fVar20;
    if (fVar22 < 0.0) {
      fVar22 = sqrtf(fVar22);
      uVar17 = extraout_XMM0_Db;
    }
    else {
      uVar17 = 0;
      fVar22 = SQRT(fVar22);
    }
    if (1e-05 < fVar22) {
      uVar4 = (__this->fields).normal.fields.x;
      uVar10 = (__this->fields).normal.fields.y;
      auVar18._4_4_ = uVar10;
      auVar18._0_4_ = uVar4;
      auVar18._8_8_ = 0;
      auVar19._4_4_ = fVar22;
      auVar19._0_4_ = fVar22;
      auVar19._8_4_ = uVar17;
      auVar19._12_4_ = uVar17;
      auVar19 = divps(auVar18,auVar19);
      (__this->fields).normal.fields.x = (float)auVar19._0_4_;
      (__this->fields).normal.fields.y = (float)auVar19._4_4_;
      fVar22 = (__this->fields).normal.fields.z / fVar22;
    }
    else {
      (__this->fields).normal.fields.x = 0.0;
      (__this->fields).normal.fields.y = 0.0;
      fVar22 = 0.0;
    }
    (__this->fields).normal.fields.z = fVar22;
    uVar5 = (__this->fields).normal.fields.x;
    uVar11 = (__this->fields).normal.fields.y;
    pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Vector3_float);
    System_Func_Vector3__float____ctor
              (pSVar14,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__2,
               (MethodInfo_4F1C360 *)0x0);
    UVar23 = Map_MapFracture__Extreme(triangles,pSVar14,method_02);
    uVar6 = (__this->fields).normal.fields.x;
    uVar12 = (__this->fields).normal.fields.y;
    fVar16 = (__this->fields).normal.fields.z;
    pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Vector3_float);
    System_Func_Vector3__float____ctor
              (pSVar14,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass18_0_HasVolume_b__3,
               (MethodInfo_4F1C360 *)0x0);
    UVar24 = Map_MapFracture__Extreme(triangles,pSVar14,method_03);
    local_c8 = UVar23.fields.x;
    fStack_c4 = UVar23.fields.y;
    return thickness <=
           (UVar23.fields.z * fVar22 + fStack_c4 * (float)uVar11 + local_c8 * (float)uVar5) -
           (UVar24.fields.z * fVar16 + UVar24.fields.y * (float)uVar12 + UVar24.fields.x * (float)uVar6);
  }
  return false;
}


// Map.MapFracture$$Extreme
// il2cpp: UnityEngine_Vector3_o Map_MapFracture__Extreme (System_Collections_Generic_List_MapFracture_Triangle__o* triangles, System_Func_Vector3__float__o* score, const MethodInfo* method);
// 0x598b310
// eh: try 0x598b481..0x598b5b9 -> pad 0x598b64d (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x598b668..0x598b66d -> pad 0x598b691 cleanup
// eh: try 0x598b694..0x598b6a1 -> pad 0x598b6a9 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598b62d: mov rbx, rax
// asm:   0x598b630: movaps xmm0, xmmword ptr [rsp + 0x50]
// asm:   0x598b635: movaps xmmword ptr [rsp + 0x10], xmm0
// asm:   0x598b63a: jmp 0x598b650
// asm:   0x598b63c: mov rbx, rax
// asm:   0x598b63f: movaps xmm0, xmmword ptr [rsp + 0x60]
// asm:   0x598b644: movaps xmmword ptr [rsp + 0x10], xmm0
// asm:   0x598b649: jmp 0x598b650
// asm:   0x598b64b: jmp 0x598b64d
// asm:   0x598b64d: mov rbx, rax
// asm:   0x598b650: cmp edx, 1
// asm:   0x598b653: jne 0x598b694
// asm:   0x598b655: mov rdi, rbx
// asm:   0x598b658: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x598b65d: mov rbx, qword ptr [rax]
// asm:   0x598b660: mov qword ptr [rsp + 0x110], rbx
// asm:   0x598b668: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x598b66d: lea rax, [rip + 0x1903c64]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x598b674: mov rsi, qword ptr [rax]
// asm:   0x598b677: lea rdi, [rsp + 0x90]
// asm:   0x598b67f: call 0x4d821f0  ; System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose()
// asm:   0x598b684: test rbx, rbx
// asm:   0x598b687: je 0x598b611
// asm:   0x598b689: mov rdi, rbx
// asm:   0x598b68c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x598b691: mov rbx, rax
// asm:   0x598b694: lea rdi, [rsp + 0x110]
// asm:   0x598b69c: call 0x2fd43e0  ; il2cpp_runtime_helper_02fd43e0()
// asm:   0x598b6a1: mov rdi, rbx
// asm:   0x598b6a4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x598b6a9: mov rdi, rax
// asm:   0x598b6ac: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Vector3_o
Map_MapFracture__Extreme
          (System_Collections_Generic_List_MapFracture_Triangle__o *triangles,
          System_Func_Vector3__float__o *score,MethodInfo *method)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  System_Collections_Generic_List_Enumerator_T__o *pSVar4;
  bool bVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  float local_18c;
  Il2CppObject *local_188;
  float local_168;
  Il2CppObject *local_148;
  Il2CppObject *local_138;
  Il2CppObject *local_128;
  System_Collections_Generic_List_Enumerator_T__o local_108;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  float fStack_d4;
  float fStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  Il2CppObject *pIStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [112];
  
  if (Il2CppMethodInitialized_07545a19 == '\0') {
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
    Il2CppMethodInitialized_07545a19 = '\x01';
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  pIStack_b0 = (Il2CppObject *)0x0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  fStack_d4 = 0.0;
  fStack_d0 = 0.0;
  uStack_cc = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_108.fields._current = (Il2CppObject *)0x0;
  uStack_f0 = 0;
  local_108.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_108.fields._index = 0;
  local_108.fields._version = 0;
  if (triangles != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    System_Collections_Generic_List_MapFracture_Triangle___get_Item
              ((Map_MapFracture_Triangle_o *)local_88,triangles,0,
               (MethodInfo_3AB1AD0 *)MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Item)
    ;
    if (score != (System_Func_Vector3__float__o *)0x0) {
      local_188 = (Il2CppObject *)local_88._0_8_;
      local_168 = (float)(*(code *)(score->fields).invoke_impl)
                                   ((score->fields).method_code,(score->fields).method);
      System_Collections_Generic_List_MapFracture_Triangle___GetEnumerator
                (&local_108,triangles,
                 (MethodInfo_3AB3540 *)
                 MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
      local_88._0_4_ = 0.0;
      local_88._4_4_ = 0.0;
      pSVar4 = &local_108;
      fVar1 = (float)local_88._8_4_;
      while( true ) {
        local_88._8_8_ = pSVar4;
        bVar5 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                          (&local_108,
                           (MethodInfo_4C82200 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext
                          );
        uVar3 = uStack_cc;
        if (!bVar5) break;
        uVar2 = (uint)uStack_f0;
        local_148 = (Il2CppObject *)CONCAT44(fStack_d0,fStack_d4);
        local_128 = pIStack_b0;
        local_18c = (float)local_a8;
        local_138 = local_108.fields._current;
        fVar7 = (float)(*(code *)(score->fields).invoke_impl)
                                 ((score->fields).method_code,(score->fields).method);
        if (fVar7 <= local_168) {
          local_138 = local_188;
        }
        uVar6 = -(uint)(local_168 < fVar7);
        fVar8 = (float)(*(code *)(score->fields).invoke_impl)
                                 ((score->fields).method_code,(score->fields).method);
        fVar7 = (float)(~uVar6 & (uint)local_168 | (uint)fVar7 & uVar6);
        if (fVar8 <= fVar7) {
          local_148 = local_138;
        }
        fVar9 = (float)(*(code *)(score->fields).invoke_impl)
                                 ((score->fields).method_code,(score->fields).method);
        fVar10 = (float)(~-(uint)(fVar7 < fVar8) & (uint)fVar7 | -(uint)(fVar7 < fVar8) & (uint)fVar8);
        if (fVar9 <= fVar10) {
          local_128 = local_148;
          local_18c = (float)(~-(uint)(fVar7 < fVar8) & (~uVar6 & (uint)fVar1 | uVar2 & uVar6) |
                             uVar3 & -(uint)(fVar7 < fVar8));
        }
        local_168 = (float)(-(uint)(fVar10 < fVar9) & (uint)fVar9 | ~-(uint)(fVar10 < fVar9) & (uint)fVar10);
        local_188 = local_128;
        pSVar4 = (System_Collections_Generic_List_Enumerator_T__o *)local_88._8_8_;
        fVar1 = local_18c;
      }
      System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
                (&local_108,
                 (MethodInfo_4C821F0 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
      UVar11.fields.z = fVar1;
      UVar11.fields._0_8_ = local_188;
      return (UnityEngine_Vector3_o)UVar11.fields;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$Consider
// il2cpp: void Map_MapFracture__Consider (UnityEngine_Vector3_o point, System_Func_Vector3__float__o* score, UnityEngine_Vector3_o* best, float* bestScore, const MethodInfo* method);
// 0x598b6c0

void Map_MapFracture__Consider
               (UnityEngine_Vector3_o point,System_Func_Vector3__float__o *score,UnityEngine_Vector3_o *best,
               float *bestScore,MethodInfo *method)

{
  float fVar1;
  
  if (score == (System_Func_Vector3__float__o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = (float)(*(code *)(score->fields).invoke_impl)((score->fields).method_code,(score->fields).method);
  if (*bestScore < fVar1) {
    (best->fields).x = point.fields.x;
    (best->fields).y = point.fields.y;
    (best->fields).z = point.fields.z;
    *bestScore = fVar1;
  }
  return;
}


// Map.MapFracture$$CreateCollisionMesh
// il2cpp: UnityEngine_Mesh_o* Map_MapFracture__CreateCollisionMesh (System_Collections_Generic_List_MapFracture_Triangle__o* triangles, UnityEngine_Vector3_o center, float scale, const MethodInfo* method);
// 0x5986f50
// eh: try 0x59871c9..0x598756b -> pad 0x598758e (+15 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59875a9..0x59875ae -> pad 0x59875d3 cleanup
// eh: try 0x59875d6..0x59875e3 -> pad 0x59875eb catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5987570: jmp 0x598758e
// asm:   0x5987572: jmp 0x598758e
// asm:   0x5987574: jmp 0x598758e
// asm:   0x5987576: jmp 0x598758e
// asm:   0x5987578: jmp 0x598758e
// asm:   0x598757a: jmp 0x598758e
// asm:   0x598757c: jmp 0x598758e
// asm:   0x598757e: jmp 0x598758e
// asm:   0x5987580: jmp 0x598758e
// asm:   0x5987582: jmp 0x598758e
// asm:   0x5987584: jmp 0x598758e
// asm:   0x5987586: jmp 0x598758e
// asm:   0x5987588: jmp 0x598758e
// asm:   0x598758a: jmp 0x598758e
// asm:   0x598758c: jmp 0x598758e
// asm:   0x598758e: mov r15, rax
// asm:   0x5987591: cmp edx, 1
// asm:   0x5987594: jne 0x59875d6
// asm:   0x5987596: mov rdi, r15
// asm:   0x5987599: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x598759e: mov r15, qword ptr [rax]
// asm:   0x59875a1: mov qword ptr [rsp + 0xf8], r15
// asm:   0x59875a9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59875ae: lea rax, [rip + 0x1907d23]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x59875b5: mov rsi, qword ptr [rax]
// asm:   0x59875b8: lea rdi, [rsp + 0x40]
// asm:   0x59875bd: call 0x4d821f0  ; System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose()
// asm:   0x59875c2: test r15, r15
// asm:   0x59875c5: je 0x59874c4
// asm:   0x59875cb: mov rdi, r15
// asm:   0x59875ce: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59875d3: mov r15, rax
// asm:   0x59875d6: lea rdi, [rsp + 0xf8]
// asm:   0x59875de: call 0x2fd4410  ; il2cpp_runtime_helper_02fd4410()
// asm:   0x59875e3: mov rdi, r15
// asm:   0x59875e6: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59875eb: mov rdi, rax
// asm:   0x59875ee: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Mesh_o *
Map_MapFracture__CreateCollisionMesh
          (System_Collections_Generic_List_MapFracture_Triangle__o *triangles,UnityEngine_Vector3_o center,
          float scale,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int32_t iVar3;
  uint uVar4;
  System_Int32_array *pSVar5;
  UnityEngine_Vector3_array *pUVar6;
  MethodInfo *pMVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  System_Collections_Generic_List_Vector3__o *__this;
  System_Collections_Generic_List_int__o *__this_00;
  UnityEngine_Object_o *__this_01;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_o item;
  UnityEngine_Vector3_o item_00;
  UnityEngine_Vector3_o item_01;
  float local_178;
  float fStack_174;
  undefined1 local_168 [8];
  undefined1 *puStack_160;
  Il2CppObject *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  float fStack_12c;
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
  undefined1 local_b0 [16];
  Il2CppObject *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  fVar14 = center.fields.z;
  if (Il2CppMethodInitialized_07545a1a == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197570);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&"Map debris collision");
    Il2CppMethodInitialized_07545a1a = '\x01';
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  fStack_12c = 0.0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = (Il2CppObject *)0x0;
  uStack_150 = 0;
  local_168 = (undefined1  [8])0x0;
  puStack_160 = (undefined1 *)0x0;
  if (triangles != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    iVar2 = (triangles->fields)._size;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
    System_Collections_Generic_List_Vector3____ctor_39ff040
              (__this,iVar2 * 3,
               (MethodInfo_39FF040 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197570);
    iVar2 = (triangles->fields)._size;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor_3916240
              (__this_00,iVar2 * 3,
               (MethodInfo_3916240 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
    System_Collections_Generic_List_MapFracture_Triangle___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_b0,triangles,
               (MethodInfo_3AB3540 *)
               MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    local_f8 = local_40;
    uStack_f0 = uStack_38;
    local_108 = local_50;
    uStack_100 = uStack_48;
    local_118 = local_60;
    uStack_110 = uStack_58;
    local_128 = local_70;
    uStack_120 = uStack_68;
    local_138 = (undefined4)local_80;
    uStack_134 = (undefined4)((ulong)local_80 >> 0x20);
    uStack_130 = (undefined4)uStack_78;
    fStack_12c = (float)((ulong)uStack_78 >> 0x20);
    local_148 = local_90;
    uStack_140 = uStack_88;
    local_158 = local_a0;
    uStack_150 = uStack_98;
    local_168 = (undefined1  [8])local_b0._0_8_;
    puStack_160 = (undefined1 *)local_b0._8_8_;
    local_b0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_b0._8_8_ = local_168;
    if (__this == (System_Collections_Generic_List_Vector3__o *)0x0) {
      bVar11 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                         ((System_Collections_Generic_List_Enumerator_T__o *)local_168,
                          (MethodInfo_4C82200 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext)
      ;
      if (bVar11) {
        ThrowNullReferenceException();
      }
    }
    else if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
      bVar11 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                         ((System_Collections_Generic_List_Enumerator_T__o *)local_168,
                          (MethodInfo_4C82200 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext)
      ;
      if (bVar11) {
label_0598754d:
        ThrowNullReferenceException();
      }
    }
    else {
      while( true ) {
        bVar11 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                           ((System_Collections_Generic_List_Enumerator_T__o *)local_168,
                            (MethodInfo_4C82200 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext
                           );
        fVar9 = fStack_12c;
        pMVar7 = MethodInfo_System_Collections_Generic_List_int_Add;
        if (!bVar11) break;
        fVar8 = (float)uStack_150;
        fVar10 = (float)local_108;
        iVar3 = (__this->fields)._size;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_00->fields)._items;
        if (pSVar5 == (System_Int32_array *)0x0) goto label_0598754d;
        uVar4 = (__this_00->fields)._size;
        local_e8 = uStack_110;
        uStack_e0 = 0;
        uStack_d0 = 0;
        local_d8 = CONCAT44(uStack_130,uStack_134);
        if (uVar4 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = iVar3;
          fVar12 = SUB84(local_158,0);
          fVar13 = (float)((ulong)local_158 >> 0x20);
        }
        else {
          local_c8 = local_158;
          uStack_c0 = 0;
          System_Collections_Generic_List_int___AddWithResize
                    (__this_00,iVar3,(MethodInfo_3916AC0 *)pMVar7->klass->rgctx_data[0xe].method);
          fVar12 = (float)local_c8;
          fVar13 = local_c8._4_4_;
        }
        pMVar7 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar6 = (__this->fields)._items;
        if (pUVar6 == (UnityEngine_Vector3_array *)0x0) {
          ThrowNullReferenceException();
        }
        local_178 = center.fields.x;
        fStack_174 = center.fields.y;
        item.fields.x = (fVar12 - local_178) * scale;
        item.fields.y = (fVar13 - fStack_174) * scale;
        item.fields.z = (fVar8 - fVar14) * scale;
        uVar4 = (__this->fields)._size;
        if (uVar4 < (uint)pUVar6->max_length) {
          (__this->fields)._size = uVar4 + 1;
          pUVar6->m_Items[(int)uVar4].fields.x = item.fields.x;
          pUVar6->m_Items[(int)uVar4].fields.y = item.fields.y;
          pUVar6->m_Items[(int)uVar4].fields.z = item.fields.z;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize
                    (__this,item,(MethodInfo_39FF950 *)pMVar7->klass->rgctx_data[0xe].method);
        }
        pMVar7 = MethodInfo_System_Collections_Generic_List_int_Add;
        iVar3 = (__this->fields)._size;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_00->fields)._items;
        if (pSVar5 == (System_Int32_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar4 = (__this_00->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = iVar3;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize
                    (__this_00,iVar3,(MethodInfo_3916AC0 *)pMVar7->klass->rgctx_data[0xe].method);
        }
        pMVar7 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar6 = (__this->fields)._items;
        if (pUVar6 == (UnityEngine_Vector3_array *)0x0) {
          ThrowNullReferenceException();
        }
        item_00.fields.x = ((float)local_d8 - local_178) * scale;
        item_00.fields.y = (local_d8._4_4_ - fStack_174) * scale;
        item_00.fields.z = (fVar9 - fVar14) * scale;
        uVar4 = (__this->fields)._size;
        if (uVar4 < (uint)pUVar6->max_length) {
          (__this->fields)._size = uVar4 + 1;
          pUVar6->m_Items[(int)uVar4].fields.x = item_00.fields.x;
          pUVar6->m_Items[(int)uVar4].fields.y = item_00.fields.y;
          pUVar6->m_Items[(int)uVar4].fields.z = item_00.fields.z;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize
                    (__this,item_00,(MethodInfo_39FF950 *)pMVar7->klass->rgctx_data[0xe].method);
        }
        pMVar7 = MethodInfo_System_Collections_Generic_List_int_Add;
        iVar3 = (__this->fields)._size;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_00->fields)._items;
        if (pSVar5 == (System_Int32_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar4 = (__this_00->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = iVar3;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize
                    (__this_00,iVar3,(MethodInfo_3916AC0 *)pMVar7->klass->rgctx_data[0xe].method);
        }
        pMVar7 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar6 = (__this->fields)._items;
        if (pUVar6 == (UnityEngine_Vector3_array *)0x0) {
          ThrowNullReferenceException();
        }
        item_01.fields.x = ((float)local_e8 - local_178) * scale;
        item_01.fields.y = (local_e8._4_4_ - fStack_174) * scale;
        item_01.fields.z = (fVar10 - fVar14) * scale;
        uVar4 = (__this->fields)._size;
        if (uVar4 < (uint)pUVar6->max_length) {
          (__this->fields)._size = uVar4 + 1;
          pUVar6->m_Items[(int)uVar4].fields.x = item_01.fields.x;
          pUVar6->m_Items[(int)uVar4].fields.y = item_01.fields.y;
          pUVar6->m_Items[(int)uVar4].fields.z = item_01.fields.z;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize
                    (__this,item_01,(MethodInfo_39FF950 *)pMVar7->klass->rgctx_data[0xe].method);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
              ((System_Collections_Generic_List_Enumerator_T__o *)local_168,
               (MethodInfo_4C821F0 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    __this_01 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
    UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this_01,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_01,"Map debris collision",(MethodInfo *)0x0);
      if (__this != (System_Collections_Generic_List_Vector3__o *)0x0) {
        UnityEngine_Mesh__set_indexFormat
                  ((UnityEngine_Mesh_o *)__this_01,(uint)(0xffff < (__this->fields)._size),(MethodInfo *)0x0);
        UnityEngine_Mesh__SetVertices((UnityEngine_Mesh_o *)__this_01,__this,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetTriangles_68eb2d0
                  ((UnityEngine_Mesh_o *)__this_01,__this_00,0,false,(MethodInfo *)0x0);
        return (UnityEngine_Mesh_o *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$AddVertex
// il2cpp: void Map_MapFracture__AddVertex (Map_MapFracture_Vertex_o vertex, UnityEngine_Vector3_o center, System_Collections_Generic_List_int__o* indices, System_Collections_Generic_List_Vector3__o* positions, System_Collections_Generic_List_Vector3__o* normals, System_Collections_Generic_List_Vector2__o* uv, System_Collections_Generic_List_Color__o* colors, const MethodInfo* method);
// 0x598b080

void Map_MapFracture__AddVertex
               (Map_MapFracture_Vertex_o vertex,UnityEngine_Vector3_o center,
               System_Collections_Generic_List_int__o *indices,
               System_Collections_Generic_List_Vector3__o *positions,
               System_Collections_Generic_List_Vector3__o *normals,
               System_Collections_Generic_List_Vector2__o *uv,System_Collections_Generic_List_Color__o *colors
               ,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Color_o *pUVar2;
  int32_t item;
  uint uVar3;
  System_Int32_array *pSVar4;
  UnityEngine_Vector3_array *pUVar5;
  UnityEngine_Vector2_array *pUVar6;
  UnityEngine_Color_array *pUVar7;
  MethodInfo *pMVar8;
  UnityEngine_Color_o item_00;
  UnityEngine_Vector3_o item_01;
  float local_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_07545a1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    Il2CppMethodInitialized_07545a1b = '\x01';
  }
  pMVar8 = MethodInfo_System_Collections_Generic_List_int_Add;
  if ((positions != (System_Collections_Generic_List_Vector3__o *)0x0) &&
     (indices != (System_Collections_Generic_List_int__o *)0x0)) {
    item = (positions->fields)._size;
    piVar1 = &(indices->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (indices->fields)._items;
    if (pSVar4 != (System_Int32_array *)0x0) {
      uVar3 = (indices->fields)._size;
      if (uVar3 < (uint)pSVar4->max_length) {
        (indices->fields)._size = uVar3 + 1;
        pSVar4->m_Items[(int)uVar3] = item;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize
                  (indices,item,(MethodInfo_3916AC0 *)pMVar8->klass->rgctx_data[0xe].method);
      }
      pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
      piVar1 = &(positions->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (positions->fields)._items;
      if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
        local_48 = center.fields.x;
        fStack_44 = center.fields.y;
        item_01.fields.x = vertex.fields.Position.fields.x - local_48;
        item_01.fields.y = vertex.fields.Position.fields.y - fStack_44;
        item_01.fields.z = vertex.fields.Position.fields.z - center.fields.z;
        uVar3 = (positions->fields)._size;
        if (uVar3 < (uint)pUVar5->max_length) {
          (positions->fields)._size = uVar3 + 1;
          pUVar5->m_Items[(int)uVar3].fields.x = item_01.fields.x;
          pUVar5->m_Items[(int)uVar3].fields.y = item_01.fields.y;
          pUVar5->m_Items[(int)uVar3].fields.z = item_01.fields.z;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize
                    (positions,item_01,(MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
        }
        pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
        if (normals != (System_Collections_Generic_List_Vector3__o *)0x0) {
          piVar1 = &(normals->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (normals->fields)._items;
          if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
            uVar3 = (normals->fields)._size;
            if (uVar3 < (uint)pUVar5->max_length) {
              (normals->fields)._size = uVar3 + 1;
              pUVar5->m_Items[(int)uVar3].fields.x = vertex.fields.Normal.fields.x;
              pUVar5->m_Items[(int)uVar3].fields.y = vertex.fields.Normal.fields.y;
              pUVar5->m_Items[(int)uVar3].fields.z = vertex.fields.Normal.fields.z;
            }
            else {
              System_Collections_Generic_List_Vector3___AddWithResize
                        (normals,vertex.fields.Normal.fields,
                         (MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
            }
            pMVar8 = MethodInfo_System_Collections_Generic_List_Vector2_Add;
            if (uv != (System_Collections_Generic_List_Vector2__o *)0x0) {
              piVar1 = &(uv->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar6 = (uv->fields)._items;
              if (pUVar6 != (UnityEngine_Vector2_array *)0x0) {
                uVar3 = (uv->fields)._size;
                if (uVar3 < (uint)pUVar6->max_length) {
                  (uv->fields)._size = uVar3 + 1;
                  pUVar6->m_Items[(int)uVar3].fields = vertex.fields.UV.fields;
                }
                else {
                  System_Collections_Generic_List_Vector2___AddWithResize
                            (uv,vertex.fields.UV,(MethodInfo_39F9590 *)pMVar8->klass->rgctx_data[0xe].method);
                }
                pMVar8 = MethodInfo_System_Collections_Generic_List_Color_Add;
                if (colors != (System_Collections_Generic_List_Color__o *)0x0) {
                  piVar1 = &(colors->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar7 = (colors->fields)._items;
                  if (pUVar7 != (UnityEngine_Color_array *)0x0) {
                    item_00.fields.a = 1.0;
                    item_00.fields.b = vertex.fields.Shade;
                    uVar3 = (colors->fields)._size;
                    if (uVar3 < (uint)pUVar7->max_length) {
                      (colors->fields)._size = uVar3 + 1;
                      pUVar2 = pUVar7->m_Items + (int)uVar3;
                      (pUVar2->fields).r = vertex.fields.Shade;
                      (pUVar2->fields).g = vertex.fields.Shade;
                      (pUVar2->fields).b = vertex.fields.Shade;
                      (pUVar2->fields).a = 1.0;
                      return;
                    }
                    item_00.fields.g = vertex.fields.Shade;
                    item_00.fields.r = vertex.fields.Shade;
                    System_Collections_Generic_List_Color___AddWithResize
                              (colors,item_00,(MethodInfo_51EBD90 *)pMVar8->klass->rgctx_data[0xe].method);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$ReadVertex
// il2cpp: Map_MapFracture_Vertex_o Map_MapFracture__ReadVertex (UnityEngine_Vector3_array* positions, UnityEngine_Vector3_array* normals, UnityEngine_Vector2_array* uv, int32_t index, UnityEngine_Matrix4x4_o toRoot, UnityEngine_Matrix4x4_o normalToRoot, bool hasNormals, bool hasUV, const MethodInfo* method);
// 0x5988b50

Map_MapFracture_Vertex_o *
Map_MapFracture__ReadVertex
          (Map_MapFracture_Vertex_o *__return_storage_ptr__,UnityEngine_Vector3_array *positions,
          UnityEngine_Vector3_array *normals,UnityEngine_Vector2_array *uv,int32_t index,
          UnityEngine_Matrix4x4_o toRoot,UnityEngine_Matrix4x4_o normalToRoot,bool hasNormals,bool hasUV,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_Vector2_Fields UVar4;
  undefined1 auVar8 [16];
  UnityEngine_Vector3_StaticFields *pUVar9;
  UnityEngine_Vector2_StaticFields *pUVar10;
  float fVar11;
  undefined4 extraout_XMM0_Db;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_d0 [92];
  float fStack_74;
  UnityEngine_Vector3_Fields UStack_70;
  float fStack_64;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  if (positions == (UnityEngine_Vector3_array *)0x0) goto label_05988f4d;
  if ((uint)positions->max_length <= (uint)index) goto label_05988f52;
  local_48._0_4_ = positions->m_Items[index].fields.x;
  local_48._4_4_ = positions->m_Items[index].fields.y;
  uStack_40 = 0;
  local_38 = ZEXT416((uint)positions->m_Items[index].fields.z);
  auStack_d0._88_4_ = toRoot.fields.m00;
  fStack_74 = toRoot.fields.m10;
  UStack_70.x = 0.0;
  UStack_70.y = 0.0;
  UStack_70.z = toRoot.fields.m01;
  fStack_64 = toRoot.fields.m11;
  uStack_60._0_4_ = 0.0;
  uStack_60._4_4_ = 0.0;
  auStack_d0._72_4_ = toRoot.fields.m02;
  auStack_d0._76_4_ = toRoot.fields.m12;
  auStack_d0._80_4_ = 0.0;
  auStack_d0._84_4_ = 0.0;
  local_58 = toRoot.fields.m03;
  fStack_54 = toRoot.fields.m13;
  uStack_50 = 0;
  if (hasNormals) {
    if (normals == (UnityEngine_Vector3_array *)0x0) goto label_05988f4d;
    if ((uint)normals->max_length <= (uint)index) goto label_05988f52;
    uVar1 = normals->m_Items[index].fields.x;
    uVar5 = normals->m_Items[index].fields.y;
    fVar11 = normals->m_Items[index].fields.z;
    fVar28 = normalToRoot.fields.m01 * (float)uVar5;
    fVar29 = normalToRoot.fields.m11 * (float)uVar5;
    fVar13 = fVar11;
    fVar15 = fVar11;
    fVar17 = fVar11;
    fVar27 = fVar11 * normalToRoot.fields.m22;
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = normalToRoot.fields.m02;
    fVar24 = normalToRoot.fields.m12;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar30 = (float)uVar5 * 0.0;
    fVar31 = (float)uVar5 * 0.0;
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      auStack_d0._24_16_ = ZEXT416((uint)(fVar11 * normalToRoot.fields.m22));
      auStack_d0._56_4_ = normalToRoot.fields.m02;
      auStack_d0._60_4_ = normalToRoot.fields.m12;
      auStack_d0._64_4_ = 0.0;
      auStack_d0._68_4_ = 0.0;
      auStack_d0._8_4_ = fVar11;
      auStack_d0._12_4_ = fVar11;
      auStack_d0._16_4_ = fVar11;
      auStack_d0._20_4_ = fVar11;
      auStack_d0._40_4_ = fVar28;
      auStack_d0._44_4_ = fVar29;
      auStack_d0._48_4_ = (float)uVar5 * 0.0;
      auStack_d0._52_4_ = (float)uVar5 * 0.0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
      fVar11 = (float)auStack_d0._8_4_;
      fVar13 = (float)auStack_d0._12_4_;
      fVar15 = (float)auStack_d0._16_4_;
      fVar17 = (float)auStack_d0._20_4_;
      fVar27 = (float)auStack_d0._24_4_;
      fVar20 = (float)auStack_d0._28_4_;
      fVar21 = (float)auStack_d0._32_4_;
      fVar22 = (float)auStack_d0._36_4_;
      fVar23 = (float)auStack_d0._56_4_;
      fVar24 = (float)auStack_d0._60_4_;
      fVar25 = (float)auStack_d0._64_4_;
      fVar26 = (float)auStack_d0._68_4_;
      fVar28 = (float)auStack_d0._40_4_;
      fVar29 = (float)auStack_d0._44_4_;
      fVar30 = (float)auStack_d0._48_4_;
      fVar31 = (float)auStack_d0._52_4_;
    }
    auStack_d0._0_4_ = 0.0;
    auStack_d0._4_4_ = 0.0;
    fVar12 = fVar11 * fVar23;
    fVar14 = fVar13 * fVar24;
    fVar16 = fVar15 * fVar25;
    fVar18 = fVar17 * fVar26;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      auStack_d0._28_4_ = fVar20;
      auStack_d0._24_4_ = fVar27;
      auStack_d0._32_4_ = fVar21;
      auStack_d0._36_4_ = fVar22;
      auStack_d0._8_4_ = fVar11 * fVar23;
      auStack_d0._12_4_ = fVar13 * fVar24;
      auStack_d0._16_4_ = fVar15 * fVar25;
      auStack_d0._20_4_ = fVar17 * fVar26;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      fVar12 = (float)auStack_d0._8_4_;
      fVar14 = (float)auStack_d0._12_4_;
      fVar16 = (float)auStack_d0._16_4_;
      fVar18 = (float)auStack_d0._20_4_;
      fVar27 = (float)auStack_d0._24_4_;
    }
    auVar19._0_4_ = (float)uVar1 * normalToRoot.fields.m00 + fVar28 + fVar12;
    auVar19._4_4_ = (float)uVar1 * normalToRoot.fields.m10 + fVar29 + fVar14;
    auVar19._8_4_ = (float)uVar1 * 0.0 + fVar30 + fVar16;
    auVar19._12_4_ = (float)uVar1 * 0.0 + fVar31 + fVar18;
    fVar27 = normalToRoot.fields.m20 * (float)uVar1 + normalToRoot.fields.m21 * (float)uVar5 + fVar27;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar2 = 0;
    fVar11 = fVar27 * fVar27 + auVar19._4_4_ * auVar19._4_4_ + auVar19._0_4_ * auVar19._0_4_;
    if (fVar11 < 0.0) {
      fVar11 = sqrtf(fVar11);
      uVar2 = extraout_XMM0_Db;
      if (fVar11 <= 1e-05) goto label_05988d9c;
label_05988e40:
      fVar27 = fVar27 / fVar11;
      auVar8._4_4_ = fVar11;
      auVar8._0_4_ = fVar11;
      auVar8._8_4_ = uVar2;
      auVar8._12_4_ = uVar2;
      auVar19 = divps(auVar19,auVar8);
      auStack_d0._0_4_ = auVar19._0_4_;
      auStack_d0._4_4_ = auVar19._4_4_;
      pUVar9 = (UnityEngine_Vector3_StaticFields *)auStack_d0;
    }
    else {
      fVar11 = SQRT(fVar11);
      if (1e-05 < fVar11) goto label_05988e40;
label_05988d9c:
      pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar27 = (pUVar9->zeroVector).fields.z;
    }
    uVar3 = (pUVar9->zeroVector).fields.x;
    uVar7 = (pUVar9->zeroVector).fields.y;
    uVar2 = uVar3;
    uVar6 = uVar7;
  }
  else {
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar2 = (pUVar9->upVector).fields.x;
    uVar6 = (pUVar9->upVector).fields.y;
    fVar27 = (pUVar9->upVector).fields.z;
  }
  if (hasUV) {
    if (uv == (UnityEngine_Vector2_array *)0x0) {
label_05988f4d:
      ThrowNullReferenceException();
    }
    if ((uint)uv->max_length <= (uint)index) {
label_05988f52:
      ThrowIndexOutOfRangeException();
    }
    pUVar10 = (UnityEngine_Vector2_StaticFields *)(uv->m_Items + index);
  }
  else {
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    pUVar10 = TypeInfo_UnityEngine_Vector2->static_fields;
  }
  UVar4 = (pUVar10->zeroVector).fields;
  (__return_storage_ptr__->fields).Position.fields.x =
       local_58 +
       local_48._4_4_ * UStack_70.z + (float)local_48 * (float)auStack_d0._88_4_ +
       (float)local_38._0_4_ * (float)auStack_d0._72_4_;
  (__return_storage_ptr__->fields).Position.fields.y =
       fStack_54 +
       local_48._4_4_ * fStack_64 + (float)local_48 * fStack_74 +
       (float)local_38._0_4_ * (float)auStack_d0._76_4_;
  (__return_storage_ptr__->fields).Position.fields.z =
       toRoot.fields.m23 +
       toRoot.fields.m22 * (float)local_38._0_4_ +
       toRoot.fields.m21 * local_48._4_4_ + toRoot.fields.m20 * (float)local_48;
  (__return_storage_ptr__->fields).Normal.fields.x = (float)uVar2;
  (__return_storage_ptr__->fields).Normal.fields.y = (float)uVar6;
  (__return_storage_ptr__->fields).Normal.fields.z = fVar27;
  (__return_storage_ptr__->fields).UV.fields = UVar4;
  (__return_storage_ptr__->fields).Shade = 1.0;
  return __return_storage_ptr__;
}


// Map.MapFracture$$CreateSeeds
// il2cpp: System_Collections_Generic_List_Vector3__o* Map_MapFracture__CreateSeeds (UnityEngine_Bounds_o bounds, int32_t count, System_Random_o* random, const MethodInfo* method);
// 0x598a9e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598af12: jmp 0x598aeb0

System_Collections_Generic_List_Vector3__o *
Map_MapFracture__CreateSeeds
          (UnityEngine_Bounds_o bounds,int32_t count,System_Random_o *random,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_Vector3_array *pUVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  Il2CppMethodPointer pIVar10;
  double dVar11;
  int iVar12;
  System_Collections_Generic_List_Vector3__o *__this;
  MethodInfo *pMVar13;
  undefined4 in_register_0000003c;
  System_Collections_Generic_List_Vector3__c **ppSVar14;
  UnityEngine_Vector3_c **__this_00;
  MethodInfo *pMVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o item;
  undefined1 local_b0 [24];
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  uint16_t uStack_80;
  uint8_t uStack_7e;
  uint8_t uStack_7d;
  undefined4 uStack_7c;
  undefined4 local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [12];
  float fStack_3c;
  
  __this_00 = (UnityEngine_Vector3_c **)CONCAT44(in_register_0000003c,count);
  pMVar13 = (MethodInfo *)random;
  if (Il2CppMethodInitialized_07545a1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197570);
    ppSVar14 = &TypeInfo_System_Collections_Generic_List_Vector3;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    Il2CppMethodInitialized_07545a1c = '\x01';
    __this_00 = (UnityEngine_Vector3_c **)ppSVar14;
  }
  local_48._0_4_ = bounds.fields.m_Extents.fields.x;
  local_48._4_4_ = bounds.fields.m_Extents.fields.y;
  stack0xffffffffffffffc0 = 0;
  local_68._0_4_ = bounds.fields.m_Extents.fields.x + bounds.fields.m_Extents.fields.x;
  local_68._4_4_ = bounds.fields.m_Extents.fields.y + bounds.fields.m_Extents.fields.y;
  local_68._8_8_ = 0;
  local_b0._20_4_ = bounds.fields.m_Extents.fields.z;
  if (g_data_0753e4b7 == '\0') {
    __this_00 = &TypeInfo_UnityEngine_Vector3;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e4b7 = '\x01';
  }
  pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar5->oneVector).fields.x;
  uVar3 = (pUVar5->oneVector).fields.y;
  fVar18 = (pUVar5->oneVector).fields.z * 0.0001;
  fVar20 = bounds.fields.m_Extents.fields.z + bounds.fields.m_Extents.fields.z;
  if (bounds.fields.m_Extents.fields.z + bounds.fields.m_Extents.fields.z <= fVar18) {
    fVar20 = fVar18;
  }
  auVar7._4_4_ = (float)uVar3 * 0.0001;
  auVar7._0_4_ = (float)uVar2 * 0.0001;
  auVar7._8_8_ = 0;
  local_68 = maxps(local_68,auVar7);
  local_98._0_4_ = local_68._4_4_;
  iVar12 = 1;
  if (1 < count) {
    iVar12 = count;
  }
  fStack_90 = (float)local_98;
  local_98._4_4_ = (float)local_98;
  fStack_8c = fStack_90;
  fVar18 = powf((CustomLogic_CustomLogicMathBuiltin_o *)__this_00,
                (local_68._0_4_ * (float)local_98 * fVar20) / (float)iVar12,0.33333334,pMVar13);
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  local_88 = (Il2CppType *)CONCAT44(local_68._4_4_,(float)local_68._0_4_ / fVar18);
  uStack_80 = local_68._8_2_;
  uStack_7e = local_68[10];
  uStack_7d = local_68[0xb];
  uStack_7c = local_68._12_4_;
  fVar19 = (float)local_68._0_4_ / fVar18;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar19 = (float)local_88;
  }
  pMVar15 = (MethodInfo *)local_b0;
  local_58._0_8_ = (double)fVar19;
  dVar9 = modf((double)fVar19,(double *)pMVar15,pMVar13);
  pIVar10 = (Il2CppMethodPointer)local_b0._0_8_;
  if (0.0 <= (float)local_88) {
    if ((dVar9 != 0.5) || (NAN(dVar9))) {
      pIVar10 = (Il2CppMethodPointer)floor((double)local_58._0_8_ + 0.5,pMVar15);
    }
    else if (((long)(double)local_b0._0_8_ & 1U) != 0) {
      pIVar10 = (Il2CppMethodPointer)((double)local_b0._0_8_ + 1.0);
    }
  }
  else if ((dVar9 != -0.5) || (NAN(dVar9))) {
    pIVar10 = (Il2CppMethodPointer)ceil((double)local_58._0_8_ + -0.5,pMVar15);
  }
  else if (((long)(double)local_b0._0_8_ & 1U) != 0) {
    pIVar10 = (Il2CppMethodPointer)((double)local_b0._0_8_ + -1.0);
  }
  local_b0._12_4_ = 1;
  if (1 < (int)(double)pIVar10) {
    local_b0._12_4_ = (int)(double)pIVar10;
  }
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  local_98._0_4_ = (float)local_98 / fVar18;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  local_88 = (Il2CppType *)(double)(float)local_98;
  pMVar15 = (MethodInfo *)local_b0;
  dVar9 = modf((double)local_88,(double *)pMVar15,pMVar13);
  pIVar10 = (Il2CppMethodPointer)local_b0._0_8_;
  if (0.0 <= (float)local_98) {
    if ((dVar9 != 0.5) || (NAN(dVar9))) {
      pIVar10 = (Il2CppMethodPointer)floor((double)local_88 + 0.5,pMVar15);
    }
    else if (((long)(double)local_b0._0_8_ & 1U) != 0) {
      pIVar10 = (Il2CppMethodPointer)((double)local_b0._0_8_ + 1.0);
    }
  }
  else if ((dVar9 != -0.5) || (NAN(dVar9))) {
    pIVar10 = (Il2CppMethodPointer)ceil((double)local_88 + -0.5,pMVar15);
  }
  else if (((long)(double)local_b0._0_8_ & 1U) != 0) {
    pIVar10 = (Il2CppMethodPointer)((double)local_b0._0_8_ + -1.0);
  }
  local_b0._16_4_ = 1;
  if (1 < (int)(double)pIVar10) {
    local_b0._16_4_ = (int)(double)pIVar10;
  }
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  local_98._0_4_ = fVar20 / fVar18;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar9 = (double)(float)local_98;
  pMVar15 = (MethodInfo *)local_b0;
  dVar11 = modf(dVar9,(double *)pMVar15,pMVar13);
  if (0.0 <= (float)local_98) {
    if ((dVar11 != 0.5) || (NAN(dVar11))) {
      local_b0._0_8_ = floor(dVar9 + 0.5,pMVar15);
    }
    else if (((long)(double)local_b0._0_8_ & 1U) != 0) {
      local_b0._0_8_ = (double)local_b0._0_8_ + 1.0;
    }
  }
  else if ((dVar11 != -0.5) || (NAN(dVar11))) {
    local_b0._0_8_ = ceil(dVar9 + -0.5,pMVar15);
  }
  else if (((long)(double)local_b0._0_8_ & 1U) != 0) {
    local_b0._0_8_ = (double)local_b0._0_8_ + -1.0;
  }
  iVar12 = 1;
  if (1 < (int)(double)local_b0._0_8_) {
    iVar12 = (int)(double)local_b0._0_8_;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor_39ff040
            (__this,local_b0._16_4_ * local_b0._12_4_ * iVar12,
             (MethodInfo_39FF040 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197570);
  if (random == (System_Random_o *)0x0) {
label_0598b012:
    ThrowNullReferenceException();
  }
  if (__this == (System_Collections_Generic_List_Vector3__o *)0x0) {
    (*(random->klass->vtable)._8_NextDouble.methodPtr)(random,(random->klass->vtable)._8_NextDouble.method);
    (*(random->klass->vtable)._8_NextDouble.methodPtr)(random,(random->klass->vtable)._8_NextDouble.method);
    (*(random->klass->vtable)._8_NextDouble.methodPtr)(random,(random->klass->vtable)._8_NextDouble.method);
    ThrowNullReferenceException();
  }
  auVar8._4_4_ = (float)(int)local_b0._16_4_;
  auVar8._0_4_ = (float)(int)local_b0._12_4_;
  auVar8._8_8_ = 0;
  local_68 = divps(local_68,auVar8);
  local_b0._20_4_ = bounds.fields.m_Center.fields.z - (float)local_b0._20_4_;
  local_48._4_4_ = bounds.fields.m_Center.fields.y - (float)local_48._4_4_;
  local_48._0_4_ = bounds.fields.m_Center.fields.x - (float)local_48._0_4_;
  stack0xffffffffffffffc0 = CONCAT44(0.0 - fStack_3c,0.0 - (float)local_48._8_4_);
  local_6c = 0;
  do {
    local_58 = ZEXT416((uint)((float)(int)local_6c + 0.5));
    iVar17 = 0;
    do {
      local_88 = (Il2CppType *)CONCAT44((float)iVar17 + 0.5,local_58._0_4_);
      uStack_80 = local_58._8_2_;
      uStack_7e = local_58[10];
      uStack_7d = local_58[0xb];
      uStack_7c = local_58._12_4_;
      iVar16 = 0;
      do {
        while( true ) {
          local_98 = (char *)(*(random->klass->vtable)._8_NextDouble.methodPtr)
                                       (random,(random->klass->vtable)._8_NextDouble.method);
          dVar9 = (*(random->klass->vtable)._8_NextDouble.methodPtr)
                            (random,(random->klass->vtable)._8_NextDouble.method);
          local_98._0_4_ = (float)(double)local_98 + -0.5;
          local_98._4_4_ = (float)dVar9 + -0.5;
          fStack_90 = 0.0;
          fStack_8c = 0.0;
          dVar9 = (*(random->klass->vtable)._8_NextDouble.methodPtr)
                            (random,(random->klass->vtable)._8_NextDouble.method);
          pMVar13 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar6 = (__this->fields)._items;
          if (pUVar6 == (UnityEngine_Vector3_array *)0x0) goto label_0598b012;
          fVar18 = ((float)local_98 * 0.8 + (float)local_88) * (float)local_68._0_4_ + (float)local_48._0_4_;
          fVar19 = (local_98._4_4_ * 0.8 + local_88._4_4_) * (float)local_68._4_4_ + (float)local_48._4_4_;
          item.fields.z =
               ((float)iVar16 + 0.5 + ((float)dVar9 + -0.5) * 0.8) * (fVar20 / (float)iVar12) +
               (float)local_b0._20_4_;
          uVar4 = (__this->fields)._size;
          if ((uint)pUVar6->max_length <= uVar4) break;
          (__this->fields)._size = uVar4 + 1;
          pUVar6->m_Items[(int)uVar4].fields.x = fVar18;
          pUVar6->m_Items[(int)uVar4].fields.y = fVar19;
          pUVar6->m_Items[(int)uVar4].fields.z = item.fields.z;
          iVar16 = iVar16 + 1;
          if (iVar12 == iVar16) goto label_0598aeb0;
        }
        item.fields.x = fVar18;
        item.fields.y = fVar19;
        System_Collections_Generic_List_Vector3___AddWithResize
                  (__this,item,(MethodInfo_39FF950 *)pMVar13->klass->rgctx_data[0xe].method);
        iVar16 = iVar16 + 1;
      } while (iVar12 != iVar16);
label_0598aeb0:
      iVar17 = iVar17 + 1;
    } while (iVar17 != local_b0._16_4_);
    local_6c = local_6c + 1;
    if (local_6c == local_b0._12_4_) {
      return __this;
    }
  } while( true );
}


// Map.MapFracture$$Clip
// il2cpp: bool Map_MapFracture__Clip (Map_MapFracture_o* __this, System_Collections_Generic_List_MapFracture_Triangle__o* source, System_Collections_Generic_List_MapFracture_Triangle__o* target, UnityEngine_Vector3_o normal, float distance, const MethodInfo* method);
// 0x598a390
// eh: try 0x598a503..0x598a56e -> pad 0x598a5d7 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x598a5f2..0x598a5f7 -> pad 0x598a61f cleanup
// eh: try 0x598a622..0x598a62f -> pad 0x598a637 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598a4fd: nop dword ptr [rax]
// asm:   0x598a5d5: jmp 0x598a5d7
// asm:   0x598a5d7: mov rbp, rax
// asm:   0x598a5da: cmp edx, 1
// asm:   0x598a5dd: jne 0x598a622
// asm:   0x598a5df: mov rdi, rbp
// asm:   0x598a5e2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x598a5e7: mov rbp, qword ptr [rax]
// asm:   0x598a5ea: mov qword ptr [rsp + 0xa0], rbp
// asm:   0x598a5f2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x598a5f7: lea rax, [rip + 0x1904cda]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x598a5fe: mov rsi, qword ptr [rax]
// asm:   0x598a601: lea rdi, [rsp + 0xb0]
// asm:   0x598a609: call 0x4d821f0  ; System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose()
// asm:   0x598a60e: test rbp, rbp
// asm:   0x598a611: je 0x598a587
// asm:   0x598a617: mov rdi, rbp
// asm:   0x598a61a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x598a61f: mov rbp, rax
// asm:   0x598a622: lea rdi, [rsp + 0xa0]
// asm:   0x598a62a: call 0x2fd4440  ; il2cpp_runtime_helper_02fd4440()
// asm:   0x598a62f: mov rdi, rbp
// asm:   0x598a632: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x598a637: mov rdi, rax
// asm:   0x598a63a: call 0x2ab61e0  ; __clang_call_terminate()

bool Map_MapFracture__Clip
               (Map_MapFracture_o *__this,System_Collections_Generic_List_MapFracture_Triangle__o *source,
               System_Collections_Generic_List_MapFracture_Triangle__o *target,UnityEngine_Vector3_o normal,
               float distance,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_MapFracture_Segment__o *pSVar2;
  ulong uVar3;
  Map_MapFracture_Triangle_o triangle;
  bool bVar4;
  bool bVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Vector3_o normal_00;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  undefined8 uStack_a0;
  undefined8 local_98;
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
  
  method_02 = (MethodInfo *)source;
  if (Il2CppMethodInitialized_07545a1d == '\0') {
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
    Il2CppMethodInitialized_07545a1d = '\x01';
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8.fields._current = (Il2CppObject *)0x0;
  uStack_a0 = 0;
  local_b8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b8.fields._index = 0;
  local_b8.fields._version = 0;
  bVar4 = Map_MapFracture__Crosses(source,normal,distance,method_02);
  if (!bVar4) {
    return bVar4;
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
                  (&local_b8,source,
                   (MethodInfo_3AB3540 *)
                   MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
        while (bVar5 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                                 (&local_b8,
                                  (MethodInfo_4C82200 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext
                                 ), bVar5) {
          triangle.fields.A.fields.Position.fields.z = (float)(undefined4)uStack_a0;
          triangle.fields.A.fields.Normal.fields.x = (float)uStack_a0._4_4_;
          triangle.fields.A.fields.Position.fields._0_8_ = local_b8.fields._current;
          triangle.fields.A.fields.Normal.fields.y = (float)(undefined4)local_98;
          triangle.fields.A.fields.Normal.fields.z = (float)local_98._4_4_;
          triangle.fields.A.fields.UV.fields.x = (float)(undefined4)uStack_90;
          triangle.fields.A.fields.UV.fields.y = (float)uStack_90._4_4_;
          triangle.fields.A.fields.Shade = (float)(undefined4)local_88;
          triangle.fields.B.fields.Position.fields.x = (float)local_88._4_4_;
          triangle.fields.B.fields.Position.fields.y = (float)(undefined4)uStack_80;
          triangle.fields.B.fields.Position.fields.z = (float)uStack_80._4_4_;
          triangle.fields.B.fields.Normal.fields.x = (float)(undefined4)local_78;
          triangle.fields.B.fields.Normal.fields.y = (float)local_78._4_4_;
          triangle.fields.B.fields.Normal.fields.z = (float)(undefined4)uStack_70;
          triangle.fields.B.fields.UV.fields.x = (float)uStack_70._4_4_;
          triangle.fields.B.fields.UV.fields.y = (float)(undefined4)local_68;
          triangle.fields.B.fields.Shade = (float)local_68._4_4_;
          triangle.fields.C.fields.Position.fields.x = (float)(undefined4)uStack_60;
          triangle.fields.C.fields.Position.fields.y = (float)uStack_60._4_4_;
          triangle.fields.C.fields.Position.fields.z = (float)(undefined4)local_58;
          triangle.fields.C.fields.Normal.fields.x = (float)local_58._4_4_;
          triangle.fields.C.fields.Normal.fields.y = (float)(undefined4)uStack_50;
          triangle.fields.C.fields.Normal.fields.z = (float)uStack_50._4_4_;
          triangle.fields.C.fields.UV.fields.x = (float)(undefined4)local_48;
          triangle.fields.C.fields.UV.fields.y = (float)local_48._4_4_;
          triangle.fields.C.fields.Shade = (float)(undefined4)uStack_40;
          triangle.fields.Submesh = uStack_40._4_4_;
          Map_MapFracture__ClipTriangle(__this,triangle,normal,distance,target,method_00);
        }
        System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
                  (&local_b8,
                   (MethodInfo_4C821F0 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
        pSVar2 = (__this->fields)._segments;
        if (pSVar2 != (System_Collections_Generic_List_MapFracture_Segment__o *)0x0) {
          if ((pSVar2->fields)._size < 1) {
            return bVar4;
          }
          normal_00.fields.z = -normal.fields.z;
          uVar3 = normal.fields._0_8_ ^ 0x8000000080000000;
          normal_00.fields.x = (float)(int)uVar3;
          normal_00.fields.y = (float)(int)(uVar3 >> 0x20);
          Map_MapFracture__AddCaps(pSVar2,normal_00,target,method_01);
          return bVar4;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$Crosses
// il2cpp: bool Map_MapFracture__Crosses (System_Collections_Generic_List_MapFracture_Triangle__o* triangles, UnityEngine_Vector3_o normal, float distance, const MethodInfo* method);
// 0x598b770
// eh: try 0x598b853..0x598b85b -> pad 0x598b93f catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x598b957..0x598b95c -> pad 0x598b984 cleanup
// eh: try 0x598b987..0x598b991 -> pad 0x598b999 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598b909: jmp 0x598b910
// asm:   0x598b93f: mov rbx, rax
// asm:   0x598b942: cmp edx, 1
// asm:   0x598b945: jne 0x598b987
// asm:   0x598b947: mov rdi, rbx
// asm:   0x598b94a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x598b94f: mov r14, qword ptr [rax]
// asm:   0x598b952: mov qword ptr [rsp + 0x10], r14
// asm:   0x598b957: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x598b95c: lea rax, [rip + 0x1903975]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x598b963: mov rsi, qword ptr [rax]
// asm:   0x598b966: lea rdi, [rsp + 0x20]
// asm:   0x598b96b: call 0x4d821f0  ; System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose()
// asm:   0x598b970: xor ebx, ebx
// asm:   0x598b972: mov ebp, 0
// asm:   0x598b977: test r14, r14
// asm:   0x598b97a: je 0x598b924
// asm:   0x598b97c: mov rdi, r14
// asm:   0x598b97f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x598b984: mov rbx, rax
// asm:   0x598b987: lea rdi, [rsp + 0x10]
// asm:   0x598b98c: call 0x2fd4470  ; il2cpp_runtime_helper_02fd4470()
// asm:   0x598b991: mov rdi, rbx
// asm:   0x598b994: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x598b999: mov rdi, rax
// asm:   0x598b99c: call 0x2ab61e0  ; __clang_call_terminate()

bool Map_MapFracture__Crosses
               (System_Collections_Generic_List_MapFracture_Triangle__o *triangles,
               UnityEngine_Vector3_o normal,float distance,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar3;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [24];
  
  fVar3 = normal.fields.z;
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = normal.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07545a1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    Il2CppMethodInitialized_07545a1e = '\x01';
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  fStack_84 = 0.0;
  fStack_80 = 0.0;
  fStack_7c = 0.0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8.fields._current = (Il2CppObject *)0x0;
  uStack_a0 = 0;
  local_b8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b8.fields._index = 0;
  local_b8.fields._version = 0;
  if (triangles == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_MapFracture_Triangle___GetEnumerator
            (&local_b8,triangles,
             (MethodInfo_3AB3540 *)
             MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
  iVar2 = 5;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                      (&local_b8,
                       (MethodInfo_4C82200 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext);
    if (!bVar1) break;
    if (((((float)uStack_a0 * fVar3 +
          (float)((ulong)local_b8.fields._current >> 0x20) * (float)local_38._4_4_ +
          SUB84(local_b8.fields._current,0) * (float)local_38._0_4_) - distance < -0.0001) ||
        ((fStack_7c * fVar3 + fStack_80 * (float)local_38._4_4_ + fStack_84 * (float)local_38._0_4_) -
         distance < -0.0001)) ||
       (((float)local_58 * fVar3 +
        (float)((ulong)uStack_60 >> 0x20) * (float)local_38._4_4_ + (float)uStack_60 * (float)local_38._0_4_)
        - distance < -0.0001)) goto label_0598b910;
  }
  iVar2 = 6;
label_0598b910:
  System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
            (&local_b8,
             (MethodInfo_4C821F0 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
  return iVar2 == 5 && bVar1;
}


// Map.MapFracture$$ClipTriangle
// il2cpp: void Map_MapFracture__ClipTriangle (Map_MapFracture_o* __this, Map_MapFracture_Triangle_o triangle, UnityEngine_Vector3_o normal, float distance, System_Collections_Generic_List_MapFracture_Triangle__o* kept, const MethodInfo* method);
// 0x598b9b0

void Map_MapFracture__ClipTriangle
               (Map_MapFracture_o *__this,Map_MapFracture_Triangle_o triangle,UnityEngine_Vector3_o normal,
               float distance,System_Collections_Generic_List_MapFracture_Triangle__o *kept,MethodInfo *method
               )

{
  int32_t *piVar1;
  Map_MapFracture_Vertex_o *pMVar2;
  float *pfVar3;
  undefined8 *puVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Vector2_Fields *pUVar6;
  UnityEngine_Vector2_o *pUVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar13;
  undefined8 uVar14;
  UnityEngine_Vector2_Fields UVar15;
  undefined4 uVar19;
  int iVar20;
  uint32_t uVar21;
  Map_MapFracture_Vertex_array *pMVar22;
  System_Single_array *pSVar23;
  System_Collections_Generic_List_MapFracture_Segment__o *__this_00;
  undefined1 auVar24 [16];
  UnityEngine_Vector2_Fields UVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  Map_MapFracture_Segment_o item;
  Map_MapFracture_Triangle_o item_00;
  UnityEngine_Vector2_Fields UVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  Map_MapFracture_Vertex_Fields *pMVar36;
  Map_MapFracture_Triangle_Fields *pMVar37;
  MethodInfo *pMVar38;
  uint uVar39;
  Map_MapFracture_Triangle_array *pMVar40;
  UnityEngine_Vector3_StaticFields *pUVar41;
  long lVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  undefined4 extraout_XMM0_Db;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float local_1a8;
  float fStack_1a4;
  undefined1 local_188 [28];
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  undefined8 uStack_110;
  UnityEngine_Vector2_Fields local_108;
  undefined8 uStack_100;
  UnityEngine_Vector3_Fields local_f8 [2];
  UnityEngine_Vector2_Fields UStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  UnityEngine_Vector3_Fields UStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  int32_t iStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  Map_MapFracture_o *local_70;
  UnityEngine_Vector2_Fields local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar13 = triangle.fields.C.fields.Position.fields._0_8_;
  uVar14 = triangle.fields.C.fields._8_8_;
  uVar26 = triangle.fields.C.fields.Normal.fields._4_8_;
  fVar55 = normal.fields.z;
  fVar30 = normal.fields.x;
  fVar51 = normal.fields.y;
  if (Il2CppMethodInitialized_07545a1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Segment_Add);
    Il2CppMethodInitialized_07545a1f = '\x01';
  }
  pMVar22 = (__this->fields)._corners;
  if (pMVar22 == (Map_MapFracture_Vertex_array *)0x0) {
label_0598c723:
    ThrowNullReferenceException();
  }
  if ((int)pMVar22->max_length != 0) {
    pMVar22->m_Items[0].fields.Shade = triangle.fields.A.fields.Shade;
    local_188._0_8_ = triangle.fields.A.fields.Position.fields._0_8_;
    unique0x10002097 = triangle.fields.A.fields.UV.fields;
    pMVar22->m_Items[0].fields.Normal.fields.y = triangle.fields.A.fields.Normal.fields.y;
    pMVar22->m_Items[0].fields.Normal.fields.z = triangle.fields.A.fields.Normal.fields.z;
    pMVar22->m_Items[0].fields.UV.fields = unique0x10002097;
    pMVar22->m_Items[0].fields.Position.fields.x = triangle.fields.A.fields.Position.fields.x;
    pMVar22->m_Items[0].fields.Position.fields.y = triangle.fields.A.fields.Position.fields.y;
    *(long *)&pMVar22->m_Items[0].fields.Position.fields.z = triangle.fields.A.fields._8_8_;
    pMVar22 = (__this->fields)._corners;
    local_128 = triangle.fields.C.fields.UV.fields.x;
    fStack_124 = triangle.fields.C.fields.UV.fields.y;
    local_138 = triangle.fields.C.fields.Position.fields.z;
    fStack_134 = triangle.fields.C.fields.Normal.fields.x;
    fStack_130 = triangle.fields.C.fields.Normal.fields.y;
    fStack_12c = triangle.fields.C.fields.Normal.fields.z;
    local_148 = triangle.fields.B.fields.UV.fields.y;
    fStack_144 = triangle.fields.B.fields.Shade;
    fStack_140 = triangle.fields.C.fields.Position.fields.x;
    fStack_13c = triangle.fields.C.fields.Position.fields.y;
    local_158 = triangle.fields.B.fields.Normal.fields.x;
    fStack_154 = triangle.fields.B.fields.Normal.fields.y;
    fStack_150 = triangle.fields.B.fields.Normal.fields.z;
    fStack_14c = triangle.fields.B.fields.UV.fields.x;
    local_188._16_4_ = triangle.fields.A.fields.Normal.fields.y;
    local_188._20_4_ = triangle.fields.A.fields.Normal.fields.z;
    local_188._8_4_ = triangle.fields.A.fields.Position.fields.z;
    local_188._12_4_ = triangle.fields.A.fields.Normal.fields.x;
    local_168 = triangle.fields.A.fields.Shade;
    fStack_164 = triangle.fields.B.fields.Position.fields.x;
    fStack_160 = triangle.fields.B.fields.Position.fields.y;
    fStack_15c = triangle.fields.B.fields.Position.fields.z;
    fStack_120 = triangle.fields.C.fields.Shade;
    fStack_11c = (float)triangle.fields.Submesh;
    if (pMVar22 == (Map_MapFracture_Vertex_array *)0x0) goto label_0598c723;
    local_168 = triangle.fields.A.fields.Shade;
    fStack_120 = triangle.fields.C.fields.Shade;
    if ((pMVar22->max_length & 0xfffffffe) != 0) {
      pMVar22->m_Items[1].fields.Shade = fStack_144;
      pMVar22->m_Items[1].fields.Normal.fields.y = (float)triangle.fields.B.fields.Normal.fields.y;
      pMVar22->m_Items[1].fields.Normal.fields.z = (float)triangle.fields.B.fields.Normal.fields.z;
      pMVar22->m_Items[1].fields.UV.fields = triangle.fields.B.fields.UV.fields;
      pMVar22->m_Items[1].fields.Position.fields.x = (float)triangle.fields.B.fields.Position.fields.x;
      pMVar22->m_Items[1].fields.Position.fields.y = (float)triangle.fields.B.fields.Position.fields.y;
      *(long *)&pMVar22->m_Items[1].fields.Position.fields.z = triangle.fields.B.fields._8_8_;
      pMVar22 = (__this->fields)._corners;
      UStack_b0.z = triangle.fields.C.fields.Position.fields.z;
      fStack_a4 = triangle.fields.C.fields.Normal.fields.x;
      UStack_b0.x = triangle.fields.C.fields.Position.fields.x;
      UStack_b0.y = triangle.fields.C.fields.Position.fields.y;
      local_f8[1].y = triangle.fields.A.fields.Normal.fields.y;
      local_f8[1].z = triangle.fields.A.fields.Normal.fields.z;
      UStack_e0 = unique0x10002097;
      local_f8[0].x = triangle.fields.A.fields.Position.fields.x;
      local_f8[0].y = triangle.fields.A.fields.Position.fields.y;
      local_f8[0].z = triangle.fields.A.fields.Position.fields.z;
      local_f8[1].x = triangle.fields.A.fields.Normal.fields.x;
      local_d8 = triangle.fields.A.fields.Shade;
      fStack_d4 = triangle.fields.B.fields.Position.fields.x;
      fStack_d0 = triangle.fields.B.fields.Position.fields.y;
      fStack_cc = triangle.fields.B.fields.Position.fields.z;
      local_c8 = local_158;
      fStack_c4 = fStack_154;
      fStack_c0 = fStack_150;
      fStack_bc = fStack_14c;
      local_b8 = local_148;
      fStack_b4 = fStack_144;
      fStack_a0 = fStack_130;
      fStack_9c = fStack_12c;
      local_98 = local_128;
      fStack_94 = fStack_124;
      fStack_90 = triangle.fields.C.fields.Shade;
      iStack_8c = triangle.fields.Submesh;
      if (pMVar22 == (Map_MapFracture_Vertex_array *)0x0) goto label_0598c723;
      if (2 < (uint)pMVar22->max_length) {
        pMVar22->m_Items[2].fields.Shade = triangle.fields.C.fields.Shade;
        pMVar22->m_Items[2].fields.Normal.fields.y = triangle.fields.C.fields.Normal.fields.y;
        pMVar22->m_Items[2].fields.Normal.fields.z = triangle.fields.C.fields.Normal.fields.z;
        pMVar22->m_Items[2].fields.UV.fields = triangle.fields.C.fields.UV.fields;
        pMVar22->m_Items[2].fields.Position.fields.x = triangle.fields.C.fields.Position.fields.x;
        pMVar22->m_Items[2].fields.Position.fields.y = triangle.fields.C.fields.Position.fields.y;
        *(undefined8 *)&pMVar22->m_Items[2].fields.Position.fields.z = uVar14;
        pMVar22 = (__this->fields)._corners;
        if (pMVar22 == (Map_MapFracture_Vertex_array *)0x0) goto label_0598c723;
        pSVar23 = (__this->fields)._distances;
        iVar20 = (int)pMVar22->max_length;
        if (pSVar23 == (System_Single_array *)0x0) {
          if (iVar20 != 0) goto label_0598c723;
        }
        else if ((iVar20 != 0) && (uVar44 = (uint)pSVar23->max_length, uVar44 != 0)) {
          uVar9 = pMVar22->m_Items[0].fields.Position.fields.x;
          uVar16 = pMVar22->m_Items[0].fields.Position.fields.y;
          fVar49 = ((float)uVar16 * fVar51 + (float)uVar9 * fVar30 +
                   pMVar22->m_Items[0].fields.Position.fields.z * fVar55) - distance;
          pSVar23->m_Items[0] = fVar49;
          if ((iVar20 != 1) && (1 < uVar44)) {
            uVar10 = pMVar22->m_Items[1].fields.Position.fields.x;
            uVar17 = pMVar22->m_Items[1].fields.Position.fields.y;
            fVar59 = ((float)uVar17 * fVar51 + (float)uVar10 * fVar30 +
                     pMVar22->m_Items[1].fields.Position.fields.z * fVar55) - distance;
            pSVar23->m_Items[1] = fVar59;
            if ((iVar20 != 2) && (2 < uVar44)) {
              uVar11 = pMVar22->m_Items[2].fields.Position.fields.x;
              uVar18 = pMVar22->m_Items[2].fields.Position.fields.y;
              fVar30 = ((float)uVar18 * fVar51 + (float)uVar11 * fVar30 +
                       fVar55 * pMVar22->m_Items[2].fields.Position.fields.z) - distance;
              pSVar23->m_Items[2] = fVar30;
              pMVar38 = MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_Add;
              if (-0.0001 <= fVar30 && (-0.0001 <= fVar49 && -0.0001 <= fVar59)) {
                if (kept != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
                  piVar1 = &(kept->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pMVar40 = (kept->fields)._items;
                  if (pMVar40 != (Map_MapFracture_Triangle_array *)0x0) {
                    uVar44 = (kept->fields)._size;
                    lVar46 = (long)(int)uVar44;
                    if ((uint)pMVar40->max_length <= uVar44) {
                      System_Collections_Generic_List_MapFracture_Triangle___AddWithResize
                                (kept,triangle,(MethodInfo_3AB1FB0 *)pMVar38->klass->rgctx_data[0xe].method);
                      return;
                    }
                    (kept->fields)._size = uVar44 + 1;
                    lVar42 = lVar46 * 0x70;
                    pUVar7 = &pMVar40->m_Items[lVar46].fields.C.fields.UV;
                    pUVar7->fields = triangle.fields.C.fields.UV.fields;
                    pUVar7[1] = (UnityEngine_Vector2_o)triangle.fields._104_8_;
                    pMVar37 = &pMVar40->m_Items[lVar46].fields;
                    *(undefined8 *)((long)&(pMVar37->C).fields.Position.fields + 8) = uVar14;
                    *(undefined8 *)((long)&(pMVar37->C).fields.Normal.fields + 4) = uVar26;
                    pMVar37 = &pMVar40->m_Items[lVar46].fields;
                    *(undefined8 *)((long)&(pMVar37->B).fields.UV.fields + 4) =
                         triangle.fields.B.fields._28_8_;
                    *(undefined8 *)&(pMVar37->C).fields.Position.fields = uVar13;
                    local_f8[0].x = triangle.fields.A.fields.Position.fields.x;
                    local_f8[0].y = triangle.fields.A.fields.Position.fields.y;
                    local_188._8_4_ = triangle.fields.A.fields.Position.fields.z;
                    local_188._12_4_ = triangle.fields.A.fields.Normal.fields.x;
                    local_f8[1].y = triangle.fields.A.fields.Normal.fields.y;
                    local_f8[1].z = triangle.fields.A.fields.Normal.fields.z;
                    local_188._24_4_ = triangle.fields.A.fields.UV.fields.x;
                    fStack_16c = triangle.fields.A.fields.UV.fields.y;
                    fVar30 = triangle.fields.B.fields.Position.fields.y;
label_0598c2ad:
                    puVar4 = (undefined8 *)((long)&pMVar40->m_Items[0].fields.B.fields.Normal.fields + lVar42)
                    ;
                    *puVar4 = triangle.fields.B.fields.Normal.fields._0_8_;
                    puVar4[1] = triangle.fields.B.fields._20_8_;
                    pfVar3 = (float *)((long)&pMVar40->m_Items[0].fields.A.fields.Shade + lVar42);
                    *pfVar3 = local_168;
                    pfVar3[1] = fStack_164;
                    pfVar3[2] = fVar30;
                    pfVar3[3] = fStack_cc;
                    pfVar3 = (float *)((long)&pMVar40->m_Items[0].fields.A.fields.Normal.fields + lVar42 + 4U)
                    ;
                    *pfVar3 = local_f8[1].y;
                    pfVar3[1] = local_f8[1].z;
                    pfVar3[2] = (float)local_188._24_4_;
                    pfVar3[3] = fStack_16c;
                    pfVar3 = (float *)((long)&pMVar40->m_Items[0].fields.A.fields.Position.fields + lVar42);
                    *pfVar3 = local_f8[0].x;
                    pfVar3[1] = local_f8[0].y;
                    pfVar3[2] = (float)local_188._8_4_;
                    pfVar3[3] = (float)local_188._12_4_;
                    return;
                  }
                }
              }
              else {
                if ((bool)(~(0.0001 < fVar49 || 0.0001 < fVar59) & fVar30 <= 0.0001)) {
                  return;
                }
                lVar46 = 0x10;
                uVar43 = 0;
                uVar47 = 0;
                uVar44 = 0;
                do {
                  uVar48 = uVar47 + 1;
                  uVar39 = (uint)uVar48;
                  if (uVar47 == 2) {
                    uVar39 = 0;
                  }
                  pMVar22 = (__this->fields)._corners;
                  if (pMVar22 == (Map_MapFracture_Vertex_array *)0x0) goto label_0598c723;
                  if ((uint)pMVar22->max_length <= uVar47) goto label_0598c71e;
                  pSVar23 = (__this->fields)._distances;
                  if (pSVar23 == (System_Single_array *)0x0) goto label_0598c723;
                  uVar45 = (uint)pSVar23->max_length;
                  if ((uVar45 <= uVar47) || (uVar45 <= uVar39)) goto label_0598c71e;
                  uVar13 = *(undefined8 *)((long)pMVar22->m_Items + lVar46 * 4 + -0x40);
                  fVar30 = *(float *)((long)pMVar22->m_Items + lVar46 * 4 + -0x38);
                  uVar14 = *(undefined8 *)((long)pMVar22->m_Items + lVar46 * 4 + -0x34);
                  fVar51 = *(float *)((long)pMVar22->m_Items + lVar46 * 4 + -0x2c);
                  UVar15 = *(UnityEngine_Vector2_Fields *)((long)pMVar22->m_Items + lVar46 * 4 + -0x28);
                  fVar55 = *(float *)((long)pMVar22->m_Items + lVar46 * 4 + -0x20);
                  fVar49 = pSVar23->m_Items[uVar47];
                  fVar59 = pSVar23->m_Items[uVar39];
                  uVar45 = uVar44;
                  if (-0.0001 <= fVar49) {
                    pMVar22 = (__this->fields)._polygon;
                    if (pMVar22 == (Map_MapFracture_Vertex_array *)0x0) goto label_0598c723;
                    if ((uint)pMVar22->max_length <= uVar44) goto label_0598c71e;
                    uVar45 = uVar44 + 1;
                    pMVar22->m_Items[(int)uVar44].fields.Position.fields.x = (float)uVar13;
                    pMVar22->m_Items[(int)uVar44].fields.Position.fields.y = SUB84(uVar13,4);
                    pMVar22->m_Items[(int)uVar44].fields.Position.fields.z = fVar30;
                    pMVar22->m_Items[(int)uVar44].fields.Normal.fields.x = (float)(int)uVar14;
                    pMVar22->m_Items[(int)uVar44].fields.Normal.fields.y = (float)(int)((ulong)uVar14 >> 0x20)
                    ;
                    pMVar22->m_Items[(int)uVar44].fields.Normal.fields.z = fVar51;
                    pMVar22->m_Items[(int)uVar44].fields.UV.fields = UVar15;
                    pMVar22->m_Items[(int)uVar44].fields.Shade = fVar55;
                  }
                  if (ABS(fVar49) <= 0.0001) {
                    pMVar22 = (__this->fields)._cut;
                    if (pMVar22 == (Map_MapFracture_Vertex_array *)0x0) goto label_0598c723;
                    uVar44 = (uint)pMVar22->max_length;
                    if ((int)uVar43 < (int)uVar44) {
                      if (uVar44 <= uVar43) goto label_0598c71e;
                      pMVar22->m_Items[(int)uVar43].fields.Position.fields.x = (float)uVar13;
                      pMVar22->m_Items[(int)uVar43].fields.Position.fields.y = SUB84(uVar13,4);
                      pMVar22->m_Items[(int)uVar43].fields.Position.fields.z = fVar30;
                      pMVar22->m_Items[(int)uVar43].fields.Normal.fields.x = (float)(int)uVar14;
                      pMVar22->m_Items[(int)uVar43].fields.Normal.fields.y =
                           (float)(int)((ulong)uVar14 >> 0x20);
                      pMVar22->m_Items[(int)uVar43].fields.Normal.fields.z = fVar51;
                      pMVar22->m_Items[(int)uVar43].fields.UV.fields = UVar15;
                      pMVar22->m_Items[(int)uVar43].fields.Shade = fVar55;
                    }
label_0598bcc2:
                    uVar43 = uVar43 + 1;
                  }
                  else if (((0.0001 < fVar49) && (fVar59 < -0.0001)) ||
                          ((fVar49 < -0.0001 && (0.0001 < fVar59)))) {
                    pMVar22 = (__this->fields)._corners;
                    if (pMVar22 != (Map_MapFracture_Vertex_array *)0x0) {
                      local_48 = uVar14;
                      uStack_40 = 0;
                      local_88 = fVar51;
                      if (uVar39 < (uint)pMVar22->max_length) {
                        local_58._0_4_ = pMVar22->m_Items[uVar39].fields.Position.fields.x;
                        local_58._4_4_ = pMVar22->m_Items[uVar39].fields.Position.fields.y;
                        uStack_50 = 0;
                        fVar51 = pMVar22->m_Items[uVar39].fields.Position.fields.z;
                        pMVar36 = &pMVar22->m_Items[uVar39].fields;
                        pUVar5 = &pMVar36->Normal;
                        uVar34 = (pUVar5->fields).x;
                        uVar35 = (pUVar5->fields).y;
                        fVar50 = pMVar22->m_Items[uVar39].fields.Normal.fields.z;
                        local_68 = pMVar22->m_Items[uVar39].fields.UV.fields;
                        uStack_60 = 0;
                        fVar8 = pMVar22->m_Items[uVar39].fields.Shade;
                        local_108 = UVar15;
                        uStack_100 = 0;
                        local_118 = (float)uVar13;
                        fStack_114 = SUB84(uVar13,4);
                        uStack_110 = 0;
                        if (Il2CppMethodInitialized_0753e72d == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                          Il2CppMethodInitialized_0753e72d = '\x01';
                          local_188._0_4_ = 0.0;
                          local_188._4_4_ = 0.0;
                          fVar53 = local_118;
                          fVar54 = fStack_114;
                          fVar57 = local_108.x;
                          fVar58 = local_108.y;
                          fVar60 = (float)uVar34;
                          fVar61 = (float)uVar35;
                          if (Il2CppMethodInitialized_0753e729 == '\0') goto label_0598c1a6;
label_0598bea8:
                          local_188._0_4_ = 0.0;
                          local_188._4_4_ = 0.0;
                          uVar21 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                        }
                        else {
                          local_188._0_4_ = 0.0;
                          local_188._4_4_ = 0.0;
                          fVar53 = (float)uVar13;
                          fVar54 = SUB84(uVar13,4);
                          fVar57 = UVar15.x;
                          fVar58 = UVar15.y;
                          fVar60 = (pUVar5->fields).x;
                          fVar61 = (pMVar36->Normal).fields.y;
                          if (Il2CppMethodInitialized_0753e729 != '\0') goto label_0598bea8;
label_0598c1a6:
                          local_188._0_4_ = 0.0;
                          local_188._4_4_ = 0.0;
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                          Il2CppMethodInitialized_0753e729 = '\x01';
                          uVar21 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                          fVar53 = local_118;
                          fVar54 = fStack_114;
                          fVar57 = local_108.x;
                          fVar58 = local_108.y;
                          fVar60 = (float)uVar34;
                          fVar61 = (float)uVar35;
                        }
                        if (uVar21 == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                          fVar53 = local_118;
                          fVar54 = fStack_114;
                          fVar57 = local_108.x;
                          fVar58 = local_108.y;
                          fVar60 = (float)uVar34;
                          fVar61 = (float)uVar35;
                        }
                        fVar49 = fVar49 / (fVar49 - fVar59);
                        fVar59 = 1.0;
                        if (fVar49 <= 1.0) {
                          fVar59 = fVar49;
                        }
                        fVar59 = (float)(-(uint)(0.0 <= fVar49) & (uint)fVar59);
                        auVar56._0_4_ = (fVar60 - (float)local_48) * fVar59 + (float)local_48;
                        auVar56._4_4_ = (fVar61 - local_48._4_4_) * fVar59 + local_48._4_4_;
                        auVar56._8_4_ = (0.0 - (float)uStack_40) * fVar59 + (float)uStack_40;
                        auVar56._12_4_ = (0.0 - uStack_40._4_4_) * fVar59 + uStack_40._4_4_;
                        fVar49 = (fVar50 - local_88) * fVar59 + local_88;
                        uVar52 = 0;
                        fVar50 = fVar49 * fVar49 +
                                 auVar56._4_4_ * auVar56._4_4_ + auVar56._0_4_ * auVar56._0_4_;
                        if (fVar50 < 0.0) {
                          local_88 = fVar59;
                          fStack_84 = fVar59;
                          fStack_80 = fVar59;
                          fStack_7c = fVar59;
                          fVar50 = sqrtf(fVar50);
                          uVar52 = extraout_XMM0_Db;
                          fVar53 = local_118;
                          fVar54 = fStack_114;
                          fVar57 = local_108.x;
                          fVar58 = local_108.y;
                          fVar60 = local_88;
                          fVar61 = fStack_84;
                          if (1e-05 < fVar50) goto label_0598c04b;
label_0598bf60:
                          pUVar41 = TypeInfo_UnityEngine_Vector3->static_fields;
                          fVar49 = (pUVar41->zeroVector).fields.z;
                        }
                        else {
                          fVar50 = SQRT(fVar50);
                          fVar60 = fVar59;
                          fVar61 = fVar59;
                          if (fVar50 <= 1e-05) goto label_0598bf60;
label_0598c04b:
                          fVar49 = fVar49 / fVar50;
                          auVar24._4_4_ = fVar50;
                          auVar24._0_4_ = fVar50;
                          auVar24._8_4_ = uVar52;
                          auVar24._12_4_ = uVar52;
                          auVar56 = divps(auVar56,auVar24);
                          local_188._0_4_ = auVar56._0_4_;
                          local_188._4_4_ = auVar56._4_4_;
                          pUVar41 = (UnityEngine_Vector3_StaticFields *)local_188;
                        }
                        pMVar22 = (__this->fields)._polygon;
                        if (pMVar22 != (Map_MapFracture_Vertex_array *)0x0) {
                          if (uVar45 < (uint)pMVar22->max_length) {
                            fVar53 = ((float)local_58 - fVar53) * fVar60 + fVar53;
                            fVar54 = (local_58._4_4_ - fVar54) * fVar61 + fVar54;
                            fVar30 = (fVar51 - fVar30) * fVar59 + fVar30;
                            uVar12 = (pUVar41->zeroVector).fields.x;
                            uVar19 = (pUVar41->zeroVector).fields.y;
                            fVar57 = (local_68.x - fVar57) * fVar60 + fVar57;
                            fVar58 = (local_68.y - fVar58) * fVar61 + fVar58;
                            fVar55 = (fVar8 - fVar55) * fVar59 + fVar55;
                            pMVar22->m_Items[(int)uVar45].fields.Position.fields.x = fVar53;
                            pMVar22->m_Items[(int)uVar45].fields.Position.fields.y = fVar54;
                            pMVar22->m_Items[(int)uVar45].fields.Position.fields.z = fVar30;
                            pMVar22->m_Items[(int)uVar45].fields.Normal.fields.x = (float)uVar12;
                            pMVar22->m_Items[(int)uVar45].fields.Normal.fields.y = (float)uVar19;
                            pMVar22->m_Items[(int)uVar45].fields.Normal.fields.z = fVar49;
                            UVar15.y = fVar58;
                            UVar15.x = fVar57;
                            pMVar22->m_Items[(int)uVar45].fields.UV.fields = UVar15;
                            pMVar22->m_Items[(int)uVar45].fields.Shade = fVar55;
                            pMVar22 = (__this->fields)._cut;
                            if (pMVar22 == (Map_MapFracture_Vertex_array *)0x0) goto label_0598c723;
                            uVar44 = (uint)pMVar22->max_length;
                            if ((int)uVar43 < (int)uVar44) {
                              if (uVar44 <= uVar43) goto label_0598c71e;
                              pMVar22->m_Items[(int)uVar43].fields.Position.fields.x = fVar53;
                              pMVar22->m_Items[(int)uVar43].fields.Position.fields.y = fVar54;
                              pMVar22->m_Items[(int)uVar43].fields.Position.fields.z = fVar30;
                              pMVar22->m_Items[(int)uVar43].fields.Normal.fields.x = (float)uVar12;
                              pMVar22->m_Items[(int)uVar43].fields.Normal.fields.y = (float)uVar19;
                              pMVar22->m_Items[(int)uVar43].fields.Normal.fields.z = fVar49;
                              UVar25.y = fVar58;
                              UVar25.x = fVar57;
                              pMVar22->m_Items[(int)uVar43].fields.UV.fields = UVar25;
                              pMVar22->m_Items[(int)uVar43].fields.Shade = fVar55;
                            }
                            uVar45 = uVar45 + 1;
                            goto label_0598bcc2;
                          }
                          goto label_0598c71e;
                        }
                        goto label_0598c723;
                      }
                      goto label_0598c71e;
                    }
                    goto label_0598c723;
                  }
                  lVar46 = lVar46 + 9;
                  uVar47 = uVar48;
                  uVar44 = uVar45;
                } while (uVar48 != 3);
                uVar45 = uVar45 - 1;
                if (1 < (int)uVar45) {
                  uVar47 = 1;
                  lVar46 = 0x68;
                  local_70 = __this;
                  do {
                    while( true ) {
                      pMVar38 = MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_Add;
                      pMVar22 = (__this->fields)._polygon;
                      if (pMVar22 == (Map_MapFracture_Vertex_array *)0x0) goto label_0598c723;
                      uVar48 = (ulong)(uint)pMVar22->max_length;
                      if (((uVar48 == 0) || (uVar48 <= uVar47)) || (uVar47 = uVar47 + 1, uVar48 <= uVar47))
                      goto label_0598c71e;
                      pMVar2 = pMVar22->m_Items;
                      fStack_90 = *(float *)((long)&pMVar22->m_Items[0].fields.Position.fields.x + lVar46);
                      puVar4 = (undefined8 *)((long)pMVar22->m_Items + lVar46 + -0x20);
                      UStack_b0._0_8_ = *puVar4;
                      unique0x1000175f = puVar4[1];
                      puVar4 = (undefined8 *)((long)pMVar22->m_Items + lVar46 + -0x10);
                      uVar13 = *puVar4;
                      UVar15 = *(UnityEngine_Vector2_Fields *)(puVar4 + 1);
                      fStack_a0 = (float)uVar13;
                      fStack_9c = (float)((ulong)uVar13 >> 0x20);
                      local_98 = UVar15.x;
                      fStack_94 = UVar15.y;
                      local_d8 = pMVar22->m_Items[0].fields.Shade;
                      local_f8[0].x = (pMVar2->fields).Position.fields.x;
                      local_f8[0].y = (pMVar2->fields).Position.fields.y;
                      local_f8._8_8_ = *(undefined8 *)&pMVar22->m_Items[0].fields.Position.fields.z;
                      local_f8[1].y = pMVar22->m_Items[0].fields.Normal.fields.y;
                      local_f8[1].z = pMVar22->m_Items[0].fields.Normal.fields.z;
                      UStack_e0 = pMVar22->m_Items[0].fields.UV.fields;
                      fStack_b4 = *(float *)((long)(pMVar22->m_Items + -1) + lVar46);
                      puVar4 = (undefined8 *)((long)pMVar22->m_Items + lVar46 + -0x44);
                      uVar14 = *puVar4;
                      uVar26 = puVar4[1];
                      puVar4 = (undefined8 *)((long)pMVar22->m_Items + lVar46 + -0x34);
                      uVar27 = *puVar4;
                      uVar28 = puVar4[1];
                      fStack_c4 = (float)uVar27;
                      fStack_c0 = (float)((ulong)uVar27 >> 0x20);
                      fStack_bc = (float)uVar28;
                      local_b8 = (float)((ulong)uVar28 >> 0x20);
                      fStack_d4 = (float)uVar14;
                      fStack_d0 = (float)((ulong)uVar14 >> 0x20);
                      fStack_cc = (float)uVar26;
                      local_c8 = (float)((ulong)uVar26 >> 0x20);
                      if (kept == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0)
                      goto label_0598c723;
                      local_128 = local_98;
                      fStack_124 = fStack_94;
                      local_148 = local_b8;
                      fStack_140 = UStack_b0.x;
                      fStack_13c = UStack_b0.y;
                      item_00.fields.B.fields.Position.fields.x = fStack_d4;
                      item_00.fields.A.fields.Shade = local_d8;
                      item_00.fields.B.fields.Position.fields.z = fStack_cc;
                      item_00.fields.B.fields.Position.fields.y = fStack_d0;
                      item_00.fields.B.fields.Normal.fields.y = fStack_c4;
                      item_00.fields.B.fields.Normal.fields.x = local_c8;
                      local_158 = local_c8;
                      fStack_154 = fStack_c4;
                      fStack_150 = fStack_c0;
                      fStack_14c = fStack_bc;
                      fStack_164 = fStack_d4;
                      fStack_160 = fStack_d0;
                      fStack_15c = fStack_cc;
                      piVar1 = &(kept->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pMVar40 = (kept->fields)._items;
                      local_188._0_8_ = local_f8[0]._0_8_;
                      local_188._8_8_ = local_f8._8_8_;
                      local_188._16_8_ = local_f8[1]._4_8_;
                      unique0x100059d3 = UStack_e0;
                      local_168 = local_d8;
                      fStack_144 = fStack_b4;
                      _local_138 = unique0x1000175f;
                      fStack_130 = fStack_a0;
                      fStack_12c = fStack_9c;
                      fStack_120 = fStack_90;
                      fStack_11c = (float)triangle.fields.Submesh;
                      if (pMVar40 == (Map_MapFracture_Triangle_array *)0x0) goto label_0598c723;
                      uVar44 = (kept->fields)._size;
                      if ((uint)pMVar40->max_length <= uVar44) break;
                      (kept->fields)._size = uVar44 + 1;
                      pUVar7 = &pMVar40->m_Items[(int)uVar44].fields.C.fields.UV;
                      pUVar7->fields = UVar15;
                      pUVar7[1] = (UnityEngine_Vector2_o)CONCAT44(triangle.fields.Submesh,fStack_90);
                      pMVar37 = &pMVar40->m_Items[(int)uVar44].fields;
                      *(undefined8 *)((long)&(pMVar37->C).fields.Position.fields + 8) = unique0x1000175f;
                      *(undefined8 *)((long)&(pMVar37->C).fields.Normal.fields + 4) = uVar13;
                      pMVar37 = &pMVar40->m_Items[(int)uVar44].fields;
                      *(ulong *)((long)&(pMVar37->B).fields.UV.fields + 4) = CONCAT44(fStack_b4,local_b8);
                      *(undefined8 *)&(pMVar37->C).fields.Position.fields = UStack_b0._0_8_;
                      pMVar37 = &pMVar40->m_Items[(int)uVar44].fields;
                      pMVar2 = &pMVar37->B;
                      (pMVar2->fields).Normal.fields.x = local_c8;
                      (pMVar2->fields).Normal.fields.y = fStack_c4;
                      *(ulong *)((long)&(pMVar37->B).fields.Normal.fields + 8) = CONCAT44(fStack_bc,fStack_c0)
                      ;
                      pMVar37 = &pMVar40->m_Items[(int)uVar44].fields;
                      *(ulong *)&(pMVar37->A).fields.Shade = CONCAT44(fStack_d4,local_d8);
                      *(ulong *)((long)&(pMVar37->B).fields.Position.fields + 4) =
                           CONCAT44(fStack_cc,fStack_d0);
                      pMVar37 = &pMVar40->m_Items[(int)uVar44].fields;
                      *(undefined8 *)((long)&(pMVar37->A).fields.Normal.fields + 4) = local_f8[1]._4_8_;
                      (pMVar37->A).fields.UV.fields = UStack_e0;
                      *(undefined8 *)&pMVar40->m_Items[(int)uVar44].fields.A.fields.Position =
                           local_f8[0]._0_8_;
                      *(undefined8 *)((long)&pMVar40->m_Items[(int)uVar44].fields.A.fields.Position + 8) =
                           local_f8._8_8_;
                      lVar46 = lVar46 + 0x24;
                      if (uVar45 == uVar47) goto label_0598c575;
                    }
                    item_00.fields.Submesh = triangle.fields.Submesh;
                    item_00.fields.C.fields.Shade = fStack_90;
                    item_00.fields.A.fields.Position.fields = (pMVar2->fields).Position.fields;
                    item_00.fields.A.fields.Normal.fields = (pMVar2->fields).Normal.fields;
                    item_00.fields.A.fields.UV.fields = (pMVar2->fields).UV.fields;
                    item_00.fields.B.fields.Normal.fields.z = fStack_c0;
                    item_00.fields.B.fields.UV.fields.x = fStack_bc;
                    item_00.fields.B.fields.UV.fields.y = local_b8;
                    item_00.fields.B.fields.Shade = fStack_b4;
                    item_00.fields.C.fields.Position.fields.x = fStack_140;
                    item_00.fields.C.fields.Position.fields.y = fStack_13c;
                    item_00.fields.C.fields.Position.fields.z = (float)unique0x1000175f;
                    item_00.fields.C.fields.Normal.fields.x = SUB84(unique0x1000175f,4);
                    item_00.fields.C.fields.Normal.fields.y = (float)(int)uVar13;
                    item_00.fields.C.fields.Normal.fields.z = (float)(int)((ulong)uVar13 >> 0x20);
                    item_00.fields.C.fields.UV.fields = UVar15;
                    System_Collections_Generic_List_MapFracture_Triangle___AddWithResize
                              (kept,item_00,(MethodInfo_3AB1FB0 *)pMVar38->klass->rgctx_data[0xe].method);
                    lVar46 = lVar46 + 0x24;
                    __this = local_70;
                  } while (uVar45 != uVar47);
                }
label_0598c575:
                pMVar38 = MethodInfo_System_Collections_Generic_List_MapFracture_Segment_Add;
                if (uVar43 != 2) {
                  return;
                }
                pMVar22 = (__this->fields)._cut;
                if (pMVar22 != (Map_MapFracture_Vertex_array *)0x0) {
                  iVar20 = (int)pMVar22->max_length;
                  if ((iVar20 == 1) || (iVar20 == 0)) goto label_0598c71e;
                  __this_00 = (__this->fields)._segments;
                  pfVar3 = &pMVar22->m_Items[0].fields.Shade;
                  local_d8 = *pfVar3;
                  pMVar2 = pMVar22->m_Items;
                  local_f8[0].x = (pMVar2->fields).Position.fields.x;
                  local_f8[0].y = (pMVar2->fields).Position.fields.y;
                  local_f8._8_8_ = *(undefined8 *)&pMVar22->m_Items[0].fields.Position.fields.z;
                  local_f8[1].y = pMVar22->m_Items[0].fields.Normal.fields.y;
                  local_f8[1].z = pMVar22->m_Items[0].fields.Normal.fields.z;
                  UStack_e0 = pMVar22->m_Items[0].fields.UV.fields;
                  uVar29 = pMVar22->m_Items[1].fields.Position.fields.x;
                  fVar30 = pMVar22->m_Items[1].fields.Position.fields.y;
                  uVar14 = *(undefined8 *)pfVar3;
                  uVar13 = *(undefined8 *)&pMVar22->m_Items[1].fields.Position.fields.z;
                  uVar31 = pMVar22->m_Items[1].fields.Normal.fields.y;
                  uVar32 = pMVar22->m_Items[1].fields.Normal.fields.z;
                  UVar15 = pMVar22->m_Items[1].fields.UV.fields;
                  fStack_cc = (float)uVar13;
                  local_c8 = (float)((ulong)uVar13 >> 0x20);
                  fStack_bc = UVar15.x;
                  local_b8 = UVar15.y;
                  fStack_b4 = pMVar22->m_Items[1].fields.Shade;
                  fStack_d4 = (float)uVar29;
                  fStack_d0 = fVar30;
                  fStack_c4 = (float)uVar31;
                  fStack_c0 = (float)uVar32;
                  if (__this_00 != (System_Collections_Generic_List_MapFracture_Segment__o *)0x0) {
                    local_148 = local_b8;
                    local_158 = local_c8;
                    fStack_154 = (float)uVar31;
                    fStack_150 = (float)uVar32;
                    fStack_14c = fStack_bc;
                    local_168 = (float)uVar14;
                    fStack_164 = (float)((ulong)uVar14 >> 0x20);
                    fStack_160 = fVar30;
                    fStack_15c = fStack_cc;
                    fStack_140 = (float)triangle.fields.Submesh;
                    piVar1 = &(__this_00->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pMVar40 = (Map_MapFracture_Triangle_array *)(__this_00->fields)._items;
                    local_188._0_8_ = local_f8[0]._0_8_;
                    local_188._8_8_ = local_f8._8_8_;
                    local_188._16_8_ = local_f8[1]._4_8_;
                    unique0x100059eb = UStack_e0;
                    fStack_144 = fStack_b4;
                    if (pMVar40 != (Map_MapFracture_Triangle_array *)0x0) {
                      uVar44 = (__this_00->fields)._size;
                      if ((uint)pMVar40->max_length <= uVar44) {
                        item.fields.B.fields.Position.fields.z = fStack_cc;
                        item.fields.B.fields.Position.fields.y = fVar30;
                        item.fields.B.fields.Normal.fields.y = (float)uVar31;
                        item.fields.B.fields.Normal.fields.x = local_c8;
                        item.fields.A.fields = pMVar2->fields;
                        item.fields.B.fields.Position.fields.x = pMVar2[1].fields.Position.fields.x;
                        item.fields.B.fields.Normal.fields.z = (float)uVar32;
                        item.fields.B.fields.UV.fields.x = fStack_bc;
                        item.fields.B.fields.UV.fields.y = local_b8;
                        item.fields.B.fields.Shade = fStack_b4;
                        item.fields.Submesh = triangle.fields.Submesh;
                        System_Collections_Generic_List_MapFracture_Segment___AddWithResize
                                  (__this_00,item,(MethodInfo_3AADF70 *)pMVar38->klass->rgctx_data[0xe].method
                                  );
                        return;
                      }
                      (__this_00->fields)._size = uVar44 + 1;
                      lVar42 = (long)(int)uVar44 * 0x4c;
                      UVar33.y = (float)triangle.fields.Submesh;
                      UVar33.x = fStack_b4;
                      pUVar6 = (UnityEngine_Vector2_Fields *)
                               ((long)&pMVar40->m_Items[0].fields.B + lVar42 + 0x18);
                      *pUVar6 = UVar15;
                      pUVar6[1] = UVar33;
                      local_188._8_4_ = local_f8[0].z;
                      local_188._12_4_ = local_f8[1].x;
                      local_188._24_4_ = UStack_e0.x;
                      fStack_16c = UStack_e0.y;
                      triangle.fields.B.fields.Normal.fields.y = (float)uVar31;
                      triangle.fields.B.fields.Normal.fields.x = local_c8;
                      triangle.fields.B.fields.UV.fields.x = fStack_bc;
                      triangle.fields.B.fields.Normal.fields.z = (float)uVar32;
                      goto label_0598c2ad;
                    }
                  }
                }
              }
              goto label_0598c723;
            }
          }
        }
      }
    }
  }
label_0598c71e:
  ThrowIndexOutOfRangeException();
}


// Map.MapFracture$$AddCut
// il2cpp: void Map_MapFracture__AddCut (Map_MapFracture_o* __this, Map_MapFracture_Vertex_o vertex, int32_t* count, const MethodInfo* method);
// 0x598d050

void Map_MapFracture__AddCut
               (Map_MapFracture_o *__this,Map_MapFracture_Vertex_o vertex,int32_t *count,MethodInfo *method)

{
  Map_MapFracture_Vertex_o *pMVar1;
  uint uVar2;
  Map_MapFracture_Vertex_array *pMVar3;
  Map_MapFracture_Vertex_Fields *pMVar4;
  uint uVar5;
  
  pMVar3 = (__this->fields)._cut;
  if (pMVar3 == (Map_MapFracture_Vertex_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar5 = *count;
  uVar2 = (uint)pMVar3->max_length;
  if ((int)uVar5 < (int)uVar2) {
    if (uVar2 <= uVar5) {
      ThrowIndexOutOfRangeException();
    }
    pMVar3->m_Items[(int)uVar5].fields.Shade = vertex.fields.Shade;
    pMVar4 = &pMVar3->m_Items[(int)uVar5].fields;
    (pMVar4->Normal).fields.y = vertex.fields.Normal.fields.y;
    (pMVar4->Normal).fields.z = vertex.fields.Normal.fields.z;
    (pMVar4->UV).fields = vertex.fields.UV.fields;
    pMVar1 = pMVar3->m_Items + (int)uVar5;
    (pMVar1->fields).Position.fields.x = vertex.fields.Position.fields.x;
    (pMVar1->fields).Position.fields.y = vertex.fields.Position.fields.y;
    *(undefined8 *)&(pMVar1->fields).Position.fields.z = vertex.fields._8_8_;
    uVar5 = *count;
  }
  *count = uVar5 + 1;
  return;
}


// Map.MapFracture$$CloseOpenings
// il2cpp: void Map_MapFracture__CloseOpenings (Map_MapFracture_o* __this, const MethodInfo* method);
// 0x5988fc0
// eh: try 0x59893da..0x598a0a7 -> pad 0x598a317 (+15 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x598a194..0x598a199 -> pad 0x598a294 cleanup
// eh: try 0x598a28f..0x598a294 -> pad 0x598a2a9 catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x598a297..0x598a2a4 -> pad 0x598a381 catch (...) [compiler noexcept guard]
// eh: try 0x598a2d2..0x598a2d7 -> pad 0x598a2f9 cleanup
// eh: try 0x598a2fc..0x598a309 -> pad 0x598a381 catch (...) [compiler noexcept guard]
// eh: try 0x598a33c..0x598a341 -> pad 0x598a369 cleanup
// eh: try 0x598a36c..0x598a379 -> pad 0x598a381 catch (...) [compiler noexcept guard]
// asm: 85 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59893cc: nop dword ptr [rax]
// asm:   0x5989600: jmp 0x598965e
// asm:   0x5989b20: mov ebx, ebp
// asm:   0x5989c6d: jmp 0x598a28a
// asm:   0x598a175: mov rbx, rax
// asm:   0x598a178: cmp edx, 1
// asm:   0x598a17b: jne 0x598a297
// asm:   0x598a181: mov rdi, rbx
// asm:   0x598a184: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x598a189: mov rbp, qword ptr [rax]
// asm:   0x598a18c: mov qword ptr [rsp + 0xe0], rbp
// asm:   0x598a194: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x598a199: lea rax, [rip + 0x1904c58]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x598a1a0: mov rsi, qword ptr [rax]
// asm:   0x598a1a3: lea rdi, [rsp + 0x1c0]
// asm:   0x598a1ab: call 0x4d66410  ; System_Collections_Generic_List_Enumerator_Vector3___Dispose()
// asm:   0x598a1b0: test rbp, rbp
// asm:   0x598a1b3: mov r12, qword ptr [rsp + 0xd0]
// asm:   0x598a1bb: mov r13, qword ptr [rsp + 0x90]
// asm:   0x598a1c3: mov ebx, dword ptr [rsp + 0x70]
// asm:   0x598a1c7: je 0x598a10d
// asm:   0x598a1cd: mov rdi, rbp
// asm:   0x598a1d0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x598a294: mov rbx, rax
// asm:   0x598a297: lea rdi, [rsp + 0xe0]
// asm:   0x598a29f: call 0x2fd4500  ; il2cpp_runtime_helper_02fd4500()
// asm:   0x598a2a4: jmp 0x598a379
// asm:   0x598a2a9: jmp 0x598a2b7
// asm:   0x598a2ab: jmp 0x598a2b7
// asm:   0x598a2ad: jmp 0x598a2b7
// asm:   0x598a2af: jmp 0x598a2b7
// asm:   0x598a2b1: jmp 0x598a2b7
// asm:   0x598a2b3: jmp 0x598a2b7
// asm:   0x598a2b5: jmp 0x598a2b7
// asm:   0x598a2b7: mov rbx, rax
// asm:   0x598a2ba: cmp edx, 1
// asm:   0x598a2bd: jne 0x598a2fc
// asm:   0x598a2bf: mov rdi, rbx
// asm:   0x598a2c2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x598a2c7: mov rbx, qword ptr [rax]
// asm:   0x598a2ca: mov qword ptr [rsp + 0xe0], rbx
// asm:   0x598a2d2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x598a2d7: lea rax, [rip + 0x19052e2]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int_int_MapFracture_Opening_Dispose
// asm:   0x598a2de: mov rsi, qword ptr [rax]
// asm:   0x598a2e1: lea rdi, [rsp + 0x190]
// asm:   0x598a2e9: call 0x4d8e7c0  ; System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int__int___MapFracture_Opening___Dispose()
// asm:   0x598a2ee: test rbx, rbx
// asm:   0x598a2f1: je 0x59899dc
// asm:   0x598a2f7: jmp 0x598a361
// asm:   0x598a2f9: mov rbx, rax
// asm:   0x598a2fc: lea rdi, [rsp + 0xe0]
// asm:   0x598a304: call 0x2fd44d0  ; il2cpp_runtime_helper_02fd44d0()
// asm:   0x598a309: jmp 0x598a379
// asm:   0x598a30b: jmp 0x598a317
// asm:   0x598a30d: jmp 0x598a317
// asm:   0x598a30f: jmp 0x598a31c
// asm:   0x598a311: jmp 0x598a317
// asm:   0x598a313: jmp 0x598a31c
// asm:   0x598a315: jmp 0x598a31c
// asm:   0x598a317: mov rbx, rax
// asm:   0x598a31a: jmp 0x598a324
// asm:   0x598a31c: mov rbx, rax
// asm:   0x598a31f: mov rbp, qword ptr [rsp + 0x58]
// asm:   0x598a324: cmp edx, 1
// asm:   0x598a327: jne 0x598a36c
// asm:   0x598a329: mov rdi, rbx
// asm:   0x598a32c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x598a331: mov rbx, qword ptr [rax]
// asm:   0x598a334: mov qword ptr [rsp + 0xe0], rbx
// asm:   0x598a33c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x598a341: lea rax, [rip + 0x1904f90]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x598a348: mov rsi, qword ptr [rax]
// asm:   0x598a34b: lea rdi, [rsp + 0x220]
// asm:   0x598a353: call 0x4d821f0  ; System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose()
// asm:   0x598a358: test rbx, rbx
// asm:   0x598a35b: je 0x59897d4
// asm:   0x598a361: mov rdi, rbx
// asm:   0x598a364: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x598a369: mov rbx, rax
// asm:   0x598a36c: lea rdi, [rsp + 0xe0]
// asm:   0x598a374: call 0x2fd44a0  ; il2cpp_runtime_helper_02fd44a0()
// asm:   0x598a379: mov rdi, rbx
// asm:   0x598a37c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x598a381: mov rdi, rax
// asm:   0x598a384: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapFracture__CloseOpenings(Map_MapFracture_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Map_MapFracture_Vertex_o *pMVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint32_t uVar7;
  uint uVar8;
  System_Collections_Generic_List_MapFracture_Triangle__o *__this_00;
  Map_MapFracture_Vertex_array *pMVar9;
  UnityEngine_Vector3_array *pUVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  Map_MapFracture_Vertex_o vertex;
  Map_MapFracture_Vertex_o vertex_00;
  Map_MapFracture_Vertex_o vertex_01;
  Map_MapFracture_Vertex_o item;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  Map_MapFracture_Vertex_Fields *pMVar15;
  ulong uVar16;
  MethodInfo *pMVar17;
  System_Collections_Generic_Dictionary_Vector3Int__int__o *points;
  System_Collections_Generic_List_MapFracture_Vertex__o *__this_01;
  int32_t b;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  bool bVar21;
  int32_t iVar22;
  int32_t b_00;
  int iVar23;
  System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *__this_02;
  UnityEngine_Vector3_StaticFields *pUVar24;
  System_Collections_Generic_Dictionary_int__int__o *pSVar25;
  System_Collections_Generic_Dictionary_int__MapFracture_Opening__o *pSVar26;
  System_Collections_Generic_List_MapFracture_Vertex__o *pSVar27;
  System_Collections_Generic_List_Vector3__o *__this_03;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar28;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  float fVar29;
  float extraout_XMM0_Db;
  float fVar30;
  undefined1 __x [4];
  undefined1 auVar31 [16];
  UnityEngine_Vector3_o normal;
  Map_MapFracture_Opening_o MVar32;
  Map_MapFracture_Opening_o value;
  Map_MapFracture_Opening_o opening;
  Map_MapFracture_Opening_o opening_00;
  int32_t local_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined1 local_308 [4];
  undefined1 auStack_304 [12];
  System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *local_2f0;
  undefined1 local_2e8 [16];
  System_Collections_Generic_Dictionary_Vector3Int__int__o *local_2d8;
  System_Collections_Generic_List_MapFracture_Vertex__o *local_2d0;
  undefined1 local_2c8 [8];
  float fStack_2c0;
  float fStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [8];
  undefined1 *puStack_290;
  System_Collections_Generic_Dictionary_int__int__o *local_288;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined8 local_258;
  UnityEngine_Vector2_Fields UStack_250;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  ulong uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [16];
  System_Collections_Generic_Dictionary_int__int__o *local_1d0;
  UnityEngine_Vector2_Fields UStack_1c8;
  float local_1c0;
  undefined1 local_1b8 [8];
  undefined1 *puStack_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [8];
  undefined1 *puStack_180;
  System_Collections_Generic_Dictionary_int__int__o *local_178;
  UnityEngine_Vector2_Fields UStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  float fStack_154;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  MethodInfo *local_130;
  undefined1 local_128 [8];
  undefined1 *puStack_120;
  System_Collections_Generic_Dictionary_int__int__o *local_118;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulong uStack_d0;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  System_Collections_Generic_Dictionary_int__int__o *local_58;
  float fStack_50;
  float afStack_4c [3];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  if (Il2CppMethodInitialized_07545a20 == '\0') {
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
    Il2CppMethodInitialized_07545a20 = '\x01';
  }
  local_b8 = 0;
  uStack_b4 = 0;
  fStack_b0 = 0.0;
  uStack_ac = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  fStack_f8 = 0.0;
  fStack_f4 = 0.0;
  fStack_f0 = 0.0;
  uStack_ec = 0;
  local_108 = 0.0;
  fStack_104 = 0.0;
  fStack_100 = 0.0;
  fStack_fc = 0.0;
  local_118 = (System_Collections_Generic_Dictionary_int__int__o *)0x0;
  fStack_110 = 0.0;
  fStack_10c = 0.0;
  local_128 = (undefined1  [8])0x0;
  puStack_120 = (undefined1 *)0x0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  local_158 = 0;
  fStack_154 = 0.0;
  local_198._0_4_ = 0;
  local_198._4_4_ = 0;
  uStack_190._0_4_ = 0.0;
  uStack_190._4_4_ = 0.0;
  local_1a8 = 0.0;
  fStack_1a4 = 0.0;
  fStack_1a0 = 0.0;
  fStack_19c = 0.0;
  local_1b8 = (undefined1  [8])0x0;
  puStack_1b0 = (undefined1 *)0x0;
  local_298 = (undefined1  [8])0x0;
  puStack_290 = (undefined1 *)0x0;
  local_288 = (System_Collections_Generic_Dictionary_int__int__o *)0x0;
  local_31c = 0;
  local_178 = (System_Collections_Generic_Dictionary_int__int__o *)0x0;
  UStack_170.x = 0.0;
  UStack_170.y = 0.0;
  local_188 = (undefined1  [8])0x0;
  puStack_180 = (undefined1 *)0x0;
  local_2d8 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_int);
  System_Collections_Generic_Dictionary_Vector3Int__int____ctor
            (local_2d8,
             (MethodInfo_4B1BB70 *)MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_ctor);
  local_2d0 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Vertex);
  System_Collections_Generic_List_MapFracture_Vertex____ctor
            (local_2d0,
             (MethodInfo_3AB57C0 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_ctor);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening
                        );
  System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening____ctor
            (__this_02,
             (MethodInfo_499DDD0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_ctor);
  __this_00 = (__this->fields)._triangles;
  local_130 = (MethodInfo *)__this;
  if (__this_00 != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    System_Collections_Generic_List_MapFracture_Triangle___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_268,__this_00,
               (MethodInfo_3AB3540 *)
               MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
    local_b8 = (undefined4)local_1f8;
    uStack_b4 = (undefined4)((ulong)local_1f8 >> 0x20);
    fStack_b0 = (float)uStack_1f0;
    uStack_ac = (undefined4)((ulong)uStack_1f0 >> 0x20);
    local_c8 = (uint)local_208;
    uStack_c4 = (undefined4)((ulong)local_208 >> 0x20);
    uStack_c0 = (undefined4)uStack_200;
    uStack_bc = (undefined4)((ulong)uStack_200 >> 0x20);
    local_d8 = local_218;
    uStack_d0 = uStack_210;
    local_e8 = local_228;
    uStack_e0 = uStack_220;
    fStack_f8 = (float)local_238;
    fStack_f4 = (float)((ulong)local_238 >> 0x20);
    fStack_f0 = (float)uStack_230;
    uStack_ec = (uint)((ulong)uStack_230 >> 0x20);
    local_108 = local_248;
    fStack_104 = fStack_244;
    fStack_100 = (float)_fStack_240;
    fStack_fc = SUB84(_fStack_240,4);
    local_118 = local_258;
    fStack_110 = UStack_250.x;
    fStack_10c = UStack_250.y;
    local_128 = (undefined1  [8])local_268._0_8_;
    puStack_120 = (undefined1 *)local_268._8_8_;
    local_268._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_268._8_8_ = local_128;
    local_2f0 = __this_02;
    while (bVar21 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                              ((System_Collections_Generic_List_Enumerator_T__o *)local_128,
                               (MethodInfo_4C82200 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext
                              ), uVar20 = uStack_ac, pSVar27 = local_2d0, points = local_2d8, bVar21) {
      local_318 = fStack_f4;
      fStack_314 = fStack_f0;
      fStack_310 = 0.0;
      fStack_30c = 0.0;
      local_138 = local_d8;
      local_148 = local_e8;
      uStack_140 = uStack_e0;
      _fStack_2c0 = 0;
      local_2c8 = (undefined1  [8])uStack_d0;
      local_2e8 = ZEXT416(uStack_ec);
      _local_308 = ZEXT416(local_c8);
      local_158 = uStack_b4;
      fStack_154 = fStack_b0;
      local_168 = uStack_c4;
      uStack_164 = uStack_c0;
      uStack_160 = uStack_bc;
      uStack_15c = local_b8;
      local_2b8 = local_118;
      uStack_2b0 = 0;
      local_58 = local_118;
      local_278 = ZEXT416((uint)fStack_110);
      fStack_50 = fStack_110;
      afStack_4c[0] = fStack_10c;
      fStack_40 = fStack_100;
      fStack_3c = fStack_fc;
      fStack_38 = fStack_f8;
      vertex.fields.Normal.fields.x = fStack_10c;
      vertex.fields.Position.fields.z = fStack_110;
      vertex.fields.Normal.fields.z = fStack_104;
      vertex.fields.Normal.fields.y = local_108;
      vertex.fields.UV.fields.y = fStack_fc;
      vertex.fields.UV.fields.x = fStack_100;
      vertex.fields.Position.fields._0_8_ = local_118;
      vertex.fields.Shade = fStack_f8;
      iVar22 = Map_MapFracture__Weld(local_2d8,local_2d0,vertex,(MethodInfo *)afStack_4c);
      local_2a8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)CONCAT44(local_2a8._4_4_,iVar22);
      local_80 = CONCAT44(fStack_314,local_318);
      uStack_78 = local_2e8._0_4_;
      uStack_64 = (undefined4)local_138;
      fStack_60 = (float)((ulong)local_138 >> 0x20);
      uStack_74 = (undefined4)local_148;
      uStack_70 = (undefined4)((ulong)local_148 >> 0x20);
      uStack_6c = (undefined4)uStack_140;
      uStack_68 = (undefined4)((ulong)uStack_140 >> 0x20);
      vertex_00.fields.Normal.fields.x = (float)uStack_74;
      vertex_00.fields.Position.fields.z = (float)local_2e8._0_4_;
      vertex_00.fields.Normal.fields.z = (float)uStack_6c;
      vertex_00.fields.Normal.fields.y = (float)uStack_70;
      vertex_00.fields.UV.fields.y = (float)uStack_64;
      vertex_00.fields.UV.fields.x = (float)uStack_68;
      vertex_00.fields.Position.fields.x = local_318;
      vertex_00.fields.Position.fields.y = fStack_314;
      vertex_00.fields.Shade = fStack_60;
      iVar22 = Map_MapFracture__Weld(points,pSVar27,vertex_00,method_00);
      local_a8 = local_2c8;
      uStack_a0 = local_308;
      uStack_8c = local_158;
      fStack_88 = fStack_154;
      uStack_9c = local_168;
      uStack_98 = uStack_164;
      uStack_94 = uStack_160;
      uStack_90 = uStack_15c;
      vertex_01.fields.Normal.fields.x = (float)local_168;
      vertex_01.fields.Position.fields.z = (float)local_308;
      vertex_01.fields.Normal.fields.z = (float)uStack_160;
      vertex_01.fields.Normal.fields.y = (float)uStack_164;
      vertex_01.fields.UV.fields.y = (float)local_158;
      vertex_01.fields.UV.fields.x = (float)uStack_15c;
      vertex_01.fields.Position.fields.x = (float)local_2c8._0_4_;
      vertex_01.fields.Position.fields.y = (float)local_2c8._4_4_;
      vertex_01.fields.Shade = fStack_154;
      b_00 = Map_MapFracture__Weld(points,pSVar27,vertex_01,method_01);
      if (Il2CppMethodInitialized_0753e72d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72d = '\x01';
        local_1e8._0_4_ = 0.0;
        local_1e8._4_4_ = 0.0;
        if (Il2CppMethodInitialized_0753e729 != '\0') goto label_059895ed;
label_05989638:
        local_1e8._0_4_ = 0.0;
        local_1e8._4_4_ = 0.0;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        uVar7 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        local_1e8._0_4_ = 0.0;
        local_1e8._4_4_ = 0.0;
        if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05989638;
label_059895ed:
        local_1e8._0_4_ = 0.0;
        local_1e8._4_4_ = 0.0;
        uVar7 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar7 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar29 = (float)local_2c8._0_4_ - (float)local_2b8;
      fVar30 = local_318 - (float)local_2b8;
      auVar31._0_4_ =
           ((float)local_308 - (float)local_278._0_4_) * (fStack_314 - local_2b8._4_4_) -
           ((float)local_2e8._0_4_ - (float)local_278._0_4_) * ((float)local_2c8._4_4_ - local_2b8._4_4_);
      auVar31._4_4_ =
           ((float)local_2e8._0_4_ - (float)local_278._0_4_) * fVar29 -
           ((float)local_308 - (float)local_278._0_4_) * fVar30;
      auVar31._8_4_ =
           ((float)auStack_304._0_4_ - (float)local_278._0_4_) * (fStack_310 - (float)uStack_2b0) -
           ((float)auStack_304._0_4_ - (float)local_278._0_4_) * (fStack_2c0 - (float)uStack_2b0);
      auVar31._12_4_ =
           ((float)local_2e8._4_4_ - (float)local_278._0_4_) * (fStack_30c - uStack_2b0._4_4_) -
           ((float)local_2e8._4_4_ - (float)local_278._0_4_) * (fStack_2bc - uStack_2b0._4_4_);
      local_318 = fVar30 * ((float)local_2c8._4_4_ - local_2b8._4_4_) -
                  fVar29 * (fStack_314 - local_2b8._4_4_);
      fStack_314 = fVar30 * fVar30 - fVar29 * fVar29;
      fStack_310 = fVar30 * (fStack_2c0 - (float)uStack_2b0) - fVar29 * (fStack_310 - (float)uStack_2b0);
      fStack_30c = fVar30 * (fStack_2bc - uStack_2b0._4_4_) - fVar29 * (fStack_30c - uStack_2b0._4_4_);
      fVar29 = local_318 * local_318 + auVar31._4_4_ * auVar31._4_4_ + auVar31._0_4_ * auVar31._0_4_;
      if (fVar29 < 0.0) {
        local_2e8 = auVar31;
        fVar29 = sqrtf(fVar29);
        fStack_314 = extraout_XMM0_Db;
        auVar31 = local_2e8;
        if (fVar29 <= 1e-05) goto label_05989707;
label_05989742:
        fVar30 = local_318 / fVar29;
        auVar11._4_4_ = fVar29;
        auVar11._0_4_ = fVar29;
        auVar11._8_4_ = fStack_314;
        auVar11._12_4_ = fStack_314;
        auVar31 = divps(auVar31,auVar11);
        local_1e8._0_4_ = auVar31._0_4_;
        local_1e8._4_4_ = auVar31._4_4_;
        pUVar24 = (UnityEngine_Vector3_StaticFields *)local_1e8;
      }
      else {
        fVar29 = SQRT(fVar29);
        if (1e-05 < fVar29) goto label_05989742;
label_05989707:
        pUVar24 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar30 = (pUVar24->zeroVector).fields.z;
      }
      __this_02 = local_2f0;
      uVar3 = (pUVar24->zeroVector).fields.x;
      uVar5 = (pUVar24->zeroVector).fields.y;
      MVar32.fields.Normal.fields.y = (float)uVar5;
      MVar32.fields.Normal.fields.x = (float)uVar3;
      opening_00.fields.Submesh = uVar20;
      opening_00.fields.Normal.fields.z = fVar30;
      b = (int32_t)(float)local_2a8;
      fStack_310 = 0.0;
      fStack_30c = 0.0;
      MVar32.fields.Normal.fields.z = fVar30;
      MVar32.fields.Submesh = uVar20;
      local_318 = (float)uVar3;
      fStack_314 = (float)uVar5;
      Map_MapFracture__AddEdge(local_2f0,(int32_t)(float)local_2a8,iVar22,MVar32,in_R8);
      opening.fields.Normal.fields.y = fStack_314;
      opening.fields.Normal.fields.x = local_318;
      opening.fields.Normal.fields.z = fVar30;
      opening.fields.Submesh = uVar20;
      Map_MapFracture__AddEdge(__this_02,iVar22,b_00,opening,in_R8);
      opening_00.fields.Normal.fields.y = fStack_314;
      opening_00.fields.Normal.fields.x = local_318;
      Map_MapFracture__AddEdge(__this_02,b_00,b,opening_00,in_R8);
    }
    System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
              ((System_Collections_Generic_List_Enumerator_T__o *)local_128,
               (MethodInfo_4C821F0 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
    pSVar25 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int)
    ;
    System_Collections_Generic_Dictionary_int__int____ctor
              (pSVar25,(MethodInfo_4A032E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
    pSVar26 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening
                        );
    System_Collections_Generic_Dictionary_int__MapFracture_Opening____ctor
              (pSVar26,(MethodInfo_4A2A560 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening_ctor);
    if (__this_02 != (System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *)0x0
       ) {
      System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_268,__this_02,
                 (MethodInfo_499EE60 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_GetEnumerator
                );
      local_198._4_4_ = fStack_244;
      local_198._0_4_ = (int32_t)local_248;
      uStack_190._0_4_ = fStack_240;
      uStack_190._4_4_ = fStack_23c;
      local_1a8 = SUB84(local_258,0);
      fStack_1a4 = local_258._4_4_;
      fStack_1a0 = UStack_250.x;
      fStack_19c = UStack_250.y;
      local_1b8 = (undefined1  [8])local_268._0_8_;
      puStack_1b0 = (undefined1 *)local_268._8_8_;
      local_268._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_268._8_8_ = local_1b8;
      local_278._0_8_ = pSVar26;
      local_2b8 = pSVar25;
      if (pSVar25 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
        bVar21 = System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int__int___MapFracture_Opening___MoveNext
                           ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_1b8,
                            (MethodInfo_4C8E670 *)
                            MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int_int_MapFracture_Opening_MoveNext
                           );
        if (bVar21) {
          ThrowNullReferenceException();
        }
      }
      else if (pSVar26 == (System_Collections_Generic_Dictionary_int__MapFracture_Opening__o *)0x0) {
        bVar21 = System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int__int___MapFracture_Opening___MoveNext
                           ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_1b8,
                            (MethodInfo_4C8E670 *)
                            MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int_int_MapFracture_Opening_MoveNext
                           );
        if (bVar21) {
          bVar21 = System_Collections_Generic_Dictionary_int__int___TryAdd
                             (local_2b8,(int32_t)fStack_1a4,(int32_t)local_1a8,
                              (MethodInfo_4A05C30 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_int_TryAdd);
          if (bVar21) {
            ThrowNullReferenceException();
          }
label_059899a9:
          System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int__int___MapFracture_Opening___Dispose
                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_1b8,
                     (MethodInfo_4C8E7C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int_int_MapFracture_Opening_Dispose
                    );
          return;
        }
      }
      else {
        while (bVar21 = System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int__int___MapFracture_Opening___MoveNext
                                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                   local_1b8,
                                   (MethodInfo_4C8E670 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int_int_MapFracture_Opening_MoveNext
                                  ), uVar18 = local_198, fVar29 = fStack_1a4, bVar21) {
          local_318 = fStack_1a0;
          fStack_314 = fStack_19c;
          fStack_310 = 0.0;
          fStack_30c = 0.0;
          bVar21 = System_Collections_Generic_Dictionary_int__int___TryAdd
                             (local_2b8,(int32_t)fStack_1a4,(int32_t)local_1a8,
                              (MethodInfo_4A05C30 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_int_TryAdd);
          uVar19 = local_198;
          if (!bVar21) goto label_059899a9;
          value.fields.Normal.fields.y = fStack_314;
          value.fields.Normal.fields.x = local_318;
          local_198._0_4_ = (int32_t)uVar18;
          local_198._4_4_ = SUB84(uVar18,4);
          value.fields.Normal.fields.z = (float)(int32_t)local_198;
          value.fields.Submesh = local_198._4_4_;
          local_198 = uVar19;
          System_Collections_Generic_Dictionary_int__MapFracture_Opening___Add
                    ((System_Collections_Generic_Dictionary_int__MapFracture_Opening__o *)local_278._0_8_,
                     (int32_t)fVar29,value,
                     (MethodInfo_4A2B190 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening_Add);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int__int___MapFracture_Opening___Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_1b8,
                 (MethodInfo_4C8E7C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ValueTuple_int_int_MapFracture_Opening_Dispose
                );
      pSVar27 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Vertex);
      System_Collections_Generic_List_MapFracture_Vertex____ctor
                (pSVar27,(MethodInfo_3AB57C0 *)
                         MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_ctor);
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
      System_Collections_Generic_List_Vector3____ctor
                (__this_03,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
      pSVar25 = local_2b8;
      if (local_2b8 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
        pSVar26 = (System_Collections_Generic_Dictionary_int__MapFracture_Opening__o *)local_278._0_8_;
        if (pSVar27 == (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) {
          iVar22 = System_Collections_Generic_Dictionary_int__int___get_Count
                             (local_2b8,
                              (MethodInfo_4A03B00 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Count);
          if (0 < iVar22) {
            pSVar28 = System_Collections_Generic_Dictionary_int__int___get_Keys
                                (pSVar25,(MethodInfo_4A03B10 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Keys);
            if (pSVar28 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
              System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         local_1e0,pSVar28,
                         (MethodInfo_5106330 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_int_GetEnumerator)
              ;
              local_258 = local_1d0;
              local_268._0_8_ = local_1e0._0_8_;
              local_268._8_8_ = local_1e0._8_8_;
              local_298 = (undefined1  [8])local_1e0._0_8_;
              puStack_290 = (undefined1 *)local_1e0._8_8_;
              local_288 = local_1d0;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         local_298,
                         (MethodInfo_4C9FB40 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_MoveNext
                        );
              if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_0753e4b6 = '\x01';
              }
            }
            goto label_0598a28a;
          }
        }
        else {
          iVar23 = System_Collections_Generic_Dictionary_int__int___get_Count
                             (local_2b8,
                              (MethodInfo_4A03B00 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Count);
          if (__this_03 == (System_Collections_Generic_List_Vector3__o *)0x0) {
            if (0 < iVar23) {
              pSVar28 = System_Collections_Generic_Dictionary_int__int___get_Keys
                                  (pSVar25,(MethodInfo_4A03B10 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Keys);
              if (pSVar28 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
                System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           local_1e0,pSVar28,
                           (MethodInfo_5106330 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_int_GetEnumerator
                          );
                local_258 = local_1d0;
                local_268._0_8_ = local_1e0._0_8_;
                local_268._8_8_ = local_1e0._8_8_;
                local_298 = (undefined1  [8])local_1e0._0_8_;
                puStack_290 = (undefined1 *)local_1e0._8_8_;
                local_288 = local_1d0;
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           local_298,
                           (MethodInfo_4C9FB40 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_MoveNext
                          );
                if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_0753e4b6 = '\x01';
                }
                piVar1 = &(pSVar27->fields)._version;
                *piVar1 = *piVar1 + 1;
                (pSVar27->fields)._size = 0;
                ThrowNullReferenceException();
              }
              goto label_0598a28a;
            }
          }
          else {
            while (0 < iVar23) {
              pSVar28 = System_Collections_Generic_Dictionary_int__int___get_Keys
                                  (pSVar25,(MethodInfo_4A03B10 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Keys);
              if (pSVar28 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
              goto label_0598a28a;
              System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         local_1e0,pSVar28,
                         (MethodInfo_5106330 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_int_GetEnumerator)
              ;
              local_258 = local_1d0;
              local_268._0_8_ = local_1e0._0_8_;
              local_268._8_8_ = local_1e0._8_8_;
              local_298 = (undefined1  [8])local_1e0._0_8_;
              puStack_290 = (undefined1 *)local_1e0._8_8_;
              local_288 = local_1d0;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         local_298,
                         (MethodInfo_4C9FB40 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_MoveNext
                        );
              iVar22 = (int32_t)local_288;
              if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_0753e4b6 = '\x01';
              }
              pUVar24 = TypeInfo_UnityEngine_Vector3->static_fields;
              uVar4 = (pUVar24->zeroVector).fields.x;
              uVar6 = (pUVar24->zeroVector).fields.y;
              fStack_310 = 0.0;
              fStack_30c = 0.0;
              local_2e8._0_4_ = (pUVar24->zeroVector).fields.z;
              piVar1 = &(pSVar27->fields)._version;
              *piVar1 = *piVar1 + 1;
              (pSVar27->fields)._size = 0;
              piVar1 = &(__this_03->fields)._version;
              *piVar1 = *piVar1 + 1;
              (__this_03->fields)._size = 0;
              local_2d8 = (System_Collections_Generic_Dictionary_Vector3Int__int__o *)
                          CONCAT44(local_2d8._4_4_,iVar22);
              local_318 = (float)uVar4;
              fStack_314 = (float)uVar6;
              if (local_2d0 == (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) {
                bVar21 = System_Collections_Generic_Dictionary_int__int___TryGetValue
                                   (pSVar25,iVar22,&local_31c,
                                    (MethodInfo_4A05BD0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
                if ((bVar21) && ((pSVar27->fields)._size < 0x800)) goto label_0598a28a;
label_05989b22:
                System_Collections_Generic_Dictionary_int__int___Remove
                          (pSVar25,iVar22,
                           (MethodInfo_4A05510 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_int_Remove);
              }
              else {
                do {
                  bVar21 = System_Collections_Generic_Dictionary_int__int___TryGetValue
                                     (pSVar25,iVar22,&local_31c,
                                      (MethodInfo_4A05BD0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
                  if ((!bVar21) || (0x7ff < (pSVar27->fields)._size)) goto label_05989b22;
                  System_Collections_Generic_List_MapFracture_Vertex___get_Item
                            ((Map_MapFracture_Vertex_o *)local_1e0,local_2d0,iVar22,
                             (MethodInfo_3AB5DD0 *)
                             MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
                  pMVar17 = MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add;
                  local_248 = local_1c0;
                  local_258 = local_1d0;
                  UStack_250 = UStack_1c8;
                  local_268._0_8_ = local_1e0._0_8_;
                  local_268._8_8_ = local_1e0._8_8_;
                  piVar1 = &(pSVar27->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pMVar9 = (pSVar27->fields)._items;
                  if (pMVar9 == (Map_MapFracture_Vertex_array *)0x0) goto label_0598a28a;
                  uVar8 = (pSVar27->fields)._size;
                  if (uVar8 < (uint)pMVar9->max_length) {
                    (pSVar27->fields)._size = uVar8 + 1;
                    pMVar9->m_Items[(int)uVar8].fields.Shade = local_1c0;
                    pMVar15 = &pMVar9->m_Items[(int)uVar8].fields;
                    *(System_Collections_Generic_Dictionary_int__int__o **)&(pMVar15->Normal).fields.y =
                         local_1d0;
                    (pMVar15->UV).fields = UStack_1c8;
                    pMVar2 = pMVar9->m_Items + (int)uVar8;
                    (pMVar2->fields).Position.fields.x = (float)local_1e0._0_4_;
                    (pMVar2->fields).Position.fields.y = (float)local_1e0._4_4_;
                    *(undefined8 *)&(pMVar2->fields).Position.fields.z = local_1e0._8_8_;
                  }
                  else {
                    item.fields.Position.fields.z = (float)local_1e0._8_4_;
                    item.fields.Normal.fields.x = (float)local_1e0._12_4_;
                    item.fields.Position.fields.x = (float)local_1e0._0_4_;
                    item.fields.Position.fields.y = (float)local_1e0._4_4_;
                    item.fields.Normal.fields._4_8_ = local_1d0;
                    item.fields.UV.fields = UStack_1c8;
                    item.fields.Shade = local_1c0;
                    System_Collections_Generic_List_MapFracture_Vertex___AddWithResize
                              (pSVar27,item,(MethodInfo_3AB6170 *)pMVar17->klass->rgctx_data[0xe].method);
                  }
                  if (pSVar26 == (System_Collections_Generic_Dictionary_int__MapFracture_Opening__o *)0x0)
                  goto label_0598a28a;
                  MVar32 = System_Collections_Generic_Dictionary_int__MapFracture_Opening___get_Item
                                     (pSVar26,iVar22,
                                      (MethodInfo_4A2B0D0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening_get_Item
                                     );
                  pMVar17 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
                  piVar1 = &(__this_03->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar10 = (__this_03->fields)._items;
                  if (pUVar10 == (UnityEngine_Vector3_array *)0x0) goto label_0598a28a;
                  uVar8 = (__this_03->fields)._size;
                  if (uVar8 < (uint)pUVar10->max_length) {
                    (__this_03->fields)._size = uVar8 + 1;
                    pUVar10->m_Items[(int)uVar8].fields.x = (float)MVar32.fields.Normal.fields.x;
                    pUVar10->m_Items[(int)uVar8].fields.y = (float)MVar32.fields.Normal.fields.y;
                    pUVar10->m_Items[(int)uVar8].fields.z = MVar32.fields.Normal.fields.z;
                  }
                  else {
                    System_Collections_Generic_List_Vector3___AddWithResize
                              (__this_03,MVar32.fields.Normal.fields,
                               (MethodInfo_39FF950 *)pMVar17->klass->rgctx_data[0xe].method);
                  }
                  __this_01 = local_2d0;
                  System_Collections_Generic_List_MapFracture_Vertex___get_Item
                            ((Map_MapFracture_Vertex_o *)local_268,local_2d0,iVar22,
                             (MethodInfo_3AB5DD0 *)
                             MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
                  local_2c8._4_4_ = local_268._4_4_;
                  local_2a8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_268._0_8_;
                  uStack_2a0 = 0;
                  local_2c8._0_4_ = local_2c8._4_4_;
                  fStack_2c0 = (float)local_2c8._4_4_;
                  fStack_2bc = (float)local_2c8._4_4_;
                  _local_308 = ZEXT416((uint)local_268._8_4_);
                  System_Collections_Generic_List_MapFracture_Vertex___get_Item
                            ((Map_MapFracture_Vertex_o *)local_268,__this_01,local_31c,
                             (MethodInfo_3AB5DD0 *)
                             MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
                  pSVar25 = local_2b8;
                  local_318 = local_318 +
                              ((float)local_268._8_4_ * local_2a8._4_4_ - local_268._4_4_ * (float)local_308);
                  fStack_314 = fStack_314 +
                               ((float)local_308 * local_268._0_4_ - (float)local_2a8 * (float)local_268._8_4_
                               );
                  fStack_310 = fStack_310 + ((float)uStack_2a0 * 0.0 - (float)auStack_304._0_4_ * 0.0);
                  fStack_30c = fStack_30c + ((float)auStack_304._0_4_ * uStack_2a0._4_4_ - 0.0);
                  local_2e8._0_4_ =
                       (float)local_2e8._0_4_ +
                       (local_268._4_4_ * (float)local_2a8 - (float)local_2c8._0_4_ * local_268._0_4_);
                  System_Collections_Generic_Dictionary_int__int___Remove
                            (local_2b8,iVar22,
                             (MethodInfo_4A05510 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_int_Remove);
                  iVar23 = (int)local_2d8;
                  pSVar26 = (System_Collections_Generic_Dictionary_int__MapFracture_Opening__o *)
                            local_278._0_8_;
                  iVar22 = local_31c;
                } while (local_31c != (int)local_2d8);
                if (2 < (pSVar27->fields)._size) {
                  __x = (undefined1  [4])
                        ((float)local_2e8._0_4_ * (float)local_2e8._0_4_ +
                        fStack_314 * fStack_314 + local_318 * local_318);
                  if (0.0001 <= (float)__x) {
                    if (Il2CppMethodInitialized_0753e729 == '\0') {
                      local_308 = __x;
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                      Il2CppMethodInitialized_0753e729 = '\x01';
                      __x = local_308;
                      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05989f84;
label_05989fc8:
                      local_308 = __x;
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                      __x = local_308;
                      if (0.0 <= (float)local_308) goto label_05989f8d;
label_05989fe2:
                      fVar29 = sqrtf((float)__x);
                    }
                    else {
                      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05989fc8;
label_05989f84:
                      if ((float)__x < 0.0) goto label_05989fe2;
label_05989f8d:
                      fVar29 = SQRT((float)__x);
                    }
                    auVar14._12_4_ = 0;
                    auVar14._0_12_ = auStack_304;
                    _local_308 = auVar14 << 0x20;
                    _local_2c8 = ZEXT816(0);
                    uVar16 = (ulong)local_2a8 >> 0x20;
                    local_2a8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                ((ulong)local_2a8 & 0xffffffff00000000);
                    if (1e-05 < fVar29) {
                      auVar13._4_4_ = fStack_314;
                      auVar13._0_4_ = local_318;
                      auVar13._8_4_ = fStack_310;
                      auVar13._12_4_ = fStack_30c;
                      auVar12._4_4_ = fVar29;
                      auVar12._0_4_ = fVar29;
                      auVar12._8_4_ = fVar29;
                      auVar12._12_4_ = fVar29;
                      _local_2c8 = divps(auVar13,auVar12);
                      local_2a8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                  CONCAT44((int)uVar16,(float)local_2e8._0_4_ / fVar29);
                    }
                    System_Collections_Generic_List_Vector3___GetEnumerator
                              ((System_Collections_Generic_List_Enumerator_T__o *)local_268,__this_03,
                               (MethodInfo_3A00880 *)
                               MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
                    local_178 = local_258;
                    UStack_170 = UStack_250;
                    local_188 = (undefined1  [8])local_268._0_8_;
                    puStack_180 = (undefined1 *)local_268._8_8_;
                    local_268._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                    local_268._8_8_ = local_188;
                    while (bVar21 = System_Collections_Generic_List_Enumerator_Vector3___MoveNext
                                              ((System_Collections_Generic_List_Enumerator_T__o *)local_188,
                                               (MethodInfo_4C66420 *)
                                               MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext
                                              ), bVar21) {
                      local_308 = (undefined1  [4])
                                  ((float)local_308 +
                                  ABS(UStack_170.x * (float)local_2a8 +
                                      (float)((ulong)local_178 >> 0x20) * (float)local_2c8._4_4_ +
                                      SUB84(local_178,0) * (float)local_2c8._0_4_));
                    }
                    System_Collections_Generic_List_Enumerator_Vector3___Dispose
                              ((System_Collections_Generic_List_Enumerator_T__o *)local_188,
                               (MethodInfo_4C66410 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
                    if ((float)local_308 / (float)(pSVar27->fields)._size <= 0.9) {
                      MVar32 = System_Collections_Generic_Dictionary_int__MapFracture_Opening___get_Item
                                         (pSVar26,iVar23,
                                          (MethodInfo_4A2B0D0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_int_MapFracture_Opening_get_Item
                                         );
                      normal.fields.z = (float)local_2a8;
                      normal.fields.x = (float)local_2c8._0_4_;
                      normal.fields.y = (float)local_2c8._4_4_;
                      Map_MapFracture__AddCap
                                (pSVar27,normal,MVar32.fields.Submesh,
                                 (System_Collections_Generic_List_MapFracture_Triangle__o *)
                                 local_130->invoker_method,local_130);
                    }
                  }
                }
              }
              iVar23 = System_Collections_Generic_Dictionary_int__int___get_Count
                                 (pSVar25,(MethodInfo_4A03B00 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Count);
            }
          }
        }
        return;
      }
    }
  }
label_0598a28a:
  ThrowNullReferenceException();
}


// Map.MapFracture$$AddEdge
// il2cpp: void Map_MapFracture__AddEdge (System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o* edges, int32_t a, int32_t b, Map_MapFracture_Opening_o opening, const MethodInfo* method);
// 0x598d890

void Map_MapFracture__AddEdge
               (System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *edges,
               int32_t a,int32_t b,Map_MapFracture_Opening_o opening,MethodInfo *method)

{
  bool bVar1;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  Map_MapFracture_Opening_o value;
  System_ValueTuple_int__int__Fields local_40;
  undefined1 local_38 [16];
  
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = opening.fields.Normal.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07545a21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_Remove
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_ctor);
    Il2CppMethodInitialized_07545a21 = '\x01';
  }
  if (a != b) {
    local_40.Item1 = 0;
    local_40.Item2 = 0;
    System_ValueTuple_int__int____ctor
              ((System_ValueTuple_int__int__o *)&local_40,b,a,
               (MethodInfo_452D1B0 *)MethodInfo_System_ValueTuple_int_int_ctor);
    if (edges == (System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening___Remove
                      (edges,(System_ValueTuple_int__int__o)local_40,
                       (MethodInfo_49A00B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_Remove
                      );
    if (!bVar1) {
      local_40.Item1 = 0;
      local_40.Item2 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o *)&local_40,a,b,
                 (MethodInfo_452D1B0 *)MethodInfo_System_ValueTuple_int_int_ctor);
      value.fields.Normal.fields.z = (float)opening.fields.Normal.fields.z;
      value.fields.Submesh = opening.fields.Submesh;
      value.fields.Normal.fields.x = (float)local_38._0_4_;
      value.fields.Normal.fields.y = (float)local_38._4_4_;
      System_Collections_Generic_Dictionary_ValueTuple_int__int___MapFracture_Opening___set_Item
                (edges,(System_ValueTuple_int__int__o)local_40,value,
                 (MethodInfo_499E9E0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_int_int_MapFracture_Opening_set_Item
                );
    }
  }
  return;
}


// Map.MapFracture$$AddCaps
// il2cpp: void Map_MapFracture__AddCaps (System_Collections_Generic_List_MapFracture_Segment__o* segments, UnityEngine_Vector3_o normal, System_Collections_Generic_List_MapFracture_Triangle__o* target, const MethodInfo* method);
// 0x598c730
// eh: try 0x598ca1a..0x598cfc5 -> pad 0x598cfe1 (+19 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x598d001..0x598d006 -> pad 0x598d033 cleanup
// eh: try 0x598d036..0x598d040 -> pad 0x598d048 catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598ca09: nop dword ptr [rax]
// asm:   0x598cb6a: jmp 0x598cc78
// asm:   0x598cfc5: jmp 0x598cfe9
// asm:   0x598cfc7: jmp 0x598cfe9
// asm:   0x598cfc9: jmp 0x598cfe9
// asm:   0x598cfcb: jmp 0x598cfe9
// asm:   0x598cfcd: jmp 0x598cfe9
// asm:   0x598cfcf: jmp 0x598cfe9
// asm:   0x598cfd1: jmp 0x598cfe9
// asm:   0x598cfd3: jmp 0x598cfe9
// asm:   0x598cfd5: jmp 0x598cfe9
// asm:   0x598cfd7: jmp 0x598cfe9
// asm:   0x598cfd9: jmp 0x598cfe9
// asm:   0x598cfdb: jmp 0x598cfe9
// asm:   0x598cfdd: jmp 0x598cfe9
// asm:   0x598cfdf: jmp 0x598cfe9
// asm:   0x598cfe1: jmp 0x598cfe9
// asm:   0x598cfe3: jmp 0x598cfe9
// asm:   0x598cfe5: jmp 0x598cfe9
// asm:   0x598cfe7: jmp 0x598cfe9
// asm:   0x598cfe9: mov rbp, rax
// asm:   0x598cfec: cmp edx, 1
// asm:   0x598cfef: jne 0x598d036
// asm:   0x598cff1: mov rdi, rbp
// asm:   0x598cff4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x598cff9: mov rbx, qword ptr [rax]
// asm:   0x598cffc: mov qword ptr [rsp + 0x50], rbx
// asm:   0x598d001: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x598d006: mov rbp, qword ptr [rsp + 0x30]
// asm:   0x598d00b: lea rax, [rip + 0x19022ae]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Segment_Dispose
// asm:   0x598d012: mov rsi, qword ptr [rax]
// asm:   0x598d015: lea rdi, [rsp + 0xb0]
// asm:   0x598d01d: call 0x4d81f30  ; System_Collections_Generic_List_Enumerator_MapFracture_Segment___Dispose()
// asm:   0x598d022: test rbx, rbx
// asm:   0x598d025: je 0x598cda0
// asm:   0x598d02b: mov rdi, rbx
// asm:   0x598d02e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x598d033: mov rbp, rax
// asm:   0x598d036: lea rdi, [rsp + 0x50]
// asm:   0x598d03b: call 0x2fd4530  ; il2cpp_runtime_helper_02fd4530()
// asm:   0x598d040: mov rdi, rbp
// asm:   0x598d043: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x598d048: mov rdi, rax
// asm:   0x598d04b: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapFracture__AddCaps
               (System_Collections_Generic_List_MapFracture_Segment__o *segments,UnityEngine_Vector3_o normal,
               System_Collections_Generic_List_MapFracture_Triangle__o *target,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_List_int__array *pSVar5;
  System_Int32_array *pSVar6;
  Map_MapFracture_Vertex_o vertex;
  Map_MapFracture_Vertex_o vertex_00;
  MethodInfo *pMVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  System_Collections_Generic_List_T__o *pSVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  int32_t index;
  int32_t item;
  int32_t iVar21;
  System_Collections_Generic_Dictionary_Vector3Int__int__o *__this;
  System_Collections_Generic_List_MapFracture_Vertex__o *__this_00;
  System_Collections_Generic_List_int__o *pSVar22;
  System_Collections_Generic_List_List_int___o *neighbors;
  System_Collections_Generic_List_int__o *pSVar23;
  System_Boolean_array *visited;
  Il2CppObject *pIVar24;
  System_Collections_Generic_List_MapFracture_Vertex__o *pSVar25;
  System_Boolean_array *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  long lVar26;
  ulong uVar27;
  MethodInfo *in_R8;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector3_o normal_00;
  System_Collections_Generic_List_Enumerator_T__o local_138;
  undefined8 uStack_120;
  System_Collections_Generic_List_T__o *local_118;
  undefined8 uStack_110;
  float local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  int32_t iStack_90;
  int32_t iStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int32_t iStack_80;
  int32_t iStack_7c;
  float local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  
  normal_00.fields.z = normal.fields.z;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = normal.fields._0_8_;
  local_48._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07545a22 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
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
    Il2CppMethodInitialized_07545a22 = '\x01';
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  fStack_f4 = 0.0;
  uStack_f0 = 0;
  local_108 = 0.0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  local_118 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_110._0_4_ = 0;
  uStack_110._4_4_ = 0;
  local_138.fields._current = (Il2CppObject *)0x0;
  uStack_120._0_4_ = 0;
  uStack_120._4_4_ = 0;
  local_138.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_138.fields._index = 0;
  local_138.fields._version = 0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Vector3Int_int);
  System_Collections_Generic_Dictionary_Vector3Int__int____ctor
            (__this,(MethodInfo_4B1BB70 *)MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_ctor
            );
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Vertex);
  System_Collections_Generic_List_MapFracture_Vertex____ctor
            (__this_00,
             (MethodInfo_3AB57C0 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_ctor);
  pSVar22 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (pSVar22,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  neighbors = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_List_int);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)neighbors,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_List_int_ctor);
  if (segments != (System_Collections_Generic_List_MapFracture_Segment__o *)0x0) {
    System_Collections_Generic_List_MapFracture_Segment___GetEnumerator
              (&local_a8,segments,
               (MethodInfo_3AAF430 *)
               MethodInfo_System_Collections_Generic_List_MapFracture_Segment_GetEnumerator);
    local_e8 = local_58;
    uStack_e0 = uStack_50;
    local_f8 = local_68;
    fStack_f4 = fStack_64;
    uStack_f0 = uStack_60;
    local_118 = (System_Collections_Generic_List_T__o *)CONCAT44(uStack_84,local_88);
    uStack_110._4_4_ = iStack_7c;
    uStack_110._0_4_ = iStack_80;
    local_108 = local_78;
    uStack_104 = uStack_74;
    uStack_100 = uStack_70;
    uStack_fc = uStack_6c;
    local_138.fields._current = local_a8.fields._current;
    uStack_120._0_4_ = iStack_90;
    uStack_120._4_4_ = iStack_8c;
    local_138.fields._list = local_a8.fields._list;
    local_138.fields._index = local_a8.fields._index;
    local_138.fields._version = local_a8.fields._version;
label_0598ca10:
    bVar20 = System_Collections_Generic_List_Enumerator_MapFracture_Segment___MoveNext
                       (&local_138,
                        (MethodInfo_4C81F40 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Segment_MoveNext);
    uVar19 = local_e8;
    uVar18 = uStack_f0;
    fVar17 = fStack_f4;
    uVar16 = local_f8;
    uVar15 = uStack_fc;
    uVar14 = uStack_100;
    uVar13 = uStack_104;
    uVar11 = uStack_110;
    pSVar10 = local_118;
    uVar8 = uStack_120;
    pIVar24 = local_138.fields._current;
    if (bVar20) {
      iVar21 = (int32_t)uStack_e0;
      vertex.fields.Position.fields.z = (float)(int32_t)uStack_120;
      vertex.fields.Normal.fields.x = (float)uStack_120._4_4_;
      vertex.fields.Position.fields._0_8_ = local_138.fields._current;
      vertex.fields.Normal.fields._4_8_ = local_118;
      vertex.fields.UV.fields.x = (float)(int32_t)uStack_110;
      vertex.fields.UV.fields.y = (float)uStack_110._4_4_;
      vertex.fields.Shade = local_108;
      index = Map_MapFracture__Weld(__this,__this_00,vertex,method_01);
      uVar12 = uStack_110;
      uVar9 = uStack_120;
      local_68 = (undefined4)uVar19;
      fStack_64 = (float)((ulong)uVar19 >> 0x20);
      uStack_70 = (undefined4)uVar18;
      uStack_6c = (undefined4)((ulong)uVar18 >> 0x20);
      local_a8.fields._current = (Il2CppObject *)pSVar10;
      uStack_110._0_4_ = (int32_t)uVar11;
      uStack_110._4_4_ = SUB84(uVar11,4);
      iStack_90 = (int32_t)uStack_110;
      iStack_8c = uStack_110._4_4_;
      local_a8.fields._list = (System_Collections_Generic_List_T__o *)pIVar24;
      uStack_120._0_4_ = (int32_t)uVar8;
      uStack_120._4_4_ = SUB84(uVar8,4);
      local_a8.fields._index = (int32_t)uStack_120;
      local_a8.fields._version = uStack_120._4_4_;
      vertex_00.fields.Position.fields.y = (float)uVar14;
      vertex_00.fields.Position.fields.x = (float)uVar13;
      vertex_00.fields.Normal.fields.x = (float)uVar16;
      vertex_00.fields.Position.fields.z = (float)uVar15;
      local_c8 = CONCAT44(uStack_70,fVar17);
      uStack_c0 = CONCAT44(local_68,uStack_6c);
      local_b8 = fStack_64;
      vertex_00.fields.Normal.fields.y = fVar17;
      vertex_00.fields.Normal.fields.z = (float)uStack_70;
      vertex_00.fields.UV.fields.x = (float)uStack_6c;
      vertex_00.fields.UV.fields.y = (float)local_68;
      vertex_00.fields.Shade = fStack_64;
      uStack_120 = uVar9;
      uStack_110 = uVar12;
      item = Map_MapFracture__Weld(__this,__this_00,vertex_00,method_02);
      if (neighbors == (System_Collections_Generic_List_List_int___o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00 == (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar2 = (neighbors->fields)._size;
      iVar3 = (__this_00->fields)._size;
      if (pSVar22 == (System_Collections_Generic_List_int__o *)0x0) {
        if (iVar2 < iVar3) {
          pSVar22 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
          System_Collections_Generic_List_int____ctor_3916240
                    (pSVar22,2,
                     (MethodInfo_3916240 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
          pMVar7 = MethodInfo_System_Collections_Generic_List_List_int_Add;
          piVar1 = &(neighbors->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (neighbors->fields)._items;
          if (pSVar5 != (System_Collections_Generic_List_int__array *)0x0) {
            uVar4 = (neighbors->fields)._size;
            if (uVar4 < (uint)pSVar5->max_length) {
              (neighbors->fields)._size = uVar4 + 1;
              pSVar5->m_Items[(int)uVar4] = pSVar22;
              Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)neighbors,(Il2CppObject *)pSVar22,
                         (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
            }
label_0598cfc0:
            ThrowNullReferenceException();
          }
label_0598cf7a:
          ThrowNullReferenceException();
        }
      }
      else if (iVar2 < iVar3) {
        do {
          pSVar23 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
          System_Collections_Generic_List_int____ctor_3916240
                    (pSVar23,2,
                     (MethodInfo_3916240 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
          pMVar7 = MethodInfo_System_Collections_Generic_List_List_int_Add;
          piVar1 = &(neighbors->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (neighbors->fields)._items;
          if (pSVar5 == (System_Collections_Generic_List_int__array *)0x0) goto label_0598cf7a;
          uVar4 = (neighbors->fields)._size;
          if (uVar4 < (uint)pSVar5->max_length) {
            (neighbors->fields)._size = uVar4 + 1;
            pSVar5->m_Items[(int)uVar4] = pSVar23;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)neighbors,(Il2CppObject *)pSVar23,
                       (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
          }
          pMVar7 = MethodInfo_System_Collections_Generic_List_int_Add;
          piVar1 = &(pSVar22->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (pSVar22->fields)._items;
          if (pSVar6 == (System_Int32_array *)0x0) goto label_0598cfc0;
          uVar4 = (pSVar22->fields)._size;
          if (uVar4 < (uint)pSVar6->max_length) {
            (pSVar22->fields)._size = uVar4 + 1;
            pSVar6->m_Items[(int)uVar4] = iVar21;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (pSVar22,iVar21,(MethodInfo_3916AC0 *)pMVar7->klass->rgctx_data[0xe].method);
          }
        } while ((neighbors->fields)._size < (__this_00->fields)._size);
      }
      if (index != item) {
        pSVar23 = (System_Collections_Generic_List_int__o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)neighbors,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_List_int_get_Item);
        if (pSVar23 == (System_Collections_Generic_List_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar20 = System_Collections_Generic_List_int___Contains
                           (pSVar23,item,
                            (MethodInfo_3916F20 *)MethodInfo_System_Collections_Generic_List_int_Contains);
        if (!bVar20) {
          pSVar23 = (System_Collections_Generic_List_int__o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)neighbors,index,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_List_int_get_Item);
          pMVar7 = MethodInfo_System_Collections_Generic_List_int_Add;
          if (pSVar23 != (System_Collections_Generic_List_int__o *)0x0) {
            piVar1 = &(pSVar23->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar23->fields)._items;
            if (pSVar6 != (System_Int32_array *)0x0) {
              uVar4 = (pSVar23->fields)._size;
              if (uVar4 < (uint)pSVar6->max_length) {
                (pSVar23->fields)._size = uVar4 + 1;
                pSVar6->m_Items[(int)uVar4] = item;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize
                          (pSVar23,item,(MethodInfo_3916AC0 *)pMVar7->klass->rgctx_data[0xe].method);
              }
              pSVar23 = (System_Collections_Generic_List_int__o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)neighbors,item,
                                   (MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_List_int_get_Item);
              pMVar7 = MethodInfo_System_Collections_Generic_List_int_Add;
              if (pSVar23 != (System_Collections_Generic_List_int__o *)0x0) {
                piVar1 = &(pSVar23->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar6 = (pSVar23->fields)._items;
                if (pSVar6 != (System_Int32_array *)0x0) {
                  uVar4 = (pSVar23->fields)._size;
                  if (uVar4 < (uint)pSVar6->max_length) {
                    (pSVar23->fields)._size = uVar4 + 1;
                    pSVar6->m_Items[(int)uVar4] = index;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize
                              (pSVar23,index,(MethodInfo_3916AC0 *)pMVar7->klass->rgctx_data[0xe].method);
                  }
                  goto label_0598ca10;
                }
              }
              ThrowNullReferenceException();
            }
          }
          ThrowNullReferenceException();
        }
      }
      goto label_0598ca10;
    }
    System_Collections_Generic_List_Enumerator_MapFracture_Segment___Dispose
              (&local_138,
               (MethodInfo_4C81F30 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Segment_Dispose);
    if (__this_00 != (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) {
      visited = (System_Boolean_array *)SZArrayNew(TypeInfo_bool_array,(__this_00->fields)._size);
      iVar2 = (__this_00->fields)._size;
      if (0 < iVar2) {
        if (visited == (System_Boolean_array *)0x0) goto label_0598cf17;
        if (neighbors == (System_Collections_Generic_List_List_int___o *)0x0) {
          lVar26 = 0;
          do {
            if ((int)visited->max_length == (int)lVar26) goto label_0598cf26;
            if (visited->m_Items[lVar26] == false) goto label_0598cf17;
            lVar26 = lVar26 + 1;
          } while ((int)lVar26 < iVar2);
        }
        else if (pSVar22 == (System_Collections_Generic_List_int__o *)0x0) {
          uVar27 = 0;
          do {
            if ((uint)visited->max_length <= uVar27) goto label_0598cf26;
            if (visited->m_Items[uVar27] == false) {
              pIVar24 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)neighbors,(int32_t)uVar27,
                                   (MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_List_int_get_Item);
              if ((pIVar24 == (Il2CppObject *)0x0) ||
                 ((*(int *)&pIVar24[1].monitor == 2 &&
                  (pSVar25 = Map_MapFracture__TraceLoop((int32_t)uVar27,__this_00,neighbors,visited,in_R8),
                  pSVar25 != (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0))))
              goto label_0598cf17;
            }
            uVar27 = uVar27 + 1;
          } while ((long)uVar27 < (long)(__this_00->fields)._size);
        }
        else {
          uVar27 = 0;
          do {
            if ((uint)visited->max_length <= uVar27) {
label_0598cf26:
              ThrowIndexOutOfRangeException();
            }
            if (visited->m_Items[uVar27] == false) {
              iVar21 = (int32_t)uVar27;
              pIVar24 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)neighbors,iVar21,
                                   (MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_List_int_get_Item);
              if (pIVar24 == (Il2CppObject *)0x0) goto label_0598cf17;
              if ((*(int *)&pIVar24[1].monitor == 2) &&
                 (method_00 = visited,
                 pSVar25 = Map_MapFracture__TraceLoop(iVar21,__this_00,neighbors,visited,in_R8),
                 pSVar25 != (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0)) {
                iVar21 = System_Collections_Generic_List_int___get_Item
                                   (pSVar22,iVar21,
                                    (MethodInfo_39167D0 *)
                                    MethodInfo_System_Collections_Generic_List_int_get_Item);
                normal_00.fields.x = (float)local_48._0_4_;
                normal_00.fields.y = (float)local_48._4_4_;
                Map_MapFracture__AddCap(pSVar25,normal_00,iVar21,target,(MethodInfo *)method_00);
              }
            }
            uVar27 = uVar27 + 1;
          } while ((long)uVar27 < (long)(__this_00->fields)._size);
        }
      }
      return;
    }
  }
label_0598cf17:
  ThrowNullReferenceException();
}


// Map.MapFracture$$TraceLoop
// il2cpp: System_Collections_Generic_List_MapFracture_Vertex__o* Map_MapFracture__TraceLoop (int32_t start, System_Collections_Generic_List_MapFracture_Vertex__o* vertices, System_Collections_Generic_List_List_int___o* neighbors, System_Boolean_array* visited, const MethodInfo* method);
// 0x598e670
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598e850: jmp 0x598ea2f
// asm:   0x598e86c: nop dword ptr [rax]
// asm:   0x598ea28: jmp 0x598e846

System_Collections_Generic_List_MapFracture_Vertex__o *
Map_MapFracture__TraceLoop
          (int32_t start,System_Collections_Generic_List_MapFracture_Vertex__o *vertices,
          System_Collections_Generic_List_List_int___o *neighbors,System_Boolean_array *visited,
          MethodInfo *method)

{
  int32_t *piVar1;
  Map_MapFracture_Vertex_o *pMVar2;
  Map_MapFracture_Vertex_array *pMVar3;
  Map_MapFracture_Vertex_o item;
  Map_MapFracture_Vertex_o item_00;
  Map_MapFracture_Vertex_Fields *pMVar4;
  MethodInfo *pMVar5;
  uint uVar6;
  System_Collections_Generic_List_MapFracture_Vertex__o *__this;
  System_Collections_Generic_List_int__o *pSVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_List_MapFracture_Vertex__o *pSVar9;
  uint uVar10;
  uint index;
  Map_MapFracture_Vertex_o local_58;
  
  if (Il2CppMethodInitialized_07545a23 == '\0') {
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
    Il2CppMethodInitialized_07545a23 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Vertex);
  System_Collections_Generic_List_MapFracture_Vertex____ctor
            (__this,(MethodInfo_3AB57C0 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_ctor);
  if ((vertices != (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) &&
     (System_Collections_Generic_List_MapFracture_Vertex___get_Item
                (&local_58,vertices,start,
                 (MethodInfo_3AB5DD0 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item)
     , pMVar5 = MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add,
     __this != (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0)) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar3 = (__this->fields)._items;
    if (pMVar3 != (Map_MapFracture_Vertex_array *)0x0) {
      uVar6 = (__this->fields)._size;
      if (uVar6 < (uint)pMVar3->max_length) {
        (__this->fields)._size = uVar6 + 1;
        pMVar3->m_Items[(int)uVar6].fields.Shade = local_58.fields.Shade;
        pMVar4 = &pMVar3->m_Items[(int)uVar6].fields;
        (pMVar4->Normal).fields.y = local_58.fields.Normal.fields.y;
        (pMVar4->Normal).fields.z = local_58.fields.Normal.fields.z;
        (pMVar4->UV).fields = local_58.fields.UV.fields;
        pMVar2 = pMVar3->m_Items + (int)uVar6;
        (pMVar2->fields).Position.fields.x = local_58.fields.Position.fields.x;
        (pMVar2->fields).Position.fields.y = local_58.fields.Position.fields.y;
        *(undefined8 *)&(pMVar2->fields).Position.fields.z = local_58.fields._8_8_;
      }
      else {
        item.fields.Position.fields.z = local_58.fields.Position.fields.z;
        item.fields.Normal.fields.x = local_58.fields.Normal.fields.x;
        item.fields.Position.fields.x = local_58.fields.Position.fields.x;
        item.fields.Position.fields.y = local_58.fields.Position.fields.y;
        item.fields.Normal.fields.y = local_58.fields.Normal.fields.y;
        item.fields.Normal.fields.z = local_58.fields.Normal.fields.z;
        item.fields.UV.fields = local_58.fields.UV.fields;
        item.fields.Shade = local_58.fields.Shade;
        System_Collections_Generic_List_MapFracture_Vertex___AddWithResize
                  (__this,item,(MethodInfo_3AB6170 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      if (visited != (System_Boolean_array *)0x0) {
        if ((uint)visited->max_length <= (uint)start) {
label_0598ea46:
          ThrowIndexOutOfRangeException();
        }
        visited->m_Items[start] = true;
        if ((neighbors != (System_Collections_Generic_List_List_int___o *)0x0) &&
           (pSVar7 = (System_Collections_Generic_List_int__o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)neighbors,start,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_List_int_get_Item),
           pSVar7 != (System_Collections_Generic_List_int__o *)0x0)) {
          uVar6 = System_Collections_Generic_List_int___get_Item
                            (pSVar7,0,(MethodInfo_39167D0 *)
                                      MethodInfo_System_Collections_Generic_List_int_get_Item);
          if (uVar6 != start) {
            uVar10 = start;
            do {
              index = uVar6;
              if ((uint)visited->max_length <= index) goto label_0598ea46;
              if (visited->m_Items[(int)index] != false) {
                return (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0;
              }
              pIVar8 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)neighbors,index,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_List_int_get_Item);
              if (pIVar8 == (Il2CppObject *)0x0) goto label_0598ea41;
              if (*(int *)&pIVar8[1].monitor != 2) {
                return (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0;
              }
              if (0x7ff < (__this->fields)._size) {
                return (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0;
              }
              if ((uint)visited->max_length <= index) goto label_0598ea46;
              visited->m_Items[(int)index] = true;
              System_Collections_Generic_List_MapFracture_Vertex___get_Item
                        (&local_58,vertices,index,
                         (MethodInfo_3AB5DD0 *)
                         MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
              pMVar5 = MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add;
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pMVar3 = (__this->fields)._items;
              if (pMVar3 == (Map_MapFracture_Vertex_array *)0x0) goto label_0598ea41;
              uVar6 = (__this->fields)._size;
              if (uVar6 < (uint)pMVar3->max_length) {
                (__this->fields)._size = uVar6 + 1;
                pMVar3->m_Items[(int)uVar6].fields.Shade = local_58.fields.Shade;
                pMVar4 = &pMVar3->m_Items[(int)uVar6].fields;
                (pMVar4->Normal).fields.y = local_58.fields.Normal.fields.y;
                (pMVar4->Normal).fields.z = local_58.fields.Normal.fields.z;
                (pMVar4->UV).fields = local_58.fields.UV.fields;
                pMVar2 = pMVar3->m_Items + (int)uVar6;
                (pMVar2->fields).Position.fields.x = local_58.fields.Position.fields.x;
                (pMVar2->fields).Position.fields.y = local_58.fields.Position.fields.y;
                *(undefined8 *)&(pMVar2->fields).Position.fields.z = local_58.fields._8_8_;
              }
              else {
                item_00.fields.Position.fields.z = local_58.fields.Position.fields.z;
                item_00.fields.Normal.fields.x = local_58.fields.Normal.fields.x;
                item_00.fields.Position.fields.x = local_58.fields.Position.fields.x;
                item_00.fields.Position.fields.y = local_58.fields.Position.fields.y;
                item_00.fields.Normal.fields.y = local_58.fields.Normal.fields.y;
                item_00.fields.Normal.fields.z = local_58.fields.Normal.fields.z;
                item_00.fields.UV.fields = local_58.fields.UV.fields;
                item_00.fields.Shade = local_58.fields.Shade;
                System_Collections_Generic_List_MapFracture_Vertex___AddWithResize
                          (__this,item_00,(MethodInfo_3AB6170 *)pMVar5->klass->rgctx_data[0xe].method);
              }
              pSVar7 = (System_Collections_Generic_List_int__o *)
                       System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)neighbors,index,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_List_int_get_Item);
              if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto label_0598ea41;
              uVar6 = System_Collections_Generic_List_int___get_Item
                                (pSVar7,0,(MethodInfo_39167D0 *)
                                          MethodInfo_System_Collections_Generic_List_int_get_Item);
              pSVar7 = (System_Collections_Generic_List_int__o *)
                       System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)neighbors,index,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_List_int_get_Item);
              if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto label_0598ea41;
              uVar6 = System_Collections_Generic_List_int___get_Item
                                (pSVar7,(uint)(uVar6 == uVar10),
                                 (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item
                                );
              uVar10 = index;
            } while (uVar6 != start);
          }
          pSVar9 = (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0;
          if (2 < (__this->fields)._size) {
            pSVar9 = __this;
          }
          return pSVar9;
        }
      }
    }
  }
label_0598ea41:
  ThrowNullReferenceException();
}


// Map.MapFracture$$AddCap
// il2cpp: void Map_MapFracture__AddCap (System_Collections_Generic_List_MapFracture_Vertex__o* loop, UnityEngine_Vector3_o normal, int32_t submesh, System_Collections_Generic_List_MapFracture_Triangle__o* target, const MethodInfo* method);
// 0x598d980
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598df54: jmp 0x598df8d
// asm:   0x598e00e: jmp 0x598e027
// asm:   0x598e5b1: jmp 0x598e5bb

void Map_MapFracture__AddCap
               (System_Collections_Generic_List_MapFracture_Vertex__o *loop,UnityEngine_Vector3_o normal,
               int32_t submesh,System_Collections_Generic_List_MapFracture_Triangle__o *target,
               MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 *puVar2;
  UnityEngine_Vector2_o *pUVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  UnityEngine_Vector2_array *pUVar7;
  Map_MapFracture_Triangle_array *pMVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_o item;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  UnityEngine_Vector2_Fields UVar12;
  Map_MapFracture_Triangle_o item_00;
  UnityEngine_Vector3_o *pUVar13;
  Map_MapFracture_Triangle_Fields *pMVar14;
  Map_MapFracture_Vertex_o *pMVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  UnityEngine_Vector3_StaticFields *pUVar20;
  System_Collections_Generic_List_Vector2__o *__this;
  Il2CppObject *pIVar21;
  System_Collections_Generic_List_int__o *__this_00;
  long lVar22;
  UnityEngine_Vector3_o *pUVar23;
  int32_t iVar24;
  ulong uVar25;
  MethodInfo *pMVar26;
  Il2CppObject *pIVar27;
  float fVar28;
  float fVar29;
  float extraout_XMM0_Db;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float fVar30;
  float in_XMM1_Db;
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float local_298;
  float fStack_294;
  float local_268;
  float fStack_264;
  float local_248;
  float fStack_244;
  undefined1 local_228 [48];
  UnityEngine_Vector3_Fields local_1f8 [2];
  UnityEngine_Vector3_Fields UStack_1e0;
  float fStack_1d0;
  float local_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float local_1bc;
  undefined1 local_1b8 [8];
  float fStack_1b0;
  float fStack_1ac;
  UnityEngine_Vector2_Fields local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [8];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  float local_188;
  float fStack_184;
  undefined8 local_178;
  undefined8 uStack_170;
  System_Collections_Generic_List_Vector2__o *local_168;
  System_Collections_Generic_List_MapFracture_Triangle__o *local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  Il2CppClass *local_f8;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  UnityEngine_Vector2_Fields UStack_e0;
  float local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  Il2CppClass *local_a8;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  UnityEngine_Vector2_Fields UStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  UnityEngine_Vector3_Fields local_60;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  
  fVar29 = normal.fields.x;
  fVar30 = normal.fields.y;
  local_160 = target;
  local_188 = normal.fields.z;
  fStack_184 = in_XMM1_Db;
  if (Il2CppMethodInitialized_07545a24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector2_ctor_7197518);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapFracture_Vertex_array);
    Il2CppMethodInitialized_07545a24 = '\x01';
  }
  if (0.9 <= ABS(fVar30)) {
    if (Il2CppMethodInitialized_07544d56 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_07544d56 = '\x01';
    }
    pUVar23 = &TypeInfo_UnityEngine_Vector3->static_fields->rightVector;
    pUVar13 = &TypeInfo_UnityEngine_Vector3->static_fields->rightVector;
  }
  else {
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar23 = &TypeInfo_UnityEngine_Vector3->static_fields->upVector;
    pUVar13 = &TypeInfo_UnityEngine_Vector3->static_fields->upVector;
  }
  uVar4 = (pUVar23->fields).x;
  fVar5 = (pUVar23->fields).y;
  fVar31 = (pUVar13->fields).z;
  fVar28 = local_188;
  fVar33 = 0.0;
  fVar34 = local_188;
  fVar35 = fVar31;
  fVar36 = fStack_184;
  fVar37 = 0.0;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    local_1a8.y = local_188;
    local_1a8.x = fVar31;
    uStack_1a0 = (ulong)(uint)fStack_184 << 0x20;
    local_1b8._4_4_ = fVar31;
    local_1b8._0_4_ = local_188;
    fStack_1b0 = fStack_184;
    fStack_1ac = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    fVar31 = local_1a8.x;
    fVar28 = local_1a8.y;
    fVar33 = (float)uStack_1a0;
    fStack_184 = uStack_1a0._4_4_;
    fVar34 = (float)local_1b8._0_4_;
    fVar35 = (float)local_1b8._4_4_;
    fVar36 = fStack_1b0;
    fVar37 = fStack_1ac;
  }
  local_228._0_8_ = (Il2CppClass *)0x0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  auVar32._0_4_ = fVar30 * fVar31 - fVar5 * fVar34;
  auVar32._4_4_ = (float)uVar4 * fVar28 - fVar29 * fVar35;
  auVar32._8_4_ = in_XMM0_Dc * fVar33 - fVar36 * 0.0;
  auVar32._12_4_ = in_XMM0_Dd * fStack_184 - fVar37 * 0.0;
  fVar31 = fVar5 * fVar29 - (float)uVar4 * fVar30;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar28 = fVar31 * fVar31 + auVar32._4_4_ * auVar32._4_4_ + auVar32._0_4_ * auVar32._0_4_;
  if (fVar28 < 0.0) {
    fVar28 = sqrtf(fVar28);
    fVar33 = extraout_XMM0_Db;
  }
  else {
    fVar28 = SQRT(fVar28);
    fVar33 = fVar5;
  }
  if (1e-05 < fVar28) {
    fVar31 = fVar31 / fVar28;
    auVar10._4_4_ = fVar28;
    auVar10._0_4_ = fVar28;
    auVar10._8_4_ = fVar33;
    auVar10._12_4_ = fVar33;
    auVar32 = divps(auVar32,auVar10);
    local_228._0_8_ = auVar32._0_8_;
    pUVar20 = (UnityEngine_Vector3_StaticFields *)local_228;
  }
  else {
    pUVar20 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar31 = (pUVar20->zeroVector).fields.z;
    fVar5 = 0.0;
  }
  if (loop != (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) {
    local_138._0_4_ = (pUVar20->zeroVector).fields.x;
    local_138._4_4_ = (pUVar20->zeroVector).fields.y;
    local_148 = fVar30 * fVar31 - local_138._4_4_ * local_188;
    local_198._0_4_ = (float)local_138 * local_188 - fVar29 * fVar31;
    register0x00001304 = local_138 >> 0x20;
    uStack_18c = 0;
    uStack_130 = 0;
    local_158 = local_138._4_4_ * fVar29 - fVar30 * (float)local_138;
    iVar24 = (loop->fields)._size;
    fStack_154 = local_138._4_4_;
    fStack_150 = local_138._4_4_;
    fStack_14c = local_138._4_4_;
    fStack_144 = fVar30;
    fStack_140 = fVar30;
    fStack_13c = fVar30;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector2);
    System_Collections_Generic_List_Vector2____ctor_39f8cf0
              (__this,iVar24,
               (MethodInfo_39F8CF0 *)MethodInfo_System_Collections_Generic_List_Vector2_ctor_7197518);
    local_168 = __this;
    if ((loop->fields)._size < 1) {
      fVar29 = 0.0;
    }
    else {
      if (__this == (System_Collections_Generic_List_Vector2__o *)0x0) {
        System_Collections_Generic_List_MapFracture_Vertex___get_Item
                  ((Map_MapFracture_Vertex_o *)local_228,loop,0,
                   (MethodInfo_3AB5DD0 *)
                   MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
        System_Collections_Generic_List_MapFracture_Vertex___get_Item
                  ((Map_MapFracture_Vertex_o *)local_228,loop,(int32_t)(1 % (long)(loop->fields)._size),
                   (MethodInfo_3AB5DD0 *)
                   MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
        ThrowNullReferenceException();
      }
      local_b8 = (float)local_198._0_4_;
      fStack_b4 = (float)local_198._0_4_;
      fStack_b0 = (float)local_198._0_4_;
      fStack_ac = (float)local_198._0_4_;
      fStack_c4 = local_158;
      fStack_bc = fStack_154;
      iVar24 = 0;
      fVar28 = 0.0;
      fVar30 = 0.0;
      local_c8 = fVar31;
      fStack_c0 = fVar5;
      do {
        System_Collections_Generic_List_MapFracture_Vertex___get_Item
                  ((Map_MapFracture_Vertex_o *)local_228,loop,iVar24,
                   (MethodInfo_3AB5DD0 *)
                   MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
        uVar11 = local_228._0_8_;
        uVar17 = local_228._8_4_;
        local_1a8.x = (float)local_228._24_4_;
        local_1a8.y = (float)local_228._28_4_;
        uStack_1a0 = 0;
        iVar24 = iVar24 + 1;
        System_Collections_Generic_List_MapFracture_Vertex___get_Item
                  ((Map_MapFracture_Vertex_o *)local_228,loop,iVar24 % (loop->fields)._size,
                   (MethodInfo_3AB5DD0 *)
                   MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
        pMVar26 = MethodInfo_System_Collections_Generic_List_Vector2_Add;
        local_178 = (Il2CppClass *)local_228._0_8_;
        uStack_170 = 0;
        uVar18 = local_228._8_4_;
        _fStack_1b0 = 0;
        local_1b8 = (undefined1  [8])local_228._24_8_;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar7 = (__this->fields)._items;
        if (pUVar7 == (UnityEngine_Vector2_array *)0x0) goto label_0598e5d2;
        local_268 = (float)uVar11;
        fStack_264 = SUB84(uVar11,4);
        fVar29 = (float)uVar17 * local_c8 + fStack_264 * local_138._4_4_ + local_268 * (float)local_138;
        fVar5 = (float)uVar17 * fStack_c4 + fStack_b4 * fStack_264 + local_148 * local_268;
        uVar19 = (__this->fields)._size;
        if (uVar19 < (uint)pUVar7->max_length) {
          (__this->fields)._size = uVar19 + 1;
          UVar9.fields.y = fVar5;
          UVar9.fields.x = fVar29;
          pUVar7->m_Items[(int)uVar19].fields = UVar9.fields;
        }
        else {
          item.fields.y = fVar5;
          item.fields.x = fVar29;
          System_Collections_Generic_List_Vector2___AddWithResize
                    (__this,item,(MethodInfo_39F9590 *)pMVar26->klass->rgctx_data[0xe].method);
        }
        if (Il2CppMethodInitialized_0753e7b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e7b7 = '\x01';
        }
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar29 = ((float)uVar17 - (float)uVar18) * ((float)uVar17 - (float)uVar18) +
                 (fStack_264 - local_178._4_4_) * (fStack_264 - local_178._4_4_) +
                 (local_268 - (float)local_178) * (local_268 - (float)local_178);
        if (fVar29 < 0.0) {
          fVar29 = sqrtf(fVar29);
        }
        else {
          fVar29 = SQRT(fVar29);
        }
        if (Il2CppMethodInitialized_0753e72f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e72f = '\x01';
        }
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar5 = (local_1a8.y - (float)local_1b8._4_4_) * (local_1a8.y - (float)local_1b8._4_4_) +
                (local_1a8.x - (float)local_1b8._0_4_) * (local_1a8.x - (float)local_1b8._0_4_);
        if (fVar5 < 0.0) {
          fVar5 = sqrtf(fVar5);
        }
        else {
          fVar5 = SQRT(fVar5);
        }
        fVar30 = fVar30 + fVar5;
        fVar28 = fVar28 + fVar29;
      } while (iVar24 < (loop->fields)._size);
      fVar29 = 0.0;
      if (0.0001 < fVar28) {
        fVar29 = (fVar30 / fVar28) * 0.15;
      }
    }
    System_Collections_Generic_List_MapFracture_Vertex___get_Item
              ((Map_MapFracture_Vertex_o *)local_228,loop,0,
               (MethodInfo_3AB5DD0 *)MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
    uVar11 = local_228._0_8_;
    local_1a8.x = (float)local_228._8_4_;
    _fStack_1b0 = 0;
    local_1b8 = (undefined1  [8])local_228._24_8_;
    uVar19 = (loop->fields)._size;
    pMVar26 = (MethodInfo *)(ulong)uVar19;
    pIVar21 = SZArrayNew(TypeInfo_Map_MapFracture_Vertex_array,uVar19);
    fVar30 = local_158;
    if (0 < (loop->fields)._size) {
      if (pIVar21 == (Il2CppObject *)0x0) {
        System_Collections_Generic_List_MapFracture_Vertex___get_Item
                  ((Map_MapFracture_Vertex_o *)local_228,loop,0,
                   (MethodInfo_3AB5DD0 *)
                   MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
        System_Collections_Generic_List_MapFracture_Vertex___get_Item
                  ((Map_MapFracture_Vertex_o *)local_228,loop,0,
                   (MethodInfo_3AB5DD0 *)
                   MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
        ThrowNullReferenceException();
      }
      local_178 = (Il2CppClass *)CONCAT44(local_138._4_4_,local_148);
      uStack_170 = uStack_130;
      local_198._4_4_ = local_198._0_4_;
      local_198._0_4_ = (float)local_138;
      uStack_190 = (undefined4)uStack_130;
      uStack_18c = uStack_130._4_4_;
      pIVar27 = pIVar21 + 4;
      uVar25 = 0;
      do {
        System_Collections_Generic_List_MapFracture_Vertex___get_Item
                  ((Map_MapFracture_Vertex_o *)local_228,loop,(int32_t)uVar25,
                   (MethodInfo_3AB5DD0 *)
                   MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
        uVar16 = local_228._0_8_;
        uVar17 = local_228._8_4_;
        pMVar26 = (MethodInfo *)loop;
        System_Collections_Generic_List_MapFracture_Vertex___get_Item
                  ((Map_MapFracture_Vertex_o *)local_228,loop,(int32_t)uVar25,
                   (MethodInfo_3AB5DD0 *)
                   MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Item);
        if (*(uint *)&pIVar21[1].monitor <= uVar25) goto label_0598e5cd;
        local_298 = (float)uVar16;
        fStack_294 = SUB84(uVar16,4);
        local_248 = (float)uVar11;
        fStack_244 = SUB84(uVar11,4);
        pIVar27[-2].klass = (Il2CppClass *)local_228._0_8_;
        *(undefined4 *)&pIVar27[-2].monitor = local_228._8_4_;
        *(long *)((long)&pIVar27[-2].monitor + 4) = normal.fields._0_8_;
        *(float *)((long)&pIVar27[-1].klass + 4) = local_188;
        pIVar27[-1].monitor =
             (void *)CONCAT44(((fStack_294 - fStack_244) * (float)local_198._4_4_ +
                               (float)local_178 * (local_298 - local_248) +
                              ((float)uVar17 - local_1a8.x) * fVar30) * fVar29 + (float)local_1b8._4_4_,
                              ((local_298 - local_248) * (float)local_198._0_4_ +
                               local_178._4_4_ * (fStack_294 - fStack_244) +
                              ((float)uVar17 - local_1a8.x) * fVar31) * fVar29 + (float)local_1b8._0_4_);
        *(undefined4 *)&pIVar27->klass = 0x3f400000;
        uVar25 = uVar25 + 1;
        pIVar27 = (Il2CppObject *)((long)&pIVar27[2].klass + 4);
      } while ((long)uVar25 < (long)(loop->fields)._size);
    }
    __this_00 = Map_MapFracture__EarClip(local_168,pMVar26);
    if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
      iVar6 = (__this_00->fields)._size;
      if (pIVar21 == (Il2CppObject *)0x0) {
        if (0 < iVar6) {
          System_Collections_Generic_List_int___get_Item
                    (__this_00,0,(MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item
                    );
          ThrowNullReferenceException();
        }
      }
      else if (0 < iVar6) {
        iVar24 = 0;
        while (uVar19 = System_Collections_Generic_List_int___get_Item
                                  (__this_00,iVar24,
                                   (MethodInfo_39167D0 *)
                                   MethodInfo_System_Collections_Generic_List_int_get_Item),
              uVar19 < *(uint *)&pIVar21[1].monitor) {
          lVar22 = (long)(int)uVar19;
          local_d8 = *(float *)((long)pIVar21 + lVar22 * 0x24 + 0x40);
          puVar2 = (undefined8 *)((long)pIVar21 + lVar22 * 0x24 + 0x20);
          local_f8 = (Il2CppClass *)*puVar2;
          _fStack_f0 = puVar2[1];
          puVar2 = (undefined8 *)((long)pIVar21 + lVar22 * 0x24 + 0x30);
          _local_e8 = *puVar2;
          UStack_e0 = *(UnityEngine_Vector2_Fields *)(puVar2 + 1);
          uVar19 = System_Collections_Generic_List_int___get_Item
                             (__this_00,iVar24 + 1,
                              (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          if (*(uint *)&pIVar21[1].monitor <= uVar19) break;
          lVar22 = (long)(int)uVar19;
          local_108 = *(float *)((long)pIVar21 + lVar22 * 0x24 + 0x40);
          puVar2 = (undefined8 *)((long)pIVar21 + lVar22 * 0x24 + 0x20);
          local_128 = *puVar2;
          uStack_120 = puVar2[1];
          puVar2 = (undefined8 *)((long)pIVar21 + lVar22 * 0x24 + 0x30);
          local_118 = *puVar2;
          uStack_110 = puVar2[1];
          uVar19 = System_Collections_Generic_List_int___get_Item
                             (__this_00,iVar24 + 2,
                              (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          pMVar26 = MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_Add;
          if (*(uint *)&pIVar21[1].monitor <= uVar19) break;
          lVar22 = (long)(int)uVar19;
          local_40 = *(float *)((long)pIVar21 + lVar22 * 0x24 + 0x40);
          puVar2 = (undefined8 *)((long)pIVar21 + lVar22 * 0x24 + 0x20);
          local_60._0_8_ = *puVar2;
          unique0x10001d0b = puVar2[1];
          puVar2 = (undefined8 *)((long)pIVar21 + lVar22 * 0x24 + 0x30);
          uVar11 = *puVar2;
          UVar12 = *(UnityEngine_Vector2_Fields *)(puVar2 + 1);
          local_50 = (float)uVar11;
          fStack_4c = (float)((ulong)uVar11 >> 0x20);
          fStack_48 = UVar12.x;
          fStack_44 = UVar12.y;
          local_88 = local_d8;
          local_98 = local_e8;
          fStack_94 = fStack_e4;
          UStack_90 = UStack_e0;
          local_a8 = local_f8;
          fStack_a0 = fStack_f0;
          fStack_9c = fStack_ec;
          local_64 = local_108;
          fStack_74 = (float)local_118;
          fStack_70 = (float)((ulong)local_118 >> 0x20);
          fStack_6c = (float)uStack_110;
          fStack_68 = (float)((ulong)uStack_110 >> 0x20);
          fStack_84 = (float)local_128;
          fStack_80 = (float)((ulong)local_128 >> 0x20);
          fStack_7c = (float)uStack_120;
          fStack_78 = (float)((ulong)uStack_120 >> 0x20);
          if (local_160 == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) goto label_0598e5d2;
          fStack_1c8 = fStack_48;
          fStack_1c4 = fStack_44;
          local_1f8[1].z = local_108;
          local_1f8[1].y = fStack_68;
          local_228._36_4_ = fStack_84;
          local_228._32_4_ = local_d8;
          local_228._44_4_ = fStack_7c;
          local_228._40_4_ = fStack_80;
          local_1f8[0].y = fStack_74;
          local_1f8[0].x = fStack_78;
          local_1f8[1].x = fStack_6c;
          local_1f8[0].z = fStack_70;
          local_228._16_4_ = local_e8;
          local_228._20_4_ = fStack_e4;
          local_228._24_4_ = UStack_e0.x;
          local_228._28_4_ = UStack_e0.y;
          local_228._0_8_ = local_f8;
          local_228._8_4_ = fStack_f0;
          local_228._12_4_ = fStack_ec;
          piVar1 = &(local_160->fields)._version;
          *piVar1 = *piVar1 + 1;
          pMVar8 = (local_160->fields)._items;
          UStack_1e0._0_8_ = local_60._0_8_;
          unique0x1000375f = unique0x10001d0b;
          fStack_1d0 = local_50;
          local_1cc = fStack_4c;
          fStack_1c0 = local_40;
          local_1bc = (float)submesh;
          if (pMVar8 == (Map_MapFracture_Triangle_array *)0x0) goto label_0598e5d2;
          uVar19 = (local_160->fields)._size;
          if (uVar19 < (uint)pMVar8->max_length) {
            (local_160->fields)._size = uVar19 + 1;
            pUVar3 = &pMVar8->m_Items[(int)uVar19].fields.C.fields.UV;
            pUVar3->fields = UVar12;
            pUVar3[1] = (UnityEngine_Vector2_o)CONCAT44(submesh,local_40);
            pMVar14 = &pMVar8->m_Items[(int)uVar19].fields;
            *(undefined8 *)((long)&(pMVar14->C).fields.Position.fields + 8) = unique0x10001d0b;
            *(undefined8 *)((long)&(pMVar14->C).fields.Normal.fields + 4) = uVar11;
            pMVar14 = &pMVar8->m_Items[(int)uVar19].fields;
            *(undefined8 *)((long)&(pMVar14->B).fields.UV.fields + 4) = local_1f8[1]._4_8_;
            *(undefined8 *)&(pMVar14->C).fields.Position.fields = local_60._0_8_;
            pMVar14 = &pMVar8->m_Items[(int)uVar19].fields;
            pMVar15 = &pMVar14->B;
            (pMVar15->fields).Normal.fields.x = fStack_78;
            (pMVar15->fields).Normal.fields.y = fStack_74;
            *(undefined8 *)((long)&(pMVar14->B).fields.Normal.fields + 8) = local_1f8._8_8_;
            pMVar14 = &pMVar8->m_Items[(int)uVar19].fields;
            *(undefined8 *)&(pMVar14->A).fields.Shade = local_228._32_8_;
            *(undefined8 *)((long)&(pMVar14->B).fields.Position.fields + 4) = local_228._40_8_;
            pMVar14 = &pMVar8->m_Items[(int)uVar19].fields;
            *(undefined8 *)((long)&(pMVar14->A).fields.Normal.fields + 4) = _local_e8;
            (pMVar14->A).fields.UV.fields = UStack_e0;
            *(Il2CppClass **)&pMVar8->m_Items[(int)uVar19].fields.A.fields.Position = local_f8;
            *(undefined8 *)((long)&pMVar8->m_Items[(int)uVar19].fields.A.fields.Position + 8) = _fStack_f0;
            iVar24 = iVar24 + 3;
            if ((__this_00->fields)._size <= iVar24) {
              return;
            }
          }
          else {
            item_00.fields.Submesh = submesh;
            item_00.fields.C.fields.Shade = local_40;
            item_00.fields.A.fields.Position.fields.z = fStack_f0;
            item_00.fields.A.fields.Normal.fields.x = fStack_ec;
            item_00.fields.A.fields.Position.fields._0_8_ = local_f8;
            item_00.fields.A.fields.Normal.fields.y = local_e8;
            item_00.fields.A.fields.Normal.fields.z = fStack_e4;
            item_00.fields.A.fields.UV.fields = UStack_e0;
            item_00.fields.A.fields.Shade = local_d8;
            item_00.fields.B.fields.Position.fields.x = fStack_84;
            item_00.fields.B.fields.Position.fields.y = fStack_80;
            item_00.fields.B.fields.Position.fields.z = fStack_7c;
            item_00.fields.B.fields.Normal.fields.x = fStack_78;
            item_00.fields.B.fields.Normal.fields.y = fStack_74;
            item_00.fields.B.fields.Normal.fields.z = fStack_70;
            item_00.fields.B.fields.UV.fields.x = fStack_6c;
            item_00.fields.B.fields.UV.fields.y = fStack_68;
            item_00.fields.B.fields.Shade = local_108;
            item_00.fields.C.fields.Position.fields.x = local_60.x;
            item_00.fields.C.fields.Position.fields.y = local_60.y;
            item_00.fields.C.fields.Position.fields.z = (float)unique0x10001d0b;
            item_00.fields.C.fields.Normal.fields.x = SUB84(unique0x10001d0b,4);
            item_00.fields.C.fields.Normal.fields.y = (float)(int)uVar11;
            item_00.fields.C.fields.Normal.fields.z = (float)(int)((ulong)uVar11 >> 0x20);
            item_00.fields.C.fields.UV.fields = UVar12;
            System_Collections_Generic_List_MapFracture_Triangle___AddWithResize
                      (local_160,item_00,(MethodInfo_3AB1FB0 *)pMVar26->klass->rgctx_data[0xe].method);
            iVar24 = iVar24 + 3;
            if ((__this_00->fields)._size <= iVar24) {
              return;
            }
          }
        }
label_0598e5cd:
        ThrowIndexOutOfRangeException();
      }
      return;
    }
  }
label_0598e5d2:
  ThrowNullReferenceException();
}


// Map.MapFracture$$EarClip
// il2cpp: System_Collections_Generic_List_int__o* Map_MapFracture__EarClip (System_Collections_Generic_List_Vector2__o* _flat, const MethodInfo* method);
// 0x598ea50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598eb1e: nop 
// asm:   0x598eb77: jmp 0x598eb7c

System_Collections_Generic_List_int__o *
Map_MapFracture__EarClip(System_Collections_Generic_List_Vector2__o *_flat,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  System_Collections_Generic_List_int__o *__this;
  System_Collections_Generic_List_int__o *__this_00;
  MethodInfo *pMVar8;
  System_Int32_array *pSVar9;
  int32_t iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  MethodInfo *in_R9;
  float fVar14;
  float local_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_07545a25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    Il2CppMethodInitialized_07545a25 = '\x01';
  }
  if (_flat != (System_Collections_Generic_List_Vector2__o *)0x0) {
    iVar13 = (_flat->fields)._size;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor_3916240
              (__this,iVar13 * 3 + -6,
               (MethodInfo_3916240 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
    iVar13 = (_flat->fields)._size;
    if (iVar13 < 1) {
      fVar14 = 0.0;
    }
    else {
      iVar10 = 0;
      fVar14 = 0.0;
      do {
        UVar3 = System_Collections_Generic_List_Vector2___get_Item
                          (_flat,iVar10,
                           (MethodInfo_39F9280 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
        iVar10 = iVar10 + 1;
        UVar4 = System_Collections_Generic_List_Vector2___get_Item
                          (_flat,iVar10 % (_flat->fields)._size,
                           (MethodInfo_39F9280 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
        local_48 = UVar3.fields.x;
        fStack_44 = UVar3.fields.y;
        fVar14 = fVar14 + (UVar4.fields.y * local_48 - UVar4.fields.x * fStack_44);
        iVar13 = (_flat->fields)._size;
      } while (iVar10 < iVar13);
    }
    if (ABS(fVar14) < 0.0001) {
      return __this;
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor_3916240
              (__this_00,iVar13,
               (MethodInfo_3916240 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
    iVar13 = (_flat->fields)._size;
    if (iVar13 < 1) {
      if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto label_0598ef0d;
    }
    else {
      if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto label_0598ef0d;
      iVar12 = 0;
      iVar11 = -1;
      pMVar8 = MethodInfo_System_Collections_Generic_List_int_Add;
      do {
        iVar13 = iVar13 + iVar11;
        if (0.0 < fVar14) {
          iVar13 = iVar12;
        }
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (__this_00->fields)._items;
        if (pSVar9 == (System_Int32_array *)0x0) goto label_0598ef0d;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar9->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar9->m_Items[(int)uVar2] = iVar13;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize
                    (__this_00,iVar13,(MethodInfo_3916AC0 *)pMVar8->klass->rgctx_data[0xe].method);
          pMVar8 = MethodInfo_System_Collections_Generic_List_int_Add;
        }
        iVar12 = iVar12 + 1;
        iVar13 = (_flat->fields)._size;
        iVar11 = iVar11 + -1;
      } while (iVar12 < iVar13);
    }
    iVar13 = (__this_00->fields)._size;
    if (__this == (System_Collections_Generic_List_int__o *)0x0) {
      if (iVar13 < 4) {
        System_Collections_Generic_List_int___get_Item
                  (__this_00,0,(MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        ThrowNullReferenceException();
      }
      iVar13 = 1;
      do {
        iVar11 = (__this_00->fields)._size;
        if (iVar11 <= iVar13 + -1) {
          return (System_Collections_Generic_List_int__o *)0x0;
        }
        iVar10 = System_Collections_Generic_List_int___get_Item
                           (__this_00,(iVar11 + iVar13 + -2) % iVar11,
                            (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        iVar6 = System_Collections_Generic_List_int___get_Item
                          (__this_00,iVar13 + -1,
                           (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        iVar7 = System_Collections_Generic_List_int___get_Item
                          (__this_00,iVar13 % (__this_00->fields)._size,
                           (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        bVar5 = Map_MapFracture__IsEar(_flat,__this_00,iVar10,iVar6,iVar7,in_R9);
        iVar13 = iVar13 + 1;
      } while (!bVar5);
    }
    else {
      if (3 < iVar13) {
        iVar13 = 0;
        do {
          do {
            iVar11 = iVar13;
            iVar13 = (__this_00->fields)._size;
            if (iVar13 <= iVar11) {
              return __this;
            }
            iVar10 = System_Collections_Generic_List_int___get_Item
                               (__this_00,(iVar13 + iVar11 + -1) % iVar13,
                                (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item)
            ;
            iVar6 = System_Collections_Generic_List_int___get_Item
                              (__this_00,iVar11,
                               (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            iVar7 = System_Collections_Generic_List_int___get_Item
                              (__this_00,(iVar11 + 1) % (__this_00->fields)._size,
                               (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            bVar5 = Map_MapFracture__IsEar(_flat,__this_00,iVar10,iVar6,iVar7,in_R9);
            pMVar8 = MethodInfo_System_Collections_Generic_List_int_Add;
            iVar13 = iVar11 + 1;
          } while (!bVar5);
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (__this->fields)._items;
          if (pSVar9 == (System_Int32_array *)0x0) goto label_0598ef0d;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar9->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar9->m_Items[(int)uVar2] = iVar10;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (__this,iVar10,(MethodInfo_3916AC0 *)pMVar8->klass->rgctx_data[0xe].method);
            pMVar8 = MethodInfo_System_Collections_Generic_List_int_Add;
            pSVar9 = (__this->fields)._items;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            if (pSVar9 == (System_Int32_array *)0x0) goto label_0598ef0d;
          }
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar9->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar9->m_Items[(int)uVar2] = iVar6;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (__this,iVar6,(MethodInfo_3916AC0 *)pMVar8->klass->rgctx_data[0xe].method);
            pMVar8 = MethodInfo_System_Collections_Generic_List_int_Add;
            pSVar9 = (__this->fields)._items;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            if (pSVar9 == (System_Int32_array *)0x0) goto label_0598ef0d;
          }
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar9->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar9->m_Items[(int)uVar2] = iVar7;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (__this,iVar7,(MethodInfo_3916AC0 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          System_Collections_Generic_List_int___RemoveAt
                    (__this_00,iVar11,
                     (MethodInfo_3918930 *)MethodInfo_System_Collections_Generic_List_int_RemoveAt);
          iVar13 = 0;
        } while (3 < (__this_00->fields)._size);
      }
      iVar10 = System_Collections_Generic_List_int___get_Item
                         (__this_00,0,
                          (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      pMVar8 = MethodInfo_System_Collections_Generic_List_int_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (__this->fields)._items;
      if (pSVar9 != (System_Int32_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar9->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar9->m_Items[(int)uVar2] = iVar10;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize
                    (__this,iVar10,(MethodInfo_3916AC0 *)pMVar8->klass->rgctx_data[0xe].method);
        }
        iVar10 = System_Collections_Generic_List_int___get_Item
                           (__this_00,1,
                            (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        pMVar8 = MethodInfo_System_Collections_Generic_List_int_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (__this->fields)._items;
        if (pSVar9 != (System_Int32_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar9->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar9->m_Items[(int)uVar2] = iVar10;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (__this,iVar10,(MethodInfo_3916AC0 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          iVar10 = System_Collections_Generic_List_int___get_Item
                             (__this_00,2,
                              (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          pMVar8 = MethodInfo_System_Collections_Generic_List_int_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (__this->fields)._items;
          if (pSVar9 != (System_Int32_array *)0x0) {
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar9->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar9->m_Items[(int)uVar2] = iVar10;
              return __this;
            }
            System_Collections_Generic_List_int___AddWithResize
                      (__this,iVar10,(MethodInfo_3916AC0 *)pMVar8->klass->rgctx_data[0xe].method);
            return __this;
          }
        }
      }
    }
  }
label_0598ef0d:
  ThrowNullReferenceException();
}


// Map.MapFracture$$IsEar
// il2cpp: bool Map_MapFracture__IsEar (System_Collections_Generic_List_Vector2__o* _flat, System_Collections_Generic_List_int__o* remaining, int32_t a, int32_t b, int32_t c, const MethodInfo* method);
// 0x598f020
// eh: try 0x598f16a..0x598f1d2 -> pad 0x598f2a1 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x598f2b9..0x598f2be -> pad 0x598f2e1 cleanup
// eh: try 0x598f2e4..0x598f2ee -> pad 0x598f2f6 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598f299: jmp 0x598f2a1
// asm:   0x598f29b: jmp 0x598f2a1
// asm:   0x598f29d: jmp 0x598f2a1
// asm:   0x598f29f: jmp 0x598f2a1
// asm:   0x598f2a1: mov rbx, rax
// asm:   0x598f2a4: cmp edx, 1
// asm:   0x598f2a7: jne 0x598f2e4
// asm:   0x598f2a9: mov rdi, rbx
// asm:   0x598f2ac: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x598f2b1: mov rbx, qword ptr [rax]
// asm:   0x598f2b4: mov qword ptr [rsp + 0x48], rbx
// asm:   0x598f2b9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x598f2be: lea rax, [rip + 0x18fef33]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x598f2c5: mov rsi, qword ptr [rax]
// asm:   0x598f2c8: lea rdi, [rsp + 0x30]
// asm:   0x598f2cd: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x598f2d2: xor ebp, ebp
// asm:   0x598f2d4: test rbx, rbx
// asm:   0x598f2d7: je 0x598f27f
// asm:   0x598f2d9: mov rdi, rbx
// asm:   0x598f2dc: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x598f2e1: mov rbx, rax
// asm:   0x598f2e4: lea rdi, [rsp + 0x48]
// asm:   0x598f2e9: call 0x2fd4560  ; il2cpp_runtime_helper_02fd4560()
// asm:   0x598f2ee: mov rdi, rbx
// asm:   0x598f2f1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x598f2f6: mov rdi, rax
// asm:   0x598f2f9: call 0x2ab61e0  ; __clang_call_terminate()

bool Map_MapFracture__IsEar
               (System_Collections_Generic_List_Vector2__o *_flat,
               System_Collections_Generic_List_int__o *remaining,int32_t a,int32_t b,int32_t c,
               MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_40;
  System_Collections_Generic_List_Enumerator_T__o *local_38;
  
  if (Il2CppMethodInitialized_07545a26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
    Il2CppMethodInitialized_07545a26 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (_flat == (System_Collections_Generic_List_Vector2__o *)0x0) {
label_0598f294:
    ThrowNullReferenceException();
  }
  UVar1 = System_Collections_Generic_List_Vector2___get_Item
                    (_flat,b,(MethodInfo_39F9280 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item
                    );
  UVar2 = System_Collections_Generic_List_Vector2___get_Item
                    (_flat,a,(MethodInfo_39F9280 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item
                    );
  UVar3 = System_Collections_Generic_List_Vector2___get_Item
                    (_flat,c,(MethodInfo_39F9280 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item
                    );
  UVar4 = System_Collections_Generic_List_Vector2___get_Item
                    (_flat,b,(MethodInfo_39F9280 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item
                    );
  local_68 = UVar1.fields.x;
  fStack_64 = UVar1.fields.y;
  local_78 = UVar2.fields.x;
  fStack_74 = UVar2.fields.y;
  local_88 = UVar3.fields.x;
  fStack_84 = UVar3.fields.y;
  if ((fStack_84 - UVar4.fields.y) * (local_68 - local_78) -
      (local_88 - UVar4.fields.x) * (fStack_64 - fStack_74) <= 9.999999e-09) {
    bVar5 = false;
  }
  else {
    if (remaining == (System_Collections_Generic_List_int__o *)0x0) goto label_0598f294;
    System_Collections_Generic_List_int___GetEnumerator
              (&local_58,remaining,
               (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_40 = 0;
    local_38 = &local_58;
    do {
      do {
        bVar5 = System_Collections_Generic_List_Enumerator_int___MoveNext
                          ((System_Collections_Generic_List_Enumerator_int__o *)&local_58,
                           (MethodInfo_4C3B4A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
        if (!bVar5) {
          iVar6 = 6;
          goto label_0598f26b;
        }
      } while ((((int)local_58.fields._current == c) || ((int)local_58.fields._current == a)) ||
              ((int)local_58.fields._current == b));
      UVar1 = System_Collections_Generic_List_Vector2___get_Item
                        (_flat,(int)local_58.fields._current,
                         (MethodInfo_39F9280 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
      UVar2 = System_Collections_Generic_List_Vector2___get_Item
                        (_flat,a,(MethodInfo_39F9280 *)
                                 MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
      UVar3 = System_Collections_Generic_List_Vector2___get_Item
                        (_flat,b,(MethodInfo_39F9280 *)
                                 MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
      UVar4 = System_Collections_Generic_List_Vector2___get_Item
                        (_flat,c,(MethodInfo_39F9280 *)
                                 MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
      fVar7 = UVar4.fields.x;
      fVar8 = UVar4.fields.y;
      local_88 = UVar3.fields.x;
      fStack_84 = UVar3.fields.y;
      local_78 = UVar2.fields.x;
      fStack_74 = UVar2.fields.y;
      local_68 = UVar1.fields.x;
      fStack_64 = UVar1.fields.y;
    } while ((((fStack_64 - fStack_74) * (local_88 - local_78) -
               (local_68 - local_78) * (fStack_84 - fStack_74) < 0.0) ||
             ((fStack_64 - fStack_84) * (fVar7 - local_88) - (local_68 - local_88) * (fVar8 - fStack_84) < 0.0
             )) || ((fStack_64 - fVar8) * (local_78 - fVar7) - (local_68 - fVar7) * (fStack_74 - fVar8) < 0.0)
            );
    iVar6 = 5;
label_0598f26b:
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)&local_58,
               (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    bVar5 = iVar6 != 5;
  }
  return bVar5;
}


// Map.MapFracture$$InTriangle
// il2cpp: bool Map_MapFracture__InTriangle (UnityEngine_Vector2_o point, UnityEngine_Vector2_o a, UnityEngine_Vector2_o b, UnityEngine_Vector2_o c, const MethodInfo* method);
// 0x598f300

bool Map_MapFracture__InTriangle
               (UnityEngine_Vector2_o point,UnityEngine_Vector2_o a,UnityEngine_Vector2_o b,
               UnityEngine_Vector2_o c,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = c.fields.x;
  fVar8 = c.fields.y;
  fVar5 = b.fields.x;
  fVar6 = b.fields.y;
  fVar3 = a.fields.x;
  fVar4 = a.fields.y;
  fVar1 = point.fields.x;
  fVar2 = point.fields.y;
  if ((fVar2 - fVar4) * (fVar5 - fVar3) - (fVar1 - fVar3) * (fVar6 - fVar4) < 0.0) {
    return false;
  }
  if ((fVar2 - fVar6) * (fVar7 - fVar5) - (fVar1 - fVar5) * (fVar8 - fVar6) < 0.0) {
    return false;
  }
  return 0.0 <= (fVar2 - fVar8) * (fVar3 - fVar7) - (fVar1 - fVar7) * (fVar4 - fVar8);
}


// Map.MapFracture$$Cross
// il2cpp: float Map_MapFracture__Cross (UnityEngine_Vector2_o a, UnityEngine_Vector2_o b, const MethodInfo* method);
// 0x598f000

float Map_MapFracture__Cross(UnityEngine_Vector2_o a,UnityEngine_Vector2_o b,MethodInfo *method)

{
  return a.fields.x * b.fields.y - a.fields.y * b.fields.x;
}


// Map.MapFracture$$Weld
// il2cpp: int32_t Map_MapFracture__Weld (System_Collections_Generic_Dictionary_Vector3Int__int__o* points, System_Collections_Generic_List_MapFracture_Vertex__o* vertices, Map_MapFracture_Vertex_o vertex, const MethodInfo* method);
// 0x598d380
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598d4b7: jmp 0x598d523
// asm:   0x598d4f9: jmp 0x598d523
// asm:   0x598d5cb: jmp 0x598d66b
// asm:   0x598d610: jmp 0x598d66b
// asm:   0x598d63e: jmp 0x598d523
// asm:   0x598d745: jmp 0x598d66b

int32_t Map_MapFracture__Weld
                  (System_Collections_Generic_Dictionary_Vector3Int__int__o *points,
                  System_Collections_Generic_List_MapFracture_Vertex__o *vertices,
                  Map_MapFracture_Vertex_o vertex,MethodInfo *method)

{
  int32_t *piVar1;
  Map_MapFracture_Vertex_o *pMVar2;
  uint uVar3;
  Map_MapFracture_Vertex_array *pMVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  Map_MapFracture_Vertex_Fields *pMVar9;
  bool bVar10;
  MethodInfo *pMVar11;
  MethodInfo *pMVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  UnityEngine_Vector3Int_o key;
  UnityEngine_Vector3Int_o key_00;
  Il2CppMethodPointer local_38;
  int32_t local_2c;
  
  pMVar11 = (MethodInfo *)vertices;
  if (Il2CppMethodInitialized_07545a27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_get_Count);
    Il2CppMethodInitialized_07545a27 = '\x01';
  }
  local_2c = 0;
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar5 = (double)(vertex.fields.Position.fields.x / 0.01);
  pMVar12 = (MethodInfo *)&local_38;
  dVar6 = modf(dVar5,(double *)pMVar12,pMVar11);
  uVar13 = SUB84(local_38,0);
  uVar14 = (undefined4)((ulong)local_38 >> 0x20);
  if (0.0 <= vertex.fields.Position.fields.x / 0.01) {
    if ((dVar6 != 0.5) || (NAN(dVar6))) {
      dVar5 = floor(dVar5 + 0.5,pMVar12);
    }
    else {
      if (((long)(double)local_38 & 1U) == 0) goto label_0598d50e;
      dVar5 = (double)local_38 + 1.0;
    }
  }
  else {
    if ((dVar6 != -0.5) || (NAN(dVar6))) {
      dVar5 = ceil(dVar5 + -0.5,pMVar12);
      uVar13 = SUB84(dVar5,0);
      uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
    }
    else if (((long)(double)local_38 & 1U) != 0) {
      dVar5 = (double)local_38 + -1.0;
      goto joined_r0x0598d4f7;
    }
label_0598d50e:
    dVar5 = (double)CONCAT44(uVar14,uVar13);
  }
joined_r0x0598d4f7:
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar6 = (double)(vertex.fields.Position.fields.y / 0.01);
  pMVar12 = (MethodInfo *)&local_38;
  dVar7 = modf(dVar6,(double *)pMVar12,pMVar11);
  uVar13 = SUB84(local_38,0);
  uVar14 = (undefined4)((ulong)local_38 >> 0x20);
  if (0.0 <= vertex.fields.Position.fields.y / 0.01) {
    if ((dVar7 != 0.5) || (NAN(dVar7))) {
      dVar6 = floor(dVar6 + 0.5,pMVar12);
      goto joined_r0x0598d73f;
    }
    if (((long)(double)local_38 & 1U) != 0) {
      dVar6 = (double)local_38 + 1.0;
      goto joined_r0x0598d73f;
    }
  }
  else if ((dVar7 != -0.5) || (NAN(dVar7))) {
    dVar6 = ceil(dVar6 + -0.5,pMVar12);
    uVar13 = SUB84(dVar6,0);
    uVar14 = (undefined4)((ulong)dVar6 >> 0x20);
  }
  else if (((long)(double)local_38 & 1U) != 0) {
    dVar6 = (double)local_38 + -1.0;
    goto joined_r0x0598d73f;
  }
  dVar6 = (double)CONCAT44(uVar14,uVar13);
joined_r0x0598d73f:
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar7 = (double)(vertex.fields.Position.fields.z / 0.01);
  pMVar12 = (MethodInfo *)&local_38;
  dVar8 = modf(dVar7,(double *)pMVar12,pMVar11);
  if (0.0 <= vertex.fields.Position.fields.z / 0.01) {
    if ((dVar8 != 0.5) || (NAN(dVar8))) {
      local_38 = (Il2CppMethodPointer)floor(dVar7 + 0.5,pMVar12);
    }
    else if (((long)(double)local_38 & 1U) != 0) {
      local_38 = (Il2CppMethodPointer)((double)local_38 + 1.0);
    }
  }
  else if ((dVar8 != -0.5) || (NAN(dVar8))) {
    local_38 = (Il2CppMethodPointer)ceil(dVar7 + -0.5,pMVar12);
  }
  else if (((long)(double)local_38 & 1U) != 0) {
    local_38 = (Il2CppMethodPointer)((double)local_38 + -1.0);
  }
  if (points != (System_Collections_Generic_Dictionary_Vector3Int__int__o *)0x0) {
    key_00.fields.m_Y = (int)dVar6;
    key_00.fields.m_X = (int)dVar5;
    key.fields.m_Z = (int)(double)local_38;
    key.fields.m_X = (int)dVar5;
    key.fields.m_Y = (int)dVar6;
    bVar10 = System_Collections_Generic_Dictionary_Vector3Int__int___TryGetValue
                       (points,key,&local_2c,
                        (MethodInfo_4B1E650 *)
                        MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_TryGetValue);
    if (bVar10) {
      return local_2c;
    }
    if (vertices != (System_Collections_Generic_List_MapFracture_Vertex__o *)0x0) {
      local_2c = (vertices->fields)._size;
      key_00.fields.m_Z = (int)(double)local_38;
      System_Collections_Generic_Dictionary_Vector3Int__int___Add
                (points,key_00,local_2c,
                 (MethodInfo_4B1C7C0 *)MethodInfo_System_Collections_Generic_Dictionary_Vector3Int_int_Add);
      pMVar11 = MethodInfo_System_Collections_Generic_List_MapFracture_Vertex_Add;
      piVar1 = &(vertices->fields)._version;
      *piVar1 = *piVar1 + 1;
      pMVar4 = (vertices->fields)._items;
      if (pMVar4 != (Map_MapFracture_Vertex_array *)0x0) {
        uVar3 = (vertices->fields)._size;
        if (uVar3 < (uint)pMVar4->max_length) {
          (vertices->fields)._size = uVar3 + 1;
          pMVar4->m_Items[(int)uVar3].fields.Shade = vertex.fields.Shade;
          pMVar9 = &pMVar4->m_Items[(int)uVar3].fields;
          (pMVar9->Normal).fields.y = vertex.fields.Normal.fields.y;
          (pMVar9->Normal).fields.z = vertex.fields.Normal.fields.z;
          (pMVar9->UV).fields = vertex.fields.UV.fields;
          pMVar2 = pMVar4->m_Items + (int)uVar3;
          (pMVar2->fields).Position.fields.x = (float)vertex.fields.Position.fields.x;
          (pMVar2->fields).Position.fields.y = (float)vertex.fields.Position.fields.y;
          *(long *)&(pMVar2->fields).Position.fields.z = vertex.fields._8_8_;
          return local_2c;
        }
        System_Collections_Generic_List_MapFracture_Vertex___AddWithResize
                  (vertices,vertex,(MethodInfo_3AB6170 *)pMVar11->klass->rgctx_data[0xe].method);
        return local_2c;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapFracture$$GetBounds
// il2cpp: UnityEngine_Bounds_o Map_MapFracture__GetBounds (System_Collections_Generic_List_MapFracture_Triangle__o* triangles, const MethodInfo* method);
// 0x598a640
// eh: try 0x598a7a3..0x598a7ab -> pad 0x598a97a catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x598a995..0x598a99a -> pad 0x598a9bb cleanup
// eh: try 0x598a9be..0x598a9cb -> pad 0x598a9d3 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598a799: nop dword ptr [rax]
// asm:   0x598a97a: mov rbx, rax
// asm:   0x598a97d: cmp edx, 1
// asm:   0x598a980: jne 0x598a9be
// asm:   0x598a982: mov rdi, rbx
// asm:   0x598a985: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x598a98a: mov rbx, qword ptr [rax]
// asm:   0x598a98d: mov qword ptr [rsp + 0xb0], rbx
// asm:   0x598a995: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x598a99a: lea rax, [rip + 0x1904937]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose
// asm:   0x598a9a1: mov rsi, qword ptr [rax]
// asm:   0x598a9a4: lea rdi, [rsp + 0x30]
// asm:   0x598a9a9: call 0x4d821f0  ; System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose()
// asm:   0x598a9ae: test rbx, rbx
// asm:   0x598a9b1: je 0x598a93a
// asm:   0x598a9b3: mov rdi, rbx
// asm:   0x598a9b6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x598a9bb: mov rbx, rax
// asm:   0x598a9be: lea rdi, [rsp + 0xb0]
// asm:   0x598a9c6: call 0x2fd4590  ; il2cpp_runtime_helper_02fd4590()
// asm:   0x598a9cb: mov rdi, rbx
// asm:   0x598a9ce: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x598a9d3: mov rdi, rax
// asm:   0x598a9d6: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Bounds_o *
Map_MapFracture__GetBounds
          (UnityEngine_Bounds_o *__return_storage_ptr__,
          System_Collections_Generic_List_MapFracture_Triangle__o *triangles,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  bool bVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  float fVar13;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float local_130;
  float local_12c;
  UnityEngine_Vector3_Fields local_128;
  float local_118;
  float fStack_114;
  System_Collections_Generic_List_Enumerator_T__o local_108;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [112];
  
  if (Il2CppMethodInitialized_07545a28 == '\0') {
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
    Il2CppMethodInitialized_07545a28 = '\x01';
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  fStack_cc = 0.0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_108.fields._current = (Il2CppObject *)0x0;
  uStack_f0 = 0;
  local_108.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_108.fields._index = 0;
  local_108.fields._version = 0;
  if (triangles == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_MapFracture_Triangle___get_Item
            ((Map_MapFracture_Triangle_o *)local_88,triangles,0,
             (MethodInfo_3AB1AD0 *)MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Item);
  local_128.x = (float)local_88._0_4_;
  local_128.y = (float)local_88._4_4_;
  local_12c = (float)local_88._8_4_;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->zeroVector).fields.x;
  uVar2 = (pUVar3->zeroVector).fields.y;
  local_118 = (float)uVar1 * 0.5;
  fStack_114 = (float)uVar2 * 0.5;
  local_130 = (pUVar3->zeroVector).fields.z * 0.5;
  System_Collections_Generic_List_MapFracture_Triangle___GetEnumerator
            (&local_108,triangles,
             (MethodInfo_3AB3540 *)
             MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_GetEnumerator);
  local_88._0_4_ = 0.0;
  local_88._4_4_ = 0.0;
  local_88._8_8_ = &local_108;
  while( true ) {
    bVar7 = System_Collections_Generic_List_Enumerator_MapFracture_Triangle___MoveNext
                      (&local_108,
                       (MethodInfo_4C82200 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_MoveNext);
    if (!bVar7) break;
    fVar13 = SUB84(local_108.fields._current,0);
    fVar17 = (float)((ulong)local_108.fields._current >> 0x20);
    fVar24 = fStack_114 + local_128.y;
    if (fStack_114 + local_128.y <= fVar17) {
      fVar24 = fVar17;
    }
    fVar21 = local_12c - local_130;
    if ((float)uStack_f0 <= local_12c - local_130) {
      fVar21 = (float)uStack_f0;
    }
    fVar23 = local_130 + local_12c;
    if (local_130 + local_12c <= (float)uStack_f0) {
      fVar23 = (float)uStack_f0;
    }
    fVar23 = (fVar23 - fVar21) * 0.5;
    fVar8 = (fVar21 + fVar23) - fVar23;
    fVar23 = fVar21 + fVar23 + fVar23;
    if (fStack_cc <= fVar8) {
      fVar8 = fStack_cc;
    }
    if (fVar23 <= fStack_cc) {
      fVar23 = fStack_cc;
    }
    fVar21 = (fVar23 - fVar8) * 0.5;
    local_12c = (fVar8 + fVar21) - fVar21;
    fVar21 = fVar8 + fVar21 + fVar21;
    if ((float)local_a8 <= local_12c) {
      local_12c = (float)local_a8;
    }
    if (fVar21 <= (float)local_a8) {
      fVar21 = (float)local_a8;
    }
    fVar23 = local_118 + local_128.x;
    if (local_118 + local_128.x <= fVar13) {
      fVar23 = fVar13;
    }
    uVar12 = (int)((uint)(local_128.x - local_118 < fVar13) << 0x1f) >> 0x1f;
    uVar16 = (int)((uint)(local_128.y - fStack_114 < fVar17) << 0x1f) >> 0x1f;
    uVar6 = CONCAT44(~uVar16 & (uint)fVar17,~uVar12 & (uint)fVar13) |
            CONCAT44((uint)(local_128.y - fStack_114) & uVar16,(uint)(local_128.x - local_118) & uVar12);
    fVar13 = (float)uVar6;
    fVar17 = (float)(uVar6 >> 0x20);
    fVar23 = (fVar23 - fVar13) * 0.5;
    fVar24 = (fVar24 - fVar17) * 0.5;
    fVar8 = fStack_114 * 0.0;
    fStack_114 = fStack_114 * 0.0;
    fVar13 = fVar13 + fVar23;
    fVar17 = fVar17 + fVar24;
    auVar9._0_4_ = fVar13 - fVar23;
    auVar9._4_4_ = fVar17 - fVar24;
    auVar9._8_4_ = (fVar8 + 0.0) - fVar8;
    auVar9._12_4_ = (fStack_114 + 0.0) - fStack_114;
    auVar14._0_4_ = fVar13 + fVar23;
    auVar14._4_4_ = fVar17 + fVar24;
    auVar14._8_4_ = fVar8 + 0.0 + fVar8;
    auVar14._12_4_ = fStack_114 + 0.0 + fStack_114;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = CONCAT44(uStack_d0,uStack_d4);
    auVar10 = minps(auVar9,auVar10);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = CONCAT44(uStack_d0,uStack_d4);
    auVar15 = maxps(auVar14,auVar15);
    fVar8 = (auVar15._0_4_ - auVar10._0_4_) * 0.5;
    fVar18 = (auVar15._4_4_ - auVar10._4_4_) * 0.5;
    fVar19 = (auVar15._8_4_ - auVar10._8_4_) * 0.0;
    fVar20 = (auVar15._12_4_ - auVar10._12_4_) * 0.0;
    fVar24 = auVar10._0_4_ + fVar8;
    fVar13 = auVar10._4_4_ + fVar18;
    fVar17 = auVar10._8_4_ + fVar19;
    fVar23 = auVar10._12_4_ + fVar20;
    auVar22._0_4_ = fVar24 - fVar8;
    auVar22._4_4_ = fVar13 - fVar18;
    auVar22._8_4_ = fVar17 - fVar19;
    auVar22._12_4_ = fVar23 - fVar20;
    auVar11._0_4_ = fVar24 + fVar8;
    auVar11._4_4_ = fVar13 + fVar18;
    auVar11._8_4_ = fVar17 + fVar19;
    auVar11._12_4_ = fVar23 + fVar20;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uStack_b0;
    auVar15 = minps(auVar22,auVar4);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uStack_b0;
    auVar10 = maxps(auVar11,auVar5);
    local_118 = (auVar10._0_4_ - auVar15._0_4_) * 0.5;
    fStack_114 = (auVar10._4_4_ - auVar15._4_4_) * 0.5;
    local_130 = (fVar21 - local_12c) * 0.5;
    local_128.y = auVar15._4_4_ + fStack_114;
    local_128.x = auVar15._0_4_ + local_118;
    local_12c = local_12c + local_130;
  }
  System_Collections_Generic_List_Enumerator_MapFracture_Triangle___Dispose
            (&local_108,
             (MethodInfo_4C821F0 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_MapFracture_Triangle_Dispose);
  (__return_storage_ptr__->fields).m_Center.fields.x = local_128.x;
  (__return_storage_ptr__->fields).m_Center.fields.y = local_128.y;
  (__return_storage_ptr__->fields).m_Center.fields.z = local_12c;
  (__return_storage_ptr__->fields).m_Extents.fields.x = local_118;
  (__return_storage_ptr__->fields).m_Extents.fields.y = fStack_114;
  (__return_storage_ptr__->fields).m_Extents.fields.z = local_130;
  return __return_storage_ptr__;
}


// Map.MapFracture$$Next
// il2cpp: float Map_MapFracture__Next (System_Random_o* random, const MethodInfo* method);
// 0x598b740

float Map_MapFracture__Next(System_Random_o *random,MethodInfo *method)

{
  double dVar1;
  
  if (random == (System_Random_o *)0x0) {
    ThrowNullReferenceException();
  }
  dVar1 = (*(random->klass->vtable)._8_NextDouble.methodPtr)
                    (random,(random->klass->vtable)._8_NextDouble.method);
  return (float)dVar1 + -0.5;
}


