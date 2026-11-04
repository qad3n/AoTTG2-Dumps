// Type: Map.MapConverter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapConverter.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapConverter.cs
// --------------------------------

// Map.MapConverter$$IsLegacy
// il2cpp: bool Map_MapConverter__IsLegacy (System_String_o* map, const MethodInfo* method);
// 0x181e8ed50

bool Map_MapConverter__IsLegacy(System_String_o *map,MethodInfo *method)

{
  System_String_o *__this;
  bool bVar1;
  System_String_array *pSVar2;
  System_String_o *a;
  uint uVar3;
  
  if (Il2CppMethodInitialized_18434504b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"///");
    Il2CppMethodInitialized_18434504b = '\x01';
  }
  if (map != (System_String_o *)0x0) {
    pSVar2 = System_String__Split(map,0x3b,0,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_array *)0x0) {
      uVar3 = 0;
      while( true ) {
        if ((int)pSVar2->max_length <= (int)uVar3) {
          return false;
        }
        if ((uint)pSVar2->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        __this = pSVar2->m_Items[(int)uVar3];
        if (__this == (System_String_o *)0x0) break;
        a = System_String__Trim(__this,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality
                          (a,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__StartsWith(__this,"///",(MethodInfo *)0x0);
          return !bVar1;
        }
        uVar3 = uVar3 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapConverter$$CreateForestFloor
// il2cpp: Map_MapScriptSceneObject_o* Map_MapConverter__CreateForestFloor (const MethodInfo* method);
// 0x181e8e940

Map_MapScriptSceneObject_o * Map_MapConverter__CreateForestFloor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *value;
  Map_MapScriptSceneObject_o *__this_00;
  Map_MapScriptBasicMaterial_o *__this_01;
  Map_MapScriptBasicMaterial_o *pMVar1;
  Utility_Color255_o *__this_02;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_18434504c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapTextures);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Grass1");
    il2cpp_codegen_initialize_runtime_metadata(&"Geometry/Cuboid");
    il2cpp_codegen_initialize_runtime_metadata(&"Basic");
    Il2CppMethodInitialized_18434504c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    (__this_00->fields).Asset = "Geometry/Cuboid";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Asset,"Geometry/Cuboid");
    local_18.r = 134.286;
    local_18.g = 6.407;
    local_18.b = 134.286;
    Map_MapScriptBaseObject__SetScale
              ((Map_MapScriptBaseObject_o *)__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    local_18.r = -7.76;
    local_18.g = -32.03;
    local_18.b = 5.333;
    Map_MapScriptBaseObject__SetPosition
              ((Map_MapScriptBaseObject_o *)__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184345051 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapConverter);
      Il2CppMethodInitialized_184345051 = '\x01';
    }
    TypeInfo_Map_MapConverter->static_fields->_currentId =
         TypeInfo_Map_MapConverter->static_fields->_currentId + 1;
    (__this_00->fields).Id = TypeInfo_Map_MapConverter->static_fields->_currentId;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
    Map_MapScriptBasicMaterial___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Map_MapScriptBasicMaterial_o *)0x0) {
      (__this_01->fields).Shader = "Basic";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).Shader,"Basic");
      if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures;
      if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pMVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this,(Il2CppObject *)"Grass1",
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item
                           );
        if (pMVar1 != (Map_MapScriptBasicMaterial_o *)0x0) {
          value = (pMVar1->fields).Texture;
          (__this_01->fields).Texture = value;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).Texture,value);
          (__this_01->fields).Tiling.fields.x = 50.0;
          (__this_01->fields).Tiling.fields.y = 50.0;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          local_18.r = 0.678;
          local_18.g = 0.684;
          local_18.b = 0.654;
          local_18.a = 1.0;
          Utility_Color255___ctor_23327a0(__this_02,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
          (__this_01->fields).Color = __this_02;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).Color,__this_02);
          (__this_00->fields).Material = (Map_MapScriptBaseMaterial_o *)__this_01;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Material,__this_01);
          return __this_00;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapConverter$$CreateLight
// il2cpp: Map_MapScriptSceneObject_o* Map_MapConverter__CreateLight (const MethodInfo* method);
// 0x181e8eba0

Map_MapScriptSceneObject_o * Map_MapConverter__CreateLight(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptSceneObject_o *__this_00;
  Map_MapScriptBaseObject_o *pMVar1;
  UnityEngine_Quaternion_o *pUVar2;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_18434504d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Daylight");
    Il2CppMethodInitialized_18434504d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pMVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this,(Il2CppObject *)"Daylight",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item);
    if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(__this_00->klass->vtable)._10_Copy.methodPtr)
                (__this_00,(Utility_BaseCSVObject_o *)pMVar1,(__this_00->klass->vtable)._10_Copy.method);
      local_28.x = 0.8779006;
      local_28.y = 2.1275563;
      local_28.z = 0.02443461;
      pUVar2 = UnityEngine_Quaternion__Internal_FromEulerRad
                         (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      local_28.x = (pUVar2->fields).x;
      local_28.y = (pUVar2->fields).y;
      local_28.z = (pUVar2->fields).z;
      local_28.w = (pUVar2->fields).w;
      Map_MapScriptBaseObject__SetRotation_1eb55a0
                ((Map_MapScriptBaseObject_o *)__this_00,(UnityEngine_Quaternion_o *)&local_28,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184345051 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapConverter);
        Il2CppMethodInitialized_184345051 = '\x01';
      }
      TypeInfo_Map_MapConverter->static_fields->_currentId =
           TypeInfo_Map_MapConverter->static_fields->_currentId + 1;
      (__this_00->fields).Id = TypeInfo_Map_MapConverter->static_fields->_currentId;
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapConverter$$CreateFengBounds
// il2cpp: System_Collections_Generic_List_MapScriptBaseObject__o* Map_MapConverter__CreateFengBounds (const MethodInfo* method);
// 0x181e8e540

