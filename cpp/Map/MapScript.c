// Type: Map.MapScript
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Map/MapScript.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScript.cs
// --------------------------------

// Map.MapScript$$get_LastUpgradeResult
// il2cpp: Map_MapVersionConversionResult_o* Map_MapScript__get_LastUpgradeResult (Map_MapScript_o* __this, const MethodInfo* method);
// 0x18058a570

Map_MapVersionConversionResult_o*
Map_MapScript__get_LastUpgradeResult(Map_MapScript_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)(*(uint64_t *)((char *)__this + 0x78));
}


// Map.MapScript$$set_LastUpgradeResult
// il2cpp: void Map_MapScript__set_LastUpgradeResult (Map_MapScript_o* __this, Map_MapVersionConversionResult_o* value, const MethodInfo* method);
// 0x180a37140

void
Map_MapScript__set_LastUpgradeResult(Map_MapScript_o* __this, Map_MapVersionConversionResult_o* value, MethodInfo* method)

{
  (*(uint64_t *)((char *)__this + 0x78)) = (System_Collections_Generic_IEnumerator_IProperty_TContainer___o *)value;
  Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)__this + 0x78)),value);
  return;
}


// Map.MapScript$$get_OriginalCSV
// il2cpp: System_String_o* Map_MapScript__get_OriginalCSV (Map_MapScript_o* __this, const MethodInfo* method);
// 0x18152f220

System_String_o*
Map_MapScript__get_OriginalCSV(Map_MapScript_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)__this[1].fields.m_Properties.fields._list;
}


// Map.MapScript$$set_OriginalCSV
// il2cpp: void Map_MapScript__set_OriginalCSV (Map_MapScript_o* __this, System_String_o* value, const MethodInfo* method);
// 0x18152f2f0

void
Map_MapScript__set_OriginalCSV(Map_MapScript_o* __this, System_String_o* value, MethodInfo* method)

{
  __this[1].fields.m_Properties.fields._list = (System_Collections_Generic_List_T__o *)value;
  Il2CppCodeGenWriteBarrier((void **)&__this[1].fields.m_Properties,value);
  return;
}


// Map.MapScript$$CreateDefault
// il2cpp: Map_MapScript_o* Map_MapScript__CreateDefault (const MethodInfo* method);
// 0x181eb5820

