// Type: MapEditor.ScaleGizmo
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/MapEditor/ScaleGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/ScaleGizmo.cs
// --------------------------------

// MapEditor.ScaleGizmo.<>c$$.cctor
// il2cpp: void MapEditor_ScaleGizmo___c___cctor (const MethodInfo* method);
// 0x1822018f0

void MapEditor_ScaleGizmo___c___cctor(MethodInfo *method)

{
  MapEditor_ScaleGizmo___c_o *__this;
  
  if (Il2CppMethodInitialized_184347053 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ScaleGizmo_c);
    Il2CppMethodInitialized_184347053 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_ScaleGizmo_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_MapEditor_ScaleGizmo_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_ScaleGizmo_c->static_fields->__9,__this);
  return;
}


// MapEditor.ScaleGizmo.<>c$$.ctor
// il2cpp: void MapEditor_ScaleGizmo___c___ctor (MapEditor_ScaleGizmo___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
MapEditor_ScaleGizmo___c___ctor(MapEditor_ScaleGizmo___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.ScaleGizmo.<>c$$<ScaleSelectedObjects>b__18_0
// il2cpp: int32_t MapEditor_ScaleGizmo___c___ScaleSelectedObjects_b__18_0 (MapEditor_ScaleGizmo___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x181e7b690

int32_t
MapEditor_ScaleGizmo___c___ScaleSelectedObjects_b__18_0(MapEditor_ScaleGizmo___c_o* __this, Map_MapObject_o* o, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (o->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id;
  }
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$Create
// il2cpp: MapEditor_ScaleGizmo_o* MapEditor_ScaleGizmo__Create (const MethodInfo* method);
// 0x1821fc7e0

MapEditor_ScaleGizmo_o * MapEditor_ScaleGizmo__Create(MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this;
  MapEditor_ScaleGizmo_o *pMVar1;
  
  if (Il2CppMethodInitialized_184347049 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ScaleGizmo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Gizmos/ScaleGizmo");
    Il2CppMethodInitialized_184347049 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Gizmos/ScaleGizmo",false,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pMVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_ScaleGizmo)
    ;
    UnityEngine_GameObject__SetActive(__this,false,(MethodInfo *)0x0);
    return pMVar1;
  }
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$IsActive
// il2cpp: bool MapEditor_ScaleGizmo__IsActive (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x1821fc8d0

bool MapEditor_ScaleGizmo__IsActive(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434704a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434704a = '\x01';
  }
  x = (__this->fields)._activeLine;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// MapEditor.ScaleGizmo$$Awake
// il2cpp: void MapEditor_ScaleGizmo__Awake (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x1821fc5b0

void MapEditor_ScaleGizmo__Awake(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_18434704b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LineZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"LineY");
    il2cpp_codegen_initialize_runtime_metadata(&"LineX");
    Il2CppMethodInitialized_18434704b = '\x01';
  }
  MapEditor_BaseGizmo__Awake((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineX",(MethodInfo *)0x0);
    (__this->fields)._lineX = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lineX,pUVar1);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineY",(MethodInfo *)0x0);
      (__this->fields)._lineY = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._lineY,pUVar1);
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineZ",(MethodInfo *)0x0);
        (__this->fields)._lineZ = pUVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._lineZ,pUVar1);
        pUVar1 = (__this->fields)._transform;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"Center",(MethodInfo *)0x0);
          (__this->fields)._center = pUVar1;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._center,pUVar1);
          MapEditor_ScaleGizmo__ResetColors(__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$OnSelectionChange
// il2cpp: void MapEditor_ScaleGizmo__OnSelectionChange (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x1821fc930

void MapEditor_ScaleGizmo__OnSelectionChange(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  MapEditor_BaseGizmo_o *x;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (Il2CppMethodInitialized_18434704c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434704c = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar2 = (pGVar1->fields).SelectedObjects,
     pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
    if (0 < (pSVar2->fields)._count) {
      x = (pGVar1->fields).CurrentGizmo;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if (bVar3) {
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
          MapEditor_ScaleGizmo__ResetCenter(__this,(MethodInfo *)0x0);
          MapEditor_ScaleGizmo__ResetColors(__this,(MethodInfo *)0x0);
          return;
        }
        goto label_1821fca0c;
      }
    }
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      return;
    }
  }
label_1821fca0c:
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$ContainsCenter
// il2cpp: bool MapEditor_ScaleGizmo__ContainsCenter (MapEditor_ScaleGizmo_o* __this, UnityEngine_RaycastHit_array* hits, const MethodInfo* method);
// 0x1821fc6c0

bool MapEditor_ScaleGizmo__ContainsCenter
               (MapEditor_ScaleGizmo_o *__this,UnityEngine_RaycastHit_array *hits,MethodInfo *method)

