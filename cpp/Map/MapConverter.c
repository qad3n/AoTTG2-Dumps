// Type: Map.MapConverter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapConverter.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapConverter.cs  [CHANGED since prior version]
// --------------------------------

// Map.MapConverter$$IsLegacy
// il2cpp: bool Map_MapConverter__IsLegacy (System_String_o* map, const MethodInfo* method);
// 0x3d9b9f0

bool_conflict Map_MapConverter__IsLegacy(System_String_o *map,MethodInfo *method)

{
  System_String_o *__this;
  bool_conflict bVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_o *a;
  long lVar4;
  
  if (DAT_0570275a == '\0') {
    il2cpp_init_method_metadata(&"///");
    DAT_0570275a = '\x01';
  }
  if ((map != (System_String_o *)0x0) &&
     (pSVar3 = System_String__Split(map,0x3b,0,(MethodInfo *)0x0),
     pSVar3 != (System_String_array *)0x0)) {
    lVar4 = 0;
    while( true ) {
      uVar2 = (uint)pSVar3->max_length;
      if ((int)uVar2 <= (int)(uint)lVar4) {
        return 0;
      }
      if (uVar2 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this = pSVar3->m_Items[lVar4];
      if (__this == (System_String_o *)0x0) break;
      a = System_String__Trim(__this,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality
                        (a,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                         (MethodInfo *)0x0);
      lVar4 = lVar4 + 1;
      if ((char)bVar1 == '\0') {
        uVar2 = System_String__StartsWith(__this,"///",(MethodInfo *)0x0);
        return uVar2 ^ 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapConverter$$CreateForestFloor
// il2cpp: Map_MapScriptSceneObject_o* Map_MapConverter__CreateForestFloor (const MethodInfo* method);
// 0x3d9bad0

Map_MapScriptSceneObject_o * Map_MapConverter__CreateForestFloor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptSceneObject_o *__this_00;
  Map_MapScriptBasicMaterial_o *__this_01;
  Il2CppObject *pIVar1;
  Utility_Color255_o *__this_02;
  int iVar2;
  MethodInfo *in_RSI;
  MethodInfo *method_00;
  UnityEngine_Color_o color;
  
  if (DAT_0570275b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapTextures);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&"Grass1");
    il2cpp_init_method_metadata(&"Geometry/Cuboid");
    il2cpp_init_method_metadata(&"Basic");
    DAT_0570275b = '\x01';
  }
  __this_00 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,in_RSI);
  method_00 = "Geometry/Cuboid";
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    (__this_00->fields).Asset = (System_String_o *)"Geometry/Cuboid";
    il2cpp_runtime_glue(&(__this_00->fields).Asset);
    (__this_00->fields).RotationY = 134.286;
    (__this_00->fields).RotationZ = 6.407;
    (__this_00->fields).ScaleX = 134.286;
    (__this_00->fields).Name = (System_String_o *)0xc2001eb8c0f851ec;
    (__this_00->fields).PositionX = 5.333;
    if (DAT_05702760 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_MapConverter);
      DAT_05702760 = '\x01';
    }
    iVar2 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
    **(int **)(TypeInfo_MapConverter + 0xb8) = iVar2;
    (__this_00->fields).Id = iVar2;
    __this_01 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBasicMaterial);
    Map_MapScriptBasicMaterial___ctor(__this_01,method_00);
    if (__this_01 != (Map_MapScriptBasicMaterial_o *)0x0) {
      (__this_01->fields).Shader = "Basic";
      il2cpp_runtime_glue(&__this_01->fields);
      if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
      if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIVar1 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           (__this,"Grass1",MethodInfo_MapScriptBasicMaterial_get_Item);
        if (pIVar1 != (Il2CppObject *)0x0) {
          (__this_01->fields).Texture = (System_String_o *)pIVar1[2].klass;
          il2cpp_runtime_glue(&(__this_01->fields).Texture);
          (__this_01->fields).Tiling.fields = (UnityEngine_Vector2_Fields)0x4248000042480000;
          __this_02 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
          color.fields.b = 0.654;
          color.fields.a = 1.0;
          color.fields.r = 0.678;
          color.fields.g = 0.684;
          Utility_Color255___ctor(__this_02,color,(MethodInfo *)0x0);
          (__this_01->fields).Color = __this_02;
          il2cpp_runtime_glue(&(__this_01->fields).Color,__this_02);
          (__this_00->fields).PhysicsMaterial = (System_String_o *)__this_01;
          il2cpp_runtime_glue(&(__this_00->fields).PhysicsMaterial,__this_01);
          return __this_00;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapConverter$$CreateLight
// il2cpp: Map_MapScriptSceneObject_o* Map_MapConverter__CreateLight (const MethodInfo* method);
// 0x3d9bd70

Map_MapScriptSceneObject_o * Map_MapConverter__CreateLight(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptSceneObject_o *__this_00;
  Il2CppObject *pIVar1;
  int iVar2;
  MethodInfo *in_RSI;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_0570275c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&"Daylight");
    DAT_0570275c = '\x01';
  }
  __this_00 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,in_RSI);
  if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar1 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (__this,"Daylight",MethodInfo_MapScriptBaseObject_get_Item);
    if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(__this_00->klass->vtable)._10_Copy.methodPtr)
                (__this_00,pIVar1,(__this_00->klass->vtable)._10_Copy.method);
      UVar3.fields.z = 0.02443461;
      UVar3.fields.x = 0.8779006;
      UVar3.fields.y = 2.1275563;
      rotation = UnityEngine_Quaternion__Internal_FromEulerRad(UVar3,(MethodInfo *)0x0);
      UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler.fields.x = UVar3.fields.x * 57.29578;
      euler.fields.y = UVar3.fields.y * 57.29578;
      euler.fields.z = UVar3.fields.z * 57.29578;
      UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      (__this_00->fields).PositionY = UVar3.fields.x;
      (__this_00->fields).PositionZ = UVar3.fields.y;
      (__this_00->fields).RotationX = UVar3.fields.z;
      if (DAT_05702760 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_MapConverter);
        DAT_05702760 = '\x01';
      }
      iVar2 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
      **(int **)(TypeInfo_MapConverter + 0xb8) = iVar2;
      (__this_00->fields).Id = iVar2;
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapConverter$$CreateFengBounds
// il2cpp: System_Collections_Generic_List_MapScriptBaseObject__o* Map_MapConverter__CreateFengBounds (const MethodInfo* method);
// 0x3d9bf10

