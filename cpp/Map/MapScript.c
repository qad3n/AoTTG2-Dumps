// Type: Map.MapScript
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Map/MapScript.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScript.cs
// --------------------------------

// Map.MapScript.<>c__DisplayClass21_0$$.ctor
// il2cpp: void Map_MapScript___c__DisplayClass21_0___ctor (Map_MapScript___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x59a2ab0

void Map_MapScript___c__DisplayClass21_0___ctor
               (Map_MapScript___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapScript.<>c__DisplayClass21_0$$<Deserialize>b__0
// il2cpp: void Map_MapScript___c__DisplayClass21_0___Deserialize_b__0 (Map_MapScript___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x59a2f50

void Map_MapScript___c__DisplayClass21_0___Deserialize_b__0
               (Map_MapScript___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  Map_MapScript_o *pMVar1;
  Map_MapScript_o *pMVar2;
  
  pMVar1 = (__this->fields).__4__this;
  pMVar2 = Map_MapConverter__Convert((__this->fields).csv,(MethodInfo *)0x0);
  if ((pMVar2 == (Map_MapScript_o *)0x0) || (pMVar1 == (Map_MapScript_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pMVar1->fields).Objects = (pMVar2->fields).Objects;
  Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Objects);
  return;
}


// Map.MapScript.<>c__DisplayClass21_0$$<Deserialize>b__1
// il2cpp: void Map_MapScript___c__DisplayClass21_0___Deserialize_b__1 (Map_MapScript___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x59a2f90

void Map_MapScript___c__DisplayClass21_0___Deserialize_b__1
               (Map_MapScript___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  Map_MapScript_o *mapScript;
  Map_MapVersionConversionResult_o *pMVar1;
  
  if (Il2CppMethodInitialized_07545a8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter);
    Il2CppMethodInitialized_07545a8f = '\x01';
  }
  mapScript = (__this->fields).__4__this;
  if ((TypeInfo_Map_MapVersionConverter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter);
  }
  pMVar1 = Map_MapVersionConverter__UpgradeToCurrent(mapScript,method);
  if (mapScript == (Map_MapScript_o *)0x0) {
    ThrowNullReferenceException();
  }
  (mapScript->fields)._LastUpgradeResult_k__BackingField = pMVar1;
  Il2CppCodeGenWriteBarrier(&(mapScript->fields)._LastUpgradeResult_k__BackingField);
  return;
}


// Map.MapScript.<>c__DisplayClass22_0$$.ctor
// il2cpp: void Map_MapScript___c__DisplayClass22_0___ctor (Map_MapScript___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x59a2dd0

void Map_MapScript___c__DisplayClass22_0___ctor
               (Map_MapScript___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapScript.<>c__DisplayClass22_0$$<DeserializeSection>b__0
// il2cpp: void Map_MapScript___c__DisplayClass22_0___DeserializeSection_b__0 (Map_MapScript___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x59a3510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a359b: jmp 0x59a36ec

void Map_MapScript___c__DisplayClass22_0___DeserializeSection_b__0
               (Map_MapScript___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  Map_MapScript_o *pMVar1;
  Map_MapScriptOptions_o *pMVar2;
  Map_MapScriptObjects_o *__this_00;
  Settings_WeatherSet_o *pSVar3;
  Settings_BoolSetting_o *__this_01;
  bool bVar4;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07545a90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"Objects");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAssets");
    il2cpp_codegen_initialize_runtime_metadata(&"Logic");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_07545a90 = '\x01';
  }
  bVar4 = System_String__op_Equality((__this->fields).currentSection,"Options",(MethodInfo *)0x0);
  if (bVar4) {
    pMVar1 = (__this->fields).__4__this;
    if (pMVar1 == (Map_MapScript_o *)0x0) goto label_059a36ec;
    pMVar2 = (pMVar1->fields).Options;
  }
  else {
    bVar4 = System_String__op_Equality
                      ((__this->fields).currentSection,"CustomAssets",(MethodInfo *)0x0);
    if (bVar4) {
      pMVar1 = (__this->fields).__4__this;
      if (pMVar1 == (Map_MapScript_o *)0x0) goto label_059a36ec;
      pMVar2 = (Map_MapScriptOptions_o *)(pMVar1->fields).CustomAssets;
    }
    else {
      bVar4 = System_String__op_Equality
                        ((__this->fields).currentSection,"Objects",(MethodInfo *)0x0);
      if (!bVar4) {
        bVar4 = System_String__op_Equality
                          ((__this->fields).currentSection,"Logic",(MethodInfo *)0x0);
        if (bVar4) {
          pMVar1 = (__this->fields).__4__this;
          if (pMVar1 != (Map_MapScript_o *)0x0) {
            (pMVar1->fields).Logic = (__this->fields).currentSectionCSV;
            Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Logic);
            return;
          }
        }
        else {
          bVar4 = System_String__op_Equality
                            ((__this->fields).currentSection,"Weather",(MethodInfo *)0x0);
          if (!bVar4) {
            return;
          }
          pMVar1 = (__this->fields).__4__this;
          if ((pMVar1 != (Map_MapScript_o *)0x0) &&
             (pSVar3 = (pMVar1->fields).Weather, pSVar3 != (Settings_WeatherSet_o *)0x0)) {
            (*(pSVar3->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                      (pSVar3,(__this->fields).currentSectionCSV,
                       (pSVar3->klass->vtable)._9_DeserializeFromJsonString.method);
            pMVar1 = (__this->fields).__4__this;
            if ((pMVar1 != (Map_MapScript_o *)0x0) &&
               ((pSVar3 = (pMVar1->fields).Weather, pSVar3 != (Settings_WeatherSet_o *)0x0 &&
                (__this_01 = (pSVar3->fields).Preset, __this_01 != (Settings_BoolSetting_o *)0x0)))) {
              Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)__this_01,false,
                         (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
              return;
            }
          }
        }
        goto label_059a36ec;
      }
      pMVar1 = (__this->fields).__4__this;
      if ((__this->fields).skipErrors != false) {
        if ((pMVar1 != (Map_MapScript_o *)0x0) &&
           (__this_00 = (pMVar1->fields).Objects, __this_00 != (Map_MapScriptObjects_o *)0x0)) {
          Map_MapScriptObjects__DeserializeSkippingErrors
                    (__this_00,(__this->fields).currentSectionCSV,(pMVar1->fields).Errors,in_RCX);
          return;
        }
        goto label_059a36ec;
      }
      if (pMVar1 == (Map_MapScript_o *)0x0) goto label_059a36ec;
      pMVar2 = (Map_MapScriptOptions_o *)(pMVar1->fields).Objects;
    }
  }
  if (pMVar2 != (Map_MapScriptOptions_o *)0x0) {
    (*(pMVar2->klass->vtable)._9_Deserialize.methodPtr)
              (pMVar2,(__this->fields).currentSectionCSV,(pMVar2->klass->vtable)._9_Deserialize.method);
    return;
  }
label_059a36ec:
  ThrowNullReferenceException();
}


// Map.MapScript$$get_LastUpgradeResult
// il2cpp: Map_MapVersionConversionResult_o* Map_MapScript__get_LastUpgradeResult (Map_MapScript_o* __this, const MethodInfo* method);
// 0x59a1d60

Map_MapVersionConversionResult_o *
Map_MapScript__get_LastUpgradeResult(Map_MapScript_o *__this,MethodInfo *method)

{
  return (__this->fields)._LastUpgradeResult_k__BackingField;
}


// Map.MapScript$$set_LastUpgradeResult
// il2cpp: void Map_MapScript__set_LastUpgradeResult (Map_MapScript_o* __this, Map_MapVersionConversionResult_o* value, const MethodInfo* method);
// 0x59a1d70

void Map_MapScript__set_LastUpgradeResult
               (Map_MapScript_o *__this,Map_MapVersionConversionResult_o *value,MethodInfo *method)

{
  (__this->fields)._LastUpgradeResult_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._LastUpgradeResult_k__BackingField);
  return;
}


