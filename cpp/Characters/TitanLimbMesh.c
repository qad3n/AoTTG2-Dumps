// Type: Characters.TitanLimbMesh
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/TitanLimbMesh.cs
// Prior real C# source: none
// --------------------------------

// Characters.TitanLimbMesh.MeshSource$$.ctor
// il2cpp: void Characters_TitanLimbMesh_MeshSource___ctor (Characters_TitanLimbMesh_MeshSource_o* __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
// 0x5c560a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c56265: jmp 0x5c562d7

void Characters_TitanLimbMesh_MeshSource___ctor
               (Characters_TitanLimbMesh_MeshSource_o *__this,UnityEngine_Mesh_o *mesh,MethodInfo *method)

{
  UnityEngine_Vector3_array **targetAddress;
  UnityEngine_Color32_array **targetAddress_00;
  System_Int32_array_array **targetAddress_01;
  uint uVar1;
  uint32_t length;
  UnityEngine_Vector3_array *pUVar2;
  UnityEngine_Vector4_array *pUVar3;
  UnityEngine_Vector2_array *pUVar4;
  UnityEngine_Color32_array *pUVar5;
  UnityEngine_BoneWeight_array *pUVar6;
  UnityEngine_Matrix4x4_array *pUVar7;
  System_Int32_array_array *pSVar8;
  System_Int32_array *pSVar9;
  long lVar10;
  ulong uVar11;
  
  if (Il2CppMethodInitialized_0754786a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color32_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array_array);
    Il2CppMethodInitialized_0754786a = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Original = mesh;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Original);
  if (mesh != (UnityEngine_Mesh_o *)0x0) {
    pUVar2 = UnityEngine_Mesh__get_vertices(mesh,(MethodInfo *)0x0);
    targetAddress = &(__this->fields).Vertices;
    (__this->fields).Vertices = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar2 = UnityEngine_Mesh__get_normals(mesh,(MethodInfo *)0x0);
    (__this->fields).Normals = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Normals);
    pUVar3 = UnityEngine_Mesh__get_tangents(mesh,(MethodInfo *)0x0);
    (__this->fields).Tangents = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Tangents);
    pUVar4 = UnityEngine_Mesh__get_uv(mesh,(MethodInfo *)0x0);
    (__this->fields).UV = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).UV);
    pUVar5 = UnityEngine_Mesh__get_colors32(mesh,(MethodInfo *)0x0);
    targetAddress_00 = &(__this->fields).Colors;
    (__this->fields).Colors = pUVar5;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    pUVar5 = (__this->fields).Colors;
    if (pUVar5 != (UnityEngine_Color32_array *)0x0) {
      if (pUVar5->max_length == 0) {
        pUVar2 = *targetAddress;
        if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
          pUVar5 = (UnityEngine_Color32_array *)
                   SZArrayNew(TypeInfo_UnityEngine_Color32_array,(uint32_t)pUVar2->max_length);
          *targetAddress_00 = pUVar5;
          Il2CppCodeGenWriteBarrier(targetAddress_00);
          pUVar5 = *targetAddress_00;
          if (pUVar5 != (UnityEngine_Color32_array *)0x0) {
            uVar11 = 0;
            do {
              uVar1 = (uint)pUVar5->max_length;
              if ((long)(int)uVar1 <= (long)uVar11) goto label_05c5619a;
              if (uVar1 <= uVar11) goto label_05c562dc;
              pUVar5->m_Items[uVar11].fields._overlap_0._at_rgba.rgba = -1;
              uVar11 = uVar11 + 1;
              pUVar5 = *targetAddress_00;
            } while (pUVar5 != (UnityEngine_Color32_array *)0x0);
          }
        }
      }
      else {
label_05c5619a:
        pUVar6 = UnityEngine_Mesh__get_boneWeights(mesh,(MethodInfo *)0x0);
        (__this->fields).Weights = pUVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Weights);
        pUVar7 = UnityEngine_Mesh__get_bindposes(mesh,(MethodInfo *)0x0);
        (__this->fields).Bindposes = pUVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Bindposes);
        length = UnityEngine_Mesh__get_subMeshCount(mesh,(MethodInfo *)0x0);
        pSVar8 = (System_Int32_array_array *)SZArrayNew(TypeInfo_int_array_array,length);
        targetAddress_01 = &(__this->fields).Triangles;
        (__this->fields).Triangles = pSVar8;
        Il2CppCodeGenWriteBarrier(targetAddress_01);
        pSVar8 = (__this->fields).Triangles;
        if (pSVar8 != (System_Int32_array_array *)0x0) {
          lVar10 = 0x20;
          uVar11 = 0;
          do {
            if ((long)(int)pSVar8->max_length <= (long)uVar11) {
              return;
            }
            pSVar9 = UnityEngine_Mesh__GetTriangles(mesh,(int32_t)uVar11,(MethodInfo *)0x0);
            if ((uint)pSVar8->max_length <= uVar11) {
label_05c562dc:
              ThrowIndexOutOfRangeException();
            }
            pSVar8->m_Items[uVar11] = pSVar9;
            Il2CppCodeGenWriteBarrier((void **)((long)pSVar8->m_Items + lVar10 + -0x20));
            uVar11 = uVar11 + 1;
            pSVar8 = *targetAddress_01;
            lVar10 = lVar10 + 8;
          } while (pSVar8 != (System_Int32_array_array *)0x0);
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CachedBody$$.ctor
// il2cpp: void Characters_TitanLimbMesh_CachedBody___ctor (Characters_TitanLimbMesh_CachedBody_o* __this, UnityEngine_SkinnedMeshRenderer_o* renderer, UnityEngine_Transform_o* leftHand, UnityEngine_Transform_o* rightHand, const MethodInfo* method);
// 0x5c54610

void Characters_TitanLimbMesh_CachedBody___ctor
               (Characters_TitanLimbMesh_CachedBody_o *__this,UnityEngine_SkinnedMeshRenderer_o *renderer,
               UnityEngine_Transform_o *leftHand,UnityEngine_Transform_o *rightHand,MethodInfo *method)

{
  UnityEngine_Mesh_array *pUVar1;
  Characters_TitanLimbMesh_RegrowthMesh_array *pCVar2;
  UnityEngine_Mesh_o *mesh;
  Characters_TitanLimbMesh_MeshSource_o *pCVar3;
  Characters_TitanLimbMesh_CutPlane_array *pCVar4;
  Characters_TitanLimbMesh_CutPlane_o *pCVar5;
  UnityEngine_Transform_o *pUVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)rightHand;
  if (Il2CppMethodInitialized_0754786b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CutPlane_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CutPlane);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_MeshSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_RegrowthMesh_array);
    Il2CppMethodInitialized_0754786b = '\x01';
  }
  pUVar1 = (UnityEngine_Mesh_array *)SZArrayNew(TypeInfo_UnityEngine_Mesh_array,0x24);
  (__this->fields)._meshes = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._meshes);
  pCVar2 = (Characters_TitanLimbMesh_RegrowthMesh_array *)
           SZArrayNew(TypeInfo_Characters_TitanLimbMesh_RegrowthMesh_array,4);
  (__this->fields)._regrowth = pCVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._regrowth);
  pUVar1 = (UnityEngine_Mesh_array *)SZArrayNew(TypeInfo_UnityEngine_Mesh_array,8);
  (__this->fields)._detached = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._detached);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (renderer != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    mesh = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(renderer,(MethodInfo *)0x0);
    pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_MeshSource);
    Characters_TitanLimbMesh_MeshSource___ctor(pCVar3,mesh,method_01);
    (__this->fields).Source = pCVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Source);
    pCVar3 = (__this->fields).Source;
    if ((pCVar3 != (Characters_TitanLimbMesh_MeshSource_o *)0x0) &&
       (pUVar1 = (__this->fields)._meshes, pUVar1 != (UnityEngine_Mesh_array *)0x0)) {
      if ((int)pUVar1->max_length != 0) {
        pUVar1->m_Items[0] = (pCVar3->fields).Original;
        Il2CppCodeGenWriteBarrier(pUVar1->m_Items);
        pCVar4 = (Characters_TitanLimbMesh_CutPlane_array *)
                 SZArrayNew(TypeInfo_Characters_TitanLimbMesh_CutPlane_array,3);
        pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutPlane);
        Characters_TitanLimbMesh_CutPlane___ctor_5b562f0(pCVar5,renderer,leftHand,1.0,method_00);
        if (pCVar4 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c548fb;
        if ((pCVar4->max_length & 0xfffffffe) != 0) {
          pCVar4->m_Items[1] = pCVar5;
          Il2CppCodeGenWriteBarrier(pCVar4->m_Items + 1);
          if (leftHand == (UnityEngine_Transform_o *)0x0) goto label_05c548fb;
          pUVar6 = UnityEngine_Transform__get_parent(leftHand,(MethodInfo *)0x0);
          pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutPlane);
          Characters_TitanLimbMesh_CutPlane___ctor_5b562f0(pCVar5,renderer,pUVar6,0.25,method_00);
          if (2 < (uint)pCVar4->max_length) {
            pCVar4->m_Items[2] = pCVar5;
            Il2CppCodeGenWriteBarrier(pCVar4->m_Items + 2);
            (__this->fields)._left = pCVar4;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._left);
            pCVar4 = (Characters_TitanLimbMesh_CutPlane_array *)
                     SZArrayNew(TypeInfo_Characters_TitanLimbMesh_CutPlane_array,3);
            pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutPlane);
            Characters_TitanLimbMesh_CutPlane___ctor_5b562f0(pCVar5,renderer,rightHand,1.0,method_00);
            if (pCVar4 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c548fb;
            if ((pCVar4->max_length & 0xfffffffe) != 0) {
              pCVar4->m_Items[1] = pCVar5;
              Il2CppCodeGenWriteBarrier(pCVar4->m_Items + 1);
              if (rightHand == (UnityEngine_Transform_o *)0x0) goto label_05c548fb;
              pUVar6 = UnityEngine_Transform__get_parent(rightHand,(MethodInfo *)0x0);
              pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutPlane);
              Characters_TitanLimbMesh_CutPlane___ctor_5b562f0(pCVar5,renderer,pUVar6,0.25,method_00);
              if (2 < (uint)pCVar4->max_length) {
                pCVar4->m_Items[2] = pCVar5;
                Il2CppCodeGenWriteBarrier(pCVar4->m_Items + 2);
                (__this->fields)._right = pCVar4;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._right);
                return;
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05c548fb:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CachedBody$$Prewarm
// il2cpp: void Characters_TitanLimbMesh_CachedBody__Prewarm (Characters_TitanLimbMesh_CachedBody_o* __this, const MethodInfo* method);
// 0x5c54290

void Characters_TitanLimbMesh_CachedBody__Prewarm
               (Characters_TitanLimbMesh_CachedBody_o *__this,MethodInfo *method)

{
  Characters_TitanLimbMesh_RegrowthMesh_array *pCVar1;
  Characters_TitanLimbMesh_CutPlane_array *pCVar2;
  Characters_TitanLimbMesh_MeshSource_o *pCVar3;
  Characters_TitanLimbMesh_CutPlane_o *pCVar4;
  Characters_TitanLimbMesh_RegrowthMesh_o *pCVar5;
  MethodInfo *pMVar6;
  MethodInfo *in_R9;
  
  if (__this != (Characters_TitanLimbMesh_CachedBody_o *)0x0) {
    Characters_TitanLimbMesh_CachedBody__GetMesh(__this,1,0,false,false,in_R9);
    Characters_TitanLimbMesh_CachedBody__GetMesh(__this,1,0,true,false,in_R9);
    pMVar6 = (MethodInfo *)0x0;
    Characters_TitanLimbMesh_CachedBody__GetDetached(__this,true,false,false,false,in_R9);
    if (Il2CppMethodInitialized_0754786f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_RegrowthMesh);
      Il2CppMethodInitialized_0754786f = '\x01';
    }
    pCVar1 = (__this->fields)._regrowth;
    if (pCVar1 == (Characters_TitanLimbMesh_RegrowthMesh_array *)0x0) goto label_05c54606;
    if ((int)pCVar1->max_length == 0) goto label_05c5460b;
    if (pCVar1->m_Items[0] == (Characters_TitanLimbMesh_RegrowthMesh_o *)0x0) {
      pCVar2 = (__this->fields)._left;
      if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c54606;
      if ((pCVar2->max_length & 0xfffffffe) == 0) goto label_05c5460b;
      pCVar3 = (__this->fields).Source;
      pCVar4 = pCVar2->m_Items[1];
      pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_RegrowthMesh);
      Characters_TitanLimbMesh_RegrowthMesh___ctor(pCVar5,pCVar3,pCVar4,pMVar6);
      if ((int)pCVar1->max_length == 0) goto label_05c5460b;
      pCVar1->m_Items[0] = pCVar5;
      Il2CppCodeGenWriteBarrier(pCVar1->m_Items);
    }
    Characters_TitanLimbMesh_CachedBody__GetMesh(__this,2,0,false,false,in_R9);
    Characters_TitanLimbMesh_CachedBody__GetMesh(__this,2,0,true,false,in_R9);
    pMVar6 = (MethodInfo *)0x0;
    Characters_TitanLimbMesh_CachedBody__GetDetached(__this,true,true,false,false,in_R9);
    if (Il2CppMethodInitialized_0754786f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_RegrowthMesh);
      Il2CppMethodInitialized_0754786f = '\x01';
    }
    pCVar1 = (__this->fields)._regrowth;
    if (pCVar1 == (Characters_TitanLimbMesh_RegrowthMesh_array *)0x0) goto label_05c54606;
    if ((pCVar1->max_length & 0xfffffffe) == 0) goto label_05c5460b;
    if (pCVar1->m_Items[1] == (Characters_TitanLimbMesh_RegrowthMesh_o *)0x0) {
      pCVar2 = (__this->fields)._left;
      if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c54606;
      if ((uint)pCVar2->max_length < 3) goto label_05c5460b;
      pCVar3 = (__this->fields).Source;
      pCVar4 = pCVar2->m_Items[2];
      pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_RegrowthMesh);
      Characters_TitanLimbMesh_RegrowthMesh___ctor(pCVar5,pCVar3,pCVar4,pMVar6);
      if ((pCVar1->max_length & 0xfffffffe) == 0) goto label_05c5460b;
      pCVar1->m_Items[1] = pCVar5;
      Il2CppCodeGenWriteBarrier(pCVar1->m_Items + 1);
    }
    Characters_TitanLimbMesh_CachedBody__GetMesh(__this,0,1,false,false,in_R9);
    Characters_TitanLimbMesh_CachedBody__GetMesh(__this,0,1,false,true,in_R9);
    pMVar6 = (MethodInfo *)0x0;
    Characters_TitanLimbMesh_CachedBody__GetDetached(__this,false,false,false,false,in_R9);
    if (Il2CppMethodInitialized_0754786f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_RegrowthMesh);
      Il2CppMethodInitialized_0754786f = '\x01';
    }
    pCVar1 = (__this->fields)._regrowth;
    if (pCVar1 == (Characters_TitanLimbMesh_RegrowthMesh_array *)0x0) goto label_05c54606;
    if ((uint)pCVar1->max_length < 3) goto label_05c5460b;
    if (pCVar1->m_Items[2] == (Characters_TitanLimbMesh_RegrowthMesh_o *)0x0) {
      pCVar2 = (__this->fields)._right;
      if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c54606;
      if ((pCVar2->max_length & 0xfffffffe) == 0) goto label_05c5460b;
      pCVar3 = (__this->fields).Source;
      pCVar4 = pCVar2->m_Items[1];
      pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_RegrowthMesh);
      Characters_TitanLimbMesh_RegrowthMesh___ctor(pCVar5,pCVar3,pCVar4,pMVar6);
      if ((uint)pCVar1->max_length < 3) goto label_05c5460b;
      pCVar1->m_Items[2] = pCVar5;
      Il2CppCodeGenWriteBarrier(pCVar1->m_Items + 2);
    }
    Characters_TitanLimbMesh_CachedBody__GetMesh(__this,0,2,false,false,in_R9);
    Characters_TitanLimbMesh_CachedBody__GetMesh(__this,0,2,false,true,in_R9);
    pMVar6 = (MethodInfo *)0x0;
    Characters_TitanLimbMesh_CachedBody__GetDetached(__this,false,true,false,false,in_R9);
    if (Il2CppMethodInitialized_0754786f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_RegrowthMesh);
      Il2CppMethodInitialized_0754786f = '\x01';
    }
    pCVar1 = (__this->fields)._regrowth;
    if (pCVar1 != (Characters_TitanLimbMesh_RegrowthMesh_array *)0x0) {
      if ((pCVar1->max_length & 0xfffffffc) != 0) {
        if (pCVar1->m_Items[3] != (Characters_TitanLimbMesh_RegrowthMesh_o *)0x0) {
          return;
        }
        pCVar2 = (__this->fields)._right;
        if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c54606;
        if (2 < (uint)pCVar2->max_length) {
          pCVar3 = (__this->fields).Source;
          pCVar4 = pCVar2->m_Items[2];
          pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_RegrowthMesh);
          Characters_TitanLimbMesh_RegrowthMesh___ctor(pCVar5,pCVar3,pCVar4,pMVar6);
          if ((pCVar1->max_length & 0xfffffffc) != 0) {
            pCVar1->m_Items[3] = pCVar5;
            Il2CppCodeGenWriteBarrier(pCVar1->m_Items + 3);
            return;
          }
        }
      }
label_05c5460b:
      ThrowIndexOutOfRangeException();
    }
  }
label_05c54606:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CachedBody$$GetMesh
// il2cpp: UnityEngine_Mesh_o* Characters_TitanLimbMesh_CachedBody__GetMesh (Characters_TitanLimbMesh_CachedBody_o* __this, int32_t left, int32_t right, bool leftRegrowing, bool rightRegrowing, const MethodInfo* method);
// 0x5c54f20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c550b1: jmp 0x5c5512f

UnityEngine_Mesh_o *
Characters_TitanLimbMesh_CachedBody__GetMesh
          (Characters_TitanLimbMesh_CachedBody_o *__this,int32_t left,int32_t right,bool leftRegrowing,
          bool rightRegrowing,MethodInfo *method)

{
  UnityEngine_Mesh_array *pUVar1;
  UnityEngine_Object_o *x;
  Characters_TitanLimbMesh_MeshSource_o *source;
  Characters_TitanLimbMesh_CutPlane_array *pCVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  Characters_TitanLimbMesh_CutMeshData_o *__this_00;
  UnityEngine_Mesh_o *pUVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_00;
  uint uVar7;
  
  if (Il2CppMethodInitialized_0754786c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CutMeshData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754786c = '\x01';
  }
  iVar5 = right * 3 + left;
  uVar3 = (uint)leftRegrowing * 9;
  method_00 = (MethodInfo *)(ulong)uVar3;
  uVar7 = uVar3 + iVar5 + 0x12;
  if (!rightRegrowing) {
    uVar7 = uVar3 + iVar5;
  }
  pUVar1 = (__this->fields)._meshes;
  if (pUVar1 == (UnityEngine_Mesh_array *)0x0) goto label_05c5512f;
  if ((uint)pUVar1->max_length <= uVar7) goto label_05c55134;
  x = (UnityEngine_Object_o *)pUVar1->m_Items[(int)uVar7];
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    source = (__this->fields).Source;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutMeshData);
    Characters_TitanLimbMesh_CutMeshData___ctor(__this_00,source,method_01);
    method_03 = method_02;
    if (left == 0) {
label_05c5503b:
      if (right != 0) goto label_05c55040;
label_05c550ac:
      if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_05c5512f;
    }
    else {
      pCVar2 = (__this->fields)._left;
      if (leftRegrowing) {
        if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c5512f;
        if ((uint)pCVar2->max_length <= (uint)left) goto label_05c55134;
        if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_05c5512f;
        method_00 = (MethodInfo *)(long)left;
        Characters_TitanLimbMesh_CutMeshData__Remove(__this_00,pCVar2->m_Items[(long)method_00],method_02);
        method_03 = extraout_RDX;
        goto label_05c5503b;
      }
      if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c5512f;
      if ((uint)pCVar2->max_length <= (uint)left) goto label_05c55134;
      if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_05c5512f;
      method_00 = (MethodInfo *)(long)left;
      Characters_TitanLimbMesh_CutMeshData__Cut(__this_00,pCVar2->m_Items[(long)method_00],false,method_00);
      method_03 = extraout_RDX_00;
      if (right == 0) goto label_05c550ac;
label_05c55040:
      pCVar2 = (__this->fields)._right;
      if (rightRegrowing) {
        if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c5512f;
        if ((uint)pCVar2->max_length <= (uint)right) goto label_05c55134;
        if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_05c5512f;
        method_00 = (MethodInfo *)(long)right;
        Characters_TitanLimbMesh_CutMeshData__Remove(__this_00,pCVar2->m_Items[(long)method_00],method_03);
      }
      else {
        if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c5512f;
        if ((uint)pCVar2->max_length <= (uint)right) goto label_05c55134;
        if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_05c5512f;
        method_00 = (MethodInfo *)(long)right;
        Characters_TitanLimbMesh_CutMeshData__Cut(__this_00,pCVar2->m_Items[(long)method_00],false,method_00);
      }
    }
    pUVar1 = (__this->fields)._meshes;
    pUVar6 = Characters_TitanLimbMesh_CutMeshData__CreateMesh
                       (__this_00,(__this->fields).Source,false,method_00);
    if (pUVar1 == (UnityEngine_Mesh_array *)0x0) goto label_05c5512f;
    if ((uint)pUVar1->max_length <= uVar7) goto label_05c55134;
    pUVar1->m_Items[(int)uVar7] = pUVar6;
    Il2CppCodeGenWriteBarrier(pUVar1->m_Items + (int)uVar7);
  }
  pUVar1 = (__this->fields)._meshes;
  if (pUVar1 != (UnityEngine_Mesh_array *)0x0) {
    if (uVar7 < (uint)pUVar1->max_length) {
      return pUVar1->m_Items[(int)uVar7];
    }
label_05c55134:
    ThrowIndexOutOfRangeException();
  }
label_05c5512f:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CachedBody$$Dispose
// il2cpp: void Characters_TitanLimbMesh_CachedBody__Dispose (Characters_TitanLimbMesh_CachedBody_o* __this, const MethodInfo* method);
// 0x5c55df0

void Characters_TitanLimbMesh_CachedBody__Dispose
               (Characters_TitanLimbMesh_CachedBody_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Object_o *pUVar2;
  Characters_TitanLimbMesh_RegrowthMesh_array *pCVar3;
  bool bVar4;
  UnityEngine_Mesh_array *pUVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_0754786d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754786d = '\x01';
  }
  pUVar5 = (__this->fields)._meshes;
  if (pUVar5 != (UnityEngine_Mesh_array *)0x0) {
    lVar8 = 5;
    do {
      uVar6 = lVar8 - 4;
      uVar1 = (uint)pUVar5->max_length;
      if ((long)(int)uVar1 <= (long)uVar6) {
        pCVar3 = (__this->fields)._regrowth;
        if (pCVar3 != (Characters_TitanLimbMesh_RegrowthMesh_array *)0x0) {
          if ((int)pCVar3->max_length < 1) goto label_05c55f36;
          uVar6 = pCVar3->max_length & 0xffffffff;
          uVar7 = 0;
          goto label_05c55f0a;
        }
        break;
      }
      if (uVar1 <= uVar6) goto label_05c55fb3;
      pUVar2 = (UnityEngine_Object_o *)pUVar5->m_Items[lVar8 + -4];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pUVar5 = (__this->fields)._meshes;
        if (pUVar5 == (UnityEngine_Mesh_array *)0x0) break;
        if ((uint)pUVar5->max_length <= uVar6) goto label_05c55fb3;
        pUVar2 = (UnityEngine_Object_o *)pUVar5->m_Items[lVar8 + -4];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
      }
      pUVar5 = (__this->fields)._meshes;
      lVar8 = lVar8 + 1;
    } while (pUVar5 != (UnityEngine_Mesh_array *)0x0);
  }
  goto label_05c55fb8;
  while( true ) {
    if (pCVar3->m_Items[uVar7] != (Characters_TitanLimbMesh_RegrowthMesh_o *)0x0) {
      pUVar2 = (UnityEngine_Object_o *)(pCVar3->m_Items[uVar7]->fields).Mesh;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
      uVar6 = (ulong)(uint)pCVar3->max_length;
    }
    uVar7 = uVar7 + 1;
    if ((long)(int)uVar6 <= (long)uVar7) break;
label_05c55f0a:
    if (uVar6 <= uVar7) goto label_05c55fb3;
  }
label_05c55f36:
  pUVar5 = (__this->fields)._detached;
  if (pUVar5 != (UnityEngine_Mesh_array *)0x0) {
    if (0 < (int)pUVar5->max_length) {
      uVar6 = pUVar5->max_length & 0xffffffff;
      uVar7 = 0;
      do {
        if (uVar6 <= uVar7) {
label_05c55fb3:
          ThrowIndexOutOfRangeException();
        }
        pUVar2 = (UnityEngine_Object_o *)pUVar5->m_Items[uVar7];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
        }
        uVar7 = uVar7 + 1;
        uVar1 = (uint)pUVar5->max_length;
        uVar6 = (ulong)uVar1;
      } while ((long)uVar7 < (long)(int)uVar1);
    }
    return;
  }
label_05c55fb8:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CachedBody$$GetDetached
// il2cpp: UnityEngine_Mesh_o* Characters_TitanLimbMesh_CachedBody__GetDetached (Characters_TitanLimbMesh_CachedBody_o* __this, bool left, bool arm, bool handDisabled, bool regrowing, const MethodInfo* method);
// 0x5c54a70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c54b9f: jmp 0x5c54cb5

UnityEngine_Mesh_o *
Characters_TitanLimbMesh_CachedBody__GetDetached
          (Characters_TitanLimbMesh_CachedBody_o *__this,bool left,bool arm,bool handDisabled,bool regrowing,
          MethodInfo *method)

{
  UnityEngine_Mesh_array *pUVar1;
  UnityEngine_Object_o *x;
  Characters_TitanLimbMesh_CutPlane_array *pCVar2;
  Characters_TitanLimbMesh_MeshSource_o *source;
  Characters_TitanLimbMesh_CutPlane_o *source_00;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  Characters_TitanLimbMesh_CutMeshData_o *__this_00;
  Characters_TitanLimbMesh_CutPlane_o *__this_01;
  UnityEngine_Mesh_o *pUVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  
  if (Il2CppMethodInitialized_0754786e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CutMeshData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754786e = '\x01';
  }
  uVar5 = regrowing | 2;
  if (!handDisabled || !arm) {
    uVar5 = (uint)arm;
  }
  uVar3 = uVar5 + 4;
  if (left) {
    uVar3 = uVar5;
  }
  pUVar1 = (__this->fields)._detached;
  if (pUVar1 == (UnityEngine_Mesh_array *)0x0) goto label_05c54cba;
  if ((uint)pUVar1->max_length <= uVar3) goto label_05c54cb5;
  x = (UnityEngine_Object_o *)pUVar1->m_Items[uVar3];
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pCVar2 = (&(__this->fields)._left)[!left];
    source = (__this->fields).Source;
    method_00 = (MethodInfo *)__this;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutMeshData);
    Characters_TitanLimbMesh_CutMeshData___ctor(__this_00,source,method_01);
    if (handDisabled && arm) {
      if (regrowing) {
        if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c54cba;
        if ((pCVar2->max_length & 0xfffffffe) == 0) goto label_05c54cb5;
        if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_05c54cba;
        Characters_TitanLimbMesh_CutMeshData__Remove(__this_00,pCVar2->m_Items[1],method_02);
        if ((uint)pCVar2->max_length <= arm + 1) goto label_05c54cb5;
      }
      else {
        if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c54cba;
        if ((pCVar2->max_length & 0xfffffffe) == 0) goto label_05c54cb5;
        if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_05c54cba;
        Characters_TitanLimbMesh_CutMeshData__Cut(__this_00,pCVar2->m_Items[1],false,method_00);
        if ((uint)pCVar2->max_length <= arm + 1) goto label_05c54cb5;
      }
    }
    else {
      if (pCVar2 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c54cba;
      if ((uint)pCVar2->max_length <= arm + 1) goto label_05c54cb5;
    }
    source_00 = pCVar2->m_Items[(ulong)arm + 1];
    if (source_00 == (Characters_TitanLimbMesh_CutPlane_o *)0x0) goto label_05c54cba;
    if (Il2CppMethodInitialized_07547872 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CutPlane);
      Il2CppMethodInitialized_07547872 = '\x01';
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutPlane);
    Characters_TitanLimbMesh_CutPlane___ctor(__this_01,source_00,method_03);
    if (__this_00 == (Characters_TitanLimbMesh_CutMeshData_o *)0x0) goto label_05c54cba;
    Characters_TitanLimbMesh_CutMeshData__Cut(__this_00,__this_01,true,method_00);
    pUVar1 = (__this->fields)._detached;
    pUVar6 = Characters_TitanLimbMesh_CutMeshData__CreateMesh
                       (__this_00,(__this->fields).Source,true,method_00);
    if (pUVar1 == (UnityEngine_Mesh_array *)0x0) goto label_05c54cba;
    if ((uint)pUVar1->max_length <= uVar3) goto label_05c54cb5;
    pUVar1->m_Items[uVar3] = pUVar6;
    Il2CppCodeGenWriteBarrier(pUVar1->m_Items + uVar3);
  }
  pUVar1 = (__this->fields)._detached;
  if (pUVar1 != (UnityEngine_Mesh_array *)0x0) {
    if (uVar3 < (uint)pUVar1->max_length) {
      return pUVar1->m_Items[uVar3];
    }
label_05c54cb5:
    ThrowIndexOutOfRangeException();
  }
label_05c54cba:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CachedBody$$GetRegrowth
// il2cpp: Characters_TitanLimbMesh_RegrowthMesh_o* Characters_TitanLimbMesh_CachedBody__GetRegrowth (Characters_TitanLimbMesh_CachedBody_o* __this, bool left, bool arm, const MethodInfo* method);
// 0x5c54cc0

Characters_TitanLimbMesh_RegrowthMesh_o *
Characters_TitanLimbMesh_CachedBody__GetRegrowth
          (Characters_TitanLimbMesh_CachedBody_o *__this,bool left,bool arm,MethodInfo *method)

{
  Characters_TitanLimbMesh_RegrowthMesh_array *pCVar1;
  Characters_TitanLimbMesh_MeshSource_o *source;
  Il2CppClass *cut;
  Characters_TitanLimbMesh_RegrowthMesh_o *__this_00;
  Characters_TitanLimbMesh_CutPlane_array *method_00;
  uint uVar2;
  
  if (Il2CppMethodInitialized_0754786f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_RegrowthMesh);
    Il2CppMethodInitialized_0754786f = '\x01';
  }
  pCVar1 = (__this->fields)._regrowth;
  if (pCVar1 == (Characters_TitanLimbMesh_RegrowthMesh_array *)0x0) {
label_05c54d89:
    ThrowNullReferenceException();
  }
  uVar2 = (uint)arm + (uint)!left * 2;
  if (uVar2 < (uint)pCVar1->max_length) {
    if (pCVar1->m_Items[uVar2] != (Characters_TitanLimbMesh_RegrowthMesh_o *)0x0) {
      return pCVar1->m_Items[uVar2];
    }
    method_00 = (&(__this->fields)._left)[!left];
    if (method_00 == (Characters_TitanLimbMesh_CutPlane_array *)0x0) goto label_05c54d89;
    if (arm + 1 < *(uint *)&method_00->max_length) {
      source = (__this->fields).Source;
      cut = (Il2CppClass *)method_00->m_Items[(ulong)arm + 1];
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_RegrowthMesh);
      Characters_TitanLimbMesh_RegrowthMesh___ctor
                (__this_00,source,(Characters_TitanLimbMesh_CutPlane_o *)cut,(MethodInfo *)method_00);
      if (uVar2 < (uint)pCVar1->max_length) {
        pCVar1->m_Items[uVar2] = __this_00;
        Il2CppCodeGenWriteBarrier(pCVar1->m_Items + uVar2);
        return __this_00;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.TitanLimbMesh.RegrowthMesh$$.ctor
// il2cpp: void Characters_TitanLimbMesh_RegrowthMesh___ctor (Characters_TitanLimbMesh_RegrowthMesh_o* __this, Characters_TitanLimbMesh_MeshSource_o* source, Characters_TitanLimbMesh_CutPlane_o* cut, const MethodInfo* method);
// 0x5c58040
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c58250: mov r8, qword ptr [rsp + 0x20]
// asm:   0x5c58255: mov rax, qword ptr [rsp + 0x48]
// asm:   0x5c58350: movss dword ptr [rsp + 0x2c], xmm0
// asm:   0x5c58356: mov r8, qword ptr [rsp + 0x20]
// asm:   0x5c5835b: jmp 0x5c5825a
// asm:   0x5c58384: jmp 0x5c58f4b
// asm:   0x5c5870f: nop 
// asm:   0x5c587ff: mov qword ptr [rsp + 0x30], r13
// asm:   0x5c58804: mov qword ptr [rsp + 0x98], r15
// asm:   0x5c5880c: nop dword ptr [rax]
// asm:   0x5c58a36: nop word ptr cs:[rax + rax]
// asm:   0x5c58b67: jmp 0x5c58f34
// asm:   0x5c58cb0: movss xmm0, dword ptr [rsp + 0x50]
// asm:   0x5c58cb6: mov r8, qword ptr [rsp + 0x20]
// asm:   0x5c58cbb: mov rdi, qword ptr [rsp + 0x48]
// asm:   0x5c58d6f: movss xmm1, dword ptr [rsp + 0x98]
// asm:   0x5c58d78: ucomiss xmm1, xmm0
// asm:   0x5c58d7b: minss xmm0, xmm2
// asm:   0x5c58e00: mov r8, qword ptr [rsp + 0x20]
// asm:   0x5c58e05: jmp 0x5c58cc0
// asm:   0x5c58e6c: jmp 0x5c58f34

void Characters_TitanLimbMesh_RegrowthMesh___ctor
               (Characters_TitanLimbMesh_RegrowthMesh_o *__this,Characters_TitanLimbMesh_MeshSource_o *source,
               Characters_TitanLimbMesh_CutPlane_o *cut,MethodInfo *method)

{
  UnityEngine_Vector3_array **targetAddress;
  UnityEngine_BoneWeight_array **targetAddress_00;
  Characters_TitanLimbMesh_RegrowthMesh_Fields *targetAddress_01;
  int32_t *piVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  UnityEngine_BoneWeight_o *pUVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint item;
  uint item_00;
  uint uVar21;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Object_o *__this_01;
  System_Int32_array *pSVar22;
  UnityEngine_BoneWeight_array *pUVar23;
  undefined1 auVar24 [16];
  UnityEngine_BoneWeight_o weight;
  UnityEngine_BoneWeight_o weight_00;
  UnityEngine_BoneWeight_o weight_01;
  UnityEngine_BoneWeight_o weight_02;
  UnityEngine_BoneWeight_o weight_03;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  UnityEngine_Vector3_o *pUVar37;
  UnityEngine_BoneWeight_Fields *pUVar38;
  int32_t iVar39;
  int32_t iVar40;
  int32_t iVar41;
  bool bVar42;
  uint uVar43;
  UnityEngine_Vector3_array *pUVar44;
  UnityEngine_BoneWeight_array *pUVar45;
  UnityEngine_Mesh_o *pUVar46;
  System_String_o *pSVar47;
  Il2CppObject *pIVar48;
  UnityEngine_Vector2_array *value;
  UnityEngine_Vector2_array *value_00;
  System_Int32_array_array *pSVar49;
  System_Collections_Generic_List_int__o *__this_02;
  MethodInfo *pMVar50;
  UnityEngine_Vector3_o *pUVar51;
  UnityEngine_Vector3_StaticFields *pUVar52;
  ulong uVar53;
  System_Int32_array *pSVar54;
  UnityEngine_Vector3_array *pUVar55;
  ulong uVar56;
  int iVar57;
  uint uVar58;
  MethodInfo *pMVar59;
  ulong uVar60;
  long lVar61;
  MethodInfo *pMVar62;
  uint uVar63;
  int iVar64;
  long lVar65;
  float fVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  float fVar74;
  float fVar75;
  undefined1 extraout_var [12];
  undefined1 auVar69 [16];
  undefined4 uVar73;
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  undefined1 auVar72 [16];
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar85;
  UnityEngine_Vector2_o UVar81;
  float fVar80;
  UnityEngine_Vector2_o UVar82;
  float fVar86;
  float fVar87;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar88;
  float local_1bc;
  undefined1 local_140 [16];
  undefined8 uStack_130;
  undefined1 local_128 [16];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  UnityEngine_Vector3_Fields aUStack_e0 [2];
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
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_07547870 == '\0') {
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
    Il2CppMethodInitialized_07547870 = '\x01';
  }
  local_128._0_4_ = 0.0;
  local_128._4_4_ = 0.0;
  local_128._8_4_ = 0.0;
  local_128._12_4_ = 0.0;
  local_140._8_4_ = 0.0;
  local_140._12_4_ = 0.0;
  uStack_130._0_4_ = 0.0;
  uStack_130._4_4_ = 0.0;
  pUVar44 = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,0x11);
  targetAddress = &(__this->fields)._centers;
  (__this->fields)._centers = pUVar44;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar45 = (UnityEngine_BoneWeight_array *)SZArrayNew(TypeInfo_UnityEngine_BoneWeight_array,0x11);
  targetAddress_00 = &(__this->fields)._weights;
  (__this->fields)._weights = pUVar45;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (source == (Characters_TitanLimbMesh_MeshSource_o *)0x0) goto label_05c58f34;
  pUVar46 = (source->fields).Original;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar46 = UnityEngine_Object__Instantiate_object__35a4190
                      ((Il2CppObject *)pUVar46,
                       (MethodInfo_35A4190 *)MethodInfo_UnityEngine_Object_Instantiate_Mesh);
  targetAddress_01 = &__this->fields;
  (__this->fields).Mesh = pUVar46;
  Il2CppCodeGenWriteBarrier(&targetAddress_01->Mesh);
  __this_00 = (UnityEngine_Object_o *)(source->fields).Original;
  if (__this_00 == (UnityEngine_Object_o *)0x0) goto label_05c58f34;
  __this_01 = (UnityEngine_Object_o *)(__this->fields).Mesh;
  pSVar47 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
  pSVar47 = System_String__Concat_52f0320(pSVar47," regrowth",(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_Object_o *)0x0) goto label_05c58f34;
  UnityEngine_Object__set_name(__this_01,pSVar47,(MethodInfo *)0x0);
  pUVar44 = (source->fields).Vertices;
  if ((pUVar44 == (UnityEngine_Vector3_array *)0x0) ||
     (pIVar48 = SZArrayNew(TypeInfo_float_array,(uint32_t)pUVar44->max_length), pIVar48 == (Il2CppObject *)0x0
     )) goto label_05c58f34;
  pMVar62 = pIVar48[1].monitor;
  if (cut == (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
    local_1bc = 0.0;
    if (0 < (int)pMVar62) {
      pUVar44 = (source->fields).Vertices;
      if ((pUVar44 != (UnityEngine_Vector3_array *)0x0) && ((int)pUVar44->max_length == 0)) {
label_05c58f4b:
        ThrowIndexOutOfRangeException();
      }
      goto label_05c58f34;
    }
  }
  else {
    pMVar50 = (MethodInfo *)((ulong)pMVar62 & 0xffffffff);
    if ((int)pMVar62 < 1) {
      local_1bc = 0.0;
    }
    else {
      local_1bc = 0.0;
      lVar65 = 0x20;
      lVar61 = 10;
      pMVar59 = (MethodInfo *)0x0;
      do {
        pUVar44 = (source->fields).Vertices;
        if (pUVar44 == (UnityEngine_Vector3_array *)0x0) goto label_05c58f34;
        if (((MethodInfo *)(ulong)(uint)pUVar44->max_length <= pMVar59) || (pMVar50 <= pMVar59))
        goto label_05c58f4b;
        uVar67 = *(undefined8 *)((long)pUVar44->m_Items + lVar61 * 4 + -0x28);
        uVar5 = (cut->fields).Origin.fields.x;
        uVar13 = (cut->fields).Origin.fields.y;
        uVar6 = (cut->fields).Normal.fields.x;
        uVar14 = (cut->fields).Normal.fields.y;
        *(float *)((long)&pIVar48[2].klass + (long)pMVar59 * 4) =
             (float)uVar14 * ((float)((ulong)uVar67 >> 0x20) - (float)uVar13) +
             (float)uVar6 * ((float)uVar67 - (float)uVar5) +
             (*(float *)((long)pUVar44->m_Items + lVar61 * 4 + -0x20) - (cut->fields).Origin.fields.z) *
             (cut->fields).Normal.fields.z;
        pUVar45 = (source->fields).Weights;
        if (pUVar45 == (UnityEngine_BoneWeight_array *)0x0) goto label_05c58f34;
        if ((MethodInfo *)(ulong)(uint)pUVar45->max_length <= pMVar59) goto label_05c58f4b;
        pauVar2 = (undefined1 (*) [16])
                  ((long)&(((UnityEngine_BoneWeight_array *)(pUVar45->m_Items + -1))->obj).klass + lVar65);
        local_58 = *(undefined8 *)*pauVar2;
        uStack_50 = *(undefined8 *)(*pauVar2 + 8);
        puVar3 = (undefined8 *)((long)pUVar45->m_Items + lVar65 + -0x10);
        local_48 = *puVar3;
        uStack_40 = puVar3[1];
        weight.fields.m_BoneIndex0 = (int)local_48;
        weight.fields.m_BoneIndex1 = (int)((ulong)local_48 >> 0x20);
        weight.fields._0_16_ = *pauVar2;
        weight.fields.m_BoneIndex2 = (int)uStack_40;
        weight.fields.m_BoneIndex3 = (int)((ulong)uStack_40 >> 0x20);
        bVar42 = Characters_TitanLimbMesh_CutPlane__ContainsBone(cut,weight,pMVar62);
        if (bVar42) {
          if ((MethodInfo *)(ulong)*(uint *)&pIVar48[1].monitor <= pMVar59) goto label_05c58f4b;
          fVar88 = *(float *)((long)&pIVar48[2].klass + (long)pMVar59 * 4);
          if (local_1bc <= fVar88) {
            local_1bc = fVar88;
          }
        }
        pMVar59 = (MethodInfo *)((long)&pMVar59->methodPointer + 1);
        pMVar50 = (MethodInfo *)(ulong)*(uint *)&pIVar48[1].monitor;
        lVar65 = lVar65 + 0x20;
        lVar61 = lVar61 + 3;
      } while ((long)pMVar59 < (long)(int)*(uint *)&pIVar48[1].monitor);
    }
    pMVar62 = pMVar50;
  }
  value = (UnityEngine_Vector2_array *)SZArrayNew(TypeInfo_UnityEngine_Vector2_array,(uint32_t)pMVar62);
  value_00 = (UnityEngine_Vector2_array *)
             SZArrayNew(TypeInfo_UnityEngine_Vector2_array,*(uint32_t *)&pIVar48[1].monitor);
  if (cut == (Characters_TitanLimbMesh_CutPlane_o *)0x0) goto label_05c58f34;
  uVar7 = (cut->fields).Normal.fields.x;
  fVar15 = (cut->fields).Normal.fields.y;
  fVar88 = (cut->fields).Normal.fields.z;
  if (0.9 <= ABS(fVar15)) {
    if (Il2CppMethodInitialized_07544d56 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_07544d56 = '\x01';
    }
    pUVar51 = &TypeInfo_UnityEngine_Vector3->static_fields->rightVector;
    pUVar37 = &TypeInfo_UnityEngine_Vector3->static_fields->rightVector;
  }
  else {
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar51 = &TypeInfo_UnityEngine_Vector3->static_fields->upVector;
    pUVar37 = &TypeInfo_UnityEngine_Vector3->static_fields->upVector;
  }
  uVar67._0_4_ = (pUVar51->fields).x;
  uVar67._4_4_ = (pUVar51->fields).y;
  fVar66 = (pUVar37->fields).z;
  fVar77 = (float)uVar67;
  fVar78 = uVar67._4_4_;
  fVar80 = (float)uVar7;
  fVar74 = 0.0;
  fVar75 = 0.0;
  fVar79 = fVar66;
  fVar85 = fVar88;
  fVar86 = 0.0;
  fVar87 = 0.0;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    aUStack_e0[0].x = 0.0;
    aUStack_e0[0].y = 0.0;
    fStack_100 = 0.0;
    fStack_fc = 0.0;
    fStack_110 = 0.0;
    fStack_10c = 0.0;
    local_118 = uVar67._4_4_;
    fStack_114 = (float)uVar7;
    local_108 = fVar66;
    fStack_104 = fVar88;
    local_f8 = uVar67._4_4_;
    fStack_f4 = uVar67._4_4_;
    fStack_f0 = uVar67._4_4_;
    fStack_ec = uVar67._4_4_;
    _local_e8 = uVar67;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    fVar77 = local_e8;
    uVar67._4_4_ = local_f8;
    fVar78 = local_118;
    fVar80 = fStack_114;
    fVar74 = fStack_110;
    fVar75 = fStack_10c;
    fVar79 = local_108;
    fVar85 = fStack_104;
    fVar86 = fStack_100;
    fVar87 = fStack_fc;
  }
  local_140._0_4_ = 0.0;
  local_140._4_4_ = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  auVar84._0_4_ = fVar15 * fVar79 - fVar88 * fVar78;
  auVar84._4_4_ = (float)uVar67 * fVar85 - fVar66 * fVar80;
  auVar84._8_4_ = fVar86 * 0.0 - fVar74 * 0.0;
  auVar84._12_4_ = fVar87 * 0.0 - fVar75 * 0.0;
  fVar88 = (float)uVar7 * uVar67._4_4_ - fVar15 * fVar77;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar66 = fVar88 * fVar88 + auVar84._4_4_ * auVar84._4_4_ + auVar84._0_4_ * auVar84._0_4_;
  if (fVar66 < 0.0) {
    auVar69._0_4_ = sqrtf(fVar66);
    auVar69._4_12_ = extraout_var;
    uVar67 = auVar69._0_8_;
    if (auVar69._0_4_ <= 1e-05) goto label_05c5862e;
label_05c58672:
    auVar70._0_4_ = (float)uVar67;
    fVar88 = fVar88 / auVar70._0_4_;
    uVar73 = (undefined4)((ulong)uVar67 >> 0x20);
    auVar71._8_4_ = uVar73;
    auVar71._0_8_ = uVar67;
    auVar71._12_4_ = uVar73;
    auVar70._8_8_ = auVar71._8_8_;
    auVar70._4_4_ = auVar70._0_4_;
    auVar84 = divps(auVar84,auVar70);
    local_140._0_4_ = auVar84._0_4_;
    local_140._4_4_ = auVar84._4_4_;
    pUVar52 = (UnityEngine_Vector3_StaticFields *)local_140;
  }
  else {
    uVar67 = CONCAT44(fVar15,SQRT(fVar66));
    if (1e-05 < SQRT(fVar66)) goto label_05c58672;
label_05c5862e:
    pUVar52 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar88 = (pUVar52->zeroVector).fields.z;
    fVar15 = 0.0;
  }
  if (value != (UnityEngine_Vector2_array *)0x0) {
    if (0 < (int)value->max_length) {
      uVar8 = (pUVar52->zeroVector).fields.x;
      uVar16 = (pUVar52->zeroVector).fields.y;
      uVar9 = (cut->fields).Normal.fields.x;
      uVar17 = (cut->fields).Normal.fields.y;
      fVar66 = (cut->fields).Normal.fields.z;
      uVar67._4_4_ = local_1bc;
      if (local_1bc <= 0.0001) {
        uVar67._4_4_ = 0.0001;
      }
      uVar56 = value->max_length & 0xffffffff;
      auVar76._4_4_ = uVar67._4_4_;
      auVar76._0_4_ = uVar67._4_4_;
      auVar76._8_4_ = uVar67._4_4_;
      auVar76._12_4_ = uVar67._4_4_;
      lVar61 = 0x14;
      uVar53 = 0;
      do {
        if ((*(uint *)&pIVar48[1].monitor <= uVar53) || (uVar56 <= uVar53)) goto label_05c58f4b;
        UVar81.fields.y = 0.0;
        UVar81.fields.x = *(float *)((long)&pIVar48[2].klass + uVar53 * 4) / uVar67._4_4_;
        value->m_Items[uVar53].fields = UVar81.fields;
        pUVar44 = (source->fields).Vertices;
        if (pUVar44 == (UnityEngine_Vector3_array *)0x0) goto label_05c58f34;
        if ((uint)pUVar44->max_length <= uVar53) goto label_05c58f4b;
        if (value_00 == (UnityEngine_Vector2_array *)0x0) goto label_05c58f34;
        if ((uint)value_00->max_length <= uVar53) goto label_05c58f4b;
        uVar68 = *(undefined8 *)((long)pUVar44->m_Items + lVar61 * 2 + -0x28);
        uVar10 = (cut->fields).Origin.fields.x;
        uVar18 = (cut->fields).Origin.fields.y;
        fVar77 = (float)uVar68 - (float)uVar10;
        fVar78 = (float)((ulong)uVar68 >> 0x20) - (float)uVar18;
        fVar80 = *(float *)((long)pUVar44->m_Items + lVar61 * 2 + -0x20) - (cut->fields).Origin.fields.z;
        auVar83._0_4_ =
             fVar80 * ((float)uVar16 * (float)uVar9 - (float)uVar17 * (float)uVar8) +
             fVar78 * (fVar66 * (float)uVar8 - fVar88 * (float)uVar9) +
             (fVar88 * (float)uVar17 - (float)uVar16 * fVar66) * fVar77;
        auVar83._4_4_ = fVar80 * fVar88 + fVar77 * (float)uVar8 + (float)uVar16 * fVar78;
        auVar83._8_4_ = fVar80 * (float)uVar16 + 0.0;
        auVar83._12_4_ = fVar80 * fVar15 + (float)uVar16 * 0.0 + 0.0;
        auVar84 = divps(auVar83,auVar76);
        UVar82.fields.y = auVar84._0_4_;
        UVar82.fields.x = auVar84._4_4_;
        value_00->m_Items[uVar53].fields = UVar82.fields;
        uVar53 = uVar53 + 1;
        uVar58 = (uint)value->max_length;
        uVar56 = (ulong)uVar58;
        lVar61 = lVar61 + 6;
      } while ((long)uVar53 < (long)(int)uVar58);
    }
    if (targetAddress_01->Mesh != (UnityEngine_Mesh_o *)0x0) {
      UnityEngine_Mesh__set_uv2(targetAddress_01->Mesh,value,(MethodInfo *)0x0);
      if (targetAddress_01->Mesh != (UnityEngine_Mesh_o *)0x0) {
        uVar58 = 0;
        UnityEngine_Mesh__set_uv3(targetAddress_01->Mesh,value_00,(MethodInfo *)0x0);
        pSVar49 = (source->fields).Triangles;
        if (pSVar49 != (System_Int32_array_array *)0x0) {
          while ((int)uVar58 < (int)pSVar49->max_length) {
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int)
            ;
            pMVar62 = MethodInfo_System_Collections_Generic_List_int_ctor;
            System_Collections_Generic_List_int____ctor
                      (__this_02,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
            pSVar49 = (source->fields).Triangles;
            if (pSVar49 == (System_Int32_array_array *)0x0) goto label_05c58f34;
            if ((uint)pSVar49->max_length <= uVar58) goto label_05c58f4b;
            pSVar22 = pSVar49->m_Items[(int)uVar58];
            if (pSVar22 == (System_Int32_array *)0x0) goto label_05c58f34;
            uVar43 = (uint)pSVar22->max_length;
            if (0 < (int)uVar43) {
              uVar63 = 2;
              do {
                if (((uVar43 <= uVar63 - 2) || (uVar43 <= uVar63 - 1)) || (uVar43 <= uVar63))
                goto label_05c58f4b;
                pUVar45 = (source->fields).Weights;
                if (pUVar45 == (UnityEngine_BoneWeight_array *)0x0) goto label_05c58f34;
                uVar43 = pSVar22->m_Items[(int)(uVar63 - 2)];
                if ((uint)pUVar45->max_length <= uVar43) goto label_05c58f4b;
                item = pSVar22->m_Items[(int)(uVar63 - 1)];
                item_00 = pSVar22->m_Items[(int)uVar63];
                pUVar4 = pUVar45->m_Items + (int)uVar43;
                local_78._0_4_ = (pUVar4->fields).m_Weight0;
                local_78._4_4_ = (pUVar4->fields).m_Weight1;
                uStack_70._0_4_ = (pUVar4->fields).m_Weight2;
                uStack_70._4_4_ = (pUVar4->fields).m_Weight3;
                uVar25 = (pUVar4->fields).m_Weight0;
                uVar26 = (pUVar4->fields).m_Weight1;
                uVar27 = (pUVar4->fields).m_Weight2;
                uVar28 = (pUVar4->fields).m_Weight3;
                weight_00.fields.m_Weight3 = (float)uVar28;
                weight_00.fields.m_Weight2 = (float)uVar27;
                weight_00.fields.m_Weight1 = (float)uVar26;
                weight_00.fields.m_Weight0 = (float)uVar25;
                pUVar38 = &pUVar45->m_Items[(int)uVar43].fields;
                local_68._0_4_ = pUVar38->m_BoneIndex0;
                local_68._4_4_ = pUVar38->m_BoneIndex1;
                uStack_60._0_4_ = pUVar38->m_BoneIndex2;
                uStack_60._4_4_ = pUVar38->m_BoneIndex3;
                weight_00.fields.m_BoneIndex0 = (undefined4)local_68;
                weight_00.fields.m_BoneIndex1 = local_68._4_4_;
                weight_00.fields.m_BoneIndex2 = (undefined4)uStack_60;
                weight_00.fields.m_BoneIndex3 = uStack_60._4_4_;
                bVar42 = Characters_TitanLimbMesh_CutPlane__ContainsBone(cut,weight_00,pMVar62);
                if (bVar42) {
label_05c58a40:
                  pMVar50 = MethodInfo_System_Collections_Generic_List_int_Add;
                  if (__this_02 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c58f34;
                  piVar1 = &(__this_02->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar54 = (__this_02->fields)._items;
                  if (pSVar54 == (System_Int32_array *)0x0) goto label_05c58f34;
                  uVar21 = (__this_02->fields)._size;
                  if (uVar21 < (uint)pSVar54->max_length) {
                    (__this_02->fields)._size = uVar21 + 1;
                    pSVar54->m_Items[(int)uVar21] = uVar43;
                    piVar1 = &(__this_02->fields)._version;
                    *piVar1 = *piVar1 + 1;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize
                              (__this_02,uVar43,(MethodInfo_3916AC0 *)pMVar50->klass->rgctx_data[0xe].method);
                    pMVar50 = MethodInfo_System_Collections_Generic_List_int_Add;
                    pSVar54 = (__this_02->fields)._items;
                    piVar1 = &(__this_02->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    if (pSVar54 == (System_Int32_array *)0x0) goto label_05c58f34;
                  }
                  uVar43 = (__this_02->fields)._size;
                  if (uVar43 < (uint)pSVar54->max_length) {
                    pMVar62 = (MethodInfo *)(ulong)(uVar43 + 1);
                    (__this_02->fields)._size = uVar43 + 1;
                    pSVar54->m_Items[(int)uVar43] = item;
                    piVar1 = &(__this_02->fields)._version;
                    *piVar1 = *piVar1 + 1;
                  }
                  else {
                    pMVar62 = (MethodInfo *)(ulong)item;
                    System_Collections_Generic_List_int___AddWithResize
                              (__this_02,item,(MethodInfo_3916AC0 *)pMVar50->klass->rgctx_data[0xe].method);
                    pMVar50 = MethodInfo_System_Collections_Generic_List_int_Add;
                    pSVar54 = (__this_02->fields)._items;
                    piVar1 = &(__this_02->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    if (pSVar54 == (System_Int32_array *)0x0) goto label_05c58f34;
                  }
                  uVar43 = (__this_02->fields)._size;
                  if (uVar43 < (uint)pSVar54->max_length) {
                    (__this_02->fields)._size = uVar43 + 1;
                    pSVar54->m_Items[(int)uVar43] = item_00;
                  }
                  else {
                    pMVar62 = (MethodInfo *)(ulong)item_00;
                    System_Collections_Generic_List_int___AddWithResize
                              (__this_02,item_00,(MethodInfo_3916AC0 *)pMVar50->klass->rgctx_data[0xe].method)
                    ;
                  }
                }
                else {
                  pUVar45 = (source->fields).Weights;
                  if (pUVar45 == (UnityEngine_BoneWeight_array *)0x0) goto label_05c58f34;
                  if ((uint)pUVar45->max_length <= item) goto label_05c58f4b;
                  pUVar4 = pUVar45->m_Items + (int)item;
                  local_98._0_4_ = (pUVar4->fields).m_Weight0;
                  local_98._4_4_ = (pUVar4->fields).m_Weight1;
                  uStack_90._0_4_ = (pUVar4->fields).m_Weight2;
                  uStack_90._4_4_ = (pUVar4->fields).m_Weight3;
                  uVar29 = (pUVar4->fields).m_Weight0;
                  uVar30 = (pUVar4->fields).m_Weight1;
                  uVar31 = (pUVar4->fields).m_Weight2;
                  uVar32 = (pUVar4->fields).m_Weight3;
                  weight_01.fields.m_Weight3 = (float)uVar32;
                  weight_01.fields.m_Weight2 = (float)uVar31;
                  weight_01.fields.m_Weight1 = (float)uVar30;
                  weight_01.fields.m_Weight0 = (float)uVar29;
                  pUVar38 = &pUVar45->m_Items[(int)item].fields;
                  local_88._0_4_ = pUVar38->m_BoneIndex0;
                  local_88._4_4_ = pUVar38->m_BoneIndex1;
                  uStack_80._0_4_ = pUVar38->m_BoneIndex2;
                  uStack_80._4_4_ = pUVar38->m_BoneIndex3;
                  weight_01.fields.m_BoneIndex0 = (undefined4)local_88;
                  weight_01.fields.m_BoneIndex1 = local_88._4_4_;
                  weight_01.fields.m_BoneIndex2 = (undefined4)uStack_80;
                  weight_01.fields.m_BoneIndex3 = uStack_80._4_4_;
                  bVar42 = Characters_TitanLimbMesh_CutPlane__ContainsBone(cut,weight_01,pMVar62);
                  if (bVar42) goto label_05c58a40;
                  pUVar45 = (source->fields).Weights;
                  if (pUVar45 == (UnityEngine_BoneWeight_array *)0x0) goto label_05c58f34;
                  if ((uint)pUVar45->max_length <= item_00) goto label_05c58f4b;
                  pUVar4 = pUVar45->m_Items + (int)item_00;
                  local_b8._0_4_ = (pUVar4->fields).m_Weight0;
                  local_b8._4_4_ = (pUVar4->fields).m_Weight1;
                  uStack_b0._0_4_ = (pUVar4->fields).m_Weight2;
                  uStack_b0._4_4_ = (pUVar4->fields).m_Weight3;
                  uVar33 = (pUVar4->fields).m_Weight0;
                  uVar34 = (pUVar4->fields).m_Weight1;
                  uVar35 = (pUVar4->fields).m_Weight2;
                  uVar36 = (pUVar4->fields).m_Weight3;
                  weight_02.fields.m_Weight3 = (float)uVar36;
                  weight_02.fields.m_Weight2 = (float)uVar35;
                  weight_02.fields.m_Weight1 = (float)uVar34;
                  weight_02.fields.m_Weight0 = (float)uVar33;
                  pUVar38 = &pUVar45->m_Items[(int)item_00].fields;
                  local_a8._0_4_ = pUVar38->m_BoneIndex0;
                  local_a8._4_4_ = pUVar38->m_BoneIndex1;
                  uStack_a0._0_4_ = pUVar38->m_BoneIndex2;
                  uStack_a0._4_4_ = pUVar38->m_BoneIndex3;
                  weight_02.fields.m_BoneIndex0 = (undefined4)local_a8;
                  weight_02.fields.m_BoneIndex1 = local_a8._4_4_;
                  weight_02.fields.m_BoneIndex2 = (undefined4)uStack_a0;
                  weight_02.fields.m_BoneIndex3 = uStack_a0._4_4_;
                  bVar42 = Characters_TitanLimbMesh_CutPlane__ContainsBone(cut,weight_02,pMVar62);
                  if (bVar42) goto label_05c58a40;
                }
                uVar43 = (uint)pSVar22->max_length;
                iVar57 = uVar63 + 1;
                uVar63 = uVar63 + 3;
              } while (iVar57 < (int)uVar43);
            }
            if (targetAddress_01->Mesh == (UnityEngine_Mesh_o *)0x0) goto label_05c58f34;
            UnityEngine_Mesh__SetTriangles_68eb2d0
                      (targetAddress_01->Mesh,__this_02,uVar58,false,(MethodInfo *)0x0);
            uVar58 = uVar58 + 1;
            pSVar49 = (source->fields).Triangles;
            if (pSVar49 == (System_Int32_array_array *)0x0) goto label_05c58f34;
          }
          pUVar44 = *targetAddress;
          if (pUVar44 != (UnityEngine_Vector3_array *)0x0) {
            if ((int)pUVar44->max_length == 0) goto label_05c58f4b;
            fVar15 = (cut->fields).Origin.fields.y;
            fVar88 = (cut->fields).Origin.fields.z;
            pUVar44->m_Items[0].fields.x = (cut->fields).Origin.fields.x;
            pUVar44->m_Items[0].fields.y = fVar15;
            pUVar44->m_Items[0].fields.z = fVar88;
            pUVar45 = *targetAddress_00;
            local_128._0_4_ = 0.0;
            local_128._4_4_ = 0.0;
            local_128._8_4_ = 0.0;
            local_128._12_4_ = 0.0;
            local_140._8_4_ = 0.0;
            local_140._12_4_ = 0.0;
            uStack_130._0_4_ = 0.0;
            uStack_130._4_4_ = 0.0;
            UnityEngine_BoneWeight__set_boneIndex0
                      ((UnityEngine_BoneWeight_o *)(local_140 + 8),(cut->fields).ParentBone,(MethodInfo *)0x0)
            ;
            pMVar62 = (MethodInfo *)0x0;
            UnityEngine_BoneWeight__set_weight0
                      ((UnityEngine_BoneWeight_o *)(local_140 + 8),1.0,(MethodInfo *)0x0);
            if (pUVar45 != (UnityEngine_BoneWeight_array *)0x0) {
              if ((int)pUVar45->max_length == 0) goto label_05c58f4b;
              pUVar45->m_Items[0].fields.m_BoneIndex0 = local_128._0_4_;
              pUVar45->m_Items[0].fields.m_BoneIndex1 = local_128._4_4_;
              pUVar45->m_Items[0].fields.m_BoneIndex2 = local_128._8_4_;
              pUVar45->m_Items[0].fields.m_BoneIndex3 = local_128._12_4_;
              pUVar45->m_Items[0].fields.m_Weight0 = (float)local_140._8_4_;
              pUVar45->m_Items[0].fields.m_Weight1 = (float)local_140._12_4_;
              pUVar45->m_Items[0].fields.m_Weight2 = (float)uStack_130;
              pUVar45->m_Items[0].fields.m_Weight3 = uStack_130._4_4_;
              pUVar44 = *targetAddress;
              if (pUVar44 != (UnityEngine_Vector3_array *)0x0) {
                uVar53 = 1;
                goto label_05c58c50;
              }
            }
          }
        }
      }
    }
  }
label_05c58f34:
  ThrowNullReferenceException();
  while( true ) {
    if ((uint)pUVar44->max_length <= uVar53) goto label_05c58f4b;
    pUVar44->m_Items[uVar53].fields.x = (float)(int)uVar68;
    pUVar44->m_Items[uVar53].fields.y = (float)(int)((ulong)uVar68 >> 0x20);
    pUVar44->m_Items[uVar53].fields.z = fVar88;
    pUVar45 = (source->fields).Weights;
    if (pUVar45 == (UnityEngine_BoneWeight_array *)0x0) break;
    if ((uint)pUVar45->max_length <= uVar58) goto label_05c58f4b;
    pUVar23 = *targetAddress_00;
    if (pUVar23 == (UnityEngine_BoneWeight_array *)0x0) break;
    if ((uint)pUVar23->max_length <= uVar53) goto label_05c58f4b;
    fVar88 = pUVar45->m_Items[(int)uVar58].fields.m_Weight0;
    fVar15 = pUVar45->m_Items[(int)uVar58].fields.m_Weight1;
    fVar66 = pUVar45->m_Items[(int)uVar58].fields.m_Weight2;
    uVar67._4_4_ = pUVar45->m_Items[(int)uVar58].fields.m_Weight3;
    iVar39 = pUVar45->m_Items[(int)uVar58].fields.m_BoneIndex1;
    iVar40 = pUVar45->m_Items[(int)uVar58].fields.m_BoneIndex2;
    iVar41 = pUVar45->m_Items[(int)uVar58].fields.m_BoneIndex3;
    pUVar38 = &pUVar23->m_Items[uVar53].fields;
    pUVar38->m_BoneIndex0 = pUVar45->m_Items[(int)uVar58].fields.m_BoneIndex0;
    pUVar38->m_BoneIndex1 = iVar39;
    pUVar38->m_BoneIndex2 = iVar40;
    pUVar38->m_BoneIndex3 = iVar41;
    pUVar4 = pUVar23->m_Items + uVar53;
    (pUVar4->fields).m_Weight0 = fVar88;
    (pUVar4->fields).m_Weight1 = fVar15;
    (pUVar4->fields).m_Weight2 = fVar66;
    (pUVar4->fields).m_Weight3 = uVar67._4_4_;
    uVar53 = uVar53 + 1;
    pUVar44 = *targetAddress;
    if (pUVar44 == (UnityEngine_Vector3_array *)0x0) break;
label_05c58c50:
    iVar57 = (int)pUVar44->max_length;
    if ((long)iVar57 <= (long)uVar53) {
      return;
    }
    if (*(int *)&pIVar48[1].monitor < 1) {
      uVar58 = 0;
      pUVar55 = (source->fields).Vertices;
      if (pUVar55 == (UnityEngine_Vector3_array *)0x0) break;
label_05c58e92:
      if ((uint)pUVar55->max_length <= uVar58) goto label_05c58f4b;
      if (pUVar44 == (UnityEngine_Vector3_array *)0x0) break;
      uVar68._0_4_ = pUVar55->m_Items[(int)uVar58].fields.x;
      uVar68._4_4_ = pUVar55->m_Items[(int)uVar58].fields.y;
      fVar88 = pUVar55->m_Items[(int)uVar58].fields.z;
    }
    else {
      uVar60 = 0;
      lVar61 = 0x20;
      lVar65 = 10;
      fVar88 = 3.4028235e+38;
      uVar56 = 0;
      iVar64 = 0;
      do {
        pUVar45 = (source->fields).Weights;
        if (pUVar45 == (UnityEngine_BoneWeight_array *)0x0) goto label_05c58f34;
        if ((uint)pUVar45->max_length <= uVar60) goto label_05c58f4b;
        pauVar2 = (undefined1 (*) [16])
                  ((long)&(((UnityEngine_BoneWeight_array *)(pUVar45->m_Items + -1))->obj).klass + lVar61);
        aUStack_e0[0].z = *(float *)((long)pauVar2 + 0);
        aUStack_e0[1].x = *(float *)((long)pauVar2 + 4);
        aUStack_e0[1]._4_8_ = *(undefined8 *)(*pauVar2 + 8);
        puVar3 = (undefined8 *)((long)pUVar45->m_Items + lVar61 + -0x10);
        local_c8 = *puVar3;
        uStack_c0 = puVar3[1];
        weight_03.fields.m_BoneIndex0 = (int)local_c8;
        weight_03.fields.m_BoneIndex1 = (int)((ulong)local_c8 >> 0x20);
        weight_03.fields._0_16_ = *pauVar2;
        weight_03.fields.m_BoneIndex2 = (int)uStack_c0;
        weight_03.fields.m_BoneIndex3 = (int)((ulong)uStack_c0 >> 0x20);
        bVar42 = Characters_TitanLimbMesh_CutPlane__ContainsBone(cut,weight_03,pMVar62);
        if (bVar42) {
          if (*(uint *)&pIVar48[1].monitor <= uVar60) goto label_05c58f4b;
          fVar15 = ABS(*(float *)((long)&pIVar48[2].klass + uVar60 * 4) -
                       ((float)(int)uVar53 * local_1bc) / (float)(iVar57 + -1));
          if (fVar15 < fVar88) {
            uVar56 = uVar60 & 0xffffffff;
            fVar88 = fVar15;
          }
          if (fVar15 < local_1bc / 12.0) {
            pUVar44 = *targetAddress;
            if (pUVar44 == (UnityEngine_Vector3_array *)0x0) goto label_05c58f34;
            if ((uint)pUVar44->max_length <= uVar53) goto label_05c58f4b;
            pUVar55 = (source->fields).Vertices;
            if (pUVar55 == (UnityEngine_Vector3_array *)0x0) goto label_05c58f34;
            if ((uint)pUVar55->max_length <= uVar60) goto label_05c58f4b;
            pMVar62 = (MethodInfo *)(pUVar44->m_Items + uVar53);
            uVar11 = pUVar44->m_Items[uVar53].fields.x;
            uVar19 = pUVar44->m_Items[uVar53].fields.y;
            fVar15 = pUVar44->m_Items[uVar53].fields.z;
            uVar67 = *(undefined8 *)((long)pUVar55->m_Items + lVar65 * 4 + -0x28);
            fVar66 = *(float *)((long)pUVar55->m_Items + lVar65 * 4 + -0x20);
            pMVar62->methodPointer =
                 (Il2CppMethodPointer)
                 CONCAT44((float)((ulong)uVar67 >> 0x20) + (float)uVar19,(float)uVar67 + (float)uVar11);
            pUVar44->m_Items[uVar53].fields.z = fVar15 + fVar66;
            iVar64 = iVar64 + 1;
          }
        }
        uVar58 = (uint)uVar56;
        uVar60 = uVar60 + 1;
        lVar61 = lVar61 + 0x20;
        lVar65 = lVar65 + 3;
      } while ((long)uVar60 < (long)*(int *)&pIVar48[1].monitor);
      pUVar44 = *targetAddress;
      if (iVar64 < 1) {
        pUVar55 = (source->fields).Vertices;
        if (pUVar55 != (UnityEngine_Vector3_array *)0x0) goto label_05c58e92;
        break;
      }
      if (pUVar44 == (UnityEngine_Vector3_array *)0x0) break;
      if ((uint)pUVar44->max_length <= uVar53) goto label_05c58f4b;
      uVar12 = pUVar44->m_Items[uVar53].fields.x;
      uVar20 = pUVar44->m_Items[uVar53].fields.y;
      auVar72._4_4_ = uVar20;
      auVar72._0_4_ = uVar12;
      auVar72._8_8_ = 0;
      fVar15 = (float)iVar64;
      fVar88 = pUVar44->m_Items[uVar53].fields.z / fVar15;
      auVar24._4_4_ = fVar15;
      auVar24._0_4_ = fVar15;
      auVar24._8_4_ = fVar15;
      auVar24._12_4_ = fVar15;
      auVar84 = divps(auVar72,auVar24);
      uVar68 = auVar84._0_8_;
    }
  }
  goto label_05c58f34;
}


// Characters.TitanLimbMesh.RegrowthMesh$$GetFront
// il2cpp: UnityEngine_Vector3_o Characters_TitanLimbMesh_RegrowthMesh__GetFront (Characters_TitanLimbMesh_RegrowthMesh_o* __this, float progress, UnityEngine_Transform_array* bones, UnityEngine_Matrix4x4_array* bindposes, const MethodInfo* method);
// 0x5c55ac0

UnityEngine_Vector3_o
Characters_TitanLimbMesh_RegrowthMesh__GetFront
          (Characters_TitanLimbMesh_RegrowthMesh_o *__this,float progress,UnityEngine_Transform_array *bones,
          UnityEngine_Matrix4x4_array *bindposes,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Vector3_array *pUVar2;
  il2cpp_array_size_t iVar3;
  int index;
  MethodInfo *in_R8;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  float local_48;
  float fStack_44;
  
  pUVar2 = (__this->fields)._centers;
  if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
    iVar3 = pUVar2->max_length;
    if (Il2CppMethodInitialized_0753e7f6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7f6 = '\x01';
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      pUVar2 = (__this->fields)._centers;
    }
    else {
      pUVar2 = (__this->fields)._centers;
    }
    if (pUVar2 != (UnityEngine_Vector3_array *)0x0) {
      fVar5 = (float)((int)iVar3 + -1) * progress;
      fVar4 = floorf(fVar5);
      index = (int)pUVar2->max_length + -2;
      if ((int)fVar4 < index) {
        index = (int)fVar4;
      }
      UVar6 = Characters_TitanLimbMesh_RegrowthMesh__Skin(__this,index,bones,bindposes,in_R8);
      UVar7 = Characters_TitanLimbMesh_RegrowthMesh__Skin(__this,index + 1,bones,bindposes,in_R8);
      fVar5 = fVar5 - (float)index;
      fVar4 = 1.0;
      if (fVar5 <= 1.0) {
        fVar4 = fVar5;
      }
      fVar4 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4);
      local_48 = UVar6.fields.x;
      fStack_44 = UVar6.fields.y;
      UVar8.fields.x = (UVar7.fields.x - local_48) * fVar4 + local_48;
      UVar8.fields.y = (UVar7.fields.y - fStack_44) * fVar4 + fStack_44;
      UVar8.fields.z = (UVar7.fields.z - UVar6.fields.z) * fVar4 + UVar6.fields.z;
      return (UnityEngine_Vector3_o)UVar8.fields;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.RegrowthMesh$$Skin
// il2cpp: UnityEngine_Vector3_o Characters_TitanLimbMesh_RegrowthMesh__Skin (Characters_TitanLimbMesh_RegrowthMesh_o* __this, int32_t index, UnityEngine_Transform_array* bones, UnityEngine_Matrix4x4_array* bindposes, const MethodInfo* method);
// 0x5c59090

UnityEngine_Vector3_o
Characters_TitanLimbMesh_RegrowthMesh__Skin
          (Characters_TitanLimbMesh_RegrowthMesh_o *__this,int32_t index,UnityEngine_Transform_array *bones,
          UnityEngine_Matrix4x4_array *bindposes,MethodInfo *method)

{
  UnityEngine_BoneWeight_o *pUVar1;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  UnityEngine_BoneWeight_array *pUVar36;
  UnityEngine_Vector3_array *pUVar37;
  UnityEngine_Transform_o *pUVar38;
  UnityEngine_BoneWeight_Fields *pUVar39;
  uint uVar40;
  float fVar41;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar42;
  float fVar43;
  float fVar44;
  UnityEngine_Vector3_o UVar45;
  UnityEngine_Vector3_o UVar46;
  UnityEngine_Vector3_o UVar47;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o UVar48;
  float local_f8;
  float fStack_f4;
  UnityEngine_BoneWeight_Fields local_c8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_78;
  float local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  
  pUVar36 = (__this->fields)._weights;
  if (pUVar36 == (UnityEngine_BoneWeight_array *)0x0) {
label_05c59532:
    ThrowNullReferenceException();
  }
  if ((uint)index < (uint)pUVar36->max_length) {
    pUVar1 = pUVar36->m_Items + index;
    local_c8.m_Weight0 = (pUVar1->fields).m_Weight0;
    local_c8.m_Weight1 = (pUVar1->fields).m_Weight1;
    local_c8.m_Weight2 = (pUVar1->fields).m_Weight2;
    local_c8.m_Weight3 = (pUVar1->fields).m_Weight3;
    pUVar39 = &pUVar36->m_Items[index].fields;
    local_c8.m_BoneIndex0 = pUVar39->m_BoneIndex0;
    local_c8.m_BoneIndex1 = pUVar39->m_BoneIndex1;
    local_c8.m_BoneIndex2 = pUVar39->m_BoneIndex2;
    local_c8.m_BoneIndex3 = pUVar39->m_BoneIndex3;
    pUVar37 = (__this->fields)._centers;
    if (pUVar37 == (UnityEngine_Vector3_array *)0x0) goto label_05c59532;
    if ((uint)index < (uint)pUVar37->max_length) {
      uVar2 = pUVar37->m_Items[index].fields.x;
      uVar19 = pUVar37->m_Items[index].fields.y;
      fVar41 = pUVar37->m_Items[index].fields.z;
      uVar40 = UnityEngine_BoneWeight__get_boneIndex0((UnityEngine_BoneWeight_o *)&local_c8,(MethodInfo *)0x0)
      ;
      if (bones == (UnityEngine_Transform_array *)0x0) goto label_05c59532;
      if (uVar40 < (uint)bones->max_length) {
        pUVar38 = bones->m_Items[(int)uVar40];
        uVar40 = UnityEngine_BoneWeight__get_boneIndex0
                           ((UnityEngine_BoneWeight_o *)&local_c8,(MethodInfo *)0x0);
        if (bindposes == (UnityEngine_Matrix4x4_array *)0x0) goto label_05c59532;
        if (uVar40 < (uint)bindposes->max_length) {
          if (pUVar38 == (UnityEngine_Transform_o *)0x0) goto label_05c59532;
          UVar45.fields.z =
               bindposes->m_Items[(int)uVar40].fields.m22 * fVar41 +
               bindposes->m_Items[(int)uVar40].fields.m21 * (float)uVar19 +
               bindposes->m_Items[(int)uVar40].fields.m20 * (float)uVar2 +
               bindposes->m_Items[(int)uVar40].fields.m23;
          uVar3 = bindposes->m_Items[(int)uVar40].fields.m00;
          uVar20 = bindposes->m_Items[(int)uVar40].fields.m10;
          uVar4 = bindposes->m_Items[(int)uVar40].fields.m01;
          uVar21 = bindposes->m_Items[(int)uVar40].fields.m11;
          uVar5 = bindposes->m_Items[(int)uVar40].fields.m02;
          uVar22 = bindposes->m_Items[(int)uVar40].fields.m12;
          uVar6 = bindposes->m_Items[(int)uVar40].fields.m03;
          uVar23 = bindposes->m_Items[(int)uVar40].fields.m13;
          local_98 = (float)uVar19;
          fStack_94 = (float)uVar19;
          fStack_90 = (float)uVar19;
          fStack_8c = (float)uVar19;
          UVar45.fields.x =
               (float)uVar5 * fVar41 + (float)uVar4 * (float)uVar19 + (float)uVar3 * (float)uVar2 +
               (float)uVar6;
          UVar45.fields.y =
               (float)uVar22 * fVar41 + (float)uVar21 * (float)uVar19 + (float)uVar20 * (float)uVar2 +
               (float)uVar23;
          local_a8 = fVar41;
          fStack_a4 = fVar41;
          fStack_a0 = fVar41;
          fStack_9c = fVar41;
          UVar45 = UnityEngine_Transform__TransformPoint(pUVar38,UVar45,(MethodInfo *)0x0);
          local_38._8_4_ = extraout_XMM0_Dc;
          local_38._0_8_ = UVar45.fields._0_8_;
          local_38._12_4_ = extraout_XMM0_Dd;
          local_68 = UnityEngine_BoneWeight__get_weight0
                               ((UnityEngine_BoneWeight_o *)&local_c8,(MethodInfo *)0x0);
          uVar40 = UnityEngine_BoneWeight__get_boneIndex1
                             ((UnityEngine_BoneWeight_o *)&local_c8,(MethodInfo *)0x0);
          if (uVar40 < (uint)bones->max_length) {
            pUVar38 = bones->m_Items[(int)uVar40];
            uVar40 = UnityEngine_BoneWeight__get_boneIndex1
                               ((UnityEngine_BoneWeight_o *)&local_c8,(MethodInfo *)0x0);
            if (uVar40 < (uint)bindposes->max_length) {
              if (pUVar38 == (UnityEngine_Transform_o *)0x0) goto label_05c59532;
              UVar46.fields.z =
                   bindposes->m_Items[(int)uVar40].fields.m22 * fVar41 +
                   bindposes->m_Items[(int)uVar40].fields.m21 * local_98 +
                   bindposes->m_Items[(int)uVar40].fields.m20 * (float)uVar2 +
                   bindposes->m_Items[(int)uVar40].fields.m23;
              uVar7 = bindposes->m_Items[(int)uVar40].fields.m00;
              uVar24 = bindposes->m_Items[(int)uVar40].fields.m10;
              uVar8 = bindposes->m_Items[(int)uVar40].fields.m01;
              uVar25 = bindposes->m_Items[(int)uVar40].fields.m11;
              uVar9 = bindposes->m_Items[(int)uVar40].fields.m02;
              uVar26 = bindposes->m_Items[(int)uVar40].fields.m12;
              uVar10 = bindposes->m_Items[(int)uVar40].fields.m03;
              uVar27 = bindposes->m_Items[(int)uVar40].fields.m13;
              UVar46.fields.x =
                   (float)uVar9 * local_a8 + (float)uVar8 * local_98 + (float)uVar7 * (float)uVar2 +
                   (float)uVar10;
              UVar46.fields.y =
                   (float)uVar26 * fStack_a4 + (float)uVar25 * fStack_94 + (float)uVar24 * (float)uVar2 +
                   (float)uVar27;
              UVar46 = UnityEngine_Transform__TransformPoint(pUVar38,UVar46,(MethodInfo *)0x0);
              local_48._8_4_ = extraout_XMM0_Dc_00;
              local_48._0_8_ = UVar46.fields._0_8_;
              local_48._12_4_ = extraout_XMM0_Dd_00;
              local_78 = UnityEngine_BoneWeight__get_weight1
                                   ((UnityEngine_BoneWeight_o *)&local_c8,(MethodInfo *)0x0);
              uVar40 = UnityEngine_BoneWeight__get_boneIndex2
                                 ((UnityEngine_BoneWeight_o *)&local_c8,(MethodInfo *)0x0);
              if (uVar40 < (uint)bones->max_length) {
                pUVar38 = bones->m_Items[(int)uVar40];
                uVar40 = UnityEngine_BoneWeight__get_boneIndex2
                                   ((UnityEngine_BoneWeight_o *)&local_c8,(MethodInfo *)0x0);
                if (uVar40 < (uint)bindposes->max_length) {
                  if (pUVar38 == (UnityEngine_Transform_o *)0x0) goto label_05c59532;
                  UVar47.fields.z =
                       bindposes->m_Items[(int)uVar40].fields.m22 * fVar41 +
                       bindposes->m_Items[(int)uVar40].fields.m21 * local_98 +
                       bindposes->m_Items[(int)uVar40].fields.m20 * (float)uVar2 +
                       bindposes->m_Items[(int)uVar40].fields.m23;
                  uVar11 = bindposes->m_Items[(int)uVar40].fields.m00;
                  uVar28 = bindposes->m_Items[(int)uVar40].fields.m10;
                  uVar12 = bindposes->m_Items[(int)uVar40].fields.m01;
                  uVar29 = bindposes->m_Items[(int)uVar40].fields.m11;
                  uVar13 = bindposes->m_Items[(int)uVar40].fields.m02;
                  uVar30 = bindposes->m_Items[(int)uVar40].fields.m12;
                  uVar14 = bindposes->m_Items[(int)uVar40].fields.m03;
                  uVar31 = bindposes->m_Items[(int)uVar40].fields.m13;
                  UVar47.fields.x =
                       (float)uVar13 * local_a8 + (float)uVar12 * local_98 + (float)uVar11 * (float)uVar2 +
                       (float)uVar14;
                  UVar47.fields.y =
                       (float)uVar30 * fStack_a4 + (float)uVar29 * fStack_94 + (float)uVar28 * (float)uVar2 +
                       (float)uVar31;
                  UVar47 = UnityEngine_Transform__TransformPoint(pUVar38,UVar47,(MethodInfo *)0x0);
                  local_58._8_4_ = extraout_XMM0_Dc_01;
                  local_58._0_8_ = UVar47.fields._0_8_;
                  local_58._12_4_ = extraout_XMM0_Dd_01;
                  local_88 = UnityEngine_BoneWeight__get_weight2
                                       ((UnityEngine_BoneWeight_o *)&local_c8,(MethodInfo *)0x0);
                  uVar40 = UnityEngine_BoneWeight__get_boneIndex3
                                     ((UnityEngine_BoneWeight_o *)&local_c8,(MethodInfo *)0x0);
                  if (uVar40 < (uint)bones->max_length) {
                    pUVar38 = bones->m_Items[(int)uVar40];
                    uVar40 = UnityEngine_BoneWeight__get_boneIndex3
                                       ((UnityEngine_BoneWeight_o *)&local_c8,(MethodInfo *)0x0);
                    if (uVar40 < (uint)bindposes->max_length) {
                      if (pUVar38 != (UnityEngine_Transform_o *)0x0) {
                        position.fields.z =
                             fVar41 * bindposes->m_Items[(int)uVar40].fields.m22 +
                             bindposes->m_Items[(int)uVar40].fields.m21 * local_98 +
                             bindposes->m_Items[(int)uVar40].fields.m20 * (float)uVar2 +
                             bindposes->m_Items[(int)uVar40].fields.m23;
                        uVar15 = bindposes->m_Items[(int)uVar40].fields.m00;
                        uVar32 = bindposes->m_Items[(int)uVar40].fields.m10;
                        uVar16 = bindposes->m_Items[(int)uVar40].fields.m01;
                        uVar33 = bindposes->m_Items[(int)uVar40].fields.m11;
                        uVar17 = bindposes->m_Items[(int)uVar40].fields.m02;
                        uVar34 = bindposes->m_Items[(int)uVar40].fields.m12;
                        uVar18 = bindposes->m_Items[(int)uVar40].fields.m03;
                        uVar35 = bindposes->m_Items[(int)uVar40].fields.m13;
                        position.fields.x =
                             local_a8 * (float)uVar17 +
                             local_98 * (float)uVar16 + (float)uVar2 * (float)uVar15 + (float)uVar18;
                        position.fields.y =
                             fStack_a4 * (float)uVar34 +
                             fStack_94 * (float)uVar33 + (float)uVar2 * (float)uVar32 + (float)uVar35;
                        fVar42 = UVar45.fields.z * local_68;
                        fVar44 = UVar46.fields.z * local_78;
                        fVar43 = UVar47.fields.z * local_88;
                        UVar45 = UnityEngine_Transform__TransformPoint(pUVar38,position,(MethodInfo *)0x0);
                        fVar41 = UnityEngine_BoneWeight__get_weight3
                                           ((UnityEngine_BoneWeight_o *)&local_c8,(MethodInfo *)0x0);
                        local_f8 = UVar45.fields.x;
                        fStack_f4 = UVar45.fields.y;
                        UVar48.fields.x =
                             fVar41 * local_f8 +
                             local_88 * (float)local_58._0_4_ +
                             local_78 * (float)local_48._0_4_ + local_68 * (float)local_38._0_4_;
                        UVar48.fields.y =
                             fVar41 * fStack_f4 +
                             local_88 * (float)local_58._4_4_ +
                             local_78 * (float)local_48._4_4_ + local_68 * (float)local_38._4_4_;
                        UVar48.fields.z = UVar45.fields.z * fVar41 + fVar43 + fVar44 + fVar42;
                        return (UnityEngine_Vector3_o)UVar48.fields;
                      }
                      goto label_05c59532;
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


// Characters.TitanLimbMesh.CutPlane$$.ctor
// il2cpp: void Characters_TitanLimbMesh_CutPlane___ctor (Characters_TitanLimbMesh_CutPlane_o* __this, Characters_TitanLimbMesh_CutPlane_o* source, const MethodInfo* method);
// 0x5c59540

void Characters_TitanLimbMesh_CutPlane___ctor
               (Characters_TitanLimbMesh_CutPlane_o *__this,Characters_TitanLimbMesh_CutPlane_o *source,
               MethodInfo *method)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  
  if (Il2CppMethodInitialized_07547871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_UnionWith);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    Il2CppMethodInitialized_07547871 = '\x01';
  }
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar4,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  (__this->fields).RemovedBones = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RemovedBones);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (source != (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
    fVar1 = (source->fields).Origin.fields.x;
    fVar3 = (source->fields).Origin.fields.y;
    (__this->fields).Origin.fields.z = (source->fields).Origin.fields.z;
    (__this->fields).Origin.fields.x = fVar1;
    (__this->fields).Origin.fields.y = fVar3;
    uVar2._0_4_ = (source->fields).Normal.fields.x;
    uVar2._4_4_ = (source->fields).Normal.fields.y;
    fVar1 = (source->fields).Normal.fields.z;
    (__this->fields).Normal.fields.x = (float)(int)(uVar2 ^ 0x8000000080000000);
    (__this->fields).Normal.fields.y = (float)(int)((uVar2 ^ 0x8000000080000000) >> 0x20);
    (__this->fields).Normal.fields.z = -fVar1;
    (__this->fields).ParentBone = (source->fields).ParentBone;
    (__this->fields).BloodStainScale = (source->fields).BloodStainScale;
    pSVar4 = (__this->fields).RemovedBones;
    if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      System_Collections_Generic_HashSet_int___UnionWith
                (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)(source->fields).RemovedBones,
                 (MethodInfo_4FA8B10 *)MethodInfo_System_Collections_Generic_HashSet_int_UnionWith);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutPlane$$Reversed
// il2cpp: Characters_TitanLimbMesh_CutPlane_o* Characters_TitanLimbMesh_CutPlane__Reversed (Characters_TitanLimbMesh_CutPlane_o* __this, const MethodInfo* method);
// 0x5c57ff0

Characters_TitanLimbMesh_CutPlane_o *
Characters_TitanLimbMesh_CutPlane__Reversed(Characters_TitanLimbMesh_CutPlane_o *__this,MethodInfo *method)

{
  Characters_TitanLimbMesh_CutPlane_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547872 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CutPlane);
    Il2CppMethodInitialized_07547872 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutPlane);
  Characters_TitanLimbMesh_CutPlane___ctor(__this_00,__this,method_00);
  return __this_00;
}


// Characters.TitanLimbMesh.CutPlane$$.ctor
// il2cpp: void Characters_TitanLimbMesh_CutPlane___ctor (Characters_TitanLimbMesh_CutPlane_o* __this, UnityEngine_SkinnedMeshRenderer_o* renderer, UnityEngine_Transform_o* hand, float bloodStainScale, const MethodInfo* method);
// 0x5c562f0

void Characters_TitanLimbMesh_CutPlane___ctor_5b562f0
               (Characters_TitanLimbMesh_CutPlane_o *__this,UnityEngine_SkinnedMeshRenderer_o *renderer,
               UnityEngine_Transform_o *hand,float bloodStainScale,MethodInfo *method)

{
  Characters_TitanLimbMesh_CutPlane_Fields *pCVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  int32_t iVar13;
  System_Collections_Generic_HashSet_int__o *__this_00;
  UnityEngine_Transform_array *array;
  UnityEngine_Mesh_o *__this_01;
  UnityEngine_Matrix4x4_array *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  ulong uVar16;
  ulong uVar17;
  UnityEngine_Vector3_StaticFields *pUVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Db;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_c8;
  float fStack_c4;
  UnityEngine_Matrix4x4_Fields local_98;
  float local_58;
  float fStack_54;
  UnityEngine_Vector3_Fields UStack_50;
  float fStack_44;
  undefined8 uStack_40;
  System_Collections_Generic_HashSet_int__o **local_38;
  
  if (Il2CppMethodInitialized_07547873 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547873 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  local_38 = &(__this->fields).RemovedBones;
  (__this->fields).RemovedBones = __this_00;
  Il2CppCodeGenWriteBarrier(local_38);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BloodStainScale = bloodStainScale;
  if (renderer == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_05c568e4;
  array = UnityEngine_SkinnedMeshRenderer__get_bones(renderer,(MethodInfo *)0x0);
  __this_01 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(renderer,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_Mesh_o *)0x0) goto label_05c568e4;
  pUVar14 = UnityEngine_Mesh__get_bindposes(__this_01,(MethodInfo *)0x0);
  uVar12 = System_Array__IndexOf_object_
                     ((System_Object_array *)array,(Il2CppObject *)hand,
                      (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_Transform);
  if (hand == (UnityEngine_Transform_o *)0x0) goto label_05c568e4;
  pUVar15 = UnityEngine_Transform__get_parent(hand,(MethodInfo *)0x0);
  iVar13 = System_Array__IndexOf_object_
                     ((System_Object_array *)array,(Il2CppObject *)pUVar15,
                      (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_Transform);
  (__this->fields).ParentBone = iVar13;
  if (pUVar14 == (UnityEngine_Matrix4x4_array *)0x0) goto label_05c568e4;
  if ((uint)pUVar14->max_length <= uVar12) {
label_05c568df:
    ThrowIndexOutOfRangeException();
  }
  UnityEngine_Matrix4x4__Internal_Inverse
            ((UnityEngine_Matrix4x4_o *)&local_98,pUVar14->m_Items + (int)uVar12,(MethodInfo *)0x0);
  fVar26 = local_98.m23;
  fVar25 = local_98.m22;
  fVar24 = local_98.m21;
  fVar19 = local_98.m20;
  fVar23 = local_98.m02;
  fVar21 = local_98.m12;
  fVar31 = local_98.m03;
  fVar32 = local_98.m13;
  fVar27 = local_98.m01;
  fVar28 = local_98.m11;
  fVar29 = local_98.m00;
  fVar30 = local_98.m10;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    UStack_50.z = local_98.m01;
    fStack_44 = local_98.m11;
    uStack_40._0_4_ = 0.0;
    uStack_40._4_4_ = 0.0;
    local_58 = local_98.m00;
    fStack_54 = local_98.m10;
    UStack_50.x = 0.0;
    UStack_50.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
    fVar27 = UStack_50.z;
    fVar28 = fStack_44;
    fVar29 = local_58;
    fVar30 = fStack_54;
  }
  pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar3 = (pUVar18->zeroVector).fields.x;
  uVar5 = (pUVar18->zeroVector).fields.y;
  fVar2 = (pUVar18->zeroVector).fields.z;
  (__this->fields).Origin.fields.x = fVar31 + fVar23 * fVar2 + fVar27 * (float)uVar5 + fVar29 * (float)uVar3;
  (__this->fields).Origin.fields.y = fVar32 + fVar21 * fVar2 + fVar28 * (float)uVar5 + fVar30 * (float)uVar3;
  (__this->fields).Origin.fields.z = fVar26 + fVar24 * (float)uVar5 + fVar19 * (float)uVar3 + fVar25 * fVar2;
  uVar12 = (__this->fields).ParentBone;
  if ((uint)pUVar14->max_length <= uVar12) goto label_05c568df;
  pUVar18 = (UnityEngine_Vector3_StaticFields *)&local_98;
  UnityEngine_Matrix4x4__Internal_Inverse
            ((UnityEngine_Matrix4x4_o *)pUVar18,pUVar14->m_Items + (int)uVar12,(MethodInfo *)0x0);
  fVar19 = local_98.m01;
  fVar24 = local_98.m11;
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar27 = local_98.m00;
  fVar28 = local_98.m10;
  fVar29 = 0.0;
  fVar30 = 0.0;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    UStack_50.z = local_98.m01;
    fStack_44 = local_98.m11;
    uStack_40._0_4_ = 0.0;
    uStack_40._4_4_ = 0.0;
    local_58 = local_98.m00;
    fStack_54 = local_98.m10;
    UStack_50.x = 0.0;
    UStack_50.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
    fVar19 = UStack_50.z;
    fVar24 = fStack_44;
    fVar25 = (float)uStack_40;
    fVar26 = uStack_40._4_4_;
    fVar27 = local_58;
    fVar28 = fStack_54;
    fVar29 = UStack_50.x;
    fVar30 = UStack_50.y;
  }
  pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar4 = (pUVar7->zeroVector).fields.x;
  uVar6 = (pUVar7->zeroVector).fields.y;
  fVar23 = (pUVar7->zeroVector).fields.z;
  pCVar1 = &__this->fields;
  uVar9 = (pCVar1->Origin).fields.x;
  uVar10 = (pCVar1->Origin).fields.y;
  fVar21 = (__this->fields).Origin.fields.z;
  fVar31 = (pCVar1->Origin).fields.x;
  fVar32 = (__this->fields).Origin.fields.y;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    fVar31 = (float)uVar9;
    fVar32 = (float)uVar10;
  }
  local_98.m00 = 0.0;
  local_98.m10 = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  auVar22._0_4_ =
       fVar31 - (local_98.m03 + local_98.m02 * fVar23 + fVar19 * (float)uVar6 + fVar27 * (float)uVar4);
  auVar22._4_4_ =
       fVar32 - (local_98.m13 + local_98.m12 * fVar23 + fVar24 * (float)uVar6 + fVar28 * (float)uVar4);
  auVar22._8_4_ = 0.0 - (fVar23 * 0.0 + fVar25 * (float)uVar6 + fVar29 * (float)uVar4 + 0.0);
  auVar22._12_4_ = 0.0 - (fVar23 * 0.0 + fVar26 * (float)uVar6 + fVar30 * (float)uVar4 + 0.0);
  fVar21 = fVar21 - (local_98.m23 +
                    local_98.m21 * (float)uVar6 + local_98.m20 * (float)uVar4 + local_98.m22 * fVar23);
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar20 = 0;
  fVar19 = fVar21 * fVar21 + auVar22._4_4_ * auVar22._4_4_ + auVar22._0_4_ * auVar22._0_4_;
  if (fVar19 < 0.0) {
    fVar19 = sqrtf(fVar19);
    uVar20 = extraout_XMM0_Db;
    if (1e-05 < fVar19) goto label_05c567fc;
label_05c567c6:
    pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar21 = ((UnityEngine_Matrix4x4_Fields *)&pUVar18->zeroVector)->m20;
  }
  else {
    fVar19 = SQRT(fVar19);
    if (fVar19 <= 1e-05) goto label_05c567c6;
label_05c567fc:
    fVar21 = fVar21 / fVar19;
    auVar8._4_4_ = fVar19;
    auVar8._0_4_ = fVar19;
    auVar8._8_4_ = uVar20;
    auVar8._12_4_ = uVar20;
    auVar22 = divps(auVar22,auVar8);
    local_98.m00 = auVar22._0_4_;
    local_98.m10 = auVar22._4_4_;
  }
  fVar19 = (pUVar18->zeroVector).fields.y;
  (__this->fields).Normal.fields.x = (pUVar18->zeroVector).fields.x;
  (__this->fields).Normal.fields.y = fVar19;
  (__this->fields).Normal.fields.z = fVar21;
  if (array != (UnityEngine_Transform_array *)0x0) {
    if (0 < (int)array->max_length) {
      uVar16 = array->max_length & 0xffffffff;
      uVar17 = 0;
      do {
        if (uVar16 <= uVar17) goto label_05c568df;
        pUVar15 = array->m_Items[uVar17];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar11 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)hand,(MethodInfo *)0x0);
        if (bVar11) {
label_05c568b1:
          if (*local_38 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05c568e4;
          System_Collections_Generic_HashSet_int___Add
                    (*local_38,(int32_t)uVar17,
                     (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        }
        else {
          if ((uint)array->max_length <= uVar17) goto label_05c568df;
          if (array->m_Items[uVar17] == (UnityEngine_Transform_o *)0x0) goto label_05c568e4;
          bVar11 = UnityEngine_Transform__IsChildOf(array->m_Items[uVar17],hand,(MethodInfo *)0x0);
          if (bVar11) goto label_05c568b1;
        }
        uVar17 = uVar17 + 1;
        uVar12 = (uint)array->max_length;
        uVar16 = (ulong)uVar12;
      } while ((long)uVar17 < (long)(int)uVar12);
    }
    return;
  }
label_05c568e4:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutPlane$$KeepParentBone
// il2cpp: UnityEngine_BoneWeight_o Characters_TitanLimbMesh_CutPlane__KeepParentBone (Characters_TitanLimbMesh_CutPlane_o* __this, UnityEngine_BoneWeight_o weight, const MethodInfo* method);
// 0x5c59630

UnityEngine_BoneWeight_o *
Characters_TitanLimbMesh_CutPlane__KeepParentBone
          (UnityEngine_BoneWeight_o *__return_storage_ptr__,Characters_TitanLimbMesh_CutPlane_o *__this,
          UnityEngine_BoneWeight_o weight,MethodInfo *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07547874 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    Il2CppMethodInitialized_07547874 = '\x01';
  }
  pSVar1 = (__this->fields).RemovedBones;
  iVar3 = UnityEngine_BoneWeight__get_boneIndex0(&weight,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar1,iVar3,
                       (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar2) {
      UnityEngine_BoneWeight__set_boneIndex0(&weight,(__this->fields).ParentBone,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).RemovedBones;
    iVar3 = UnityEngine_BoneWeight__get_boneIndex1(&weight,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_int___Contains
                        (pSVar1,iVar3,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar2) {
        UnityEngine_BoneWeight__set_boneIndex1(&weight,(__this->fields).ParentBone,(MethodInfo *)0x0);
      }
      pSVar1 = (__this->fields).RemovedBones;
      iVar3 = UnityEngine_BoneWeight__get_boneIndex2(&weight,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar2 = System_Collections_Generic_HashSet_int___Contains
                          (pSVar1,iVar3,
                           (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        if (bVar2) {
          UnityEngine_BoneWeight__set_boneIndex2(&weight,(__this->fields).ParentBone,(MethodInfo *)0x0);
        }
        pSVar1 = (__this->fields).RemovedBones;
        iVar3 = UnityEngine_BoneWeight__get_boneIndex3(&weight,(MethodInfo *)0x0);
        if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar2 = System_Collections_Generic_HashSet_int___Contains
                            (pSVar1,iVar3,
                             (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains)
          ;
          if (bVar2) {
            UnityEngine_BoneWeight__set_boneIndex3(&weight,(__this->fields).ParentBone,(MethodInfo *)0x0);
          }
          (__return_storage_ptr__->fields).m_BoneIndex0 = weight.fields.m_BoneIndex0;
          (__return_storage_ptr__->fields).m_BoneIndex1 = weight.fields.m_BoneIndex1;
          (__return_storage_ptr__->fields).m_BoneIndex2 = weight.fields.m_BoneIndex2;
          (__return_storage_ptr__->fields).m_BoneIndex3 = weight.fields.m_BoneIndex3;
          (__return_storage_ptr__->fields).m_Weight0 = weight.fields.m_Weight0;
          (__return_storage_ptr__->fields).m_Weight1 = weight.fields.m_Weight1;
          (__return_storage_ptr__->fields).m_Weight2 = weight.fields.m_Weight2;
          (__return_storage_ptr__->fields).m_Weight3 = weight.fields.m_Weight3;
          return __return_storage_ptr__;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutPlane$$ContainsBone
// il2cpp: bool Characters_TitanLimbMesh_CutPlane__ContainsBone (Characters_TitanLimbMesh_CutPlane_o* __this, UnityEngine_BoneWeight_o weight, const MethodInfo* method);
// 0x5c58f50

bool Characters_TitanLimbMesh_CutPlane__ContainsBone
               (Characters_TitanLimbMesh_CutPlane_o *__this,UnityEngine_BoneWeight_o weight,MethodInfo *method
               )

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07547875 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    Il2CppMethodInitialized_07547875 = '\x01';
  }
  fVar4 = UnityEngine_BoneWeight__get_weight0(&weight,(MethodInfo *)0x0);
  if (0.0 < fVar4) {
    pSVar1 = (__this->fields).RemovedBones;
    iVar3 = UnityEngine_BoneWeight__get_boneIndex0(&weight,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05c59089;
    bVar2 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar1,iVar3,
                       (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar2) {
      return true;
    }
  }
  fVar4 = UnityEngine_BoneWeight__get_weight1(&weight,(MethodInfo *)0x0);
  if (0.0 < fVar4) {
    pSVar1 = (__this->fields).RemovedBones;
    iVar3 = UnityEngine_BoneWeight__get_boneIndex1(&weight,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05c59089;
    bVar2 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar1,iVar3,
                       (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar2) {
      return true;
    }
  }
  fVar4 = UnityEngine_BoneWeight__get_weight2(&weight,(MethodInfo *)0x0);
  if (0.0 < fVar4) {
    pSVar1 = (__this->fields).RemovedBones;
    iVar3 = UnityEngine_BoneWeight__get_boneIndex2(&weight,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05c59089;
    bVar2 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar1,iVar3,
                       (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar2) {
      return true;
    }
  }
  bVar2 = false;
  fVar4 = UnityEngine_BoneWeight__get_weight3(&weight,(MethodInfo *)0x0);
  if (0.0 < fVar4) {
    pSVar1 = (__this->fields).RemovedBones;
    iVar3 = UnityEngine_BoneWeight__get_boneIndex3(&weight,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_HashSet_int__o *)0x0) {
label_05c59089:
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar1,iVar3,
                       (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
  }
  return bVar2;
}


// Characters.TitanLimbMesh.CutMeshData.<>c__DisplayClass13_0$$.ctor
// il2cpp: void Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0___ctor (Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x5c5e0b0

void Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0___ctor
               (Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanLimbMesh.CutMeshData.<>c__DisplayClass13_0$$<AddCap>b__0
// il2cpp: int32_t Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0___AddCap_b__0 (Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o* __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x5c5e0c0

int32_t Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0___AddCap_b__0
                  (Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o *__this,
                  UnityEngine_Vector3_o a,UnityEngine_Vector3_o b,MethodInfo *method)

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
  int32_t iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float local_1c;
  undefined1 local_18 [16];
  
  local_18._8_4_ = in_XMM2_Dc;
  local_18._0_8_ = b.fields._0_8_;
  local_18._12_4_ = in_XMM2_Dd;
  uVar1 = (__this->fields).center.fields.x;
  uVar7 = (__this->fields).center.fields.y;
  uVar2 = (__this->fields).axisY.fields.x;
  uVar8 = (__this->fields).axisY.fields.y;
  uVar3 = (__this->fields).axisX.fields.x;
  uVar9 = (__this->fields).axisX.fields.y;
  fVar14 = a.fields.x - (float)uVar1;
  fVar15 = a.fields.y - (float)uVar7;
  fVar16 = a.fields.z - (__this->fields).center.fields.z;
  local_1c = atan2f((__this->fields).axisY.fields.z * fVar16 + (float)uVar8 * fVar15 + (float)uVar2 * fVar14,
                    fVar16 * (__this->fields).axisX.fields.z + (float)uVar9 * fVar15 + (float)uVar3 * fVar14);
  fVar14 = b.fields.z - (__this->fields).center.fields.z;
  uVar4 = (__this->fields).center.fields.x;
  uVar10 = (__this->fields).center.fields.y;
  uVar5 = (__this->fields).axisY.fields.x;
  uVar11 = (__this->fields).axisY.fields.y;
  uVar6 = (__this->fields).axisX.fields.x;
  uVar12 = (__this->fields).axisX.fields.y;
  fVar14 = atan2f((__this->fields).axisY.fields.z * fVar14 +
                  (float)uVar11 * ((float)local_18._4_4_ - (float)uVar10) +
                  (float)uVar5 * ((float)local_18._0_4_ - (float)uVar4),
                  fVar14 * (__this->fields).axisX.fields.z +
                  ((float)local_18._4_4_ - (float)uVar10) * (float)uVar12 +
                  ((float)local_18._0_4_ - (float)uVar4) * (float)uVar6);
  iVar13 = System_Single__CompareTo_54d0870(&local_1c,fVar14,(MethodInfo *)0x0);
  return iVar13;
}


// Characters.TitanLimbMesh.CutMeshData$$.ctor
// il2cpp: void Characters_TitanLimbMesh_CutMeshData___ctor (Characters_TitanLimbMesh_CutMeshData_o* __this, Characters_TitanLimbMesh_MeshSource_o* source, const MethodInfo* method);
// 0x5c568f0

void Characters_TitanLimbMesh_CutMeshData___ctor
               (Characters_TitanLimbMesh_CutMeshData_o *__this,Characters_TitanLimbMesh_MeshSource_o *source,
               MethodInfo *method)

{
  System_Collections_Generic_List_int__array **targetAddress;
  UnityEngine_Vector3_array *pUVar1;
  UnityEngine_Vector4_array *collection;
  UnityEngine_Vector2_array *collection_00;
  UnityEngine_Color32_array *collection_01;
  UnityEngine_BoneWeight_array *collection_02;
  System_Int32_array_array *pSVar2;
  System_Int32_array *collection_03;
  System_Collections_Generic_List_int__o *pSVar3;
  System_Collections_Generic_List_Vector3__o *pSVar4;
  System_Collections_Generic_List_Vector4__o *__this_00;
  System_Collections_Generic_List_Vector2__o *__this_01;
  System_Collections_Generic_List_Color32__o *__this_02;
  System_Collections_Generic_List_BoneWeight__o *__this_03;
  System_Collections_Generic_List_int__array *pSVar5;
  Il2CppObject *pIVar6;
  long lVar7;
  ulong uVar8;
  
  if (Il2CppMethodInitialized_07547876 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int__array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color32_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector2_ctor_7197510);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BoneWeight_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197568);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector4_ctor_71975c8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Color32);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BoneWeight);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector4);
    Il2CppMethodInitialized_07547876 = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor_3916240
            (pSVar3,0x800,(MethodInfo_3916240 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
  (__this->fields)._wound = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._wound);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (source != (Characters_TitanLimbMesh_MeshSource_o *)0x0) {
    pUVar1 = (source->fields).Vertices;
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
    System_Collections_Generic_List_Vector3____ctor_39ff120
              (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)pUVar1,
               (MethodInfo_39FF120 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197568);
    (__this->fields)._vertices = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._vertices);
    pUVar1 = (source->fields).Normals;
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
    System_Collections_Generic_List_Vector3____ctor_39ff120
              (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)pUVar1,
               (MethodInfo_39FF120 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197568);
    (__this->fields)._normals = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._normals);
    collection = (source->fields).Tangents;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector4);
    System_Collections_Generic_List_Vector4____ctor_3a02500
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_3A02500 *)MethodInfo_System_Collections_Generic_List_Vector4_ctor_71975c8);
    (__this->fields)._tangents = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tangents);
    collection_00 = (source->fields).UV;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector2);
    System_Collections_Generic_List_Vector2____ctor_39f8dd0
              (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection_00,
               (MethodInfo_39F8DD0 *)MethodInfo_System_Collections_Generic_List_Vector2_ctor_7197510);
    (__this->fields)._uv = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._uv);
    collection_01 = (source->fields).Colors;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Color32);
    System_Collections_Generic_List_Color32____ctor_51ee960
              (__this_02,(System_Collections_Generic_IEnumerable_T__o *)collection_01,
               (MethodInfo_51EE960 *)MethodInfo_System_Collections_Generic_List_Color32_ctor);
    (__this->fields)._colors = __this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._colors);
    collection_02 = (source->fields).Weights;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BoneWeight);
    System_Collections_Generic_List_BoneWeight____ctor_51d82e0
              (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection_02,
               (MethodInfo_51D82E0 *)MethodInfo_System_Collections_Generic_List_BoneWeight_ctor);
    (__this->fields)._weights = __this_03;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._weights);
    pSVar2 = (source->fields).Triangles;
    if (pSVar2 != (System_Int32_array_array *)0x0) {
      pSVar5 = (System_Collections_Generic_List_int__array *)
               SZArrayNew(TypeInfo_System_Collections_Generic_List_int__array,(uint32_t)pSVar2->max_length);
      targetAddress = &(__this->fields)._triangles;
      (__this->fields)._triangles = pSVar5;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pSVar5 = (__this->fields)._triangles;
      if (pSVar5 != (System_Collections_Generic_List_int__array *)0x0) {
        lVar7 = 0x20;
        uVar8 = 0;
        do {
          if ((long)(int)pSVar5->max_length <= (long)uVar8) {
            return;
          }
          pSVar2 = (source->fields).Triangles;
          if (pSVar2 == (System_Int32_array_array *)0x0) break;
          if ((uint)pSVar2->max_length <= uVar8) {
label_05c56c67:
            ThrowIndexOutOfRangeException();
          }
          collection_03 = pSVar2->m_Items[uVar8];
          pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
          System_Collections_Generic_List_int____ctor_3916320
                    (pSVar3,(System_Collections_Generic_IEnumerable_T__o *)collection_03,
                     (MethodInfo_3916320 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c0);
          if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
            pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar5->obj).klass)->_1).element_class)
            ;
            if (pIVar6 == (Il2CppObject *)0x0) {
              pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
            }
          }
          if ((uint)pSVar5->max_length <= uVar8) goto label_05c56c67;
          pSVar5->m_Items[uVar8] = pSVar3;
          Il2CppCodeGenWriteBarrier((void **)((long)pSVar5->m_Items + lVar7 + -0x20));
          uVar8 = uVar8 + 1;
          pSVar5 = *targetAddress;
          lVar7 = lVar7 + 8;
        } while (pSVar5 != (System_Collections_Generic_List_int__array *)0x0);
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Cut
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Cut (Characters_TitanLimbMesh_CutMeshData_o* __this, Characters_TitanLimbMesh_CutPlane_o* wrist, bool detached, const MethodInfo* method);
// 0x5c57000
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c573af: nop 
// asm:   0x5c573ff: nop 
// asm:   0x5c57b1f: jmp 0x5c57d3c
// asm:   0x5c57be5: jmp 0x5c57d3c
// asm:   0x5c57cc9: jmp 0x5c57d3c

void Characters_TitanLimbMesh_CutMeshData__Cut
               (Characters_TitanLimbMesh_CutMeshData_o *__this,Characters_TitanLimbMesh_CutPlane_o *wrist,
               bool detached,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar4;
  undefined8 uVar5;
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_List_Vector3__o *pSVar8;
  System_Int32_array *pSVar9;
  Il2CppType *pIVar10;
  UnityEngine_BoneWeight_o weight;
  UnityEngine_BoneWeight_o weight_00;
  UnityEngine_BoneWeight_o weight_01;
  UnityEngine_BoneWeight_o weight_02;
  UnityEngine_BoneWeight_o value;
  bool bVar11;
  int32_t iVar12;
  int32_t index;
  uint uVar13;
  System_Collections_Generic_List_Vector3__o *__this_01;
  System_Collections_Generic_List_int__o *pSVar14;
  Il2CppRGCTXData *__this_02;
  System_Collections_Generic_List_int__array *pSVar15;
  System_Collections_Generic_List_int__o *pSVar16;
  Il2CppObject *pIVar17;
  Il2CppRGCTXData *pIVar18;
  long lVar19;
  MethodInfo *method_00;
  int32_t iVar20;
  int iVar21;
  uint uVar22;
  System_Collections_Generic_List_BoneWeight__o *pSVar23;
  int iVar24;
  MethodInfo *pMVar25;
  MethodInfo *in_R8;
  int iVar26;
  float fVar27;
  float fVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o a;
  UnityEngine_BoneWeight_Fields local_e8;
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  UnityEngine_BoneWeight_Fields local_a0;
  Il2CppRGCTXData *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  UnityEngine_BoneWeight_Fields local_50;
  
  if (Il2CppMethodInitialized_07547877 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197570);
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
    Il2CppMethodInitialized_07547877 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (__this_01,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor_3916240
            (pSVar14,4,(MethodInfo_3916240 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
  __this_02 = (Il2CppRGCTXData *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor_39ff040
            ((System_Collections_Generic_List_Vector3__o *)__this_02,2,
             (MethodInfo_39FF040 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197570);
  pSVar15 = (__this->fields)._triangles;
  if (pSVar15 != (System_Collections_Generic_List_int__array *)0x0) {
    if (wrist == (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
      uVar22 = 0xffffffff;
      do {
        uVar22 = uVar22 + 1;
        if ((int)pSVar15->max_length <= (int)uVar22) goto label_05c57bea;
        pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
        System_Collections_Generic_List_int____ctor
                  (pSVar14,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
        pSVar15 = (__this->fields)._triangles;
        if (pSVar15 == (System_Collections_Generic_List_int__array *)0x0) break;
        uVar13 = (uint)pSVar15->max_length;
        if (uVar13 <= uVar22) goto label_05c57d09;
        pSVar16 = pSVar15->m_Items[(int)uVar22];
        if (pSVar16 == (System_Collections_Generic_List_int__o *)0x0) break;
        if (0 < (pSVar16->fields)._size) {
          pSVar23 = (__this->fields)._weights;
          iVar20 = System_Collections_Generic_List_int___get_Item
                             (pSVar16,0,
                              (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          if (pSVar23 != (System_Collections_Generic_List_BoneWeight__o *)0x0) {
            System_Collections_Generic_List_BoneWeight___get_Item
                      ((UnityEngine_BoneWeight_o *)&local_a0,pSVar23,iVar20,
                       (MethodInfo_51D8790 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
            local_e8.m_BoneIndex0 = local_a0.m_BoneIndex0;
            local_e8.m_BoneIndex1 = local_a0.m_BoneIndex1;
            local_e8.m_BoneIndex2 = local_a0.m_BoneIndex2;
            local_e8.m_BoneIndex3 = local_a0.m_BoneIndex3;
            local_e8.m_Weight0 = local_a0.m_Weight0;
            local_e8.m_Weight1 = local_a0.m_Weight1;
            local_e8.m_Weight2 = local_a0.m_Weight2;
            local_e8.m_Weight3 = local_a0.m_Weight3;
            ThrowNullReferenceException();
          }
          break;
        }
        if (pSVar14 != (System_Collections_Generic_List_int__o *)0x0) {
          pIVar17 = il2cpp_vm_Object_IsInst
                              ((Il2CppObject *)pSVar14,(((pSVar15->obj).klass)->_1).element_class);
          if (pIVar17 == (Il2CppObject *)0x0) goto label_05c57d0e;
          uVar13 = (uint)pSVar15->max_length;
        }
        if (uVar13 <= uVar22) goto label_05c57d09;
        pSVar15->m_Items[(int)uVar22] = pSVar14;
        Il2CppCodeGenWriteBarrier(pSVar15->m_Items + (int)uVar22);
        pSVar15 = (__this->fields)._triangles;
      } while (pSVar15 != (System_Collections_Generic_List_int__array *)0x0);
    }
    else {
      uVar22 = 0;
      do {
        if ((int)pSVar15->max_length <= (int)uVar22) goto label_05c57bea;
        pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
        System_Collections_Generic_List_int____ctor
                  (pSVar16,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
        pSVar15 = (__this->fields)._triangles;
        if (pSVar15 == (System_Collections_Generic_List_int__array *)0x0) break;
        if ((uint)pSVar15->max_length <= uVar22) {
label_05c57d09:
          ThrowIndexOutOfRangeException();
        }
        method = (MethodInfo *)(long)(int)uVar22;
        __this_00 = pSVar15->m_Items[(long)method];
        if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) break;
        local_80 = (Il2CppRGCTXData *)method;
        if (0 < (__this_00->fields)._size) {
          iVar20 = 0;
          do {
            pMVar25 = (MethodInfo *)(__this->fields)._weights;
            iVar12 = System_Collections_Generic_List_int___get_Item
                               (__this_00,iVar20,
                                (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item)
            ;
            if (pMVar25 == (MethodInfo *)0x0) goto label_05c57d3c;
            method = MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item;
            System_Collections_Generic_List_BoneWeight___get_Item
                      ((UnityEngine_BoneWeight_o *)&local_a0,
                       (System_Collections_Generic_List_BoneWeight__o *)pMVar25,iVar12,
                       (MethodInfo_51D8790 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
            local_e8.m_BoneIndex0 = local_a0.m_BoneIndex0;
            local_e8.m_BoneIndex1 = local_a0.m_BoneIndex1;
            uVar4 = local_e8._16_8_;
            local_e8.m_BoneIndex2 = local_a0.m_BoneIndex2;
            local_e8.m_BoneIndex3 = local_a0.m_BoneIndex3;
            uVar5 = local_e8._24_8_;
            local_e8.m_Weight0 = local_a0.m_Weight0;
            local_e8.m_Weight1 = local_a0.m_Weight1;
            local_e8.m_Weight2 = local_a0.m_Weight2;
            local_e8.m_Weight3 = local_a0.m_Weight3;
            local_e8.m_BoneIndex0 = local_a0.m_BoneIndex0;
            local_e8.m_BoneIndex1 = local_a0.m_BoneIndex1;
            local_e8.m_BoneIndex2 = local_a0.m_BoneIndex2;
            local_e8.m_BoneIndex3 = local_a0.m_BoneIndex3;
            weight.fields.m_Weight2 = local_a0.m_Weight2;
            weight.fields.m_Weight3 = local_a0.m_Weight3;
            weight.fields.m_Weight0 = local_a0.m_Weight0;
            weight.fields.m_Weight1 = local_a0.m_Weight1;
            weight.fields.m_BoneIndex0 = local_e8.m_BoneIndex0;
            weight.fields.m_BoneIndex1 = local_e8.m_BoneIndex1;
            weight.fields.m_BoneIndex2 = local_e8.m_BoneIndex2;
            weight.fields.m_BoneIndex3 = local_e8.m_BoneIndex3;
            fVar31 = (float)local_e8.m_BoneIndex1;
            fVar32 = (float)local_e8.m_BoneIndex2;
            fVar33 = (float)local_e8.m_BoneIndex3;
            local_e8._16_8_ = uVar4;
            local_e8._24_8_ = uVar5;
            bVar11 = Characters_TitanLimbMesh_CutPlane__ContainsBone(wrist,weight,pMVar25);
            if (bVar11) {
label_05c573b0:
              if (pSVar14 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c57d3c;
              piVar1 = &(pSVar14->fields)._version;
              *piVar1 = *piVar1 + 1;
              (pSVar14->fields)._size = 0;
              if (__this_02 == (Il2CppRGCTXData *)0x0) goto label_05c57d3c;
              *(int *)((long)__this_02 + 0x1c) = *(int *)((long)__this_02 + 0x1c) + 1;
              *(undefined4 *)&__this_02[3].rgctxDataDummy = 0;
              iVar26 = 0;
              do {
                iVar12 = System_Collections_Generic_List_int___get_Item
                                   (__this_00,iVar26 + iVar20,
                                    (MethodInfo_39167D0 *)
                                    MethodInfo_System_Collections_Generic_List_int_get_Item);
                iVar26 = iVar26 + 1;
                iVar24 = iVar26;
                if (iVar26 == 3) {
                  iVar24 = 0;
                }
                index = System_Collections_Generic_List_int___get_Item
                                  (__this_00,iVar24 + iVar20,
                                   (MethodInfo_39167D0 *)
                                   MethodInfo_System_Collections_Generic_List_int_get_Item);
                pSVar8 = (__this->fields)._vertices;
                if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c57d3c;
                UVar34 = System_Collections_Generic_List_Vector3___get_Item
                                   (pSVar8,iVar12,
                                    (MethodInfo_39FF5D0 *)
                                    MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                pSVar8 = (__this->fields)._vertices;
                if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c57d3c;
                uVar2 = (wrist->fields).Origin.fields.x;
                uVar6 = (wrist->fields).Origin.fields.y;
                uVar3 = (wrist->fields).Normal.fields.x;
                uVar7 = (wrist->fields).Normal.fields.y;
                fVar29 = (UVar34.fields.z - (wrist->fields).Origin.fields.z) * (wrist->fields).Normal.fields.z
                         + (UVar34.fields.y - (float)uVar6) * (float)uVar7 +
                           (UVar34.fields.x - (float)uVar2) * (float)uVar3;
                UVar34 = System_Collections_Generic_List_Vector3___get_Item
                                   (pSVar8,index,
                                    (MethodInfo_39FF5D0 *)
                                    MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                pIVar18 = (Il2CppRGCTXData *)MethodInfo_System_Collections_Generic_List_int_Add;
                uVar4._0_4_ = (wrist->fields).Origin.fields.x;
                uVar4._4_4_ = (wrist->fields).Origin.fields.y;
                uVar5._0_4_ = (wrist->fields).Normal.fields.x;
                uVar5._4_4_ = (wrist->fields).Normal.fields.y;
                fVar30 = (UVar34.fields.z - (wrist->fields).Origin.fields.z) * (wrist->fields).Normal.fields.z
                ;
                fVar27 = UVar34.fields.x;
                fVar28 = UVar34.fields.y;
                if (fVar29 <= 0.0) {
                  piVar1 = &(pSVar14->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar9 = (pSVar14->fields)._items;
                  if (pSVar9 == (System_Int32_array *)0x0) goto label_05c57d3c;
                  uVar13 = (pSVar14->fields)._size;
                  if (uVar13 < (uint)pSVar9->max_length) {
                    (pSVar14->fields)._size = uVar13 + 1;
                    pSVar9->m_Items[(int)uVar13] = iVar12;
                    method = (MethodInfo *)(ulong)(uVar13 + 1);
                  }
                  else {
                    fStack_c0 = (float)extraout_XMM0_Dc;
                    local_c8 = (undefined1  [8])UVar34.fields._0_8_;
                    fStack_bc = (float)extraout_XMM0_Dd;
                    uStack_60 = 0;
                    uStack_70 = 0;
                    local_b8 = fVar30;
                    fStack_b4 = fVar31;
                    fStack_b0 = fVar32;
                    fStack_ac = fVar33;
                    local_78 = uVar4;
                    local_68 = uVar5;
                    System_Collections_Generic_List_int___AddWithResize
                              (pSVar14,iVar12,
                               (MethodInfo_3916AC0 *)((MethodInfo *)pIVar18)->klass->rgctx_data[0xe].method);
                    method = (MethodInfo *)pIVar18;
                    fVar27 = (float)local_c8._0_4_;
                    fVar28 = (float)local_c8._4_4_;
                    fVar30 = local_b8;
                    fVar31 = fStack_b4;
                    fVar32 = fStack_b0;
                    fVar33 = fStack_ac;
                    uVar5._0_4_ = (float)local_68;
                    uVar5._4_4_ = local_68._4_4_;
                    uVar4._0_4_ = (float)local_78;
                    uVar4._4_4_ = local_78._4_4_;
                  }
                }
                fVar30 = fVar30 + (fVar28 - uVar4._4_4_) * uVar5._4_4_ +
                                  (fVar27 - (float)uVar4) * (float)uVar5;
                if (fVar29 <= 0.0 == 0.0 < fVar30) {
                  iVar12 = Characters_TitanLimbMesh_CutMeshData__AddIntersection
                                     (__this,iVar12,index,fVar29 / (fVar29 - fVar30),
                                      (wrist->fields).ParentBone,in_R8);
                  pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
                  piVar1 = &(pSVar14->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar9 = (pSVar14->fields)._items;
                  if (pSVar9 == (System_Int32_array *)0x0) goto label_05c57d3c;
                  uVar13 = (pSVar14->fields)._size;
                  if (uVar13 < (uint)pSVar9->max_length) {
                    (pSVar14->fields)._size = uVar13 + 1;
                    pSVar9->m_Items[(int)uVar13] = iVar12;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize
                              (pSVar14,iVar12,(MethodInfo_3916AC0 *)pMVar25->klass->rgctx_data[0xe].method);
                  }
                  pSVar8 = (__this->fields)._vertices;
                  if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c57d3c;
                  UVar34 = System_Collections_Generic_List_Vector3___get_Item
                                     (pSVar8,iVar12,
                                      (MethodInfo_39FF5D0 *)
                                      MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                  method = MethodInfo_System_Collections_Generic_List_Vector3_Add;
                  uVar4._0_4_ = UVar34.fields.z;
                  *(int *)((long)__this_02 + 0x1c) = *(int *)((long)__this_02 + 0x1c) + 1;
                  pIVar10 = __this_02[2].type;
                  if (pIVar10 == (Il2CppType *)0x0) goto label_05c57d3c;
                  uVar13 = *(uint *)&__this_02[3].rgctxDataDummy;
                  lVar19 = (long)(int)uVar13;
                  local_c8._4_4_ = fVar31;
                  local_c8._0_4_ = (float)uVar4;
                  fStack_c0 = fVar32;
                  fStack_bc = fVar33;
                  if (uVar13 < pIVar10[1].bits) {
                    *(uint *)&__this_02[3].rgctxDataDummy = uVar13 + 1;
                    method = (MethodInfo *)(lVar19 * 3);
                    *(long *)((long)&pIVar10[2].data + lVar19 * 0xc) = UVar34.fields._0_8_;
                    (&pIVar10[2].bits)[lVar19 * 3] = (uint)(float)uVar4;
                  }
                  else {
                    System_Collections_Generic_List_Vector3___AddWithResize
                              ((System_Collections_Generic_List_Vector3__o *)__this_02,UVar34,
                               (MethodInfo_39FF950 *)method->klass->rgctx_data[0xe].method);
                    uVar4._0_4_ = (float)local_c8._0_4_;
                    fVar31 = (float)local_c8._4_4_;
                    fVar32 = fStack_c0;
                    fVar33 = fStack_bc;
                  }
                  if (__this_01 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c57d3c;
                  uVar13 = (__this_01->fields)._size;
                  if (0 < (int)uVar13) {
                    fStack_b4 = UVar34.fields.x;
                    iVar12 = 0;
                    bVar11 = false;
                    local_b8 = (float)uVar4;
                    fStack_b0 = fVar31;
                    fStack_ac = UVar34.fields.y;
                    do {
                      UVar35 = System_Collections_Generic_List_Vector3___get_Item
                                         (__this_01,iVar12,
                                          (MethodInfo_39FF5D0 *)
                                          MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                      uVar4._0_4_ = UVar35.fields.y - UVar34.fields.y;
                      uVar5._0_4_ = UVar35.fields.z - local_b8;
                      uVar4._4_4_ = UVar35.fields.x - fStack_b4;
                      bVar11 = (bool)(bVar11 | (float)uVar4 * (float)uVar4 + uVar4._4_4_ * uVar4._4_4_ +
                                               (float)uVar5 * (float)uVar5 < 1e-10);
                      iVar12 = iVar12 + 1;
                      uVar13 = (__this_01->fields)._size;
                    } while (iVar12 < (int)uVar13);
                    uVar4._0_4_ = (float)local_c8._0_4_;
                    fVar31 = (float)local_c8._4_4_;
                    fVar32 = fStack_c0;
                    fVar33 = fStack_bc;
                    if (bVar11) goto label_05c57400;
                  }
                  pMVar25 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
                  piVar1 = &(__this_01->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  method = (MethodInfo *)(__this_01->fields)._items;
                  if ((Il2CppRGCTXData *)method == (Il2CppRGCTXData *)0x0) goto label_05c57d3c;
                  if (uVar13 < *(uint *)&((Il2CppRGCTXData *)((long)method + 0x18))->rgctxDataDummy) {
                    (__this_01->fields)._size = uVar13 + 1;
                    *(long *)((long)method + (long)(int)uVar13 * 0xc + 0x20) = UVar34.fields._0_8_;
                    *(float *)((long)method + (long)(int)uVar13 * 0xc + 0x28) = (float)uVar4;
                  }
                  else {
                    UVar35.fields.z = (float)uVar4;
                    UVar35.fields.x = UVar34.fields.x;
                    UVar35.fields.y = UVar34.fields.y;
                    System_Collections_Generic_List_Vector3___AddWithResize
                              (__this_01,UVar35,(MethodInfo_39FF950 *)pMVar25->klass->rgctx_data[0xe].method);
                  }
                }
label_05c57400:
              } while (iVar26 != 3);
              if (2 < (pSVar14->fields)._size) {
                if (pSVar16 == (System_Collections_Generic_List_int__o *)0x0) {
                  System_Collections_Generic_List_int___get_Item
                            (pSVar14,0,
                             (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
                  ThrowNullReferenceException();
                }
                iVar26 = 1;
                do {
                  iVar12 = System_Collections_Generic_List_int___get_Item
                                     (pSVar14,0,
                                      (MethodInfo_39167D0 *)
                                      MethodInfo_System_Collections_Generic_List_int_get_Item);
                  pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
                  piVar1 = &(pSVar16->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar9 = (pSVar16->fields)._items;
                  if (pSVar9 == (System_Int32_array *)0x0) goto label_05c57d3c;
                  uVar13 = (pSVar16->fields)._size;
                  if (uVar13 < (uint)pSVar9->max_length) {
                    (pSVar16->fields)._size = uVar13 + 1;
                    pSVar9->m_Items[(int)uVar13] = iVar12;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize
                              (pSVar16,iVar12,(MethodInfo_3916AC0 *)pMVar25->klass->rgctx_data[0xe].method);
                  }
                  iVar12 = System_Collections_Generic_List_int___get_Item
                                     (pSVar14,iVar26,
                                      (MethodInfo_39167D0 *)
                                      MethodInfo_System_Collections_Generic_List_int_get_Item);
                  pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
                  piVar1 = &(pSVar16->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar9 = (pSVar16->fields)._items;
                  if (pSVar9 == (System_Int32_array *)0x0) goto label_05c57d3c;
                  uVar13 = (pSVar16->fields)._size;
                  if (uVar13 < (uint)pSVar9->max_length) {
                    (pSVar16->fields)._size = uVar13 + 1;
                    pSVar9->m_Items[(int)uVar13] = iVar12;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize
                              (pSVar16,iVar12,(MethodInfo_3916AC0 *)pMVar25->klass->rgctx_data[0xe].method);
                  }
                  iVar12 = System_Collections_Generic_List_int___get_Item
                                     (pSVar14,iVar26 + 1,
                                      (MethodInfo_39167D0 *)
                                      MethodInfo_System_Collections_Generic_List_int_get_Item);
                  pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
                  piVar1 = &(pSVar16->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar9 = (pSVar16->fields)._items;
                  if (pSVar9 == (System_Int32_array *)0x0) goto label_05c57d3c;
                  uVar13 = (pSVar16->fields)._size;
                  if (uVar13 < (uint)pSVar9->max_length) {
                    (pSVar16->fields)._size = uVar13 + 1;
                    pSVar9->m_Items[(int)uVar13] = iVar12;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize
                              (pSVar16,iVar12,(MethodInfo_3916AC0 *)pMVar25->klass->rgctx_data[0xe].method);
                  }
                  iVar24 = (pSVar14->fields)._size;
                  iVar21 = iVar26 + 2;
                  iVar26 = iVar26 + 1;
                } while (iVar21 < iVar24);
                method = (MethodInfo *)__this_02;
                if ((*(int *)&__this_02[3].rgctxDataDummy == 2) && (2 < iVar24)) {
                  UVar34 = System_Collections_Generic_List_Vector3___get_Item
                                     ((System_Collections_Generic_List_Vector3__o *)__this_02,0,
                                      (MethodInfo_39FF5D0 *)
                                      MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                  local_b8 = UVar34.fields.z;
                  UVar35 = System_Collections_Generic_List_Vector3___get_Item
                                     ((System_Collections_Generic_List_Vector3__o *)__this_02,1,
                                      (MethodInfo_39FF5D0 *)
                                      MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                  a.fields.z = local_b8;
                  a.fields.x = UVar34.fields.x;
                  a.fields.y = UVar34.fields.y;
                  Characters_TitanLimbMesh_CutMeshData__AddBloodStain(__this,a,UVar35,pSVar14,wrist,method);
                }
              }
            }
            else {
              pMVar25 = (MethodInfo *)(__this->fields)._weights;
              iVar12 = System_Collections_Generic_List_int___get_Item
                                 (__this_00,iVar20 + 1,
                                  (MethodInfo_39167D0 *)
                                  MethodInfo_System_Collections_Generic_List_int_get_Item);
              if (pMVar25 == (MethodInfo *)0x0) goto label_05c57d3c;
              method = MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item;
              System_Collections_Generic_List_BoneWeight___get_Item
                        ((UnityEngine_BoneWeight_o *)&local_e8,
                         (System_Collections_Generic_List_BoneWeight__o *)pMVar25,iVar12,
                         (MethodInfo_51D8790 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item)
              ;
              weight_00.fields.m_Weight2 = local_e8.m_Weight2;
              weight_00.fields.m_Weight3 = local_e8.m_Weight3;
              weight_00.fields.m_Weight0 = local_e8.m_Weight0;
              weight_00.fields.m_Weight1 = local_e8.m_Weight1;
              weight_00.fields.m_BoneIndex0 = local_e8.m_BoneIndex0;
              weight_00.fields.m_BoneIndex1 = local_e8.m_BoneIndex1;
              weight_00.fields.m_BoneIndex2 = local_e8.m_BoneIndex2;
              weight_00.fields.m_BoneIndex3 = local_e8.m_BoneIndex3;
              fVar31 = (float)local_e8.m_BoneIndex1;
              fVar32 = (float)local_e8.m_BoneIndex2;
              fVar33 = (float)local_e8.m_BoneIndex3;
              bVar11 = Characters_TitanLimbMesh_CutPlane__ContainsBone(wrist,weight_00,pMVar25);
              if (bVar11) goto label_05c573b0;
              pMVar25 = (MethodInfo *)(__this->fields)._weights;
              iVar12 = System_Collections_Generic_List_int___get_Item
                                 (__this_00,iVar20 + 2,
                                  (MethodInfo_39167D0 *)
                                  MethodInfo_System_Collections_Generic_List_int_get_Item);
              if (pMVar25 == (MethodInfo *)0x0) goto label_05c57d3c;
              method = MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item;
              System_Collections_Generic_List_BoneWeight___get_Item
                        ((UnityEngine_BoneWeight_o *)&local_e8,
                         (System_Collections_Generic_List_BoneWeight__o *)pMVar25,iVar12,
                         (MethodInfo_51D8790 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item)
              ;
              weight_01.fields.m_Weight2 = local_e8.m_Weight2;
              weight_01.fields.m_Weight3 = local_e8.m_Weight3;
              weight_01.fields.m_Weight0 = local_e8.m_Weight0;
              weight_01.fields.m_Weight1 = local_e8.m_Weight1;
              weight_01.fields.m_BoneIndex0 = local_e8.m_BoneIndex0;
              weight_01.fields.m_BoneIndex1 = local_e8.m_BoneIndex1;
              weight_01.fields.m_BoneIndex2 = local_e8.m_BoneIndex2;
              weight_01.fields.m_BoneIndex3 = local_e8.m_BoneIndex3;
              fVar31 = (float)local_e8.m_BoneIndex1;
              fVar32 = (float)local_e8.m_BoneIndex2;
              fVar33 = (float)local_e8.m_BoneIndex3;
              bVar11 = Characters_TitanLimbMesh_CutPlane__ContainsBone(wrist,weight_01,pMVar25);
              if (bVar11) goto label_05c573b0;
              if (!detached) {
                iVar12 = System_Collections_Generic_List_int___get_Item
                                   (__this_00,iVar20,
                                    (MethodInfo_39167D0 *)
                                    MethodInfo_System_Collections_Generic_List_int_get_Item);
                pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
                if (pSVar16 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c57d3c;
                piVar1 = &(pSVar16->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar9 = (pSVar16->fields)._items;
                if (pSVar9 == (System_Int32_array *)0x0) goto label_05c57d3c;
                uVar13 = (pSVar16->fields)._size;
                if (uVar13 < (uint)pSVar9->max_length) {
                  (pSVar16->fields)._size = uVar13 + 1;
                  pSVar9->m_Items[(int)uVar13] = iVar12;
                }
                else {
                  System_Collections_Generic_List_int___AddWithResize
                            (pSVar16,iVar12,(MethodInfo_3916AC0 *)pMVar25->klass->rgctx_data[0xe].method);
                }
                iVar12 = System_Collections_Generic_List_int___get_Item
                                   (__this_00,iVar20 + 1,
                                    (MethodInfo_39167D0 *)
                                    MethodInfo_System_Collections_Generic_List_int_get_Item);
                pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
                piVar1 = &(pSVar16->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar9 = (pSVar16->fields)._items;
                if (pSVar9 == (System_Int32_array *)0x0) goto label_05c57d3c;
                uVar13 = (pSVar16->fields)._size;
                if (uVar13 < (uint)pSVar9->max_length) {
                  (pSVar16->fields)._size = uVar13 + 1;
                  pSVar9->m_Items[(int)uVar13] = iVar12;
                }
                else {
                  System_Collections_Generic_List_int___AddWithResize
                            (pSVar16,iVar12,(MethodInfo_3916AC0 *)pMVar25->klass->rgctx_data[0xe].method);
                }
                iVar12 = System_Collections_Generic_List_int___get_Item
                                   (__this_00,iVar20 + 2,
                                    (MethodInfo_39167D0 *)
                                    MethodInfo_System_Collections_Generic_List_int_get_Item);
                pMVar25 = MethodInfo_System_Collections_Generic_List_int_Add;
                piVar1 = &(pSVar16->fields)._version;
                *piVar1 = *piVar1 + 1;
                method = (MethodInfo *)(pSVar16->fields)._items;
                if ((Il2CppRGCTXData *)method == (Il2CppRGCTXData *)0x0) goto label_05c57d3c;
                uVar13 = (pSVar16->fields)._size;
                if (uVar13 < *(uint *)&((Il2CppRGCTXData *)((long)method + 0x18))->rgctxDataDummy) {
                  (pSVar16->fields)._size = uVar13 + 1;
                  *(int32_t *)((long)method + (long)(int)uVar13 * 4 + 0x20) = iVar12;
                }
                else {
                  method = (MethodInfo *)pMVar25->klass->rgctx_data;
                  System_Collections_Generic_List_int___AddWithResize
                            (pSVar16,iVar12,
                             (MethodInfo_3916AC0 *)((Il2CppRGCTXData *)((long)method + 0x70))->method);
                }
              }
            }
            iVar20 = iVar20 + 3;
          } while (iVar20 < (__this_00->fields)._size);
        }
        pSVar15 = (__this->fields)._triangles;
        if (pSVar15 == (System_Collections_Generic_List_int__array *)0x0) break;
        if ((pSVar16 != (System_Collections_Generic_List_int__o *)0x0) &&
           (pIVar17 = il2cpp_vm_Object_IsInst
                                ((Il2CppObject *)pSVar16,(((pSVar15->obj).klass)->_1).element_class),
           pIVar17 == (Il2CppObject *)0x0)) {
label_05c57d0e:
          pIVar17 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar17,(MethodInfo *)0x0);
        }
        if ((uint)pSVar15->max_length <= uVar22) goto label_05c57d09;
        pSVar15->m_Items[(long)local_80] = pSVar16;
        Il2CppCodeGenWriteBarrier(pSVar15->m_Items + (long)local_80);
        uVar22 = uVar22 + 1;
        pSVar15 = (__this->fields)._triangles;
      } while (pSVar15 != (System_Collections_Generic_List_int__array *)0x0);
    }
  }
label_05c57d3c:
  ThrowNullReferenceException();
label_05c57bea:
  if (detached) {
label_05c57cd5:
    Characters_TitanLimbMesh_CutMeshData__AddCap(__this,__this_01,wrist,method);
    return;
  }
  pSVar23 = (__this->fields)._weights;
  if (pSVar23 != (System_Collections_Generic_List_BoneWeight__o *)0x0) {
    if (wrist == (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
      if (0 < (pSVar23->fields)._size) {
        System_Collections_Generic_List_BoneWeight___get_Item
                  ((UnityEngine_BoneWeight_o *)&local_a0,pSVar23,0,
                   (MethodInfo_51D8790 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
        ThrowNullReferenceException();
      }
      goto label_05c57cd5;
    }
    iVar20 = 0;
    do {
      if ((pSVar23->fields)._size <= iVar20) goto label_05c57cd5;
      method = MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item;
      System_Collections_Generic_List_BoneWeight___get_Item
                ((UnityEngine_BoneWeight_o *)&local_a0,pSVar23,iVar20,
                 (MethodInfo_51D8790 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
      local_e8.m_BoneIndex0 = local_a0.m_BoneIndex0;
      local_e8.m_BoneIndex1 = local_a0.m_BoneIndex1;
      local_e8.m_BoneIndex2 = local_a0.m_BoneIndex2;
      local_e8.m_BoneIndex3 = local_a0.m_BoneIndex3;
      local_e8.m_Weight0 = local_a0.m_Weight0;
      local_e8.m_Weight1 = local_a0.m_Weight1;
      local_e8.m_Weight2 = local_a0.m_Weight2;
      local_e8.m_Weight3 = local_a0.m_Weight3;
      weight_02.fields.m_Weight2 = local_a0.m_Weight2;
      weight_02.fields.m_Weight3 = local_a0.m_Weight3;
      weight_02.fields.m_Weight0 = local_a0.m_Weight0;
      weight_02.fields.m_Weight1 = local_a0.m_Weight1;
      weight_02.fields.m_BoneIndex0 = local_a0.m_BoneIndex0;
      weight_02.fields.m_BoneIndex1 = local_a0.m_BoneIndex1;
      weight_02.fields.m_BoneIndex2 = local_a0.m_BoneIndex2;
      weight_02.fields.m_BoneIndex3 = local_a0.m_BoneIndex3;
      Characters_TitanLimbMesh_CutPlane__KeepParentBone
                ((UnityEngine_BoneWeight_o *)&local_50,wrist,weight_02,method_00);
      value.fields.m_Weight2 = local_50.m_Weight2;
      value.fields.m_Weight3 = local_50.m_Weight3;
      value.fields.m_Weight0 = local_50.m_Weight0;
      value.fields.m_Weight1 = local_50.m_Weight1;
      value.fields.m_BoneIndex0 = local_50.m_BoneIndex0;
      value.fields.m_BoneIndex1 = local_50.m_BoneIndex1;
      value.fields.m_BoneIndex2 = local_50.m_BoneIndex2;
      value.fields.m_BoneIndex3 = local_50.m_BoneIndex3;
      System_Collections_Generic_List_BoneWeight___set_Item
                (pSVar23,iVar20,value,
                 (MethodInfo_51D87F0 *)MethodInfo_System_Collections_Generic_List_BoneWeight_set_Item);
      iVar20 = iVar20 + 1;
      pSVar23 = (__this->fields)._weights;
    } while (pSVar23 != (System_Collections_Generic_List_BoneWeight__o *)0x0);
  }
  goto label_05c57d3c;
}


// Characters.TitanLimbMesh.CutMeshData$$Remove
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Remove (Characters_TitanLimbMesh_CutMeshData_o* __this, Characters_TitanLimbMesh_CutPlane_o* cut, const MethodInfo* method);
// 0x5c56c80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c56f7c: jmp 0x5c56fdd

void Characters_TitanLimbMesh_CutMeshData__Remove
               (Characters_TitanLimbMesh_CutMeshData_o *__this,Characters_TitanLimbMesh_CutPlane_o *cut,
               MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_int__o *pSVar2;
  System_Collections_Generic_List_BoneWeight__o *__this_00;
  UnityEngine_BoneWeight_o weight;
  UnityEngine_BoneWeight_o weight_00;
  UnityEngine_BoneWeight_o weight_01;
  bool bVar3;
  int32_t iVar4;
  int32_t index;
  int32_t index_00;
  System_Collections_Generic_List_int__array *pSVar5;
  uint uVar6;
  MethodInfo *pMVar7;
  int index_01;
  int iVar8;
  int local_90;
  UnityEngine_BoneWeight_Fields local_78;
  UnityEngine_BoneWeight_Fields local_50;
  
  if (Il2CppMethodInitialized_07547878 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_RemoveRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_set_Item);
    Il2CppMethodInitialized_07547878 = '\x01';
  }
  pSVar5 = (__this->fields)._triangles;
  if (pSVar5 != (System_Collections_Generic_List_int__array *)0x0) {
    if (cut == (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
      uVar6 = 0;
      do {
        uVar1 = (uint)pSVar5->max_length;
        if ((int)uVar1 <= (int)uVar6) {
          return;
        }
        if (uVar1 <= uVar6) {
label_05c56f90:
          ThrowIndexOutOfRangeException();
        }
        pSVar2 = pSVar5->m_Items[(int)uVar6];
        if (pSVar2 == (System_Collections_Generic_List_int__o *)0x0) break;
        iVar4 = (pSVar2->fields)._size;
        if (0 < iVar4) {
          iVar4 = System_Collections_Generic_List_int___get_Item
                            (pSVar2,0,(MethodInfo_39167D0 *)
                                      MethodInfo_System_Collections_Generic_List_int_get_Item);
          System_Collections_Generic_List_int___get_Item
                    (pSVar2,1,(MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          System_Collections_Generic_List_int___get_Item
                    (pSVar2,2,(MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          __this_00 = (__this->fields)._weights;
          if (__this_00 != (System_Collections_Generic_List_BoneWeight__o *)0x0) {
            System_Collections_Generic_List_BoneWeight___get_Item
                      ((UnityEngine_BoneWeight_o *)&local_50,__this_00,iVar4,
                       (MethodInfo_51D8790 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
            ThrowNullReferenceException();
          }
          break;
        }
        System_Collections_Generic_List_int___RemoveRange
                  (pSVar2,0,iVar4,
                   (MethodInfo_3918980 *)MethodInfo_System_Collections_Generic_List_int_RemoveRange);
        uVar6 = uVar6 + 1;
        pSVar5 = (__this->fields)._triangles;
      } while (pSVar5 != (System_Collections_Generic_List_int__array *)0x0);
    }
    else {
      uVar6 = 0;
      while( true ) {
        uVar1 = (uint)pSVar5->max_length;
        if ((int)uVar1 <= (int)uVar6) {
          return;
        }
        if (uVar1 <= uVar6) goto label_05c56f90;
        pSVar2 = pSVar5->m_Items[(int)uVar6];
        if (pSVar2 == (System_Collections_Generic_List_int__o *)0x0) break;
        iVar8 = (pSVar2->fields)._size;
        if (iVar8 < 1) {
          local_90 = 0;
        }
        else {
          index_01 = 0;
          local_90 = 0;
          do {
            iVar4 = System_Collections_Generic_List_int___get_Item
                              (pSVar2,index_01,
                               (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            index = System_Collections_Generic_List_int___get_Item
                              (pSVar2,index_01 + 1,
                               (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            index_00 = System_Collections_Generic_List_int___get_Item
                                 (pSVar2,index_01 + 2,
                                  (MethodInfo_39167D0 *)
                                  MethodInfo_System_Collections_Generic_List_int_get_Item);
            pMVar7 = (MethodInfo *)(__this->fields)._weights;
            if (pMVar7 == (MethodInfo *)0x0) goto label_05c56fdd;
            System_Collections_Generic_List_BoneWeight___get_Item
                      ((UnityEngine_BoneWeight_o *)&local_50,
                       (System_Collections_Generic_List_BoneWeight__o *)pMVar7,iVar4,
                       (MethodInfo_51D8790 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
            local_78.m_BoneIndex0 = local_50.m_BoneIndex0;
            local_78.m_BoneIndex1 = local_50.m_BoneIndex1;
            local_78.m_BoneIndex2 = local_50.m_BoneIndex2;
            local_78.m_BoneIndex3 = local_50.m_BoneIndex3;
            local_78.m_Weight0 = local_50.m_Weight0;
            local_78.m_Weight1 = local_50.m_Weight1;
            local_78.m_Weight2 = local_50.m_Weight2;
            local_78.m_Weight3 = local_50.m_Weight3;
            weight.fields.m_Weight2 = local_50.m_Weight2;
            weight.fields.m_Weight3 = local_50.m_Weight3;
            weight.fields.m_Weight0 = local_50.m_Weight0;
            weight.fields.m_Weight1 = local_50.m_Weight1;
            weight.fields.m_BoneIndex0 = local_50.m_BoneIndex0;
            weight.fields.m_BoneIndex1 = local_50.m_BoneIndex1;
            weight.fields.m_BoneIndex2 = local_50.m_BoneIndex2;
            weight.fields.m_BoneIndex3 = local_50.m_BoneIndex3;
            bVar3 = Characters_TitanLimbMesh_CutPlane__ContainsBone(cut,weight,pMVar7);
            if (!bVar3) {
              pMVar7 = (MethodInfo *)(__this->fields)._weights;
              if (pMVar7 == (MethodInfo *)0x0) goto label_05c56fdd;
              System_Collections_Generic_List_BoneWeight___get_Item
                        ((UnityEngine_BoneWeight_o *)&local_78,
                         (System_Collections_Generic_List_BoneWeight__o *)pMVar7,index,
                         (MethodInfo_51D8790 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item)
              ;
              weight_00.fields.m_Weight2 = local_78.m_Weight2;
              weight_00.fields.m_Weight3 = local_78.m_Weight3;
              weight_00.fields.m_Weight0 = local_78.m_Weight0;
              weight_00.fields.m_Weight1 = local_78.m_Weight1;
              weight_00.fields.m_BoneIndex0 = local_78.m_BoneIndex0;
              weight_00.fields.m_BoneIndex1 = local_78.m_BoneIndex1;
              weight_00.fields.m_BoneIndex2 = local_78.m_BoneIndex2;
              weight_00.fields.m_BoneIndex3 = local_78.m_BoneIndex3;
              bVar3 = Characters_TitanLimbMesh_CutPlane__ContainsBone(cut,weight_00,pMVar7);
              if (!bVar3) {
                pMVar7 = (MethodInfo *)(__this->fields)._weights;
                if (pMVar7 == (MethodInfo *)0x0) goto label_05c56fdd;
                System_Collections_Generic_List_BoneWeight___get_Item
                          ((UnityEngine_BoneWeight_o *)&local_78,
                           (System_Collections_Generic_List_BoneWeight__o *)pMVar7,index_00,
                           (MethodInfo_51D8790 *)
                           MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
                weight_01.fields.m_Weight2 = local_78.m_Weight2;
                weight_01.fields.m_Weight3 = local_78.m_Weight3;
                weight_01.fields.m_Weight0 = local_78.m_Weight0;
                weight_01.fields.m_Weight1 = local_78.m_Weight1;
                weight_01.fields.m_BoneIndex0 = local_78.m_BoneIndex0;
                weight_01.fields.m_BoneIndex1 = local_78.m_BoneIndex1;
                weight_01.fields.m_BoneIndex2 = local_78.m_BoneIndex2;
                weight_01.fields.m_BoneIndex3 = local_78.m_BoneIndex3;
                bVar3 = Characters_TitanLimbMesh_CutPlane__ContainsBone(cut,weight_01,pMVar7);
                if (!bVar3) {
                  System_Collections_Generic_List_int___set_Item
                            (pSVar2,local_90,iVar4,
                             (MethodInfo_3916810 *)MethodInfo_System_Collections_Generic_List_int_set_Item);
                  iVar8 = local_90 + 2;
                  System_Collections_Generic_List_int___set_Item
                            (pSVar2,local_90 + 1,index,
                             (MethodInfo_3916810 *)MethodInfo_System_Collections_Generic_List_int_set_Item);
                  local_90 = local_90 + 3;
                  System_Collections_Generic_List_int___set_Item
                            (pSVar2,iVar8,index_00,
                             (MethodInfo_3916810 *)MethodInfo_System_Collections_Generic_List_int_set_Item);
                }
              }
            }
            iVar8 = (pSVar2->fields)._size;
            index_01 = index_01 + 3;
          } while (index_01 < iVar8);
        }
        System_Collections_Generic_List_int___RemoveRange
                  (pSVar2,local_90,iVar8 - local_90,
                   (MethodInfo_3918980 *)MethodInfo_System_Collections_Generic_List_int_RemoveRange);
        uVar6 = uVar6 + 1;
        pSVar5 = (__this->fields)._triangles;
        if (pSVar5 == (System_Collections_Generic_List_int__array *)0x0) break;
      }
    }
  }
label_05c56fdd:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$AddIntersection
// il2cpp: int32_t Characters_TitanLimbMesh_CutMeshData__AddIntersection (Characters_TitanLimbMesh_CutMeshData_o* __this, int32_t a, int32_t b, float t, int32_t forearm, const MethodInfo* method);
// 0x5c59770

int32_t Characters_TitanLimbMesh_CutMeshData__AddIntersection
                  (Characters_TitanLimbMesh_CutMeshData_o *__this,int32_t a,int32_t b,float t,int32_t forearm,
                  MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Vector4_o *pUVar2;
  UnityEngine_BoneWeight_o *pUVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int32_t iVar6;
  System_Collections_Generic_List_Vector3__o *pSVar7;
  System_Collections_Generic_List_Vector3__o *pSVar8;
  UnityEngine_Vector3_array *pUVar9;
  System_Collections_Generic_List_Vector4__o *__this_00;
  System_Collections_Generic_List_Vector4__o *__this_01;
  UnityEngine_Vector4_array *pUVar10;
  System_Collections_Generic_List_Vector2__o *__this_02;
  System_Collections_Generic_List_Vector2__o *__this_03;
  UnityEngine_Vector2_array *pUVar11;
  System_Collections_Generic_List_Color32__o *__this_04;
  System_Collections_Generic_List_Color32__o *__this_05;
  UnityEngine_Color32_array *pUVar12;
  System_Collections_Generic_List_BoneWeight__o *__this_06;
  UnityEngine_BoneWeight_array *pUVar13;
  undefined1 auVar14 [16];
  UnityEngine_Vector2_o UVar15;
  UnityEngine_Vector2_o UVar16;
  UnityEngine_BoneWeight_o item;
  UnityEngine_BoneWeight_Fields *pUVar17;
  MethodInfo *pMVar18;
  UnityEngine_Color32_o UVar19;
  UnityEngine_Color32_o UVar20;
  UnityEngine_Vector3_StaticFields *pUVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float fVar29;
  float fVar30;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o UVar36;
  UnityEngine_Vector3_o item_00;
  UnityEngine_Vector4_o UVar37;
  UnityEngine_Vector4_o UVar38;
  UnityEngine_Vector4_o item_01;
  float local_d8;
  float fStack_d4;
  float local_c8;
  float fStack_c4;
  undefined1 local_98 [24];
  UnityEngine_Vector3_Fields UStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  UnityEngine_Vector3_Fields UStack_40;
  
  if (Il2CppMethodInitialized_07547879 == '\0') {
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
    Il2CppMethodInitialized_07547879 = '\x01';
  }
  local_48._0_4_ = 0.0;
  local_48._4_4_ = 0.0;
  UStack_40.x = 0.0;
  UStack_40.y = 0.0;
  local_58._0_4_ = 0.0;
  local_58._4_4_ = 0.0;
  local_58._8_4_ = 0.0;
  local_58._12_4_ = 0.0;
  pSVar7 = (__this->fields)._vertices;
  if (pSVar7 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c59e9a;
  iVar6 = (pSVar7->fields)._size;
  UVar35 = System_Collections_Generic_List_Vector3___get_Item
                     (pSVar7,a,(MethodInfo_39FF5D0 *)
                               MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
  pSVar8 = (__this->fields)._vertices;
  if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c59e9a;
  UVar36 = System_Collections_Generic_List_Vector3___get_Item
                     (pSVar8,b,(MethodInfo_39FF5D0 *)
                               MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
  pMVar18 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
  piVar1 = &(pSVar7->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar9 = (pSVar7->fields)._items;
  if (pUVar9 == (UnityEngine_Vector3_array *)0x0) goto label_05c59e9a;
  fVar34 = 1.0;
  if (t <= 1.0) {
    fVar34 = t;
  }
  fVar34 = (float)(-(uint)(0.0 <= t) & (uint)fVar34);
  local_c8 = UVar35.fields.x;
  fStack_c4 = UVar35.fields.y;
  item_00.fields.x = (UVar36.fields.x - local_c8) * fVar34 + local_c8;
  item_00.fields.y = (UVar36.fields.y - fStack_c4) * fVar34 + fStack_c4;
  item_00.fields.z = (UVar36.fields.z - UVar35.fields.z) * fVar34 + UVar35.fields.z;
  uVar22 = (pSVar7->fields)._size;
  local_68 = fVar34;
  fStack_64 = fVar34;
  fStack_60 = fVar34;
  fStack_5c = fVar34;
  if (uVar22 < (uint)pUVar9->max_length) {
    (pSVar7->fields)._size = uVar22 + 1;
    pUVar9->m_Items[(int)uVar22].fields.x = item_00.fields.x;
    pUVar9->m_Items[(int)uVar22].fields.y = item_00.fields.y;
    pUVar9->m_Items[(int)uVar22].fields.z = item_00.fields.z;
  }
  else {
    System_Collections_Generic_List_Vector3___AddWithResize
              (pSVar7,item_00,(MethodInfo_39FF950 *)pMVar18->klass->rgctx_data[0xe].method);
  }
  pSVar7 = (__this->fields)._normals;
  if (pSVar7 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c59e9a;
  UVar35 = System_Collections_Generic_List_Vector3___get_Item
                     (pSVar7,a,(MethodInfo_39FF5D0 *)
                               MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
  pSVar8 = (__this->fields)._normals;
  if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c59e9a;
  UVar36 = System_Collections_Generic_List_Vector3___get_Item
                     (pSVar8,b,(MethodInfo_39FF5D0 *)
                               MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
  local_c8 = UVar35.fields.x;
  fStack_c4 = UVar35.fields.y;
  fVar24 = UVar36.fields.x - local_c8;
  fVar26 = UVar36.fields.y - fStack_c4;
  fVar29 = extraout_XMM0_Dc_00 - extraout_XMM0_Dc;
  fVar31 = extraout_XMM0_Dd_00 - extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    UStack_80.z = fVar24;
    fStack_74 = fVar26;
    fStack_70 = extraout_XMM0_Dc_00 - extraout_XMM0_Dc;
    fStack_6c = extraout_XMM0_Dd_00 - extraout_XMM0_Dd;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    fVar24 = UStack_80.z;
    fVar26 = fStack_74;
    fVar29 = fStack_70;
    fVar31 = fStack_6c;
  }
  local_98._0_4_ = 0.0;
  local_98._4_4_ = 0.0;
  fVar25 = fVar24 * local_68;
  fVar27 = fVar26 * fStack_64;
  fVar30 = fVar29 * fStack_60;
  fVar32 = fVar31 * fStack_5c;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    UStack_80.z = fVar24 * local_68;
    fStack_74 = fVar26 * fStack_64;
    fStack_70 = fVar29 * fStack_60;
    fStack_6c = fVar31 * fStack_5c;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar25 = UStack_80.z;
    fVar27 = fStack_74;
    fVar30 = fStack_70;
    fVar32 = fStack_6c;
  }
  auVar33._0_4_ = local_c8 + fVar25;
  auVar33._4_4_ = fStack_c4 + fVar27;
  auVar33._8_4_ = extraout_XMM0_Dc + fVar30;
  auVar33._12_4_ = extraout_XMM0_Dd + fVar32;
  fVar24 = UVar35.fields.z + (UVar36.fields.z - UVar35.fields.z) * fVar34;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar28 = 0;
  fVar26 = fVar24 * fVar24 + auVar33._4_4_ * auVar33._4_4_ + auVar33._0_4_ * auVar33._0_4_;
  if (fVar26 < 0.0) {
    fVar26 = sqrtf(fVar26);
    uVar28 = extraout_XMM0_Db;
    if (1e-05 < fVar26) goto label_05c59aaf;
label_05c59a73:
    pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar24 = (pUVar21->zeroVector).fields.z;
  }
  else {
    fVar26 = SQRT(fVar26);
    if (fVar26 <= 1e-05) goto label_05c59a73;
label_05c59aaf:
    fVar24 = fVar24 / fVar26;
    auVar14._4_4_ = fVar26;
    auVar14._0_4_ = fVar26;
    auVar14._8_4_ = uVar28;
    auVar14._12_4_ = uVar28;
    auVar33 = divps(auVar33,auVar14);
    local_98._0_4_ = auVar33._0_4_;
    local_98._4_4_ = auVar33._4_4_;
    pUVar21 = (UnityEngine_Vector3_StaticFields *)local_98;
  }
  pMVar18 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
  uVar4 = (pUVar21->zeroVector).fields.x;
  uVar5 = (pUVar21->zeroVector).fields.y;
  UVar35.fields.y = (float)uVar5;
  UVar35.fields.x = (float)uVar4;
  piVar1 = &(pSVar7->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar9 = (pSVar7->fields)._items;
  if (pUVar9 != (UnityEngine_Vector3_array *)0x0) {
    uVar22 = (pSVar7->fields)._size;
    if (uVar22 < (uint)pUVar9->max_length) {
      (pSVar7->fields)._size = uVar22 + 1;
      pUVar9->m_Items[(int)uVar22].fields.x = (float)uVar4;
      pUVar9->m_Items[(int)uVar22].fields.y = (float)uVar5;
      pUVar9->m_Items[(int)uVar22].fields.z = fVar24;
    }
    else {
      UVar35.fields.z = fVar24;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar7,UVar35,(MethodInfo_39FF950 *)pMVar18->klass->rgctx_data[0xe].method);
    }
    __this_00 = (__this->fields)._tangents;
    if (__this_00 != (System_Collections_Generic_List_Vector4__o *)0x0) {
      UVar37 = System_Collections_Generic_List_Vector4___get_Item
                         (__this_00,a,
                          (MethodInfo_3A029B0 *)MethodInfo_System_Collections_Generic_List_Vector4_get_Item);
      __this_01 = (__this->fields)._tangents;
      if (__this_01 != (System_Collections_Generic_List_Vector4__o *)0x0) {
        UVar38 = System_Collections_Generic_List_Vector4___get_Item
                           (__this_01,b,
                            (MethodInfo_3A029B0 *)MethodInfo_System_Collections_Generic_List_Vector4_get_Item)
        ;
        pMVar18 = MethodInfo_System_Collections_Generic_List_Vector4_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar10 = (__this_00->fields)._items;
        if (pUVar10 != (UnityEngine_Vector4_array *)0x0) {
          local_c8 = UVar37.fields.x;
          fStack_c4 = UVar37.fields.y;
          item_01.fields.x = (UVar38.fields.x - local_c8) * local_68 + local_c8;
          item_01.fields.y = (UVar38.fields.y - fStack_c4) * fStack_64 + fStack_c4;
          local_d8 = UVar37.fields.z;
          fStack_d4 = UVar37.fields.w;
          item_01.fields.z = (UVar38.fields.z - local_d8) * local_68 + local_d8;
          item_01.fields.w = (UVar38.fields.w - fStack_d4) * fStack_64 + fStack_d4;
          uVar22 = (__this_00->fields)._size;
          if (uVar22 < (uint)pUVar10->max_length) {
            (__this_00->fields)._size = uVar22 + 1;
            pUVar2 = pUVar10->m_Items + (int)uVar22;
            (pUVar2->fields).x = item_01.fields.x;
            (pUVar2->fields).y = item_01.fields.y;
            (pUVar2->fields).z = item_01.fields.z;
            (pUVar2->fields).w = item_01.fields.w;
          }
          else {
            System_Collections_Generic_List_Vector4___AddWithResize
                      (__this_00,item_01,(MethodInfo_3A02D00 *)pMVar18->klass->rgctx_data[0xe].method);
          }
          __this_02 = (__this->fields)._uv;
          if (__this_02 != (System_Collections_Generic_List_Vector2__o *)0x0) {
            UVar15 = System_Collections_Generic_List_Vector2___get_Item
                               (__this_02,a,
                                (MethodInfo_39F9280 *)
                                MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
            __this_03 = (__this->fields)._uv;
            if (__this_03 != (System_Collections_Generic_List_Vector2__o *)0x0) {
              UVar16 = System_Collections_Generic_List_Vector2___get_Item
                                 (__this_03,b,
                                  (MethodInfo_39F9280 *)
                                  MethodInfo_System_Collections_Generic_List_Vector2_get_Item);
              pMVar18 = MethodInfo_System_Collections_Generic_List_Vector2_Add;
              piVar1 = &(__this_02->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar11 = (__this_02->fields)._items;
              if (pUVar11 != (UnityEngine_Vector2_array *)0x0) {
                local_d8 = UVar15.fields.x;
                fStack_d4 = UVar15.fields.y;
                local_d8 = local_68 * (UVar16.fields.x - local_d8) + local_d8;
                fStack_d4 = fStack_64 * (UVar16.fields.y - fStack_d4) + fStack_d4;
                uVar22 = (__this_02->fields)._size;
                if (uVar22 < (uint)pUVar11->max_length) {
                  (__this_02->fields)._size = uVar22 + 1;
                  UVar16.fields.y = fStack_d4;
                  UVar16.fields.x = local_d8;
                  pUVar11->m_Items[(int)uVar22].fields = UVar16.fields;
                }
                else {
                  UVar15.fields.y = fStack_d4;
                  UVar15.fields.x = local_d8;
                  System_Collections_Generic_List_Vector2___AddWithResize
                            (__this_02,UVar15,(MethodInfo_39F9590 *)pMVar18->klass->rgctx_data[0xe].method);
                }
                __this_04 = (__this->fields)._colors;
                if (__this_04 != (System_Collections_Generic_List_Color32__o *)0x0) {
                  UVar19 = System_Collections_Generic_List_Color32___get_Item
                                     (__this_04,a,
                                      (MethodInfo_51EEE10 *)
                                      MethodInfo_System_Collections_Generic_List_Color32_get_Item);
                  __this_05 = (__this->fields)._colors;
                  if (__this_05 != (System_Collections_Generic_List_Color32__o *)0x0) {
                    UVar20 = System_Collections_Generic_List_Color32___get_Item
                                       (__this_05,b,
                                        (MethodInfo_51EEE10 *)
                                        MethodInfo_System_Collections_Generic_List_Color32_get_Item);
                    pMVar18 = MethodInfo_System_Collections_Generic_List_Color32_Add;
                    piVar1 = &(__this_04->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar12 = (__this_04->fields)._items;
                    if (pUVar12 != (UnityEngine_Color32_array *)0x0) {
                      uVar22 = (uint)UVar19.fields._overlap_0 >> 8 & 0xff;
                      uVar23 = (uint)UVar19.fields._overlap_0 >> 0x10 & 0xff;
                      UVar19.fields._overlap_0 =
                           (UnityEngine_Color32_Fields)
                           (((int)((float)(int)(((uint)UVar20.fields._overlap_0 >> 8 & 0xff) - uVar22) *
                                   fVar34 + (float)uVar22) & 0xffU) << 8 |
                            ((int)((float)(int)(((uint)UVar20.fields._overlap_0 >> 0x10 & 0xff) - uVar23) *
                                   fVar34 + (float)uVar23) & 0xffU) << 0x10 |
                            (int)((float)(int)(((uint)UVar20.fields._overlap_0 >> 0x18) -
                                              ((uint)UVar19.fields._overlap_0 >> 0x18)) * fVar34 +
                                 (float)((uint)UVar19.fields._overlap_0 >> 0x18)) << 0x18 |
                           (int)((float)(int)(((uint)UVar20.fields._overlap_0 & 0xff) -
                                             ((uint)UVar19.fields._overlap_0 & 0xff)) * fVar34 +
                                (float)((uint)UVar19.fields._overlap_0 & 0xff)) & 0xffU);
                      uVar22 = (__this_04->fields)._size;
                      if (uVar22 < (uint)pUVar12->max_length) {
                        (__this_04->fields)._size = uVar22 + 1;
                        pUVar12->m_Items[(int)uVar22].fields._overlap_0._at_rgba.rgba =
                             (int32_t)UVar19.fields._overlap_0;
                      }
                      else {
                        System_Collections_Generic_List_Color32___AddWithResize
                                  (__this_04,UVar19,
                                   (MethodInfo_51EF100 *)pMVar18->klass->rgctx_data[0xe].method);
                      }
                      __this_06 = (__this->fields)._weights;
                      local_48._0_4_ = 0.0;
                      local_48._4_4_ = 0.0;
                      UStack_40.x = 0.0;
                      UStack_40.y = 0.0;
                      local_58._0_4_ = 0.0;
                      local_58._4_4_ = 0.0;
                      local_58._8_4_ = 0.0;
                      local_58._12_4_ = 0.0;
                      UnityEngine_BoneWeight__set_boneIndex0
                                ((UnityEngine_BoneWeight_o *)local_58,forearm,(MethodInfo *)0x0);
                      UnityEngine_BoneWeight__set_weight0
                                ((UnityEngine_BoneWeight_o *)local_58,1.0,(MethodInfo *)0x0);
                      pMVar18 = MethodInfo_System_Collections_Generic_List_BoneWeight_Add;
                      if (__this_06 != (System_Collections_Generic_List_BoneWeight__o *)0x0) {
                        local_98._16_4_ = (float)local_48;
                        local_98._20_4_ = local_48._4_4_;
                        UStack_80.x = UStack_40.x;
                        UStack_80.y = UStack_40.y;
                        local_98._0_8_ = local_58._0_8_;
                        local_98._8_8_ = local_58._8_8_;
                        piVar1 = &(__this_06->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar13 = (__this_06->fields)._items;
                        if (pUVar13 != (UnityEngine_BoneWeight_array *)0x0) {
                          uVar22 = (__this_06->fields)._size;
                          if (uVar22 < (uint)pUVar13->max_length) {
                            (__this_06->fields)._size = uVar22 + 1;
                            pUVar17 = &pUVar13->m_Items[(int)uVar22].fields;
                            pUVar17->m_BoneIndex0 = (int32_t)(float)local_48;
                            pUVar17->m_BoneIndex1 = (int32_t)local_48._4_4_;
                            pUVar17->m_BoneIndex2 = (int32_t)UStack_40.x;
                            pUVar17->m_BoneIndex3 = (int32_t)UStack_40.y;
                            pUVar3 = pUVar13->m_Items + (int)uVar22;
                            (pUVar3->fields).m_Weight0 = (float)local_58._0_4_;
                            (pUVar3->fields).m_Weight1 = (float)local_58._4_4_;
                            (pUVar3->fields).m_Weight2 = (float)local_58._8_4_;
                            (pUVar3->fields).m_Weight3 = (float)local_58._12_4_;
                          }
                          else {
                            item.fields.m_Weight2 = (float)local_58._8_4_;
                            item.fields.m_Weight3 = (float)local_58._12_4_;
                            item.fields.m_Weight0 = (float)local_58._0_4_;
                            item.fields.m_Weight1 = (float)local_58._4_4_;
                            item.fields.m_BoneIndex0 = (int32_t)(float)local_48;
                            item.fields.m_BoneIndex1 = (int32_t)local_48._4_4_;
                            item.fields.m_BoneIndex2 = (int32_t)UStack_40.x;
                            item.fields.m_BoneIndex3 = (int32_t)UStack_40.y;
                            System_Collections_Generic_List_BoneWeight___AddWithResize
                                      (__this_06,item,
                                       (MethodInfo_51D8B20 *)pMVar18->klass->rgctx_data[0xe].method);
                          }
                          return iVar6;
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
    }
  }
label_05c59e9a:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$AddBloodStain
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__AddBloodStain (Characters_TitanLimbMesh_CutMeshData_o* __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, System_Collections_Generic_List_int__o* polygon, Characters_TitanLimbMesh_CutPlane_o* cut, const MethodInfo* method);
// 0x5c59ea0
// eh: try 0x5c5a16a..0x5c5a629 -> pad 0x5c5a645 (+15 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c5a66f..0x5c5a674 -> pad 0x5c5a699 cleanup
// eh: try 0x5c5a69c..0x5c5a6a9 -> pad 0x5c5a6b1 catch (...) [compiler noexcept guard]
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c5a031: jmp 0x5c5a5d8
// asm:   0x5c5a15c: nop dword ptr [rax]
// asm:   0x5c5a629: jmp 0x5c5a64a
// asm:   0x5c5a62b: jmp 0x5c5a64a
// asm:   0x5c5a62d: jmp 0x5c5a645
// asm:   0x5c5a62f: jmp 0x5c5a64a
// asm:   0x5c5a631: jmp 0x5c5a64a
// asm:   0x5c5a633: jmp 0x5c5a64a
// asm:   0x5c5a635: jmp 0x5c5a64a
// asm:   0x5c5a637: jmp 0x5c5a645
// asm:   0x5c5a639: jmp 0x5c5a645
// asm:   0x5c5a63b: jmp 0x5c5a645
// asm:   0x5c5a63d: jmp 0x5c5a645
// asm:   0x5c5a63f: jmp 0x5c5a64a
// asm:   0x5c5a641: jmp 0x5c5a64a
// asm:   0x5c5a643: jmp 0x5c5a64a
// asm:   0x5c5a645: mov rbx, rax
// asm:   0x5c5a648: jmp 0x5c5a652
// asm:   0x5c5a64a: mov rbx, rax
// asm:   0x5c5a64d: mov r12, qword ptr [rsp + 0x30]
// asm:   0x5c5a652: mov rbp, qword ptr [rsp + 0x28]
// asm:   0x5c5a657: cmp edx, 1
// asm:   0x5c5a65a: jne 0x5c5a69c
// asm:   0x5c5a65c: mov rdi, rbx
// asm:   0x5c5a65f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c5a664: mov rbx, qword ptr [rax]
// asm:   0x5c5a667: mov qword ptr [rsp + 0xc0], rbx
// asm:   0x5c5a66f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c5a674: lea rax, [rip + 0x1633b7d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5c5a67b: mov rsi, qword ptr [rax]
// asm:   0x5c5a67e: lea rdi, [rsp + 0x50]
// asm:   0x5c5a683: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5c5a688: test rbx, rbx
// asm:   0x5c5a68b: je 0x5c5a49d
// asm:   0x5c5a691: mov rdi, rbx
// asm:   0x5c5a694: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c5a699: mov rbx, rax
// asm:   0x5c5a69c: lea rdi, [rsp + 0xc0]
// asm:   0x5c5a6a4: call 0x2fd9ae0  ; il2cpp_runtime_helper_02fd9ae0()
// asm:   0x5c5a6a9: mov rdi, rbx
// asm:   0x5c5a6ac: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c5a6b1: mov rdi, rax
// asm:   0x5c5a6b4: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanLimbMesh_CutMeshData__AddBloodStain
               (Characters_TitanLimbMesh_CutMeshData_o *__this,UnityEngine_Vector3_o a,UnityEngine_Vector3_o b
               ,System_Collections_Generic_List_int__o *polygon,Characters_TitanLimbMesh_CutPlane_o *cut,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  int32_t item;
  int32_t bone;
  uint uVar3;
  System_Collections_Generic_List_Vector3__o *pSVar4;
  System_Collections_Generic_List_BoneWeight__o *__this_00;
  System_Int32_array *pSVar5;
  undefined1 auVar6 [16];
  UnityEngine_BoneWeight_o value;
  MethodInfo *pMVar7;
  int32_t index;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  UnityEngine_Color32_o color;
  int iVar12;
  int item_00;
  System_Collections_Generic_List_int__o *__this_01;
  float fVar13;
  float fVar14;
  float fVar15;
  float extraout_XMM0_Db;
  undefined4 in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 in_XMM0_Dd;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float in_XMM1_Db;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  UnityEngine_Vector2_o uv;
  undefined4 in_XMM3_Db;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o tangent;
  undefined1 local_1b8 [16];
  Il2CppObject *local_1a8;
  undefined8 local_198;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [8];
  float fStack_180;
  float fStack_17c;
  undefined1 local_178 [8];
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined1 *local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  undefined1 local_118 [32];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  System_Collections_Generic_List_T__o *local_58;
  float fStack_50;
  float fStack_4c;
  Il2CppObject *local_48;
  int32_t iStack_40;
  int32_t iStack_3c;
  
  local_198 = b.fields._0_8_;
  local_128 = a.fields.z;
  local_188._4_4_ = in_XMM3_Db;
  local_188._0_4_ = b.fields.z;
  fStack_180 = (float)in_XMM3_Dc;
  fStack_17c = (float)in_XMM3_Dd;
  local_168._8_4_ = in_XMM0_Dc;
  local_168._0_8_ = a.fields._0_8_;
  local_168._12_4_ = in_XMM0_Dd;
  fStack_124 = in_XMM1_Db;
  if (Il2CppMethodInitialized_0754787a == '\0') {
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
    Il2CppMethodInitialized_0754787a = '\x01';
  }
  local_178._4_4_ = local_168._4_4_;
  local_178._0_4_ = local_168._4_4_;
  uStack_170 = local_168._4_4_;
  uStack_16c = local_168._4_4_;
  local_1b8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_1b8._8_4_ = 0.0;
  local_1b8._12_4_ = 0.0;
  local_1a8 = (Il2CppObject *)0x0;
  if (Il2CppMethodInitialized_0753e7b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7b7 = '\x01';
    uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fStack_180 = (float)local_188._4_4_;
  local_188._4_4_ = (float)local_198;
  local_198._0_4_ = local_198._4_4_;
  fStack_190 = local_198._4_4_;
  fStack_18c = local_198._4_4_;
  local_158 = local_128;
  fStack_154 = (float)local_168._0_4_;
  fStack_150 = fStack_124;
  fStack_14c = (float)local_168._4_4_;
  fStack_17c = local_198._4_4_;
  fVar20 = (float)local_168._0_4_ - (float)local_188._4_4_;
  fVar20 = fVar20 * fVar20;
  fVar13 = fVar20 + ((float)local_178._0_4_ - local_198._4_4_) * ((float)local_178._0_4_ - local_198._4_4_) +
           (local_128 - (float)local_188._0_4_) * (local_128 - (float)local_188._0_4_);
  if (fVar13 < 0.0) {
    fVar14 = sqrtf(fVar13);
    fVar20 = extraout_XMM0_Db;
    fVar9 = extraout_XMM0_Dc;
    fVar10 = extraout_XMM0_Dd;
    fVar13 = local_138;
    fVar15 = fStack_134;
    fVar19 = fStack_130;
    fVar8 = fStack_12c;
  }
  else {
    fVar14 = SQRT(fVar13);
    fVar9 = fVar20;
    fVar10 = fVar20;
    fVar13 = local_138;
    fVar15 = fStack_134;
    fVar19 = fStack_130;
    fVar8 = fStack_12c;
  }
  fStack_12c = fVar10;
  fStack_130 = fVar9;
  fStack_134 = fVar20;
  local_138 = fVar14;
  if (1e-06 <= local_138) {
    pSVar4 = (__this->fields)._vertices;
    if ((pSVar4 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
       (fVar13 = local_138, fVar15 = fStack_134, fVar19 = fStack_130, fVar8 = fStack_12c,
       polygon == (System_Collections_Generic_List_int__o *)0x0)) {
label_05c5a5ea:
      fStack_12c = fVar8;
      fStack_130 = fVar19;
      fStack_134 = fVar15;
      local_138 = fVar13;
      ThrowNullReferenceException();
    }
    item = (pSVar4->fields)._size;
    System_Collections_Generic_List_int___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_118,polygon,
               (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_1a8 = (Il2CppObject *)local_118._16_8_;
    local_1b8._0_8_ = local_118._0_8_;
    local_1b8._8_8_ = local_118._8_8_;
    local_148 = 0;
    local_140 = local_1b8;
    if (cut == (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
      bVar11 = System_Collections_Generic_List_Enumerator_int___MoveNext
                         ((System_Collections_Generic_List_Enumerator_int__o *)local_1b8,
                          (MethodInfo_4C3B4A0 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (bVar11) {
        pSVar4 = (__this->fields)._vertices;
        if (pSVar4 != (System_Collections_Generic_List_Vector3__o *)0x0) {
          System_Collections_Generic_List_Vector3___get_Item
                    (pSVar4,(int32_t)local_1a8,
                     (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
          ThrowNullReferenceException();
        }
label_05c5a60c:
        ThrowNullReferenceException();
      }
    }
    else {
      auVar16._0_4_ = (float)local_188._0_4_ - local_158;
      auVar16._4_4_ = (float)local_188._4_4_ - fStack_154;
      auVar16._8_4_ = fStack_180 - fStack_150;
      auVar16._12_4_ = fStack_17c - fStack_14c;
      fStack_d4 = ((float)local_198 - (float)local_178._0_4_) / local_138;
      auVar6._4_4_ = local_138;
      auVar6._0_4_ = local_138;
      auVar6._8_4_ = local_138;
      auVar6._12_4_ = local_138;
      auVar17 = divps(auVar16,auVar6);
      local_d8 = auVar17._4_4_;
      fVar20 = local_138 * 2.5;
      local_f8 = local_138 * 0.002;
      local_e8 = ZEXT416((uint)local_f8);
      _local_188 = auVar17;
      fStack_f4 = local_f8;
      fStack_f0 = local_f8;
      fStack_ec = local_f8;
      uStack_d0 = local_d8;
      uStack_cc = local_d8;
      local_198._0_4_ = fStack_d4;
      while (bVar11 = System_Collections_Generic_List_Enumerator_int___MoveNext
                                ((System_Collections_Generic_List_Enumerator_int__o *)local_1b8,
                                 (MethodInfo_4C3B4A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar11)
      {
        pSVar4 = (__this->fields)._vertices;
        if (pSVar4 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c5a60c;
        index = (int32_t)local_1a8;
        UVar21 = System_Collections_Generic_List_Vector3___get_Item
                           (pSVar4,(int32_t)local_1a8,
                            (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item)
        ;
        auVar18._4_12_ = auVar17._4_12_;
        uStack_170 = extraout_XMM0_Dc_00;
        local_178 = (undefined1  [8])UVar21.fields._0_8_;
        uStack_16c = extraout_XMM0_Dd_00;
        pSVar4 = (__this->fields)._normals;
        if (pSVar4 == (System_Collections_Generic_List_Vector3__o *)0x0) {
          ThrowNullReferenceException();
        }
        auVar18._0_4_ = UVar21.fields.z - local_128;
        local_78._0_4_ = (cut->fields).Normal.fields.x;
        local_78._4_4_ = (cut->fields).Normal.fields.y;
        uStack_70 = 0;
        local_68 = ZEXT416((uint)((cut->fields).Normal.fields.z * auVar18._0_4_));
        fVar13 = (cut->fields).BloodStainScale;
        local_158 = UVar21.fields.z;
        local_88 = auVar18;
        UVar21 = System_Collections_Generic_List_Vector3___get_Item
                           (pSVar4,index,
                            (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item)
        ;
        local_98._8_4_ = extraout_XMM0_Dc_01;
        local_98._0_8_ = UVar21.fields._0_8_;
        local_98._12_4_ = extraout_XMM0_Dd_01;
        pSVar4 = (__this->fields)._normals;
        if (pSVar4 == (System_Collections_Generic_List_Vector3__o *)0x0) {
          ThrowNullReferenceException();
        }
        UVar22 = System_Collections_Generic_List_Vector3___get_Item
                           (pSVar4,index,
                            (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item)
        ;
        local_a8._8_4_ = extraout_XMM0_Dc_02;
        local_a8._0_8_ = UVar22.fields._0_8_;
        local_a8._12_4_ = extraout_XMM0_Dd_02;
        bone = (cut->fields).ParentBone;
        local_b8 = UnityEngine_Mathf__GammaToLinearSpace(0.46,(MethodInfo *)0x0);
        local_c8 = UnityEngine_Mathf__GammaToLinearSpace(0.04,(MethodInfo *)0x0);
        fVar15 = UnityEngine_Mathf__GammaToLinearSpace(0.03,(MethodInfo *)0x0);
        color.fields._overlap_0 =
             (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(local_b8,CONCAT44(0x3f3851ec,fVar15),0);
        fVar19 = (((float)local_178._0_4_ - (float)local_168._0_4_) * (float)local_188._4_4_ +
                  ((float)local_178._4_4_ - (float)local_168._4_4_) * (float)local_198 +
                 (float)local_88._0_4_ * (float)local_188._0_4_) / local_138;
        fVar15 = 1.0;
        if (fVar19 <= 1.0) {
          fVar15 = fVar19;
        }
        uv.fields.y = -((float)local_68._0_4_ +
                       ((float)local_178._4_4_ - (float)local_168._4_4_) * local_78._4_4_ +
                       ((float)local_178._0_4_ - (float)local_168._0_4_) * (float)local_78) /
                      (fVar13 * fVar20);
        uv.fields.x = (float)(~-(uint)(0.0 <= fVar19) & 0x40000000 |
                             (uint)(fVar15 + 2.0) & -(uint)(0.0 <= fVar19));
        position.fields.x = (float)local_98._0_4_ * local_f8 + (float)local_178._0_4_;
        position.fields.y = (float)local_98._4_4_ * fStack_f4 + (float)local_178._4_4_;
        position.fields.z = UVar21.fields.z * (float)local_e8._0_4_ + local_158;
        tangent.fields.y = fStack_d4;
        tangent.fields.x = (float)local_d8;
        UVar21.fields.z = UVar22.fields.z;
        UVar21.fields.x = (float)local_a8._0_4_;
        UVar21.fields.y = (float)local_a8._4_4_;
        tangent.fields.z = (float)local_188._0_4_;
        Characters_TitanLimbMesh_CutMeshData__AddWoundVertex
                  (__this,position,uv,UVar21,tangent,bone,color,method);
        __this_00 = (__this->fields)._weights;
        if (__this_00 == (System_Collections_Generic_List_BoneWeight__o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar12 = (__this_00->fields)._size;
        method = MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item;
        System_Collections_Generic_List_BoneWeight___get_Item
                  ((UnityEngine_BoneWeight_o *)local_118,__this_00,index,
                   (MethodInfo_51D8790 *)MethodInfo_System_Collections_Generic_List_BoneWeight_get_Item);
        local_48 = (Il2CppObject *)local_118._16_8_;
        iStack_40 = local_118._24_4_;
        iStack_3c = local_118._28_4_;
        local_58 = (System_Collections_Generic_List_T__o *)local_118._0_8_;
        fStack_50 = (float)local_118._8_4_;
        fStack_4c = (float)local_118._12_4_;
        auVar17._8_8_ = local_118._24_8_;
        auVar17._0_8_ = local_118._16_8_;
        value.fields.m_Weight2 = (float)local_118._8_4_;
        value.fields.m_Weight3 = (float)local_118._12_4_;
        value.fields.m_Weight0 = (float)local_118._0_4_;
        value.fields.m_Weight1 = (float)local_118._4_4_;
        value.fields.m_BoneIndex0 = local_118._16_4_;
        value.fields.m_BoneIndex1 = local_118._20_4_;
        value.fields.m_BoneIndex2 = local_118._24_4_;
        value.fields.m_BoneIndex3 = local_118._28_4_;
        System_Collections_Generic_List_BoneWeight___set_Item
                  (__this_00,iVar12 + -1,value,
                   (MethodInfo_51D87F0 *)MethodInfo_System_Collections_Generic_List_BoneWeight_set_Item);
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_1b8,
               (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    if (2 < (polygon->fields)._size) {
      iVar12 = 2;
      do {
        while( true ) {
          pMVar7 = MethodInfo_System_Collections_Generic_List_int_Add;
          __this_01 = (__this->fields)._wound;
          fVar13 = local_138;
          fVar15 = fStack_134;
          fVar19 = fStack_130;
          fVar8 = fStack_12c;
          if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c5a5ea;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_01->fields)._items;
          if (pSVar5 == (System_Int32_array *)0x0) goto label_05c5a5ea;
          uVar3 = (__this_01->fields)._size;
          if (uVar3 < (uint)pSVar5->max_length) {
            (__this_01->fields)._size = uVar3 + 1;
            pSVar5->m_Items[(int)uVar3] = item;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (__this_01,item,(MethodInfo_3916AC0 *)pMVar7->klass->rgctx_data[0xe].method);
            __this_01 = (__this->fields)._wound;
            fVar13 = local_138;
            fVar15 = fStack_134;
            fVar19 = fStack_130;
            fVar8 = fStack_12c;
            if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c5a5ea;
          }
          pMVar7 = MethodInfo_System_Collections_Generic_List_int_Add;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_01->fields)._items;
          fVar13 = local_138;
          fVar15 = fStack_134;
          fVar19 = fStack_130;
          fVar8 = fStack_12c;
          if (pSVar5 == (System_Int32_array *)0x0) goto label_05c5a5ea;
          item_00 = iVar12 + item + -1;
          uVar3 = (__this_01->fields)._size;
          if (uVar3 < (uint)pSVar5->max_length) {
            (__this_01->fields)._size = uVar3 + 1;
            pSVar5->m_Items[(int)uVar3] = item_00;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (__this_01,item_00,(MethodInfo_3916AC0 *)pMVar7->klass->rgctx_data[0xe].method);
            __this_01 = (__this->fields)._wound;
            fVar13 = local_138;
            fVar15 = fStack_134;
            fVar19 = fStack_130;
            fVar8 = fStack_12c;
            if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c5a5ea;
          }
          pMVar7 = MethodInfo_System_Collections_Generic_List_int_Add;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_01->fields)._items;
          fVar13 = local_138;
          fVar15 = fStack_134;
          fVar19 = fStack_130;
          fVar8 = fStack_12c;
          if (pSVar5 == (System_Int32_array *)0x0) goto label_05c5a5ea;
          uVar3 = (__this_01->fields)._size;
          if ((uint)pSVar5->max_length <= uVar3) break;
          (__this_01->fields)._size = uVar3 + 1;
          pSVar5->m_Items[(int)uVar3] = iVar12 + item;
          iVar12 = iVar12 + 1;
          if ((polygon->fields)._size <= iVar12) {
            return;
          }
        }
        System_Collections_Generic_List_int___AddWithResize
                  (__this_01,iVar12 + item,(MethodInfo_3916AC0 *)pMVar7->klass->rgctx_data[0xe].method);
        iVar12 = iVar12 + 1;
      } while (iVar12 < (polygon->fields)._size);
    }
  }
  return;
}


// Characters.TitanLimbMesh.CutMeshData$$AddCap
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__AddCap (Characters_TitanLimbMesh_CutMeshData_o* __this, System_Collections_Generic_List_Vector3__o* rim, Characters_TitanLimbMesh_CutPlane_o* wrist, const MethodInfo* method);
// 0x5c5a6c0
// eh: try 0x5c5a8a4..0x5c5bfa0 -> pad 0x5c5c143 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c5c097..0x5c5c09c -> pad 0x5c5c0c8 cleanup
// eh: try 0x5c5c0cb..0x5c5c0d8 -> pad 0x5c5c1a8 catch (...) [compiler noexcept guard]
// eh: try 0x5c5c0f8..0x5c5c0fd -> pad 0x5c5c131 cleanup
// eh: try 0x5c5c134..0x5c5c141 -> pad 0x5c5c1a8 catch (...) [compiler noexcept guard]
// eh: try 0x5c5c15e..0x5c5c163 -> pad 0x5c5c190 cleanup
// eh: try 0x5c5c193..0x5c5c1a0 -> pad 0x5c5c1a8 catch (...) [compiler noexcept guard]
// asm: 77 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c5acf2: movss dword ptr [rsp + 0xa0], xmm1
// asm:   0x5c5ad5a: jmp 0x5c5ad7c
// asm:   0x5c5aef5: jmp 0x5c5af11
// asm:   0x5c5b059: jmp 0x5c5ae40
// asm:   0x5c5b18d: nop dword ptr [rax]
// asm:   0x5c5b51f: nop 
// asm:   0x5c5bf0f: movss dword ptr [rsp + 0x20], xmm1
// asm:   0x5c5bf77: jmp 0x5c5bf9b
// asm:   0x5c5c078: jmp 0x5c5c07c
// asm:   0x5c5c07a: jmp 0x5c5c0dd
// asm:   0x5c5c07c: mov r15, rax
// asm:   0x5c5c07f: cmp edx, 1
// asm:   0x5c5c082: jne 0x5c5c0cb
// asm:   0x5c5c084: mov rdi, r15
// asm:   0x5c5c087: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c5c08c: mov rbx, qword ptr [rax]
// asm:   0x5c5c08f: mov qword ptr [rsp + 0xb0], rbx
// asm:   0x5c5c097: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c5c09c: lea rax, [rip + 0x1632d55]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x5c5c0a3: mov rsi, qword ptr [rax]
// asm:   0x5c5c0a6: lea rdi, [rsp + 0xd0]
// asm:   0x5c5c0ae: call 0x4d66410  ; System_Collections_Generic_List_Enumerator_Vector3___Dispose()
// asm:   0x5c5c0b3: test rbx, rbx
// asm:   0x5c5c0b6: mov r13, qword ptr [rsp + 0x50]
// asm:   0x5c5c0bb: mov rbp, qword ptr [rsp + 0x78]
// asm:   0x5c5c0c0: je 0x5c5c001
// asm:   0x5c5c0c6: jmp 0x5c5c129
// asm:   0x5c5c0c8: mov r15, rax
// asm:   0x5c5c0cb: lea rdi, [rsp + 0xb0]
// asm:   0x5c5c0d3: call 0x2fd9b70  ; il2cpp_runtime_helper_02fd9b70()
// asm:   0x5c5c0d8: jmp 0x5c5c1a0
// asm:   0x5c5c0dd: mov r15, rax
// asm:   0x5c5c0e0: cmp edx, 1
// asm:   0x5c5c0e3: jne 0x5c5c134
// asm:   0x5c5c0e5: mov rdi, r15
// asm:   0x5c5c0e8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c5c0ed: mov rbx, qword ptr [rax]
// asm:   0x5c5c0f0: mov qword ptr [rsp + 0xb0], rbx
// asm:   0x5c5c0f8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c5c0fd: lea rax, [rip + 0x1632cf4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x5c5c104: mov rsi, qword ptr [rax]
// asm:   0x5c5c107: lea rdi, [rsp + 0xd0]
// asm:   0x5c5c10f: call 0x4d66410  ; System_Collections_Generic_List_Enumerator_Vector3___Dispose()
// asm:   0x5c5c114: test rbx, rbx
// asm:   0x5c5c117: mov r15, qword ptr [rsp + 0x78]
// asm:   0x5c5c11c: lea r12, [rip + 0x161e9f5]  ; TypeInfo_System_Math
// asm:   0x5c5c123: je 0x5c5ade2
// asm:   0x5c5c129: mov rdi, rbx
// asm:   0x5c5c12c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c5c131: mov r15, rax
// asm:   0x5c5c134: lea rdi, [rsp + 0xb0]
// asm:   0x5c5c13c: call 0x2fd9b40  ; il2cpp_runtime_helper_02fd9b40()
// asm:   0x5c5c141: jmp 0x5c5c1a0
// asm:   0x5c5c143: mov r15, rax
// asm:   0x5c5c146: cmp edx, 1
// asm:   0x5c5c149: jne 0x5c5c193
// asm:   0x5c5c14b: mov rdi, r15
// asm:   0x5c5c14e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c5c153: mov r15, qword ptr [rax]
// asm:   0x5c5c156: mov qword ptr [rsp + 0xb0], r15
// asm:   0x5c5c15e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c5c163: lea rax, [rip + 0x1632c8e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose
// asm:   0x5c5c16a: mov rsi, qword ptr [rax]
// asm:   0x5c5c16d: lea rdi, [rsp + 0xd0]
// asm:   0x5c5c175: call 0x4d66410  ; System_Collections_Generic_List_Enumerator_Vector3___Dispose()
// asm:   0x5c5c17a: test r15, r15
// asm:   0x5c5c17d: mov rbx, qword ptr [rsp + 0x50]
// asm:   0x5c5c182: je 0x5c5a8fb
// asm:   0x5c5c188: mov rdi, r15
// asm:   0x5c5c18b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c5c190: mov r15, rax
// asm:   0x5c5c193: lea rdi, [rsp + 0xb0]
// asm:   0x5c5c19b: call 0x2fd9b10  ; il2cpp_runtime_helper_02fd9b10()
// asm:   0x5c5c1a0: mov rdi, r15
// asm:   0x5c5c1a3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c5c1a8: mov rdi, rax
// asm:   0x5c5c1ab: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanLimbMesh_CutMeshData__AddCap
               (Characters_TitanLimbMesh_CutMeshData_o *__this,System_Collections_Generic_List_Vector3__o *rim
               ,Characters_TitanLimbMesh_CutPlane_o *wrist,MethodInfo *method)

{
  int iVar1;
  Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_Fields *pCVar2;
  int32_t *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined8 uVar21;
  undefined4 uVar36;
  uint32_t uVar37;
  UnityEngine_Vector3_array *pUVar38;
  System_Collections_Generic_List_Vector3__o *pSVar39;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Color_o color_07;
  UnityEngine_Color_o color_08;
  System_Nullable_Vector3__o d;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  long lVar43;
  MethodInfo *pMVar44;
  bool bVar45;
  Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar46;
  System_Comparison_T__o *comparison;
  System_Collections_Generic_List_Vector3__o *__this_01;
  Il2CppObject *pIVar47;
  ulong uVar48;
  MethodInfo *pMVar49;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  int index;
  ulong uVar50;
  int iVar51;
  uint uVar52;
  UnityEngine_Vector3_StaticFields *pUVar53;
  UnityEngine_Vector3_Fields *pUVar54;
  long lVar55;
  UnityEngine_Vector3_Fields *pUVar56;
  int iVar57;
  undefined1 auVar61 [12];
  undefined1 auVar62 [12];
  undefined4 extraout_XMM0_Dc_00;
  undefined1 auVar63 [12];
  float fVar59;
  undefined1 auVar64 [12];
  float fVar58;
  undefined1 auVar65 [16];
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar66 [16];
  undefined8 uVar60;
  undefined1 auVar67 [16];
  undefined1 extraout_var [12];
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar73 [16];
  undefined1 auVar75 [16];
  undefined1 auVar74 [16];
  undefined4 extraout_XMM0_Dd_00;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined1 auVar82 [12];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  UnityEngine_Vector3_o UVar90;
  UnityEngine_Vector3_o UVar91;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o a;
  UnityEngine_Vector3_o a_00;
  UnityEngine_Vector3_o a_01;
  UnityEngine_Vector3_o a_02;
  UnityEngine_Vector3_o b;
  UnityEngine_Vector3_o b_00;
  UnityEngine_Vector3_o b_01;
  UnityEngine_Vector3_o b_02;
  UnityEngine_Vector3_o b_03;
  UnityEngine_Vector3_o c;
  UnityEngine_Vector3_o c_00;
  UnityEngine_Vector3_o c_01;
  UnityEngine_Vector3_o c_02;
  UnityEngine_Vector3_o c_03;
  UnityEngine_Vector3_o c_04;
  UnityEngine_Vector3_o c_05;
  UnityEngine_Vector3_o c_06;
  UnityEngine_Vector3_o c_07;
  UnityEngine_Vector3_o c_08;
  float local_298;
  float fStack_294;
  float local_288;
  float fStack_284;
  undefined8 local_248;
  float local_218;
  float fStack_214;
  float local_208;
  undefined1 local_1f8 [8];
  System_Collections_Generic_List_Enumerator_T__o *pSStack_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 local_1d8 [8];
  System_Collections_Generic_List_Enumerator_T__o *pSStack_1d0;
  float local_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  MethodInfo *local_170;
  int32_t local_164;
  float local_160;
  float local_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_0754787b == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197570);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_TitanLimbMesh_CutMeshData_c__DisplayClass13_0_AddCap_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Characters_TitanLimbMesh_CutMeshData_c__DisplayClass13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_0754787b = '\x01';
  }
  local_1c8 = 0.0;
  fStack_1c4 = 0.0;
  uStack_1c0._0_4_ = 0.0;
  uStack_1c0._4_4_ = 0.0;
  local_1d8 = (undefined1  [8])0x0;
  pSStack_1d0 = (System_Collections_Generic_List_Enumerator_T__o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CutMeshData_c__DisplayClass13_0);
  Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0___ctor(__this_00,(MethodInfo *)0x0);
  if (rim == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c5c055;
  if ((rim->fields)._size < 3) {
    return;
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  if (__this_00 == (Characters_TitanLimbMesh_CutMeshData___c__DisplayClass13_0_o *)0x0) goto label_05c5c055;
  pUVar53 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar76 = (pUVar53->zeroVector).fields.z;
  fVar58 = (pUVar53->zeroVector).fields.y;
  (__this_00->fields).center.fields.x = (pUVar53->zeroVector).fields.x;
  (__this_00->fields).center.fields.y = fVar58;
  (__this_00->fields).center.fields.z = fVar76;
  pUVar53 = (UnityEngine_Vector3_StaticFields *)local_1f8;
  System_Collections_Generic_List_Vector3___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)pUVar53,rim,
             (MethodInfo_3A00880 *)MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
  local_1c8 = local_1e8;
  fStack_1c4 = fStack_1e4;
  uStack_1c0._4_4_ = fStack_1dc;
  uStack_1c0._0_4_ = fStack_1e0;
  local_1d8 = local_1f8;
  pSStack_1d0 = pSStack_1f0;
  local_1f8 = (undefined1  [8])0x0;
  pSStack_1f0 = (System_Collections_Generic_List_Enumerator_T__o *)local_1d8;
  while (bVar45 = System_Collections_Generic_List_Enumerator_Vector3___MoveNext
                            ((System_Collections_Generic_List_Enumerator_T__o *)local_1d8,
                             (MethodInfo_4C66420 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext), bVar45)
  {
    uVar4 = (__this_00->fields).center.fields.x;
    uVar22 = (__this_00->fields).center.fields.y;
    fVar76 = (__this_00->fields).center.fields.z;
    (__this_00->fields).center.fields.x = (float)uVar4 + local_1c8;
    (__this_00->fields).center.fields.y = (float)uVar22 + fStack_1c4;
    (__this_00->fields).center.fields.z = (float)uStack_1c0 + fVar76;
  }
  System_Collections_Generic_List_Enumerator_Vector3___Dispose
            ((System_Collections_Generic_List_Enumerator_T__o *)local_1d8,
             (MethodInfo_4C66410 *)MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
  uVar5 = (__this_00->fields).center.fields.x;
  uVar23 = (__this_00->fields).center.fields.y;
  auVar65._4_4_ = uVar23;
  auVar65._0_4_ = uVar5;
  auVar65._8_8_ = 0;
  fVar76 = (__this_00->fields).center.fields.z;
  fVar79 = 0.0;
  uVar80 = 0;
  uVar81 = 0;
  auVar83._0_4_ = (float)(rim->fields)._size;
  auVar83._4_4_ = auVar83._0_4_;
  auVar83._8_8_ = 0;
  auVar65 = divps(auVar65,auVar83);
  (__this_00->fields).center.fields.x = (float)auVar65._0_4_;
  (__this_00->fields).center.fields.y = (float)auVar65._4_4_;
  (__this_00->fields).center.fields.z = fVar76 / auVar83._0_4_;
  UVar90 = System_Collections_Generic_List_Vector3___get_Item
                     (rim,0,(MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item)
  ;
  pCVar2 = &__this_00->fields;
  fVar58 = (pCVar2->center).fields.x;
  fVar77 = (__this_00->fields).center.fields.y;
  uVar41 = (pCVar2->center).fields.x;
  uVar42 = (pCVar2->center).fields.y;
  fVar76 = UVar90.fields.z - (__this_00->fields).center.fields.z;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_1f8 = (undefined1  [8])0x0;
    fVar58 = (float)uVar41;
    fVar77 = (float)uVar42;
  }
  else {
    local_1f8 = (undefined1  [8])0x0;
  }
  local_1f8 = (undefined1  [8])0x0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_1f8 = (undefined1  [8])0x0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  auVar84._0_4_ = UVar90.fields.x - fVar58;
  auVar84._4_4_ = UVar90.fields.y - fVar77;
  auVar84._8_4_ = extraout_XMM0_Dc - 0.0;
  auVar84._12_4_ = extraout_XMM0_Dd - 0.0;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  auVar66._4_4_ = fVar79;
  auVar66._0_4_ = fVar76;
  auVar66._8_4_ = uVar80;
  auVar66._12_4_ = uVar81;
  auVar67._4_12_ = auVar66._4_12_;
  fVar58 = fVar76 * fVar76 + auVar84._4_4_ * auVar84._4_4_ + auVar84._0_4_ * auVar84._0_4_;
  if (fVar58 < 0.0) {
    auVar68._0_4_ = sqrtf(fVar58);
    auVar68._4_12_ = extraout_var;
    uVar60 = auVar68._0_8_;
    if (auVar68._0_4_ <= 1e-05) goto label_05c5a9d4;
label_05c5aa03:
    auVar69._0_4_ = (float)uVar60;
    fVar76 = fVar76 / auVar69._0_4_;
    uVar80 = (undefined4)((ulong)uVar60 >> 0x20);
    auVar70._8_4_ = uVar80;
    auVar70._0_8_ = uVar60;
    auVar70._12_4_ = uVar80;
    auVar69._8_8_ = auVar70._8_8_;
    auVar69._4_4_ = auVar69._0_4_;
    auVar65 = divps(auVar84,auVar69);
    local_1f8 = (undefined1  [8])auVar65._0_8_;
    pUVar46 = (UnityEngine_Vector3_StaticFields *)local_1f8;
  }
  else {
    auVar67._0_4_ = SQRT(fVar58);
    uVar60 = auVar67._0_8_;
    if (1e-05 < auVar67._0_4_) goto label_05c5aa03;
label_05c5a9d4:
    pUVar46 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar76 = (pUVar46->zeroVector).fields.z;
    fVar79 = 0.0;
  }
  fVar58 = (pUVar46->zeroVector).fields.x;
  fVar77 = (pUVar46->zeroVector).fields.y;
  uVar40 = (pUVar46->zeroVector).fields.x;
  (__this_00->fields).axisX.fields.x = fVar58;
  (__this_00->fields).axisX.fields.y = fVar77;
  (__this_00->fields).axisX.fields.z = fVar76;
  if (wrist == (Characters_TitanLimbMesh_CutPlane_o *)0x0) goto label_05c5c055;
  uVar6 = (wrist->fields).Normal.fields.x;
  uVar24 = (wrist->fields).Normal.fields.y;
  fVar78 = (wrist->fields).Normal.fields.z;
  fVar89 = (float)uVar24;
  fVar87 = 0.0;
  fVar88 = 0.0;
  fVar59 = fVar58;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    local_188 = (MethodInfo *)CONCAT44(fVar58,uVar24);
    uStack_180 = 0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    fVar89 = (float)local_188;
    fVar58 = local_188._4_4_;
    fVar87 = (float)uStack_180;
    fVar88 = uStack_180._4_4_;
    fVar59 = (float)uVar40;
  }
  local_1f8 = (undefined1  [8])0x0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  auVar85._0_4_ = fVar76 * fVar89 - fVar77 * fVar78;
  auVar85._4_4_ = fVar78 * fVar58 - (float)uVar6 * fVar76;
  auVar85._8_4_ = fVar79 * fVar87 - 0.0;
  auVar85._12_4_ = fVar88 * 0.0 - fVar79 * 0.0;
  fVar76 = fVar77 * (float)uVar6 - (float)uVar24 * fVar59;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  auVar71._4_4_ = fVar77;
  auVar71._0_4_ = fVar76;
  auVar71._8_4_ = fVar77;
  auVar71._12_4_ = fVar77;
  auVar72._4_12_ = auVar71._4_12_;
  fVar58 = fVar76 * fVar76 + auVar85._4_4_ * auVar85._4_4_ + auVar85._0_4_ * auVar85._0_4_;
  if (fVar58 < 0.0) {
    auVar73._0_4_ = sqrtf(fVar58);
    auVar73._4_12_ = extraout_var_00;
    uVar60 = auVar73._0_8_;
    if (auVar73._0_4_ <= 1e-05) goto label_05c5abc8;
label_05c5abff:
    auVar74._0_4_ = (float)uVar60;
    fVar76 = fVar76 / auVar74._0_4_;
    uVar80 = (undefined4)((ulong)uVar60 >> 0x20);
    auVar75._8_4_ = uVar80;
    auVar75._0_8_ = uVar60;
    auVar75._12_4_ = uVar80;
    auVar74._8_8_ = auVar75._8_8_;
    auVar74._4_4_ = auVar74._0_4_;
    auVar65 = divps(auVar85,auVar74);
    local_1f8 = (undefined1  [8])auVar65._0_8_;
  }
  else {
    auVar72._0_4_ = SQRT(fVar58);
    uVar60 = auVar72._0_8_;
    if (1e-05 < auVar72._0_4_) goto label_05c5abff;
label_05c5abc8:
    pUVar53 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar76 = (float)((System_Collections_Generic_List_Enumerator_T__Fields *)&pUVar53->zeroVector)->_index;
  }
  *(System_Collections_Generic_List_T__o **)&(__this_00->fields).axisY.fields =
       ((System_Collections_Generic_List_Enumerator_T__Fields *)&pUVar53->zeroVector)->_list;
  (__this_00->fields).axisY.fields.z = fVar76;
  comparison = (System_Comparison_T__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_Vector3);
  System_Comparison_Vector3____ctor
            ((System_Comparison_Vector3__o *)comparison,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_Characters_TitanLimbMesh_CutMeshData_c__DisplayClass13_0_AddCap_b__0,
             (MethodInfo_48E4ED0 *)0x0);
  System_Collections_Generic_List_Vector3___Sort_3a01d60
            (rim,comparison,(MethodInfo_3A01D60 *)MethodInfo_System_Collections_Generic_List_Vector3_Sort);
  System_Collections_Generic_List_Vector3___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_1f8,rim,
             (MethodInfo_3A00880 *)MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
  local_1c8 = local_1e8;
  fStack_1c4 = fStack_1e4;
  uStack_1c0._4_4_ = fStack_1dc;
  uStack_1c0._0_4_ = fStack_1e0;
  local_1d8 = local_1f8;
  pSStack_1d0 = pSStack_1f0;
  local_1f8 = (undefined1  [8])0x0;
  local_208 = 0.0;
  pSStack_1f0 = (System_Collections_Generic_List_Enumerator_T__o *)local_1d8;
  while( true ) {
    bVar45 = System_Collections_Generic_List_Enumerator_Vector3___MoveNext
                       ((System_Collections_Generic_List_Enumerator_T__o *)local_1d8,
                        (MethodInfo_4C66420 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext);
    fVar58 = fStack_1c4;
    fVar76 = local_1c8;
    if (!bVar45) break;
    uVar7 = (__this_00->fields).center.fields.x;
    uVar25 = (__this_00->fields).center.fields.y;
    fVar79 = (float)uStack_1c0;
    fVar77 = (__this_00->fields).center.fields.z;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar37 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar37 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar37 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar79 = fVar79 - fVar77;
    fVar76 = (fVar58 - (float)uVar25) * (fVar58 - (float)uVar25) +
             (fVar76 - (float)uVar7) * (fVar76 - (float)uVar7) + fVar79 * fVar79;
    if (fVar76 < 0.0) {
      fVar76 = sqrtf(fVar76);
    }
    else {
      fVar76 = SQRT(fVar76);
    }
    if (local_208 <= fVar76) {
      local_208 = fVar76;
    }
  }
  System_Collections_Generic_List_Enumerator_Vector3___Dispose
            ((System_Collections_Generic_List_Enumerator_T__o *)local_1d8,
             (MethodInfo_4C66410 *)MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
  iVar51 = (rim->fields)._size;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor_39ff040
            (__this_01,iVar51 * 2,
             (MethodInfo_39FF040 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197570);
  iVar51 = (rim->fields)._size;
  if (iVar51 < 1) {
    if (__this_01 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c5c055;
  }
  else {
    index = 0;
    do {
      iVar1 = index + 1;
      UVar90 = System_Collections_Generic_List_Vector3___get_Item
                         (rim,iVar1 % iVar51,
                          (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      UVar91 = System_Collections_Generic_List_Vector3___get_Item
                         (rim,index,
                          (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (Il2CppMethodInitialized_0753e7b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7b7 = '\x01';
        uVar37 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar37 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar37 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar77 = UVar91.fields.z - UVar90.fields.z;
      local_288 = UVar90.fields.x;
      fStack_284 = UVar90.fields.y;
      fVar76 = UVar91.fields.x - local_288;
      fVar58 = UVar91.fields.y - fStack_284;
      fVar76 = fVar77 * fVar77 + fVar58 * fVar58 + fVar76 * fVar76;
      if (fVar76 < 0.0) {
        fVar76 = sqrtf(fVar76);
      }
      else {
        fVar76 = SQRT(fVar76);
      }
      if (Il2CppMethodInitialized_0753e7f9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7f9 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar76 = ceilf(fVar76 / (local_208 * 0.32));
      iVar51 = (int)fVar76;
      if (iVar51 < 2) {
        iVar51 = 1;
      }
      if (__this_01 == (System_Collections_Generic_List_Vector3__o *)0x0) {
        System_Collections_Generic_List_Vector3___get_Item
                  (rim,0,(MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
        ThrowNullReferenceException();
      }
      iVar57 = 0;
      do {
        while( true ) {
          UVar91 = System_Collections_Generic_List_Vector3___get_Item
                             (rim,index,
                              (MethodInfo_39FF5D0 *)
                              MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
          pMVar49 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar3 = &(__this_01->fields)._version;
          *piVar3 = *piVar3 + 1;
          pUVar38 = (__this_01->fields)._items;
          if (pUVar38 == (UnityEngine_Vector3_array *)0x0) goto label_05c5c055;
          fVar76 = (float)iVar57 / (float)iVar51;
          auVar82 = ZEXT812(0x3f800000);
          if (fVar76 <= auVar82._0_4_) {
            auVar82._4_8_ = auVar82._4_8_;
            auVar82._0_4_ = fVar76;
          }
          fVar76 = (float)(-(uint)(0.0 <= fVar76) & auVar82._0_4_);
          fVar58 = fVar76 * (local_288 - UVar91.fields.x) + UVar91.fields.x;
          fVar77 = fVar76 * (fStack_284 - UVar91.fields.y) + UVar91.fields.y;
          fVar76 = (UVar90.fields.z - UVar91.fields.z) * fVar76 + UVar91.fields.z;
          uVar52 = (__this_01->fields)._size;
          if ((uint)pUVar38->max_length <= uVar52) break;
          (__this_01->fields)._size = uVar52 + 1;
          pUVar38->m_Items[(int)uVar52].fields.x = fVar58;
          pUVar38->m_Items[(int)uVar52].fields.y = fVar77;
          pUVar38->m_Items[(int)uVar52].fields.z = fVar76;
          iVar57 = iVar57 + 1;
          if (iVar51 == iVar57) goto label_05c5ae40;
        }
        UVar91.fields.z = fVar76;
        UVar91.fields.x = fVar58;
        UVar91.fields.y = fVar77;
        System_Collections_Generic_List_Vector3___AddWithResize
                  (__this_01,UVar91,(MethodInfo_39FF950 *)pMVar49->klass->rgctx_data[0xe].method);
        iVar57 = iVar57 + 1;
      } while (iVar51 != iVar57);
label_05c5ae40:
      iVar51 = (rim->fields)._size;
      index = iVar1;
    } while (iVar1 < iVar51);
  }
  local_188 = (MethodInfo *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,(__this_01->fields)._size);
  pIVar47 = SZArrayNew(TypeInfo_UnityEngine_Vector3_array,(__this_01->fields)._size);
  local_170 = (MethodInfo *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,(__this_01->fields)._size);
  uVar52 = (__this_01->fields)._size;
  uVar48 = (ulong)uVar52;
  pMVar49 = extraout_RDX;
  if (0 < (int)uVar52) {
    lVar55 = 0x28;
    uVar50 = 0;
    do {
      iVar51 = (int)uVar50;
      fVar76 = sinf((float)iVar51 * 12.9898 + 4.1414);
      fVar58 = floorf(fVar76 * 43758.547);
      UVar90 = System_Collections_Generic_List_Vector3___get_Item
                         (__this_01,iVar51,
                          (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      fVar58 = fVar76 * 43758.547 - fVar58;
      auVar61 = ZEXT812(0x3f800000);
      if (fVar58 <= auVar61._0_4_) {
        auVar61._4_8_ = auVar61._4_8_;
        auVar61._0_4_ = fVar58;
      }
      fVar58 = (float)(-(uint)(0.0 <= fVar58) & auVar61._0_4_);
      fVar76 = fVar58 * 0.05 + 0.87;
      if (local_188 == (MethodInfo *)0x0) goto label_05c5c055;
      if (*(uint *)&local_188->name <= uVar50) goto label_05c5c05a;
      uVar8 = (__this_00->fields).center.fields.x;
      uVar26 = (__this_00->fields).center.fields.y;
      fVar77 = (__this_00->fields).center.fields.z;
      fVar87 = UVar90.fields.x - (float)uVar8;
      fVar88 = UVar90.fields.y - (float)uVar26;
      fVar78 = UVar90.fields.z - fVar77;
      uVar9 = (wrist->fields).Normal.fields.x;
      uVar27 = (wrist->fields).Normal.fields.y;
      fVar89 = (fVar58 * 0.07 + 0.025) * local_208;
      fVar79 = (wrist->fields).Normal.fields.z;
      *(ulong *)((long)local_188 + lVar55 + -8) =
           CONCAT44((fVar76 * fVar88 + (float)uVar26) - fVar89 * (float)uVar27,
                    (fVar76 * fVar87 + (float)uVar8) - fVar89 * (float)uVar9);
      *(float *)((long)&local_188->methodPointer + lVar55) = (fVar78 * fVar76 + fVar77) - fVar79 * fVar89;
      uVar10 = (__this_00->fields).center.fields.x;
      uVar28 = (__this_00->fields).center.fields.y;
      local_198._4_4_ = uVar28;
      local_198._0_4_ = uVar10;
      local_198._8_8_ = 0;
      fVar89 = fVar58 * 0.12 + 0.54;
      local_1b8 = CONCAT44(local_1b8._4_4_,fVar78 * fVar89 + (__this_00->fields).center.fields.z);
      local_1a8 = (wrist->fields).Normal.fields.x;
      fStack_1a4 = (wrist->fields).Normal.fields.y;
      uStack_1a0._0_4_ = 0.0;
      uStack_1a0._4_4_ = 0.0;
      fVar76 = (wrist->fields).Normal.fields.z;
      fVar77 = sinf((float)(iVar51 + 0x11) * 12.9898 + 4.1414);
      fVar79 = floorf(fVar77 * 43758.547);
      fVar79 = fVar77 * 43758.547 - fVar79;
      auVar62 = ZEXT812(0x3f800000);
      if (fVar79 <= auVar62._0_4_) {
        auVar62._4_8_ = auVar62._4_8_;
        auVar62._0_4_ = fVar79;
      }
      if (pIVar47 == (Il2CppObject *)0x0) goto label_05c5c055;
      if (*(uint *)&pIVar47[1].monitor <= uVar50) goto label_05c5c05a;
      fVar77 = (float)(~-(uint)(0.0 <= fVar79) & 0x3e19999a |
                      (uint)(auVar62._0_4_ * 0.13 + 0.15) & -(uint)(0.0 <= fVar79)) * local_208;
      *(ulong *)((long)pIVar47 + lVar55 + -8) =
           CONCAT44((fVar89 * fVar88 + (float)local_198._4_4_) - fStack_1a4 * fVar77,
                    (fVar89 * fVar87 + (float)local_198._0_4_) - local_1a8 * fVar77);
      *(float *)((long)&pIVar47->klass + lVar55) = (float)local_1b8 - fVar76 * fVar77;
      if (local_170 == (MethodInfo *)0x0) goto label_05c5c055;
      if (*(uint *)&local_170->name <= uVar50) goto label_05c5c05a;
      uVar11 = (__this_00->fields).center.fields.x;
      uVar29 = (__this_00->fields).center.fields.y;
      fVar76 = (__this_00->fields).center.fields.z;
      uVar12 = (wrist->fields).Normal.fields.x;
      uVar30 = (wrist->fields).Normal.fields.y;
      fVar77 = (fVar58 * 0.05 + 0.39) * local_208;
      fVar58 = (wrist->fields).Normal.fields.z;
      *(ulong *)((long)local_170 + lVar55 + -8) =
           CONCAT44((fVar88 * 0.26 + (float)uVar29) - fVar77 * (float)uVar30,
                    (fVar87 * 0.26 + (float)uVar11) - fVar77 * (float)uVar12);
      *(float *)((long)&local_170->methodPointer + lVar55) = (fVar78 * 0.26 + fVar76) - fVar58 * fVar77;
      uVar50 = uVar50 + 1;
      uVar48 = (ulong)(__this_01->fields)._size;
      lVar55 = lVar55 + 0xc;
      pMVar49 = extraout_RDX_00;
    } while ((long)uVar50 < (long)uVar48);
  }
  pSVar39 = (__this->fields)._vertices;
  if (pSVar39 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    local_164 = (pSVar39->fields)._size;
    if (0 < (int)uVar48) {
      uVar13 = (__this_00->fields).center.fields.x;
      uVar31 = (__this_00->fields).center.fields.y;
      uVar14 = (wrist->fields).Normal.fields.x;
      uVar32 = (wrist->fields).Normal.fields.y;
      fVar76 = local_208 * 0.46;
      local_160 = (__this_00->fields).center.fields.z - (wrist->fields).Normal.fields.z * fVar76;
      local_128 = (float)uVar13 - fVar76 * (float)uVar14;
      fStack_124 = (float)uVar31 - fVar76 * (float)uVar32;
      fStack_120 = 0.0 - fVar76 * 0.0;
      fStack_11c = 0.0 - fVar76 * 0.0;
      local_108._0_4_ = SUB124(ZEXT812(0x3d99999a),0) * local_208;
      local_108._4_8_ = SUB128(ZEXT812(0x3d99999a),4);
      local_108._12_4_ = 0;
      lVar55 = 0x28;
      uVar50 = 0;
      local_118 = (float)local_108._0_4_;
      fStack_114 = (float)local_108._0_4_;
      fStack_110 = (float)local_108._0_4_;
      fStack_10c = (float)local_108._0_4_;
      do {
        local_130 = uVar50 + 1;
        uVar48 = (long)((ulong)(uint)((int)local_130 >> 0x1f) << 0x20 | local_130 & 0xffffffff) %
                 (long)(int)uVar48;
        fVar76 = sinf((float)((int)uVar50 + 7) * 12.9898 + 4.1414);
        fVar58 = floorf(fVar76 * 43758.547);
        UVar90 = System_Collections_Generic_List_Vector3___get_Item
                           (__this_01,(int)uVar50,
                            (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item)
        ;
        uVar52 = (uint)uVar48;
        UVar91 = System_Collections_Generic_List_Vector3___get_Item
                           (__this_01,uVar52,
                            (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item)
        ;
        auVar86._8_4_ = extraout_XMM0_Dc_00;
        auVar86._0_8_ = UVar91.fields._0_8_;
        auVar86._12_4_ = extraout_XMM0_Dd_00;
        fVar58 = fVar76 * 43758.547 - fVar58;
        auVar63 = ZEXT812(0x3f800000);
        if (fVar58 <= auVar63._0_4_) {
          auVar63._4_8_ = auVar63._4_8_;
          auVar63._0_4_ = fVar58;
        }
        fVar58 = (float)(-(uint)(0.0 <= fVar58) & auVar63._0_4_);
        fVar76 = 0.0;
        if (0.0 <= fVar58) {
          fVar76 = fVar58;
        }
        fVar58 = fVar76 * 0.32000002 + 0.34;
        fVar77 = fVar76 * 0.08499999 + 0.035;
        fVar79 = fVar76 * 0.065 + 0.035;
        fVar78 = fVar76 * 0.13 + 0.65;
        if (local_188 == (MethodInfo *)0x0) goto label_05c5c055;
        if (((uint)local_188->name <= uVar52) ||
           (local_198 = auVar86, ((ulong)local_188->name & 0xffffffff) <= uVar50)) {
label_05c5c05a:
          ThrowIndexOutOfRangeException();
        }
        fStack_1a4 = fVar78;
        local_1a8 = fVar79;
        uStack_1a0._0_4_ = 0.0;
        uStack_1a0._4_4_ = 0.0;
        uVar48 = uVar48 & 0xffffffff;
        local_1b8 = uVar48 * 3;
        pUVar54 = (UnityEngine_Vector3_Fields *)((long)&local_188->klass + uVar48 * 0xc);
        local_158 = pUVar54->z;
        local_148._0_4_ = pUVar54->x;
        local_148._4_4_ = pUVar54->y;
        uStack_140 = 0;
        local_1f8 = (undefined1  [8])0x0;
        pSStack_1f0 = (System_Collections_Generic_List_Enumerator_T__o *)0x0;
        value.fields.z = *(float *)((long)&local_188->methodPointer + lVar55);
        value.fields._0_8_ = *(undefined8 *)((long)local_188 + lVar55 + -8);
        pMVar49 = local_188;
        System_Nullable_Vector3____ctor
                  ((System_Nullable_Vector3__o *)local_1f8,value,
                   (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
        uVar60 = _local_1a8;
        d.fields.value.fields._4_8_ = pSStack_1f0;
        d.fields.hasValue = (bool)local_1f8[0];
        d.fields._1_3_ = local_1f8._1_3_;
        d.fields.value.fields.x = (float)local_1f8._4_4_;
        local_1a8 = fVar58;
        fStack_1a4 = fVar77;
        uVar19 = _local_1a8;
        local_1a8 = (float)uVar60;
        fStack_1a4 = SUB84(uVar60,4);
        uStack_1a0._0_4_ = local_1a8;
        uStack_1a0._4_4_ = fStack_1a4;
        local_40 = fVar58;
        fStack_3c = fVar77;
        local_1a8 = (float)uVar60;
        fStack_1a4 = SUB84(uVar60,4);
        fStack_38 = local_1a8;
        fStack_34 = fStack_1a4;
        local_1a8 = (float)uVar60;
        fStack_1a4 = SUB84(uVar60,4);
        color.fields.b = local_1a8;
        color.fields.a = fStack_1a4;
        color.fields.r = fVar58;
        color.fields.g = fVar77;
        b.fields.z = UVar91.fields.z;
        b.fields.x = (float)local_198._0_4_;
        b.fields.y = (float)local_198._4_4_;
        c.fields.z = local_158;
        c.fields.x = (float)(undefined4)local_148;
        c.fields.y = (float)local_148._4_4_;
        _local_1a8 = uVar19;
        Characters_TitanLimbMesh_CutMeshData__AddWoundFace(__this,UVar90,b,c,d,wrist,color,pMVar49);
        local_198._0_8_ = uVar50;
        if ((*(uint *)&local_188->name <= uVar50) || (*(uint *)&local_188->name <= uVar52)) goto label_05c5c05a;
        if (pIVar47 == (Il2CppObject *)0x0) goto label_05c5c055;
        if ((*(uint *)&pIVar47[1].monitor <= uVar50) || (*(uint *)&pIVar47[1].monitor <= uVar52))
        goto label_05c5c05a;
        uVar60 = *(undefined8 *)((long)local_188 + lVar55 + -8);
        fVar89 = *(float *)((long)&local_188->methodPointer + lVar55);
        uVar15 = pUVar54->x;
        uVar33 = pUVar54->y;
        uVar19 = *(undefined8 *)((long)pIVar47 + lVar55 + -8);
        uVar20 = *(undefined8 *)((long)&pIVar47[2].klass + local_1b8 * 4);
        uVar16 = (wrist->fields).Normal.fields.x;
        uVar34 = (wrist->fields).Normal.fields.y;
        c_00.fields.z =
             (wrist->fields).Normal.fields.z * (float)local_108._0_4_ +
             (fVar89 + pUVar54->z + *(float *)((long)&pIVar47->klass + lVar55) +
             *(float *)((long)&pIVar47[2].monitor + local_1b8 * 4)) * 0.25;
        fVar87 = ((float)uVar20 + (float)uVar19 + (float)uVar60 + (float)uVar15) * 0.25 +
                 (float)uVar16 * local_118;
        fVar88 = ((float)((ulong)uVar20 >> 0x20) +
                 (float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar60 >> 0x20) + (float)uVar33) * 0.25 +
                 (float)uVar34 * fStack_114;
        local_50 = local_1a8;
        fStack_4c = fStack_1a4;
        fStack_48 = (float)uStack_1a0;
        fStack_44 = uStack_1a0._4_4_;
        color_00.fields.b = (float)uStack_1a0;
        color_00.fields.a = uStack_1a0._4_4_;
        color_00.fields.r = local_1a8;
        color_00.fields.g = fStack_1a4;
        UVar90.fields.z = fVar89;
        UVar90.fields.x = (float)(int)uVar60;
        UVar90.fields.y = (float)(int)((ulong)uVar60 >> 0x20);
        c_00.fields.y = fVar88;
        c_00.fields.x = fVar87;
        pMVar49 = local_188;
        Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                  (__this,UVar90,(UnityEngine_Vector3_o)*pUVar54,c_00,(System_Nullable_Vector3__o)ZEXT816(0),
                   wrist,color_00,local_188);
        lVar43 = local_1b8;
        if ((*(uint *)&local_188->name <= uVar52) || (*(uint *)&pIVar47[1].monitor <= uVar52))
        goto label_05c5c05a;
        pUVar56 = (UnityEngine_Vector3_Fields *)((long)&pIVar47[2].klass + local_1b8 * 4);
        local_60 = fVar58 * 0.85;
        fStack_5c = fVar77 * 0.8;
        fStack_58 = fVar79 * 0.8;
        color_01.fields.g = fStack_5c;
        color_01.fields.r = local_60;
        color_01.fields.a = fVar78;
        color_01.fields.b = fStack_58;
        c_01.fields.z = c_00.fields.z;
        c_01.fields.x = fVar87;
        c_01.fields.y = fVar88;
        fStack_54 = fVar78;
        Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                  (__this,(UnityEngine_Vector3_o)*pUVar54,(UnityEngine_Vector3_o)*pUVar56,c_01,
                   (System_Nullable_Vector3__o)ZEXT816(0),wrist,color_01,pMVar49);
        auVar65 = local_198;
        if ((uint)pIVar47[1].monitor <= uVar52) goto label_05c5c05a;
        uVar60 = local_198._0_8_;
        if (((ulong)pIVar47[1].monitor & 0xffffffff) <= (ulong)local_198._0_8_) goto label_05c5c05a;
        local_70 = local_1a8;
        fStack_6c = fStack_1a4;
        fStack_68 = (float)uStack_1a0;
        fStack_64 = uStack_1a0._4_4_;
        color_02.fields.b = (float)uStack_1a0;
        color_02.fields.a = uStack_1a0._4_4_;
        color_02.fields.r = local_1a8;
        color_02.fields.g = fStack_1a4;
        b_00.fields.z = *(float *)((long)&pIVar47->klass + lVar55);
        b_00.fields._0_8_ = *(undefined8 *)((long)pIVar47 + lVar55 + -8);
        c_02.fields.z = c_00.fields.z;
        c_02.fields.x = fVar87;
        c_02.fields.y = fVar88;
        Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                  (__this,(UnityEngine_Vector3_o)*pUVar56,b_00,c_02,(System_Nullable_Vector3__o)ZEXT816(0),
                   wrist,color_02,pMVar49);
        if (((ulong)*(uint *)&pIVar47[1].monitor <= (ulong)uVar60) ||
           ((ulong)*(uint *)&local_188->name <= (ulong)uVar60)) goto label_05c5c05a;
        fVar89 = fVar58 * 0.7;
        local_148 = CONCAT44(fVar77,fVar89);
        uStack_140 = CONCAT44(fVar76 * 0.0 + 0.0,fVar76 * 0.0 + 0.0);
        local_80 = CONCAT44(fVar77 * 0.65,fVar89);
        uStack_78 = CONCAT44(fVar78,fVar79 * 0.65);
        color_03.fields.b = fVar79 * 0.65;
        color_03.fields.a = fVar78;
        color_03.fields.r = fVar89;
        color_03.fields.g = fVar77 * 0.65;
        a.fields.z = *(float *)((long)&pIVar47->klass + lVar55);
        a.fields._0_8_ = *(undefined8 *)((long)pIVar47 + lVar55 + -8);
        b_01.fields.z = *(float *)((long)&local_188->methodPointer + lVar55);
        b_01.fields._0_8_ = *(undefined8 *)((long)local_188 + lVar55 + -8);
        c_03.fields.z = c_00.fields.z;
        c_03.fields.x = fVar87;
        c_03.fields.y = fVar88;
        local_158 = fVar77;
        fStack_154 = fVar77;
        fStack_150 = fVar77;
        fStack_14c = fVar77;
        Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                  (__this,a,b_01,c_03,(System_Nullable_Vector3__o)ZEXT816(0),wrist,color_03,local_188);
        if (((ulong)*(uint *)&pIVar47[1].monitor <= (ulong)uVar60) || (*(uint *)&pIVar47[1].monitor <= uVar52)
           ) goto label_05c5c05a;
        if (local_170 == (MethodInfo *)0x0) goto label_05c5c055;
        if (((ulong)*(uint *)&local_170->name <= (ulong)uVar60) || (*(uint *)&local_170->name <= uVar52))
        goto label_05c5c05a;
        fVar76 = *(float *)((long)&pIVar47->klass + lVar55);
        uVar19 = *(undefined8 *)((long)pIVar47 + lVar55 + -8);
        uVar17 = pUVar56->x;
        uVar35 = pUVar56->y;
        fVar89 = *(float *)((long)&pIVar47[2].monitor + lVar43 * 4);
        fVar87 = *(float *)((long)&local_170->methodPointer + lVar55);
        uVar20 = *(undefined8 *)((long)local_170 + lVar55 + -8);
        uVar21 = *(undefined8 *)((long)&local_170->klass + local_1b8 * 4);
        fVar88 = *(float *)((long)&local_170->return_type + local_1b8 * 4);
        local_f8._0_4_ = (wrist->fields).Normal.fields.x;
        local_f8._4_4_ = (wrist->fields).Normal.fields.y;
        uStack_f0 = 0;
        local_15c = (wrist->fields).Normal.fields.z;
        pMVar49 = local_170;
        local_e8 = sinf((float)(auVar65._0_4_ + 0x1c) * 12.9898 + 4.1414);
        local_e8 = local_e8 * 43758.547;
        fVar59 = floorf(local_e8);
        fVar59 = local_e8 - fVar59;
        auVar64 = ZEXT812(0x3f800000);
        if (fVar59 <= auVar64._0_4_) {
          auVar64._4_8_ = auVar64._4_8_;
          auVar64._0_4_ = fVar59;
        }
        if (((ulong)*(uint *)&pIVar47[1].monitor <= (ulong)uVar60) || (*(uint *)&pIVar47[1].monitor <= uVar52)
           ) goto label_05c5c05a;
        fVar59 = (float)(~-(uint)(0.0 <= fVar59) & 0x3d0f5c29 |
                        (uint)(auVar64._0_4_ * 0.07 + 0.035) & -(uint)(0.0 <= fVar59)) * local_208;
        c_04.fields.z = (fVar76 + fVar89 + fVar87 + fVar88) * 0.25 + local_15c * fVar59;
        fVar76 = ((float)uVar21 + (float)uVar20 + (float)uVar17 + (float)uVar19) * 0.25 +
                 (float)local_f8 * fVar59;
        fVar89 = ((float)((ulong)uVar21 >> 0x20) +
                 (float)((ulong)uVar20 >> 0x20) + (float)uVar35 + (float)((ulong)uVar19 >> 0x20)) * 0.25 +
                 local_f8._4_4_ * fVar59;
        local_90 = local_1a8;
        fStack_8c = fStack_1a4;
        fStack_88 = (float)uStack_1a0;
        fStack_84 = uStack_1a0._4_4_;
        color_04.fields.b = (float)uStack_1a0;
        color_04.fields.a = uStack_1a0._4_4_;
        color_04.fields.r = local_1a8;
        color_04.fields.g = fStack_1a4;
        a_00.fields.z = *(float *)((long)&pIVar47->klass + lVar55);
        a_00.fields._0_8_ = *(undefined8 *)((long)pIVar47 + lVar55 + -8);
        c_04.fields.y = fVar89;
        c_04.fields.x = fVar76;
        Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                  (__this,a_00,(UnityEngine_Vector3_o)*pUVar56,c_04,(System_Nullable_Vector3__o)ZEXT816(0),
                   wrist,color_04,pMVar49);
        pMVar44 = local_170;
        if ((*(uint *)&pIVar47[1].monitor <= uVar52) || (*(uint *)&local_170->name <= uVar52))
        goto label_05c5c05a;
        pUVar54 = (UnityEngine_Vector3_Fields *)((long)&local_170->klass + local_1b8 * 4);
        local_158 = local_158 * 0.6;
        local_a0 = (undefined4)local_148;
        fStack_98 = fVar79 * 0.6;
        local_1b8 = CONCAT44(fVar78,fStack_98);
        fStack_1b0 = 0.0;
        fStack_1ac = 0.0;
        color_05.fields.g = local_158;
        color_05.fields.r = (float)local_a0;
        color_05.fields.a = fVar78;
        color_05.fields.b = fStack_98;
        c_05.fields.z = c_04.fields.z;
        c_05.fields.x = fVar76;
        c_05.fields.y = fVar89;
        fStack_9c = local_158;
        fStack_94 = fVar78;
        Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                  (__this,(UnityEngine_Vector3_o)*pUVar56,(UnityEngine_Vector3_o)*pUVar54,c_05,
                   (System_Nullable_Vector3__o)ZEXT816(0),wrist,color_05,pMVar49);
        if ((uint)pMVar44->name <= uVar52) goto label_05c5c05a;
        uVar60 = local_198._0_8_;
        if (((ulong)pMVar44->name & 0xffffffff) <= (ulong)local_198._0_8_) goto label_05c5c05a;
        local_b0 = fVar58 * 0.8;
        fStack_ac = fVar77 * 0.7;
        fStack_a8 = fVar79 * 0.7;
        color_06.fields.g = fStack_ac;
        color_06.fields.r = local_b0;
        color_06.fields.a = fVar78;
        color_06.fields.b = fStack_a8;
        b_02.fields.z = *(float *)((long)&pMVar44->methodPointer + lVar55);
        b_02.fields._0_8_ = *(undefined8 *)((long)pMVar44 + lVar55 + -8);
        c_06.fields.z = c_04.fields.z;
        c_06.fields.x = fVar76;
        c_06.fields.y = fVar89;
        fStack_a4 = fVar78;
        Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                  (__this,(UnityEngine_Vector3_o)*pUVar54,b_02,c_06,(System_Nullable_Vector3__o)ZEXT816(0),
                   wrist,color_06,pMVar49);
        if (((ulong)*(uint *)&pMVar44->name <= (ulong)uVar60) ||
           ((ulong)*(uint *)&pIVar47[1].monitor <= (ulong)uVar60)) goto label_05c5c05a;
        local_c0 = fVar58 * 0.65;
        uStack_b8 = (undefined4)local_1b8;
        uStack_b4 = (undefined4)((ulong)local_1b8 >> 0x20);
        fStack_bc = local_158;
        color_07.fields.g = local_158;
        color_07.fields.r = local_c0;
        color_07.fields.b = (float)local_1b8;
        color_07.fields.a = local_1b8._4_4_;
        a_01.fields.z = *(float *)((long)&pMVar44->methodPointer + lVar55);
        a_01.fields._0_8_ = *(undefined8 *)((long)pMVar44 + lVar55 + -8);
        b_03.fields.z = *(float *)((long)&pIVar47->klass + lVar55);
        b_03.fields._0_8_ = *(undefined8 *)((long)pIVar47 + lVar55 + -8);
        c_07.fields.z = c_04.fields.z;
        c_07.fields.x = fVar76;
        c_07.fields.y = fVar89;
        Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                  (__this,a_01,b_03,c_07,(System_Nullable_Vector3__o)ZEXT816(0),wrist,color_07,pMVar49);
        if (((ulong)*(uint *)&pMVar44->name <= (ulong)uVar60) || (*(uint *)&pMVar44->name <= uVar52))
        goto label_05c5c05a;
        local_d8 = 0x3ca3d70a3e6b851f;
        uStack_d0 = 0x3f3333333ccccccd;
        c_08.fields.y = fStack_124;
        c_08.fields.x = local_128;
        color_08.fields.b = 0.025;
        color_08.fields.a = 0.7;
        color_08.fields.r = 0.23;
        color_08.fields.g = 0.02;
        a_02.fields.z = *(float *)((long)&pMVar44->methodPointer + lVar55);
        a_02.fields._0_8_ = *(undefined8 *)((long)pMVar44 + lVar55 + -8);
        c_08.fields.z = local_160;
        Characters_TitanLimbMesh_CutMeshData__AddWoundFace
                  (__this,a_02,(UnityEngine_Vector3_o)*pUVar54,c_08,(System_Nullable_Vector3__o)ZEXT816(0),
                   wrist,color_08,pMVar49);
        uVar48 = (ulong)(__this_01->fields)._size;
        lVar55 = lVar55 + 0xc;
        pMVar49 = extraout_RDX_01;
        uVar50 = local_130;
      } while ((long)local_130 < (long)uVar48);
    }
    Characters_TitanLimbMesh_CutMeshData__SmoothFleshNormals(__this,local_164,pMVar49);
    System_Collections_Generic_List_Vector3___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_1f8,__this_01,
               (MethodInfo_3A00880 *)MethodInfo_System_Collections_Generic_List_Vector3_GetEnumerator);
    local_1c8 = local_1e8;
    fStack_1c4 = fStack_1e4;
    uStack_1c0 = (ulong)(uint)fStack_1e0;
    local_1d8 = local_1f8;
    pSStack_1d0 = pSStack_1f0;
    local_1f8 = (undefined1  [8])0x0;
    local_288 = local_208;
    pSStack_1f0 = (System_Collections_Generic_List_Enumerator_T__o *)local_1d8;
    while( true ) {
      bVar45 = System_Collections_Generic_List_Enumerator_Vector3___MoveNext
                         ((System_Collections_Generic_List_Enumerator_T__o *)local_1d8,
                          (MethodInfo_4C66420 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_MoveNext);
      fVar58 = fStack_1c4;
      fVar76 = local_1c8;
      if (!bVar45) break;
      uVar18 = (__this_00->fields).center.fields.x;
      uVar36 = (__this_00->fields).center.fields.y;
      fVar79 = (float)uStack_1c0;
      fVar77 = (__this_00->fields).center.fields.z;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        uVar37 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar37 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar37 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar79 = fVar79 - fVar77;
      fVar76 = (fVar58 - (float)uVar36) * (fVar58 - (float)uVar36) +
               (fVar76 - (float)uVar18) * (fVar76 - (float)uVar18) + fVar79 * fVar79;
      if (fVar76 < 0.0) {
        fVar76 = sqrtf(fVar76);
      }
      else {
        fVar76 = SQRT(fVar76);
      }
      if (fVar76 <= local_288) {
        local_288 = fVar76;
      }
    }
    System_Collections_Generic_List_Enumerator_Vector3___Dispose
              ((System_Collections_Generic_List_Enumerator_T__o *)local_1d8,
               (MethodInfo_4C66410 *)MethodInfo_System_Collections_Generic_List_Enumerator_Vector3_Dispose);
    Characters_TitanLimbMesh_CutMeshData__AddBone
              (__this,(UnityEngine_Vector3_o)(__this_00->fields).center.fields,
               (UnityEngine_Vector3_o)(__this_00->fields).axisX.fields,
               (UnityEngine_Vector3_o)(__this_00->fields).axisY.fields,local_208,local_288 * 0.24,wrist,
               method_00);
    return;
  }
label_05c5c055:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Variation
// il2cpp: float Characters_TitanLimbMesh_CutMeshData__Variation (int32_t index, const MethodInfo* method);
// 0x5c5c530

float Characters_TitanLimbMesh_CutMeshData__Variation(int32_t index,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = sinf((float)index * 12.9898 + 4.1414);
  fVar2 = floorf(fVar1 * 43758.547);
  fVar2 = fVar1 * 43758.547 - fVar2;
  fVar1 = 1.0;
  if (fVar2 <= 1.0) {
    fVar1 = fVar2;
  }
  return (float)(-(uint)(0.0 <= fVar2) & (uint)fVar1);
}


// Characters.TitanLimbMesh.CutMeshData$$SmoothFleshNormals
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__SmoothFleshNormals (Characters_TitanLimbMesh_CutMeshData_o* __this, int32_t start, const MethodInfo* method);
// 0x5c5cd70
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c5ce4e: nop 
// asm:   0x5c5cf11: lea rbx, [rip + 0x161dc00]  ; TypeInfo_System_Math
// asm:   0x5c5cf18: jmp 0x5c5cf58
// asm:   0x5c5d11e: jmp 0x5c5d13b
// asm:   0x5c5d27b: mov rdx, qword ptr [rbx]
// asm:   0x5c5d27e: jmp 0x5c5d28a
// asm:   0x5c5d280: lea rax, [rip + 0x163a329]  ; MethodInfo_System_Collections_Generic_List_Vector3_get_Item
// asm:   0x5c5d287: mov rdx, qword ptr [rax]

void Characters_TitanLimbMesh_CutMeshData__SmoothFleshNormals
               (Characters_TitanLimbMesh_CutMeshData_o *__this,int32_t start,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  System_Collections_Generic_List_Vector3__o *__this_00;
  undefined1 auVar4 [16];
  int iVar5;
  System_Collections_Generic_Dictionary_Vector3__Vector3__o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar6;
  int32_t index;
  System_Collections_Generic_List_Vector3__o *pSVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [12];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o key;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_StaticFields local_a8;
  
  if (Il2CppMethodInitialized_0754787c == '\0') {
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
    Il2CppMethodInitialized_0754787c = '\x01';
  }
  local_a8.leftVector.fields.z = 0.0;
  local_a8.leftVector.fields.x = 0.0;
  local_a8.leftVector.fields.y = 0.0;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Vector3_Vector3);
  System_Collections_Generic_Dictionary_Vector3__Vector3____ctor
            (__this_01,
             (MethodInfo_4B17980 *)MethodInfo_System_Collections_Generic_Dictionary_Vector3_Vector3_ctor);
  pSVar7 = (__this->fields)._vertices;
  if (pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    if (__this_01 == (System_Collections_Generic_Dictionary_Vector3__Vector3__o *)0x0) {
      iVar5 = (pSVar7->fields)._size;
      if (start < iVar5) {
label_05c5d28a:
        System_Collections_Generic_List_Vector3___get_Item
                  (pSVar7,start,
                   (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
        ThrowNullReferenceException();
      }
label_05c5d23b:
      if (iVar5 <= start) {
        return;
      }
      pSVar7 = (__this->fields)._normals;
      if (pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0) {
        System_Collections_Generic_List_Vector3___get_Item
                  (pSVar7,start,
                   (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
        pSVar7 = (__this->fields)._vertices;
        if (pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c5d28a;
      }
    }
    else {
      index = start;
      do {
        iVar5 = (pSVar7->fields)._size;
        if (iVar5 <= index) {
          if (__this_01 == (System_Collections_Generic_Dictionary_Vector3__Vector3__o *)0x0)
          goto label_05c5d23b;
          goto label_05c5cf58;
        }
        UVar15 = System_Collections_Generic_List_Vector3___get_Item
                           (pSVar7,index,
                            (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item)
        ;
        System_Collections_Generic_Dictionary_Vector3__Vector3___TryGetValue
                  (__this_01,UVar15,&local_a8.leftVector,
                   (MethodInfo_4B1A5C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Vector3_Vector3_TryGetValue);
        pSVar7 = (__this->fields)._vertices;
        if (pSVar7 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
        UVar15 = System_Collections_Generic_List_Vector3___get_Item
                           (pSVar7,index,
                            (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item)
        ;
        local_a8.upVector.fields.x = extraout_XMM0_Dc;
        local_a8.oneVector.fields._4_8_ = UVar15.fields._0_8_;
        local_a8.upVector.fields.y = extraout_XMM0_Dd;
        local_a8.upVector.fields.z = UVar15.fields.z;
        pSVar7 = (__this->fields)._normals;
        if (pSVar7 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
        local_a8.forwardVector.fields.z = local_a8.leftVector.fields.z;
        local_a8.rightVector.fields.y = local_a8.leftVector.fields.x;
        local_a8.rightVector.fields.z = local_a8.leftVector.fields.y;
        local_a8.forwardVector.fields.x = 0.0;
        local_a8.forwardVector.fields.y = 0.0;
        UVar15 = System_Collections_Generic_List_Vector3___get_Item
                           (pSVar7,index,
                            (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item)
        ;
        value.fields.x = local_a8.rightVector.fields.y + UVar15.fields.x;
        value.fields.y = local_a8.rightVector.fields.z + UVar15.fields.y;
        value.fields.z = local_a8.forwardVector.fields.z + UVar15.fields.z;
        key.fields.z = local_a8.upVector.fields.z;
        key.fields.x = local_a8.oneVector.fields.y;
        key.fields.y = local_a8.oneVector.fields.z;
        in_XMM1 = ZEXT816(0);
        System_Collections_Generic_Dictionary_Vector3__Vector3___set_Item
                  (__this_01,key,value,
                   (MethodInfo_4B185C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Vector3_Vector3_set_Item);
        index = index + 1;
        pSVar7 = (__this->fields)._vertices;
      } while (pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0);
    }
  }
  goto label_05c5cf03;
label_05c5cf58:
  do {
    if ((pSVar7->fields)._size <= start) {
      return;
    }
    pSVar7 = (__this->fields)._normals;
    if (pSVar7 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
    UVar15 = System_Collections_Generic_List_Vector3___get_Item
                       (pSVar7,start,
                        (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    auVar13 = in_XMM1._4_12_;
    local_a8.backVector.fields.y = extraout_XMM0_Dc_00;
    local_a8._80_8_ = UVar15.fields._0_8_;
    local_a8.backVector.fields.z = extraout_XMM0_Dd_00;
    local_a8.rightVector.fields.y = UVar15.fields.z;
    __this_00 = (__this->fields)._vertices;
    if (__this_00 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
    UVar15 = System_Collections_Generic_List_Vector3___get_Item
                       (__this_00,start,
                        (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    UVar15 = System_Collections_Generic_Dictionary_Vector3__Vector3___get_Item
                       (__this_01,UVar15,
                        (MethodInfo_4B18510 *)
                        MethodInfo_System_Collections_Generic_Dictionary_Vector3_Vector3_get_Item);
    local_a8.upVector.fields.z = UVar15.fields.x;
    local_a8.downVector.fields.x = UVar15.fields.y;
    local_a8.downVector.fields.y = (float)extraout_XMM0_Dc_01;
    local_a8.downVector.fields.z = (float)extraout_XMM0_Dd_01;
    uVar10 = auVar13._0_4_;
    local_a8.oneVector.fields.y = UVar15.fields.z;
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      uVar10 = 0;
      Il2CppMethodInitialized_0753e72d = '\x01';
      local_a8.zeroVector.fields.x = 0.0;
      local_a8.zeroVector.fields.y = 0.0;
      fVar9 = local_a8.oneVector.fields.y;
      if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05c5cfe0;
label_05c5d18e:
      local_a8.zeroVector.fields.x = 0.0;
      local_a8.zeroVector.fields.y = 0.0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      uVar10 = 0;
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      fVar9 = local_a8.oneVector.fields.y;
    }
    else {
      local_a8.zeroVector.fields.x = 0.0;
      local_a8.zeroVector.fields.y = 0.0;
      fVar9 = UVar15.fields.z;
      if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05c5d18e;
label_05c5cfe0:
      local_a8.zeroVector.fields.x = 0.0;
      local_a8.zeroVector.fields.y = 0.0;
      uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      uVar10 = 0;
      fVar9 = local_a8.oneVector.fields.y;
    }
    fVar8 = fVar9 * fVar9 +
            local_a8.downVector.fields.x * local_a8.downVector.fields.x +
            local_a8.upVector.fields.z * local_a8.upVector.fields.z;
    if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
      uVar10 = extraout_XMM0_Db;
      fVar9 = local_a8.oneVector.fields.y;
      if (fVar8 <= 1e-05) goto label_05c5d027;
label_05c5d057:
      local_a8.negativeInfinityVector.fields.y = fVar9 / fVar8;
      auVar14._4_4_ = fVar8;
      auVar14._0_4_ = fVar8;
      auVar14._8_4_ = uVar10;
      auVar14._12_4_ = uVar10;
      auVar14 = divps((undefined1  [16])local_a8._32_16_,auVar14);
      local_a8.zeroVector.fields.x = auVar14._0_4_;
      local_a8.zeroVector.fields.y = auVar14._4_4_;
      pUVar6 = &local_a8;
    }
    else {
      fVar8 = SQRT(fVar8);
      if (1e-05 < fVar8) goto label_05c5d057;
label_05c5d027:
      local_a8.negativeInfinityVector.fields.y =
           (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields.z;
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    }
    local_a8.positiveInfinityVector.fields.z = (pUVar6->zeroVector).fields.x;
    local_a8.negativeInfinityVector.fields.x = (pUVar6->zeroVector).fields.y;
    local_a8.zeroVector.fields.x = local_a8.forwardVector.fields.z;
    local_a8.zeroVector.fields.y = local_a8.backVector.fields.x;
    auVar14 = ZEXT416((uint)local_a8.rightVector.fields.y);
    local_a8.zeroVector.fields.z = local_a8.rightVector.fields.y;
    UVar15 = UnityEngine_Vector3__Internal_Slerp
                       (&local_a8.zeroVector,
                        (UnityEngine_Vector3_o *)&local_a8.positiveInfinityVector.fields.z,0.8,
                        (MethodInfo *)0x0);
    auVar12._4_12_ = auVar14._4_12_;
    auVar12._0_4_ = UVar15.fields.z;
    local_a8.upVector.fields.z = UVar15.fields.x;
    local_a8.downVector.fields.x = UVar15.fields.y;
    local_a8.downVector.fields.y = (float)extraout_XMM0_Dc_02;
    local_a8.downVector.fields.z = (float)extraout_XMM0_Dd_02;
    local_a8.oneVector.fields.y = auVar12._0_4_;
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      auVar12 = ZEXT416((uint)local_a8.oneVector.fields.y);
      Il2CppMethodInitialized_0753e72d = '\x01';
      local_a8.zeroVector.fields.x = 0.0;
      local_a8.zeroVector.fields.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05c5d0d3;
label_05c5d1fe:
      local_a8.zeroVector.fields.x = 0.0;
      local_a8.zeroVector.fields.y = 0.0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      auVar12 = ZEXT416((uint)local_a8.oneVector.fields.y);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      local_a8.zeroVector.fields.x = 0.0;
      local_a8.zeroVector.fields.y = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05c5d1fe;
label_05c5d0d3:
      local_a8.zeroVector.fields.x = 0.0;
      local_a8.zeroVector.fields.y = 0.0;
      uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      auVar12 = ZEXT416((uint)local_a8.oneVector.fields.y);
    }
    uVar10 = auVar12._4_4_;
    fVar9 = auVar12._0_4_ * auVar12._0_4_ +
            local_a8.downVector.fields.x * local_a8.downVector.fields.x +
            local_a8.upVector.fields.z * local_a8.upVector.fields.z;
    if (fVar9 < 0.0) {
      fVar9 = sqrtf(fVar9);
      auVar12 = ZEXT416((uint)local_a8.oneVector.fields.y);
      uVar10 = extraout_XMM0_Db_00;
      if (fVar9 <= 1e-05) goto label_05c5d13b;
label_05c5cf20:
      auVar11._4_12_ = auVar12._4_12_;
      auVar11._0_4_ = auVar12._0_4_ / fVar9;
      auVar4._4_4_ = fVar9;
      auVar4._0_4_ = fVar9;
      auVar4._8_4_ = uVar10;
      auVar4._12_4_ = uVar10;
      auVar14 = divps((undefined1  [16])local_a8._32_16_,auVar4);
      local_a8.zeroVector.fields.x = auVar14._0_4_;
      local_a8.zeroVector.fields.y = auVar14._4_4_;
      pUVar6 = &local_a8;
    }
    else {
      fVar9 = SQRT(fVar9);
      if (1e-05 < fVar9) goto label_05c5cf20;
label_05c5d13b:
      auVar11 = ZEXT416((uint)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields.z);
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    }
    uVar1 = (pUVar6->zeroVector).fields.x;
    uVar2 = (pUVar6->zeroVector).fields.y;
    UVar15.fields.y = (float)uVar2;
    UVar15.fields.x = (float)uVar1;
    UVar15.fields.z = auVar11._0_4_;
    in_XMM1._12_4_ = 0;
    in_XMM1._0_12_ = auVar11._4_12_;
    in_XMM1 = in_XMM1 << 0x20;
    System_Collections_Generic_List_Vector3___set_Item
              (pSVar7,start,UVar15,
               (MethodInfo_39FF620 *)MethodInfo_System_Collections_Generic_List_Vector3_set_Item);
    start = start + 1;
    pSVar7 = (__this->fields)._vertices;
  } while (pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0);
label_05c5cf03:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$AddBone
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__AddBone (Characters_TitanLimbMesh_CutMeshData_o* __this, UnityEngine_Vector3_o center, UnityEngine_Vector3_o axisX, UnityEngine_Vector3_o axisY, float radius, float width, Characters_TitanLimbMesh_CutPlane_o* cut, const MethodInfo* method);
// 0x5c5d2a0

void Characters_TitanLimbMesh_CutMeshData__AddBone
               (Characters_TitanLimbMesh_CutMeshData_o *__this,UnityEngine_Vector3_o center,
               UnityEngine_Vector3_o axisX,UnityEngine_Vector3_o axisY,float radius,float width,
               Characters_TitanLimbMesh_CutPlane_o *cut,MethodInfo *method)

{
  ulong uVar1;
  UnityEngine_Vector3_Fields *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar7;
  undefined8 uVar8;
  UnityEngine_Vector2_Fields UVar9;
  undefined4 uVar13;
  System_Collections_Generic_List_Vector2__o *pSVar14;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  undefined1 auVar15 [16];
  System_Nullable_Vector3__o d;
  UnityEngine_Vector3_Fields c;
  MethodInfo *pMVar16;
  MethodInfo *method_00;
  ulong uVar17;
  MethodInfo *method_01;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  float fVar33;
  float fVar34;
  undefined1 auVar30 [12];
  UnityEngine_Vector2_o value;
  undefined1 auVar31 [12];
  undefined8 in_XMM0_Qb;
  undefined1 auVar32 [16];
  float fVar35;
  undefined1 auVar36 [12];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar40;
  float in_XMM3_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  float fVar41;
  float in_XMM5_Db;
  UnityEngine_Vector3_o value_02;
  UnityEngine_Vector3_o a;
  UnityEngine_Vector3_o a_00;
  UnityEngine_Vector3_o b;
  UnityEngine_Vector3_o c_00;
  undefined8 local_158;
  float local_138;
  float fStack_134;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_d8;
  float fStack_d4;
  undefined8 local_78;
  System_Nullable_Vector3__Fields local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  fVar41 = axisY.fields.z;
  fVar40 = axisX.fields.z;
  if (Il2CppMethodInitialized_0754787d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_0754787d = '\x01';
  }
  pMVar16 = (MethodInfo *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,9);
  method_00 = (MethodInfo *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,9);
  if ((cut == (Characters_TitanLimbMesh_CutPlane_o *)0x0) || (pMVar16 == (MethodInfo *)0x0)) {
label_05c5dcd2:
    ThrowNullReferenceException();
  }
  uVar3 = (cut->fields).Normal.fields.x;
  uVar10 = (cut->fields).Normal.fields.y;
  fVar35 = radius * 0.18;
  local_128 = center.fields.x;
  fStack_124 = center.fields.y;
  fStack_120 = (float)in_XMM0_Qb;
  fStack_11c = (float)((ulong)in_XMM0_Qb >> 0x20);
  fVar22 = local_128 - fVar35 * (float)uVar3;
  fVar33 = fStack_124 - fVar35 * (float)uVar10;
  fStack_120 = fStack_120 - fVar35 * 0.0;
  fStack_11c = fStack_11c - fVar35 * 0.0;
  fVar35 = center.fields.z - (cut->fields).Normal.fields.z * fVar35;
  fVar23 = radius * 0.45;
  lVar21 = 0x28;
  uVar19 = 0;
  do {
    iVar18 = (int)uVar19;
    fVar24 = cosf((float)iVar18 * 0.69813174);
    fVar25 = sinf((float)iVar18 * 0.69813174);
    if (*(uint *)&pMVar16->name <= uVar19) goto label_05c5dccd;
    fVar39 = (fVar25 * fVar41 + fVar24 * fVar40) * width;
    fVar27 = (cut->fields).Normal.fields.z;
    local_138 = axisX.fields.x;
    fStack_134 = axisX.fields.y;
    local_d8 = axisY.fields.x;
    fStack_d4 = axisY.fields.y;
    fVar26 = (fVar25 * local_d8 + fVar24 * local_138) * width;
    fVar34 = (fVar25 * fStack_d4 + fVar24 * fStack_134) * width;
    uVar4 = (cut->fields).Normal.fields.x;
    uVar11 = (cut->fields).Normal.fields.y;
    *(ulong *)((long)pMVar16 + lVar21 + -8) =
         CONCAT44((fVar34 * 1.2 + fStack_124) - (float)uVar11 * fVar23,
                  (fVar26 * 1.2 + local_128) - (float)uVar4 * fVar23);
    *(float *)((long)&pMVar16->methodPointer + lVar21) = (fVar39 * 1.2 + center.fields.z) - fVar27 * fVar23;
    fVar25 = sinf((float)(iVar18 + 0x2a) * 12.9898 + 4.1414);
    fVar27 = floorf(fVar25 * 43758.547);
    uVar5 = (cut->fields).Normal.fields.x;
    uVar12 = (cut->fields).Normal.fields.y;
    fVar24 = (cut->fields).Normal.fields.z;
    fVar28 = sinf((float)(iVar18 + 0x15) * 12.9898 + 4.1414);
    fVar29 = floorf(fVar28 * 43758.547);
    fVar27 = fVar25 * 43758.547 - fVar27;
    auVar36 = ZEXT812(0x3f800000);
    if (fVar27 <= auVar36._0_4_) {
      auVar36._4_8_ = auVar36._4_8_;
      auVar36._0_4_ = fVar27;
    }
    fVar29 = fVar28 * 43758.547 - fVar29;
    auVar30 = ZEXT812(0x3f800000);
    if (fVar29 <= auVar30._0_4_) {
      auVar30._4_8_ = auVar30._4_8_;
      auVar30._0_4_ = fVar29;
    }
    fVar25 = (float)(-(uint)(0.0 <= fVar29) & auVar30._0_4_) * radius * 0.035;
    if (method_00 == (MethodInfo *)0x0) goto label_05c5dcd2;
    if (*(uint *)&method_00->name <= uVar19) goto label_05c5dccd;
    fVar27 = (float)(~-(uint)(0.0 <= fVar27) & 0x3f6b851f |
                    (uint)(auVar36._0_4_ * 0.16 + 0.92) & -(uint)(0.0 <= fVar27));
    *(ulong *)((long)method_00 + lVar21 + -8) =
         CONCAT44((fVar34 * fVar27 + fVar33) - (float)uVar12 * fVar25,
                  (fVar26 * fVar27 + fVar22) - (float)uVar5 * fVar25);
    *(float *)((long)&method_00->methodPointer + lVar21) = (fVar39 * fVar27 + fVar35) - fVar24 * fVar25;
    uVar19 = uVar19 + 1;
    lVar21 = lVar21 + 0xc;
  } while (uVar19 != 9);
  fVar23 = width + width;
  lVar21 = 0x28;
  uVar19 = 0;
  while( true ) {
    uVar1 = uVar19 + 1;
    uVar20 = (uint)uVar1;
    if (uVar19 == 8) {
      uVar20 = 0;
    }
    fVar24 = sinf((float)((int)uVar19 + 0x21) * 12.9898 + 4.1414);
    fVar25 = floorf(fVar24 * 43758.547);
    fVar25 = fVar24 * 43758.547 - fVar25;
    auVar31 = ZEXT812(0x3f800000);
    if (fVar25 <= auVar31._0_4_) {
      auVar31._4_8_ = auVar31._4_8_;
      auVar31._0_4_ = fVar25;
    }
    fVar25 = (float)(-(uint)(0.0 <= fVar25) & auVar31._0_4_);
    fVar24 = 0.0;
    if (0.0 <= fVar25) {
      fVar24 = fVar25;
    }
    fVar27 = fVar24 * 0.25 + 0.67;
    fVar26 = fVar24 * 0.38000003 + 0.47;
    fVar25 = fVar24 * 0.31000003 + 0.35;
    fVar24 = fVar24 * 0.03999999 + 0.38;
    if (((*(uint *)&pMVar16->name <= uVar19) || (*(uint *)&pMVar16->name <= uVar20)) ||
       ((uint)method_00->name <= uVar20)) break;
    local_78 = CONCAT44(fVar26,fVar27);
    local_158 = CONCAT44(fVar24,fVar25);
    if (((ulong)method_00->name & 0xffffffff) <= uVar19) break;
    uVar7 = *(undefined8 *)((long)pMVar16 + lVar21 + -8);
    fVar28 = *(float *)((long)&pMVar16->methodPointer + lVar21);
    uVar17 = (ulong)uVar20;
    uVar8 = *(undefined8 *)((long)&pMVar16->klass + uVar17 * 0xc);
    fVar29 = *(float *)((long)&pMVar16->return_type + uVar17 * 0xc);
    pUVar2 = (UnityEngine_Vector3_Fields *)((long)&method_00->klass + uVar17 * 0xc);
    c = *pUVar2;
    local_68.hasValue = false;
    local_68._1_3_ = 0;
    local_68.value.fields.x = 0.0;
    local_68.value.fields.y = 0.0;
    local_68.value.fields.z = 0.0;
    value_02.fields.z = *(float *)((long)&method_00->methodPointer + lVar21);
    value_02.fields._0_8_ = *(undefined8 *)((long)method_00 + lVar21 + -8);
    method_01 = pMVar16;
    System_Nullable_Vector3____ctor
              ((System_Nullable_Vector3__o *)&local_68,value_02,
               (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
    d.fields.value.fields.y = local_68.value.fields.y;
    d.fields.value.fields.z = local_68.value.fields.z;
    d.fields.hasValue = local_68.hasValue;
    d.fields._1_3_ = local_68._1_3_;
    d.fields.value.fields.x = local_68.value.fields.x;
    local_40 = local_78;
    uStack_38 = local_158;
    color.fields.b = fVar25;
    color.fields.a = fVar24;
    color.fields.r = fVar27;
    color.fields.g = fVar26;
    a.fields.z = fVar28;
    a.fields._0_8_ = uVar7;
    b.fields.z = fVar29;
    b.fields._0_8_ = uVar8;
    Characters_TitanLimbMesh_CutMeshData__AddWoundFace
              (__this,a,b,(UnityEngine_Vector3_o)c,d,cut,color,method_01);
    pSVar14 = (__this->fields)._uv;
    if (pSVar14 == (System_Collections_Generic_List_Vector2__o *)0x0) goto label_05c5dcd2;
    iVar18 = (pSVar14->fields)._size;
    if (Il2CppMethodInitialized_0754205f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0754205f = '\x01';
    }
    System_Collections_Generic_List_Vector2___set_Item
              (pSVar14,iVar18 + -4,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields,
               (MethodInfo_39F92C0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    pSVar14 = (__this->fields)._uv;
    if (pSVar14 == (System_Collections_Generic_List_Vector2__o *)0x0) goto label_05c5dcd2;
    iVar18 = (pSVar14->fields)._size;
    if (Il2CppMethodInitialized_07542885 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_07542885 = '\x01';
    }
    System_Collections_Generic_List_Vector2___set_Item
              (pSVar14,iVar18 + -3,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
               (MethodInfo_39F92C0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    pSVar14 = (__this->fields)._uv;
    if (pSVar14 == (System_Collections_Generic_List_Vector2__o *)0x0) goto label_05c5dcd2;
    iVar18 = (pSVar14->fields)._size;
    if (Il2CppMethodInitialized_0753e7f7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753e7f7 = '\x01';
    }
    System_Collections_Generic_List_Vector2___set_Item
              (pSVar14,iVar18 + -2,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->rightVector).fields,
               (MethodInfo_39F92C0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    pSVar14 = (__this->fields)._uv;
    if (pSVar14 == (System_Collections_Generic_List_Vector2__o *)0x0) goto label_05c5dcd2;
    iVar18 = (pSVar14->fields)._size;
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    System_Collections_Generic_List_Vector2___set_Item
              (pSVar14,iVar18 + -1,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo_39F92C0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    if ((*(uint *)&method_00->name <= uVar19) || (*(uint *)&method_00->name <= uVar20)) break;
    local_58 = 0x3f4a3d713f6147ae;
    uStack_50 = 0x3ed70a3d3f1eb852;
    c_00.fields.y = fVar33;
    c_00.fields.x = fVar22;
    color_00.fields.b = 0.62;
    color_00.fields.a = 0.42;
    color_00.fields.r = 0.88;
    color_00.fields.g = 0.79;
    a_00.fields.z = *(float *)((long)&method_00->methodPointer + lVar21);
    a_00.fields._0_8_ = *(undefined8 *)((long)method_00 + lVar21 + -8);
    c_00.fields.z = fVar35;
    Characters_TitanLimbMesh_CutMeshData__AddWoundFace
              (__this,a_00,(UnityEngine_Vector3_o)*pUVar2,c_00,(System_Nullable_Vector3__o)ZEXT416(0),cut,
               color_00,method_00);
    pSVar14 = (__this->fields)._uv;
    if (pSVar14 == (System_Collections_Generic_List_Vector2__o *)0x0) goto label_05c5dcd2;
    if (*(uint *)&method_00->name <= uVar19) break;
    iVar18 = (pSVar14->fields)._size;
    uVar7 = *(undefined8 *)((long)method_00 + lVar21 + -8);
    fVar24 = *(float *)((long)&method_00->methodPointer + lVar21);
    if (Il2CppMethodInitialized_07542885 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_07542885 = '\x01';
    }
    fVar24 = fVar24 - fVar35;
    fVar25 = (float)uVar7 - fVar22;
    fVar27 = (float)((ulong)uVar7 >> 0x20) - fVar33;
    fVar26 = 0.0 - fStack_120;
    fVar28 = 0.0 - fStack_11c;
    auVar37._0_4_ = fVar24 * fVar40 + fVar25 * local_138 + fStack_134 * fVar27;
    auVar37._4_4_ = fVar24 * fVar41 + fVar27 * fStack_d4 + local_d8 * fVar25;
    auVar37._8_4_ = fVar24 * in_XMM3_Db + fVar26 * in_XMM2_Dc + in_XMM4_Dc * fVar26;
    auVar37._12_4_ = fVar24 * in_XMM5_Db + fVar28 * in_XMM2_Dd + in_XMM4_Dd * fVar28;
    auVar38._4_4_ = fVar23;
    auVar38._0_4_ = fVar23;
    auVar38._8_4_ = fVar23;
    auVar38._12_4_ = fVar23;
    auVar38 = divps(auVar37,auVar38);
    UVar9 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
    value_00.fields.x = UVar9.x * 0.5 + auVar38._0_4_;
    value_00.fields.y = UVar9.y * 0.5 + auVar38._4_4_;
    System_Collections_Generic_List_Vector2___set_Item
              (pSVar14,iVar18 + -3,value_00,
               (MethodInfo_39F92C0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    pSVar14 = (__this->fields)._uv;
    if (pSVar14 == (System_Collections_Generic_List_Vector2__o *)0x0) goto label_05c5dcd2;
    if (*(uint *)&method_00->name <= uVar20) break;
    iVar18 = (pSVar14->fields)._size;
    uVar6 = pUVar2->x;
    uVar13 = pUVar2->y;
    fVar24 = pUVar2->z;
    if (Il2CppMethodInitialized_07542885 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_07542885 = '\x01';
    }
    fVar24 = fVar24 - fVar35;
    fVar25 = 0.0 - fStack_120;
    fVar27 = 0.0 - fStack_11c;
    auVar32._0_4_ =
         fVar24 * fVar41 + ((float)uVar13 - fVar33) * fStack_d4 + local_d8 * ((float)uVar6 - fVar22);
    auVar32._4_4_ =
         fVar24 * fVar40 + ((float)uVar6 - fVar22) * local_138 + fStack_134 * ((float)uVar13 - fVar33);
    auVar32._8_4_ = fVar24 * in_XMM5_Db + fVar25 * in_XMM4_Dc + in_XMM4_Dc * fVar25;
    auVar32._12_4_ = fVar24 * in_XMM3_Db + fVar27 * in_XMM4_Dd + in_XMM4_Dd * fVar27;
    auVar15._4_4_ = fVar23;
    auVar15._0_4_ = fVar23;
    auVar15._8_4_ = fVar23;
    auVar15._12_4_ = fVar23;
    auVar38 = divps(auVar32,auVar15);
    UVar9 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
    value_01.fields.x = auVar38._4_4_ + UVar9.x * 0.5;
    value_01.fields.y = auVar38._0_4_ + UVar9.y * 0.5;
    System_Collections_Generic_List_Vector2___set_Item
              (pSVar14,iVar18 + -2,value_01,
               (MethodInfo_39F92C0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    pSVar14 = (__this->fields)._uv;
    if (pSVar14 == (System_Collections_Generic_List_Vector2__o *)0x0) goto label_05c5dcd2;
    iVar18 = (pSVar14->fields)._size;
    if (Il2CppMethodInitialized_07542885 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_07542885 = '\x01';
    }
    UVar9 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
    value.fields.x = UVar9.x * 0.5;
    value.fields.y = UVar9.y * 0.5;
    System_Collections_Generic_List_Vector2___set_Item
              (pSVar14,iVar18 + -1,value,
               (MethodInfo_39F92C0 *)MethodInfo_System_Collections_Generic_List_Vector2_set_Item);
    lVar21 = lVar21 + 0xc;
    uVar19 = uVar1;
    if (uVar1 == 9) {
      return;
    }
  }
label_05c5dccd:
  ThrowIndexOutOfRangeException();
}


// Characters.TitanLimbMesh.CutMeshData$$AddWoundFace
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__AddWoundFace (Characters_TitanLimbMesh_CutMeshData_o* __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, UnityEngine_Vector3_o c, System_Nullable_Vector3__o d, Characters_TitanLimbMesh_CutPlane_o* cut, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5c5c590
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c5c7f9: jmp 0x5c5c847
// asm:   0x5c5cb7f: jmp 0x5c5cd4c

void Characters_TitanLimbMesh_CutMeshData__AddWoundFace
               (Characters_TitanLimbMesh_CutMeshData_o *__this,UnityEngine_Vector3_o a,UnityEngine_Vector3_o b
               ,UnityEngine_Vector3_o c,System_Nullable_Vector3__o d,Characters_TitanLimbMesh_CutPlane_o *cut,
               UnityEngine_Color_o color,MethodInfo *method)

{
  int item;
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint32_t uVar4;
  int item_00;
  uint uVar5;
  System_Int32_array *pSVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  UnityEngine_Color32_o color_00;
  UnityEngine_Vector3_StaticFields *pUVar9;
  MethodInfo *pMVar10;
  System_Collections_Generic_List_int__o *pSVar11;
  float fVar12;
  float fVar13;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  undefined4 in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar18;
  undefined8 in_XMM2_Qb;
  float fVar19;
  undefined1 auVar17 [16];
  undefined4 in_XMM3_Db;
  undefined1 auVar20 [16];
  undefined4 in_XMM4_Dc;
  float fVar21;
  undefined4 in_XMM4_Dd;
  float fVar22;
  float fVar23;
  float fVar24;
  float in_XMM5_Db;
  float fVar25;
  float fVar26;
  float fVar29;
  float fVar30;
  undefined4 in_XMM5_Dc;
  float fVar27;
  undefined4 in_XMM5_Dd;
  float fVar28;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o UVar38;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o normal;
  UnityEngine_Vector3_o normal_00;
  UnityEngine_Vector3_o normal_01;
  UnityEngine_Vector3_o normal_02;
  UnityEngine_Vector3_o tangent;
  UnityEngine_Vector3_o tangent_00;
  UnityEngine_Vector3_o tangent_01;
  UnityEngine_Vector3_o tangent_02;
  undefined1 local_100 [60];
  float fStack_c4;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  float local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  System_Nullable_Vector3__Fields local_68;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  local_a8._4_4_ = in_XMM5_Db;
  local_a8._0_4_ = c.fields.z;
  uStack_a0 = in_XMM5_Dc;
  uStack_9c = in_XMM5_Dd;
  fStack_b0 = (float)in_XMM4_Dc;
  local_b8 = c.fields._0_8_;
  fStack_ac = (float)in_XMM4_Dd;
  stack0xffffffffffffff38 = (Characters_TitanLimbMesh_CutPlane_o *)CONCAT44(in_XMM3_Db,b.fields.z);
  local_78 = b.fields._0_8_;
  local_88 = a.fields.z;
  fStack_90 = (float)in_XMM0_Dc;
  local_98 = a.fields._0_8_;
  fStack_8c = (float)in_XMM0_Dd;
  local_68.hasValue = d.fields.hasValue;
  local_68._1_3_ = d.fields._1_3_;
  local_68.value.fields.x = d.fields.value.fields.x;
  local_68.value.fields.y = d.fields.value.fields.y;
  local_68.value.fields.z = d.fields.value.fields.z;
  uStack_70 = in_XMM2_Qb;
  if (Il2CppMethodInitialized_0754787e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_Value);
    Il2CppMethodInitialized_0754787e = '\x01';
  }
  auVar20._0_4_ = (float)local_78 - (float)local_98._0_4_;
  auVar20._4_4_ = local_78._4_4_ - (float)local_98._4_4_;
  auVar20._8_4_ = (float)uStack_70 - fStack_90;
  auVar20._12_4_ = uStack_70._4_4_ - fStack_8c;
  local_100._8_4_ = (float)local_a8._0_4_ - local_88;
  local_100._12_4_ = (float)local_100._56_4_ - local_88;
  local_100._16_4_ = (float)local_a8._4_4_ - local_88;
  local_100._20_4_ = fStack_c4 - local_88;
  fVar29 = (float)local_b8._0_4_ - (float)local_98._0_4_;
  fVar31 = (float)local_b8._4_4_ - (float)local_98._4_4_;
  fVar32 = fStack_b0 - fStack_90;
  fVar33 = fStack_ac - fStack_8c;
  fVar13 = auVar20._4_4_;
  fVar14 = auVar20._4_4_;
  fVar21 = auVar20._4_4_;
  fVar22 = auVar20._4_4_;
  fVar23 = fVar31;
  fVar25 = auVar20._0_4_;
  fVar30 = fVar29;
  fVar34 = (float)local_100._12_4_;
  fVar35 = (float)local_100._8_4_;
  fVar36 = (float)local_100._16_4_;
  fVar37 = (float)local_100._20_4_;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    local_100._24_4_ = fVar31;
    local_100._28_4_ = auVar20._0_4_;
    local_100._32_4_ = fVar32;
    local_100._36_4_ = fVar33;
    local_100._40_4_ = auVar20._4_4_;
    local_100._44_4_ = auVar20._4_4_;
    local_100._48_4_ = auVar20._4_4_;
    local_100._52_4_ = auVar20._4_4_;
    local_58 = (float)local_100._12_4_;
    fStack_54 = (float)local_100._8_4_;
    fStack_50 = (float)local_100._16_4_;
    fStack_4c = (float)local_100._20_4_;
    local_48 = fVar29;
    fStack_44 = fVar31;
    fStack_40 = fVar32;
    fStack_3c = fVar33;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    fVar13 = (float)local_100._40_4_;
    fVar14 = (float)local_100._44_4_;
    fVar21 = (float)local_100._48_4_;
    fVar22 = (float)local_100._52_4_;
    fVar23 = (float)local_100._24_4_;
    fVar25 = (float)local_100._28_4_;
    fVar32 = (float)local_100._32_4_;
    fVar33 = (float)local_100._36_4_;
    fVar30 = local_48;
    fVar34 = local_58;
    fVar35 = fStack_54;
    fVar36 = fStack_50;
    fVar37 = fStack_4c;
  }
  fVar15 = auVar20._4_4_ * (float)local_100._8_4_;
  fVar29 = fVar29 * (float)local_100._12_4_;
  fVar18 = auVar20._8_4_ * (float)local_100._16_4_;
  fVar19 = auVar20._12_4_ * (float)local_100._20_4_;
  local_100._0_4_ = 0.0;
  local_100._4_4_ = 0.0;
  fVar12 = fVar13 * fVar30;
  fVar24 = fVar23 * fVar34;
  fVar26 = fVar25 * fVar35;
  fVar27 = fVar32 * fVar36;
  fVar28 = fVar33 * fVar37;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_100._24_4_ = fVar23 * fVar34;
    local_100._28_4_ = fVar25 * fVar35;
    local_100._32_4_ = fVar32 * fVar36;
    local_100._36_4_ = fVar33 * fVar37;
    local_100._40_4_ = fVar13 * fVar30;
    local_100._44_4_ = fVar14;
    local_100._48_4_ = fVar21;
    local_100._52_4_ = fVar22;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar12 = (float)local_100._40_4_;
    fVar24 = (float)local_100._24_4_;
    fVar26 = (float)local_100._28_4_;
    fVar27 = (float)local_100._32_4_;
    fVar28 = (float)local_100._36_4_;
  }
  auVar17._0_4_ = fVar15 - fVar24;
  auVar17._4_4_ = fVar29 - fVar26;
  auVar17._8_4_ = fVar18 - fVar27;
  auVar17._12_4_ = fVar19 - fVar28;
  fVar12 = fVar31 * auVar20._0_4_ - fVar12;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar13 = fVar12 * fVar12 + auVar17._4_4_ * auVar17._4_4_ + auVar17._0_4_ * auVar17._0_4_;
  if (fVar13 < 0.0) {
    fVar13 = sqrtf(fVar13);
    fVar31 = extraout_XMM0_Db;
    if (1e-05 < fVar13) goto label_05c5c817;
label_05c5c7cc:
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar12 = (pUVar9->zeroVector).fields.z;
    uVar16._0_4_ = (pUVar9->zeroVector).fields.x;
    uVar16._4_4_ = (pUVar9->zeroVector).fields.y;
  }
  else {
    fVar13 = SQRT(fVar13);
    if (fVar13 <= 1e-05) goto label_05c5c7cc;
label_05c5c817:
    fVar12 = fVar12 / fVar13;
    auVar8._4_4_ = fVar13;
    auVar8._0_4_ = fVar13;
    auVar8._8_4_ = fVar31;
    auVar8._12_4_ = fVar31;
    auVar17 = divps(auVar17,auVar8);
    uVar16 = auVar17._0_8_;
    local_100._0_8_ = uVar16;
  }
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
  }
  local_100._0_4_ = 0.0;
  local_100._4_4_ = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  local_100._8_4_ = local_100._12_4_;
  local_100._16_4_ = local_100._12_4_;
  local_100._20_4_ = local_100._12_4_;
  fVar31 = (float)local_100._12_4_ * (float)local_100._12_4_ +
           auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_;
  if (fVar31 < 0.0) {
    fVar31 = sqrtf(fVar31);
    fVar13 = extraout_XMM0_Db_00;
    if (1e-05 < fVar31) goto label_05c5c8f4;
label_05c5c8c5:
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_100._8_4_ = (pUVar9->zeroVector).fields.z;
    local_100._12_4_ = 0.0;
    local_100._16_4_ = 0.0;
    local_100._20_4_ = 0.0;
  }
  else {
    fVar31 = SQRT(fVar31);
    fVar13 = (float)local_100._12_4_;
    if (fVar31 <= 1e-05) goto label_05c5c8c5;
label_05c5c8f4:
    local_100._8_4_ = (float)local_100._8_4_ / fVar31;
    auVar7._4_4_ = fVar31;
    auVar7._0_4_ = fVar31;
    auVar7._8_4_ = fVar13;
    auVar7._12_4_ = fVar13;
    auVar20 = divps(auVar20,auVar7);
    local_100._0_4_ = auVar20._0_4_;
    local_100._4_4_ = auVar20._4_4_;
    pUVar9 = (UnityEngine_Vector3_StaticFields *)local_100;
  }
  pMVar10 = (MethodInfo *)(__this->fields)._vertices;
  if (pMVar10 != (MethodInfo *)0x0) {
    uVar2 = (pUVar9->zeroVector).fields.x;
    uVar3 = (pUVar9->zeroVector).fields.y;
    tangent_02.fields.y = (float)uVar3;
    tangent_02.fields.x = (float)uVar2;
    item_00 = *(int *)&pMVar10->name;
    local_100._40_4_ = UnityEngine_Mathf__GammaToLinearSpace(color.fields.r,(MethodInfo *)0x0);
    local_100._44_4_ = extraout_XMM0_Db_01;
    local_100._48_4_ = extraout_XMM0_Dc;
    local_100._52_4_ = extraout_XMM0_Dd;
    local_100._24_4_ = UnityEngine_Mathf__GammaToLinearSpace(color.fields.g,(MethodInfo *)0x0);
    local_100._28_4_ = extraout_XMM0_Db_02;
    local_100._32_4_ = extraout_XMM0_Dc_00;
    local_100._36_4_ = extraout_XMM0_Dd_00;
    fVar31 = UnityEngine_Mathf__GammaToLinearSpace(color.fields.b,(MethodInfo *)0x0);
    color_00.fields._overlap_0 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(local_100._40_4_,fVar31,0);
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    if (cut != (Characters_TitanLimbMesh_CutPlane_o *)0x0) {
      UVar38.fields.z = local_88;
      UVar38.fields.x = (float)local_98._0_4_;
      UVar38.fields.y = (float)local_98._4_4_;
      normal.fields.z = fVar12;
      normal.fields.x = (float)uVar16;
      normal.fields.y = SUB84(uVar16,4);
      tangent.fields.z = (float)local_100._8_4_;
      tangent.fields.x = (float)uVar2;
      tangent.fields.y = (float)uVar3;
      Characters_TitanLimbMesh_CutMeshData__AddWoundVertex
                (__this,UVar38,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 normal,tangent,(cut->fields).ParentBone,color_00,pMVar10);
      if (Il2CppMethodInitialized_0753e7f7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753e7f7 = '\x01';
      }
      position.fields.z = (float)local_100._56_4_;
      position.fields.x = (float)local_78;
      position.fields.y = local_78._4_4_;
      normal_00.fields.z = fVar12;
      normal_00.fields.x = (float)uVar16;
      normal_00.fields.y = SUB84(uVar16,4);
      tangent_00.fields.z = (float)local_100._8_4_;
      tangent_00.fields.x = (float)uVar2;
      tangent_00.fields.y = (float)uVar3;
      Characters_TitanLimbMesh_CutMeshData__AddWoundVertex
                (__this,position,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->rightVector).fields,
                 normal_00,tangent_00,(cut->fields).ParentBone,color_00,pMVar10);
      if (Il2CppMethodInitialized_07542885 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_07542885 = '\x01';
      }
      position_00.fields.z = (float)local_a8._0_4_;
      position_00.fields.x = (float)local_b8._0_4_;
      position_00.fields.y = (float)local_b8._4_4_;
      normal_01.fields.z = fVar12;
      normal_01.fields.x = (float)uVar16;
      normal_01.fields.y = SUB84(uVar16,4);
      tangent_01.fields.z = (float)local_100._8_4_;
      tangent_01.fields.x = (float)uVar2;
      tangent_01.fields.y = (float)uVar3;
      unique0x10001d6e = cut;
      Characters_TitanLimbMesh_CutMeshData__AddWoundVertex
                (__this,position_00,
                 (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                 normal_01,tangent_01,(cut->fields).ParentBone,color_00,pMVar10);
      pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
      pSVar11 = (__this->fields)._wound;
      if (pSVar11 != (System_Collections_Generic_List_int__o *)0x0) {
        piVar1 = &(pSVar11->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (pSVar11->fields)._items;
        if (pSVar6 != (System_Int32_array *)0x0) {
          uVar5 = (pSVar11->fields)._size;
          if (uVar5 < (uint)pSVar6->max_length) {
            (pSVar11->fields)._size = uVar5 + 1;
            pSVar6->m_Items[(int)uVar5] = item_00;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (pSVar11,item_00,(MethodInfo_3916AC0 *)pMVar10->klass->rgctx_data[0xe].method);
            pSVar11 = (__this->fields)._wound;
            if (pSVar11 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c5cd5e;
          }
          pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
          piVar1 = &(pSVar11->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (pSVar11->fields)._items;
          if (pSVar6 != (System_Int32_array *)0x0) {
            uVar5 = (pSVar11->fields)._size;
            if (uVar5 < (uint)pSVar6->max_length) {
              (pSVar11->fields)._size = uVar5 + 1;
              pSVar6->m_Items[(int)uVar5] = item_00 + 1;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize
                        (pSVar11,item_00 + 1,(MethodInfo_3916AC0 *)pMVar10->klass->rgctx_data[0xe].method);
              pSVar11 = (__this->fields)._wound;
              if (pSVar11 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c5cd5e;
            }
            pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
            piVar1 = &(pSVar11->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar11->fields)._items;
            if (pSVar6 != (System_Int32_array *)0x0) {
              item = item_00 + 2;
              uVar5 = (pSVar11->fields)._size;
              if (uVar5 < (uint)pSVar6->max_length) {
                pMVar10 = (MethodInfo *)(ulong)(uVar5 + 1);
                (pSVar11->fields)._size = uVar5 + 1;
                pSVar6->m_Items[(int)uVar5] = item;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize
                          (pSVar11,item,(MethodInfo_3916AC0 *)pMVar10->klass->rgctx_data[0xe].method);
              }
              if (d.fields.hasValue == false) {
                return;
              }
              UVar38 = System_Nullable_Vector3___get_Value
                                 ((System_Nullable_Vector3__o *)&local_68,
                                  (MethodInfo_3CDCAC0 *)MethodInfo_System_Nullable_Vector3_get_Value);
              fVar31 = UVar38.fields.x;
              fVar13 = UVar38.fields.y;
              fVar14 = UVar38.fields.z;
              if (Il2CppMethodInitialized_0754205f == '\0') {
                uStack_a0 = extraout_XMM0_Dc_01;
                local_a8 = (undefined1  [8])UVar38.fields._0_8_;
                uStack_9c = extraout_XMM0_Dd_01;
                local_b8._0_4_ = UVar38.fields.z;
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_0754205f = '\x01';
                fVar31 = (float)local_a8._0_4_;
                fVar13 = (float)local_a8._4_4_;
                fVar14 = (float)local_b8._0_4_;
              }
              position_01.fields.y = fVar13;
              position_01.fields.x = fVar31;
              position_01.fields.z = fVar14;
              normal_02.fields.z = fVar12;
              normal_02.fields.x = (float)uVar16;
              normal_02.fields.y = SUB84(uVar16,4);
              tangent_02.fields.z = (float)local_100._8_4_;
              Characters_TitanLimbMesh_CutMeshData__AddWoundVertex
                        (__this,position_01,
                         (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields
                         ,normal_02,tangent_02,(stack0xffffffffffffff38->fields).ParentBone,color_00,pMVar10);
              pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
              pSVar11 = (__this->fields)._wound;
              if (pSVar11 != (System_Collections_Generic_List_int__o *)0x0) {
                piVar1 = &(pSVar11->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar6 = (pSVar11->fields)._items;
                if (pSVar6 != (System_Int32_array *)0x0) {
                  uVar5 = (pSVar11->fields)._size;
                  if (uVar5 < (uint)pSVar6->max_length) {
                    (pSVar11->fields)._size = uVar5 + 1;
                    pSVar6->m_Items[(int)uVar5] = item_00;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize
                              (pSVar11,item_00,(MethodInfo_3916AC0 *)pMVar10->klass->rgctx_data[0xe].method);
                    pSVar11 = (__this->fields)._wound;
                    if (pSVar11 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c5cd5e;
                  }
                  pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
                  piVar1 = &(pSVar11->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar6 = (pSVar11->fields)._items;
                  if (pSVar6 != (System_Int32_array *)0x0) {
                    uVar5 = (pSVar11->fields)._size;
                    if (uVar5 < (uint)pSVar6->max_length) {
                      (pSVar11->fields)._size = uVar5 + 1;
                      pSVar6->m_Items[(int)uVar5] = item;
                    }
                    else {
                      System_Collections_Generic_List_int___AddWithResize
                                (pSVar11,item,(MethodInfo_3916AC0 *)pMVar10->klass->rgctx_data[0xe].method);
                      pSVar11 = (__this->fields)._wound;
                      if (pSVar11 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c5cd5e;
                    }
                    pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
                    piVar1 = &(pSVar11->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar6 = (pSVar11->fields)._items;
                    if (pSVar6 != (System_Int32_array *)0x0) {
                      uVar5 = (pSVar11->fields)._size;
                      if (uVar5 < (uint)pSVar6->max_length) {
                        (pSVar11->fields)._size = uVar5 + 1;
                        pSVar6->m_Items[(int)uVar5] = item_00 + 3;
                        return;
                      }
                      System_Collections_Generic_List_int___AddWithResize
                                (pSVar11,item_00 + 3,
                                 (MethodInfo_3916AC0 *)pMVar10->klass->rgctx_data[0xe].method);
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
  }
label_05c5cd5e:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$AddWoundVertex
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__AddWoundVertex (Characters_TitanLimbMesh_CutMeshData_o* __this, UnityEngine_Vector3_o position, UnityEngine_Vector2_o uv, UnityEngine_Vector3_o normal, UnityEngine_Vector3_o tangent, int32_t bone, UnityEngine_Color32_o color, const MethodInfo* method);
// 0x5c5c1b0

void Characters_TitanLimbMesh_CutMeshData__AddWoundVertex
               (Characters_TitanLimbMesh_CutMeshData_o *__this,UnityEngine_Vector3_o position,
               UnityEngine_Vector2_o uv,UnityEngine_Vector3_o normal,UnityEngine_Vector3_o tangent,
               int32_t bone,UnityEngine_Color32_o color,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Vector4_o *pUVar2;
  UnityEngine_BoneWeight_o *pUVar3;
  uint uVar4;
  System_Collections_Generic_List_Vector3__o *pSVar5;
  UnityEngine_Vector3_array *pUVar6;
  System_Collections_Generic_List_Vector4__o *__this_00;
  UnityEngine_Vector4_array *pUVar7;
  System_Collections_Generic_List_Vector2__o *__this_01;
  UnityEngine_Vector2_array *pUVar8;
  System_Collections_Generic_List_Color32__o *__this_02;
  UnityEngine_Color32_array *pUVar9;
  System_Collections_Generic_List_BoneWeight__o *__this_03;
  UnityEngine_BoneWeight_array *pUVar10;
  UnityEngine_BoneWeight_o item;
  UnityEngine_BoneWeight_Fields *pUVar11;
  MethodInfo *pMVar12;
  float fVar13;
  float fVar14;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  UnityEngine_Vector4_o item_00;
  UnityEngine_Vector3_o item_01;
  UnityEngine_Vector3_o item_02;
  UnityEngine_BoneWeight_Fields local_b8;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_78;
  UnityEngine_BoneWeight_Fields local_68;
  undefined1 local_48 [16];
  float local_38;
  
  local_38 = tangent.fields.z;
  local_88 = tangent.fields._0_8_;
  local_78 = normal.fields._0_8_;
  item_01.fields.z = position.fields.z;
  local_98._8_4_ = in_XMM2_Dc;
  local_98._0_8_ = uv.fields;
  local_98._12_4_ = in_XMM2_Dd;
  fVar13 = position.fields.x;
  fVar14 = position.fields.y;
  if (g_data_0754787f == '\0') {
    local_48._8_4_ = in_XMM0_Dc;
    local_48._0_8_ = position.fields._0_8_;
    local_48._12_4_ = in_XMM0_Dd;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color32_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector4_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BoneWeight_Add);
    g_data_0754787f = '\x01';
    fVar13 = (float)local_48._0_4_;
    fVar14 = (float)local_48._4_4_;
  }
  pMVar12 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
  local_b8.m_BoneIndex0 = 0;
  local_b8.m_BoneIndex1 = 0;
  local_b8.m_BoneIndex2 = 0;
  local_b8.m_BoneIndex3 = 0;
  local_b8.m_Weight0 = 0.0;
  local_b8.m_Weight1 = 0.0;
  local_b8.m_Weight2 = 0.0;
  local_b8.m_Weight3 = 0.0;
  pSVar5 = (__this->fields)._vertices;
  if (pSVar5 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar6 = (pSVar5->fields)._items;
    if (pUVar6 != (UnityEngine_Vector3_array *)0x0) {
      uVar4 = (pSVar5->fields)._size;
      if (uVar4 < (uint)pUVar6->max_length) {
        (pSVar5->fields)._size = uVar4 + 1;
        pUVar6->m_Items[(int)uVar4].fields.x = fVar13;
        pUVar6->m_Items[(int)uVar4].fields.y = fVar14;
        pUVar6->m_Items[(int)uVar4].fields.z = item_01.fields.z;
      }
      else {
        item_01.fields.y = fVar14;
        item_01.fields.x = fVar13;
        System_Collections_Generic_List_Vector3___AddWithResize
                  (pSVar5,item_01,(MethodInfo_39FF950 *)pMVar12->klass->rgctx_data[0xe].method);
      }
      pMVar12 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
      pSVar5 = (__this->fields)._normals;
      if (pSVar5 != (System_Collections_Generic_List_Vector3__o *)0x0) {
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar6 = (pSVar5->fields)._items;
        if (pUVar6 != (UnityEngine_Vector3_array *)0x0) {
          uVar4 = (pSVar5->fields)._size;
          if (uVar4 < (uint)pUVar6->max_length) {
            (pSVar5->fields)._size = uVar4 + 1;
            pUVar6->m_Items[(int)uVar4].fields.x = (float)(undefined4)local_78;
            pUVar6->m_Items[(int)uVar4].fields.y = (float)local_78._4_4_;
            pUVar6->m_Items[(int)uVar4].fields.z = normal.fields.z;
          }
          else {
            item_02.fields.z = normal.fields.z;
            item_02.fields.x = (float)(undefined4)local_78;
            item_02.fields.y = (float)local_78._4_4_;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (pSVar5,item_02,(MethodInfo_39FF950 *)pMVar12->klass->rgctx_data[0xe].method);
          }
          pMVar12 = MethodInfo_System_Collections_Generic_List_Vector4_Add;
          __this_00 = (__this->fields)._tangents;
          if (__this_00 != (System_Collections_Generic_List_Vector4__o *)0x0) {
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar7 = (__this_00->fields)._items;
            if (pUVar7 != (UnityEngine_Vector4_array *)0x0) {
              uVar4 = (__this_00->fields)._size;
              if (uVar4 < (uint)pUVar7->max_length) {
                (__this_00->fields)._size = uVar4 + 1;
                pUVar2 = pUVar7->m_Items + (int)uVar4;
                (pUVar2->fields).x = (float)local_88;
                (pUVar2->fields).y = local_88._4_4_;
                (pUVar2->fields).z = local_38;
                (pUVar2->fields).w = 1.0;
              }
              else {
                item_00.fields.w = 1.0;
                item_00.fields.z = local_38;
                item_00.fields.x = (float)local_88;
                item_00.fields.y = local_88._4_4_;
                System_Collections_Generic_List_Vector4___AddWithResize
                          (__this_00,item_00,(MethodInfo_3A02D00 *)pMVar12->klass->rgctx_data[0xe].method);
              }
              pMVar12 = MethodInfo_System_Collections_Generic_List_Vector2_Add;
              __this_01 = (__this->fields)._uv;
              if (__this_01 != (System_Collections_Generic_List_Vector2__o *)0x0) {
                piVar1 = &(__this_01->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar8 = (__this_01->fields)._items;
                if (pUVar8 != (UnityEngine_Vector2_array *)0x0) {
                  uVar4 = (__this_01->fields)._size;
                  if (uVar4 < (uint)pUVar8->max_length) {
                    (__this_01->fields)._size = uVar4 + 1;
                    pUVar8->m_Items[(int)uVar4].fields.x = (float)local_98._0_4_;
                    pUVar8->m_Items[(int)uVar4].fields.y = (float)local_98._4_4_;
                  }
                  else {
                    System_Collections_Generic_List_Vector2___AddWithResize
                              (__this_01,(UnityEngine_Vector2_o)local_98._0_8_,
                               (MethodInfo_39F9590 *)pMVar12->klass->rgctx_data[0xe].method);
                  }
                  pMVar12 = MethodInfo_System_Collections_Generic_List_Color32_Add;
                  __this_02 = (__this->fields)._colors;
                  if (__this_02 != (System_Collections_Generic_List_Color32__o *)0x0) {
                    piVar1 = &(__this_02->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar9 = (__this_02->fields)._items;
                    if (pUVar9 != (UnityEngine_Color32_array *)0x0) {
                      uVar4 = (__this_02->fields)._size;
                      if (uVar4 < (uint)pUVar9->max_length) {
                        (__this_02->fields)._size = uVar4 + 1;
                        pUVar9->m_Items[(int)uVar4].fields._overlap_0._at_rgba.rgba =
                             (int32_t)color.fields._overlap_0;
                      }
                      else {
                        System_Collections_Generic_List_Color32___AddWithResize
                                  (__this_02,color,
                                   (MethodInfo_51EF100 *)pMVar12->klass->rgctx_data[0xe].method);
                      }
                      __this_03 = (__this->fields)._weights;
                      local_b8.m_BoneIndex0 = 0;
                      local_b8.m_BoneIndex1 = 0;
                      local_b8.m_BoneIndex2 = 0;
                      local_b8.m_BoneIndex3 = 0;
                      local_b8.m_Weight0 = 0.0;
                      local_b8.m_Weight1 = 0.0;
                      local_b8.m_Weight2 = 0.0;
                      local_b8.m_Weight3 = 0.0;
                      UnityEngine_BoneWeight__set_boneIndex0
                                ((UnityEngine_BoneWeight_o *)&local_b8,bone,(MethodInfo *)0x0);
                      UnityEngine_BoneWeight__set_weight0
                                ((UnityEngine_BoneWeight_o *)&local_b8,1.0,(MethodInfo *)0x0);
                      pMVar12 = MethodInfo_System_Collections_Generic_List_BoneWeight_Add;
                      if (__this_03 != (System_Collections_Generic_List_BoneWeight__o *)0x0) {
                        local_68.m_BoneIndex0 = local_b8.m_BoneIndex0;
                        local_68.m_BoneIndex1 = local_b8.m_BoneIndex1;
                        local_68.m_BoneIndex2 = local_b8.m_BoneIndex2;
                        local_68.m_BoneIndex3 = local_b8.m_BoneIndex3;
                        local_68.m_Weight0 = local_b8.m_Weight0;
                        local_68.m_Weight1 = local_b8.m_Weight1;
                        local_68.m_Weight2 = local_b8.m_Weight2;
                        local_68.m_Weight3 = local_b8.m_Weight3;
                        piVar1 = &(__this_03->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar10 = (__this_03->fields)._items;
                        if (pUVar10 != (UnityEngine_BoneWeight_array *)0x0) {
                          uVar4 = (__this_03->fields)._size;
                          if (uVar4 < (uint)pUVar10->max_length) {
                            (__this_03->fields)._size = uVar4 + 1;
                            pUVar11 = &pUVar10->m_Items[(int)uVar4].fields;
                            pUVar11->m_BoneIndex0 = local_b8.m_BoneIndex0;
                            pUVar11->m_BoneIndex1 = local_b8.m_BoneIndex1;
                            pUVar11->m_BoneIndex2 = local_b8.m_BoneIndex2;
                            pUVar11->m_BoneIndex3 = local_b8.m_BoneIndex3;
                            pUVar3 = pUVar10->m_Items + (int)uVar4;
                            (pUVar3->fields).m_Weight0 = local_b8.m_Weight0;
                            (pUVar3->fields).m_Weight1 = local_b8.m_Weight1;
                            (pUVar3->fields).m_Weight2 = local_b8.m_Weight2;
                            (pUVar3->fields).m_Weight3 = local_b8.m_Weight3;
                          }
                          else {
                            item.fields.m_Weight2 = local_b8.m_Weight2;
                            item.fields.m_Weight3 = local_b8.m_Weight3;
                            item.fields.m_Weight0 = local_b8.m_Weight0;
                            item.fields.m_Weight1 = local_b8.m_Weight1;
                            item.fields.m_BoneIndex0 = local_b8.m_BoneIndex0;
                            item.fields.m_BoneIndex1 = local_b8.m_BoneIndex1;
                            item.fields.m_BoneIndex2 = local_b8.m_BoneIndex2;
                            item.fields.m_BoneIndex3 = local_b8.m_BoneIndex3;
                            System_Collections_Generic_List_BoneWeight___AddWithResize
                                      (__this_03,item,
                                       (MethodInfo_51D8B20 *)pMVar12->klass->rgctx_data[0xe].method);
                          }
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
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Compact
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact (Characters_TitanLimbMesh_CutMeshData_o* __this, const MethodInfo* method);
// 0x5c5dce0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c5ddc9: nop dword ptr [rax]

void Characters_TitanLimbMesh_CutMeshData__Compact
               (Characters_TitanLimbMesh_CutMeshData_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_int__array *pSVar2;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  System_Collections_Generic_List_int__o *__this_01;
  ulong uVar3;
  MethodInfo *in_RCX;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_07547880 == '\0') {
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
    Il2CppMethodInitialized_07547880 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int)
  ;
  System_Collections_Generic_Dictionary_int__int____ctor
            (__this_00,(MethodInfo_4A032E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this_01,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  pSVar2 = (__this->fields)._triangles;
  if (pSVar2 == (System_Collections_Generic_List_int__array *)0x0) {
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar2->max_length) {
    uVar3 = pSVar2->max_length & 0xffffffff;
    uVar4 = 0;
    do {
      if (uVar3 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      Characters_TitanLimbMesh_CutMeshData__Remap(pSVar2->m_Items[uVar4],__this_00,__this_01,in_RCX);
      uVar4 = uVar4 + 1;
      uVar1 = (uint)pSVar2->max_length;
      uVar3 = (ulong)uVar1;
      in_RCX = (MethodInfo *)(long)(int)uVar1;
    } while ((long)uVar4 < (long)in_RCX);
  }
  Characters_TitanLimbMesh_CutMeshData__Remap((__this->fields)._wound,__this_00,__this_01,in_RCX);
  Characters_TitanLimbMesh_CutMeshData__Compact_Vector3_
            ((System_Collections_Generic_List_T__o *)(__this->fields)._vertices,__this_01,
             (MethodInfo_379D7E0 *)MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Vector3);
  Characters_TitanLimbMesh_CutMeshData__Compact_Vector3_
            ((System_Collections_Generic_List_T__o *)(__this->fields)._normals,__this_01,
             (MethodInfo_379D7E0 *)MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Vector3);
  Characters_TitanLimbMesh_CutMeshData__Compact_Vector4_
            ((System_Collections_Generic_List_T__o *)(__this->fields)._tangents,__this_01,
             (MethodInfo_379D950 *)MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Vector4);
  Characters_TitanLimbMesh_CutMeshData__Compact_Vector2_
            ((System_Collections_Generic_List_T__o *)(__this->fields)._uv,__this_01,
             (MethodInfo_379D680 *)MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Vector2);
  Characters_TitanLimbMesh_CutMeshData__Compact_Color32_
            ((System_Collections_Generic_List_T__o *)(__this->fields)._colors,__this_01,
             (MethodInfo_379D520 *)MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_Color32);
  Characters_TitanLimbMesh_CutMeshData__Compact_BoneWeight_
            ((System_Collections_Generic_List_T__o *)(__this->fields)._weights,__this_01,
             (MethodInfo_379D390 *)MethodInfo_Characters_TitanLimbMesh_CutMeshData_Compact_BoneWeight);
  return;
}


// Characters.TitanLimbMesh.CutMeshData$$Remap
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Remap (System_Collections_Generic_List_int__o* triangles, System_Collections_Generic_Dictionary_int__int__o* indices, System_Collections_Generic_List_int__o* used, const MethodInfo* method);
// 0x5c5dea0

void Characters_TitanLimbMesh_CutMeshData__Remap
               (System_Collections_Generic_List_int__o *triangles,
               System_Collections_Generic_Dictionary_int__int__o *indices,
               System_Collections_Generic_List_int__o *used,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int32_t value;
  uint uVar3;
  System_Int32_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  uint in_EAX;
  int32_t iVar7;
  int32_t iVar8;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_07547881 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_set_Item);
    Il2CppMethodInitialized_07547881 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if (triangles == (System_Collections_Generic_List_int__o *)0x0) {
label_05c5e0a1:
    ThrowNullReferenceException();
  }
  if (indices == (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
    if (0 < (triangles->fields)._size) {
      System_Collections_Generic_List_int___get_Item
                (triangles,0,(MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      ThrowNullReferenceException();
    }
  }
  else {
    iVar2 = (triangles->fields)._size;
    if (used == (System_Collections_Generic_List_int__o *)0x0) {
      if (0 < iVar2) {
        iVar8 = 0;
        do {
          iVar7 = System_Collections_Generic_List_int___get_Item
                            (triangles,iVar8,
                             (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          bVar6 = System_Collections_Generic_Dictionary_int__int___TryGetValue
                            (indices,iVar7,(int32_t *)((long)&uStack_38 + 4),
                             (MethodInfo_4A05BD0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
          if (!bVar6) goto label_05c5e0a1;
          System_Collections_Generic_List_int___set_Item
                    (triangles,iVar8,uStack_38._4_4_,
                     (MethodInfo_3916810 *)MethodInfo_System_Collections_Generic_List_int_set_Item);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (triangles->fields)._size);
      }
    }
    else if (0 < iVar2) {
      iVar8 = 0;
      do {
        iVar7 = System_Collections_Generic_List_int___get_Item
                          (triangles,iVar8,
                           (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        bVar6 = System_Collections_Generic_Dictionary_int__int___TryGetValue
                          (indices,iVar7,(int32_t *)((long)&uStack_38 + 4),
                           (MethodInfo_4A05BD0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
        if (!bVar6) {
          value = (used->fields)._size;
          uStack_38 = CONCAT44(value,(uint)uStack_38);
          System_Collections_Generic_Dictionary_int__int___Add
                    (indices,iVar7,value,
                     (MethodInfo_4A03F20 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Add);
          pMVar5 = MethodInfo_System_Collections_Generic_List_int_Add;
          piVar1 = &(used->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (used->fields)._items;
          if (pSVar4 == (System_Int32_array *)0x0) goto label_05c5e0a1;
          uVar3 = (used->fields)._size;
          if (uVar3 < (uint)pSVar4->max_length) {
            (used->fields)._size = uVar3 + 1;
            pSVar4->m_Items[(int)uVar3] = iVar7;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (used,iVar7,(MethodInfo_3916AC0 *)pMVar5->klass->rgctx_data[0xe].method);
          }
        }
        System_Collections_Generic_List_int___set_Item
                  (triangles,iVar8,uStack_38._4_4_,
                   (MethodInfo_3916810 *)MethodInfo_System_Collections_Generic_List_int_set_Item);
        iVar8 = iVar8 + 1;
      } while (iVar8 < (triangles->fields)._size);
    }
  }
  return;
}


// Characters.TitanLimbMesh.CutMeshData$$Compact<BoneWeight>
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact_BoneWeight_ (System_Collections_Generic_List_T__o* values, System_Collections_Generic_List_int__o* used, const MethodInfo_379D390* method);
// 0x389d390

void Characters_TitanLimbMesh_CutMeshData__Compact_BoneWeight_
               (System_Collections_Generic_List_T__o *values,System_Collections_Generic_List_int__o *used,
               MethodInfo_379D390 *method)

{
  int32_t *piVar1;
  uint32_t length;
  Il2CppObject *pIVar2;
  int32_t iVar3;
  Il2CppClass *klass;
  Il2CppObject *collection;
  ulong uVar4;
  Il2CppClass *pIStack_50;
  void *pvStack_48;
  Il2CppClass *pIStack_40;
  void *pvStack_38;
  
  if (method->rgctx_data == (MethodInfo_379D390_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (method->rgctx_data == (MethodInfo_379D390_RGCTXs *)0x0) {
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
    if (0 < (used->fields)._size) {
      if (values == (System_Collections_Generic_List_T__o *)0x0) {
        System_Collections_Generic_List_int___get_Item
                  (used,0,(MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        ThrowNullReferenceException();
      }
      if (collection == (Il2CppObject *)0x0) {
        iVar3 = System_Collections_Generic_List_int___get_Item
                          (used,0,(MethodInfo_39167D0 *)
                                  MethodInfo_System_Collections_Generic_List_int_get_Item);
        System_Collections_Generic_List_BoneWeight___get_Item
                  ((UnityEngine_BoneWeight_o *)&pIStack_50,
                   (System_Collections_Generic_List_BoneWeight__o *)values,iVar3,
                   (MethodInfo_51D8790 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
        ThrowNullReferenceException();
      }
      uVar4 = 0;
      pIVar2 = collection;
      do {
        iVar3 = System_Collections_Generic_List_int___get_Item
                          (used,(int32_t)uVar4,
                           (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        System_Collections_Generic_List_BoneWeight___get_Item
                  ((UnityEngine_BoneWeight_o *)&pIStack_50,
                   (System_Collections_Generic_List_BoneWeight__o *)values,iVar3,
                   (MethodInfo_51D8790 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
        if (*(uint *)&collection[1].monitor <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        pIVar2[3].klass = pIStack_40;
        pIVar2[3].monitor = pvStack_38;
        pIVar2[2].klass = pIStack_50;
        pIVar2[2].monitor = pvStack_48;
        uVar4 = uVar4 + 1;
        pIVar2 = pIVar2 + 2;
      } while ((long)uVar4 < (long)(used->fields)._size);
    }
    if (values != (System_Collections_Generic_List_T__o *)0x0) {
      piVar1 = &(values->fields)._version;
      *piVar1 = *piVar1 + 1;
      (values->fields)._size = 0;
      System_Collections_Generic_List_BoneWeight___AddRange
                ((System_Collections_Generic_List_BoneWeight__o *)values,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_51D8DE0 *)method->rgctx_data->_5_System_Collections_Generic_List_T__AddRange);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Compact<Color32>
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact_Color32_ (System_Collections_Generic_List_T__o* values, System_Collections_Generic_List_int__o* used, const MethodInfo_379D520* method);
// 0x389d520

void Characters_TitanLimbMesh_CutMeshData__Compact_Color32_
               (System_Collections_Generic_List_T__o *values,System_Collections_Generic_List_int__o *used,
               MethodInfo_379D520 *method)

{
  int32_t *piVar1;
  uint32_t length;
  int32_t iVar2;
  UnityEngine_Color32_Fields UVar3;
  Il2CppClass *klass;
  Il2CppObject *collection;
  ulong uVar4;
  
  if (method->rgctx_data == (MethodInfo_379D520_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (method->rgctx_data == (MethodInfo_379D520_RGCTXs *)0x0) {
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
    if (0 < (used->fields)._size) {
      if (values == (System_Collections_Generic_List_T__o *)0x0) {
        System_Collections_Generic_List_int___get_Item
                  (used,0,(MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        ThrowNullReferenceException();
      }
      if (collection == (Il2CppObject *)0x0) {
        iVar2 = System_Collections_Generic_List_int___get_Item
                          (used,0,(MethodInfo_39167D0 *)
                                  MethodInfo_System_Collections_Generic_List_int_get_Item);
        System_Collections_Generic_List_Color32___get_Item
                  ((System_Collections_Generic_List_Color32__o *)values,iVar2,
                   (MethodInfo_51EEE10 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
        ThrowNullReferenceException();
      }
      uVar4 = 0;
      do {
        iVar2 = System_Collections_Generic_List_int___get_Item
                          (used,(int32_t)uVar4,
                           (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        UVar3._overlap_0 =
             (_union_53531)
             System_Collections_Generic_List_Color32___get_Item
                       ((System_Collections_Generic_List_Color32__o *)values,iVar2,
                        (MethodInfo_51EEE10 *)
                        method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
        if (*(uint *)&collection[1].monitor <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        (((UnityEngine_Color32_Fields *)((long)&collection[2].klass + uVar4 * 4))->_overlap_0)._at_rgba =
             (_struct_53532)UVar3._overlap_0;
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(used->fields)._size);
    }
    if (values != (System_Collections_Generic_List_T__o *)0x0) {
      piVar1 = &(values->fields)._version;
      *piVar1 = *piVar1 + 1;
      (values->fields)._size = 0;
      System_Collections_Generic_List_Color32___AddRange
                ((System_Collections_Generic_List_Color32__o *)values,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_51EF330 *)method->rgctx_data->_5_System_Collections_Generic_List_T__AddRange);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Compact<Vector2>
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact_Vector2_ (System_Collections_Generic_List_T__o* values, System_Collections_Generic_List_int__o* used, const MethodInfo_379D680* method);
// 0x389d680

void Characters_TitanLimbMesh_CutMeshData__Compact_Vector2_
               (System_Collections_Generic_List_T__o *values,System_Collections_Generic_List_int__o *used,
               MethodInfo_379D680 *method)

{
  int32_t *piVar1;
  uint32_t length;
  int32_t iVar2;
  Il2CppClass *klass;
  Il2CppObject *collection;
  ulong uVar3;
  UnityEngine_Vector2_Fields UVar4;
  
  if (method->rgctx_data == (MethodInfo_379D680_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (method->rgctx_data == (MethodInfo_379D680_RGCTXs *)0x0) {
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
    if (0 < (used->fields)._size) {
      if (values == (System_Collections_Generic_List_T__o *)0x0) {
        System_Collections_Generic_List_int___get_Item
                  (used,0,(MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        ThrowNullReferenceException();
      }
      if (collection == (Il2CppObject *)0x0) {
        iVar2 = System_Collections_Generic_List_int___get_Item
                          (used,0,(MethodInfo_39167D0 *)
                                  MethodInfo_System_Collections_Generic_List_int_get_Item);
        System_Collections_Generic_List_Vector2___get_Item
                  ((System_Collections_Generic_List_Vector2__o *)values,iVar2,
                   (MethodInfo_39F9280 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
        ThrowNullReferenceException();
      }
      uVar3 = 0;
      do {
        iVar2 = System_Collections_Generic_List_int___get_Item
                          (used,(int32_t)uVar3,
                           (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        UVar4 = (UnityEngine_Vector2_Fields)
                System_Collections_Generic_List_Vector2___get_Item
                          ((System_Collections_Generic_List_Vector2__o *)values,iVar2,
                           (MethodInfo_39F9280 *)
                           method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
        if (*(uint *)&collection[1].monitor <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        *(UnityEngine_Vector2_Fields *)(&collection[2].klass + uVar3) = UVar4;
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(used->fields)._size);
    }
    if (values != (System_Collections_Generic_List_T__o *)0x0) {
      piVar1 = &(values->fields)._version;
      *piVar1 = *piVar1 + 1;
      (values->fields)._size = 0;
      System_Collections_Generic_List_Vector2___AddRange
                ((System_Collections_Generic_List_Vector2__o *)values,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_39F97E0 *)method->rgctx_data->_5_System_Collections_Generic_List_T__AddRange);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Compact<Vector3>
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact_Vector3_ (System_Collections_Generic_List_T__o* values, System_Collections_Generic_List_int__o* used, const MethodInfo_379D7E0* method);
// 0x389d7e0

void Characters_TitanLimbMesh_CutMeshData__Compact_Vector3_
               (System_Collections_Generic_List_T__o *values,System_Collections_Generic_List_int__o *used,
               MethodInfo_379D7E0 *method)

{
  int32_t *piVar1;
  uint32_t length;
  int32_t iVar2;
  Il2CppClass *klass;
  Il2CppObject *collection;
  ulong uVar3;
  void **ppvVar4;
  UnityEngine_Vector3_o UVar5;
  
  if (method->rgctx_data == (MethodInfo_379D7E0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (method->rgctx_data == (MethodInfo_379D7E0_RGCTXs *)0x0) {
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
    if (0 < (used->fields)._size) {
      if (values == (System_Collections_Generic_List_T__o *)0x0) {
        System_Collections_Generic_List_int___get_Item
                  (used,0,(MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        ThrowNullReferenceException();
      }
      if (collection == (Il2CppObject *)0x0) {
        iVar2 = System_Collections_Generic_List_int___get_Item
                          (used,0,(MethodInfo_39167D0 *)
                                  MethodInfo_System_Collections_Generic_List_int_get_Item);
        System_Collections_Generic_List_Vector3___get_Item
                  ((System_Collections_Generic_List_Vector3__o *)values,iVar2,
                   (MethodInfo_39FF5D0 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
        ThrowNullReferenceException();
      }
      ppvVar4 = &collection[2].monitor;
      uVar3 = 0;
      do {
        iVar2 = System_Collections_Generic_List_int___get_Item
                          (used,(int32_t)uVar3,
                           (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        UVar5 = System_Collections_Generic_List_Vector3___get_Item
                          ((System_Collections_Generic_List_Vector3__o *)values,iVar2,
                           (MethodInfo_39FF5D0 *)
                           method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
        if (*(uint *)&collection[1].monitor <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        ((Il2CppObject *)(ppvVar4 + -1))->klass = UVar5.fields._0_8_;
        *(float *)ppvVar4 = UVar5.fields.z;
        uVar3 = uVar3 + 1;
        ppvVar4 = (void **)((long)ppvVar4 + 0xc);
      } while ((long)uVar3 < (long)(used->fields)._size);
    }
    if (values != (System_Collections_Generic_List_T__o *)0x0) {
      piVar1 = &(values->fields)._version;
      *piVar1 = *piVar1 + 1;
      (values->fields)._size = 0;
      System_Collections_Generic_List_Vector3___AddRange
                ((System_Collections_Generic_List_Vector3__o *)values,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_39FFBC0 *)method->rgctx_data->_5_System_Collections_Generic_List_T__AddRange);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Compact<Vector4>
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact_Vector4_ (System_Collections_Generic_List_T__o* values, System_Collections_Generic_List_int__o* used, const MethodInfo_379D950* method);
// 0x389d950

void Characters_TitanLimbMesh_CutMeshData__Compact_Vector4_
               (System_Collections_Generic_List_T__o *values,System_Collections_Generic_List_int__o *used,
               MethodInfo_379D950 *method)

{
  int32_t *piVar1;
  uint32_t length;
  int32_t iVar2;
  Il2CppClass *klass;
  Il2CppObject *collection;
  ulong uVar3;
  void **ppvVar4;
  Il2CppObject IVar5;
  
  if (method->rgctx_data == (MethodInfo_379D950_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (method->rgctx_data == (MethodInfo_379D950_RGCTXs *)0x0) {
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
    if (0 < (used->fields)._size) {
      if (values == (System_Collections_Generic_List_T__o *)0x0) {
        System_Collections_Generic_List_int___get_Item
                  (used,0,(MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        ThrowNullReferenceException();
      }
      if (collection == (Il2CppObject *)0x0) {
        iVar2 = System_Collections_Generic_List_int___get_Item
                          (used,0,(MethodInfo_39167D0 *)
                                  MethodInfo_System_Collections_Generic_List_int_get_Item);
        System_Collections_Generic_List_Vector4___get_Item
                  ((System_Collections_Generic_List_Vector4__o *)values,iVar2,
                   (MethodInfo_3A029B0 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
        ThrowNullReferenceException();
      }
      ppvVar4 = &collection[2].monitor;
      uVar3 = 0;
      do {
        iVar2 = System_Collections_Generic_List_int___get_Item
                          (used,(int32_t)uVar3,
                           (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        IVar5 = (Il2CppObject)
                System_Collections_Generic_List_Vector4___get_Item
                          ((System_Collections_Generic_List_Vector4__o *)values,iVar2,
                           (MethodInfo_3A029B0 *)
                           method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
        if (*(uint *)&collection[1].monitor <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        *(Il2CppObject *)(ppvVar4 + -1) = IVar5;
        uVar3 = uVar3 + 1;
        ppvVar4 = ppvVar4 + 2;
      } while ((long)uVar3 < (long)(used->fields)._size);
    }
    if (values != (System_Collections_Generic_List_T__o *)0x0) {
      piVar1 = &(values->fields)._version;
      *piVar1 = *piVar1 + 1;
      (values->fields)._size = 0;
      System_Collections_Generic_List_Vector4___AddRange
                ((System_Collections_Generic_List_Vector4__o *)values,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_3A02F70 *)method->rgctx_data->_5_System_Collections_Generic_List_T__AddRange);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$Compact<__Il2CppFullySharedGenericType>
// il2cpp: void Characters_TitanLimbMesh_CutMeshData__Compact___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* values, System_Collections_Generic_List_int__o* used, const MethodInfo_379DAC0* method);
// 0x389dac0

void Characters_TitanLimbMesh_CutMeshData__Compact___Il2CppFullySharedGenericType_
               (System_Collections_Generic_List_T__o *values,System_Collections_Generic_List_int__o *used,
               MethodInfo_379DAC0 *method)

{
  uint32_t length;
  uint uVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  long lVar5;
  Il2CppClass **ppIVar6;
  ulong __n;
  MethodInfo_379DAC0 *pMVar7;
  System_Collections_Generic_List_T__o *pSVar8;
  MethodInfo_379DAC0_RGCTXs *pMVar9;
  Il2CppClass *pIVar10;
  Il2CppObject *pIVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *__src;
  undefined8 uStack_70;
  ulong local_68;
  Il2CppObject *local_60;
  int32_t *local_58;
  undefined1 *local_50;
  MethodInfo_379DAC0 *local_48;
  System_Collections_Generic_List_T__o *local_40;
  int32_t local_34;
  
  pMVar9 = method->rgctx_data;
  if (pMVar9 == (MethodInfo_379DAC0_RGCTXs *)0x0) {
    uStack_70 = 0x389daef;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    uStack_70 = 0x389dafb;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    pMVar9 = method->rgctx_data;
    if (pMVar9 == (MethodInfo_379DAC0_RGCTXs *)0x0) {
      uStack_70 = 0x389db0c;
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar9 = method->rgctx_data;
    }
  }
  local_68 = (ulong)(pMVar9->_3_T->_2).stack_slot_size;
  lVar5 = -(local_68 + 0xf & 0xfffffffffffffff0);
  __src = (undefined1 *)((long)&local_68 + lVar5);
  puVar12 = __src;
  if (used != (System_Collections_Generic_List_int__o *)0x0) {
    length = (used->fields)._size;
    pIVar10 = pMVar9->_0_T__;
    local_48 = method;
    local_40 = values;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((long)&uStack_70 + lVar5) = 0x389db56;
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
      puVar12 = (undefined1 *)((long)&local_68 + lVar5);
    }
    *(undefined8 *)(puVar12 + -8) = 0x389db61;
    pIVar11 = SZArrayNew(pIVar10,length);
    if (0 < (used->fields)._size) {
      if (local_40 == (System_Collections_Generic_List_T__o *)0x0) {
        *(undefined8 *)(puVar12 + -8) = 0x389dcb6;
        System_Collections_Generic_List_int___get_Item
                  (used,0,(MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        *(undefined8 *)(puVar12 + -8) = 0x389dcbb;
        ThrowNullReferenceException();
      }
      if (pIVar11 == (Il2CppObject *)0x0) {
        *(undefined8 *)(puVar12 + -8) = 0x389dccf;
        local_34 = System_Collections_Generic_List_int___get_Item
                             (used,0,(MethodInfo_39167D0 *)
                                     MethodInfo_System_Collections_Generic_List_int_get_Item);
        pSVar8 = local_40;
        pMVar2 = local_48->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
        pIVar3 = pMVar2->methodPointer;
        local_58 = &local_34;
        pIVar4 = pMVar2->invoker_method;
        local_50 = __src;
        *(undefined8 *)(puVar12 + -8) = 0x389dcfb;
        (*pIVar4)(pIVar3,pMVar2,pSVar8,&local_58,__src);
        *(code **)(puVar12 + -8) = Unity_Properties_TypeConversion_PrimitivesConverters__DoConvert_bool_;
        ThrowNullReferenceException();
      }
      local_60 = pIVar11 + 2;
      uVar13 = 0;
      do {
        *(undefined8 *)(puVar12 + -8) = 0x389dbb8;
        local_34 = System_Collections_Generic_List_int___get_Item
                             (used,(int32_t)uVar13,
                              (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        pSVar8 = local_40;
        pMVar7 = local_48;
        pMVar2 = local_48->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
        pIVar3 = pMVar2->methodPointer;
        local_58 = &local_34;
        pIVar4 = pMVar2->invoker_method;
        local_50 = __src;
        *(undefined8 *)(puVar12 + -8) = 0x389dbe5;
        (*pIVar4)(pIVar3,pMVar2,pSVar8,&local_58,__src);
        __n = local_68;
        if (*(uint *)&pIVar11[1].monitor <= uVar13) {
label_0389dc98:
          *(undefined8 *)(puVar12 + -8) = 0x389dc9d;
          ThrowIndexOutOfRangeException();
        }
        uVar1 = (pIVar11->klass->_2).element_size;
        ppIVar6 = &local_60->klass;
        *(undefined8 *)(puVar12 + -8) = 0x389dc0f;
        memcpy((Il2CppClass **)((long)ppIVar6 + uVar1 * uVar13),__src,__n);
        pIVar10 = pMVar7->rgctx_data->_3_T;
        if (((pIVar10->_2).bitflags1 & 1) == 0) {
          *(undefined8 *)(puVar12 + -8) = 0x389dc26;
          pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
        }
        if (*(uint *)&pIVar11[1].monitor <= uVar13) goto label_0389dc98;
        uVar1 = (pIVar11->klass->_2).element_size;
        ppIVar6 = &local_60->klass;
        *(undefined8 *)(puVar12 + -8) = 0x389dc4e;
        il2cpp_runtime_helper_030d5fd0(pIVar10,(Il2CppClass **)((long)ppIVar6 + uVar1 * uVar13),__src);
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)(used->fields)._size);
    }
    pSVar8 = local_40;
    pMVar7 = local_48;
    if (local_40 != (System_Collections_Generic_List_T__o *)0x0) {
      pIVar3 = local_48->rgctx_data->_4_System_Collections_Generic_List_T__Clear->methodPointer;
      *(undefined8 *)(puVar12 + -8) = 0x389dc79;
      (*pIVar3)(pSVar8);
      pIVar3 = pMVar7->rgctx_data->_5_System_Collections_Generic_List_T__AddRange->methodPointer;
      *(undefined8 *)(puVar12 + -8) = 0x389dc89;
      (*pIVar3)(pSVar8,pIVar11);
      return;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x389dca2;
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh.CutMeshData$$CreateMesh
// il2cpp: UnityEngine_Mesh_o* Characters_TitanLimbMesh_CutMeshData__CreateMesh (Characters_TitanLimbMesh_CutMeshData_o* __this, Characters_TitanLimbMesh_MeshSource_o* source, bool detached, const MethodInfo* method);
// 0x5c57da0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c57dbe: test r15b, r15b
// asm:   0x5c57dc1: jne 0x5c57dfd
// asm:   0x5c57dc3: test rbp, rbp
// asm:   0x5c57dc8: jmp 0x5c57f61
// asm:   0x5c57f2d: nop dword ptr [rax]

UnityEngine_Mesh_o *
Characters_TitanLimbMesh_CutMeshData__CreateMesh
          (Characters_TitanLimbMesh_CutMeshData_o *__this,Characters_TitanLimbMesh_MeshSource_o *source,
          bool detached,MethodInfo *method)

{
  uint submesh;
  UnityEngine_Object_o *__this_00;
  System_Collections_Generic_List_BoneWeight__o *__this_01;
  UnityEngine_Bounds_o value;
  int32_t value_00;
  UnityEngine_Object_o *__this_02;
  System_String_o *pSVar1;
  UnityEngine_BoneWeight_array *value_01;
  System_Collections_Generic_List_int__array *pSVar2;
  System_Int32_array *triangles;
  ulong uVar3;
  MethodInfo *method_00;
  UnityEngine_Bounds_o local_40;
  
  method_00 = (MethodInfo *)source;
  if (Il2CppMethodInitialized_07547882 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BoneWeight_ToArray)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&" Limb Cut");
    Il2CppMethodInitialized_07547882 = '\x01';
  }
  if (detached) {
    Characters_TitanLimbMesh_CutMeshData__Compact(__this,method_00);
  }
  if (source != (Characters_TitanLimbMesh_MeshSource_o *)0x0) {
    __this_00 = (UnityEngine_Object_o *)(source->fields).Original;
    __this_02 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
    UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this_02,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat_52f0320(pSVar1," Limb Cut",(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_name(__this_02,pSVar1,(MethodInfo *)0x0);
        value_00 = UnityEngine_Mesh__get_indexFormat((UnityEngine_Mesh_o *)__this_00,(MethodInfo *)0x0);
        UnityEngine_Mesh__set_indexFormat((UnityEngine_Mesh_o *)__this_02,value_00,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetVertices
                  ((UnityEngine_Mesh_o *)__this_02,(__this->fields)._vertices,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetNormals
                  ((UnityEngine_Mesh_o *)__this_02,(__this->fields)._normals,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetTangents
                  ((UnityEngine_Mesh_o *)__this_02,(__this->fields)._tangents,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetUVs((UnityEngine_Mesh_o *)__this_02,0,(__this->fields)._uv,(MethodInfo *)0x0);
        UnityEngine_Mesh__SetColors_68e9610
                  ((UnityEngine_Mesh_o *)__this_02,(__this->fields)._colors,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._weights;
        if (__this_01 != (System_Collections_Generic_List_BoneWeight__o *)0x0) {
          value_01 = System_Collections_Generic_List_BoneWeight___ToArray
                               (__this_01,
                                (MethodInfo_51DB220 *)
                                MethodInfo_System_Collections_Generic_List_BoneWeight_ToArray);
          UnityEngine_Mesh__set_boneWeights((UnityEngine_Mesh_o *)__this_02,value_01,(MethodInfo *)0x0);
          UnityEngine_Mesh__set_bindposes
                    ((UnityEngine_Mesh_o *)__this_02,(source->fields).Bindposes,(MethodInfo *)0x0);
          pSVar2 = (__this->fields)._triangles;
          if (pSVar2 != (System_Collections_Generic_List_int__array *)0x0) {
            UnityEngine_Mesh__set_subMeshCount
                      ((UnityEngine_Mesh_o *)__this_02,((int)pSVar2->max_length - (uint)detached) + 2,
                       (MethodInfo *)0x0);
            pSVar2 = (__this->fields)._triangles;
            if (pSVar2 != (System_Collections_Generic_List_int__array *)0x0) {
              uVar3 = 0;
              do {
                submesh = (uint)pSVar2->max_length;
                if ((long)(int)submesh <= (long)uVar3) {
                  UnityEngine_Mesh__SetTriangles_68eb1e0
                            ((UnityEngine_Mesh_o *)__this_02,(__this->fields)._wound,submesh,(MethodInfo *)0x0
                            );
                  if (detached) {
                    UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)__this_02,(MethodInfo *)0x0);
                  }
                  else {
                    triangles = UnityEngine_Mesh__get_triangles
                                          ((UnityEngine_Mesh_o *)__this_02,(MethodInfo *)0x0);
                    pSVar2 = (__this->fields)._triangles;
                    if (pSVar2 == (System_Collections_Generic_List_int__array *)0x0) break;
                    UnityEngine_Mesh__SetTriangles
                              ((UnityEngine_Mesh_o *)__this_02,triangles,(int)pSVar2->max_length + 1,
                               (MethodInfo *)0x0);
                    UnityEngine_Mesh__get_bounds(&local_40,(UnityEngine_Mesh_o *)__this_00,(MethodInfo *)0x0);
                    value.fields.m_Center.fields.z = local_40.fields.m_Center.fields.z;
                    value.fields.m_Extents.fields.x = local_40.fields.m_Extents.fields.x;
                    value.fields.m_Center.fields.x = local_40.fields.m_Center.fields.x;
                    value.fields.m_Center.fields.y = local_40.fields.m_Center.fields.y;
                    value.fields.m_Extents.fields.y = local_40.fields.m_Extents.fields.y;
                    value.fields.m_Extents.fields.z = local_40.fields.m_Extents.fields.z;
                    UnityEngine_Mesh__set_bounds((UnityEngine_Mesh_o *)__this_02,value,(MethodInfo *)0x0);
                  }
                  return (UnityEngine_Mesh_o *)__this_02;
                }
                if (submesh <= uVar3) {
                  ThrowIndexOutOfRangeException();
                }
                UnityEngine_Mesh__SetTriangles_68eb1e0
                          ((UnityEngine_Mesh_o *)__this_02,pSVar2->m_Items[uVar3],(int32_t)uVar3,
                           (MethodInfo *)0x0);
                uVar3 = uVar3 + 1;
                pSVar2 = (__this->fields)._triangles;
              } while (pSVar2 != (System_Collections_Generic_List_int__array *)0x0);
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
// 0x5c53e30

void Characters_TitanLimbMesh___ctor
               (Characters_TitanLimbMesh_o *__this,UnityEngine_SkinnedMeshRenderer_o *renderer,
               UnityEngine_Transform_o *leftHand,UnityEngine_Transform_o *rightHand,
               UnityEngine_Material_o *woundMaterial,MethodInfo *method)

{
  Characters_TitanLimbMesh_MeshSource_o *pCVar1;
  UnityEngine_Mesh_o *__this_00;
  int32_t iVar2;
  UnityEngine_SkinnedMeshRenderer_array *pUVar3;
  UnityEngine_MaterialPropertyBlock_o *__this_01;
  Characters_TitanLimbMesh_CachedBody_o *pCVar4;
  System_Collections_Generic_List_Material__o *__this_02;
  UnityEngine_Transform_array *pUVar5;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)rightHand;
  if (Il2CppMethodInitialized_07547861 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_ctor_7195768);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
    Il2CppMethodInitialized_07547861 = '\x01';
  }
  pUVar3 = (UnityEngine_SkinnedMeshRenderer_array *)
           SZArrayNew(TypeInfo_UnityEngine_SkinnedMeshRenderer_array,2);
  (__this->fields)._regrowth = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._regrowth);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
  UnityEngine_MaterialPropertyBlock___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields)._growthProperties = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._growthProperties);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._renderer = renderer;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._renderer);
  (__this->fields)._woundMaterial = woundMaterial;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._woundMaterial);
  if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
  }
  pCVar4 = Characters_TitanLimbMesh__GetBody(renderer,leftHand,rightHand,method_00);
  (__this->fields)._body = pCVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._body);
  pCVar4 = (__this->fields)._body;
  if (((pCVar4 != (Characters_TitanLimbMesh_CachedBody_o *)0x0) &&
      (pCVar1 = (pCVar4->fields).Source, pCVar1 != (Characters_TitanLimbMesh_MeshSource_o *)0x0)) &&
     (__this_00 = (pCVar1->fields).Original, __this_00 != (UnityEngine_Mesh_o *)0x0)) {
    iVar2 = UnityEngine_Mesh__get_subMeshCount(__this_00,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
    System_Collections_Generic_List_object____ctor_395c990
              ((System_Collections_Generic_List_object__o *)__this_02,iVar2 + 1,
               (MethodInfo_395C990 *)MethodInfo_System_Collections_Generic_List_Material_ctor_7195768);
    (__this->fields)._materials = __this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._materials);
    if (renderer != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      pUVar5 = UnityEngine_SkinnedMeshRenderer__get_bones(renderer,(MethodInfo *)0x0);
      (__this->fields)._bones = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bones);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh$$Prewarm
// il2cpp: void Characters_TitanLimbMesh__Prewarm (UnityEngine_SkinnedMeshRenderer_o* renderer, UnityEngine_Transform_o* leftHand, UnityEngine_Transform_o* rightHand, const MethodInfo* method);
// 0x5c41960

void Characters_TitanLimbMesh__Prewarm
               (UnityEngine_SkinnedMeshRenderer_o *renderer,UnityEngine_Transform_o *leftHand,
               UnityEngine_Transform_o *rightHand,MethodInfo *method)

{
  Characters_TitanLimbMesh_CachedBody_o *__this;
  
  if (Il2CppMethodInitialized_07547862 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
    Il2CppMethodInitialized_07547862 = '\x01';
  }
  if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
  }
  __this = Characters_TitanLimbMesh__GetBody(renderer,leftHand,rightHand,method);
  if (__this == (Characters_TitanLimbMesh_CachedBody_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_TitanLimbMesh_CachedBody__Prewarm(__this,(MethodInfo *)leftHand);
  return;
}


// Characters.TitanLimbMesh$$GetBody
// il2cpp: Characters_TitanLimbMesh_CachedBody_o* Characters_TitanLimbMesh__GetBody (UnityEngine_SkinnedMeshRenderer_o* renderer, UnityEngine_Transform_o* leftHand, UnityEngine_Transform_o* rightHand, const MethodInfo* method);
// 0x5c53fe0

Characters_TitanLimbMesh_CachedBody_o *
Characters_TitanLimbMesh__GetBody
          (UnityEngine_SkinnedMeshRenderer_o *renderer,UnityEngine_Transform_o *leftHand,
          UnityEngine_Transform_o *rightHand,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
  *pSVar1;
  System_ValueTuple_object__int__int__int__int__int__int__o key;
  System_ValueTuple_object__int__int__int__int__int__int__o key_00;
  bool bVar2;
  int32_t item5;
  int32_t item6;
  int32_t item7;
  UnityEngine_Transform_array *array;
  UnityEngine_Mesh_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  Characters_TitanLimbMesh_CachedBody_o *__this;
  MethodInfo *method_00;
  Characters_TitanLimbMesh_CachedBody_o *local_80;
  uint local_74;
  int32_t local_70;
  int32_t local_6c;
  UnityEngine_SkinnedMeshRenderer_o *local_68;
  UnityEngine_Mesh_o *local_60;
  System_ValueTuple_object__int__int__int__int__int__int__o local_58;
  
  if (Il2CppMethodInitialized_07547863 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh_CachedBody);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_71890c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_71890d0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_ValueTuple_Mesh_int_int_int_int_int_int_ctor);
    Il2CppMethodInitialized_07547863 = '\x01';
  }
  local_58.fields.Item4 = 0;
  local_58.fields.Item5 = 0;
  local_58.fields.Item6 = 0;
  local_58.fields.Item7 = 0;
  local_58.fields.Item1 = (Il2CppObject *)0x0;
  local_58.fields.Item2 = 0;
  local_58.fields.Item3 = 0;
  local_80 = (Characters_TitanLimbMesh_CachedBody_o *)0x0;
  if (renderer != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    array = UnityEngine_SkinnedMeshRenderer__get_bones(renderer,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(renderer,(MethodInfo *)0x0);
    local_6c = System_Array__IndexOf_object_
                         ((System_Object_array *)array,(Il2CppObject *)leftHand,
                          (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_Transform);
    if (leftHand != (UnityEngine_Transform_o *)0x0) {
      local_60 = pUVar3;
      pUVar4 = UnityEngine_Transform__get_parent(leftHand,(MethodInfo *)0x0);
      local_70 = System_Array__IndexOf_object_
                           ((System_Object_array *)array,(Il2CppObject *)pUVar4,
                            (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_Transform);
      pUVar4 = UnityEngine_Transform__get_parent(leftHand,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        local_68 = renderer;
        pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
        local_74 = System_Array__IndexOf_object_
                             ((System_Object_array *)array,(Il2CppObject *)pUVar4,
                              (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_Transform);
        item5 = System_Array__IndexOf_object_
                          ((System_Object_array *)array,(Il2CppObject *)rightHand,
                           (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_Transform);
        if (rightHand != (UnityEngine_Transform_o *)0x0) {
          pUVar4 = UnityEngine_Transform__get_parent(rightHand,(MethodInfo *)0x0);
          item6 = System_Array__IndexOf_object_
                            ((System_Object_array *)array,(Il2CppObject *)pUVar4,
                             (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_Transform);
          pUVar4 = UnityEngine_Transform__get_parent(rightHand,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
            item7 = System_Array__IndexOf_object_
                              ((System_Object_array *)array,(Il2CppObject *)pUVar4,
                               (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_Transform);
            method_00 = (MethodInfo *)(ulong)local_74;
            System_ValueTuple_object__int__int__int__int__int__int____ctor
                      (&local_58,(Il2CppObject *)local_60,local_6c,local_70,local_74,item5,item6,item7,
                       (MethodInfo_45982B0 *)MethodInfo_System_ValueTuple_Mesh_int_int_int_int_int_int_ctor);
            if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
            }
            pSVar1 = TypeInfo_Characters_TitanLimbMesh->static_fields->Bodies;
            if (pSVar1 != (System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
                           *)0x0) {
              key.fields.Item2 = local_58.fields.Item2;
              key.fields.Item1 = local_58.fields.Item1;
              key.fields.Item3 = local_58.fields.Item3;
              key.fields.Item4 = local_58.fields.Item4;
              key.fields.Item5 = local_58.fields.Item5;
              key.fields.Item6 = local_58.fields.Item6;
              key.fields.Item7 = local_58.fields.Item7;
              bVar2 = System_Collections_Generic_Dictionary_ValueTuple_object__int__int__int__int__int__int___object___TryGetValue
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,key,
                                 (Il2CppObject **)&local_80,
                                 (MethodInfo_49B8D70 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_71890d0
                                );
              if (!bVar2) {
                __this = il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh_CachedBody);
                Characters_TitanLimbMesh_CachedBody___ctor(__this,local_68,leftHand,rightHand,method_00);
                local_80 = __this;
                if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
                }
                pSVar1 = TypeInfo_Characters_TitanLimbMesh->static_fields->Bodies;
                if (pSVar1 == (System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
                               *)0x0) goto label_05c5427f;
                key_00.fields.Item2 = local_58.fields.Item2;
                key_00.fields.Item1 = local_58.fields.Item1;
                key_00.fields.Item3 = local_58.fields.Item3;
                key_00.fields.Item4 = local_58.fields.Item4;
                key_00.fields.Item5 = local_58.fields.Item5;
                key_00.fields.Item6 = local_58.fields.Item6;
                key_00.fields.Item7 = local_58.fields.Item7;
                System_Collections_Generic_Dictionary_ValueTuple_object__int__int__int__int__int__int___object___Add
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,key_00,
                           (Il2CppObject *)local_80,
                           (MethodInfo_49B6A90 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_71890c0
                          );
              }
              return local_80;
            }
          }
        }
      }
    }
  }
label_05c5427f:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh$$Detach
// il2cpp: void Characters_TitanLimbMesh__Detach (Characters_TitanLimbMesh_o* __this, bool left, bool arm, bool handDisabled, float handGrowth, UnityEngine_Vector3_o velocity, const MethodInfo* method);
// 0x5c54910

void Characters_TitanLimbMesh__Detach
               (Characters_TitanLimbMesh_o *__this,bool left,bool arm,bool handDisabled,float handGrowth,
               UnityEngine_Vector3_o velocity,MethodInfo *method)

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
  MethodInfo *method_00;
  MethodInfo *in_R9;
  UnityEngine_Mesh_o *growth;
  
  if (Il2CppMethodInitialized_07547864 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    Il2CppMethodInitialized_07547864 = '\x01';
  }
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    bVar2 = UnityEngine_Renderer__get_enabled(__this_00,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    __this_01 = (UnityEngine_Component_o *)(__this->fields)._renderer;
    if ((__this_01 != (UnityEngine_Component_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      bVar2 = UnityEngine_GameObject__get_activeInHierarchy(__this_02,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pCVar1 = (__this->fields)._body;
      if (pCVar1 != (Characters_TitanLimbMesh_CachedBody_o *)0x0) {
        method_00 = (MethodInfo *)(ulong)handDisabled;
        limb = Characters_TitanLimbMesh_CachedBody__GetDetached
                         (pCVar1,left,arm,handDisabled,0.0 < handGrowth && (arm && handDisabled),in_R9);
        if (0.0 < handGrowth && (arm && handDisabled)) {
          pCVar1 = (__this->fields)._body;
          if ((pCVar1 == (Characters_TitanLimbMesh_CachedBody_o *)0x0) ||
             (pCVar3 = Characters_TitanLimbMesh_CachedBody__GetRegrowth(pCVar1,left,false,method_00),
             pCVar3 == (Characters_TitanLimbMesh_RegrowthMesh_o *)0x0)) goto label_05c54a5f;
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
        Characters_TitanLimbFallEffect__Play
                  (source,limb,wound,growth,handGrowth,velocity,(UnityEngine_Transform_o *)0x0,in_R9);
        return;
      }
    }
  }
label_05c54a5f:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh$$SetDisabled
// il2cpp: void Characters_TitanLimbMesh__SetDisabled (Characters_TitanLimbMesh_o* __this, bool leftHand, bool rightHand, bool leftArm, bool rightArm, bool leftRegrowing, bool rightRegrowing, const MethodInfo* method);
// 0x5c54d90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c54ecf: jmp 0x5c54f13

void Characters_TitanLimbMesh__SetDisabled
               (Characters_TitanLimbMesh_o *__this,bool leftHand,bool rightHand,bool leftArm,bool rightArm,
               bool leftRegrowing,bool rightRegrowing,MethodInfo *method)

{
  Characters_TitanLimbMesh_CachedBody_o *pCVar1;
  UnityEngine_SkinnedMeshRenderer_o *__this_00;
  UnityEngine_Renderer_o *pUVar2;
  System_Collections_Generic_List_Material__o *__this_01;
  Characters_TitanLimbMesh_MeshSource_o *pCVar3;
  int iVar4;
  int32_t index;
  UnityEngine_Mesh_o *pUVar5;
  uint right;
  uint left;
  undefined3 in_register_00000089;
  undefined4 uVar6;
  undefined4 in_register_0000008c;
  int iVar7;
  
  uVar6 = CONCAT31(in_register_00000089,leftRegrowing);
  if (Il2CppMethodInitialized_07547865 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Remove);
    Il2CppMethodInitialized_07547865 = '\x01';
  }
  left = (uint)leftHand;
  if (leftArm) {
    left = 2;
  }
  right = (uint)rightHand;
  if (rightArm) {
    right = 2;
  }
  iVar4 = right * 3 + left;
  iVar7 = iVar4 + (uint)leftRegrowing * 9 + 0x12;
  if (!rightRegrowing) {
    iVar7 = iVar4 + (uint)leftRegrowing * 9;
  }
  if ((__this->fields)._state == iVar7) {
    return;
  }
  pCVar1 = (__this->fields)._body;
  if (pCVar1 != (Characters_TitanLimbMesh_CachedBody_o *)0x0) {
    __this_00 = (__this->fields)._renderer;
    pUVar5 = Characters_TitanLimbMesh_CachedBody__GetMesh
                       (pCVar1,left,right,leftRegrowing,rightRegrowing,
                        (MethodInfo *)CONCAT44(in_register_0000008c,uVar6));
    if (__this_00 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      UnityEngine_SkinnedMeshRenderer__set_sharedMesh(__this_00,pUVar5,(MethodInfo *)0x0);
      if ((iVar7 == 0) != ((__this->fields)._state != 0)) {
label_05c54f00:
        (__this->fields)._state = iVar7;
        return;
      }
      pUVar2 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
      if (pUVar2 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__GetSharedMaterials(pUVar2,(__this->fields)._materials,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._materials;
        if (iVar7 == 0) {
          if (__this_01 == (System_Collections_Generic_List_Material__o *)0x0) goto label_05c54f13;
          System_Collections_Generic_List_object___Remove
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)(__this->fields)._woundMaterial,
                     (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_Material_Remove);
          pUVar2 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
        }
        else {
          pCVar1 = (__this->fields)._body;
          if ((((pCVar1 == (Characters_TitanLimbMesh_CachedBody_o *)0x0) ||
               (pCVar3 = (pCVar1->fields).Source, pCVar3 == (Characters_TitanLimbMesh_MeshSource_o *)0x0)) ||
              (pUVar5 = (pCVar3->fields).Original, pUVar5 == (UnityEngine_Mesh_o *)0x0)) ||
             (index = UnityEngine_Mesh__get_subMeshCount(pUVar5,(MethodInfo *)0x0),
             __this_01 == (System_Collections_Generic_List_Material__o *)0x0)) goto label_05c54f13;
          System_Collections_Generic_List_object___Insert
                    ((System_Collections_Generic_List_object__o *)__this_01,index,
                     (Il2CppObject *)(__this->fields)._woundMaterial,
                     (MethodInfo_395E3E0 *)MethodInfo_System_Collections_Generic_List_Material_Insert);
          pUVar2 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
        }
        if (pUVar2 != (UnityEngine_Renderer_o *)0x0) {
          UnityEngine_Renderer__SetSharedMaterials(pUVar2,(__this->fields)._materials,(MethodInfo *)0x0);
          goto label_05c54f00;
        }
      }
    }
  }
label_05c54f13:
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh$$Dispose
// il2cpp: void Characters_TitanLimbMesh__Dispose (Characters_TitanLimbMesh_o* __this, const MethodInfo* method);
// 0x5c55140

void Characters_TitanLimbMesh__Dispose(Characters_TitanLimbMesh_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_SkinnedMeshRenderer_array *pUVar2;
  UnityEngine_Material_array *pUVar3;
  UnityEngine_Material_o *obj;
  bool bVar4;
  ulong uVar5;
  UnityEngine_Object_o *pUVar6;
  ulong uVar7;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (Il2CppMethodInitialized_07547866 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547866 = '\x01';
  }
  pUVar6 = (UnityEngine_Object_o *)(__this->fields)._renderer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    Characters_TitanLimbMesh__SetDisabled
              (__this,false,false,false,false,false,false,in_stack_ffffffffffffffd0);
  }
  pUVar2 = (__this->fields)._regrowth;
  if (pUVar2 == (UnityEngine_SkinnedMeshRenderer_array *)0x0) {
label_05c552ab:
    ThrowNullReferenceException();
  }
  if (0 < (int)pUVar2->max_length) {
    uVar5 = pUVar2->max_length & 0xffffffff;
    uVar7 = 0;
    do {
      if (uVar5 <= uVar7) goto label_05c552a6;
      pUVar6 = (UnityEngine_Object_o *)pUVar2->m_Items[uVar7];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if (pUVar6 == (UnityEngine_Object_o *)0x0) goto label_05c552ab;
        pUVar6 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar6,(MethodInfo *)0x0);
      }
      uVar7 = uVar7 + 1;
      uVar1 = (uint)pUVar2->max_length;
      uVar5 = (ulong)uVar1;
    } while ((long)uVar7 < (long)(int)uVar1);
  }
  pUVar3 = (__this->fields)._growthMaterials;
  if ((pUVar3 != (UnityEngine_Material_array *)0x0) && (0 < (int)pUVar3->max_length)) {
    uVar5 = pUVar3->max_length & 0xffffffff;
    uVar7 = 0;
    do {
      if (uVar5 <= uVar7) {
label_05c552a6:
        ThrowIndexOutOfRangeException();
      }
      obj = pUVar3->m_Items[uVar7];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
      uVar7 = uVar7 + 1;
      uVar1 = (uint)pUVar3->max_length;
      uVar5 = (ulong)uVar1;
    } while ((long)uVar7 < (long)(int)uVar1);
  }
  return;
}


// Characters.TitanLimbMesh$$UpdateRegrowth
// il2cpp: UnityEngine_Vector3_o Characters_TitanLimbMesh__UpdateRegrowth (Characters_TitanLimbMesh_o* __this, bool left, bool arm, float progress, UnityEngine_Vector3_o origin, bool effectsEnabled, const MethodInfo* method);
// 0x5c552b0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c5547b: jmp 0x5c55a9c
// asm:   0x5c557a3: jmp 0x5c55a9c
// asm:   0x5c55839: jmp 0x5c55a9c
// asm:   0x5c559ee: nop 

UnityEngine_Vector3_o
Characters_TitanLimbMesh__UpdateRegrowth
          (Characters_TitanLimbMesh_o *__this,bool left,bool arm,float progress,UnityEngine_Vector3_o origin,
          bool effectsEnabled,MethodInfo *method)

{
  UnityEngine_Material_array **targetAddress;
  uint uVar1;
  UnityEngine_SkinnedMeshRenderer_array *pUVar2;
  Characters_TitanLimbMesh_CachedBody_o *pCVar3;
  System_String_o *name;
  UnityEngine_Component_o *pUVar4;
  UnityEngine_SkinnedMeshRenderer_o *pUVar5;
  UnityEngine_Renderer_o *pUVar6;
  UnityEngine_Object_o *y;
  UnityEngine_MaterialPropertyBlock_o *pUVar7;
  System_Collections_Generic_List_Material__o *pSVar8;
  Characters_TitanLimbMesh_MeshSource_o *pCVar9;
  UnityEngine_Vector3_array *pUVar10;
  UnityEngine_Transform_array *bones;
  UnityEngine_Matrix4x4_array *bindposes;
  il2cpp_array_size_t iVar11;
  UnityEngine_Mesh_o *__this_00;
  UnityEngine_Bounds_o value;
  bool bVar12;
  int32_t iVar13;
  uint32_t length;
  Characters_TitanLimbMesh_RegrowthMesh_o *__this_01;
  System_String_o **ppSVar14;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar16;
  UnityEngine_Object_o *x_00;
  UnityEngine_Material_o *pUVar17;
  UnityEngine_Material_array *pUVar18;
  UnityEngine_Shader_o *value_00;
  UnityEngine_Material_o *pUVar19;
  MethodInfo *method_00;
  int index;
  uint index_00;
  ulong uVar20;
  long lVar21;
  undefined7 in_register_00000031;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o UVar27;
  float local_98;
  float fStack_94;
  float local_78;
  float fStack_74;
  UnityEngine_Bounds_o local_48;
  
  uVar22 = CONCAT71(in_register_00000031,left);
  fVar24 = origin.fields.z;
  if (Il2CppMethodInitialized_07547867 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
    il2cpp_codegen_initialize_runtime_metadata(&"Left limb regrowth");
    il2cpp_codegen_initialize_runtime_metadata(&"Right limb regrowth");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanRegrowth");
    uVar22 = uVar22 & 0xffffffff;
    Il2CppMethodInitialized_07547867 = '\x01';
  }
  pUVar2 = (__this->fields)._regrowth;
  if (pUVar2 == (UnityEngine_SkinnedMeshRenderer_array *)0x0) goto label_05c55a9c;
  method_00 = (MethodInfo *)(uVar22 & 0xffffffff ^ 1);
  uVar20 = (ulong)method_00 & 0xff;
  if ((uint)pUVar2->max_length <= (uint)uVar20) {
label_05c55aa1:
    ThrowIndexOutOfRangeException();
  }
  x = (UnityEngine_Object_o *)pUVar2->m_Items[uVar20];
  if ((progress <= 0.0) || (1.0 <= progress)) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar12) {
      if (x == (UnityEngine_Object_o *)0x0) goto label_05c55a9c;
      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)x,false,(MethodInfo *)0x0);
    }
    local_78 = origin.fields.x;
    fStack_74 = origin.fields.y;
    goto label_05c55928;
  }
  pCVar3 = (__this->fields)._body;
  if (pCVar3 == (Characters_TitanLimbMesh_CachedBody_o *)0x0) goto label_05c55a9c;
  __this_01 = Characters_TitanLimbMesh_CachedBody__GetRegrowth(pCVar3,SUB81(uVar22,0),arm,method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    if ((__this->fields)._growthMaterials == (UnityEngine_Material_array *)0x0) {
      pUVar6 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
      if (pUVar6 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__GetSharedMaterials(pUVar6,(__this->fields)._materials,(MethodInfo *)0x0);
        pCVar3 = (__this->fields)._body;
        if (((pCVar3 != (Characters_TitanLimbMesh_CachedBody_o *)0x0) &&
            (pCVar9 = (pCVar3->fields).Source, pCVar9 != (Characters_TitanLimbMesh_MeshSource_o *)0x0)) &&
           (__this_00 = (pCVar9->fields).Original, __this_00 != (UnityEngine_Mesh_o *)0x0)) {
          targetAddress = &(__this->fields)._growthMaterials;
          length = UnityEngine_Mesh__get_subMeshCount(__this_00,(MethodInfo *)0x0);
          pUVar18 = (UnityEngine_Material_array *)SZArrayNew(TypeInfo_UnityEngine_Material_array,length);
          *targetAddress = pUVar18;
          Il2CppCodeGenWriteBarrier(targetAddress);
          if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
          }
          value_00 = Characters_BasicTitanComponentCache__LoadShader
                               ("TitanRegrowth",(MethodInfo *)pUVar18);
          pUVar18 = *targetAddress;
          if (pUVar18 != (UnityEngine_Material_array *)0x0) {
            lVar21 = 0x20;
            uVar23 = 0;
            do {
              if ((long)(int)pUVar18->max_length <= (long)uVar23) goto label_05c55415;
              pSVar8 = (__this->fields)._materials;
              if (pSVar8 == (System_Collections_Generic_List_Material__o *)0x0) break;
              pUVar19 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar8,(int32_t)uVar23,
                                   (MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_Material_get_Item);
              pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
              UnityEngine_Material___ctor_68dcfd0(pUVar17,pUVar19,(MethodInfo *)0x0);
              if (pUVar17 == (UnityEngine_Material_o *)0x0) break;
              UnityEngine_Material__set_shader(pUVar17,value_00,(MethodInfo *)0x0);
              pIVar16 = il2cpp_vm_Object_IsInst
                                  ((Il2CppObject *)pUVar17,(((pUVar18->obj).klass)->_1).element_class);
              if (pIVar16 == (Il2CppObject *)0x0) goto label_05c55aa6;
              if ((uint)pUVar18->max_length <= uVar23) goto label_05c55aa1;
              pUVar18->m_Items[uVar23] = pUVar17;
              Il2CppCodeGenWriteBarrier((void **)((long)pUVar18->m_Items + lVar21 + -0x20));
              uVar23 = uVar23 + 1;
              pUVar18 = *targetAddress;
              lVar21 = lVar21 + 8;
            } while (pUVar18 != (UnityEngine_Material_array *)0x0);
          }
        }
      }
      goto label_05c55a9c;
    }
label_05c55415:
    if (SUB81(uVar22,0) == false) {
      ppSVar14 = &"Right limb regrowth";
    }
    else {
      ppSVar14 = &"Left limb regrowth";
    }
    name = *ppSVar14;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(__this_02,name,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Component_o *)(__this->fields)._renderer;
    if (((pUVar4 == (UnityEngine_Component_o *)0x0) ||
        (__this_03 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0),
        __this_03 == (UnityEngine_GameObject_o *)0x0)) ||
       (iVar13 = UnityEngine_GameObject__get_layer(__this_03,(MethodInfo *)0x0),
       __this_02 == (UnityEngine_GameObject_o *)0x0)) goto label_05c55a9c;
    UnityEngine_GameObject__set_layer(__this_02,iVar13,(MethodInfo *)0x0);
    pUVar15 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Component_o *)(__this->fields)._renderer;
    if ((pUVar4 == (UnityEngine_Component_o *)0x0) ||
       (parent = UnityEngine_Component__get_transform(pUVar4,(MethodInfo *)0x0),
       pUVar15 == (UnityEngine_Transform_o *)0x0)) goto label_05c55a9c;
    UnityEngine_Transform__SetParent_692d510(pUVar15,parent,false,(MethodInfo *)0x0);
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__AddComponent_object_
                  (__this_02,
                   (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_SkinnedMeshRenderer);
    if (x == (UnityEngine_Object_o *)0x0) goto label_05c55a9c;
    UnityEngine_SkinnedMeshRenderer__set_bones
              ((UnityEngine_SkinnedMeshRenderer_o *)x,(__this->fields)._bones,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._renderer;
    if (pUVar5 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_05c55a9c;
    pUVar15 = UnityEngine_SkinnedMeshRenderer__get_rootBone(pUVar5,(MethodInfo *)0x0);
    UnityEngine_SkinnedMeshRenderer__set_rootBone
              ((UnityEngine_SkinnedMeshRenderer_o *)x,pUVar15,(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
    if (pUVar6 == (UnityEngine_Renderer_o *)0x0) goto label_05c55a9c;
    UnityEngine_Renderer__get_localBounds(&local_48,pUVar6,(MethodInfo *)0x0);
    value.fields.m_Center.fields.z = local_48.fields.m_Center.fields.z;
    value.fields.m_Extents.fields.x = local_48.fields.m_Extents.fields.x;
    value.fields.m_Center.fields.x = local_48.fields.m_Center.fields.x;
    value.fields.m_Center.fields.y = local_48.fields.m_Center.fields.y;
    value.fields.m_Extents.fields.y = local_48.fields.m_Extents.fields.y;
    value.fields.m_Extents.fields.z = local_48.fields.m_Extents.fields.z;
    UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)x,value,(MethodInfo *)0x0);
    UnityEngine_Renderer__set_sharedMaterials
              ((UnityEngine_Renderer_o *)x,(__this->fields)._growthMaterials,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._renderer;
    if (pUVar5 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_05c55a9c;
    iVar13 = UnityEngine_SkinnedMeshRenderer__get_quality(pUVar5,(MethodInfo *)0x0);
    UnityEngine_SkinnedMeshRenderer__set_quality
              ((UnityEngine_SkinnedMeshRenderer_o *)x,iVar13,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._regrowth;
    if (pUVar2 == (UnityEngine_SkinnedMeshRenderer_array *)0x0) goto label_05c55a9c;
    pIVar16 = il2cpp_vm_Object_IsInst((Il2CppObject *)x,(((pUVar2->obj).klass)->_1).element_class);
    if (pIVar16 == (Il2CppObject *)0x0) {
label_05c55aa6:
      pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
    }
    if ((uint)pUVar2->max_length <= (uint)uVar20) goto label_05c55aa1;
    pUVar2->m_Items[uVar20] = (UnityEngine_SkinnedMeshRenderer_o *)x;
    Il2CppCodeGenWriteBarrier(pUVar2->m_Items + uVar20);
  }
  else if (x == (UnityEngine_Object_o *)0x0) goto label_05c55a9c;
  x_00 = (UnityEngine_Object_o *)
         UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                   ((UnityEngine_SkinnedMeshRenderer_o *)x,(MethodInfo *)0x0);
  if (__this_01 == (Characters_TitanLimbMesh_RegrowthMesh_o *)0x0) goto label_05c55a9c;
  y = (UnityEngine_Object_o *)(__this_01->fields).Mesh;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Inequality(x_00,y,(MethodInfo *)0x0);
  if (bVar12) {
    UnityEngine_SkinnedMeshRenderer__set_sharedMesh
              ((UnityEngine_SkinnedMeshRenderer_o *)x,(__this_01->fields).Mesh,(MethodInfo *)0x0);
  }
  bVar12 = UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
  if (!bVar12) {
    pUVar6 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
    if (pUVar6 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__GetSharedMaterials(pUVar6,(__this->fields)._materials,(MethodInfo *)0x0);
      pUVar18 = (__this->fields)._growthMaterials;
      if (pUVar18 != (UnityEngine_Material_array *)0x0) {
        lVar21 = 0;
        do {
          uVar1 = (uint)pUVar18->max_length;
          index_00 = (uint)lVar21;
          if ((int)uVar1 <= (int)index_00) goto label_05c5568a;
          if (uVar1 <= index_00) goto label_05c55aa1;
          pSVar8 = (__this->fields)._materials;
          if (pSVar8 == (System_Collections_Generic_List_Material__o *)0x0) break;
          pUVar19 = pUVar18->m_Items[lVar21];
          pUVar17 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar8,index_00,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_Material_get_Item);
          if (pUVar19 == (UnityEngine_Material_o *)0x0) break;
          UnityEngine_Material__CopyPropertiesFromMaterial(pUVar19,pUVar17,(MethodInfo *)0x0);
          pUVar18 = (__this->fields)._growthMaterials;
          lVar21 = lVar21 + 1;
        } while (pUVar18 != (UnityEngine_Material_array *)0x0);
      }
    }
    goto label_05c55a9c;
  }
label_05c5568a:
  pUVar6 = (UnityEngine_Renderer_o *)(__this->fields)._renderer;
  if (pUVar6 == (UnityEngine_Renderer_o *)0x0) goto label_05c55a9c;
  bVar12 = UnityEngine_Renderer__get_enabled(pUVar6,(MethodInfo *)0x0);
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)x,bVar12,(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._growthProperties;
  if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
  }
  if (pUVar7 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_05c55a9c;
  UnityEngine_MaterialPropertyBlock__SetFloat_68d85d0
            (pUVar7,TypeInfo_Characters_TitanLimbMesh->static_fields->Growth,progress,(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._growthProperties;
  if (pUVar7 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_05c55a9c;
  if (effectsEnabled) {
    fVar24 = 1.0;
  }
  else {
    fVar24 = 0.0;
  }
  UnityEngine_MaterialPropertyBlock__SetFloat_68d85d0
            (pUVar7,TypeInfo_Characters_TitanLimbMesh->static_fields->TissueIntensity,fVar24,(MethodInfo *)0x0
            );
  UnityEngine_Renderer__SetPropertyBlock
            ((UnityEngine_Renderer_o *)x,(__this->fields)._growthProperties,(MethodInfo *)0x0);
  pCVar3 = (__this->fields)._body;
  if (((pCVar3 == (Characters_TitanLimbMesh_CachedBody_o *)0x0) ||
      (pCVar9 = (pCVar3->fields).Source, pCVar9 == (Characters_TitanLimbMesh_MeshSource_o *)0x0)) ||
     (pUVar10 = (__this_01->fields)._centers, pUVar10 == (UnityEngine_Vector3_array *)0x0)) goto label_05c55a9c;
  bones = (__this->fields)._bones;
  bindposes = (pCVar9->fields).Bindposes;
  iVar11 = pUVar10->max_length;
  if (Il2CppMethodInitialized_0753e7f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7f6 = '\x01';
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05c5586a;
label_05c5582a:
    pUVar10 = (__this_01->fields)._centers;
  }
  else {
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05c5582a;
label_05c5586a:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    pUVar10 = (__this_01->fields)._centers;
  }
  if (pUVar10 == (UnityEngine_Vector3_array *)0x0) {
label_05c55a9c:
    ThrowNullReferenceException();
  }
  fVar24 = (float)((int)iVar11 + -1) * progress;
  fVar25 = floorf(fVar24);
  index = (int)pUVar10->max_length + -2;
  if ((int)fVar25 < index) {
    index = (int)fVar25;
  }
  UVar26 = Characters_TitanLimbMesh_RegrowthMesh__Skin(__this_01,index,bones,bindposes,method);
  UVar27 = Characters_TitanLimbMesh_RegrowthMesh__Skin(__this_01,index + 1,bones,bindposes,method);
  fVar24 = fVar24 - (float)index;
  fVar25 = 1.0;
  if (fVar24 <= 1.0) {
    fVar25 = fVar24;
  }
  fVar25 = (float)(-(uint)(0.0 <= fVar24) & (uint)fVar25);
  local_98 = UVar26.fields.x;
  fStack_94 = UVar26.fields.y;
  local_78 = fVar25 * (UVar27.fields.x - local_98) + local_98;
  fStack_74 = fVar25 * (UVar27.fields.y - fStack_94) + fStack_94;
  fVar24 = (UVar27.fields.z - UVar26.fields.z) * fVar25 + UVar26.fields.z;
label_05c55928:
  UVar26.fields.y = fStack_74;
  UVar26.fields.x = local_78;
  UVar26.fields.z = fVar24;
  return (UnityEngine_Vector3_o)UVar26.fields;
}


// Characters.TitanLimbMesh$$ClearCache
// il2cpp: void Characters_TitanLimbMesh__ClearCache (const MethodInfo* method);
// 0x5c55c20
// eh: try 0x5c55d13..0x5c55d83 -> pad 0x5c55d8c (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c55da4..0x5c55da9 -> pad 0x5c55dc8 cleanup
// eh: try 0x5c55dcb..0x5c55dd5 -> pad 0x5c55ddd catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c55d88: jmp 0x5c55d8c
// asm:   0x5c55d8a: jmp 0x5c55d8c
// asm:   0x5c55d8c: mov rbx, rax
// asm:   0x5c55d8f: cmp edx, 1
// asm:   0x5c55d92: jne 0x5c55dcb
// asm:   0x5c55d94: mov rdi, rbx
// asm:   0x5c55d97: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c55d9c: mov rbx, qword ptr [rax]
// asm:   0x5c55d9f: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c55da4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c55da9: lea rax, [rip + 0x1639828]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int
// asm:   0x5c55db0: mov rsi, qword ptr [rax]
// asm:   0x5c55db3: mov rdi, rsp
// asm:   0x5c55db6: call 0x4d92630  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_object__int__int__int__int__int__int___object___Dispose()
// asm:   0x5c55dbb: test rbx, rbx
// asm:   0x5c55dbe: je 0x5c55d42
// asm:   0x5c55dc0: mov rdi, rbx
// asm:   0x5c55dc3: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c55dc8: mov rbx, rax
// asm:   0x5c55dcb: lea rdi, [rsp + 0x20]
// asm:   0x5c55dd0: call 0x2fd9ab0  ; il2cpp_runtime_helper_02fd9ab0()
// asm:   0x5c55dd5: mov rdi, rbx
// asm:   0x5c55dd8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c55ddd: mov rdi, rax
// asm:   0x5c55de0: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanLimbMesh__ClearCache(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
  *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_48;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  
  if (Il2CppMethodInitialized_07547868 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_71890c8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_71890d8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int_718f5e0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int_718f5e8
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_ValueTuple_Mesh_int_int_int_int_int_int_Ti
              );
    Il2CppMethodInitialized_07547868 = '\x01';
  }
  SStack_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
  }
  pSVar1 = TypeInfo_Characters_TitanLimbMesh->static_fields->Bodies;
  if (pSVar1 != (System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
                 *)0x0) {
    __this = System_Collections_Generic_Dictionary_ValueTuple_object__int__int__int__int__int__int___object___get_Values
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                        (MethodInfo_49B6810 *)
                        MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_71890d8
                       );
    if (__this != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_ValueTuple_object__int__int__int__int__int__int___object___GetEnumerator
                (&SStack_48,__this,
                 (MethodInfo_43DF020 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_ValueTuple_Mesh_int_int_int_int_int_int_Ti
                );
      uStack_28 = 0;
      puStack_20 = (undefined1 *)&SStack_48;
      while( true ) {
        method_00 = 
        MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int_718f5e0
        ;
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_object__int__int__int__int__int__int___object___MoveNext
                          (&SStack_48,
                           (MethodInfo_4C92640 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int_718f5e0
                          );
        if (!bVar2) break;
        if ((Characters_TitanLimbMesh_CachedBody_o *)SStack_48.fields._currentValue ==
            (Characters_TitanLimbMesh_CachedBody_o *)0x0) {
          ThrowNullReferenceException();
        }
        Characters_TitanLimbMesh_CachedBody__Dispose
                  ((Characters_TitanLimbMesh_CachedBody_o *)SStack_48.fields._currentValue,method_00);
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_object__int__int__int__int__int__int___object___Dispose
                (&SStack_48,
                 (MethodInfo_4C92630 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_ValueTuple_Mesh_int_int_int_int
                );
      if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
      }
      pSVar1 = TypeInfo_Characters_TitanLimbMesh->static_fields->Bodies;
      if (pSVar1 != (System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
                     *)0x0) {
        System_Collections_Generic_Dictionary_ValueTuple_object__int__int__int__int__int__int___object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                   (MethodInfo_49B6CB0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach_71890c8
                  );
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanLimbMesh$$.cctor
// il2cpp: void Characters_TitanLimbMesh___cctor (const MethodInfo* method);
// 0x5c55fc0

void Characters_TitanLimbMesh___cctor(MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_ValueTuple_Mesh__int__int__int__int__int__int___TitanLimbMesh_CachedBody__o
  *__this;
  
  if (Il2CppMethodInitialized_07547869 == '\0') {
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
    Il2CppMethodInitialized_07547869 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach
                     );
  System_Collections_Generic_Dictionary_ValueTuple_object__int__int__int__int__int__int___object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_49B5DE0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueTuple_Mesh_int_int_int_int_int_int_TitanLimbMesh_Cach
            );
  TypeInfo_Characters_TitanLimbMesh->static_fields->Bodies = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanLimbMesh->static_fields->Bodies);
  iVar1 = UnityEngine_Shader__PropertyToID("_Growth",(MethodInfo *)0x0);
  TypeInfo_Characters_TitanLimbMesh->static_fields->Growth = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_TissueIntensity",(MethodInfo *)0x0);
  TypeInfo_Characters_TitanLimbMesh->static_fields->TissueIntensity = iVar1;
  return;
}