{
  UnityEngine_RaycastHit_o *pUVar1;
  UnityEngine_Transform_o *y;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_RaycastHit_Fields *pUVar5;
  bool bVar6;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Transform_o *x;
  uint uVar7;
  UnityEngine_RaycastHit_o local_38;
  
  if (Il2CppMethodInitialized_18434704d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434704d = '\x01';
  }
  local_38.fields.m_Normal.fields.y = 0.0;
  local_38.fields.m_Normal.fields.z = 0.0;
  local_38.fields.m_FaceID = 0;
  local_38.fields.m_Distance = 0.0;
  local_38.fields.m_UV.fields.x = 0.0;
  local_38.fields.m_UV.fields.y = 0.0;
  local_38.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_38.fields.m_Point.fields.x = 0.0;
  local_38.fields.m_Point.fields.y = 0.0;
  local_38.fields.m_Point.fields.z = 0.0;
  local_38.fields.m_Normal.fields.x = 0.0;
  if (hits != (UnityEngine_RaycastHit_array *)0x0) {
    uVar7 = 0;
    while( true ) {
      if ((int)hits->max_length <= (int)uVar7) {
        return false;
      }
      if ((uint)hits->max_length <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      pUVar1 = hits->m_Items + (int)uVar7;
      local_38.fields.m_Point.fields.x = (pUVar1->fields).m_Point.fields.x;
      local_38.fields.m_Point.fields.y = (pUVar1->fields).m_Point.fields.y;
      local_38.fields._8_8_ = *(undefined8 *)&(pUVar1->fields).m_Point.fields.z;
      pUVar5 = &hits->m_Items[(int)uVar7].fields;
      local_38.fields.m_Normal.fields.y = (pUVar5->m_Normal).fields.y;
      local_38.fields.m_Normal.fields.z = (pUVar5->m_Normal).fields.z;
      uVar2 = pUVar5->m_FaceID;
      pUVar5 = &hits->m_Items[(int)uVar7].fields;
      uVar3 = pUVar5->m_Distance;
      uVar4 = (pUVar5->m_UV).fields.x;
      local_38.fields._36_8_ = *(undefined8 *)&(pUVar5->m_UV).fields.y;
      local_38.fields.m_FaceID = uVar2;
      local_38.fields.m_Distance = (float)uVar3;
      local_38.fields.m_UV.fields.x = (float)uVar4;
      __this_00 = UnityEngine_RaycastHit__get_collider(&local_38,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Collider_o *)0x0) break;
      x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      y = (__this->fields)._center;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      if (bVar6) {
        return true;
      }
      uVar7 = uVar7 + 1;
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$Update
// il2cpp: void MapEditor_ScaleGizmo__Update (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x1821fd2a0
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821fd7e9: jmp 0x1821fd801
// asm:   0x1821fd7fe: mov rdx, rax
// asm:   0x1821fde79: nop dword ptr [rax]
// asm:   0x1821fe023: mov esi, ebx
// asm:   0x1821fe025: mov eax, ebx
// asm:   0x1821fe297: mov rax, qword ptr [rip + 0x1e9420a]  ; TypeInfo_UnityEngine_Vector3
// asm:   0x1821fe29e: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x1821fe2a5: movsd xmm0, qword ptr [rcx]
// asm:   0x1821fe2a9: mov eax, dword ptr [rcx + 8]
// asm:   0x1821fe2ac: movsd qword ptr [r14 + 0xbc], xmm0
// asm:   0x1821fe2b5: mov dword ptr [r14 + 0xc4], eax
// asm:   0x1821fe2bc: jmp 0x1821fdc98

void MapEditor_ScaleGizmo__Update(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  float y;
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar7;
  Settings_InputSettings_o *pSVar14;
  Settings_MapEditorInputSettings_o *pSVar15;
  Settings_KeybindSetting_o *__this_00;
  Cameras_BaseCamera_o *__this_01;
  GameManagers_MapEditorGameManager_o *pGVar16;
  UnityEngine_Camera_o *pUVar17;
  UnityEngine_Vector3_StaticFields *pUVar18;
  Settings_MapEditorSettings_o *pSVar19;
  Settings_FloatSetting_o *pSVar20;
  UI_MapEditorMenu_o *pUVar21;
  UnityEngine_Renderer_o *__this_02;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  UnityEngine_RaycastHit_Fields *pUVar32;
  bool bVar33;
  UnityEngine_LayerMask_o UVar34;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  MapEditor_TransformScaleCommand_o *__this_03;
  UnityEngine_Vector3_o *pUVar35;
  UnityEngine_Ray_o *pUVar36;
  UnityEngine_Transform_o *pUVar37;
  System_Int32_array *layers;
  UnityEngine_RaycastHit_array *source;
  UnityEngine_Collider_o *pUVar38;
  UnityEngine_Transform_o *pUVar39;
  System_Predicate_T__o *__this_04;
  System_Object_array *pSVar40;
  UnityEngine_Material_o *pUVar41;
  UnityEngine_RaycastHit_o *pUVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  MethodInfo *method_00;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  UnityEngine_Vector3_Fields local_1b8;
  UnityEngine_Ray_o local_1a8;
  UnityEngine_Vector3_Fields local_188;
  UnityEngine_RaycastHit_o local_178;
  UnityEngine_RaycastHit_o local_148;
  UnityEngine_RaycastHit_o local_118;
  UnityEngine_Vector3_Fields local_dc [15];
  
  if (Il2CppMethodInitialized_18434704e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_First_RaycastHit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_RaycastHit_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MapEditor_ScaleGizmo_Update_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformScaleCommand);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_18434704e = '\x01';
  }
  local_118.fields.m_Normal.fields.y = 0.0;
  local_118.fields.m_Normal.fields.z = 0.0;
  local_118.fields.m_FaceID = 0;
  local_148.fields.m_Normal.fields.y = 0.0;
  local_148.fields.m_Normal.fields.z = 0.0;
  local_148.fields.m_FaceID = 0;
  local_118.fields.m_Point.fields.x = 0.0;
  local_118.fields.m_Point.fields.y = 0.0;
  local_118.fields.m_Point.fields.z = 0.0;
  local_118.fields.m_Normal.fields.x = 0.0;
  local_118.fields.m_Distance = 0.0;
  local_118.fields.m_UV.fields.x = 0.0;
  local_118.fields.m_UV.fields.y = 0.0;
  local_118.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_148.fields.m_Point.fields.x = 0.0;
  local_148.fields.m_Point.fields.y = 0.0;
  local_148.fields.m_Point.fields.z = 0.0;
  local_148.fields.m_Normal.fields.x = 0.0;
  local_148.fields.m_Distance = 0.0;
  local_148.fields.m_UV.fields.x = 0.0;
  local_148.fields.m_UV.fields.y = 0.0;
  local_148.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  MapEditor_BaseGizmo__Update((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pSVar14 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if ((pSVar14 != (Settings_InputSettings_o *)0x0) &&
     (pSVar15 = (pSVar14->fields).MapEditor, pSVar15 != (Settings_MapEditorInputSettings_o *)0x0)) {
    __this_00 = (pSVar15->fields).Select;
    pUVar37 = (__this->fields)._activeLine;
    __this_01 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar33 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar37,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar33) {
      pUVar21 = (__this->fields)._menu;
      if (pUVar21 != (UI_MapEditorMenu_o *)0x0) {
        if ((pUVar21->fields).IsMouseUI != false) {
label_1821fe27b:
          if (Il2CppMethodInitialized_18433dbea == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbea = '\x01';
          }
          pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar52 = (pUVar18->zeroVector).fields.y;
          fVar54 = (pUVar18->zeroVector).fields.z;
          (__this->fields)._currentScaleAmount.fields.x = (pUVar18->zeroVector).fields.x;
          (__this->fields)._currentScaleAmount.fields.y = fVar52;
          (__this->fields)._currentScaleAmount.fields.z = fVar54;
          return;
        }
        if (__this_00 != (Settings_KeybindSetting_o *)0x0) {
          bVar33 = Settings_KeybindSetting__GetKeyDown(__this_00,false,(MethodInfo *)0x0);
          if (!bVar33) goto label_1821fe27b;
          if (__this_01 != (Cameras_BaseCamera_o *)0x0) {
            pUVar17 = (__this_01->fields).Camera;
            pUVar35 = UnityEngine_Input__get_mousePosition
                                ((UnityEngine_Vector3_o *)&local_188,(MethodInfo *)0x0);
            if (pUVar17 != (UnityEngine_Camera_o *)0x0) {
              local_1a8.fields.m_Origin.fields.x = (pUVar35->fields).x;
              local_1a8.fields.m_Origin.fields.y = (pUVar35->fields).y;
              local_1a8.fields.m_Origin.fields.z = (pUVar35->fields).z;
              pUVar36 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                                  ((UnityEngine_Ray_o *)&local_178,pUVar17,(UnityEngine_Vector3_o *)&local_1a8
                                   ,(MethodInfo *)0x0);
              uVar22._0_4_ = (pUVar36->fields).m_Origin.fields.x;
              uVar22._4_4_ = (pUVar36->fields).m_Origin.fields.y;
              uVar23 = *(undefined8 *)&(pUVar36->fields).m_Origin.fields.z;
              uVar7._0_4_ = (pUVar36->fields).m_Direction.fields.y;
              uVar7._4_4_ = (pUVar36->fields).m_Direction.fields.z;
              layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
              if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
              }
              if (layers != (System_Int32_array *)0x0) {
                if ((int)layers->max_length == 0) {
label_1821fe2c1:
                  ThrowIndexOutOfRangeException();
                }
                layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorGizmo;
                UVar34 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
                UVar34 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar34.fields.m_Mask,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
                }
                local_1a8.fields.m_Origin.fields._0_8_ = uVar22;
                local_1a8.fields._8_8_ = uVar23;
                local_1a8.fields.m_Direction.fields._4_8_ = uVar7;
                source = UnityEngine_Physics__RaycastAll_2fe41f0
                                   (&local_1a8,100000.0,(int32_t)UVar34.fields.m_Mask,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18434704d == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                  Il2CppMethodInitialized_18434704d = '\x01';
                }
                local_178.fields.m_Normal.fields.y = 0.0;
                local_178.fields.m_Normal.fields.z = 0.0;
                local_178.fields.m_FaceID = 0;
                local_178.fields.m_Distance = 0.0;
                local_178.fields.m_UV.fields.x = 0.0;
                local_178.fields.m_UV.fields.y = 0.0;
                local_178.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
                local_178.fields.m_Point.fields.x = 0.0;
                local_178.fields.m_Point.fields.y = 0.0;
                local_178.fields.m_Point.fields.z = 0.0;
                local_178.fields.m_Normal.fields.x = 0.0;
                if (source == (UnityEngine_RaycastHit_array *)0x0) {
label_1821fe2d3:
                  ThrowNullReferenceException();
                }
                uVar44 = 0;
                uVar43 = 0;
                for (uVar45 = uVar43; (int)uVar45 < (int)source->max_length; uVar45 = uVar45 + 1) {
                  if ((uint)source->max_length <= uVar45) {
                    ThrowIndexOutOfRangeException();
                  }
                  pUVar42 = source->m_Items + (int)uVar45;
                  local_178.fields.m_Point.fields.x = (pUVar42->fields).m_Point.fields.x;
                  local_178.fields.m_Point.fields.y = (pUVar42->fields).m_Point.fields.y;
                  local_178.fields._8_8_ = *(undefined8 *)&(pUVar42->fields).m_Point.fields.z;
                  pUVar32 = &source->m_Items[(int)uVar45].fields;
                  local_178.fields.m_Normal.fields.y = (pUVar32->m_Normal).fields.y;
                  local_178.fields.m_Normal.fields.z = (pUVar32->m_Normal).fields.z;
                  uVar24 = pUVar32->m_FaceID;
                  pUVar32 = &source->m_Items[(int)uVar45].fields;
                  uVar25 = pUVar32->m_Distance;
                  uVar26 = (pUVar32->m_UV).fields.x;
                  local_178.fields._36_8_ = *(undefined8 *)&(pUVar32->m_UV).fields.y;
                  local_178.fields.m_FaceID = uVar24;
                  local_178.fields.m_Distance = (float)uVar25;
                  local_178.fields.m_UV.fields.x = (float)uVar26;
                  pUVar38 = UnityEngine_RaycastHit__get_collider(&local_178,(MethodInfo *)0x0);
                  if (pUVar38 == (UnityEngine_Collider_o *)0x0) goto label_1821fe2d3;
                  pUVar39 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pUVar38,(MethodInfo *)0x0);
                  pUVar37 = (__this->fields)._center;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar33 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar37,
                                      (MethodInfo *)0x0);
                  if (bVar33) {
                    pUVar37 = (__this->fields)._center;
                    (__this->fields)._activeLine = pUVar37;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._activeLine,pUVar37);
                    MapEditor_ScaleGizmo__ResetColors(__this,(MethodInfo *)0x0);
                    local_1a8.fields.m_Origin.fields.x = (__this->fields).SelectedColor.fields.r;
                    local_1a8.fields.m_Origin.fields.y = (__this->fields).SelectedColor.fields.g;
                    local_1a8.fields.m_Origin.fields.z = (__this->fields).SelectedColor.fields.b;
                    local_1a8.fields.m_Direction.fields.x = (__this->fields).SelectedColor.fields.a;
                    MapEditor_ScaleGizmo__SetLineColor
                              (__this,(__this->fields)._activeLine,(UnityEngine_Color_o *)&local_1a8,0x1267,
                               (MethodInfo *)0x0);
                    local_1a8.fields.m_Origin.fields.x = (__this->fields).SelectedColor.fields.r;
                    local_1a8.fields.m_Origin.fields.y = (__this->fields).SelectedColor.fields.g;
                    local_1a8.fields.m_Origin.fields.z = (__this->fields).SelectedColor.fields.b;
                    local_1a8.fields.m_Direction.fields.x = (__this->fields).SelectedColor.fields.a;
                    MapEditor_ScaleGizmo__SetLineColor
                              (__this,(__this->fields)._lineX,(UnityEngine_Color_o *)&local_1a8,0x1267,
                               (MethodInfo *)0x0);
                    local_1a8.fields.m_Origin.fields.x = (__this->fields).SelectedColor.fields.r;
                    local_1a8.fields.m_Origin.fields.y = (__this->fields).SelectedColor.fields.g;
                    local_1a8.fields.m_Origin.fields.z = (__this->fields).SelectedColor.fields.b;
                    local_1a8.fields.m_Direction.fields.x = (__this->fields).SelectedColor.fields.a;
                    MapEditor_ScaleGizmo__SetLineColor
                              (__this,(__this->fields)._lineY,(UnityEngine_Color_o *)&local_1a8,0x1267,
                               (MethodInfo *)0x0);
                    local_1a8.fields.m_Origin.fields.x = (__this->fields).SelectedColor.fields.r;
                    local_1a8.fields.m_Origin.fields.y = (__this->fields).SelectedColor.fields.g;
                    local_1a8.fields.m_Origin.fields.z = (__this->fields).SelectedColor.fields.b;
                    local_1a8.fields.m_Direction.fields.x = (__this->fields).SelectedColor.fields.a;
                    MapEditor_ScaleGizmo__SetLineColor
                              (__this,(__this->fields)._lineZ,(UnityEngine_Color_o *)&local_1a8,0x1267,
                               (MethodInfo *)0x0);
                    __this_04 = (System_Predicate_T__o *)
                                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_RaycastHit_bool)
                    ;
                    System_Predicate_GlyphPairAdjustmentRecord____ctor
                              (__this_04,(Il2CppObject *)__this,
                               (intptr_t)MethodInfo_MapEditor_ScaleGizmo_Update_b__17_0,
                               (MethodInfo_B625D0 *)0x0);
                    System_Linq_Enumerable__First_RaycastHit_
                              (&local_178,(System_Collections_Generic_IEnumerable_TSource__o *)source,
                               (System_Func_TSource__bool__o *)__this_04,
                               (MethodInfo_6BE020 *)MethodInfo_System_Linq_Enumerable_First_RaycastHit);
                    pUVar42 = &local_118;
                    local_118.fields.m_Point.fields.x = local_178.fields.m_Point.fields.x;
                    local_118.fields.m_Point.fields.y = local_178.fields.m_Point.fields.y;
                    local_118.fields.m_Point.fields.z = local_178.fields.m_Point.fields.z;
                    local_118.fields.m_Normal.fields.x = local_178.fields.m_Normal.fields.x;
                    local_118.fields.m_Normal.fields.y = local_178.fields.m_Normal.fields.y;
                    local_118.fields.m_Normal.fields.z = local_178.fields.m_Normal.fields.z;
                    local_118.fields.m_FaceID = local_178.fields.m_FaceID;
                    local_118.fields.m_Distance = local_178.fields.m_Distance;
                    local_118.fields.m_UV.fields.x = local_178.fields.m_UV.fields.x;
                    local_118.fields.m_UV.fields.y = local_178.fields.m_UV.fields.y;
                    local_118.fields.m_Collider.fields.m_Data = local_178.fields.m_Collider.fields.m_Data;
                    goto label_1821fe247;
                  }
                }
                for (; (int)uVar43 < (int)source->max_length; uVar43 = uVar43 + 1) {
                  if ((uint)source->max_length <= uVar43) goto label_1821fe2c1;
                  pUVar42 = source->m_Items + (int)uVar43;
                  local_148.fields.m_Point.fields.x = (pUVar42->fields).m_Point.fields.x;
                  local_148.fields.m_Point.fields.y = (pUVar42->fields).m_Point.fields.y;
                  local_148.fields._8_8_ = *(undefined8 *)&(pUVar42->fields).m_Point.fields.z;
                  pUVar32 = &source->m_Items[(int)uVar43].fields;
                  local_148.fields.m_Normal.fields.y = (pUVar32->m_Normal).fields.y;
                  local_148.fields.m_Normal.fields.z = (pUVar32->m_Normal).fields.z;
                  uVar27 = pUVar32->m_FaceID;
                  pUVar32 = &source->m_Items[(int)uVar43].fields;
                  uVar28 = pUVar32->m_Distance;
                  uVar29 = (pUVar32->m_UV).fields.x;
                  local_148.fields._36_8_ = *(undefined8 *)&(pUVar32->m_UV).fields.y;
                  local_148.fields.m_FaceID = uVar27;
                  local_148.fields.m_Distance = (float)uVar28;
                  local_148.fields.m_UV.fields.x = (float)uVar29;
                  pUVar38 = UnityEngine_RaycastHit__get_collider(&local_148,(MethodInfo *)0x0);
                  if (pUVar38 == (UnityEngine_Collider_o *)0x0) goto label_1821fe2c7;
                  pUVar39 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pUVar38,(MethodInfo *)0x0);
                  pUVar37 = (__this->fields)._lineX;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar33 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar37,
                                      (MethodInfo *)0x0);
                  if (bVar33) {
label_1821fe149:
                    pUVar38 = UnityEngine_RaycastHit__get_collider(&local_148,(MethodInfo *)0x0);
                    if (pUVar38 == (UnityEngine_Collider_o *)0x0) goto label_1821fe2c7;
                    pUVar37 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar38,(MethodInfo *)0x0);
                    (__this->fields)._activeLine = pUVar37;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._activeLine,pUVar37);
                    MapEditor_ScaleGizmo__ResetColors(__this,(MethodInfo *)0x0);
                    pUVar37 = (__this->fields)._activeLine;
                    uVar30._0_4_ = (__this->fields).SelectedColor.fields.r;
                    uVar30._4_4_ = (__this->fields).SelectedColor.fields.g;
                    uVar31._0_4_ = (__this->fields).SelectedColor.fields.b;
                    uVar31._4_4_ = (__this->fields).SelectedColor.fields.a;
                    if (Il2CppMethodInitialized_184347051 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
                      Il2CppMethodInitialized_184347051 = '\x01';
                    }
                    if ((pUVar37 == (UnityEngine_Transform_o *)0x0) ||
                       (pSVar40 = UnityEngine_Component__GetComponentsInChildren_object__665370
                                            ((UnityEngine_Component_o *)pUVar37,
                                             (MethodInfo_665370 *)
                                             MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer
                                            ), pSVar40 == (System_Object_array *)0x0)) goto label_1821fe2c7;
                    goto label_1821fe1d2;
                  }
                  pUVar38 = UnityEngine_RaycastHit__get_collider(&local_148,(MethodInfo *)0x0);
                  if (pUVar38 == (UnityEngine_Collider_o *)0x0) goto label_1821fe2c7;
                  pUVar39 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pUVar38,(MethodInfo *)0x0);
                  pUVar37 = (__this->fields)._lineY;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar33 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar37,
                                      (MethodInfo *)0x0);
                  if (bVar33) goto label_1821fe149;
                  pUVar38 = UnityEngine_RaycastHit__get_collider(&local_148,(MethodInfo *)0x0);
                  if (pUVar38 == (UnityEngine_Collider_o *)0x0) goto label_1821fe2c7;
                  pUVar39 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pUVar38,(MethodInfo *)0x0);
                  pUVar37 = (__this->fields)._lineZ;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar33 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pUVar39,(UnityEngine_Object_o *)pUVar37,
                                      (MethodInfo *)0x0);
                  if (bVar33) goto label_1821fe149;
                }
                goto label_1821fe27b;
              }
            }
          }
        }
      }
    }
    else if (__this_00 != (Settings_KeybindSetting_o *)0x0) {
      bVar33 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
      if (bVar33) {
        if (__this_01 == (Cameras_BaseCamera_o *)0x0) goto label_1821fe2c7;
        pUVar17 = (__this_01->fields).Camera;
        pUVar35 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_1a8,(MethodInfo *)0x0);
        if (pUVar17 == (UnityEngine_Camera_o *)0x0) goto label_1821fe2c7;
        local_1b8.x = (pUVar35->fields).x;
        local_1b8.y = (pUVar35->fields).y;
        local_1b8.z = (pUVar35->fields).z;
        pUVar36 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                            ((UnityEngine_Ray_o *)&local_178,pUVar17,(UnityEngine_Vector3_o *)&local_1b8,
                             (MethodInfo *)0x0);
        uVar1 = (__this->fields)._previousMousePoint.fields.x;
        uVar8 = (__this->fields)._previousMousePoint.fields.y;
        uVar23._0_4_ = (pUVar36->fields).m_Direction.fields.x;
        uVar23._4_4_ = (pUVar36->fields).m_Direction.fields.y;
        uVar2 = (pUVar36->fields).m_Origin.fields.x;
        uVar9 = (pUVar36->fields).m_Origin.fields.y;
        fVar54 = (pUVar36->fields).m_Origin.fields.z;
        fVar52 = (pUVar36->fields).m_Direction.fields.z;
        local_1b8.z = (__this->fields)._previousMousePoint.fields.z - fVar54;
        local_1a8.fields.m_Origin.fields.y = (float)uVar8 - (float)uVar9;
        local_1a8.fields.m_Origin.fields.x = (float)uVar1 - (float)uVar2;
        local_1a8.fields.m_Origin.fields.z = local_1b8.z;
        local_1b8.y = (float)uVar8 - (float)uVar9;
        local_1b8.x = (float)uVar1 - (float)uVar2;
        local_188._0_8_ = uVar23;
        local_188.z = fVar52;
        local_dc[0]._0_8_ = uVar23;
        fVar46 = (float)il2cpp_runtime_helper_181d9e200(&local_188,&local_1b8);
        fVar46 = (float)il2cpp_runtime_helper_1804f54c0(fVar46 * 0.017453292);
        fVar47 = (float)il2cpp_runtime_helper_180546a40(&local_1a8,0);
        pUVar37 = (__this->fields)._activeLine;
        pUVar39 = (__this->fields)._lineX;
        fVar47 = fVar47 / fVar46;
        fVar55 = fVar47 * (float)uVar23 + (float)uVar2;
        fVar48 = fVar47 * local_dc[0].y + (float)uVar9;
        fVar54 = fVar47 * fVar52 + fVar54;
        fVar52 = (__this->fields)._previousMousePoint.fields.x;
        fVar46 = (__this->fields)._previousMousePoint.fields.y;
        fVar47 = (__this->fields)._previousMousePoint.fields.z;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar33 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar37,(UnityEngine_Object_o *)pUVar39,(MethodInfo *)0x0)
        ;
        if (bVar33) {
          if (Il2CppMethodInitialized_1843445b8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_1843445b8 = '\x01';
          }
          pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar6 = (pUVar18->rightVector).fields.x;
          uVar13 = (pUVar18->rightVector).fields.y;
          fVar53 = (pUVar18->rightVector).fields.z;
          fVar3 = (float)uVar6;
          fVar10 = (float)uVar13;
        }
        else {
          pUVar37 = (__this->fields)._activeLine;
          pUVar39 = (__this->fields)._lineY;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar33 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)pUVar37,(UnityEngine_Object_o *)pUVar39,
                              (MethodInfo *)0x0);
          if (bVar33) {
            if (Il2CppMethodInitialized_18433de5c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433de5c = '\x01';
            }
            pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
            uVar5 = (pUVar18->upVector).fields.x;
            uVar12 = (pUVar18->upVector).fields.y;
            fVar53 = (pUVar18->upVector).fields.z;
            fVar3 = (float)uVar5;
            fVar10 = (float)uVar12;
          }
          else {
            pUVar37 = (__this->fields)._activeLine;
            pUVar39 = (__this->fields)._lineZ;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar33 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pUVar37,(UnityEngine_Object_o *)pUVar39,
                                (MethodInfo *)0x0);
            if (bVar33) {
              if (Il2CppMethodInitialized_18433de5d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5d = '\x01';
              }
              pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
              uVar4 = (pUVar18->forwardVector).fields.x;
              uVar11 = (pUVar18->forwardVector).fields.y;
              fVar53 = (pUVar18->forwardVector).fields.z;
              fVar3 = (float)uVar4;
              fVar10 = (float)uVar11;
            }
            else {
              if (Il2CppMethodInitialized_18433dbeb == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433dbeb = '\x01';
              }
              pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar3 = (pUVar18->oneVector).fields.x;
              fVar10 = (pUVar18->oneVector).fields.y;
              fVar53 = (pUVar18->oneVector).fields.z;
            }
          }
        }
        local_1b8.y = fVar10;
        local_1b8.x = fVar3;
        pUVar37 = (__this->fields)._activeLine;
        pUVar39 = (__this->fields)._center;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar33 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar37,(UnityEngine_Object_o *)pUVar39,(MethodInfo *)0x0)
        ;
        if (bVar33) {
          pUVar37 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        }
        else {
          pUVar37 = (__this->fields)._activeLine;
        }
        if (pUVar37 == (UnityEngine_Transform_o *)0x0) goto label_1821fe2c7;
        fVar10 = local_1b8.y;
        method_00 = (MethodInfo *)0x0;
        pUVar35 = UnityEngine_Transform__get_right
                            ((UnityEngine_Vector3_o *)&local_1a8,pUVar37,(MethodInfo *)0x0);
        fVar52 = (fVar48 - fVar46) * (pUVar35->fields).y + (fVar55 - fVar52) * (pUVar35->fields).x +
                 (fVar54 - fVar47) * (pUVar35->fields).z;
        pGVar16 = (__this->fields)._gameManager;
        if (pGVar16 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821fe2c7;
        fVar46 = fVar52 * fVar3 * 0.1;
        fVar47 = fVar52 * fVar10 * 0.1;
        fVar52 = fVar52 * fVar53 * 0.1;
        if ((pGVar16->fields).Snap != false) {
          pSVar19 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
          if ((pSVar19 == (Settings_MapEditorSettings_o *)0x0) ||
             (pSVar20 = (pSVar19->fields).SnapScale, pSVar20 == (Settings_FloatSetting_o *)0x0))
          goto label_1821fe2c7;
          y = (pSVar20->fields)._value;
          fVar49 = (__this->fields)._currentScaleAmount.fields.y;
          fVar50 = (__this->fields)._currentScaleAmount.fields.z;
          (__this->fields)._currentScaleAmount.fields.x =
               fVar46 + (__this->fields)._currentScaleAmount.fields.x;
          (__this->fields)._currentScaleAmount.fields.y = fVar47 + fVar49;
          (__this->fields)._currentScaleAmount.fields.z = fVar52 + fVar50;
          if (Il2CppMethodInitialized_18433dbea == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbea = '\x01';
          }
          pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar46 = (pUVar18->zeroVector).fields.x;
          fVar47 = (pUVar18->zeroVector).fields.y;
          fVar52 = (pUVar18->zeroVector).fields.z;
          if (Il2CppMethodInitialized_1843445b8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_1843445b8 = '\x01';
          }
          pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar50 = fVar3 - (pUVar18->rightVector).fields.x;
          fVar51 = fVar10 - (pUVar18->rightVector).fields.y;
          fVar49 = fVar53 - (pUVar18->rightVector).fields.z;
          if ((fVar51 * fVar51 + fVar50 * fVar50 + fVar49 * fVar49 < 9.9999994e-11) &&
             (y < ABS((__this->fields)._currentScaleAmount.fields.x))) {
            fVar46 = (float)il2cpp_runtime_helper_180012930((__this->fields)._currentScaleAmount.fields.x / y);
            fVar46 = fVar46 * y;
            fVar49 = il2cpp_runtime_helper_1804f41a0((__this->fields)._currentScaleAmount.fields.x,y,method_00);
            (__this->fields)._currentScaleAmount.fields.x = fVar49;
          }
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar50 = fVar3 - (pUVar18->upVector).fields.x;
          fVar51 = fVar10 - (pUVar18->upVector).fields.y;
          fVar49 = fVar53 - (pUVar18->upVector).fields.z;
          if ((fVar51 * fVar51 + fVar50 * fVar50 + fVar49 * fVar49 < 9.9999994e-11) &&
             (y < ABS((__this->fields)._currentScaleAmount.fields.y))) {
            fVar47 = (float)il2cpp_runtime_helper_180012930((__this->fields)._currentScaleAmount.fields.y / y);
            fVar47 = fVar47 * y;
            fVar49 = il2cpp_runtime_helper_1804f41a0((__this->fields)._currentScaleAmount.fields.y,y,method_00);
            (__this->fields)._currentScaleAmount.fields.y = fVar49;
          }
          if (Il2CppMethodInitialized_18433de5d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5d = '\x01';
          }
          pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar50 = fVar3 - (pUVar18->forwardVector).fields.x;
          fVar51 = fVar10 - (pUVar18->forwardVector).fields.y;
          fVar49 = fVar53 - (pUVar18->forwardVector).fields.z;
          if ((fVar51 * fVar51 + fVar50 * fVar50 + fVar49 * fVar49 < 9.9999994e-11) &&
             (y < ABS((__this->fields)._currentScaleAmount.fields.z))) {
            fVar52 = (float)il2cpp_runtime_helper_180012930((__this->fields)._currentScaleAmount.fields.z / y);
            fVar52 = fVar52 * y;
            fVar49 = il2cpp_runtime_helper_1804f41a0((__this->fields)._currentScaleAmount.fields.z,y,method_00);
            (__this->fields)._currentScaleAmount.fields.z = fVar49;
          }
          if (Il2CppMethodInitialized_18433dbeb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbeb = '\x01';
          }
          pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar3 = fVar3 - (pUVar18->oneVector).fields.x;
          fVar10 = fVar10 - (pUVar18->oneVector).fields.y;
          fVar53 = fVar53 - (pUVar18->oneVector).fields.z;
          if ((fVar10 * fVar10 + fVar3 * fVar3 + fVar53 * fVar53 < 9.9999994e-11) &&
             (y < ABS((__this->fields)._currentScaleAmount.fields.x))) {
            fVar46 = (float)il2cpp_runtime_helper_180012930((__this->fields)._currentScaleAmount.fields.x / y);
            fVar46 = fVar46 * y;
            fVar47 = (float)il2cpp_runtime_helper_180012930((__this->fields)._currentScaleAmount.fields.x / y);
            fVar47 = fVar47 * y;
            fVar52 = (float)il2cpp_runtime_helper_180012930((__this->fields)._currentScaleAmount.fields.x / y);
            fVar52 = fVar52 * y;
            fVar3 = il2cpp_runtime_helper_1804f41a0((__this->fields)._currentScaleAmount.fields.x,y,method_00);
            (__this->fields)._currentScaleAmount.fields.x = fVar3;
          }
        }
        local_1b8.y = fVar47;
        local_1b8.x = fVar46;
        local_1b8.z = fVar52;
        MapEditor_ScaleGizmo__ScaleSelectedObjects
                  (__this,(UnityEngine_Vector3_o *)&local_1b8,(MethodInfo *)0x0);
        MapEditor_ScaleGizmo__ResetCenter(__this,(MethodInfo *)0x0);
        (__this->fields)._previousMousePoint.fields.y = fVar48;
        (__this->fields)._previousMousePoint.fields.x = fVar55;
        (__this->fields)._previousMousePoint.fields.z = fVar54;
      }
      else {
        pGVar16 = (__this->fields)._gameManager;
        if (pGVar16 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821fe2c7;
        GameManagers_MapEditorGameManager__TeardownTemporaryPhysicalParenting(pGVar16,(MethodInfo *)0x0);
        pGVar16 = (__this->fields)._gameManager;
        if (pGVar16 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821fe2c7;
        mapObjects = GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand
                               (pGVar16,(MethodInfo *)0x0);
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_TransformScaleCommand);
        MapEditor_TransformScaleCommand___ctor(__this_03,mapObjects,(MethodInfo *)0x0);
        GameManagers_MapEditorGameManager__NewCommand
                  (pGVar16,(MapEditor_BaseCommand_o *)__this_03,true,(MethodInfo *)0x0);
        MapEditor_ScaleGizmo__ResetColors(__this,(MethodInfo *)0x0);
        (__this->fields)._activeLine = (UnityEngine_Transform_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._activeLine,(void *)0x0);
      }
      pGVar16 = (__this->fields)._gameManager;
      if (pGVar16 != (GameManagers_MapEditorGameManager_o *)0x0) {
        (pGVar16->fields).IgnoreNextSelect = true;
        return;
      }
    }
  }
  goto label_1821fe2c7;