System_Collections_Generic_List_MapScriptBaseObject__o *
Map_MapConverter__CreateFengBounds(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapScriptBaseObject_array *pMVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this;
  Map_MapScriptSceneObject_o *pMVar5;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434504e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
    Il2CppMethodInitialized_18434504e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
  local_38.x = 0.0;
  local_38.y = 0.0;
  local_38.z = 0.0;
  local_28.fields.x = 10.0;
  local_28.fields.y = 160.0;
  local_28.fields.z = 160.0;
  local_18.x = -700.0;
  local_18.y = 745.8;
  local_18.z = 0.01;
  pMVar5 = Map_MapConverter__CreateBound
                     ((UnityEngine_Vector3_o *)&local_18,&local_28,(UnityEngine_Vector3_o *)&local_38,
                      (MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
  if (__this != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar3 = (__this->fields)._items;
    if (pMVar3 == (Map_MapScriptBaseObject_array *)0x0) goto label_181e8e92a;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pMVar3->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pMVar3->max_length <= uVar2) goto label_181e8e930;
      pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar5;
      Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2,pMVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar5,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    local_18.x = 0.0;
    local_18.y = 0.0;
    local_18.z = 0.0;
    local_28.fields.x = 160.0;
    local_28.fields.y = 160.0;
    local_28.fields.z = 10.0;
    local_38.x = 0.0;
    local_38.y = 745.8;
    local_38.z = -700.0;
    pMVar5 = Map_MapConverter__CreateBound
                       ((UnityEngine_Vector3_o *)&local_38,&local_28,(UnityEngine_Vector3_o *)&local_18,
                        (MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
    pMVar3 = (__this->fields)._items;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pMVar3 == (Map_MapScriptBaseObject_array *)0x0) goto label_181e8e92a;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pMVar3->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pMVar3->max_length <= uVar2) goto label_181e8e930;
      pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar5;
      Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2,pMVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar5,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    local_18.x = 0.0;
    local_18.y = 0.0;
    local_18.z = 0.0;
    local_28.fields.x = 160.0;
    local_28.fields.y = 160.0;
    local_28.fields.z = 10.0;
    local_38.x = 0.0;
    local_38.y = 745.8;
    local_38.z = 700.0;
    pMVar5 = Map_MapConverter__CreateBound
                       ((UnityEngine_Vector3_o *)&local_38,&local_28,(UnityEngine_Vector3_o *)&local_18,
                        (MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
    pMVar3 = (__this->fields)._items;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pMVar3 == (Map_MapScriptBaseObject_array *)0x0) goto label_181e8e92a;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pMVar3->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pMVar3->max_length <= uVar2) goto label_181e8e930;
      pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar5;
      Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2,pMVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar5,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    local_18.x = 0.0;
    local_18.y = 0.0;
    local_18.z = 0.0;
    local_28.fields.x = 10.0;
    local_28.fields.y = 160.0;
    local_28.fields.z = 160.0;
    local_38.x = 700.0;
    local_38.y = 745.8;
    local_38.z = 0.01;
    pMVar5 = Map_MapConverter__CreateBound
                       ((UnityEngine_Vector3_o *)&local_38,&local_28,(UnityEngine_Vector3_o *)&local_18,
                        (MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
    pMVar3 = (__this->fields)._items;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pMVar3 == (Map_MapScriptBaseObject_array *)0x0) goto label_181e8e92a;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pMVar3->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pMVar3->max_length <= uVar2) goto label_181e8e930;
      pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar5;
      Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2,pMVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar5,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    local_18.x = 0.0;
    local_18.y = 0.0;
    local_18.z = 0.0;
    local_28.fields.x = 160.0;
    local_28.fields.y = 10.0;
    local_28.fields.z = 160.0;
    local_38.x = -2.23;
    local_38.y = 1253.07;
    local_38.z = 17.889;
    pMVar5 = Map_MapConverter__CreateBound
                       ((UnityEngine_Vector3_o *)&local_38,&local_28,(UnityEngine_Vector3_o *)&local_18,
                        (MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
    pMVar3 = (__this->fields)._items;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pMVar3 != (Map_MapScriptBaseObject_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if ((uint)pMVar3->max_length <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar5,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        return __this;
      }
      (__this->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pMVar3->max_length) {
        pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar5;
        Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2,pMVar5);
        return __this;
      }
label_181e8e930:
      ThrowIndexOutOfRangeException();
    }
  }
label_181e8e92a:
  ThrowNullReferenceException();
}


// Map.MapConverter$$CreateBound
// il2cpp: Map_MapScriptSceneObject_o* Map_MapConverter__CreateBound (UnityEngine_Vector3_o center, UnityEngine_Vector3_o size, UnityEngine_Vector3_o rotation, const MethodInfo* method);
// 0x181e8e3b0

Map_MapScriptSceneObject_o *
Map_MapConverter__CreateBound
          (UnityEngine_Vector3_o *center,UnityEngine_Vector3_o *size,UnityEngine_Vector3_o *rotation,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptSceneObject_o *__this_00;
  Map_MapScriptBaseObject_o *pMVar1;
  UnityEngine_Vector3_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_18434504f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"LegacyBarrier");
    Il2CppMethodInitialized_18434504f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pMVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this,(Il2CppObject *)"LegacyBarrier",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item);
    if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(__this_00->klass->vtable)._10_Copy.methodPtr)
                (__this_00,(Utility_BaseCSVObject_o *)pMVar1,(__this_00->klass->vtable)._10_Copy.method);
      local_38[0].x = (center->fields).x;
      local_38[0].y = (center->fields).y;
      local_38[0].z = (center->fields).z;
      Map_MapScriptBaseObject__SetPosition
                ((Map_MapScriptBaseObject_o *)__this_00,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
      local_38[0].x = (size->fields).x;
      local_38[0].y = (size->fields).y;
      local_38[0].z = (size->fields).z;
      Map_MapScriptBaseObject__SetScale
                ((Map_MapScriptBaseObject_o *)__this_00,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
      local_38[0].x = (rotation->fields).x;
      local_38[0].y = (rotation->fields).y;
      local_38[0].z = (rotation->fields).z;
      Map_MapScriptBaseObject__SetRotation
                ((Map_MapScriptBaseObject_o *)__this_00,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184345051 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapConverter);
        Il2CppMethodInitialized_184345051 = '\x01';
      }
      TypeInfo_Map_MapConverter->static_fields->_currentId =
           TypeInfo_Map_MapConverter->static_fields->_currentId + 1;
      (__this_00->fields).Id = TypeInfo_Map_MapConverter->static_fields->_currentId;
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapConverter$$Convert
// il2cpp: Map_MapScript_o* Map_MapConverter__Convert (System_String_o* map, const MethodInfo* method);
// 0x181e8b570
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e8bded: nop dword ptr [rax]
// asm:   0x181e8c64b: mov rdx, qword ptr [rip + 0x2257d9e]  ; "Cannon3"
// asm:   0x181e8c652: jmp 0x181e8c687
// asm:   0x181e8c680: mov rdx, qword ptr [rip + 0x2257c89]  ; "Cannon2"
// asm:   0x181e8c989: mov rdx, qword ptr [rip + 0x2257868]  ; "LevelBottom"
// asm:   0x181e8c990: jmp 0x181e8c9cc
// asm:   0x181e8c9c5: mov rdx, qword ptr [rip + 0x222eeb4]  ; "Supply1"
// asm:   0x181e8ce6f: jmp 0x181e8d14c
// asm:   0x181e8cea7: mov rdx, qword ptr [rip + 0x225b072]  ; "Racing Finish Region Cuboid"
// asm:   0x181e8ceae: jmp 0x181e8cfd4
// asm:   0x181e8cee6: mov rdx, qword ptr [rip + 0x225b2cb]  ; "Racing Start Barrier Cuboid"
// asm:   0x181e8ceed: jmp 0x181e8cfd4
// asm:   0x181e8cfcd: mov rdx, qword ptr [rip + 0x2254574]  ; "LegacyBarrier"
// asm:   0x181e8d155: jmp 0x181e8e1d6
// asm:   0x181e8d268: mov rdx, qword ptr [rip + 0x22077b1]  ; "Human SpawnPoint (red)"
// asm:   0x181e8d26f: jmp 0x181e8d326
// asm:   0x181e8d2a7: mov rdx, qword ptr [rip + 0x2207692]  ; "Human SpawnPoint (blue)"
// asm:   0x181e8d2ae: jmp 0x181e8d326
// asm:   0x181e8d2e3: mov rdx, qword ptr [rip + 0x220757e]  ; "Human SpawnPoint"
// asm:   0x181e8d2ea: jmp 0x181e8d326
// asm:   0x181e8d31f: mov rdx, qword ptr [rip + 0x21e3982]  ; "Titan SpawnPoint"

Map_MapScript_o * Map_MapConverter__Convert(System_String_o *map,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  Map_MapScriptObjects_o *pMVar10;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar11;
  Map_MapScriptBaseObject_array *pMVar12;
  System_Collections_Generic_Dictionary_object__object__o *pSVar13;
  UnityEngine_Vector3_StaticFields *pUVar14;
  System_Collections_Generic_Dictionary_string__MapScriptBasicMaterial__o *__this;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  MethodInfo *pMVar18;
  bool bVar19;
  int32_t iVar20;
  Map_MapScript_o *__this_00;
  Map_MapScriptSceneObject_o *pMVar21;
  Map_MapScriptBaseObject_o *pMVar22;
  UnityEngine_Quaternion_o *pUVar23;
  System_String_o *pSVar24;
  System_Char_array *separator;
  System_String_o *pSVar25;
  System_String_array *pSVar26;
  System_String_o *pSVar27;
  UnityEngine_Vector3_o *pUVar28;
  Map_MapScriptBasicMaterial_o *pMVar29;
  Utility_Color255_o *pUVar30;
  Map_MapScriptReflectiveMaterial_o *__this_01;
  System_Collections_Generic_List_MapScriptBaseObject__o *collection;
  System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *pSVar31;
  UnityEngine_Color_o *color;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float local_res20 [2];
  UnityEngine_Color_Fields local_2f8;
  System_String_array *local_2e8;
  float local_2e0;
  UnityEngine_Color_o local_2d8;
  UnityEngine_Vector3_o local_2c8;
  UnityEngine_Vector3_o local_2b8;
  UnityEngine_Vector3_o local_2a8;
  UnityEngine_Vector3_o local_298;
  UnityEngine_Vector3_o local_288;
  UnityEngine_Vector3_o local_278;
  UnityEngine_Vector3_o local_268;
  UnityEngine_Vector3_o local_258;
  UnityEngine_Vector3_o local_248;
  UnityEngine_Vector3_o local_238;
  UnityEngine_Vector3_o local_228;
  UnityEngine_Vector3_o local_218;
  UnityEngine_Vector3_o local_208;
  UnityEngine_Vector3_o local_1f8;
  UnityEngine_Quaternion_o local_1e8;
  UnityEngine_Quaternion_o local_1d8;
  UnityEngine_Quaternion_o local_1c8;
  UnityEngine_Quaternion_o local_1b8;
  UnityEngine_Quaternion_o local_1a8;
  UnityEngine_Quaternion_o local_198;
  UnityEngine_Quaternion_o local_188;
  UnityEngine_Quaternion_o local_178;
  UnityEngine_Color_o local_168;
  UnityEngine_Vector3_Fields local_158;
  Map_MapScript_o *local_148;
  UnityEngine_Vector3_Fields local_140 [2];
  UnityEngine_Vector3_Fields local_128;
  UnityEngine_Vector3_o local_118;
  UnityEngine_Vector3_o local_108;
  UnityEngine_Vector3_o local_f8;
  UnityEngine_Quaternion_o local_e8 [11];
  
  if (Il2CppMethodInitialized_184345050 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapTextures);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapConverter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptLegacyMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptReflectiveMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"racingEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing Finish Region Cuboid");
    il2cpp_codegen_initialize_runtime_metadata(&"regioneditormat");
    il2cpp_codegen_initialize_runtime_metadata(&"map");
    il2cpp_codegen_initialize_runtime_metadata(&"custom");
    il2cpp_codegen_initialize_runtime_metadata(&"bombexplosiontex");
    il2cpp_codegen_initialize_runtime_metadata(&"racingStart");
    il2cpp_codegen_initialize_runtime_metadata(&"Unhandled legacy object: ");
    il2cpp_codegen_initialize_runtime_metadata(&"//");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannon2");
    il2cpp_codegen_initialize_runtime_metadata(&"bark");
    il2cpp_codegen_initialize_runtime_metadata(&"cannonwall");
    il2cpp_codegen_initialize_runtime_metadata(&"start");
    il2cpp_codegen_initialize_runtime_metadata(&"LegacyBarrier");
    il2cpp_codegen_initialize_runtime_metadata(&"barriereditormat");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing Checkpoint Region ");
    il2cpp_codegen_initialize_runtime_metadata(&"Unhandled legacy texture: ");
    il2cpp_codegen_initialize_runtime_metadata(&"base");
    il2cpp_codegen_initialize_runtime_metadata(&"\r\n");
    il2cpp_codegen_initialize_runtime_metadata(&"aot_supply");
    il2cpp_codegen_initialize_runtime_metadata(&"disablebounds");
    il2cpp_codegen_initialize_runtime_metadata(&"cannonregionmat");
    il2cpp_codegen_initialize_runtime_metadata(&"Reflective");
    il2cpp_codegen_initialize_runtime_metadata(&"playerc");
    il2cpp_codegen_initialize_runtime_metadata(&"levelbottom");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing Start Barrier ");
    il2cpp_codegen_initialize_runtime_metadata(&"Human SpawnPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"cannonground");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannon3");
    il2cpp_codegen_initialize_runtime_metadata(&"grass");
    il2cpp_codegen_initialize_runtime_metadata(&"LevelBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"misc");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"barrier");
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    il2cpp_codegen_initialize_runtime_metadata(&"ice1");
    il2cpp_codegen_initialize_runtime_metadata(&"transparent");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing Start Barrier Cuboid");
    il2cpp_codegen_initialize_runtime_metadata(&"region");
    il2cpp_codegen_initialize_runtime_metadata(&"spawnpoint");
    il2cpp_codegen_initialize_runtime_metadata(&"racing");
    il2cpp_codegen_initialize_runtime_metadata(&"Geometry/Cuboid");
    il2cpp_codegen_initialize_runtime_metadata(&"Human SpawnPoint (red)");
    il2cpp_codegen_initialize_runtime_metadata(&"photon");
    il2cpp_codegen_initialize_runtime_metadata(&"Human SpawnPoint (blue)");
    il2cpp_codegen_initialize_runtime_metadata(&"barrierEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Basic");
    il2cpp_codegen_initialize_runtime_metadata(&"end");
    il2cpp_codegen_initialize_runtime_metadata(&"cannonballtrail");
    il2cpp_codegen_initialize_runtime_metadata(&"spawn");
    il2cpp_codegen_initialize_runtime_metadata(&"Supply1");
    il2cpp_codegen_initialize_runtime_metadata(&"Kill Region ");
    il2cpp_codegen_initialize_runtime_metadata(&"Unnamed");
    il2cpp_codegen_initialize_runtime_metadata(&"\\s+");
    il2cpp_codegen_initialize_runtime_metadata(&"playerm");
    il2cpp_codegen_initialize_runtime_metadata(&"kill");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan SpawnPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing Finish Region ");
    il2cpp_codegen_initialize_runtime_metadata(&"bombtex");
    il2cpp_codegen_initialize_runtime_metadata(&"player");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"\r");
    il2cpp_codegen_initialize_runtime_metadata(&"checkpoint");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    il2cpp_codegen_initialize_runtime_metadata(&"empty");
    il2cpp_codegen_initialize_runtime_metadata(&"Transparent");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_184345050 = '\x01';
  }
  local_res20[0] = 0.0;
  TypeInfo_Map_MapConverter->static_fields->_currentId = 0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
  local_148 = __this_00;
  Map_MapScript___ctor(__this_00,(MethodInfo *)0x0);
  if ((__this_00 != (Map_MapScript_o *)0x0) &&
     (pMVar10 = (__this_00->fields).Objects, pMVar10 != (Map_MapScriptObjects_o *)0x0)) {
    pSVar11 = (pMVar10->fields).Objects;
    pMVar21 = Map_MapConverter__CreateForestFloor((MethodInfo *)0x0);
    pMVar18 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
    if (pSVar11 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) goto label_181e8e357;
    piVar1 = &(pSVar11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar12 = (pSVar11->fields)._items;
    if (pMVar12 == (Map_MapScriptBaseObject_array *)0x0) goto label_181e8e357;
    uVar32 = (pSVar11->fields)._size;
    if (uVar32 < (uint)pMVar12->max_length) {
      (pSVar11->fields)._size = uVar32 + 1;
      if ((uint)pMVar12->max_length <= uVar32) goto label_181e8e3a5;
      pMVar12->m_Items[(int)uVar32] = (Map_MapScriptBaseObject_o *)pMVar21;
      Il2CppCodeGenWriteBarrier(pMVar12->m_Items + (int)uVar32,pMVar21);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pMVar21,
                 (MethodInfo_93DD50 *)pMVar18->klass->rgctx_data[0xe].method);
    }
    pMVar10 = (__this_00->fields).Objects;
    if (pMVar10 == (Map_MapScriptObjects_o *)0x0) goto label_181e8e357;
    pSVar11 = (pMVar10->fields).Objects;
    if (Il2CppMethodInitialized_18434504d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
      il2cpp_codegen_initialize_runtime_metadata(&"Daylight");
      Il2CppMethodInitialized_18434504d = '\x01';
    }
    pMVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(pMVar21,(MethodInfo *)0x0);
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
    if ((pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (pMVar22 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar13,(Il2CppObject *)"Daylight",
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                            ), pMVar21 == (Map_MapScriptSceneObject_o *)0x0)) goto label_181e8e357;
    (*(pMVar21->klass->vtable)._10_Copy.methodPtr)
              (pMVar21,(Utility_BaseCSVObject_o *)pMVar22,(pMVar21->klass->vtable)._10_Copy.method);
    local_2e8 = (System_String_array *)0x400829e23f60be18;
    local_2e0 = 0.02443461;
    pUVar23 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Quaternion_o *)&local_2f8,(UnityEngine_Vector3_o *)&local_2e8,
                         (MethodInfo *)0x0);
    local_2d8.fields.r = (pUVar23->fields).x;
    local_2d8.fields.g = (pUVar23->fields).y;
    local_2d8.fields.b = (pUVar23->fields).z;
    local_2d8.fields.a = (pUVar23->fields).w;
    Map_MapScriptBaseObject__SetRotation_1eb55a0
              ((Map_MapScriptBaseObject_o *)pMVar21,(UnityEngine_Quaternion_o *)&local_2d8,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184345051 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapConverter);
      Il2CppMethodInitialized_184345051 = '\x01';
    }
    TypeInfo_Map_MapConverter->static_fields->_currentId =
         TypeInfo_Map_MapConverter->static_fields->_currentId + 1;
    (pMVar21->fields).Id = TypeInfo_Map_MapConverter->static_fields->_currentId;
    pMVar18 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
    if (pSVar11 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) goto label_181e8e357;
    piVar1 = &(pSVar11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar12 = (pSVar11->fields)._items;
    if (pMVar12 == (Map_MapScriptBaseObject_array *)0x0) goto label_181e8e357;
    uVar32 = (pSVar11->fields)._size;
    if (uVar32 < (uint)pMVar12->max_length) {
      (pSVar11->fields)._size = uVar32 + 1;
      if ((uint)pMVar12->max_length <= uVar32) goto label_181e8e3a5;
      pMVar12->m_Items[(int)uVar32] = (Map_MapScriptBaseObject_o *)pMVar21;
      Il2CppCodeGenWriteBarrier(pMVar12->m_Items + (int)uVar32,pMVar21);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pMVar21,
                 (MethodInfo_93DD50 *)pMVar18->klass->rgctx_data[0xe].method);
    }
    if ((TypeInfo_System_Text_RegularExpressions_Regex->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
    }
    pSVar24 = System_Text_RegularExpressions_Regex__Replace
                        (map,"\\s+","",(MethodInfo *)0x0);
    if (((pSVar24 != (System_String_o *)0x0) &&
        (pSVar24 = System_String__Replace_1970e80
                             (pSVar24,"\r\n","",(MethodInfo *)0x0),
        pSVar24 != (System_String_o *)0x0)) &&
       (pSVar24 = System_String__Replace_1970e80
                            (pSVar24,"\n","",(MethodInfo *)0x0),
       pSVar24 != (System_String_o *)0x0)) {
      pSVar24 = System_String__Replace_1970e80
                          (pSVar24,"\r","",(MethodInfo *)0x0);
      separator = (System_Char_array *)SZArrayNew(TypeInfo_char_array,1);
      if (separator != (System_Char_array *)0x0) {
        if ((int)separator->max_length == 0) {
label_181e8e3a5:
          ThrowIndexOutOfRangeException();
        }
        separator->m_Items[0] = 0x3b;
        if (pSVar24 != (System_String_o *)0x0) {
          local_2e8 = System_String__Split_1972010(pSVar24,separator,(MethodInfo *)0x0);
          if (local_2e8 == (System_String_array *)0x0) goto label_181e8e35d;
          uVar32 = 0;
          bVar17 = false;
label_181e8bdf0:
          if ((int)local_2e8->max_length <= (int)uVar32) goto label_181e8e28c;
          if ((uint)local_2e8->max_length <= uVar32) goto label_181e8e3a5;
          pSVar24 = local_2e8->m_Items[(int)uVar32];
          if (((pSVar24 == (System_String_o *)0x0) ||
              (pSVar25 = System_String__Trim(pSVar24,(MethodInfo *)0x0), pSVar25 == (System_String_o *)0x0))
             || (pSVar26 = System_String__Split(pSVar25,0x2c,0,(MethodInfo *)0x0),
                pSVar26 == (System_String_array *)0x0)) goto label_181e8e357;
          if (pSVar26->max_length == 0) {
label_181e8e27c:
            uVar32 = uVar32 + 1;
            goto label_181e8bdf0;
          }
          if ((int)pSVar26->max_length == 0) goto label_181e8e3a5;
          if (pSVar26->m_Items[0] == (System_String_o *)0x0) goto label_181e8e357;
          bVar19 = System_String__StartsWith(pSVar26->m_Items[0],"//",(MethodInfo *)0x0);
          if (bVar19) goto label_181e8e27c;
          pSVar25 = System_String__Trim(pSVar24,(MethodInfo *)0x0);
          bVar19 = System_String__op_Equality(pSVar25,"",(MethodInfo *)0x0);
          if (bVar19) goto label_181e8e27c;
          pMVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
          Map_MapScriptSceneObject___ctor(pMVar21,(MethodInfo *)0x0);
          if ((int)pSVar26->max_length == 0) goto label_181e8e3a5;
          if (pSVar26->m_Items[0] == (System_String_o *)0x0) goto label_181e8e357;
          bVar19 = System_String__StartsWith(pSVar26->m_Items[0],"custom",(MethodInfo *)0x0);
          if (!bVar19) {
            if ((int)pSVar26->max_length == 0) goto label_181e8e3a5;
            if (pSVar26->m_Items[0] == (System_String_o *)0x0) goto label_181e8e357;
            bVar19 = System_String__StartsWith(pSVar26->m_Items[0],"spawnpoint",(MethodInfo *)0x0);
            uVar9 = (uint)pSVar26->max_length;
            if (bVar19) {
              if (uVar9 < 2) goto label_181e8e3a5;
              if (pSVar26->m_Items[1] == (System_String_o *)0x0) goto label_181e8e357;
              pSVar25 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0);
              bVar19 = System_String__op_Equality(pSVar25,"titan",(MethodInfo *)0x0);
              if (bVar19) {
                if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                }
                pSVar31 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                pSVar25 = "Titan SpawnPoint";
                if (pSVar31 == (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *)0x0)
                goto label_181e8e357;
label_181e8d326:
                pMVar22 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar31,
                                     (Il2CppObject *)pSVar25,
                                     (MethodInfo_147A5B0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                    );
                if (pMVar21 == (Map_MapScriptSceneObject_o *)0x0) goto label_181e8e357;
                (*(pMVar21->klass->vtable)._10_Copy.methodPtr)
                          (pMVar21,(Utility_BaseCSVObject_o *)pMVar22,(pMVar21->klass->vtable)._10_Copy.method
                          );
              }
              else {
                if ((uint)pSVar26->max_length < 2) goto label_181e8e3a5;
                if (pSVar26->m_Items[1] == (System_String_o *)0x0) goto label_181e8e357;
                pSVar25 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0);
                bVar19 = System_String__op_Equality(pSVar25,"player",(MethodInfo *)0x0);
                if (bVar19) {
                  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                  }
                  pSVar31 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                  pSVar25 = "Human SpawnPoint";
joined_r0x000181e8d2dd:
                  if (pSVar31 != (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *)0x0)
                  goto label_181e8d326;
                  goto label_181e8e357;
                }
                if ((uint)pSVar26->max_length < 2) goto label_181e8e3a5;
                if (pSVar26->m_Items[1] == (System_String_o *)0x0) goto label_181e8e357;
                pSVar25 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0);
                bVar19 = System_String__op_Equality(pSVar25,"playerc",(MethodInfo *)0x0);
                if (bVar19) {
                  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                  }
                  pSVar31 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                  pSVar25 = "Human SpawnPoint (blue)";
                  goto joined_r0x000181e8d2dd;
                }
                if ((uint)pSVar26->max_length < 2) goto label_181e8e3a5;
                if (pSVar26->m_Items[1] == (System_String_o *)0x0) goto label_181e8e357;
                pSVar25 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0);
                bVar19 = System_String__op_Equality(pSVar25,"playerm",(MethodInfo *)0x0);
                if (bVar19) {
                  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                  }
                  pSVar31 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                  pSVar25 = "Human SpawnPoint (red)";
                  goto joined_r0x000181e8d2dd;
                }
              }
              if ((2 < (uint)pSVar26->max_length) &&
                 (fVar33 = System_Single__Parse(pSVar26->m_Items[2],(MethodInfo *)0x0),
                 3 < (uint)pSVar26->max_length)) {
                fVar34 = System_Single__Parse(pSVar26->m_Items[3],(MethodInfo *)0x0);
                if ((uint)pSVar26->max_length < 5) {
label_181e8e363:
                  ThrowIndexOutOfRangeException();
                }
                fVar35 = System_Single__Parse(pSVar26->m_Items[4],(MethodInfo *)0x0);
                if (pMVar21 != (Map_MapScriptSceneObject_o *)0x0) {
                  local_208.fields.x = fVar33;
                  local_208.fields.y = fVar34;
                  local_208.fields.z = fVar35;
                  Map_MapScriptBaseObject__SetPosition
                            ((Map_MapScriptBaseObject_o *)pMVar21,&local_208,(MethodInfo *)0x0);
                  goto label_181e8e1d6;
                }
                goto label_181e8e35d;
              }
              goto label_181e8e3a5;
            }
            if (uVar9 == 0) goto label_181e8e363;
            if (pSVar26->m_Items[0] == (System_String_o *)0x0) goto label_181e8e35d;
            bVar19 = System_String__StartsWith(pSVar26->m_Items[0],"misc",(MethodInfo *)0x0);
            uVar9 = (uint)pSVar26->max_length;
            if (bVar19) {
              if (uVar9 < 2) goto label_181e8e363;
              bVar19 = System_String__op_Equality(pSVar26->m_Items[1],"barrier",(MethodInfo *)0x0)
              ;
              if (bVar19) {
                if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                }
                pSVar31 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                pSVar25 = "LegacyBarrier";
joined_r0x000181e8cfc7:
                if (pSVar31 == (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *)0x0)
                goto label_181e8e35d;
label_181e8cfd4:
                pMVar22 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar31,
                                     (Il2CppObject *)pSVar25,
                                     (MethodInfo_147A5B0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                    );
                if (pMVar21 == (Map_MapScriptSceneObject_o *)0x0) goto label_181e8e35d;
                (*(pMVar21->klass->vtable)._10_Copy.methodPtr)
                          (pMVar21,(Utility_BaseCSVObject_o *)pMVar22,(pMVar21->klass->vtable)._10_Copy.method
                          );
              }
              else {
                if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
                bVar19 = System_String__op_Equality
                                   (pSVar26->m_Items[1],"barrierEditor",(MethodInfo *)0x0);
                if (!bVar19) {
                  if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
                  bVar19 = System_String__op_Equality
                                     (pSVar26->m_Items[1],"racingStart",(MethodInfo *)0x0);
                  if (!bVar19) {
                    if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
                    bVar19 = System_String__op_Equality
                                       (pSVar26->m_Items[1],"racingEnd",(MethodInfo *)0x0);
                    if (!bVar19) {
                      if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
                      bVar19 = System_String__op_Equality
                                         (pSVar26->m_Items[1],"region",(MethodInfo *)0x0);
                      if (!bVar19) goto label_181e8d14c;
                      goto label_181e8e27c;
                    }
                    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                    }
                    pSVar31 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                    pSVar25 = "Racing Finish Region Cuboid";
                    goto joined_r0x000181e8cfc7;
                  }
                  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                  }
                  pSVar31 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                  pSVar25 = "Racing Start Barrier Cuboid";
                  if (pSVar31 != (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *)0x0)
                  goto label_181e8cfd4;
                  goto label_181e8e35d;
                }
                if (pMVar21 == (Map_MapScriptSceneObject_o *)0x0) goto label_181e8e35d;
                (pMVar21->fields).Asset = "Geometry/Cuboid";
                Il2CppCodeGenWriteBarrier(&(pMVar21->fields).Asset,"Geometry/Cuboid");
                pMVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
                Map_MapScriptBasicMaterial___ctor(pMVar29,(MethodInfo *)0x0);
                if (pMVar29 == (Map_MapScriptBasicMaterial_o *)0x0) goto label_181e8e35d;
                (pMVar29->fields).Shader = "Transparent";
                Il2CppCodeGenWriteBarrier(&(pMVar29->fields).Shader,"Transparent");
                pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
                local_2f8.r = 0.0;
                local_2f8.g = 0.917;
                local_2f8.b = 1.0;
                local_2f8.a = 0.32;
                Utility_Color255___ctor_23327a0(pUVar30,(UnityEngine_Color_o *)&local_2f8,(MethodInfo *)0x0);
                (pMVar29->fields).Color = pUVar30;
                Il2CppCodeGenWriteBarrier(&(pMVar29->fields).Color,pUVar30);
                (pMVar21->fields).Material = (Map_MapScriptBaseMaterial_o *)pMVar29;
                Il2CppCodeGenWriteBarrier(&(pMVar21->fields).Material,pMVar29);
              }
              if ((((uint)pSVar26->max_length < 6) ||
                  (fVar33 = System_Single__Parse(pSVar26->m_Items[5],(MethodInfo *)0x0),
                  (uint)pSVar26->max_length < 7)) ||
                 (fVar34 = System_Single__Parse(pSVar26->m_Items[6],(MethodInfo *)0x0),
                 (uint)pSVar26->max_length < 8)) goto label_181e8e363;
              local_228.fields.x = fVar33;
              local_228.fields.y = fVar34;
              local_228.fields.z = System_Single__Parse(pSVar26->m_Items[7],(MethodInfo *)0x0);
              Map_MapScriptBaseObject__SetPosition
                        ((Map_MapScriptBaseObject_o *)pMVar21,&local_228,(MethodInfo *)0x0);
              if (((((uint)pSVar26->max_length < 9) ||
                   (fVar33 = System_Single__Parse(pSVar26->m_Items[8],(MethodInfo *)0x0),
                   (uint)pSVar26->max_length < 10)) ||
                  (fVar34 = System_Single__Parse(pSVar26->m_Items[9],(MethodInfo *)0x0),
                  (uint)pSVar26->max_length < 0xb)) ||
                 (fVar35 = System_Single__Parse(pSVar26->m_Items[10],(MethodInfo *)0x0),
                 (uint)pSVar26->max_length < 0xc)) goto label_181e8e363;
              local_188.fields.x = fVar33;
              local_188.fields.y = fVar34;
              local_188.fields.z = fVar35;
              local_188.fields.w = System_Single__Parse(pSVar26->m_Items[0xb],(MethodInfo *)0x0);
              Map_MapScriptBaseObject__SetRotation_1eb55a0
                        ((Map_MapScriptBaseObject_o *)pMVar21,&local_188,(MethodInfo *)0x0);
              if ((((uint)pSVar26->max_length < 3) ||
                  (fVar33 = System_Single__Parse(pSVar26->m_Items[2],(MethodInfo *)0x0),
                  (uint)pSVar26->max_length < 4)) ||
                 (fVar34 = System_Single__Parse(pSVar26->m_Items[3],(MethodInfo *)0x0),
                 (uint)pSVar26->max_length < 5)) goto label_181e8e363;
              local_218.fields.x = fVar33;
              local_218.fields.y = fVar34;
              local_218.fields.z = System_Single__Parse(pSVar26->m_Items[4],(MethodInfo *)0x0);
              pUVar28 = &local_218;
