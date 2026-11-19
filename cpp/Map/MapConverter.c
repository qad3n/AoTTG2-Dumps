// Type: Map.MapConverter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapConverter.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapConverter.cs
// --------------------------------

// Map.MapConverter$$IsLegacy
// il2cpp: bool Map_MapConverter__IsLegacy (System_String_o* map, const MethodInfo* method);
// 0x5979a10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5979a66: lea r12, [rip + 0x1bdcc5b]
// asm:   0x5979a6d: nop dword ptr [rax]

bool Map_MapConverter__IsLegacy(System_String_o *map,MethodInfo *method)

{
  System_String_o *__this;
  bool bVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_o *a;
  uint uVar4;
  
  if (Il2CppMethodInitialized_075459dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"///");
    Il2CppMethodInitialized_075459dd = '\x01';
  }
  if ((map == (System_String_o *)0x0) ||
     (pSVar3 = System_String__Split(map,0x3b,0,(MethodInfo *)0x0), pSVar3 == (System_String_array *)0x0)) {
label_05979ae0:
    ThrowNullReferenceException();
  }
  uVar2 = (uint)pSVar3->max_length;
  uVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      if (uVar2 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      __this = pSVar3->m_Items[(int)uVar4];
      if (__this == (System_String_o *)0x0) goto label_05979ae0;
      a = System_String__Trim(__this,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality
                        (a,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__StartsWith(__this,"///",(MethodInfo *)0x0);
        uVar4 = (uint)!bVar1;
        goto label_05979ad2;
      }
      uVar4 = uVar4 + 1;
      uVar2 = (uint)pSVar3->max_length;
    } while ((int)uVar4 < (int)uVar2);
    uVar4 = 0;
  }
label_05979ad2:
  return SUB41(uVar4,0);
}


// Map.MapConverter$$CreateForestFloor
// il2cpp: Map_MapScriptSceneObject_o* Map_MapConverter__CreateForestFloor (const MethodInfo* method);
// 0x5979af0

Map_MapScriptSceneObject_o * Map_MapConverter__CreateForestFloor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptSceneObject_o *__this_00;
  Map_MapScriptBasicMaterial_o *__this_01;
  Map_MapScriptBasicMaterial_o *pMVar1;
  Utility_Color255_o *__this_02;
  int iVar2;
  UnityEngine_Color_o color;
  UnityEngine_Vector3_o scale;
  UnityEngine_Vector3_o position;
  
  if (Il2CppMethodInitialized_075459de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapTextures);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Grass1");
    il2cpp_codegen_initialize_runtime_metadata(&"Geometry/Cuboid");
    il2cpp_codegen_initialize_runtime_metadata(&"Basic");
    Il2CppMethodInitialized_075459de = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    (__this_00->fields).Asset = "Geometry/Cuboid";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Asset);
    scale.fields.z = 134.286;
    scale.fields.x = 134.286;
    scale.fields.y = 6.407;
    Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)__this_00,scale,(MethodInfo *)0x0);
    position.fields.z = 5.333;
    position.fields.x = -7.76;
    position.fields.y = -32.03;
    Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)__this_00,position,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_075459e3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapConverter);
      Il2CppMethodInitialized_075459e3 = '\x01';
    }
    iVar2 = TypeInfo_Map_MapConverter->static_fields->_currentId + 1;
    TypeInfo_Map_MapConverter->static_fields->_currentId = iVar2;
    (__this_00->fields).Id = iVar2;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
    Map_MapScriptBasicMaterial___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Map_MapScriptBasicMaterial_o *)0x0) {
      (__this_01->fields).Shader = "Basic";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).Shader);
      if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures;
      if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pMVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this,(Il2CppObject *)"Grass1",
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item
                           );
        if (pMVar1 != (Map_MapScriptBasicMaterial_o *)0x0) {
          (__this_01->fields).Texture = (pMVar1->fields).Texture;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).Texture);
          (__this_01->fields).Tiling.fields = (UnityEngine_Vector2_Fields)0x4248000042480000;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          color.fields.b = 0.654;
          color.fields.a = 1.0;
          color.fields.r = 0.678;
          color.fields.g = 0.684;
          Utility_Color255___ctor_5ce7790(__this_02,color,(MethodInfo *)0x0);
          (__this_01->fields).Color = __this_02;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).Color);
          (__this_00->fields).Material = (Map_MapScriptBaseMaterial_o *)__this_01;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Material);
          return __this_00;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapConverter$$CreateLight
// il2cpp: Map_MapScriptSceneObject_o* Map_MapConverter__CreateLight (const MethodInfo* method);
// 0x5979d50

Map_MapScriptSceneObject_o * Map_MapConverter__CreateLight(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptSceneObject_o *__this_00;
  Map_MapScriptBaseObject_o *pMVar1;
  int iVar2;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_Fields local_20;
  
  if (Il2CppMethodInitialized_075459df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Daylight");
    Il2CppMethodInitialized_075459df = '\x01';
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
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item);
    if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(__this_00->klass->vtable)._10_Copy.methodPtr)
                (__this_00,(Utility_BaseCSVObject_o *)pMVar1,(__this_00->klass->vtable)._10_Copy.method);
      local_20.x = 0.8779006;
      local_20.y = 2.1275563;
      local_20.z = 0.02443461;
      rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Vector3_o *)&local_20,(MethodInfo *)0x0);
      Map_MapScriptBaseObject__SetRotation_58a1ff0
                ((Map_MapScriptBaseObject_o *)__this_00,rotation,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_075459e3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapConverter);
        Il2CppMethodInitialized_075459e3 = '\x01';
      }
      iVar2 = TypeInfo_Map_MapConverter->static_fields->_currentId + 1;
      TypeInfo_Map_MapConverter->static_fields->_currentId = iVar2;
      (__this_00->fields).Id = iVar2;
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapConverter$$CreateFengBounds
// il2cpp: System_Collections_Generic_List_MapScriptBaseObject__o* Map_MapConverter__CreateFengBounds (const MethodInfo* method);
// 0x5979e90

System_Collections_Generic_List_MapScriptBaseObject__o *
Map_MapConverter__CreateFengBounds(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapScriptBaseObject_array *pMVar3;
  MethodInfo *__this;
  Map_MapScriptSceneObject_o *pMVar4;
  MethodInfo *pMVar5;
  MethodInfo *pMVar6;
  UnityEngine_Vector3_o center;
  UnityEngine_Vector3_o center_00;
  UnityEngine_Vector3_o center_01;
  UnityEngine_Vector3_o center_02;
  UnityEngine_Vector3_o center_03;
  UnityEngine_Vector3_o size;
  UnityEngine_Vector3_o size_00;
  UnityEngine_Vector3_o size_01;
  UnityEngine_Vector3_o size_02;
  UnityEngine_Vector3_o size_03;
  
  if (Il2CppMethodInitialized_075459e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
    Il2CppMethodInitialized_075459e0 = '\x01';
  }
  __this = (MethodInfo *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
  pMVar5 = __this;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
  center.fields.z = 0.01;
  center.fields.x = -700.0;
  center.fields.y = 745.8;
  size.fields.z = 160.0;
  size.fields.x = 10.0;
  size.fields.y = 160.0;
  pMVar4 = Map_MapConverter__CreateBound(center,size,(UnityEngine_Vector3_o)ZEXT412(0),pMVar5);
  pMVar5 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
  if (__this != (MethodInfo *)0x0) {
    piVar1 = (int32_t *)((long)&__this->name + 4);
    *piVar1 = *piVar1 + 1;
    pMVar3 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)&__this->invoker_method)->_items;
    if (pMVar3 != (Map_MapScriptBaseObject_array *)0x0) {
      uVar2 = *(uint *)&__this->name;
      if (uVar2 < (uint)pMVar3->max_length) {
        *(uint *)&__this->name = uVar2 + 1;
        pMVar6 = (MethodInfo *)(pMVar3->m_Items + (int)uVar2);
        pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar4;
        Il2CppCodeGenWriteBarrier((void **)pMVar6);
      }
      else {
        pMVar6 = __this;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar4,
                   (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      center_00.fields.z = -700.0;
      center_00.fields.x = 0.0;
      center_00.fields.y = 745.8;
      size_00.fields.z = 10.0;
      size_00.fields.x = 160.0;
      size_00.fields.y = 160.0;
      pMVar4 = Map_MapConverter__CreateBound(center_00,size_00,(UnityEngine_Vector3_o)ZEXT412(0),pMVar6);
      pMVar5 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
      piVar1 = (int32_t *)((long)&__this->name + 4);
      *piVar1 = *piVar1 + 1;
      pMVar3 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)&__this->invoker_method)->
               _items;
      if (pMVar3 != (Map_MapScriptBaseObject_array *)0x0) {
        uVar2 = *(uint *)&__this->name;
        if (uVar2 < (uint)pMVar3->max_length) {
          *(uint *)&__this->name = uVar2 + 1;
          pMVar6 = (MethodInfo *)(pMVar3->m_Items + (int)uVar2);
          pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar4;
          Il2CppCodeGenWriteBarrier((void **)pMVar6);
        }
        else {
          pMVar6 = __this;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar4,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        center_01.fields.z = 700.0;
        center_01.fields.x = 0.0;
        center_01.fields.y = 745.8;
        size_01.fields.z = 10.0;
        size_01.fields.x = 160.0;
        size_01.fields.y = 160.0;
        pMVar4 = Map_MapConverter__CreateBound(center_01,size_01,(UnityEngine_Vector3_o)ZEXT412(0),pMVar6);
        pMVar5 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
        piVar1 = (int32_t *)((long)&__this->name + 4);
        *piVar1 = *piVar1 + 1;
        pMVar3 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)&__this->invoker_method)->
                 _items;
        if (pMVar3 != (Map_MapScriptBaseObject_array *)0x0) {
          uVar2 = *(uint *)&__this->name;
          if (uVar2 < (uint)pMVar3->max_length) {
            *(uint *)&__this->name = uVar2 + 1;
            pMVar6 = (MethodInfo *)(pMVar3->m_Items + (int)uVar2);
            pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar4;
            Il2CppCodeGenWriteBarrier((void **)pMVar6);
          }
          else {
            pMVar6 = __this;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar4,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          center_02.fields.z = 0.01;
          center_02.fields.x = 700.0;
          center_02.fields.y = 745.8;
          size_02.fields.z = 160.0;
          size_02.fields.x = 10.0;
          size_02.fields.y = 160.0;
          pMVar4 = Map_MapConverter__CreateBound(center_02,size_02,(UnityEngine_Vector3_o)ZEXT412(0),pMVar6);
          pMVar5 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
          piVar1 = (int32_t *)((long)&__this->name + 4);
          *piVar1 = *piVar1 + 1;
          pMVar3 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)&__this->invoker_method)->
                   _items;
          if (pMVar3 != (Map_MapScriptBaseObject_array *)0x0) {
            uVar2 = *(uint *)&__this->name;
            if (uVar2 < (uint)pMVar3->max_length) {
              *(uint *)&__this->name = uVar2 + 1;
              pMVar6 = (MethodInfo *)(pMVar3->m_Items + (int)uVar2);
              pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar4;
              Il2CppCodeGenWriteBarrier((void **)pMVar6);
            }
            else {
              pMVar6 = __this;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar4,
                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
            }
            center_03.fields.z = 17.889;
            center_03.fields.x = -2.23;
            center_03.fields.y = 1253.07;
            size_03.fields.z = 160.0;
            size_03.fields.x = 160.0;
            size_03.fields.y = 10.0;
            pMVar4 = Map_MapConverter__CreateBound(center_03,size_03,(UnityEngine_Vector3_o)ZEXT412(0),pMVar6)
            ;
            pMVar5 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
            piVar1 = (int32_t *)((long)&__this->name + 4);
            *piVar1 = *piVar1 + 1;
            pMVar3 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)&__this->invoker_method)
                     ->_items;
            if (pMVar3 != (Map_MapScriptBaseObject_array *)0x0) {
              uVar2 = *(uint *)&__this->name;
              if (uVar2 < (uint)pMVar3->max_length) {
                *(uint *)&__this->name = uVar2 + 1;
                pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar4;
                Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar4,
                           (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
              }
              return (System_Collections_Generic_List_MapScriptBaseObject__o *)__this;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapConverter$$CreateBound
// il2cpp: Map_MapScriptSceneObject_o* Map_MapConverter__CreateBound (UnityEngine_Vector3_o center, UnityEngine_Vector3_o size, UnityEngine_Vector3_o rotation, const MethodInfo* method);
// 0x597a180

Map_MapScriptSceneObject_o *
Map_MapConverter__CreateBound
          (UnityEngine_Vector3_o center,UnityEngine_Vector3_o size,UnityEngine_Vector3_o rotation,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptSceneObject_o *__this_00;
  Map_MapScriptBaseObject_o *pMVar1;
  int iVar2;
  
  if (Il2CppMethodInitialized_075459e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"LegacyBarrier");
    Il2CppMethodInitialized_075459e1 = '\x01';
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
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item);
    if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(__this_00->klass->vtable)._10_Copy.methodPtr)
                (__this_00,(Utility_BaseCSVObject_o *)pMVar1,(__this_00->klass->vtable)._10_Copy.method);
      Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)__this_00,center,(MethodInfo *)0x0);
      Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)__this_00,size,(MethodInfo *)0x0);
      Map_MapScriptBaseObject__SetRotation((Map_MapScriptBaseObject_o *)__this_00,rotation,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_075459e3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapConverter);
        Il2CppMethodInitialized_075459e3 = '\x01';
      }
      iVar2 = TypeInfo_Map_MapConverter->static_fields->_currentId + 1;
      TypeInfo_Map_MapConverter->static_fields->_currentId = iVar2;
      (__this_00->fields).Id = iVar2;
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapConverter$$Convert
// il2cpp: Map_MapScript_o* Map_MapConverter__Convert (System_String_o* map, const MethodInfo* method);
// 0x597a2f0
// asm: 16 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597a865: jmp 0x597a894
// asm:   0x597af2d: jmp 0x597d0d1
// asm:   0x597b010: jmp 0x597d07f
// asm:   0x597b121: movaps xmm1, xmm0
// asm:   0x597b124: movaps xmm0, xmmword ptr [rsp]
// asm:   0x597b128: unpcklps xmm0, xmmword ptr [rsp + 0x20]
// asm:   0x597b820: jmp 0x597d07f
// asm:   0x597bee5: jmp 0x597d0d1
// asm:   0x597bf58: jmp 0x597cc69
// asm:   0x597c003: movaps xmmword ptr [rsp + 0x30], xmm0
// asm:   0x597c008: lea rbx, [rip + 0x1951a19]  ; ""
// asm:   0x597c00f: mov r12, qword ptr [rsp + 0x20]
// asm:   0x597c161: jmp 0x597c202
// asm:   0x597c5f3: jmp 0x597c346
// asm:   0x597cc75: jmp 0x597d0d1
// asm:   0x597cebd: jmp 0x597d0d1

