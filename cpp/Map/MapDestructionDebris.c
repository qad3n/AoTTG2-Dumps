// Type: Map.MapDestructionDebris
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/MapDestructionDebris.cs
// Prior real C# source: none
// --------------------------------

// Map.MapDestructionDebris.Piece$$.ctor
// il2cpp: void Map_MapDestructionDebris_Piece___ctor (Map_MapDestructionDebris_Piece_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapDestructionDebris_Piece___ctor(Map_MapDestructionDebris_Piece_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapDestructionDebris.<>c__DisplayClass37_0$$.ctor
// il2cpp: void Map_MapDestructionDebris___c__DisplayClass37_0___ctor (Map_MapDestructionDebris___c__DisplayClass37_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapDestructionDebris___c__DisplayClass37_0___ctor(Map_MapDestructionDebris___c__DisplayClass37_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapDestructionDebris.<>c__DisplayClass37_0$$<Shatter>b__0
// il2cpp: System_Collections_Generic_List_List_MapFracture_Triangle___o* Map_MapDestructionDebris___c__DisplayClass37_0___Shatter_b__0 (Map_MapDestructionDebris___c__DisplayClass37_0_o* __this, const MethodInfo* method);
// 0x181eb9f90

System_Collections_Generic_List_List_MapFracture_Triangle___o *
Map_MapDestructionDebris___c__DisplayClass37_0___Shatter_b__0
          (Map_MapDestructionDebris___c__DisplayClass37_0_o *__this,MethodInfo *method)