Map_MapScript_o * Map_MapScript__CreateDefault(MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_String_o *value;
  Map_MapScriptObjects_o *pMVar8;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar9;
  Map_MapScriptBaseObject_array *pMVar10;
  MethodInfo *pMVar11;
  Map_MapScript_o *__this;
  Map_MapScriptSceneObject_o *pMVar12;
  Map_MapScriptBasicMaterial_o *__this_00;
  Map_MapScriptBasicMaterial_o *pMVar13;
  Utility_Color255_o *__this_01;
  Map_MapScriptBaseObject_o *pMVar14;
  UnityEngine_Vector3_o *pUVar15;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_1843450f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapTextures);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&"Daylight");
    il2cpp_codegen_initialize_runtime_metadata(&"Grass6");
    il2cpp_codegen_initialize_runtime_metadata(&"Geometry/Cuboid");
    il2cpp_codegen_initialize_runtime_metadata(&"Basic");
    Il2CppMethodInitialized_1843450f2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
  Map_MapScript___ctor(__this,(MethodInfo *)0x0);
  pMVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(pMVar12,(MethodInfo *)0x0);
  if (pMVar12 != (Map_MapScriptSceneObject_o *)0x0) {
    (pMVar12->fields).Asset = "Geometry/Cuboid";
    Il2CppCodeGenWriteBarrier(&(pMVar12->fields).Asset,"Geometry/Cuboid");
    (pMVar12->fields).ScaleX = 100.0;
    (pMVar12->fields).PositionX = 0.0;
    (pMVar12->fields).PositionZ = 0.0;
    (pMVar12->fields).Id = 0;
    (pMVar12->fields).ScaleY = 5.0;
    (pMVar12->fields).ScaleZ = 100.0;
    (pMVar12->fields).PositionY = -25.0;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
    Map_MapScriptBasicMaterial___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Map_MapScriptBasicMaterial_o *)0x0) goto label_181eb5c68;
    (__this_00->fields).Shader = "Basic";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Shader,"Basic");
    if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
    }
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181eb5c68;
    pMVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar7,(Il2CppObject *)"Grass6",
                         (MethodInfo_147A5B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item
                        );
    if (pMVar13 == (Map_MapScriptBasicMaterial_o *)0x0) goto label_181eb5c68;
    value = (pMVar13->fields).Texture;
    (__this_00->fields).Texture = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Texture,value);
    (__this_00->fields).Tiling.fields.x = 25.0;
    (__this_00->fields).Tiling.fields.y = 25.0;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    local_28.r = 1.0;
    local_28.g = 1.0;
    local_28.b = 1.0;
    local_28.a = 1.0;
    Utility_Color255___ctor_23327a0(__this_01,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
    (__this_00->fields).Color = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Color,__this_01);
    (pMVar12->fields).Material = (Map_MapScriptBaseMaterial_o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(pMVar12->fields).Material,__this_00);
    pMVar11 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
    if (((__this == (Map_MapScript_o *)0x0) ||
        (pMVar8 = (__this->fields).Objects, pMVar8 == (Map_MapScriptObjects_o *)0x0)) ||
       (pSVar9 = (pMVar8->fields).Objects,
       pSVar9 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) goto label_181eb5c68;
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar10 = (pSVar9->fields)._items;
    if (pMVar10 == (Map_MapScriptBaseObject_array *)0x0) goto label_181eb5c68;
    uVar5 = (pSVar9->fields)._size;
    if (uVar5 < (uint)pMVar10->max_length) {
      (pSVar9->fields)._size = uVar5 + 1;
      if ((uint)pMVar10->max_length <= uVar5) goto label_181eb5c6e;
      pMVar10->m_Items[(int)uVar5] = (Map_MapScriptBaseObject_o *)pMVar12;
      Il2CppCodeGenWriteBarrier(pMVar10->m_Items + (int)uVar5,pMVar12);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pMVar12,
                 (MethodInfo_93DD50 *)pMVar11->klass->rgctx_data[0xe].method);
    }
    pMVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(pMVar12,(MethodInfo *)0x0);
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
    if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pMVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar7,(Il2CppObject *)"Daylight",
                           (MethodInfo_147A5B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                          );
      if (pMVar12 != (Map_MapScriptSceneObject_o *)0x0) {
        (*(pMVar12->klass->vtable)._10_Copy.methodPtr)
                  (pMVar12,(Utility_BaseCSVObject_o *)pMVar14,(pMVar12->klass->vtable)._10_Copy.method);
        (pMVar12->fields).PositionX = 0.0;
        (pMVar12->fields).PositionY = 20.0;
        (pMVar12->fields).PositionZ = 0.0;
        local_18.x = -0.2;
        local_18.y = -0.8;
        local_18.z = 0.4;
        local_18.w = -0.4;
        pUVar15 = UnityEngine_Quaternion__Internal_ToEulerRad
                            ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Quaternion_o *)&local_18,
                             (MethodInfo *)0x0);
        uVar3 = (pUVar15->fields).x;
        uVar4 = (pUVar15->fields).y;
        local_38.x = (float)uVar3 * 57.29578;
        local_38.y = (float)uVar4 * 57.29578;
        local_38.z = (pUVar15->fields).z * 57.29578;
        pUVar15 = UnityEngine_Quaternion__Internal_MakePositive
                            ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Vector3_o *)&local_38,
                             (MethodInfo *)0x0);
        fVar2 = (pUVar15->fields).z;
        fVar6 = (pUVar15->fields).x;
        (pMVar12->fields).RotationY = (pUVar15->fields).y;
        (pMVar12->fields).RotationZ = fVar2;
        (pMVar12->fields).RotationX = fVar6;
        (pMVar12->fields).Id = 1;
        pMVar11 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
        pMVar8 = (__this->fields).Objects;
        if ((pMVar8 != (Map_MapScriptObjects_o *)0x0) &&
           (pSVar9 = (pMVar8->fields).Objects,
           pSVar9 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
          piVar1 = &(pSVar9->fields)._version;
          *piVar1 = *piVar1 + 1;
          pMVar10 = (pSVar9->fields)._items;
          if (pMVar10 != (Map_MapScriptBaseObject_array *)0x0) {
            uVar5 = (pSVar9->fields)._size;
            if (uVar5 < (uint)pMVar10->max_length) {
              (pSVar9->fields)._size = uVar5 + 1;
              if ((uint)pMVar10->max_length <= uVar5) {
label_181eb5c6e:
                ThrowIndexOutOfRangeException();
              }
              pMVar10->m_Items[(int)uVar5] = (Map_MapScriptBaseObject_o *)pMVar12;
              Il2CppCodeGenWriteBarrier(pMVar10->m_Items + (int)uVar5,pMVar12);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pMVar12,
                         (MethodInfo_93DD50 *)pMVar11->klass->rgctx_data[0xe].method);
            }
            return __this;
          }
        }
      }
    }
  }