Map_MapScript_o * Map_MapConverter__Convert(System_String_o *map,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Map_MapScriptObjects_o *pMVar3;
  Map_MapScriptBaseObject_array *pMVar4;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  Il2CppClass **ppIVar7;
  Il2CppClass *pIVar8;
  int32_t *piVar9;
  Map_MapScriptBasicMaterial_c *pMVar10;
  MethodInfo *pMVar11;
  bool bVar12;
  Map_MapScript_o *__this;
  Map_MapScriptSceneObject_o *pMVar13;
  System_String_o *pSVar14;
  MethodInfo *pMVar15;
  System_Char_array *separator;
  System_String_array *pSVar16;
  Map_MapScriptBaseObject_o *pMVar17;
  System_String_o *pSVar18;
  System_String_o **ppSVar19;
  Map_MapScriptBasicMaterial_o *pMVar20;
  Utility_Color255_o *pUVar21;
  Il2CppObject *pIVar22;
  System_Collections_Generic_List_MapScriptBaseObject__o *collection;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  Map_MapScript_o *pMVar27;
  Map_MapScriptBaseMaterial_o **targetAddress;
  System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *pSVar28;
  il2cpp_array_size_t *piVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar36;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar37;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Color_o color;
  UnityEngine_Quaternion_o rotation_00;
  UnityEngine_Quaternion_o rotation_01;
  UnityEngine_Quaternion_o UVar38;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Quaternion_o rotation_02;
  UnityEngine_Quaternion_o rotation_03;
  UnityEngine_Color_o color_02;
  UnityEngine_Quaternion_o rotation_04;
  UnityEngine_Color_o color_03;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o scale;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o scale_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o scale_01;
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o position_04;
  UnityEngine_Vector3_o position_05;
  Map_MapScriptReflectiveMaterial_o *local_b8;
  float local_a8;
  float fStack_a4;
  float local_7c;
  undefined8 local_78;
  ulong local_68;
  float local_60;
  float local_5c;
  System_String_o *local_58;
  Map_MapScript_o *local_50;
  System_String_array *local_48;
  UnityEngine_Vector3_Fields local_40;
  
  if (Il2CppMethodInitialized_075459e2 == '\0') {
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
    Il2CppMethodInitialized_075459e2 = '\x01';
  }
  local_7c = 0.0;
  TypeInfo_Map_MapConverter->static_fields->_currentId = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
  pMVar27 = __this;
  Map_MapScript___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Map_MapScript_o *)0x0) {
    pMVar3 = (__this->fields).Objects;
    if (pMVar3 != (Map_MapScriptObjects_o *)0x0) {
      pMVar15 = (MethodInfo *)(pMVar3->fields).Objects;
      pMVar13 = Map_MapConverter__CreateForestFloor((MethodInfo *)pMVar27);
      pMVar11 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
      if (pMVar15 != (MethodInfo *)0x0) {
        piVar9 = (int32_t *)((long)&pMVar15->name + 4);
        *piVar9 = *piVar9 + 1;
        pMVar4 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)&pMVar15->invoker_method)->
                 _items;
        if (pMVar4 != (Map_MapScriptBaseObject_array *)0x0) {
          uVar25 = *(uint *)&pMVar15->name;
          if (uVar25 < (uint)pMVar4->max_length) {
            *(uint *)&pMVar15->name = uVar25 + 1;
            pMVar15 = (MethodInfo *)(pMVar4->m_Items + (int)uVar25);
            pMVar4->m_Items[(int)uVar25] = (Map_MapScriptBaseObject_o *)pMVar13;
            Il2CppCodeGenWriteBarrier((void **)pMVar15);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pMVar15,(Il2CppObject *)pMVar13,
                       (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
          }
          pMVar3 = (__this->fields).Objects;
          if (pMVar3 != (Map_MapScriptObjects_o *)0x0) {
            pSVar5 = (pMVar3->fields).Objects;
            pMVar13 = Map_MapConverter__CreateLight(pMVar15);
            pMVar15 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
            if (pSVar5 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
              piVar9 = &(pSVar5->fields)._version;
              *piVar9 = *piVar9 + 1;
              pMVar4 = (pSVar5->fields)._items;
              if (pMVar4 != (Map_MapScriptBaseObject_array *)0x0) {
                uVar25 = (pSVar5->fields)._size;
                if (uVar25 < (uint)pMVar4->max_length) {
                  (pSVar5->fields)._size = uVar25 + 1;
                  pMVar4->m_Items[(int)uVar25] = (Map_MapScriptBaseObject_o *)pMVar13;
                  Il2CppCodeGenWriteBarrier(pMVar4->m_Items + (int)uVar25);
                  uVar2 = (TypeInfo_System_Text_RegularExpressions_Regex->_2).cctor_finished_or_no_cctor;
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pMVar13,
                             (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
                  uVar2 = (TypeInfo_System_Text_RegularExpressions_Regex->_2).cctor_finished_or_no_cctor;
                }
                if (uVar2 == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
                }
                pSVar14 = System_Text_RegularExpressions_Regex__Replace
                                    (map,"\\s+","",(MethodInfo *)0x0);
                if (pSVar14 != (System_String_o *)0x0) {
                  pSVar14 = System_String__Replace_5304550
                                      (pSVar14,"\r\n","",(MethodInfo *)0x0);
                  if (pSVar14 != (System_String_o *)0x0) {
                    pSVar14 = System_String__Replace_5304550
                                        (pSVar14,"\n","",(MethodInfo *)0x0
                                        );
                    if (pSVar14 != (System_String_o *)0x0) {
                      pMVar15 = (MethodInfo *)
                                System_String__Replace_5304550
                                          (pSVar14,"\r","",
                                           (MethodInfo *)0x0);
                      separator = (System_Char_array *)SZArrayNew(TypeInfo_char_array,1);
                      if (separator != (System_Char_array *)0x0) {
                        if ((int)separator->max_length == 0) {
label_0597d07f:
                          ThrowIndexOutOfRangeException();
                        }
                        separator->m_Items[0] = 0x3b;
                        if (pMVar15 != (MethodInfo *)0x0) {
                          pSVar16 = System_String__Split_5304f50
                                              ((System_String_o *)pMVar15,separator,(MethodInfo *)0x0);
                          if (pSVar16 != (System_String_array *)0x0) {
                            uVar25 = (uint)pSVar16->max_length;
                            uVar30 = 0;
                            local_50 = __this;
                            if ((int)uVar25 < 1) {
                              uVar24 = 0;
                            }
                            else {
                              uVar26 = 0;
                              local_48 = pSVar16;
                              do {
                                if (uVar25 <= uVar30) goto label_0597d07f;
                                pSVar14 = local_48->m_Items[(int)uVar30];
                                if (pSVar14 == (System_String_o *)0x0) goto label_0597d0d1;
                                pMVar15 = (MethodInfo *)System_String__Trim(pSVar14,(MethodInfo *)0x0);
                                if (pMVar15 == (MethodInfo *)0x0) goto label_0597d0d1;
                                pSVar16 = System_String__Split
                                                    ((System_String_o *)pMVar15,0x2c,0,(MethodInfo *)0x0);
                                if (pSVar16 == (System_String_array *)0x0) goto label_0597d0d1;
                                if (pSVar16->max_length == 0) {
label_0597a9a0:
                                  uVar24 = uVar26;
                                }
                                else {
                                  if ((int)pSVar16->max_length == 0) goto label_0597d07f;
                                  pMVar15 = (MethodInfo *)pSVar16->m_Items[0];
                                  if (pMVar15 == (MethodInfo *)0x0) goto label_0597d0d1;
                                  bVar12 = System_String__StartsWith
                                                     ((System_String_o *)pMVar15,"//",
                                                      (MethodInfo *)0x0);
                                  if (bVar12) goto label_0597a9a0;
                                  pMVar15 = (MethodInfo *)System_String__Trim(pSVar14,(MethodInfo *)0x0);
                                  bVar12 = System_String__op_Equality
                                                     ((System_String_o *)pMVar15,"",
                                                      (MethodInfo *)0x0);
                                  if (bVar12) goto label_0597a9a0;
                                  piVar29 = &pSVar16->max_length;
                                  local_58 = pSVar14;
                                  pMVar13 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
                                  Map_MapScriptSceneObject___ctor(pMVar13,(MethodInfo *)0x0);
                                  if ((int)*piVar29 == 0) goto label_0597d07f;
                                  if (pSVar16->m_Items[0] == (System_String_o *)0x0) goto label_0597d0d1;
                                  bVar12 = System_String__StartsWith
                                                     (pSVar16->m_Items[0],"custom",
                                                      (MethodInfo *)0x0);
                                  if (bVar12) {
                                    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0)
                                    {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                    }
                                    if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                    if (pSVar16->m_Items[1] == (System_String_o *)0x0) goto label_0597d0d1;
                                    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                             TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabsLower;
                                    pSVar14 = System_String__ToLower(pSVar16->m_Items[1],(MethodInfo *)0x0);
                                    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)
                                                  0x0) goto label_0597d0d1;
                                    bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                                       (pSVar6,(Il2CppObject *)pSVar14,
                                                        (MethodInfo_4AAD6F0 *)
                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_ContainsKey
                                                       );
                                    if (bVar12) {
                                      if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0
                                         ) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                      }
                                      if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                      if (pSVar16->m_Items[1] == (System_String_o *)0x0) goto label_0597d0d1;
                                      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                               TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabsLower;
                                      pSVar14 = System_String__ToLower(pSVar16->m_Items[1],(MethodInfo *)0x0);
                                      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *
                                                    )0x0) goto label_0597d0d1;
                                      pMVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                          (pSVar6,(Il2CppObject *)pSVar14,
                                                           (MethodInfo_4AAD450 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                                       );
                                      if (pMVar13 == (Map_MapScriptSceneObject_o *)0x0) goto label_0597d0d1;
                                      (*(pMVar13->klass->vtable)._10_Copy.methodPtr)
                                                (pMVar13,(Utility_BaseCSVObject_o *)pMVar17,
                                                 (pMVar13->klass->vtable)._10_Copy.method);
                                    }
                                    if ((((uint)*piVar29 < 0xd) ||
                                        (position.fields.x =
                                              System_Single__Parse(pSVar16->m_Items[0xc],(MethodInfo *)0x0),
                                        (uint)pSVar16->max_length < 0xe)) ||
                                       (fVar31 = System_Single__Parse(pSVar16->m_Items[0xd],(MethodInfo *)0x0)
                                       , (uint)pSVar16->max_length < 0xf)) goto label_0597d07f;
                                    fVar32 = System_Single__Parse(pSVar16->m_Items[0xe],(MethodInfo *)0x0);
                                    if (pMVar13 == (Map_MapScriptSceneObject_o *)0x0) goto label_0597d0d1;
                                    position.fields.y = fVar31;
                                    position.fields.z = fVar32;
                                    Map_MapScriptBaseObject__SetPosition
                                              ((Map_MapScriptBaseObject_o *)pMVar13,position,(MethodInfo *)0x0
                                              );
                                    if ((((*piVar29 & 0xfffffff0) == 0) ||
                                        (rotation.fields.x =
                                              System_Single__Parse(pSVar16->m_Items[0xf],(MethodInfo *)0x0),
                                        (uint)pSVar16->max_length < 0x11)) ||
                                       (fVar31 = System_Single__Parse
                                                           (pSVar16->m_Items[0x10],(MethodInfo *)0x0),
                                       (uint)pSVar16->max_length < 0x12)) goto label_0597d07f;
                                    fVar32 = System_Single__Parse(pSVar16->m_Items[0x11],(MethodInfo *)0x0);
                                    local_78 = (System_String_o *)CONCAT44(extraout_XMM0_Db,fVar32);
                                    if ((uint)pSVar16->max_length < 0x13) goto label_0597d07f;
                                    fVar32 = System_Single__Parse(pSVar16->m_Items[0x12],(MethodInfo *)0x0);
                                    rotation.fields.y = fVar31;
                                    rotation.fields.w = fVar32;
                                    rotation.fields.z = (float)local_78;
                                    Map_MapScriptBaseObject__SetRotation_58a1ff0
                                              ((Map_MapScriptBaseObject_o *)pMVar13,rotation,(MethodInfo *)0x0
                                              );
                                    if ((((pSVar16->max_length & 0xfffffffc) == 0) ||
                                        (scale.fields.x =
                                              System_Single__Parse(pSVar16->m_Items[3],(MethodInfo *)0x0),
                                        (uint)pSVar16->max_length < 5)) ||
                                       (fVar31 = System_Single__Parse(pSVar16->m_Items[4],(MethodInfo *)0x0),
                                       (uint)pSVar16->max_length < 6)) goto label_0597d07f;
                                    fVar32 = System_Single__Parse(pSVar16->m_Items[5],(MethodInfo *)0x0);
                                    scale.fields.y = fVar31;
                                    scale.fields.z = fVar32;
                                    Map_MapScriptBaseObject__SetScale
                                              ((Map_MapScriptBaseObject_o *)pMVar13,scale,(MethodInfo *)0x0);
                                    if ((uint)pSVar16->max_length < 3) goto label_0597d07f;
                                    if (pSVar16->m_Items[2] == (System_String_o *)0x0) goto label_0597d0d1;
                                    pSVar14 = System_String__ToLower(pSVar16->m_Items[2],(MethodInfo *)0x0);
                                    local_b8 = (Map_MapScriptReflectiveMaterial_o *)(pMVar13->fields).Material
                                    ;
                                    if (local_b8 == (Map_MapScriptReflectiveMaterial_o *)0x0)
                                    goto label_0597d0d1;
                                    pUVar21 = (local_b8->fields).Color;
                                    if (pUVar21 == (Utility_Color255_o *)0x0) goto label_0597d0d1;
                                    fVar31 = (float)(pUVar21->fields).A / 255.0;
                                    bVar12 = System_String__op_Inequality
                                                       (pSVar14,"default",(MethodInfo *)0x0);
                                    local_68 = uVar26;
                                    if (bVar12) {
                                      if (pSVar14 == (System_String_o *)0x0) goto label_0597d0d1;
                                      bVar12 = System_String__StartsWith
                                                         (pSVar14,"transparent",(MethodInfo *)0x0);
                                      if (bVar12) {
                                        local_b8 = (Map_MapScriptReflectiveMaterial_o *)
                                                   il2cpp_codegen_object_new
                                                             ((Il2CppClass *)
                                                              TypeInfo_Map_MapScriptBasicMaterial);
                                        Map_MapScriptBasicMaterial___ctor
                                                  ((Map_MapScriptBasicMaterial_o *)local_b8,(MethodInfo *)0x0)
                                        ;
                                        if (local_b8 != (Map_MapScriptReflectiveMaterial_o *)0x0) {
                                          (local_b8->fields).Shader = "Transparent";
                                          Il2CppCodeGenWriteBarrier(&(local_b8->fields).Shader);
                                          pSVar18 = System_String__Substring(pSVar14,0xb,(MethodInfo *)0x0);
                                          bVar12 = System_Single__TryParse
                                                             (pSVar18,&local_7c,(MethodInfo *)0x0);
                                          if (bVar12) {
                                            fVar31 = local_7c;
                                          }
                                          goto label_0597c014;
                                        }
                                        goto label_0597d0d1;
                                      }
                                      bVar12 = System_String__op_Equality
                                                         (pSVar14,"empty",(MethodInfo *)0x0);
                                      if (bVar12) {
                                        local_b8 = (Map_MapScriptReflectiveMaterial_o *)
                                                   il2cpp_codegen_object_new
                                                             ((Il2CppClass *)
                                                              TypeInfo_Map_MapScriptBasicMaterial);
                                        Map_MapScriptBasicMaterial___ctor
                                                  ((Map_MapScriptBasicMaterial_o *)local_b8,(MethodInfo *)0x0)
                                        ;
                                        if (local_b8 != (Map_MapScriptReflectiveMaterial_o *)0x0) {
                                          (local_b8->fields).Shader = "Basic";
                                          Il2CppCodeGenWriteBarrier(&(local_b8->fields).Shader);
                                          goto label_0597c014;
                                        }
                                        goto label_0597d0d1;
                                      }
                                      bVar12 = System_String__op_Equality
                                                         (pSVar14,"ice1",(MethodInfo *)0x0);
                                      if (!bVar12) {
                                        bVar12 = System_String__op_Equality
                                                           (pSVar14,"barriereditormat",(MethodInfo *)0x0);
                                        if (bVar12) {
                                          local_b8 = (Map_MapScriptReflectiveMaterial_o *)
                                                     il2cpp_codegen_object_new
                                                               ((Il2CppClass *)
                                                                TypeInfo_Map_MapScriptBasicMaterial);
                                          Map_MapScriptBasicMaterial___ctor
                                                    ((Map_MapScriptBasicMaterial_o *)local_b8,
                                                     (MethodInfo *)0x0);
                                          if (local_b8 == (Map_MapScriptReflectiveMaterial_o *)0x0)
                                          goto label_0597d0d1;
                                          (local_b8->fields).Shader = "Transparent";
                                          Il2CppCodeGenWriteBarrier(&(local_b8->fields).Shader);
                                          pUVar21 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)TypeInfo_Utility_Color255);
                                          uVar33 = 0;
                                          uVar36 = 0x3f6ac083;
                                          uVar37 = 0x3f800000;
                                        }
                                        else {
                                          bVar12 = System_String__op_Equality
                                                             (pSVar14,"regioneditormat",(MethodInfo *)0x0)
                                          ;
                                          if (!bVar12) {
                                            bVar12 = System_String__op_Equality
                                                               (pSVar14,"bombexplosiontex",
                                                                (MethodInfo *)0x0);
                                            if (bVar12) {
                                              local_b8 = (Map_MapScriptReflectiveMaterial_o *)
                                                         il2cpp_codegen_object_new
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_Map_MapScriptLegacyMaterial);
                                              Map_MapScriptLegacyMaterial___ctor
                                                        ((Map_MapScriptLegacyMaterial_o *)local_b8,
                                                         (MethodInfo *)0x0);
                                              if ((TypeInfo_Map_MapObjectShader->_2).
                                                  cctor_finished_or_no_cctor == 0) {
                                                il2cpp_codegen_runtime_class_init
                                                          ((Il2CppClass *)TypeInfo_Map_MapObjectShader);
                                              }
                                              if (local_b8 != (Map_MapScriptReflectiveMaterial_o *)0x0) {
                                                pSVar18 = TypeInfo_Map_MapObjectShader->static_fields->
                                                          OldBombExplode;
                                                goto label_0597cd54;
                                              }
                                              goto label_0597d0d1;
                                            }
                                            bVar12 = System_String__op_Equality
                                                               (pSVar14,"cannonregionmat",
                                                                (MethodInfo *)0x0);
                                            if (bVar12) {
                                              local_b8 = (Map_MapScriptReflectiveMaterial_o *)
                                                         il2cpp_codegen_object_new
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_Map_MapScriptLegacyMaterial);
                                              Map_MapScriptLegacyMaterial___ctor
                                                        ((Map_MapScriptLegacyMaterial_o *)local_b8,
                                                         (MethodInfo *)0x0);
                                              if ((TypeInfo_Map_MapObjectShader->_2).
                                                  cctor_finished_or_no_cctor == 0) {
                                                il2cpp_codegen_runtime_class_init
                                                          ((Il2CppClass *)TypeInfo_Map_MapObjectShader);
                                              }
                                              if (local_b8 != (Map_MapScriptReflectiveMaterial_o *)0x0) {
                                                (local_b8->fields).Shader =
                                                     TypeInfo_Map_MapObjectShader->static_fields->
                                                     CannonRegionMat;
                                                Il2CppCodeGenWriteBarrier(&(local_b8->fields).Shader);
                                                pUVar21 = il2cpp_codegen_object_new
                                                                    ((Il2CppClass *)TypeInfo_Utility_Color255)
                                                ;
                                                color_02.fields.b = 0.0;
                                                color_02.fields.a = 1.0;
                                                color_02.fields.r = 0.0;
                                                color_02.fields.g = 1.0;
                                                Utility_Color255___ctor_5ce7790
                                                          (pUVar21,color_02,(MethodInfo *)0x0);
                                                (local_b8->fields).Color = pUVar21;
                                                Il2CppCodeGenWriteBarrier(&(local_b8->fields).Color);
                                                fVar31 = 1.0;
                                                goto label_0597c014;
                                              }
                                              goto label_0597d0d1;
                                            }
                                            bVar12 = System_String__op_Equality
                                                               (pSVar14,"bombtex",
                                                                (MethodInfo *)0x0);
                                            if (bVar12) {
                                              local_b8 = (Map_MapScriptReflectiveMaterial_o *)
                                                         il2cpp_codegen_object_new
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_Map_MapScriptLegacyMaterial);
                                              Map_MapScriptLegacyMaterial___ctor
                                                        ((Map_MapScriptLegacyMaterial_o *)local_b8,
                                                         (MethodInfo *)0x0);
                                              if ((TypeInfo_Map_MapObjectShader->_2).
                                                  cctor_finished_or_no_cctor == 0) {
                                                il2cpp_codegen_runtime_class_init
                                                          ((Il2CppClass *)TypeInfo_Map_MapObjectShader);
                                              }
                                              if (local_b8 == (Map_MapScriptReflectiveMaterial_o *)0x0)
                                              goto label_0597d0d1;
                                              pSVar18 = TypeInfo_Map_MapObjectShader->static_fields->
                                                        BombTexMat;
                                            }
                                            else {
                                              bVar12 = System_String__op_Equality
                                                                 (pSVar14,"cannonballtrail",
                                                                  (MethodInfo *)0x0);
                                              if (!bVar12) {
                                                local_b8 = (Map_MapScriptReflectiveMaterial_o *)
                                                           il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_Map_MapScriptBasicMaterial);
                                                Map_MapScriptBasicMaterial___ctor
                                                          ((Map_MapScriptBasicMaterial_o *)local_b8,
                                                           (MethodInfo *)0x0);
                                                if (local_b8 != (Map_MapScriptReflectiveMaterial_o *)0x0) {
                                                  (local_b8->fields).Shader = "Basic";
                                                  Il2CppCodeGenWriteBarrier(&(local_b8->fields).Shader);
                                                  bVar12 = System_String__op_Equality
                                                                     (pSVar14,"bark",
                                                                      (MethodInfo *)0x0);
                                                  if ((bVar12) ||
                                                     (bVar12 = System_String__op_Equality
                                                                         (pSVar14,"grass",
                                                                          (MethodInfo *)0x0), bVar12)) {
                                                    pSVar14 = System_String__Concat_52f0320
                                                                        (pSVar14,"1",
                                                                         (MethodInfo *)0x0);
                                                    if ((TypeInfo_Map_BuiltinMapTextures->_2).
                                                        cctor_finished_or_no_cctor == 0) goto label_0597cea2;
label_0597ced5:
                                                    pSVar6 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)TypeInfo_Map_BuiltinMapTextures->static_fields->
                                                         AllTexturesLower;
                                                  }
                                                  else {
                                                    if ((TypeInfo_Map_BuiltinMapTextures->_2).
                                                        cctor_finished_or_no_cctor != 0) goto label_0597ced5;
label_0597cea2:
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures)
                                                    ;
                                                    pSVar6 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)TypeInfo_Map_BuiltinMapTextures->static_fields->
                                                         AllTexturesLower;
                                                  }
                                                  if (pSVar6 == (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) goto label_0597d0d1;
                                                  bVar12 = 
                                                       System_Collections_Generic_Dictionary_object__object___ContainsKey
                                                                 (pSVar6,(Il2CppObject *)pSVar14,
                                                                  (MethodInfo_4AAD6F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_ContainsKey
                                                       );
                                                  if (bVar12) {
                                                    if ((TypeInfo_Map_BuiltinMapTextures->_2).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      il2cpp_codegen_runtime_class_init
                                                                ((Il2CppClass *)
                                                                 TypeInfo_Map_BuiltinMapTextures);
                                                    }
                                                    pSVar6 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)TypeInfo_Map_BuiltinMapTextures->static_fields->
                                                         AllTexturesLower;
                                                    if (pSVar6 == (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) goto label_0597d0d1;
                                                    local_78 = pSVar14;
                                                    pMVar20 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar6,(Il2CppObject *)pSVar14,
                                                                  (MethodInfo_4AAD450 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item
                                                       );
                                                    if (pMVar20 == (Map_MapScriptBasicMaterial_o *)0x0)
                                                    goto label_0597d0d1;
                                                    pIVar8 = (Il2CppClass *)(pMVar20->fields).Texture;
                                                    pIVar22 = il2cpp_codegen_is_inst_class
                                                                        ((Il2CppObject *)local_b8,
                                                                         (Il2CppClass *)
                                                                         TypeInfo_Map_MapScriptBasicMaterial);
                                                    if (pIVar22 == (Il2CppObject *)0x0) goto label_0597d0d1;
                                                    pIVar22 = il2cpp_codegen_is_inst_class
                                                                        ((Il2CppObject *)local_b8,
                                                                         (Il2CppClass *)
                                                                         TypeInfo_Map_MapScriptBasicMaterial);
                                                    pIVar22[2].klass = pIVar8;
                                                    pIVar22 = il2cpp_codegen_is_inst_class
                                                                        ((Il2CppObject *)local_b8,
                                                                         (Il2CppClass *)
                                                                         TypeInfo_Map_MapScriptBasicMaterial);
                                                    Il2CppCodeGenWriteBarrier(&pIVar22[2].klass);
                                                    if ((uint)*piVar29 < 0xb) goto label_0597d07f;
                                                    local_5c = System_Single__Parse
                                                                         (pSVar16->m_Items[10],
                                                                          (MethodInfo *)0x0);
                                                    pSVar14 = local_78;
                                                    if ((uint)pSVar16->max_length < 0xc) goto label_0597d07f;
                                                    local_60 = System_Single__Parse
                                                                         (pSVar16->m_Items[0xb],
                                                                          (MethodInfo *)0x0);
                                                    pIVar22 = il2cpp_codegen_is_inst_class
                                                                        ((Il2CppObject *)local_b8,
                                                                         (Il2CppClass *)
                                                                         TypeInfo_Map_MapScriptBasicMaterial);
                                                    if (pIVar22 == (Il2CppObject *)0x0) goto label_0597d0d1;
                                                    pIVar22 = il2cpp_codegen_is_inst_class
                                                                        ((Il2CppObject *)local_b8,
                                                                         (Il2CppClass *)
                                                                         TypeInfo_Map_MapScriptBasicMaterial);
                                                    *(float *)&pIVar22[2].monitor = local_5c;
                                                    *(float *)((long)&pIVar22[2].monitor + 4) = local_60;
                                                  }
                                                  else {
                                                    pSVar18 = System_String__Concat_52f0320
                                                                        ("Unhandled legacy texture: ",local_58,
                                                                         (MethodInfo *)0x0);
                                                    if ((TypeInfo_UnityEngine_Debug->_2).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      il2cpp_codegen_runtime_class_init
                                                                ((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                                                    }
                                                    UnityEngine_Debug__Log
                                                              ((Il2CppObject *)pSVar18,(MethodInfo *)0x0);
                                                  }
                                                  uVar25 = (uint)*piVar29;
                                                  goto joined_r0x0597d079;
                                                }
                                                goto label_0597d0d1;
                                              }
                                              local_b8 = (Map_MapScriptReflectiveMaterial_o *)
                                                         il2cpp_codegen_object_new
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_Map_MapScriptLegacyMaterial);
                                              Map_MapScriptLegacyMaterial___ctor
                                                        ((Map_MapScriptLegacyMaterial_o *)local_b8,
                                                         (MethodInfo *)0x0);
                                              if ((TypeInfo_Map_MapObjectShader->_2).
                                                  cctor_finished_or_no_cctor == 0) {
                                                il2cpp_codegen_runtime_class_init
                                                          ((Il2CppClass *)TypeInfo_Map_MapObjectShader);
                                              }
                                              if (local_b8 == (Map_MapScriptReflectiveMaterial_o *)0x0)
                                              goto label_0597d0d1;
                                              pSVar18 = TypeInfo_Map_MapObjectShader->static_fields->Smoke1Mat
                                              ;
                                            }
label_0597cd54:
                                            (local_b8->fields).Shader = pSVar18;
                                            Il2CppCodeGenWriteBarrier(&(local_b8->fields).Shader);
                                            pUVar21 = il2cpp_codegen_object_new
                                                                ((Il2CppClass *)TypeInfo_Utility_Color255);
                                            color_03.fields.b = 0.5;
                                            color_03.fields.a = 0.5;
                                            color_03.fields.r = 0.5;
                                            color_03.fields.g = 0.5;
                                            Utility_Color255___ctor_5ce7790
                                                      (pUVar21,color_03,(MethodInfo *)0x0);
                                            (local_b8->fields).Color = pUVar21;
                                            Il2CppCodeGenWriteBarrier(&(local_b8->fields).Color);
                                            if ((10 < (uint)*piVar29) &&
                                               (fVar31 = System_Single__Parse
                                                                   (pSVar16->m_Items[10],(MethodInfo *)0x0),
                                               0xb < (uint)pSVar16->max_length)) {
                                              fVar32 = System_Single__Parse
                                                                 (pSVar16->m_Items[0xb],(MethodInfo *)0x0);
                                              *(float *)&(local_b8->fields).Texture = fVar31;
                                              *(float *)((long)&(local_b8->fields).Texture + 4) = fVar32;
                                              fVar31 = 0.5;
                                              goto label_0597c014;
                                            }
                                            goto label_0597d07f;
                                          }
                                          local_b8 = (Map_MapScriptReflectiveMaterial_o *)
                                                     il2cpp_codegen_object_new
                                                               ((Il2CppClass *)
                                                                TypeInfo_Map_MapScriptBasicMaterial);
                                          Map_MapScriptBasicMaterial___ctor
                                                    ((Map_MapScriptBasicMaterial_o *)local_b8,
                                                     (MethodInfo *)0x0);
                                          if (local_b8 == (Map_MapScriptReflectiveMaterial_o *)0x0)
                                          goto label_0597d0d1;
                                          (local_b8->fields).Shader = "Transparent";
                                          Il2CppCodeGenWriteBarrier(&(local_b8->fields).Shader);
                                          pUVar21 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)TypeInfo_Utility_Color255);
                                          uVar33 = 0x3f800000;
                                          uVar36 = 0;
                                          uVar37 = 0;
                                        }
                                        color_00.fields.g = (float)uVar36;
                                        color_00.fields.r = (float)uVar33;
                                        color_00.fields.a = 0.325;
                                        color_00.fields.b = (float)uVar37;
                                        Utility_Color255___ctor_5ce7790(pUVar21,color_00,(MethodInfo *)0x0);
                                        (local_b8->fields).Color = pUVar21;
                                        Il2CppCodeGenWriteBarrier(&(local_b8->fields).Color);
                                        fVar31 = 0.32;
                                        goto label_0597c014;
                                      }
                                      local_b8 = il2cpp_codegen_object_new
                                                           ((Il2CppClass *)
                                                            TypeInfo_Map_MapScriptReflectiveMaterial);
                                      Map_MapScriptReflectiveMaterial___ctor(local_b8,(MethodInfo *)0x0);
                                      if (local_b8 == (Map_MapScriptReflectiveMaterial_o *)0x0)
                                      goto label_0597d0d1;
                                      (local_b8->fields).Shader = "Reflective";
                                      Il2CppCodeGenWriteBarrier(&(local_b8->fields).Shader);
                                      pUVar21 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)TypeInfo_Utility_Color255);
                                      Utility_Color255___ctor(pUVar21,0xb2,0xe3,0xff,0xff,(MethodInfo *)0x0);
                                      (local_b8->fields).Color = pUVar21;
                                      Il2CppCodeGenWriteBarrier(&(local_b8->fields).Color);
                                      if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor ==
                                          0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                                      }
                                      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                               TypeInfo_Map_BuiltinMapTextures->static_fields->
                                               AllTexturesLower;
                                      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *
                                                    )0x0) goto label_0597d0d1;
                                      pMVar20 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                          (pSVar6,(Il2CppObject *)pSVar14,
                                                           (MethodInfo_4AAD450 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item
                                                       );
                                      pMVar10 = TypeInfo_Map_MapScriptBasicMaterial;
                                      if (pMVar20 == (Map_MapScriptBasicMaterial_o *)0x0) goto label_0597d0d1;
                                      bVar1 = (TypeInfo_Map_MapScriptBasicMaterial->_2).typeHierarchyDepth;
                                      if ((((local_b8->klass->_2).typeHierarchyDepth < bVar1) ||
                                          (ppIVar7 = (local_b8->klass->_2).typeHierarchy,
                                          ppIVar7[(ulong)bVar1 - 1] !=
                                          (Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial)) ||
                                         ((local_b8->fields).Texture = (pMVar20->fields).Texture,
                                         ppIVar7[(ulong)bVar1 - 1] != (Il2CppClass *)pMVar10)) {
label_0597d0d6:
                                        il2cpp_codegen_raise_invalid_cast_exception();
                                      }
                                      Il2CppCodeGenWriteBarrier(&(local_b8->fields).Texture);
                                      if ((uint)*piVar29 < 0xb) goto label_0597d07f;
                                      fVar32 = System_Single__Parse(pSVar16->m_Items[10],(MethodInfo *)0x0);
                                      local_78 = (System_String_o *)CONCAT44(local_78._4_4_,fVar32);
                                      if ((uint)pSVar16->max_length < 0xc) goto label_0597d07f;
                                      fVar32 = System_Single__Parse(pSVar16->m_Items[0xb],(MethodInfo *)0x0);
                                      bVar1 = (TypeInfo_Map_MapScriptBasicMaterial->_2).typeHierarchyDepth;
                                      if (((local_b8->klass->_2).typeHierarchyDepth < bVar1) ||
                                         ((local_b8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                                          (Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial))
                                      goto label_0597d0d6;
                                      (local_b8->fields).Tiling.fields.x = (float)local_78;
                                      (local_b8->fields).Tiling.fields.y = fVar32;
                                      uVar25 = (uint)*piVar29;
                                    }
                                    else {
label_0597c014:
                                      uVar25 = (uint)*piVar29;
                                    }
joined_r0x0597d079:
                                    if ((uVar25 & 0xfffffffe) == 0) goto label_0597d07f;
                                    if (pSVar16->m_Items[1] == (System_String_o *)0x0) goto label_0597d0d1;
                                    pSVar18 = System_String__ToLower(pSVar16->m_Items[1],(MethodInfo *)0x0);
                                    if ((uint)*piVar29 < 7) goto label_0597d07f;
                                    bVar12 = System_String__op_Inequality
                                                       (pSVar16->m_Items[6],"0",
                                                        (MethodInfo *)0x0);
                                    if (bVar12) {
                                      bVar12 = System_String__op_Inequality
                                                         (pSVar14,"default",(MethodInfo *)0x0);
                                      if (!bVar12) {
                                        if (pSVar18 == (System_String_o *)0x0) goto label_0597d0d1;
                                        bVar12 = System_String__StartsWith
                                                           (pSVar18,"start",(MethodInfo *)0x0);
                                        if (((bVar12) ||
                                            (bVar12 = System_String__StartsWith
                                                                (pSVar18,"kill",
                                                                 (MethodInfo *)0x0), bVar12)) ||
                                           ((bVar12 = System_String__StartsWith
                                                                (pSVar18,"end",
                                                                 (MethodInfo *)0x0), bVar12 ||
                                            (bVar12 = System_String__StartsWith
                                                                (pSVar18,"checkpoint",
                                                                 (MethodInfo *)0x0), bVar12))))
                                        goto label_0597c202;
                                      }
                                      bVar12 = System_String__op_Equality
                                                         (pSVar14,"cannonregionmat",(MethodInfo *)0x0);
                                      if (bVar12) {
                                        if ((uint)*piVar29 < 9) goto label_0597d07f;
                                        fVar34 = System_Single__Parse(pSVar16->m_Items[8],(MethodInfo *)0x0);
                                        pUVar21 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)TypeInfo_Utility_Color255);
                                        fVar32 = 0.0;
                                        uVar33 = 0;
                                      }
                                      else {
                                        if ((((*piVar29 & 0xfffffff8) == 0) ||
                                            (fVar32 = System_Single__Parse
                                                                (pSVar16->m_Items[7],(MethodInfo *)0x0),
                                            (uint)pSVar16->max_length < 9)) ||
                                           (fVar34 = System_Single__Parse
                                                               (pSVar16->m_Items[8],(MethodInfo *)0x0),
                                           (uint)pSVar16->max_length < 10)) goto label_0597d07f;
                                        fVar35 = System_Single__Parse(pSVar16->m_Items[9],(MethodInfo *)0x0);
                                        local_78 = (System_String_o *)CONCAT44(extraout_XMM0_Db_00,fVar35);
                                        pUVar21 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)TypeInfo_Utility_Color255);
                                        uVar33 = (float)local_78;
                                      }
                                      color_01.fields.g = fVar34;
                                      color_01.fields.r = fVar32;
                                      color_01.fields.a = fVar31;
                                      color_01.fields.b = (float)uVar33;
                                      Utility_Color255___ctor_5ce7790(pUVar21,color_01,(MethodInfo *)0x0);
                                      (local_b8->fields).Color = pUVar21;
                                      Il2CppCodeGenWriteBarrier(&(local_b8->fields).Color);
                                    }