label_181e8d141:
              Map_MapScriptBaseObject__SetScale
                        ((Map_MapScriptBaseObject_o *)pMVar21,pUVar28,(MethodInfo *)0x0);
            }
            else {
              if (uVar9 == 0) goto label_181e8e363;
              if (pSVar26->m_Items[0] == (System_String_o *)0x0) goto label_181e8e35d;
              bVar19 = System_String__StartsWith(pSVar26->m_Items[0],"base",(MethodInfo *)0x0);
              uVar9 = (uint)pSVar26->max_length;
              if (bVar19) {
                if (uVar9 < 2) goto label_181e8e363;
                if (pSVar26->m_Items[1] != (System_String_o *)0x0) {
                  pSVar25 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0);
                  bVar19 = System_String__op_Equality(pSVar25,"aot_supply",(MethodInfo *)0x0);
                  if (bVar19) {
                    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                    }
                    pSVar31 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                    pSVar25 = "Supply1";
                    if (pSVar31 == (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *)0x0
                       ) goto label_181e8e35d;
label_181e8c9cc:
                    pMVar22 = System_Collections_Generic_Dictionary_object__object___get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar31,
                                         (Il2CppObject *)pSVar25,
                                         (MethodInfo_147A5B0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                        );
                    if (pMVar21 == (Map_MapScriptSceneObject_o *)0x0) goto label_181e8e35d;
                    (*(pMVar21->klass->vtable)._10_Copy.methodPtr)
                              (pMVar21,(Utility_BaseCSVObject_o *)pMVar22,
                               (pMVar21->klass->vtable)._10_Copy.method);
                  }
                  else {
                    if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
                    if (pSVar26->m_Items[1] == (System_String_o *)0x0) goto label_181e8e35d;
                    pSVar25 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0);
                    bVar19 = System_String__op_Equality(pSVar25,"levelbottom",(MethodInfo *)0x0);
                    if (bVar19) {
                      if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                      }
                      pSVar31 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                      pSVar25 = "LevelBottom";
                      if (pSVar31 !=
                          (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *)0x0)
                      goto label_181e8c9cc;
                      goto label_181e8e35d;
                    }
                  }
                  uVar9 = (uint)pSVar26->max_length;
                  if ((int)uVar9 < 0xf) {
                    if (((uVar9 < 3) ||
                        (fVar33 = System_Single__Parse(pSVar26->m_Items[2],(MethodInfo *)0x0),
                        (uint)pSVar26->max_length < 4)) ||
                       (fVar34 = System_Single__Parse(pSVar26->m_Items[3],(MethodInfo *)0x0),
                       (uint)pSVar26->max_length < 5)) goto label_181e8e363;
                    fVar35 = System_Single__Parse(pSVar26->m_Items[4],(MethodInfo *)0x0);
                    if (pMVar21 == (Map_MapScriptSceneObject_o *)0x0) goto label_181e8e35d;
                    local_238.fields.x = fVar33;
                    local_238.fields.y = fVar34;
                    local_238.fields.z = fVar35;
                    Map_MapScriptBaseObject__SetPosition
                              ((Map_MapScriptBaseObject_o *)pMVar21,&local_238,(MethodInfo *)0x0);
                    if ((((uint)pSVar26->max_length < 6) ||
                        (fVar33 = System_Single__Parse(pSVar26->m_Items[5],(MethodInfo *)0x0),
                        (uint)pSVar26->max_length < 7)) ||
                       ((fVar34 = System_Single__Parse(pSVar26->m_Items[6],(MethodInfo *)0x0),
                        (uint)pSVar26->max_length < 8 ||
                        (fVar35 = System_Single__Parse(pSVar26->m_Items[7],(MethodInfo *)0x0),
                        (uint)pSVar26->max_length < 9)))) goto label_181e8e363;
                    local_198.fields.x = fVar33;
                    local_198.fields.y = fVar34;
                    local_198.fields.z = fVar35;
                    local_198.fields.w = System_Single__Parse(pSVar26->m_Items[8],(MethodInfo *)0x0);
                    Map_MapScriptBaseObject__SetRotation_1eb55a0
                              ((Map_MapScriptBaseObject_o *)pMVar21,&local_198,(MethodInfo *)0x0);
                  }
                  else {
                    if (((uVar9 < 0xd) ||
                        (fVar33 = System_Single__Parse(pSVar26->m_Items[0xc],(MethodInfo *)0x0),
                        (uint)pSVar26->max_length < 0xe)) ||
                       (fVar34 = System_Single__Parse(pSVar26->m_Items[0xd],(MethodInfo *)0x0),
                       (uint)pSVar26->max_length < 0xf)) goto label_181e8e363;
                    fVar35 = System_Single__Parse(pSVar26->m_Items[0xe],(MethodInfo *)0x0);
                    if (pMVar21 == (Map_MapScriptSceneObject_o *)0x0) goto label_181e8e35d;
                    local_258.fields.x = fVar33;
                    local_258.fields.y = fVar34;
                    local_258.fields.z = fVar35;
                    Map_MapScriptBaseObject__SetPosition
                              ((Map_MapScriptBaseObject_o *)pMVar21,&local_258,(MethodInfo *)0x0);
                    if (((((uint)pSVar26->max_length < 0x10) ||
                         (fVar33 = System_Single__Parse(pSVar26->m_Items[0xf],(MethodInfo *)0x0),
                         (uint)pSVar26->max_length < 0x11)) ||
                        (fVar34 = System_Single__Parse(pSVar26->m_Items[0x10],(MethodInfo *)0x0),
                        (uint)pSVar26->max_length < 0x12)) ||
                       (fVar35 = System_Single__Parse(pSVar26->m_Items[0x11],(MethodInfo *)0x0),
                       (uint)pSVar26->max_length < 0x13)) goto label_181e8e363;
                    local_1a8.fields.x = fVar33;
                    local_1a8.fields.y = fVar34;
                    local_1a8.fields.z = fVar35;
                    local_1a8.fields.w = System_Single__Parse(pSVar26->m_Items[0x12],(MethodInfo *)0x0);
                    Map_MapScriptBaseObject__SetRotation_1eb55a0
                              ((Map_MapScriptBaseObject_o *)pMVar21,&local_1a8,(MethodInfo *)0x0);
                    if ((((uint)pSVar26->max_length < 4) ||
                        (fVar33 = System_Single__Parse(pSVar26->m_Items[3],(MethodInfo *)0x0),
                        (uint)pSVar26->max_length < 5)) ||
                       (fVar34 = System_Single__Parse(pSVar26->m_Items[4],(MethodInfo *)0x0),
                       (uint)pSVar26->max_length < 6)) goto label_181e8e363;
                    local_248.fields.x = fVar33;
                    local_248.fields.y = fVar34;
                    local_248.fields.z = System_Single__Parse(pSVar26->m_Items[5],(MethodInfo *)0x0);
                    Map_MapScriptBaseObject__SetScale
                              ((Map_MapScriptBaseObject_o *)pMVar21,&local_248,(MethodInfo *)0x0);
                  }
                  if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
                  if (pSVar26->m_Items[1] != (System_String_o *)0x0) {
                    pSVar25 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0);
                    bVar19 = System_String__op_Equality(pSVar25,"aot_supply",(MethodInfo *)0x0);
                    if (bVar19) {
                      pUVar28 = Map_MapScriptBaseObject__GetPosition
                                          (&local_108,(Map_MapScriptBaseObject_o *)pMVar21,(MethodInfo *)0x0);
                      uVar2 = (pUVar28->fields).x;
                      uVar5 = (pUVar28->fields).y;
                      fVar33 = (pUVar28->fields).z;
                      pUVar28 = Map_MapScriptBaseObject__GetRotation
                                          (&local_f8,(Map_MapScriptBaseObject_o *)pMVar21,(MethodInfo *)0x0);
                      uVar3 = (pUVar28->fields).x;
                      uVar6 = (pUVar28->fields).y;
                      local_140[0].x = (float)uVar3 * 0.017453292;
                      local_140[0].y = (float)uVar6 * 0.017453292;
                      local_140[0].z = (pUVar28->fields).z * 0.017453292;
                      pUVar23 = UnityEngine_Quaternion__Internal_FromEulerRad
                                          (local_e8,(UnityEngine_Vector3_o *)local_140,(MethodInfo *)0x0);
                      uVar15._0_4_ = (pUVar23->fields).x;
                      uVar15._4_4_ = (pUVar23->fields).y;
                      uVar16._0_4_ = (pUVar23->fields).z;
                      uVar16._4_4_ = (pUVar23->fields).w;
                      if (Il2CppMethodInitialized_18434506d == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                        Il2CppMethodInitialized_18434506d = '\x01';
                      }
                      pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
                      local_128.x = (pUVar14->backVector).fields.x;
                      local_128.y = (pUVar14->backVector).fields.y;
                      local_128.z = (pUVar14->backVector).fields.z;
                      local_2f8._0_8_ = uVar15;
                      local_2f8._8_8_ = uVar16;
                      pUVar28 = UnityEngine_Quaternion__op_Multiply_2f08cb0
                                          (&local_118,(UnityEngine_Quaternion_o *)&local_2f8,
                                           (UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
                      uVar4 = (pUVar28->fields).x;
                      uVar7 = (pUVar28->fields).y;
                      local_158.x = (float)uVar4 * 0.37 + (float)uVar2;
                      local_158.y = (float)uVar7 * 0.37 + (float)uVar5;
                      local_158.z = (pUVar28->fields).z * 0.37 + fVar33;
                      Map_MapScriptBaseObject__SetPosition
                                ((Map_MapScriptBaseObject_o *)pMVar21,(UnityEngine_Vector3_o *)&local_158,
                                 (MethodInfo *)0x0);
                    }
                    goto label_181e8d14c;
                  }
                }
                goto label_181e8e35d;
              }
              if (uVar9 == 0) goto label_181e8e363;
              if (pSVar26->m_Items[0] == (System_String_o *)0x0) goto label_181e8e35d;
              bVar19 = System_String__StartsWith(pSVar26->m_Items[0],"photon",(MethodInfo *)0x0);
              uVar9 = (uint)pSVar26->max_length;
              if (bVar19) {
                if (uVar9 < 2) goto label_181e8e363;
                if (pSVar26->m_Items[1] != (System_String_o *)0x0) {
                  pSVar25 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0);
                  bVar19 = System_String__op_Equality(pSVar25,"cannonground",(MethodInfo *)0x0);
                  if (bVar19) {
label_181e8c5e4:
                    if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
                    if (pSVar26->m_Items[1] != (System_String_o *)0x0) {
                      pSVar25 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0);
                      bVar19 = System_String__op_Equality(pSVar25,"cannonground",(MethodInfo *)0x0);
                      if (bVar19) {
                        if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                        }
                        pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
                                  TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                        pSVar25 = "Cannon2";
                      }
                      else {
                        if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                        }
                        pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
                                  TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                        pSVar25 = "Cannon3";
                      }
                      if ((pSVar13 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                         (pMVar22 = System_Collections_Generic_Dictionary_object__object___get_Item
                                              (pSVar13,(Il2CppObject *)pSVar25,
                                               (MethodInfo_147A5B0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                              ), pMVar21 != (Map_MapScriptSceneObject_o *)0x0)) {
                        (*(pMVar21->klass->vtable)._10_Copy.methodPtr)
                                  (pMVar21,(Utility_BaseCSVObject_o *)pMVar22,
                                   (pMVar21->klass->vtable)._10_Copy.method);
                        uVar9 = (uint)pSVar26->max_length;
                        if ((int)uVar9 < 0xf) {
                          if (((uVar9 < 3) ||
                              (fVar33 = System_Single__Parse(pSVar26->m_Items[2],(MethodInfo *)0x0),
                              (uint)pSVar26->max_length < 4)) ||
                             (fVar34 = System_Single__Parse(pSVar26->m_Items[3],(MethodInfo *)0x0),
                             (uint)pSVar26->max_length < 5)) goto label_181e8e363;
                          local_268.fields.x = fVar33;
                          local_268.fields.y = fVar34;
                          local_268.fields.z = System_Single__Parse(pSVar26->m_Items[4],(MethodInfo *)0x0);
                          Map_MapScriptBaseObject__SetPosition
                                    ((Map_MapScriptBaseObject_o *)pMVar21,&local_268,(MethodInfo *)0x0);
                          if (((((uint)pSVar26->max_length < 6) ||
                               (fVar33 = System_Single__Parse(pSVar26->m_Items[5],(MethodInfo *)0x0),
                               (uint)pSVar26->max_length < 7)) ||
                              (fVar34 = System_Single__Parse(pSVar26->m_Items[6],(MethodInfo *)0x0),
                              (uint)pSVar26->max_length < 8)) ||
                             (fVar35 = System_Single__Parse(pSVar26->m_Items[7],(MethodInfo *)0x0),
                             (uint)pSVar26->max_length < 9)) goto label_181e8e363;
                          local_1b8.fields.x = fVar33;
                          local_1b8.fields.y = fVar34;
                          local_1b8.fields.z = fVar35;
                          local_1b8.fields.w = System_Single__Parse(pSVar26->m_Items[8],(MethodInfo *)0x0);
                          Map_MapScriptBaseObject__SetRotation_1eb55a0
                                    ((Map_MapScriptBaseObject_o *)pMVar21,&local_1b8,(MethodInfo *)0x0);
                          goto label_181e8d14c;
                        }
                        if (((uVar9 < 0xd) ||
                            (fVar33 = System_Single__Parse(pSVar26->m_Items[0xc],(MethodInfo *)0x0),
                            (uint)pSVar26->max_length < 0xe)) ||
                           (fVar34 = System_Single__Parse(pSVar26->m_Items[0xd],(MethodInfo *)0x0),
                           (uint)pSVar26->max_length < 0xf)) goto label_181e8e363;
                        local_288.fields.x = fVar33;
                        local_288.fields.y = fVar34;
                        local_288.fields.z = System_Single__Parse(pSVar26->m_Items[0xe],(MethodInfo *)0x0);
                        Map_MapScriptBaseObject__SetPosition
                                  ((Map_MapScriptBaseObject_o *)pMVar21,&local_288,(MethodInfo *)0x0);
                        if ((((uint)pSVar26->max_length < 0x10) ||
                            (fVar33 = System_Single__Parse(pSVar26->m_Items[0xf],(MethodInfo *)0x0),
                            (uint)pSVar26->max_length < 0x11)) ||
                           ((fVar34 = System_Single__Parse(pSVar26->m_Items[0x10],(MethodInfo *)0x0),
                            (uint)pSVar26->max_length < 0x12 ||
                            (fVar35 = System_Single__Parse(pSVar26->m_Items[0x11],(MethodInfo *)0x0),
                            (uint)pSVar26->max_length < 0x13)))) goto label_181e8e363;
                        local_1c8.fields.x = fVar33;
                        local_1c8.fields.y = fVar34;
                        local_1c8.fields.z = fVar35;
                        local_1c8.fields.w = System_Single__Parse(pSVar26->m_Items[0x12],(MethodInfo *)0x0);
                        Map_MapScriptBaseObject__SetRotation_1eb55a0
                                  ((Map_MapScriptBaseObject_o *)pMVar21,&local_1c8,(MethodInfo *)0x0);
                        if ((((uint)pSVar26->max_length < 4) ||
                            (fVar33 = System_Single__Parse(pSVar26->m_Items[3],(MethodInfo *)0x0),
                            (uint)pSVar26->max_length < 5)) ||
                           (fVar34 = System_Single__Parse(pSVar26->m_Items[4],(MethodInfo *)0x0),
                           (uint)pSVar26->max_length < 6)) goto label_181e8e363;
                        local_278.fields.x = fVar33;
                        local_278.fields.y = fVar34;
                        local_278.fields.z = System_Single__Parse(pSVar26->m_Items[5],(MethodInfo *)0x0);
                        pUVar28 = &local_278;
                        goto label_181e8d141;
                      }
                    }
                  }
                  else {
                    if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
                    if (pSVar26->m_Items[1] != (System_String_o *)0x0) {
                      pSVar25 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0);
                      bVar19 = System_String__op_Equality(pSVar25,"cannonwall",(MethodInfo *)0x0);
                      if (bVar19) goto label_181e8c5e4;
                      if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
                      if ((pSVar26->m_Items[1] != (System_String_o *)0x0) &&
                         (pSVar25 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0),
                         pSVar25 != (System_String_o *)0x0)) {
                        bVar19 = System_String__StartsWith(pSVar25,"spawn",(MethodInfo *)0x0);
                        if (!bVar19) goto label_181e8d14c;
                        if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                        }
                        pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
                                  TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                        if ((pSVar13 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                           (System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSVar13,(Il2CppObject *)"Titan SpawnPoint",
                                       (MethodInfo_147A5B0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                      ), pMVar21 != (Map_MapScriptSceneObject_o *)0x0)) {
                          il2cpp_runtime_helper_180027b70(10);
                          if (((uint)pSVar26->max_length < 5) ||
                             ((fVar33 = System_Single__Parse(pSVar26->m_Items[4],(MethodInfo *)0x0),
                              (uint)pSVar26->max_length < 6 ||
                              (fVar34 = System_Single__Parse(pSVar26->m_Items[5],(MethodInfo *)0x0),
                              (uint)pSVar26->max_length < 7)))) goto label_181e8e363;
                          local_298.fields.x = fVar33;
                          local_298.fields.y = fVar34;
                          local_298.fields.z = System_Single__Parse(pSVar26->m_Items[6],(MethodInfo *)0x0);
                          Map_MapScriptBaseObject__SetPosition
                                    ((Map_MapScriptBaseObject_o *)pMVar21,&local_298,(MethodInfo *)0x0);
                          if (((uint)pSVar26->max_length < 8) ||
                             (((fVar33 = System_Single__Parse(pSVar26->m_Items[7],(MethodInfo *)0x0),
                               (uint)pSVar26->max_length < 9 ||
                               (fVar34 = System_Single__Parse(pSVar26->m_Items[8],(MethodInfo *)0x0),
                               (uint)pSVar26->max_length < 10)) ||
                              (fVar35 = System_Single__Parse(pSVar26->m_Items[9],(MethodInfo *)0x0),
                              (uint)pSVar26->max_length < 0xb)))) goto label_181e8e363;
                          local_1d8.fields.x = fVar33;
                          local_1d8.fields.y = fVar34;
                          local_1d8.fields.z = fVar35;
                          local_1d8.fields.w = System_Single__Parse(pSVar26->m_Items[10],(MethodInfo *)0x0);
                          Map_MapScriptBaseObject__SetRotation_1eb55a0
                                    ((Map_MapScriptBaseObject_o *)pMVar21,&local_1d8,(MethodInfo *)0x0);
                          goto label_181e8e1d6;
                        }
                      }
                    }
                  }
                }
                goto label_181e8e35d;
              }
              if (uVar9 == 0) goto label_181e8e363;
              if (pSVar26->m_Items[0] == (System_String_o *)0x0) goto label_181e8e35d;
              bVar19 = System_String__StartsWith(pSVar26->m_Items[0],"racing",(MethodInfo *)0x0);
              pSVar25 = "";
              uVar9 = (uint)pSVar26->max_length;
              if (!bVar19) {
                if (uVar9 == 0) goto label_181e8e363;
                if (pSVar26->m_Items[0] == (System_String_o *)0x0) goto label_181e8e35d;
                bVar19 = System_String__StartsWith
                                   (pSVar26->m_Items[0],"map",(MethodInfo *)0x0);
                if (!bVar19) goto label_181e8d14c;
                if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
                if (pSVar26->m_Items[1] == (System_String_o *)0x0) goto label_181e8e35d;
                bVar19 = System_String__StartsWith
                                   (pSVar26->m_Items[1],"disablebounds",(MethodInfo *)0x0);
                if (!bVar19) goto label_181e8d14c;
                uVar32 = uVar32 + 1;
                bVar17 = true;
                goto label_181e8bdf0;
              }
              if (uVar9 < 2) goto label_181e8e363;
              if (pSVar26->m_Items[1] == (System_String_o *)0x0) goto label_181e8e35d;
              bVar19 = System_String__StartsWith(pSVar26->m_Items[1],"start",(MethodInfo *)0x0);
              if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
              if (bVar19) {
                if (("start" != (System_String_o *)0x0) &&
                   (pSVar26->m_Items[1] != (System_String_o *)0x0)) {
                  pSVar27 = System_String__Substring
                                      (pSVar26->m_Items[1],("start"->fields)._stringLength,
                                       (MethodInfo *)0x0);
                  pSVar25 = "Racing Start Barrier ";
                  goto label_181e8c1cd;
                }
                goto label_181e8e35d;
              }
              if (pSVar26->m_Items[1] == (System_String_o *)0x0) goto label_181e8e35d;
              bVar19 = System_String__StartsWith(pSVar26->m_Items[1],"end",(MethodInfo *)0x0);
              if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
              if (bVar19) {
                if (("end" != (System_String_o *)0x0) &&
                   (pSVar26->m_Items[1] != (System_String_o *)0x0)) {
                  pSVar27 = System_String__Substring
                                      (pSVar26->m_Items[1],("end"->fields)._stringLength,
                                       (MethodInfo *)0x0);
                  pSVar25 = "Racing Finish Region ";
                  goto label_181e8c1cd;
                }
                goto label_181e8e35d;
              }
              if (pSVar26->m_Items[1] == (System_String_o *)0x0) goto label_181e8e35d;
              bVar19 = System_String__StartsWith(pSVar26->m_Items[1],"kill",(MethodInfo *)0x0);
              if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
              if (bVar19) {
                if (("kill" == (System_String_o *)0x0) ||
                   (pSVar26->m_Items[1] == (System_String_o *)0x0)) goto label_181e8e35d;
                pSVar27 = System_String__Substring
                                    (pSVar26->m_Items[1],("kill"->fields)._stringLength,
                                     (MethodInfo *)0x0);
                pSVar25 = "Kill Region ";
label_181e8c1cd:
                pSVar25 = System_String__Concat_1969e50(pSVar25,pSVar27,(MethodInfo *)0x0);
              }
              else {
                if (pSVar26->m_Items[1] == (System_String_o *)0x0) goto label_181e8e35d;
                bVar19 = System_String__StartsWith
                                   (pSVar26->m_Items[1],"checkpoint",(MethodInfo *)0x0);
                if (bVar19) {
                  if ((uint)pSVar26->max_length < 2) goto label_181e8e363;
                  if (("checkpoint" != (System_String_o *)0x0) &&
                     (pSVar26->m_Items[1] != (System_String_o *)0x0)) {
                    pSVar27 = System_String__Substring
                                        (pSVar26->m_Items[1],("checkpoint"->fields)._stringLength,
                                         (MethodInfo *)0x0);
                    pSVar25 = "Racing Checkpoint Region ";
                    goto label_181e8c1cd;
                  }
                  goto label_181e8e35d;
                }
              }
              if (pSVar25 == (System_String_o *)0x0) goto label_181e8e35d;
              if (0 < (pSVar25->fields)._stringLength) {
                if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                }
                pSVar31 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabsLower;
                pSVar27 = System_String__ToLower(pSVar25,(MethodInfo *)0x0);
                if (pSVar31 != (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *)0x0) {
                  bVar19 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar31,
                                      (Il2CppObject *)pSVar27,
                                      (MethodInfo_1455450 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_ContainsKey
                                     );
                  if (!bVar19) goto label_181e8d14c;
                  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                  }
                  pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
                            TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabsLower;
                  pSVar25 = System_String__ToLower(pSVar25,(MethodInfo *)0x0);
                  if ((pSVar13 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                     (System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar13,(Il2CppObject *)pSVar25,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                ), pMVar21 != (Map_MapScriptSceneObject_o *)0x0)) {
                    il2cpp_runtime_helper_180027b70(10);
                    if (((uint)pSVar26->max_length < 6) ||
                       ((fVar33 = System_Single__Parse(pSVar26->m_Items[5],(MethodInfo *)0x0),
                        (uint)pSVar26->max_length < 7 ||
                        (fVar34 = System_Single__Parse(pSVar26->m_Items[6],(MethodInfo *)0x0),
                        (uint)pSVar26->max_length < 8)))) goto label_181e8e363;
                    local_2b8.fields.x = fVar33;
                    local_2b8.fields.y = fVar34;
                    local_2b8.fields.z = System_Single__Parse(pSVar26->m_Items[7],(MethodInfo *)0x0);
                    Map_MapScriptBaseObject__SetPosition
                              ((Map_MapScriptBaseObject_o *)pMVar21,&local_2b8,(MethodInfo *)0x0);
                    if (((uint)pSVar26->max_length < 9) ||
                       (((fVar33 = System_Single__Parse(pSVar26->m_Items[8],(MethodInfo *)0x0),
                         (uint)pSVar26->max_length < 10 ||
                         (fVar34 = System_Single__Parse(pSVar26->m_Items[9],(MethodInfo *)0x0),
                         (uint)pSVar26->max_length < 0xb)) ||
                        (fVar35 = System_Single__Parse(pSVar26->m_Items[10],(MethodInfo *)0x0),
                        (uint)pSVar26->max_length < 0xc)))) goto label_181e8e363;
                    local_1e8.fields.x = fVar33;
                    local_1e8.fields.y = fVar34;
                    local_1e8.fields.z = fVar35;
                    local_1e8.fields.w = System_Single__Parse(pSVar26->m_Items[0xb],(MethodInfo *)0x0);
                    Map_MapScriptBaseObject__SetRotation_1eb55a0
                              ((Map_MapScriptBaseObject_o *)pMVar21,&local_1e8,(MethodInfo *)0x0);
                    if ((((uint)pSVar26->max_length < 3) ||
                        (fVar33 = System_Single__Parse(pSVar26->m_Items[2],(MethodInfo *)0x0),
                        (uint)pSVar26->max_length < 4)) ||
                       (fVar34 = System_Single__Parse(pSVar26->m_Items[3],(MethodInfo *)0x0),
                       (uint)pSVar26->max_length < 5)) goto label_181e8e363;
                    local_2a8.fields.x = fVar33;
                    local_2a8.fields.y = fVar34;
                    local_2a8.fields.z = System_Single__Parse(pSVar26->m_Items[4],(MethodInfo *)0x0);
                    Map_MapScriptBaseObject__SetScale
                              ((Map_MapScriptBaseObject_o *)pMVar21,&local_2a8,(MethodInfo *)0x0);
                    goto label_181e8e1d6;
                  }
                }
                goto label_181e8e35d;
              }
            }