label_181eb5c68:
  ThrowNullReferenceException();
}


// Map.MapScript$$Serialize
// il2cpp: System_String_o* Map_MapScript__Serialize (Map_MapScript_o* __this, const MethodInfo* method);
// 0x181eb62e0

System_String_o * Map_MapScript__Serialize(Map_MapScript_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  Map_MapScriptOptions_o *pMVar4;
  Map_MapScriptCustomAssets_o *pMVar5;
  Map_MapScriptObjects_o *pMVar6;
  Settings_WeatherSet_o *pSVar7;
  MethodInfo *pMVar8;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar9;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  MethodInfo *pMVar10;
  
  if (Il2CppMethodInitialized_1843450f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"Objects");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAssets");
    il2cpp_codegen_initialize_runtime_metadata(&"Logic");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_1843450f3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar9 = System_String__Concat_1969e50
                     ((__this->fields).HeaderPrefix,"Options",(MethodInfo *)0x0);
  pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_181eb6885;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181eb688b;
      pSVar3->m_Items[(int)uVar2] = pSVar9;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                 (MethodInfo_93DD50 *)pMVar10->klass->rgctx_data[0xe].method);
    }
    pMVar4 = (__this->fields).Options;
    if (pMVar4 == (Map_MapScriptOptions_o *)0x0) goto label_181eb6885;
    pSVar9 = (*(pMVar4->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar4,(pMVar4->klass->vtable)._8_Serialize.method);
    pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (__this_00->fields)._items;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181eb6885;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181eb688b;
      pSVar3->m_Items[(int)uVar2] = pSVar9;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                 (MethodInfo_93DD50 *)pMVar10->klass->rgctx_data[0xe].method);
    }
    pSVar9 = System_String__Concat_1969e50
                       ((__this->fields).HeaderPrefix,"CustomAssets",(MethodInfo *)0x0);
    pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (__this_00->fields)._items;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181eb6885;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181eb688b;
      pSVar3->m_Items[(int)uVar2] = pSVar9;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                 (MethodInfo_93DD50 *)pMVar10->klass->rgctx_data[0xe].method);
    }
    pMVar5 = (__this->fields).CustomAssets;
    if (pMVar5 == (Map_MapScriptCustomAssets_o *)0x0) goto label_181eb6885;
    pSVar9 = (*(pMVar5->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar5,(pMVar5->klass->vtable)._8_Serialize.method);
    pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (__this_00->fields)._items;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181eb6885;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181eb688b;
      pSVar3->m_Items[(int)uVar2] = pSVar9;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                 (MethodInfo_93DD50 *)pMVar10->klass->rgctx_data[0xe].method);
    }
    pSVar9 = System_String__Concat_1969e50
                       ((__this->fields).HeaderPrefix,"Objects",(MethodInfo *)0x0);
    pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (__this_00->fields)._items;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181eb6885;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181eb688b;
      pSVar3->m_Items[(int)uVar2] = pSVar9;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                 (MethodInfo_93DD50 *)pMVar10->klass->rgctx_data[0xe].method);
    }
    pMVar6 = (__this->fields).Objects;
    if (pMVar6 == (Map_MapScriptObjects_o *)0x0) goto label_181eb6885;
    pSVar9 = (*(pMVar6->klass->vtable)._8_Serialize.methodPtr)
                       (pMVar6,(pMVar6->klass->vtable)._8_Serialize.method);
    pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (__this_00->fields)._items;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181eb6885;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181eb688b;
      pSVar3->m_Items[(int)uVar2] = pSVar9;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                 (MethodInfo_93DD50 *)pMVar10->klass->rgctx_data[0xe].method);
    }
    pSVar9 = System_String__Concat_1969e50
                       ((__this->fields).HeaderPrefix,"Logic",(MethodInfo *)0x0);
    pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (__this_00->fields)._items;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181eb6885;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181eb688b;
      pSVar3->m_Items[(int)uVar2] = pSVar9;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                 (MethodInfo_93DD50 *)pMVar10->klass->rgctx_data[0xe].method);
    }
    pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar9 = (__this->fields).Logic;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_181eb6885;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181eb688b;
      pSVar3->m_Items[(int)uVar2] = pSVar9;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                 (MethodInfo_93DD50 *)pMVar10->klass->rgctx_data[0xe].method);
    }
    pMVar10 = (MethodInfo *)0x0;
    pSVar9 = System_String__Concat_1969e50
                       ((__this->fields).HeaderPrefix,"Weather",(MethodInfo *)0x0);
    pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (__this_00->fields)._items;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181eb6885;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181eb688b;
      pSVar3->m_Items[(int)uVar2] = pSVar9;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar9);
    }
    else {
      pMVar10 = pMVar8->klass->rgctx_data[0xe].method;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                 (MethodInfo_93DD50 *)pMVar10);
    }
    pSVar7 = (__this->fields).Weather;
    if (pSVar7 != (Settings_WeatherSet_o *)0x0) {
      pSVar9 = (*(pSVar7->klass->vtable)._8_SerializeToJsonString.methodPtr)
                         (pSVar7,(pSVar7->klass->vtable)._8_SerializeToJsonString.method);
      pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
      pSVar3 = (__this_00->fields)._items;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      if (pSVar3 != (System_String_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) {
label_181eb688b:
            ThrowIndexOutOfRangeException();
          }
          pSVar3->m_Items[(int)uVar2] = pSVar9;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar9);
        }
        else {
          pMVar10 = pMVar8->klass->rgctx_data[0xe].method;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                     (MethodInfo_93DD50 *)pMVar10);
        }
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        pSVar9 = System_Char__ToString(&(__this->fields).Delimiter,(System_IFormatProvider_o *)0x0,pMVar10);
        value = System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_T__o *)__this_00,
                           (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        pSVar9 = System_String__Join(pSVar9,(System_String_array *)value,(MethodInfo *)0x0);
        return pSVar9;
      }
    }
  }
