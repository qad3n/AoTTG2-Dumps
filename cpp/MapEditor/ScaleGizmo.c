// Type: MapEditor.ScaleGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/MapEditor/ScaleGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/ScaleGizmo.cs
// --------------------------------

// MapEditor.ScaleGizmo.<>c$$.cctor
// il2cpp: void MapEditor_ScaleGizmo___c___cctor (const MethodInfo* method);
// 0x5db6960

void MapEditor_ScaleGizmo___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754812c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ScaleGizmo_c);
    Il2CppMethodInitialized_0754812c = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_ScaleGizmo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_MapEditor_ScaleGizmo_c->static_fields->__9 = (MapEditor_ScaleGizmo___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_ScaleGizmo_c->static_fields->__9);
  return;
}


// MapEditor.ScaleGizmo.<>c$$.ctor
// il2cpp: void MapEditor_ScaleGizmo___c___ctor (MapEditor_ScaleGizmo___c_o* __this, const MethodInfo* method);
// 0x5db69d0

void MapEditor_ScaleGizmo___c___ctor(MapEditor_ScaleGizmo___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.ScaleGizmo.<>c$$<ScaleSelectedObjects>b__18_0
// il2cpp: int32_t MapEditor_ScaleGizmo___c___ScaleSelectedObjects_b__18_0 (MapEditor_ScaleGizmo___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5db69e0

int32_t MapEditor_ScaleGizmo___c___ScaleSelectedObjects_b__18_0
                  (MapEditor_ScaleGizmo___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (o->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id;
}


// MapEditor.ScaleGizmo$$Create
// il2cpp: MapEditor_ScaleGizmo_o* MapEditor_ScaleGizmo__Create (const MethodInfo* method);
// 0x5db4520

MapEditor_ScaleGizmo_o * MapEditor_ScaleGizmo__Create(MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this;
  MapEditor_ScaleGizmo_o *pMVar1;
  
  if (Il2CppMethodInitialized_07548122 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ScaleGizmo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Gizmos/ScaleGizmo");
    Il2CppMethodInitialized_07548122 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Gizmos/ScaleGizmo",false,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar1 = UnityEngine_GameObject__AddComponent_object_
                     (__this,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_ScaleGizmo);
  UnityEngine_GameObject__SetActive(__this,false,(MethodInfo *)0x0);
  return pMVar1;
}


// MapEditor.ScaleGizmo$$IsActive
// il2cpp: bool MapEditor_ScaleGizmo__IsActive (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x5db4610

bool MapEditor_ScaleGizmo__IsActive(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548123 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548123 = '\x01';
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
// 0x5db4660

void MapEditor_ScaleGizmo__Awake(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  MethodInfo *in_RCX;
  MapEditor_ScaleGizmo_o *__this_00;
  
  if (Il2CppMethodInitialized_07548124 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LineZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"LineY");
    il2cpp_codegen_initialize_runtime_metadata(&"LineX");
    Il2CppMethodInitialized_07548124 = '\x01';
  }
  MapEditor_BaseGizmo__Awake((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineX",(MethodInfo *)0x0);
    (__this->fields)._lineX = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lineX);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineY",(MethodInfo *)0x0);
      (__this->fields)._lineY = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._lineY);
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineZ",(MethodInfo *)0x0);
        (__this->fields)._lineZ = pUVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._lineZ);
        pUVar1 = (__this->fields)._transform;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"Center",(MethodInfo *)0x0);
          __this_00 = (MapEditor_ScaleGizmo_o *)&(__this->fields)._center;
          (__this->fields)._center = pUVar1;
          Il2CppCodeGenWriteBarrier((void **)__this_00);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._lineX,(UnityEngine_Color_o)(__this->fields).LineXColor.fields
                     ,0x1267,in_RCX);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._lineY,(UnityEngine_Color_o)(__this->fields).LineYColor.fields
                     ,0x1267,in_RCX);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._lineZ,(UnityEngine_Color_o)(__this->fields).LineZColor.fields
                     ,0x1267,in_RCX);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._center,
                     (UnityEngine_Color_o)(__this->fields).CenterColor.fields,0x1270,in_RCX);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$OnSelectionChange
// il2cpp: void MapEditor_ScaleGizmo__OnSelectionChange (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x5db4870

void MapEditor_ScaleGizmo__OnSelectionChange(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_BaseGizmo_o *x;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MapEditor_ScaleGizmo_o *__this_00;
  
  if (Il2CppMethodInitialized_07548125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548125 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (method_00 = (MethodInfo *)(pGVar1->fields).SelectedObjects, method_00 != (MethodInfo *)0x0)) {
    if (0 < *(int *)&method_00->klass) {
      x = (pGVar1->fields).CurrentGizmo;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          method_01 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
          __this_00 = __this;
          MapEditor_ScaleGizmo__ResetCenter(__this,method_01);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._lineX,(UnityEngine_Color_o)(__this->fields).LineXColor.fields
                     ,0x1267,method_00);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._lineY,(UnityEngine_Color_o)(__this->fields).LineYColor.fields
                     ,0x1267,method_00);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._lineZ,(UnityEngine_Color_o)(__this->fields).LineZColor.fields
                     ,0x1267,method_00);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._center,
                     (UnityEngine_Color_o)(__this->fields).CenterColor.fields,0x1270,method_00);
          return;
        }
        goto label_05db49bc;
      }
    }
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      return;
    }
  }
label_05db49bc:
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$ContainsCenter
// il2cpp: bool MapEditor_ScaleGizmo__ContainsCenter (MapEditor_ScaleGizmo_o* __this, UnityEngine_RaycastHit_array* hits, const MethodInfo* method);
// 0x5db4c60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db4d56: jmp 0x5db4d5a
// asm:   0x5db4d58: xor eax, eax