label_1821fe1d2:
  if ((int)pSVar40->max_length <= (int)uVar44) goto label_1821fe243;
  if ((uint)pSVar40->max_length <= uVar44) goto label_1821fe2c1;
  __this_02 = (UnityEngine_Renderer_o *)pSVar40->m_Items[(int)uVar44];
  if ((__this_02 == (UnityEngine_Renderer_o *)0x0) ||
     (pUVar41 = UnityEngine_Renderer__get_material(__this_02,(MethodInfo *)0x0),
     pUVar41 == (UnityEngine_Material_o *)0x0)) goto label_1821fe2c7;
  local_1a8.fields.m_Origin.fields._0_8_ = uVar30;
  local_1a8.fields._8_8_ = uVar31;
  UnityEngine_Material__set_color(pUVar41,(UnityEngine_Color_o *)&local_1a8,(MethodInfo *)0x0);
  pUVar41 = UnityEngine_Renderer__get_material(__this_02,(MethodInfo *)0x0);
  if (pUVar41 == (UnityEngine_Material_o *)0x0) goto label_1821fe2c7;
  UnityEngine_Material__set_renderQueue(pUVar41,0x1267,(MethodInfo *)0x0);
  uVar44 = uVar44 + 1;
  goto label_1821fe1d2;
label_1821fe243:
  pUVar42 = &local_148;