label_0597c202:
                                    targetAddress = &(pMVar13->fields).Material;
                                    *targetAddress = (Map_MapScriptBaseMaterial_o *)local_b8;
                                    Il2CppCodeGenWriteBarrier(targetAddress);
                                    uVar26 = local_68;
label_0597c21b:
                                    bVar12 = System_String__op_Equality
                                                       ((pMVar13->fields).Asset,"None",
                                                        (MethodInfo *)0x0);
                                    if ((!bVar12) ||
                                       (bVar12 = System_String__op_Equality
                                                           ((pMVar13->fields).Name,"Unnamed",
                                                            (MethodInfo *)0x0), !bVar12)) {
                                      if (Il2CppMethodInitialized_075459e3 == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapConverter)
                                        ;
                                        Il2CppMethodInitialized_075459e3 = '\x01';
                                      }
                                      iVar23 = TypeInfo_Map_MapConverter->static_fields->_currentId + 1;
                                      TypeInfo_Map_MapConverter->static_fields->_currentId = iVar23;
                                      (pMVar13->fields).Id = iVar23;
                                      pMVar11 = 
                                      MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
                                      pMVar3 = (local_50->fields).Objects;
                                      if (pMVar3 == (Map_MapScriptObjects_o *)0x0) goto label_0597d0d1;
                                      pMVar15 = (MethodInfo *)(pMVar3->fields).Objects;
                                      if (pMVar15 == (MethodInfo *)0x0) goto label_0597d0d1;
                                      piVar9 = (int32_t *)((long)&pMVar15->name + 4);
                                      *piVar9 = *piVar9 + 1;
                                      pMVar4 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *
                                                )&pMVar15->invoker_method)->_items;
                                      if (pMVar4 == (Map_MapScriptBaseObject_array *)0x0) goto label_0597d0d1;
                                      uVar25 = *(uint *)&pMVar15->name;
                                      if (uVar25 < (uint)pMVar4->max_length) {
                                        *(uint *)&pMVar15->name = uVar25 + 1;
                                        pMVar15 = (MethodInfo *)(pMVar4->m_Items + (int)uVar25);
                                        pMVar4->m_Items[(int)uVar25] = (Map_MapScriptBaseObject_o *)pMVar13;
                                        Il2CppCodeGenWriteBarrier((void **)pMVar15);
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)pMVar15,
                                                   (Il2CppObject *)pMVar13,
                                                   (MethodInfo_395D230 *)
                                                   pMVar11->klass->rgctx_data[0xe].method);
                                      }