label_181e8d14c:
            if (pMVar21 != (Map_MapScriptSceneObject_o *)0x0) goto label_181e8e1d6;
            goto label_181e8e35d;
          }
          if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
          }
          if ((uint)pSVar26->max_length < 2) goto label_181e8e3a5;
          if (pSVar26->m_Items[1] == (System_String_o *)0x0) goto label_181e8e357;
          pSVar31 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabsLower;
          pSVar25 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0);
          if (pSVar31 == (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *)0x0)
          goto label_181e8e357;
          bVar19 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar31,
                              (Il2CppObject *)pSVar25,
                              (MethodInfo_1455450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_ContainsKey
                             );
          if (bVar19) {
            if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
            }
            if ((uint)pSVar26->max_length < 2) goto label_181e8e3a5;
            if (pSVar26->m_Items[1] == (System_String_o *)0x0) goto label_181e8e357;
            pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
                      TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabsLower;
            pSVar25 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0);
            if ((pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
               (pMVar22 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar13,(Il2CppObject *)pSVar25,
                                     (MethodInfo_147A5B0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                    ), pMVar21 == (Map_MapScriptSceneObject_o *)0x0)) goto label_181e8e357;
            (*(pMVar21->klass->vtable)._10_Copy.methodPtr)
                      (pMVar21,(Utility_BaseCSVObject_o *)pMVar22,(pMVar21->klass->vtable)._10_Copy.method);
          }
          if ((((uint)pSVar26->max_length < 0xd) ||
              (fVar33 = System_Single__Parse(pSVar26->m_Items[0xc],(MethodInfo *)0x0),
              (uint)pSVar26->max_length < 0xe)) ||
             (fVar34 = System_Single__Parse(pSVar26->m_Items[0xd],(MethodInfo *)0x0),
             (uint)pSVar26->max_length < 0xf)) goto label_181e8e3a5;
          fVar35 = System_Single__Parse(pSVar26->m_Items[0xe],(MethodInfo *)0x0);
          if (pMVar21 == (Map_MapScriptSceneObject_o *)0x0) goto label_181e8e357;
          local_1f8.fields.x = fVar33;
          local_1f8.fields.y = fVar34;
          local_1f8.fields.z = fVar35;
          Map_MapScriptBaseObject__SetPosition
                    ((Map_MapScriptBaseObject_o *)pMVar21,&local_1f8,(MethodInfo *)0x0);
          if ((((uint)pSVar26->max_length < 0x10) ||
              (fVar33 = System_Single__Parse(pSVar26->m_Items[0xf],(MethodInfo *)0x0),
              (uint)pSVar26->max_length < 0x11)) ||
             ((fVar34 = System_Single__Parse(pSVar26->m_Items[0x10],(MethodInfo *)0x0),
              (uint)pSVar26->max_length < 0x12 ||
              (fVar35 = System_Single__Parse(pSVar26->m_Items[0x11],(MethodInfo *)0x0),
              (uint)pSVar26->max_length < 0x13)))) goto label_181e8e3a5;
          local_178.fields.x = fVar33;
          local_178.fields.y = fVar34;
          local_178.fields.z = fVar35;
          local_178.fields.w = System_Single__Parse(pSVar26->m_Items[0x12],(MethodInfo *)0x0);
          Map_MapScriptBaseObject__SetRotation_1eb55a0
                    ((Map_MapScriptBaseObject_o *)pMVar21,&local_178,(MethodInfo *)0x0);
          if ((((uint)pSVar26->max_length < 4) ||
              (fVar33 = System_Single__Parse(pSVar26->m_Items[3],(MethodInfo *)0x0),
              (uint)pSVar26->max_length < 5)) ||
             (fVar34 = System_Single__Parse(pSVar26->m_Items[4],(MethodInfo *)0x0),
             (uint)pSVar26->max_length < 6)) goto label_181e8e3a5;
          local_2c8.fields.x = fVar33;
          local_2c8.fields.y = fVar34;
          local_2c8.fields.z = System_Single__Parse(pSVar26->m_Items[5],(MethodInfo *)0x0);
          Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)pMVar21,&local_2c8,(MethodInfo *)0x0)
          ;
          if ((uint)pSVar26->max_length < 3) goto label_181e8e3a5;
          if (pSVar26->m_Items[2] == (System_String_o *)0x0) goto label_181e8e357;
          pSVar25 = System_String__ToLower(pSVar26->m_Items[2],(MethodInfo *)0x0);
          __this_01 = (Map_MapScriptReflectiveMaterial_o *)(pMVar21->fields).Material;
          if ((__this_01 == (Map_MapScriptReflectiveMaterial_o *)0x0) ||
             (pUVar30 = (__this_01->fields).Color, pUVar30 == (Utility_Color255_o *)0x0)) goto label_181e8e357;
          fVar33 = (float)(pUVar30->fields).A / 255.0;
          bVar19 = System_String__op_Inequality(pSVar25,"default",(MethodInfo *)0x0);
          if (bVar19) {
            if (pSVar25 == (System_String_o *)0x0) goto label_181e8e357;
            bVar19 = System_String__StartsWith(pSVar25,"transparent",(MethodInfo *)0x0);
            if (bVar19) {
              __this_01 = (Map_MapScriptReflectiveMaterial_o *)
                          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
              Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this_01,(MethodInfo *)0x0);
              if (__this_01 == (Map_MapScriptReflectiveMaterial_o *)0x0) goto label_181e8e357;
              (__this_01->fields).Shader = "Transparent";
              Il2CppCodeGenWriteBarrier(&(__this_01->fields).Shader,"Transparent");
              pSVar27 = System_String__Substring(pSVar25,0xb,(MethodInfo *)0x0);
              bVar19 = System_Single__TryParse(pSVar27,local_res20,(MethodInfo *)0x0);
              if (bVar19) {
                fVar33 = local_res20[0];
              }
            }
            else {
              bVar19 = System_String__op_Equality(pSVar25,"empty",(MethodInfo *)0x0);
              if (bVar19) {
                __this_01 = (Map_MapScriptReflectiveMaterial_o *)
                            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
                Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this_01,(MethodInfo *)0x0)
                ;
                if (__this_01 == (Map_MapScriptReflectiveMaterial_o *)0x0) goto label_181e8e357;
                (__this_01->fields).Shader = "Basic";
                Il2CppCodeGenWriteBarrier(&(__this_01->fields).Shader,"Basic");
              }
              else {
                bVar19 = System_String__op_Equality(pSVar25,"ice1",(MethodInfo *)0x0);
                if (bVar19) {
                  __this_01 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial);
                  Map_MapScriptReflectiveMaterial___ctor(__this_01,(MethodInfo *)0x0);
                  if (__this_01 == (Map_MapScriptReflectiveMaterial_o *)0x0) goto label_181e8e357;
                  (__this_01->fields).Shader = "Reflective";
                  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Shader,"Reflective");
                  pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
                  Utility_Color255___ctor
                            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar30,0xb2,0xe3,0xff,
                             0xff,(MethodInfo *)0x0);
                  (__this_01->fields).Color = pUVar30;
                  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Color,pUVar30);
                  if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                  }
                  pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
                            TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesLower;
                  if ((pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                     (pMVar29 = System_Collections_Generic_Dictionary_object__object___get_Item
                                          (pSVar13,(Il2CppObject *)pSVar25,
                                           (MethodInfo_147A5B0 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item
                                          ), pMVar29 == (Map_MapScriptBasicMaterial_o *)0x0))
                  goto label_181e8e357;
                  bVar8 = (TypeInfo_Map_MapScriptBasicMaterial->_2).typeHierarchyDepth;
                  if (((__this_01->klass->_2).typeHierarchyDepth < bVar8) ||
                     ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar8 - 1] !=
                      (Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial)) {
                    il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Map_MapScriptBasicMaterial)
                    ;
                  }
                  pSVar27 = (pMVar29->fields).Texture;
                  (__this_01->fields).Texture = pSVar27;
                  bVar8 = (TypeInfo_Map_MapScriptBasicMaterial->_2).typeHierarchyDepth;
                  if (((__this_01->klass->_2).typeHierarchyDepth < bVar8) ||
                     ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar8 - 1] !=
                      (Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial)) {
                    il2cpp_codegen_raise_invalid_cast_exception(__this_01);
                  }
                  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Texture,pSVar27);
                  if (((uint)pSVar26->max_length < 0xb) ||
                     (fVar34 = System_Single__Parse(pSVar26->m_Items[10],(MethodInfo *)0x0),
                     (uint)pSVar26->max_length < 0xc)) goto label_181e8e3a5;
                  fVar35 = System_Single__Parse(pSVar26->m_Items[0xb],(MethodInfo *)0x0);
                  bVar8 = (TypeInfo_Map_MapScriptBasicMaterial->_2).typeHierarchyDepth;
                  if (((__this_01->klass->_2).typeHierarchyDepth < bVar8) ||
                     ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar8 - 1] !=
                      (Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial)) {
                    il2cpp_codegen_raise_invalid_cast_exception(__this_01);
                  }
                  (__this_01->fields).Tiling.fields.x = fVar34;
                  (__this_01->fields).Tiling.fields.y = fVar35;
                }
                else {
                  bVar19 = System_String__op_Equality(pSVar25,"barriereditormat",(MethodInfo *)0x0);
                  if (bVar19) {
                    __this_01 = (Map_MapScriptReflectiveMaterial_o *)
                                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
                    Map_MapScriptBasicMaterial___ctor
                              ((Map_MapScriptBasicMaterial_o *)__this_01,(MethodInfo *)0x0);
                    if (__this_01 == (Map_MapScriptReflectiveMaterial_o *)0x0) goto label_181e8e357;
                    (__this_01->fields).Shader = "Transparent";
                    Il2CppCodeGenWriteBarrier(&(__this_01->fields).Shader,"Transparent");
                    pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
                    local_2f8.r = 0.0;
                    local_2f8.g = 0.917;
                    local_2f8.b = 1.0;
                    local_2f8.a = 0.325;
                  }
                  else {
                    bVar19 = System_String__op_Equality(pSVar25,"regioneditormat",(MethodInfo *)0x0);
                    if (!bVar19) {
                      bVar19 = System_String__op_Equality(pSVar25,"bombexplosiontex",(MethodInfo *)0x0);
                      if (bVar19) {
                        __this_01 = (Map_MapScriptReflectiveMaterial_o *)
                                    il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial);
                        Map_MapScriptLegacyMaterial___ctor
                                  ((Map_MapScriptLegacyMaterial_o *)__this_01,(MethodInfo *)0x0);
                        if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
                        }
                        if (__this_01 == (Map_MapScriptReflectiveMaterial_o *)0x0) goto label_181e8e357;
                        pSVar27 = TypeInfo_Map_MapObjectShader->static_fields->OldBombExplode;
                        (__this_01->fields).Shader = pSVar27;
                        Il2CppCodeGenWriteBarrier(&(__this_01->fields).Shader,pSVar27);
                        pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
                        local_2f8.r = 0.5;
                        local_2f8.g = 0.5;
                        local_2f8.b = 0.5;
                        local_2f8.a = 0.5;
                        Utility_Color255___ctor_23327a0
                                  (pUVar30,(UnityEngine_Color_o *)&local_2f8,(MethodInfo *)0x0);
                        (__this_01->fields).Color = pUVar30;
                        Il2CppCodeGenWriteBarrier(&(__this_01->fields).Color,pUVar30);
                        if (((uint)pSVar26->max_length < 0xb) ||
                           (fVar33 = System_Single__Parse(pSVar26->m_Items[10],(MethodInfo *)0x0),
                           (uint)pSVar26->max_length < 0xc)) goto label_181e8e3a5;
                        fVar34 = System_Single__Parse(pSVar26->m_Items[0xb],(MethodInfo *)0x0);
                        *(float *)((longlong)&(__this_01->fields).Texture + 4) = fVar34;
                        *(float *)&(__this_01->fields).Texture = fVar33;
                        fVar33 = 0.5;
                      }
                      else {
                        bVar19 = System_String__op_Equality(pSVar25,"cannonregionmat",(MethodInfo *)0x0);
                        if (bVar19) {
                          __this_01 = (Map_MapScriptReflectiveMaterial_o *)
                                      il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial);
                          Map_MapScriptLegacyMaterial___ctor
                                    ((Map_MapScriptLegacyMaterial_o *)__this_01,(MethodInfo *)0x0);
                          if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
                          }
                          if (__this_01 == (Map_MapScriptReflectiveMaterial_o *)0x0) goto label_181e8e357;
                          pSVar27 = TypeInfo_Map_MapObjectShader->static_fields->CannonRegionMat;
                          (__this_01->fields).Shader = pSVar27;
                          Il2CppCodeGenWriteBarrier(&(__this_01->fields).Shader,pSVar27);
                          pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
                          local_2f8.r = 0.0;
                          local_2f8.g = 1.0;
                          local_2f8.b = 0.0;
                          local_2f8.a = 1.0;
                          Utility_Color255___ctor_23327a0
                                    (pUVar30,(UnityEngine_Color_o *)&local_2f8,(MethodInfo *)0x0);
                          (__this_01->fields).Color = pUVar30;
                          Il2CppCodeGenWriteBarrier(&(__this_01->fields).Color,pUVar30);
                          fVar33 = 1.0;
                        }
                        else {
                          bVar19 = System_String__op_Equality(pSVar25,"bombtex",(MethodInfo *)0x0)
                          ;
                          if (bVar19) {
                            __this_01 = (Map_MapScriptReflectiveMaterial_o *)
                                        il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial);
                            Map_MapScriptLegacyMaterial___ctor
                                      ((Map_MapScriptLegacyMaterial_o *)__this_01,(MethodInfo *)0x0);
                            if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
                            }
                            if (__this_01 == (Map_MapScriptReflectiveMaterial_o *)0x0) goto label_181e8e357;
                            pSVar27 = TypeInfo_Map_MapObjectShader->static_fields->BombTexMat;
                            (__this_01->fields).Shader = pSVar27;
                            Il2CppCodeGenWriteBarrier(&(__this_01->fields).Shader,pSVar27);
                            pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
                            local_2f8.r = 0.5;
                            local_2f8.g = 0.5;
                            local_2f8.b = 0.5;
                            local_2f8.a = 0.5;
                            Utility_Color255___ctor_23327a0
                                      (pUVar30,(UnityEngine_Color_o *)&local_2f8,(MethodInfo *)0x0);
                            (__this_01->fields).Color = pUVar30;
                            Il2CppCodeGenWriteBarrier(&(__this_01->fields).Color,pUVar30);
                            if (((uint)pSVar26->max_length < 0xb) ||
                               (fVar33 = System_Single__Parse(pSVar26->m_Items[10],(MethodInfo *)0x0),
                               (uint)pSVar26->max_length < 0xc)) goto label_181e8e3a5;
                            fVar34 = System_Single__Parse(pSVar26->m_Items[0xb],(MethodInfo *)0x0);
                            *(float *)((longlong)&(__this_01->fields).Texture + 4) = fVar34;
                            *(float *)&(__this_01->fields).Texture = fVar33;
                            fVar33 = 0.5;
                          }
                          else {
                            bVar19 = System_String__op_Equality
                                               (pSVar25,"cannonballtrail",(MethodInfo *)0x0);
                            if (bVar19) {
                              __this_01 = (Map_MapScriptReflectiveMaterial_o *)
                                          il2cpp_codegen_object_new
                                                    ((Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial);
                              Map_MapScriptLegacyMaterial___ctor
                                        ((Map_MapScriptLegacyMaterial_o *)__this_01,(MethodInfo *)0x0);
                              if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader)
                                ;
                              }
                              if (__this_01 == (Map_MapScriptReflectiveMaterial_o *)0x0) goto label_181e8e357;
                              pSVar27 = TypeInfo_Map_MapObjectShader->static_fields->Smoke1Mat;
                              (__this_01->fields).Shader = pSVar27;
                              Il2CppCodeGenWriteBarrier(&(__this_01->fields).Shader,pSVar27);
                              pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
                              local_2f8.r = 0.5;
                              local_2f8.g = 0.5;
                              local_2f8.b = 0.5;
                              local_2f8.a = 0.5;
                              Utility_Color255___ctor_23327a0
                                        (pUVar30,(UnityEngine_Color_o *)&local_2f8,(MethodInfo *)0x0);
                              (__this_01->fields).Color = pUVar30;
                              Il2CppCodeGenWriteBarrier(&(__this_01->fields).Color,pUVar30);
                              if (((uint)pSVar26->max_length < 0xb) ||
                                 (fVar33 = System_Single__Parse(pSVar26->m_Items[10],(MethodInfo *)0x0),
                                 (uint)pSVar26->max_length < 0xc)) goto label_181e8e3a5;
                              fVar34 = System_Single__Parse(pSVar26->m_Items[0xb],(MethodInfo *)0x0);
                              *(float *)((longlong)&(__this_01->fields).Texture + 4) = fVar34;
                              *(float *)&(__this_01->fields).Texture = fVar33;
                              fVar33 = 0.5;
                            }
                            else {
                              __this_01 = (Map_MapScriptReflectiveMaterial_o *)
                                          il2cpp_codegen_object_new
                                                    ((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
                              Map_MapScriptBasicMaterial___ctor
                                        ((Map_MapScriptBasicMaterial_o *)__this_01,(MethodInfo *)0x0);
                              if (__this_01 == (Map_MapScriptReflectiveMaterial_o *)0x0) goto label_181e8e357;
                              (__this_01->fields).Shader = "Basic";
                              Il2CppCodeGenWriteBarrier(&(__this_01->fields).Shader,"Basic");
                              bVar19 = System_String__op_Equality
                                                 (pSVar25,"bark",(MethodInfo *)0x0);
                              if ((bVar19) ||
                                 (bVar19 = System_String__op_Equality
                                                     (pSVar25,"grass",(MethodInfo *)0x0), bVar19
                                 )) {
                                pSVar25 = System_String__Concat_1969e50
                                                    (pSVar25,"1",(MethodInfo *)0x0);
                              }
                              if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                              }
                              __this = TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesLower;
                              if (__this == (System_Collections_Generic_Dictionary_string__MapScriptBasicMaterial__o
                                             *)0x0) goto label_181e8e357;
                              bVar19 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                                 ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                  __this,(Il2CppObject *)pSVar25,
                                                  (MethodInfo_1455450 *)
                                                  MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_ContainsKey
                                                 );
                              if (!bVar19) {
                                pSVar27 = System_String__Concat_1969e50
                                                    ("Unhandled legacy texture: ",pSVar24,(MethodInfo *)0x0);
                                if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug)
                                  ;
                                }
                                UnityEngine_Debug__Log((Il2CppObject *)pSVar27,(MethodInfo *)0x0);
                                goto label_181e8dfea;
                              }
                              if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                              }
                              pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
                                        TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesLower;
                              if ((pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                                 || (pMVar29 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                         (pSVar13,(Il2CppObject *)pSVar25,
                                                          (MethodInfo_147A5B0 *)
                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item
                                                       ), pMVar29 == (Map_MapScriptBasicMaterial_o *)0x0))
                              goto label_181e8e357;
                              bVar8 = (TypeInfo_Map_MapScriptBasicMaterial->_2).typeHierarchyDepth;
                              if (((((Map_MapScriptBasicMaterial_c *)__this_01->klass)->_2).typeHierarchyDepth
                                   < bVar8) ||
                                 ((((Map_MapScriptBasicMaterial_c *)__this_01->klass)->_2).typeHierarchy
                                  [(ulonglong)bVar8 - 1] != (Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial
                                 )) {
                                il2cpp_codegen_raise_invalid_cast_exception
                                          (__this_01,TypeInfo_Map_MapScriptBasicMaterial);
                              }
                              pSVar27 = (pMVar29->fields).Texture;
                              (__this_01->fields).Texture = pSVar27;
                              bVar8 = (TypeInfo_Map_MapScriptBasicMaterial->_2).typeHierarchyDepth;
                              if (((((Map_MapScriptBasicMaterial_c *)__this_01->klass)->_2).typeHierarchyDepth
                                   < bVar8) ||
                                 ((((Map_MapScriptBasicMaterial_c *)__this_01->klass)->_2).typeHierarchy
                                  [(ulonglong)bVar8 - 1] != (Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial
                                 )) {
                                il2cpp_codegen_raise_invalid_cast_exception(__this_01);
                              }
                              Il2CppCodeGenWriteBarrier(&(__this_01->fields).Texture,pSVar27);
                              if (((uint)pSVar26->max_length < 0xb) ||
                                 (fVar34 = System_Single__Parse(pSVar26->m_Items[10],(MethodInfo *)0x0),
                                 (uint)pSVar26->max_length < 0xc)) goto label_181e8e3a5;
                              fVar35 = System_Single__Parse(pSVar26->m_Items[0xb],(MethodInfo *)0x0);
                              bVar8 = (TypeInfo_Map_MapScriptBasicMaterial->_2).typeHierarchyDepth;
                              if (((((Map_MapScriptBasicMaterial_c *)__this_01->klass)->_2).typeHierarchyDepth
                                   < bVar8) ||
                                 ((((Map_MapScriptBasicMaterial_c *)__this_01->klass)->_2).typeHierarchy
                                  [(ulonglong)bVar8 - 1] != (Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial
                                 )) {
                                il2cpp_codegen_raise_invalid_cast_exception(__this_01);
                              }
                              (__this_01->fields).Tiling.fields.x = fVar34;
                              (__this_01->fields).Tiling.fields.y = fVar35;
                            }
                          }
                        }
                      }
                      goto label_181e8dfea;
                    }
                    __this_01 = (Map_MapScriptReflectiveMaterial_o *)
                                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
                    Map_MapScriptBasicMaterial___ctor
                              ((Map_MapScriptBasicMaterial_o *)__this_01,(MethodInfo *)0x0);
                    if (__this_01 == (Map_MapScriptReflectiveMaterial_o *)0x0) goto label_181e8e357;
                    (__this_01->fields).Shader = "Transparent";
                    Il2CppCodeGenWriteBarrier(&(__this_01->fields).Shader,"Transparent");
                    pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
                    local_2f8.r = 1.0;
                    local_2f8.g = 0.0;
                    local_2f8.b = 0.0;
                    local_2f8.a = 0.325;
                  }
                  Utility_Color255___ctor_23327a0(pUVar30,(UnityEngine_Color_o *)&local_2f8,(MethodInfo *)0x0)
                  ;
                  (__this_01->fields).Color = pUVar30;
                  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Color,pUVar30);
                  fVar33 = 0.32;
                }
              }
            }
          }