label_1821fe247:
  pUVar35 = UnityEngine_RaycastHit__get_point((UnityEngine_Vector3_o *)&local_1a8,pUVar42,(MethodInfo *)0x0);
  fVar54 = (pUVar35->fields).z;
  fVar52 = (pUVar35->fields).y;
  (__this->fields)._previousMousePoint.fields.x = (pUVar35->fields).x;
  (__this->fields)._previousMousePoint.fields.y = fVar52;
  (__this->fields)._previousMousePoint.fields.z = fVar54;
  pGVar16 = (__this->fields)._gameManager;
  if (pGVar16 != (GameManagers_MapEditorGameManager_o *)0x0) {
    GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting(pGVar16,(MethodInfo *)0x0);
    goto label_1821fe27b;
  }
label_1821fe2c7:
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$ScaleSelectedObjects
// il2cpp: void MapEditor_ScaleGizmo__ScaleSelectedObjects (MapEditor_ScaleGizmo_o* __this, UnityEngine_Vector3_o frameDelta, const MethodInfo* method);
// 0x1821fcdb0
// eh: try 0x1821fcfb0..0x1821fd115 -> pad 0x183338340 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821fd0c7: mov rdx, qword ptr [rip + 0x1e8e15a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x1821fd0ce: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821fd0d3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821fd0d8: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821fd0dd: test rcx, rcx
// asm:   0x1821fd0e0: jne 0x1821fd115
// asm:   0x1821fd115: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183338340: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183338345: push rbp
// asm:   0x183338346: sub rsp, 0x20
// asm:   0x18333834a: mov rbp, rdx
// asm:   0x18333834d: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183338354: mov rcx, qword ptr [rax]
// asm:   0x183338357: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333835b: movabs rax, 0
// asm:   0x183338365: add rsp, 0x20
// asm:   0x183338369: pop rbp
// asm:   0x18333836a: ret 