label_181eb6885:
  ThrowNullReferenceException();
}


// Map.MapScript$$CreateHeader
// il2cpp: System_String_o* Map_MapScript__CreateHeader (Map_MapScript_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181eb5c80

System_String_o *
Map_MapScript__CreateHeader(Map_MapScript_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = System_String__Concat_1969e50((__this->fields).HeaderPrefix,name,(MethodInfo *)0x0);
  return pSVar1;
}


// Map.MapScript$$Deserialize
// il2cpp: void Map_MapScript__Deserialize (Map_MapScript_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x181eb5f50
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb609c: mov r15, qword ptr [rip + 0x21c8e85]  ; ""
// asm:   0x181eb60a3: mov esi, r12d
// asm:   0x181eb60a6: mov eax, r12d
// asm:   0x181eb60a9: nop dword ptr [rax]

void Map_MapScript__Deserialize(Map_MapScript_o *__this,System_String_o *csv,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  System_Collections_Generic_List_string__o *currentSectionItems;
  System_String_o *pSVar5;
  System_Char_array *trimChars;
  System_String_o *pSVar6;
  Map_MapVersionConversionResult_o *value;
  Map_MapScript_o *pMVar7;
  Map_MapVersionConversionResult_o **targetAddress;
  uint uVar8;
  
  if (Il2CppMethodInitialized_1843450f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Logic");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843450f4 = '\x01';
  }
  uVar8 = 0;
  (__this->fields)._LastUpgradeResult_k__BackingField = (Map_MapVersionConversionResult_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._LastUpgradeResult_k__BackingField,(void *)0x0);
  (__this->fields)._OriginalCSV_k__BackingField = csv;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._OriginalCSV_k__BackingField,csv);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar3 = Utility_Util__CreateMD5(csv,(MethodInfo *)0x0);
  (__this->fields).MapHash = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapHash,pSVar3);
  bVar2 = Map_MapConverter__IsLegacy(csv,(MethodInfo *)0x0);
  if (bVar2) {
    pMVar7 = Map_MapConverter__Convert(csv,(MethodInfo *)0x0);
    if (pMVar7 != (Map_MapScript_o *)0x0) {
      value = (Map_MapVersionConversionResult_o *)(pMVar7->fields).Objects;
      targetAddress = (Map_MapVersionConversionResult_o **)&(__this->fields).Objects;
      (__this->fields).Objects = (Map_MapScriptObjects_o *)value;
      goto label_181eb6291;
    }
  }
  else if (csv != (System_String_o *)0x0) {
    pSVar4 = System_String__Split(csv,(__this->fields).Delimiter,0,(MethodInfo *)0x0);
    currentSectionItems =
         il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)currentSectionItems,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pSVar3 = "";
    if (pSVar4 != (System_String_array *)0x0) {
label_181eb60b0:
      if ((int)pSVar4->max_length <= (int)uVar8) goto label_181eb6256;
      if (uVar8 < (uint)pSVar4->max_length) {
        if ((pSVar4->m_Items[(int)uVar8] == (System_String_o *)0x0) ||
           (pSVar5 = System_String__Trim(pSVar4->m_Items[(int)uVar8],(MethodInfo *)0x0),
           pSVar5 == (System_String_o *)0x0)) goto label_181eb62d4;
        bVar2 = System_String__StartsWith(pSVar5,(__this->fields).HeaderPrefix,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar6 = (__this->fields).HeaderPrefix;
          if (pSVar6 == (System_String_o *)0x0) goto label_181eb62d4;
          pSVar6 = System_String__Substring(pSVar5,(pSVar6->fields)._stringLength,(MethodInfo *)0x0);
          bVar2 = System_String__op_Equality(pSVar6,"Logic",(MethodInfo *)0x0);
          if (bVar2) {
            (__this->fields).LogicStart = uVar8 + 1;
          }
          Map_MapScript__DeserializeSection(__this,pSVar3,currentSectionItems,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).HeaderPrefix;
          if ((pSVar3 == (System_String_o *)0x0) ||
             (pSVar3 = System_String__Substring(pSVar5,(pSVar3->fields)._stringLength,(MethodInfo *)0x0),
             currentSectionItems == (System_Collections_Generic_List_string__o *)0x0)) goto label_181eb62d4;
          length = (currentSectionItems->fields)._size;
          piVar1 = &(currentSectionItems->fields)._version;
          *piVar1 = *piVar1 + 1;
          (currentSectionItems->fields)._size = 0;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(currentSectionItems->fields)._items,0,length,
                                (MethodInfo *)0x0);
          }
          uVar8 = uVar8 + 1;
          goto label_181eb60b0;
        }
        bVar2 = System_String__op_Equality(pSVar3,"Logic",(MethodInfo *)0x0);
        if (!bVar2) {
          if (currentSectionItems == (System_Collections_Generic_List_string__o *)0x0) goto label_181eb62d4;
          il2cpp_runtime_helper_180012890(currentSectionItems);
          uVar8 = uVar8 + 1;
          goto label_181eb60b0;
        }
        if ((uint)pSVar4->max_length <= uVar8) goto label_181eb62da;
        pSVar5 = pSVar4->m_Items[(int)uVar8];
        trimChars = (System_Char_array *)SZArrayNew(TypeInfo_char_array,2);
        if (trimChars == (System_Char_array *)0x0) goto label_181eb62d4;
        if (((int)trimChars->max_length != 0) &&
           (trimChars->m_Items[0] = 0xd, 1 < (uint)trimChars->max_length)) {
          trimChars->m_Items[1] = 10;
          if ((pSVar5 == (System_String_o *)0x0) ||
             (System_String__Trim_19738f0(pSVar5,trimChars,(MethodInfo *)0x0),
             currentSectionItems == (System_Collections_Generic_List_string__o *)0x0)) goto label_181eb62d4;
          il2cpp_runtime_helper_180012890(currentSectionItems);
          uVar8 = uVar8 + 1;
          goto label_181eb60b0;
        }
      }