label_181e8dfea:
          if ((uint)pSVar26->max_length < 2) goto label_181e8e3a5;
          if (pSVar26->m_Items[1] == (System_String_o *)0x0) goto label_181e8e357;
          pSVar27 = System_String__ToLower(pSVar26->m_Items[1],(MethodInfo *)0x0);
          if ((uint)pSVar26->max_length < 7) goto label_181e8e3a5;
          bVar19 = System_String__op_Inequality(pSVar26->m_Items[6],"0",(MethodInfo *)0x0);
          if (bVar19) {
            bVar19 = System_String__op_Inequality(pSVar25,"default",(MethodInfo *)0x0);
            if (!bVar19) {
              if (pSVar27 == (System_String_o *)0x0) goto label_181e8e357;
              bVar19 = System_String__StartsWith(pSVar27,"start",(MethodInfo *)0x0);
              if ((((bVar19) ||
                   (bVar19 = System_String__StartsWith(pSVar27,"kill",(MethodInfo *)0x0),
                   bVar19)) ||
                  (bVar19 = System_String__StartsWith(pSVar27,"end",(MethodInfo *)0x0), bVar19
                  )) || (bVar19 = System_String__StartsWith(pSVar27,"checkpoint",(MethodInfo *)0x0),
                        bVar19)) goto label_181e8e1bf;
            }
            bVar19 = System_String__op_Equality(pSVar25,"cannonregionmat",(MethodInfo *)0x0);
            uVar9 = (uint)pSVar26->max_length;
            if (bVar19) {
              if (uVar9 < 9) goto label_181e8e3a5;
              fVar34 = System_Single__Parse(pSVar26->m_Items[8],(MethodInfo *)0x0);
              pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
              color = &local_2d8;
              local_2d8.fields._0_8_ = (ulonglong)(uint)fVar34 << 0x20;
              local_2d8.fields._8_8_ = (ulonglong)(uint)fVar33 << 0x20;
            }
            else {
              if (((uVar9 < 8) ||
                  (fVar34 = System_Single__Parse(pSVar26->m_Items[7],(MethodInfo *)0x0),
                  (uint)pSVar26->max_length < 9)) ||
                 (fVar35 = System_Single__Parse(pSVar26->m_Items[8],(MethodInfo *)0x0),
                 (uint)pSVar26->max_length < 10)) goto label_181e8e3a5;
              fVar36 = System_Single__Parse(pSVar26->m_Items[9],(MethodInfo *)0x0);
              pUVar30 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
              color = &local_168;
              local_168.fields.r = fVar34;
              local_168.fields.g = fVar35;
              local_168.fields.b = fVar36;
              local_168.fields.a = fVar33;
            }
            Utility_Color255___ctor_23327a0(pUVar30,color,(MethodInfo *)0x0);
            if (__this_01 == (Map_MapScriptReflectiveMaterial_o *)0x0) goto label_181e8e357;
            (__this_01->fields).Color = pUVar30;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).Color,pUVar30);
          }
