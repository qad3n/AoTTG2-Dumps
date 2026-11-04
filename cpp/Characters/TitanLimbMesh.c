// Type: Characters.TitanLimbMesh
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Characters/TitanLimbMesh.cs
// Prior real C# source: none
// --------------------------------

// Characters.TitanLimbMesh.MeshSource$$.ctor
// il2cpp: void Characters_TitanLimbMesh_MeshSource___ctor (Characters_TitanLimbMesh_MeshSource_o* __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
// 0x1821aaea0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821aafdc: nop dword ptr [rax]
// asm:   0x1821ab021: jmp 0x1821aafe0
// asm:   0x1821ab08c: nop dword ptr [rax]
// asm:   0x1821ab0d8: jmp 0x1821ab0ef

void Characters_TitanLimbMesh_MeshSource___ctor
               (Characters_TitanLimbMesh_MeshSource_o *__this,UnityEngine_Mesh_o *mesh,MethodInfo *method)

{
  uint32_t length;
  UnityEngine_Vector3_array *pUVar1;
  UnityEngine_Vector4_array *value;
  UnityEngine_Vector2_array *value_00;
  UnityEngine_Color32_array *pUVar2;
  UnityEngine_BoneWeight_array *value_01;
  UnityEngine_Matrix4x4_array *value_02;
  System_Int32_array_array *pSVar3;
  System_Int32_array *value_03;
  longlong lVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184346e80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color32_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array_array);
    Il2CppMethodInitialized_184346e80 = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Original = mesh;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Original,mesh);
  if (mesh != (UnityEngine_Mesh_o *)0x0) {
    pUVar1 = UnityEngine_Mesh__get_vertices(mesh,(MethodInfo *)0x0);
    (__this->fields).Vertices = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Vertices,pUVar1);
    pUVar1 = UnityEngine_Mesh__get_normals(mesh,(MethodInfo *)0x0);
    (__this->fields).Normals = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Normals,pUVar1);
    value = UnityEngine_Mesh__get_tangents(mesh,(MethodInfo *)0x0);
    (__this->fields).Tangents = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Tangents,value);
    value_00 = UnityEngine_Mesh__get_uv(mesh,(MethodInfo *)0x0);
    (__this->fields).UV = value_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).UV,value_00);
    pUVar2 = UnityEngine_Mesh__get_colors32(mesh,(MethodInfo *)0x0);
    (__this->fields).Colors = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Colors,pUVar2);
    pUVar2 = (__this->fields).Colors;
    if (pUVar2 != (UnityEngine_Color32_array *)0x0) {
      if (pUVar2->max_length == 0) {
        pUVar1 = (__this->fields).Vertices;
        if (pUVar1 != (UnityEngine_Vector3_array *)0x0) {
          pUVar2 = (UnityEngine_Color32_array *)
                   SZArrayNew(TypeInfo_UnityEngine_Color32_array,(uint32_t)pUVar1->max_length);
          (__this->fields).Colors = pUVar2;
          Il2CppCodeGenWriteBarrier(&(__this->fields).Colors,pUVar2);
          uVar5 = 0;
          pUVar2 = (__this->fields).Colors;
          while (pUVar2 != (UnityEngine_Color32_array *)0x0) {
            if ((int)pUVar2->max_length <= (int)uVar5) goto label_1821ab023;
            pUVar2 = (__this->fields).Colors;
            if (pUVar2 == (UnityEngine_Color32_array *)0x0) break;
            if ((uint)pUVar2->max_length <= uVar5) goto label_1821ab0f5;
            lVar4 = (longlong)(int)uVar5;
            uVar5 = uVar5 + 1;
            pUVar2->m_Items[lVar4].fields._overlap_0 = (_union_53103)0xffffffff;
            pUVar2 = (__this->fields).Colors;
          }
        }
      }
      else {
label_1821ab023:
        value_01 = UnityEngine_Mesh__get_boneWeights(mesh,(MethodInfo *)0x0);
        (__this->fields).Weights = value_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Weights,value_01);
        value_02 = UnityEngine_Mesh__get_bindposes(mesh,(MethodInfo *)0x0);
        (__this->fields).Bindposes = value_02;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Bindposes,value_02);
        length = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
        pSVar3 = (System_Int32_array_array *)SZArrayNew(TypeInfo_int_array_array,length);
        (__this->fields).Triangles = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Triangles,pSVar3);
        uVar5 = 0;
        pSVar3 = (__this->fields).Triangles;
        while (pSVar3 != (System_Int32_array_array *)0x0) {
          if ((int)pSVar3->max_length <= (int)uVar5) {
            return;
          }
          pSVar3 = (__this->fields).Triangles;
          value_03 = UnityEngine_Mesh__GetTriangles(mesh,uVar5,(MethodInfo *)0x0);
          if (pSVar3 == (System_Int32_array_array *)0x0) break;
          if ((uint)pSVar3->max_length <= uVar5) {
label_1821ab0f5:
            ThrowIndexOutOfRangeException();
          }
          pSVar3->m_Items[(int)uVar5] = value_03;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar5,value_03);
          uVar5 = uVar5 + 1;
          pSVar3 = (__this->fields).Triangles;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CachedBody$$.ctor
// il2cpp: void Characters_TitanLimbMesh_CachedBody___ctor (Characters_TitanLimbMesh_CachedBody_o* __this, UnityEngine_SkinnedMeshRenderer_o* renderer, UnityEngine_Transform_o* leftHand, UnityEngine_Transform_o* rightHand, const MethodInfo* method);
// 0x1821a1c30

void Characters_TitanLimbMesh_CachedBody___ctor
               (Characters_TitanLimbMesh_CachedBody_o *__this,UnityEngine_SkinnedMeshRenderer_o *renderer,
               UnityEngine_Transform_o *leftHand,UnityEngine_Transform_o *rightHand,MethodInfo *method)

{
  UnityEngine_Mesh_array *pUVar1;
  Characters_TitanLimbMesh_RegrowthMesh_array *value;
  UnityEngine_Mesh_o *pUVar2;
  Characters_TitanLimbMesh_MeshSource_o *pCVar3;
  Characters_TitanLimbMesh_CutPlane_array *pCVar4;
  Characters_TitanLimbMesh_CutPlane_o *pCVar5;
  UnityEngine_Transform_o *pUVar6;
  
  if (Il2CppMethodInitialized_184346e81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CutPlane_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CutPlane);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_MeshSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_RegrowthMesh_array);
    Il2CppMethodInitialized_184346e81 = '\x01';
  }
  pUVar1 = (UnityEngine_Mesh_array *)SZArrayNew(TypeInfo_UnityEngine_Mesh_array,0x24);
  (__this->fields)._meshes = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._meshes,pUVar1);
  value = (Characters_TitanLimbMesh_RegrowthMesh_array *)
          SZArrayNew(TypeInfo_Characters_TitanLimbMesh_RegrowthMesh_array,4);
  (__this->fields)._regrowth = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._regrowth,value);
  pUVar1 = (UnityEngine_Mesh_array *)SZArrayNew(TypeInfo_UnityEngine_Mesh_array,8);
  (__this->fields)._detached = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._detached,pUVar1);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (renderer != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    pUVar2 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(renderer,(MethodInfo *)0x0);
    pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_MeshSource);
    Characters_TitanLimbMesh_MeshSource___ctor(pCVar3,pUVar2,(MethodInfo *)0x0);
    (__this->fields).Source = pCVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Source,pCVar3);
    pCVar3 = (__this->fields).Source;
    if ((pCVar3 != (Characters_TitanLimbMesh_MeshSource_o *)0x0) &&
       (pUVar1 = (__this->fields)._meshes, pUVar1 != (UnityEngine_Mesh_array *)0x0)) {
      if ((int)pUVar1->max_length != 0) {
        pUVar2 = (pCVar3->fields).Original;
        pUVar1->m_Items[0] = pUVar2;
        Il2CppCodeGenWriteBarrier(pUVar1->m_Items,pUVar2);
        pCVar4 = (Characters_TitanLimbMesh_CutPlane_array *)
                 SZArrayNew(TypeInfo_Characters_TitanLimbMesh_CutPlane_array,3);
        pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutPlane);
        Characters_TitanLimbMesh_CutPlane___ctor_21a8440(pCVar5,renderer,leftHand,1.0,(MethodInfo *)0x0);
        if (pCVar4 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_1821a1f38;
        if (1 < (uint)pCVar4->max_length) {
          pCVar4->m_Items[1] = pCVar5;
          Il2CppCodeGenWriteBarrier(pCVar4->m_Items + 1,pCVar5);
          if (leftHand == (UnityEngine_Transform_o *)0x0) goto label_1821a1f38;
          pUVar6 = UnityEngine_Transform__GetParent(leftHand,(MethodInfo *)0x0);
          pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutPlane);
          Characters_TitanLimbMesh_CutPlane___ctor_21a8440(pCVar5,renderer,pUVar6,0.25,(MethodInfo *)0x0);
          if (2 < (uint)pCVar4->max_length) {
            pCVar4->m_Items[2] = pCVar5;
            Il2CppCodeGenWriteBarrier(pCVar4->m_Items + 2,pCVar5);
            (__this->fields)._left = pCVar4;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._left,pCVar4);
            pCVar4 = (Characters_TitanLimbMesh_CutPlane_array *)
                     SZArrayNew(TypeInfo_Characters_TitanLimbMesh_CutPlane_array,3);
            pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutPlane);
            Characters_TitanLimbMesh_CutPlane___ctor_21a8440(pCVar5,renderer,rightHand,1.0,(MethodInfo *)0x0);
            if (pCVar4 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_1821a1f38;
            if (1 < (uint)pCVar4->max_length) {
              pCVar4->m_Items[1] = pCVar5;
              Il2CppCodeGenWriteBarrier(pCVar4->m_Items + 1,pCVar5);
              if (rightHand == (UnityEngine_Transform_o *)0x0) goto label_1821a1f38;
              pUVar6 = UnityEngine_Transform__GetParent(rightHand,(MethodInfo *)0x0);
              pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutPlane);
              Characters_TitanLimbMesh_CutPlane___ctor_21a8440(pCVar5,renderer,pUVar6,0.25,(MethodInfo *)0x0);
              if (2 < (uint)pCVar4->max_length) {
                pCVar4->m_Items[2] = pCVar5;
                Il2CppCodeGenWriteBarrier(pCVar4->m_Items + 2,pCVar5);
                (__this->fields)._right = pCVar4;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._right,pCVar4);
                return;
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_1821a1f38:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CachedBody$$GetMesh
// il2cpp: UnityEngine_Mesh_o* Characters_TitanLimbMesh_CachedBody__GetMesh (Characters_TitanLimbMesh_CachedBody_o* __this, int32_t left, int32_t right, bool leftRegrowing, bool rightRegrowing, const MethodInfo* method);
// 0x1821a1910

UnityEngine_Mesh_o *
Characters_TitanLimbMesh_CachedBody__GetMesh
          (Characters_TitanLimbMesh_CachedBody_o *__this,int32_t left,int32_t right,bool leftRegrowing,
          bool rightRegrowing,MethodInfo *method)

{
  UnityEngine_Mesh_array *pUVar1;
  UnityEngine_Object_o *x;
  Characters_TitanLimbMesh_MeshSource_o *source;
  Characters_TitanLimbMesh_CutPlane_array *pCVar2;
  bool bVar3;
  Characters_TitanLimbMesh_CutMeshData_o *__this_00;
  UnityEngine_Mesh_o *value;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184346e82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CutMeshData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e82 = '\x01';
  }
  pUVar1 = (__this->fields)._meshes;
  if (pUVar1 == (UnityEngine_Mesh_array *)0x0) goto label_1821a1b2b;
  uVar4 = left + right * 3 + (-(uint)leftRegrowing & 9) + (-(uint)rightRegrowing & 0x12);
  if ((uint)pUVar1->max_length <= uVar4) goto label_1821a1b31;
  x = (UnityEngine_Object_o *)pUVar1->m_Items[(int)uVar4];
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    source = (__this->fields).Source;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutMeshData);
    Characters_TitanLimbMesh_CutMeshData___ctor(__this_00,source,(MethodInfo *)0x0);
    if (left != 0) {
      pCVar2 = (__this->fields)._left;
      if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_1821a1b2b;
      if (leftRegrowing) {
        if ((uint)pCVar2->max_length <= (uint)left) goto label_1821a1b31;
        if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_1821a1b2b;
        Characters_TitanLimbMesh_CutMeshData__Remove(__this_00,pCVar2->m_Items[left],(MethodInfo *)0x0);
      }
      else {
        if ((uint)pCVar2->max_length <= (uint)left) goto label_1821a1b31;
        if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_1821a1b2b;
        Characters_TitanLimbMesh_CutMeshData__Cut(__this_00,pCVar2->m_Items[left],false,(MethodInfo *)0x0);
      }
    }
    if (right == 0) {
      if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_1821a1b2b;
    }
    else {
      pCVar2 = (__this->fields)._right;
      if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_1821a1b2b;
      if (rightRegrowing) {
        if ((uint)pCVar2->max_length <= (uint)right) goto label_1821a1b31;
        if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_1821a1b2b;
        Characters_TitanLimbMesh_CutMeshData__Remove(__this_00,pCVar2->m_Items[right],(MethodInfo *)0x0);
      }
      else {
        if ((uint)pCVar2->max_length <= (uint)right) goto label_1821a1b31;
        if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_1821a1b2b;
        Characters_TitanLimbMesh_CutMeshData__Cut(__this_00,pCVar2->m_Items[right],false,(MethodInfo *)0x0);
      }
    }
    pUVar1 = (__this->fields)._meshes;
    value = Characters_TitanLimbMesh_CutMeshData__CreateMesh
                      (__this_00,(__this->fields).Source,false,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_Mesh_array *)0x0) goto label_1821a1b2b;
    if ((uint)pUVar1->max_length <= uVar4) goto label_1821a1b31;
    pUVar1->m_Items[(int)uVar4] = value;
    Il2CppCodeGenWriteBarrier(pUVar1->m_Items + (int)uVar4,value);
  }
  pUVar1 = (__this->fields)._meshes;
  if (pUVar1 != (UnityEngine_Mesh_array *)0x0) {
    if (uVar4 < (uint)pUVar1->max_length) {
      return pUVar1->m_Items[(int)uVar4];
    }
label_1821a1b31:
    ThrowIndexOutOfRangeException();
  }
label_1821a1b2b:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CachedBody$$Dispose
// il2cpp: void Characters_TitanLimbMesh_CachedBody__Dispose (Characters_TitanLimbMesh_CachedBody_o* __this, const MethodInfo* method);
// 0x1821a1450
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a1532: jmp 0x1821a1497
// asm:   0x1821a1599: nop dword ptr [rax]

void Characters_TitanLimbMesh_CachedBody__Dispose
               (Characters_TitanLimbMesh_CachedBody_o *__this,MethodInfo *method)

{
  UnityEngine_Mesh_array *pUVar1;
  UnityEngine_Object_o *pUVar2;
  Characters_TitanLimbMesh_RegrowthMesh_array *pCVar3;
  bool bVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184346e83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e83 = '\x01';
  }
  uVar5 = 1;
  pUVar1 = (__this->fields)._meshes;
  while (pUVar1 != (UnityEngine_Mesh_array *)0x0) {
    if ((int)pUVar1->max_length <= (int)uVar5) {
      pCVar3 = (__this->fields)._regrowth;
      if (pCVar3 != (Characters_TitanLimbMesh_RegrowthMesh_array *)0x0) {
        uVar5 = 0;
        goto label_1821a1548;
      }
      break;
    }
    pUVar1 = (__this->fields)._meshes;
    if (pUVar1 == (UnityEngine_Mesh_array *)0x0) break;
    if ((uint)pUVar1->max_length <= uVar5) goto label_1821a1618;
    pUVar2 = (UnityEngine_Object_o *)pUVar1->m_Items[(int)uVar5];
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar1 = (__this->fields)._meshes;
      if (pUVar1 == (UnityEngine_Mesh_array *)0x0) break;
      if ((uint)pUVar1->max_length <= uVar5) goto label_1821a1618;
      pUVar2 = (UnityEngine_Object_o *)pUVar1->m_Items[(int)uVar5];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
    }
    uVar5 = uVar5 + 1;
    pUVar1 = (__this->fields)._meshes;
  }
  goto label_1821a1612;
label_1821a1548:
  if ((int)pCVar3->max_length <= (int)uVar5) goto label_1821a158c;
  if ((uint)pCVar3->max_length <= uVar5) goto label_1821a1618;
  if (pCVar3->m_Items[(int)uVar5] != (Characters_TitanLimbMesh_RegrowthMesh_o *)0x0) {
    pUVar2 = (UnityEngine_Object_o *)(pCVar3->m_Items[(int)uVar5]->fields).Mesh;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
  }
  uVar5 = uVar5 + 1;
  goto label_1821a1548;
label_1821a158c:
  pUVar1 = (__this->fields)._detached;
  if (pUVar1 != (UnityEngine_Mesh_array *)0x0) {
    uVar5 = 0;
    while( true ) {
      if ((int)pUVar1->max_length <= (int)uVar5) {
        return;
      }
      if ((uint)pUVar1->max_length <= uVar5) break;
      pUVar2 = (UnityEngine_Object_o *)pUVar1->m_Items[(int)uVar5];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
      }
      uVar5 = uVar5 + 1;
    }
label_1821a1618:
    ThrowIndexOutOfRangeException();
  }
label_1821a1612:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CachedBody$$GetDetached
// il2cpp: UnityEngine_Mesh_o* Characters_TitanLimbMesh_CachedBody__GetDetached (Characters_TitanLimbMesh_CachedBody_o* __this, bool left, bool arm, bool handDisabled, bool regrowing, const MethodInfo* method);
// 0x1821a1620

UnityEngine_Mesh_o *
Characters_TitanLimbMesh_CachedBody__GetDetached
          (Characters_TitanLimbMesh_CachedBody_o *__this,bool left,bool arm,bool handDisabled,bool regrowing,
          MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  UnityEngine_Mesh_array *pUVar4;
  UnityEngine_Object_o *x;
  Characters_TitanLimbMesh_MeshSource_o *source;
  Characters_TitanLimbMesh_CutPlane_array *pCVar5;
  Characters_TitanLimbMesh_CutPlane_o *pCVar6;
  bool bVar7;
  Characters_TitanLimbMesh_CutMeshData_o *__this_00;
  Characters_TitanLimbMesh_CutPlane_o *wrist;
  System_Collections_Generic_HashSet_int__o *pSVar8;
  UnityEngine_Mesh_o *value;
  uint uVar9;
  
  if (Il2CppMethodInitialized_184346e84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CutMeshData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e84 = '\x01';
  }
  if (handDisabled && arm) {
    uVar9 = regrowing | 2;
  }
  else {
    uVar9 = (uint)arm;
  }
  pUVar4 = (__this->fields)._detached;
  if (pUVar4 == (UnityEngine_Mesh_array *)0x0) goto label_1821a1900;
  uVar9 = uVar9 + (uint)!left * 4;
  if ((uint)pUVar4->max_length <= uVar9) goto label_1821a1906;
  x = (UnityEngine_Object_o *)pUVar4->m_Items[uVar9];
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    source = (__this->fields).Source;
    pCVar5 = (&(__this->fields)._left)[!left];
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutMeshData);
    Characters_TitanLimbMesh_CutMeshData___ctor(__this_00,source,(MethodInfo *)0x0);
    if (pCVar5 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_1821a1900;
    if (handDisabled && arm) {
      if (regrowing) {
        if ((uint)pCVar5->max_length < 2) goto label_1821a1906;
        if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_1821a1900;
        Characters_TitanLimbMesh_CutMeshData__Remove(__this_00,pCVar5->m_Items[1],(MethodInfo *)0x0);
      }
      else {
        if ((uint)pCVar5->max_length < 2) goto label_1821a1906;
        if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_1821a1900;
        Characters_TitanLimbMesh_CutMeshData__Cut(__this_00,pCVar5->m_Items[1],false,(MethodInfo *)0x0);
      }
    }
    if ((uint)pCVar5->max_length <= arm + 1) goto label_1821a1906;
    pCVar6 = pCVar5->m_Items[(ulonglong)arm + 1];
    if (pCVar6 == (Characters_TitanLimbMesh_CutPlane_o *)0x0) goto label_1821a1900;
    if (Il2CppMethodInitialized_184346e88 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CutPlane);
      Il2CppMethodInitialized_184346e88 = '\x01';
    }
    wrist = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutPlane);
    if (Il2CppMethodInitialized_184346e87 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_UnionWith)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
      Il2CppMethodInitialized_184346e87 = '\x01';
    }
    pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor
              (pSVar8,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    (wrist->fields).RemovedBones = pSVar8;
    Il2CppCodeGenWriteBarrier(&(wrist->fields).RemovedBones,pSVar8);
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)wrist,(MethodInfo *)0x0);
    uVar2 = *(undefined8 *)&(pCVar6->fields).Origin.fields;
    fVar3 = *(float *)((longlong)&(pCVar6->fields).Origin + 8);
    pSVar8 = (wrist->fields).RemovedBones;
    (wrist->fields).Origin.fields.x = (float)(int)uVar2;
    (wrist->fields).Origin.fields.y = (float)(int)((ulonglong)uVar2 >> 0x20);
    (wrist->fields).Origin.fields.z = fVar3;
    fVar3 = *(float *)((longlong)&(pCVar6->fields).Normal + 8);
    fVar1 = (pCVar6->fields).Normal.fields.x;
    (wrist->fields).Normal.fields.y = -*(float *)((longlong)&(pCVar6->fields).Normal + 4);
    (wrist->fields).Normal.fields.x = -fVar1;
    (wrist->fields).Normal.fields.z = -fVar3;
    (wrist->fields).ParentBone = (pCVar6->fields).ParentBone;
    (wrist->fields).BloodStainScale = (pCVar6->fields).BloodStainScale;
    if (pSVar8 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1821a1900;
    System_Collections_Generic_HashSet_int___UnionWith
              (pSVar8,(System_Collections_Generic_IEnumerable_T__o *)(pCVar6->fields).RemovedBones,
               (MethodInfo_176B2F0 *)MethodInfo_System_Collections_Generic_HashSet_int_UnionWith);
    if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_1821a1900;
    Characters_TitanLimbMesh_CutMeshData__Cut(__this_00,wrist,true,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._detached;
    value = Characters_TitanLimbMesh_CutMeshData__CreateMesh
                      (__this_00,(__this->fields).Source,true,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Mesh_array *)0x0) goto label_1821a1900;
    if ((uint)pUVar4->max_length <= uVar9) goto label_1821a1906;
    pUVar4->m_Items[uVar9] = value;
    Il2CppCodeGenWriteBarrier(pUVar4->m_Items + uVar9,value);
  }
  pUVar4 = (__this->fields)._detached;
  if (pUVar4 == (UnityEngine_Mesh_array *)0x0) {
label_1821a1900:
    ThrowNullReferenceException();
  }
  if (uVar9 < (uint)pUVar4->max_length) {
    return pUVar4->m_Items[uVar9];
  }
label_1821a1906:
  ThrowIndexOutOfRangeException();
}


// Characters.TitanLimbMesh.CachedBody$$GetRegrowth
// il2cpp: Characters_TitanLimbMesh_RegrowthMesh_o* Characters_TitanLimbMesh_CachedBody__GetRegrowth (Characters_TitanLimbMesh_CachedBody_o* __this, bool left, bool arm, const MethodInfo* method);
// 0x1821a1b40

Characters_TitanLimbMesh_RegrowthMesh_o *
Characters_TitanLimbMesh_CachedBody__GetRegrowth
          (Characters_TitanLimbMesh_CachedBody_o *__this,bool left,bool arm,MethodInfo *method)

