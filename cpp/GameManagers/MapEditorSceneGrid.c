// Type: GameManagers.MapEditorSceneGrid
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/GameManagers/MapEditorSceneGrid.cs
// Prior real C# source: none
// --------------------------------

// GameManagers.MapEditorSceneGrid.<>c$$.cctor
// il2cpp: void GameManagers_MapEditorSceneGrid___c___cctor (const MethodInfo* method);
// 0x181e7bcf0

void GameManagers_MapEditorSceneGrid___c___cctor(MethodInfo *method)

{
  GameManagers_MapEditorSceneGrid___c_o *__this;
  
  if (Il2CppMethodInitialized_184344f10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorSceneGrid_c);
    Il2CppMethodInitialized_184344f10 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_MapEditorSceneGrid_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_GameManagers_MapEditorSceneGrid_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_MapEditorSceneGrid_c->static_fields->__9,__this);
  return;
}


// GameManagers.MapEditorSceneGrid.<>c$$.ctor
// il2cpp: void GameManagers_MapEditorSceneGrid___c___ctor (GameManagers_MapEditorSceneGrid___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_MapEditorSceneGrid___c___ctor(GameManagers_MapEditorSceneGrid___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorSceneGrid.<>c$$<RefreshIfNeeded>b__10_0
// il2cpp: bool GameManagers_MapEditorSceneGrid___c___RefreshIfNeeded_b__10_0 (GameManagers_MapEditorSceneGrid___c_o* __this, bool enabled, const MethodInfo* method);
// 0x180c8a970

bool
GameManagers_MapEditorSceneGrid___c___RefreshIfNeeded_b__10_0(GameManagers_MapEditorSceneGrid___c_o* __this, bool enabled, MethodInfo* method)

{
  return value;
}


// GameManagers.MapEditorSceneGrid$$Awake
// il2cpp: void GameManagers_MapEditorSceneGrid__Awake (GameManagers_MapEditorSceneGrid_o* __this, const MethodInfo* method);
// 0x181e71160
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7117c: nop dword ptr [rax]

void GameManagers_MapEditorSceneGrid__Awake(GameManagers_MapEditorSceneGrid_o *__this,MethodInfo *method)