label_181e8e1bf:
          (pMVar21->fields).Material = (Map_MapScriptBaseMaterial_o *)__this_01;
          Il2CppCodeGenWriteBarrier(&(pMVar21->fields).Material,__this_01);
          __this_00 = local_148;
label_181e8e1d6:
          bVar19 = System_String__op_Equality((pMVar21->fields).Asset,"None",(MethodInfo *)0x0)
          ;
          if ((!bVar19) ||
             (bVar19 = System_String__op_Equality
                                 ((pMVar21->fields).Name,"Unnamed",(MethodInfo *)0x0), !bVar19)) {
            iVar20 = Map_MapConverter__GetNextId((MethodInfo *)0x0);
            (pMVar21->fields).Id = iVar20;
            pMVar10 = (__this_00->fields).Objects;
            if ((pMVar10 != (Map_MapScriptObjects_o *)0x0) &&
               (pSVar11 = (pMVar10->fields).Objects,
               pSVar11 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
              il2cpp_runtime_helper_180012890(pSVar11,pMVar21);
              goto label_181e8e27c;
            }
            goto label_181e8e35d;
          }
          pSVar24 = System_String__Concat_1969e50("Unhandled legacy object: ",pSVar24,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
          }
          UnityEngine_Debug__Log((Il2CppObject *)pSVar24,(MethodInfo *)0x0);
          uVar32 = uVar32 + 1;
          goto label_181e8bdf0;
        }
      }
    }
  }