// Map.MapScript$$get_OriginalCSV
// il2cpp: System_String_o* Map_MapScript__get_OriginalCSV (Map_MapScript_o* __this, const MethodInfo* method);
// 0x59a1d80

System_String_o * Map_MapScript__get_OriginalCSV(Map_MapScript_o *__this,MethodInfo *method)

{
  return (__this->fields)._OriginalCSV_k__BackingField;
}


// Map.MapScript$$set_OriginalCSV
// il2cpp: void Map_MapScript__set_OriginalCSV (Map_MapScript_o* __this, System_String_o* value, const MethodInfo* method);
// 0x59a1d90

void Map_MapScript__set_OriginalCSV(Map_MapScript_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._OriginalCSV_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._OriginalCSV_k__BackingField);
  return;
}


// Map.MapScript$$CreateDefault
// il2cpp: Map_MapScript_o* Map_MapScript__CreateDefault (const MethodInfo* method);
// 0x59a0db0

Map_MapScript_o * Map_MapScript__CreateDefault(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Map_MapScriptObjects_o *pMVar4;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar5;
  Map_MapScriptBaseObject_array *pMVar6;
  Map_MapScript_o *__this;
  Map_MapScriptSceneObject_o *__this_00;
  Map_MapScriptBasicMaterial_o *__this_01;
  Map_MapScriptBasicMaterial_o *pMVar7;
  Utility_Color255_o *__this_02;
  Map_MapScriptSceneObject_o *__this_03;
  Map_MapScriptBaseObject_o *pMVar8;
  MethodInfo *in_RSI;
  MethodInfo *pMVar9;
  UnityEngine_Color_o color;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_Fields local_38;
  
  if (Il2CppMethodInitialized_07545a8a == '\0') {
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
    Il2CppMethodInitialized_07545a8a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
  Map_MapScript___ctor(__this,in_RSI);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,in_RSI);
  pMVar9 = (MethodInfo *)"Geometry/Cuboid";
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    (__this_00->fields).Asset = "Geometry/Cuboid";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Asset);
    (__this_00->fields).ScaleX = 100.0;
    (__this_00->fields).ScaleY = 5.0;
    (__this_00->fields).ScaleZ = 100.0;
    (__this_00->fields).PositionX = 0.0;
    (__this_00->fields).PositionY = -25.0;
    (__this_00->fields).PositionZ = 0.0;
    (__this_00->fields).Id = 0;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
    Map_MapScriptBasicMaterial___ctor(__this_01,pMVar9);
    if (__this_01 != (Map_MapScriptBasicMaterial_o *)0x0) {
      (__this_01->fields).Shader = "Basic";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).Shader);
      if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pMVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar3,(Il2CppObject *)"Grass6",
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item
                           );
        if (pMVar7 != (Map_MapScriptBasicMaterial_o *)0x0) {
          (__this_01->fields).Texture = (pMVar7->fields).Texture;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).Texture);
          (__this_01->fields).Tiling.fields = (UnityEngine_Vector2_Fields)0x41c8000041c80000;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          color.fields.b = 1.0;
          color.fields.a = 1.0;
          color.fields.r = 1.0;
          color.fields.g = 1.0;
          Utility_Color255___ctor_5ce7790(__this_02,color,(MethodInfo *)0x0);
          (__this_01->fields).Color = __this_02;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).Color);
          (__this_00->fields).Material = (Map_MapScriptBaseMaterial_o *)__this_01;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Material);
          pMVar9 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
          if (((__this != (Map_MapScript_o *)0x0) &&
              (pMVar4 = (__this->fields).Objects, pMVar4 != (Map_MapScriptObjects_o *)0x0)) &&
             (pSVar5 = (pMVar4->fields).Objects,
             pSVar5 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pMVar6 = (pSVar5->fields)._items;
            if (pMVar6 != (Map_MapScriptBaseObject_array *)0x0) {
              uVar2 = (pSVar5->fields)._size;
              if (uVar2 < (uint)pMVar6->max_length) {
                (pSVar5->fields)._size = uVar2 + 1;
                pMVar6->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)__this_00;
                Il2CppCodeGenWriteBarrier(pMVar6->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                           (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
              }
              __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
              Map_MapScriptSceneObject___ctor(__this_03,(MethodInfo *)__this_00);
              if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
              }
              pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
              if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pMVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar3,(Il2CppObject *)"Daylight",
                                    (MethodInfo_4AAD450 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                   );
                if (__this_03 != (Map_MapScriptSceneObject_o *)0x0) {
                  (*(__this_03->klass->vtable)._10_Copy.methodPtr)
                            (__this_03,(Utility_BaseCSVObject_o *)pMVar8,
                             (__this_03->klass->vtable)._10_Copy.method);
                  (__this_03->fields).PositionX = 0.0;
                  (__this_03->fields).PositionY = 20.0;
                  (__this_03->fields).PositionZ = 0.0;
                  local_38.x = -0.2;
                  local_38.y = -0.8;
                  local_38.z = 0.4;
                  local_38.w = -0.4;
                  UVar10 = UnityEngine_Quaternion__Internal_ToEulerRad
                                     ((UnityEngine_Quaternion_o *)&local_38,(MethodInfo *)0x0);
                  euler.fields.x = UVar10.fields.x * 57.29578;
                  euler.fields.y = UVar10.fields.y * 57.29578;
                  euler.fields.z = UVar10.fields.z * 57.29578;
                  UVar10 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
                  (__this_03->fields).RotationX = UVar10.fields.x;
                  (__this_03->fields).RotationY = UVar10.fields.y;
                  (__this_03->fields).RotationZ = UVar10.fields.z;
                  (__this_03->fields).Id = 1;
                  pMVar9 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
                  pMVar4 = (__this->fields).Objects;
                  if ((pMVar4 != (Map_MapScriptObjects_o *)0x0) &&
                     (pSVar5 = (pMVar4->fields).Objects,
                     pSVar5 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
                    piVar1 = &(pSVar5->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pMVar6 = (pSVar5->fields)._items;
                    if (pMVar6 != (Map_MapScriptBaseObject_array *)0x0) {
                      uVar2 = (pSVar5->fields)._size;
                      if (uVar2 < (uint)pMVar6->max_length) {
                        (pSVar5->fields)._size = uVar2 + 1;
                        pMVar6->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)__this_03;
                        Il2CppCodeGenWriteBarrier(pMVar6->m_Items + (int)uVar2);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar5,
                                   (Il2CppObject *)__this_03,
                                   (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
                      }
                      return __this;
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


// Map.MapScript$$Serialize
// il2cpp: System_String_o* Map_MapScript__Serialize (Map_MapScript_o* __this, const MethodInfo* method);
// 0x59a2030
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a24fc: jmp 0x59a252f

System_String_o * Map_MapScript__Serialize(Map_MapScript_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint32_t uVar3;
  Map_MapScriptOptions_o *pMVar4;
  Map_MapScriptCustomAssets_o *pMVar5;
  Map_MapScriptObjects_o *pMVar6;
  Settings_WeatherSet_o *pSVar7;
  MethodInfo *pMVar8;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar9;
  System_String_array *pSVar10;
  
  if (Il2CppMethodInitialized_07545a8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"Objects");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAssets");
    il2cpp_codegen_initialize_runtime_metadata(&"Logic");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_07545a8b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar9 = System_String__Concat_52f0320
                     ((__this->fields).HeaderPrefix,"Options",(MethodInfo *)0x0);
  pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (__this_00->fields)._items;
    if (pSVar10 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar10->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar10->m_Items[(int)uVar2] = pSVar9;
        Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                   (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
      }
      pMVar4 = (__this->fields).Options;
      if (pMVar4 != (Map_MapScriptOptions_o *)0x0) {
        pSVar9 = (*(pMVar4->klass->vtable)._8_Serialize.methodPtr)
                           (pMVar4,(pMVar4->klass->vtable)._8_Serialize.method);
        pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar10 = (__this_00->fields)._items;
        if (pSVar10 != (System_String_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar10->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar10->m_Items[(int)uVar2] = pSVar9;
            Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                       (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          pSVar9 = System_String__Concat_52f0320
                             ((__this->fields).HeaderPrefix,"CustomAssets",(MethodInfo *)0x0);
          pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar10 = (__this_00->fields)._items;
          if (pSVar10 != (System_String_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar10->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar10->m_Items[(int)uVar2] = pSVar9;
              Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                         (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
            }
            pMVar5 = (__this->fields).CustomAssets;
            if (pMVar5 != (Map_MapScriptCustomAssets_o *)0x0) {
              pSVar9 = (*(pMVar5->klass->vtable)._8_Serialize.methodPtr)
                                 (pMVar5,(pMVar5->klass->vtable)._8_Serialize.method);
              pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar10 = (__this_00->fields)._items;
              if (pSVar10 != (System_String_array *)0x0) {
                uVar2 = (__this_00->fields)._size;
                if (uVar2 < (uint)pSVar10->max_length) {
                  (__this_00->fields)._size = uVar2 + 1;
                  pSVar10->m_Items[(int)uVar2] = pSVar9;
                  Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                             (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                }
                pSVar9 = System_String__Concat_52f0320
                                   ((__this->fields).HeaderPrefix,"Objects",(MethodInfo *)0x0);
                pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
                piVar1 = &(__this_00->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar10 = (__this_00->fields)._items;
                if (pSVar10 != (System_String_array *)0x0) {
                  uVar2 = (__this_00->fields)._size;
                  if (uVar2 < (uint)pSVar10->max_length) {
                    (__this_00->fields)._size = uVar2 + 1;
                    pSVar10->m_Items[(int)uVar2] = pSVar9;
                    Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                               (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                  }
                  pMVar6 = (__this->fields).Objects;
                  if (pMVar6 != (Map_MapScriptObjects_o *)0x0) {
                    pSVar9 = (*(pMVar6->klass->vtable)._8_Serialize.methodPtr)
                                       (pMVar6,(pMVar6->klass->vtable)._8_Serialize.method);
                    pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
                    piVar1 = &(__this_00->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar10 = (__this_00->fields)._items;
                    if (pSVar10 != (System_String_array *)0x0) {
                      uVar2 = (__this_00->fields)._size;
                      if (uVar2 < (uint)pSVar10->max_length) {
                        (__this_00->fields)._size = uVar2 + 1;
                        pSVar10->m_Items[(int)uVar2] = pSVar9;
                        Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_00,
                                   (Il2CppObject *)pSVar9,
                                   (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                      }
                      pSVar9 = System_String__Concat_52f0320
                                         ((__this->fields).HeaderPrefix,"Logic",
                                          (MethodInfo *)0x0);
                      pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
                      piVar1 = &(__this_00->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar10 = (__this_00->fields)._items;
                      if (pSVar10 != (System_String_array *)0x0) {
                        uVar2 = (__this_00->fields)._size;
                        if (uVar2 < (uint)pSVar10->max_length) {
                          (__this_00->fields)._size = uVar2 + 1;
                          pSVar10->m_Items[(int)uVar2] = pSVar9;
                          Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_00,
                                     (Il2CppObject *)pSVar9,
                                     (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                        }
                        pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
                        pSVar9 = (__this->fields).Logic;
                        piVar1 = &(__this_00->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar10 = (__this_00->fields)._items;
                        if (pSVar10 != (System_String_array *)0x0) {
                          uVar2 = (__this_00->fields)._size;
                          if (uVar2 < (uint)pSVar10->max_length) {
                            (__this_00->fields)._size = uVar2 + 1;
                            pSVar10->m_Items[(int)uVar2] = pSVar9;
                            Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_00,
                                       (Il2CppObject *)pSVar9,
                                       (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                          }
                          pSVar9 = System_String__Concat_52f0320
                                             ((__this->fields).HeaderPrefix,"Weather",
                                              (MethodInfo *)0x0);
                          pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
                          piVar1 = &(__this_00->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar10 = (__this_00->fields)._items;
                          if (pSVar10 != (System_String_array *)0x0) {
                            uVar2 = (__this_00->fields)._size;
                            if (uVar2 < (uint)pSVar10->max_length) {
                              (__this_00->fields)._size = uVar2 + 1;
                              pSVar10->m_Items[(int)uVar2] = pSVar9;
                              Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)__this_00,
                                         (Il2CppObject *)pSVar9,
                                         (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                            }
                            pSVar7 = (__this->fields).Weather;
                            if (pSVar7 != (Settings_WeatherSet_o *)0x0) {
                              pSVar9 = (*(pSVar7->klass->vtable)._8_SerializeToJsonString.methodPtr)
                                                 (pSVar7,(pSVar7->klass->vtable)._8_SerializeToJsonString.
                                                         method);
                              pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
                              piVar1 = &(__this_00->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar10 = (__this_00->fields)._items;
                              if (pSVar10 != (System_String_array *)0x0) {
                                uVar2 = (__this_00->fields)._size;
                                if (uVar2 < (uint)pSVar10->max_length) {
                                  (__this_00->fields)._size = uVar2 + 1;
                                  pSVar10->m_Items[(int)uVar2] = pSVar9;
                                  Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
                                  uVar3 = (g_data_07556750->_2).cctor_finished_or_no_cctor;
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize
                                            ((System_Collections_Generic_List_object__o *)__this_00,
                                             (Il2CppObject *)pSVar9,
                                             (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
                                  uVar3 = (g_data_07556750->_2).cctor_finished_or_no_cctor;
                                }
                                if (uVar3 == 0) {
                                  il2cpp_codegen_runtime_class_init(g_data_07556750);
                                }
                                pSVar9 = System_Char__ToString(&(__this->fields).Delimiter,(MethodInfo *)0x0);
                                pSVar10 = (System_String_array *)
                                          System_Collections_Generic_List_object___ToArray
                                                    ((System_Collections_Generic_List_object__o *)__this_00,
                                                     (MethodInfo_395F5A0 *)
                                                     MethodInfo_System_Collections_Generic_List_string_ToArray
                                                    );
                                pSVar9 = System_String__Join(pSVar9,pSVar10,(MethodInfo *)0x0);
                                return pSVar9;
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
    }
  }
  ThrowNullReferenceException();
}


// Map.MapScript$$CreateHeader
// il2cpp: System_String_o* Map_MapScript__CreateHeader (Map_MapScript_o* __this, System_String_o* name, const MethodInfo* method);
// 0x59a2570

System_String_o *
Map_MapScript__CreateHeader(Map_MapScript_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = System_String__Concat_52f0320((__this->fields).HeaderPrefix,name,(MethodInfo *)0x0);
  return pSVar1;
}


// Map.MapScript$$Deserialize
// il2cpp: void Map_MapScript__Deserialize (Map_MapScript_o* __this, System_String_o* csv, bool skipErrors, const MethodInfo* method);
// 0x59a2580
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a27e6: mov r14, r15

void Map_MapScript__Deserialize
               (Map_MapScript_o *__this,System_String_o *csv,bool skipErrors,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  int iVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  uint uVar7;
  Map_MapScript___c__DisplayClass21_0_o *__this_00;
  System_String_o *pSVar8;
  System_String_array *pSVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  System_String_o *pSVar11;
  System_Char_array *trimChars;
  System_Action_o *__this_01;
  MethodInfo *in_R8;
  uint uVar12;
  System_String_o **ppSVar13;
  MethodInfo **ppMVar14;
  System_String_o *pSStack_48;
  
  if (Il2CppMethodInitialized_07545a8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapScript_c__DisplayClass21_0_Deserialize_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapScript_c__DisplayClass21_0_Deserialize_b__1)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript_c__DisplayClass21_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Legacy");
    il2cpp_codegen_initialize_runtime_metadata(&"Logic");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Version");
    Il2CppMethodInitialized_07545a8c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript_c__DisplayClass21_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Map_MapScript___c__DisplayClass21_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    ppSVar13 = &(__this_00->fields).csv;
    (__this_00->fields).csv = csv;
    Il2CppCodeGenWriteBarrier(ppSVar13);
    pSVar10 = (__this->fields).Errors;
    if (pSVar10 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(pSVar10->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pSVar10->fields)._size;
      (pSVar10->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      (__this->fields)._LastUpgradeResult_k__BackingField = (Map_MapVersionConversionResult_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._LastUpgradeResult_k__BackingField);
      (__this->fields)._OriginalCSV_k__BackingField = *ppSVar13;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._OriginalCSV_k__BackingField);
      pSVar8 = *ppSVar13;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pSVar8 = Utility_Util__CreateMD5(pSVar8,(MethodInfo *)0x0);
      (__this->fields).MapHash = pSVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields).MapHash);
      bVar6 = Map_MapConverter__IsLegacy(*ppSVar13,(MethodInfo *)0x0);
      if (bVar6) {
        ppSVar13 = &"Legacy";
        ppMVar14 = &MethodInfo_Map_MapScript_c__DisplayClass21_0_Deserialize_b__0;
label_059a2a5f:
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
        System_Action___ctor(__this_01,(Il2CppObject *)__this_00,(intptr_t)*ppMVar14,(MethodInfo *)0x0);
        Map_MapScript__RunSection(__this,*ppSVar13,__this_01,skipErrors,in_R8);
        return;
      }
      if (*ppSVar13 != (System_String_o *)0x0) {
        pSVar9 = System_String__Split(*ppSVar13,(__this->fields).Delimiter,0,(MethodInfo *)0x0);
        pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar10,
                   (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
        if (pSVar9 != (System_String_array *)0x0) {
          pSStack_48 = "";
          uVar7 = (uint)pSVar9->max_length;
          if (0 < (int)uVar7) {
            uVar12 = 0;
            do {
              if (uVar7 <= uVar12) goto label_059a2aa5;
              if ((pSVar9->m_Items[(int)uVar12] == (System_String_o *)0x0) ||
                 (pSVar8 = System_String__Trim(pSVar9->m_Items[(int)uVar12],(MethodInfo *)0x0),
                 pSVar8 == (System_String_o *)0x0)) goto label_059a2aa0;
              bVar6 = System_String__StartsWith(pSVar8,(__this->fields).HeaderPrefix,(MethodInfo *)0x0);
              if (bVar6) {
                pSVar11 = (__this->fields).HeaderPrefix;
                if (pSVar11 == (System_String_o *)0x0) goto label_059a2aa0;
                pSVar11 = System_String__Substring(pSVar8,(pSVar11->fields)._stringLength,(MethodInfo *)0x0);
                bVar6 = System_String__op_Equality(pSVar11,"Logic",(MethodInfo *)0x0);
                if (bVar6) {
                  (__this->fields).LogicStart = uVar12 + 1;
                }
                Map_MapScript__DeserializeSection(__this,pSStack_48,pSVar10,skipErrors,in_R8);
                pSVar11 = (__this->fields).HeaderPrefix;
                if ((pSVar11 == (System_String_o *)0x0) ||
                   (pSStack_48 = System_String__Substring
                                           (pSVar8,(pSVar11->fields)._stringLength,(MethodInfo *)0x0),
                   pSVar10 == (System_Collections_Generic_List_string__o *)0x0)) goto label_059a2aa0;
                piVar1 = &(pSVar10->fields)._version;
                *piVar1 = *piVar1 + 1;
                iVar2 = (pSVar10->fields)._size;
                (pSVar10->fields)._size = 0;
                if (0 < iVar2) {
                  System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar2,(MethodInfo *)0x0);
                }
              }
              else {
                bVar6 = System_String__op_Equality(pSStack_48,"Logic",(MethodInfo *)0x0);
                pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
                if (bVar6) {
                  if ((uint)pSVar9->max_length <= uVar12) {
label_059a2aa5:
                    ThrowIndexOutOfRangeException();
                  }
                  pSVar8 = pSVar9->m_Items[(int)uVar12];
                  trimChars = (System_Char_array *)SZArrayNew(TypeInfo_char_array,2);
                  if (trimChars == (System_Char_array *)0x0) goto label_059a2aa0;
                  iVar3 = (int)trimChars->max_length;
                  if ((iVar3 == 0) || (trimChars->m_Items[0] = 0xd, iVar3 == 1)) goto label_059a2aa5;
                  trimChars->m_Items[1] = 10;
                  if ((pSVar8 == (System_String_o *)0x0) ||
                     (pSVar8 = System_String__Trim_5307100(pSVar8,trimChars,(MethodInfo *)0x0),
                     pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add,
                     pSVar10 == (System_Collections_Generic_List_string__o *)0x0)) goto label_059a2aa0;
                  piVar1 = &(pSVar10->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (pSVar10->fields)._items;
                  if (pSVar4 == (System_String_array *)0x0) goto label_059a2aa0;
                  uVar7 = (pSVar10->fields)._size;
                  if (uVar7 < (uint)pSVar4->max_length) {
                    (pSVar10->fields)._size = uVar7 + 1;
                    pSVar4->m_Items[(int)uVar7] = pSVar8;
                    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar7);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pSVar8,
                               (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                  }
                }
                else {
                  if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) goto label_059a2aa0;
                  piVar1 = &(pSVar10->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (pSVar10->fields)._items;
                  if (pSVar4 == (System_String_array *)0x0) goto label_059a2aa0;
                  uVar7 = (pSVar10->fields)._size;
                  if (uVar7 < (uint)pSVar4->max_length) {
                    (pSVar10->fields)._size = uVar7 + 1;
                    pSVar4->m_Items[(int)uVar7] = pSVar8;
                    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar7);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pSVar8,
                               (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                  }
                }
              }
              uVar12 = uVar12 + 1;
              uVar7 = (uint)pSVar9->max_length;
            } while ((int)uVar12 < (int)uVar7);
          }
          Map_MapScript__DeserializeSection(__this,pSStack_48,pSVar10,skipErrors,in_R8);
          ppSVar13 = &"Version";
          ppMVar14 = &MethodInfo_Map_MapScript_c__DisplayClass21_0_Deserialize_b__1;
          goto label_059a2a5f;
        }
      }
    }
  }
label_059a2aa0:
  ThrowNullReferenceException();
}


// Map.MapScript$$DeserializeSection
// il2cpp: void Map_MapScript__DeserializeSection (Map_MapScript_o* __this, System_String_o* currentSection, System_Collections_Generic_List_string__o* currentSectionItems, bool skipErrors, const MethodInfo* method);
// 0x59a2c80

void Map_MapScript__DeserializeSection
               (Map_MapScript_o *__this,System_String_o *currentSection,
               System_Collections_Generic_List_string__o *currentSectionItems,bool skipErrors,
               MethodInfo *method)

{
  Map_MapScript___c__DisplayClass22_0_o *__this_00;
  System_String_o *pSVar1;
  System_String_array *value;
  System_Action_o *__this_01;
  
  if (Il2CppMethodInitialized_07545a8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapScript_c__DisplayClass22_0_DeserializeSection_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript_c__DisplayClass22_0);
    Il2CppMethodInitialized_07545a8d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript_c__DisplayClass22_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Map_MapScript___c__DisplayClass22_0_o *)0x0) {
    (__this_00->fields).currentSection = currentSection;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).currentSection);
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this_00->fields).skipErrors = skipErrors;
    if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556750);
    }
    pSVar1 = System_Char__ToString(&(__this->fields).Delimiter,(MethodInfo *)0x0);
    if (currentSectionItems != (System_Collections_Generic_List_string__o *)0x0) {
      value = (System_String_array *)
              System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_object__o *)currentSectionItems,
                         (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar1 = System_String__Join(pSVar1,value,(MethodInfo *)0x0);
      (__this_00->fields).currentSectionCSV = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).currentSectionCSV);
      pSVar1 = (__this_00->fields).currentSection;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
      System_Action___ctor
                (__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)MethodInfo_Map_MapScript_c__DisplayClass22_0_DeserializeSection_b__0,
                 (MethodInfo *)0x0);
      Map_MapScript__RunSection(__this,pSVar1,__this_01,(__this_00->fields).skipErrors,method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapScript$$RunSection
// il2cpp: void Map_MapScript__RunSection (Map_MapScript_o* __this, System_String_o* section, System_Action_o* action, bool skipErrors, const MethodInfo* method);
// 0x59a2ac0
// eh: try 0x59a2ae0..0x59a2af7 -> pad 0x59a2af7 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x59a2b0e..0x59a2c58 -> pad 0x59a2c60 (+1 call sites) cleanup
// eh: try 0x59a2c63..0x59a2c68 -> pad 0x59a2c70 catch (...) [compiler noexcept guard]
// asm: 96 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a2af7: mov r15, rax
// asm:   0x59a2afa: cmp edx, 1
// asm:   0x59a2afd: jne 0x59a2c68
// asm:   0x59a2b03: mov rdi, r15
// asm:   0x59a2b06: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59a2b0b: mov r15, rax
// asm:   0x59a2b0e: lea rdi, [rip + 0x18d55ab]  ; TypeInfo_System_Exception
// asm:   0x59a2b15: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59a2b1a: mov rcx, qword ptr [r15]
// asm:   0x59a2b1d: mov rsi, qword ptr [rcx]
// asm:   0x59a2b20: mov rdi, rax
// asm:   0x59a2b23: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x59a2b28: test al, al
// asm:   0x59a2b2a: je 0x59a2c37
// asm:   0x59a2b30: mov r15, qword ptr [r15]
// asm:   0x59a2b33: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59a2b38: test r15, r15
// asm:   0x59a2b3b: je 0x59a2c32
// asm:   0x59a2b41: mov rax, qword ptr [r15]
// asm:   0x59a2b44: mov rsi, qword ptr [rax + 0x170]
// asm:   0x59a2b4b: mov rdi, r15
// asm:   0x59a2b4e: call qword ptr [rax + 0x168]  ; vtable slot 3
// asm:   0x59a2b54: mov r12, rax
// asm:   0x59a2b57: lea rdi, [rip + 0x19383c2]  ; "Error deserializing MapScript section "
// asm:   0x59a2b5e: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59a2b63: mov r13, rax
// asm:   0x59a2b66: lea rdi, [rip + 0x192f413]  ; ": "
// asm:   0x59a2b6d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59a2b72: mov rdi, r13
// asm:   0x59a2b75: mov rsi, r14
// asm:   0x59a2b78: mov rdx, rax
// asm:   0x59a2b7b: mov rcx, r12
// asm:   0x59a2b7e: xor r8d, r8d
// asm:   0x59a2b81: call 0x5402810  ; System_String__Concat()
// asm:   0x59a2b86: mov r12, rax
// asm:   0x59a2b89: lea rdi, [rip + 0x18d4ab8]  ; TypeInfo_UnityEngine_Debug
// asm:   0x59a2b90: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59a2b95: cmp dword ptr [rax + 0xe4], 0
// asm:   0x59a2b9c: jne 0x59a2ba6
// asm:   0x59a2b9e: mov rdi, rax
// asm:   0x59a2ba1: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x59a2ba6: mov rdi, r12
// asm:   0x59a2ba9: xor esi, esi
// asm:   0x59a2bab: call 0x69c4c70  ; UnityEngine_Debug__LogError()
// asm:   0x59a2bb0: test bpl, bpl
// asm:   0x59a2bb3: je 0x59a2c58
// asm:   0x59a2bb9: mov r12, qword ptr [rbx + 0x68]
// asm:   0x59a2bbd: mov rax, qword ptr [r15]
// asm:   0x59a2bc0: mov rsi, qword ptr [rax + 0x190]
// asm:   0x59a2bc7: mov rdi, r15
// asm:   0x59a2bca: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x59a2bd0: mov rbp, rax
// asm:   0x59a2bd3: lea rdi, [rip + 0x19390d6]  ; "Failed to read map section "
// asm:   0x59a2bda: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59a2bdf: mov rbx, rax
// asm:   0x59a2be2: lea rdi, [rip + 0x192f397]  ; ": "
// asm:   0x59a2be9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59a2bee: mov rdi, rbx
// asm:   0x59a2bf1: mov rsi, r14
// asm:   0x59a2bf4: mov rdx, rax
// asm:   0x59a2bf7: mov rcx, rbp
// asm:   0x59a2bfa: xor r8d, r8d
// asm:   0x59a2bfd: call 0x5402810  ; System_String__Concat()
// asm:   0x59a2c02: test r12, r12
// asm:   0x59a2c05: je 0x59a2c32
// asm:   0x59a2c07: mov rbp, rax
// asm:   0x59a2c0a: lea rdi, [rip + 0x18f3d47]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x59a2c11: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59a2c16: mov rdi, r12
// asm:   0x59a2c19: mov rsi, rbp
// asm:   0x59a2c1c: mov rdx, rax
// asm:   0x59a2c1f: add rsp, 8
// asm:   0x59a2c23: pop rbx
// asm:   0x59a2c24: pop r12
// asm:   0x59a2c26: pop r13
// asm:   0x59a2c28: pop r14
// asm:   0x59a2c2a: pop r15
// asm:   0x59a2c2c: pop rbp
// asm:   0x59a2c2d: jmp 0x2fa8fa0
// asm:   0x59a2c32: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x59a2c37: mov edi, 8
// asm:   0x59a2c3c: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x59a2c41: mov rcx, qword ptr [r15]
// asm:   0x59a2c44: mov qword ptr [rax], rcx
// asm:   0x59a2c47: lea rsi, [rip + 0x148a8b2]
// asm:   0x59a2c4e: mov rdi, rax
// asm:   0x59a2c51: xor edx, edx
// asm:   0x59a2c53: call 0x6e255c0  ; __cxa_throw()
// asm:   0x59a2c58: mov rdi, r15
// asm:   0x59a2c5b: call 0x30d6390  ; il2cpp_runtime_helper_030d6390()
// asm:   0x59a2c60: mov r15, rax
// asm:   0x59a2c63: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59a2c68: mov rdi, r15
// asm:   0x59a2c6b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59a2c70: mov rdi, rax
// asm:   0x59a2c73: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapScript__RunSection
               (Map_MapScript_o *__this,System_String_o *section,System_Action_o *action,bool skipErrors,
               MethodInfo *method)

{
  undefined3 in_register_00000009;
  
  if (action == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(code *)(action->fields).invoke_impl)
            ((action->fields).method_code,(action->fields).method,action,
             CONCAT31(in_register_00000009,skipErrors));
  return;
}


// Map.MapScript$$.ctor
// il2cpp: void Map_MapScript___ctor (Map_MapScript_o* __this, const MethodInfo* method);
// 0x59a0530

void Map_MapScript___ctor(Map_MapScript_o *__this,MethodInfo *method)

{
  Map_MapScriptOptions_o *__this_00;
  Map_MapScriptCustomAssets_o *__this_01;
  System_Collections_Generic_List_string__o *pSVar1;
  Map_MapScriptObjects_o *__this_02;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_03;
  Settings_WeatherSet_o *__this_04;
  
  if (Il2CppMethodInitialized_07545a8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptCustomAssets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptOptions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSet);
    il2cpp_codegen_initialize_runtime_metadata(&"/// ");
    Il2CppMethodInitialized_07545a8e = '\x01';
  }
  (__this->fields).HeaderPrefix = "/// ";
  Il2CppCodeGenWriteBarrier(&(__this->fields).HeaderPrefix);
  (__this->fields).Delimiter = 10;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptOptions);
  if (Il2CppMethodInitialized_07545aa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"1.1");
    Il2CppMethodInitialized_07545aa2 = '\x01';
  }
  (__this_00->fields).EditorVersion = "1.1";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).EditorVersion);
  (__this_00->fields).Description = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Description);
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).Options = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Options);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptCustomAssets);
  if (Il2CppMethodInitialized_07545a95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07545a95 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this_01->fields).CustomAssets = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).CustomAssets);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)__this_01,(MethodInfo *)0x0);
  (__this->fields).CustomAssets = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomAssets);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  if (Il2CppMethodInitialized_07545aa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
    Il2CppMethodInitialized_07545aa1 = '\x01';
  }
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
  (__this_02->fields).Objects = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this_02->fields).Objects);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)__this_02,(MethodInfo *)0x0);
  (__this->fields).Objects = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Objects);
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSet);
  Settings_WeatherSet___ctor(__this_04,(MethodInfo *)0x0);
  (__this->fields).Weather = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Weather);
  (__this->fields).Logic = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).Logic);
  (__this->fields).MapHash = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapHash);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).Errors = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Errors);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