{
  Map_MapDestructionDebris_o *pMVar1;
  Map_MapFracture_o *__this_00;
  System_Collections_Generic_List_List_MapFracture_Triangle___o *pSVar2;
  
  pMVar1 = (__this->fields).__4__this;
  if ((pMVar1 != (Map_MapDestructionDebris_o *)0x0) &&
     (__this_00 = (__this->fields).fracture, __this_00 != (Map_MapFracture_o *)0x0)) {
    pSVar2 = Map_MapFracture__Shatter
                       (__this_00,(__this->fields).pieces,(__this->fields).ground,(pMVar1->fields)._seed,
                        (MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris.<>c__DisplayClass45_0$$.ctor
// il2cpp: void Map_MapDestructionDebris___c__DisplayClass45_0___ctor (Map_MapDestructionDebris___c__DisplayClass45_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapDestructionDebris___c__DisplayClass45_0___ctor(Map_MapDestructionDebris___c__DisplayClass45_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapDestructionDebris.<>c__DisplayClass45_0$$<CreateFragments>b__0
// il2cpp: void Map_MapDestructionDebris___c__DisplayClass45_0___CreateFragments_b__0 (Map_MapDestructionDebris___c__DisplayClass45_0_o* __this, const MethodInfo* method);
// 0x181eb9fd0
// eh: try 0x181eba080..0x181eba0bc -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eba07f: nop 
// asm:   0x181eba0cd: mov rdx, qword ptr [rip + 0x21c41f4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_EntityId_Dispose
// asm:   0x181eba0d4: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181eba0d9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eba0de: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181eba0e3: test rcx, rcx
// asm:   0x181eba0e6: jne 0x181eba0f3
// asm:   0x181eba0f3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Map_MapDestructionDebris___c__DisplayClass45_0___CreateFragments_b__0
               (Map_MapDestructionDebris___c__DisplayClass45_0_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  UnityEngine_EntityId_o meshEntityId;
  bool bVar1;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [16];
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_184345080 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EntityId_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EntityId_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EntityId_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EntityId_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184345080 = '\x01';
  }
  local_28._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_28._8_8_ = 0;
  local_18 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields).convex;
  if (__this_00 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_EntityId_GetEnumerator);
    local_28._0_8_ = local_40._0_8_;
    local_28._8_8_ = local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_28,
                         (MethodInfo_1530180 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_EntityId_MoveNext);
      if (!bVar1) break;
      meshEntityId.fields.m_Data = local_18._0_4_;
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      UnityEngine_Physics__BakeMesh_2fe1320(meshEntityId,true,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_EntityId___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_EntityId_Dispose);
    return;
  }
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$Spawn
// il2cpp: void Map_MapDestructionDebris__Spawn (Map_DestructibleMapObject_o* target, const MethodInfo* method);
// 0x181e9f160

void Map_MapDestructionDebris__Spawn(Map_DestructibleMapObject_o *target,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  int32_t *piVar2;
  uint uVar3;
  UnityEngine_MeshFilter_array *pUVar4;
  System_Collections_Generic_List_MapDestructionDebris__o *pSVar5;
  Map_MapDestructionDebris_array *pMVar6;
  MethodInfo *pMVar7;
  int32_t iVar8;
  Map_MapDestructionDebris_o *pMVar9;
  UnityEngine_Object_o *obj;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_MeshRenderer_o *__this_01;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434506f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&"Map destruction debris");
    Il2CppMethodInitialized_18434506f = '\x01';
  }
  if ((target != (Map_DestructibleMapObject_o *)0x0) &&
     (pUVar4 = (target->fields).Filters, pUVar4 != (UnityEngine_MeshFilter_array *)0x0)) {
    if (pUVar4->max_length == 0) {
      return;
    }
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    pSVar5 = TypeInfo_Map_MapDestructionDebris->static_fields->Active;
    if (pSVar5 != (System_Collections_Generic_List_MapDestructionDebris__o *)0x0) {
      if (7 < (pSVar5->fields)._size) {
        if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
        }
        pSVar5 = TypeInfo_Map_MapDestructionDebris->static_fields->Active;
        if ((pSVar5 == (System_Collections_Generic_List_MapDestructionDebris__o *)0x0) ||
           (pMVar9 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar5,0,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_MapDestructionDebris_get_Item),
           pMVar9 == (Map_MapDestructionDebris_o *)0x0)) goto label_181e9f49e;
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pMVar9,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
        pSVar5 = TypeInfo_Map_MapDestructionDebris->static_fields->Active;
        if (pSVar5 == (System_Collections_Generic_List_MapDestructionDebris__o *)0x0) goto label_181e9f49e;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar5,0,
                   (MethodInfo_947010 *)
                   MethodInfo_System_Collections_Generic_List_MapDestructionDebris_RemoveAt);
      }
      if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
      }
      Map_MapDestructionDebris__LoadAssets((MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor(__this,"Map destruction debris",(MethodInfo *)0x0);
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__set_layer
                  (__this,TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects,(MethodInfo *)0x0)
        ;
        __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          local_18.z = (target->fields).Bounds.fields.m_Center.fields.z;
          pUVar1 = &(target->fields).Bounds;
          local_18.x = (pUVar1->fields).m_Center.fields.x;
          local_18.y = (pUVar1->fields).m_Center.fields.y;
          UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
          pMVar9 = UnityEngine_GameObject__AddComponent_object_
                             (__this,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_MapDestructionDebris);
          if (pMVar9 != (Map_MapDestructionDebris_o *)0x0) {
            (pMVar9->fields)._seed = (target->fields).Id;
            pUVar4 = (target->fields).Filters;
            if (pUVar4 != (UnityEngine_MeshFilter_array *)0x0) {
              if ((int)pUVar4->max_length == 0) {
label_181e9f4a4:
                ThrowIndexOutOfRangeException();
              }
              if (((UnityEngine_Component_o *)pUVar4->m_Items[0] != (UnityEngine_Component_o *)0x0) &&
                 (__this_01 = UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pUVar4->m_Items[0],
                                         (MethodInfo_6651A0 *)
                                         MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer),
                 __this_01 != (UnityEngine_MeshRenderer_o *)0x0)) {
                iVar8 = UnityEngine_Renderer__get_shadowCastingMode
                                  ((UnityEngine_Renderer_o *)__this_01,(MethodInfo *)0x0);
                (pMVar9->fields)._shadows = iVar8;
                Map_MapDestructionDebris__Shatter(pMVar9,target,(MethodInfo *)0x0);
                pMVar7 = MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Add;
                pSVar5 = TypeInfo_Map_MapDestructionDebris->static_fields->Active;
                if (pSVar5 != (System_Collections_Generic_List_MapDestructionDebris__o *)0x0) {
                  piVar2 = &(pSVar5->fields)._version;
                  *piVar2 = *piVar2 + 1;
                  pMVar6 = (pSVar5->fields)._items;
                  if (pMVar6 != (Map_MapDestructionDebris_array *)0x0) {
                    uVar3 = (pSVar5->fields)._size;
                    if ((uint)pMVar6->max_length <= uVar3) {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pMVar9,
                                 (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
                      return;
                    }
                    (pSVar5->fields)._size = uVar3 + 1;
                    if (uVar3 < (uint)pMVar6->max_length) {
                      pMVar6->m_Items[(int)uVar3] = pMVar9;
                      Il2CppCodeGenWriteBarrier(pMVar6->m_Items + (int)uVar3,pMVar9);
                      return;
                    }
                    goto label_181e9f4a4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_181e9f49e:
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$LoadAssets
// il2cpp: void Map_MapDestructionDebris__LoadAssets (const MethodInfo* method);
// 0x181e9e7b0

void Map_MapDestructionDebris__LoadAssets(MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  UnityEngine_Shader_o *value;
  UnityEngine_PhysicsMaterial_o *__this;
  
  if (Il2CppMethodInitialized_184345070 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_PhysicsMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Shader);
    il2cpp_codegen_initialize_runtime_metadata(&"Shaders/MapDebris");
    il2cpp_codegen_initialize_runtime_metadata(&"Rubble");
    Il2CppMethodInitialized_184345070 = '\x01';
  }
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  pUVar1 = (UnityEngine_Object_o *)TypeInfo_Map_MapDestructionDebris->static_fields->_shader;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    value = UnityEngine_Resources__Load_object_
                      ("Shaders/MapDebris",(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Shader
                      );
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    TypeInfo_Map_MapDestructionDebris->static_fields->_shader = value;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestructionDebris->static_fields->_shader,value);
  }
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  pUVar1 = (UnityEngine_Object_o *)TypeInfo_Map_MapDestructionDebris->static_fields->_rubble;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_PhysicsMaterial);
    UnityEngine_PhysicsMaterial___ctor_2fdf180(__this,"Rubble",(MethodInfo *)0x0);
    if (__this != (UnityEngine_PhysicsMaterial_o *)0x0) {
      UnityEngine_PhysicsMaterial__set_staticFriction(__this,0.1,(MethodInfo *)0x0);
      UnityEngine_PhysicsMaterial__set_dynamicFriction(__this,0.1,(MethodInfo *)0x0);
      UnityEngine_PhysicsMaterial__set_frictionCombine(__this,2,(MethodInfo *)0x0);
      UnityEngine_PhysicsMaterial__set_bounceCombine(__this,2,(MethodInfo *)0x0);
      if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
      }
      TypeInfo_Map_MapDestructionDebris->static_fields->_rubble = __this;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestructionDebris->static_fields->_rubble,__this);
      return;
    }
    ThrowNullReferenceException();
  }
  return;
}


// Map.MapDestructionDebris$$FindGround
// il2cpp: float Map_MapDestructionDebris__FindGround (UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x181e9e170
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9e2f6: nop word ptr [rax + rax]
// asm:   0x181e9e3d7: movaps xmm0, xmm7
// asm:   0x181e9e3da: jmp 0x181e9e3e6

float Map_MapDestructionDebris__FindGround(UnityEngine_Bounds_o *bounds,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  UnityEngine_RaycastHit_array *pUVar8;
  int32_t iVar9;
  UnityEngine_Vector3_o *pUVar10;
  uint uVar11;
  float fVar12;
  UnityEngine_Vector3_o local_98;
  UnityEngine_Vector3_Fields local_88 [8];
  
  if (Il2CppMethodInitialized_184345071 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184345071 = '\x01';
  }
  fVar12 = (bounds->fields).m_Extents.fields.y;
  fVar1 = (bounds->fields).m_Center.fields.y;
  fVar2 = (bounds->fields).m_Center.fields.x;
  fVar3 = (bounds->fields).m_Center.fields.z;
  if (Il2CppMethodInitialized_18434494b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434494b = '\x01';
  }
  pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar5._0_4_ = (pUVar7->downVector).fields.x;
  uVar5._4_4_ = (pUVar7->downVector).fields.y;
  fVar6 = (pUVar7->downVector).fields.z;
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  fVar4 = (bounds->fields).m_Extents.fields.y;
  pUVar8 = TypeInfo_Map_MapDestructionDebris->static_fields->GroundHits;
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  iVar9 = TypeInfo_Map_MapDestruction->static_fields->MapMask;
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  local_98.fields.x = fVar2;
  local_98.fields.y = fVar12 + fVar1 + 1.0;
  local_98.fields.z = fVar3;
  local_88[0]._0_8_ = uVar5;
  local_88[0].z = fVar6;
  iVar9 = UnityEngine_Physics__RaycastNonAlloc_2fe4c30
                    (&local_98,(UnityEngine_Vector3_o *)local_88,pUVar8,fVar4 + fVar4 + 2.0,iVar9,1,
                     (MethodInfo *)0x0);
  uVar11 = 0;
  fVar12 = 3.4028235e+38;
  if (0 < iVar9) {
    do {
      if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
      }
      pUVar8 = TypeInfo_Map_MapDestructionDebris->static_fields->GroundHits;
      if (pUVar8 == (UnityEngine_RaycastHit_array *)0x0) {
label_181e9e40f:
        ThrowNullReferenceException();
      }
      if ((uint)pUVar8->max_length <= uVar11) {
        ThrowIndexOutOfRangeException();
      }
      fVar1 = (bounds->fields).m_Center.fields.y;
      fVar2 = (bounds->fields).m_Extents.fields.y;
      pUVar10 = UnityEngine_RaycastHit__get_point
                          ((UnityEngine_Vector3_o *)local_88,pUVar8->m_Items + uVar11,(MethodInfo *)0x0);
      if (fVar1 - fVar2 <= (pUVar10->fields).y) {
        if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
        }
        pUVar8 = TypeInfo_Map_MapDestructionDebris->static_fields->GroundHits;
        if (pUVar8 == (UnityEngine_RaycastHit_array *)0x0) goto label_181e9e40f;
        if ((uint)pUVar8->max_length <= uVar11) {
          ThrowIndexOutOfRangeException();
        }
        pUVar10 = UnityEngine_RaycastHit__get_point(&local_98,pUVar8->m_Items + uVar11,(MethodInfo *)0x0);
        fVar1 = (pUVar10->fields).y;
        if (fVar1 <= fVar12) {
          fVar12 = fVar1;
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar9);
    if (fVar12 != 3.4028235e+38) {
      return fVar12;
    }
  }
  return (bounds->fields).m_Center.fields.y - (bounds->fields).m_Extents.fields.y;
}


// Map.MapDestructionDebris$$Shatter
// il2cpp: void Map_MapDestructionDebris__Shatter (Map_MapDestructionDebris_o* __this, Map_DestructibleMapObject_o* target, const MethodInfo* method);
// 0x181e9ed50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9eec9: nop dword ptr [rax]

void Map_MapDestructionDebris__Shatter
               (Map_MapDestructionDebris_o *__this,Map_DestructibleMapObject_o *target,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Bounds_o *pUVar2;
  undefined8 uVar3;
  uint uVar4;
  UnityEngine_MeshFilter_array *pUVar5;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  MethodInfo *pMVar9;
  int iVar10;
  Map_MapDestructionDebris___c__DisplayClass37_0_o *object;
  System_Collections_Generic_List_Material__o *materials;
  UnityEngine_Transform_o *root;
  Map_MapFracture_o *value;
  UnityEngine_GameObject_o *item;
  UnityEngine_Material_array *pUVar11;
  UnityEngine_Material_o *pUVar12;
  Il2CppObject *pIVar13;
  DG_Tweening_Core_DOGetter_Vector2__o *__this_01;
  System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *value_00;
  uint uVar14;
  float fVar15;
  UnityEngine_Bounds_o local_58 [2];
  
  if (Il2CppMethodInitialized_184345072 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_List_List_MapFracture_Triangle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Threading_Tasks_Task_Run_List_List_MapFracture_Triangle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Tasks_Task);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapDestructionDebris_c__DisplayClass37_0_Shatter_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris_c__DisplayClass37_0);
    Il2CppMethodInitialized_184345072 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapDestructionDebris_c__DisplayClass37_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Map_MapDestructionDebris___c__DisplayClass37_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    materials = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)materials,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
    if (target != (Map_DestructibleMapObject_o *)0x0) {
      pUVar5 = (target->fields).Filters;
      root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      value = Map_MapFracture__Read(pUVar5,root,materials,20000,(MethodInfo *)0x0);
      (object->fields).fracture = value;
      Il2CppCodeGenWriteBarrier(&(object->fields).fracture,value);
      pUVar5 = (target->fields).Filters;
      if (pUVar5 != (UnityEngine_MeshFilter_array *)0x0) {
        uVar14 = 0;
        while ((int)uVar14 < (int)pUVar5->max_length) {
          if ((uint)pUVar5->max_length <= uVar14) goto label_181e9f152;
          __this_00 = (__this->fields)._sectionVisuals;
          item = Map_MapDestructionDebris__CreateVisual(__this,pUVar5->m_Items[(int)uVar14],(MethodInfo *)0x0)
          ;
          pMVar9 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
          if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_181e9f13c;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar6 = (__this_00->fields)._items;
          if (pUVar6 == (UnityEngine_GameObject_array *)0x0) goto label_181e9f13c;
          uVar4 = (__this_00->fields)._size;
          if (uVar4 < (uint)pUVar6->max_length) {
            (__this_00->fields)._size = uVar4 + 1;
            if ((uint)pUVar6->max_length <= uVar4) goto label_181e9f152;
            pUVar6->m_Items[(int)uVar4] = item;
            Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar4,item);
            uVar14 = uVar14 + 1;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       (MethodInfo_93DD50 *)pMVar9->klass->rgctx_data[0xe].method);
            uVar14 = uVar14 + 1;
          }
        }
        if ((object->fields).fracture != (Map_MapFracture_o *)0x0) {
          if (materials == (System_Collections_Generic_List_Material__o *)0x0) goto label_181e9f13c;
          pUVar11 = (UnityEngine_Material_array *)
                    SZArrayNew(TypeInfo_UnityEngine_Material_array,(materials->fields)._size);
          (__this->fields)._fragmentMaterials = pUVar11;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._fragmentMaterials,pUVar11);
          for (uVar14 = 0; (int)uVar14 < (materials->fields)._size; uVar14 = uVar14 + 1) {
            pUVar11 = (__this->fields)._fragmentMaterials;
            pUVar12 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)materials,uVar14,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_Material_get_Item);
            pUVar12 = Map_MapDestructionDebris__GetMaterial(__this,pUVar12,(MethodInfo *)0x0);
            if (pUVar11 == (UnityEngine_Material_array *)0x0) goto label_181e9f13c;
            if (pUVar12 != (UnityEngine_Material_o *)0x0) {
              pIVar13 = il2cpp_vm_Object_IsInst
                                  ((Il2CppObject *)pUVar12,(((pUVar11->obj).klass)->_1).element_class);
              if (pIVar13 == (Il2CppObject *)0x0) {
                pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
              }
            }
            if ((uint)pUVar11->max_length <= uVar14) {
label_181e9f152:
              ThrowIndexOutOfRangeException();
            }
            pUVar11->m_Items[(int)uVar14] = pUVar12;
            Il2CppCodeGenWriteBarrier(pUVar11->m_Items + (int)uVar14,pUVar12);
          }
          iVar10 = il2cpp_runtime_helper_181290af0((target->fields).Size / 3.0);
          if (iVar10 < 6) {
            iVar10 = 6;
          }
          else if (0x28 < iVar10) {
            iVar10 = 0x28;
          }
          (object->fields).pieces = iVar10;
          pUVar2 = &(target->fields).Bounds;
          uVar7._0_4_ = (pUVar2->fields).m_Center.fields.x;
          uVar7._4_4_ = (pUVar2->fields).m_Center.fields.y;
          uVar8 = *(undefined8 *)&(target->fields).Bounds.fields.m_Center.fields.z;
          pUVar2 = &(target->fields).Bounds;
          uVar3._0_4_ = (pUVar2->fields).m_Extents.fields.y;
          uVar3._4_4_ = (pUVar2->fields).m_Extents.fields.z;
          if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
          }
          local_58[0].fields.m_Center.fields._0_8_ = uVar7;
          local_58[0].fields._8_8_ = uVar8;
          local_58[0].fields.m_Extents.fields._4_8_ = uVar3;
          fVar15 = Map_MapDestructionDebris__FindGround(local_58,(MethodInfo *)0x0);
          (object->fields).ground = (fVar15 + 0.05) - (target->fields).Bounds.fields.m_Center.fields.y;
          __this_01 = (DG_Tweening_Core_DOGetter_Vector2__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_List_List_MapFracture_Triangle);
          System_Func_object____ctor
                    (__this_01,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_Map_MapDestructionDebris_c__DisplayClass37_0_Shatter_b__0,
                     (MethodInfo_1387740 *)0x0);
          if ((TypeInfo_System_Threading_Tasks_Task->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Threading_Tasks_Task);
          }
          value_00 = (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)
                     System_Threading_Tasks_Task__Run_object_
                               ((System_Func_TResult__o *)__this_01,
                                (MethodInfo_7BE1B0 *)
                                MethodInfo_System_Threading_Tasks_Task_Run_List_List_MapFracture_Triangle);
          (__this->fields)._fracture = value_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._fracture,value_00);
        }
        return;
      }
    }
  }