bool MapEditor_ScaleGizmo__ContainsCenter
               (MapEditor_ScaleGizmo_o *__this,UnityEngine_RaycastHit_array *hits,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Transform_o *y;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Transform_o *x;
  ulong uVar6;
  UnityEngine_RaycastHit_o *pUVar7;
  ulong uVar8;
  UnityEngine_RaycastHit_o local_68;
  
  if (Il2CppMethodInitialized_07548126 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548126 = '\x01';
  }
  local_68.fields.m_UV.fields.x = 0.0;
  local_68.fields.m_UV.fields.y = 0.0;
  local_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_68.fields.m_Normal.fields.y = 0.0;
  local_68.fields.m_Normal.fields.z = 0.0;
  local_68.fields.m_FaceID = 0;
  local_68.fields.m_Distance = 0.0;
  local_68.fields.m_Point.fields.x = 0.0;
  local_68.fields.m_Point.fields.y = 0.0;
  local_68.fields.m_Point.fields.z = 0.0;
  local_68.fields.m_Normal.fields.x = 0.0;
  if (hits == (UnityEngine_RaycastHit_array *)0x0) {
label_05db4d6e:
    ThrowNullReferenceException();
  }
  if (0 < (int)hits->max_length) {
    uVar6 = hits->max_length & 0xffffffff;
    pUVar7 = hits->m_Items;
    uVar8 = 0;
    do {
      if (uVar6 <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      local_68.fields.m_Point.fields.x = (pUVar7->fields).m_Point.fields.x;
      local_68.fields.m_Point.fields.y = (pUVar7->fields).m_Point.fields.y;
      local_68.fields._8_8_ = *(undefined8 *)&(pUVar7->fields).m_Point.fields.z;
      local_68.fields.m_Normal.fields.y = (pUVar7->fields).m_Normal.fields.y;
      local_68.fields.m_Normal.fields.z = (pUVar7->fields).m_Normal.fields.z;
      uVar2 = (pUVar7->fields).m_FaceID;
      uVar3 = (pUVar7->fields).m_Distance;
      uVar4 = (pUVar7->fields).m_UV.fields.x;
      local_68.fields._36_8_ = *(undefined8 *)&(pUVar7->fields).m_UV.fields.y;
      local_68.fields.m_FaceID = uVar2;
      local_68.fields.m_Distance = (float)uVar3;
      local_68.fields.m_UV.fields.x = (float)uVar4;
      __this_00 = UnityEngine_RaycastHit__get_collider(&local_68,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_05db4d6e;
      x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      y = (__this->fields)._center;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      if (bVar5) {
        return true;
      }
      uVar8 = uVar8 + 1;
      uVar1 = (uint)hits->max_length;
      uVar6 = (ulong)uVar1;
      pUVar7 = pUVar7 + 1;
    } while ((long)uVar8 < (long)(int)uVar1);
  }
  return false;
}


// MapEditor.ScaleGizmo$$Update
// il2cpp: void MapEditor_ScaleGizmo__Update (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x5db4d80
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db5308: jmp 0x5db5664
// asm:   0x5db5585: jmp 0x5db5986
// asm:   0x5db5a9d: jmp 0x5db640e
// asm:   0x5db5ff4: movaps xmm2, xmmword ptr [rsp + 0x40]
// asm:   0x5db5ff9: cmp byte ptr [rip + 0x17884b7], 0
// asm:   0x5db60e9: movaps xmm1, xmmword ptr [rsp + 0x50]
// asm:   0x5db60ee: jmp 0x5db6398
// asm:   0x5db61ce: jmp 0x5db6002

void MapEditor_ScaleGizmo__Update(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

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
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint32_t uVar16;
  Settings_InputSettings_o *pSVar17;
  Settings_MapEditorInputSettings_o *pSVar18;
  Cameras_BaseCamera_o *__this_00;
  Settings_KeybindSetting_o *selectKey;
  UnityEngine_Camera_o *pUVar19;
  UnityEngine_Vector2_Fields UVar20;
  UnityEngine_Object_o *x;
  Settings_MapEditorSettings_o *pSVar21;
  Settings_FloatSetting_o *pSVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  UnityEngine_Ray_o ray;
  UnityEngine_Vector3_o pos;
  bool bVar26;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  System_Int32_array *layers;
  UnityEngine_RaycastHit_array *hits;
  System_Func_RaycastHit__bool__o *__this_01;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  MapEditor_TransformScaleCommand_o *__this_02;
  ulong uVar27;
  UnityEngine_Collider_o *pUVar28;
  UnityEngine_Transform_o *pUVar29;
  UnityEngine_Transform_o *pUVar30;
  float *pfVar31;
  UnityEngine_Vector3_StaticFields *pUVar32;
  MethodInfo *pMVar33;
  UnityEngine_Vector3_o *pUVar34;
  MethodInfo *method_00;
  GameManagers_MapEditorGameManager_o *pGVar35;
  Il2CppClass *klass;
  MapEditor_ScaleGizmo_o *pMVar36;
  UnityEngine_RaycastHit_o *pUVar37;
  MethodInfo *pMVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  UnityEngine_Vector3_o UVar46;
  UnityEngine_Vector3_o frameDelta;
  undefined8 uStack_188;
  float fStack_168;
  float fStack_164;
  undefined1 auStack_158 [12];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint32_t uStack_140;
  float fStack_13c;
  float fStack_138;
  undefined8 uStack_134;
  undefined1 auStack_128 [16];
  float fStack_10c;
  UnityEngine_Vector3_Fields UStack_108;
  UnityEngine_Vector3_Fields UStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  UnityEngine_RaycastHit_o UStack_c8;
  undefined1 auStack_98 [16];
  Il2CppMethodPointer pIStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint32_t uStack_70;
  float fStack_6c;
  float fStack_68;
  undefined8 uStack_64;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_07548127 == '\0') {
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
    Il2CppMethodInitialized_07548127 = '\x01';
  }
  UStack_f8.z = 0.0;
  UStack_f8.x = 0.0;
  UStack_f8.y = 0.0;
  fStack_68 = 0.0;
  uStack_64 = 0;
  uStack_78._0_4_ = 0.0;
  uStack_78._4_4_ = 0.0;
  uStack_70 = 0;
  fStack_6c = 0.0;
  pIStack_88 = (Il2CppMethodPointer)0x0;
  uStack_80._0_4_ = 0.0;
  uStack_80._4_4_ = 0.0;
  UStack_c8.fields.m_UV.fields.x = 0.0;
  UStack_c8.fields.m_UV.fields.y = 0.0;
  UStack_c8.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0;
  UStack_c8.fields.m_Normal.fields.y = 0.0;
  UStack_c8.fields.m_Normal.fields.z = 0.0;
  UStack_c8.fields.m_FaceID = 0;
  UStack_c8.fields.m_Distance = 0.0;
  UStack_c8.fields.m_Point.fields.x = 0.0;
  UStack_c8.fields.m_Point.fields.y = 0.0;
  UStack_c8.fields.m_Point.fields.z = 0.0;
  UStack_c8.fields.m_Normal.fields.x = 0.0;
  UStack_108.z = 0.0;
  UStack_108.x = 0.0;
  UStack_108.y = 0.0;
  MapEditor_BaseGizmo__Update((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pSVar17 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if ((pSVar17 == (Settings_InputSettings_o *)0x0) ||
     (pSVar18 = (pSVar17->fields).MapEditor, pSVar18 == (Settings_MapEditorInputSettings_o *)0x0))
  goto label_05db640e;
  __this_00 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  selectKey = (pSVar18->fields).Select;
  pUVar30 = (__this->fields)._activeLine;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar36 = (MapEditor_ScaleGizmo_o *)&(__this->fields)._activeLine;
  bVar26 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar30,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar26) {
    pMVar33 = (MethodInfo *)0x0;
    bVar26 = MapEditor_BaseGizmo__TryGetPointerDown
                       ((MapEditor_BaseGizmo_o *)__this,selectKey,(UnityEngine_Vector3_o *)&UStack_f8,
                        (MethodInfo *)0x0);
    if (!bVar26) {
label_05db59c3:
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      pUVar32 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar42 = (pUVar32->zeroVector).fields.y;
      fVar41 = (pUVar32->zeroVector).fields.z;
      (__this->fields)._currentScaleAmount.fields.x = (pUVar32->zeroVector).fields.x;
      (__this->fields)._currentScaleAmount.fields.y = fVar42;
      (__this->fields)._currentScaleAmount.fields.z = fVar41;
      return;
    }
    if ((__this_00 != (Cameras_BaseCamera_o *)0x0) &&
       (pUVar19 = (__this_00->fields).Camera, pUVar19 != (UnityEngine_Camera_o *)0x0)) {
      UVar46.fields.z = UStack_f8.z;
      UVar46.fields.x = UStack_f8.x;
      UVar46.fields.y = UStack_f8.y;
      UnityEngine_Camera__ScreenPointToRay_68c1290
                ((UnityEngine_Ray_o *)auStack_158,pUVar19,UVar46,(MethodInfo *)0x0);
      layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      if (layers != (System_Int32_array *)0x0) {
        if ((int)layers->max_length == 0) {
label_05db6413:
          ThrowIndexOutOfRangeException();
        }
        layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorGizmo;
        mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        ray.fields.m_Direction.fields.z = fStack_144;
        ray.fields.m_Direction.fields.y = fStack_148;
        ray.fields.m_Direction.fields.x = fStack_14c;
        ray.fields.m_Origin.fields.z = (float)auStack_158._8_4_;
        ray.fields.m_Origin.fields.x = (float)auStack_158._0_4_;
        ray.fields.m_Origin.fields.y = (float)auStack_158._4_4_;
        hits = UnityEngine_Physics__RaycastAll_69dba60(ray,100000.0,layerMask,(MethodInfo *)0x0);
        bVar26 = MapEditor_ScaleGizmo__ContainsCenter(__this,hits,method_00);
        auStack_128._0_8_ = pMVar36;
        if (bVar26) {
          (__this->fields)._activeLine = (__this->fields)._center;
          Il2CppCodeGenWriteBarrier((void **)pMVar36);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar36,(__this->fields)._lineX,(UnityEngine_Color_o)(__this->fields).LineXColor.fields,
                     0x1267,pMVar33);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar36,(__this->fields)._lineY,(UnityEngine_Color_o)(__this->fields).LineYColor.fields,
                     0x1267,pMVar33);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar36,(__this->fields)._lineZ,(UnityEngine_Color_o)(__this->fields).LineZColor.fields,
                     0x1267,pMVar33);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar36,(__this->fields)._center,(UnityEngine_Color_o)(__this->fields).CenterColor.fields
                     ,0x1270,pMVar33);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar36,(__this->fields)._activeLine,
                     (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0x1267,pMVar33);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar36,(__this->fields)._lineX,
                     (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0x1267,pMVar33);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar36,(__this->fields)._lineY,
                     (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0x1267,pMVar33);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar36,(__this->fields)._lineZ,
                     (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0x1267,pMVar33);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_RaycastHit_bool);
          System_Func_RaycastHit__bool____ctor
                    (__this_01,(Il2CppObject *)__this,(intptr_t)MethodInfo_MapEditor_ScaleGizmo_Update_b__17_0
                     ,(MethodInfo_4F1A590 *)0x0);
          System_Linq_Enumerable__First_RaycastHit_
                    ((UnityEngine_RaycastHit_o *)auStack_158,
                     (System_Collections_Generic_IEnumerable_TSource__o *)hits,
                     (System_Func_TSource__bool__o *)__this_01,
                     (MethodInfo_34EBCC0 *)MethodInfo_System_Linq_Enumerable_First_RaycastHit);
          uStack_80._4_4_ = fStack_14c;
          uStack_80._0_4_ = (float)auStack_158._8_4_;
          uStack_78._4_4_ = fStack_144;
          uStack_78._0_4_ = fStack_148;
          fStack_68 = fStack_138;
          uStack_64 = uStack_134;
          uStack_70 = uStack_140;
          fStack_6c = fStack_13c;
          pIStack_88 = (Il2CppMethodPointer)auStack_158._0_8_;
          pUVar37 = (UnityEngine_RaycastHit_o *)&pIStack_88;
label_05db595a:
          UVar46 = UnityEngine_RaycastHit__get_point(pUVar37,(MethodInfo *)0x0);
          (__this->fields)._previousMousePoint.fields.x = UVar46.fields.x;
          (__this->fields)._previousMousePoint.fields.y = UVar46.fields.y;
          (__this->fields)._previousMousePoint.fields.z = UVar46.fields.z;
          pGVar35 = (__this->fields)._gameManager;
          if (pGVar35 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05db640e;
          GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting(pGVar35,(MethodInfo *)0x0);
        }
        else {
          if (hits == (UnityEngine_RaycastHit_array *)0x0) goto label_05db640e;
          if (0 < (int)hits->max_length) {
            uVar27 = hits->max_length & 0xffffffff;
            pUVar37 = hits->m_Items;
            uVar39 = 0;
            do {
              if (uVar27 <= uVar39) goto label_05db6413;
              UStack_c8.fields.m_Point.fields.x = (pUVar37->fields).m_Point.fields.x;
              UStack_c8.fields.m_Point.fields.y = (pUVar37->fields).m_Point.fields.y;
              UStack_c8.fields._8_8_ = *(undefined8 *)&(pUVar37->fields).m_Point.fields.z;
              UStack_c8.fields.m_Normal.fields.y = (pUVar37->fields).m_Normal.fields.y;
              UStack_c8.fields.m_Normal.fields.z = (pUVar37->fields).m_Normal.fields.z;
              uVar24 = (pUVar37->fields).m_FaceID;
              uVar25 = (pUVar37->fields).m_Distance;
              UVar20 = (pUVar37->fields).m_UV.fields;
              UStack_c8.fields.m_Collider.fields.m_Data =
                   (UnityEngine_EntityId_Fields)(pUVar37->fields).m_Collider.fields.m_Data;
              pMVar33 = (MethodInfo *)(ulong)(uint)UStack_c8.fields.m_Collider.fields.m_Data;
              UStack_c8.fields.m_UV.fields.x = UVar20.x;
              UStack_c8.fields.m_UV.fields.y = UVar20.y;
              UStack_c8.fields.m_FaceID = uVar24;
              UStack_c8.fields.m_Distance = (float)uVar25;
              pUVar28 = UnityEngine_RaycastHit__get_collider(&UStack_c8,(MethodInfo *)0x0);
              if (pUVar28 == (UnityEngine_Collider_o *)0x0) goto label_05db640e;
              pUVar29 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pUVar28,(MethodInfo *)0x0);
              pUVar30 = (__this->fields)._lineX;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar26 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)pUVar30,
                                  (MethodInfo *)0x0);
              if (bVar26) {
label_05db587f:
                pUVar28 = UnityEngine_RaycastHit__get_collider(&UStack_c8,(MethodInfo *)0x0);
                if (pUVar28 == (UnityEngine_Collider_o *)0x0) goto label_05db640e;
                pUVar30 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUVar28,(MethodInfo *)0x0);
                (__this->fields)._activeLine = pUVar30;
                pMVar36 = (MapEditor_ScaleGizmo_o *)auStack_128._0_8_;
                Il2CppCodeGenWriteBarrier((void **)auStack_128._0_8_);
                MapEditor_ScaleGizmo__SetLineColor
                          (pMVar36,(__this->fields)._lineX,
                           (UnityEngine_Color_o)(__this->fields).LineXColor.fields,0x1267,pMVar33);
                MapEditor_ScaleGizmo__SetLineColor
                          (pMVar36,(__this->fields)._lineY,
                           (UnityEngine_Color_o)(__this->fields).LineYColor.fields,0x1267,pMVar33);
                MapEditor_ScaleGizmo__SetLineColor
                          (pMVar36,(__this->fields)._lineZ,
                           (UnityEngine_Color_o)(__this->fields).LineZColor.fields,0x1267,pMVar33);
                MapEditor_ScaleGizmo__SetLineColor
                          (pMVar36,(__this->fields)._center,
                           (UnityEngine_Color_o)(__this->fields).CenterColor.fields,0x1270,pMVar33);
                MapEditor_ScaleGizmo__SetLineColor
                          (pMVar36,(__this->fields)._activeLine,
                           (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0x1267,pMVar33);
                pUVar37 = &UStack_c8;
                goto label_05db595a;
              }
              pUVar28 = UnityEngine_RaycastHit__get_collider(&UStack_c8,(MethodInfo *)0x0);
              if (pUVar28 == (UnityEngine_Collider_o *)0x0) goto label_05db640e;
              pUVar29 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pUVar28,(MethodInfo *)0x0);
              pUVar30 = (__this->fields)._lineY;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar26 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)pUVar30,
                                  (MethodInfo *)0x0);
              if (bVar26) goto label_05db587f;
              pUVar28 = UnityEngine_RaycastHit__get_collider(&UStack_c8,(MethodInfo *)0x0);
              if (pUVar28 == (UnityEngine_Collider_o *)0x0) goto label_05db640e;
              pUVar29 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pUVar28,(MethodInfo *)0x0);
              pUVar30 = (__this->fields)._lineZ;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar26 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)pUVar30,
                                  (MethodInfo *)0x0);
              if (bVar26) goto label_05db587f;
              uVar39 = uVar39 + 1;
              uVar15 = (uint)hits->max_length;
              uVar27 = (ulong)uVar15;
              pUVar37 = pUVar37 + 1;
            } while ((long)uVar39 < (long)(int)uVar15);
          }
        }
        x = *(UnityEngine_Object_o **)auStack_128._0_8_;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar26 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar26) {
          MapEditor_BaseGizmo__CancelPointer((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
        }
        goto label_05db59c3;
      }
    }
    goto label_05db640e;
  }
  bVar26 = MapEditor_BaseGizmo__IsPointerHeld
                     ((MapEditor_BaseGizmo_o *)__this,selectKey,(UnityEngine_Vector3_o *)&UStack_108,
                      (MethodInfo *)0x0);
  if (bVar26) {
    if ((__this_00 == (Cameras_BaseCamera_o *)0x0) ||
       (pUVar19 = (__this_00->fields).Camera, pUVar19 == (UnityEngine_Camera_o *)0x0)) goto label_05db640e;
    pos.fields.z = UStack_108.z;
    pos.fields.x = UStack_108.x;
    pos.fields.y = UStack_108.y;
    UnityEngine_Camera__ScreenPointToRay_68c1290
              ((UnityEngine_Ray_o *)auStack_158,pUVar19,pos,(MethodInfo *)0x0);
    uVar1 = (__this->fields)._previousMousePoint.fields.x;
    uVar8 = (__this->fields)._previousMousePoint.fields.y;
    uStack_e8 = (Il2CppMethodPointer)auStack_158._0_8_;
    uStack_e0 = 0;
    fVar42 = (float)uVar1 - auStack_158._0_4_;
    fVar43 = (float)uVar8 - auStack_158._4_4_;
    _auStack_d8 = ZEXT416((uint)auStack_158._8_4_);
    fVar41 = (__this->fields)._previousMousePoint.fields.z - (float)auStack_158._8_4_;
    if (Il2CppMethodInitialized_075450a4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_075450a4 = '\x01';
    }
    fStack_48 = fStack_148;
    fStack_44 = fStack_148;
    fStack_40 = fStack_148;
    fStack_3c = fStack_148;
    fVar40 = fStack_144 * fStack_144 + fStack_148 * fStack_148 + fStack_14c * fStack_14c;
    fVar44 = fVar41 * fVar41 + fVar43 * fVar43 + fVar42 * fVar42;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      auStack_98 = ZEXT416((uint)fVar40);
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      fVar40 = (float)auStack_98._0_4_ * fVar44;
      if (fVar40 < 0.0) goto label_05db55c9;
label_05db52f3:
      fVar40 = SQRT(fVar40);
      klass = (Il2CppClass *)TypeInfo_System_Math;
    }
    else {
      fVar40 = fVar40 * fVar44;
      if (0.0 <= fVar40) goto label_05db52f3;
label_05db55c9:
      fVar40 = sqrtf(fVar40);
      klass = (Il2CppClass *)TypeInfo_System_Math;
    }
    fVar45 = 0.0;
    TypeInfo_System_Math = (System_Math_c *)klass;
    if (1e-15 <= fVar40) {
      fVar40 = (fVar41 * fStack_144 + fVar43 * fStack_148 + fVar42 * fStack_14c) / fVar40;
      fVar41 = 1.0;
      if (fVar40 <= 1.0) {
        fVar41 = fVar40;
      }
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
      }
      dVar23 = acos((double)(float)(~-(uint)(-1.0 <= fVar40) & 0xbf800000 |
                                   (uint)fVar41 & -(uint)(-1.0 <= fVar40)),(MethodInfo *)klass);
      fVar45 = (float)dVar23 * 57.29578;
    }
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar16 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar16 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar16 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    if (fVar44 < 0.0) {
      fVar44 = sqrtf(fVar44);
    }
    else {
      fVar44 = SQRT(fVar44);
    }
    fStack_10c = cosf(fVar45 * 0.017453292);
    uStack_58._0_4_ = (__this->fields)._previousMousePoint.fields.x;
    uStack_58._4_4_ = (__this->fields)._previousMousePoint.fields.y;
    uStack_50 = 0;
    auStack_98 = ZEXT416((uint)(__this->fields)._previousMousePoint.fields.z);
    pUVar30 = (__this->fields)._lineX;
    pUVar29 = (__this->fields)._activeLine;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar26 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)pUVar30,(MethodInfo *)0x0);
    if (bVar26) {
      if (Il2CppMethodInitialized_07544d56 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_07544d56 = '\x01';
      }
      pUVar34 = &TypeInfo_UnityEngine_Vector3->static_fields->rightVector;
      pfVar31 = &(TypeInfo_UnityEngine_Vector3->static_fields->rightVector).fields.z;
    }
    else {
      pUVar30 = (__this->fields)._lineY;
      pUVar29 = (__this->fields)._activeLine;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar26 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)pUVar30,(MethodInfo *)0x0);
      if (bVar26) {
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        pUVar34 = &TypeInfo_UnityEngine_Vector3->static_fields->upVector;
        pfVar31 = &(TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.z;
      }
      else {
        pUVar30 = (__this->fields)._lineZ;
        pUVar29 = (__this->fields)._activeLine;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar26 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)pUVar30,(MethodInfo *)0x0)
        ;
        if (bVar26) {
          if (Il2CppMethodInitialized_0753e72e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72e = '\x01';
          }
          pUVar34 = &TypeInfo_UnityEngine_Vector3->static_fields->forwardVector;
          pfVar31 = &(TypeInfo_UnityEngine_Vector3->static_fields->forwardVector).fields.z;
        }
        else {
          if (Il2CppMethodInitialized_0753e4b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b7 = '\x01';
          }
          pUVar34 = &TypeInfo_UnityEngine_Vector3->static_fields->oneVector;
          pfVar31 = &(TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields.z;
        }
      }
    }
    fVar41 = *pfVar31;
    uVar2 = (pUVar34->fields).x;
    uVar9 = (pUVar34->fields).y;
    pUVar30 = (__this->fields)._center;
    pUVar29 = (__this->fields)._activeLine;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar26 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)pUVar30,(MethodInfo *)0x0);
    if (bVar26) {
      pUVar30 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    }
    else {
      pUVar30 = *(UnityEngine_Transform_o **)pMVar36;
    }
    if (pUVar30 == (UnityEngine_Transform_o *)0x0) goto label_05db640e;
    pMVar33 = (MethodInfo *)0x0;
    UVar46 = UnityEngine_Transform__get_right(pUVar30,(MethodInfo *)0x0);
    pGVar35 = (__this->fields)._gameManager;
    if (pGVar35 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05db640e;
    fVar44 = fVar44 / fStack_10c;
    auStack_d8._0_4_ = (float)auStack_d8._0_4_ + fVar44 * fStack_144;
    fVar43 = (float)uStack_e8 + fVar44 * fStack_14c;
    fStack_d0 = (float)auStack_d8._4_4_ + fVar44 * 0.0;
    fVar42 = uStack_e8._4_4_ + fStack_48 * fVar44;
    uStack_e8 = (Il2CppMethodPointer)CONCAT44(uStack_e8._4_4_,fVar42);
    uStack_e0 = CONCAT44(uStack_e8._4_4_,uStack_e8._4_4_);
    auStack_d8._4_4_ = fVar43;
    fStack_cc = uStack_e8._4_4_ + fVar44 * fStack_148;
    fVar42 = UVar46.fields.x * (fVar43 - (float)uStack_58) + UVar46.fields.y * (fVar42 - uStack_58._4_4_) +
             UVar46.fields.z * ((float)auStack_d8._0_4_ - (float)auStack_98._0_4_);
    uStack_188._0_4_ = fVar42 * (float)uVar2 * 0.1;
    uStack_188._4_4_ = fVar42 * (float)uVar9 * 0.1;
    fVar42 = fVar41 * fVar42 * 0.1;
    if ((pGVar35->fields).Snap != false) {
      pSVar21 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
      if ((pSVar21 == (Settings_MapEditorSettings_o *)0x0) ||
         (pSVar22 = (pSVar21->fields).SnapScale, pSVar22 == (Settings_FloatSetting_o *)0x0))
      goto label_05db640e;
      fVar43 = (pSVar22->fields)._value;
      uVar3 = (__this->fields)._currentScaleAmount.fields.x;
      uVar10 = (__this->fields)._currentScaleAmount.fields.y;
      fVar40 = (__this->fields)._currentScaleAmount.fields.z;
      (__this->fields)._currentScaleAmount.fields.x = (float)uStack_188 + (float)uVar3;
      (__this->fields)._currentScaleAmount.fields.y = uStack_188._4_4_ + (float)uVar10;
      (__this->fields)._currentScaleAmount.fields.z = fVar42 + fVar40;
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      pUVar32 = TypeInfo_UnityEngine_Vector3->static_fields;
      uStack_188._0_4_ = (pUVar32->zeroVector).fields.x;
      uStack_188._4_4_ = (pUVar32->zeroVector).fields.y;
      fVar42 = (pUVar32->zeroVector).fields.z;
      if (Il2CppMethodInitialized_07544d56 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_07544d56 = '\x01';
        pUVar32 = TypeInfo_UnityEngine_Vector3->static_fields;
      }
      uVar4 = (pUVar32->rightVector).fields.x;
      uVar11 = (pUVar32->rightVector).fields.y;
      fVar40 = fVar41 - (pUVar32->rightVector).fields.z;
      if ((((float)uVar9 - (float)uVar11) * ((float)uVar9 - (float)uVar11) +
           ((float)uVar2 - (float)uVar4) * ((float)uVar2 - (float)uVar4) + fVar40 * fVar40 < 9.9999994e-11) &&
         (fVar40 = (__this->fields)._currentScaleAmount.fields.x, fVar43 < ABS(fVar40))) {
        fVar40 = fVar40 / fVar43;
        auStack_128 = ZEXT416((uint)fVar40);
        pMVar38 = (MethodInfo *)auStack_158;
        dVar23 = modf((double)fVar40,(double *)pMVar38,pMVar33);
        if (0.0 <= (float)auStack_128._0_4_) {
          if ((dVar23 != 0.5) || (NAN(dVar23))) {
            fVar40 = floorf((float)auStack_128._0_4_ + 0.5);
          }
          else {
            fVar40 = (float)(double)auStack_158._0_8_;
            if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
              fVar40 = fVar40 + 1.0;
            }
          }
        }
        else if ((dVar23 != -0.5) || (NAN(dVar23))) {
          fVar40 = ceilf((float)auStack_128._0_4_ + -0.5);
        }
        else {
          fVar40 = (float)(double)auStack_158._0_8_;
          if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
            fVar40 = fVar40 + -1.0;
          }
        }
        uStack_188 = CONCAT44(uStack_188._4_4_,fVar40 * fVar43);
        fVar40 = fmodf((__this->fields)._currentScaleAmount.fields.x,fVar43,pMVar38);
        (__this->fields)._currentScaleAmount.fields.x = fVar40;
      }
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      pUVar32 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar5 = (pUVar32->upVector).fields.x;
      uVar12 = (pUVar32->upVector).fields.y;
      fVar40 = fVar41 - (pUVar32->upVector).fields.z;
      if ((((float)uVar9 - (float)uVar12) * ((float)uVar9 - (float)uVar12) +
           ((float)uVar2 - (float)uVar5) * ((float)uVar2 - (float)uVar5) + fVar40 * fVar40 < 9.9999994e-11) &&
         (fVar40 = (__this->fields)._currentScaleAmount.fields.y, fVar43 < ABS(fVar40))) {
        fVar40 = fVar40 / fVar43;
        auStack_128 = ZEXT416((uint)fVar40);
        pMVar38 = (MethodInfo *)auStack_158;
        dVar23 = modf((double)fVar40,(double *)pMVar38,pMVar33);
        if (0.0 <= (float)auStack_128._0_4_) {
          if ((dVar23 != 0.5) || (NAN(dVar23))) {
            fVar40 = floorf((float)auStack_128._0_4_ + 0.5);
          }
          else {
            fVar40 = (float)(double)auStack_158._0_8_;
            if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
              fVar40 = fVar40 + 1.0;
            }
          }
        }
        else if ((dVar23 != -0.5) || (NAN(dVar23))) {
          fVar40 = ceilf((float)auStack_128._0_4_ + -0.5);
        }
        else {
          fVar40 = (float)(double)auStack_158._0_8_;
          if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
            fVar40 = fVar40 + -1.0;
          }
        }
        uStack_188 = CONCAT44(fVar40 * fVar43,(int)uStack_188);
        fVar40 = fmodf((__this->fields)._currentScaleAmount.fields.y,fVar43,pMVar38);
        (__this->fields)._currentScaleAmount.fields.y = fVar40;
      }
      if (Il2CppMethodInitialized_0753e72e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72e = '\x01';
      }
      pUVar32 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar6 = (pUVar32->forwardVector).fields.x;
      uVar13 = (pUVar32->forwardVector).fields.y;
      fVar40 = fVar41 - (pUVar32->forwardVector).fields.z;
      if ((((float)uVar9 - (float)uVar13) * ((float)uVar9 - (float)uVar13) +
           ((float)uVar2 - (float)uVar6) * ((float)uVar2 - (float)uVar6) + fVar40 * fVar40 < 9.9999994e-11) &&
         (fVar40 = (__this->fields)._currentScaleAmount.fields.z, fVar43 < ABS(fVar40))) {
        fVar40 = fVar40 / fVar43;
        pMVar38 = (MethodInfo *)auStack_158;
        dVar23 = modf((double)fVar40,(double *)pMVar38,pMVar33);
        if (0.0 <= fVar40) {
          if ((dVar23 != 0.5) || (NAN(dVar23))) {
            fVar42 = floorf(fVar40 + 0.5);
          }
          else {
            fVar42 = (float)(double)auStack_158._0_8_;
            if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
              fVar42 = fVar42 + 1.0;
            }
          }
        }
        else if ((dVar23 != -0.5) || (NAN(dVar23))) {
          fVar42 = ceilf(fVar40 + -0.5);
        }
        else {
          fVar42 = (float)(double)auStack_158._0_8_;
          if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
            fVar42 = fVar42 + -1.0;
          }
        }
        fVar42 = fVar42 * fVar43;
        fVar40 = fmodf((__this->fields)._currentScaleAmount.fields.z,fVar43,pMVar38);
        (__this->fields)._currentScaleAmount.fields.z = fVar40;
      }
      if (Il2CppMethodInitialized_0753e4b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b7 = '\x01';
      }
      pUVar32 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar7 = (pUVar32->oneVector).fields.x;
      uVar14 = (pUVar32->oneVector).fields.y;
      fVar41 = fVar41 - (pUVar32->oneVector).fields.z;
      if ((((float)uVar9 - (float)uVar14) * ((float)uVar9 - (float)uVar14) +
           ((float)uVar2 - (float)uVar7) * ((float)uVar2 - (float)uVar7) + fVar41 * fVar41 < 9.9999994e-11) &&
         (fVar41 = (__this->fields)._currentScaleAmount.fields.x, fVar43 < ABS(fVar41))) {
        fVar41 = fVar41 / fVar43;
        dVar23 = modf((double)fVar41,(double *)auStack_158,pMVar33);
        if (0.0 <= fVar41) {
          if ((dVar23 != 0.5) || (NAN(dVar23))) {
            uStack_188._0_4_ = floorf(fVar41 + 0.5);
          }
          else {
            uStack_188._0_4_ = (float)(double)auStack_158._0_8_;
            if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
              uStack_188._0_4_ = (float)uStack_188 + 1.0;
            }
          }
        }
        else if ((dVar23 != -0.5) || (NAN(dVar23))) {
          uStack_188._0_4_ = ceilf(fVar41 + -0.5);
        }
        else {
          uStack_188._0_4_ = (float)(double)auStack_158._0_8_;
          if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
            uStack_188._0_4_ = (float)uStack_188 + -1.0;
          }
        }
        uStack_188._0_4_ = (float)uStack_188 * fVar43;
        fVar41 = (__this->fields)._currentScaleAmount.fields.x / fVar43;
        dVar23 = modf((double)fVar41,(double *)auStack_158,pMVar33);
        if (0.0 <= fVar41) {
          if ((dVar23 != 0.5) || (NAN(dVar23))) {
            uStack_188._4_4_ = floorf(fVar41 + 0.5);
          }
          else {
            uStack_188._4_4_ = (float)(double)auStack_158._0_8_;
            if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
              uStack_188._4_4_ = uStack_188._4_4_ + 1.0;
            }
          }
        }
        else if ((dVar23 != -0.5) || (NAN(dVar23))) {
          uStack_188._4_4_ = ceilf(fVar41 + -0.5);
        }
        else {
          uStack_188._4_4_ = (float)(double)auStack_158._0_8_;
          if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
            uStack_188._4_4_ = uStack_188._4_4_ + -1.0;
          }
        }
        uStack_188._4_4_ = uStack_188._4_4_ * fVar43;
        fVar41 = (__this->fields)._currentScaleAmount.fields.x / fVar43;
        pMVar38 = (MethodInfo *)auStack_158;
        dVar23 = modf((double)fVar41,(double *)pMVar38,pMVar33);
        if (0.0 <= fVar41) {
          if ((dVar23 != 0.5) || (NAN(dVar23))) {
            fVar42 = floorf(fVar41 + 0.5);
          }
          else {
            fVar42 = (float)(double)auStack_158._0_8_;
            if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
              fVar42 = fVar42 + 1.0;
            }
          }
        }
        else if ((dVar23 != -0.5) || (NAN(dVar23))) {
          fVar42 = ceilf(fVar41 + -0.5);
        }
        else {
          fVar42 = (float)(double)auStack_158._0_8_;
          if (((long)(double)auStack_158._0_8_ & 1U) != 0) {
            fVar42 = fVar42 + -1.0;
          }
        }
        fVar42 = fVar42 * fVar43;
        fVar41 = fmodf((__this->fields)._currentScaleAmount.fields.x,fVar43,pMVar38);
        (__this->fields)._currentScaleAmount.fields.x = fVar41;
      }
    }
    uStack_e8 = (Il2CppMethodPointer)CONCAT44((float)uStack_e8,auStack_d8._4_4_);
    uStack_e0 = CONCAT44(auStack_d8._4_4_,auStack_d8._4_4_);
    frameDelta.fields.y = uStack_188._4_4_;
    frameDelta.fields.x = (float)uStack_188;
    frameDelta.fields.z = fVar42;
    MapEditor_ScaleGizmo__ScaleSelectedObjects(__this,frameDelta,pMVar33);
    MapEditor_ScaleGizmo__ResetCenter(__this,pMVar33);
    *(Il2CppMethodPointer *)&(__this->fields)._previousMousePoint.fields = uStack_e8;
    (__this->fields)._previousMousePoint.fields.z = (float)auStack_d8._0_4_;
  }
  else {
    pGVar35 = (__this->fields)._gameManager;
    if (pGVar35 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05db640e;
    GameManagers_MapEditorGameManager__TeardownTemporaryPhysicalParenting(pGVar35,(MethodInfo *)0x0);
    pGVar35 = (__this->fields)._gameManager;
    if (pGVar35 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05db640e;
    mapObjects = GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand
                           (pGVar35,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_TransformScaleCommand);
    MapEditor_TransformScaleCommand___ctor(__this_02,mapObjects,(MethodInfo *)0x0);
    pMVar33 = (MethodInfo *)0x0;
    GameManagers_MapEditorGameManager__NewCommand
              (pGVar35,(MapEditor_BaseCommand_o *)__this_02,true,(MethodInfo *)0x0);
    MapEditor_ScaleGizmo__SetLineColor
              ((MapEditor_ScaleGizmo_o *)pGVar35,(__this->fields)._lineX,
               (UnityEngine_Color_o)(__this->fields).LineXColor.fields,0x1267,pMVar33);
    MapEditor_ScaleGizmo__SetLineColor
              ((MapEditor_ScaleGizmo_o *)pGVar35,(__this->fields)._lineY,
               (UnityEngine_Color_o)(__this->fields).LineYColor.fields,0x1267,pMVar33);
    MapEditor_ScaleGizmo__SetLineColor
              ((MapEditor_ScaleGizmo_o *)pGVar35,(__this->fields)._lineZ,
               (UnityEngine_Color_o)(__this->fields).LineZColor.fields,0x1267,pMVar33);
    MapEditor_ScaleGizmo__SetLineColor
              ((MapEditor_ScaleGizmo_o *)pGVar35,(__this->fields)._center,
               (UnityEngine_Color_o)(__this->fields).CenterColor.fields,0x1270,pMVar33);
    (__this->fields)._activeLine = (UnityEngine_Transform_o *)0x0;
    Il2CppCodeGenWriteBarrier((void **)pMVar36);
  }
  pGVar35 = (__this->fields)._gameManager;
  if (pGVar35 != (GameManagers_MapEditorGameManager_o *)0x0) {
    (pGVar35->fields).IgnoreNextSelect = true;
    return;
  }
label_05db640e:
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$ScaleSelectedObjects
// il2cpp: void MapEditor_ScaleGizmo__ScaleSelectedObjects (MapEditor_ScaleGizmo_o* __this, UnityEngine_Vector3_o frameDelta, const MethodInfo* method);
// 0x5db6500
// eh: try 0x5db6714..0x5db6808 -> pad 0x5db681f (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5db6837..0x5db683c -> pad 0x5db685d cleanup
// eh: try 0x5db6860..0x5db686a -> pad 0x5db6872 catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db65e8: jmp 0x5db6603
// asm:   0x5db680d: jmp 0x5db681f
// asm:   0x5db680f: jmp 0x5db681f
// asm:   0x5db6811: jmp 0x5db681f
// asm:   0x5db6813: jmp 0x5db681f
// asm:   0x5db6815: jmp 0x5db681f
// asm:   0x5db6817: jmp 0x5db681f
// asm:   0x5db6819: jmp 0x5db681f
// asm:   0x5db681b: jmp 0x5db681f
// asm:   0x5db681d: jmp 0x5db681f
// asm:   0x5db681f: mov rbx, rax
// asm:   0x5db6822: cmp edx, 1
// asm:   0x5db6825: jne 0x5db6860
// asm:   0x5db6827: mov rdi, rbx
// asm:   0x5db682a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db682f: mov rbx, qword ptr [rax]
// asm:   0x5db6832: mov qword ptr [rsp + 8], rbx
// asm:   0x5db6837: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db683c: lea rax, [rip + 0x14d7b65]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x5db6843: mov rsi, qword ptr [rax]
// asm:   0x5db6846: lea rdi, [rsp + 0x30]
// asm:   0x5db684b: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5db6850: test rbx, rbx
// asm:   0x5db6853: je 0x5db67eb
// asm:   0x5db6855: mov rdi, rbx
// asm:   0x5db6858: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5db685d: mov rbx, rax
// asm:   0x5db6860: lea rdi, [rsp + 8]
// asm:   0x5db6865: call 0x2fddff0  ; il2cpp_runtime_helper_02fddff0()
// asm:   0x5db686a: mov rdi, rbx
// asm:   0x5db686d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db6872: mov rdi, rax
// asm:   0x5db6875: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_ScaleGizmo__ScaleSelectedObjects
               (MapEditor_ScaleGizmo_o *__this,UnityEngine_Vector3_o frameDelta,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  GameManagers_MapEditorGameManager_o *pGVar4;
  System_Collections_Generic_HashSet_MapObject__o *source;
  Il2CppObject *pIVar5;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  bool bVar6;
  MapEditor_ScaleGizmo___c_StaticFields *pMVar7;
  System_Func_MapObject__int__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_03;
  UnityEngine_Transform_o *__this_04;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o value;
  undefined1 local_80 [16];
  Map_MapObject_o *local_70;
  undefined1 local_68 [16];
  System_Collections_Generic_HashSet_Enumerator_T__o local_58;
  undefined1 local_38 [16];
  
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = frameDelta.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07548128 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_MapEditor_ScaleGizmo_c_ScaleSelectedObjects_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ScaleGizmo_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07548128 = '\x01';
  }
  pGVar4 = (__this->fields)._gameManager;
  if (pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) {
    source = (pGVar4->fields).SelectedObjects;
    if ((TypeInfo_MapEditor_ScaleGizmo_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_ScaleGizmo_c);
      pMVar7 = TypeInfo_MapEditor_ScaleGizmo_c->static_fields;
      __this_02 = pMVar7->__9__18_0;
    }
    else {
      pMVar7 = TypeInfo_MapEditor_ScaleGizmo_c->static_fields;
      __this_02 = pMVar7->__9__18_0;
    }
    if (__this_02 == (System_Func_MapObject__int__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_MapEditor_ScaleGizmo_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_ScaleGizmo_c);
        pMVar7 = TypeInfo_MapEditor_ScaleGizmo_c->static_fields;
      }
      pIVar5 = (Il2CppObject *)pMVar7->__9;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
      System_Func_object__int____ctor
                ((System_Func_object__int__o *)__this_02,pIVar5,
                 (intptr_t)MethodInfo_MapEditor_ScaleGizmo_c_ScaleSelectedObjects_b__18_0,
                 (MethodInfo_4F198F0 *)0x0);
      pMVar7 = TypeInfo_MapEditor_ScaleGizmo_c->static_fields;
      pMVar7->__9__18_0 = __this_02;
      Il2CppCodeGenWriteBarrier(&pMVar7->__9__18_0);
    }
    collection = System_Linq_Enumerable__Select_object__int_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            (System_Func_TSource__TResult__o *)__this_02,
                            (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor_4fa7660
              (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    pGVar4 = (__this->fields)._gameManager;
    if ((pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar4->fields).SelectedObjects,
       __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_80,__this_00,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_58.fields._current = (Il2CppObject *)local_70;
      local_58.fields._set = (System_Collections_Generic_HashSet_T__o *)local_80._0_8_;
      local_58.fields._index = local_80._8_4_;
      local_58.fields._version = local_80._12_4_;
      local_80._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_80._8_8_ = &local_58;
      while( true ) {
        do {
          bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (&local_58,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
          pIVar5 = local_58.fields._current;
          if (!bVar6) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (&local_58,
                       (MethodInfo_4C456C0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
            return;
          }
          bVar6 = MapEditor_BaseGizmo__HasSelectedAncestor
                            ((Map_MapObject_o *)local_58.fields._current,__this_03,(MethodInfo *)0x0);
        } while (bVar6);
        if ((Map_MapObject_o *)pIVar5 == (Map_MapObject_o *)0x0) break;
        uVar2 = *(float *)&pIVar5[2].monitor;
        uVar3 = *(float *)((long)&pIVar5[2].monitor + 4);
        local_68._4_4_ = uVar3;
        local_68._0_4_ = uVar2;
        local_68._8_8_ = 0;
        fVar1 = (((Map_MapObject_Fields *)((long)pIVar5 + 0x10))->BaseScale).fields.z;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        UVar8.fields.z = fVar1;
        UVar8.fields.x = (float)local_68._0_4_;
        UVar8.fields.y = (float)local_68._4_4_;
        UVar9.fields.z = frameDelta.fields.z;
        UVar9.fields.x = (float)local_38._0_4_;
        UVar9.fields.y = (float)local_38._4_4_;
        UVar8 = Utility_Util__MultiplyVectors(UVar8,UVar9,(MethodInfo *)0x0);
        local_68._8_4_ = extraout_XMM0_Dc;
        local_68._0_8_ = UVar8.fields._0_8_;
        local_68._12_4_ = extraout_XMM0_Dd;
        __this_01 = ((Map_MapObject_Fields *)((long)pIVar5 + 0x10))->GameObject;
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_04 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        if (__this_04 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UVar9 = UnityEngine_Transform__get_localScale(__this_04,(MethodInfo *)0x0);
        value.fields.y = (float)local_68._4_4_ + UVar9.fields.y;
        value.fields.x = (float)local_68._0_4_ + UVar9.fields.x;
        value.fields.z = UVar8.fields.z + UVar9.fields.z;
        UnityEngine_Transform__set_localScale(__this_04,value,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$ResetCenter
// il2cpp: void MapEditor_ScaleGizmo__ResetCenter (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x5db49d0
// eh: try 0x5db4ab4..0x5db4bd7 -> pad 0x5db4bf2 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5db4c0a..0x5db4c0f -> pad 0x5db4c34 cleanup
// eh: try 0x5db4c37..0x5db4c41 -> pad 0x5db4c49 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db4bdc: jmp 0x5db4bf2
// asm:   0x5db4bde: jmp 0x5db4bf2
// asm:   0x5db4be0: jmp 0x5db4bf2
// asm:   0x5db4be2: jmp 0x5db4bf2
// asm:   0x5db4be4: jmp 0x5db4bf2
// asm:   0x5db4be6: jmp 0x5db4bf2
// asm:   0x5db4be8: jmp 0x5db4bf2
// asm:   0x5db4bea: jmp 0x5db4bf2
// asm:   0x5db4bec: jmp 0x5db4bf2
// asm:   0x5db4bee: jmp 0x5db4bf2
// asm:   0x5db4bf0: jmp 0x5db4bf2
// asm:   0x5db4bf2: mov rbx, rax
// asm:   0x5db4bf5: cmp edx, 1
// asm:   0x5db4bf8: jne 0x5db4c37
// asm:   0x5db4bfa: mov rdi, rbx
// asm:   0x5db4bfd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db4c02: mov rbx, qword ptr [rax]
// asm:   0x5db4c05: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5db4c0a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db4c0f: lea rax, [rip + 0x14d9792]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x5db4c16: mov rsi, qword ptr [rax]
// asm:   0x5db4c19: lea rdi, [rsp + 0x10]
// asm:   0x5db4c1e: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5db4c23: test rbx, rbx
// asm:   0x5db4c26: je 0x5db4b6d
// asm:   0x5db4c2c: mov rdi, rbx
// asm:   0x5db4c2f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5db4c34: mov rbx, rax
// asm:   0x5db4c37: lea rdi, [rsp + 0x28]
// asm:   0x5db4c3c: call 0x2fde020  ; il2cpp_runtime_helper_02fde020()
// asm:   0x5db4c41: mov rdi, rbx
// asm:   0x5db4c44: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db4c49: mov rdi, rax
// asm:   0x5db4c4c: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_ScaleGizmo__ResetCenter(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  undefined1 auVar3 [16];
  Il2CppObject *pIVar4;
  bool bVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *__this_01;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar7 [16];
  float fVar8;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar9;
  float local_6c;
  undefined1 local_68 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_60;
  Il2CppObject *local_58;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (Il2CppMethodInitialized_07548129 == '\0') {
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
    Il2CppMethodInitialized_07548129 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_58 = (Il2CppObject *)0x0;
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,__this_00,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    local_58 = local_40;
    local_68 = (undefined1  [8])local_50._0_8_;
    pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_50._8_8_;
    local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_6c = 0.0;
    local_38 = 0.0;
    fStack_34 = 0.0;
    fStack_30 = 0.0;
    fStack_2c = 0.0;
    local_50._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_68;
    while( true ) {
      bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
      pIVar4 = local_58;
      if (!bVar5) break;
      if (local_58 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_58[1].monitor == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar6 = UnityEngine_GameObject__get_transform(local_58[1].monitor,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar9 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
      local_38 = local_38 + UVar9.fields.x;
      fStack_34 = fStack_34 + UVar9.fields.y;
      fStack_30 = fStack_30 + extraout_XMM0_Dc;
      fStack_2c = fStack_2c + extraout_XMM0_Dd;
      local_6c = local_6c + UVar9.fields.z;
      if (pIVar4[1].monitor == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar6 = (__this->fields)._transform;
      __this_01 = UnityEngine_GameObject__get_transform(pIVar4[1].monitor,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      value = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Transform__set_rotation(pUVar6,value,(MethodInfo *)0x0);
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
               (MethodInfo_4C456C0 *)
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    pGVar1 = (__this->fields)._gameManager;
    if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
        (pSVar2 = (pGVar1->fields).SelectedObjects,
        pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) &&
       (pUVar6 = (__this->fields)._transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
      fVar8 = (float)(pSVar2->fields)._count;
      UVar9.fields.z = local_6c / fVar8;
      auVar3._4_4_ = fStack_34;
      auVar3._0_4_ = local_38;
      auVar3._8_4_ = fStack_30;
      auVar3._12_4_ = fStack_2c;
      auVar7._4_4_ = fVar8;
      auVar7._0_4_ = fVar8;
      auVar7._8_4_ = fVar8;
      auVar7._12_4_ = fVar8;
      auVar7 = divps(auVar3,auVar7);
      UVar9.fields._0_8_ = auVar7._0_8_;
      UnityEngine_Transform__set_position(pUVar6,UVar9,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$ResetColors
// il2cpp: void MapEditor_ScaleGizmo__ResetColors (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x5db47f0

void MapEditor_ScaleGizmo__ResetColors(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  MapEditor_ScaleGizmo_o *__this_00;
  
  __this_00 = __this;
  MapEditor_ScaleGizmo__SetLineColor
            (__this,(__this->fields)._lineX,(UnityEngine_Color_o)(__this->fields).LineXColor.fields,0x1267,
             in_RCX);
  MapEditor_ScaleGizmo__SetLineColor
            (__this_00,(__this->fields)._lineY,(UnityEngine_Color_o)(__this->fields).LineYColor.fields,0x1267,
             in_RCX);
  MapEditor_ScaleGizmo__SetLineColor
            (__this_00,(__this->fields)._lineZ,(UnityEngine_Color_o)(__this->fields).LineZColor.fields,0x1267,
             in_RCX);
  MapEditor_ScaleGizmo__SetLineColor
            (__this_00,(__this->fields)._center,(UnityEngine_Color_o)(__this->fields).CenterColor.fields,
             0x1270,in_RCX);
  return;
}


// MapEditor.ScaleGizmo$$SetLineColor
// il2cpp: void MapEditor_ScaleGizmo__SetLineColor (MapEditor_ScaleGizmo_o* __this, UnityEngine_Transform_o* line, UnityEngine_Color_o color, int32_t renderQueue, const MethodInfo* method);
// 0x5db6420

void MapEditor_ScaleGizmo__SetLineColor
               (MapEditor_ScaleGizmo_o *__this,UnityEngine_Transform_o *line,UnityEngine_Color_o color,
               int32_t renderQueue,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  uint uVar1;
  System_Object_array *pSVar2;
  UnityEngine_Material_o *pUVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_0754812a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    Il2CppMethodInitialized_0754812a = '\x01';
  }
  if (line != (UnityEngine_Transform_o *)0x0) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                       ((UnityEngine_Component_o *)line,
                        (MethodInfo_34B11B0 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar2->max_length;
      if (0 < (int)uVar1) {
        uVar4 = 0;
        do {
          if (uVar1 <= uVar4) {
            ThrowIndexOutOfRangeException();
          }
          __this_00 = (UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar4];
          if (__this_00 == (UnityEngine_Renderer_o *)0x0) goto label_05db64f4;
          pUVar3 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_05db64f4;
          UnityEngine_Material__set_color(pUVar3,color,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_05db64f4;
          UnityEngine_Material__set_renderQueue(pUVar3,renderQueue,(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
          uVar1 = (uint)pSVar2->max_length;
        } while ((int)uVar4 < (int)uVar1);
      }
      return;
    }
  }
label_05db64f4:
  ThrowNullReferenceException();
}


// MapEditor.ScaleGizmo$$.ctor
// il2cpp: void MapEditor_ScaleGizmo___ctor (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x5db6880

void MapEditor_ScaleGizmo___ctor(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  (__this->fields).SelectedColor.fields.r = 1.0;
  (__this->fields).SelectedColor.fields.g = 1.0;
  (__this->fields).SelectedColor.fields.b = 1.0;
  (__this->fields).SelectedColor.fields.a = 1.0;
  (__this->fields).LineXColor.fields.r = 1.0;
  (__this->fields).LineXColor.fields.g = 0.0;
  (__this->fields).LineXColor.fields.b = 0.0;
  (__this->fields).LineXColor.fields.a = 1.0;
  (__this->fields).LineYColor.fields.r = 1.0;
  (__this->fields).LineYColor.fields.g = 0.92156863;
  (__this->fields).LineYColor.fields.b = 0.015686275;
  (__this->fields).LineYColor.fields.a = 1.0;
  (__this->fields).LineZColor.fields.r = 0.0;
  (__this->fields).LineZColor.fields.g = 0.0;
  (__this->fields).LineZColor.fields.b = 1.0;
  (__this->fields).LineZColor.fields.a = 1.0;
  (__this->fields).CenterColor.fields.r = 0.47058824;
  (__this->fields).CenterColor.fields.g = 0.47058824;
  (__this->fields).CenterColor.fields.b = 0.47058824;
  (__this->fields).CenterColor.fields.a = 1.0;
  MapEditor_BaseGizmo___ctor((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.ScaleGizmo$$<Update>b__17_0
// il2cpp: bool MapEditor_ScaleGizmo___Update_b__17_0 (MapEditor_ScaleGizmo_o* __this, UnityEngine_RaycastHit_o hit, const MethodInfo* method);
// 0x5db68e0

bool MapEditor_ScaleGizmo___Update_b__17_0
               (MapEditor_ScaleGizmo_o *__this,UnityEngine_RaycastHit_o hit,MethodInfo *method)

{
  UnityEngine_Transform_o *y;
  bool bVar1;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Transform_o *x;
  
  if (Il2CppMethodInitialized_0754812b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754812b = '\x01';
  }
  __this_00 = UnityEngine_RaycastHit__get_collider(&hit,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  y = (__this->fields)._center;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  return bVar1;
}