label_0597c346:
                                      uVar24 = uVar26 & 0xffffffff;
                                    }
                                    else {
                                      pMVar15 = (MethodInfo *)
                                                System_String__Concat_52f0320
                                                          ("Unhandled legacy object: ",local_58,(MethodInfo *)0x0);
                                      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                                      }
                                      UnityEngine_Debug__Log((Il2CppObject *)pMVar15,(MethodInfo *)0x0);
                                      uVar24 = uVar26 & 0xffffffff;
                                    }
                                  }
                                  else {
                                    if ((int)*piVar29 == 0) goto label_0597d07f;
                                    if (pSVar16->m_Items[0] == (System_String_o *)0x0) goto label_0597d0d1;
                                    bVar12 = System_String__StartsWith
                                                       (pSVar16->m_Items[0],"spawnpoint",
                                                        (MethodInfo *)0x0);
                                    if (bVar12) {
                                      if (((uint)*piVar29 & 0xfffffffe) != 0) {
                                        if (pSVar16->m_Items[1] == (System_String_o *)0x0) goto label_0597d0d1;
                                        pSVar14 = System_String__ToLower
                                                            (pSVar16->m_Items[1],(MethodInfo *)0x0);
                                        bVar12 = System_String__op_Equality
                                                           (pSVar14,"titan",(MethodInfo *)0x0);
                                        if (bVar12) {
                                          if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor
                                              == 0) {
                                            il2cpp_codegen_runtime_class_init
                                                      ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                          }
                                          pSVar28 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                                          if (pSVar28 !=
                                              (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o
                                               *)0x0) {
                                            ppSVar19 = &"Titan SpawnPoint";
                                            goto label_0597af0d;
                                          }
                                          goto label_0597d0d1;
                                        }
                                        if ((*piVar29 & 0xfffffffe) != 0) {
                                          if (pSVar16->m_Items[1] == (System_String_o *)0x0)
                                          goto label_0597d0d1;
                                          pSVar14 = System_String__ToLower
                                                              (pSVar16->m_Items[1],(MethodInfo *)0x0);
                                          bVar12 = System_String__op_Equality
                                                             (pSVar14,"player",(MethodInfo *)0x0)
                                          ;
                                          if (bVar12) {
                                            if ((TypeInfo_Map_BuiltinMapPrefabs->_2).
                                                cctor_finished_or_no_cctor == 0) {
                                              il2cpp_codegen_runtime_class_init
                                                        ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                            }
                                            pSVar6 = (System_Collections_Generic_Dictionary_object__object__o
                                                      *)TypeInfo_Map_BuiltinMapPrefabs->static_fields->
                                                        AllPrefabs;
                                            if (pSVar6 == (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) goto label_0597d0d1;
                                            pMVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                                (pSVar6,(Il2CppObject *)"Human SpawnPoint",
                                                                 (MethodInfo_4AAD450 *)
                                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                                       );
                                            if (pMVar13 == (Map_MapScriptSceneObject_o *)0x0)
                                            goto label_0597d0d1;
label_0597b0b1:
                                            (*(pMVar13->klass->vtable)._10_Copy.methodPtr)
                                                      (pMVar13,(Utility_BaseCSVObject_o *)pMVar17,
                                                       (pMVar13->klass->vtable)._10_Copy.method);
                                          }
                                          else {
                                            if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                            if (pSVar16->m_Items[1] == (System_String_o *)0x0)
                                            goto label_0597d0d1;
                                            pSVar14 = System_String__ToLower
                                                                (pSVar16->m_Items[1],(MethodInfo *)0x0);
                                            bVar12 = System_String__op_Equality
                                                               (pSVar14,"playerc",
                                                                (MethodInfo *)0x0);
                                            if (bVar12) {
                                              if ((TypeInfo_Map_BuiltinMapPrefabs->_2).
                                                  cctor_finished_or_no_cctor == 0) {
                                                il2cpp_codegen_runtime_class_init
                                                          ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                              }
                                              pSVar28 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->
                                                        AllPrefabs;
                                              if (pSVar28 !=
                                                  (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o
                                                   *)0x0) {
                                                ppSVar19 = &"Human SpawnPoint (blue)";
label_0597af0d:
                                                pMVar17 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pSVar28,(Il2CppObject *)*ppSVar19,
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                                       );
                                                if (pMVar13 != (Map_MapScriptSceneObject_o *)0x0)
                                                goto label_0597b0b1;
                                              }
                                              goto label_0597d0d1;
                                            }
                                            if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                            if (pSVar16->m_Items[1] == (System_String_o *)0x0)
                                            goto label_0597d0d1;
                                            pSVar14 = System_String__ToLower
                                                                (pSVar16->m_Items[1],(MethodInfo *)0x0);
                                            bVar12 = System_String__op_Equality
                                                               (pSVar14,"playerm",
                                                                (MethodInfo *)0x0);
                                            if (bVar12) {
                                              if ((TypeInfo_Map_BuiltinMapPrefabs->_2).
                                                  cctor_finished_or_no_cctor == 0) {
                                                il2cpp_codegen_runtime_class_init
                                                          ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                              }
                                              pSVar28 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->
                                                        AllPrefabs;
                                              if (pSVar28 !=
                                                  (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o
                                                   *)0x0) {
                                                ppSVar19 = &"Human SpawnPoint (red)";
                                                goto label_0597af0d;
                                              }
                                              goto label_0597d0d1;
                                            }
                                          }
                                          if (((2 < (uint)*piVar29) &&
                                              (local_a8 = System_Single__Parse
                                                                    (pSVar16->m_Items[2],(MethodInfo *)0x0),
                                              (pSVar16->max_length & 0xfffffffc) != 0)) &&
                                             (fStack_a4 = System_Single__Parse
                                                                    (pSVar16->m_Items[3],(MethodInfo *)0x0),
                                             4 < (uint)pSVar16->max_length)) {
                                            fVar31 = System_Single__Parse
                                                               (pSVar16->m_Items[4],(MethodInfo *)0x0);
                                            if (pMVar13 != (Map_MapScriptSceneObject_o *)0x0) {
label_0597b12d:
                                              position_00.fields.y = fStack_a4;
                                              position_00.fields.x = local_a8;
                                              position_00.fields.z = fVar31;
                                              Map_MapScriptBaseObject__SetPosition
                                                        ((Map_MapScriptBaseObject_o *)pMVar13,position_00,
                                                         (MethodInfo *)0x0);
                                              goto label_0597c21b;
                                            }
                                            goto label_0597d0d1;
                                          }
                                        }
                                      }
                                      goto label_0597d07f;
                                    }
                                    if ((uint)*piVar29 == 0) goto label_0597d07f;
                                    if (pSVar16->m_Items[0] == (System_String_o *)0x0) goto label_0597d0d1;
                                    bVar12 = System_String__StartsWith
                                                       (pSVar16->m_Items[0],"misc",
                                                        (MethodInfo *)0x0);
                                    if (bVar12) {
                                      if (((uint)*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                      bVar12 = System_String__op_Equality
                                                         (pSVar16->m_Items[1],"barrier",
                                                          (MethodInfo *)0x0);
                                      if (bVar12) {
                                        if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor ==
                                            0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                        }
                                        pSVar28 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                                        if (pSVar28 !=
                                            (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o
                                             *)0x0) {
                                          ppSVar19 = &"LegacyBarrier";
label_0597afd1:
                                          pMVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                              ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pSVar28,(Il2CppObject *)*ppSVar19,
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                                       );
joined_r0x0597afe6:
                                          if (pMVar13 != (Map_MapScriptSceneObject_o *)0x0) {
                                            (*(pMVar13->klass->vtable)._10_Copy.methodPtr)
                                                      (pMVar13,(Utility_BaseCSVObject_o *)pMVar17,
                                                       (pMVar13->klass->vtable)._10_Copy.method);
                                            uVar25 = (uint)*piVar29;
joined_r0x0597b347:
                                            if (((5 < uVar25) &&
                                                (UVar39.fields.x =
                                                      System_Single__Parse
                                                                (pSVar16->m_Items[5],(MethodInfo *)0x0),
                                                6 < (uint)pSVar16->max_length)) &&
                                               (fVar31 = System_Single__Parse
                                                                   (pSVar16->m_Items[6],(MethodInfo *)0x0),
                                               (pSVar16->max_length & 0xfffffff8) != 0)) {
                                              fVar32 = System_Single__Parse
                                                                 (pSVar16->m_Items[7],(MethodInfo *)0x0);
                                              UVar39.fields.y = fVar31;
                                              UVar39.fields.z = fVar32;
                                              Map_MapScriptBaseObject__SetPosition
                                                        ((Map_MapScriptBaseObject_o *)pMVar13,UVar39,
                                                         (MethodInfo *)0x0);
                                              if ((((8 < (uint)pSVar16->max_length) &&
                                                   (UVar38.fields.x =
                                                         System_Single__Parse
                                                                   (pSVar16->m_Items[8],(MethodInfo *)0x0),
                                                   9 < (uint)pSVar16->max_length)) &&
                                                  (fVar31 = System_Single__Parse
                                                                      (pSVar16->m_Items[9],(MethodInfo *)0x0),
                                                  10 < (uint)pSVar16->max_length)) &&
                                                 (fVar32 = System_Single__Parse
                                                                     (pSVar16->m_Items[10],(MethodInfo *)0x0),
                                                 0xb < (uint)pSVar16->max_length)) {
                                                fVar34 = System_Single__Parse
                                                                   (pSVar16->m_Items[0xb],(MethodInfo *)0x0);
                                                UVar38.fields.y = fVar31;
                                                UVar38.fields.w = fVar34;
                                                UVar38.fields.z = fVar32;
                                                Map_MapScriptBaseObject__SetRotation_58a1ff0
                                                          ((Map_MapScriptBaseObject_o *)pMVar13,UVar38,
                                                           (MethodInfo *)0x0);
                                                if (((2 < (uint)pSVar16->max_length) &&
                                                    (fVar31 = System_Single__Parse
                                                                        (pSVar16->m_Items[2],(MethodInfo *)0x0
                                                                        ),
                                                    (pSVar16->max_length & 0xfffffffc) != 0)) &&
                                                   (fVar32 = System_Single__Parse
                                                                       (pSVar16->m_Items[3],(MethodInfo *)0x0)
                                                   , 4 < (uint)pSVar16->max_length)) {
                                                  fVar34 = System_Single__Parse
                                                                     (pSVar16->m_Items[4],(MethodInfo *)0x0);
label_0597b484:
                                                  scale_00.fields.y = fVar32;
                                                  scale_00.fields.x = fVar31;
                                                  scale_00.fields.z = fVar34;
                                                  Map_MapScriptBaseObject__SetScale
                                                            ((Map_MapScriptBaseObject_o *)pMVar13,scale_00,
                                                             (MethodInfo *)0x0);
                                                  goto label_0597c21b;
                                                }
                                              }
                                            }
                                            goto label_0597d07f;
                                          }
                                        }
                                      }
                                      else {
                                        if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                        bVar12 = System_String__op_Equality
                                                           (pSVar16->m_Items[1],"barrierEditor",
                                                            (MethodInfo *)0x0);
                                        if (bVar12) {
                                          local_68 = uVar26;
                                          if (pMVar13 != (Map_MapScriptSceneObject_o *)0x0) {
                                            (pMVar13->fields).Asset = "Geometry/Cuboid";
                                            Il2CppCodeGenWriteBarrier(&(pMVar13->fields).Asset);
                                            pMVar20 = il2cpp_codegen_object_new
                                                                ((Il2CppClass *)
                                                                 TypeInfo_Map_MapScriptBasicMaterial);
                                            Map_MapScriptBasicMaterial___ctor(pMVar20,(MethodInfo *)0x0);
                                            if (pMVar20 != (Map_MapScriptBasicMaterial_o *)0x0) {
                                              (pMVar20->fields).Shader = "Transparent";
                                              Il2CppCodeGenWriteBarrier(&(pMVar20->fields).Shader);
                                              pUVar21 = il2cpp_codegen_object_new
                                                                  ((Il2CppClass *)TypeInfo_Utility_Color255);
                                              color.fields.b = 1.0;
                                              color.fields.a = 0.32;
                                              color.fields.r = 0.0;
                                              color.fields.g = 0.917;
                                              Utility_Color255___ctor_5ce7790(pUVar21,color,(MethodInfo *)0x0)
                                              ;
                                              (pMVar20->fields).Color = pUVar21;
                                              Il2CppCodeGenWriteBarrier(&(pMVar20->fields).Color);
                                              (pMVar13->fields).Material =
                                                   (Map_MapScriptBaseMaterial_o *)pMVar20;
                                              Il2CppCodeGenWriteBarrier(&(pMVar13->fields).Material);
                                              uVar25 = (uint)*piVar29;
                                              uVar26 = local_68;
                                              goto joined_r0x0597b347;
                                            }
                                          }
                                        }
                                        else {
                                          if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                          bVar12 = System_String__op_Equality
                                                             (pSVar16->m_Items[1],"racingStart",
                                                              (MethodInfo *)0x0);
                                          if (bVar12) {
                                            if ((TypeInfo_Map_BuiltinMapPrefabs->_2).
                                                cctor_finished_or_no_cctor == 0) {
                                              il2cpp_codegen_runtime_class_init
                                                        ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                            }
                                            pSVar28 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->
                                                      AllPrefabs;
                                            if (pSVar28 !=
                                                (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o
                                                 *)0x0) {
                                              ppSVar19 = &"Racing Start Barrier Cuboid";
                                              goto label_0597afd1;
                                            }
                                          }
                                          else {
                                            if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                            bVar12 = System_String__op_Equality
                                                               (pSVar16->m_Items[1],"racingEnd",
                                                                (MethodInfo *)0x0);
                                            if (!bVar12) {
                                              if ((*piVar29 & 0xfffffffe) != 0) {
                                                pMVar15 = (MethodInfo *)pSVar16->m_Items[1];
                                                bVar12 = System_String__op_Equality
                                                                   ((System_String_o *)pMVar15,
                                                                    "region",(MethodInfo *)0x0);
                                                if (!bVar12) goto label_0597cc69;
                                                goto label_0597c346;
                                              }
                                              goto label_0597d07f;
                                            }
                                            if ((TypeInfo_Map_BuiltinMapPrefabs->_2).
                                                cctor_finished_or_no_cctor == 0) {
                                              il2cpp_codegen_runtime_class_init
                                                        ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                            }
                                            pSVar6 = (System_Collections_Generic_Dictionary_object__object__o
                                                      *)TypeInfo_Map_BuiltinMapPrefabs->static_fields->
                                                        AllPrefabs;
                                            if (pSVar6 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                              pMVar17 = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Item
                                                                 (pSVar6,(Il2CppObject *)"Racing Finish Region Cuboid"
                                                                  ,(MethodInfo_4AAD450 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                                       );
                                              goto joined_r0x0597afe6;
                                            }
                                          }
                                        }
                                      }
                                      goto label_0597d0d1;
                                    }
                                    if ((uint)*piVar29 == 0) goto label_0597d07f;
                                    if (pSVar16->m_Items[0] == (System_String_o *)0x0) goto label_0597d0d1;
                                    bVar12 = System_String__StartsWith
                                                       (pSVar16->m_Items[0],"base",
                                                        (MethodInfo *)0x0);
                                    if (bVar12) {
                                      if (((uint)*piVar29 & 0xfffffffe) != 0) {
                                        if (pSVar16->m_Items[1] != (System_String_o *)0x0) {
                                          pSVar14 = System_String__ToLower
                                                              (pSVar16->m_Items[1],(MethodInfo *)0x0);
                                          bVar12 = System_String__op_Equality
                                                             (pSVar14,"aot_supply",(MethodInfo *)0x0)
                                          ;
                                          if (bVar12) {
                                            if ((TypeInfo_Map_BuiltinMapPrefabs->_2).
                                                cctor_finished_or_no_cctor == 0) {
                                              il2cpp_codegen_runtime_class_init
                                                        ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                            }
                                            pSVar28 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->
                                                      AllPrefabs;
                                            if (pSVar28 ==
                                                (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o
                                                 *)0x0) goto label_0597d0d1;
                                            ppSVar19 = &"Supply1";
label_0597b910:
                                            pMVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                                ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pSVar28,(Il2CppObject *)*ppSVar19,
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                                       );
                                            if (pMVar13 == (Map_MapScriptSceneObject_o *)0x0)
                                            goto label_0597d0d1;
                                            (*(pMVar13->klass->vtable)._10_Copy.methodPtr)
                                                      (pMVar13,(Utility_BaseCSVObject_o *)pMVar17,
                                                       (pMVar13->klass->vtable)._10_Copy.method);
                                          }
                                          else {
                                            if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                            if (pSVar16->m_Items[1] == (System_String_o *)0x0)
                                            goto label_0597d0d1;
                                            pSVar14 = System_String__ToLower
                                                                (pSVar16->m_Items[1],(MethodInfo *)0x0);
                                            bVar12 = System_String__op_Equality
                                                               (pSVar14,"levelbottom",
                                                                (MethodInfo *)0x0);
                                            if (bVar12) {
                                              if ((TypeInfo_Map_BuiltinMapPrefabs->_2).
                                                  cctor_finished_or_no_cctor == 0) {
                                                il2cpp_codegen_runtime_class_init
                                                          ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                              }
                                              pSVar28 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->
                                                        AllPrefabs;
                                              if (pSVar28 !=
                                                  (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o
                                                   *)0x0) {
                                                ppSVar19 = &"LevelBottom";
                                                goto label_0597b910;
                                              }
                                              goto label_0597d0d1;
                                            }
                                          }
                                          if ((int)(uint)*piVar29 < 0xf) {
                                            if ((((uint)*piVar29 < 3) ||
                                                (UVar40.fields.x =
                                                      System_Single__Parse
                                                                (pSVar16->m_Items[2],(MethodInfo *)0x0),
                                                (pSVar16->max_length & 0xfffffffc) == 0)) ||
                                               (fVar31 = System_Single__Parse
                                                                   (pSVar16->m_Items[3],(MethodInfo *)0x0),
                                               (uint)pSVar16->max_length < 5)) goto label_0597d07f;
                                            fVar32 = System_Single__Parse
                                                               (pSVar16->m_Items[4],(MethodInfo *)0x0);
                                            if (pMVar13 == (Map_MapScriptSceneObject_o *)0x0)
                                            goto label_0597d0d1;
                                            UVar40.fields.y = fVar31;
                                            UVar40.fields.z = fVar32;
                                            Map_MapScriptBaseObject__SetPosition
                                                      ((Map_MapScriptBaseObject_o *)pMVar13,UVar40,
                                                       (MethodInfo *)0x0);
                                            if (((((uint)*piVar29 < 6) ||
                                                 (rotation_01.fields.x =
                                                       System_Single__Parse
                                                                 (pSVar16->m_Items[5],(MethodInfo *)0x0),
                                                 (uint)pSVar16->max_length < 7)) ||
                                                (fVar31 = System_Single__Parse
                                                                    (pSVar16->m_Items[6],(MethodInfo *)0x0),
                                                (pSVar16->max_length & 0xfffffff8) == 0)) ||
                                               (fVar32 = System_Single__Parse
                                                                   (pSVar16->m_Items[7],(MethodInfo *)0x0),
                                               (uint)pSVar16->max_length < 9)) goto label_0597d07f;
                                            fVar34 = System_Single__Parse
                                                               (pSVar16->m_Items[8],(MethodInfo *)0x0);
                                            rotation_01.fields.y = fVar31;
                                            rotation_01.fields.w = fVar34;
                                            rotation_01.fields.z = fVar32;
                                            Map_MapScriptBaseObject__SetRotation_58a1ff0
                                                      ((Map_MapScriptBaseObject_o *)pMVar13,rotation_01,
                                                       (MethodInfo *)0x0);
                                          }
                                          else {
                                            position_01.fields.x =
                                                 System_Single__Parse(pSVar16->m_Items[0xc],(MethodInfo *)0x0)
                                            ;
                                            if (((uint)pSVar16->max_length < 0xe) ||
                                               (fVar31 = System_Single__Parse
                                                                   (pSVar16->m_Items[0xd],(MethodInfo *)0x0),
                                               (uint)pSVar16->max_length < 0xf)) goto label_0597d07f;
                                            fVar32 = System_Single__Parse
                                                               (pSVar16->m_Items[0xe],(MethodInfo *)0x0);
                                            if (pMVar13 == (Map_MapScriptSceneObject_o *)0x0)
                                            goto label_0597d0d1;
                                            position_01.fields.y = fVar31;
                                            position_01.fields.z = fVar32;
                                            Map_MapScriptBaseObject__SetPosition
                                                      ((Map_MapScriptBaseObject_o *)pMVar13,position_01,
                                                       (MethodInfo *)0x0);
                                            if ((((*piVar29 & 0xfffffff0) == 0) ||
                                                (rotation_00.fields.x =
                                                      System_Single__Parse
                                                                (pSVar16->m_Items[0xf],(MethodInfo *)0x0),
                                                (uint)pSVar16->max_length < 0x11)) ||
                                               ((fVar31 = System_Single__Parse
                                                                    (pSVar16->m_Items[0x10],(MethodInfo *)0x0)
                                                , (uint)pSVar16->max_length < 0x12 ||
                                                (fVar32 = System_Single__Parse
                                                                    (pSVar16->m_Items[0x11],(MethodInfo *)0x0)
                                                , (uint)pSVar16->max_length < 0x13)))) goto label_0597d07f;
                                            fVar34 = System_Single__Parse
                                                               (pSVar16->m_Items[0x12],(MethodInfo *)0x0);
                                            rotation_00.fields.y = fVar31;
                                            rotation_00.fields.w = fVar34;
                                            rotation_00.fields.z = fVar32;
                                            Map_MapScriptBaseObject__SetRotation_58a1ff0
                                                      ((Map_MapScriptBaseObject_o *)pMVar13,rotation_00,
                                                       (MethodInfo *)0x0);
                                            if ((((pSVar16->max_length & 0xfffffffc) == 0) ||
                                                (scale_01.fields.x =
                                                      System_Single__Parse
                                                                (pSVar16->m_Items[3],(MethodInfo *)0x0),
                                                (uint)pSVar16->max_length < 5)) ||
                                               (fVar31 = System_Single__Parse
                                                                   (pSVar16->m_Items[4],(MethodInfo *)0x0),
                                               (uint)pSVar16->max_length < 6)) goto label_0597d07f;
                                            fVar32 = System_Single__Parse
                                                               (pSVar16->m_Items[5],(MethodInfo *)0x0);
                                            scale_01.fields.y = fVar31;
                                            scale_01.fields.z = fVar32;
                                            Map_MapScriptBaseObject__SetScale
                                                      ((Map_MapScriptBaseObject_o *)pMVar13,scale_01,
                                                       (MethodInfo *)0x0);
                                          }
                                          if ((*piVar29 & 0xfffffffe) != 0) {
                                            if (pSVar16->m_Items[1] != (System_String_o *)0x0) {
                                              pSVar14 = System_String__ToLower
                                                                  (pSVar16->m_Items[1],(MethodInfo *)0x0);
                                              bVar12 = System_String__op_Equality
                                                                 (pSVar14,"aot_supply",
                                                                  (MethodInfo *)0x0);
                                              if (!bVar12) goto label_0597c21b;
                                              UVar39 = Map_MapScriptBaseObject__GetPosition
                                                                 ((Map_MapScriptBaseObject_o *)pMVar13,
                                                                  (MethodInfo *)0x0);
                                              UVar40 = Map_MapScriptBaseObject__GetRotation
                                                                 ((Map_MapScriptBaseObject_o *)pMVar13,
                                                                  (MethodInfo *)0x0);
                                              local_40.z = UVar40.fields.z * 0.017453292;
                                              local_40.y = UVar40.fields.y * 0.017453292;
                                              local_40.x = UVar40.fields.x * 0.017453292;
                                              UVar38 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                 ((UnityEngine_Vector3_o *)&local_40,
                                                                  (MethodInfo *)0x0);
                                              if (Il2CppMethodInitialized_07545a60 == '\0') {
                                                il2cpp_codegen_initialize_runtime_metadata
                                                          (&TypeInfo_UnityEngine_Vector3);
                                                Il2CppMethodInitialized_07545a60 = '\x01';
                                              }
                                              UVar40 = UnityEngine_Quaternion__op_Multiply_6905700
                                                                 (UVar38,(UnityEngine_Vector3_o)
                                                                         (TypeInfo_UnityEngine_Vector3->
                                                                          static_fields->backVector).fields,
                                                                  (MethodInfo *)0x0);
                                              local_a8 = UVar39.fields.x;
                                              fStack_a4 = UVar39.fields.y;
                                              local_a8 = UVar40.fields.x * 0.37 + local_a8;
                                              fStack_a4 = UVar40.fields.y * 0.37 + fStack_a4;
                                              fVar31 = UVar40.fields.z * 0.37 + UVar39.fields.z;
                                              goto label_0597b12d;
                                            }
                                            goto label_0597d0d1;
                                          }
                                          goto label_0597d07f;
                                        }
                                        goto label_0597d0d1;
                                      }
                                      goto label_0597d07f;
                                    }
                                    if ((uint)*piVar29 == 0) goto label_0597d07f;
                                    if (pSVar16->m_Items[0] == (System_String_o *)0x0) goto label_0597d0d1;
                                    bVar12 = System_String__StartsWith
                                                       (pSVar16->m_Items[0],"photon",
                                                        (MethodInfo *)0x0);
                                    uVar24 = (ulong)(uint)*piVar29;
                                    if (bVar12) {
                                      if (((uint)*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                      if (pSVar16->m_Items[1] == (System_String_o *)0x0) goto label_0597d0d1;
                                      pSVar14 = System_String__ToLower(pSVar16->m_Items[1],(MethodInfo *)0x0);
                                      bVar12 = System_String__op_Equality
                                                         (pSVar14,"cannonground",(MethodInfo *)0x0);
                                      if (bVar12) {
label_0597b5c1:
                                        if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                        if (pSVar16->m_Items[1] == (System_String_o *)0x0) goto label_0597d0d1;
                                        pSVar14 = System_String__ToLower
                                                            (pSVar16->m_Items[1],(MethodInfo *)0x0);
                                        bVar12 = System_String__op_Equality
                                                           (pSVar14,"cannonground",(MethodInfo *)0x0);
                                        uVar2 = (TypeInfo_Map_BuiltinMapPrefabs->_2).
                                                cctor_finished_or_no_cctor;
                                        if (bVar12) {
                                          if (uVar2 == 0) {
                                            il2cpp_codegen_runtime_class_init
                                                      ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                          }
                                          pSVar28 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                                          if (pSVar28 ==
                                              (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o
                                               *)0x0) goto label_0597d0d1;
                                          ppSVar19 = &"Cannon2";
                                        }
                                        else {
                                          if (uVar2 == 0) {
                                            il2cpp_codegen_runtime_class_init
                                                      ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                          }
                                          pSVar28 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                                          if (pSVar28 ==
                                              (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o
                                               *)0x0) goto label_0597d0d1;
                                          ppSVar19 = &"Cannon3";
                                        }
                                        pMVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                            ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pSVar28,(Il2CppObject *)*ppSVar19,
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                                       );
                                        if (pMVar13 == (Map_MapScriptSceneObject_o *)0x0) goto label_0597d0d1;
                                        (*(pMVar13->klass->vtable)._10_Copy.methodPtr)
                                                  (pMVar13,(Utility_BaseCSVObject_o *)pMVar17,
                                                   (pMVar13->klass->vtable)._10_Copy.method);
                                        if (0xe < (int)(uint)*piVar29) {
                                          position_02.fields.x =
                                               System_Single__Parse(pSVar16->m_Items[0xc],(MethodInfo *)0x0);
                                          if ((0xd < (uint)pSVar16->max_length) &&
                                             (fVar31 = System_Single__Parse
                                                                 (pSVar16->m_Items[0xd],(MethodInfo *)0x0),
                                             0xe < (uint)pSVar16->max_length)) {
                                            fVar32 = System_Single__Parse
                                                               (pSVar16->m_Items[0xe],(MethodInfo *)0x0);
                                            position_02.fields.y = fVar31;
                                            position_02.fields.z = fVar32;
                                            Map_MapScriptBaseObject__SetPosition
                                                      ((Map_MapScriptBaseObject_o *)pMVar13,position_02,
                                                       (MethodInfo *)0x0);
                                            if ((((pSVar16->max_length & 0xfffffff0) != 0) &&
                                                ((rotation_02.fields.x =
                                                       System_Single__Parse
                                                                 (pSVar16->m_Items[0xf],(MethodInfo *)0x0),
                                                 0x10 < (uint)pSVar16->max_length &&
                                                 (fVar31 = System_Single__Parse
                                                                     (pSVar16->m_Items[0x10],(MethodInfo *)0x0
                                                                     ), 0x11 < (uint)pSVar16->max_length))))
                                               && (fVar32 = System_Single__Parse
                                                                      (pSVar16->m_Items[0x11],
                                                                       (MethodInfo *)0x0),
                                                  0x12 < (uint)pSVar16->max_length)) {
                                              fVar34 = System_Single__Parse
                                                                 (pSVar16->m_Items[0x12],(MethodInfo *)0x0);
                                              rotation_02.fields.y = fVar31;
                                              rotation_02.fields.w = fVar34;
                                              rotation_02.fields.z = fVar32;
                                              Map_MapScriptBaseObject__SetRotation_58a1ff0
                                                        ((Map_MapScriptBaseObject_o *)pMVar13,rotation_02,
                                                         (MethodInfo *)0x0);
                                              if ((((pSVar16->max_length & 0xfffffffc) != 0) &&
                                                  (fVar31 = System_Single__Parse
                                                                      (pSVar16->m_Items[3],(MethodInfo *)0x0),
                                                  4 < (uint)pSVar16->max_length)) &&
                                                 (fVar32 = System_Single__Parse
                                                                     (pSVar16->m_Items[4],(MethodInfo *)0x0),
                                                 5 < (uint)pSVar16->max_length)) {
                                                pSVar14 = pSVar16->m_Items[5];
                                                goto label_0597cc51;
                                              }
                                            }
                                          }
                                          goto label_0597d07f;
                                        }
                                        if ((((uint)*piVar29 < 3) ||
                                            (position_03.fields.x =
                                                  System_Single__Parse(pSVar16->m_Items[2],(MethodInfo *)0x0),
                                            (pSVar16->max_length & 0xfffffffc) == 0)) ||
                                           (fVar31 = System_Single__Parse
                                                               (pSVar16->m_Items[3],(MethodInfo *)0x0),
                                           (uint)pSVar16->max_length < 5)) goto label_0597d07f;
                                        fVar32 = System_Single__Parse(pSVar16->m_Items[4],(MethodInfo *)0x0);
                                        position_03.fields.y = fVar31;
                                        position_03.fields.z = fVar32;
                                        Map_MapScriptBaseObject__SetPosition
                                                  ((Map_MapScriptBaseObject_o *)pMVar13,position_03,
                                                   (MethodInfo *)0x0);
                                        if ((((uint)pSVar16->max_length < 6) ||
                                            (fVar31 = System_Single__Parse
                                                                (pSVar16->m_Items[5],(MethodInfo *)0x0),
                                            (uint)pSVar16->max_length < 7)) ||
                                           ((fVar32 = System_Single__Parse
                                                                (pSVar16->m_Items[6],(MethodInfo *)0x0),
                                            (pSVar16->max_length & 0xfffffff8) == 0 ||
                                            (fVar34 = System_Single__Parse
                                                                (pSVar16->m_Items[7],(MethodInfo *)0x0),
                                            (uint)pSVar16->max_length < 9)))) goto label_0597d07f;
                                        pSVar14 = pSVar16->m_Items[8];
                                      }
                                      else {
                                        if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                        if (pSVar16->m_Items[1] == (System_String_o *)0x0) goto label_0597d0d1;
                                        pSVar14 = System_String__ToLower
                                                            (pSVar16->m_Items[1],(MethodInfo *)0x0);
                                        bVar12 = System_String__op_Equality
                                                           (pSVar14,"cannonwall",(MethodInfo *)0x0);
                                        if (bVar12) goto label_0597b5c1;
                                        if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                        if ((pSVar16->m_Items[1] == (System_String_o *)0x0) ||
                                           (pSVar14 = System_String__ToLower
                                                                (pSVar16->m_Items[1],(MethodInfo *)0x0),
                                           pSVar14 == (System_String_o *)0x0)) goto label_0597d0d1;
                                        bVar12 = System_String__StartsWith
                                                           (pSVar14,"spawn",(MethodInfo *)0x0);
                                        if (!bVar12) goto label_0597cc69;
                                        if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor ==
                                            0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                        }
                                        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                                 TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
                                        if ((pSVar6 == (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) ||
                                           (pMVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                                (pSVar6,(Il2CppObject *)"Titan SpawnPoint",
                                                                 (MethodInfo_4AAD450 *)
                                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                                       ), pMVar13 == (Map_MapScriptSceneObject_o *)0x0))
                                        goto label_0597d0d1;
                                        (*(pMVar13->klass->vtable)._10_Copy.methodPtr)
                                                  (pMVar13,(Utility_BaseCSVObject_o *)pMVar17,
                                                   (pMVar13->klass->vtable)._10_Copy.method);
                                        if (((uint)*piVar29 < 5) ||
                                           ((position_04.fields.x =
                                                  System_Single__Parse(pSVar16->m_Items[4],(MethodInfo *)0x0),
                                            (uint)pSVar16->max_length < 6 ||
                                            (fVar31 = System_Single__Parse
                                                                (pSVar16->m_Items[5],(MethodInfo *)0x0),
                                            (uint)pSVar16->max_length < 7)))) goto label_0597d07f;
                                        fVar32 = System_Single__Parse(pSVar16->m_Items[6],(MethodInfo *)0x0);
                                        position_04.fields.y = fVar31;
                                        position_04.fields.z = fVar32;
                                        Map_MapScriptBaseObject__SetPosition
                                                  ((Map_MapScriptBaseObject_o *)pMVar13,position_04,
                                                   (MethodInfo *)0x0);
                                        if (((pSVar16->max_length & 0xfffffff8) == 0) ||
                                           (((fVar31 = System_Single__Parse
                                                                 (pSVar16->m_Items[7],(MethodInfo *)0x0),
                                             (uint)pSVar16->max_length < 9 ||
                                             (fVar32 = System_Single__Parse
                                                                 (pSVar16->m_Items[8],(MethodInfo *)0x0),
                                             (uint)pSVar16->max_length < 10)) ||
                                            (fVar34 = System_Single__Parse
                                                                (pSVar16->m_Items[9],(MethodInfo *)0x0),
                                            (uint)pSVar16->max_length < 0xb)))) goto label_0597d07f;
                                        pSVar14 = pSVar16->m_Items[10];
                                      }
                                      fVar35 = System_Single__Parse(pSVar14,(MethodInfo *)0x0);
                                      rotation_03.fields.y = fVar32;
                                      rotation_03.fields.x = fVar31;
                                      rotation_03.fields.w = fVar35;
                                      rotation_03.fields.z = fVar34;
                                      Map_MapScriptBaseObject__SetRotation_58a1ff0
                                                ((Map_MapScriptBaseObject_o *)pMVar13,rotation_03,
                                                 (MethodInfo *)0x0);
                                      goto label_0597c21b;
                                    }
                                    if (uVar24 == 0) goto label_0597d07f;
                                    if (pSVar16->m_Items[0] == (System_String_o *)0x0) goto label_0597d0d1;
                                    bVar12 = System_String__StartsWith
                                                       (pSVar16->m_Items[0],"racing",
                                                        (MethodInfo *)0x0);
                                    pSVar14 = "";
                                    if (bVar12) {
                                      if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                      if (pSVar16->m_Items[1] == (System_String_o *)0x0) goto label_0597d0d1;
                                      bVar12 = System_String__StartsWith
                                                         (pSVar16->m_Items[1],"start",
                                                          (MethodInfo *)0x0);
                                      if (bVar12) {
                                        if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                        if ("start" == (System_String_o *)0x0)
                                        goto label_0597d0d1;
                                        pSVar14 = pSVar16->m_Items[1];
                                        ppSVar19 = &"Racing Start Barrier ";
                                        pSVar18 = "start";
label_0597ca0d:
                                        if (pSVar14 == (System_String_o *)0x0) goto label_0597d0d1;
                                        pSVar14 = System_String__Substring
                                                            (pSVar14,(pSVar18->fields)._stringLength,
                                                             (MethodInfo *)0x0);
                                        pSVar14 = System_String__Concat_52f0320
                                                            (*ppSVar19,pSVar14,(MethodInfo *)0x0);
                                      }
                                      else {
                                        if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                        if (pSVar16->m_Items[1] == (System_String_o *)0x0) goto label_0597d0d1;
                                        bVar12 = System_String__StartsWith
                                                           (pSVar16->m_Items[1],"end",
                                                            (MethodInfo *)0x0);
                                        if (bVar12) {
                                          if ((*piVar29 & 0xfffffffe) != 0) {
                                            if ("end" != (System_String_o *)0x0) {
                                              pSVar14 = pSVar16->m_Items[1];
                                              ppSVar19 = &"Racing Finish Region ";
                                              pSVar18 = "end";
                                              goto label_0597ca0d;
                                            }
                                            goto label_0597d0d1;
                                          }
                                          goto label_0597d07f;
                                        }
                                        if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                        if (pSVar16->m_Items[1] == (System_String_o *)0x0) goto label_0597d0d1;
                                        bVar12 = System_String__StartsWith
                                                           (pSVar16->m_Items[1],"kill",
                                                            (MethodInfo *)0x0);
                                        if (bVar12) {
                                          if ((*piVar29 & 0xfffffffe) != 0) {
                                            if ("kill" != (System_String_o *)0x0) {
                                              pSVar14 = pSVar16->m_Items[1];
                                              ppSVar19 = &"Kill Region ";
                                              pSVar18 = "kill";
                                              goto label_0597ca0d;
                                            }
                                            goto label_0597d0d1;
                                          }
                                          goto label_0597d07f;
                                        }
                                        if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                        if (pSVar16->m_Items[1] == (System_String_o *)0x0) goto label_0597d0d1;
                                        bVar12 = System_String__StartsWith
                                                           (pSVar16->m_Items[1],"checkpoint",
                                                            (MethodInfo *)0x0);
                                        if (bVar12) {
                                          if ((*piVar29 & 0xfffffffe) != 0) {
                                            if ("checkpoint" != (System_String_o *)0x0) {
                                              pSVar14 = pSVar16->m_Items[1];
                                              ppSVar19 = &"Racing Checkpoint Region ";
                                              pSVar18 = "checkpoint";
                                              goto label_0597ca0d;
                                            }
                                            goto label_0597d0d1;
                                          }
                                          goto label_0597d07f;
                                        }
                                      }
                                      if (pSVar14 == (System_String_o *)0x0) goto label_0597d0d1;
                                      if ((pSVar14->fields)._stringLength < 1) goto label_0597cc69;
                                      if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0
                                         ) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                      }
                                      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                               TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabsLower;
                                      pSVar18 = System_String__ToLower(pSVar14,(MethodInfo *)0x0);
                                      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *
                                                    )0x0) goto label_0597d0d1;
                                      bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                                         (pSVar6,(Il2CppObject *)pSVar18,
                                                          (MethodInfo_4AAD6F0 *)
                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_ContainsKey
                                                       );
                                      if (!bVar12) goto label_0597cc69;
                                      if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0
                                         ) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                                      }
                                      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                               TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabsLower;
                                      pSVar14 = System_String__ToLower(pSVar14,(MethodInfo *)0x0);
                                      if ((pSVar6 != (System_Collections_Generic_Dictionary_object__object__o
                                                      *)0x0) &&
                                         (pMVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                              (pSVar6,(Il2CppObject *)pSVar14,
                                                               (MethodInfo_4AAD450 *)
                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Item
                                                       ), pMVar13 != (Map_MapScriptSceneObject_o *)0x0)) {
                                        (*(pMVar13->klass->vtable)._10_Copy.methodPtr)
                                                  (pMVar13,(Utility_BaseCSVObject_o *)pMVar17,
                                                   (pMVar13->klass->vtable)._10_Copy.method);
                                        if ((5 < (uint)*piVar29) &&
                                           ((position_05.fields.x =
                                                  System_Single__Parse(pSVar16->m_Items[5],(MethodInfo *)0x0),
                                            6 < (uint)pSVar16->max_length &&
                                            (fVar31 = System_Single__Parse
                                                                (pSVar16->m_Items[6],(MethodInfo *)0x0),
                                            (pSVar16->max_length & 0xfffffff8) != 0)))) {
                                          fVar32 = System_Single__Parse(pSVar16->m_Items[7],(MethodInfo *)0x0)
                                          ;
                                          position_05.fields.y = fVar31;
                                          position_05.fields.z = fVar32;
                                          Map_MapScriptBaseObject__SetPosition
                                                    ((Map_MapScriptBaseObject_o *)pMVar13,position_05,
                                                     (MethodInfo *)0x0);
                                          if ((8 < (uint)pSVar16->max_length) &&
                                             (((rotation_04.fields.x =
                                                     System_Single__Parse
                                                               (pSVar16->m_Items[8],(MethodInfo *)0x0),
                                               9 < (uint)pSVar16->max_length &&
                                               (fVar31 = System_Single__Parse
                                                                   (pSVar16->m_Items[9],(MethodInfo *)0x0),
                                               10 < (uint)pSVar16->max_length)) &&
                                              (fVar32 = System_Single__Parse
                                                                  (pSVar16->m_Items[10],(MethodInfo *)0x0),
                                              0xb < (uint)pSVar16->max_length)))) {
                                            fVar34 = System_Single__Parse
                                                               (pSVar16->m_Items[0xb],(MethodInfo *)0x0);
                                            rotation_04.fields.y = fVar31;
                                            rotation_04.fields.w = fVar34;
                                            rotation_04.fields.z = fVar32;
                                            Map_MapScriptBaseObject__SetRotation_58a1ff0
                                                      ((Map_MapScriptBaseObject_o *)pMVar13,rotation_04,
                                                       (MethodInfo *)0x0);
                                            if (((2 < (uint)pSVar16->max_length) &&
                                                (fVar31 = System_Single__Parse
                                                                    (pSVar16->m_Items[2],(MethodInfo *)0x0),
                                                (pSVar16->max_length & 0xfffffffc) != 0)) &&
                                               (fVar32 = System_Single__Parse
                                                                   (pSVar16->m_Items[3],(MethodInfo *)0x0),
                                               4 < (uint)pSVar16->max_length)) {
                                              pSVar14 = pSVar16->m_Items[4];
label_0597cc51:
                                              fVar34 = System_Single__Parse(pSVar14,(MethodInfo *)0x0);
                                              goto label_0597b484;
                                            }
                                          }
                                        }
                                        goto label_0597d07f;
                                      }
                                      goto label_0597d0d1;
                                    }
                                    if ((int)*piVar29 == 0) goto label_0597d07f;
                                    if (pSVar16->m_Items[0] == (System_String_o *)0x0) goto label_0597d0d1;
                                    bVar12 = System_String__StartsWith
                                                       (pSVar16->m_Items[0],"map",
                                                        (MethodInfo *)0x0);
                                    if (!bVar12) {
label_0597cc69:
                                      if (pMVar13 != (Map_MapScriptSceneObject_o *)0x0) goto label_0597c21b;
                                      goto label_0597d0d1;
                                    }
                                    if ((*piVar29 & 0xfffffffe) == 0) goto label_0597d07f;
                                    pMVar15 = (MethodInfo *)pSVar16->m_Items[1];
                                    if (pMVar15 == (MethodInfo *)0x0) goto label_0597d0d1;
                                    bVar12 = System_String__StartsWith
                                                       ((System_String_o *)pMVar15,"disablebounds",
                                                        (MethodInfo *)0x0);
                                    uVar24 = CONCAT71((int7)(uVar24 >> 8),1);
                                    if (!bVar12) goto label_0597cc69;
                                  }
                                }
                                uVar30 = uVar30 + 1;
                                uVar25 = (uint)local_48->max_length;
                                uVar26 = uVar24 & 0xffffffff;
                              } while ((int)uVar30 < (int)uVar25);
                            }
                            pMVar27 = local_50;
                            if ((uVar24 & 1) != 0) {
                              return local_50;
                            }
                            pMVar3 = (local_50->fields).Objects;
                            if (pMVar3 != (Map_MapScriptObjects_o *)0x0) {
                              pSVar5 = (pMVar3->fields).Objects;
                              collection = Map_MapConverter__CreateFengBounds(pMVar15);
                              if (pSVar5 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
                                System_Collections_Generic_List_object___AddRange
                                          ((System_Collections_Generic_List_object__o *)pSVar5,
                                           (System_Collections_Generic_IEnumerable_T__o *)collection,
                                           (MethodInfo_395D490 *)
                                           MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_AddRange
                                          );
                                return pMVar27;
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
label_0597d0d1:
  ThrowNullReferenceException();
}


// Map.MapConverter$$GetNextId
// il2cpp: int32_t Map_MapConverter__GetNextId (const MethodInfo* method);
// 0x5979d10

int32_t Map_MapConverter__GetNextId(MethodInfo *method)

{
  int iVar1;
  
  if (Il2CppMethodInitialized_075459e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapConverter);
    Il2CppMethodInitialized_075459e3 = '\x01';
  }
  iVar1 = TypeInfo_Map_MapConverter->static_fields->_currentId + 1;
  TypeInfo_Map_MapConverter->static_fields->_currentId = iVar1;
  return iVar1;
}


// Map.MapConverter$$.ctor
// il2cpp: void Map_MapConverter___ctor (Map_MapConverter_o* __this, const MethodInfo* method);
// 0x597d0e0

void Map_MapConverter___ctor(Map_MapConverter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