void MapEditor_ScaleGizmo__ScaleSelectedObjects
               (MapEditor_ScaleGizmo_o *__this,UnityEngine_Vector3_o *frameDelta,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  GameManagers_MapEditorGameManager_o *pGVar5;
  System_Collections_Generic_HashSet_MapObject__o *source;
  Il2CppObject *pIVar6;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  bool bVar7;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_03;
  Unity_Mathematics_float3_o *pUVar8;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Vector3_o *pUVar9;
  UnityEngine_Vector3_o local_e8;
  undefined1 local_d8 [16];
  Map_MapObject_o *local_c8;
  System_Collections_Generic_HashSet_Enumerator_T__o local_c0;
  Unity_Mathematics_float3_Fields local_a8;
  Unity_Mathematics_float3_Fields local_98 [2];
  Unity_Mathematics_float3_o local_80;
  UnityEngine_Vector3_o local_70 [6];
  
  if (Il2CppMethodInitialized_18434704f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_MapEditor_ScaleGizmo_c_ScaleSelectedObjects_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ScaleGizmo_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434704f = '\x01';
  }
  local_c0.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._current = (Il2CppObject *)0x0;
  pGVar5 = (__this->fields)._gameManager;
  if (pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0) {
    source = (pGVar5->fields).SelectedObjects;
    if ((TypeInfo_MapEditor_ScaleGizmo_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_ScaleGizmo_c);
    }
    __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                TypeInfo_MapEditor_ScaleGizmo_c->static_fields->__9__18_0;
    if (__this_02 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
      if ((TypeInfo_MapEditor_ScaleGizmo_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_ScaleGizmo_c);
      }
      pIVar6 = (Il2CppObject *)TypeInfo_MapEditor_ScaleGizmo_c->static_fields->__9;
      __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
      System_Func_object__int____ctor
                (__this_02,pIVar6,(intptr_t)MethodInfo_MapEditor_ScaleGizmo_c_ScaleSelectedObjects_b__18_0,
                 (MethodInfo_AF4D50 *)0x0);
      TypeInfo_MapEditor_ScaleGizmo_c->static_fields->__9__18_0 = (System_Func_MapObject__int__o *)__this_02;
      Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_ScaleGizmo_c->static_fields->__9__18_0,__this_02);
    }
    collection = System_Linq_Enumerable__Select_Vector3__object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            (System_Func_TSource__TResult__o *)__this_02,
                            (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor_176c3b0
              (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    pGVar5 = (__this->fields)._gameManager;
    if ((pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar5->fields).SelectedObjects,
       __this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_d8,__this_00,
                 (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_c0.fields._set = (System_Collections_Generic_HashSet_T__o *)local_d8._0_8_;
      local_c0.fields._index = local_d8._8_4_;
      local_c0.fields._version = local_d8._12_4_;
      local_c0.fields._current = (Il2CppObject *)local_c8;
      local_d8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_d8._8_8_ = &local_c0;
      while( true ) {
        do {
          bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (&local_c0,
                             (MethodInfo_15381F0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
          pIVar6 = local_c0.fields._current;
          if (!bVar7) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_c0,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
            return;
          }
          bVar7 = MapEditor_BaseGizmo__HasSelectedAncestor
                            ((Map_MapObject_o *)local_c0.fields._current,__this_03,(MethodInfo *)0x0);
        } while (bVar7);
        if ((Map_MapObject_o *)pIVar6 == (Map_MapObject_o *)0x0) break;
        uVar3._0_4_ = *(float *)&pIVar6[2].monitor;
        uVar3._4_4_ = *(float *)((longlong)&pIVar6[2].monitor + 4);
        fVar4 = (((Map_MapObject_Fields *)((longlong)pIVar6 + 0x10))->BaseScale).fields.z;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        local_a8.x = (frameDelta->fields).x;
        local_a8.y = (frameDelta->fields).y;
        local_a8.z = (frameDelta->fields).z;
        local_98[0]._0_8_ = uVar3;
        local_98[0].z = fVar4;
        pUVar8 = Unity_Mathematics_float3__op_Multiply
                           (&local_80,(Unity_Mathematics_float3_o *)local_98,
                            (Unity_Mathematics_float3_o *)&local_a8,(MethodInfo *)0x0);
        __this_01 = ((Map_MapObject_Fields *)((longlong)pIVar6 + 0x10))->GameObject;
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar4 = (pUVar8->fields).x;
        fVar1 = (pUVar8->fields).y;
        fVar2 = (pUVar8->fields).z;
        __this_04 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        if (__this_04 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar9 = UnityEngine_Transform__get_localScale(local_70,__this_04,(MethodInfo *)0x0);
        local_e8.fields.x = fVar4 + (pUVar9->fields).x;
        local_e8.fields.y = fVar1 + (pUVar9->fields).y;
        local_e8.fields.z = fVar2 + (pUVar9->fields).z;
        UnityEngine_Transform__set_localScale(__this_04,&local_e8,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$ResetCenter
// il2cpp: void MapEditor_ScaleGizmo__ResetCenter (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x1821fca20
// eh: try 0x1821fcb04..0x1821fcce9 -> pad 0x183326990 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821fcc10: mov rdx, qword ptr [rip + 0x1e8e611]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x1821fcc17: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821fcc1c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821fcc21: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821fcc26: test rcx, rcx
// asm:   0x1821fcc29: jne 0x1821fcce9
// asm:   0x1821fcc2f: mov rsi, qword ptr [rsp + 0xf0]
// asm:   0x1821fcc37: movss xmm7, dword ptr [rsp + 0x28]
// asm:   0x1821fcc3d: movss xmm6, dword ptr [rsp + 0x24]
// asm:   0x1821fcc43: movss xmm8, dword ptr [rsp + 0x20]
// asm:   0x1821fcce9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183326990: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183326995: push rbp
// asm:   0x183326996: sub rsp, 0x20
// asm:   0x18332699a: mov rbp, rdx
// asm:   0x18332699d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x1833269a1: mov rcx, qword ptr [rax]
// asm:   0x1833269a4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x1833269a8: movabs rax, 0
// asm:   0x1833269b2: add rsp, 0x20
// asm:   0x1833269b6: pop rbp
// asm:   0x1833269b7: ret 

void MapEditor_ScaleGizmo__ResetCenter(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_Fields local_c8;
  undefined8 local_b8;
  System_Collections_Generic_HashSet_Enumerator_T__o *local_b0;
  System_Collections_Generic_HashSet_Enumerator_T__o local_a8;
  System_Collections_Generic_HashSet_Enumerator_T__o local_90;
  UnityEngine_Quaternion_Fields local_68;
  UnityEngine_Vector3_o local_58 [6];
  
  if (Il2CppMethodInitialized_184347050 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    Il2CppMethodInitialized_184347050 = '\x01';
  }
  local_a8.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_a8.fields._index = 0;
  local_a8.fields._version = 0;
  local_a8.fields._current = (Il2CppObject *)0x0;
  local_c8.x = 0.0;
  local_c8.y = 0.0;
  local_c8.z = 0.0;
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar1->fields).SelectedObjects,
     __this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              (&local_90,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    local_a8.fields._set = local_90.fields._set;
    local_a8.fields._index = local_90.fields._index;
    local_a8.fields._version = local_90.fields._version;
    local_a8.fields._current = local_90.fields._current;
    local_b8 = 0;
    fVar9 = local_c8.y;
    fVar10 = local_c8.z;
    fVar11 = local_c8.x;
    local_b0 = &local_a8;
    while( true ) {
      bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (&local_a8,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
      pIVar3 = local_a8.fields._current;
      if (!bVar4) break;
      if (local_a8.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_a8.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar5 = UnityEngine_GameObject__get_transform(local_a8.fields._current[1].monitor,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar6 = UnityEngine_Transform__get_position(local_58,pUVar5,(MethodInfo *)0x0);
      fVar11 = (pUVar6->fields).x + fVar11;
      fVar9 = fVar9 + (pUVar6->fields).y;
      local_c8.y = fVar9;
      local_c8.x = fVar11;
      fVar10 = fVar10 + (pUVar6->fields).z;
      local_c8.z = fVar10;
      if (pIVar3[1].monitor == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar5 = (__this->fields)._transform;
      __this_01 = UnityEngine_GameObject__get_transform(pIVar3[1].monitor,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar7 = UnityEngine_Transform__get_rotation
                         ((UnityEngine_Quaternion_o *)&local_90,__this_01,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_68.x = (pUVar7->fields).x;
      local_68.y = (pUVar7->fields).y;
      local_68.z = (pUVar7->fields).z;
      local_68.w = (pUVar7->fields).w;
      UnityEngine_Transform__set_rotation(pUVar5,(UnityEngine_Quaternion_o *)&local_68,(MethodInfo *)0x0);
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_a8,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pSVar2 = (pGVar1->fields).SelectedObjects,
       pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
      fVar8 = (float)(pSVar2->fields)._count;
      pUVar5 = (__this->fields)._transform;
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        local_c8.y = fVar9 / fVar8;
        local_c8.x = fVar11 / fVar8;
        local_c8.z = fVar10 / fVar8;
        UnityEngine_Transform__set_position(pUVar5,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$ResetColors
// il2cpp: void MapEditor_ScaleGizmo__ResetColors (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x1821fccf0

void MapEditor_ScaleGizmo__ResetColors(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Color_Fields local_18;
  
  local_18.r = (__this->fields).LineXColor.fields.r;
  local_18.g = (__this->fields).LineXColor.fields.g;
  local_18.b = (__this->fields).LineXColor.fields.b;
  local_18.a = (__this->fields).LineXColor.fields.a;
  MapEditor_ScaleGizmo__SetLineColor
            (__this,(__this->fields)._lineX,(UnityEngine_Color_o *)&local_18,0x1267,(MethodInfo *)0x0);
  local_18.r = (__this->fields).LineYColor.fields.r;
  local_18.g = (__this->fields).LineYColor.fields.g;
  local_18.b = (__this->fields).LineYColor.fields.b;
  local_18.a = (__this->fields).LineYColor.fields.a;
  MapEditor_ScaleGizmo__SetLineColor
            (__this,(__this->fields)._lineY,(UnityEngine_Color_o *)&local_18,0x1267,(MethodInfo *)0x0);
  local_18.r = (__this->fields).LineZColor.fields.r;
  local_18.g = (__this->fields).LineZColor.fields.g;
  local_18.b = (__this->fields).LineZColor.fields.b;
  local_18.a = (__this->fields).LineZColor.fields.a;
  MapEditor_ScaleGizmo__SetLineColor
            (__this,(__this->fields)._lineZ,(UnityEngine_Color_o *)&local_18,0x1267,(MethodInfo *)0x0);
  local_18.r = (__this->fields).CenterColor.fields.r;
  local_18.g = (__this->fields).CenterColor.fields.g;
  local_18.b = (__this->fields).CenterColor.fields.b;
  local_18.a = (__this->fields).CenterColor.fields.a;
  MapEditor_ScaleGizmo__SetLineColor
            (__this,(__this->fields)._center,(UnityEngine_Color_o *)&local_18,0x1270,(MethodInfo *)0x0);
  return;
}


// MapEditor.ScaleGizmo$$SetLineColor
// il2cpp: void MapEditor_ScaleGizmo__SetLineColor (MapEditor_ScaleGizmo_o* __this, UnityEngine_Transform_o* line, UnityEngine_Color_o color, int32_t renderQueue, const MethodInfo* method);
// 0x1821fd130

void MapEditor_ScaleGizmo__SetLineColor
               (MapEditor_ScaleGizmo_o *__this,UnityEngine_Transform_o *line,UnityEngine_Color_o *color,
               int32_t renderQueue,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  System_Object_array *pSVar1;
  UnityEngine_Material_o *pUVar2;
  uint uVar3;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184347051 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    Il2CppMethodInitialized_184347051 = '\x01';
  }
  if (line != (UnityEngine_Transform_o *)0x0) {
    pSVar1 = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)line,
                        (MethodInfo_665370 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer
                       );
    if (pSVar1 != (System_Object_array *)0x0) {
      uVar3 = 0;
      while( true ) {
        if ((int)pSVar1->max_length <= (int)uVar3) {
          return;
        }
        if ((uint)pSVar1->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (UnityEngine_Renderer_o *)pSVar1->m_Items[(int)uVar3];
        if (__this_00 == (UnityEngine_Renderer_o *)0x0) break;
        pUVar2 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_Material_o *)0x0) break;
        local_18.r = (color->fields).r;
        local_18.g = (color->fields).g;
        local_18.b = (color->fields).b;
        local_18.a = (color->fields).a;
        UnityEngine_Material__set_color(pUVar2,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_Material_o *)0x0) break;
        UnityEngine_Material__set_renderQueue(pUVar2,renderQueue,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$.ctor
// il2cpp: void MapEditor_ScaleGizmo___ctor (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x1821fe2e0

void MapEditor_ScaleGizmo___ctor(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  (__this->fields).SelectedColor.fields.r = 1.0;
  (__this->fields).LineXColor.fields.b = 0.0;
  (__this->fields).LineZColor.fields.g = 0.0;
  (__this->fields).SelectedColor.fields.g = 1.0;
  (__this->fields).SelectedColor.fields.b = 1.0;
  (__this->fields).SelectedColor.fields.a = 1.0;
  (__this->fields).LineXColor.fields.r = 1.0;
  (__this->fields).LineXColor.fields.g = 0.0;
  (__this->fields).LineXColor.fields.a = 1.0;
  (__this->fields).LineYColor.fields.r = 1.0;
  (__this->fields).LineYColor.fields.g = 0.92156863;
  (__this->fields).LineYColor.fields.b = 0.015686275;
  *(undefined8 *)&(__this->fields).LineYColor.fields.a = 0x3f800000;
  (__this->fields).LineZColor.fields.b = 1.0;
  (__this->fields).LineZColor.fields.a = 1.0;
  (__this->fields).CenterColor.fields.r = 0.47058824;
  (__this->fields).CenterColor.fields.g = 0.47058824;
  (__this->fields).CenterColor.fields.b = 0.47058824;
  (__this->fields).CenterColor.fields.a = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.ScaleGizmo$$<Update>b__17_0
// il2cpp: bool MapEditor_ScaleGizmo___Update_b__17_0 (MapEditor_ScaleGizmo_o* __this, UnityEngine_RaycastHit_o hit, const MethodInfo* method);
// 0x1821fd220

bool MapEditor_ScaleGizmo___Update_b__17_0
               (MapEditor_ScaleGizmo_o *__this,UnityEngine_RaycastHit_o *hit,MethodInfo *method)

{
  UnityEngine_Transform_o *y;
  bool bVar1;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Transform_o *x;
  
  if (Il2CppMethodInitialized_184347052 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347052 = '\x01';
  }
  __this_00 = UnityEngine_RaycastHit__get_collider(hit,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    y = (__this->fields)._center;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