System_Collections_Generic_List_MapScriptBaseObject__o *
Map_MapConverter__CreateFengBounds(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapScriptBaseObject_array *pMVar3;
  long lVar4;
  MethodInfo *__this;
  Map_MapScriptSceneObject_o *pMVar5;
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
  
  if (DAT_0570275d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapScriptBaseObject);
    il2cpp_init_method_metadata(&TypeInfo_List_MapScriptBaseObject);
    DAT_0570275d = '\x01';
  }
  __this = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_List_MapScriptBaseObject);
  pMVar6 = __this;
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_Map_MapScriptBaseObject);
  center.fields.z = 0.01;
  center.fields.x = -700.0;
  center.fields.y = 745.8;
  size.fields.z = 160.0;
  size.fields.x = 10.0;
  size.fields.y = 160.0;
  pMVar5 = Map_MapConverter__CreateBound(center,size,(UnityEngine_Vector3_o)ZEXT412(0),pMVar6);
  lVar4 = MethodInfo_Void_Add;
  if (__this != (MethodInfo *)0x0) {
    piVar1 = (int32_t *)((long)&__this->name + 4);
    *piVar1 = *piVar1 + 1;
    pMVar3 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)&__this->invoker_method
             )->_items;
    if (pMVar3 != (Map_MapScriptBaseObject_array *)0x0) {
      uVar2 = *(uint *)&__this->name;
      if (uVar2 < (uint)pMVar3->max_length) {
        *(uint *)&__this->name = uVar2 + 1;
        pMVar6 = (MethodInfo *)(pMVar3->m_Items + (int)uVar2);
        pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar5;
        il2cpp_runtime_glue(pMVar6,pMVar5);
      }
      else {
        pMVar6 = __this;
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar5,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      center_00.fields.z = -700.0;
      center_00.fields.x = 0.0;
      center_00.fields.y = 745.8;
      size_00.fields.z = 10.0;
      size_00.fields.x = 160.0;
      size_00.fields.y = 160.0;
      pMVar5 = Map_MapConverter__CreateBound
                         (center_00,size_00,(UnityEngine_Vector3_o)ZEXT412(0),pMVar6);
      lVar4 = MethodInfo_Void_Add;
      piVar1 = (int32_t *)((long)&__this->name + 4);
      *piVar1 = *piVar1 + 1;
      pMVar3 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)
               &__this->invoker_method)->_items;
      if (pMVar3 != (Map_MapScriptBaseObject_array *)0x0) {
        uVar2 = *(uint *)&__this->name;
        if (uVar2 < (uint)pMVar3->max_length) {
          *(uint *)&__this->name = uVar2 + 1;
          pMVar6 = (MethodInfo *)(pMVar3->m_Items + (int)uVar2);
          pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar5;
          il2cpp_runtime_glue(pMVar6,pMVar5);
        }
        else {
          pMVar6 = __this;
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar5,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        center_01.fields.z = 700.0;
        center_01.fields.x = 0.0;
        center_01.fields.y = 745.8;
        size_01.fields.z = 10.0;
        size_01.fields.x = 160.0;
        size_01.fields.y = 160.0;
        pMVar5 = Map_MapConverter__CreateBound
                           (center_01,size_01,(UnityEngine_Vector3_o)ZEXT412(0),pMVar6);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = (int32_t *)((long)&__this->name + 4);
        *piVar1 = *piVar1 + 1;
        pMVar3 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)
                 &__this->invoker_method)->_items;
        if (pMVar3 != (Map_MapScriptBaseObject_array *)0x0) {
          uVar2 = *(uint *)&__this->name;
          if (uVar2 < (uint)pMVar3->max_length) {
            *(uint *)&__this->name = uVar2 + 1;
            pMVar6 = (MethodInfo *)(pMVar3->m_Items + (int)uVar2);
            pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar5;
            il2cpp_runtime_glue(pMVar6,pMVar5);
          }
          else {
            pMVar6 = __this;
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar5,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          center_02.fields.z = 0.01;
          center_02.fields.x = 700.0;
          center_02.fields.y = 745.8;
          size_02.fields.z = 160.0;
          size_02.fields.x = 10.0;
          size_02.fields.y = 160.0;
          pMVar5 = Map_MapConverter__CreateBound
                             (center_02,size_02,(UnityEngine_Vector3_o)ZEXT412(0),pMVar6);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = (int32_t *)((long)&__this->name + 4);
          *piVar1 = *piVar1 + 1;
          pMVar3 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)
                   &__this->invoker_method)->_items;
          if (pMVar3 != (Map_MapScriptBaseObject_array *)0x0) {
            uVar2 = *(uint *)&__this->name;
            if (uVar2 < (uint)pMVar3->max_length) {
              *(uint *)&__this->name = uVar2 + 1;
              pMVar6 = (MethodInfo *)(pMVar3->m_Items + (int)uVar2);
              pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar5;
              il2cpp_runtime_glue(pMVar6,pMVar5);
            }
            else {
              pMVar6 = __this;
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar5,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
            center_03.fields.z = 17.889;
            center_03.fields.x = -2.23;
            center_03.fields.y = 1253.07;
            size_03.fields.z = 160.0;
            size_03.fields.x = 160.0;
            size_03.fields.y = 10.0;
            pMVar5 = Map_MapConverter__CreateBound
                               (center_03,size_03,(UnityEngine_Vector3_o)ZEXT412(0),pMVar6);
            lVar4 = MethodInfo_Void_Add;
            piVar1 = (int32_t *)((long)&__this->name + 4);
            *piVar1 = *piVar1 + 1;
            pMVar3 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)
                     &__this->invoker_method)->_items;
            if (pMVar3 != (Map_MapScriptBaseObject_array *)0x0) {
              uVar2 = *(uint *)&__this->name;
              if (uVar2 < (uint)pMVar3->max_length) {
                *(uint *)&__this->name = uVar2 + 1;
                pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)pMVar5;
                il2cpp_runtime_glue(pMVar3->m_Items + (int)uVar2,pMVar5);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,
                           (Il2CppObject *)pMVar5,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              return (System_Collections_Generic_List_MapScriptBaseObject__o *)__this;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapConverter$$CreateBound
// il2cpp: Map_MapScriptSceneObject_o* Map_MapConverter__CreateBound (UnityEngine_Vector3_o center, UnityEngine_Vector3_o size, UnityEngine_Vector3_o rotation, const MethodInfo* method);
// 0x3d9c200

Map_MapScriptSceneObject_o *
Map_MapConverter__CreateBound
          (UnityEngine_Vector3_o center,UnityEngine_Vector3_o size,UnityEngine_Vector3_o rotation,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptSceneObject_o *__this_00;
  Il2CppObject *pIVar1;
  int iVar2;
  MethodInfo *in_RSI;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if (DAT_0570275e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&"LegacyBarrier");
    DAT_0570275e = '\x01';
  }
  __this_00 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,in_RSI);
  if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar1 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (__this,"LegacyBarrier",MethodInfo_MapScriptBaseObject_get_Item);
    if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(__this_00->klass->vtable)._10_Copy.methodPtr)
                (__this_00,pIVar1,(__this_00->klass->vtable)._10_Copy.method);
      local_48 = center.fields.x;
      fStack_44 = center.fields.y;
      *(float *)&(__this_00->fields).Name = local_48;
      *(float *)((long)&(__this_00->fields).Name + 4) = fStack_44;
      (__this_00->fields).PositionX = center.fields.z;
      local_38 = size.fields.x;
      fStack_34 = size.fields.y;
      (__this_00->fields).RotationY = local_38;
      (__this_00->fields).RotationZ = fStack_34;
      (__this_00->fields).ScaleX = size.fields.z;
      local_28 = rotation.fields.x;
      fStack_24 = rotation.fields.y;
      (__this_00->fields).PositionY = local_28;
      (__this_00->fields).PositionZ = fStack_24;
      (__this_00->fields).RotationX = rotation.fields.z;
      if (DAT_05702760 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_MapConverter);
        DAT_05702760 = '\x01';
      }
      iVar2 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
      **(int **)(TypeInfo_MapConverter + 0xb8) = iVar2;
      (__this_00->fields).Id = iVar2;
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapConverter$$Convert
// il2cpp: Map_MapScript_o* Map_MapConverter__Convert (System_String_o* map, const MethodInfo* method);
// 0x3d9c3b0

/* WARNING: Type propagation algorithm not settling */