{
  Characters_TitanLimbMesh_RegrowthMesh_array *pCVar1;
  Characters_TitanLimbMesh_CutPlane_array *pCVar2;
  Characters_TitanLimbMesh_CutPlane_o *cut;
  Characters_TitanLimbMesh_MeshSource_o *source;
  Characters_TitanLimbMesh_RegrowthMesh_o *__this_00;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184346e85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_RegrowthMesh);
    Il2CppMethodInitialized_184346e85 = '\x01';
  }
  pCVar1 = (__this->fields)._regrowth;
  if (pCVar1 == (Characters_TitanLimbMesh_RegrowthMesh_array *)0x0) {
label_1821a1c19:
    ThrowNullReferenceException();
  }
  uVar3 = (uint)arm + (uint)!left * 2;
  if (uVar3 < (uint)pCVar1->max_length) {
    if (pCVar1->m_Items[uVar3] != (Characters_TitanLimbMesh_RegrowthMesh_o *)0x0) {
      return pCVar1->m_Items[uVar3];
    }
    pCVar2 = (&(__this->fields)._left)[!left];
    if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_1821a1c19;
    if (arm + 1 < (uint)pCVar2->max_length) {
      cut = pCVar2->m_Items[(ulonglong)arm + 1];
      pCVar1 = (__this->fields)._regrowth;
      source = (__this->fields).Source;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_RegrowthMesh);
      Characters_TitanLimbMesh_RegrowthMesh___ctor(__this_00,source,cut,(MethodInfo *)0x0);
      if (uVar3 < (uint)pCVar1->max_length) {
        pCVar1->m_Items[uVar3] = __this_00;
        Il2CppCodeGenWriteBarrier(pCVar1->m_Items + uVar3,__this_00);
        return __this_00;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.TitanLimbMesh.RegrowthMesh$$.ctor
// il2cpp: void Characters_TitanLimbMesh_RegrowthMesh___ctor (Characters_TitanLimbMesh_RegrowthMesh_o* __this, Characters_TitanLimbMesh_MeshSource_o* source, Characters_TitanLimbMesh_CutPlane_o* cut, const MethodInfo* method);
// 0x1821ab9d0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821abc0c: nop dword ptr [rax]
// asm:   0x1821abf1b: movaps xmm1, xmm7
// asm:   0x1821abfc7: movaps xmm0, xmm14
// asm:   0x1821abfcb: jmp 0x1821abfd0
// asm:   0x1821ac2fc: nop dword ptr [rax]
// asm:   0x1821ac349: nop dword ptr [rax]
// asm:   0x1821ac449: mov r10, qword ptr [rbp + 0x70]
// asm:   0x1821ac569: jmp 0x1821ac300

void Characters_TitanLimbMesh_RegrowthMesh___ctor
               (Characters_TitanLimbMesh_RegrowthMesh_o *__this,Characters_TitanLimbMesh_MeshSource_o *source,
               Characters_TitanLimbMesh_CutPlane_o *cut,MethodInfo *method)

{
  UnityEngine_BoneWeight_o *pUVar1;
  UnityEngine_BoneWeight_o *pUVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Object_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar10;
  System_Int32_array_array *pSVar11;
  System_Int32_array *pSVar12;
  UnityEngine_Vector3_array *pUVar13;
  UnityEngine_BoneWeight_array *pUVar14;
  UnityEngine_BoneWeight_Fields *pUVar15;
  il2cpp_array_size_t iVar16;
  int32_t iVar17;
  int32_t iVar18;
  int32_t iVar19;
  int32_t iVar20;
  bool bVar21;
  UnityEngine_Vector3_array *pUVar22;
  UnityEngine_BoneWeight_array *pUVar23;
  UnityEngine_Mesh_o *pUVar24;
  System_String_o *pSVar25;
  Il2CppObject *pIVar26;
  UnityEngine_Vector2_array *value;
  UnityEngine_Vector2_array *value_00;
  System_Collections_Generic_List_int__o *triangles;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 local_130;
  float local_128;
  UnityEngine_InputForUI_PointerState_Fields local_120;
  UnityEngine_BoneWeight_Fields local_f8 [6];
  
  if (Il2CppMethodInitialized_184346e86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_BoneWeight_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    il2cpp_codegen_initialize_runtime_metadata(&" regrowth");
    Il2CppMethodInitialized_184346e86 = '\x01';
  }
  local_120._LastPressedButton_k__BackingField = 0;
  local_120._buttonsState.fields._state = (UnityEngine_InputForUI_PointerEvent_ButtonsState_Fields)0x0;
  local_120._NextPressTime_k__BackingField.fields.Value = (Unity_IntegerTime_DiscreteTime_Fields)0;
  local_120._ClickCount_k__BackingField = 0;
  local_120._LastPosition_k__BackingField.fields.x = 0.0;
  local_120._LastPosition_k__BackingField.fields.y = 0.0;
  local_120._LastDisplayIndex_k__BackingField = 0;
  pUVar22 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,0x11);
  (__this->fields)._centers = pUVar22;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._centers,pUVar22);
  pUVar23 = (UnityEngine_BoneWeight_array *)SZArrayNew(TypeInfo_UnityEngine_BoneWeight_array,0x11);
  (__this->fields)._weights = pUVar23;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._weights,pUVar23);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (source != (Characters_TitanLimbMesh_MeshSource_o *)0x0) {
    pUVar24 = (source->fields).Original;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pUVar24 = UnityEngine_Object__Instantiate_object__746ba0
                        ((Il2CppObject *)pUVar24,
                         (MethodInfo_746BA0 *)MethodInfo_UnityEngine_Object_Instantiate_Mesh);
    (__this->fields).Mesh = pUVar24;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Mesh,pUVar24);
    __this_00 = (UnityEngine_Object_o *)(source->fields).Original;
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      __this_01 = (UnityEngine_Object_o *)(__this->fields).Mesh;
      pSVar25 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      pSVar25 = System_String__Concat_1969e50(pSVar25," regrowth",(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_name(__this_01,pSVar25,(MethodInfo *)0x0);
        pUVar22 = (source->fields).Vertices;
        if ((pUVar22 != (UnityEngine_Vector3_array *)0x0) &&
           (pIVar26 = SZArrayNew(TypeInfo_float_array,(uint32_t)pUVar22->max_length),
           pIVar26 != (Il2CppObject *)0x0)) {
          fVar41 = 0.0;
          for (uVar27 = 0; (int)uVar27 < *(int *)&pIVar26[1].monitor; uVar27 = uVar27 + 1) {
            pUVar22 = (source->fields).Vertices;
            if (pUVar22 == (UnityEngine_Vector3_array *)0x0) goto label_1821ac5fa;
            if ((uint)pUVar22->max_length <= uVar27) goto label_1821ac5f4;
            if (cut == (Characters_TitanLimbMesh_CutPlane_o *)0x0) goto label_1821ac5fa;
            if (*(uint *)&pIVar26[1].monitor <= uVar27) {
label_1821ac606:
              ThrowIndexOutOfRangeException();
            }
            pUVar23 = (source->fields).Weights;
            *(float *)((longlong)&pIVar26[2].klass + (longlong)(int)uVar27 * 4) =
                 (pUVar22->m_Items[(int)uVar27].fields.y - (cut->fields).Origin.fields.y) *
                 (cut->fields).Normal.fields.y +
                 (pUVar22->m_Items[(int)uVar27].fields.x - (cut->fields).Origin.fields.x) *
                 (cut->fields).Normal.fields.x +
                 (pUVar22->m_Items[(int)uVar27].fields.z - (cut->fields).Origin.fields.z) *
                 (cut->fields).Normal.fields.z;
            if (pUVar23 == (UnityEngine_BoneWeight_array *)0x0) {
              ThrowNullReferenceException();
            }
            if ((uint)pUVar23->max_length <= uVar27) goto label_1821ac606;
            pUVar1 = pUVar23->m_Items + (int)uVar27;
            local_f8[0].m_Weight0 = (pUVar1->fields).m_Weight0;
            local_f8[0].m_Weight1 = (pUVar1->fields).m_Weight1;
            local_f8[0].m_Weight2 = (pUVar1->fields).m_Weight2;
            local_f8[0].m_Weight3 = (pUVar1->fields).m_Weight3;
            pUVar15 = &pUVar23->m_Items[(int)uVar27].fields;
            local_f8[0].m_BoneIndex0 = pUVar15->m_BoneIndex0;
            local_f8[0].m_BoneIndex1 = pUVar15->m_BoneIndex1;
            local_f8[0].m_BoneIndex2 = pUVar15->m_BoneIndex2;
            local_f8[0].m_BoneIndex3 = pUVar15->m_BoneIndex3;
            bVar21 = Characters_TitanLimbMesh_CutPlane__ContainsBone
                               (cut,(UnityEngine_BoneWeight_o *)local_f8,(MethodInfo *)0x0);
            if (bVar21) {
              if (*(uint *)&pIVar26[1].monitor <= uVar27) goto label_1821ac5f4;
              fVar40 = *(float *)((longlong)&pIVar26[2].klass + (longlong)(int)uVar27 * 4);
              if (fVar41 <= fVar40) {
                fVar41 = fVar40;
              }
            }
          }
          value = (UnityEngine_Vector2_array *)
                  SZArrayNew(TypeInfo_UnityEngine_Vector2_array,*(uint32_t *)&pIVar26[1].monitor);
          value_00 = (UnityEngine_Vector2_array *)
                     SZArrayNew(TypeInfo_UnityEngine_Vector2_array,*(uint32_t *)&pIVar26[1].monitor);
          if (cut != (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
            fVar40 = (cut->fields).Normal.fields.z;
            uVar6._0_4_ = (cut->fields).Normal.fields.x;
            uVar6._4_4_ = (cut->fields).Normal.fields.y;
            local_130 = uVar6;
            if (0.9 <= ABS((cut->fields).Normal.fields.y)) {
              if (Il2CppMethodInitialized_1843445b8 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_1843445b8 = '\x01';
              }
              pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar38 = (pUVar10->rightVector).fields.x;
              fVar32 = (pUVar10->rightVector).fields.y;
              fVar34 = (pUVar10->rightVector).fields.z;
            }
            else {
              if (Il2CppMethodInitialized_18433de5c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5c = '\x01';
              }
              pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar38 = (pUVar10->upVector).fields.x;
              fVar32 = (pUVar10->upVector).fields.y;
              fVar34 = (pUVar10->upVector).fields.z;
            }
            fVar39 = fVar34 * local_130._4_4_ - fVar32 * fVar40;
            fVar40 = fVar38 * fVar40 - fVar34 * (float)(undefined4)uVar6;
            fVar38 = fVar32 * (float)(undefined4)uVar6 - fVar38 * local_130._4_4_;
            local_130 = CONCAT44(fVar40,fVar39);
            local_128 = fVar38;
            if (Il2CppMethodInitialized_18433de5f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433de5f = '\x01';
            }
            fVar32 = (float)il2cpp_runtime_helper_180546a40(&local_130);
            if (fVar32 <= 1e-05) {
              pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar39 = (pUVar10->zeroVector).fields.x;
              fVar40 = (pUVar10->zeroVector).fields.y;
              fVar38 = (pUVar10->zeroVector).fields.z;
            }
            else {
              fVar39 = fVar39 / fVar32;
              fVar40 = fVar40 / fVar32;
              fVar38 = fVar38 / fVar32;
            }
            fVar32 = (cut->fields).Normal.fields.z;
            fVar34 = (cut->fields).Normal.fields.x;
            fVar3 = (cut->fields).Normal.fields.y;
            if (value != (UnityEngine_Vector2_array *)0x0) {
              for (uVar27 = 0; (int)uVar27 < (int)value->max_length; uVar27 = uVar27 + 1) {
                if (*(uint *)&pIVar26[1].monitor <= uVar27) goto label_1821ac5f4;
                fVar33 = 0.0001;
                if (0.0001 < fVar41) {
                  fVar33 = fVar41;
                }
                if ((uint)value->max_length <= uVar27) goto label_1821ac5f4;
                value->m_Items[(int)uVar27].fields.x =
                     *(float *)((longlong)&pIVar26[2].klass + (longlong)(int)uVar27 * 4) / fVar33;
                value->m_Items[(int)uVar27].fields.y = 0.0;
                pUVar22 = (source->fields).Vertices;
                if (pUVar22 == (UnityEngine_Vector3_array *)0x0) goto label_1821ac5fa;
                if ((uint)pUVar22->max_length <= uVar27) goto label_1821ac5f4;
                fVar37 = pUVar22->m_Items[(int)uVar27].fields.x - (cut->fields).Origin.fields.x;
                fVar35 = pUVar22->m_Items[(int)uVar27].fields.y - (cut->fields).Origin.fields.y;
                fVar36 = pUVar22->m_Items[(int)uVar27].fields.z - (cut->fields).Origin.fields.z;
                fVar33 = fVar41;
                if (fVar41 <= 0.0001) {
                  fVar33 = 0.0001;
                }
                if (value_00 == (UnityEngine_Vector2_array *)0x0) goto label_1821ac5fa;
                if ((uint)value_00->max_length <= uVar27) goto label_1821ac5f4;
                value_00->m_Items[(int)uVar27].fields.x =
                     (fVar40 * fVar35 + fVar39 * fVar37 + fVar38 * fVar36) / fVar33;
                value_00->m_Items[(int)uVar27].fields.y =
                     ((fVar39 * fVar32 - fVar38 * fVar34) * fVar35 +
                      (fVar38 * fVar3 - fVar40 * fVar32) * fVar37 +
                     (fVar40 * fVar34 - fVar39 * fVar3) * fVar36) / fVar33;
              }
              pUVar24 = (__this->fields).Mesh;
              if (pUVar24 != (UnityEngine_Mesh_o *)0x0) {
                UnityEngine_Mesh__set_uv2(pUVar24,value,(MethodInfo *)0x0);
                pUVar24 = (__this->fields).Mesh;
                if (pUVar24 != (UnityEngine_Mesh_o *)0x0) {
                  UnityEngine_Mesh__set_uv3(pUVar24,value_00,(MethodInfo *)0x0);
                  uVar27 = 0;
                  while (pSVar11 = (source->fields).Triangles, pSVar11 != (System_Int32_array_array *)0x0) {
                    if ((int)pSVar11->max_length <= (int)uVar27) {
                      pUVar22 = (__this->fields)._centers;
                      if (pUVar22 != (UnityEngine_Vector3_array *)0x0) {
                        if ((int)pUVar22->max_length == 0) goto label_1821ac5f4;
                        fVar38 = (cut->fields).Origin.fields.y;
                        fVar40 = (cut->fields).Origin.fields.z;
                        pUVar22->m_Items[0].fields.x = (cut->fields).Origin.fields.x;
                        pUVar22->m_Items[0].fields.y = fVar38;
                        pUVar22->m_Items[0].fields.z = fVar40;
                        pUVar23 = (__this->fields)._weights;
                        local_120._LastPressedButton_k__BackingField = 0;
                        local_120._buttonsState.fields._state =
                             (UnityEngine_InputForUI_PointerEvent_ButtonsState_Fields)0x0;
                        local_120._NextPressTime_k__BackingField.fields.Value =
                             (Unity_IntegerTime_DiscreteTime_Fields)0;
                        local_120._ClickCount_k__BackingField = 0;
                        local_120._LastPosition_k__BackingField.fields.x = 0.0;
                        local_120._LastPosition_k__BackingField.fields.y = 0.0;
                        local_120._LastDisplayIndex_k__BackingField = 0;
                        UnityEngine_TextCore_Glyph__set_index
                                  ((UnityEngine_InputForUI_PointerState_o *)&local_120,
                                   (cut->fields).ParentBone,(MethodInfo *)0x0);
                        UnityEngine_TextCore_LowLevel_MarkPositionAdjustment__set_xPositionAdjustment
                                  ((UnityEngine_TextCore_LowLevel_MarkPositionAdjustment_o *)&local_120,1.0,
                                   (MethodInfo *)0x0);
                        if (pUVar23 != (UnityEngine_BoneWeight_array *)0x0) {
                          if ((int)pUVar23->max_length == 0) goto label_1821ac5f4;
                          pUVar23->m_Items[0].fields.m_Weight0 =
                               (float)local_120._LastPressedButton_k__BackingField;
                          pUVar23->m_Items[0].fields.m_Weight1 = (float)local_120._buttonsState.fields._state;
                          *(Unity_IntegerTime_DiscreteTime_Fields *)&pUVar23->m_Items[0].fields.m_Weight2 =
                               local_120._NextPressTime_k__BackingField.fields.Value;
                          pUVar23->m_Items[0].fields.m_BoneIndex0 = local_120._ClickCount_k__BackingField;
                          pUVar23->m_Items[0].fields.m_BoneIndex1 =
                               (int32_t)local_120._LastPosition_k__BackingField.fields.x;
                          pUVar23->m_Items[0].fields.m_BoneIndex2 =
                               (int32_t)local_120._LastPosition_k__BackingField.fields.y;
                          pUVar23->m_Items[0].fields.m_BoneIndex3 =
                               local_120._LastDisplayIndex_k__BackingField;
                          pUVar22 = (__this->fields)._centers;
                          if (pUVar22 != (UnityEngine_Vector3_array *)0x0) {
                            uVar27 = 1;
                            goto label_1821ac300;
                          }
                        }
                      }
                      break;
                    }
                    triangles = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
                    System_Collections_Generic_List_int____ctor
                              ((System_Collections_Generic_LowLevelList_T__o *)triangles,
                               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
                    pSVar11 = (source->fields).Triangles;
                    if (pSVar11 == (System_Int32_array_array *)0x0) break;
                    if ((uint)pSVar11->max_length <= uVar27) goto label_1821ac5f4;
                    pSVar12 = pSVar11->m_Items[(int)uVar27];
                    uVar28 = 0;
                    if (pSVar12 == (System_Int32_array *)0x0) break;
                    for (; uVar30 = (uint)pSVar12->max_length, (int)uVar28 < (int)uVar30; uVar28 = uVar28 + 3)
                    {
                      if (((uVar30 <= uVar28) || ((uint)pSVar12->max_length <= uVar28 + 1)) ||
                         ((uint)pSVar12->max_length <= uVar28 + 2)) {
label_1821ac62a:
                        ThrowIndexOutOfRangeException();
                      }
                      pUVar23 = (source->fields).Weights;
                      if (pUVar23 == (UnityEngine_BoneWeight_array *)0x0) {
                        ThrowNullReferenceException();
                      }
                      uVar30 = pSVar12->m_Items[(int)uVar28];
                      if ((uint)pUVar23->max_length <= uVar30) goto label_1821ac62a;
                      uVar29 = pSVar12->m_Items[(longlong)(int)uVar28 + 1];
                      uVar9 = pSVar12->m_Items[(longlong)(int)uVar28 + 2];
                      pUVar1 = pUVar23->m_Items + (int)uVar30;
                      local_f8[0].m_Weight0 = (pUVar1->fields).m_Weight0;
                      local_f8[0].m_Weight1 = (pUVar1->fields).m_Weight1;
                      local_f8[0].m_Weight2 = (pUVar1->fields).m_Weight2;
                      local_f8[0].m_Weight3 = (pUVar1->fields).m_Weight3;
                      pUVar15 = &pUVar23->m_Items[(int)uVar30].fields;
                      local_f8[0].m_BoneIndex0 = pUVar15->m_BoneIndex0;
                      local_f8[0].m_BoneIndex1 = pUVar15->m_BoneIndex1;
                      local_f8[0].m_BoneIndex2 = pUVar15->m_BoneIndex2;
                      local_f8[0].m_BoneIndex3 = pUVar15->m_BoneIndex3;
                      bVar21 = Characters_TitanLimbMesh_CutPlane__ContainsBone
                                         (cut,(UnityEngine_BoneWeight_o *)local_f8,(MethodInfo *)0x0);
                      if (bVar21) {
label_1821ac1c1:
                        if (triangles == (System_Collections_Generic_List_int__o *)0x0) goto label_1821ac5fa;
                        il2cpp_runtime_helper_180026690(triangles,uVar30,MethodInfo_System_Collections_Generic_List_int_Add);
                        il2cpp_runtime_helper_180026690(triangles,uVar29,MethodInfo_System_Collections_Generic_List_int_Add);
                        il2cpp_runtime_helper_180026690(triangles,uVar9);
                      }
                      else {
                        pUVar23 = (source->fields).Weights;
                        if (pUVar23 == (UnityEngine_BoneWeight_array *)0x0) {
                          ThrowNullReferenceException();
                        }
                        if ((uint)pUVar23->max_length <= uVar29) {
                          ThrowIndexOutOfRangeException();
                        }
                        pUVar1 = pUVar23->m_Items + (int)uVar29;
                        local_f8[0].m_Weight0 = (pUVar1->fields).m_Weight0;
                        local_f8[0].m_Weight1 = (pUVar1->fields).m_Weight1;
                        local_f8[0].m_Weight2 = (pUVar1->fields).m_Weight2;
                        local_f8[0].m_Weight3 = (pUVar1->fields).m_Weight3;
                        pUVar15 = &pUVar23->m_Items[(int)uVar29].fields;
                        local_f8[0].m_BoneIndex0 = pUVar15->m_BoneIndex0;
                        local_f8[0].m_BoneIndex1 = pUVar15->m_BoneIndex1;
                        local_f8[0].m_BoneIndex2 = pUVar15->m_BoneIndex2;
                        local_f8[0].m_BoneIndex3 = pUVar15->m_BoneIndex3;
                        bVar21 = Characters_TitanLimbMesh_CutPlane__ContainsBone
                                           (cut,(UnityEngine_BoneWeight_o *)local_f8,(MethodInfo *)0x0);
                        if (bVar21) goto label_1821ac1c1;
                        pUVar23 = (source->fields).Weights;
                        if (pUVar23 == (UnityEngine_BoneWeight_array *)0x0) {
                          ThrowNullReferenceException();
                        }
                        if ((uint)pUVar23->max_length <= uVar9) {
                          ThrowIndexOutOfRangeException();
                        }
                        pUVar1 = pUVar23->m_Items + (int)uVar9;
                        local_f8[0].m_Weight0 = (pUVar1->fields).m_Weight0;
                        local_f8[0].m_Weight1 = (pUVar1->fields).m_Weight1;
                        local_f8[0].m_Weight2 = (pUVar1->fields).m_Weight2;
                        local_f8[0].m_Weight3 = (pUVar1->fields).m_Weight3;
                        pUVar15 = &pUVar23->m_Items[(int)uVar9].fields;
                        local_f8[0].m_BoneIndex0 = pUVar15->m_BoneIndex0;
                        local_f8[0].m_BoneIndex1 = pUVar15->m_BoneIndex1;
                        local_f8[0].m_BoneIndex2 = pUVar15->m_BoneIndex2;
                        local_f8[0].m_BoneIndex3 = pUVar15->m_BoneIndex3;
                        bVar21 = Characters_TitanLimbMesh_CutPlane__ContainsBone
                                           (cut,(UnityEngine_BoneWeight_o *)local_f8,(MethodInfo *)0x0);
                        if (bVar21) goto label_1821ac1c1;
                      }
                    }
                    pUVar24 = (__this->fields).Mesh;
                    if (pUVar24 == (UnityEngine_Mesh_o *)0x0) break;
                    UnityEngine_Mesh__SetTriangles_2eec840(pUVar24,triangles,uVar27,false,(MethodInfo *)0x0);
                    uVar27 = uVar27 + 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto label_1821ac5fa;
label_1821ac300:
  do {
    if ((int)pUVar22->max_length <= (int)uVar27) {
      return;
    }
    pUVar22 = (__this->fields)._centers;
    if (pUVar22 == (UnityEngine_Vector3_array *)0x0) break;
    iVar16 = pUVar22->max_length;
    uVar28 = 0;
    iVar31 = 0;
    uVar29 = 0;
    fVar40 = 3.4028235e+38;
    uVar30 = 0;
    if (*(int *)&pIVar26[1].monitor < 1) {
label_1821ac4a4:
      pUVar22 = (source->fields).Vertices;
      if (pUVar22 == (UnityEngine_Vector3_array *)0x0) break;
      if ((uint)pUVar22->max_length <= uVar28) {
label_1821ac5f4:
        ThrowIndexOutOfRangeException();
      }
      fVar40 = pUVar22->m_Items[(int)uVar28].fields.x;
      fVar38 = pUVar22->m_Items[(int)uVar28].fields.y;
      fVar32 = pUVar22->m_Items[(int)uVar28].fields.z;
    }
    else {
      do {
        pUVar23 = (source->fields).Weights;
        if (pUVar23 == (UnityEngine_BoneWeight_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((uint)pUVar23->max_length <= uVar29) {
          ThrowIndexOutOfRangeException();
        }
        pUVar1 = pUVar23->m_Items + (int)uVar29;
        local_f8[0].m_Weight0 = (pUVar1->fields).m_Weight0;
        local_f8[0].m_Weight1 = (pUVar1->fields).m_Weight1;
        local_f8[0].m_Weight2 = (pUVar1->fields).m_Weight2;
        local_f8[0].m_Weight3 = (pUVar1->fields).m_Weight3;
        pUVar15 = &pUVar23->m_Items[(int)uVar29].fields;
        local_f8[0].m_BoneIndex0 = pUVar15->m_BoneIndex0;
        local_f8[0].m_BoneIndex1 = pUVar15->m_BoneIndex1;
        local_f8[0].m_BoneIndex2 = pUVar15->m_BoneIndex2;
        local_f8[0].m_BoneIndex3 = pUVar15->m_BoneIndex3;
        bVar21 = Characters_TitanLimbMesh_CutPlane__ContainsBone
                           (cut,(UnityEngine_BoneWeight_o *)local_f8,(MethodInfo *)0x0);
        uVar28 = uVar30;
        if (bVar21) {
          if (*(uint *)&pIVar26[1].monitor <= uVar29) goto label_1821ac5f4;
          fVar32 = ABS(*(float *)((longlong)&pIVar26[2].klass + (longlong)(int)uVar29 * 4) -
                       ((float)(int)uVar27 * fVar41) / (float)((int)iVar16 + -1));
          fVar38 = fVar40;
          if (fVar32 < fVar40) {
            fVar38 = fVar32;
          }
          uVar28 = uVar29;
          if (fVar40 <= fVar32) {
            uVar28 = uVar30;
          }
          fVar40 = fVar38;
          if (fVar32 < fVar41 / 12.0) {
            pUVar22 = (__this->fields)._centers;
            if (pUVar22 == (UnityEngine_Vector3_array *)0x0) goto label_1821ac5fa;
            if ((uint)pUVar22->max_length <= uVar27) goto label_1821ac5f4;
            pUVar13 = (source->fields).Vertices;
            if (pUVar13 == (UnityEngine_Vector3_array *)0x0) goto label_1821ac5fa;
            if ((uint)pUVar13->max_length <= uVar29) goto label_1821ac5f4;
            iVar31 = iVar31 + 1;
            uVar4 = pUVar22->m_Items[(int)uVar27].fields.x;
            uVar7 = pUVar22->m_Items[(int)uVar27].fields.y;
            uVar5 = pUVar13->m_Items[(int)uVar29].fields.x;
            uVar8 = pUVar13->m_Items[(int)uVar29].fields.y;
            pUVar22->m_Items[(int)uVar27].fields.z =
                 pUVar13->m_Items[(int)uVar29].fields.z + pUVar22->m_Items[(int)uVar27].fields.z;
            pUVar22->m_Items[(int)uVar27].fields.x = (float)uVar5 + (float)uVar4;
            pUVar22->m_Items[(int)uVar27].fields.y = (float)uVar8 + (float)uVar7;
          }
        }
        uVar29 = uVar29 + 1;
        uVar30 = uVar28;
      } while ((int)uVar29 < *(int *)&pIVar26[1].monitor);
      if (iVar31 < 1) goto label_1821ac4a4;
      pUVar22 = (__this->fields)._centers;
      if (pUVar22 == (UnityEngine_Vector3_array *)0x0) break;
      if ((uint)pUVar22->max_length <= uVar27) goto label_1821ac5f4;
      fVar32 = (float)iVar31;
      fVar40 = pUVar22->m_Items[(int)uVar27].fields.x / fVar32;
      fVar38 = pUVar22->m_Items[(int)uVar27].fields.y / fVar32;
      fVar32 = pUVar22->m_Items[(int)uVar27].fields.z / fVar32;
    }
    pUVar22 = (__this->fields)._centers;
    if (pUVar22 == (UnityEngine_Vector3_array *)0x0) break;
    if ((uint)pUVar22->max_length <= uVar27) goto label_1821ac5f4;
    pUVar22->m_Items[(int)uVar27].fields.x = fVar40;
    pUVar22->m_Items[(int)uVar27].fields.y = fVar38;
    pUVar22->m_Items[(int)uVar27].fields.z = fVar32;
    pUVar23 = (source->fields).Weights;
    if (pUVar23 == (UnityEngine_BoneWeight_array *)0x0) break;
    if ((uint)pUVar23->max_length <= uVar28) goto label_1821ac5f4;
    pUVar14 = (__this->fields)._weights;
    if (pUVar14 == (UnityEngine_BoneWeight_array *)0x0) break;
    if ((uint)pUVar14->max_length <= uVar27) goto label_1821ac5f4;
    pUVar1 = pUVar23->m_Items + (int)uVar28;
    fVar40 = (pUVar1->fields).m_Weight1;
    fVar38 = (pUVar1->fields).m_Weight2;
    fVar32 = (pUVar1->fields).m_Weight3;
    pUVar15 = &pUVar23->m_Items[(int)uVar28].fields;
    iVar17 = pUVar15->m_BoneIndex0;
    iVar18 = pUVar15->m_BoneIndex1;
    iVar19 = pUVar15->m_BoneIndex2;
    iVar20 = pUVar15->m_BoneIndex3;
    pUVar2 = pUVar14->m_Items + (int)uVar27;
    (pUVar2->fields).m_Weight0 = (pUVar1->fields).m_Weight0;
    (pUVar2->fields).m_Weight1 = fVar40;
    (pUVar2->fields).m_Weight2 = fVar38;
    (pUVar2->fields).m_Weight3 = fVar32;
    pUVar15 = &pUVar14->m_Items[(int)uVar27].fields;
    pUVar15->m_BoneIndex0 = iVar17;
    pUVar15->m_BoneIndex1 = iVar18;
    pUVar15->m_BoneIndex2 = iVar19;
    pUVar15->m_BoneIndex3 = iVar20;
    pUVar22 = (__this->fields)._centers;
    uVar27 = uVar27 + 1;
  } while (pUVar22 != (UnityEngine_Vector3_array *)0x0);
label_1821ac5fa:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.RegrowthMesh$$GetFront
// il2cpp: UnityEngine_Vector3_o Characters_TitanLimbMesh_RegrowthMesh__GetFront (Characters_TitanLimbMesh_RegrowthMesh_o* __this, float progress, UnityEngine_Transform_array* bones, UnityEngine_Matrix4x4_array* bindposes, const MethodInfo* method);
// 0x1821ab230

UnityEngine_Vector3_o *
Characters_TitanLimbMesh_RegrowthMesh__GetFront
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_TitanLimbMesh_RegrowthMesh_o *__this,
          float progress,UnityEngine_Transform_array *bones,UnityEngine_Matrix4x4_array *bindposes,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_array *pUVar5;
  int index;
  int iVar6;
  UnityEngine_Vector3_o *pUVar7;
  MethodInfo *method_00;
  double dVar8;
  float fVar9;
  UnityEngine_Vector3_o local_58 [6];
  
  pUVar5 = (__this->fields)._centers;
  if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
    fVar9 = (float)((int)pUVar5->max_length + -1) * progress;
    method_00 = (MethodInfo *)__this;
    if (Il2CppMethodInitialized_18433df26 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433df26 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    dVar8 = il2cpp_runtime_helper_1804f4690((double)fVar9,method_00);
    pUVar5 = (__this->fields)._centers;
    if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
      iVar6 = (int)pUVar5->max_length + -2;
      index = (int)dVar8;
      if (iVar6 <= (int)dVar8) {
        index = iVar6;
      }
      pUVar7 = Characters_TitanLimbMesh_RegrowthMesh__Skin
                         (local_58,__this,index,bones,bindposes,(MethodInfo *)0x0);
      fVar1 = (pUVar7->fields).x;
      fVar2 = (pUVar7->fields).y;
      fVar3 = (pUVar7->fields).z;
      pUVar7 = Characters_TitanLimbMesh_RegrowthMesh__Skin
                         (local_58,__this,index + 1,bones,bindposes,(MethodInfo *)0x0);
      fVar9 = fVar9 - (float)index;
      if (fVar9 < 0.0) {
        fVar9 = 0.0;
      }
      else if (1.0 < fVar9) {
        fVar9 = 1.0;
      }
      fVar4 = (pUVar7->fields).z;
      (__return_storage_ptr__->fields).x = ((pUVar7->fields).x - fVar1) * fVar9 + fVar1;
      fVar1 = (pUVar7->fields).y;
      (__return_storage_ptr__->fields).z = (fVar4 - fVar3) * fVar9 + fVar3;
      (__return_storage_ptr__->fields).y = (fVar1 - fVar2) * fVar9 + fVar2;
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.RegrowthMesh$$Skin
// il2cpp: UnityEngine_Vector3_o Characters_TitanLimbMesh_RegrowthMesh__Skin (Characters_TitanLimbMesh_RegrowthMesh_o* __this, int32_t index, UnityEngine_Transform_array* bones, UnityEngine_Matrix4x4_array* bindposes, const MethodInfo* method);
// 0x1821ab3f0

UnityEngine_Vector3_o *
Characters_TitanLimbMesh_RegrowthMesh__Skin
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_TitanLimbMesh_RegrowthMesh_o *__this,
          int32_t index,UnityEngine_Transform_array *bones,UnityEngine_Matrix4x4_array *bindposes,
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
  UnityEngine_BoneWeight_array *pUVar13;
  UnityEngine_Vector3_array *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_BoneWeight_Fields *pUVar16;
  uint uVar17;
  UnityEngine_Vector3_o *pUVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Vector3_o local_108;
  UnityEngine_Vector3_o local_f8;
  undefined1 local_e8 [8];
  UnityEngine_TextCore_LowLevel_MarkPositionAdjustment_Fields UStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  pUVar13 = (__this->fields)._weights;
  local_e8._0_4_ = 0.0;
  local_e8._4_4_ = 0.0;
  UStack_e0.m_XPositionAdjustment = 0.0;
  UStack_e0.m_YPositionAdjustment = 0.0;
  local_d8._0_4_ = 0.0;
  local_d8._4_4_ = 0.0;
  uStack_d0._0_4_ = 0.0;
  uStack_d0._4_4_ = 0.0;
  if (pUVar13 != (UnityEngine_BoneWeight_array *)0x0) {
    if ((uint)index < (uint)pUVar13->max_length) {
      pUVar14 = (__this->fields)._centers;
      local_e8 = *(undefined1 (*) [8])(pUVar13->m_Items + index);
      UStack_e0 = ((UnityEngine_TextCore_LowLevel_MarkPositionAdjustment_Fields *)(pUVar13->m_Items + index))
                  [1];
      pUVar16 = &pUVar13->m_Items[index].fields;
      local_d8._0_4_ = (float)pUVar16->m_BoneIndex0;
      local_d8._4_4_ = (float)pUVar16->m_BoneIndex1;
      uStack_d0._0_4_ = (float)pUVar16->m_BoneIndex2;
      uStack_d0._4_4_ = (float)pUVar16->m_BoneIndex3;
      if (pUVar14 == (UnityEngine_Vector3_array *)0x0) goto label_1821ab9c4;
      if ((uint)index < (uint)pUVar14->max_length) {
        fVar1 = pUVar14->m_Items[index].fields.x;
        fVar2 = pUVar14->m_Items[index].fields.y;
        fVar3 = pUVar14->m_Items[index].fields.z;
        uVar17 = UnityEngine_TextCore_Glyph__get_index((UnityEngine_BoneWeight_o *)local_e8,(MethodInfo *)0x0)
        ;
        if (bones == (UnityEngine_Transform_array *)0x0) goto label_1821ab9c4;
        if (uVar17 < (uint)bones->max_length) {
          pUVar15 = bones->m_Items[(int)uVar17];
          uVar17 = UnityEngine_TextCore_Glyph__get_index
                             ((UnityEngine_BoneWeight_o *)local_e8,(MethodInfo *)0x0);
          if (bindposes == (UnityEngine_Matrix4x4_array *)0x0) goto label_1821ab9c4;
          if (uVar17 < (uint)bindposes->max_length) {
            if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_1821ab9c4;
            local_108.fields.x =
                 fVar2 * bindposes->m_Items[(int)uVar17].fields.m01 +
                 fVar1 * bindposes->m_Items[(int)uVar17].fields.m00 +
                 fVar3 * bindposes->m_Items[(int)uVar17].fields.m02 +
                 bindposes->m_Items[(int)uVar17].fields.m03;
            local_108.fields.y =
                 fVar2 * bindposes->m_Items[(int)uVar17].fields.m11 +
                 fVar1 * bindposes->m_Items[(int)uVar17].fields.m10 +
                 fVar3 * bindposes->m_Items[(int)uVar17].fields.m12 +
                 bindposes->m_Items[(int)uVar17].fields.m13;
            local_108.fields.z =
                 fVar2 * bindposes->m_Items[(int)uVar17].fields.m21 +
                 fVar1 * bindposes->m_Items[(int)uVar17].fields.m20 +
                 fVar3 * bindposes->m_Items[(int)uVar17].fields.m22 +
                 bindposes->m_Items[(int)uVar17].fields.m23;
            pUVar18 = UnityEngine_Transform__TransformPoint(&local_f8,pUVar15,&local_108,(MethodInfo *)0x0);
            fVar4 = (pUVar18->fields).x;
            fVar5 = (pUVar18->fields).y;
            fVar6 = (pUVar18->fields).z;
            fVar19 = UnityEngine_TextCore_LowLevel_MarkPositionAdjustment__get_xPositionAdjustment
                               ((UnityEngine_TextCore_LowLevel_MarkPositionAdjustment_o *)local_e8,
                                (MethodInfo *)0x0);
            uVar17 = ExitGames_Client_Photon_StreamBuffer__get_Length
                               ((UnityEngine_RenderTextureDescriptor_o *)local_e8,(MethodInfo *)0x0);
            if (uVar17 < (uint)bones->max_length) {
              pUVar15 = bones->m_Items[(int)uVar17];
              uVar17 = ExitGames_Client_Photon_StreamBuffer__get_Length
                                 ((UnityEngine_RenderTextureDescriptor_o *)local_e8,(MethodInfo *)0x0);
              if (uVar17 < (uint)bindposes->max_length) {
                if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_1821ab9c4;
                local_108.fields.x =
                     fVar2 * bindposes->m_Items[(int)uVar17].fields.m01 +
                     fVar1 * bindposes->m_Items[(int)uVar17].fields.m00 +
                     fVar3 * bindposes->m_Items[(int)uVar17].fields.m02 +
                     bindposes->m_Items[(int)uVar17].fields.m03;
                local_108.fields.y =
                     fVar2 * bindposes->m_Items[(int)uVar17].fields.m11 +
                     fVar1 * bindposes->m_Items[(int)uVar17].fields.m10 +
                     fVar3 * bindposes->m_Items[(int)uVar17].fields.m12 +
                     bindposes->m_Items[(int)uVar17].fields.m13;
                local_108.fields.z =
                     fVar2 * bindposes->m_Items[(int)uVar17].fields.m21 +
                     fVar1 * bindposes->m_Items[(int)uVar17].fields.m20 +
                     fVar3 * bindposes->m_Items[(int)uVar17].fields.m22 +
                     bindposes->m_Items[(int)uVar17].fields.m23;
                pUVar18 = UnityEngine_Transform__TransformPoint
                                    (&local_f8,pUVar15,&local_108,(MethodInfo *)0x0);
                fVar7 = (pUVar18->fields).x;
                fVar8 = (pUVar18->fields).y;
                fVar9 = (pUVar18->fields).z;
                fVar20 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                                   ((UnityEngine_AI_NavMeshBuildSettings_o *)local_e8,(MethodInfo *)0x0);
                uVar17 = UnityEngine_AdaptivePerformance_RunningAverage__GetNumValues
                                   ((UnityEngine_TextCore_Text_TextProcessingStack_float__o *)local_e8,
                                    (MethodInfo_B3E0C0 *)0x0);
                if (uVar17 < (uint)bones->max_length) {
                  pUVar15 = bones->m_Items[(int)uVar17];
                  uVar17 = UnityEngine_AdaptivePerformance_RunningAverage__GetNumValues
                                     ((UnityEngine_TextCore_Text_TextProcessingStack_float__o *)local_e8,
                                      (MethodInfo_B3E0C0 *)0x0);
                  if (uVar17 < (uint)bindposes->max_length) {
                    if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_1821ab9c4;
                    local_108.fields.x =
                         fVar2 * bindposes->m_Items[(int)uVar17].fields.m01 +
                         fVar1 * bindposes->m_Items[(int)uVar17].fields.m00 +
                         fVar3 * bindposes->m_Items[(int)uVar17].fields.m02 +
                         bindposes->m_Items[(int)uVar17].fields.m03;
                    local_108.fields.y =
                         fVar2 * bindposes->m_Items[(int)uVar17].fields.m11 +
                         fVar1 * bindposes->m_Items[(int)uVar17].fields.m10 +
                         fVar3 * bindposes->m_Items[(int)uVar17].fields.m12 +
                         bindposes->m_Items[(int)uVar17].fields.m13;
                    local_108.fields.z =
                         fVar2 * bindposes->m_Items[(int)uVar17].fields.m21 +
                         fVar1 * bindposes->m_Items[(int)uVar17].fields.m20 +
                         fVar3 * bindposes->m_Items[(int)uVar17].fields.m22 +
                         bindposes->m_Items[(int)uVar17].fields.m23;
                    pUVar18 = UnityEngine_Transform__TransformPoint
                                        (&local_f8,pUVar15,&local_108,(MethodInfo *)0x0);
                    fVar10 = (pUVar18->fields).x;
                    fVar11 = (pUVar18->fields).y;
                    fVar12 = (pUVar18->fields).z;
                    fVar21 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                                       ((UnityEngine_AI_NavMeshBuildSettings_o *)local_e8,(MethodInfo *)0x0);
                    uVar17 = UnityEngine_TreePrototype__get_navMeshLod
                                       ((UnityEngine_BoneWeight_o *)local_e8,(MethodInfo *)0x0);
                    if (uVar17 < (uint)bones->max_length) {
                      pUVar15 = bones->m_Items[(int)uVar17];
                      uVar17 = UnityEngine_TreePrototype__get_navMeshLod
                                         ((UnityEngine_BoneWeight_o *)local_e8,(MethodInfo *)0x0);
                      if (uVar17 < (uint)bindposes->max_length) {
                        if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                          local_108.fields.x =
                               fVar2 * bindposes->m_Items[(int)uVar17].fields.m01 +
                               fVar1 * bindposes->m_Items[(int)uVar17].fields.m00 +
                               fVar3 * bindposes->m_Items[(int)uVar17].fields.m02 +
                               bindposes->m_Items[(int)uVar17].fields.m03;
                          local_108.fields.y =
                               fVar2 * bindposes->m_Items[(int)uVar17].fields.m11 +
                               fVar1 * bindposes->m_Items[(int)uVar17].fields.m10 +
                               fVar3 * bindposes->m_Items[(int)uVar17].fields.m12 +
                               bindposes->m_Items[(int)uVar17].fields.m13;
                          local_108.fields.z =
                               fVar2 * bindposes->m_Items[(int)uVar17].fields.m21 +
                               fVar1 * bindposes->m_Items[(int)uVar17].fields.m20 +
                               fVar3 * bindposes->m_Items[(int)uVar17].fields.m22 +
                               bindposes->m_Items[(int)uVar17].fields.m23;
                          pUVar18 = UnityEngine_Transform__TransformPoint
                                              (&local_f8,pUVar15,&local_108,(MethodInfo *)0x0);
                          fVar1 = (pUVar18->fields).x;
                          fVar2 = (pUVar18->fields).y;
                          fVar3 = (pUVar18->fields).z;
                          fVar22 = UnityEngine_TextCore_LowLevel_GlyphValueRecord__get_yAdvance
                                             ((UnityEngine_TextCore_LowLevel_GlyphValueRecord_o *)local_e8,
                                              (MethodInfo *)0x0);
                          (__return_storage_ptr__->fields).x =
                               fVar1 * fVar22 + fVar10 * fVar21 + fVar7 * fVar20 + fVar4 * fVar19;
                          (__return_storage_ptr__->fields).y =
                               fVar2 * fVar22 + fVar11 * fVar21 + fVar8 * fVar20 + fVar5 * fVar19;
                          (__return_storage_ptr__->fields).z =
                               fVar3 * fVar22 + fVar12 * fVar21 + fVar9 * fVar20 + fVar6 * fVar19;
                          return __return_storage_ptr__;
                        }
                        goto label_1821ab9c4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1821ab9c4:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutPlane$$.ctor
// il2cpp: void Characters_TitanLimbMesh_CutPlane___ctor (Characters_TitanLimbMesh_CutPlane_o* __this, Characters_TitanLimbMesh_CutPlane_o* source, const MethodInfo* method);
// 0x1821a89c0

void Characters_TitanLimbMesh_CutPlane___ctor
               (Characters_TitanLimbMesh_CutPlane_o *__this,Characters_TitanLimbMesh_CutPlane_o *source,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  
  if (Il2CppMethodInitialized_184346e87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_UnionWith);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    Il2CppMethodInitialized_184346e87 = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar3,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  (__this->fields).RemovedBones = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RemovedBones,pSVar3);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (source != (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
    fVar1 = (source->fields).Origin.fields.y;
    fVar2 = (source->fields).Origin.fields.z;
    pSVar3 = (__this->fields).RemovedBones;
    (__this->fields).Origin.fields.x = (source->fields).Origin.fields.x;
    (__this->fields).Origin.fields.y = fVar1;
    (__this->fields).Origin.fields.z = fVar2;
    fVar2 = (source->fields).Normal.fields.z;
    fVar1 = (source->fields).Normal.fields.x;
    (__this->fields).Normal.fields.y = -(source->fields).Normal.fields.y;
    (__this->fields).Normal.fields.x = -fVar1;
    (__this->fields).Normal.fields.z = -fVar2;
    (__this->fields).ParentBone = (source->fields).ParentBone;
    (__this->fields).BloodStainScale = (source->fields).BloodStainScale;
    if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      System_Collections_Generic_HashSet_int___UnionWith
                (pSVar3,(System_Collections_Generic_IEnumerable_T__o *)(source->fields).RemovedBones,
                 (MethodInfo_176B2F0 *)MethodInfo_System_Collections_Generic_HashSet_int_UnionWith);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutPlane$$Reversed
// il2cpp: Characters_TitanLimbMesh_CutPlane_o* Characters_TitanLimbMesh_CutPlane__Reversed (Characters_TitanLimbMesh_CutPlane_o* __this, const MethodInfo* method);
// 0x1821a8310

Characters_TitanLimbMesh_CutPlane_o *
Characters_TitanLimbMesh_CutPlane__Reversed(Characters_TitanLimbMesh_CutPlane_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Characters_TitanLimbMesh_CutPlane_o *__this_00;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  
  if (Il2CppMethodInitialized_184346e88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CutPlane);
    Il2CppMethodInitialized_184346e88 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutPlane);
  if (Il2CppMethodInitialized_184346e87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_UnionWith);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    Il2CppMethodInitialized_184346e87 = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar3,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  (__this_00->fields).RemovedBones = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).RemovedBones,pSVar3);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  if (__this != (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
    fVar1 = (__this->fields).Origin.fields.y;
    fVar2 = (__this->fields).Origin.fields.z;
    pSVar3 = (__this_00->fields).RemovedBones;
    (__this_00->fields).Origin.fields.x = (__this->fields).Origin.fields.x;
    (__this_00->fields).Origin.fields.y = fVar1;
    (__this_00->fields).Origin.fields.z = fVar2;
    fVar2 = (__this->fields).Normal.fields.z;
    fVar1 = (__this->fields).Normal.fields.x;
    (__this_00->fields).Normal.fields.y = -(__this->fields).Normal.fields.y;
    (__this_00->fields).Normal.fields.x = -fVar1;
    (__this_00->fields).Normal.fields.z = -fVar2;
    (__this_00->fields).ParentBone = (__this->fields).ParentBone;
    (__this_00->fields).BloodStainScale = (__this->fields).BloodStainScale;
    if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      System_Collections_Generic_HashSet_int___UnionWith
                (pSVar3,(System_Collections_Generic_IEnumerable_T__o *)(__this->fields).RemovedBones,
                 (MethodInfo_176B2F0 *)MethodInfo_System_Collections_Generic_HashSet_int_UnionWith);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutPlane$$.ctor
// il2cpp: void Characters_TitanLimbMesh_CutPlane___ctor (Characters_TitanLimbMesh_CutPlane_o* __this, UnityEngine_SkinnedMeshRenderer_o* renderer, UnityEngine_Transform_o* hand, float bloodStainScale, const MethodInfo* method);
// 0x1821a8440

void Characters_TitanLimbMesh_CutPlane___ctor_21a8440
               (Characters_TitanLimbMesh_CutPlane_o *__this,UnityEngine_SkinnedMeshRenderer_o *renderer,
               UnityEngine_Transform_o *hand,float bloodStainScale,MethodInfo *method)

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
  bool bVar13;
  uint uVar14;
  int32_t iVar15;
  System_Collections_Generic_HashSet_int__o *pSVar16;
  UnityEngine_Transform_array *array;
  UnityEngine_Mesh_o *__this_00;
  UnityEngine_Matrix4x4_array *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_Matrix4x4_o *pUVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_108;
  float local_104;
  float local_100;
  UnityEngine_Matrix4x4_o local_f8 [3];
  
  if (Il2CppMethodInitialized_184346e89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e89 = '\x01';
  }
  pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar16,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  (__this->fields).RemovedBones = pSVar16;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RemovedBones,pSVar16);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).BloodStainScale = bloodStainScale;
  if (renderer != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    array = UnityEngine_SkinnedMeshRenderer__get_bones(renderer,(MethodInfo *)0x0);
    __this_00 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(renderer,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Mesh_o *)0x0) {
      pUVar17 = UnityEngine_Mesh__get_bindposes(__this_00,(MethodInfo *)0x0);
      uVar14 = System_Array__IndexOf_object_
                         ((System_Object_array *)array,(Il2CppObject *)hand,
                          (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_Transform);
      if (hand != (UnityEngine_Transform_o *)0x0) {
        pUVar18 = UnityEngine_Transform__GetParent(hand,(MethodInfo *)0x0);
        iVar15 = System_Array__IndexOf_object_
                           ((System_Object_array *)array,(Il2CppObject *)pUVar18,
                            (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_Transform);
        (__this->fields).ParentBone = iVar15;
        if (pUVar17 != (UnityEngine_Matrix4x4_array *)0x0) {
          if (uVar14 < (uint)pUVar17->max_length) {
            pUVar19 = UnityEngine_Matrix4x4__Internal_Inverse
                                (local_f8,pUVar17->m_Items + (int)uVar14,(MethodInfo *)0x0);
            fVar22 = (pUVar19->fields).m13;
            fVar21 = (pUVar19->fields).m00;
            fVar23 = (pUVar19->fields).m10;
            fVar20 = (pUVar19->fields).m20;
            fVar1 = (pUVar19->fields).m01;
            fVar2 = (pUVar19->fields).m11;
            fVar3 = (pUVar19->fields).m21;
            fVar4 = (pUVar19->fields).m02;
            fVar5 = (pUVar19->fields).m12;
            fVar6 = (pUVar19->fields).m22;
            fVar7 = (pUVar19->fields).m03;
            fVar8 = (pUVar19->fields).m23;
            if (Il2CppMethodInitialized_18433dbea == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbea = '\x01';
            }
            pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
            uVar14 = (__this->fields).ParentBone;
            fVar9 = (pUVar12->zeroVector).fields.x;
            fVar10 = (pUVar12->zeroVector).fields.y;
            fVar11 = (pUVar12->zeroVector).fields.z;
            (__this->fields).Origin.fields.x = fVar10 * fVar1 + fVar9 * fVar21 + fVar11 * fVar4 + fVar7;
            (__this->fields).Origin.fields.y = fVar10 * fVar2 + fVar9 * fVar23 + fVar11 * fVar5 + fVar22;
            (__this->fields).Origin.fields.z = fVar10 * fVar3 + fVar9 * fVar20 + fVar11 * fVar6 + fVar8;
            if (uVar14 < (uint)pUVar17->max_length) {
              pUVar19 = UnityEngine_Matrix4x4__Internal_Inverse
                                  (local_f8,pUVar17->m_Items + (int)uVar14,(MethodInfo *)0x0);
              fVar22 = (pUVar19->fields).m13;
              fVar21 = (pUVar19->fields).m00;
              fVar23 = (pUVar19->fields).m10;
              fVar20 = (pUVar19->fields).m20;
              fVar1 = (pUVar19->fields).m01;
              fVar2 = (pUVar19->fields).m11;
              fVar3 = (pUVar19->fields).m21;
              fVar4 = (pUVar19->fields).m02;
              fVar5 = (pUVar19->fields).m12;
              fVar6 = (pUVar19->fields).m22;
              fVar7 = (pUVar19->fields).m03;
              fVar8 = (pUVar19->fields).m23;
              if (Il2CppMethodInitialized_18433dbea == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433dbea = '\x01';
              }
              pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar9 = (pUVar12->zeroVector).fields.x;
              fVar10 = (pUVar12->zeroVector).fields.y;
              fVar11 = (pUVar12->zeroVector).fields.z;
              fVar21 = (__this->fields).Origin.fields.x -
                       (fVar10 * fVar1 + fVar9 * fVar21 + fVar11 * fVar4 + fVar7);
              fVar22 = (__this->fields).Origin.fields.y -
                       (fVar10 * fVar2 + fVar9 * fVar23 + fVar11 * fVar5 + fVar22);
              fVar23 = (__this->fields).Origin.fields.z -
                       (fVar10 * fVar3 + fVar9 * fVar20 + fVar11 * fVar6 + fVar8);
              local_108 = fVar21;
              local_104 = fVar22;
              local_100 = fVar23;
              if (Il2CppMethodInitialized_18433de5f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5f = '\x01';
              }
              fVar20 = (float)il2cpp_runtime_helper_180546a40(&local_108,0);
              if (fVar20 <= 1e-05) {
                pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar21 = (pUVar12->zeroVector).fields.x;
                fVar22 = (pUVar12->zeroVector).fields.y;
                fVar23 = (pUVar12->zeroVector).fields.z;
              }
              else {
                fVar21 = fVar21 / fVar20;
                fVar22 = fVar22 / fVar20;
                fVar23 = fVar23 / fVar20;
              }
              (__this->fields).Normal.fields.x = fVar21;
              (__this->fields).Normal.fields.y = fVar22;
              (__this->fields).Normal.fields.z = fVar23;
              if (array == (UnityEngine_Transform_array *)0x0) goto label_1821a89b9;
              uVar14 = 0;
              while( true ) {
                if ((int)array->max_length <= (int)uVar14) {
                  return;
                }
                if ((uint)array->max_length <= uVar14) break;
                pUVar18 = array->m_Items[(int)uVar14];
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar13 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)hand,
                                    (MethodInfo *)0x0);
                if (bVar13) {
label_1821a891e:
                  pSVar16 = (__this->fields).RemovedBones;
                  if (pSVar16 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1821a89b9;
                  System_Collections_Generic_HashSet_int___Add
                            (pSVar16,uVar14,
                             (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                }
                else {
                  if ((uint)array->max_length <= uVar14) break;
                  if (array->m_Items[(int)uVar14] == (UnityEngine_Transform_o *)0x0) goto label_1821a89b9;
                  bVar13 = UnityEngine_Transform__IsChildOf
                                     (array->m_Items[(int)uVar14],hand,(MethodInfo *)0x0);
                  if (bVar13) goto label_1821a891e;
                }
                uVar14 = uVar14 + 1;
              }
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_1821a89b9:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutPlane$$KeepParentBone
// il2cpp: UnityEngine_BoneWeight_o Characters_TitanLimbMesh_CutPlane__KeepParentBone (Characters_TitanLimbMesh_CutPlane_o* __this, UnityEngine_BoneWeight_o weight, const MethodInfo* method);
// 0x1821a81e0

UnityEngine_BoneWeight_o *
Characters_TitanLimbMesh_CutPlane__KeepParentBone
          (UnityEngine_BoneWeight_o *__return_storage_ptr__,Characters_TitanLimbMesh_CutPlane_o *__this,
          UnityEngine_BoneWeight_o *weight,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  int32_t iVar7;
  bool bVar8;
  int32_t iVar9;
  
  if (Il2CppMethodInitialized_184346e8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    Il2CppMethodInitialized_184346e8a = '\x01';
  }
  pSVar1 = (__this->fields).RemovedBones;
  iVar9 = UnityEngine_TextCore_Glyph__get_index(weight,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    bVar8 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)pSVar1,iVar9,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar8) {
      UnityEngine_TextCore_Glyph__set_index
                ((UnityEngine_InputForUI_PointerState_o *)weight,(__this->fields).ParentBone,(MethodInfo *)0x0
                );
    }
    pSVar1 = (__this->fields).RemovedBones;
    iVar9 = ExitGames_Client_Photon_StreamBuffer__get_Length
                      ((UnityEngine_RenderTextureDescriptor_o *)weight,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar8 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)pSVar1,iVar9,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar8) {
        Photon_Chat_ChannelCreationOptions__set_MaxSubscribers
                  ((UnityEngine_InputForUI_TextInputEvent_o *)weight,(__this->fields).ParentBone,
                   (MethodInfo *)0x0);
      }
      pSVar1 = (__this->fields).RemovedBones;
      iVar9 = UnityEngine_AdaptivePerformance_RunningAverage__GetNumValues
                        ((UnityEngine_TextCore_Text_TextProcessingStack_float__o *)weight,
                         (MethodInfo_B3E0C0 *)0x0);
      if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar8 = System_Collections_Generic_HashSet_Int32Enum___Contains
                          ((System_Collections_Generic_HashSet_T__o *)pSVar1,iVar9,
                           (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        if (bVar8) {
          UnityEngine_Bindings_StaticAccessorAttribute__set_Type
                    ((UnityEngine_InputForUI_TextInputEvent_o *)weight,
                     (UnityEngine_InputForUI_EventModifiers_o)(__this->fields).ParentBone,(MethodInfo *)0x0);
        }
        pSVar1 = (__this->fields).RemovedBones;
        iVar9 = UnityEngine_TreePrototype__get_navMeshLod(weight,(MethodInfo *)0x0);
        if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar8 = System_Collections_Generic_HashSet_Int32Enum___Contains
                            ((System_Collections_Generic_HashSet_T__o *)pSVar1,iVar9,
                             (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains)
          ;
          if (bVar8) {
            UnityEngine_InputForUI_PointerState__set_LastDisplayIndex
                      ((UnityEngine_InputForUI_PointerState_o *)weight,(__this->fields).ParentBone,
                       (MethodInfo *)0x0);
          }
          fVar2 = (weight->fields).m_Weight1;
          fVar3 = (weight->fields).m_Weight2;
          fVar4 = (weight->fields).m_Weight3;
          iVar9 = (weight->fields).m_BoneIndex0;
          iVar5 = (weight->fields).m_BoneIndex1;
          iVar6 = (weight->fields).m_BoneIndex2;
          iVar7 = (weight->fields).m_BoneIndex3;
          (__return_storage_ptr__->fields).m_Weight0 = (weight->fields).m_Weight0;
          (__return_storage_ptr__->fields).m_Weight1 = fVar2;
          (__return_storage_ptr__->fields).m_Weight2 = fVar3;
          (__return_storage_ptr__->fields).m_Weight3 = fVar4;
          (__return_storage_ptr__->fields).m_BoneIndex0 = iVar9;
          (__return_storage_ptr__->fields).m_BoneIndex1 = iVar5;
          (__return_storage_ptr__->fields).m_BoneIndex2 = iVar6;
          (__return_storage_ptr__->fields).m_BoneIndex3 = iVar7;
          return __return_storage_ptr__;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutPlane$$ContainsBone
// il2cpp: bool Characters_TitanLimbMesh_CutPlane__ContainsBone (Characters_TitanLimbMesh_CutPlane_o* __this, UnityEngine_BoneWeight_o weight, const MethodInfo* method);
// 0x1821a80a0

bool Characters_TitanLimbMesh_CutPlane__ContainsBone
               (Characters_TitanLimbMesh_CutPlane_o *__this,UnityEngine_BoneWeight_o *weight,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346e8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    Il2CppMethodInitialized_184346e8b = '\x01';
  }
  fVar4 = UnityEngine_TextCore_LowLevel_MarkPositionAdjustment__get_xPositionAdjustment
                    ((UnityEngine_TextCore_LowLevel_MarkPositionAdjustment_o *)weight,(MethodInfo *)0x0);
  if (fVar4 <= 0.0) {
label_1821a8114:
    fVar4 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                      ((UnityEngine_AI_NavMeshBuildSettings_o *)weight,(MethodInfo *)0x0);
    if (0.0 < fVar4) {
      pSVar1 = (__this->fields).RemovedBones;
      iVar3 = ExitGames_Client_Photon_StreamBuffer__get_Length
                        ((UnityEngine_RenderTextureDescriptor_o *)weight,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1821a81d6;
      bVar2 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)pSVar1,iVar3,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar2) goto label_1821a8186;
    }
    fVar4 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                      ((UnityEngine_AI_NavMeshBuildSettings_o *)weight,(MethodInfo *)0x0);
    if (0.0 < fVar4) {
      pSVar1 = (__this->fields).RemovedBones;
      iVar3 = UnityEngine_AdaptivePerformance_RunningAverage__GetNumValues
                        ((UnityEngine_TextCore_Text_TextProcessingStack_float__o *)weight,
                         (MethodInfo_B3E0C0 *)0x0);
      if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1821a81d6;
      bVar2 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)pSVar1,iVar3,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar2) goto label_1821a8186;
    }
    fVar4 = UnityEngine_TextCore_LowLevel_GlyphValueRecord__get_yAdvance
                      ((UnityEngine_TextCore_LowLevel_GlyphValueRecord_o *)weight,(MethodInfo *)0x0);
    if (0.0 < fVar4) {
      pSVar1 = (__this->fields).RemovedBones;
      iVar3 = UnityEngine_TreePrototype__get_navMeshLod(weight,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_1821a81d6:
        ThrowNullReferenceException();
      }
      bVar2 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)pSVar1,iVar3,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    }
    else {
      bVar2 = false;
    }
  }
  else {
    pSVar1 = (__this->fields).RemovedBones;
    iVar3 = UnityEngine_TextCore_Glyph__get_index(weight,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1821a81d6;
    bVar2 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)pSVar1,iVar3,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (!bVar2) goto label_1821a8114;
label_1821a8186:
    bVar2 = true;
  }
  return bVar2;
}


// Characters.TitanLimbMesh.CutMeshData.<>c__DisplayClass13_0$$.ctor
// il2cpp: void Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0___ctor (Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0___ctor(Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanLimbMesh.CutMeshData.<>c__DisplayClass13_0$$<AddCap>b__0
// il2cpp: int32_t Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0___AddCap_b__0 (Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o* __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x1821d08a0

int32_t Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0___AddCap_b__0
                  (Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o *__this,
                  UnityEngine_Vector3_o *a,UnityEngine_Vector3_o *b,MethodInfo *method)

{
  int32_t iVar1;
  float value;
  float local_res8 [2];
  
  local_res8[0] =
       (float)il2cpp_runtime_helper_1804f3c50(((a->fields).x - (__this->fields).center.fields.x) *
                            (__this->fields).axisY.fields.x +
                            ((a->fields).y - (__this->fields).center.fields.y) *
                            (__this->fields).axisY.fields.y +
                            ((a->fields).z - (__this->fields).center.fields.z) *
                            (__this->fields).axisY.fields.z,
                            ((a->fields).y - (__this->fields).center.fields.y) *
                            (__this->fields).axisX.fields.y +
                            ((a->fields).x - (__this->fields).center.fields.x) *
                            (__this->fields).axisX.fields.x +
                            ((a->fields).z - (__this->fields).center.fields.z) *
                            (__this->fields).axisX.fields.z);
  value = (float)il2cpp_runtime_helper_1804f3c50(((b->fields).y - (__this->fields).center.fields.y) *
                               (__this->fields).axisY.fields.y +
                               ((b->fields).x - (__this->fields).center.fields.x) *
                               (__this->fields).axisY.fields.x +
                               ((b->fields).z - (__this->fields).center.fields.z) *
                               (__this->fields).axisY.fields.z,
                               ((b->fields).y - (__this->fields).center.fields.y) *
                               (__this->fields).axisX.fields.y +
                               ((b->fields).x - (__this->fields).center.fields.x) *
                               (__this->fields).axisX.fields.x +
                               ((b->fields).z - (__this->fields).center.fields.z) *
                               (__this->fields).axisX.fields.z);
  iVar1 = System_Single__CompareTo_1b49410(local_res8,value,(MethodInfo *)0x0);
  return iVar1;
}


// Characters.TitanLimbMesh.CutMeshData$$.ctor
// il2cpp: void Characters_TitanLimbMesh_CutMeshData___ctor (Characters_TitanLimbMesh_CutMeshData_o* __this, Characters_TitanLimbMesh_MeshSource_o* source, const MethodInfo* method);
// 0x1821a7d20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a7fbc: nop dword ptr [rax]
// asm:   0x1821a8057: jmp 0x1821a7fc0

void Characters_TitanLimbMesh_CutMeshData___ctor
               (Characters_TitanLimbMesh_CutMeshData_o *__this,Characters_TitanLimbMesh_MeshSource_o *source,
               MethodInfo *method)

{
  UnityEngine_Vector3_array *pUVar1;
  UnityEngine_Vector4_array *collection;
  UnityEngine_Vector2_array *collection_00;
  UnityEngine_Color32_array *collection_01;
  UnityEngine_BoneWeight_array *collection_02;
  System_Int32_array_array *pSVar2;
  System_Int32_array *collection_03;
  System_Collections_Generic_List_T__o *__this_00;
  System_Collections_Generic_List_Vector3__o *pSVar3;
  System_Collections_Generic_List_Vector4__o *__this_01;
  System_Collections_Generic_List_Vector2__o *__this_02;
  System_Collections_Generic_List_Color32__o *__this_03;
  System_Collections_Generic_List_BoneWeight__o *__this_04;
  System_Collections_Generic_List_int__array *pSVar4;
  System_Collections_Generic_List_int__o *__this_05;
  Il2CppObject *pIVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184346e8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int__array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color32_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector2_ctor_40efd40);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BoneWeight_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f05d8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_40b2f90);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector4_ctor_40f1028);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Color32);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BoneWeight);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector4);
    Il2CppMethodInitialized_184346e8c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this_00,0x800,(MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b3068)
  ;
  (__this->fields)._wound = (System_Collections_Generic_List_int__o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._wound,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (source != (Characters_TitanLimbMesh_MeshSource_o *)0x0) {
    pUVar1 = (source->fields).Vertices;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
    System_Collections_Generic_List_Vector3____ctor_9aad40
              (pSVar3,(System_Collections_Generic_IEnumerable_T__o *)pUVar1,
               (MethodInfo_9AAD40 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f05d8);
    (__this->fields)._vertices = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._vertices,pSVar3);
    pUVar1 = (source->fields).Normals;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
    System_Collections_Generic_List_Vector3____ctor_9aad40
              (pSVar3,(System_Collections_Generic_IEnumerable_T__o *)pUVar1,
               (MethodInfo_9AAD40 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f05d8);
    (__this->fields)._normals = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._normals,pSVar3);
    collection = (source->fields).Tangents;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector4);
    System_Collections_Generic_List_Vector4____ctor_9ab3a0
              (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_9AB3A0 *)MethodInfo_System_Collections_Generic_List_Vector4_ctor_40f1028);
    (__this->fields)._tangents = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tangents,__this_01);
    collection_00 = (source->fields).UV;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector2);
    System_Collections_Generic_List_Vector2____ctor_9aa2a0
              (__this_02,(System_Collections_Generic_IEnumerable_T__o *)collection_00,
               (MethodInfo_9AA2A0 *)MethodInfo_System_Collections_Generic_List_Vector2_ctor_40efd40);
    (__this->fields)._uv = __this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._uv,__this_02);
    collection_01 = (source->fields).Colors;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Color32);
    System_Collections_Generic_List_Color32____ctor_186b230
              (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection_01,
               (MethodInfo_186B230 *)MethodInfo_System_Collections_Generic_List_Color32_ctor);
    (__this->fields)._colors = __this_03;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._colors,__this_03);
    collection_02 = (source->fields).Weights;
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BoneWeight);
    System_Collections_Generic_List_BoneWeight____ctor_185f1e0
              (__this_04,(System_Collections_Generic_IEnumerable_T__o *)collection_02,
               (MethodInfo_185F1E0 *)MethodInfo_System_Collections_Generic_List_BoneWeight_ctor);
    (__this->fields)._weights = __this_04;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._weights,__this_04);
    pSVar2 = (source->fields).Triangles;
    if (pSVar2 != (System_Int32_array_array *)0x0) {
      pSVar4 = (System_Collections_Generic_List_int__array *)
               SZArrayNew(TypeInfo_System_Collections_Generic_List_int__array,(uint32_t)pSVar2->max_length);
      (__this->fields)._triangles = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._triangles,pSVar4);
      uVar6 = 0;
      pSVar4 = (__this->fields)._triangles;
      while (pSVar4 != (System_Collections_Generic_List_int__array *)0x0) {
        if ((int)pSVar4->max_length <= (int)uVar6) {
          return;
        }
        pSVar2 = (source->fields).Triangles;
        if (pSVar2 == (System_Int32_array_array *)0x0) break;
        if ((uint)pSVar2->max_length <= uVar6) {
label_1821a808b:
          ThrowIndexOutOfRangeException();
        }
        pSVar4 = (__this->fields)._triangles;
        collection_03 = pSVar2->m_Items[(int)uVar6];
        __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
        System_Collections_Generic_List_int____ctor_92b2a0
                  (__this_05,(System_Collections_Generic_IEnumerable_T__o *)collection_03,
                   (MethodInfo_92B2A0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b2f90);
        if (pSVar4 == (System_Collections_Generic_List_int__array *)0x0) break;
        if ((__this_05 != (System_Collections_Generic_List_int__o *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)__this_05,(((pSVar4->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
        if ((uint)pSVar4->max_length <= uVar6) goto label_1821a808b;
        pSVar4->m_Items[(int)uVar6] = __this_05;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar6,__this_05);
        uVar6 = uVar6 + 1;
        pSVar4 = (__this->fields)._triangles;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Cut
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Cut (Characters_TitanLimbMesh_CutMeshData_o* __this, Characters_TitanLimbMesh_CutPlane_o* wrist, bool detached, const MethodInfo* method);
// 0x1821a6970
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a6da3: mov r15d, dword ptr [rbp - 0x70]
// asm:   0x1821a7025: mov r12, qword ptr [rsp + 0x40]
// asm:   0x1821a702a: nop word ptr [rax + rax]
// asm:   0x1821a7150: mov r12, qword ptr [rbp + 0xe0]
// asm:   0x1821a7157: mov rdi, qword ptr [rsp + 0x40]
// asm:   0x1821a715c: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x1821a71d2: jmp 0x1821a6b44
// asm:   0x1821a738f: jmp 0x1821a73f4

void Characters_TitanLimbMesh_CutMeshData__Cut
               (Characters_TitanLimbMesh_CutMeshData_o *__this,Characters_TitanLimbMesh_CutPlane_o *wrist,
               bool detached,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  int32_t iVar4;
  int32_t iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar9;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o index;
  int32_t iVar10;
  System_Collections_Generic_List_Vector3__o *rim;
  System_Collections_Generic_List_T__o *__this_01;
  System_Collections_Generic_List_int__o *__this_02;
  Il2CppObject *pIVar11;
  System_Collections_Generic_List_BoneWeight__o *pSVar12;
  System_Collections_Generic_List_int__array *pSVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint local_1a0;
  System_Runtime_InteropServices_GCHandle_Fields local_188;
  Unity_IntegerTime_DiscreteTime_Fields UStack_180;
  intptr_t local_178;
  intptr_t iStack_170;
  UnityEngine_UIElements_UnsafeMeshGenerationNode_o local_168;
  Unity_IntegerTime_DiscreteTime_Fields UStack_160;
  intptr_t local_158;
  intptr_t iStack_150;
  int local_148;
  System_Collections_Generic_List_Vector3__o *local_140;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o local_138;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o local_128;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o local_118;
  float local_108;
  float local_104;
  float local_100;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o local_f8;
  float local_e8;
  float local_e4;
  float local_e0;
  UnityEngine_Vector3_Fields local_d0;
  UnityEngine_Vector3_Fields local_c0 [2];
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98 [8];
  
  if (Il2CppMethodInitialized_184346e8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f06b0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BoneWeight_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BoneWeight_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    Il2CppMethodInitialized_184346e8d = '\x01';
  }
  rim = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)rim,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  __this_01 = (System_Collections_Generic_List_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this_01,4,(MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
  local_140 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_List_T__o *)local_140,2,
             (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f06b0);
  pSVar13 = (__this->fields)._triangles;
  if (pSVar13 != (System_Collections_Generic_List_int__array *)0x0) {
    local_1a0 = 0;
    while ((int)local_1a0 < (int)pSVar13->max_length) {
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
      System_Collections_Generic_List_int____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
      pSVar13 = (__this->fields)._triangles;
      if (pSVar13 == (System_Collections_Generic_List_int__array *)0x0) goto label_1821a73f4;
      if ((uint)pSVar13->max_length <= local_1a0) {
label_1821a7410:
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                  pSVar13->m_Items[(int)local_1a0];
      iVar16 = 0;
      if (__this_00 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
      goto label_1821a73f4;
      while (iVar16 < (__this_00->fields)._size) {
        pSVar12 = (__this->fields)._weights;
        SVar9 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                          (__this_00,iVar16,
                           (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        if (pSVar12 == (System_Collections_Generic_List_BoneWeight__o *)0x0) goto label_1821a73f4;
        System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState___get_Item
                  ((UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_o *)
                   &local_188,
                   (System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *)
                   pSVar12,(int32_t)SVar9.fields,
                   (MethodInfo_94FF20 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
        if (wrist == (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_168.fields.m_Handle.fields.handle =
             (UnityEngine_UIElements_UnsafeMeshGenerationNode_Fields)
             (UnityEngine_UIElements_UnsafeMeshGenerationNode_Fields)local_188.handle;
        UStack_160.Value = UStack_180.Value;
        local_158 = local_178;
        iStack_150 = iStack_170;
        bVar8 = Characters_TitanLimbMesh_CutPlane__ContainsBone
                          (wrist,(UnityEngine_BoneWeight_o *)&local_168,(MethodInfo *)0x0);
        if (bVar8) {
label_1821a6d74:
          if (__this_01 == (System_Collections_Generic_List_T__o *)0x0) goto label_1821a73f4;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          iVar15 = 0;
          (__this_01->fields)._size = 0;
          if (local_140 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a73f4;
          piVar1 = &(local_140->fields)._version;
          *piVar1 = *piVar1 + 1;
          (local_140->fields)._size = 0;
          local_148 = iVar16;
          do {
            iVar16 = local_148;
            SVar9 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                              (__this_00,iVar15 + local_148,
                               (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            iVar14 = iVar15 + 1;
            index = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                              (__this_00,
                               iVar16 + iVar14 + (iVar14 / 3 + (iVar14 >> 0x1f) +
                                                 (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) &
                                                       0xffffffffU) >> 0x1f)) * -3,
                               (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            pSVar2 = (__this->fields)._vertices;
            if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a73f4;
            System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                      (&local_138,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar2,
                       (int32_t)SVar9.fields,
                       (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
            pSVar2 = (__this->fields)._vertices;
            fVar18 = ((float)local_138.fields.x - (wrist->fields).Origin.fields.x) *
                     (wrist->fields).Normal.fields.x +
                     ((float)local_138.fields.y - (wrist->fields).Origin.fields.y) *
                     (wrist->fields).Normal.fields.y +
                     ((float)local_138.fields.z - (wrist->fields).Origin.fields.z) *
                     (wrist->fields).Normal.fields.z;
            if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a73f4;
            System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                      (&local_128,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar2,
                       (int32_t)index.fields,
                       (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
            fVar19 = ((float)local_128.fields.y - (wrist->fields).Origin.fields.y) *
                     (wrist->fields).Normal.fields.y +
                     ((float)local_128.fields.x - (wrist->fields).Origin.fields.x) *
                     (wrist->fields).Normal.fields.x +
                     ((float)local_128.fields.z - (wrist->fields).Origin.fields.z) *
                     (wrist->fields).Normal.fields.z;
            if (fVar18 <= 0.0) {
              il2cpp_runtime_helper_180026690(__this_01);
            }
            if (0.0 < fVar18 != 0.0 < fVar19) {
              iVar10 = Characters_TitanLimbMesh_CutMeshData__AddIntersection
                                 (__this,(int32_t)SVar9.fields,(int32_t)index.fields,
                                  fVar18 / (fVar18 - fVar19),(wrist->fields).ParentBone,(MethodInfo *)0x0);
              il2cpp_runtime_helper_180026690(__this_01,iVar10,MethodInfo_System_Collections_Generic_List_int_Add);
              pSVar2 = (__this->fields)._vertices;
              if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a73f4;
              System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                        (&local_118,
                         (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar2,iVar10,
                         (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
              iVar5 = local_118.fields.z;
              iVar4 = local_118.fields.y;
              iVar10 = local_118.fields.x;
              local_108 = (float)local_118.fields.x;
              local_104 = (float)local_118.fields.y;
              local_100 = (float)local_118.fields.z;
              il2cpp_runtime_helper_180012810(local_140);
              if (rim == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a73f4;
              bVar8 = false;
              for (iVar14 = 0; iVar14 < (rim->fields)._size; iVar14 = iVar14 + 1) {
                System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                          (&local_f8,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)rim,
                           iVar14,(MethodInfo_93BF30 *)
                                  MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                fVar18 = (float)local_f8.fields.x - (float)iVar10;
                fVar17 = (float)local_f8.fields.y - (float)iVar4;
                fVar19 = (float)local_f8.fields.z - (float)iVar5;
                if (fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19 < 1e-10) {
                  bVar8 = true;
                }
              }
              if (!bVar8) {
                local_e8 = (float)iVar10;
                local_e4 = (float)iVar4;
                local_e0 = (float)iVar5;
                il2cpp_runtime_helper_180012810(rim);
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < 3);
          iVar15 = 1;
          if (2 < (__this_01->fields)._size) {
            do {
              SVar9 = System_Collections_Generic_List_int___get_Item
                                ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_01,0,
                                 (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item)
              ;
              if (__this_02 == (System_Collections_Generic_List_int__o *)0x0) goto label_1821a73f4;
              il2cpp_runtime_helper_180026690(__this_02,SVar9.fields,MethodInfo_System_Collections_Generic_List_int_Add);
              SVar9 = System_Collections_Generic_List_int___get_Item
                                ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_01,
                                 iVar15,(MethodInfo_92B8E0 *)
                                        MethodInfo_System_Collections_Generic_List_int_get_Item);
              il2cpp_runtime_helper_180026690(__this_02,SVar9.fields,MethodInfo_System_Collections_Generic_List_int_Add);
              System_Collections_Generic_List_int___get_Item
                        ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_01,iVar15 + 1
                         ,(MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
              il2cpp_runtime_helper_180026690(__this_02);
              iVar14 = iVar15 + 2;
              iVar15 = iVar15 + 1;
            } while (iVar14 < (__this_01->fields)._size);
          }
          pSVar2 = local_140;
          if (((local_140->fields)._size != 2) || ((__this_01->fields)._size < 3)) goto label_1821a7161;
          System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                    ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_d0,
                     (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)local_140,0,
                     (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
          fVar18 = local_d0.z;
          uVar6 = local_d0._0_8_;
          System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                    ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)local_c0,
                     (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar2,1,
                     (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
          uVar7 = local_d0._0_8_;
          local_a8.x = local_c0[0].x;
          local_a8.y = local_c0[0].y;
          local_a8.z = local_c0[0].z;
          local_d0.x = (float)uVar6;
          local_d0.y = SUB84(uVar6,4);
          local_98[0].x = local_d0.x;
          local_98[0].y = local_d0.y;
          local_98[0].z = fVar18;
          local_d0._0_8_ = uVar7;
          Characters_TitanLimbMesh_CutMeshData__AddBloodStain
                    (__this,(UnityEngine_Vector3_o *)local_98,(UnityEngine_Vector3_o *)&local_a8,
                     (System_Collections_Generic_List_int__o *)__this_01,wrist,(MethodInfo *)0x0);
          iVar16 = iVar16 + 3;
        }
        else {
          pSVar12 = (__this->fields)._weights;
          SVar9 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                            (__this_00,iVar16 + 1,
                             (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          if (pSVar12 == (System_Collections_Generic_List_BoneWeight__o *)0x0) goto label_1821a73f4;
          System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState___get_Item
                    ((UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_o *)
                     &local_168,
                     (System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *)
                     pSVar12,(int32_t)SVar9.fields,
                     (MethodInfo_94FF20 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
          bVar8 = Characters_TitanLimbMesh_CutPlane__ContainsBone
                            (wrist,(UnityEngine_BoneWeight_o *)&local_168,(MethodInfo *)0x0);
          if (bVar8) goto label_1821a6d74;
          pSVar12 = (__this->fields)._weights;
          SVar9 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                            (__this_00,iVar16 + 2,
                             (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          if (pSVar12 == (System_Collections_Generic_List_BoneWeight__o *)0x0) goto label_1821a73f4;
          System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState___get_Item
                    ((UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_o *)
                     &local_168,
                     (System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *)
                     pSVar12,(int32_t)SVar9.fields,
                     (MethodInfo_94FF20 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
          local_188.handle = (intptr_t)local_168.fields.m_Handle.fields.handle;
          UStack_180.Value = UStack_160.Value;
          local_178 = local_158;
          iStack_170 = iStack_150;
          bVar8 = Characters_TitanLimbMesh_CutPlane__ContainsBone
                            (wrist,(UnityEngine_BoneWeight_o *)&local_188,(MethodInfo *)0x0);
          if (bVar8) goto label_1821a6d74;
          if (detached) {
label_1821a7161:
            iVar16 = iVar16 + 3;
          }
          else {
            SVar9 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                              (__this_00,iVar16,
                               (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            if (__this_02 == (System_Collections_Generic_List_int__o *)0x0) goto label_1821a73f4;
            il2cpp_runtime_helper_180026690(__this_02,SVar9.fields,MethodInfo_System_Collections_Generic_List_int_Add);
            SVar9 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                              (__this_00,iVar16 + 1,
                               (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            il2cpp_runtime_helper_180026690(__this_02,SVar9.fields,MethodInfo_System_Collections_Generic_List_int_Add);
            SVar9 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                              (__this_00,iVar16 + 2,
                               (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            il2cpp_runtime_helper_180026690(__this_02,SVar9.fields,MethodInfo_System_Collections_Generic_List_int_Add);
            iVar16 = iVar16 + 3;
          }
        }
      }
      pSVar13 = (__this->fields)._triangles;
      if (pSVar13 == (System_Collections_Generic_List_int__array *)0x0) goto label_1821a73f4;
      if ((__this_02 != (System_Collections_Generic_List_int__o *)0x0) &&
         (pIVar11 = il2cpp_vm_Object_IsInst
                              ((Il2CppObject *)__this_02,(((pSVar13->obj).klass)->_1).element_class),
         pIVar11 == (Il2CppObject *)0x0)) {
        pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
      }
      if ((uint)pSVar13->max_length <= local_1a0) goto label_1821a7410;
      pSVar13->m_Items[(int)local_1a0] = __this_02;
      Il2CppCodeGenWriteBarrier(pSVar13->m_Items + (int)local_1a0,__this_02);
      pSVar13 = (__this->fields)._triangles;
      local_1a0 = local_1a0 + 1;
      if (pSVar13 == (System_Collections_Generic_List_int__array *)0x0) goto label_1821a73f4;
    }
    if (detached) goto label_1821a7391;
    pSVar12 = (__this->fields)._weights;
    if (pSVar12 != (System_Collections_Generic_List_BoneWeight__o *)0x0) {
      iVar16 = 0;
      goto label_1821a71f6;
    }
  }
  goto label_1821a73f4;
label_1821a71f6:
  do {
    if ((pSVar12->fields)._size <= iVar16) {
label_1821a7391:
      Characters_TitanLimbMesh_CutMeshData__AddCap(__this,rim,wrist,(MethodInfo *)0x0);
      return;
    }
    pSVar12 = (__this->fields)._weights;
    if ((pSVar12 == (System_Collections_Generic_List_BoneWeight__o *)0x0) ||
       (System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState___get_Item
                  ((UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_o *)
                   &local_168,
                   (System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *)
                   pSVar12,iVar16,
                   (MethodInfo_94FF20 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item),
       wrist == (Characters_TitanLimbMesh_CutPlane_o *)0x0)) break;
    local_188.handle = (intptr_t)local_168.fields.m_Handle.fields.handle;
    UStack_180.Value = UStack_160.Value;
    local_178 = local_158;
    iStack_170 = iStack_150;
    if (Il2CppMethodInitialized_184346e8a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      Il2CppMethodInitialized_184346e8a = '\x01';
    }
    pSVar3 = (wrist->fields).RemovedBones;
    iVar10 = UnityEngine_TextCore_Glyph__get_index((UnityEngine_BoneWeight_o *)&local_188,(MethodInfo *)0x0);
    if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_1821a7416:
      ThrowNullReferenceException();
    }
    bVar8 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)pSVar3,iVar10,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar8) {
      UnityEngine_TextCore_Glyph__set_index
                ((UnityEngine_InputForUI_PointerState_o *)&local_188,(wrist->fields).ParentBone,
                 (MethodInfo *)0x0);
    }
    pSVar3 = (wrist->fields).RemovedBones;
    iVar10 = ExitGames_Client_Photon_StreamBuffer__get_Length
                       ((UnityEngine_RenderTextureDescriptor_o *)&local_188,(MethodInfo *)0x0);
    if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1821a7416;
    bVar8 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)pSVar3,iVar10,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar8) {
      Photon_Chat_ChannelCreationOptions__set_MaxSubscribers
                ((UnityEngine_InputForUI_TextInputEvent_o *)&local_188,(wrist->fields).ParentBone,
                 (MethodInfo *)0x0);
    }
    pSVar3 = (wrist->fields).RemovedBones;
    iVar10 = UnityEngine_AdaptivePerformance_RunningAverage__GetNumValues
                       ((UnityEngine_TextCore_Text_TextProcessingStack_float__o *)&local_188,
                        (MethodInfo_B3E0C0 *)0x0);
    if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1821a7416;
    bVar8 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)pSVar3,iVar10,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar8) {
      UnityEngine_Bindings_StaticAccessorAttribute__set_Type
                ((UnityEngine_InputForUI_TextInputEvent_o *)&local_188,
                 (UnityEngine_InputForUI_EventModifiers_o)(wrist->fields).ParentBone,(MethodInfo *)0x0);
    }
    pSVar3 = (wrist->fields).RemovedBones;
    iVar10 = UnityEngine_TreePrototype__get_navMeshLod
                       ((UnityEngine_BoneWeight_o *)&local_188,(MethodInfo *)0x0);
    if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1821a7416;
    bVar8 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      ((System_Collections_Generic_HashSet_T__o *)pSVar3,iVar10,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar8) {
      UnityEngine_InputForUI_PointerState__set_LastDisplayIndex
                ((UnityEngine_InputForUI_PointerState_o *)&local_188,(wrist->fields).ParentBone,
                 (MethodInfo *)0x0);
    }
    local_168.fields.m_Handle.fields.handle =
         (UnityEngine_UIElements_UnsafeMeshGenerationNode_Fields)
         (UnityEngine_UIElements_UnsafeMeshGenerationNode_Fields)local_188.handle;
    UStack_160.Value = UStack_180.Value;
    local_158 = local_178;
    iStack_150 = iStack_170;
    System_Collections_Generic_List_Painter2D_Painter2DJobData___set_Item
              ((System_Collections_Generic_List_Painter2D_Painter2DJobData__o *)pSVar12,iVar16,
               (UnityEngine_UIElements_Painter2D_Painter2DJobData_o *)&local_168,
               (MethodInfo_94FF90 *)MethodInfo_System_Collections_Generic_List_BoneWeight_set_Item);
    pSVar12 = (__this->fields)._weights;
    iVar16 = iVar16 + 1;
  } while (pSVar12 != (System_Collections_Generic_List_BoneWeight__o *)0x0);
label_1821a73f4:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Remove
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Remove (Characters_TitanLimbMesh_CutMeshData_o* __this, Characters_TitanLimbMesh_CutPlane_o* cut, const MethodInfo* method);
// 0x1821a7560
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a75f8: nop dword ptr [rax + rax]
// asm:   0x1821a77f2: jmp 0x1821a7600

void Characters_TitanLimbMesh_CutMeshData__Remove
               (Characters_TitanLimbMesh_CutMeshData_o *__this,Characters_TitanLimbMesh_CutPlane_o *cut,
               MethodInfo *method)

{
  System_Collections_Generic_List_T__o *__this_00;
  System_Collections_Generic_List_BoneWeight__o *pSVar1;
  bool bVar2;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o value;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o value_00;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o value_01;
  System_Collections_Generic_List_int__array *pSVar3;
  int index;
  int index_00;
  int index_01;
  uint local_res8;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  
  if (Il2CppMethodInitialized_184346e8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_RemoveRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_set_Item);
    Il2CppMethodInitialized_184346e8e = '\x01';
  }
  pSVar3 = (__this->fields)._triangles;
  local_res8 = 0;
  if (pSVar3 != (System_Collections_Generic_List_int__array *)0x0) {
    while( true ) {
      if ((int)pSVar3->max_length <= (int)local_res8) {
        return;
      }
      pSVar3 = (__this->fields)._triangles;
      if (pSVar3 == (System_Collections_Generic_List_int__array *)0x0) break;
      if ((uint)pSVar3->max_length <= local_res8) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (System_Collections_Generic_List_T__o *)pSVar3->m_Items[(int)local_res8];
      if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) break;
      index_01 = 0;
      for (index_00 = 0; index_00 < (__this_00->fields)._size; index_00 = index_00 + 3) {
        value = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                          ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_00,index_00
                           ,(MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        value_00 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                             ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_00,
                              index_00 + 1,
                              (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        value_01 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                             ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_00,
                              index_00 + 2,
                              (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        pSVar1 = (__this->fields)._weights;
        if (pSVar1 == (System_Collections_Generic_List_BoneWeight__o *)0x0) goto label_1821a7823;
        System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState___get_Item
                  ((UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_o *)
                   local_68,(System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o
                             *)pSVar1,(int32_t)value.fields,
                   (MethodInfo_94FF20 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
        if (cut == (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_48._0_8_ = local_68._0_8_;
        local_48._8_8_ = local_68._8_8_;
        local_48._16_8_ = local_68._16_8_;
        local_48._24_8_ = local_68._24_8_;
        bVar2 = Characters_TitanLimbMesh_CutPlane__ContainsBone
                          (cut,(UnityEngine_BoneWeight_o *)local_48,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar1 = (__this->fields)._weights;
          if (pSVar1 == (System_Collections_Generic_List_BoneWeight__o *)0x0) goto label_1821a7823;
          System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState___get_Item
                    ((UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_o *)
                     local_48,(System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o
                               *)pSVar1,(int32_t)value_00.fields,
                     (MethodInfo_94FF20 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
          bVar2 = Characters_TitanLimbMesh_CutPlane__ContainsBone
                            (cut,(UnityEngine_BoneWeight_o *)local_48,(MethodInfo *)0x0);
          if (!bVar2) {
            pSVar1 = (__this->fields)._weights;
            if (pSVar1 == (System_Collections_Generic_List_BoneWeight__o *)0x0) goto label_1821a7823;
            System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState___get_Item
                      ((UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_o *)
                       local_48,(System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o
                                 *)pSVar1,(int32_t)value_01.fields,
                       (MethodInfo_94FF20 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
            local_68._0_8_ = local_48._0_8_;
            local_68._8_8_ = local_48._8_8_;
            local_68._16_8_ = local_48._16_8_;
            local_68._24_8_ = local_48._24_8_;
            bVar2 = Characters_TitanLimbMesh_CutPlane__ContainsBone
                              (cut,(UnityEngine_BoneWeight_o *)local_68,(MethodInfo *)0x0);
            if (!bVar2) {
              System_Collections_Generic_List_UInt32Enum___set_Item
                        (__this_00,index_01,(uint32_t)value.fields,
                         (MethodInfo_92BC10 *)MethodInfo_System_Collections_Generic_List_int_set_Item);
              System_Collections_Generic_List_UInt32Enum___set_Item
                        (__this_00,index_01 + 1,(uint32_t)value_00.fields,
                         (MethodInfo_92BC10 *)MethodInfo_System_Collections_Generic_List_int_set_Item);
              index = index_01 + 2;
              index_01 = index_01 + 3;
              System_Collections_Generic_List_UInt32Enum___set_Item
                        (__this_00,index,(uint32_t)value_01.fields,
                         (MethodInfo_92BC10 *)MethodInfo_System_Collections_Generic_List_int_set_Item);
            }
          }
        }
      }
      System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange
                ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_00,index_01,
                 (__this_00->fields)._size - index_01,
                 (MethodInfo_922E40 *)MethodInfo_System_Collections_Generic_List_int_RemoveRange);
      pSVar3 = (__this->fields)._triangles;
      local_res8 = local_res8 + 1;
      if (pSVar3 == (System_Collections_Generic_List_int__array *)0x0) break;
    }
  }
label_1821a7823:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$AddIntersection
// il2cpp: int32_t Characters_TitanLimbMesh_CutMeshData__AddIntersection (Characters_TitanLimbMesh_CutMeshData_o* __this, int32_t a, int32_t b, float t, int32_t forearm, const MethodInfo* method);
// 0x1821a50e0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a5266: movaps xmm3, xmm7
// asm:   0x1821a5269: jmp 0x1821a5274
// asm:   0x1821a536f: movaps xmm0, xmm7
// asm:   0x1821a5372: jmp 0x1821a537d
// asm:   0x1821a550d: movaps xmm1, xmm7
// asm:   0x1821a5510: jmp 0x1821a551b
// asm:   0x1821a5642: movaps xmm10, xmm7
// asm:   0x1821a5646: jmp 0x1821a564c

int32_t Characters_TitanLimbMesh_CutMeshData__AddIntersection
                  (Characters_TitanLimbMesh_CutMeshData_o *__this,int32_t a,int32_t b,float t,int32_t forearm,
                  MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Vector4_o *pUVar2;
  UnityEngine_BoneWeight_o *pUVar3;
  intptr_t *piVar4;
  int32_t iVar5;
  uint uVar6;
  System_Collections_Generic_List_Vector3__o *pSVar7;
  System_Collections_Generic_List_Vector3__o *pSVar8;
  UnityEngine_Vector3_array *pUVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  System_Collections_Generic_List_Vector4__o *__this_00;
  System_Collections_Generic_List_Vector4__o *__this_01;
  UnityEngine_Vector4_array *pUVar11;
  System_Collections_Generic_List_Vector2__o *__this_02;
  System_Collections_Generic_List_Vector2__o *__this_03;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_04;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_05;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_array *pSVar12;
  System_Collections_Generic_List_BoneWeight__o *__this_06;
  UnityEngine_BoneWeight_array *pUVar13;
  MethodInfo *pMVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o a_00;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o b_00;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields item;
  Il2CppObject *pIVar17;
  Il2CppObject *pIVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStackX_c;
  undefined1 local_d8 [8];
  float local_d0;
  float local_cc;
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  intptr_t local_b8;
  intptr_t iStack_b0;
  System_Runtime_InteropServices_GCHandle_Fields local_a8;
  Unity_IntegerTime_DiscreteTime_o UStack_a0;
  intptr_t local_98;
  intptr_t iStack_90;
  
  if (Il2CppMethodInitialized_184346e8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color32_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector4_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BoneWeight_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color32_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector4_get_Item);
    Il2CppMethodInitialized_184346e8f = '\x01';
  }
  pSVar7 = (__this->fields)._vertices;
  local_a8.handle._0_4_ = 0.0;
  local_a8.handle._4_4_ = 0.0;
  UStack_a0.fields.Value = (Unity_IntegerTime_DiscreteTime_Fields)0;
  local_98 = 0;
  iStack_90 = 0;
  if (pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    iVar5 = (pSVar7->fields)._size;
    System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
              ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)local_d8,
               (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar7,a,
               (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    fVar21 = local_d0;
    uVar16 = local_d8._4_4_;
    uVar15 = local_d8._0_4_;
    pSVar8 = (__this->fields)._vertices;
    if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a5816;
    System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
              ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)local_d8,
               (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar8,b,
               (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    pMVar14 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (t < 0.0) {
      fVar22 = 0.0;
    }
    else {
      fVar22 = t;
      if (1.0 < t) {
        fVar22 = 1.0;
      }
    }
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar9 = (pSVar7->fields)._items;
    if (pUVar9 == (UnityEngine_Vector3_array *)0x0) goto label_1821a5816;
    uVar6 = (pSVar7->fields)._size;
    fVar19 = ((float)local_d8._0_4_ - (float)uVar15) * fVar22 + (float)uVar15;
    fVar20 = ((float)local_d8._4_4_ - (float)uVar16) * fVar22 + (float)uVar16;
    fVar21 = (local_d0 - fVar21) * fVar22 + fVar21;
    if (uVar6 < (uint)pUVar9->max_length) {
      (pSVar7->fields)._size = uVar6 + 1;
      if ((uint)pUVar9->max_length <= uVar6) goto label_1821a581c;
      pUVar9->m_Items[(int)uVar6].fields.x = fVar19;
      pUVar9->m_Items[(int)uVar6].fields.y = fVar20;
      pUVar9->m_Items[(int)uVar6].fields.z = fVar21;
    }
    else {
      local_d8._0_4_ = fVar19;
      local_d8._4_4_ = fVar20;
      local_d0 = fVar21;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar7,(UnityEngine_Vector3_o *)local_d8,
                 (MethodInfo_99C850 *)pMVar14->klass->rgctx_data[0xe].method);
    }
    pSVar7 = (__this->fields)._normals;
    if (pSVar7 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a5816;
    System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
              ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)local_d8,
               (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar7,a,
               (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    pSVar8 = (__this->fields)._normals;
    if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a5816;
    System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
              ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)local_c8,
               (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar8,b,
               (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if (t < 0.0) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = t;
      if (1.0 < t) {
        fVar21 = 1.0;
      }
    }
    fVar22 = ((float)local_c8._0_4_ - (float)local_d8._0_4_) * fVar21 + (float)local_d8._0_4_;
    fVar19 = ((float)local_c8._4_4_ - (float)local_d8._4_4_) * fVar21 + (float)local_d8._4_4_;
    fVar21 = ((float)uStack_c0 - local_d0) * fVar21 + local_d0;
    local_c8._4_4_ = fVar19;
    local_c8._0_4_ = fVar22;
    uStack_c0._0_4_ = fVar21;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar20 = (float)il2cpp_runtime_helper_180546a40(local_c8,0);
    pMVar14 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (fVar20 <= 1e-05) {
      pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar22 = (pUVar10->zeroVector).fields.x;
      fVar19 = (pUVar10->zeroVector).fields.y;
      fVar21 = (pUVar10->zeroVector).fields.z;
    }
    else {
      fVar22 = fVar22 / fVar20;
      fVar19 = fVar19 / fVar20;
      fVar21 = fVar21 / fVar20;
    }
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar9 = (pSVar7->fields)._items;
    if (pUVar9 == (UnityEngine_Vector3_array *)0x0) goto label_1821a5816;
    uVar6 = (pSVar7->fields)._size;
    if (uVar6 < (uint)pUVar9->max_length) {
      (pSVar7->fields)._size = uVar6 + 1;
      if ((uint)pUVar9->max_length <= uVar6) goto label_1821a581c;
      pUVar9->m_Items[(int)uVar6].fields.x = fVar22;
      pUVar9->m_Items[(int)uVar6].fields.y = fVar19;
      pUVar9->m_Items[(int)uVar6].fields.z = fVar21;
    }
    else {
      local_c8._4_4_ = fVar19;
      local_c8._0_4_ = fVar22;
      uStack_c0._0_4_ = fVar21;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar7,(UnityEngine_Vector3_o *)local_c8,
                 (MethodInfo_99C850 *)pMVar14->klass->rgctx_data[0xe].method);
    }
    __this_00 = (__this->fields)._tangents;
    if (__this_00 == (System_Collections_Generic_List_Vector4__o *)0x0) goto label_1821a5816;
    System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___get_Item
              ((UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_o
                *)local_c8,(System_Collections_Generic_List_T__o *)__this_00,a,
               (MethodInfo_92B880 *)MethodInfo_System_Collections_Generic_List_Vector4_get_Item);
    __this_01 = (__this->fields)._tangents;
    if (__this_01 == (System_Collections_Generic_List_Vector4__o *)0x0) goto label_1821a5816;
    uVar15 = local_c8._0_4_;
    uVar16 = local_c8._4_4_;
    fVar21 = (float)uStack_c0;
    System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___get_Item
              ((UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_o
                *)local_d8,(System_Collections_Generic_List_T__o *)__this_01,b,
               (MethodInfo_92B880 *)MethodInfo_System_Collections_Generic_List_Vector4_get_Item);
    pMVar14 = MethodInfo_System_Collections_Generic_List_Vector4_Add;
    if (t < 0.0) {
      fVar22 = 0.0;
    }
    else {
      fVar22 = t;
      if (1.0 < t) {
        fVar22 = 1.0;
      }
    }
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar11 = (__this_00->fields)._items;
    if (pUVar11 == (UnityEngine_Vector4_array *)0x0) goto label_1821a5816;
    uVar6 = (__this_00->fields)._size;
    fVar19 = ((float)local_d8._0_4_ - (float)uVar15) * fVar22 + (float)uVar15;
    fVar20 = ((float)local_d8._4_4_ - (float)uVar16) * fVar22 + (float)uVar16;
    fVar21 = (local_d0 - fVar21) * fVar22 + fVar21;
    fVar22 = (local_cc - uStack_c0._4_4_) * fVar22 + uStack_c0._4_4_;
    if (uVar6 < (uint)pUVar11->max_length) {
      (__this_00->fields)._size = uVar6 + 1;
      if ((uint)pUVar11->max_length <= uVar6) goto label_1821a581c;
      local_c8._4_4_ = fVar20;
      local_c8._0_4_ = fVar19;
      uStack_c0._4_4_ = fVar22;
      uStack_c0._0_4_ = fVar21;
      pUVar2 = pUVar11->m_Items + (int)uVar6;
      (pUVar2->fields).x = fVar19;
      (pUVar2->fields).y = fVar20;
      (pUVar2->fields).z = fVar21;
      (pUVar2->fields).w = fVar22;
    }
    else {
      local_c8._4_4_ = fVar20;
      local_c8._0_4_ = fVar19;
      uStack_c0._4_4_ = fVar22;
      uStack_c0._0_4_ = fVar21;
      System_Collections_Generic_List_Vector4___AddWithResize
                (__this_00,(UnityEngine_Vector4_o *)local_c8,
                 (MethodInfo_99C4B0 *)pMVar14->klass->rgctx_data[0xe].method);
    }
    __this_02 = (__this->fields)._uv;
    if (__this_02 == (System_Collections_Generic_List_Vector2__o *)0x0) goto label_1821a5816;
    pIVar17 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)__this_02,a,
                         (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
    __this_03 = (__this->fields)._uv;
    if (__this_03 == (System_Collections_Generic_List_Vector2__o *)0x0) goto label_1821a5816;
    fStackX_c = (float)((ulonglong)pIVar17 >> 0x20);
    fVar21 = fStackX_c;
    pIVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)__this_03,b,
                         (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
    fStackX_c = (float)((ulonglong)pIVar18 >> 0x20);
    fVar22 = 0.0;
    if ((0.0 <= t) && (fVar22 = t, 1.0 < t)) {
      fVar22 = 1.0;
    }
    il2cpp_runtime_helper_18003dee0(__this_02,
                  CONCAT44((fStackX_c - fVar21) * fVar22 + fVar21,
                           (SUB84(pIVar18,0) - SUB84(pIVar17,0)) * fVar22 + SUB84(pIVar17,0)),
                  MethodInfo_System_Collections_Generic_List_Vector2_Add);
    __this_04 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._colors;
    if (__this_04 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) goto label_1821a5816;
    a_00 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                     (__this_04,a,
                      (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_Color32_get_Item);
    __this_05 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._colors;
    if (__this_05 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) goto label_1821a5816;
    b_00 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                     (__this_05,b,
                      (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_Color32_get_Item);
    item = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
           UnityEngine_Color32__Lerp(a_00.fields,b_00.fields,t,(MethodInfo *)0x0);
    pMVar14 = MethodInfo_System_Collections_Generic_List_Color32_Add;
    piVar1 = &(__this_04->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar12 = (__this_04->fields)._items;
    if (pSVar12 == (System_Text_RegularExpressions_RegexCharClass_SingleRange_array *)0x0) goto label_1821a5816;
    uVar6 = (__this_04->fields)._size;
    if (uVar6 < (uint)pSVar12->max_length) {
      (__this_04->fields)._size = uVar6 + 1;
      if ((uint)pSVar12->max_length <= uVar6) goto label_1821a581c;
      pSVar12->m_Items[(int)uVar6].fields = item;
    }
    else {
      System_Collections_Generic_List_RegexCharClass_SingleRange___AddWithResize
                (__this_04,(System_Text_RegularExpressions_RegexCharClass_SingleRange_o)item,
                 (MethodInfo_973E40 *)pMVar14->klass->rgctx_data[0xe].method);
    }
    __this_06 = (__this->fields)._weights;
    local_a8.handle._0_4_ = 0.0;
    local_a8.handle._4_4_ = 0.0;
    UStack_a0.fields.Value = (Unity_IntegerTime_DiscreteTime_Fields)0;
    local_98 = 0;
    iStack_90 = 0;
    UnityEngine_TextCore_Glyph__set_index
              ((UnityEngine_InputForUI_PointerState_o *)&local_a8,forearm,(MethodInfo *)0x0);
    UnityEngine_TextCore_LowLevel_MarkPositionAdjustment__set_xPositionAdjustment
              ((UnityEngine_TextCore_LowLevel_MarkPositionAdjustment_o *)&local_a8,1.0,(MethodInfo *)0x0);
    pMVar14 = MethodInfo_System_Collections_Generic_List_BoneWeight_Add;
    if (__this_06 != (System_Collections_Generic_List_BoneWeight__o *)0x0) {
      piVar1 = &(__this_06->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar13 = (__this_06->fields)._items;
      if (pUVar13 != (UnityEngine_BoneWeight_array *)0x0) {
        uVar6 = (__this_06->fields)._size;
        if (uVar6 < (uint)pUVar13->max_length) {
          (__this_06->fields)._size = uVar6 + 1;
          if ((uint)pUVar13->max_length <= uVar6) {
label_1821a581c:
            ThrowIndexOutOfRangeException();
          }
          pUVar3 = pUVar13->m_Items + (int)uVar6;
          (pUVar3->fields).m_Weight0 = (float)(undefined4)local_a8.handle;
          (pUVar3->fields).m_Weight1 = (float)local_a8.handle._4_4_;
          *(Unity_IntegerTime_DiscreteTime_Fields *)&(pUVar3->fields).m_Weight2 = UStack_a0.fields.Value;
          piVar4 = (intptr_t *)&pUVar13->m_Items[(int)uVar6].fields.m_BoneIndex0;
          *piVar4 = local_98;
          piVar4[1] = iStack_90;
        }
        else {
          local_c8 = (undefined1  [8])local_a8.handle;
          uStack_c0 = UStack_a0.fields.Value;
          local_b8 = local_98;
          iStack_b0 = iStack_90;
          System_Collections_Generic_List_Painter2D_Painter2DJobData___AddWithResize
                    ((System_Collections_Generic_List_Painter2D_Painter2DJobData__o *)__this_06,
                     (UnityEngine_UIElements_Painter2D_Painter2DJobData_o *)local_c8,
                     (MethodInfo_93E170 *)pMVar14->klass->rgctx_data[0xe].method);
        }
        return iVar5;
      }
    }
  }
label_1821a5816:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$AddBloodStain
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__AddBloodStain (Characters_TitanLimbMesh_CutMeshData_o* __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, System_Collections_Generic_List_int__o* polygon, Characters_TitanLimbMesh_CutPlane_o* cut, const MethodInfo* method);
// 0x1821a1f50
// eh: try 0x1821a21ce..0x1821a2799 -> pad 0x18333eee0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a25bb: mov rdx, qword ptr [rip + 0x1ee5d26]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1821a25c2: mov rcx, qword ptr [rsp + 0x98]
// asm:   0x1821a25ca: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821a25cf: mov rcx, qword ptr [rsp + 0x90]
// asm:   0x1821a25d7: test rcx, rcx
// asm:   0x1821a25da: jne 0x1821a2799
// asm:   0x1821a25e0: mov r12d, dword ptr [rsp + 0x60]
// asm:   0x1821a25e5: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x1821a25ed: mov rdi, qword ptr [rsp + 0xc8]
// asm:   0x1821a2799: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333eee0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333eee5: push rbp
// asm:   0x18333eee6: sub rsp, 0x40
// asm:   0x18333eeea: mov rbp, rdx
// asm:   0x18333eeed: mov rax, qword ptr [rbp + 0x120]
// asm:   0x18333eef4: mov rcx, qword ptr [rax]
// asm:   0x18333eef7: mov qword ptr [rbp + 0x90], rcx
// asm:   0x18333eefe: movabs rax, 0
// asm:   0x18333ef08: add rsp, 0x40
// asm:   0x18333ef0c: pop rbp
// asm:   0x18333ef0d: ret 

void Characters_TitanLimbMesh_CutMeshData__AddBloodStain
               (Characters_TitanLimbMesh_CutMeshData_o *__this,UnityEngine_Vector3_o *a,
               UnityEngine_Vector3_o *b,System_Collections_Generic_List_int__o *polygon,
               Characters_TitanLimbMesh_CutPlane_o *cut,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint32_t item;
  int32_t bone;
  uint uVar6;
  System_Collections_Generic_List_Vector3__o *pSVar7;
  System_Collections_Generic_List_BoneWeight__o *__this_00;
  System_Collections_Generic_List_uint__o *pSVar8;
  System_UInt32_array *pSVar9;
  double dVar10;
  UnityEngine_Vector2_o uv;
  MethodInfo *pMVar11;
  int32_t index;
  bool bVar12;
  uint32_t item_00;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  UnityEngine_Color32_o local_res10;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o local_1c0;
  float local_1b0;
  float local_1ac;
  uint32_t local_1a8;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o local_1a0 [2];
  UnityEngine_Vector3_o local_188;
  undefined1 local_178 [16];
  Il2CppObject *local_168;
  undefined1 local_160 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_158;
  Il2CppObject *local_150;
  System_Collections_Generic_List_int__o *local_148;
  Characters_TitanLimbMesh_CutMeshData_o *local_140;
  UnityEngine_Vector3_Fields local_138;
  UnityEngine_Vector3_Fields local_128;
  UnityEngine_Vector3_Fields local_118;
  UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_o local_108 [6];
  
  if (Il2CppMethodInitialized_184346e90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BoneWeight_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BoneWeight_set_Item);
    Il2CppMethodInitialized_184346e90 = '\x01';
  }
  local_160 = (undefined1  [8])0x0;
  pUStack_158 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_150 = (Il2CppObject *)0x0;
  if (Il2CppMethodInitialized_18433dee7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433dee7 = '\x01';
  }
  fVar22 = (a->fields).x - (b->fields).x;
  fVar19 = (a->fields).y - (b->fields).y;
  fVar20 = (a->fields).z - (b->fields).z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar10 = (double)(fVar20 * fVar20 + fVar19 * fVar19 + fVar22 * fVar22);
  if (dVar10 < 0.0) {
    dVar10 = sqrt(dVar10);
  }
  else {
    dVar10 = SQRT(dVar10);
  }
  fVar19 = (float)dVar10;
  if (fVar19 < 1e-06) {
    return;
  }
  fVar20 = ((b->fields).x - (a->fields).x) / fVar19;
  fVar23 = ((b->fields).y - (a->fields).y) / fVar19;
  fVar22 = ((b->fields).z - (a->fields).z) / fVar19;
  pSVar7 = (__this->fields)._vertices;
  local_1b0 = fVar20;
  local_1ac = fVar19;
  if ((pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0) &&
     (local_148 = polygon, local_140 = __this, polygon != (System_Collections_Generic_List_int__o *)0x0)) {
    item = (pSVar7->fields)._size;
    local_1a8 = item;
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_178,
               (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)polygon,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_160 = (undefined1  [8])local_178._0_8_;
    pUStack_158 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_178._8_8_;
    local_150 = local_168;
    local_178._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_178._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_160;
    while (bVar12 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                              ((System_Collections_Generic_List_Enumerator_T__o *)local_160,
                               (MethodInfo_1530180 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar12) {
      pSVar7 = (__this->fields)._vertices;
      if (pSVar7 == (System_Collections_Generic_List_Vector3__o *)0x0) {
        ThrowNullReferenceException();
      }
      index = (int32_t)local_150;
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                (&local_1c0,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar7,
                 (int32_t)local_150,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      fVar21 = (fVar22 * ((float)local_1c0.fields.z - (a->fields).z) +
               fVar23 * ((float)local_1c0.fields.y - (a->fields).y) +
               fVar20 * ((float)local_1c0.fields.x - (a->fields).x)) / fVar19;
      if (fVar21 < 0.0) {
        fVar21 = 0.0;
      }
      else if (1.0 < fVar21) {
        fVar21 = 1.0;
      }
      if (cut == (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar14 = (float)local_1c0.fields.x - (a->fields).x;
      fVar18 = (float)local_1c0.fields.y - (a->fields).y;
      fVar24 = (float)local_1c0.fields.z - (a->fields).z;
      fVar2 = (cut->fields).Normal.fields.z;
      fVar3 = (cut->fields).Normal.fields.y;
      fVar4 = (cut->fields).Normal.fields.x;
      fVar5 = (cut->fields).BloodStainScale;
      pSVar7 = (__this->fields)._normals;
      if (pSVar7 == (System_Collections_Generic_List_Vector3__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                (local_1a0,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar7,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      fVar15 = fVar19 * 0.002;
      fVar25 = (float)local_1a0[0].fields.x * fVar15;
      fVar26 = (float)local_1a0[0].fields.y * fVar15;
      fVar15 = (float)local_1a0[0].fields.z * fVar15;
      pSVar7 = (__this->fields)._normals;
      if (pSVar7 == (System_Collections_Generic_List_Vector3__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_138,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar7,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      bone = (cut->fields).ParentBone;
      fVar20 = UnityEngine_Mathf__GammaToLinearSpace(0.46,(MethodInfo *)0x0);
      fVar16 = UnityEngine_Mathf__GammaToLinearSpace(0.04,(MethodInfo *)0x0);
      fVar17 = UnityEngine_Mathf__GammaToLinearSpace(0.03,(MethodInfo *)0x0);
      if (fVar20 < 0.0) {
        fVar20 = 0.0;
      }
      else if (1.0 < fVar20) {
        fVar20 = 1.0;
      }
      fVar20 = (float)il2cpp_runtime_helper_180012930(fVar20 * 255.0);
      if (fVar16 < 0.0) {
        fVar16 = 0.0;
      }
      else if (1.0 < fVar16) {
        fVar16 = 1.0;
      }
      fVar16 = (float)il2cpp_runtime_helper_180012930(fVar16 * 255.0);
      local_res10.fields._overlap_0._at_g.g = (char)(int)fVar16;
      local_res10.fields._overlap_0._at_b._lead[0] = (char)(int)fVar20;
      if (fVar17 < 0.0) {
        fVar17 = 0.0;
      }
      else if (1.0 < fVar17) {
        fVar17 = 1.0;
      }
      fVar20 = (float)il2cpp_runtime_helper_180012930(fVar17 * 255.0);
      local_res10.fields._overlap_0._at_b.b = (char)(int)fVar20;
      fVar16 = (float)il2cpp_runtime_helper_180012930(0x4337999a);
      fVar20 = local_1b0;
      local_res10.fields._overlap_0._at_a.a = (char)(int)fVar16;
      local_128.y = fVar23;
      local_128.x = local_1b0;
      local_118.x = local_138.x;
      local_118.y = local_138.y;
      local_118.z = local_138.z;
      local_188.fields.x = fVar25 + (float)local_1c0.fields.x;
      local_188.fields.y = fVar26 + (float)local_1c0.fields.y;
      local_188.fields.z = fVar15 + (float)local_1c0.fields.z;
      uv.fields.y = -(fVar24 * fVar2 + fVar18 * fVar3 + fVar14 * fVar4) / (fVar19 * 2.5 * fVar5);
      uv.fields.x = fVar21 + 2.0;
      local_128.z = fVar22;
      Characters_TitanLimbMesh_CutMeshData__AddWoundVertex
                (__this,&local_188,uv,(UnityEngine_Vector3_o *)&local_118,(UnityEngine_Vector3_o *)&local_128,
                 bone,local_res10,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._weights;
      if (__this_00 == (System_Collections_Generic_List_BoneWeight__o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar13 = (__this_00->fields)._size;
      System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState___get_Item
                (local_108,
                 (System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *)
                 __this_00,index,
                 (MethodInfo_94FF20 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
      System_Collections_Generic_List_Painter2D_Painter2DJobData___set_Item
                ((System_Collections_Generic_List_Painter2D_Painter2DJobData__o *)__this_00,iVar13 + -1,
                 (UnityEngine_UIElements_Painter2D_Painter2DJobData_o *)local_108,
                 (MethodInfo_94FF90 *)MethodInfo_System_Collections_Generic_List_BoneWeight_set_Item);
      fVar19 = local_1ac;
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_160,
               MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    iVar13 = 1;
    while( true ) {
      pMVar11 = MethodInfo_System_Collections_Generic_List_int_Add;
      if ((polygon->fields)._size <= iVar13 + 1) {
        return;
      }
      pSVar8 = (System_Collections_Generic_List_uint__o *)(__this->fields)._wound;
      if (pSVar8 == (System_Collections_Generic_List_uint__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (pSVar8->fields)._items;
      if (pSVar9 == (System_UInt32_array *)0x0) break;
      uVar6 = (pSVar8->fields)._size;
      if (uVar6 < (uint)pSVar9->max_length) {
        (pSVar8->fields)._size = uVar6 + 1;
        if ((uint)pSVar9->max_length <= uVar6) goto label_1821a279f;
        pSVar9->m_Items[(int)uVar6] = item;
      }
      else {
        System_Collections_Generic_List_uint___AddWithResize
                  (pSVar8,item,(MethodInfo_91A500 *)pMVar11->klass->rgctx_data[0xe].method);
      }
      pMVar11 = MethodInfo_System_Collections_Generic_List_int_Add;
      pSVar8 = (System_Collections_Generic_List_uint__o *)(__this->fields)._wound;
      if (pSVar8 == (System_Collections_Generic_List_uint__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (pSVar8->fields)._items;
      if (pSVar9 == (System_UInt32_array *)0x0) break;
      uVar6 = (pSVar8->fields)._size;
      if (uVar6 < (uint)pSVar9->max_length) {
        (pSVar8->fields)._size = uVar6 + 1;
        if ((uint)pSVar9->max_length <= uVar6) goto label_1821a279f;
        pSVar9->m_Items[(int)uVar6] = iVar13 + item;
      }
      else {
        System_Collections_Generic_List_uint___AddWithResize
                  (pSVar8,iVar13 + item,(MethodInfo_91A500 *)pMVar11->klass->rgctx_data[0xe].method);
      }
      pMVar11 = MethodInfo_System_Collections_Generic_List_int_Add;
      pSVar8 = (System_Collections_Generic_List_uint__o *)(__this->fields)._wound;
      if (pSVar8 == (System_Collections_Generic_List_uint__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (pSVar8->fields)._items;
      if (pSVar9 == (System_UInt32_array *)0x0) break;
      item_00 = item + 1 + iVar13;
      uVar6 = (pSVar8->fields)._size;
      if (uVar6 < (uint)pSVar9->max_length) {
        (pSVar8->fields)._size = uVar6 + 1;
        if ((uint)pSVar9->max_length <= uVar6) {
label_1821a279f:
          ThrowIndexOutOfRangeException();
        }
        pSVar9->m_Items[(int)uVar6] = item_00;
        iVar13 = iVar13 + 1;
      }
      else {
        System_Collections_Generic_List_uint___AddWithResize
                  (pSVar8,item_00,(MethodInfo_91A500 *)pMVar11->klass->rgctx_data[0xe].method);
        iVar13 = iVar13 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$AddCap
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__AddCap (Characters_TitanLimbMesh_CutMeshData_o* __this, System_Collections_Generic_List_Vector3__o* rim, Characters_TitanLimbMesh_CutPlane_o* wrist, const MethodInfo* method);
// 0x1821a3350
// eh: try 0x1821a3580..0x1821a4f53 -> pad 0x18333ef30 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 72 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a35e4: mov rdx, qword ptr [rip + 0x1ef9725]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x1821a35eb: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1821a35f0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821a35f5: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1821a35fa: test rcx, rcx
// asm:   0x1821a35fd: jne 0x1821a5085
// asm:   0x1821a3603: mov rsi, qword ptr [rsp + 0x4e8]
// asm:   0x1821a360b: mov rdi, qword ptr [rsp + 0x118]
// asm:   0x1821a3613: mov qword ptr [rsp + 0x110], rdi
// asm:   0x1821a361b: mov r15, qword ptr [rsp + 0x4f0]
// asm:   0x1821a3623: mov r14, rdi
// asm:   0x1821a396b: movss dword ptr [rsp + 0x50], xmm15
// asm:   0x1821a3972: jmp 0x1821a38a0
// asm:   0x1821a3988: mov rdx, qword ptr [rip + 0x1ef9381]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x1821a398f: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1821a3994: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821a3999: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1821a399e: test rcx, rcx
// asm:   0x1821a39a1: jne 0x1821a508b
// asm:   0x1821a39a7: mov rsi, qword ptr [rsp + 0x4e8]
// asm:   0x1821a39af: mov rdi, qword ptr [rsp + 0x118]
// asm:   0x1821a39b7: mov qword ptr [rsp + 0x110], rdi
// asm:   0x1821a39bf: movss xmm15, dword ptr [rsp + 0x50]
// asm:   0x1821a39c6: xorps xmm11, xmm11
// asm:   0x1821a3b64: mov eax, r15d
// asm:   0x1821a4f45: movss dword ptr [rsp + 0x4e8], xmm7
// asm:   0x1821a4f4e: jmp 0x1821a4e71
// asm:   0x1821a4f64: mov rdx, qword ptr [rip + 0x1ef7da5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x1821a4f6b: mov rcx, qword ptr [rsp + 0xe8]
// asm:   0x1821a4f73: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821a4f78: mov rcx, qword ptr [rsp + 0xe0]
// asm:   0x1821a4f80: test rcx, rcx
// asm:   0x1821a4f83: jne 0x1821a50d9
// asm:   0x1821a4f89: mov rdi, qword ptr [rsp + 0x118]
// asm:   0x1821a4f91: movss xmm15, dword ptr [rsp + 0x50]
// asm:   0x1821a4f98: movss xmm7, dword ptr [rsp + 0x4e8]
// asm:   0x1821a5085: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821a508b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821a50d9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333ef30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ef35: push rbp
// asm:   0x18333ef36: sub rsp, 0x40
// asm:   0x18333ef3a: mov rbp, rdx
// asm:   0x18333ef3d: mov rax, qword ptr [rbp + 0x3c0]
// asm:   0x18333ef44: mov rcx, qword ptr [rax]
// asm:   0x18333ef47: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333ef4b: movabs rax, 0
// asm:   0x18333ef55: add rsp, 0x40
// asm:   0x18333ef59: pop rbp
// asm:   0x18333ef5a: ret 
// asm:   0x18333ef60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ef65: push rbp
// asm:   0x18333ef66: sub rsp, 0x40
// asm:   0x18333ef6a: mov rbp, rdx
// asm:   0x18333ef6d: mov rax, qword ptr [rbp + 0x3c8]
// asm:   0x18333ef74: mov rcx, qword ptr [rax]
// asm:   0x18333ef77: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333ef7b: movabs rax, 0
// asm:   0x18333ef85: add rsp, 0x40
// asm:   0x18333ef89: pop rbp
// asm:   0x18333ef8a: ret 
// asm:   0x18333ef90: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ef95: push rbp
// asm:   0x18333ef96: sub rsp, 0x40
// asm:   0x18333ef9a: mov rbp, rdx
// asm:   0x18333ef9d: mov rax, qword ptr [rbp + 0x3d0]
// asm:   0x18333efa4: mov rcx, qword ptr [rax]
// asm:   0x18333efa7: mov qword ptr [rbp + 0xe0], rcx
// asm:   0x18333efae: movabs rax, 0
// asm:   0x18333efb8: add rsp, 0x40
// asm:   0x18333efbc: pop rbp
// asm:   0x18333efbd: ret 

void Characters_TitanLimbMesh_CutMeshData__AddCap
               (Characters_TitanLimbMesh_CutMeshData_o *__this,System_Collections_Generic_List_Vector3__o *rim
               ,Characters_TitanLimbMesh_CutPlane_o *wrist,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  System_Collections_Generic_List_Vector3__o *pSVar8;
  bool bVar9;
  Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o *pCVar10;
  System_Comparison_T__o *__this_00;
  System_Collections_Generic_List_Vector3__o *__this_01;
  Il2CppObject *pIVar11;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint index;
  MethodInfo *method_00;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 local_498;
  float local_490;
  float local_488;
  undefined1 local_478 [16];
  UnityEngine_Vector3_o local_468;
  undefined8 local_458;
  float local_450;
  System_Nullable_Vector3__Fields local_448;
  undefined1 local_438 [16];
  undefined8 local_428;
  undefined8 uStack_420;
  UnityEngine_Vector3_o local_418;
  UnityEngine_Vector3_o local_408;
  undefined1 local_3f8 [12];
  float fStack_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  Characters_TitanLimbMesh_CutPlane_o *local_3d0;
  Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o *local_3c8;
  Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o *local_3c0;
  UnityEngine_Vector3_Fields local_3b8;
  UnityEngine_Vector3_Fields local_3a8;
  Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o *local_398;
  UnityEngine_Color_Fields local_388;
  System_Collections_Generic_List_Enumerator_T__o local_378;
  undefined8 uStack_360;
  UnityEngine_Vector3_o local_358;
  UnityEngine_Vector3_o local_348;
  UnityEngine_Vector3_o local_338;
  UnityEngine_Vector3_o local_328;
  UnityEngine_Vector3_o local_318;
  UnityEngine_Color_o local_308;
  UnityEngine_Color_o local_2f8;
  UnityEngine_Color_o local_2e8;
  UnityEngine_Color_o local_2d8;
  UnityEngine_Color_o local_2c8;
  UnityEngine_Color_o local_2b8;
  UnityEngine_Color_o local_2a8;
  UnityEngine_Color_o local_298;
  UnityEngine_Vector3_Fields local_288;
  UnityEngine_Vector3_Fields local_278;
  UnityEngine_Vector3_Fields local_268;
  UnityEngine_Vector3_Fields local_258;
  UnityEngine_Vector3_Fields local_248;
  UnityEngine_Vector3_Fields local_238;
  UnityEngine_Vector3_Fields local_228;
  UnityEngine_Vector3_Fields local_218;
  UnityEngine_Vector3_Fields local_208;
  UnityEngine_Vector3_Fields local_1f8;
  UnityEngine_Vector3_Fields local_1e8;
  UnityEngine_Vector3_Fields local_1d8;
  UnityEngine_Vector3_Fields local_1c8;
  UnityEngine_Vector3_Fields local_1b8;
  UnityEngine_Vector3_Fields local_1a8;
  UnityEngine_Vector3_Fields local_198;
  UnityEngine_Vector3_Fields local_188;
  UnityEngine_Vector3_Fields local_178;
  UnityEngine_Vector3_Fields local_168;
  UnityEngine_Vector3_Fields local_158;
  UnityEngine_Vector3_Fields local_148;
  UnityEngine_Vector3_Fields local_138;
  System_Nullable_Vector3__Fields local_128 [3];
  System_Nullable_Vector3__Fields local_f8;
  System_Nullable_Vector3__Fields local_e8 [11];
  
  if (Il2CppMethodInitialized_184346e91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_Vector3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Sort);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f06b0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_TitanLimbMesh_CutMeshData_c__DisplayClass13_0_AddCap_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Characters_TitanLimbMesh_CutMeshData_c__DisplayClass13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_184346e91 = '\x01';
  }
  local_438._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_438._8_8_ = 0;
  local_428 = (Il2CppObject *)0x0;
  uStack_420 = 0;
  local_498 = (System_Collections_Generic_List_Vector3__o *)0x0;
  local_490 = 0.0;
  pCVar10 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutMeshData_c__DisplayClass13_0);
  local_3c8 = pCVar10;
  Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pCVar10,(MethodInfo *)0x0);
  if (rim != (System_Collections_Generic_List_Vector3__o *)0x0) {
    if ((rim->fields)._size < 3) {
      return;
    }
    local_3c0 = pCVar10;
    local_398 = pCVar10;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    if (pCVar10 != (Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o *)0x0) {
      pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar24 = (pUVar7->zeroVector).fields.z;
      fVar27 = (pUVar7->zeroVector).fields.y;
      (pCVar10->fields).center.fields.x = (pUVar7->zeroVector).fields.x;
      (pCVar10->fields).center.fields.y = fVar27;
      (pCVar10->fields).center.fields.z = fVar24;
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___GetEnumerator
                (&local_378,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)rim,
                 (MethodInfo_930B50 *)MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
      local_438._0_8_ = local_378.fields._list;
      local_438._8_4_ = local_378.fields._index;
      local_438._12_4_ = local_378.fields._version;
      local_428 = local_378.fields._current;
      uStack_420 = uStack_360;
      local_478._0_4_ = 0.0;
      local_478._4_4_ = 0.0;
      local_478._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_438;
      while (bVar9 = System_Collections_Generic_List_Enumerator_ProbeBrickPool_BrickChunkAlloc___MoveNext
                               ((System_Collections_Generic_List_Enumerator_T__o *)local_438,
                                (MethodInfo_15296D0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext), bVar9
            ) {
        (pCVar10->fields).center.fields.x = (float)local_428 + (pCVar10->fields).center.fields.x;
        (pCVar10->fields).center.fields.y = local_428._4_4_ + (pCVar10->fields).center.fields.y;
        (pCVar10->fields).center.fields.z = (float)uStack_420 + (pCVar10->fields).center.fields.z;
      }
      System_Collections_Generic_List_Enumerator_Vector3___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_438,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
      fVar24 = (float)(rim->fields)._size;
      (pCVar10->fields).center.fields.x = (pCVar10->fields).center.fields.x / fVar24;
      (pCVar10->fields).center.fields.y = (pCVar10->fields).center.fields.y / fVar24;
      (pCVar10->fields).center.fields.z = (pCVar10->fields).center.fields.z / fVar24;
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_458,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)rim,0,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      fVar24 = (float)local_458 - (pCVar10->fields).center.fields.x;
      fVar27 = local_458._4_4_ - (pCVar10->fields).center.fields.y;
      fVar30 = local_450 - (pCVar10->fields).center.fields.z;
      local_498 = (System_Collections_Generic_List_Vector3__o *)CONCAT44(fVar27,fVar24);
      local_490 = fVar30;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar21 = (float)il2cpp_runtime_helper_180546a40(&local_498,0);
      if (fVar21 <= 1e-05) {
        pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar24 = (pUVar7->zeroVector).fields.x;
        fVar27 = (pUVar7->zeroVector).fields.y;
        fVar30 = (pUVar7->zeroVector).fields.z;
      }
      else {
        fVar24 = fVar24 / fVar21;
        fVar27 = fVar27 / fVar21;
        fVar30 = fVar30 / fVar21;
      }
      (pCVar10->fields).axisX.fields.x = fVar24;
      (pCVar10->fields).axisX.fields.y = fVar27;
      (pCVar10->fields).axisX.fields.z = fVar30;
      if (wrist != (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
        fVar24 = (wrist->fields).Normal.fields.x;
        fVar27 = (wrist->fields).Normal.fields.y;
        fVar30 = (wrist->fields).Normal.fields.z;
        fVar21 = (pCVar10->fields).axisX.fields.x;
        fVar28 = (pCVar10->fields).axisX.fields.y;
        fVar26 = (pCVar10->fields).axisX.fields.z;
        fVar25 = fVar26 * fVar27 - fVar28 * fVar30;
        fVar30 = fVar21 * fVar30 - fVar26 * fVar24;
        fVar24 = fVar28 * fVar24 - fVar21 * fVar27;
        local_498 = (System_Collections_Generic_List_Vector3__o *)CONCAT44(fVar30,fVar25);
        local_490 = fVar24;
        local_3d0 = wrist;
        if (Il2CppMethodInitialized_18433de5f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5f = '\x01';
        }
        fVar27 = (float)il2cpp_runtime_helper_180546a40(&local_498,0);
        if (fVar27 <= 1e-05) {
          pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar25 = (pUVar7->zeroVector).fields.x;
          fVar30 = (pUVar7->zeroVector).fields.y;
          fVar24 = (pUVar7->zeroVector).fields.z;
        }
        else {
          fVar25 = fVar25 / fVar27;
          fVar30 = fVar30 / fVar27;
          fVar24 = fVar24 / fVar27;
        }
        (pCVar10->fields).axisY.fields.x = fVar25;
        (pCVar10->fields).axisY.fields.y = fVar30;
        (pCVar10->fields).axisY.fields.z = fVar24;
        __this_00 = (System_Comparison_T__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_Vector3);
        System_Comparison_Vector3____ctor
                  (__this_00,(Il2CppObject *)pCVar10,
                   (intptr_t)MethodInfo_Characters_TitanLimbMesh_CutMeshData_c__DisplayClass13_0_AddCap_b__0,
                   (MethodInfo_133FF50 *)0x0);
        System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___Sort_9364c0
                  ((System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)rim,__this_00,
                   (MethodInfo_9364C0 *)MethodInfo_System_Collections_Generic_List_Vector3_Sort);
        local_488 = 0.0;
        System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___GetEnumerator
                  (&local_378,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)rim,
                   (MethodInfo_930B50 *)MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
        local_438._0_8_ = local_378.fields._list;
        local_438._8_4_ = local_378.fields._index;
        local_438._12_4_ = local_378.fields._version;
        local_428 = local_378.fields._current;
        uStack_420 = uStack_360;
        local_478._0_4_ = 0.0;
        local_478._4_4_ = 0.0;
        fVar24 = 0.0;
        local_478._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_438;
        while (bVar9 = System_Collections_Generic_List_Enumerator_ProbeBrickPool_BrickChunkAlloc___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_T__o *)local_438,
                                  (MethodInfo_15296D0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext),
              bVar9) {
          fVar28 = (float)local_428;
          fVar26 = local_428._4_4_;
          fVar25 = (float)uStack_420;
          fVar27 = (pCVar10->fields).center.fields.x;
          fVar30 = (pCVar10->fields).center.fields.y;
          fVar21 = (pCVar10->fields).center.fields.z;
          if (Il2CppMethodInitialized_18433de59 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_18433de59 = '\x01';
          }
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          fVar26 = fVar26 - fVar30;
          fVar28 = fVar28 - fVar27;
          fVar25 = fVar25 - fVar21;
          dVar23 = (double)(fVar26 * fVar26 + fVar28 * fVar28 + fVar25 * fVar25);
          if (dVar23 < 0.0) {
            dVar23 = sqrt(dVar23);
          }
          else {
            dVar23 = SQRT(dVar23);
          }
          fVar27 = (float)dVar23;
          local_488 = fVar24;
          if (fVar24 <= fVar27) {
            fVar24 = fVar27;
            local_488 = fVar27;
          }
        }
        System_Collections_Generic_List_Enumerator_Vector3___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_438,
                   MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
        iVar19 = (rim->fields)._size;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3)
        ;
        local_498 = __this_01;
        System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo____ctor_92a4f0
                  ((System_Collections_Generic_List_T__o *)__this_01,iVar19 * 2,
                   (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f06b0);
        for (iVar19 = 0; iVar19 < (rim->fields)._size; iVar19 = iVar19 + 1) {
          System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                    ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_458,
                     (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)rim,
                     (iVar19 + 1) % (rim->fields)._size,
                     (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
          fVar21 = local_450;
          fVar27 = (float)local_458;
          fVar30 = local_458._4_4_;
          method_00 = (MethodInfo *)rim;
          System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                    ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_408,
                     (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)rim,iVar19,
                     (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
          fVar25 = local_408.fields.z;
          fVar26 = local_408.fields.y;
          fVar28 = local_408.fields.x;
          if (Il2CppMethodInitialized_18433dee7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_18433dee7 = '\x01';
          }
          fVar28 = fVar28 - fVar27;
          fVar26 = fVar26 - fVar30;
          fVar25 = fVar25 - fVar21;
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          dVar23 = (double)(fVar26 * fVar26 + fVar28 * fVar28 + fVar25 * fVar25);
          if (dVar23 < 0.0) {
            dVar23 = sqrt(dVar23);
          }
          else {
            dVar23 = SQRT(dVar23);
          }
          if (Il2CppMethodInitialized_18433df29 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_18433df29 = '\x01';
          }
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          dVar23 = il2cpp_runtime_helper_1804f45c0((double)((float)dVar23 / (fVar24 * 0.32)),method_00);
          iVar20 = (int)dVar23;
          if (iVar20 < 1) {
            iVar20 = 1;
          }
          iVar17 = 0;
          do {
            System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                      ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_418,
                       (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)rim,iVar19,
                       (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
            fVar28 = (float)iVar17 / (float)iVar20;
            if (fVar28 < 0.0) {
              fVar28 = 0.0;
            }
            else if (1.0 < fVar28) {
              fVar28 = 1.0;
            }
            if (__this_01 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a507f;
            local_468.fields.x = (fVar27 - local_418.fields.x) * fVar28 + local_418.fields.x;
            local_468.fields.y = (fVar30 - local_418.fields.y) * fVar28 + local_418.fields.y;
            local_468.fields.z = (fVar21 - local_418.fields.z) * fVar28 + local_418.fields.z;
            il2cpp_runtime_helper_180012810(__this_01,&local_468);
            iVar17 = iVar17 + 1;
          } while (iVar17 < iVar20);
        }
        if (__this_01 != (System_Collections_Generic_List_Vector3__o *)0x0) {
          pIVar11 = SZArrayNew(TypeInfo_UnityEngine_Vector3_array,(__this_01->fields)._size);
          local_458 = pIVar11;
          pIVar12 = SZArrayNew(TypeInfo_UnityEngine_Vector3_array,(__this_01->fields)._size);
          pIVar13 = SZArrayNew(TypeInfo_UnityEngine_Vector3_array,(__this_01->fields)._size);
          for (uVar18 = 0; (int)uVar18 < (__this_01->fields)._size; uVar18 = uVar18 + 1) {
            fVar27 = (float)il2cpp_runtime_helper_1804f5fc0((float)(int)uVar18 * 12.9898 + 4.1414);
            fVar30 = (float)il2cpp_runtime_helper_1804f4110();
            fVar30 = fVar27 * 43758.547 - fVar30;
            if (fVar30 < 0.0) {
              fVar30 = 0.0;
            }
            else if (1.0 < fVar30) {
              fVar30 = 1.0;
            }
            System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                      ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_468,
                       (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)__this_01,uVar18,
                       (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
            fVar21 = fVar30 * 0.05 + 0.87;
            fVar27 = (fVar30 * 0.07 + 0.025) * fVar24;
            if (pIVar11 == (Il2CppObject *)0x0) goto label_1821a507f;
            if (*(uint *)&pIVar11[1].monitor <= uVar18) {
label_1821a5091:
              ThrowIndexOutOfRangeException();
            }
            fVar31 = local_468.fields.x - (pCVar10->fields).center.fields.x;
            fVar32 = local_468.fields.y - (pCVar10->fields).center.fields.y;
            fVar33 = local_468.fields.z - (pCVar10->fields).center.fields.z;
            fVar28 = (pCVar10->fields).center.fields.y;
            fVar26 = (wrist->fields).Normal.fields.y;
            fVar25 = (wrist->fields).Normal.fields.z;
            fVar34 = (pCVar10->fields).center.fields.z;
            lVar14 = (longlong)(int)uVar18;
            *(float *)((longlong)&pIVar11[2].klass + lVar14 * 0xc) =
                 (fVar31 * fVar21 + (pCVar10->fields).center.fields.x) -
                 fVar27 * (wrist->fields).Normal.fields.x;
            *(float *)((longlong)&pIVar11[2].klass + lVar14 * 0xc + 4) =
                 (fVar32 * fVar21 + fVar28) - fVar27 * fVar26;
            *(float *)((longlong)&pIVar11[2].monitor + lVar14 * 0xc) =
                 (fVar33 * fVar21 + fVar34) - fVar27 * fVar25;
            fVar28 = fVar30 * 0.12 + 0.54;
            fVar27 = (float)il2cpp_runtime_helper_1804f5fc0((float)(int)(uVar18 + 0x11) * 12.9898 + 4.1414);
            fVar21 = (float)il2cpp_runtime_helper_1804f4110();
            fVar21 = fVar27 * 43758.547 - fVar21;
            if (fVar21 < 0.0) {
              fVar21 = 0.0;
            }
            else if (1.0 < fVar21) {
              fVar21 = 1.0;
            }
            fVar27 = (fVar21 * 0.13 + 0.15) * fVar24;
            if (pIVar12 == (Il2CppObject *)0x0) goto label_1821a507f;
            if (*(uint *)&pIVar12[1].monitor <= uVar18) goto label_1821a5091;
            fVar21 = (pCVar10->fields).center.fields.y;
            fVar26 = (wrist->fields).Normal.fields.y;
            fVar25 = (wrist->fields).Normal.fields.z;
            fVar34 = (pCVar10->fields).center.fields.z;
            lVar14 = (longlong)(int)uVar18;
            *(float *)((longlong)&pIVar12[2].klass + lVar14 * 0xc) =
                 (fVar28 * fVar31 + (pCVar10->fields).center.fields.x) -
                 fVar27 * (wrist->fields).Normal.fields.x;
            *(float *)((longlong)&pIVar12[2].klass + lVar14 * 0xc + 4) =
                 (fVar28 * fVar32 + fVar21) - fVar27 * fVar26;
            *(float *)((longlong)&pIVar12[2].monitor + lVar14 * 0xc) =
                 (fVar28 * fVar33 + fVar34) - fVar27 * fVar25;
            fVar27 = (fVar30 * 0.05 + 0.39) * fVar24;
            if (pIVar13 == (Il2CppObject *)0x0) goto label_1821a507f;
            if (*(uint *)&pIVar13[1].monitor <= uVar18) goto label_1821a5091;
            fVar30 = (pCVar10->fields).center.fields.y;
            fVar21 = (wrist->fields).Normal.fields.y;
            fVar28 = (wrist->fields).Normal.fields.z;
            fVar26 = (pCVar10->fields).center.fields.z;
            lVar14 = (longlong)(int)uVar18;
            *(float *)((longlong)&pIVar13[2].klass + lVar14 * 0xc) =
                 (fVar31 * 0.26 + (pCVar10->fields).center.fields.x) -
                 fVar27 * (wrist->fields).Normal.fields.x;
            *(float *)((longlong)&pIVar13[2].klass + lVar14 * 0xc + 4) =
                 (fVar32 * 0.26 + fVar30) - fVar27 * fVar21;
            *(float *)((longlong)&pIVar13[2].monitor + lVar14 * 0xc) =
                 (fVar33 * 0.26 + fVar26) - fVar27 * fVar28;
          }
          fVar27 = fVar24 * 0.46;
          pSVar8 = (__this->fields)._vertices;
          if (pSVar8 != (System_Collections_Generic_List_Vector3__o *)0x0) {
            local_3e0 = (pCVar10->fields).center.fields.x - fVar27 * (wrist->fields).Normal.fields.x;
            local_3dc = (local_398->fields).center.fields.y - fVar27 * (local_3d0->fields).Normal.fields.y;
            local_3d8 = (local_398->fields).center.fields.z - fVar27 * (local_3d0->fields).Normal.fields.z;
            local_3d0 = (Characters_TitanLimbMesh_CutPlane_o *)
                        CONCAT44(local_3d0._4_4_,(pSVar8->fields)._size);
            uVar18 = 0;
            while( true ) {
              if ((__this_01->fields)._size <= (int)uVar18) {
                Characters_TitanLimbMesh_CutMeshData__SmoothFleshNormals
                          (__this,(int32_t)local_3d0,(MethodInfo *)0x0);
                System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___GetEnumerator
                          (&local_378,
                           (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)__this_01,
                           (MethodInfo_930B50 *)
                           MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
                pCVar10 = local_3c8;
                local_438._0_8_ = local_378.fields._list;
                local_438._8_4_ = local_378.fields._index;
                local_438._12_4_ = local_378.fields._version;
                local_428 = local_378.fields._current;
                uStack_420 = uStack_360;
                local_3f8._0_4_ = 0.0;
                local_3f8._4_4_ = 0.0;
                fVar27 = fVar24;
                unique0x10003bb0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_438;
                while (bVar9 = System_Collections_Generic_List_Enumerator_ProbeBrickPool_BrickChunkAlloc___MoveNext
                                         ((System_Collections_Generic_List_Enumerator_T__o *)local_438,
                                          (MethodInfo_15296D0 *)
                                          MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext
                                         ), bVar9) {
                  fVar26 = (float)local_428;
                  fVar25 = local_428._4_4_;
                  fVar34 = (float)uStack_420;
                  fVar30 = (pCVar10->fields).center.fields.x;
                  fVar21 = (local_398->fields).center.fields.y;
                  fVar28 = (local_398->fields).center.fields.z;
                  if (Il2CppMethodInitialized_18433de59 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                    Il2CppMethodInitialized_18433de59 = '\x01';
                  }
                  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                  }
                  fVar25 = fVar25 - fVar21;
                  fVar26 = fVar26 - fVar30;
                  fVar34 = fVar34 - fVar28;
                  dVar23 = (double)(fVar25 * fVar25 + fVar26 * fVar26 + fVar34 * fVar34);
                  if (dVar23 < 0.0) {
                    dVar23 = sqrt(dVar23);
                  }
                  else {
                    dVar23 = SQRT(dVar23);
                  }
                  if ((float)dVar23 <= fVar27) {
                    fVar27 = (float)dVar23;
                  }
                }
                System_Collections_Generic_List_Enumerator_Vector3___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_438,
                           MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
                local_478._0_4_ = (pCVar10->fields).axisY.fields.x;
                local_478._4_4_ = (pCVar10->fields).axisY.fields.y;
                local_478._8_4_ = (pCVar10->fields).axisY.fields.z;
                local_3b8.x = (pCVar10->fields).axisX.fields.x;
                local_3b8.y = (pCVar10->fields).axisX.fields.y;
                local_3b8.z = (pCVar10->fields).axisX.fields.z;
                local_3a8.x = (pCVar10->fields).center.fields.x;
                local_3a8.y = (pCVar10->fields).center.fields.y;
                local_3a8.z = (pCVar10->fields).center.fields.z;
                Characters_TitanLimbMesh_CutMeshData__AddBone
                          (__this,(UnityEngine_Vector3_o *)&local_3a8,(UnityEngine_Vector3_o *)&local_3b8,
                           (UnityEngine_Vector3_o *)local_478,fVar24,fVar27 * 0.24,wrist,(MethodInfo *)0x0);
                return;
              }
              fVar27 = (float)il2cpp_runtime_helper_1804f5fc0((float)(int)(uVar18 + 7) * 12.9898 + 4.1414);
              fVar30 = (float)il2cpp_runtime_helper_1804f4110();
              pSVar8 = local_498;
              fVar30 = fVar27 * 43758.547 - fVar30;
              if (fVar30 < 0.0) {
                fVar30 = 0.0;
              }
              else if (1.0 < fVar30) {
                fVar30 = 1.0;
              }
              if (fVar30 < 0.0) {
                fVar30 = 0.0;
              }
              else if (1.0 < fVar30) {
                fVar30 = 1.0;
              }
              index = (int)(uVar18 + 1) % (__this_01->fields)._size;
              lVar14 = (longlong)(int)index;
              System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                        ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_288,
                         (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)local_498,uVar18
                         ,(MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
              System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                        ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_278,
                         (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar8,index,
                         (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
              fVar21 = local_278.z;
              uVar4 = local_278._0_8_;
              fVar27 = local_288.z;
              uVar3 = local_288._0_8_;
              if (pIVar11 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              if ((*(uint *)&pIVar11[1].monitor <= index) || (*(uint *)&pIVar11[1].monitor <= uVar18)) break;
              fVar26 = fVar30 * 0.32000002 + 0.34;
              fVar25 = fVar30 * 0.08499999 + 0.035;
              fVar34 = fVar30 * 0.065 + 0.035;
              fVar28 = fVar30 * 0.13 + 0.65;
              uVar2 = *(undefined8 *)((longlong)&local_458[2].klass + lVar14 * 0xc);
              fVar30 = *(float *)((longlong)&local_458[2].monitor + lVar14 * 0xc);
              local_128[0].hasValue = false;
              local_128[0]._1_3_ = 0;
              local_128[0].value.fields.x = 0.0;
              local_128[0].value.fields.y = 0.0;
              local_128[0].value.fields.z = 0.0;
              local_268._0_8_ = *(undefined8 *)((longlong)&local_458[2].klass + (longlong)(int)uVar18 * 0xc);
              local_268.z = *(float *)((longlong)&local_458[2].monitor + (longlong)(int)uVar18 * 0xc);
              System_Nullable_Vector3____ctor
                        ((System_Nullable_Vector3__o *)local_128,(UnityEngine_Vector3_o *)&local_268,
                         (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
              uVar29 = local_278._0_8_;
              uVar5 = local_288._0_8_;
              local_f8.hasValue = local_128[0].hasValue;
              local_f8._1_3_ = local_128[0]._1_3_;
              local_f8.value.fields.x = local_128[0].value.fields.x;
              local_f8.value.fields.y = local_128[0].value.fields.y;
              local_f8.value.fields.z = local_128[0].value.fields.z;
              local_278.x = (float)uVar4;
              local_278.y = SUB84(uVar4,4);
              local_248.x = local_278.x;
              local_248.y = local_278.y;
              local_248.z = fVar21;
              local_288.x = (float)uVar3;
              local_288.y = SUB84(uVar3,4);
              local_148.x = local_288.x;
              local_148.y = local_288.y;
              local_148.z = fVar27;
              local_2f8.fields.r = fVar26;
              local_2f8.fields.g = fVar25;
              local_2f8.fields.b = fVar34;
              local_2f8.fields.a = fVar28;
              local_288._0_8_ = uVar5;
              local_278._0_8_ = uVar29;
              local_258._0_8_ = uVar2;
              local_258.z = fVar30;
              Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                        (__this,(UnityEngine_Vector3_o *)&local_148,(UnityEngine_Vector3_o *)&local_248,
                         (UnityEngine_Vector3_o *)&local_258,(System_Nullable_Vector3__o *)&local_f8,wrist,
                         &local_2f8,(MethodInfo *)0x0);
              pIVar11 = local_458;
              if ((*(uint *)&local_458[1].monitor <= uVar18) || (*(uint *)&local_458[1].monitor <= index))
              break;
              uVar3 = *(undefined8 *)((longlong)&local_458[2].klass + (longlong)(int)uVar18 * 0xc);
              uVar4 = *(undefined8 *)((longlong)&local_458[2].klass + lVar14 * 0xc);
              if (pIVar12 == (Il2CppObject *)0x0) {
label_1821a50c7:
                ThrowNullReferenceException();
              }
              if (*(uint *)&pIVar12[1].monitor <= uVar18) {
label_1821a50c1:
                ThrowIndexOutOfRangeException();
              }
              uVar2 = *(undefined8 *)((longlong)&pIVar12[2].klass + (longlong)(int)uVar18 * 0xc);
              if (*(uint *)&pIVar12[1].monitor <= index) goto label_1821a50c1;
              fVar27 = fVar24 * 0.075;
              uVar5 = *(undefined8 *)((longlong)&pIVar12[2].klass + lVar14 * 0xc);
              uVar1 = (wrist->fields).Normal.fields.x;
              uVar6 = (wrist->fields).Normal.fields.y;
              uVar29._0_4_ = (float)uVar1 * fVar27 +
                             ((float)uVar5 + (float)uVar2 + (float)uVar4 + (float)uVar3) * 0.25;
              uVar29._4_4_ = (float)uVar6 * fVar27 +
                             ((float)((ulonglong)uVar5 >> 0x20) +
                             (float)((ulonglong)uVar2 >> 0x20) +
                             (float)((ulonglong)uVar4 >> 0x20) + (float)((ulonglong)uVar3 >> 0x20)) * 0.25;
              local_388.g = uVar29._4_4_;
              local_388.r = uVar29._4_4_;
              local_388.a = uVar29._4_4_;
              local_388.b = uVar29._4_4_;
              fVar27 = fVar27 * (wrist->fields).Normal.fields.z +
                       (*(float *)((longlong)&local_458[2].monitor + lVar14 * 0xc) +
                        *(float *)((longlong)&local_458[2].monitor + (longlong)(int)uVar18 * 0xc) +
                        *(float *)((longlong)&pIVar12[2].monitor + (longlong)(int)uVar18 * 0xc) +
                       *(float *)((longlong)&pIVar12[2].monitor + lVar14 * 0xc)) * 0.25;
              local_448 = (System_Nullable_Vector3__Fields)ZEXT816(0);
              local_158._0_8_ = *(undefined8 *)((longlong)&local_458[2].klass + lVar14 * 0xc);
              local_158.z = *(float *)((longlong)&local_458[2].monitor + lVar14 * 0xc);
              local_208._0_8_ = *(undefined8 *)((longlong)&local_458[2].klass + (longlong)(int)uVar18 * 0xc);
              local_208.z = *(float *)((longlong)&local_458[2].monitor + (longlong)(int)uVar18 * 0xc);
              local_2e8.fields.r = fVar26;
              local_2e8.fields.g = fVar25;
              local_2e8.fields.b = fVar34;
              local_2e8.fields.a = fVar28;
              local_178._0_8_ = uVar29;
              local_178.z = fVar27;
              Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                        (__this,(UnityEngine_Vector3_o *)&local_208,(UnityEngine_Vector3_o *)&local_158,
                         (UnityEngine_Vector3_o *)&local_178,(System_Nullable_Vector3__o *)&local_448,wrist,
                         &local_2e8,(MethodInfo *)0x0);
              if ((*(uint *)&pIVar11[1].monitor <= index) || (*(uint *)&pIVar12[1].monitor <= index)) {
                ThrowIndexOutOfRangeException();
              }
              local_2d8.fields.r = fVar26 * 0.85;
              local_2d8.fields.g = fVar25 * 0.8;
              local_2d8.fields.b = fVar34 * 0.8;
              local_448 = (System_Nullable_Vector3__Fields)ZEXT816(0);
              local_468.fields.y = local_388.r;
              local_188._0_8_ = *(undefined8 *)((longlong)&pIVar12[2].klass + lVar14 * 0xc);
              local_188.z = *(float *)((longlong)&pIVar12[2].monitor + lVar14 * 0xc);
              local_1c8._0_8_ = *(undefined8 *)((longlong)&pIVar11[2].klass + lVar14 * 0xc);
              local_1c8.z = *(float *)((longlong)&pIVar11[2].monitor + lVar14 * 0xc);
              local_468.fields.x = (float)uVar29;
              local_468.fields.z = fVar27;
              local_2d8.fields.a = fVar28;
              Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                        (__this,(UnityEngine_Vector3_o *)&local_1c8,(UnityEngine_Vector3_o *)&local_188,
                         &local_468,(System_Nullable_Vector3__o *)&local_448,wrist,&local_2d8,
                         (MethodInfo *)0x0);
              if ((*(uint *)&pIVar12[1].monitor <= index) || (*(uint *)&pIVar12[1].monitor <= uVar18)) {
label_1821a50b5:
                ThrowIndexOutOfRangeException();
              }
              local_e8[0].hasValue = false;
              local_e8[0]._1_3_ = 0;
              local_e8[0].value.fields.x = 0.0;
              local_e8[0].value.fields.y = 0.0;
              local_e8[0].value.fields.z = 0.0;
              local_418.fields.y = local_388.r;
              local_218._0_8_ = *(undefined8 *)((longlong)&pIVar12[2].klass + (longlong)(int)uVar18 * 0xc);
              local_218.z = *(float *)((longlong)&pIVar12[2].monitor + (longlong)(int)uVar18 * 0xc);
              local_228._0_8_ = *(undefined8 *)((longlong)&pIVar12[2].klass + lVar14 * 0xc);
              local_228.z = *(float *)((longlong)&pIVar12[2].monitor + lVar14 * 0xc);
              local_418.fields.x = (float)uVar29;
              local_418.fields.z = fVar27;
              local_308.fields.r = fVar26;
              local_308.fields.g = fVar25;
              local_308.fields.b = fVar34;
              local_308.fields.a = fVar28;
              Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                        (__this,(UnityEngine_Vector3_o *)&local_228,(UnityEngine_Vector3_o *)&local_218,
                         &local_418,(System_Nullable_Vector3__o *)local_e8,wrist,&local_308,(MethodInfo *)0x0)
              ;
              if ((*(uint *)&pIVar12[1].monitor <= uVar18) || (*(uint *)&pIVar11[1].monitor <= uVar18))
              goto label_1821a50b5;
              local_2c8.fields.r = fVar26 * 0.7;
              local_2c8.fields.g = fVar25 * 0.65;
              local_2c8.fields.b = fVar34 * 0.65;
              local_448 = (System_Nullable_Vector3__Fields)ZEXT816(0);
              local_408.fields.y = local_388.r;
              local_168._0_8_ = *(undefined8 *)((longlong)&pIVar11[2].klass + (longlong)(int)uVar18 * 0xc);
              local_168.z = *(float *)((longlong)&pIVar11[2].monitor + (longlong)(int)uVar18 * 0xc);
              local_1f8._0_8_ = *(undefined8 *)((longlong)&pIVar12[2].klass + (longlong)(int)uVar18 * 0xc);
              local_1f8.z = *(float *)((longlong)&pIVar12[2].monitor + (longlong)(int)uVar18 * 0xc);
              local_408.fields.x = (float)uVar29;
              local_408.fields.z = fVar27;
              local_2c8.fields.a = fVar28;
              Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                        (__this,(UnityEngine_Vector3_o *)&local_1f8,(UnityEngine_Vector3_o *)&local_168,
                         &local_408,(System_Nullable_Vector3__o *)&local_448,wrist,&local_2c8,
                         (MethodInfo *)0x0);
              if ((*(uint *)&pIVar12[1].monitor <= uVar18) || (*(uint *)&pIVar12[1].monitor <= index)) {
                ThrowIndexOutOfRangeException();
              }
              if (pIVar13 == (Il2CppObject *)0x0) goto label_1821a50c7;
              if ((*(uint *)&pIVar13[1].monitor <= uVar18) || (*(uint *)&pIVar13[1].monitor <= index))
              goto label_1821a50c1;
              lVar15 = (longlong)(int)uVar18;
              fVar27 = *(float *)((longlong)&pIVar12[2].klass + lVar14 * 0xc);
              fVar30 = *(float *)((longlong)&pIVar12[2].klass + lVar15 * 0xc);
              lVar16 = (longlong)(int)uVar18;
              fVar21 = *(float *)((longlong)&pIVar13[2].klass + lVar16 * 0xc);
              fVar31 = *(float *)((longlong)&pIVar13[2].klass + lVar14 * 0xc);
              local_3e8 = (*(float *)((longlong)&pIVar12[2].klass + lVar14 * 0xc + 4) +
                           *(float *)((longlong)&pIVar12[2].klass + lVar15 * 0xc + 4) +
                           *(float *)((longlong)&pIVar13[2].klass + lVar16 * 0xc + 4) +
                          *(float *)((longlong)&pIVar13[2].klass + lVar14 * 0xc + 4)) * 0.25;
              local_3e4 = (*(float *)((longlong)&pIVar12[2].monitor + lVar14 * 0xc) +
                           *(float *)((longlong)&pIVar12[2].monitor + lVar15 * 0xc) +
                           *(float *)((longlong)&pIVar13[2].monitor + lVar16 * 0xc) +
                          *(float *)((longlong)&pIVar13[2].monitor + lVar14 * 0xc)) * 0.25;
              fVar32 = (wrist->fields).Normal.fields.x;
              fVar33 = (float)il2cpp_runtime_helper_1804f5fc0((float)(int)(uVar18 + 0x1c) * 12.9898 + 4.1414);
              fVar22 = (float)il2cpp_runtime_helper_1804f4110();
              fVar22 = fVar33 * 43758.547 - fVar22;
              if (fVar22 < 0.0) {
                fVar22 = 0.0;
              }
              else if (1.0 < fVar22) {
                fVar22 = 1.0;
              }
              fVar33 = (fVar22 * 0.07 + 0.035) * fVar24;
              fVar21 = fVar32 * fVar33 + (fVar27 + fVar30 + fVar21 + fVar31) * 0.25;
              fVar30 = fVar33 * (wrist->fields).Normal.fields.y + local_3e8;
              fVar27 = (wrist->fields).Normal.fields.z * fVar33 + local_3e4;
              local_448 = (System_Nullable_Vector3__Fields)ZEXT816(0);
              local_1e8._0_8_ = *(undefined8 *)((longlong)&pIVar12[2].klass + lVar14 * 0xc);
              local_1e8.z = *(float *)((longlong)&pIVar12[2].monitor + lVar14 * 0xc);
              local_1d8._0_8_ = *(undefined8 *)((longlong)&pIVar12[2].klass + (longlong)(int)uVar18 * 0xc);
              local_1d8.z = *(float *)((longlong)&pIVar12[2].monitor + (longlong)(int)uVar18 * 0xc);
              local_358.fields.x = fVar21;
              local_358.fields.y = fVar30;
              local_358.fields.z = fVar27;
              local_2b8.fields.r = fVar26;
              local_2b8.fields.g = fVar25;
              local_2b8.fields.b = fVar34;
              local_2b8.fields.a = fVar28;
              Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                        (__this,(UnityEngine_Vector3_o *)&local_1d8,(UnityEngine_Vector3_o *)&local_1e8,
                         &local_358,(System_Nullable_Vector3__o *)&local_448,wrist,&local_2b8,
                         (MethodInfo *)0x0);
              if ((*(uint *)&pIVar12[1].monitor <= index) || (*(uint *)&pIVar13[1].monitor <= index)) {
                ThrowIndexOutOfRangeException();
              }
              local_2a8.fields.r = fVar26 * 0.7;
              local_2a8.fields.g = fVar25 * 0.6;
              local_2a8.fields.b = fVar34 * 0.6;
              local_448 = (System_Nullable_Vector3__Fields)ZEXT416(0);
              local_1b8._0_8_ = *(undefined8 *)((longlong)&pIVar13[2].klass + lVar14 * 0xc);
              local_1b8.z = *(float *)((longlong)&pIVar13[2].monitor + lVar14 * 0xc);
              local_1a8._0_8_ = *(undefined8 *)((longlong)&pIVar12[2].klass + lVar14 * 0xc);
              local_1a8.z = *(float *)((longlong)&pIVar12[2].monitor + lVar14 * 0xc);
              local_348.fields.x = fVar21;
              local_348.fields.y = fVar30;
              local_348.fields.z = fVar27;
              local_2a8.fields.a = fVar28;
              Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                        (__this,(UnityEngine_Vector3_o *)&local_1a8,(UnityEngine_Vector3_o *)&local_1b8,
                         &local_348,(System_Nullable_Vector3__o *)&local_448,wrist,&local_2a8,
                         (MethodInfo *)0x0);
              if ((*(uint *)&pIVar13[1].monitor <= index) || (*(uint *)&pIVar13[1].monitor <= uVar18)) {
                ThrowIndexOutOfRangeException();
              }
              local_298.fields.r = fVar26 * 0.8;
              local_298.fields.g = fVar25 * 0.7;
              local_298.fields.b = fVar34 * 0.7;
              local_448 = (System_Nullable_Vector3__Fields)ZEXT416(0);
              local_198._0_8_ = *(undefined8 *)((longlong)&pIVar13[2].klass + (longlong)(int)uVar18 * 0xc);
              local_198.z = *(float *)((longlong)&pIVar13[2].monitor + (longlong)(int)uVar18 * 0xc);
              local_138._0_8_ = *(undefined8 *)((longlong)&pIVar13[2].klass + lVar14 * 0xc);
              local_138.z = *(float *)((longlong)&pIVar13[2].monitor + lVar14 * 0xc);
              local_338.fields.x = fVar21;
              local_338.fields.y = fVar30;
              local_338.fields.z = fVar27;
              local_298.fields.a = fVar28;
              Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                        (__this,(UnityEngine_Vector3_o *)&local_138,(UnityEngine_Vector3_o *)&local_198,
                         &local_338,(System_Nullable_Vector3__o *)&local_448,wrist,&local_298,
                         (MethodInfo *)0x0);
              if ((*(uint *)&pIVar13[1].monitor <= uVar18) || (*(uint *)&pIVar12[1].monitor <= uVar18)) {
                ThrowIndexOutOfRangeException();
              }
              local_3f8._4_4_ = fVar25 * 0.6;
              local_3f8._0_4_ = fVar26 * 0.65;
              fStack_3ec = fVar28;
              local_3f8._8_4_ = fVar34 * 0.6;
              local_448 = (System_Nullable_Vector3__Fields)ZEXT816(0);
              local_238._0_8_ = *(undefined8 *)((longlong)&pIVar12[2].klass + (longlong)(int)uVar18 * 0xc);
              local_238.z = *(float *)((longlong)&pIVar12[2].monitor + (longlong)(int)uVar18 * 0xc);
              local_3a8._0_8_ = *(undefined8 *)((longlong)&pIVar13[2].klass + (longlong)(int)uVar18 * 0xc);
              local_3a8.z = *(float *)((longlong)&pIVar13[2].monitor + (longlong)(int)uVar18 * 0xc);
              local_328.fields.x = fVar21;
              local_328.fields.y = fVar30;
              local_328.fields.z = fVar27;
              Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                        (__this,(UnityEngine_Vector3_o *)&local_3a8,(UnityEngine_Vector3_o *)&local_238,
                         &local_328,(System_Nullable_Vector3__o *)&local_448,wrist,
                         (UnityEngine_Color_o *)local_3f8,(MethodInfo *)0x0);
              if ((*(uint *)&pIVar13[1].monitor <= uVar18) || (*(uint *)&pIVar13[1].monitor <= index)) {
                ThrowIndexOutOfRangeException();
              }
              local_388.r = 0.23;
              local_388.g = 0.02;
              local_388.b = 0.025;
              local_388.a = 0.7;
              local_378.fields._list = (System_Collections_Generic_List_T__o *)0x0;
              local_378.fields._index = 0;
              local_378.fields._version = 0;
              local_318.fields.x = local_3e0;
              local_318.fields.y = local_3dc;
              local_318.fields.z = local_3d8;
              local_3b8._0_8_ = *(undefined8 *)((longlong)&pIVar13[2].klass + lVar14 * 0xc);
              local_3b8.z = *(float *)((longlong)&pIVar13[2].monitor + lVar14 * 0xc);
              local_478._0_8_ = *(undefined8 *)((longlong)&pIVar13[2].klass + (longlong)(int)uVar18 * 0xc);
              local_478._8_4_ = *(undefined4 *)((longlong)&pIVar13[2].monitor + (longlong)(int)uVar18 * 0xc);
              Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                        (__this,(UnityEngine_Vector3_o *)local_478,(UnityEngine_Vector3_o *)&local_3b8,
                         &local_318,(System_Nullable_Vector3__o *)&local_378,wrist,
                         (UnityEngine_Color_o *)&local_388,(MethodInfo *)0x0);
              uVar18 = uVar18 + 1;
              __this_01 = local_498;
            }
            ThrowIndexOutOfRangeException();
          }
        }
      }
    }
  }
label_1821a507f:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Variation
// il2cpp: float Characters_TitanLimbMesh_CutMeshData__Variation (int32_t index, const MethodInfo* method);
// 0x1821a7cb0

float Characters_TitanLimbMesh_CutMeshData__Variation(int32_t index,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)il2cpp_runtime_helper_1804f5fc0((float)index * 12.9898 + 4.1414);
  fVar2 = (float)il2cpp_runtime_helper_1804f4110(fVar1 * 43758.547);
  fVar2 = fVar1 * 43758.547 - fVar2;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (1.0 < fVar2) {
    return 1.0;
  }
  return fVar2;
}


// Characters.TitanLimbMesh.CutMeshData$$SmoothFleshNormals
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__SmoothFleshNormals (Characters_TitanLimbMesh_CutMeshData_o* __this, int32_t start, const MethodInfo* method);
// 0x1821a7840
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a793e: nop 
// asm:   0x1821a7a65: jmp 0x1821a7ca8
// asm:   0x1821a7a75: movss xmm7, dword ptr [rip + 0x11b117b]
// asm:   0x1821a7a7d: xor r13d, r13d
// asm:   0x1821a7a80: movss xmm9, dword ptr [rip + 0x11b12f3]
// asm:   0x1821a7a89: nop dword ptr [rax]
// asm:   0x1821a7c5a: jmp 0x1821a7a90

void Characters_TitanLimbMesh_CutMeshData__SmoothFleshNormals
               (Characters_TitanLimbMesh_CutMeshData_o *__this,int32_t start,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar4;
  undefined8 uVar3;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  undefined8 uVar8;
  System_Collections_Generic_Dictionary_Vector3__Vector3__o *__this_00;
  System_Collections_Generic_List_Vector3__o *pSVar9;
  UnityEngine_Vector3_o *pUVar10;
  System_Collections_Generic_List_Vector3__o *pSVar11;
  int32_t index;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_Fields local_118;
  UnityEngine_Vector3_o local_108;
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_Fields local_b8 [2];
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_Fields local_88;
  UnityEngine_Vector3_o local_78 [6];
  
  if (Il2CppMethodInitialized_184346e92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector3_Vector3_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector3_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector3_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Vector3_Vector3_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Vector3_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_set_Item);
    Il2CppMethodInitialized_184346e92 = '\x01';
  }
  local_f8.x = 0.0;
  local_f8.y = 0.0;
  local_f8.z = 0.0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Vector3_Vector3);
  System_Collections_Generic_Dictionary_Vector3__Vector3____ctor
            (__this_00,
             (MethodInfo_14CD780 *)MethodInfo_System_Collections_Generic_Dictionary_Vector3_Vector3_ctor);
  pSVar9 = (__this->fields)._vertices;
  index = start;
  if (pSVar9 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    while (pSVar11 = (__this->fields)._vertices, index < (pSVar9->fields)._size) {
      if ((pSVar11 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
         (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                    ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_e8,
                     (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar11,index,
                     (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
         __this_00 == (System_Collections_Generic_Dictionary_Vector3__Vector3__o *)0x0)) goto label_1821a7ca8;
      local_d8.x = local_e8.x;
      local_d8.y = local_e8.y;
      local_d8.z = local_e8.z;
      System_Collections_Generic_Dictionary_Vector3__Vector3___TryGetValue
                (__this_00,(UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Vector3_o *)&local_f8,
                 (MethodInfo_14CA6F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Vector3_Vector3_TryGetValue);
      pSVar9 = (__this->fields)._vertices;
      if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a7ca8;
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_c8,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar9,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      fVar1 = local_c8.z;
      uVar3 = local_c8._0_8_;
      fVar6 = local_f8.z;
      pSVar9 = (__this->fields)._normals;
      if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a7ca8;
      fVar2 = local_f8.x;
      fVar5 = local_f8.y;
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_118,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar9,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      uVar8 = local_c8._0_8_;
      local_108.fields.x = (float)local_118.x + fVar2;
      local_108.fields.y = (float)local_118.y + fVar5;
      local_108.fields.z = (float)local_118.z + fVar6;
      local_c8.x = (float)uVar3;
      local_c8.y = SUB84(uVar3,4);
      local_b8[0].x = local_c8.x;
      local_b8[0].y = local_c8.y;
      local_b8[0].z = fVar1;
      local_c8._0_8_ = uVar8;
      System_Collections_Generic_Dictionary_Vector3__Vector3___set_Item
                (__this_00,(UnityEngine_Vector3_o *)local_b8,&local_108,
                 (MethodInfo_14D0210 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Vector3_Vector3_set_Item);
      pSVar9 = (__this->fields)._vertices;
      index = index + 1;
      if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a7ca8;
    }
    if (pSVar11 != (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a7a90;
  }
label_1821a7ca8:
  ThrowNullReferenceException();
label_1821a7a90:
  if ((pSVar11->fields)._size <= start) {
    return;
  }
  pSVar9 = (__this->fields)._normals;
  if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a7ca8;
  System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
            ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)local_b8,
             (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar9,start,
             (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
  pSVar11 = (__this->fields)._vertices;
  if ((pSVar11 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
     (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_c8,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar11,start,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
     fVar6 = local_b8[0].z, uVar3 = local_b8[0]._0_8_,
     __this_00 == (System_Collections_Generic_Dictionary_Vector3__Vector3__o *)0x0)) goto label_1821a7ca8;
  local_d8.x = local_c8.x;
  local_d8.y = local_c8.y;
  local_d8.z = local_c8.z;
  System_Collections_Generic_Dictionary_Vector3__Vector3___get_Item
            (&local_108,__this_00,(UnityEngine_Vector3_o *)&local_d8,
             (MethodInfo_14D0070 *)MethodInfo_System_Collections_Generic_Dictionary_Vector3_Vector3_get_Item);
  fVar2 = local_108.fields.z;
  fVar1 = local_108.fields.x;
  local_118.y = (int32_t)local_108.fields.y;
  local_118.x = (int32_t)local_108.fields.x;
  local_118.z = (int32_t)local_108.fields.z;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar5 = (float)il2cpp_runtime_helper_180546a40(&local_118,0);
  uVar8 = local_b8[0]._0_8_;
  if (fVar5 <= 1e-05) {
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar1 = (pUVar7->zeroVector).fields.x;
    fVar4 = (pUVar7->zeroVector).fields.y;
    local_e8.z = (pUVar7->zeroVector).fields.z;
  }
  else {
    fVar4 = local_108.fields.y / fVar5;
    local_e8.z = fVar2 / fVar5;
    fVar1 = fVar1 / fVar5;
  }
  local_e8.y = fVar4;
  local_e8.x = fVar1;
  local_b8[0].x = (float)uVar3;
  local_b8[0].y = SUB84(uVar3,4);
  local_98.x = local_b8[0].x;
  local_98.y = local_b8[0].y;
  local_98.z = fVar6;
  local_b8[0]._0_8_ = uVar8;
  pUVar10 = UnityEngine_Vector3__Internal_Slerp
                      (local_78,(UnityEngine_Vector3_o *)&local_98,(UnityEngine_Vector3_o *)&local_e8,0.8,
                       (MethodInfo *)0x0);
  uVar3._0_4_ = (int32_t)(pUVar10->fields).x;
  uVar3._4_4_ = (int32_t)(pUVar10->fields).y;
  fVar6 = (pUVar10->fields).z;
  local_118._0_8_ = uVar3;
  local_118.z = (int32_t)fVar6;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar2 = (float)il2cpp_runtime_helper_180546a40(&local_118,0);
  if (fVar2 <= 1e-05) {
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar2 = (pUVar7->zeroVector).fields.x;
    fVar5 = (pUVar7->zeroVector).fields.y;
    local_88.z = (int32_t)(pUVar7->zeroVector).fields.z;
  }
  else {
    fVar5 = (float)local_118.y / fVar2;
    local_88.z = (int32_t)(fVar6 / fVar2);
    fVar2 = (float)(int32_t)uVar3 / fVar2;
  }
  local_88.y = (int32_t)fVar5;
  local_88.x = (int32_t)fVar2;
  System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___set_Item
            ((System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar9,start,
             (UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_88,
             (MethodInfo_93C170 *)MethodInfo_System_Collections_Generic_List_Vector3_set_Item);
  pSVar11 = (__this->fields)._vertices;
  start = start + 1;
  if (pSVar11 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a7ca8;
  goto label_1821a7a90;
}


// Characters.TitanLimbMesh.CutMeshData$$AddBone
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__AddBone (Characters_TitanLimbMesh_CutMeshData_o* __this, UnityEngine_Vector3_o center, UnityEngine_Vector3_o axisX, UnityEngine_Vector3_o axisY, float radius, float width, Characters_TitanLimbMesh_CutPlane_o* cut, const MethodInfo* method);
// 0x1821a27b0

void Characters_TitanLimbMesh_CutMeshData__AddBone
               (Characters_TitanLimbMesh_CutMeshData_o *__this,UnityEngine_Vector3_o *center,
               UnityEngine_Vector3_o *axisX,UnityEngine_Vector3_o *axisY,float radius,float width,
               Characters_TitanLimbMesh_CutPlane_o *cut,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  UnityEngine_Vector2_Fields UVar9;
  int iVar10;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar11;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UI_BasePopup_AnimationKeyframe_o value;
  float fVar23;
  UI_BasePopup_AnimationKeyframe_o value_00;
  UI_BasePopup_AnimationKeyframe_o value_01;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Vector3_o local_198;
  UnityEngine_Color_o local_188;
  UnityEngine_Vector3_Fields local_178;
  UnityEngine_Vector3_Fields local_168;
  UnityEngine_Vector3_Fields local_158;
  UnityEngine_Vector3_Fields local_148;
  UnityEngine_Vector3_Fields local_138;
  UnityEngine_Vector3_Fields local_128;
  System_Nullable_Vector3__Fields local_118;
  System_Nullable_Vector3__Fields local_108;
  UnityEngine_Color_Fields local_f8;
  System_Nullable_Vector3__Fields local_e8 [11];
  
  if (Il2CppMethodInitialized_184346e93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_184346e93 = '\x01';
  }
  pIVar12 = SZArrayNew(TypeInfo_UnityEngine_Vector3_array,9);
  pIVar13 = SZArrayNew(TypeInfo_UnityEngine_Vector3_array,9);
  if (cut == (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
label_1821a3320:
    ThrowNullReferenceException();
  }
  fVar24 = radius * 0.18;
  fVar23 = (center->fields).x - fVar24 * (cut->fields).Normal.fields.x;
  fVar19 = (center->fields).y - fVar24 * (cut->fields).Normal.fields.y;
  fVar24 = (center->fields).z - fVar24 * (cut->fields).Normal.fields.z;
  fVar20 = radius * 0.45;
  uVar17 = 0;
  do {
    fVar21 = (float)il2cpp_runtime_helper_1804f54c0();
    fVar22 = (float)il2cpp_runtime_helper_1804f5fc0();
    if (pIVar12 == (Il2CppObject *)0x0) goto label_1821a3320;
    uVar16 = (uint)uVar17;
    if (*(uint *)&pIVar12[1].monitor <= uVar16) {
label_1821a334a:
      ThrowIndexOutOfRangeException();
    }
    fVar25 = (cut->fields).Normal.fields.z;
    fVar26 = ((axisY->fields).y * fVar22 + (axisX->fields).y * fVar21) * width;
    fVar28 = ((axisY->fields).x * fVar22 + (axisX->fields).x * fVar21) * width;
    fVar27 = ((axisY->fields).z * fVar22 + (axisX->fields).z * fVar21) * width;
    fVar21 = (center->fields).x;
    fVar22 = (center->fields).z;
    fVar1 = (cut->fields).Normal.fields.x;
    *(float *)((longlong)&pIVar12[2].klass + uVar17 * 0xc + 4) =
         (fVar26 * 1.2 + (center->fields).y) - fVar20 * (cut->fields).Normal.fields.y;
    *(float *)((longlong)&pIVar12[2].monitor + uVar17 * 0xc) = (fVar27 * 1.2 + fVar22) - fVar20 * fVar25;
    *(float *)((longlong)&pIVar12[2].klass + uVar17 * 0xc) = (fVar28 * 1.2 + fVar21) - fVar20 * fVar1;
    fVar21 = (float)il2cpp_runtime_helper_1804f5fc0((float)(int)(uVar16 + 0x2a) * 12.9898 + 4.1414);
    fVar22 = (float)il2cpp_runtime_helper_1804f4110();
    fVar22 = fVar21 * 43758.547 - fVar22;
    if (fVar22 < 0.0) {
      fVar22 = 0.0;
    }
    else if (1.0 < fVar22) {
      fVar22 = 1.0;
    }
    fVar25 = fVar22 * 0.16 + 0.92;
    fVar21 = (float)il2cpp_runtime_helper_1804f5fc0((float)(int)(uVar16 + 0x15) * 12.9898 + 4.1414);
    fVar22 = (float)il2cpp_runtime_helper_1804f4110();
    fVar22 = fVar21 * 43758.547 - fVar22;
    if (fVar22 < 0.0) {
      fVar22 = 0.0;
    }
    else if (1.0 < fVar22) {
      fVar22 = 1.0;
    }
    fVar21 = fVar22 * radius * 0.035;
    if (pIVar13 == (Il2CppObject *)0x0) goto label_1821a3320;
    if (*(uint *)&pIVar13[1].monitor <= uVar16) goto label_1821a334a;
    fVar22 = (cut->fields).Normal.fields.y;
    fVar1 = (cut->fields).Normal.fields.x;
    *(float *)((longlong)&pIVar13[2].monitor + uVar17 * 0xc) =
         (fVar27 * fVar25 + fVar24) - fVar21 * (cut->fields).Normal.fields.z;
    *(float *)((longlong)&pIVar13[2].klass + uVar17 * 0xc) = (fVar28 * fVar25 + fVar23) - fVar21 * fVar1;
    *(float *)((longlong)&pIVar13[2].klass + uVar17 * 0xc + 4) = (fVar26 * fVar25 + fVar19) - fVar21 * fVar22;
    uVar17 = (ulonglong)(uVar16 + 1);
  } while ((int)(uVar16 + 1) < 9);
  uVar17 = 0;
  while( true ) {
    uVar16 = (uint)uVar17;
    fVar20 = (float)il2cpp_runtime_helper_1804f5fc0((float)(int)(uVar16 + 0x21) * 12.9898 + 4.1414);
    fVar21 = (float)il2cpp_runtime_helper_1804f4110();
    fVar21 = fVar20 * 43758.547 - fVar21;
    if (fVar21 < 0.0) {
      fVar21 = 0.0;
    }
    else if (1.0 < fVar21) {
      fVar21 = 1.0;
    }
    if (fVar21 < 0.0) {
      fVar21 = 0.0;
    }
    else if (1.0 < fVar21) {
      fVar21 = 1.0;
    }
    if (*(uint *)&pIVar12[1].monitor <= uVar16) break;
    uVar18 = (int)(uVar16 + 1) % 9;
    if (((*(uint *)&pIVar12[1].monitor <= uVar18) || (*(uint *)&pIVar13[1].monitor <= uVar18)) ||
       (*(uint *)&pIVar13[1].monitor <= uVar16)) break;
    local_118.hasValue = false;
    local_118._1_3_ = 0;
    local_118.value.fields.x = 0.0;
    local_118.value.fields.y = 0.0;
    local_118.value.fields.z = 0.0;
    uVar6 = *(undefined8 *)((longlong)&pIVar12[2].klass + uVar17 * 0xc);
    fVar20 = *(float *)((longlong)&pIVar12[2].monitor + uVar17 * 0xc);
    uVar7 = *(undefined8 *)((longlong)&pIVar12[2].klass + (longlong)(int)uVar18 * 0xc);
    fVar22 = *(float *)((longlong)&pIVar12[2].monitor + (longlong)(int)uVar18 * 0xc);
    uVar8 = *(undefined8 *)((longlong)&pIVar13[2].klass + (longlong)(int)uVar18 * 0xc);
    fVar25 = *(float *)((longlong)&pIVar13[2].monitor + (longlong)(int)uVar18 * 0xc);
    local_178._0_8_ = *(undefined8 *)((longlong)&pIVar13[2].klass + uVar17 * 0xc);
    local_178.z = *(float *)((longlong)&pIVar13[2].monitor + uVar17 * 0xc);
    System_Nullable_Vector3____ctor
              ((System_Nullable_Vector3__o *)&local_118,(UnityEngine_Vector3_o *)&local_178,
               (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
    local_188.fields.r = fVar21 * 0.25 + 0.67;
    local_188.fields.g = fVar21 * 0.38000003 + 0.47;
    local_188.fields.b = fVar21 * 0.31000003 + 0.35;
    local_188.fields.a = fVar21 * 0.03999999 + 0.38;
    local_108.hasValue = local_118.hasValue;
    local_108._1_3_ = local_118._1_3_;
    local_108.value.fields.x = local_118.value.fields.x;
    local_108.value.fields.y = local_118.value.fields.y;
    local_108.value.fields.z = local_118.value.fields.z;
    local_168._0_8_ = uVar8;
    local_168.z = fVar25;
    local_158._0_8_ = uVar7;
    local_158.z = fVar22;
    local_148._0_8_ = uVar6;
    local_148.z = fVar20;
    Characters_TitanLimbMesh_CutMeshData__AddWoundFace
              (__this,(UnityEngine_Vector3_o *)&local_148,(UnityEngine_Vector3_o *)&local_158,
               (UnityEngine_Vector3_o *)&local_168,(System_Nullable_Vector3__o *)&local_108,cut,&local_188,
               (MethodInfo *)0x0);
    pSVar11 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)(__this->fields)._uv;
    if (pSVar11 == (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar10 = (pSVar11->fields)._size;
    if (Il2CppMethodInitialized_184341707 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341707 = '\x01';
    }
    System_Collections_Generic_List_BasePopup_AnimationKeyframe___set_Item
              (pSVar11,iVar10 + -4,
               (UI_BasePopup_AnimationKeyframe_o)
               (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields,
               (MethodInfo_92BBA0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    pSVar11 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)(__this->fields)._uv;
    if (pSVar11 == (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
label_1821a3338:
      ThrowNullReferenceException();
    }
    iVar10 = (pSVar11->fields)._size;
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    System_Collections_Generic_List_BasePopup_AnimationKeyframe___set_Item
              (pSVar11,iVar10 + -3,
               (UI_BasePopup_AnimationKeyframe_o)
               (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
               (MethodInfo_92BBA0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    pSVar11 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)(__this->fields)._uv;
    if (pSVar11 == (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) goto label_1821a3338;
    iVar10 = (pSVar11->fields)._size;
    if (Il2CppMethodInitialized_18433df27 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433df27 = '\x01';
    }
    System_Collections_Generic_List_BasePopup_AnimationKeyframe___set_Item
              (pSVar11,iVar10 + -2,
               (UI_BasePopup_AnimationKeyframe_o)
               (TypeInfo_UnityEngine_Vector2->static_fields->rightVector).fields,
               (MethodInfo_92BBA0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    pSVar11 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)(__this->fields)._uv;
    if (pSVar11 == (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) goto label_1821a3338;
    iVar10 = (pSVar11->fields)._size;
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    System_Collections_Generic_List_BasePopup_AnimationKeyframe___set_Item
              (pSVar11,iVar10 + -1,
               (UI_BasePopup_AnimationKeyframe_o)
               (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo_92BBA0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    if ((*(uint *)&pIVar13[1].monitor <= uVar16) || (*(uint *)&pIVar13[1].monitor <= uVar18)) {
label_1821a3332:
      ThrowIndexOutOfRangeException();
    }
    local_e8[0].hasValue = false;
    local_e8[0]._1_3_ = 0;
    local_e8[0].value.fields.x = 0.0;
    local_e8[0].value.fields.y = 0.0;
    local_e8[0].value.fields.z = 0.0;
    local_f8.r = 0.88;
    local_f8.g = 0.79;
    local_f8.b = 0.62;
    local_f8.a = 0.42;
    local_138._0_8_ = *(undefined8 *)((longlong)&pIVar13[2].klass + (longlong)(int)uVar18 * 0xc);
    local_138.z = *(float *)((longlong)&pIVar13[2].monitor + (longlong)(int)uVar18 * 0xc);
    local_128._0_8_ = *(undefined8 *)((longlong)&pIVar13[2].klass + uVar17 * 0xc);
    local_128.z = *(float *)((longlong)&pIVar13[2].monitor + uVar17 * 0xc);
    local_198.fields.x = fVar23;
    local_198.fields.y = fVar19;
    local_198.fields.z = fVar24;
    Characters_TitanLimbMesh_CutMeshData__AddWoundFace
              (__this,(UnityEngine_Vector3_o *)&local_128,(UnityEngine_Vector3_o *)&local_138,&local_198,
               (System_Nullable_Vector3__o *)local_e8,cut,(UnityEngine_Color_o *)&local_f8,(MethodInfo *)0x0);
    pSVar11 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)(__this->fields)._uv;
    if (pSVar11 == (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
      ThrowNullReferenceException();
    }
    if (*(uint *)&pIVar13[1].monitor <= uVar16) goto label_1821a3332;
    iVar10 = (pSVar11->fields)._size;
    fVar20 = *(float *)((longlong)&pIVar13[2].klass + uVar17 * 0xc);
    fVar21 = *(float *)((longlong)&pIVar13[2].monitor + uVar17 * 0xc);
    fVar22 = *(float *)((longlong)&pIVar13[2].klass + uVar17 * 0xc + 4);
    fVar25 = (axisX->fields).x;
    fVar1 = (axisX->fields).z;
    fVar26 = (axisX->fields).y;
    fVar27 = *(float *)((longlong)&pIVar13[2].klass + uVar17 * 0xc + 4);
    fVar28 = *(float *)((longlong)&pIVar13[2].monitor + uVar17 * 0xc);
    fVar2 = (axisY->fields).y;
    fVar3 = (axisY->fields).z;
    fVar4 = *(float *)((longlong)&pIVar13[2].klass + uVar17 * 0xc);
    fVar5 = (axisY->fields).x;
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    value_00.fields.time =
         (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.x * 0.5 +
         ((fVar22 - fVar19) * fVar26 + (fVar20 - fVar23) * fVar25 + (fVar21 - fVar24) * fVar1) /
         (width + width);
    value_00.fields.scale =
         (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.y * 0.5 +
         ((fVar27 - fVar19) * fVar2 + (fVar4 - fVar23) * fVar5 + (fVar28 - fVar24) * fVar3) / (width + width);
    System_Collections_Generic_List_BasePopup_AnimationKeyframe___set_Item
              (pSVar11,iVar10 + -3,value_00,
               (MethodInfo_92BBA0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    pSVar11 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)(__this->fields)._uv;
    if (pSVar11 == (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) goto label_1821a3338;
    if (*(uint *)&pIVar13[1].monitor <= uVar18) {
      ThrowIndexOutOfRangeException();
    }
    iVar10 = (pSVar11->fields)._size;
    lVar14 = (longlong)(int)uVar18;
    lVar15 = (longlong)(int)uVar18;
    fVar20 = *(float *)((longlong)&pIVar13[2].klass + lVar14 * 0xc);
    fVar21 = *(float *)((longlong)&pIVar13[2].monitor + lVar14 * 0xc);
    fVar22 = *(float *)((longlong)&pIVar13[2].klass + lVar14 * 0xc + 4);
    fVar25 = *(float *)((longlong)&pIVar13[2].klass + lVar15 * 0xc + 4);
    fVar1 = (axisX->fields).x;
    fVar26 = (axisX->fields).z;
    fVar27 = (axisX->fields).y;
    fVar28 = (axisY->fields).y;
    fVar2 = *(float *)((longlong)&pIVar13[2].monitor + lVar15 * 0xc);
    fVar3 = *(float *)((longlong)&pIVar13[2].klass + lVar15 * 0xc);
    fVar4 = (axisY->fields).z;
    fVar5 = (axisY->fields).x;
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    value_01.fields.time =
         (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.x * 0.5 +
         ((fVar22 - fVar19) * fVar27 + (fVar20 - fVar23) * fVar1 + (fVar21 - fVar24) * fVar26) /
         (width + width);
    value_01.fields.scale =
         (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.y * 0.5 +
         ((fVar25 - fVar19) * fVar28 + (fVar3 - fVar23) * fVar5 + (fVar2 - fVar24) * fVar4) / (width + width);
    System_Collections_Generic_List_BasePopup_AnimationKeyframe___set_Item
              (pSVar11,iVar10 + -2,value_01,
               (MethodInfo_92BBA0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    pSVar11 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)(__this->fields)._uv;
    if (pSVar11 == (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) goto label_1821a3338;
    iVar10 = (pSVar11->fields)._size;
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    UVar9 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
    value.fields.time = UVar9.x * 0.5;
    value.fields.scale = UVar9.y * 0.5;
    System_Collections_Generic_List_BasePopup_AnimationKeyframe___set_Item
              (pSVar11,iVar10 + -1,value,
               (MethodInfo_92BBA0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    uVar17 = (ulonglong)(uVar16 + 1);
    if (8 < (int)(uVar16 + 1)) {
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.TitanLimbMesh.CutMeshData$$AddWoundFace
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__AddWoundFace (Characters_TitanLimbMesh_CutMeshData_o* __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, UnityEngine_Vector3_o c, System_Nullable_Vector3__o d, Characters_TitanLimbMesh_CutPlane_o* cut, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1821a5830
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a5f90: mov dword ptr [r8 + r9*4 + 0x20], edi
// asm:   0x1821a5f95: jmp 0x1821a5f38

void Characters_TitanLimbMesh_CutMeshData__AddWoundFace
               (Characters_TitanLimbMesh_CutMeshData_o *__this,UnityEngine_Vector3_o *a,
               UnityEngine_Vector3_o *b,UnityEngine_Vector3_o *c,System_Nullable_Vector3__o *d,
               Characters_TitanLimbMesh_CutPlane_o *cut,UnityEngine_Color_o *color,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint32_t item;
  uint uVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  System_Collections_Generic_List_Vector3__o *pSVar8;
  System_Collections_Generic_List_uint__o *pSVar9;
  System_UInt32_array *pSVar10;
  undefined8 uVar11;
  MethodInfo *pMVar12;
  undefined8 uVar13;
  UnityEngine_Color32_o color_00;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Color_Fields local_c8;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Color_Fields local_a8 [8];
  
  if (Il2CppMethodInitialized_184346e94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_Value);
    Il2CppMethodInitialized_184346e94 = '\x01';
  }
  fVar19 = (c->fields).y - (a->fields).y;
  fVar16 = (c->fields).x - (a->fields).x;
  fVar14 = (c->fields).z - (a->fields).z;
  fVar18 = (b->fields).x - (a->fields).x;
  fVar17 = (b->fields).y - (a->fields).y;
  fVar15 = (b->fields).z - (a->fields).z;
  fVar20 = fVar14 * fVar17 - fVar19 * fVar15;
  fVar14 = fVar16 * fVar15 - fVar14 * fVar18;
  fVar15 = fVar19 * fVar18 - fVar16 * fVar17;
  local_c8.g = fVar14;
  local_c8.r = fVar20;
  local_c8.b = fVar15;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar16 = (float)il2cpp_runtime_helper_180546a40(&local_c8);
  if (fVar16 <= 1e-05) {
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar20 = (pUVar7->zeroVector).fields.x;
    fVar14 = (pUVar7->zeroVector).fields.y;
    fVar15 = (pUVar7->zeroVector).fields.z;
  }
  else {
    fVar20 = fVar20 / fVar16;
    fVar14 = fVar14 / fVar16;
    fVar15 = fVar15 / fVar16;
  }
  uVar2 = (a->fields).x;
  uVar4 = (a->fields).y;
  uVar3 = (b->fields).x;
  uVar5 = (b->fields).y;
  fVar16 = (b->fields).z - (a->fields).z;
  local_c8.g = (float)uVar5 - (float)uVar4;
  local_c8.r = (float)uVar3 - (float)uVar2;
  local_c8.b = fVar16;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar17 = (float)il2cpp_runtime_helper_180546a40(&local_c8);
  if (fVar17 <= 1e-05) {
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar18 = (pUVar7->zeroVector).fields.x;
    fVar19 = (pUVar7->zeroVector).fields.y;
    fVar16 = (pUVar7->zeroVector).fields.z;
  }
  else {
    fVar18 = ((float)uVar3 - (float)uVar2) / fVar17;
    fVar19 = ((float)uVar5 - (float)uVar4) / fVar17;
    fVar16 = fVar16 / fVar17;
  }
  pSVar8 = (__this->fields)._vertices;
  if (pSVar8 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    item = (pSVar8->fields)._size;
    fVar17 = UnityEngine_Mathf__GammaToLinearSpace((color->fields).r,(MethodInfo *)0x0);
    local_a8[0].g = UnityEngine_Mathf__GammaToLinearSpace((color->fields).g,(MethodInfo *)0x0);
    local_a8[0].r = fVar17;
    local_a8[0].b = UnityEngine_Mathf__GammaToLinearSpace((color->fields).b,(MethodInfo *)0x0);
    local_a8[0].a = (color->fields).a;
    color_00 = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)local_a8,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    if (cut == (Characters_TitanLimbMesh_CutPlane_o *)0x0) goto label_1821a5f97;
    local_a8[0].r = (a->fields).x;
    local_a8[0].g = (a->fields).y;
    local_a8[0].b = (a->fields).z;
    local_c8.g = fVar19;
    local_c8.r = fVar18;
    local_b8.y = fVar14;
    local_b8.x = fVar20;
    local_c8.b = fVar16;
    local_b8.z = fVar15;
    Characters_TitanLimbMesh_CutMeshData__AddWoundVertex
              (__this,(UnityEngine_Vector3_o *)local_a8,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (UnityEngine_Vector3_o *)&local_b8,(UnityEngine_Vector3_o *)&local_c8,(cut->fields).ParentBone,
               color_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433df27 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433df27 = '\x01';
    }
    local_c8.r = (b->fields).x;
    local_c8.g = (b->fields).y;
    local_c8.b = (b->fields).z;
    local_a8[0].g = fVar19;
    local_a8[0].r = fVar18;
    local_b8.z = fVar15;
    local_a8[0].b = fVar16;
    Characters_TitanLimbMesh_CutMeshData__AddWoundVertex
              (__this,(UnityEngine_Vector3_o *)&local_c8,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->rightVector).fields,
               (UnityEngine_Vector3_o *)&local_b8,(UnityEngine_Vector3_o *)local_a8,(cut->fields).ParentBone,
               color_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    local_c8.r = (c->fields).x;
    local_c8.g = (c->fields).y;
    local_c8.b = (c->fields).z;
    local_b8.z = fVar15;
    local_a8[0].b = fVar16;
    Characters_TitanLimbMesh_CutMeshData__AddWoundVertex
              (__this,(UnityEngine_Vector3_o *)&local_c8,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
               (UnityEngine_Vector3_o *)&local_b8,(UnityEngine_Vector3_o *)local_a8,(cut->fields).ParentBone,
               color_00,(MethodInfo *)0x0);
    pMVar12 = MethodInfo_System_Collections_Generic_List_int_Add;
    pSVar9 = (System_Collections_Generic_List_uint__o *)(__this->fields)._wound;
    if (pSVar9 == (System_Collections_Generic_List_uint__o *)0x0) goto label_1821a5f97;
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (pSVar9->fields)._items;
    if (pSVar10 == (System_UInt32_array *)0x0) goto label_1821a5f97;
    uVar6 = (pSVar9->fields)._size;
    if (uVar6 < (uint)pSVar10->max_length) {
      (pSVar9->fields)._size = uVar6 + 1;
      if ((uint)pSVar10->max_length <= uVar6) goto label_1821a5f9d;
      pSVar10->m_Items[(int)uVar6] = item;
    }
    else {
      System_Collections_Generic_List_uint___AddWithResize
                (pSVar9,item,(MethodInfo_91A500 *)pMVar12->klass->rgctx_data[0xe].method);
    }
    pMVar12 = MethodInfo_System_Collections_Generic_List_int_Add;
    pSVar9 = (System_Collections_Generic_List_uint__o *)(__this->fields)._wound;
    if (pSVar9 == (System_Collections_Generic_List_uint__o *)0x0) goto label_1821a5f97;
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (pSVar9->fields)._items;
    if (pSVar10 == (System_UInt32_array *)0x0) goto label_1821a5f97;
    uVar6 = (pSVar9->fields)._size;
    if (uVar6 < (uint)pSVar10->max_length) {
      (pSVar9->fields)._size = uVar6 + 1;
      if ((uint)pSVar10->max_length <= uVar6) goto label_1821a5f9d;
      pSVar10->m_Items[(int)uVar6] = item + 1;
    }
    else {
      System_Collections_Generic_List_uint___AddWithResize
                (pSVar9,item + 1,(MethodInfo_91A500 *)pMVar12->klass->rgctx_data[0xe].method);
    }
    pMVar12 = MethodInfo_System_Collections_Generic_List_int_Add;
    pSVar9 = (System_Collections_Generic_List_uint__o *)(__this->fields)._wound;
    if (pSVar9 == (System_Collections_Generic_List_uint__o *)0x0) goto label_1821a5f97;
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (pSVar9->fields)._items;
    if (pSVar10 == (System_UInt32_array *)0x0) goto label_1821a5f97;
    uVar6 = (pSVar9->fields)._size;
    if (uVar6 < (uint)pSVar10->max_length) {
      (pSVar9->fields)._size = uVar6 + 1;
      if ((uint)pSVar10->max_length <= uVar6) goto label_1821a5f9d;
      pSVar10->m_Items[(int)uVar6] = item + 2;
    }
    else {
      System_Collections_Generic_List_uint___AddWithResize
                (pSVar9,item + 2,(MethodInfo_91A500 *)pMVar12->klass->rgctx_data[0xe].method);
    }
    if ((d->fields).hasValue == false) {
      return;
    }
    System_Nullable_Vector3___get_Value
              ((UnityEngine_Vector3_o *)local_a8,d,
               (MethodInfo_AE2C50 *)MethodInfo_System_Nullable_Vector3_get_Value);
    fVar17 = local_a8[0].b;
    uVar13 = local_a8[0]._0_8_;
    if (Il2CppMethodInitialized_184341707 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341707 = '\x01';
    }
    uVar11._4_4_ = fVar19;
    uVar11._0_4_ = fVar18;
    local_a8[0].r = (float)uVar13;
    local_a8[0].g = SUB84(uVar13,4);
    local_c8.r = local_a8[0].r;
    local_c8.g = local_a8[0].g;
    local_c8.b = fVar17;
    local_b8.z = fVar15;
    local_a8[0]._0_8_ = uVar11;
    local_a8[0].b = fVar16;
    Characters_TitanLimbMesh_CutMeshData__AddWoundVertex
              (__this,(UnityEngine_Vector3_o *)&local_c8,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields,
               (UnityEngine_Vector3_o *)&local_b8,(UnityEngine_Vector3_o *)local_a8,(cut->fields).ParentBone,
               color_00,(MethodInfo *)0x0);
    pMVar12 = MethodInfo_System_Collections_Generic_List_int_Add;
    pSVar9 = (System_Collections_Generic_List_uint__o *)(__this->fields)._wound;
    if (pSVar9 == (System_Collections_Generic_List_uint__o *)0x0) goto label_1821a5f97;
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (pSVar9->fields)._items;
    if (pSVar10 == (System_UInt32_array *)0x0) goto label_1821a5f97;
    uVar6 = (pSVar9->fields)._size;
    if (uVar6 < (uint)pSVar10->max_length) {
      (pSVar9->fields)._size = uVar6 + 1;
      if ((uint)pSVar10->max_length <= uVar6) goto label_1821a5f9d;
      pSVar10->m_Items[(int)uVar6] = item;
    }
    else {
      System_Collections_Generic_List_uint___AddWithResize
                (pSVar9,item,(MethodInfo_91A500 *)pMVar12->klass->rgctx_data[0xe].method);
    }
    pMVar12 = MethodInfo_System_Collections_Generic_List_int_Add;
    pSVar9 = (System_Collections_Generic_List_uint__o *)(__this->fields)._wound;
    if (pSVar9 == (System_Collections_Generic_List_uint__o *)0x0) goto label_1821a5f97;
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (pSVar9->fields)._items;
    if (pSVar10 == (System_UInt32_array *)0x0) goto label_1821a5f97;
    uVar6 = (pSVar9->fields)._size;
    if (uVar6 < (uint)pSVar10->max_length) {
      (pSVar9->fields)._size = uVar6 + 1;
      if ((uint)pSVar10->max_length <= uVar6) goto label_1821a5f9d;
      pSVar10->m_Items[(int)uVar6] = item + 2;
    }
    else {
      System_Collections_Generic_List_uint___AddWithResize
                (pSVar9,item + 2,(MethodInfo_91A500 *)pMVar12->klass->rgctx_data[0xe].method);
    }
    pMVar12 = MethodInfo_System_Collections_Generic_List_int_Add;
    pSVar9 = (System_Collections_Generic_List_uint__o *)(__this->fields)._wound;
    if (pSVar9 != (System_Collections_Generic_List_uint__o *)0x0) {
      piVar1 = &(pSVar9->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar10 = (pSVar9->fields)._items;
      if (pSVar10 != (System_UInt32_array *)0x0) {
        uVar6 = (pSVar9->fields)._size;
        if ((uint)pSVar10->max_length <= uVar6) {
          System_Collections_Generic_List_uint___AddWithResize
                    (pSVar9,item + 3,(MethodInfo_91A500 *)pMVar12->klass->rgctx_data[0xe].method);
          return;
        }
        (pSVar9->fields)._size = uVar6 + 1;
        if (uVar6 < (uint)pSVar10->max_length) {
          pSVar10->m_Items[(int)uVar6] = item + 3;
          return;
        }
label_1821a5f9d:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1821a5f97:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$AddWoundVertex
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__AddWoundVertex (Characters_TitanLimbMesh_CutMeshData_o* __this, UnityEngine_Vector3_o position, UnityEngine_Vector2_o uv, UnityEngine_Vector3_o normal, UnityEngine_Vector3_o tangent, int32_t bone, UnityEngine_Color32_o color, const MethodInfo* method);
// 0x1821a5fb0

void Characters_TitanLimbMesh_CutMeshData__AddWoundVertex
               (Characters_TitanLimbMesh_CutMeshData_o *__this,UnityEngine_Vector3_o *position,
               UnityEngine_Vector2_o uv,UnityEngine_Vector3_o *normal,UnityEngine_Vector3_o *tangent,
               int32_t bone,UnityEngine_Color32_o color,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_BoneWeight_o *pUVar2;
  intptr_t *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  System_Collections_Generic_List_Vector3__o *pSVar8;
  UnityEngine_Vector3_array *pUVar9;
  System_Collections_Generic_List_Vector4__o *__this_00;
  UnityEngine_Vector4_array *pUVar10;
  System_Collections_Generic_List_Vector2__o *pSVar11;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_01;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_array *pSVar12;
  System_Collections_Generic_List_BoneWeight__o *__this_02;
  UnityEngine_BoneWeight_array *pUVar13;
  MethodInfo *pMVar14;
  undefined1 local_58 [12];
  float fStack_4c;
  intptr_t local_48;
  intptr_t iStack_40;
  System_Runtime_InteropServices_GCHandle_Fields local_38;
  Unity_IntegerTime_DiscreteTime_o UStack_30;
  intptr_t local_28;
  intptr_t iStack_20;
  
  if (Il2CppMethodInitialized_184346e95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color32_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector4_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BoneWeight_Add);
    Il2CppMethodInitialized_184346e95 = '\x01';
  }
  pMVar14 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
  pSVar8 = (__this->fields)._vertices;
  local_38.handle._0_4_ = 0.0;
  local_38.handle._4_4_ = 0.0;
  UStack_30.fields.Value = (Unity_IntegerTime_DiscreteTime_Fields)0;
  local_28 = 0;
  iStack_20 = 0;
  if (pSVar8 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    piVar1 = &(pSVar8->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar9 = (pSVar8->fields)._items;
    if (pUVar9 == (UnityEngine_Vector3_array *)0x0) goto label_1821a631f;
    uVar7 = (pSVar8->fields)._size;
    if (uVar7 < (uint)pUVar9->max_length) {
      (pSVar8->fields)._size = uVar7 + 1;
      if ((uint)pUVar9->max_length <= uVar7) goto label_1821a6325;
      fVar5 = (position->fields).y;
      fVar4 = (position->fields).z;
      pUVar9->m_Items[(int)uVar7].fields.x = (position->fields).x;
      pUVar9->m_Items[(int)uVar7].fields.y = fVar5;
      pUVar9->m_Items[(int)uVar7].fields.z = fVar4;
    }
    else {
      local_58._0_8_ = *(undefined8 *)&position->fields;
      local_58._8_4_ = (position->fields).z;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar8,(UnityEngine_Vector3_o *)local_58,
                 (MethodInfo_99C850 *)pMVar14->klass->rgctx_data[0xe].method);
    }
    pMVar14 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    pSVar8 = (__this->fields)._normals;
    if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_1821a631f;
    piVar1 = &(pSVar8->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar9 = (pSVar8->fields)._items;
    if (pUVar9 == (UnityEngine_Vector3_array *)0x0) goto label_1821a631f;
    uVar7 = (pSVar8->fields)._size;
    if (uVar7 < (uint)pUVar9->max_length) {
      (pSVar8->fields)._size = uVar7 + 1;
      if ((uint)pUVar9->max_length <= uVar7) goto label_1821a6325;
      fVar5 = (normal->fields).y;
      fVar4 = (normal->fields).z;
      pUVar9->m_Items[(int)uVar7].fields.x = (normal->fields).x;
      pUVar9->m_Items[(int)uVar7].fields.y = fVar5;
      pUVar9->m_Items[(int)uVar7].fields.z = fVar4;
    }
    else {
      local_58._0_8_ = *(undefined8 *)&normal->fields;
      local_58._8_4_ = (normal->fields).z;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar8,(UnityEngine_Vector3_o *)local_58,
                 (MethodInfo_99C850 *)pMVar14->klass->rgctx_data[0xe].method);
    }
    pMVar14 = MethodInfo_System_Collections_Generic_List_Vector4_Add;
    __this_00 = (__this->fields)._tangents;
    if (__this_00 == (System_Collections_Generic_List_Vector4__o *)0x0) goto label_1821a631f;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar10 = (__this_00->fields)._items;
    if (pUVar10 == (UnityEngine_Vector4_array *)0x0) goto label_1821a631f;
    uVar7 = (__this_00->fields)._size;
    fVar4 = (tangent->fields).x;
    fVar5 = (tangent->fields).y;
    fVar6 = (tangent->fields).z;
    if (uVar7 < (uint)pUVar10->max_length) {
      (__this_00->fields)._size = uVar7 + 1;
      if ((uint)pUVar10->max_length <= uVar7) goto label_1821a6325;
      pUVar10->m_Items[(int)uVar7].fields.x = fVar4;
      pUVar10->m_Items[(int)uVar7].fields.y = fVar5;
      pUVar10->m_Items[(int)uVar7].fields.z = fVar6;
      pUVar10->m_Items[(int)uVar7].fields.w = 1.0;
    }
    else {
      fStack_4c = 1.0;
      local_58._8_4_ = fVar6;
      local_58._0_8_ =
           (System_Runtime_InteropServices_GCHandle_Fields)
           *(System_Runtime_InteropServices_GCHandle_o *)&tangent->fields;
      System_Collections_Generic_List_Vector4___AddWithResize
                (__this_00,(UnityEngine_Vector4_o *)local_58,
                 (MethodInfo_99C4B0 *)pMVar14->klass->rgctx_data[0xe].method);
    }
    pSVar11 = (__this->fields)._uv;
    if (pSVar11 == (System_Collections_Generic_List_Vector2__o *)0x0) goto label_1821a631f;
    il2cpp_runtime_helper_18003dee0(pSVar11,uv.fields,MethodInfo_System_Collections_Generic_List_Vector2_Add);
    pMVar14 = MethodInfo_System_Collections_Generic_List_Color32_Add;
    __this_01 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._colors;
    if (__this_01 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) goto label_1821a631f;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar12 = (__this_01->fields)._items;
    if (pSVar12 == (System_Text_RegularExpressions_RegexCharClass_SingleRange_array *)0x0) goto label_1821a631f;
    uVar7 = (__this_01->fields)._size;
    if (uVar7 < (uint)pSVar12->max_length) {
      (__this_01->fields)._size = uVar7 + 1;
      if ((uint)pSVar12->max_length <= uVar7) goto label_1821a6325;
      pSVar12->m_Items[(int)uVar7].fields =
           (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)color.fields._overlap_0;
    }
    else {
      System_Collections_Generic_List_RegexCharClass_SingleRange___AddWithResize
                (__this_01,
                 (System_Text_RegularExpressions_RegexCharClass_SingleRange_o)color.fields._overlap_0,
                 (MethodInfo_973E40 *)pMVar14->klass->rgctx_data[0xe].method);
    }
    __this_02 = (__this->fields)._weights;
    local_38.handle._0_4_ = 0.0;
    local_38.handle._4_4_ = 0.0;
    UStack_30.fields.Value = (Unity_IntegerTime_DiscreteTime_Fields)0;
    local_28 = 0;
    iStack_20 = 0;
    UnityEngine_TextCore_Glyph__set_index
              ((UnityEngine_InputForUI_PointerState_o *)&local_38,bone,(MethodInfo *)0x0);
    UnityEngine_TextCore_LowLevel_MarkPositionAdjustment__set_xPositionAdjustment
              ((UnityEngine_TextCore_LowLevel_MarkPositionAdjustment_o *)&local_38,1.0,(MethodInfo *)0x0);
    pMVar14 = MethodInfo_System_Collections_Generic_List_BoneWeight_Add;
    if (__this_02 != (System_Collections_Generic_List_BoneWeight__o *)0x0) {
      piVar1 = &(__this_02->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar13 = (__this_02->fields)._items;
      if (pUVar13 != (UnityEngine_BoneWeight_array *)0x0) {
        uVar7 = (__this_02->fields)._size;
        if (uVar7 < (uint)pUVar13->max_length) {
          (__this_02->fields)._size = uVar7 + 1;
          if ((uint)pUVar13->max_length <= uVar7) {
label_1821a6325:
            ThrowIndexOutOfRangeException();
          }
          pUVar2 = pUVar13->m_Items + (int)uVar7;
          (pUVar2->fields).m_Weight0 = (float)(undefined4)local_38.handle;
          (pUVar2->fields).m_Weight1 = (float)local_38.handle._4_4_;
          *(Unity_IntegerTime_DiscreteTime_Fields *)&(pUVar2->fields).m_Weight2 = UStack_30.fields.Value;
          piVar3 = (intptr_t *)&pUVar13->m_Items[(int)uVar7].fields.m_BoneIndex0;
          *piVar3 = local_28;
          piVar3[1] = iStack_20;
        }
        else {
          local_58._0_8_ = local_38.handle;
          stack0xffffffffffffffb0 = UStack_30.fields.Value;
          local_48 = local_28;
          iStack_40 = iStack_20;
          System_Collections_Generic_List_Painter2D_Painter2DJobData___AddWithResize
                    ((System_Collections_Generic_List_Painter2D_Painter2DJobData__o *)__this_02,
                     (UnityEngine_UIElements_Painter2D_Painter2DJobData_o *)local_58,
                     (MethodInfo_93E170 *)pMVar14->klass->rgctx_data[0xe].method);
        }
        return;
      }
    }
  }
label_1821a631f:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Compact
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact (Characters_TitanLimbMesh_CutMeshData_o* __this, const MethodInfo* method);
// 0x1821a6330
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a641c: nop dword ptr [rax]
// asm:   0x1821a64ab: nop dword ptr [rax + rax]
// asm:   0x1821a65bf: nop 

void Characters_TitanLimbMesh_CutMeshData__Compact
               (Characters_TitanLimbMesh_CutMeshData_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__array *pSVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  bool bVar3;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar4;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  System_Collections_Generic_List_int__o *used;
  int iVar5;
  uint uVar6;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184346e96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_BoneWeight);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Color32);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Vector2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Vector3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Vector4);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    Il2CppMethodInitialized_184346e96 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int)
  ;
  System_Collections_Generic_Dictionary_int__RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  used = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)used,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  pSVar1 = (__this->fields)._triangles;
  if (pSVar1 == (System_Collections_Generic_List_int__array *)0x0) {
    ThrowNullReferenceException();
  }
  for (uVar6 = 0; (int)uVar6 < (int)pSVar1->max_length; uVar6 = uVar6 + 1) {
    if ((uint)pSVar1->max_length <= uVar6) {
      ThrowIndexOutOfRangeException();
    }
    pSVar2 = (System_Collections_Generic_List_T__o *)pSVar1->m_Items[(int)uVar6];
    if (Il2CppMethodInitialized_184346e97 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_int_int_Add);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_set_Item);
      Il2CppMethodInitialized_184346e97 = '\x01';
    }
    local_res8[0] = 0.0;
    iVar5 = 0;
    if (pSVar2 == (System_Collections_Generic_List_T__o *)0x0) {
label_1821a66eb:
      ThrowNullReferenceException();
    }
    for (; iVar5 < (pSVar2->fields)._size; iVar5 = iVar5 + 1) {
      SVar4 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)pSVar2,iVar5,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_1821a66eb;
      bVar3 = System_Collections_Generic_Dictionary_int__float___TryGetValue
                        ((System_Collections_Generic_Dictionary_int__float__o *)__this_00,
                         (int32_t)SVar4.fields,local_res8,
                         (MethodInfo_1411820 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
      if (!bVar3) {
        if (used == (System_Collections_Generic_List_int__o *)0x0) goto label_1821a66eb;
        local_res8[0] = (float)(used->fields)._size;
        System_Collections_Generic_Dictionary_int__int___Add
                  (__this_00,(int32_t)SVar4.fields,(int32_t)local_res8[0],
                   (MethodInfo_1407050 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Add);
        il2cpp_runtime_helper_180026690(used,SVar4.fields,MethodInfo_System_Collections_Generic_List_int_Add);
      }
      System_Collections_Generic_List_UInt32Enum___set_Item
                (pSVar2,iVar5,(uint32_t)local_res8[0],
                 (MethodInfo_92BC10 *)MethodInfo_System_Collections_Generic_List_int_set_Item);
    }
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)(__this->fields)._wound;
  if (Il2CppMethodInitialized_184346e97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_set_Item);
    Il2CppMethodInitialized_184346e97 = '\x01';
  }
  local_res8[0] = 0.0;
  if (pSVar2 == (System_Collections_Generic_List_T__o *)0x0) {
label_1821a66f7:
    ThrowNullReferenceException();
  }
  iVar5 = 0;
  do {
    if ((pSVar2->fields)._size <= iVar5) {
      Characters_TitanLimbMesh_CutMeshData__Compact_Vector3_
                ((System_Collections_Generic_List_T__o *)(__this->fields)._vertices,used,
                 (MethodInfo_87B270 *)MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Vector3);
      Characters_TitanLimbMesh_CutMeshData__Compact_Vector3_
                ((System_Collections_Generic_List_T__o *)(__this->fields)._normals,used,
                 (MethodInfo_87B270 *)MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Vector3);
      Characters_TitanLimbMesh_CutMeshData__Compact_Vector4_
                ((System_Collections_Generic_List_T__o *)(__this->fields)._tangents,used,
                 (MethodInfo_87B3A0 *)MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Vector4);
      Characters_TitanLimbMesh_CutMeshData__Compact_Vector2_
                ((System_Collections_Generic_List_T__o *)(__this->fields)._uv,used,
                 (MethodInfo_87B150 *)MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Vector2);
      Characters_TitanLimbMesh_CutMeshData__Compact_Color32_
                ((System_Collections_Generic_List_T__o *)(__this->fields)._colors,used,
                 (MethodInfo_87AE40 *)MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Color32);
      Characters_TitanLimbMesh_CutMeshData__Compact_BoneWeight_
                ((System_Collections_Generic_List_T__o *)(__this->fields)._weights,used,
                 (MethodInfo_87AD10 *)MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_BoneWeight);
      return;
    }
    SVar4 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                      ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)pSVar2,iVar5,
                       (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_1821a66f7;
    bVar3 = System_Collections_Generic_Dictionary_int__float___TryGetValue
                      ((System_Collections_Generic_Dictionary_int__float__o *)__this_00,(int32_t)SVar4.fields,
                       local_res8,
                       (MethodInfo_1411820 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
    if (!bVar3) {
      if (used == (System_Collections_Generic_List_int__o *)0x0) goto label_1821a66f7;
      local_res8[0] = (float)(used->fields)._size;
      System_Collections_Generic_Dictionary_int__int___Add
                (__this_00,(int32_t)SVar4.fields,(int32_t)local_res8[0],
                 (MethodInfo_1407050 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Add);
      il2cpp_runtime_helper_180026690(used,SVar4.fields,MethodInfo_System_Collections_Generic_List_int_Add);
    }
    System_Collections_Generic_List_UInt32Enum___set_Item
              (pSVar2,iVar5,(uint32_t)local_res8[0],
               (MethodInfo_92BC10 *)MethodInfo_System_Collections_Generic_List_int_set_Item);
    iVar5 = iVar5 + 1;
  } while( true );
}


// Characters.TitanLimbMesh.CutMeshData$$Remap
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Remap (System_Collections_Generic_List_int__o* triangles, System_Collections_Generic_Dictionary_int__int__o* indices, System_Collections_Generic_List_int__o* used, const MethodInfo* method);
// 0x1821a7420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a74a9: nop dword ptr [rax]

void Characters_TitanLimbMesh_CutMeshData__Remap
               (System_Collections_Generic_List_int__o *triangles,
               System_Collections_Generic_Dictionary_int__int__o *indices,
               System_Collections_Generic_List_int__o *used,MethodInfo *method)

{
  bool bVar1;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o key;
  int index;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184346e97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_set_Item);
    Il2CppMethodInitialized_184346e97 = '\x01';
  }
  local_res8[0] = 0.0;
  if (triangles != (System_Collections_Generic_List_int__o *)0x0) {
    index = 0;
    do {
      if ((triangles->fields)._size <= index) {
        return;
      }
      key = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                      ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)triangles,index,
                       (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (indices == (System_Collections_Generic_Dictionary_int__int__o *)0x0) break;
      bVar1 = System_Collections_Generic_Dictionary_int__float___TryGetValue
                        ((System_Collections_Generic_Dictionary_int__float__o *)indices,(int32_t)key.fields,
                         local_res8,
                         (MethodInfo_1411820 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
      if (!bVar1) {
        if (used == (System_Collections_Generic_List_int__o *)0x0) break;
        local_res8[0] = (float)(used->fields)._size;
        System_Collections_Generic_Dictionary_int__int___Add
                  (indices,(int32_t)key.fields,(int32_t)local_res8[0],
                   (MethodInfo_1407050 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Add);
        il2cpp_runtime_helper_180026690(used,key.fields,MethodInfo_System_Collections_Generic_List_int_Add);
      }
      System_Collections_Generic_List_UInt32Enum___set_Item
                ((System_Collections_Generic_List_T__o *)triangles,index,(uint32_t)local_res8[0],
                 (MethodInfo_92BC10 *)MethodInfo_System_Collections_Generic_List_int_set_Item);
      index = index + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Compact<BoneWeight>
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact_BoneWeight_ (System_Collections_Generic_List_T__o* values, System_Collections_Generic_List_int__o* used, const MethodInfo_87AD10* method);
// 0x18087ad10

void Characters_TitanLimbMesh_CutMeshData__Compact_BoneWeight_
               (System_Collections_Generic_List_T__o *values,System_Collections_Generic_List_int__o *used,
               MethodInfo_87AD10 *method)

{
  int32_t *piVar1;
  uint32_t length;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o index;
  Il2CppClass *klass;
  Il2CppObject *collection;
  uint index_00;
  Il2CppClass *local_28;
  System_String_o *pSStack_20;
  Il2CppClass *local_18;
  void *pvStack_10;
  
  if (method->rgctx_data == (MethodInfo_87AD10_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (method->rgctx_data == (MethodInfo_87AD10_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if (used != (System_Collections_Generic_List_int__o *)0x0) {
    length = (used->fields)._size;
    klass = method->rgctx_data->_0_T__;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    collection = SZArrayNew(klass,length);
    for (index_00 = 0; (int)index_00 < (used->fields)._size; index_00 = index_00 + 1) {
      index = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)used,index_00,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (values == (System_Collections_Generic_List_T__o *)0x0) goto label_18087ae30;
      System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState___get_Item
                ((UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_o *)
                 &local_28,
                 (System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *)
                 values,(int32_t)index.fields,
                 (MethodInfo_94FF20 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      if (collection == (Il2CppObject *)0x0) goto label_18087ae30;
      if (*(uint *)&collection[1].monitor <= index_00) {
        ThrowIndexOutOfRangeException();
      }
      collection[(longlong)(int)index_00 * 2 + 2].klass = local_28;
      collection[(longlong)(int)index_00 * 2 + 2].monitor = pSStack_20;
      collection[(longlong)(int)index_00 * 2 + 3].klass = local_18;
      collection[(longlong)(int)index_00 * 2 + 3].monitor = pvStack_10;
    }
    if (values != (System_Collections_Generic_List_T__o *)0x0) {
      piVar1 = &(values->fields)._version;
      *piVar1 = *piVar1 + 1;
      (values->fields)._size = 0;
      System_Collections_Generic_List_BoneWeight___AddRange
                ((System_Collections_Generic_List_BoneWeight__o *)values,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_1856DF0 *)method->rgctx_data->_5_System_Collections_Generic_List_T__AddRange);
      return;
    }
  }
label_18087ae30:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Compact<Color32>
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact_Color32_ (System_Collections_Generic_List_T__o* values, System_Collections_Generic_List_int__o* used, const MethodInfo_87AE40* method);
// 0x18087ae40

void Characters_TitanLimbMesh_CutMeshData__Compact_Color32_
               (System_Collections_Generic_List_T__o *values,System_Collections_Generic_List_int__o *used,
               MethodInfo_87AE40 *method)

{
  int32_t *piVar1;
  uint32_t length;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o index;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields SVar2;
  Il2CppClass *klass;
  Il2CppObject *collection;
  uint index_00;
  
  if (method->rgctx_data == (MethodInfo_87AE40_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (method->rgctx_data == (MethodInfo_87AE40_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if (used != (System_Collections_Generic_List_int__o *)0x0) {
    length = (used->fields)._size;
    klass = method->rgctx_data->_0_T__;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    collection = SZArrayNew(klass,length);
    for (index_00 = 0; (int)index_00 < (used->fields)._size; index_00 = index_00 + 1) {
      index = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)used,index_00,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (values == (System_Collections_Generic_List_T__o *)0x0) goto label_18087af46;
      SVar2 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
              System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)values,index.fields,
                         (MethodInfo_92B8E0 *)
                         method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      if (collection == (Il2CppObject *)0x0) goto label_18087af46;
      if (*(uint *)&collection[1].monitor <= index_00) {
        ThrowIndexOutOfRangeException();
      }
      *(System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields *)
       ((longlong)&collection[2].klass + (longlong)(int)index_00 * 4) = SVar2;
    }
    if (values != (System_Collections_Generic_List_T__o *)0x0) {
      piVar1 = &(values->fields)._version;
      *piVar1 = *piVar1 + 1;
      (values->fields)._size = 0;
      System_Collections_Generic_List_Color32___AddRange
                ((System_Collections_Generic_List_Color32__o *)values,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_1861590 *)method->rgctx_data->_5_System_Collections_Generic_List_T__AddRange);
      return;
    }
  }
label_18087af46:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Compact<Vector2>
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact_Vector2_ (System_Collections_Generic_List_T__o* values, System_Collections_Generic_List_int__o* used, const MethodInfo_87B150* method);
// 0x18087b150
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18087b1cf: nop 

void Characters_TitanLimbMesh_CutMeshData__Compact_Vector2_
               (System_Collections_Generic_List_T__o *values,System_Collections_Generic_List_int__o *used,
               MethodInfo_87B150 *method)

{
  int32_t *piVar1;
  uint32_t length;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o index;
  Il2CppClass *klass;
  Il2CppObject *collection;
  Il2CppObject *pIVar2;
  uint index_00;
  undefined4 uStackX_14;
  
  if (method->rgctx_data == (MethodInfo_87B150_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (method->rgctx_data == (MethodInfo_87B150_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if (used != (System_Collections_Generic_List_int__o *)0x0) {
    length = (used->fields)._size;
    klass = method->rgctx_data->_0_T__;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    collection = SZArrayNew(klass,length);
    for (index_00 = 0; (int)index_00 < (used->fields)._size; index_00 = index_00 + 1) {
      index = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)used,index_00,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (values == (System_Collections_Generic_List_T__o *)0x0) goto label_18087b261;
      pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)values,(int32_t)index.fields,
                          (MethodInfo_92B830 *)
                          method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      if (collection == (Il2CppObject *)0x0) goto label_18087b261;
      if (*(uint *)&collection[1].monitor <= index_00) {
        ThrowIndexOutOfRangeException();
      }
      uStackX_14 = (undefined4)((ulonglong)pIVar2 >> 0x20);
      *(int *)(&collection[2].klass + (int)index_00) = (int)pIVar2;
      *(undefined4 *)((longlong)&collection[2].klass + (longlong)(int)index_00 * 8 + 4) = uStackX_14;
    }
    if (values != (System_Collections_Generic_List_T__o *)0x0) {
      piVar1 = &(values->fields)._version;
      *piVar1 = *piVar1 + 1;
      (values->fields)._size = 0;
      System_Collections_Generic_List_Vector2___AddRange
                ((System_Collections_Generic_List_Vector2__o *)values,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_99C330 *)method->rgctx_data->_5_System_Collections_Generic_List_T__AddRange);
      return;
    }
  }
label_18087b261:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Compact<Vector3>
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact_Vector3_ (System_Collections_Generic_List_T__o* values, System_Collections_Generic_List_int__o* used, const MethodInfo_87B270* method);
// 0x18087b270

void Characters_TitanLimbMesh_CutMeshData__Compact_Vector3_
               (System_Collections_Generic_List_T__o *values,System_Collections_Generic_List_int__o *used,
               MethodInfo_87B270 *method)

{
  int32_t *piVar1;
  uint32_t length;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o index;
  Il2CppClass *klass;
  Il2CppObject *collection;
  uint index_00;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_Fields local_18;
  
  if (method->rgctx_data == (MethodInfo_87B270_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (method->rgctx_data == (MethodInfo_87B270_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if (used != (System_Collections_Generic_List_int__o *)0x0) {
    length = (used->fields)._size;
    klass = method->rgctx_data->_0_T__;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    collection = SZArrayNew(klass,length);
    for (index_00 = 0; (int)index_00 < (used->fields)._size; index_00 = index_00 + 1) {
      index = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)used,index_00,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (values == (System_Collections_Generic_List_T__o *)0x0) goto label_18087b390;
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_18,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)values,
                 (int32_t)index.fields,
                 (MethodInfo_93BF30 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      if (collection == (Il2CppObject *)0x0) goto label_18087b390;
      if (*(uint *)&collection[1].monitor <= index_00) {
        ThrowIndexOutOfRangeException();
      }
      *(undefined8 *)((longlong)&collection[2].klass + (longlong)(int)index_00 * 0xc) = local_18._0_8_;
      *(int32_t *)((longlong)&collection[2].monitor + (longlong)(int)index_00 * 0xc) = local_18.z;
    }
    if (values != (System_Collections_Generic_List_T__o *)0x0) {
      piVar1 = &(values->fields)._version;
      *piVar1 = *piVar1 + 1;
      (values->fields)._size = 0;
      System_Collections_Generic_List_Vector3___AddRange
                ((System_Collections_Generic_List_Vector3__o *)values,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_99C310 *)method->rgctx_data->_5_System_Collections_Generic_List_T__AddRange);
      return;
    }
  }
label_18087b390:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Compact<Vector4>
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact_Vector4_ (System_Collections_Generic_List_T__o* values, System_Collections_Generic_List_int__o* used, const MethodInfo_87B3A0* method);
// 0x18087b3a0

void Characters_TitanLimbMesh_CutMeshData__Compact_Vector4_
               (System_Collections_Generic_List_T__o *values,System_Collections_Generic_List_int__o *used,
               MethodInfo_87B3A0 *method)

{
  int32_t *piVar1;
  uint32_t length;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o index;
  Il2CppClass *klass;
  Il2CppObject *collection;
  uint index_00;
  undefined1 local_18 [16];
  
  if (method->rgctx_data == (MethodInfo_87B3A0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (method->rgctx_data == (MethodInfo_87B3A0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if (used != (System_Collections_Generic_List_int__o *)0x0) {
    length = (used->fields)._size;
    klass = method->rgctx_data->_0_T__;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    collection = SZArrayNew(klass,length);
    for (index_00 = 0; (int)index_00 < (used->fields)._size; index_00 = index_00 + 1) {
      index = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)used,index_00,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (values == (System_Collections_Generic_List_T__o *)0x0) goto label_18087b4b5;
      System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___get_Item
                ((UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_o
                  *)local_18,values,(int32_t)index.fields,
                 (MethodInfo_92B880 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      if (collection == (Il2CppObject *)0x0) goto label_18087b4b5;
      if (*(uint *)&collection[1].monitor <= index_00) {
        ThrowIndexOutOfRangeException();
      }
      collection[(longlong)(int)index_00 + 2].klass = (Il2CppClass *)local_18._0_8_;
      collection[(longlong)(int)index_00 + 2].monitor = (void *)local_18._8_8_;
    }
    if (values != (System_Collections_Generic_List_T__o *)0x0) {
      piVar1 = &(values->fields)._version;
      *piVar1 = *piVar1 + 1;
      (values->fields)._size = 0;
      System_Collections_Generic_List_Vector4___AddRange
                ((System_Collections_Generic_List_Vector4__o *)values,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_99C2B0 *)method->rgctx_data->_5_System_Collections_Generic_List_T__AddRange);
      return;
    }
  }
label_18087b4b5:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Compact<__Il2CppFullySharedGenericType>
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* values, System_Collections_Generic_List_int__o* used, const MethodInfo_87AF60* method);
// 0x18087af60

void Characters_TitanLimbMesh_CutMeshData__Compact___Il2CppFullySharedGenericType_
               (System_Collections_Generic_List_T__o *values,System_Collections_Generic_List_int__o *used,
               MethodInfo_87AF60 *method)

{
  void *source;
  uint32_t length;
  uint uVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  longlong lVar5;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields SVar6;
  Il2CppClass *pIVar7;
  Il2CppObject *pIVar8;
  ulonglong uVar9;
  uint index;
  uint64_t size;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields local_res10 [2];
  uint local_res18;
  undefined8 auStack_80 [5];
  undefined8 auStack_58 [2];
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields *local_48;
  void *local_40;
  
  if (method->rgctx_data == (MethodInfo_87AF60_RGCTXs *)0x0) {
    auStack_80[0] = 0x18087af95;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    auStack_80[0] = 0x18087afa1;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (method->rgctx_data == (MethodInfo_87AF60_RGCTXs *)0x0) {
      auStack_80[0] = 0x18087afb0;
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  local_res18 = (method->rgctx_data->_3_T->_2).stack_slot_size;
  size = (uint64_t)local_res18;
  uVar9 = size + 0xf;
  if (uVar9 <= size) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_80[0] = 0x18087afe2;
  lVar5 = -(uVar9 & 0xfffffffffffffff0);
  source = (void *)((longlong)&local_48 + lVar5);
  if (used != (System_Collections_Generic_List_int__o *)0x0) {
    length = (used->fields)._size;
    pIVar7 = method->rgctx_data->_0_T__;
    if (((pIVar7->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18087b00f;
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    }
    *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18087b019;
    pIVar8 = SZArrayNew(pIVar7,length);
    for (index = 0; (int)index < (used->fields)._size; index = index + 1) {
      *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18087b03b;
      SVar6 = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
              System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)used,index,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (values == (System_Collections_Generic_List_T__o *)0x0) goto label_18087b135;
      local_40 = source;
      local_48 = local_res10;
      pMVar2 = method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
      *(void **)((longlong)auStack_58 + lVar5) = source;
      pIVar3 = pMVar2->methodPointer;
      pIVar4 = pMVar2->invoker_method;
      *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18087b071;
      local_res10[0] = SVar6;
      (*pIVar4)(pIVar3,pMVar2,values,&local_48,*(void **)((longlong)auStack_58 + lVar5));
      if (pIVar8 == (Il2CppObject *)0x0) goto label_18087b135;
      if (*(uint *)&pIVar8[1].monitor <= index) {
label_18087b13b:
        *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18087b140;
        ThrowIndexOutOfRangeException();
      }
      uVar1 = (pIVar8->klass->_2).element_size;
      *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18087b0a5;
      memcpy((Il2CppClass **)((longlong)&pIVar8[2].klass + (ulonglong)uVar1 * (longlong)(int)index),source,
             size);
      if (*(uint *)&pIVar8[1].monitor <= index) goto label_18087b13b;
      uVar1 = (pIVar8->klass->_2).element_size;
      pIVar7 = method->rgctx_data->_3_T;
      if (((pIVar7->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18087b0d8;
        pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
      }
      *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18087b0ea;
      il2cpp_runtime_helper_180416190(pIVar7,(Il2CppClass **)
                           ((longlong)&pIVar8[2].klass + (ulonglong)uVar1 * (longlong)(int)index),source);
      size = (uint64_t)local_res18;
    }
    if (values != (System_Collections_Generic_List_T__o *)0x0) {
      pMVar2 = method->rgctx_data->_4_System_Collections_Generic_List_T__Clear;
      pIVar3 = pMVar2->methodPointer;
      *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18087b10d;
      (*pIVar3)(values,pMVar2);
      pMVar2 = method->rgctx_data->_5_System_Collections_Generic_List_T__AddRange;
      pIVar3 = pMVar2->methodPointer;
      *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18087b121;
      (*pIVar3)(values,pIVar8,pMVar2);
      return;
    }
  }
label_18087b135:
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x18087b13a;
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$CreateMesh
// il2cpp: UnityEngine_Mesh_o* Characters_TitanLimbMesh_CutMeshData__CreateMesh (Characters_TitanLimbMesh_CutMeshData_o* __this, Characters_TitanLimbMesh_MeshSource_o* source, bool compact, const MethodInfo* method);
// 0x1821a6700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a68d3: jmp 0x1821a6891

UnityEngine_Mesh_o *
Characters_TitanLimbMesh_CutMeshData__CreateMesh
          (Characters_TitanLimbMesh_CutMeshData_o *__this,Characters_TitanLimbMesh_MeshSource_o *source,
          bool compact,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  System_Collections_Generic_List_BoneWeight__o *__this_01;
  System_Collections_Generic_List_int__array *pSVar1;
  System_Collections_Generic_List_int__array *pSVar2;
  int32_t value;
  UnityEngine_Object_o *__this_02;
  System_String_o *pSVar3;
  UnityEngine_BoneWeight_array *value_00;
  UnityEngine_Bounds_o *pUVar4;
  uint submesh;
  UnityEngine_Bounds_o local_48;
  UnityEngine_Bounds_o local_28;
  
  if (Il2CppMethodInitialized_184346e98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BoneWeight_ToArray)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&" Limb Cut");
    Il2CppMethodInitialized_184346e98 = '\x01';
  }
  if (compact) {
    Characters_TitanLimbMesh_CutMeshData__Compact(__this,(MethodInfo *)0x0);
  }
  if (source != (Characters_TitanLimbMesh_MeshSource_o *)0x0) {
    __this_00 = (UnityEngine_Object_o *)(source->fields).Original;
    __this_02 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
    UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this_02,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar3 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969e50(pSVar3," Limb Cut",(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_name(__this_02,pSVar3,(MethodInfo *)0x0);
        value = UnityEngine_Mesh__get_indexFormat((UnityEngine_Mesh_o *)__this_00,(MethodInfo *)0x0);
        UnityEngine_Mesh__set_indexFormat((UnityEngine_Mesh_o *)__this_02,value,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetVertices
                  ((UnityEngine_Mesh_o *)__this_02,(__this->fields)._vertices,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetNormals
                  ((UnityEngine_Mesh_o *)__this_02,(__this->fields)._normals,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetTangents
                  ((UnityEngine_Mesh_o *)__this_02,(__this->fields)._tangents,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetUVs((UnityEngine_Mesh_o *)__this_02,0,(__this->fields)._uv,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetColors_2eeaa30
                  ((UnityEngine_Mesh_o *)__this_02,(__this->fields)._colors,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._weights;
        if (__this_01 != (System_Collections_Generic_List_BoneWeight__o *)0x0) {
          value_00 = (UnityEngine_BoneWeight_array *)
                     System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                               ((System_Collections_Generic_List_T__o *)__this_01,
                                (MethodInfo_929FE0 *)
                                MethodInfo_System_Collections_Generic_List_BoneWeight_ToArray);
          UnityEngine_Mesh__set_boneWeights((UnityEngine_Mesh_o *)__this_02,value_00,(MethodInfo *)0x0);
          UnityEngine_Mesh__set_bindposes
                    ((UnityEngine_Mesh_o *)__this_02,(source->fields).Bindposes,(MethodInfo *)0x0);
          pSVar1 = (__this->fields)._triangles;
          if (pSVar1 != (System_Collections_Generic_List_int__array *)0x0) {
            UnityEngine_Mesh__set_subMeshCount
                      ((UnityEngine_Mesh_o *)__this_02,(int)pSVar1->max_length + 1,(MethodInfo *)0x0);
            submesh = 0;
            pSVar1 = (__this->fields)._triangles;
            while (pSVar1 != (System_Collections_Generic_List_int__array *)0x0) {
              pSVar2 = (__this->fields)._triangles;
              if ((int)pSVar1->max_length <= (int)submesh) {
                if (pSVar2 != (System_Collections_Generic_List_int__array *)0x0) {
                  UnityEngine_Mesh__SetTriangles_2eecc60
                            ((UnityEngine_Mesh_o *)__this_02,(__this->fields)._wound,
                             (int32_t)pSVar2->max_length,(MethodInfo *)0x0);
                  if (compact) {
                    UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)__this_02,(MethodInfo *)0x0);
                  }
                  else {
                    pUVar4 = UnityEngine_Mesh__get_bounds
                                       (&local_28,(UnityEngine_Mesh_o *)__this_00,(MethodInfo *)0x0);
                    local_48.fields.m_Center.fields.x = (pUVar4->fields).m_Center.fields.x;
                    local_48.fields.m_Center.fields.y = (pUVar4->fields).m_Center.fields.y;
                    local_48.fields._8_8_ = *(undefined8 *)&(pUVar4->fields).m_Center.fields.z;
                    local_48.fields.m_Extents.fields.y = (pUVar4->fields).m_Extents.fields.y;
                    local_48.fields.m_Extents.fields.z = (pUVar4->fields).m_Extents.fields.z;
                    UnityEngine_Mesh__set_bounds((UnityEngine_Mesh_o *)__this_02,&local_48,(MethodInfo *)0x0);
                  }
                  return (UnityEngine_Mesh_o *)__this_02;
                }
                break;
              }
              if (pSVar2 == (System_Collections_Generic_List_int__array *)0x0) break;
              if ((uint)pSVar2->max_length <= submesh) {
                ThrowIndexOutOfRangeException();
              }
              UnityEngine_Mesh__SetTriangles_2eecc60
                        ((UnityEngine_Mesh_o *)__this_02,pSVar2->m_Items[(int)submesh],submesh,
                         (MethodInfo *)0x0);
              submesh = submesh + 1;
              pSVar1 = (__this->fields)._triangles;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh$$.ctor
// il2cpp: void Characters_TitanLimbMesh___ctor (Characters_TitanLimbMesh_o* __this, UnityEngine_SkinnedMeshRenderer_o* renderer, UnityEngine_Transform_o* leftHand, UnityEngine_Transform_o* rightHand, UnityEngine_Material_o* woundMaterial, const MethodInfo* method);
// 0x1821b79a0

void Characters_TitanLimbMesh___ctor
               (Characters_TitanLimbMesh_o *__this,UnityEngine_SkinnedMeshRenderer_o *renderer,
               UnityEngine_Transform_o *leftHand,UnityEngine_Transform_o *rightHand,
               UnityEngine_Material_o *woundMaterial,MethodInfo *method)

{
  Characters_TitanLimbMesh_MeshSource_o *pCVar1;
  UnityEngine_Mesh_o *__this_00;
  int32_t iVar2;
  UnityEngine_SkinnedMeshRenderer_array *value;
  UnityEngine_MaterialPropertyBlock_o *__this_01;
  Characters_TitanLimbMesh_CachedBody_o *pCVar3;
  System_Collections_Generic_List_Material__o *__this_02;
  UnityEngine_Transform_array *value_00;
  
  if (Il2CppMethodInitialized_184346e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_ctor_40be748);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
    Il2CppMethodInitialized_184346e78 = '\x01';
  }
  value = (UnityEngine_SkinnedMeshRenderer_array *)
          SZArrayNew(TypeInfo_UnityEngine_SkinnedMeshRenderer_array,2);
  (__this->fields)._regrowth = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._regrowth,value);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
  UnityEngine_MaterialPropertyBlock___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields)._growthProperties = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._growthProperties,__this_01);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._renderer = renderer;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._renderer,renderer);
  (__this->fields)._woundMaterial = woundMaterial;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._woundMaterial,woundMaterial);
  if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
  }
  pCVar3 = Characters_TitanLimbMesh__GetBody(renderer,leftHand,rightHand,(MethodInfo *)0x0);
  (__this->fields)._body = pCVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._body,pCVar3);
  pCVar3 = (__this->fields)._body;
  if (((pCVar3 != (Characters_TitanLimbMesh_CachedBody_o *)0x0) &&
      (pCVar1 = (pCVar3->fields).Source, pCVar1 != (Characters_TitanLimbMesh_MeshSource_o *)0x0)) &&
     (__this_00 = (pCVar1->fields).Original, __this_00 != (UnityEngine_Mesh_o *)0x0)) {
    iVar2 = UnityEngine_Mesh__get_subMeshCount(__this_00,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_T__o *)__this_02,iVar2 + 1,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_Material_ctor_40be748);
    (__this->fields)._materials = __this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._materials,__this_02);
    if (renderer != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      value_00 = UnityEngine_SkinnedMeshRenderer__get_bones(renderer,(MethodInfo *)0x0);
      (__this->fields)._bones = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bones,value_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh$$GetBody
// il2cpp: Characters_TitanLimbMesh_CachedBody_o* Characters_TitanLimbMesh__GetBody (UnityEngine_SkinnedMeshRenderer_o* renderer, UnityEngine_Transform_o* leftHand, UnityEngine_Transform_o* rightHand, const MethodInfo* method);
// 0x1821b6b50

Characters_TitanLimbMesh_CachedBody_o *
Characters_TitanLimbMesh__GetBody
          (UnityEngine_SkinnedMeshRenderer_o *renderer,UnityEngine_Transform_o *leftHand,
          UnityEngine_Transform_o *rightHand,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
  *pSVar1;
  bool bVar2;
  int32_t item2;
  int32_t item3;
  int32_t item4;
  int32_t item5;
  int32_t item6;
  int32_t item7;
  UnityEngine_Transform_array *array;
  UnityEngine_Mesh_o *item1;
  UnityEngine_Transform_o *pUVar3;
  Characters_TitanLimbMesh_CachedBody_o *__this;
  Characters_TitanLimbMesh_CachedBody_o *local_70;
  System_ValueTuple_object__int__int__int__int__int__int__o local_68;
  System_ValueTuple_object__int__int__int__int__int__int__o local_48;
  
  if (Il2CppMethodInitialized_184346e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CachedBody);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_4092460
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_4092620
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_ValueTuple_Mesh_int_int_int_int_int_int_ctor);
    Il2CppMethodInitialized_184346e79 = '\x01';
  }
  local_70 = (Characters_TitanLimbMesh_CachedBody_o *)0x0;
  local_68.fields.Item1 = (Il2CppObject *)0x0;
  local_68.fields.Item2 = 0;
  local_68.fields.Item3 = 0;
  local_68.fields.Item4 = 0;
  local_68.fields.Item5 = 0;
  local_68.fields.Item6 = 0;
  local_68.fields.Item7 = 0;
  if (renderer != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    array = UnityEngine_SkinnedMeshRenderer__get_bones(renderer,(MethodInfo *)0x0);
    item1 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(renderer,(MethodInfo *)0x0);
    item2 = System_Array__IndexOf_object_
                      ((System_Object_array *)array,(Il2CppObject *)leftHand,
                       (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_Transform);
    if (leftHand != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__GetParent(leftHand,(MethodInfo *)0x0);
      item3 = System_Array__IndexOf_object_
                        ((System_Object_array *)array,(Il2CppObject *)pUVar3,
                         (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_Transform);
      pUVar3 = UnityEngine_Transform__GetParent(leftHand,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__GetParent(pUVar3,(MethodInfo *)0x0);
        item4 = System_Array__IndexOf_object_
                          ((System_Object_array *)array,(Il2CppObject *)pUVar3,
                           (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_Transform);
        item5 = System_Array__IndexOf_object_
                          ((System_Object_array *)array,(Il2CppObject *)rightHand,
                           (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_Transform);
        if (rightHand != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Transform__GetParent(rightHand,(MethodInfo *)0x0);
          item6 = System_Array__IndexOf_object_
                            ((System_Object_array *)array,(Il2CppObject *)pUVar3,
                             (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_Transform);
          pUVar3 = UnityEngine_Transform__GetParent(rightHand,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = UnityEngine_Transform__GetParent(pUVar3,(MethodInfo *)0x0);
            item7 = System_Array__IndexOf_object_
                              ((System_Object_array *)array,(Il2CppObject *)pUVar3,
                               (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_Transform);
            System_ValueTuple_object__int__int__int__int__int__int____ctor
                      (&local_68,(Il2CppObject *)item1,item2,item3,item4,item5,item6,item7,
                       (MethodInfo_106E5E0 *)MethodInfo_System_ValueTuple_Mesh_int_int_int_int_int_int_ctor);
            if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
            }
            pSVar1 = TypeInfo_Characters_TitanLimbMesh->static_fields->Bodies;
            if (pSVar1 != (System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
                           *)0x0) {
              local_48.fields.Item1 = local_68.fields.Item1;
              local_48.fields.Item2 = local_68.fields.Item2;
              local_48.fields.Item3 = local_68.fields.Item3;
              local_48.fields.Item4 = local_68.fields.Item4;
              local_48.fields.Item5 = local_68.fields.Item5;
              local_48.fields.Item6 = local_68.fields.Item6;
              local_48.fields.Item7 = local_68.fields.Item7;
              bVar2 = System_Collections_Generic_Dictionary_ValueTuple_object__int__int__int__int__int__int___object___TryGetValue
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,&local_48,
                                 (Il2CppObject **)&local_70,
                                 (MethodInfo_13DD360 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_4092620
                                );
              if (!bVar2) {
                __this = il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CachedBody);
                Characters_TitanLimbMesh_CachedBody___ctor
                          (__this,renderer,leftHand,rightHand,(MethodInfo *)0x0);
                local_70 = __this;
                if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
                }
                pSVar1 = TypeInfo_Characters_TitanLimbMesh->static_fields->Bodies;
                if (pSVar1 == (System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
                               *)0x0) goto label_1821b6e6f;
                local_48.fields.Item1 = local_68.fields.Item1;
                local_48.fields.Item2 = local_68.fields.Item2;
                local_48.fields.Item3 = local_68.fields.Item3;
                local_48.fields.Item4 = local_68.fields.Item4;
                local_48.fields.Item5 = local_68.fields.Item5;
                local_48.fields.Item6 = local_68.fields.Item6;
                local_48.fields.Item7 = local_68.fields.Item7;
                System_Collections_Generic_Dictionary_ValueTuple_object__int__int__int__int__int__int___object___Add
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,&local_48,
                           (Il2CppObject *)local_70,
                           (MethodInfo_13CE4F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_4092460
                          );
              }
              return local_70;
            }
          }
        }
      }
    }
  }
label_1821b6e6f:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh$$Detach
// il2cpp: void Characters_TitanLimbMesh__Detach (Characters_TitanLimbMesh_o* __this, bool left, bool arm, bool handDisabled, float handGrowth, UnityEngine_Vector3_o velocity, const MethodInfo* method);
// 0x1821b6740

void Characters_TitanLimbMesh__Detach
               (Characters_TitanLimbMesh_o *__this,bool left,bool arm,bool handDisabled,float handGrowth,
               UnityEngine_Vector3_o *velocity,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Component_o *__this_01;
  Characters_TitanLimbMesh_CachedBody_o *pCVar1;
  UnityEngine_SkinnedMeshRenderer_o *source;
  UnityEngine_Material_o *wound;
  bool bVar2;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Mesh_o *limb;
  Characters_TitanLimbMesh_RegrowthMesh_o *pCVar3;
  UnityEngine_Mesh_o *growth;
  UnityEngine_Vector3_Fields local_48 [3];
  
  if (Il2CppMethodInitialized_184346e7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    Il2CppMethodInitialized_184346e7a = '\x01';
  }
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
  if (__this_00 == (UnityEngine_Renderer_o *)0x0) {
label_1821b68cc:
    ThrowNullReferenceException();
  }
  bVar2 = UnityEngine_Renderer__get_enabled(__this_00,(MethodInfo *)0x0);
  if (bVar2) {
    __this_01 = (UnityEngine_Component_o *)(__this->fields)._renderer;
    if ((__this_01 == (UnityEngine_Component_o *)0x0) ||
       (__this_02 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0),
       __this_02 == (UnityEngine_GameObject_o *)0x0)) goto label_1821b68cc;
    bVar2 = UnityEngine_GameObject__get_activeInHierarchy(__this_02,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields)._body;
      if (pCVar1 == (Characters_TitanLimbMesh_CachedBody_o *)0x0) goto label_1821b68cc;
      limb = Characters_TitanLimbMesh_CachedBody__GetDetached
                       (pCVar1,left,arm,handDisabled,(handDisabled && arm) && 0.0 < handGrowth,
                        (MethodInfo *)0x0);
      if ((handDisabled && arm) && 0.0 < handGrowth) {
        pCVar1 = (__this->fields)._body;
        if ((pCVar1 == (Characters_TitanLimbMesh_CachedBody_o *)0x0) ||
           (pCVar3 = Characters_TitanLimbMesh_CachedBody__GetRegrowth(pCVar1,left,false,(MethodInfo *)0x0),
           pCVar3 == (Characters_TitanLimbMesh_RegrowthMesh_o *)0x0)) goto label_1821b68cc;
        growth = (pCVar3->fields).Mesh;
      }
      else {
        growth = (UnityEngine_Mesh_o *)0x0;
      }
      source = (__this->fields)._renderer;
      wound = (__this->fields)._woundMaterial;
      if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
      }
      local_48[0].x = (velocity->fields).x;
      local_48[0].y = (velocity->fields).y;
      local_48[0].z = (velocity->fields).z;
      Characters_TitanLimbFallEffect__Play
                (source,limb,wound,growth,handGrowth,(UnityEngine_Vector3_o *)local_48,
                 (UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.TitanLimbMesh$$SetDisabled
// il2cpp: void Characters_TitanLimbMesh__SetDisabled (Characters_TitanLimbMesh_o* __this, bool leftHand, bool rightHand, bool leftArm, bool rightArm, bool leftRegrowing, bool rightRegrowing, const MethodInfo* method);
// 0x1821b6e80

void Characters_TitanLimbMesh__SetDisabled
               (Characters_TitanLimbMesh_o *__this,bool leftHand,bool rightHand,bool leftArm,bool rightArm,
               bool leftRegrowing,bool rightRegrowing,MethodInfo *method)

{
  Characters_TitanLimbMesh_CachedBody_o *pCVar1;
  UnityEngine_SkinnedMeshRenderer_o *__this_00;
  UnityEngine_Renderer_o *pUVar2;
  Characters_TitanLimbMesh_MeshSource_o *pCVar3;
  System_Collections_Generic_List_Material__o *pSVar4;
  int32_t iVar5;
  UnityEngine_Mesh_o *pUVar6;
  uint left;
  int iVar7;
  
  if (Il2CppMethodInitialized_184346e7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_RemoveRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    Il2CppMethodInitialized_184346e7b = '\x01';
  }
  iVar5 = 2;
  if (leftArm) {
    left = 2;
  }
  else {
    left = (uint)leftHand;
  }
  if (rightArm) {
    iVar7 = 6;
  }
  else if (rightHand) {
    iVar7 = 3;
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
    iVar7 = 0;
  }
  iVar7 = iVar7 + left + (-(uint)leftRegrowing & 9 | -(uint)rightRegrowing & 0x12);
  if ((__this->fields)._state == iVar7) {
    return;
  }
  pCVar1 = (__this->fields)._body;
  if (pCVar1 != (Characters_TitanLimbMesh_CachedBody_o *)0x0) {
    __this_00 = (__this->fields)._renderer;
    pUVar6 = Characters_TitanLimbMesh_CachedBody__GetMesh
                       (pCVar1,left,iVar5,leftRegrowing,rightRegrowing,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      UnityEngine_SkinnedMeshRenderer__set_sharedMesh(__this_00,pUVar6,(MethodInfo *)0x0);
      if (((__this->fields)._state == 0) == (iVar7 == 0)) {
label_1821b7028:
        (__this->fields)._state = iVar7;
        return;
      }
      pUVar2 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
      if (pUVar2 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__GetSharedMaterials(pUVar2,(__this->fields)._materials,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._body;
        if (((pCVar1 != (Characters_TitanLimbMesh_CachedBody_o *)0x0) &&
            (pCVar3 = (pCVar1->fields).Source, pCVar3 != (Characters_TitanLimbMesh_MeshSource_o *)0x0)) &&
           (pUVar6 = (pCVar3->fields).Original, pUVar6 != (UnityEngine_Mesh_o *)0x0)) {
          iVar5 = UnityEngine_Mesh__get_subMeshCount(pUVar6,(MethodInfo *)0x0);
          pSVar4 = (__this->fields)._materials;
          if (pSVar4 != (System_Collections_Generic_List_Material__o *)0x0) {
            if (iVar5 < (pSVar4->fields)._size) {
              System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___RemoveRange
                        ((System_Collections_Generic_List_T__o *)pSVar4,iVar5,(pSVar4->fields)._size - iVar5,
                         (MethodInfo_9344F0 *)MethodInfo_System_Collections_Generic_List_Material_RemoveRange)
              ;
            }
            if (iVar7 != 0) {
              pSVar4 = (__this->fields)._materials;
              if (pSVar4 == (System_Collections_Generic_List_Material__o *)0x0) goto label_1821b7034;
              il2cpp_runtime_helper_180012890(pSVar4,(__this->fields)._woundMaterial);
            }
            pUVar2 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
            if (pUVar2 != (UnityEngine_Renderer_o *)0x0) {
              UnityEngine_Renderer__SetSharedMaterials(pUVar2,(__this->fields)._materials,(MethodInfo *)0x0);
              goto label_1821b7028;
            }
          }
        }
      }
    }
  }
label_1821b7034:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh$$Dispose
// il2cpp: void Characters_TitanLimbMesh__Dispose (Characters_TitanLimbMesh_o* __this, const MethodInfo* method);
// 0x1821b68e0

void Characters_TitanLimbMesh__Dispose(Characters_TitanLimbMesh_o *__this,MethodInfo *method)

{
  Characters_TitanLimbMesh_CachedBody_o *pCVar1;
  UnityEngine_SkinnedMeshRenderer_o *__this_00;
  UnityEngine_Renderer_o *pUVar2;
  Characters_TitanLimbMesh_MeshSource_o *pCVar3;
  System_Collections_Generic_List_Material__o *__this_01;
  UnityEngine_SkinnedMeshRenderer_array *pUVar4;
  UnityEngine_Material_array *pUVar5;
  UnityEngine_Material_o *obj;
  bool bVar6;
  int32_t index;
  UnityEngine_Mesh_o *pUVar7;
  UnityEngine_Object_o *pUVar8;
  uint uVar9;
  
  if (Il2CppMethodInitialized_184346e7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e7c = '\x01';
  }
  pUVar8 = (UnityEngine_Object_o *)(__this->fields)._renderer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (Il2CppMethodInitialized_184346e7b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Add);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Material_RemoveRange);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Material_get_Count);
      Il2CppMethodInitialized_184346e7b = '\x01';
    }
    if ((__this->fields)._state != 0) {
      pCVar1 = (__this->fields)._body;
      if (pCVar1 == (Characters_TitanLimbMesh_CachedBody_o *)0x0) goto label_1821b6b48;
      __this_00 = (__this->fields)._renderer;
      pUVar7 = Characters_TitanLimbMesh_CachedBody__GetMesh(pCVar1,0,0,false,false,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_1821b6b48;
      UnityEngine_SkinnedMeshRenderer__set_sharedMesh(__this_00,pUVar7,(MethodInfo *)0x0);
      if ((__this->fields)._state != 0) {
        pUVar2 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
        if (pUVar2 == (UnityEngine_Renderer_o *)0x0) goto label_1821b6b48;
        UnityEngine_Renderer__GetSharedMaterials(pUVar2,(__this->fields)._materials,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._body;
        if (((pCVar1 == (Characters_TitanLimbMesh_CachedBody_o *)0x0) ||
            (pCVar3 = (pCVar1->fields).Source, pCVar3 == (Characters_TitanLimbMesh_MeshSource_o *)0x0)) ||
           (pUVar7 = (pCVar3->fields).Original, pUVar7 == (UnityEngine_Mesh_o *)0x0)) goto label_1821b6b48;
        index = UnityEngine_Mesh__get_subMeshCount(pUVar7,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._materials;
        if (__this_01 == (System_Collections_Generic_List_Material__o *)0x0) goto label_1821b6b48;
        if (index < (__this_01->fields)._size) {
          System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___RemoveRange
                    ((System_Collections_Generic_List_T__o *)__this_01,index,(__this_01->fields)._size - index
                     ,(MethodInfo_9344F0 *)MethodInfo_System_Collections_Generic_List_Material_RemoveRange);
        }
        pUVar2 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
        if (pUVar2 == (UnityEngine_Renderer_o *)0x0) goto label_1821b6b48;
        UnityEngine_Renderer__SetSharedMaterials(pUVar2,(__this->fields)._materials,(MethodInfo *)0x0);
      }
      (__this->fields)._state = 0;
    }
  }
  pUVar4 = (__this->fields)._regrowth;
  if (pUVar4 != (UnityEngine_SkinnedMeshRenderer_array *)0x0) {
    uVar9 = 0;
    do {
      if ((int)pUVar4->max_length <= (int)uVar9) {
        if ((__this->fields)._growthMaterials != (UnityEngine_Material_array *)0x0) {
          pUVar5 = (__this->fields)._growthMaterials;
          for (uVar9 = 0; (int)uVar9 < (int)pUVar5->max_length; uVar9 = uVar9 + 1) {
            if ((uint)pUVar5->max_length <= uVar9) {
label_1821b6b42:
              ThrowIndexOutOfRangeException();
            }
            obj = pUVar5->m_Items[(int)uVar9];
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
          }
        }
        return;
      }
      if ((uint)pUVar4->max_length <= uVar9) goto label_1821b6b42;
      pUVar8 = (UnityEngine_Object_o *)pUVar4->m_Items[(int)uVar9];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        if (pUVar8 == (UnityEngine_Object_o *)0x0) break;
        pUVar8 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar8,(MethodInfo *)0x0);
      }
      uVar9 = uVar9 + 1;
    } while( true );
  }
label_1821b6b48:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh$$UpdateRegrowth
// il2cpp: UnityEngine_Vector3_o Characters_TitanLimbMesh__UpdateRegrowth (Characters_TitanLimbMesh_o* __this, bool left, bool arm, float progress, UnityEngine_Vector3_o origin, bool effectsEnabled, const MethodInfo* method);
// 0x1821b7040
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b7319: jmp 0x1821b7263
// asm:   0x1821b731e: mov r14, qword ptr [rsp + 0x100]
// asm:   0x1821b75ca: jmp 0x1821b7898
// asm:   0x1821b7871: mov rax, qword ptr [rsp + 0x128]
// asm:   0x1821b7879: movsd xmm0, qword ptr [rax]
// asm:   0x1821b787d: mov eax, dword ptr [rax + 8]
// asm:   0x1821b7880: movsd qword ptr [r13], xmm0
// asm:   0x1821b7886: mov dword ptr [r13 + 8], eax
// asm:   0x1821b788a: mov rax, r13
// asm:   0x1821b788d: jmp 0x1821b77f3

UnityEngine_Vector3_o *
Characters_TitanLimbMesh__UpdateRegrowth
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_TitanLimbMesh_o *__this,bool left,bool arm
          ,float progress,UnityEngine_Vector3_o *origin,bool effectsEnabled,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_SkinnedMeshRenderer_array *pUVar5;
  Characters_TitanLimbMesh_CachedBody_o *pCVar6;
  UnityEngine_Renderer_o *pUVar7;
  Characters_TitanLimbMesh_MeshSource_o *pCVar8;
  UnityEngine_Mesh_o *__this_00;
  System_Collections_Generic_List_Material__o *pSVar9;
  UnityEngine_Component_o *pUVar10;
  UnityEngine_SkinnedMeshRenderer_o *pUVar11;
  UnityEngine_Object_o *y;
  UnityEngine_MaterialPropertyBlock_o *pUVar12;
  UnityEngine_Vector3_array *pUVar13;
  UnityEngine_Transform_array *bones;
  UnityEngine_Matrix4x4_array *bindposes;
  int index;
  bool bVar14;
  uint32_t length;
  int32_t iVar15;
  int iVar16;
  Characters_TitanLimbMesh_RegrowthMesh_o *__this_01;
  UnityEngine_Material_array *pUVar17;
  UnityEngine_Shader_o *value;
  UnityEngine_Material_o *pUVar18;
  UnityEngine_Material_o *pUVar19;
  Il2CppObject *pIVar20;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_Transform_o *pUVar21;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *x;
  UnityEngine_Bounds_o *pUVar22;
  UnityEngine_Object_o *x_00;
  UnityEngine_Vector3_o *pUVar23;
  MethodInfo *method_00;
  System_String_o *name;
  uint uVar24;
  double dVar25;
  float fVar26;
  UnityEngine_Bounds_o local_c8;
  UnityEngine_Bounds_o local_a8 [5];
  
  if (Il2CppMethodInitialized_184346e7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Shader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
    il2cpp_codegen_initialize_runtime_metadata(&"Left limb regrowth");
    il2cpp_codegen_initialize_runtime_metadata(&"Right limb regrowth");
    il2cpp_codegen_initialize_runtime_metadata(&"Shaders/TitanRegrowth");
    Il2CppMethodInitialized_184346e7d = '\x01';
  }
  pUVar5 = (__this->fields)._regrowth;
  if (pUVar5 == (UnityEngine_SkinnedMeshRenderer_array *)0x0) goto label_1821b7898;
  if ((uint)pUVar5->max_length <= (uint)!left) {
label_1821b7892:
    ThrowIndexOutOfRangeException();
  }
  x = (UnityEngine_Object_o *)pUVar5->m_Items[!left];
  if ((progress <= 0.0) || (1.0 <= progress)) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar14 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar14) {
      if (x == (UnityEngine_Object_o *)0x0) goto label_1821b7898;
      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)x,false,(MethodInfo *)0x0);
    }
    fVar1 = (origin->fields).y;
    fVar26 = (origin->fields).z;
    (__return_storage_ptr__->fields).x = (origin->fields).x;
    (__return_storage_ptr__->fields).y = fVar1;
    (__return_storage_ptr__->fields).z = fVar26;
    return __return_storage_ptr__;
  }
  pCVar6 = (__this->fields)._body;
  if (pCVar6 == (Characters_TitanLimbMesh_CachedBody_o *)0x0) goto label_1821b7898;
  __this_01 = Characters_TitanLimbMesh_CachedBody__GetRegrowth(pCVar6,left,arm,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar14 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar14) {
    if ((__this->fields)._growthMaterials == (UnityEngine_Material_array *)0x0) {
      pUVar7 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
      if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__GetSharedMaterials(pUVar7,(__this->fields)._materials,(MethodInfo *)0x0);
        pCVar6 = (__this->fields)._body;
        if (((pCVar6 != (Characters_TitanLimbMesh_CachedBody_o *)0x0) &&
            (pCVar8 = (pCVar6->fields).Source, pCVar8 != (Characters_TitanLimbMesh_MeshSource_o *)0x0)) &&
           (__this_00 = (pCVar8->fields).Original, __this_00 != (UnityEngine_Mesh_o *)0x0)) {
          length = UnityEngine_Mesh__get_subMeshCount(__this_00,(MethodInfo *)0x0);
          pUVar17 = (UnityEngine_Material_array *)SZArrayNew(TypeInfo_UnityEngine_Material_array,length);
          (__this->fields)._growthMaterials = pUVar17;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._growthMaterials,pUVar17);
          value = UnityEngine_Resources__Load_object_
                            ("Shaders/TitanRegrowth",
                             (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Shader);
          pUVar17 = (__this->fields)._growthMaterials;
          uVar24 = 0;
          if (pUVar17 != (UnityEngine_Material_array *)0x0) {
            while( true ) {
              if ((int)pUVar17->max_length <= (int)uVar24) goto label_1821b7326;
              pSVar9 = (__this->fields)._materials;
              if (pSVar9 == (System_Collections_Generic_List_Material__o *)0x0) break;
              pUVar17 = (__this->fields)._growthMaterials;
              pUVar18 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar9,uVar24,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_Material_get_Item);
              pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
              UnityEngine_Material___ctor_2ee55e0(pUVar19,pUVar18,(MethodInfo *)0x0);
              if ((pUVar19 == (UnityEngine_Material_o *)0x0) ||
                 (UnityEngine_Material__set_shader(pUVar19,value,(MethodInfo *)0x0),
                 pUVar17 == (UnityEngine_Material_array *)0x0)) break;
              pIVar20 = il2cpp_vm_Object_IsInst
                                  ((Il2CppObject *)pUVar19,(((pUVar17->obj).klass)->_1).element_class);
              if (pIVar20 == (Il2CppObject *)0x0) {
                pIVar20 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar20,(MethodInfo *)0x0);
              }
              if ((uint)pUVar17->max_length <= uVar24) goto label_1821b7892;
              pUVar17->m_Items[(int)uVar24] = pUVar19;
              Il2CppCodeGenWriteBarrier(pUVar17->m_Items + (int)uVar24,pUVar19);
              pUVar17 = (__this->fields)._growthMaterials;
              uVar24 = uVar24 + 1;
              if (pUVar17 == (UnityEngine_Material_array *)0x0) break;
            }
          }
        }
      }
      goto label_1821b7898;
    }
label_1821b7326:
    name = "Right limb regrowth";
    if (left) {
      name = "Left limb regrowth";
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(__this_02,name,(MethodInfo *)0x0);
    pUVar10 = (UnityEngine_Component_o *)(__this->fields)._renderer;
    if (((pUVar10 == (UnityEngine_Component_o *)0x0) ||
        (__this_03 = UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0),
        __this_03 == (UnityEngine_GameObject_o *)0x0)) ||
       (iVar15 = UnityEngine_GameObject__get_layer(__this_03,(MethodInfo *)0x0),
       __this_02 == (UnityEngine_GameObject_o *)0x0)) goto label_1821b7898;
    UnityEngine_GameObject__set_layer(__this_02,iVar15,(MethodInfo *)0x0);
    pUVar21 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    pUVar10 = (UnityEngine_Component_o *)(__this->fields)._renderer;
    if ((pUVar10 == (UnityEngine_Component_o *)0x0) ||
       (parent = UnityEngine_Component__get_transform(pUVar10,(MethodInfo *)0x0),
       pUVar21 == (UnityEngine_Transform_o *)0x0)) goto label_1821b7898;
    UnityEngine_Transform__SetParent_2f5a7e0(pUVar21,parent,false,(MethodInfo *)0x0);
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__AddComponent_object_
                  (__this_02,
                   (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_SkinnedMeshRenderer);
    if (x == (UnityEngine_Object_o *)0x0) goto label_1821b7898;
    UnityEngine_SkinnedMeshRenderer__set_bones
              ((UnityEngine_SkinnedMeshRenderer_o *)x,(__this->fields)._bones,(MethodInfo *)0x0);
    pUVar11 = (__this->fields)._renderer;
    if (pUVar11 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_1821b7898;
    pUVar21 = UnityEngine_SkinnedMeshRenderer__get_rootBone(pUVar11,(MethodInfo *)0x0);
    UnityEngine_SkinnedMeshRenderer__set_rootBone
              ((UnityEngine_SkinnedMeshRenderer_o *)x,pUVar21,(MethodInfo *)0x0);
    pUVar7 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
    if (pUVar7 == (UnityEngine_Renderer_o *)0x0) goto label_1821b7898;
    pUVar22 = UnityEngine_Renderer__get_localBounds(local_a8,pUVar7,(MethodInfo *)0x0);
    local_c8.fields.m_Center.fields.x = (pUVar22->fields).m_Center.fields.x;
    local_c8.fields.m_Center.fields.y = (pUVar22->fields).m_Center.fields.y;
    local_c8.fields._8_8_ = *(undefined8 *)&(pUVar22->fields).m_Center.fields.z;
    local_c8.fields.m_Extents.fields.y = (pUVar22->fields).m_Extents.fields.y;
    local_c8.fields.m_Extents.fields.z = (pUVar22->fields).m_Extents.fields.z;
    UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)x,&local_c8,(MethodInfo *)0x0);
    UnityEngine_Renderer__set_sharedMaterials
              ((UnityEngine_Renderer_o *)x,(__this->fields)._growthMaterials,(MethodInfo *)0x0);
    pUVar11 = (__this->fields)._renderer;
    if (pUVar11 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_1821b7898;
    iVar15 = UnityEngine_SkinnedMeshRenderer__get_quality(pUVar11,(MethodInfo *)0x0);
    UnityEngine_SkinnedMeshRenderer__set_quality
              ((UnityEngine_SkinnedMeshRenderer_o *)x,iVar15,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._regrowth;
    if (pUVar5 == (UnityEngine_SkinnedMeshRenderer_array *)0x0) goto label_1821b7898;
    pIVar20 = il2cpp_vm_Object_IsInst((Il2CppObject *)x,(((pUVar5->obj).klass)->_1).element_class);
    if (pIVar20 == (Il2CppObject *)0x0) {
      pIVar20 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar20,(MethodInfo *)0x0);
    }
    bVar14 = !left;
    if ((uint)pUVar5->max_length <= (uint)bVar14) goto label_1821b7892;
    pUVar5->m_Items[bVar14] = (UnityEngine_SkinnedMeshRenderer_o *)x;
    Il2CppCodeGenWriteBarrier(pUVar5->m_Items + bVar14,x);
  }
  else if (x == (UnityEngine_Object_o *)0x0) goto label_1821b7898;
  x_00 = (UnityEngine_Object_o *)
         UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                   ((UnityEngine_SkinnedMeshRenderer_o *)x,(MethodInfo *)0x0);
  if (__this_01 != (Characters_TitanLimbMesh_RegrowthMesh_o *)0x0) {
    y = (UnityEngine_Object_o *)(__this_01->fields).Mesh;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar14 = UnityEngine_Object__op_Inequality(x_00,y,(MethodInfo *)0x0);
    if (bVar14) {
      UnityEngine_SkinnedMeshRenderer__set_sharedMesh
                ((UnityEngine_SkinnedMeshRenderer_o *)x,(__this_01->fields).Mesh,(MethodInfo *)0x0);
    }
    bVar14 = UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
    if (bVar14) {
label_1821b75cf:
      pUVar7 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
      if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
        bVar14 = UnityEngine_Renderer__get_enabled(pUVar7,(MethodInfo *)0x0);
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)x,bVar14,(MethodInfo *)0x0);
        pUVar12 = (__this->fields)._growthProperties;
        if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
        }
        if (pUVar12 != (UnityEngine_MaterialPropertyBlock_o *)0x0) {
          UnityEngine_MaterialPropertyBlock__SetFloat_2edfd40
                    (pUVar12,TypeInfo_Characters_TitanLimbMesh->static_fields->Growth,progress,
                     (MethodInfo *)0x0);
          pUVar12 = (__this->fields)._growthProperties;
          if (effectsEnabled) {
            fVar26 = 1.0;
          }
          else {
            fVar26 = 0.0;
          }
          if (pUVar12 != (UnityEngine_MaterialPropertyBlock_o *)0x0) {
            UnityEngine_MaterialPropertyBlock__SetFloat_2edfd40
                      (pUVar12,TypeInfo_Characters_TitanLimbMesh->static_fields->TissueIntensity,fVar26,
                       (MethodInfo *)0x0);
            method_00 = (MethodInfo *)(__this->fields)._growthProperties;
            UnityEngine_Renderer__SetPropertyBlock
                      ((UnityEngine_Renderer_o *)x,(UnityEngine_MaterialPropertyBlock_o *)method_00,
                       (MethodInfo *)0x0);
            pCVar6 = (__this->fields)._body;
            if (((pCVar6 != (Characters_TitanLimbMesh_CachedBody_o *)0x0) &&
                (pCVar8 = (pCVar6->fields).Source, pCVar8 != (Characters_TitanLimbMesh_MeshSource_o *)0x0)) &&
               (pUVar13 = (__this_01->fields)._centers, pUVar13 != (UnityEngine_Vector3_array *)0x0)) {
              bones = (__this->fields)._bones;
              bindposes = (pCVar8->fields).Bindposes;
              fVar26 = (float)((int)pUVar13->max_length + -1) * progress;
              if (Il2CppMethodInitialized_18433df26 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                Il2CppMethodInitialized_18433df26 = '\x01';
              }
              if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              }
              dVar25 = il2cpp_runtime_helper_1804f4690((double)fVar26,method_00);
              pUVar13 = (__this_01->fields)._centers;
              if (pUVar13 != (UnityEngine_Vector3_array *)0x0) {
                iVar16 = (int)pUVar13->max_length + -2;
                index = (int)dVar25;
                if (iVar16 <= (int)dVar25) {
                  index = iVar16;
                }
                pUVar23 = Characters_TitanLimbMesh_RegrowthMesh__Skin
                                    ((UnityEngine_Vector3_o *)&local_c8,__this_01,index,bones,bindposes,
                                     (MethodInfo *)0x0);
                fVar1 = (pUVar23->fields).x;
                fVar2 = (pUVar23->fields).y;
                fVar3 = (pUVar23->fields).z;
                pUVar23 = Characters_TitanLimbMesh_RegrowthMesh__Skin
                                    ((UnityEngine_Vector3_o *)&local_c8,__this_01,index + 1,bones,bindposes,
                                     (MethodInfo *)0x0);
                fVar26 = fVar26 - (float)index;
                if (fVar26 < 0.0) {
                  fVar26 = 0.0;
                }
                else if (1.0 < fVar26) {
                  fVar26 = 1.0;
                }
                fVar4 = (pUVar23->fields).z;
                (__return_storage_ptr__->fields).x = ((pUVar23->fields).x - fVar1) * fVar26 + fVar1;
                fVar1 = (pUVar23->fields).y;
                (__return_storage_ptr__->fields).z = (fVar4 - fVar3) * fVar26 + fVar3;
                (__return_storage_ptr__->fields).y = (fVar1 - fVar2) * fVar26 + fVar2;
                return __return_storage_ptr__;
              }
            }
          }
        }
      }
    }
    else {
      pUVar7 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
      if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__GetSharedMaterials(pUVar7,(__this->fields)._materials,(MethodInfo *)0x0);
        uVar24 = 0;
        pUVar17 = (__this->fields)._growthMaterials;
        while (pUVar17 != (UnityEngine_Material_array *)0x0) {
          if ((int)pUVar17->max_length <= (int)uVar24) goto label_1821b75cf;
          pUVar17 = (__this->fields)._growthMaterials;
          if (pUVar17 == (UnityEngine_Material_array *)0x0) break;
          if ((uint)pUVar17->max_length <= uVar24) goto label_1821b7892;
          pSVar9 = (__this->fields)._materials;
          if (pSVar9 == (System_Collections_Generic_List_Material__o *)0x0) break;
          pUVar18 = pUVar17->m_Items[(int)uVar24];
          pUVar19 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar9,uVar24,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_Material_get_Item);
          if (pUVar18 == (UnityEngine_Material_o *)0x0) break;
          UnityEngine_Material__CopyPropertiesFromMaterial(pUVar18,pUVar19,(MethodInfo *)0x0);
          uVar24 = uVar24 + 1;
          pUVar17 = (__this->fields)._growthMaterials;
        }
      }
    }
  }
label_1821b7898:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh$$ClearCache
// il2cpp: void Characters_TitanLimbMesh__ClearCache (const MethodInfo* method);
// 0x1821b6590
// eh: try 0x1821b6690..0x1821b6730 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821b668d: nop dword ptr [rax]
// asm:   0x1821b66c9: mov rdx, qword ptr [rip + 0x1ef3900]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int
// asm:   0x1821b66d0: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821b66d5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821b66da: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821b66df: test rcx, rcx
// asm:   0x1821b66e2: jne 0x1821b6730
// asm:   0x1821b6730: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Characters_TitanLimbMesh__ClearCache(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
  *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this;
  undefined1 local_40 [16];
  Characters_TitanLimbMesh_CachedBody_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Characters_TitanLimbMesh_CachedBody_o *local_18;
  
  if (Il2CppMethodInitialized_184346e7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_4092540
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_4092700
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int_40aa0b0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int_40aa190
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_ValueTuple_Mesh_int_int_int_int_int_int_Ti
              );
    Il2CppMethodInitialized_184346e7e = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Characters_TitanLimbMesh_CachedBody_o *)0x0;
  if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
  }
  pSVar1 = TypeInfo_Characters_TitanLimbMesh->static_fields->Bodies;
  if (pSVar1 != (System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
                 *)0x0) {
    __this = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
             System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                        (MethodInfo_13C65A0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_4092700
                       );
    if (__this != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
                 __this,(MethodInfo_F1E4D0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_ValueTuple_Mesh_int_int_int_int_int_int_Ti
                );
      local_28 = (undefined1  [8])local_40._0_8_;
      pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
      local_18 = local_30;
      local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_object__int__int__int__int__int__int___object___MoveNext
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_28,
                           (MethodInfo_155E500 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int_40aa0b0
                          );
        if (!bVar2) break;
        if (local_18 == (Characters_TitanLimbMesh_CachedBody_o *)0x0) {
          ThrowNullReferenceException();
        }
        Characters_TitanLimbMesh_CachedBody__Dispose(local_18,(MethodInfo *)0x0);
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int
                );
      if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
      }
      pSVar1 = TypeInfo_Characters_TitanLimbMesh->static_fields->Bodies;
      if (pSVar1 != (System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
                     *)0x0) {
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                   (MethodInfo_13BF1C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_4092540
                  );
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh$$.cctor
// il2cpp: void Characters_TitanLimbMesh___cctor (const MethodInfo* method);
// 0x1821b78c0

void Characters_TitanLimbMesh___cctor(MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
  *__this;
  
  if (Il2CppMethodInitialized_184346e7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
    il2cpp_codegen_initialize_runtime_metadata(&"_TissueIntensity");
    il2cpp_codegen_initialize_runtime_metadata(&"_Growth");
    Il2CppMethodInitialized_184346e7f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach
                     );
  System_Collections_Generic_Dictionary_ValueTuple_object__int__int__int__int__int__int___object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_13E2360 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach
            );
  TypeInfo_Characters_TitanLimbMesh->static_fields->Bodies = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanLimbMesh->static_fields->Bodies,__this);
  iVar1 = UnityEngine_Shader__PropertyToID("_Growth",(MethodInfo *)0x0);
  TypeInfo_Characters_TitanLimbMesh->static_fields->Growth = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_TissueIntensity",(MethodInfo *)0x0);
  TypeInfo_Characters_TitanLimbMesh->static_fields->TissueIntensity = iVar1;
  return;
}