label_181e9f13c:
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$CreateVisual
// il2cpp: UnityEngine_GameObject_o* Map_MapDestructionDebris__CreateVisual (Map_MapDestructionDebris_o* __this, UnityEngine_MeshFilter_o* source, const MethodInfo* method);
// 0x181e9de00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9e05c: nop dword ptr [rax]

UnityEngine_GameObject_o *
Map_MapDestructionDebris__CreateVisual
          (Map_MapDestructionDebris_o *__this,UnityEngine_MeshFilter_o *source,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  int32_t value;
  System_String_o *name;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Quaternion_o *pUVar6;
  UnityEngine_MeshFilter_o *__this_02;
  UnityEngine_Mesh_o *value_00;
  UnityEngine_MeshRenderer_o *pUVar7;
  UnityEngine_Material_array *pUVar8;
  UnityEngine_Material_array *value_01;
  UnityEngine_Material_o *obj;
  Il2CppObject *pIVar9;
  uint uVar10;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184345073 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    Il2CppMethodInitialized_184345073 = '\x01';
  }
  if (source != (UnityEngine_MeshFilter_o *)0x0) {
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)source,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(__this_00,name,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      value = UnityEngine_GameObject__get_layer(__this_01,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__set_layer(__this_00,value,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0(pUVar3,pUVar4,false,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            pUVar5 = UnityEngine_Transform__get_position
                               ((UnityEngine_Vector3_o *)&local_48,pUVar4,(MethodInfo *)0x0);
            uVar1._0_4_ = (pUVar5->fields).x;
            uVar1._4_4_ = (pUVar5->fields).y;
            fVar2 = (pUVar5->fields).z;
            pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)source,(MethodInfo *)0x0)
            ;
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pUVar6 = UnityEngine_Transform__get_rotation
                                 ((UnityEngine_Quaternion_o *)local_38,pUVar4,(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                local_38[0].x = (pUVar6->fields).x;
                local_38[0].y = (pUVar6->fields).y;
                local_38[0].z = (pUVar6->fields).z;
                local_38[0].w = (pUVar6->fields).w;
                local_48._0_8_ = uVar1;
                local_48.z = fVar2;
                UnityEngine_Transform__SetPositionAndRotation
                          (pUVar3,(UnityEngine_Vector3_o *)&local_48,(UnityEngine_Quaternion_o *)local_38,
                           (MethodInfo *)0x0);
                pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                pUVar4 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  pUVar5 = UnityEngine_Transform__get_lossyScale
                                     ((UnityEngine_Vector3_o *)local_38,pUVar4,(MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    local_48.x = (pUVar5->fields).x;
                    local_48.y = (pUVar5->fields).y;
                    local_48.z = (pUVar5->fields).z;
                    UnityEngine_Transform__set_localScale
                              (pUVar3,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
                    __this_02 = UnityEngine_GameObject__AddComponent_object_
                                          (__this_00,
                                           (MethodInfo_6F4D60 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
                    value_00 = UnityEngine_MeshFilter__get_sharedMesh(source,(MethodInfo *)0x0);
                    if (__this_02 != (UnityEngine_MeshFilter_o *)0x0) {
                      UnityEngine_MeshFilter__set_sharedMesh(__this_02,value_00,(MethodInfo *)0x0);
                      pUVar7 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)source,
                                          (MethodInfo_6651A0 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
                      if (pUVar7 != (UnityEngine_MeshRenderer_o *)0x0) {
                        pUVar8 = UnityEngine_Renderer__get_sharedMaterials
                                           ((UnityEngine_Renderer_o *)pUVar7,(MethodInfo *)0x0);
                        if (pUVar8 != (UnityEngine_Material_array *)0x0) {
                          value_01 = (UnityEngine_Material_array *)
                                     SZArrayNew(TypeInfo_UnityEngine_Material_array,
                                                (uint32_t)pUVar8->max_length);
                          for (uVar10 = 0; (int)uVar10 < (int)pUVar8->max_length; uVar10 = uVar10 + 1) {
                            if ((uint)pUVar8->max_length <= uVar10) {
label_181e9e161:
                              ThrowIndexOutOfRangeException();
                            }
                            obj = Map_MapDestructionDebris__GetMaterial
                                            (__this,pUVar8->m_Items[(int)uVar10],(MethodInfo *)0x0);
                            if (value_01 == (UnityEngine_Material_array *)0x0) goto label_181e9e14b;
                            if (obj != (UnityEngine_Material_o *)0x0) {
                              pIVar9 = il2cpp_vm_Object_IsInst
                                                 ((Il2CppObject *)obj,
                                                  (((value_01->obj).klass)->_1).element_class);
                              if (pIVar9 == (Il2CppObject *)0x0) {
                                pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                              }
                            }
                            if ((uint)value_01->max_length <= uVar10) goto label_181e9e161;
                            value_01->m_Items[(int)uVar10] = obj;
                            Il2CppCodeGenWriteBarrier(value_01->m_Items + (int)uVar10,obj);
                          }
                          if (Il2CppMethodInitialized_184345074 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
                            Il2CppMethodInitialized_184345074 = '\x01';
                          }
                          pUVar7 = UnityEngine_GameObject__AddComponent_object_
                                             (__this_00,
                                              (MethodInfo_6F4D60 *)
                                              MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
                          if (pUVar7 != (UnityEngine_MeshRenderer_o *)0x0) {
                            UnityEngine_Renderer__set_sharedMaterials
                                      ((UnityEngine_Renderer_o *)pUVar7,value_01,(MethodInfo *)0x0);
                            UnityEngine_Renderer__set_shadowCastingMode
                                      ((UnityEngine_Renderer_o *)pUVar7,(__this->fields)._shadows,
                                       (MethodInfo *)0x0);
                            return __this_00;
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
  }
label_181e9e14b:
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$AddRenderer
// il2cpp: void Map_MapDestructionDebris__AddRenderer (Map_MapDestructionDebris_o* __this, UnityEngine_GameObject_o* visual, UnityEngine_Material_array* materials, const MethodInfo* method);
// 0x181e9d340

void Map_MapDestructionDebris__AddRenderer
               (Map_MapDestructionDebris_o *__this,UnityEngine_GameObject_o *visual,
               UnityEngine_Material_array *materials,MethodInfo *method)

{
  UnityEngine_MeshRenderer_o *__this_00;
  
  if (Il2CppMethodInitialized_184345074 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
    Il2CppMethodInitialized_184345074 = '\x01';
  }
  if (visual != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (visual,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
    if (__this_00 != (UnityEngine_MeshRenderer_o *)0x0) {
      UnityEngine_Renderer__set_sharedMaterials
                ((UnityEngine_Renderer_o *)__this_00,materials,(MethodInfo *)0x0);
      UnityEngine_Renderer__set_shadowCastingMode
                ((UnityEngine_Renderer_o *)__this_00,(__this->fields)._shadows,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$GetMaterial
// il2cpp: UnityEngine_Material_o* Map_MapDestructionDebris__GetMaterial (Map_MapDestructionDebris_o* __this, UnityEngine_Material_o* source, const MethodInfo* method);
// 0x181e9e5f0

UnityEngine_Material_o *
Map_MapDestructionDebris__GetMaterial
          (Map_MapDestructionDebris_o *__this,UnityEngine_Material_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UnityEngine_Material_o *local_res10 [3];
  
  if (Il2CppMethodInitialized_184345075 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345075 = '\x01';
  }
  local_res10[0] = (UnityEngine_Material_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (UnityEngine_Material_o *)0x0;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._rubbleMaterials;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)source,(Il2CppObject **)local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue);
    if (!bVar2) {
      if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
      }
      local_res10[0] = Map_MapDestructionDebris__CreateMaterial(source,(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._rubbleMaterials;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181e9e6ec;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)source,(Il2CppObject *)local_res10[0],
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add)
      ;
    }
    return local_res10[0];
  }
label_181e9e6ec:
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$CreateMaterial
// il2cpp: UnityEngine_Material_o* Map_MapDestructionDebris__CreateMaterial (UnityEngine_Material_o* source, const MethodInfo* method);
// 0x181e9da70
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9dcc4: nop dword ptr [rax]
// asm:   0x181e9dcc8: nop dword ptr [rax + rax]
// asm:   0x181e9dce7: jmp 0x181e9dd30
// asm:   0x181e9dd30: mov rsi, qword ptr [rsp + 0x60]

UnityEngine_Material_o *
Map_MapDestructionDebris__CreateMaterial(UnityEngine_Material_o *source,MethodInfo *method)

{
  MethodInfo *pMVar1;
  bool bVar2;
  int32_t iVar3;
  uint uVar4;
  int32_t iVar5;
  UnityEngine_Material_o *__this;
  System_String_o *pSVar6;
  UnityEngine_Texture_o *value;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Shader_o *pUVar8;
  UnityEngine_Color_o *pUVar9;
  Il2CppClass *pIVar10;
  int32_t propertyIndex;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_184345076 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&"_Color");
    il2cpp_codegen_initialize_runtime_metadata(&"_MainTex");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseColor");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseMap");
    Il2CppMethodInitialized_184345076 = '\x01';
  }
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  pUVar8 = TypeInfo_Map_MapDestructionDebris->static_fields->_shader;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
  UnityEngine_Material___ctor(__this,pUVar8,(MethodInfo *)0x0);
  if ((__this == (UnityEngine_Material_o *)0x0) ||
     (UnityEngine_Material__CopyPropertiesFromMaterial(__this,source,(MethodInfo *)0x0),
     source == (UnityEngine_Material_o *)0x0)) {
label_181e9ddef:
    ThrowNullReferenceException();
  }
  bVar2 = UnityEngine_Material__HasProperty_2ee2c00(source,"_BaseMap",(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    pSVar6 = Map_MapDestructionDebris__FindProperty(source,0x80,4,"_MainTex",(MethodInfo *)0x0);
    if (pSVar6 != (System_String_o *)0x0) {
      value = UnityEngine_Material__GetTexture(source,pSVar6,(MethodInfo *)0x0);
      UnityEngine_Material__SetTexture(__this,"_BaseMap",value,(MethodInfo *)0x0);
      UVar7 = UnityEngine_Material__GetTextureScale(source,pSVar6,(MethodInfo *)0x0);
      UnityEngine_Material__SetTextureScale(__this,"_BaseMap",UVar7,(MethodInfo *)0x0);
      UVar7 = UnityEngine_Material__GetTextureOffset(source,pSVar6,(MethodInfo *)0x0);
      UnityEngine_Material__SetTextureOffset(__this,"_BaseMap",UVar7,(MethodInfo *)0x0);
    }
  }
  bVar2 = UnityEngine_Material__HasProperty_2ee2c00(source,"_BaseColor",(MethodInfo *)0x0);
  if (bVar2) goto label_181e9dd35;
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  pSVar6 = "_Color";
  if (Il2CppMethodInitialized_184345077 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345077 = '\x01';
  }
  pUVar8 = UnityEngine_Material__get_shader(source,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Shader_o *)0x0) goto label_181e9ddef;
  iVar3 = UnityEngine_Shader__GetPropertyCount(pUVar8,(MethodInfo *)0x0);
  propertyIndex = 0;
  if (0 < iVar3) {
    do {
      uVar4 = UnityEngine_Shader__GetPropertyFlags_2ef6db0(pUVar8,propertyIndex,(MethodInfo *)0x0);
      if ((uVar4 >> 8 & 1) != 0) goto label_181e9dce9;
      propertyIndex = propertyIndex + 1;
    } while (propertyIndex < iVar3);
  }
  bVar2 = UnityEngine_Material__HasProperty_2ee2c00(source,pSVar6,(MethodInfo *)0x0);
  if (!bVar2) {
    propertyIndex = 0;
    if (0 < iVar3) {
      do {
        iVar5 = UnityEngine_Shader__GetPropertyType_2ef71d0(pUVar8,propertyIndex,(MethodInfo *)0x0);
        if (iVar5 == 0) goto label_181e9dce9;
        propertyIndex = propertyIndex + 1;
      } while (propertyIndex < iVar3);
    }
    goto label_181e9dd35;
  }
label_181e9dcf9:
  if (pSVar6 != (System_String_o *)0x0) {
    pUVar9 = UnityEngine_Material__GetColor((UnityEngine_Color_o *)&local_28,source,pSVar6,(MethodInfo *)0x0);
    local_28.r = (pUVar9->fields).r;
    local_28.g = (pUVar9->fields).g;
    local_28.b = (pUVar9->fields).b;
    local_28.a = (pUVar9->fields).a;
    UnityEngine_Material__SetVector
              (__this,"_BaseColor",(UnityEngine_Vector4_o *)&local_28,(MethodInfo *)0x0);
  }
label_181e9dd35:
  pMVar1 = MethodInfo_System_Array_Empty_string;
  if ((MethodInfo_System_Array_Empty_string->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
  }
  pIVar10 = (pMVar1->field7_0x38).rgctx_data[2].klass;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  if ((pIVar10->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar10);
  }
  pIVar10 = (pMVar1->field7_0x38).rgctx_data[2].klass;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  UnityEngine_Material__set_shaderKeywords
            (__this,*(System_String_array **)pIVar10->static_fields,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  UnityEngine_Material__SetFloat_2ee3980
            (__this,TypeInfo_Map_MapDestructionDebris->static_fields->FadeId,0.0,(MethodInfo *)0x0);
  return __this;
label_181e9dce9:
  pSVar6 = UnityEngine_Shader__GetPropertyName_2ef70b0(pUVar8,propertyIndex,(MethodInfo *)0x0);
  goto label_181e9dcf9;
}


// Map.MapDestructionDebris$$FindProperty
// il2cpp: System_String_o* Map_MapDestructionDebris__FindProperty (UnityEngine_Material_o* source, int32_t flag, int32_t type, System_String_o* fallback, const MethodInfo* method);
// 0x181e9e430
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9e4a7: nop word ptr [rax + rax]
// asm:   0x181e9e4e8: nop dword ptr [rax + rax]
// asm:   0x181e9e580: mov rax, r12
// asm:   0x181e9e583: jmp 0x181e9e552

System_String_o *
Map_MapDestructionDebris__FindProperty
          (UnityEngine_Material_o *source,int32_t flag,int32_t type,System_String_o *fallback,
          MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  uint uVar3;
  int32_t iVar4;
  UnityEngine_Shader_o *__this;
  System_String_o *pSVar5;
  UnityEngine_Texture_o *x;
  int32_t propertyIndex;
  
  if (Il2CppMethodInitialized_184345077 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345077 = '\x01';
  }
  if ((source == (UnityEngine_Material_o *)0x0) ||
     (__this = UnityEngine_Material__get_shader(source,(MethodInfo *)0x0),
     __this == (UnityEngine_Shader_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar2 = UnityEngine_Shader__GetPropertyCount(__this,(MethodInfo *)0x0);
  propertyIndex = 0;
  if (0 < iVar2) {
    do {
      uVar3 = UnityEngine_Shader__GetPropertyFlags_2ef6db0(__this,propertyIndex,(MethodInfo *)0x0);
      if ((flag & uVar3) != 0) goto label_181e9e571;
      propertyIndex = propertyIndex + 1;
    } while (propertyIndex < iVar2);
  }
  bVar1 = UnityEngine_Material__HasProperty_2ee2c00(source,fallback,(MethodInfo *)0x0);
  if (!bVar1) {
    propertyIndex = 0;
    if (0 < iVar2) {
      do {
        iVar4 = UnityEngine_Shader__GetPropertyType_2ef71d0(__this,propertyIndex,(MethodInfo *)0x0);
        if (iVar4 == type) {
          if (type != 4) {
label_181e9e571:
            pSVar5 = UnityEngine_Shader__GetPropertyName_2ef70b0(__this,propertyIndex,(MethodInfo *)0x0);
            return pSVar5;
          }
          pSVar5 = UnityEngine_Shader__GetPropertyName_2ef70b0(__this,propertyIndex,(MethodInfo *)0x0);
          x = UnityEngine_Material__GetTexture(source,pSVar5,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) goto label_181e9e571;
        }
        propertyIndex = propertyIndex + 1;
      } while (propertyIndex < iVar2);
    }
    fallback = (System_String_o *)0x0;
  }
  return fallback;
}


// Map.MapDestructionDebris$$Update
// il2cpp: void Map_MapDestructionDebris__Update (Map_MapDestructionDebris_o* __this, const MethodInfo* method);
// 0x181e9f550
// eh: try 0x181e9f840..0x181e9fb30 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9f83e: nop 
// asm:   0x181e9f944: mov rdx, qword ptr [rip + 0x2204f15]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_Dispose
// asm:   0x181e9f94b: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e9f950: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e9f955: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e9f95a: test rcx, rcx
// asm:   0x181e9f95d: jne 0x181e9fb24
// asm:   0x181e9f963: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x181e9fa7c: mov rdx, qword ptr [rip + 0x2214c5d]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
// asm:   0x181e9fa83: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e9fa88: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e9fa8d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e9fa92: test rcx, rcx
// asm:   0x181e9fa95: jne 0x181e9fb30
// asm:   0x181e9fa9b: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x181e9faa3: movss xmm6, dword ptr [rsp + 0xd0]
// asm:   0x181e9faac: movss xmm7, dword ptr [rip + 0x14b9154]
// asm:   0x181e9fb24: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e9fb30: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void Map_MapDestructionDebris__Update(Map_MapDestructionDebris_o *__this,MethodInfo *method)

{
  System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *pSVar1;
  System_Threading_Tasks_Task_o *pSVar2;
  System_Collections_Generic_List_MapDestructionDebris_Piece__o *__this_00;
  UnityEngine_Rigidbody_o *body;
  UnityEngine_Behaviour_o *__this_01;
  System_Collections_Generic_Dictionary_Material__Material__o *__this_02;
  UnityEngine_Material_o *pUVar3;
  bool bVar4;
  int32_t iVar5;
  System_AggregateException_o *pSVar6;
  System_Collections_Generic_List_List_MapFracture_Triangle___o *cells;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  UnityEngine_Object_o *pUVar7;
  System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o **targetAddress;
  float fVar8;
  float fVar9;
  undefined1 local_88 [16];
  UnityEngine_Material_o *local_78;
  undefined1 local_70 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_68;
  UnityEngine_Material_o *local_60;
  undefined1 local_58 [8];
  uint64_t uStack_50;
  UnityEngine_Material_o *local_48;
  
  if (Il2CppMethodInitialized_184345078 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Threading_Tasks_Task_List_List_MapFracture_Triangle_get_Result);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
              );
    Il2CppMethodInitialized_184345078 = '\x01';
  }
  local_70 = (undefined1  [8])0x0;
  pUStack_68 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_60 = (UnityEngine_Material_o *)0x0;
  local_58 = (undefined1  [8])0x0;
  uStack_50 = 0;
  local_48 = (UnityEngine_Material_o *)0x0;
  fVar9 = (__this->fields)._age;
  fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._age = fVar8 + fVar9;
  if ((__this->fields)._fracture == (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)0x0) {
label_181e9f737:
    if ((__this->fields)._baking != (System_Threading_Tasks_Task_o *)0x0) {
      bVar4 = System_Threading_Tasks_Task__get_IsCompleted((__this->fields)._baking,(MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
        }
        bVar4 = Map_MapDestructionDebris__TryClaimFrame((MethodInfo *)0x0);
        if (bVar4) {
          pSVar2 = (__this->fields)._baking;
          if (pSVar2 == (System_Threading_Tasks_Task_o *)0x0) goto label_181e9fb03;
          bVar4 = System_Threading_Tasks_Task__get_IsFaulted(pSVar2,(MethodInfo *)0x0);
          if (bVar4) {
            pSVar2 = (__this->fields)._baking;
            if (pSVar2 == (System_Threading_Tasks_Task_o *)0x0) goto label_181e9fb03;
            pSVar6 = System_Threading_Tasks_Task__get_Exception(pSVar2,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
            }
            UnityEngine_Debug__LogException((System_Exception_o *)pSVar6,(MethodInfo *)0x0);
          }
          Map_MapDestructionDebris__ActivateFragments(__this,(MethodInfo *)0x0);
          (__this->fields)._baking = (System_Threading_Tasks_Task_o *)0x0;
          targetAddress =
               (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o **)&(__this->fields)._baking;
          goto label_181e9f7d9;
        }
      }
    }
  }
  else {
    bVar4 = System_Threading_Tasks_Task__get_IsCompleted
                      ((System_Threading_Tasks_Task_o *)(__this->fields)._fracture,(MethodInfo *)0x0);
    if (!bVar4) goto label_181e9f737;
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    bVar4 = Map_MapDestructionDebris__TryClaimFrame((MethodInfo *)0x0);
    if (!bVar4) goto label_181e9f737;
    pSVar1 = (__this->fields)._fracture;
    if (pSVar1 == (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)0x0) goto label_181e9fb03;
    iVar5 = System_Threading_Tasks_Task__get_Status((System_Threading_Tasks_Task_o *)pSVar1,(MethodInfo *)0x0)
    ;
    pSVar1 = (__this->fields)._fracture;
    if (pSVar1 == (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)0x0) goto label_181e9fb03;
    if (iVar5 == 5) {
      cells = (System_Collections_Generic_List_List_MapFracture_Triangle___o *)
              System_Threading_Tasks_Task_object___get_Result
                        ((System_Threading_Tasks_Task_object__o *)pSVar1,
                         (MethodInfo_D73CE0 *)
                         MethodInfo_System_Threading_Tasks_Task_List_List_MapFracture_Triangle_get_Result);
      Map_MapDestructionDebris__CreateFragments(__this,cells,(MethodInfo *)0x0);
label_181e9f726:
      (__this->fields)._fracture = (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)0x0;
      targetAddress = &(__this->fields)._fracture;
    }
    else {
      bVar4 = System_Threading_Tasks_Task__get_IsFaulted
                        ((System_Threading_Tasks_Task_o *)pSVar1,(MethodInfo *)0x0);
      if (!bVar4) goto label_181e9f726;
      pSVar1 = (__this->fields)._fracture;
      if (pSVar1 == (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)0x0)
      goto label_181e9fb03;
      pSVar6 = System_Threading_Tasks_Task__get_Exception
                         ((System_Threading_Tasks_Task_o *)pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogException((System_Exception_o *)pSVar6,(MethodInfo *)0x0);
      (__this->fields)._fracture = (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)0x0;
      targetAddress = &(__this->fields)._fracture;
    }
label_181e9f7d9:
    Il2CppCodeGenWriteBarrier(targetAddress,(void *)0x0);
  }
  if (0.5 <= (__this->fields)._age - (__this->fields)._activeAge) {
    __this_00 = (__this->fields)._pieces;
    if (__this_00 == (System_Collections_Generic_List_MapDestructionDebris_Piece__o *)0x0) goto label_181e9fb03;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_88,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_GetEnumerator);
    local_70 = (undefined1  [8])local_88._0_8_;
    pUStack_68 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88._8_8_;
    local_60 = local_78;
    local_88._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_88._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70;
    while( true ) {
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_70,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_MoveNext
                        );
      pUVar3 = local_60;
      if (!bVar4) break;
      if (local_60 == (UnityEngine_Material_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar7 = (*(uint64_t *)((char *)local_60 + 0x20));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if ((*(uint64_t *)((char *)pUVar3 + 0x20)) == (UnityEngine_Rigidbody_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = UnityEngine_Rigidbody__get_isKinematic((*(uint64_t *)((char *)pUVar3 + 0x20)),(MethodInfo *)0x0);
        if (!bVar4) {
          body = (*(uint64_t *)((char *)pUVar3 + 0x20));
          if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
          }
          bVar4 = Map_MapDestructionDebris__IsSettled(body,(MethodInfo *)0x0);
          if (bVar4) {
            if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
            }
            __this_01 = (UnityEngine_Behaviour_o *)(*(uint64_t *)((char *)pUVar3 + 0x28));
            if (__this_01 == (UnityEngine_Behaviour_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Behaviour__set_enabled(__this_01,false,(MethodInfo *)0x0);
            if ((*(uint64_t *)((char *)pUVar3 + 0x20)) == (UnityEngine_Rigidbody_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Rigidbody__set_isKinematic((*(uint64_t *)((char *)pUVar3 + 0x20)),true,(MethodInfo *)0x0);
            if ((*(uint64_t *)((char *)pUVar3 + 0x20)) == (UnityEngine_Rigidbody_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Rigidbody__set_interpolation((*(uint64_t *)((char *)pUVar3 + 0x20)),0,(MethodInfo *)0x0);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_Dispose);
  }
  fVar9 = ((__this->fields)._age - 3.0) / 1.5;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  else if (1.0 < fVar9) {
    fVar9 = 1.0;
  }
  __this_02 = (__this->fields)._rubbleMaterials;
  if (__this_02 != (System_Collections_Generic_Dictionary_Material__Material__o *)0x0) {
    __this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values);
    if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_88,
                 __this_03,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
                );
      local_58 = (undefined1  [8])local_88._0_8_;
      uStack_50 = local_88._8_8_;
      local_48 = local_78;
      local_88._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_88._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
      while( true ) {
        bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_58,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
                          );
        pUVar3 = local_48;
        if (!bVar4) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
                    );
          if (1.0 <= fVar9) {
            pUVar7 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_2f1ff70(pUVar7,(MethodInfo *)0x0);
          }
          return;
        }
        if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
        }
        if (pUVar3 == (UnityEngine_Material_o *)0x0) break;
        UnityEngine_Material__SetFloat_2ee3980
                  (pUVar3,TypeInfo_Map_MapDestructionDebris->static_fields->FadeId,fVar9,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
label_181e9fb03:
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$TryClaimFrame
// il2cpp: bool Map_MapDestructionDebris__TryClaimFrame (const MethodInfo* method);
// 0x181e9f4b0

bool Map_MapDestructionDebris__TryClaimFrame(MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_184345079 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    Il2CppMethodInitialized_184345079 = '\x01';
  }
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  iVar1 = TypeInfo_Map_MapDestructionDebris->static_fields->_workFrame;
  iVar2 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if (iVar1 != iVar2) {
    iVar2 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    TypeInfo_Map_MapDestructionDebris->static_fields->_workFrame = iVar2;
    return true;
  }
  return false;
}


// Map.MapDestructionDebris$$CreateFragments
// il2cpp: void Map_MapDestructionDebris__CreateFragments (Map_MapDestructionDebris_o* __this, System_Collections_Generic_List_List_MapFracture_Triangle___o* cells, const MethodInfo* method);
// 0x181e9d3d0
// eh: try 0x181e9d930..0x181e9d96e -> pad 0x183315ba0 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9d97f: mov rdx, qword ptr [rip + 0x21e2b62]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x181e9d986: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e9d98b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e9d990: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e9d995: test rcx, rcx
// asm:   0x181e9d998: jne 0x181e9da64
// asm:   0x181e9d99e: mov rsi, qword ptr [rsp + 0xf0]
// asm:   0x181e9da64: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315ba0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315ba5: push rbp
// asm:   0x183315ba6: sub rsp, 0x20
// asm:   0x183315baa: mov rbp, rdx
// asm:   0x183315bad: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315bb1: mov rcx, qword ptr [rax]
// asm:   0x183315bb4: mov qword ptr [rbp + 0x50], rcx
// asm:   0x183315bb8: movabs rax, 0
// asm:   0x183315bc2: add rsp, 0x20
// asm:   0x183315bc6: pop rbp
// asm:   0x183315bc7: ret 

void Map_MapDestructionDebris__CreateFragments
               (Map_MapDestructionDebris_o *__this,
               System_Collections_Generic_List_List_MapFracture_Triangle___o *cells,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Material_array *pUVar3;
  System_Collections_Generic_List_Mesh__o *pSVar4;
  UnityEngine_Mesh_array *pUVar5;
  System_Collections_Generic_List_EntityId__o *pSVar6;
  System_Collections_Generic_List_MapDestructionDebris_Piece__o *pSVar7;
  System_Collections_Generic_List_GameObject__o *pSVar8;
  MethodInfo *pMVar9;
  float fVar10;
  bool bVar11;
  int32_t iVar12;
  UnityEngine_EntityId_o UVar13;
  Map_MapDestructionDebris___c__DisplayClass45_0_o *object;
  System_Collections_Generic_List_T__o *pSVar14;
  System_Collections_Generic_List_MapFracture_Triangle__o *pSVar15;
  UnityEngine_Mesh_o *value;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_Transform_o *parent;
  UnityEngine_MeshFilter_o *__this_02;
  UnityEngine_MeshRenderer_o *__this_03;
  UnityEngine_Object_o *pUVar17;
  Map_MapDestructionDebris_Piece_o *__this_04;
  System_Action_o *__this_05;
  System_Threading_Tasks_Task_o *value_00;
  int index;
  System_Collections_Generic_List_T__o *local_c0;
  float local_b8;
  System_Collections_Generic_List_T__o *local_a8;
  float local_a0;
  undefined1 local_98 [16];
  UnityEngine_Object_o *local_88;
  undefined1 local_78 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_70;
  UnityEngine_Object_o *local_68;
  
  if (Il2CppMethodInitialized_18434507a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_EntityId_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_EntityId_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_EntityId);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris_Piece);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Tasks_Task);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapDestructionDebris_c__DisplayClass45_0_CreateFragments_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris_c__DisplayClass45_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Map debris fragment");
    Il2CppMethodInitialized_18434507a = '\x01';
  }
  local_c0 = (System_Collections_Generic_List_T__o *)0x0;
  local_b8 = 0.0;
  local_78 = (undefined1  [8])0x0;
  pUStack_70 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_68 = (UnityEngine_Object_o *)0x0;
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapDestructionDebris_c__DisplayClass45_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (cells != (System_Collections_Generic_List_List_MapFracture_Triangle___o *)0x0) {
    if ((cells->fields)._size == 0) {
      return;
    }
    iVar12 = (cells->fields)._size;
    pSVar14 = (System_Collections_Generic_List_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_EntityId);
    System_Collections_Generic_List_EntityId____ctor
              (pSVar14,iVar12,(MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_EntityId_ctor);
    if (object != (Map_MapDestructionDebris___c__DisplayClass45_0_o *)0x0) {
      (object->fields).convex = (System_Collections_Generic_List_EntityId__o *)pSVar14;
      Il2CppCodeGenWriteBarrier(&(object->fields).convex,pSVar14);
      for (index = 0; index < (cells->fields)._size; index = index + 1) {
        pSVar15 = (System_Collections_Generic_List_MapFracture_Triangle__o *)
                  System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)cells,index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_get_Item);
        pUVar3 = (__this->fields)._fragmentMaterials;
        if (pUVar3 == (UnityEngine_Material_array *)0x0) goto label_181e9da58;
        value = Map_MapFracture__CreateMesh
                          (pSVar15,(int32_t)pUVar3->max_length,(UnityEngine_Vector3_o *)&local_c0,
                           (MethodInfo *)0x0);
        pMVar9 = MethodInfo_System_Collections_Generic_List_Mesh_Add;
        pSVar4 = (__this->fields)._meshes;
        if (pSVar4 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_181e9da58;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (pSVar4->fields)._items;
        if (pUVar5 == (UnityEngine_Mesh_array *)0x0) goto label_181e9da58;
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pUVar5->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          if ((uint)pUVar5->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pUVar5->m_Items[(int)uVar2] = value;
          Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,value);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)value,
                     (MethodInfo_93DD50 *)pMVar9->klass->rgctx_data[0xe].method);
        }
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor(__this_00,"Map debris fragment",(MethodInfo *)0x0);
        __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
        ;
        if ((__this_01 == (UnityEngine_GameObject_o *)0x0) ||
           (iVar12 = UnityEngine_GameObject__get_layer(__this_01,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_181e9da58;
        UnityEngine_GameObject__set_layer(__this_00,iVar12,(MethodInfo *)0x0);
        pUVar16 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_181e9da58;
        UnityEngine_Transform__SetParent_2f5a7e0(pUVar16,parent,false,(MethodInfo *)0x0);
        pUVar16 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        fVar10 = local_b8;
        pSVar14 = local_c0;
        if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_181e9da58;
        local_a8 = local_c0;
        local_a0 = local_b8;
        UnityEngine_Transform__set_localPosition(pUVar16,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0)
        ;
        __this_02 = UnityEngine_GameObject__AddComponent_object_
                              (__this_00,
                               (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter)
        ;
        if (__this_02 == (UnityEngine_MeshFilter_o *)0x0) goto label_181e9da58;
        UnityEngine_MeshFilter__set_sharedMesh(__this_02,value,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._fragmentMaterials;
        if (Il2CppMethodInitialized_184345074 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
          Il2CppMethodInitialized_184345074 = '\x01';
        }
        __this_03 = UnityEngine_GameObject__AddComponent_object_
                              (__this_00,
                               (MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
        if (__this_03 == (UnityEngine_MeshRenderer_o *)0x0) goto label_181e9da58;
        UnityEngine_Renderer__set_sharedMaterials
                  ((UnityEngine_Renderer_o *)__this_03,pUVar3,(MethodInfo *)0x0);
        UnityEngine_Renderer__set_shadowCastingMode
                  ((UnityEngine_Renderer_o *)__this_03,(__this->fields)._shadows,(MethodInfo *)0x0);
        pSVar15 = (System_Collections_Generic_List_MapFracture_Triangle__o *)
                  System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)cells,index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_get_Item);
        bVar11 = Map_MapFracture__HasVolume(pSVar15,0.1,(MethodInfo *)0x0);
        if (bVar11) {
          local_98._0_8_ = pSVar14;
          local_98._8_4_ = fVar10;
          pSVar15 = (System_Collections_Generic_List_MapFracture_Triangle__o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)cells,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_get_Item);
          pUVar17 = (UnityEngine_Object_o *)
                    Map_MapFracture__CreateCollisionMesh
                              (pSVar15,(UnityEngine_Vector3_o *)local_98,0.75,(MethodInfo *)0x0);
        }
        else {
          pUVar17 = (UnityEngine_Object_o *)0x0;
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar11 = UnityEngine_Object__op_Inequality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar11) {
          pSVar4 = (__this->fields)._meshes;
          if ((pSVar4 == (System_Collections_Generic_List_Mesh__o *)0x0) ||
             (il2cpp_runtime_helper_180012890(pSVar4,pUVar17,MethodInfo_System_Collections_Generic_List_Mesh_Add),
             pUVar17 == (UnityEngine_Object_o *)0x0)) goto label_181e9da58;
          pSVar6 = (object->fields).convex;
          UVar13 = UnityEngine_Object__GetEntityId(pUVar17,(MethodInfo *)0x0);
          if (pSVar6 == (System_Collections_Generic_List_EntityId__o *)0x0) goto label_181e9da58;
          il2cpp_runtime_helper_18003d480(pSVar6,UVar13.fields.m_Data,MethodInfo_System_Collections_Generic_List_EntityId_Add);
        }
        pSVar7 = (__this->fields)._pieces;
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapDestructionDebris_Piece);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_04,(MethodInfo *)0x0);
        if (__this_04 == (Map_MapDestructionDebris_Piece_o *)0x0) goto label_181e9da58;
        (__this_04->fields).Fragment = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this_04->fields).Fragment,__this_00);
        (__this_04->fields).Collision = (UnityEngine_Mesh_o *)pUVar17;
        Il2CppCodeGenWriteBarrier(&(__this_04->fields).Collision,pUVar17);
        if (pSVar7 == (System_Collections_Generic_List_MapDestructionDebris_Piece__o *)0x0)
        goto label_181e9da58;
        il2cpp_runtime_helper_180012890(pSVar7,__this_04,
                      MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_Add);
      }
      pSVar8 = (__this->fields)._sectionVisuals;
      if (pSVar8 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
                   (System_Collections_Generic_List_T__o *)pSVar8,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
        local_78 = (undefined1  [8])local_98._0_8_;
        pUStack_70 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
        local_68 = local_88;
        local_98._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78;
        while (bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                                   (MethodInfo_153A2A0 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
              pUVar17 = local_68, bVar11) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_2f1ff70(pUVar17,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
                   MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
        pSVar8 = (__this->fields)._sectionVisuals;
        if (pSVar8 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          iVar12 = (pSVar8->fields)._size;
          (pSVar8->fields)._size = 0;
          if (0 < iVar12) {
            System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar12,(MethodInfo *)0x0);
          }
          __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_05,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_Map_MapDestructionDebris_c__DisplayClass45_0_CreateFragments_b__0,
                     (MethodInfo *)0x0);
          if ((TypeInfo_System_Threading_Tasks_Task->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Threading_Tasks_Task);
          }
          value_00 = System_Threading_Tasks_Task__Run(__this_05,(MethodInfo *)0x0);
          (__this->fields)._baking = value_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._baking,value_00);
          return;
        }
      }
    }
  }
label_181e9da58:
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$ActivateFragments
// il2cpp: void Map_MapDestructionDebris__ActivateFragments (Map_MapDestructionDebris_o* __this, const MethodInfo* method);
// 0x181e9cc10
// eh: try 0x181e9cd43..0x181e9d091 -> pad 0x18332a810 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9d014: mov rdx, qword ptr [rip + 0x2207845]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_Dispose
// asm:   0x181e9d01b: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e9d020: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e9d025: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e9d02a: test rcx, rcx
// asm:   0x181e9d02d: jne 0x181e9d091
// asm:   0x181e9d091: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18332a810: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18332a815: push rbp
// asm:   0x18332a816: sub rsp, 0x20
// asm:   0x18332a81a: mov rbp, rdx
// asm:   0x18332a81d: mov rax, qword ptr [rbp + 0x80]
// asm:   0x18332a824: mov rcx, qword ptr [rax]
// asm:   0x18332a827: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18332a82b: movabs rax, 0
// asm:   0x18332a835: add rsp, 0x20
// asm:   0x18332a839: pop rbp
// asm:   0x18332a83a: ret 

void Map_MapDestructionDebris__ActivateFragments(Map_MapDestructionDebris_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int32_t Seed;
  System_Collections_Generic_List_MapDestructionDebris_Piece__o *__this_00;
  Il2CppClass *__this_01;
  UnityEngine_Mesh_o *collision;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_Object_o *pUVar6;
  Il2CppObject *pIVar7;
  bool bVar8;
  System_Random_o *__this_02;
  UnityEngine_MeshFilter_o *__this_03;
  UnityEngine_Mesh_o *mesh;
  UnityEngine_Collider_o *__this_04;
  Il2CppClass *pIVar9;
  UnityEngine_ConstantForce_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  float fVar12;
  UnityEngine_Vector3_o local_108;
  UnityEngine_Vector3_o local_f8;
  UnityEngine_Vector3_o local_e8;
  undefined1 local_d8 [16];
  Il2CppObject *local_c8;
  System_Collections_Generic_List_Enumerator_object__o local_c0;
  UnityEngine_Vector3_o local_a0 [9];
  
  if (Il2CppMethodInitialized_18434507b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ConstantForce);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Random);
    Il2CppMethodInitialized_18434507b = '\x01';
  }
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._current = (Il2CppObject *)0x0;
  (__this->fields)._activeAge = (__this->fields)._age;
  Seed = (__this->fields)._seed;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Random);
  System_Random___ctor_1b47f40(__this_02,Seed,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._pieces;
  if (__this_00 == (System_Collections_Generic_List_MapDestructionDebris_Piece__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_d8,
             (System_Collections_Generic_List_T__o *)__this_00,
             (MethodInfo_91F180 *)
             MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_GetEnumerator);
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)local_d8._0_8_;
  local_c0.fields._index = local_d8._8_4_;
  local_c0.fields._version = local_d8._12_4_;
  local_c0.fields._current = local_c8;
  local_d8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_d8._8_8_ = &local_c0;
  while( true ) {
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_c0,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_MoveNext
                      );
    pIVar7 = local_c0.fields._current;
    if (!bVar8) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_c0,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_Dispose);
      return;
    }
    if (local_c0.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = local_c0.fields._current[1].klass;
    if (__this_01 == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    __this_03 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_01,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_MeshFilter);
    if (__this_03 == (UnityEngine_MeshFilter_o *)0x0) break;
    mesh = UnityEngine_MeshFilter__get_sharedMesh(__this_03,(MethodInfo *)0x0);
    collision = pIVar7[1].monitor;
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    __this_04 = Map_MapDestructionDebris__AddCollider
                          ((UnityEngine_GameObject_o *)__this_01,mesh,collision,(MethodInfo *)0x0);
    if (__this_04 == (UnityEngine_Collider_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Collider__set_sharedMaterial
              (__this_04,TypeInfo_Map_MapDestructionDebris->static_fields->_rubble,(MethodInfo *)0x0);
    pIVar9 = (Il2CppClass *)
             UnityEngine_GameObject__AddComponent_object_
                       ((UnityEngine_GameObject_o *)__this_01,
                        (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Rigidbody);
    pIVar7[2].klass = pIVar9;
    Il2CppCodeGenWriteBarrier(&pIVar7[2].klass,pIVar9);
    if (pIVar7[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Rigidbody__set_interpolation((UnityEngine_Rigidbody_o *)pIVar7[2].klass,1,(MethodInfo *)0x0);
    if (__this_02 == (System_Random_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar9 = pIVar7[2].klass;
    pUVar5 = (*(__this_02->klass->vtable)._8_NextDouble.methodPtr)
                       (__this_02,(__this_02->klass->vtable)._8_NextDouble.method);
    pUVar4 = (*(__this_02->klass->vtable)._8_NextDouble.methodPtr)
                       (__this_02,(__this_02->klass->vtable)._8_NextDouble.method);
    if (pIVar9 == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    local_108.fields.y = 0.0;
    local_108.fields.x = (float)(double)pUVar5 - 0.5;
    local_108.fields.z = (float)(double)pUVar4 - 0.5;
    UnityEngine_Rigidbody__set_linearVelocity((UnityEngine_Rigidbody_o *)pIVar9,&local_108,(MethodInfo *)0x0);
    pIVar9 = pIVar7[2].klass;
    pUVar6 = (*(__this_02->klass->vtable)._8_NextDouble.methodPtr)
                       (__this_02,(__this_02->klass->vtable)._8_NextDouble.method);
    pUVar5 = (*(__this_02->klass->vtable)._8_NextDouble.methodPtr)
                       (__this_02,(__this_02->klass->vtable)._8_NextDouble.method);
    pUVar4 = (*(__this_02->klass->vtable)._8_NextDouble.methodPtr)
                       (__this_02,(__this_02->klass->vtable)._8_NextDouble.method);
    if (pIVar9 == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    local_f8.fields.x = ((float)(double)pUVar6 - 0.5) * 1.2;
    local_f8.fields.y = ((float)(double)pUVar5 - 0.5) * 1.2;
    local_f8.fields.z = ((float)(double)pUVar4 - 0.5) * 1.2;
    UnityEngine_Rigidbody__set_angularVelocity((UnityEngine_Rigidbody_o *)pIVar9,&local_f8,(MethodInfo *)0x0);
    pUVar10 = UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)__this_01,
                         (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_ConstantForce);
    pIVar7[2].monitor = pUVar10;
    Il2CppCodeGenWriteBarrier(&pIVar7[2].monitor,pUVar10);
    pUVar10 = pIVar7[2].monitor;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    pUVar11 = UnityEngine_Physics__get_gravity(local_a0,(MethodInfo *)0x0);
    if (pIVar7[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    fVar1 = (pUVar11->fields).x;
    fVar2 = (pUVar11->fields).y;
    fVar3 = (pUVar11->fields).z;
    fVar12 = UnityEngine_Rigidbody__get_mass((UnityEngine_Rigidbody_o *)pIVar7[2].klass,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_ConstantForce_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_e8.fields.x = fVar1 * fVar12;
    local_e8.fields.y = fVar2 * fVar12;
    local_e8.fields.z = fVar3 * fVar12;
    UnityEngine_ConstantForce__set_force(pUVar10,&local_e8,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$AddCollider
// il2cpp: UnityEngine_Collider_o* Map_MapDestructionDebris__AddCollider (UnityEngine_GameObject_o* fragment, UnityEngine_Mesh_o* mesh, UnityEngine_Mesh_o* collision, const MethodInfo* method);
// 0x181e9d0a0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9d30d: xor r8d, r8d
// asm:   0x181e9d310: mov rdx, rbp
// asm:   0x181e9d313: mov rcx, rax
// asm:   0x181e9d316: call 0x182fdee70  ; UnityEngine_MeshCollider__set_sharedMesh()
// asm:   0x181e9d31b: xor r8d, r8d
// asm:   0x181e9d31e: mov dl, 1
// asm:   0x181e9d320: mov rcx, rbx
// asm:   0x181e9d323: call 0x182fded90  ; UnityEngine_MeshCollider__set_convex()
// asm:   0x181e9d328: mov rax, rbx
// asm:   0x181e9d32b: jmp 0x181e9d2e5

UnityEngine_Collider_o *
Map_MapDestructionDebris__AddCollider
          (UnityEngine_GameObject_o *fragment,UnityEngine_Mesh_o *mesh,UnityEngine_Mesh_o *collision,
          MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  bool bVar2;
  int32_t value;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_BoxCollider_o *__this_01;
  UnityEngine_Bounds_o *pUVar3;
  UnityEngine_MeshCollider_o *__this_02;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Bounds_o local_78 [3];
  
  if (Il2CppMethodInitialized_18434507c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Collider");
    Il2CppMethodInitialized_18434507c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(__this,"Collider",(MethodInfo *)0x0);
  if ((fragment != (UnityEngine_GameObject_o *)0x0) &&
     (value = UnityEngine_GameObject__get_layer(fragment,(MethodInfo *)0x0),
     __this != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__set_layer(__this,value,(MethodInfo *)0x0);
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    parent = UnityEngine_GameObject__get_transform(fragment,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)collision,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        __this_02 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_MeshCollider);
        if (__this_02 != (UnityEngine_MeshCollider_o *)0x0) {
          UnityEngine_MeshCollider__set_sharedMesh(__this_02,collision,(MethodInfo *)0x0);
          UnityEngine_MeshCollider__set_convex(__this_02,true,(MethodInfo *)0x0);
          return (UnityEngine_Collider_o *)__this_02;
        }
      }
      else {
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
        if ((mesh != (UnityEngine_Mesh_o *)0x0) &&
           (pUVar3 = UnityEngine_Mesh__get_bounds(local_78,mesh,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_BoxCollider_o *)0x0)) {
          local_88.x = (pUVar3->fields).m_Center.fields.x;
          local_88.y = (pUVar3->fields).m_Center.fields.y;
          local_88.z = (pUVar3->fields).m_Center.fields.z;
          UnityEngine_BoxCollider__set_center(__this_01,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Mesh__get_bounds(local_78,mesh,(MethodInfo *)0x0);
          fVar6 = (pUVar3->fields).m_Extents.fields.x;
          fVar7 = (pUVar3->fields).m_Extents.fields.y;
          fVar8 = (pUVar3->fields).m_Extents.fields.z;
          fVar6 = (fVar6 + fVar6) * 0.75;
          fVar7 = (fVar7 + fVar7) * 0.75;
          fVar8 = (fVar8 + fVar8) * 0.75;
          if (Il2CppMethodInitialized_18433dbeb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbeb = '\x01';
          }
          pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar4 = (pUVar1->oneVector).fields.x * 0.1;
          if (fVar6 <= fVar4) {
            fVar6 = fVar4;
          }
          fVar4 = (pUVar1->oneVector).fields.y * 0.1;
          fVar5 = (pUVar1->oneVector).fields.z * 0.1;
          if (fVar7 <= fVar4) {
            fVar7 = fVar4;
          }
          local_88.z = fVar8;
          if (fVar8 <= fVar5) {
            local_88.z = fVar5;
          }
          local_88.y = fVar7;
          local_88.x = fVar6;
          UnityEngine_BoxCollider__set_size(__this_01,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
          return (UnityEngine_Collider_o *)__this_01;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$IsSettled
// il2cpp: bool Map_MapDestructionDebris__IsSettled (UnityEngine_Rigidbody_o* body, const MethodInfo* method);
// 0x181e9e700

bool Map_MapDestructionDebris__IsSettled(UnityEngine_Rigidbody_o *body,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o *pUVar4;
  UnityEngine_Vector3_o local_28 [2];
  
  if (body == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar4 = UnityEngine_Rigidbody__get_linearVelocity(local_28,body,(MethodInfo *)0x0);
  fVar1 = (pUVar4->fields).x;
  fVar2 = (pUVar4->fields).y;
  fVar3 = (pUVar4->fields).z;
  if (1.0 <= fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) {
    return false;
  }
  pUVar4 = UnityEngine_Rigidbody__get_angularVelocity(local_28,body,(MethodInfo *)0x0);
  fVar1 = (pUVar4->fields).x;
  fVar2 = (pUVar4->fields).y;
  fVar3 = (pUVar4->fields).z;
  return fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 < 1.0;
}


// Map.MapDestructionDebris$$Freeze
// il2cpp: void Map_MapDestructionDebris__Freeze (Map_MapDestructionDebris_Piece_o* piece, const MethodInfo* method);
// 0x181e9e590

void Map_MapDestructionDebris__Freeze(Map_MapDestructionDebris_Piece_o *piece,MethodInfo *method)

{
  UnityEngine_Behaviour_o *__this;
  UnityEngine_Rigidbody_o *pUVar1;
  
  if ((piece != (Map_MapDestructionDebris_Piece_o *)0x0) &&
     (__this = (UnityEngine_Behaviour_o *)(piece->fields).Force, __this != (UnityEngine_Behaviour_o *)0x0)) {
    UnityEngine_Behaviour__set_enabled(__this,false,(MethodInfo *)0x0);
    pUVar1 = (piece->fields).Body;
    if (pUVar1 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_isKinematic(pUVar1,true,(MethodInfo *)0x0);
      pUVar1 = (piece->fields).Body;
      if (pUVar1 != (UnityEngine_Rigidbody_o *)0x0) {
        UnityEngine_Rigidbody__set_interpolation(pUVar1,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$OnDestroy
// il2cpp: void Map_MapDestructionDebris__OnDestroy (Map_MapDestructionDebris_o* __this, const MethodInfo* method);
// 0x181e9e9d0
// eh: try 0x181e9ebe1..0x181e9ecdb -> pad 0x183317f30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9ec2d: mov rdx, qword ptr [rip + 0x2215aac]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
// asm:   0x181e9ec34: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e9ec39: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e9ec3e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e9ec43: test rcx, rcx
// asm:   0x181e9ec46: jne 0x181e9ed32
// asm:   0x181e9ec4c: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x181e9ecec: mov rdx, qword ptr [rip + 0x21ee9f5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose
// asm:   0x181e9ecf3: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e9ecf8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e9ecfd: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e9ed02: test rcx, rcx
// asm:   0x181e9ed05: jne 0x181e9ed38
// asm:   0x181e9ed32: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e9ed38: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void Map_MapDestructionDebris__OnDestroy(Map_MapDestructionDebris_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapDestructionDebris__o *__this_00;
  System_Threading_Tasks_Task_o *obj;
  System_Collections_Generic_Dictionary_Material__Material__o *__this_01;
  System_Collections_Generic_List_Mesh__o *__this_02;
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  System_Threading_Tasks_Task_array *tasks;
  Il2CppObject *pIVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  undefined1 local_58 [16];
  UnityEngine_Object_o *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  uint64_t uStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_18434507d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Tasks_Task_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Tasks_Task);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
              );
    Il2CppMethodInitialized_18434507d = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (UnityEngine_Object_o *)0x0;
  local_28 = (undefined1  [8])0x0;
  uStack_20 = 0;
  local_18 = (UnityEngine_Object_o *)0x0;
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  __this_00 = TypeInfo_Map_MapDestructionDebris->static_fields->Active;
  if (__this_00 != (System_Collections_Generic_List_MapDestructionDebris__o *)0x0) {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
               (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Remove);
    if ((__this->fields)._baking != (System_Threading_Tasks_Task_o *)0x0) {
      tasks = (System_Threading_Tasks_Task_array *)SZArrayNew(TypeInfo_System_Threading_Tasks_Task_array,1);
      if (tasks == (System_Threading_Tasks_Task_array *)0x0) goto label_181e9ed3e;
      obj = (__this->fields)._baking;
      if (obj != (System_Threading_Tasks_Task_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((tasks->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if ((int)tasks->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      tasks->m_Items[0] = obj;
      Il2CppCodeGenWriteBarrier(tasks->m_Items,obj);
      if ((TypeInfo_System_Threading_Tasks_Task->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Threading_Tasks_Task);
      }
      System_Threading_Tasks_Task__WaitAny(tasks,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields)._rubbleMaterials;
    if (__this_01 != (System_Collections_Generic_Dictionary_Material__Material__o *)0x0) {
      __this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             (MethodInfo_13C65A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values);
      if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_58,__this_03,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
                  );
        local_40 = (undefined1  [8])local_58._0_8_;
        pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
        local_30 = local_48;
        local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
        while( true ) {
          bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_40,
                             (MethodInfo_155CFB0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
                            );
          pUVar1 = local_30;
          if (!bVar2) break;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
        }
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
                  );
        __this_02 = (__this->fields)._meshes;
        if (__this_02 != (System_Collections_Generic_List_Mesh__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                     (System_Collections_Generic_List_T__o *)__this_02,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator);
          local_28 = (undefined1  [8])local_58._0_8_;
          uStack_20 = local_58._8_8_;
          local_18 = local_48;
          local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
          while( true ) {
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_MoveNext);
            pUVar1 = local_18;
            if (!bVar2) break;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose);
          return;
        }
      }
    }
  }
label_181e9ed3e:
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$.ctor
// il2cpp: void Map_MapDestructionDebris___ctor (Map_MapDestructionDebris_o* __this, const MethodInfo* method);
// 0x181e9fc40

void Map_MapDestructionDebris___ctor(Map_MapDestructionDebris_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Material__Material__o *__this_00;
  System_Collections_Generic_List_Mesh__o *__this_01;
  System_Collections_Generic_List_MapDestructionDebris_Piece__o *__this_02;
  System_Collections_Generic_List_GameObject__o *__this_03;
  
  if (Il2CppMethodInitialized_18434507e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MapDestructionDebris_Piece);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_18434507e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
  (__this->fields)._rubbleMaterials = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rubbleMaterials,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Mesh);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Mesh_ctor);
  (__this->fields)._meshes = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._meshes,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapDestructionDebris_Piece);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_ctor);
  (__this->fields)._pieces = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pieces,__this_02);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._sectionVisuals = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._sectionVisuals,__this_03);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapDestructionDebris$$.cctor
// il2cpp: void Map_MapDestructionDebris___cctor (const MethodInfo* method);
// 0x181e9fb40

void Map_MapDestructionDebris___cctor(MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_MapDestructionDebris__o *__this;
  UnityEngine_RaycastHit_array *value;
  
  if (Il2CppMethodInitialized_18434507f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapDestructionDebris)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RaycastHit_array);
    il2cpp_codegen_initialize_runtime_metadata(&"_Fade");
    Il2CppMethodInitialized_18434507f = '\x01';
  }
  iVar1 = UnityEngine_Shader__PropertyToID("_Fade",(MethodInfo *)0x0);
  TypeInfo_Map_MapDestructionDebris->static_fields->FadeId = iVar1;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapDestructionDebris);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapDestructionDebris_ctor);
  TypeInfo_Map_MapDestructionDebris->static_fields->Active = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestructionDebris->static_fields->Active,__this);
  value = (UnityEngine_RaycastHit_array *)SZArrayNew(TypeInfo_UnityEngine_RaycastHit_array,0x10);
  TypeInfo_Map_MapDestructionDebris->static_fields->GroundHits = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestructionDebris->static_fields->GroundHits,value);
  return;
}