Map_MapScript_o * Map_MapConverter__Convert(System_String_o *map,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  System_Object_array *pSVar5;
  Map_MapScriptObjects_o *pMVar6;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar7;
  Map_MapScriptBaseObject_array *pMVar8;
  Il2CppClass **ppIVar9;
  Il2CppClass *pIVar10;
  long lVar11;
  bool_conflict bVar12;
  MethodInfo *pMVar13;
  Map_MapScriptSceneObject_o *pMVar14;
  System_String_o *pSVar15;
  MethodInfo *pMVar16;
  System_Char_array *separator;
  System_String_array *pSVar17;
  Il2CppObject *pIVar18;
  System_String_o *pSVar19;
  Utility_Color255_o *pUVar20;
  Il2CppObject **ppIVar21;
  undefined8 *puVar22;
  Map_MapScriptBasicMaterial_o *__this;
  Map_MapScriptBasicMaterial_c *method_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *collection;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  MethodInfo *method_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar26;
  uint uVar27;
  il2cpp_array_size_t *piVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar37;
  undefined4 uVar36;
  UnityEngine_Vector3_o UVar38;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  UnityEngine_Vector3_o euler_02;
  UnityEngine_Vector3_o euler_03;
  UnityEngine_Vector3_o euler_04;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Quaternion_o rotation_00;
  UnityEngine_Quaternion_o rotation_01;
  UnityEngine_Quaternion_o UVar39;
  UnityEngine_Quaternion_o rotation_02;
  UnityEngine_Color_o color_01;
  UnityEngine_Quaternion_o rotation_03;
  UnityEngine_Quaternion_o rotation_04;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  float local_b8;
  Map_MapScriptBasicMaterial_o *local_a8;
  float local_6c;
  ulong local_68;
  System_String_o *local_60;
  MethodInfo *local_58;
  System_String_array *local_50;
  undefined1 local_48 [24];
  
  if (DAT_0570275f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapTextures);
    il2cpp_init_method_metadata(&TypeInfo_char);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapConverter);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectShader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptReflectiveMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&TypeInfo_Regex);
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"racingEnd");
    il2cpp_init_method_metadata(&"Racing Finish Region Cuboid");
    il2cpp_init_method_metadata(&"regioneditormat");
    il2cpp_init_method_metadata(&"map");
    il2cpp_init_method_metadata(&"custom");
    il2cpp_init_method_metadata(&"bombexplosiontex");
    il2cpp_init_method_metadata(&"racingStart");
    il2cpp_init_method_metadata(&"Unhandled legacy object: ");
    il2cpp_init_method_metadata(&"//");
    il2cpp_init_method_metadata(&"Cannon2");
    il2cpp_init_method_metadata(&"bark");
    il2cpp_init_method_metadata(&"cannonwall");
    il2cpp_init_method_metadata(&"start");
    il2cpp_init_method_metadata(&"LegacyBarrier");
    il2cpp_init_method_metadata(&"barriereditormat");
    il2cpp_init_method_metadata(&"Racing Checkpoint Region ");
    il2cpp_init_method_metadata(&"Unhandled legacy texture: ");
    il2cpp_init_method_metadata(&"base");
    il2cpp_init_method_metadata(&"\r\n");
    il2cpp_init_method_metadata(&"aot_supply");
    il2cpp_init_method_metadata(&"disablebounds");
    il2cpp_init_method_metadata(&"cannonregionmat");
    il2cpp_init_method_metadata(&"Reflective");
    il2cpp_init_method_metadata(&"playerc");
    il2cpp_init_method_metadata(&"levelbottom");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Racing Start Barrier ");
    il2cpp_init_method_metadata(&"Human SpawnPoint");
    il2cpp_init_method_metadata(&"cannonground");
    il2cpp_init_method_metadata(&"Cannon3");
    il2cpp_init_method_metadata(&"grass");
    il2cpp_init_method_metadata(&"LevelBottom");
    il2cpp_init_method_metadata(&"misc");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"barrier");
    il2cpp_init_method_metadata(&"titan");
    il2cpp_init_method_metadata(&"ice1");
    il2cpp_init_method_metadata(&"transparent");
    il2cpp_init_method_metadata(&"Racing Start Barrier Cuboid");
    il2cpp_init_method_metadata(&"region");
    il2cpp_init_method_metadata(&"spawnpoint");
    il2cpp_init_method_metadata(&"racing");
    il2cpp_init_method_metadata(&"Geometry/Cuboid");
    il2cpp_init_method_metadata(&"Human SpawnPoint (red)");
    il2cpp_init_method_metadata(&"photon");
    il2cpp_init_method_metadata(&"Human SpawnPoint (blue)");
    il2cpp_init_method_metadata(&"barrierEditor");
    il2cpp_init_method_metadata(&"Basic");
    il2cpp_init_method_metadata(&"end");
    il2cpp_init_method_metadata(&"cannonballtrail");
    il2cpp_init_method_metadata(&"spawn");
    il2cpp_init_method_metadata(&"Supply1");
    il2cpp_init_method_metadata(&"Kill Region ");
    il2cpp_init_method_metadata(&"Unnamed");
    il2cpp_init_method_metadata(&"\\s+");
    il2cpp_init_method_metadata(&"playerm");
    il2cpp_init_method_metadata(&"kill");
    il2cpp_init_method_metadata(&"Titan SpawnPoint");
    il2cpp_init_method_metadata(&"Racing Finish Region ");
    il2cpp_init_method_metadata(&"bombtex");
    il2cpp_init_method_metadata(&"player");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"\r");
    il2cpp_init_method_metadata(&"checkpoint");
    il2cpp_init_method_metadata(&"1");
    il2cpp_init_method_metadata(&"empty");
    il2cpp_init_method_metadata(&"Transparent");
    il2cpp_init_method_metadata(&"0");
    DAT_0570275f = '\x01';
  }
  local_6c = 0.0;
  **(undefined4 **)(TypeInfo_MapConverter + 0xb8) = 0;
  pMVar13 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_MapScript);
  pMVar16 = pMVar13;
  Map_MapScript___ctor((Map_MapScript_o *)pMVar13,method);
  if ((pMVar13 == (MethodInfo *)0x0) ||
     ((Map_MapScriptObjects_o *)pMVar13->parameters == (Map_MapScriptObjects_o *)0x0)) {
LAB_03d9f12d:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  method_01 = (MethodInfo *)(((Map_MapScriptObjects_o *)pMVar13->parameters)->fields).Objects;
  pMVar14 = Map_MapConverter__CreateForestFloor(pMVar16);
  lVar11 = MethodInfo_Void_Add;
  if (method_01 == (MethodInfo *)0x0) goto LAB_03d9f12d;
  piVar1 = (int32_t *)((long)&method_01->name + 4);
  *piVar1 = *piVar1 + 1;
  pSVar5 = ((System_Collections_Generic_List_object__Fields *)&method_01->invoker_method)->_items;
  if (pSVar5 == (System_Object_array *)0x0) goto LAB_03d9f12d;
  uVar25 = *(uint *)&method_01->name;
  if (uVar25 < (uint)pSVar5->max_length) {
    *(uint *)&method_01->name = uVar25 + 1;
    method_01 = (MethodInfo *)(pSVar5->m_Items + (int)uVar25);
    pSVar5->m_Items[(int)uVar25] = (Il2CppObject *)pMVar14;
    il2cpp_runtime_glue(method_01,pMVar14);
    pMVar6 = (Map_MapScriptObjects_o *)pMVar13->parameters;
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)method_01,(Il2CppObject *)pMVar14,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    pMVar6 = (Map_MapScriptObjects_o *)pMVar13->parameters;
  }
  if (pMVar6 == (Map_MapScriptObjects_o *)0x0) goto LAB_03d9f12d;
  pSVar7 = (pMVar6->fields).Objects;
  pMVar14 = Map_MapConverter__CreateLight(method_01);
  lVar11 = MethodInfo_Void_Add;
  if (pSVar7 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) goto LAB_03d9f12d;
  piVar1 = &(pSVar7->fields)._version;
  *piVar1 = *piVar1 + 1;
  pMVar8 = (pSVar7->fields)._items;
  if (pMVar8 == (Map_MapScriptBaseObject_array *)0x0) goto LAB_03d9f12d;
  uVar25 = (pSVar7->fields)._size;
  if (uVar25 < (uint)pMVar8->max_length) {
    (pSVar7->fields)._size = uVar25 + 1;
    pMVar8->m_Items[(int)uVar25] = (Map_MapScriptBaseObject_o *)pMVar14;
    il2cpp_runtime_glue(pMVar8->m_Items + (int)uVar25,pMVar14);
    iVar23 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pMVar14,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    iVar23 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  if (iVar23 == 0) {
    il2cpp_init_class();
  }
  pSVar15 = System_Text_RegularExpressions_Regex__Replace
                      (map,"\\s+",(System_String_o *)"",(MethodInfo *)0x0);
  if (((pSVar15 == (System_String_o *)0x0) ||
      (pSVar15 = System_String__Replace
                           (pSVar15,"\r\n",(System_String_o *)"",(MethodInfo *)0x0),
      pSVar15 == (System_String_o *)0x0)) ||
     (pSVar15 = System_String__Replace
                          (pSVar15,"\n",(System_String_o *)"",(MethodInfo *)0x0),
     pSVar15 == (System_String_o *)0x0)) goto LAB_03d9f12d;
  pMVar16 = (MethodInfo *)
            System_String__Replace
                      (pSVar15,"\r",(System_String_o *)"",(MethodInfo *)0x0);
  separator = (System_Char_array *)il2cpp_glue_02274930(TypeInfo_char,1);
  if (separator == (System_Char_array *)0x0) goto LAB_03d9f12d;
  if ((int)separator->max_length == 0) {
LAB_03d9f0db:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  separator->m_Items[0] = 0x3b;
  if ((pMVar16 == (MethodInfo *)0x0) ||
     (pSVar17 = System_String__Split((System_String_o *)pMVar16,separator,(MethodInfo *)0x0),
     pSVar17 == (System_String_array *)0x0)) goto LAB_03d9f12d;
  uVar25 = (uint)pSVar17->max_length;
  uVar27 = 0;
  local_58 = pMVar13;
  if ((int)uVar25 < 1) {
    uVar24 = 0;
LAB_03d9f0e2:
    pMVar13 = local_58;
    if ((uVar24 & 1) != 0) {
      return (Map_MapScript_o *)local_58;
    }
    if ((Map_MapScriptObjects_o *)local_58->parameters != (Map_MapScriptObjects_o *)0x0) {
      pSVar7 = (((Map_MapScriptObjects_o *)local_58->parameters)->fields).Objects;
      collection = Map_MapConverter__CreateFengBounds(pMVar16);
      if (pSVar7 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar7,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
        return (Map_MapScript_o *)pMVar13;
      }
    }
    goto LAB_03d9f12d;
  }
  uVar29 = 0;
  local_50 = pSVar17;
LAB_03d9ca60:
  if (uVar25 <= uVar27) goto LAB_03d9f0db;
  pSVar15 = local_50->m_Items[(int)uVar27];
  if (((pSVar15 == (System_String_o *)0x0) ||
      (pMVar16 = (MethodInfo *)System_String__Trim(pSVar15,(MethodInfo *)0x0),
      pMVar16 == (MethodInfo *)0x0)) ||
     (pSVar17 = System_String__Split((System_String_o *)pMVar16,0x2c,0,(MethodInfo *)0x0),
     pSVar17 == (System_String_array *)0x0)) goto LAB_03d9f12d;
  if (pSVar17->max_length == 0) {
LAB_03d9df40:
    uVar24 = uVar29 & 0xffffffff;
LAB_03d9df43:
    uVar27 = uVar27 + 1;
    uVar25 = (uint)local_50->max_length;
    uVar29 = uVar24 & 0xffffffff;
    if ((int)uVar25 <= (int)uVar27) goto LAB_03d9f0e2;
    goto LAB_03d9ca60;
  }
  if ((int)pSVar17->max_length == 0) goto LAB_03d9f0db;
  pMVar16 = (MethodInfo *)pSVar17->m_Items[0];
  if (pMVar16 == (MethodInfo *)0x0) goto LAB_03d9f12d;
  bVar12 = System_String__StartsWith((System_String_o *)pMVar16,"//",(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') goto LAB_03d9df40;
  pMVar16 = (MethodInfo *)System_String__Trim(pSVar15,(MethodInfo *)0x0);
  pMVar13 = "";
  bVar12 = System_String__op_Equality
                     ((System_String_o *)pMVar16,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') goto LAB_03d9df40;
  piVar28 = &pSVar17->max_length;
  local_60 = pSVar15;
  pMVar14 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(pMVar14,pMVar13);
  if ((int)*piVar28 == 0) goto LAB_03d9f0db;
  if (pSVar17->m_Items[0] == (System_String_o *)0x0) goto LAB_03d9f12d;
  bVar12 = System_String__StartsWith(pSVar17->m_Items[0],"custom",(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
    if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto LAB_03d9f12d;
    pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x18);
    pSVar15 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
    if (pSVar26 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_03d9f12d;
    bVar12 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                       (pSVar26,(Il2CppObject *)pSVar15,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar12 != '\0') {
      if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
      if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto LAB_03d9f12d;
      pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x18);
      pSVar15 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
      if ((pSVar26 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (pIVar18 = System_Collections_Generic_Dictionary<object__object>__get_Item
                              (pSVar26,(Il2CppObject *)pSVar15,MethodInfo_MapScriptBaseObject_get_Item),
         pMVar14 == (Map_MapScriptSceneObject_o *)0x0)) goto LAB_03d9f12d;
      (*(pMVar14->klass->vtable)._10_Copy.methodPtr)
                (pMVar14,pIVar18,(pMVar14->klass->vtable)._10_Copy.method);
    }
    if ((((uint)*piVar28 < 0xd) ||
        (fVar30 = System_Single__Parse(pSVar17->m_Items[0xc],(MethodInfo *)0x0),
        (uint)pSVar17->max_length < 0xe)) ||
       (fVar31 = System_Single__Parse(pSVar17->m_Items[0xd],(MethodInfo *)0x0),
       (uint)pSVar17->max_length < 0xf)) goto LAB_03d9f0db;
    fVar32 = System_Single__Parse(pSVar17->m_Items[0xe],(MethodInfo *)0x0);
    if (pMVar14 == (Map_MapScriptSceneObject_o *)0x0) goto LAB_03d9f12d;
    *(float *)&(pMVar14->fields).Name = fVar30;
    *(float *)((long)&(pMVar14->fields).Name + 4) = fVar31;
    (pMVar14->fields).PositionX = fVar32;
    if ((((uint)*piVar28 < 0x10) ||
        (UVar39.fields.x = System_Single__Parse(pSVar17->m_Items[0xf],(MethodInfo *)0x0),
        (uint)pSVar17->max_length < 0x11)) ||
       ((fVar30 = System_Single__Parse(pSVar17->m_Items[0x10],(MethodInfo *)0x0),
        (uint)pSVar17->max_length < 0x12 ||
        (fVar31 = System_Single__Parse(pSVar17->m_Items[0x11],(MethodInfo *)0x0),
        (uint)pSVar17->max_length < 0x13)))) goto LAB_03d9f0db;
    fVar32 = System_Single__Parse(pSVar17->m_Items[0x12],(MethodInfo *)0x0);
    UVar39.fields.y = fVar30;
    UVar39.fields.w = fVar32;
    UVar39.fields.z = fVar31;
    UVar38 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar39,(MethodInfo *)0x0);
    euler.fields.x = UVar38.fields.x * 57.29578;
    euler.fields.y = UVar38.fields.y * 57.29578;
    euler.fields.z = UVar38.fields.z * 57.29578;
    UVar38 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    (pMVar14->fields).PositionY = UVar38.fields.x;
    (pMVar14->fields).PositionZ = UVar38.fields.y;
    (pMVar14->fields).RotationX = UVar38.fields.z;
    if ((((uint)pSVar17->max_length < 4) ||
        (fVar30 = System_Single__Parse(pSVar17->m_Items[3],(MethodInfo *)0x0),
        (uint)pSVar17->max_length < 5)) ||
       (fVar31 = System_Single__Parse(pSVar17->m_Items[4],(MethodInfo *)0x0),
       (uint)pSVar17->max_length < 6)) goto LAB_03d9f0db;
    fVar32 = System_Single__Parse(pSVar17->m_Items[5],(MethodInfo *)0x0);
    (pMVar14->fields).RotationY = fVar30;
    (pMVar14->fields).RotationZ = fVar31;
    (pMVar14->fields).ScaleX = fVar32;
    if ((uint)pSVar17->max_length < 3) goto LAB_03d9f0db;
    if (pSVar17->m_Items[2] == (System_String_o *)0x0) goto LAB_03d9f12d;
    pSVar15 = System_String__ToLower(pSVar17->m_Items[2],(MethodInfo *)0x0);
    local_a8 = (Map_MapScriptBasicMaterial_o *)(pMVar14->fields).PhysicsMaterial;
    if ((local_a8 == (Map_MapScriptBasicMaterial_o *)0x0) ||
       (pUVar20 = (local_a8->fields).Color, pUVar20 == (Utility_Color255_o *)0x0))
    goto LAB_03d9f12d;
    fVar30 = (float)(pUVar20->fields).A / 255.0;
    bVar12 = System_String__op_Inequality(pSVar15,"default",(MethodInfo *)0x0);
    local_68 = uVar29;
    if ((char)bVar12 == '\0') {
LAB_03d9d2df:
      uVar25 = (uint)*piVar28;
    }
    else {
      if (pSVar15 == (System_String_o *)0x0) goto LAB_03d9f12d;
      pMVar16 = "transparent";
      bVar12 = System_String__StartsWith(pSVar15,(System_String_o *)"transparent",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        pMVar16 = "empty";
        bVar12 = System_String__op_Equality
                           (pSVar15,(System_String_o *)"empty",(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          local_a8 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBasicMaterial);
          Map_MapScriptBasicMaterial___ctor(local_a8,pMVar16);
          if (local_a8 != (Map_MapScriptBasicMaterial_o *)0x0) {
            (local_a8->fields).Shader = "Basic";
            il2cpp_runtime_glue(&local_a8->fields);
            goto LAB_03d9d2df;
          }
          goto LAB_03d9f12d;
        }
        bVar12 = System_String__op_Equality(pSVar15,"ice1",(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          local_a8 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptReflectiveMaterial);
          if (DAT_057027ba == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Color255);
            DAT_057027ba = '\x01';
          }
          method_00 = (Map_MapScriptBasicMaterial_c *)il2cpp_runtime_glue(TypeInfo_Color255);
          Utility_Color255___ctor((Utility_Color255_o *)method_00,(MethodInfo *)0x0);
          local_a8[1].klass = method_00;
          il2cpp_runtime_glue(local_a8 + 1);
          Map_MapScriptBasicMaterial___ctor(local_a8,(MethodInfo *)method_00);
          if (local_a8 != (Map_MapScriptBasicMaterial_o *)0x0) {
            (local_a8->fields).Shader = "Reflective";
            il2cpp_runtime_glue(&local_a8->fields);
            pUVar20 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
            Utility_Color255___ctor(pUVar20,0xb2,0xe3,0xff,0xff,(MethodInfo *)0x0);
            (local_a8->fields).Color = pUVar20;
            il2cpp_runtime_glue(&(local_a8->fields).Color,pUVar20);
            if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
            if ((pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
               (pIVar18 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                    (pSVar26,(Il2CppObject *)pSVar15,MethodInfo_MapScriptBasicMaterial_get_Item),
               pIVar10 = TypeInfo_MapScriptBasicMaterial, pIVar18 != (Il2CppObject *)0x0)) {
              bVar4 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
              if (((local_a8->klass->_2).naturalAligment < bVar4) ||
                 ((ppIVar9 = (local_a8->klass->_2).typeHierarchy,
                  ppIVar9[(ulong)bVar4 - 1] != TypeInfo_MapScriptBasicMaterial ||
                  ((local_a8->fields).Texture = (System_String_o *)pIVar18[2].klass,
                  ppIVar9[(ulong)bVar4 - 1] != pIVar10)))) goto LAB_03d9f132;
              il2cpp_runtime_glue(&(local_a8->fields).Texture);
              if ((10 < (uint)*piVar28) &&
                 (fVar31 = System_Single__Parse(pSVar17->m_Items[10],(MethodInfo *)0x0),
                 0xb < (uint)pSVar17->max_length)) {
                fVar32 = System_Single__Parse(pSVar17->m_Items[0xb],(MethodInfo *)0x0);
                bVar4 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
                if (((local_a8->klass->_2).naturalAligment < bVar4) ||
                   ((local_a8->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_MapScriptBasicMaterial))
                goto LAB_03d9f132;
LAB_03d9da1e:
                (local_a8->fields).Tiling.fields.x = fVar31;
                (local_a8->fields).Tiling.fields.y = fVar32;
                uVar25 = (uint)*piVar28;
                goto joined_r0x03d9f0d5;
              }
              goto LAB_03d9f0db;
            }
          }
          goto LAB_03d9f12d;
        }
        pMVar16 = "barriereditormat";
        bVar12 = System_String__op_Equality
                           (pSVar15,(System_String_o *)"barriereditormat",(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
          pMVar16 = "regioneditormat";
          bVar12 = System_String__op_Equality
                             (pSVar15,(System_String_o *)"regioneditormat",(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            local_a8 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBasicMaterial);
            Map_MapScriptBasicMaterial___ctor(local_a8,pMVar16);
            if (local_a8 != (Map_MapScriptBasicMaterial_o *)0x0) {
              (local_a8->fields).Shader = "Transparent";
              il2cpp_runtime_glue(&local_a8->fields);
              pUVar20 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
              uVar33 = 0x3f800000;
              uVar34 = 0;
              uVar36 = 0;
              goto LAB_03d9e41e;
            }
            goto LAB_03d9f12d;
          }
          pMVar16 = "bombexplosiontex";
          bVar12 = System_String__op_Equality
                             (pSVar15,(System_String_o *)"bombexplosiontex",(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            local_a8 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptLegacyMaterial);
            if (DAT_0570136e == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector2);
              DAT_0570136e = '\x01';
            }
            (local_a8->fields).Texture = *(System_String_o **)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
            Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)local_a8,pMVar16);
            if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x30);
            goto LAB_03d9e9d3;
          }
          pMVar16 = "cannonregionmat";
          bVar12 = System_String__op_Equality
                             (pSVar15,(System_String_o *)"cannonregionmat",(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            pMVar16 = "bombtex";
            bVar12 = System_String__op_Equality
                               (pSVar15,(System_String_o *)"bombtex",(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
              pMVar16 = "cannonballtrail";
              bVar12 = System_String__op_Equality
                                 (pSVar15,(System_String_o *)"cannonballtrail",(MethodInfo *)0x0);
              if ((char)bVar12 == '\0') {
                local_a8 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBasicMaterial);
                Map_MapScriptBasicMaterial___ctor(local_a8,pMVar16);
                if (local_a8 != (Map_MapScriptBasicMaterial_o *)0x0) {
                  (local_a8->fields).Shader = "Basic";
                  il2cpp_runtime_glue(&local_a8->fields);
                  bVar12 = System_String__op_Equality(pSVar15,"bark",(MethodInfo *)0x0);
                  if (((char)bVar12 == '\0') &&
                     (bVar12 = System_String__op_Equality(pSVar15,"grass",(MethodInfo *)0x0),
                     (char)bVar12 == '\0')) {
                    if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) != 0) goto LAB_03d9ef42;
LAB_03d9ef03:
                    il2cpp_init_class();
                    pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                  }
                  else {
                    pSVar15 = System_String__Concat(pSVar15,"1",(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) goto LAB_03d9ef03;
LAB_03d9ef42:
                    pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                  }
                  if (pSVar26 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto LAB_03d9f12d;
                  bVar12 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                     (pSVar26,(Il2CppObject *)pSVar15,MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar12 == '\0') {
                    pSVar19 = System_String__Concat("Unhandled legacy texture: ",local_60,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    UnityEngine_Debug__Log((Il2CppObject *)pSVar19,(MethodInfo *)0x0);
                    uVar25 = (uint)*piVar28;
                    goto joined_r0x03d9f0d5;
                  }
                  if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                             (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                  if ((pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                     (pIVar18 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                          (pSVar26,(Il2CppObject *)pSVar15,MethodInfo_MapScriptBasicMaterial_get_Item),
                     pIVar10 = TypeInfo_MapScriptBasicMaterial, pIVar18 != (Il2CppObject *)0x0)) {
                    bVar4 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
                    if (((local_a8->klass->_2).naturalAligment < bVar4) ||
                       ((ppIVar9 = (local_a8->klass->_2).typeHierarchy,
                        ppIVar9[(ulong)bVar4 - 1] != TypeInfo_MapScriptBasicMaterial ||
                        ((local_a8->fields).Texture = (System_String_o *)pIVar18[2].klass,
                        ppIVar9[(ulong)bVar4 - 1] != pIVar10)))) {
LAB_03d9f132:
                    /* WARNING: Subroutine does not return */
                      il2cpp_unwind_resume(local_a8);
                    }
                    il2cpp_runtime_glue(&(local_a8->fields).Texture);
                    if ((10 < (uint)*piVar28) &&
                       (fVar31 = System_Single__Parse(pSVar17->m_Items[10],(MethodInfo *)0x0),
                       0xb < (uint)pSVar17->max_length)) {
                      fVar32 = System_Single__Parse(pSVar17->m_Items[0xb],(MethodInfo *)0x0);
                      bVar4 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
                      if (((local_a8->klass->_2).naturalAligment < bVar4) ||
                         ((local_a8->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_MapScriptBasicMaterial))
                      goto LAB_03d9f132;
                      goto LAB_03d9da1e;
                    }
                    goto LAB_03d9f0db;
                  }
                }
                goto LAB_03d9f12d;
              }
              local_a8 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptLegacyMaterial);
              if (DAT_0570136e == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector2);
                DAT_0570136e = '\x01';
              }
              (local_a8->fields).Texture = *(System_String_o **)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8)
              ;
              Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)local_a8,pMVar16);
              if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x48);
            }
            else {
              local_a8 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptLegacyMaterial);
              if (DAT_0570136e == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector2);
                DAT_0570136e = '\x01';
              }
              (local_a8->fields).Texture = *(System_String_o **)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8)
              ;
              Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)local_a8,pMVar16);
              if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x40);
            }
LAB_03d9e9d3:
            (local_a8->fields).Shader = pSVar19;
            il2cpp_runtime_glue(&local_a8->fields);
            pUVar20 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
            color_02.fields.b = 0.5;
            color_02.fields.a = 0.5;
            color_02.fields.r = 0.5;
            color_02.fields.g = 0.5;
            Utility_Color255___ctor(pUVar20,color_02,(MethodInfo *)0x0);
            (local_a8->fields).Color = pUVar20;
            il2cpp_runtime_glue(&(local_a8->fields).Color);
            if ((10 < (uint)*piVar28) &&
               (fVar30 = System_Single__Parse(pSVar17->m_Items[10],(MethodInfo *)0x0),
               0xb < (uint)pSVar17->max_length)) {
              fVar31 = System_Single__Parse(pSVar17->m_Items[0xb],(MethodInfo *)0x0);
              *(float *)&(local_a8->fields).Texture = fVar30;
              *(float *)((long)&(local_a8->fields).Texture + 4) = fVar31;
              fVar30 = 0.5;
              uVar25 = (uint)*piVar28;
              goto joined_r0x03d9f0d5;
            }
            goto LAB_03d9f0db;
          }
          local_a8 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptLegacyMaterial);
          if (DAT_0570136e == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector2);
            DAT_0570136e = '\x01';
          }
          (local_a8->fields).Texture = *(System_String_o **)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
          Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)local_a8,pMVar16);
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          (local_a8->fields).Shader = *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x38);
          il2cpp_runtime_glue(&local_a8->fields);
          pUVar20 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
          color_03.fields.b = 0.0;
          color_03.fields.a = 1.0;
          color_03.fields.r = 0.0;
          color_03.fields.g = 1.0;
          Utility_Color255___ctor(pUVar20,color_03,(MethodInfo *)0x0);
          (local_a8->fields).Color = pUVar20;
          il2cpp_runtime_glue(&(local_a8->fields).Color);
          fVar30 = 1.0;
        }
        else {
          local_a8 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBasicMaterial);
          Map_MapScriptBasicMaterial___ctor(local_a8,pMVar16);
          if (local_a8 == (Map_MapScriptBasicMaterial_o *)0x0) goto LAB_03d9f12d;
          (local_a8->fields).Shader = "Transparent";
          il2cpp_runtime_glue(&local_a8->fields);
          pUVar20 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
          uVar33 = 0;
          uVar34 = 0x3f6ac083;
          uVar36 = 0x3f800000;