{
  int axis;
  UnityEngine_Color_Fields local_28 [2];
  
  axis = 0;
  do {
    local_28[0].r = 0.5;
    local_28[0].g = 0.5;
    local_28[0].b = 0.5;
    local_28[0].a = 0.5;
    GameManagers_MapEditorSceneGrid__CreatePlane
              (__this,axis,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
    axis = axis + 1;
  } while (axis < 3);
  return;
}


// GameManagers.MapEditorSceneGrid$$SetAxes
// il2cpp: void GameManagers_MapEditorSceneGrid__SetAxes (GameManagers_MapEditorSceneGrid_o* __this, System_Collections_Generic_HashSet_int__o* axes, const MethodInfo* method);
// 0x181e720f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7211d: nop dword ptr [rax]

void GameManagers_MapEditorSceneGrid__SetAxes
               (GameManagers_MapEditorSceneGrid_o *__this,System_Collections_Generic_HashSet_int__o *axes,
               MethodInfo *method)

{
  System_Boolean_array *pSVar1;
  UnityEngine_GameObject_array *pUVar2;
  bool bVar3;
  uint item;
  ulonglong uVar4;
  
  if (Il2CppMethodInitialized_184344f0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    Il2CppMethodInitialized_184344f0a = '\x01';
  }
  uVar4 = 0;
  while( true ) {
    pSVar1 = (__this->fields)._enabledAxes;
    item = (uint)uVar4;
    if (axes == (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar3 = false;
    }
    else {
      bVar3 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)axes,item,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    }
    if (pSVar1 == (System_Boolean_array *)0x0) break;
    if ((uint)pSVar1->max_length <= item) {
label_181e721a4:
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[uVar4] = bVar3;
    pUVar2 = (__this->fields)._planes;
    if (pUVar2 == (UnityEngine_GameObject_array *)0x0) break;
    if ((uint)pUVar2->max_length <= item) goto label_181e721a4;
    pSVar1 = (__this->fields)._enabledAxes;
    if (pSVar1 == (System_Boolean_array *)0x0) break;
    if ((uint)pSVar1->max_length <= item) goto label_181e721a4;
    if (pUVar2->m_Items[uVar4] == (UnityEngine_GameObject_o *)0x0) break;
    UnityEngine_GameObject__SetActive
              (pUVar2->m_Items[uVar4],pSVar1->m_Items[uVar4] != false,(MethodInfo *)0x0);
    uVar4 = (ulonglong)(item + 1);
    if (2 < (int)(item + 1)) {
      GameManagers_MapEditorSceneGrid__RefreshIfNeeded(__this,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorSceneGrid$$Update
// il2cpp: void GameManagers_MapEditorSceneGrid__Update (GameManagers_MapEditorSceneGrid_o* __this, const MethodInfo* method);
// 0x181e721b0

void GameManagers_MapEditorSceneGrid__Update(GameManagers_MapEditorSceneGrid_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorSceneGrid__RefreshIfNeeded(__this,false,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorSceneGrid$$RefreshIfNeeded
// il2cpp: void GameManagers_MapEditorSceneGrid__RefreshIfNeeded (GameManagers_MapEditorSceneGrid_o* __this, bool force, const MethodInfo* method);
// 0x181e71bc0
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e71eb7: movaps xmm6, xmm10
// asm:   0x181e71ebb: jmp 0x181e71ecc
// asm:   0x181e71ec8: movaps xmm6, xmm12
// asm:   0x181e71f35: movaps xmm0, xmm11
// asm:   0x181e71f39: movaps xmm6, xmm12
// asm:   0x181e71f3d: jmp 0x181e71f52
// asm:   0x181e71f4e: movaps xmm6, xmm11
// asm:   0x181e7207c: movaps xmm14, xmmword ptr [rsp + 0x50]
// asm:   0x181e72082: movaps xmm13, xmmword ptr [rsp + 0x60]
// asm:   0x181e72088: movaps xmm12, xmmword ptr [rsp + 0x70]
// asm:   0x181e7208e: movaps xmm11, xmmword ptr [rsp + 0x80]
// asm:   0x181e72097: movaps xmm10, xmmword ptr [rsp + 0x90]
// asm:   0x181e720a0: movaps xmm9, xmmword ptr [rsp + 0xa0]
// asm:   0x181e720a9: movaps xmm8, xmmword ptr [rsp + 0xb0]
// asm:   0x181e720b2: movaps xmm7, xmmword ptr [rsp + 0xc0]
// asm:   0x181e720ba: movaps xmm6, xmmword ptr [rsp + 0xd0]
// asm:   0x181e720c2: movaps xmm15, xmmword ptr [rsp + 0x40]

void GameManagers_MapEditorSceneGrid__RefreshIfNeeded
               (GameManagers_MapEditorSceneGrid_o *__this,bool force,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  System_Boolean_array *pSVar4;
  Il2CppObject *object;
  Cameras_BaseCamera_o *pCVar5;
  UnityEngine_Camera_o *pUVar6;
  Settings_MapEditorSettings_o *pSVar7;
  Settings_FloatSetting_o *pSVar8;
  System_Single_array *pSVar9;
  UnityEngine_Vector2_array *pUVar10;
  UnityEngine_Mesh_array *pUVar11;
  UnityEngine_Vector2_o center;
  bool bVar12;
  char cVar13;
  System_Predicate_T__o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar14;
  uint axis;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o local_d8 [15];
  
  if (Il2CppMethodInitialized_184344f0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_bool_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorSceneGrid_c_RefreshIfNeeded_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorSceneGrid_c);
    Il2CppMethodInitialized_184344f0b = '\x01';
  }
  pSVar4 = (__this->fields)._enabledAxes;
  if ((TypeInfo_GameManagers_MapEditorSceneGrid_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorSceneGrid_c);
  }
  __this_00 = (System_Predicate_T__o *)TypeInfo_GameManagers_MapEditorSceneGrid_c->static_fields->__9__10_0;
  if (__this_00 == (System_Predicate_T__o *)0x0) {
    if ((TypeInfo_GameManagers_MapEditorSceneGrid_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorSceneGrid_c);
    }
    object = (Il2CppObject *)TypeInfo_GameManagers_MapEditorSceneGrid_c->static_fields->__9;
    __this_00 = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_bool_bool);
    System_Func_bool__bool____ctor
              (__this_00,object,(intptr_t)MethodInfo_GameManagers_MapEditorSceneGrid_c_RefreshIfNeeded_b__10_0
               ,(MethodInfo_B61B50 *)0x0);
    TypeInfo_GameManagers_MapEditorSceneGrid_c->static_fields->__9__10_0 =
         (System_Func_bool__bool__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_MapEditorSceneGrid_c->static_fields->__9__10_0,__this_00)
    ;
  }
  bVar12 = System_Linq_Enumerable__Any_bool_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                      (System_Func_TSource__bool__o *)__this_00,
                      (MethodInfo_6B60F0 *)MethodInfo_System_Linq_Enumerable_Any_bool);
  if (bVar12) {
    pCVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar12) {
      pCVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (pCVar5 != (Cameras_BaseCamera_o *)0x0) {
        pUVar6 = (pCVar5->fields).Camera;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar12 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar12) {
          return;
        }
        pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
        if ((pSVar7 != (Settings_MapEditorSettings_o *)0x0) &&
           (pSVar8 = (pSVar7->fields).SnapMove, pSVar8 != (Settings_FloatSetting_o *)0x0)) {
          fVar1 = (pSVar8->fields)._value;
          fVar21 = 0.01;
          if (0.01 <= fVar1) {
            fVar21 = fVar1;
          }
          pCVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
          if (((pCVar5 != (Cameras_BaseCamera_o *)0x0) &&
              (pUVar6 = (pCVar5->fields).Camera, pUVar6 != (UnityEngine_Camera_o *)0x0)) &&
             (__this_01 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
             __this_01 != (UnityEngine_Transform_o *)0x0)) {
            pUVar14 = UnityEngine_Transform__get_position(local_d8,__this_01,(MethodInfo *)0x0);
            uVar15 = 0;
            fVar1 = (pUVar14->fields).x;
            fVar2 = (pUVar14->fields).y;
            fVar3 = (pUVar14->fields).z;
            while (pSVar4 = (__this->fields)._enabledAxes, pSVar4 != (System_Boolean_array *)0x0) {
              axis = (uint)uVar15;
              if ((uint)pSVar4->max_length <= axis) goto label_181e720e3;
              if (pSVar4->m_Items[uVar15] != false) {
                fVar20 = fVar1;
                if ((axis != 0) && (fVar20 = fVar3, axis == 1)) {
                  fVar20 = fVar2;
                }
                fVar20 = ABS(fVar20);
                bVar12 = UnityEngine_Camera__get_orthographic(pUVar6,(MethodInfo *)0x0);
                if ((bVar12) &&
                   (fVar16 = UnityEngine_Camera__get_orthographicSize(pUVar6,(MethodInfo *)0x0),
                   fVar20 <= fVar16)) {
                  fVar20 = fVar16;
                }
                fVar16 = fVar20 / 20.0;
                if (fVar20 / 20.0 < fVar21) {
                  fVar16 = fVar21;
                }
                il2cpp_runtime_helper_1804f6950(fVar16 / fVar21);
                fVar20 = (float)il2cpp_runtime_helper_1804f4070();
                if (fVar20 < 0.0) {
                  fVar20 = 0.0;
                }
                fVar17 = (float)il2cpp_runtime_helper_1804f6b50(0x41200000,fVar20);
                fVar17 = fVar17 * fVar21;
                fVar20 = fVar2;
                fVar16 = fVar3;
                if ((axis != 0) && (fVar20 = fVar1, fVar16 = fVar2, axis == 1)) {
                  fVar16 = fVar3;
                }
                fVar20 = (float)il2cpp_runtime_helper_1804f4110(fVar20 / fVar17);
                fVar20 = fVar20 * fVar17;
                fVar16 = (float)il2cpp_runtime_helper_1804f4110(fVar16 / fVar17);
                fVar16 = fVar16 * fVar17;
                if (!force) {
                  pSVar9 = (__this->fields)._lastSpacing;
                  if (pSVar9 == (System_Single_array *)0x0) break;
                  if ((uint)pSVar9->max_length <= axis) goto label_181e720e3;
                  cVar13 = il2cpp_runtime_helper_180562af0(fVar17,pSVar9->m_Items[uVar15],0);
                  if (cVar13 != '\0') {
                    pUVar10 = (__this->fields)._lastCenters;
                    if (pUVar10 == (UnityEngine_Vector2_array *)0x0) break;
                    if ((uint)pUVar10->max_length <= axis) goto label_181e720e3;
                    fVar19 = fVar20 - pUVar10->m_Items[uVar15].fields.x;
                    fVar18 = fVar16 - pUVar10->m_Items[uVar15].fields.y;
                    if (fVar18 * fVar18 + fVar19 * fVar19 < 9.9999994e-11) goto label_181e72071;
                  }
                }
                pSVar9 = (__this->fields)._lastSpacing;
                if (pSVar9 == (System_Single_array *)0x0) break;
                if ((uint)pSVar9->max_length <= axis) {
label_181e720e3:
                  ThrowIndexOutOfRangeException();
                }
                pSVar9->m_Items[uVar15] = fVar17;
                pUVar10 = (__this->fields)._lastCenters;
                if (pUVar10 == (UnityEngine_Vector2_array *)0x0) break;
                if ((uint)pUVar10->max_length <= axis) goto label_181e720e3;
                pUVar10->m_Items[uVar15].fields.x = fVar20;
                pUVar10->m_Items[uVar15].fields.y = fVar16;
                pUVar11 = (__this->fields)._meshes;
                if (pUVar11 == (UnityEngine_Mesh_array *)0x0) break;
                if ((uint)pUVar11->max_length <= axis) goto label_181e720e3;
                center.fields.y = fVar16;
                center.fields.x = fVar20;
                GameManagers_MapEditorSceneGrid__BuildPlane
                          (pUVar11->m_Items[uVar15],axis,0x32,fVar17,center,(MethodInfo *)0x0);
              }
label_181e72071:
              uVar15 = (ulonglong)(axis + 1);
              if (2 < (int)(axis + 1)) {
                return;
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// GameManagers.MapEditorSceneGrid$$GetAdaptiveSpacing
// il2cpp: float GameManagers_MapEditorSceneGrid__GetAdaptiveSpacing (float snap, float cameraDistance, const MethodInfo* method);
// 0x181e71a30

float GameManagers_MapEditorSceneGrid__GetAdaptiveSpacing(float snap,float cameraDistance,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = snap;
  if (snap <= cameraDistance / 20.0) {
    fVar2 = cameraDistance / 20.0;
  }
  il2cpp_runtime_helper_1804f6950(fVar2 / snap);
  fVar1 = (float)il2cpp_runtime_helper_1804f4070();
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar2 = (float)il2cpp_runtime_helper_1804f6b50(0x41200000,fVar2);
  return fVar2 * snap;
}


// GameManagers.MapEditorSceneGrid$$CreatePlane
// il2cpp: void GameManagers_MapEditorSceneGrid__CreatePlane (GameManagers_MapEditorSceneGrid_o* __this, int32_t axis, UnityEngine_Color_o color, const MethodInfo* method);
// 0x181e71610
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e71710: mov rsi, qword ptr [rip + 0x220d9d9]  ; "GridX"
// asm:   0x181e71717: jmp 0x181e7172b

void GameManagers_MapEditorSceneGrid__CreatePlane
               (GameManagers_MapEditorSceneGrid_o *__this,int32_t axis,UnityEngine_Color_o *color,
               MethodInfo *method)

{
  UnityEngine_Mesh_array *pUVar1;
  UnityEngine_Material_array *pUVar2;
  UnityEngine_GameObject_array *pUVar3;
  bool bVar4;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_MeshFilter_o *__this_02;
  UnityEngine_MeshRenderer_o *__this_03;
  UnityEngine_Object_o *pUVar5;
  System_String_o *pSVar6;
  UnityEngine_Material_o *__this_04;
  Il2CppObject *pIVar7;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"_Cull");
    il2cpp_codegen_initialize_runtime_metadata(&"GridX");
    il2cpp_codegen_initialize_runtime_metadata(&"_SrcBlend");
    il2cpp_codegen_initialize_runtime_metadata(&"_ZTest");
    il2cpp_codegen_initialize_runtime_metadata(&"Hidden/Internal-Colored");
    il2cpp_codegen_initialize_runtime_metadata(&"Mesh");
    il2cpp_codegen_initialize_runtime_metadata(&"_DstBlend");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprites/Default");
    il2cpp_codegen_initialize_runtime_metadata(&"_ZWrite");
    il2cpp_codegen_initialize_runtime_metadata(&"GridZ");
    il2cpp_codegen_initialize_runtime_metadata(&"GridY");
    Il2CppMethodInitialized_184344f0c = '\x01';
  }
  pSVar6 = "GridX";
  if ((axis != 0) && (pSVar6 = "GridZ", axis == 1)) {
    pSVar6 = "GridY";
  }
  __this_00 = (UnityEngine_Object_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,pSVar6,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    __this_01 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0)
    ;
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)__this_00,
                             (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
      __this_03 = UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)__this_00,
                             (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer)
      ;
      if (__this_03 != (UnityEngine_MeshRenderer_o *)0x0) {
        UnityEngine_Renderer__set_shadowCastingMode((UnityEngine_Renderer_o *)__this_03,0,(MethodInfo *)0x0);
        UnityEngine_Renderer__set_receiveShadows((UnityEngine_Renderer_o *)__this_03,false,(MethodInfo *)0x0);
        pUVar5 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
        UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar5,(MethodInfo *)0x0);
        pSVar6 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_1969e50(pSVar6,"Mesh",(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Object_o *)0x0) {
          UnityEngine_Object__set_name(pUVar5,pSVar6,(MethodInfo *)0x0);
          UnityEngine_Mesh__MarkDynamic((UnityEngine_Mesh_o *)pUVar5,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_MeshFilter_o *)0x0) {
            UnityEngine_MeshFilter__set_sharedMesh(__this_02,(UnityEngine_Mesh_o *)pUVar5,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._meshes;
            if (pUVar1 != (UnityEngine_Mesh_array *)0x0) {
              if ((uint)pUVar1->max_length <= (uint)axis) goto label_181e71a1e;
              pUVar1->m_Items[axis] = (UnityEngine_Mesh_o *)pUVar5;
              Il2CppCodeGenWriteBarrier(pUVar1->m_Items + axis,pUVar5);
              pUVar5 = (UnityEngine_Object_o *)
                       UnityEngine_Shader__Find("Hidden/Internal-Colored",(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar4 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar4) {
                pUVar5 = (UnityEngine_Object_o *)
                         UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
              }
              __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
              UnityEngine_Material___ctor(__this_04,(UnityEngine_Shader_o *)pUVar5,(MethodInfo *)0x0);
              if (__this_04 != (UnityEngine_Material_o *)0x0) {
                local_28.r = (color->fields).r;
                local_28.g = (color->fields).g;
                local_28.b = (color->fields).b;
                local_28.a = (color->fields).a;
                UnityEngine_Material__set_color(__this_04,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
                UnityEngine_Material__set_renderQueue(__this_04,3000,(MethodInfo *)0x0);
                UnityEngine_Material__SetInt(__this_04,"_SrcBlend",5,(MethodInfo *)0x0);
                UnityEngine_Material__SetInt(__this_04,"_DstBlend",10,(MethodInfo *)0x0);
                UnityEngine_Material__SetInt(__this_04,"_Cull",0,(MethodInfo *)0x0);
                UnityEngine_Material__SetInt(__this_04,"_ZWrite",0,(MethodInfo *)0x0);
                UnityEngine_Material__SetInt(__this_04,"_ZTest",4,(MethodInfo *)0x0);
                UnityEngine_Renderer__set_sharedMaterial
                          ((UnityEngine_Renderer_o *)__this_03,__this_04,(MethodInfo *)0x0);
                pUVar2 = (__this->fields)._materials;
                if (pUVar2 != (UnityEngine_Material_array *)0x0) {
                  pIVar7 = il2cpp_vm_Object_IsInst
                                     ((Il2CppObject *)__this_04,(((pUVar2->obj).klass)->_1).element_class);
                  if (pIVar7 == (Il2CppObject *)0x0) {
                    pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                  }
                  if ((uint)axis < (uint)pUVar2->max_length) {
                    pUVar2->m_Items[axis] = __this_04;
                    Il2CppCodeGenWriteBarrier(pUVar2->m_Items + axis,__this_04);
                    pUVar3 = (__this->fields)._planes;
                    if (pUVar3 == (UnityEngine_GameObject_array *)0x0) goto label_181e71a08;
                    if ((uint)axis < (uint)pUVar3->max_length) {
                      pUVar3->m_Items[axis] = (UnityEngine_GameObject_o *)__this_00;
                      Il2CppCodeGenWriteBarrier(pUVar3->m_Items + axis,__this_00);
                      UnityEngine_GameObject__SetActive
                                ((UnityEngine_GameObject_o *)__this_00,false,(MethodInfo *)0x0);
                      return;
                    }
                  }
label_181e71a1e:
                  ThrowIndexOutOfRangeException();
                }
              }
            }
          }
        }
      }
    }
  }
label_181e71a08:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorSceneGrid$$BuildPlane
// il2cpp: void GameManagers_MapEditorSceneGrid__BuildPlane (UnityEngine_Mesh_o* mesh, int32_t axis, int32_t halfLines, float spacing, UnityEngine_Vector2_o center, const MethodInfo* method);
// 0x181e711b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7128c: movss xmm8, dword ptr [rbp + 0xa4]
// asm:   0x181e71295: movss xmm9, dword ptr [rbp + 0xa0]
// asm:   0x181e7129e: nop 

void GameManagers_MapEditorSceneGrid__BuildPlane
               (UnityEngine_Mesh_o *mesh,int32_t axis,int32_t halfLines,float spacing,
               UnityEngine_Vector2_o center,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  System_Collections_Generic_List_Vector3__o *inVertices;
  System_Int32_array *indices;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float local_148;
  float local_144;
  undefined4 local_140;
  float local_138;
  float local_134;
  undefined4 local_130;
  float local_128;
  float local_124;
  undefined4 local_120;
  float local_118;
  float local_114;
  undefined4 local_110;
  float local_108;
  undefined4 local_104;
  float local_100;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  undefined4 local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  
  if (Il2CppMethodInitialized_184344f0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f06b0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    Il2CppMethodInitialized_184344f0d = '\x01';
  }
  fVar7 = (float)halfLines * spacing;
  inVertices = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_List_T__o *)inVertices,halfLines * 8 | 4,
             (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_40f06b0);
  fVar1 = local_c4;
  fVar2 = local_c0;
  for (iVar5 = -halfLines; iVar5 <= halfLines; iVar5 = iVar5 + 1) {
    fVar6 = (float)iVar5 * spacing;
    local_c4 = center.fields.x + fVar6;
    local_c0 = center.fields.y - fVar7;
    if (axis == 0) {
      if (inVertices == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_181e715f9;
      local_c8 = 0;
      il2cpp_runtime_helper_180012810(inVertices,&local_c8,MethodInfo_System_Collections_Generic_List_Vector3_Add);
      local_b8 = 0;
      local_b4 = center.fields.x + fVar6;
      local_b0 = center.fields.y + fVar7;
      il2cpp_runtime_helper_180012810(inVertices,&local_b8,MethodInfo_System_Collections_Generic_List_Vector3_Add);
      local_a8 = 0;
      local_a4 = center.fields.x - fVar7;
      local_a0 = center.fields.y + fVar6;
      il2cpp_runtime_helper_180012810(inVertices,&local_a8,MethodInfo_System_Collections_Generic_List_Vector3_Add);
      local_98 = 0.0;
      local_94 = center.fields.x + fVar7;
      local_90 = center.fields.y + fVar6;
      pfVar4 = &local_98;
    }
    else if (axis == 1) {
      if (inVertices == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_181e715f9;
      local_104 = 0;
      local_108 = local_c4;
      local_100 = local_c0;
      local_c4 = fVar1;
      local_c0 = fVar2;
      il2cpp_runtime_helper_180012810(inVertices,&local_108,MethodInfo_System_Collections_Generic_List_Vector3_Add);
      local_f4 = 0;
      local_f8 = center.fields.x + fVar6;
      local_f0 = center.fields.y + fVar7;
      il2cpp_runtime_helper_180012810(inVertices,&local_f8,MethodInfo_System_Collections_Generic_List_Vector3_Add);
      local_e4 = 0;
      local_e8 = center.fields.x - fVar7;
      local_e0 = center.fields.y + fVar6;
      il2cpp_runtime_helper_180012810(inVertices,&local_e8,MethodInfo_System_Collections_Generic_List_Vector3_Add);
      local_d4 = 0;
      local_d8 = center.fields.x + fVar7;
      local_d0 = center.fields.y + fVar6;
      pfVar4 = &local_d8;
    }
    else {
      if (inVertices == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_181e715f9;
      local_140 = 0;
      local_148 = local_c4;
      local_144 = local_c0;
      local_c4 = fVar1;
      local_c0 = fVar2;
      il2cpp_runtime_helper_180012810(inVertices,&local_148,MethodInfo_System_Collections_Generic_List_Vector3_Add);
      local_130 = 0;
      local_138 = center.fields.x + fVar6;
      local_134 = center.fields.y + fVar7;
      il2cpp_runtime_helper_180012810(inVertices,&local_138,MethodInfo_System_Collections_Generic_List_Vector3_Add);
      local_120 = 0;
      local_128 = center.fields.x - fVar7;
      local_124 = center.fields.y + fVar6;
      il2cpp_runtime_helper_180012810(inVertices,&local_128,MethodInfo_System_Collections_Generic_List_Vector3_Add);
      local_110 = 0;
      local_118 = center.fields.x + fVar7;
      local_114 = center.fields.y + fVar6;
      pfVar4 = &local_118;
    }
    il2cpp_runtime_helper_180012810(inVertices,pfVar4);
    fVar1 = local_c4;
    fVar2 = local_c0;
  }
  if ((inVertices != (System_Collections_Generic_List_Vector3__o *)0x0) &&
     (local_c4 = fVar1, local_c0 = fVar2,
     indices = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,(inVertices->fields)._size),
     fVar1 = local_c4, fVar2 = local_c0, indices != (System_Int32_array *)0x0)) {
    for (uVar3 = 0; (int)uVar3 < (int)indices->max_length; uVar3 = uVar3 + 1) {
      if ((uint)indices->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      indices->m_Items[(int)uVar3] = uVar3;
    }
    if (mesh != (UnityEngine_Mesh_o *)0x0) {
      UnityEngine_Mesh__Clear(mesh,(MethodInfo *)0x0);
      UnityEngine_Mesh__SetVertices(mesh,inVertices,(MethodInfo *)0x0);
      UnityEngine_Mesh__SetIndices(mesh,indices,3,0,(MethodInfo *)0x0);
      UnityEngine_Mesh__RecalculateBounds(mesh,(MethodInfo *)0x0);
      return;
    }
  }
label_181e715f9:
  local_c0 = fVar2;
  local_c4 = fVar1;
  ThrowNullReferenceException();
}


// GameManagers.MapEditorSceneGrid$$OnDestroy
// il2cpp: void GameManagers_MapEditorSceneGrid__OnDestroy (GameManagers_MapEditorSceneGrid_o* __this, const MethodInfo* method);
// 0x181e71a80

void GameManagers_MapEditorSceneGrid__OnDestroy(GameManagers_MapEditorSceneGrid_o *__this,MethodInfo *method)

{
  UnityEngine_Mesh_array *pUVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Material_array *pUVar3;
  UnityEngine_Material_o *pUVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (Il2CppMethodInitialized_184344f0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344f0e = '\x01';
  }
  uVar7 = 0;
  while (pUVar1 = (__this->fields)._meshes, pUVar1 != (UnityEngine_Mesh_array *)0x0) {
    uVar6 = (uint)uVar7;
    if ((uint)pUVar1->max_length <= uVar6) {
label_181e71bb7:
      ThrowIndexOutOfRangeException();
    }
    pUVar2 = (UnityEngine_Object_o *)pUVar1->m_Items[uVar7];
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar1 = (__this->fields)._meshes;
      if (pUVar1 == (UnityEngine_Mesh_array *)0x0) break;
      if ((uint)pUVar1->max_length <= uVar6) goto label_181e71bb7;
      pUVar2 = (UnityEngine_Object_o *)pUVar1->m_Items[uVar7];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
    }
    pUVar3 = (__this->fields)._materials;
    if (pUVar3 == (UnityEngine_Material_array *)0x0) break;
    if ((uint)pUVar3->max_length <= uVar6) goto label_181e71bb7;
    pUVar4 = pUVar3->m_Items[uVar7];
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar3 = (__this->fields)._materials;
      if (pUVar3 == (UnityEngine_Material_array *)0x0) break;
      if ((uint)pUVar3->max_length <= uVar6) goto label_181e71bb7;
      pUVar4 = pUVar3->m_Items[uVar7];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
    }
    uVar7 = (ulonglong)(uVar6 + 1);
    if (2 < (int)(uVar6 + 1)) {
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MapEditorSceneGrid$$.ctor
// il2cpp: void GameManagers_MapEditorSceneGrid___ctor (GameManagers_MapEditorSceneGrid_o* __this, const MethodInfo* method);
// 0x181e721c0

void GameManagers_MapEditorSceneGrid___ctor(GameManagers_MapEditorSceneGrid_o *__this,MethodInfo *method)

{
  UnityEngine_Mesh_array *value;
  UnityEngine_GameObject_array *value_00;
  UnityEngine_Material_array *value_01;
  System_Boolean_array *value_02;
  System_Single_array *array;
  UnityEngine_Vector2_array *value_03;
  
  if (Il2CppMethodInitialized_184344f0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_bool_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_F48AF7DD3F3ADB7DCC618687A0A2A61B8DF98065CA0C180875E8AE65A88E28E4
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2_array);
    Il2CppMethodInitialized_184344f0f = '\x01';
  }
  value = (UnityEngine_Mesh_array *)SZArrayNew(TypeInfo_UnityEngine_Mesh_array,3);
  (__this->fields)._meshes = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._meshes,value);
  value_00 = (UnityEngine_GameObject_array *)SZArrayNew(TypeInfo_UnityEngine_GameObject_array,3);
  (__this->fields)._planes = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._planes,value_00);
  value_01 = (UnityEngine_Material_array *)SZArrayNew(TypeInfo_UnityEngine_Material_array,3);
  (__this->fields)._materials = value_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._materials,value_01);
  value_02 = (System_Boolean_array *)SZArrayNew(TypeInfo_bool_array,3);
  (__this->fields)._enabledAxes = value_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enabledAxes,value_02);
  array = (System_Single_array *)SZArrayNew(TypeInfo_float_array,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
            ((System_Array_o *)array,
             FieldRva_PrivateImplementationDetails_F48AF7DD3F3ADB7DCC618687A0A2A61B8DF98065CA0C180875E8AE65A88E28E4
             ,(MethodInfo *)0x0);
  (__this->fields)._lastSpacing = array;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastSpacing,array);
  value_03 = (UnityEngine_Vector2_array *)SZArrayNew(TypeInfo_UnityEngine_Vector2_array,3);
  (__this->fields)._lastCenters = value_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastCenters,value_03);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