label_181eb62da:
      ThrowIndexOutOfRangeException();
    }
  }
label_181eb62d4:
  ThrowNullReferenceException();
label_181eb6256:
  Map_MapScript__DeserializeSection(__this,pSVar3,currentSectionItems,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapVersionConverter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter);
  }
  value = Map_MapVersionConverter__UpgradeToCurrent(__this,(MethodInfo *)0x0);
  (__this->fields)._LastUpgradeResult_k__BackingField = value;
  targetAddress = &(__this->fields)._LastUpgradeResult_k__BackingField;
label_181eb6291:
  Il2CppCodeGenWriteBarrier(targetAddress,value);
  return;
}


// Map.MapScript$$DeserializeSection
// il2cpp: void Map_MapScript__DeserializeSection (Map_MapScript_o* __this, System_String_o* currentSection, System_Collections_Generic_List_string__o* currentSectionItems, const MethodInfo* method);
// 0x181eb5c90
// eh: try 0x181eb5d13..0x181eb5eaa -> pad 0x183331fa0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 67 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb5e3e: jmp 0x181eb5e49
// asm:   0x181eb5e7a: nop 
// asm:   0x181eb5eaa: lea rcx, [rsp + 0x40]
// asm:   0x181eb5eaf: call 0x180012a10  ; il2cpp_runtime_helper_180012a10()
// asm:   0x181eb5eb4: mov rsi, rax
// asm:   0x181eb5eb7: mov rcx, rax
// asm:   0x181eb5eba: call 0x180001e10  ; NullCheck()
// asm:   0x181eb5ebf: mov ecx, 3
// asm:   0x181eb5ec4: mov rdx, rsi
// asm:   0x181eb5ec7: call 0x180003110  ; il2cpp_runtime_helper_180003110()
// asm:   0x181eb5ecc: mov rdi, rax
// asm:   0x181eb5ecf: lea rcx, [rip + 0x2241692]  ; ": "
// asm:   0x181eb5ed6: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eb5edb: mov rbx, rax
// asm:   0x181eb5ede: lea rcx, [rip + 0x221806b]  ; "Error deserializing MapScript section "
// asm:   0x181eb5ee5: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eb5eea: mov rcx, rax
// asm:   0x181eb5eed: mov qword ptr [rsp + 0x20], 0
// asm:   0x181eb5ef6: mov r9, rdi
// asm:   0x181eb5ef9: mov r8, rbx
// asm:   0x181eb5efc: mov rdx, qword ptr [rsp + 0x88]
// asm:   0x181eb5f04: call 0x181969590  ; System_String__Concat()
// asm:   0x181eb5f09: mov rbx, rax
// asm:   0x181eb5f0c: lea rcx, [rip + 0x2245525]  ; TypeInfo_UnityEngine_Debug
// asm:   0x181eb5f13: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eb5f18: mov rcx, rax
// asm:   0x181eb5f1b: call 0x180001e40  ; il2cpp_codegen_runtime_class_init_inline()
// asm:   0x181eb5f20: xor edx, edx
// asm:   0x181eb5f22: mov rcx, rbx
// asm:   0x181eb5f25: call 0x182ec3130  ; UnityEngine_Debug__LogError()
// asm:   0x181eb5f2a: lea rcx, [rip + 0x21c9447]  ; MethodInfo_Map_MapScript_DeserializeSection
// asm:   0x181eb5f31: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eb5f36: mov rdx, rax
// asm:   0x181eb5f39: mov rcx, rsi
// asm:   0x181eb5f3c: call 0x1804170e0  ; il2cpp_codegen_raise_exception()
// asm:   0x183331fa0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331fa5: push rbx
// asm:   0x183331fa6: push rbp
// asm:   0x183331fa7: push rdi
// asm:   0x183331fa8: sub rsp, 0x30
// asm:   0x183331fac: mov rbp, rdx
// asm:   0x183331faf: mov rdi, qword ptr [rbp + 0x38]
// asm:   0x183331fb3: mov rax, qword ptr [rdi]
// asm:   0x183331fb6: mov rbx, qword ptr [rax]
// asm:   0x183331fb9: lea rcx, [rip + 0xd46f98]  ; TypeInfo_System_Exception
// asm:   0x183331fc0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183331fc5: mov rcx, rax
// asm:   0x183331fc8: mov rdx, rbx
// asm:   0x183331fcb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331fd0: test al, al
// asm:   0x183331fd2: je 0x183331fed
// asm:   0x183331fd4: mov rdx, qword ptr [rdi]
// asm:   0x183331fd7: lea rcx, [rbp + 0x40]
// asm:   0x183331fdb: call 0x180012a00  ; il2cpp_runtime_helper_180012a00()
// asm:   0x183331fe0: nop 
// asm:   0x183331fe1: movabs rax, 0
// asm:   0x183331feb: jmp 0x183332005
// asm:   0x183331fed: mov rax, qword ptr [rdi]
// asm:   0x183331ff0: mov qword ptr [rbp + 0x30], rax
// asm:   0x183331ff4: lea rdx, [rip + 0xca9f8d]
// asm:   0x183331ffb: lea rcx, [rbp + 0x30]
// asm:   0x183331fff: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183332005: add rsp, 0x30
// asm:   0x183332009: pop rdi
// asm:   0x18333200a: pop rbp
// asm:   0x18333200b: pop rbx
// asm:   0x18333200c: ret 