LAB_03d9e41e:
          color_01.fields.g = (float)uVar34;
          color_01.fields.r = (float)uVar33;
          color_01.fields.a = 0.325;
          color_01.fields.b = (float)uVar36;
          Utility_Color255___ctor(pUVar20,color_01,(MethodInfo *)0x0);
          (local_a8->fields).Color = pUVar20;
          il2cpp_runtime_glue(&(local_a8->fields).Color);
          fVar30 = 0.32;
        }
        uVar25 = (uint)*piVar28;
      }
      else {
        local_a8 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBasicMaterial);
        Map_MapScriptBasicMaterial___ctor(local_a8,pMVar16);
        if (local_a8 == (Map_MapScriptBasicMaterial_o *)0x0) goto LAB_03d9f12d;
        (local_a8->fields).Shader = "Transparent";
        il2cpp_runtime_glue(&local_a8->fields);
        pSVar19 = System_String__Substring(pSVar15,0xb,(MethodInfo *)0x0);
        bVar12 = System_Single__TryParse(pSVar19,&local_6c,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') goto LAB_03d9d2df;
        uVar25 = (uint)*piVar28;
        fVar30 = local_6c;
      }
    }
joined_r0x03d9f0d5:
    if (uVar25 < 2) goto LAB_03d9f0db;
    if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto LAB_03d9f12d;
    pSVar19 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
    if ((uint)*piVar28 < 7) goto LAB_03d9f0db;
    bVar12 = System_String__op_Inequality(pSVar17->m_Items[6],"0",(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      bVar12 = System_String__op_Inequality(pSVar15,"default",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        if (pSVar19 == (System_String_o *)0x0) goto LAB_03d9f12d;
        bVar12 = System_String__StartsWith(pSVar19,"start",(MethodInfo *)0x0);
        if (((((char)bVar12 != '\0') ||
             (bVar12 = System_String__StartsWith(pSVar19,"kill",(MethodInfo *)0x0),
             (char)bVar12 != '\0')) ||
            (bVar12 = System_String__StartsWith(pSVar19,"end",(MethodInfo *)0x0),
            (char)bVar12 != '\0')) ||
           (bVar12 = System_String__StartsWith(pSVar19,"checkpoint",(MethodInfo *)0x0),
           (char)bVar12 != '\0')) goto LAB_03d9d403;
      }
      bVar12 = System_String__op_Equality(pSVar15,(System_String_o *)"cannonregionmat",(MethodInfo *)0x0)
      ;
      if ((char)bVar12 == '\0') {
        if ((((uint)*piVar28 < 8) ||
            (fVar31 = System_Single__Parse(pSVar17->m_Items[7],(MethodInfo *)0x0),
            (uint)pSVar17->max_length < 9)) ||
           (fVar32 = System_Single__Parse(pSVar17->m_Items[8],(MethodInfo *)0x0),
           (uint)pSVar17->max_length < 10)) goto LAB_03d9f0db;
        fVar35 = System_Single__Parse(pSVar17->m_Items[9],(MethodInfo *)0x0);
        pUVar20 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
      }
      else {
        if ((uint)*piVar28 < 9) goto LAB_03d9f0db;
        fVar32 = System_Single__Parse(pSVar17->m_Items[8],(MethodInfo *)0x0);
        pUVar20 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
        fVar35 = 0.0;
        fVar31 = 0.0;
      }
      color.fields.g = fVar32;
      color.fields.r = fVar31;
      color.fields.a = fVar30;
      color.fields.b = fVar35;
      Utility_Color255___ctor(pUVar20,color,(MethodInfo *)0x0);
      if (local_a8 == (Map_MapScriptBasicMaterial_o *)0x0) goto LAB_03d9f12d;
      (local_a8->fields).Color = pUVar20;
      il2cpp_runtime_glue(&(local_a8->fields).Color,pUVar20);
    }
LAB_03d9d403:
    (pMVar14->fields).PhysicsMaterial = (System_String_o *)local_a8;
    il2cpp_runtime_glue();
    uVar29 = local_68;
LAB_03d9de09:
    bVar12 = System_String__op_Equality((pMVar14->fields).Asset,"None",(MethodInfo *)0x0);
    if (((char)bVar12 == '\0') ||
       (bVar12 = System_String__op_Equality
                           (*(System_String_o **)&(pMVar14->fields).Visible,"Unnamed",
                            (MethodInfo *)0x0), (char)bVar12 == '\0')) {
      if (DAT_05702760 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_MapConverter);
        DAT_05702760 = '\x01';
      }
      iVar23 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
      **(int **)(TypeInfo_MapConverter + 0xb8) = iVar23;
      (pMVar14->fields).Id = iVar23;
      lVar11 = MethodInfo_Void_Add;
      if (((Map_MapScriptObjects_o *)local_58->parameters != (Map_MapScriptObjects_o *)0x0) &&
         (pMVar16 = (MethodInfo *)(((Map_MapScriptObjects_o *)local_58->parameters)->fields).Objects
         , pMVar16 != (MethodInfo *)0x0)) {
        piVar1 = (int32_t *)((long)&pMVar16->name + 4);
        *piVar1 = *piVar1 + 1;
        pMVar8 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)
                 &pMVar16->invoker_method)->_items;
        if (pMVar8 != (Map_MapScriptBaseObject_array *)0x0) {
          uVar25 = *(uint *)&pMVar16->name;
          if (uVar25 < (uint)pMVar8->max_length) {
            *(uint *)&pMVar16->name = uVar25 + 1;
            pMVar16 = (MethodInfo *)(pMVar8->m_Items + (int)uVar25);
            pMVar8->m_Items[(int)uVar25] = (Map_MapScriptBaseObject_o *)pMVar14;
            il2cpp_runtime_glue();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pMVar16,(Il2CppObject *)pMVar14,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_03d9df40;
        }
      }
      goto LAB_03d9f12d;
    }
    pMVar16 = (MethodInfo *)System_String__Concat("Unhandled legacy object: ",local_60,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__Log((Il2CppObject *)pMVar16,(MethodInfo *)0x0);
    uVar24 = uVar29 & 0xffffffff;
    goto LAB_03d9df43;
  }
  if ((int)*piVar28 == 0) goto LAB_03d9f0db;
  if (pSVar17->m_Items[0] == (System_String_o *)0x0) goto LAB_03d9f12d;
  bVar12 = System_String__StartsWith(pSVar17->m_Items[0],"spawnpoint",(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
    if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto LAB_03d9f12d;
    pSVar15 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
    bVar12 = System_String__op_Equality(pSVar15,"titan",(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
      if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto LAB_03d9f12d;
      pSVar15 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
      bVar12 = System_String__op_Equality(pSVar15,"player",(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
        if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ppIVar21 = (Il2CppObject **)&"Human SpawnPoint";
          goto LAB_03d9dd64;
        }
        goto LAB_03d9f12d;
      }
      if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
      if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto LAB_03d9f12d;
      pSVar15 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
      bVar12 = System_String__op_Equality(pSVar15,"playerc",(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
        if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ppIVar21 = (Il2CppObject **)&"Human SpawnPoint (blue)";
          goto LAB_03d9dd64;
        }
        goto LAB_03d9f12d;
      }
      if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
      if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto LAB_03d9f12d;
      pSVar15 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
      bVar12 = System_String__op_Equality(pSVar15,"playerm",(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
        if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ppIVar21 = (Il2CppObject **)&"Human SpawnPoint (red)";
          goto LAB_03d9dd64;
        }
        goto LAB_03d9f12d;
      }
    }
    else {
      if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
      if (pSVar26 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03d9f12d;
      ppIVar21 = &"Titan SpawnPoint";
LAB_03d9dd64:
      pIVar18 = System_Collections_Generic_Dictionary<object__object>__get_Item
                          (pSVar26,*ppIVar21,MethodInfo_MapScriptBaseObject_get_Item);
      if (pMVar14 == (Map_MapScriptSceneObject_o *)0x0) goto LAB_03d9f12d;
      (*(pMVar14->klass->vtable)._10_Copy.methodPtr)
                (pMVar14,pIVar18,(pMVar14->klass->vtable)._10_Copy.method);
    }
    if (((2 < (uint)*piVar28) &&
        (fVar30 = System_Single__Parse(pSVar17->m_Items[2],(MethodInfo *)0x0),
        3 < (uint)pSVar17->max_length)) &&
       (fVar31 = System_Single__Parse(pSVar17->m_Items[3],(MethodInfo *)0x0),
       4 < (uint)pSVar17->max_length)) {
      fVar32 = System_Single__Parse(pSVar17->m_Items[4],(MethodInfo *)0x0);
      if (pMVar14 != (Map_MapScriptSceneObject_o *)0x0) {
        *(float *)&(pMVar14->fields).Name = fVar30;
        *(float *)((long)&(pMVar14->fields).Name + 4) = fVar31;
        (pMVar14->fields).PositionX = fVar32;
        goto LAB_03d9de09;
      }
      goto LAB_03d9f12d;
    }
    goto LAB_03d9f0db;
  }
  if ((uint)*piVar28 == 0) goto LAB_03d9f0db;
  if (pSVar17->m_Items[0] == (System_String_o *)0x0) goto LAB_03d9f12d;
  bVar12 = System_String__StartsWith(pSVar17->m_Items[0],"misc",(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    if ((uint)*piVar28 == 0) goto LAB_03d9f0db;
    if (pSVar17->m_Items[0] == (System_String_o *)0x0) goto LAB_03d9f12d;
    bVar12 = System_String__StartsWith(pSVar17->m_Items[0],"base",(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (1 < (uint)*piVar28) {
        if (pSVar17->m_Items[1] != (System_String_o *)0x0) {
          pSVar15 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
          bVar12 = System_String__op_Equality(pSVar15,"aot_supply",(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
            if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto LAB_03d9f12d;
            pSVar15 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
            bVar12 = System_String__op_Equality(pSVar15,"levelbottom",(MethodInfo *)0x0);
            if ((char)bVar12 != '\0') {
              if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
              if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                puVar22 = &"LevelBottom";
                goto LAB_03d9db0e;
              }
              goto LAB_03d9f12d;
            }
          }
          else {
            if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
            if (pSVar26 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_03d9f12d;
            puVar22 = &"Supply1";
LAB_03d9db0e:
            pIVar18 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                (pSVar26,(Il2CppObject *)*puVar22,MethodInfo_MapScriptBaseObject_get_Item);
            if (pMVar14 == (Map_MapScriptSceneObject_o *)0x0) goto LAB_03d9f12d;
            (*(pMVar14->klass->vtable)._10_Copy.methodPtr)
                      (pMVar14,pIVar18,(pMVar14->klass->vtable)._10_Copy.method);
          }
          if ((int)(uint)*piVar28 < 0xf) {
            if ((((uint)*piVar28 < 3) ||
                (fVar30 = System_Single__Parse(pSVar17->m_Items[2],(MethodInfo *)0x0),
                (uint)pSVar17->max_length < 4)) ||
               (fVar31 = System_Single__Parse(pSVar17->m_Items[3],(MethodInfo *)0x0),
               (uint)pSVar17->max_length < 5)) goto LAB_03d9f0db;
            fVar32 = System_Single__Parse(pSVar17->m_Items[4],(MethodInfo *)0x0);
            if (pMVar14 == (Map_MapScriptSceneObject_o *)0x0) goto LAB_03d9f12d;
            *(float *)&(pMVar14->fields).Name = fVar30;
            *(float *)((long)&(pMVar14->fields).Name + 4) = fVar31;
            (pMVar14->fields).PositionX = fVar32;
            if ((((uint)*piVar28 < 6) ||
                (rotation_01.fields.x = System_Single__Parse(pSVar17->m_Items[5],(MethodInfo *)0x0),
                (uint)pSVar17->max_length < 7)) ||
               ((fVar30 = System_Single__Parse(pSVar17->m_Items[6],(MethodInfo *)0x0),
                (uint)pSVar17->max_length < 8 ||
                (fVar31 = System_Single__Parse(pSVar17->m_Items[7],(MethodInfo *)0x0),
                (uint)pSVar17->max_length < 9)))) goto LAB_03d9f0db;
            fVar32 = System_Single__Parse(pSVar17->m_Items[8],(MethodInfo *)0x0);
            rotation_01.fields.y = fVar30;
            rotation_01.fields.w = fVar32;
            rotation_01.fields.z = fVar31;
            UVar38 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation_01,(MethodInfo *)0x0);
            euler_02.fields.x = UVar38.fields.x * 57.29578;
            euler_02.fields.y = UVar38.fields.y * 57.29578;
            euler_02.fields.z = UVar38.fields.z * 57.29578;
            UVar38 = UnityEngine_Quaternion__Internal_MakePositive(euler_02,(MethodInfo *)0x0);
            (pMVar14->fields).PositionY = UVar38.fields.x;
            (pMVar14->fields).PositionZ = UVar38.fields.y;
            (pMVar14->fields).RotationX = UVar38.fields.z;
            uVar25 = (uint)*piVar28;
          }
          else {
            fVar30 = System_Single__Parse(pSVar17->m_Items[0xc],(MethodInfo *)0x0);
            if (((uint)pSVar17->max_length < 0xe) ||
               (fVar31 = System_Single__Parse(pSVar17->m_Items[0xd],(MethodInfo *)0x0),
               (uint)pSVar17->max_length < 0xf)) goto LAB_03d9f0db;
            fVar32 = System_Single__Parse(pSVar17->m_Items[0xe],(MethodInfo *)0x0);
            if (pMVar14 == (Map_MapScriptSceneObject_o *)0x0) goto LAB_03d9f12d;
            *(float *)&(pMVar14->fields).Name = fVar30;
            *(float *)((long)&(pMVar14->fields).Name + 4) = fVar31;
            (pMVar14->fields).PositionX = fVar32;
            if (((((uint)*piVar28 < 0x10) ||
                 (rotation_00.fields.x =
                       System_Single__Parse(pSVar17->m_Items[0xf],(MethodInfo *)0x0),
                 (uint)pSVar17->max_length < 0x11)) ||
                (fVar30 = System_Single__Parse(pSVar17->m_Items[0x10],(MethodInfo *)0x0),
                (uint)pSVar17->max_length < 0x12)) ||
               (fVar31 = System_Single__Parse(pSVar17->m_Items[0x11],(MethodInfo *)0x0),
               (uint)pSVar17->max_length < 0x13)) goto LAB_03d9f0db;
            fVar32 = System_Single__Parse(pSVar17->m_Items[0x12],(MethodInfo *)0x0);
            rotation_00.fields.y = fVar30;
            rotation_00.fields.w = fVar32;
            rotation_00.fields.z = fVar31;
            UVar38 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation_00,(MethodInfo *)0x0);
            euler_01.fields.x = UVar38.fields.x * 57.29578;
            euler_01.fields.y = UVar38.fields.y * 57.29578;
            euler_01.fields.z = UVar38.fields.z * 57.29578;
            UVar38 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
            (pMVar14->fields).PositionY = UVar38.fields.x;
            (pMVar14->fields).PositionZ = UVar38.fields.y;
            (pMVar14->fields).RotationX = UVar38.fields.z;
            if ((((uint)pSVar17->max_length < 4) ||
                (fVar30 = System_Single__Parse(pSVar17->m_Items[3],(MethodInfo *)0x0),
                (uint)pSVar17->max_length < 5)) ||
               (fVar31 = System_Single__Parse(pSVar17->m_Items[4],(MethodInfo *)0x0),
               (uint)pSVar17->max_length < 6)) goto LAB_03d9f0db;
            fVar32 = System_Single__Parse(pSVar17->m_Items[5],(MethodInfo *)0x0);
            (pMVar14->fields).RotationY = fVar30;
            (pMVar14->fields).RotationZ = fVar31;
            (pMVar14->fields).ScaleX = fVar32;
            uVar25 = (uint)*piVar28;
          }
          if (1 < uVar25) {
            if (pSVar17->m_Items[1] != (System_String_o *)0x0) {
              pSVar15 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
              bVar12 = System_String__op_Equality(pSVar15,"aot_supply",(MethodInfo *)0x0);
              if ((char)bVar12 != '\0') {
                fVar30 = *(float *)&(pMVar14->fields).Name;
                fVar31 = *(float *)((long)&(pMVar14->fields).Name + 4);
                fVar32 = (pMVar14->fields).PositionX;
                uVar2 = (pMVar14->fields).PositionY;
                uVar3 = (pMVar14->fields).PositionZ;
                UVar38.fields.x = (float)uVar2 * 0.017453292;
                UVar38.fields.y = (float)uVar3 * 0.017453292;
                uVar33 = 0;
                uVar34 = 0;
                UVar38.fields.z = (pMVar14->fields).RotationX * 0.017453292;
                UVar39 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar38,(MethodInfo *)0x0);
                fVar35 = UVar39.fields.z;
                fVar37 = UVar39.fields.w;
                if (DAT_057027fd == '\0') {
                  local_48._8_4_ = uVar33;
                  local_48._0_8_ = UVar39.fields._8_8_;
                  local_48._12_4_ = uVar34;
                  il2cpp_init_method_metadata();
                  DAT_057027fd = '\x01';
                  fVar35 = (float)local_48._0_4_;
                  fVar37 = (float)local_48._4_4_;
                }
                rotation_02.fields.w = fVar37;
                rotation_02.fields.z = fVar35;
                rotation_02.fields.x = (float)(int)UVar39.fields._0_8_;
                rotation_02.fields.y = (float)(int)((ulong)UVar39.fields._0_8_ >> 0x20);
                UVar38 = UnityEngine_Quaternion__op_Multiply
                                   (rotation_02,
                                    *(UnityEngine_Vector3_Fields *)
                                     (*(long *)(TypeInfo_Vector3 + 0xb8) + 0x54),(MethodInfo *)0x0);
                *(float *)&(pMVar14->fields).Name = fVar30 + UVar38.fields.x * 0.37;
                *(float *)((long)&(pMVar14->fields).Name + 4) = fVar31 + UVar38.fields.y * 0.37;
                (pMVar14->fields).PositionX = fVar32 + UVar38.fields.z * 0.37;
              }
              goto LAB_03d9de09;
            }
            goto LAB_03d9f12d;
          }
          goto LAB_03d9f0db;
        }
        goto LAB_03d9f12d;
      }
      goto LAB_03d9f0db;
    }
    if ((uint)*piVar28 == 0) goto LAB_03d9f0db;
    if (pSVar17->m_Items[0] == (System_String_o *)0x0) goto LAB_03d9f12d;
    bVar12 = System_String__StartsWith(pSVar17->m_Items[0],"photon",(MethodInfo *)0x0);
    uVar25 = (uint)*piVar28;
    uVar24 = (ulong)uVar25;
    if ((char)bVar12 != '\0') {
      if (1 < uVar25) {
        if (pSVar17->m_Items[1] != (System_String_o *)0x0) {
          pSVar15 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
          bVar12 = System_String__op_Equality(pSVar15,"cannonground",(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            if (1 < (uint)*piVar28) {
              if (pSVar17->m_Items[1] != (System_String_o *)0x0) {
                pSVar15 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
                bVar12 = System_String__op_Equality(pSVar15,"cannonwall",(MethodInfo *)0x0);
                if ((char)bVar12 != '\0') goto LAB_03d9d79d;
                if (1 < (uint)*piVar28) {
                  if ((pSVar17->m_Items[1] == (System_String_o *)0x0) ||
                     (pSVar15 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0),
                     pSVar15 == (System_String_o *)0x0)) goto LAB_03d9f12d;
                  bVar12 = System_String__StartsWith(pSVar15,"spawn",(MethodInfo *)0x0);
                  if ((char)bVar12 == '\0') goto LAB_03d9ed12;
                  if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                             (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
                  if ((pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                     (pIVar18 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                          (pSVar26,"Titan SpawnPoint",MethodInfo_MapScriptBaseObject_get_Item),
                     pMVar14 != (Map_MapScriptSceneObject_o *)0x0)) {
                    (*(pMVar14->klass->vtable)._10_Copy.methodPtr)
                              (pMVar14,pIVar18,(pMVar14->klass->vtable)._10_Copy.method);
                    if ((4 < (uint)*piVar28) &&
                       ((fVar30 = System_Single__Parse(pSVar17->m_Items[4],(MethodInfo *)0x0),
                        5 < (uint)pSVar17->max_length &&
                        (fVar31 = System_Single__Parse(pSVar17->m_Items[5],(MethodInfo *)0x0),
                        6 < (uint)pSVar17->max_length)))) {
                      fVar32 = System_Single__Parse(pSVar17->m_Items[6],(MethodInfo *)0x0);
                      *(float *)&(pMVar14->fields).Name = fVar30;
                      *(float *)((long)&(pMVar14->fields).Name + 4) = fVar31;
                      (pMVar14->fields).PositionX = fVar32;
                      if ((7 < (uint)pSVar17->max_length) &&
                         (((fVar30 = System_Single__Parse(pSVar17->m_Items[7],(MethodInfo *)0x0),
                           8 < (uint)pSVar17->max_length &&
                           (fVar31 = System_Single__Parse(pSVar17->m_Items[8],(MethodInfo *)0x0),
                           9 < (uint)pSVar17->max_length)) &&
                          (fVar32 = System_Single__Parse(pSVar17->m_Items[9],(MethodInfo *)0x0),
                          10 < (uint)pSVar17->max_length)))) {
                        pSVar15 = pSVar17->m_Items[10];
LAB_03d9e851:
                        fVar35 = System_Single__Parse(pSVar15,(MethodInfo *)0x0);
                        rotation_04.fields.y = fVar31;
                        rotation_04.fields.x = fVar30;
                        rotation_04.fields.w = fVar35;
                        rotation_04.fields.z = fVar32;
                        UVar38 = UnityEngine_Quaternion__Internal_ToEulerRad
                                           (rotation_04,(MethodInfo *)0x0);
                        euler_04.fields.x = UVar38.fields.x * 57.29578;
                        euler_04.fields.y = UVar38.fields.y * 57.29578;
                        euler_04.fields.z = UVar38.fields.z * 57.29578;
                        UVar38 = UnityEngine_Quaternion__Internal_MakePositive
                                           (euler_04,(MethodInfo *)0x0);
                        (pMVar14->fields).PositionY = UVar38.fields.x;
                        (pMVar14->fields).PositionZ = UVar38.fields.y;
                        (pMVar14->fields).RotationX = UVar38.fields.z;
                        goto LAB_03d9de09;
                      }
                    }
                    goto LAB_03d9f0db;
                  }
                  goto LAB_03d9f12d;
                }
                goto LAB_03d9f0db;
              }
              goto LAB_03d9f12d;
            }
            goto LAB_03d9f0db;
          }
LAB_03d9d79d:
          if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
          if (pSVar17->m_Items[1] != (System_String_o *)0x0) {
            pSVar15 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
            bVar12 = System_String__op_Equality(pSVar15,"cannonground",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
            if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              if ((char)bVar12 == '\0') {
                puVar22 = &"Cannon3";
              }
              else {
                puVar22 = &"Cannon2";
              }
              pIVar18 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                  (pSVar26,(Il2CppObject *)*puVar22,MethodInfo_MapScriptBaseObject_get_Item);
              if (pMVar14 != (Map_MapScriptSceneObject_o *)0x0) {
                (*(pMVar14->klass->vtable)._10_Copy.methodPtr)
                          (pMVar14,pIVar18,(pMVar14->klass->vtable)._10_Copy.method);
                if ((int)(uint)*piVar28 < 0xf) {
                  if (((2 < (uint)*piVar28) &&
                      (fVar30 = System_Single__Parse(pSVar17->m_Items[2],(MethodInfo *)0x0),
                      3 < (uint)pSVar17->max_length)) &&
                     (fVar31 = System_Single__Parse(pSVar17->m_Items[3],(MethodInfo *)0x0),
                     4 < (uint)pSVar17->max_length)) {
                    fVar32 = System_Single__Parse(pSVar17->m_Items[4],(MethodInfo *)0x0);
                    *(float *)&(pMVar14->fields).Name = fVar30;
                    *(float *)((long)&(pMVar14->fields).Name + 4) = fVar31;
                    (pMVar14->fields).PositionX = fVar32;
                    if (((5 < (uint)pSVar17->max_length) &&
                        (fVar30 = System_Single__Parse(pSVar17->m_Items[5],(MethodInfo *)0x0),
                        6 < (uint)pSVar17->max_length)) &&
                       ((fVar31 = System_Single__Parse(pSVar17->m_Items[6],(MethodInfo *)0x0),
                        7 < (uint)pSVar17->max_length &&
                        (fVar32 = System_Single__Parse(pSVar17->m_Items[7],(MethodInfo *)0x0),
                        8 < (uint)pSVar17->max_length)))) {
                      pSVar15 = pSVar17->m_Items[8];
                      goto LAB_03d9e851;
                    }
                  }
                }
                else {
                  fVar30 = System_Single__Parse(pSVar17->m_Items[0xc],(MethodInfo *)0x0);
                  if ((0xd < (uint)pSVar17->max_length) &&
                     (fVar31 = System_Single__Parse(pSVar17->m_Items[0xd],(MethodInfo *)0x0),
                     0xe < (uint)pSVar17->max_length)) {
                    fVar32 = System_Single__Parse(pSVar17->m_Items[0xe],(MethodInfo *)0x0);
                    *(float *)&(pMVar14->fields).Name = fVar30;
                    *(float *)((long)&(pMVar14->fields).Name + 4) = fVar31;
                    (pMVar14->fields).PositionX = fVar32;
                    if ((0xf < (uint)pSVar17->max_length) &&
                       (((rotation_03.fields.x =
                               System_Single__Parse(pSVar17->m_Items[0xf],(MethodInfo *)0x0),
                         0x10 < (uint)pSVar17->max_length &&
                         (fVar30 = System_Single__Parse(pSVar17->m_Items[0x10],(MethodInfo *)0x0),
                         0x11 < (uint)pSVar17->max_length)) &&
                        (fVar31 = System_Single__Parse(pSVar17->m_Items[0x11],(MethodInfo *)0x0),
                        0x12 < (uint)pSVar17->max_length)))) {
                      fVar32 = System_Single__Parse(pSVar17->m_Items[0x12],(MethodInfo *)0x0);
                      rotation_03.fields.y = fVar30;
                      rotation_03.fields.w = fVar32;
                      rotation_03.fields.z = fVar31;
                      UVar38 = UnityEngine_Quaternion__Internal_ToEulerRad
                                         (rotation_03,(MethodInfo *)0x0);
                      euler_03.fields.x = UVar38.fields.x * 57.29578;
                      euler_03.fields.y = UVar38.fields.y * 57.29578;
                      euler_03.fields.z = UVar38.fields.z * 57.29578;
                      UVar38 = UnityEngine_Quaternion__Internal_MakePositive
                                         (euler_03,(MethodInfo *)0x0);
                      (pMVar14->fields).PositionY = UVar38.fields.x;
                      (pMVar14->fields).PositionZ = UVar38.fields.y;
                      (pMVar14->fields).RotationX = UVar38.fields.z;
                      if (((3 < (uint)pSVar17->max_length) &&
                          (fVar30 = System_Single__Parse(pSVar17->m_Items[3],(MethodInfo *)0x0),
                          4 < (uint)pSVar17->max_length)) &&
                         (local_b8 = System_Single__Parse(pSVar17->m_Items[4],(MethodInfo *)0x0),
                         5 < (uint)pSVar17->max_length)) {
                        pSVar15 = pSVar17->m_Items[5];
                        goto LAB_03d9d656;
                      }
                    }
                  }
                }
                goto LAB_03d9f0db;
              }
            }
          }
        }
        goto LAB_03d9f12d;
      }
      goto LAB_03d9f0db;
    }
    if (uVar25 == 0) goto LAB_03d9f0db;
    if (pSVar17->m_Items[0] == (System_String_o *)0x0) goto LAB_03d9f12d;
    bVar12 = System_String__StartsWith(pSVar17->m_Items[0],"racing",(MethodInfo *)0x0);
    pMVar16 = "";
    if ((char)bVar12 != '\0') {
      if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
      if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto LAB_03d9f12d;
      bVar12 = System_String__StartsWith(pSVar17->m_Items[1],"start",(MethodInfo *)0x0);
      if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
      pSVar15 = pSVar17->m_Items[1];
      if ((char)bVar12 == '\0') {
        if (pSVar15 == (System_String_o *)0x0) goto LAB_03d9f12d;
        bVar12 = System_String__StartsWith(pSVar15,"end",(MethodInfo *)0x0);
        if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
        pSVar15 = pSVar17->m_Items[1];
        if ((char)bVar12 != '\0') {
          if ("end" != (System_String_o *)0x0) {
            puVar22 = (undefined8 *)&"Racing Finish Region ";
            pSVar19 = "end";
joined_r0x03d9e928:
            if (pSVar15 != (System_String_o *)0x0) goto LAB_03d9ec31;
          }
          goto LAB_03d9f12d;
        }
        if (pSVar15 == (System_String_o *)0x0) goto LAB_03d9f12d;
        bVar12 = System_String__StartsWith(pSVar15,"kill",(MethodInfo *)0x0);
        if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
        pSVar15 = pSVar17->m_Items[1];
        if ((char)bVar12 != '\0') {
          if ("kill" != (System_String_o *)0x0) {
            puVar22 = (undefined8 *)&"Kill Region ";
            pSVar19 = "kill";
            goto joined_r0x03d9e928;
          }
          goto LAB_03d9f12d;
        }
        if (pSVar15 == (System_String_o *)0x0) goto LAB_03d9f12d;
        bVar12 = System_String__StartsWith(pSVar15,"checkpoint",(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          if (1 < (uint)*piVar28) {
            if ("checkpoint" != (System_String_o *)0x0) {
              pSVar15 = pSVar17->m_Items[1];
              puVar22 = (undefined8 *)&"Racing Checkpoint Region ";
              pSVar19 = "checkpoint";
              goto joined_r0x03d9e928;
            }
            goto LAB_03d9f12d;
          }
          goto LAB_03d9f0db;
        }
      }
      else {
        if (("start" == (System_String_o *)0x0) ||
           (puVar22 = &"Racing Start Barrier ", pSVar19 = "start", pSVar15 == (System_String_o *)0x0))
        goto LAB_03d9f12d;
LAB_03d9ec31:
        pSVar15 = System_String__Substring
                            (pSVar15,(pSVar19->fields)._stringLength,(MethodInfo *)0x0);
        pMVar16 = (MethodInfo *)
                  System_String__Concat((System_String_o *)*puVar22,pSVar15,(MethodInfo *)0x0);
      }
      if (pMVar16 != (MethodInfo *)0x0) {
        if (*(int *)&pMVar16->invoker_method < 1) goto LAB_03d9ed12;
        if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x18);
        pSVar15 = System_String__ToLower((System_String_o *)pMVar16,(MethodInfo *)0x0);
        if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          bVar12 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                             (pSVar26,(Il2CppObject *)pSVar15,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar12 == '\0') goto LAB_03d9ed12;
          if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x18);
          pSVar15 = System_String__ToLower((System_String_o *)pMVar16,(MethodInfo *)0x0);
          if ((pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
             (pIVar18 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                  (pSVar26,(Il2CppObject *)pSVar15,MethodInfo_MapScriptBaseObject_get_Item),
             pMVar14 != (Map_MapScriptSceneObject_o *)0x0)) goto LAB_03d9d13d;
        }
      }
      goto LAB_03d9f12d;
    }
    if ((int)*piVar28 == 0) goto LAB_03d9f0db;
    if (pSVar17->m_Items[0] == (System_String_o *)0x0) goto LAB_03d9f12d;
    bVar12 = System_String__StartsWith(pSVar17->m_Items[0],"map",(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
LAB_03d9ed12:
      if (pMVar14 != (Map_MapScriptSceneObject_o *)0x0) goto LAB_03d9de09;
      goto LAB_03d9f12d;
    }
    if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
    pMVar16 = (MethodInfo *)pSVar17->m_Items[1];
    if (pMVar16 == (MethodInfo *)0x0) goto LAB_03d9f12d;
    bVar12 = System_String__StartsWith((System_String_o *)pMVar16,"disablebounds",(MethodInfo *)0x0);
    uVar24 = CONCAT71((int7)(uVar24 >> 8),1);
    if ((char)bVar12 == '\0') goto LAB_03d9ed12;
    goto LAB_03d9df43;
  }
  if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
  bVar12 = System_String__op_Equality(pSVar17->m_Items[1],"barrier",(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
    bVar12 = System_String__op_Equality(pSVar17->m_Items[1],"barrierEditor",(MethodInfo *)0x0);
    pMVar16 = "Geometry/Cuboid";
    if ((char)bVar12 != '\0') {
      local_68 = uVar29;
      if (pMVar14 == (Map_MapScriptSceneObject_o *)0x0) goto LAB_03d9f12d;
      (pMVar14->fields).Asset = (System_String_o *)"Geometry/Cuboid";
      il2cpp_runtime_glue(&(pMVar14->fields).Asset);
      __this = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBasicMaterial);
      Map_MapScriptBasicMaterial___ctor(__this,pMVar16);
      if (__this == (Map_MapScriptBasicMaterial_o *)0x0) goto LAB_03d9f12d;
      (__this->fields).Shader = "Transparent";
      il2cpp_runtime_glue(&__this->fields);
      pUVar20 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
      color_00.fields.b = 1.0;
      color_00.fields.a = 0.32;
      color_00.fields.r = 0.0;
      color_00.fields.g = 0.917;
      Utility_Color255___ctor(pUVar20,color_00,(MethodInfo *)0x0);
      (__this->fields).Color = pUVar20;
      il2cpp_runtime_glue(&(__this->fields).Color,pUVar20);
      (pMVar14->fields).PhysicsMaterial = (System_String_o *)__this;
      il2cpp_runtime_glue(&(pMVar14->fields).PhysicsMaterial);
      uVar25 = (uint)*piVar28;
      uVar29 = local_68;
      goto joined_r0x03d9d507;
    }
    if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
    bVar12 = System_String__op_Equality(pSVar17->m_Items[1],"racingStart",(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
      if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        puVar22 = &"Racing Start Barrier Cuboid";
        goto LAB_03d9d122;
      }
      goto LAB_03d9f12d;
    }
    if ((uint)*piVar28 < 2) goto LAB_03d9f0db;
    bVar12 = System_String__op_Equality(pSVar17->m_Items[1],"racingEnd",(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      if (1 < (uint)*piVar28) {
        pMVar16 = (MethodInfo *)pSVar17->m_Items[1];
        bVar12 = System_String__op_Equality
                           ((System_String_o *)pMVar16,"region",(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') goto LAB_03d9ed12;
        goto LAB_03d9df40;
      }
      goto LAB_03d9f0db;
    }
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
    if (pSVar26 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_03d9f12d;
    puVar22 = &"Racing Finish Region Cuboid";
  }
  else {
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
    if (pSVar26 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_03d9f12d;
    puVar22 = &"LegacyBarrier";
  }
LAB_03d9d122:
  pIVar18 = System_Collections_Generic_Dictionary<object__object>__get_Item
                      (pSVar26,(Il2CppObject *)*puVar22,MethodInfo_MapScriptBaseObject_get_Item);
  if (pMVar14 == (Map_MapScriptSceneObject_o *)0x0) goto LAB_03d9f12d;
LAB_03d9d13d:
  (*(pMVar14->klass->vtable)._10_Copy.methodPtr)
            (pMVar14,pIVar18,(pMVar14->klass->vtable)._10_Copy.method);
  uVar25 = (uint)*piVar28;
joined_r0x03d9d507:
  if (((5 < uVar25) &&
      (fVar30 = System_Single__Parse(pSVar17->m_Items[5],(MethodInfo *)0x0),
      6 < (uint)pSVar17->max_length)) &&
     (fVar31 = System_Single__Parse(pSVar17->m_Items[6],(MethodInfo *)0x0),
     7 < (uint)pSVar17->max_length)) {
    fVar32 = System_Single__Parse(pSVar17->m_Items[7],(MethodInfo *)0x0);
    *(float *)&(pMVar14->fields).Name = fVar30;
    *(float *)((long)&(pMVar14->fields).Name + 4) = fVar31;
    (pMVar14->fields).PositionX = fVar32;
    if (((8 < (uint)pSVar17->max_length) &&
        (rotation.fields.x = System_Single__Parse(pSVar17->m_Items[8],(MethodInfo *)0x0),
        9 < (uint)pSVar17->max_length)) &&
       ((fVar30 = System_Single__Parse(pSVar17->m_Items[9],(MethodInfo *)0x0),
        10 < (uint)pSVar17->max_length &&
        (fVar31 = System_Single__Parse(pSVar17->m_Items[10],(MethodInfo *)0x0),
        0xb < (uint)pSVar17->max_length)))) {
      fVar32 = System_Single__Parse(pSVar17->m_Items[0xb],(MethodInfo *)0x0);
      rotation.fields.y = fVar30;
      rotation.fields.w = fVar32;
      rotation.fields.z = fVar31;
      UVar38 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler_00.fields.x = UVar38.fields.x * 57.29578;
      euler_00.fields.y = UVar38.fields.y * 57.29578;
      euler_00.fields.z = UVar38.fields.z * 57.29578;
      UVar38 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
      (pMVar14->fields).PositionY = UVar38.fields.x;
      (pMVar14->fields).PositionZ = UVar38.fields.y;
      (pMVar14->fields).RotationX = UVar38.fields.z;
      if (((2 < (uint)pSVar17->max_length) &&
          (fVar30 = System_Single__Parse(pSVar17->m_Items[2],(MethodInfo *)0x0),
          3 < (uint)pSVar17->max_length)) &&
         (local_b8 = System_Single__Parse(pSVar17->m_Items[3],(MethodInfo *)0x0),
         4 < (uint)pSVar17->max_length)) {
        pSVar15 = pSVar17->m_Items[4];
LAB_03d9d656:
        fVar31 = System_Single__Parse(pSVar15,(MethodInfo *)0x0);
        (pMVar14->fields).RotationY = fVar30;
        (pMVar14->fields).RotationZ = local_b8;
        (pMVar14->fields).ScaleX = fVar31;
        goto LAB_03d9de09;
      }
    }
  }
  goto LAB_03d9f0db;
}


// Map.MapConverter$$GetNextId
// il2cpp: int32_t Map_MapConverter__GetNextId (const MethodInfo* method);
// 0x3d9bd30

int32_t Map_MapConverter__GetNextId(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702760 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapConverter);
    DAT_05702760 = '\x01';
  }
  iVar1 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
  **(int **)(TypeInfo_MapConverter + 0xb8) = iVar1;
  return iVar1;
}


// Map.MapConverter$$.ctor
// il2cpp: void Map_MapConverter___ctor (Map_MapConverter_o* __this, const MethodInfo* method);
// 0x3d9f4b0

void Map_MapConverter___ctor(Map_MapConverter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