label_181e8e357:
  ThrowNullReferenceException();
label_181e8e28c:
  if (bVar17) {
    return __this_00;
  }
  pMVar10 = (__this_00->fields).Objects;
  if (pMVar10 != (Map_MapScriptObjects_o *)0x0) {
    pSVar11 = (pMVar10->fields).Objects;
    collection = Map_MapConverter__CreateFengBounds((MethodInfo *)0x0);
    if (pSVar11 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)pSVar11,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_AddRange)
      ;
      return __this_00;
    }
  }
label_181e8e35d:
  ThrowNullReferenceException();
}


// Map.MapConverter$$GetNextId
// il2cpp: int32_t Map_MapConverter__GetNextId (const MethodInfo* method);
// 0x181e8ed00

int32_t Map_MapConverter__GetNextId(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345051 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapConverter);
    Il2CppMethodInitialized_184345051 = '\x01';
  }
  TypeInfo_Map_MapConverter->static_fields->_currentId =
       TypeInfo_Map_MapConverter->static_fields->_currentId + 1;
  return TypeInfo_Map_MapConverter->static_fields->_currentId;
}


// Map.MapConverter$$.ctor
// il2cpp: void Map_MapConverter___ctor (Map_MapConverter_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapConverter___ctor(Map_MapConverter_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