void Map_MapScript__DeserializeSection
               (Map_MapScript_o *__this,System_String_o *currentSection,
               System_Collections_Generic_List_string__o *currentSectionItems,MethodInfo *method)

{
  Settings_WeatherSet_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  Map_MapScriptOptions_o *pMVar2;
  bool bVar3;
  System_String_o *pSVar4;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  Map_MapScriptCustomAssets_o *pMVar5;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)currentSectionItems;
  if (Il2CppMethodInitialized_1843450f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"Objects");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAssets");
    il2cpp_codegen_initialize_runtime_metadata(&"Logic");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_1843450f5 = '\x01';
  }
  if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e48);
  }
  pSVar4 = System_Char__ToString(&(__this->fields).Delimiter,(System_IFormatProvider_o *)0x0,method_00);
  if (currentSectionItems == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  value = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                    ((System_Collections_Generic_List_T__o *)currentSectionItems,
                     (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  pSVar4 = System_String__Join(pSVar4,(System_String_array *)value,(MethodInfo *)0x0);
  bVar3 = System_String__op_Equality(currentSection,"Options",(MethodInfo *)0x0);
  if (bVar3) {
    pMVar2 = (__this->fields).Options;
    if (pMVar2 == (Map_MapScriptOptions_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pMVar2->klass->vtable)._9_Deserialize.methodPtr)
              (pMVar2,pSVar4,(pMVar2->klass->vtable)._9_Deserialize.method);
  }
  else {
    bVar3 = System_String__op_Equality(currentSection,"CustomAssets",(MethodInfo *)0x0);
    if (bVar3) {
      pMVar5 = (__this->fields).CustomAssets;
      if (pMVar5 == (Map_MapScriptCustomAssets_o *)0x0) {
        ThrowNullReferenceException();
      }
    }
    else {
      bVar3 = System_String__op_Equality(currentSection,"Objects",(MethodInfo *)0x0);
      if (!bVar3) {
        bVar3 = System_String__op_Equality(currentSection,"Logic",(MethodInfo *)0x0);
        if (bVar3) {
          (__this->fields).Logic = pSVar4;
          Il2CppCodeGenWriteBarrier(&(__this->fields).Logic,pSVar4);
          return;
        }
        bVar3 = System_String__op_Equality(currentSection,"Weather",(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        pSVar1 = (__this->fields).Weather;
        if (pSVar1 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(pSVar1->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                  (pSVar1,pSVar4,(pSVar1->klass->vtable)._9_DeserializeFromJsonString.method);
        pSVar1 = (__this->fields).Weather;
        if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
          __this_00 = (pSVar1->fields).Preset;
          if (__this_00 != (Settings_BoolSetting_o *)0x0) {
            Settings_TypedSetting_bool___set_Value
                      ((Settings_TypedSetting_bool__o *)__this_00,false,
                       (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
            return;
          }
          ThrowNullReferenceException();
        }
        ThrowNullReferenceException();
      }
      pMVar5 = (Map_MapScriptCustomAssets_o *)(__this->fields).Objects;
      if (pMVar5 == (Map_MapScriptCustomAssets_o *)0x0) {
        ThrowNullReferenceException();
      }
    }
    (*(((Map_MapScriptObjects_c *)pMVar5->klass)->vtable)._9_Deserialize.methodPtr)
              (pMVar5,pSVar4,(((Map_MapScriptObjects_c *)pMVar5->klass)->vtable)._9_Deserialize.method);
  }
  return;
}


// Map.MapScript$$.ctor
// il2cpp: void Map_MapScript___ctor (Map_MapScript_o* __this, const MethodInfo* method);
// 0x181eb68a0

void Map_MapScript___ctor(Map_MapScript_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Map_MapScriptOptions_o *__this_00;
  Map_MapScriptCustomAssets_o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  Map_MapScriptObjects_o *__this_03;
  Settings_WeatherSet_o *__this_04;
  
  if (Il2CppMethodInitialized_1843450f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptCustomAssets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptOptions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSet);
    il2cpp_codegen_initialize_runtime_metadata(&"/// ");
    Il2CppMethodInitialized_1843450f6 = '\x01';
  }
  (__this->fields).HeaderPrefix = "/// ";
  Il2CppCodeGenWriteBarrier(&(__this->fields).HeaderPrefix,"/// ");
  (__this->fields).Delimiter = 10;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptOptions);
  Map_MapScriptOptions___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Options = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Options,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptCustomAssets);
  if (Il2CppMethodInitialized_1843450f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_1843450f9 = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this_01->fields).CustomAssets = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).CustomAssets,__this_02);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)__this_01,(MethodInfo *)0x0);
  (__this->fields).CustomAssets = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomAssets,__this_01);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_03,(MethodInfo *)0x0);
  (__this->fields).Objects = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Objects,__this_03);
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSet);
  Settings_WeatherSet___ctor(__this_04,(MethodInfo *)0x0);
  (__this->fields).Weather = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Weather,__this_04);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields).Logic = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Logic,pSVar1);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields).MapHash = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapHash,pSVar1);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


