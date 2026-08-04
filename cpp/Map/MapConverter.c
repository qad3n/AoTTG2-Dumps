// Type: Map.MapConverter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapConverter.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapConverter.cs
// --------------------------------

// Map.MapConverter$$IsLegacy
// il2cpp: bool Map_MapConverter__IsLegacy (System_String_o* map, const MethodInfo* method);
// 0x40a1280

bool_conflict Map_MapConverter__IsLegacy(System_String_o *map,MethodInfo *method)

{
  System_String_o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_o *a;
  Map_MapScriptSceneObject_o *__this_01;
  Map_MapScriptBasicMaterial_o *__this_02;
  Il2CppObject *pIVar4;
  Utility_Color255_o *__this_03;
  int iVar5;
  long lVar6;
  UnityEngine_Vector3_o scale;
  UnityEngine_Vector3_o position;
  UnityEngine_Color_o color;
  
  if (g_data_057ac48e == '\0') {
    il2cpp_runtime_helper_023445d0(&"///");
    g_data_057ac48e = '\x01';
  }
  if ((map != (System_String_o *)0x0) &&
     (pSVar3 = System_String__Split(map,0x3b,0,(MethodInfo *)0x0), pSVar3 != (System_String_array *)0x0)) {
    lVar6 = 0;
    while( true ) {
      uVar2 = (uint)pSVar3->max_length;
      if ((int)uVar2 <= (int)(uint)lVar6) {
        return 0;
      }
      if (uVar2 <= (uint)lVar6) break;
      __this = pSVar3->m_Items[lVar6];
      if (__this == (System_String_o *)0x0) goto label_040a134f;
      a = System_String__Trim(__this,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality
                        (a,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
      lVar6 = lVar6 + 1;
      if ((char)bVar1 == '\0') {
        uVar2 = System_String__StartsWith(__this,"///",(MethodInfo *)0x0);
        return uVar2 ^ 1;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040a134f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac48f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"Grass1");
    il2cpp_runtime_helper_023445d0(&"Geometry/Cuboid");
    il2cpp_runtime_helper_023445d0(&"Basic");
    g_data_057ac48f = '\x01';
  }
  __this_01 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Map_MapScriptSceneObject_o *)0x0) {
    (__this_01->fields).Asset = "Geometry/Cuboid";
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).Asset);
    scale.fields.z = 134.286;
    scale.fields.x = 134.286;
    scale.fields.y = 6.407;
    Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)__this_01,scale,(MethodInfo *)0x0);
    position.fields.z = 5.333;
    position.fields.x = -7.76;
    position.fields.y = -32.03;
    Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)__this_01,position,(MethodInfo *)0x0);
    if (g_data_057ac494 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapConverter);
      g_data_057ac494 = '\x01';
    }
    iVar5 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
    **(int **)(TypeInfo_MapConverter + 0xb8) = iVar5;
    (__this_01->fields).Id = iVar5;
    __this_02 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
    Map_MapScriptBasicMaterial___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Map_MapScriptBasicMaterial_o *)0x0) {
      (__this_02->fields).Shader = "Basic";
      il2cpp_runtime_helper_022b4080(&__this_02->fields);
      if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
      if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (__this_00,"Grass1",MethodInfo_MapScriptBasicMaterial_get_Item), pIVar4 != (Il2CppObject *)0x0)) {
        (__this_02->fields).Texture = (System_String_o *)pIVar4[2].klass;
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).Texture);
        (__this_02->fields).Tiling.fields = (UnityEngine_Vector2_Fields)0x4248000042480000;
        __this_03 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        color.fields.b = 0.654;
        color.fields.a = 1.0;
        color.fields.r = 0.678;
        color.fields.g = 0.684;
        Utility_Color255___ctor_4388bb0(__this_03,color,(MethodInfo *)0x0);
        (__this_02->fields).Color = __this_03;
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).Color,__this_03);
        (__this_01->fields).PhysicsMaterial = (System_String_o *)__this_02;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields).PhysicsMaterial,__this_02);
        return (bool_conflict)__this_01;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac494 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapConverter);
    g_data_057ac494 = '\x01';
  }
  iVar5 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
  **(int **)(TypeInfo_MapConverter + 0xb8) = iVar5;
  return iVar5;
}


// Map.MapConverter$$CreateForestFloor
// il2cpp: Map_MapScriptSceneObject_o* Map_MapConverter__CreateForestFloor (const MethodInfo* method);
// 0x40a1360

Map_MapScriptSceneObject_o * Map_MapConverter__CreateForestFloor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  uint uVar1;
  Map_MapScriptSceneObject_o *__this_00;
  Map_MapScriptBasicMaterial_o *__this_01;
  Il2CppObject *pIVar2;
  Utility_Color255_o *__this_02;
  int iVar3;
  UnityEngine_Vector3_o scale;
  UnityEngine_Vector3_o position;
  UnityEngine_Color_o color;
  
  if (g_data_057ac48f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"Grass1");
    il2cpp_runtime_helper_023445d0(&"Geometry/Cuboid");
    il2cpp_runtime_helper_023445d0(&"Basic");
    g_data_057ac48f = '\x01';
  }
  __this_00 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    (__this_00->fields).Asset = "Geometry/Cuboid";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).Asset);
    scale.fields.z = 134.286;
    scale.fields.x = 134.286;
    scale.fields.y = 6.407;
    Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)__this_00,scale,(MethodInfo *)0x0);
    position.fields.z = 5.333;
    position.fields.x = -7.76;
    position.fields.y = -32.03;
    Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)__this_00,position,(MethodInfo *)0x0);
    if (g_data_057ac494 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapConverter);
      g_data_057ac494 = '\x01';
    }
    iVar3 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
    **(int **)(TypeInfo_MapConverter + 0xb8) = iVar3;
    (__this_00->fields).Id = iVar3;
    __this_01 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
    Map_MapScriptBasicMaterial___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Map_MapScriptBasicMaterial_o *)0x0) {
      (__this_01->fields).Shader = "Basic";
      il2cpp_runtime_helper_022b4080(&__this_01->fields);
      if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
      if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this,"Grass1",MethodInfo_MapScriptBasicMaterial_get_Item);
        if (pIVar2 != (Il2CppObject *)0x0) {
          (__this_01->fields).Texture = (System_String_o *)pIVar2[2].klass;
          il2cpp_runtime_helper_022b4080(&(__this_01->fields).Texture);
          (__this_01->fields).Tiling.fields = (UnityEngine_Vector2_Fields)0x4248000042480000;
          __this_02 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          color.fields.b = 0.654;
          color.fields.a = 1.0;
          color.fields.r = 0.678;
          color.fields.g = 0.684;
          Utility_Color255___ctor_4388bb0(__this_02,color,(MethodInfo *)0x0);
          (__this_01->fields).Color = __this_02;
          il2cpp_runtime_helper_022b4080(&(__this_01->fields).Color,__this_02);
          (__this_00->fields).PhysicsMaterial = (System_String_o *)__this_01;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).PhysicsMaterial,__this_01);
          return __this_00;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac494 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapConverter);
    g_data_057ac494 = '\x01';
  }
  uVar1 = **(uint **)(TypeInfo_MapConverter + 0xb8) + 1;
  **(uint **)(TypeInfo_MapConverter + 0xb8) = uVar1;
  return (Map_MapScriptSceneObject_o *)(ulong)uVar1;
}


// Map.MapConverter$$CreateLight
// il2cpp: Map_MapScriptSceneObject_o* Map_MapConverter__CreateLight (const MethodInfo* method);
// 0x40a15d0

Map_MapScriptSceneObject_o * Map_MapConverter__CreateLight(MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  Il2CppArrayBounds *pIVar6;
  Il2CppClass *pIVar7;
  char *pcVar8;
  void *pvVar9;
  System_Collections_Generic_Dictionary_object__object__c *pSVar10;
  Il2CppClass **ppIVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long lVar14;
  bool_conflict bVar15;
  Map_MapScriptSceneObject_o *pMVar16;
  Il2CppObject *pIVar17;
  Map_MapScriptSceneObject_o *__this;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar18;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar19;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar20;
  System_String_o *pSVar21;
  System_Char_array *separator;
  System_String_array *pSVar22;
  long *plVar23;
  Il2CppObject **ppIVar24;
  undefined8 *puVar25;
  Utility_Color255_o *__this_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *collection;
  Map_MapScriptSceneObject_o *extraout_RAX;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  System_Int32_array *pSVar29;
  Map_MapScriptSceneObject_o *pMVar30;
  System_Collections_Generic_Dictionary_object__object__o *pSVar31;
  il2cpp_array_size_t *piVar32;
  uint uVar33;
  float fVar34;
  undefined4 uVar37;
  float fVar38;
  float fVar35;
  float fVar36;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  UnityEngine_Vector3_o center;
  UnityEngine_Vector3_o center_00;
  UnityEngine_Vector3_o center_01;
  UnityEngine_Vector3_o center_02;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o scale;
  UnityEngine_Vector3_o rotation;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o scale_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o scale_01;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o scale_02;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o position_04;
  UnityEngine_Vector3_o UVar42;
  UnityEngine_Vector3_o UVar43;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position_05;
  UnityEngine_Vector3_o position_06;
  UnityEngine_Vector3_o position_07;
  UnityEngine_Quaternion_o UVar44;
  UnityEngine_Quaternion_o rotation_00;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Quaternion_o rotation_01;
  UnityEngine_Quaternion_o rotation_02;
  UnityEngine_Color_o color_01;
  UnityEngine_Quaternion_o rotation_03;
  UnityEngine_Quaternion_o rotation_04;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Vector3_o size;
  UnityEngine_Vector3_o size_00;
  UnityEngine_Vector3_o size_01;
  UnityEngine_Vector3_o size_02;
  UnityEngine_Vector3_o size_03;
  undefined8 uStack_130;
  float fStack_ec;
  ulong uStack_e8;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_e0;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_d8;
  float fStack_d0;
  System_String_array *pSStack_c0;
  Map_MapScriptSceneObject_o *pMStack_b8;
  
  if (g_data_057ac490 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"Daylight");
    g_data_057ac490 = '\x01';
  }
  pMVar16 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(pMVar16,(MethodInfo *)0x0);
  if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar31 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
  if ((pSVar31 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar31,"Daylight",MethodInfo_MapScriptBaseObject_get_Item), pMVar16 != (Map_MapScriptSceneObject_o *)0x0))
  {
    (*(pMVar16->klass->vtable)._10_Copy.methodPtr)(pMVar16,pIVar17,(pMVar16->klass->vtable)._10_Copy.method);
    UVar42.fields.z = 0.02443461;
    UVar42.fields.x = 0.8779006;
    UVar42.fields.y = 2.1275563;
    UVar44 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar42,(MethodInfo *)0x0);
    Map_MapScriptBaseObject__SetRotation_3fb4ce0
              ((Map_MapScriptBaseObject_o *)pMVar16,UVar44,(MethodInfo *)0x0);
    if (g_data_057ac494 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapConverter);
      g_data_057ac494 = '\x01';
    }
    iVar26 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
    **(int **)(TypeInfo_MapConverter + 0xb8) = iVar26;
    (pMVar16->fields).Id = iVar26;
    return pMVar16;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac491 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptBaseObject);
    g_data_057ac491 = '\x01';
  }
  __this = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptBaseObject);
  pMVar16 = __this;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_Map_MapScriptBaseObject);
  uVar37 = (undefined4)g_data_00d19c20;
  uVar39 = g_data_00d19c20._4_4_;
  UVar43.fields.z = 0.01;
  UVar43.fields.x = -700.0;
  UVar43.fields.y = 745.8;
  fVar34 = 0.01;
  fVar36 = 0.0;
  uVar40 = 0;
  uVar41 = 0;
  size.fields.z = 160.0;
  size.fields.x = (float)(int)(long)g_data_00d19c20;
  size.fields.y = (float)(int)((ulong)(long)g_data_00d19c20 >> 0x20);
  fVar35 = 160.0;
  pMVar16 = Map_MapConverter__CreateBound(UVar43,size,(UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)pMVar16)
  ;
  lVar14 = MethodInfo_Void_Add;
  if (__this != (Map_MapScriptSceneObject_o *)0x0) {
    piVar1 = (int32_t *)((long)&(__this->fields).Asset + 4);
    *piVar1 = *piVar1 + 1;
    pSVar5 = (System_Object_array *)(__this->fields).Type;
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar33 = *(uint *)&(__this->fields).Asset;
      if (uVar33 < (uint)pSVar5->max_length) {
        *(uint *)&(__this->fields).Asset = uVar33 + 1;
        pMVar30 = (Map_MapScriptSceneObject_o *)(pSVar5->m_Items + (int)uVar33);
        pSVar5->m_Items[(int)uVar33] = (Il2CppObject *)pMVar16;
        il2cpp_runtime_helper_022b4080();
      }
      else {
        pMVar30 = __this;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar16,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      uVar37 = (undefined4)g_data_00d1c560;
      uVar39 = g_data_00d1c560._4_4_;
      center.fields.z = -700.0;
      center.fields.x = 0.0;
      center.fields.y = 745.8;
      fVar34 = -700.0;
      fVar36 = 0.0;
      uVar40 = 0;
      uVar41 = 0;
      size_00.fields.z = 10.0;
      size_00.fields.x = (float)(int)(long)g_data_00d1c560;
      size_00.fields.y = (float)(int)((ulong)(long)g_data_00d1c560 >> 0x20);
      fVar35 = 10.0;
      pMVar16 = Map_MapConverter__CreateBound
                          (center,size_00,(UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)pMVar30);
      lVar14 = MethodInfo_Void_Add;
      piVar1 = (int32_t *)((long)&(__this->fields).Asset + 4);
      *piVar1 = *piVar1 + 1;
      pSVar5 = (System_Object_array *)(__this->fields).Type;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar33 = *(uint *)&(__this->fields).Asset;
        if (uVar33 < (uint)pSVar5->max_length) {
          *(uint *)&(__this->fields).Asset = uVar33 + 1;
          pMVar30 = (Map_MapScriptSceneObject_o *)(pSVar5->m_Items + (int)uVar33);
          pSVar5->m_Items[(int)uVar33] = (Il2CppObject *)pMVar16;
          il2cpp_runtime_helper_022b4080();
        }
        else {
          pMVar30 = __this;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar16,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        uVar37 = (undefined4)g_data_00d1c560;
        uVar39 = g_data_00d1c560._4_4_;
        center_00.fields.z = 700.0;
        center_00.fields.x = 0.0;
        center_00.fields.y = 745.8;
        fVar34 = 700.0;
        fVar36 = 0.0;
        uVar40 = 0;
        uVar41 = 0;
        size_01.fields.z = 10.0;
        size_01.fields.x = (float)(int)(long)g_data_00d1c560;
        size_01.fields.y = (float)(int)((ulong)(long)g_data_00d1c560 >> 0x20);
        fVar35 = 10.0;
        pMVar16 = Map_MapConverter__CreateBound
                            (center_00,size_01,(UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)pMVar30);
        lVar14 = MethodInfo_Void_Add;
        piVar1 = (int32_t *)((long)&(__this->fields).Asset + 4);
        *piVar1 = *piVar1 + 1;
        pSVar5 = (System_Object_array *)(__this->fields).Type;
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar33 = *(uint *)&(__this->fields).Asset;
          if (uVar33 < (uint)pSVar5->max_length) {
            *(uint *)&(__this->fields).Asset = uVar33 + 1;
            pMVar30 = (Map_MapScriptSceneObject_o *)(pSVar5->m_Items + (int)uVar33);
            pSVar5->m_Items[(int)uVar33] = (Il2CppObject *)pMVar16;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            pMVar30 = __this;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar16,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          uVar37 = (undefined4)g_data_00d19c20;
          uVar39 = g_data_00d19c20._4_4_;
          center_01.fields.z = 0.01;
          center_01.fields.x = 700.0;
          center_01.fields.y = 745.8;
          fVar34 = 0.01;
          fVar36 = 0.0;
          uVar40 = 0;
          uVar41 = 0;
          size_02.fields.z = 160.0;
          size_02.fields.x = (float)(int)(long)g_data_00d19c20;
          size_02.fields.y = (float)(int)((ulong)(long)g_data_00d19c20 >> 0x20);
          fVar35 = 160.0;
          pMVar16 = Map_MapConverter__CreateBound
                              (center_01,size_02,(UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)pMVar30);
          lVar14 = MethodInfo_Void_Add;
          piVar1 = (int32_t *)((long)&(__this->fields).Asset + 4);
          *piVar1 = *piVar1 + 1;
          pSVar5 = (System_Object_array *)(__this->fields).Type;
          if (pSVar5 != (System_Object_array *)0x0) {
            uVar33 = *(uint *)&(__this->fields).Asset;
            if (uVar33 < (uint)pSVar5->max_length) {
              *(uint *)&(__this->fields).Asset = uVar33 + 1;
              pMVar30 = (Map_MapScriptSceneObject_o *)(pSVar5->m_Items + (int)uVar33);
              pSVar5->m_Items[(int)uVar33] = (Il2CppObject *)pMVar16;
              il2cpp_runtime_helper_022b4080();
            }
            else {
              pMVar30 = __this;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar16,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar37 = (undefined4)g_data_00d1c160;
            uVar39 = g_data_00d1c160._4_4_;
            center_02.fields.z = 17.889;
            center_02.fields.x = -2.23;
            center_02.fields.y = 1253.07;
            fVar34 = 17.889;
            fVar36 = 0.0;
            uVar40 = 0;
            uVar41 = 0;
            size_03.fields.z = 160.0;
            size_03.fields.x = (float)(int)(long)g_data_00d1c160;
            size_03.fields.y = (float)(int)((ulong)(long)g_data_00d1c160 >> 0x20);
            fVar35 = 160.0;
            pMVar16 = Map_MapConverter__CreateBound
                                (center_02,size_03,(UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)pMVar30);
            lVar14 = MethodInfo_Void_Add;
            piVar1 = (int32_t *)((long)&(__this->fields).Asset + 4);
            *piVar1 = *piVar1 + 1;
            pSVar5 = (System_Object_array *)(__this->fields).Type;
            if (pSVar5 != (System_Object_array *)0x0) {
              uVar33 = *(uint *)&(__this->fields).Asset;
              if (uVar33 < (uint)pSVar5->max_length) {
                *(uint *)&(__this->fields).Asset = uVar33 + 1;
                pSVar5->m_Items[(int)uVar33] = (Il2CppObject *)pMVar16;
                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar33,pMVar16);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar16,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              return __this;
            }
          }
        }
      }
    }
  }
  uVar12 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac492 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"LegacyBarrier");
    g_data_057ac492 = '\x01';
  }
  pMVar16 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(pMVar16,(MethodInfo *)0x0);
  if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
  if ((pSVar20 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
     (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pSVar20,"LegacyBarrier",
                           MethodInfo_MapScriptBaseObject_get_Item), pMVar16 != (Map_MapScriptSceneObject_o *)0x0)) {
    (*(pMVar16->klass->vtable)._10_Copy.methodPtr)(pMVar16,pIVar17,(pMVar16->klass->vtable)._10_Copy.method);
    position.fields.z = fVar34;
    position.fields.x = (float)(int)uVar12;
    position.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
    Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)pMVar16,position,(MethodInfo *)0x0);
    scale.fields.y = (float)uVar39;
    scale.fields.x = (float)uVar37;
    scale.fields.z = fVar35;
    Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)pMVar16,scale,(MethodInfo *)0x0);
    rotation.fields.y = (float)uVar41;
    rotation.fields.x = (float)uVar40;
    rotation.fields.z = fVar36;
    Map_MapScriptBaseObject__SetRotation((Map_MapScriptBaseObject_o *)pMVar16,rotation,(MethodInfo *)0x0);
    if (g_data_057ac494 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapConverter);
      g_data_057ac494 = '\x01';
    }
    iVar26 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
    **(int **)(TypeInfo_MapConverter + 0xb8) = iVar26;
    (pMVar16->fields).Id = iVar26;
    return pMVar16;
  }
  il2cpp_runtime_helper_022b2c90();
  pMStack_b8 = pMVar16;
  if (g_data_057ac493 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapConverter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptReflectiveMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"racingEnd");
    il2cpp_runtime_helper_023445d0(&"Racing Finish Region Cuboid");
    il2cpp_runtime_helper_023445d0(&"regioneditormat");
    il2cpp_runtime_helper_023445d0(&"map");
    il2cpp_runtime_helper_023445d0(&"custom");
    il2cpp_runtime_helper_023445d0(&"bombexplosiontex");
    il2cpp_runtime_helper_023445d0(&"racingStart");
    il2cpp_runtime_helper_023445d0(&"Unhandled legacy object: ");
    il2cpp_runtime_helper_023445d0(&"//");
    il2cpp_runtime_helper_023445d0(&"Cannon2");
    il2cpp_runtime_helper_023445d0(&"bark");
    il2cpp_runtime_helper_023445d0(&"cannonwall");
    il2cpp_runtime_helper_023445d0(&"start");
    il2cpp_runtime_helper_023445d0(&"LegacyBarrier");
    il2cpp_runtime_helper_023445d0(&"barriereditormat");
    il2cpp_runtime_helper_023445d0(&"Racing Checkpoint Region ");
    il2cpp_runtime_helper_023445d0(&"Unhandled legacy texture: ");
    il2cpp_runtime_helper_023445d0(&"base");
    il2cpp_runtime_helper_023445d0(&"\r\n");
    il2cpp_runtime_helper_023445d0(&"aot_supply");
    il2cpp_runtime_helper_023445d0(&"disablebounds");
    il2cpp_runtime_helper_023445d0(&"cannonregionmat");
    il2cpp_runtime_helper_023445d0(&"Reflective");
    il2cpp_runtime_helper_023445d0(&"playerc");
    il2cpp_runtime_helper_023445d0(&"levelbottom");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Racing Start Barrier ");
    il2cpp_runtime_helper_023445d0(&"Human SpawnPoint");
    il2cpp_runtime_helper_023445d0(&"cannonground");
    il2cpp_runtime_helper_023445d0(&"Cannon3");
    il2cpp_runtime_helper_023445d0(&"grass");
    il2cpp_runtime_helper_023445d0(&"LevelBottom");
    il2cpp_runtime_helper_023445d0(&"misc");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"barrier");
    il2cpp_runtime_helper_023445d0(&"titan");
    il2cpp_runtime_helper_023445d0(&"ice1");
    il2cpp_runtime_helper_023445d0(&"transparent");
    il2cpp_runtime_helper_023445d0(&"Racing Start Barrier Cuboid");
    il2cpp_runtime_helper_023445d0(&"region");
    il2cpp_runtime_helper_023445d0(&"spawnpoint");
    il2cpp_runtime_helper_023445d0(&"racing");
    il2cpp_runtime_helper_023445d0(&"Geometry/Cuboid");
    il2cpp_runtime_helper_023445d0(&"Human SpawnPoint (red)");
    il2cpp_runtime_helper_023445d0(&"photon");
    il2cpp_runtime_helper_023445d0(&"Human SpawnPoint (blue)");
    il2cpp_runtime_helper_023445d0(&"barrierEditor");
    il2cpp_runtime_helper_023445d0(&"Basic");
    il2cpp_runtime_helper_023445d0(&"end");
    il2cpp_runtime_helper_023445d0(&"cannonballtrail");
    il2cpp_runtime_helper_023445d0(&"spawn");
    il2cpp_runtime_helper_023445d0(&"Supply1");
    il2cpp_runtime_helper_023445d0(&"Kill Region ");
    il2cpp_runtime_helper_023445d0(&"Unnamed");
    il2cpp_runtime_helper_023445d0(&"\\s+");
    il2cpp_runtime_helper_023445d0(&"playerm");
    il2cpp_runtime_helper_023445d0(&"kill");
    il2cpp_runtime_helper_023445d0(&"Titan SpawnPoint");
    il2cpp_runtime_helper_023445d0(&"Racing Finish Region ");
    il2cpp_runtime_helper_023445d0(&"bombtex");
    il2cpp_runtime_helper_023445d0(&"player");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"\r");
    il2cpp_runtime_helper_023445d0(&"checkpoint");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"empty");
    il2cpp_runtime_helper_023445d0(&"Transparent");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057ac493 = '\x01';
  }
  fStack_ec = 0.0;
  **(undefined4 **)(TypeInfo_MapConverter + 0xb8) = 0;
  pSVar18 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
  plVar23 = (long *)pSVar18;
  Map_MapScript___ctor((Map_MapScript_o *)pSVar18,(MethodInfo *)0x0);
  if ((pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
     (pIVar17 = pSVar18->m_Items[0].fields.value, pIVar17 == (Il2CppObject *)0x0)) goto label_040a47b7;
  pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pIVar17[1].klass;
  pMVar16 = Map_MapConverter__CreateForestFloor((MethodInfo *)plVar23);
  lVar14 = MethodInfo_Void_Add;
  if (pSVar19 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
  piVar2 = (int *)((long)&pSVar19->max_length + 4);
  *piVar2 = *piVar2 + 1;
  pIVar6 = pSVar19->bounds;
  if (pIVar6 == (Il2CppArrayBounds *)0x0) goto label_040a47b7;
  uVar33 = *(uint *)&pSVar19->max_length;
  if (uVar33 < (uint)pIVar6[1].lower_bound) {
    *(uint *)&pSVar19->max_length = uVar33 + 1;
    pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              (&pIVar6[2].length + (int)uVar33);
    (&pIVar6[2].length)[(int)uVar33] = (il2cpp_array_size_t)pMVar16;
    il2cpp_runtime_helper_022b4080();
    pIVar17 = pSVar18->m_Items[0].fields.value;
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar19,(Il2CppObject *)pMVar16,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    pIVar17 = pSVar18->m_Items[0].fields.value;
  }
  plVar23 = (long *)pSVar19;
  if (pIVar17 == (Il2CppObject *)0x0) goto label_040a47b7;
  pIVar7 = pIVar17[1].klass;
  pMVar16 = Map_MapConverter__CreateLight((MethodInfo *)pSVar19);
  lVar14 = MethodInfo_Void_Add;
  plVar23 = (long *)pSVar19;
  if (pIVar7 == (Il2CppClass *)0x0) goto label_040a47b7;
  puVar13 = (undefined1 *)((long)&(pIVar7->_1).namespaze + 4);
  *(int *)puVar13 = *(int *)puVar13 + 1;
  pcVar8 = (pIVar7->_1).name;
  if (pcVar8 == (char *)0x0) goto label_040a47b7;
  uVar33 = *(uint *)&(pIVar7->_1).namespaze;
  if (uVar33 < *(uint *)(pcVar8 + 0x18)) {
    *(uint *)&(pIVar7->_1).namespaze = uVar33 + 1;
    *(Map_MapScriptSceneObject_o **)(pcVar8 + (long)(int)uVar33 * 8 + 0x20) = pMVar16;
    il2cpp_runtime_helper_022b4080(pcVar8 + (long)(int)uVar33 * 8 + 0x20,pMVar16);
    iVar26 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pIVar7,(Il2CppObject *)pMVar16,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    iVar26 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  if (iVar26 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            System_Text_RegularExpressions_Regex__Replace
                      ((System_String_o *)pSVar20,"\\s+",(System_String_o *)"",
                       (MethodInfo *)0x0);
  plVar23 = (long *)pSVar20;
  if (((pSVar19 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
      (pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                 System_String__Replace_3af9030
                           ((System_String_o *)pSVar19,"\r\n",(System_String_o *)"",
                            (MethodInfo *)0x0), plVar23 = (long *)pSVar19,
      pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) ||
     (pSVar21 = System_String__Replace_3af9030
                          ((System_String_o *)pSVar20,"\n",(System_String_o *)"",
                           (MethodInfo *)0x0), plVar23 = (long *)pSVar20, pSVar21 == (System_String_o *)0x0))
  goto label_040a47b7;
  pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            System_String__Replace_3af9030
                      (pSVar21,"\r",(System_String_o *)"",(MethodInfo *)0x0);
  plVar23 = (long *)TypeInfo_char;
  separator = (System_Char_array *)il2cpp_runtime_helper_022b2a40();
  if (separator == (System_Char_array *)0x0) goto label_040a47b7;
  if ((int)separator->max_length == 0) {
label_040a4765:
    il2cpp_runtime_helper_022b2ca0();
    pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23;
label_040a476a:
    uVar27 = 0;
label_040a476c:
    pSVar18 = pSStack_d8;
    if ((uVar27 & 1) != 0) {
      return (Map_MapScriptSceneObject_o *)pSStack_d8;
    }
    pIVar17 = pSStack_d8->m_Items[0].fields.value;
    plVar23 = (long *)pSVar20;
    if (pIVar17 != (Il2CppObject *)0x0) {
      pIVar7 = pIVar17[1].klass;
      collection = Map_MapConverter__CreateFengBounds((MethodInfo *)pSVar20);
      plVar23 = (long *)pSVar20;
      if (pIVar7 != (Il2CppClass *)0x0) {
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pIVar7,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
        return (Map_MapScriptSceneObject_o *)pSVar18;
      }
    }
label_040a47b7:
    uStack_130 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23;
    il2cpp_runtime_helper_022b2c90();
label_040a47bc:
    il2cpp_runtime_helper_022b2fd0();
    System_Object___ctor(&uStack_130->obj,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  separator->m_Items[0] = 0x3b;
  if ((pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
     (pSVar22 = System_String__Split_3af9a70((System_String_o *)pSVar20,separator,(MethodInfo *)0x0),
     plVar23 = (long *)pSVar20, pSVar22 == (System_String_array *)0x0)) goto label_040a47b7;
  iVar26 = (int)pSVar22->max_length;
  uVar33 = 0;
  pSStack_d8 = pSVar18;
  if (iVar26 < 1) goto label_040a476a;
  uVar28 = 0;
  pSStack_c0 = pSVar22;
  if (iVar26 == 0) goto label_040a4765;
label_040a2257:
  pSVar18 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            pSStack_c0->m_Items[(int)uVar33];
  plVar23 = (long *)pSVar20;
  if (((pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
      (plVar23 = (long *)pSVar18,
      pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Trim((System_String_o *)pSVar18,(MethodInfo *)0x0),
      pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) ||
     (pSVar22 = System_String__Split((System_String_o *)pSVar20,0x2c,0,(MethodInfo *)0x0),
     plVar23 = (long *)pSVar20, pSVar22 == (System_String_array *)0x0)) goto label_040a47b7;
  uVar27 = uVar28;
  if (pSVar22->max_length == 0) goto label_040a2233;
  if ((int)pSVar22->max_length == 0) goto label_040a4765;
  pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[0];
  plVar23 = (long *)pSVar20;
  if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
  bVar15 = System_String__StartsWith((System_String_o *)pSVar20,_DAT_055be878,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') goto label_040a2233;
  pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            System_String__Trim((System_String_o *)pSVar18,(MethodInfo *)0x0);
  bVar15 = System_String__op_Equality
                     ((System_String_o *)pSVar20,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') goto label_040a2233;
  piVar32 = &pSVar22->max_length;
  pSStack_e0 = pSVar18;
  pSVar18 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  plVar23 = (long *)pSVar18;
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)pSVar18,(MethodInfo *)0x0);
  if ((int)*piVar32 == 0) goto label_040a4765;
  plVar23 = (long *)pSVar22->m_Items[0];
  if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
      (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
  bVar15 = System_String__StartsWith((System_String_o *)plVar23,"custom",(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    if ((int)*piVar32 == 0) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    bVar15 = System_String__StartsWith((System_String_o *)plVar23,"spawnpoint",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      if ((uint)*piVar32 < 2) goto label_040a4765;
      plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
      plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
      bVar15 = System_String__op_Equality((System_String_o *)plVar23,"titan",(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        if ((uint)*piVar32 < 2) goto label_040a4765;
        plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
        plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
        bVar15 = System_String__op_Equality((System_String_o *)plVar23,"player",(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            ppIVar24 = (Il2CppObject **)&"Human SpawnPoint";
            goto label_040a3542;
          }
          goto label_040a47b7;
        }
        if ((uint)*piVar32 < 2) goto label_040a4765;
        plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
        plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
        bVar15 = System_String__op_Equality((System_String_o *)plVar23,"playerc",(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            ppIVar24 = (Il2CppObject **)&"Human SpawnPoint (blue)";
            goto label_040a3542;
          }
          goto label_040a47b7;
        }
        if ((uint)*piVar32 < 2) goto label_040a4765;
        plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
        plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
        bVar15 = System_String__op_Equality((System_String_o *)plVar23,"playerm",(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            ppIVar24 = (Il2CppObject **)&"Human SpawnPoint (red)";
            goto label_040a3542;
          }
          goto label_040a47b7;
        }
      }
      else {
        if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
        if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
            (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
        ppIVar24 = &"Titan SpawnPoint";
label_040a3542:
        pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,*ppIVar24,
                             MethodInfo_MapScriptBaseObject_get_Item);
        if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
        plVar23 = (long *)pSVar18;
        (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
      }
      if (2 < (uint)*piVar32) {
        plVar23 = (long *)pSVar22->m_Items[2];
        uStack_130._0_4_ = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
        if (3 < (uint)pSVar22->max_length) {
          plVar23 = (long *)pSVar22->m_Items[3];
          uStack_130._4_4_ = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
          if (4 < (uint)pSVar22->max_length) {
            plVar23 = (long *)pSVar22->m_Items[4];
            fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if (pSVar18 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
label_040a35d5:
              position_03.fields.y = uStack_130._4_4_;
              position_03.fields.x = (float)uStack_130;
              position_03.fields.z = fVar34;
              Map_MapScriptBaseObject__SetPosition
                        ((Map_MapScriptBaseObject_o *)pSVar18,position_03,(MethodInfo *)0x0);
              goto label_040a35df;
            }
            goto label_040a47b7;
          }
        }
      }
      goto label_040a4765;
    }
    if ((uint)*piVar32 == 0) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    bVar15 = System_String__StartsWith((System_String_o *)plVar23,"misc",(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      if ((uint)*piVar32 == 0) goto label_040a4765;
      plVar23 = (long *)pSVar22->m_Items[0];
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
      bVar15 = System_String__StartsWith((System_String_o *)plVar23,"base",(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        if (1 < (uint)*piVar32) {
          plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
          if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
          plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
          bVar15 = System_String__op_Equality((System_String_o *)plVar23,"aot_supply",(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            if ((uint)*piVar32 < 2) goto label_040a4765;
            plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
            if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
            plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
            bVar15 = System_String__op_Equality((System_String_o *)plVar23,"levelbottom",(MethodInfo *)0x0);
            if ((char)bVar15 != '\0') {
              if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
              if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
                  (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                puVar25 = &"LevelBottom";
                goto label_040a3319;
              }
              goto label_040a47b7;
            }
          }
          else {
            if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
            if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
                (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
            puVar25 = &"Supply1";
label_040a3319:
            pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,
                                 (Il2CppObject *)*puVar25,MethodInfo_MapScriptBaseObject_get_Item);
            if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
            plVar23 = (long *)pSVar18;
            (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
          }
          if ((int)(uint)*piVar32 < 0xf) {
            if ((uint)*piVar32 < 3) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[2];
            position_04.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 4) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[3];
            fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 5) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[4];
            fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            position_04.fields.y = fVar34;
            position_04.fields.z = fVar35;
            plVar23 = (long *)pSVar18;
            Map_MapScriptBaseObject__SetPosition
                      ((Map_MapScriptBaseObject_o *)pSVar18,position_04,(MethodInfo *)0x0);
            if ((uint)*piVar32 < 6) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[5];
            UVar44.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 7) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[6];
            fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 8) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[7];
            fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 9) goto label_040a4765;
            fVar36 = System_Single__Parse(pSVar22->m_Items[8],(MethodInfo *)0x0);
            UVar44.fields.y = fVar34;
            UVar44.fields.w = fVar36;
            UVar44.fields.z = fVar35;
            plVar23 = (long *)pSVar18;
            Map_MapScriptBaseObject__SetRotation_3fb4ce0
                      ((Map_MapScriptBaseObject_o *)pSVar18,UVar44,(MethodInfo *)0x0);
            uVar4 = (uint)*piVar32;
          }
          else {
            plVar23 = (long *)pSVar22->m_Items[0xc];
            position_02.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 0xe) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[0xd];
            fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 0xf) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[0xe];
            fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            position_02.fields.y = fVar34;
            position_02.fields.z = fVar35;
            plVar23 = (long *)pSVar18;
            Map_MapScriptBaseObject__SetPosition
                      ((Map_MapScriptBaseObject_o *)pSVar18,position_02,(MethodInfo *)0x0);
            if ((uint)*piVar32 < 0x10) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[0xf];
            rotation_02.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 0x11) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[0x10];
            fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 0x12) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[0x11];
            fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 0x13) goto label_040a4765;
            fVar36 = System_Single__Parse(pSVar22->m_Items[0x12],(MethodInfo *)0x0);
            rotation_02.fields.y = fVar34;
            rotation_02.fields.w = fVar36;
            rotation_02.fields.z = fVar35;
            plVar23 = (long *)pSVar18;
            Map_MapScriptBaseObject__SetRotation_3fb4ce0
                      ((Map_MapScriptBaseObject_o *)pSVar18,rotation_02,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 4) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[3];
            scale_02.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 5) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[4];
            fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 6) goto label_040a4765;
            fVar35 = System_Single__Parse(pSVar22->m_Items[5],(MethodInfo *)0x0);
            scale_02.fields.y = fVar34;
            scale_02.fields.z = fVar35;
            plVar23 = (long *)pSVar18;
            Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)pSVar18,scale_02,(MethodInfo *)0x0)
            ;
            uVar4 = (uint)*piVar32;
          }
          if (1 < uVar4) {
            plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
            if (pSVar22->m_Items[1] != (System_String_o *)0x0) {
              pSVar21 = System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
              bVar15 = System_String__op_Equality(pSVar21,"aot_supply",(MethodInfo *)0x0);
              if ((char)bVar15 == '\0') goto label_040a35df;
              UVar42 = Map_MapScriptBaseObject__GetPosition
                                 ((Map_MapScriptBaseObject_o *)pSVar18,(MethodInfo *)0x0);
              UVar43 = Map_MapScriptBaseObject__GetRotation
                                 ((Map_MapScriptBaseObject_o *)pSVar18,(MethodInfo *)0x0);
              euler.fields.x = UVar43.fields.x * 0.017453292;
              euler.fields.y = UVar43.fields.y * 0.017453292;
              euler.fields.z = UVar43.fields.z * 0.017453292;
              UVar44 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
              if (g_data_057ac4bc == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057ac4bc = '\x01';
              }
              UVar43 = UnityEngine_Quaternion__op_Multiply_4debdf0
                                 (UVar44,*(UnityEngine_Vector3_Fields *)
                                          (*(long *)(TypeInfo_Vector3 + 0xb8) + 0x54),(MethodInfo *)0x0);
              uStack_130._0_4_ = UVar42.fields.x;
              uStack_130._4_4_ = UVar42.fields.y;
              uStack_130._0_4_ = UVar43.fields.x * 0.37 + (float)uStack_130;
              uStack_130._4_4_ = UVar43.fields.y * 0.37 + uStack_130._4_4_;
              fVar34 = UVar43.fields.z * 0.37 + UVar42.fields.z;
              goto label_040a35d5;
            }
            goto label_040a47b7;
          }
        }
        goto label_040a4765;
      }
      if ((uint)*piVar32 == 0) goto label_040a4765;
      plVar23 = (long *)pSVar22->m_Items[0];
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
      bVar15 = System_String__StartsWith((System_String_o *)plVar23,"photon",(MethodInfo *)0x0);
      uVar4 = (uint)*piVar32;
      uVar27 = (ulong)uVar4;
      if ((char)bVar15 != '\0') {
        if (1 < uVar4) {
          plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
          if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
          plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
          bVar15 = System_String__op_Equality((System_String_o *)plVar23,"cannonground",(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            if (1 < (uint)*piVar32) {
              plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
              if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
              plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
              bVar15 = System_String__op_Equality((System_String_o *)plVar23,"cannonwall",(MethodInfo *)0x0);
              if ((char)bVar15 != '\0') goto label_040a2fc7;
              if (1 < (uint)*piVar32) {
                plVar23 = (long *)pSVar22->m_Items[1];
                if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
                     (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
                   (pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              System_String__ToLower((System_String_o *)plVar23,(MethodInfo *)0x0),
                   pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
                goto label_040a47b7;
                bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"spawn",(MethodInfo *)0x0);
                if ((char)bVar15 == '\0') goto label_040a43f7;
                if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
                if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
                     (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
                   (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,
                                         "Titan SpawnPoint",MethodInfo_MapScriptBaseObject_get_Item),
                   pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
                goto label_040a47b7;
                pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
                plVar23 = (long *)pSVar18;
                (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
                if (4 < (uint)*piVar32) {
                  plVar23 = (long *)pSVar22->m_Items[4];
                  position_07.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                  if (5 < (uint)pSVar22->max_length) {
                    plVar23 = (long *)pSVar22->m_Items[5];
                    fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                    if (6 < (uint)pSVar22->max_length) {
                      fVar35 = System_Single__Parse(pSVar22->m_Items[6],(MethodInfo *)0x0);
                      position_07.fields.y = fVar34;
                      position_07.fields.z = fVar35;
                      plVar23 = (long *)pSVar18;
                      Map_MapScriptBaseObject__SetPosition
                                ((Map_MapScriptBaseObject_o *)pSVar18,position_07,(MethodInfo *)0x0);
                      if (7 < (uint)pSVar22->max_length) {
                        plVar23 = (long *)pSVar22->m_Items[7];
                        fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                        if (8 < (uint)pSVar22->max_length) {
                          plVar23 = (long *)pSVar22->m_Items[8];
                          fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                          if (9 < (uint)pSVar22->max_length) {
                            plVar23 = (long *)pSVar22->m_Items[9];
                            fVar36 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                            if (10 < (uint)pSVar22->max_length) {
                              pSVar21 = pSVar22->m_Items[10];
label_040a3f77:
                              fVar38 = System_Single__Parse(pSVar21,(MethodInfo *)0x0);
                              rotation_04.fields.y = fVar35;
                              rotation_04.fields.x = fVar34;
                              rotation_04.fields.w = fVar38;
                              rotation_04.fields.z = fVar36;
                              Map_MapScriptBaseObject__SetRotation_3fb4ce0
                                        ((Map_MapScriptBaseObject_o *)pSVar18,rotation_04,(MethodInfo *)0x0);
                              goto label_040a35df;
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
          else {
label_040a2fc7:
            if (1 < (uint)*piVar32) {
              plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
              if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
              pSVar21 = System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
              bVar15 = System_String__op_Equality(pSVar21,"cannonground",(MethodInfo *)0x0);
              if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
              if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
                  (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
              if ((char)bVar15 == '\0') {
                puVar25 = &"Cannon3";
              }
              else {
                puVar25 = &"Cannon2";
              }
              pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,
                                   (Il2CppObject *)*puVar25,MethodInfo_MapScriptBaseObject_get_Item);
              if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
              goto label_040a47b7;
              pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
              plVar23 = (long *)pSVar18;
              (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
              if ((int)(uint)*piVar32 < 0xf) {
                if (2 < (uint)*piVar32) {
                  plVar23 = (long *)pSVar22->m_Items[2];
                  position_06.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                  if (3 < (uint)pSVar22->max_length) {
                    plVar23 = (long *)pSVar22->m_Items[3];
                    fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                    if (4 < (uint)pSVar22->max_length) {
                      fVar35 = System_Single__Parse(pSVar22->m_Items[4],(MethodInfo *)0x0);
                      position_06.fields.y = fVar34;
                      position_06.fields.z = fVar35;
                      plVar23 = (long *)pSVar18;
                      Map_MapScriptBaseObject__SetPosition
                                ((Map_MapScriptBaseObject_o *)pSVar18,position_06,(MethodInfo *)0x0);
                      if (5 < (uint)pSVar22->max_length) {
                        plVar23 = (long *)pSVar22->m_Items[5];
                        fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                        if (6 < (uint)pSVar22->max_length) {
                          plVar23 = (long *)pSVar22->m_Items[6];
                          fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                          if (7 < (uint)pSVar22->max_length) {
                            plVar23 = (long *)pSVar22->m_Items[7];
                            fVar36 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                            if (8 < (uint)pSVar22->max_length) {
                              pSVar21 = pSVar22->m_Items[8];
                              goto label_040a3f77;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                plVar23 = (long *)pSVar22->m_Items[0xc];
                position_05.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                if (0xd < (uint)pSVar22->max_length) {
                  plVar23 = (long *)pSVar22->m_Items[0xd];
                  fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                  if (0xe < (uint)pSVar22->max_length) {
                    fVar35 = System_Single__Parse(pSVar22->m_Items[0xe],(MethodInfo *)0x0);
                    position_05.fields.y = fVar34;
                    position_05.fields.z = fVar35;
                    plVar23 = (long *)pSVar18;
                    Map_MapScriptBaseObject__SetPosition
                              ((Map_MapScriptBaseObject_o *)pSVar18,position_05,(MethodInfo *)0x0);
                    if (0xf < (uint)pSVar22->max_length) {
                      plVar23 = (long *)pSVar22->m_Items[0xf];
                      rotation_03.fields.x =
                           System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                      if (0x10 < (uint)pSVar22->max_length) {
                        plVar23 = (long *)pSVar22->m_Items[0x10];
                        fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                        if (0x11 < (uint)pSVar22->max_length) {
                          plVar23 = (long *)pSVar22->m_Items[0x11];
                          fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                          if (0x12 < (uint)pSVar22->max_length) {
                            fVar36 = System_Single__Parse(pSVar22->m_Items[0x12],(MethodInfo *)0x0);
                            rotation_03.fields.y = fVar34;
                            rotation_03.fields.w = fVar36;
                            rotation_03.fields.z = fVar35;
                            plVar23 = (long *)pSVar18;
                            Map_MapScriptBaseObject__SetRotation_3fb4ce0
                                      ((Map_MapScriptBaseObject_o *)pSVar18,rotation_03,(MethodInfo *)0x0);
                            if (3 < (uint)pSVar22->max_length) {
                              plVar23 = (long *)pSVar22->m_Items[3];
                              fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                              if (4 < (uint)pSVar22->max_length) {
                                plVar23 = (long *)pSVar22->m_Items[4];
                                fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                                if (5 < (uint)pSVar22->max_length) {
                                  pSVar21 = pSVar22->m_Items[5];
                                  goto label_040a2e77;
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
        goto label_040a4765;
      }
      if (uVar4 == 0) goto label_040a4765;
      plVar23 = (long *)pSVar22->m_Items[0];
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
      bVar15 = System_String__StartsWith((System_String_o *)plVar23,"racing",(MethodInfo *)0x0);
      pSVar19 = "";
      if ((char)bVar15 == '\0') {
        if ((int)*piVar32 == 0) goto label_040a4765;
        pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[0];
        plVar23 = (long *)pSVar20;
        if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"map",(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          plVar23 = (long *)pSVar20;
          if ((uint)*piVar32 < 2) goto label_040a4765;
          pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
          plVar23 = (long *)pSVar20;
          if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"disablebounds",(MethodInfo *)0x0);
          uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
          if ((char)bVar15 != '\0') goto label_040a2233;
        }
      }
      else {
        if ((uint)*piVar32 < 2) goto label_040a4765;
        plVar23 = (long *)pSVar22->m_Items[1];
        if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
            (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
        bVar15 = System_String__StartsWith((System_String_o *)plVar23,"start",(MethodInfo *)0x0);
        if ((uint)*piVar32 < 2) goto label_040a4765;
        pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
        plVar23 = (long *)pSVar20;
        if ((char)bVar15 == '\0') {
          if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"end",(MethodInfo *)0x0);
          plVar23 = (long *)pSVar20;
          if ((uint)*piVar32 < 2) goto label_040a4765;
          pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
          plVar23 = (long *)pSVar20;
          if ((char)bVar15 != '\0') {
            if ("end" != (System_String_o *)0x0) {
              puVar25 = (undefined8 *)&"Racing Finish Region ";
              pSVar21 = "end";
joined_r0x040a3ff1:
              if (pSVar20 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
              goto label_040a42da;
            }
            goto label_040a47b7;
          }
          if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"kill",(MethodInfo *)0x0);
          plVar23 = (long *)pSVar20;
          if ((uint)*piVar32 < 2) goto label_040a4765;
          pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
          plVar23 = (long *)pSVar20;
          if ((char)bVar15 != '\0') {
            if ("kill" != (System_String_o *)0x0) {
              puVar25 = (undefined8 *)&"Kill Region ";
              pSVar21 = "kill";
              goto joined_r0x040a3ff1;
            }
            goto label_040a47b7;
          }
          if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"checkpoint",(MethodInfo *)0x0);
          if ((char)bVar15 != '\0') {
            plVar23 = (long *)pSVar20;
            if (1 < (uint)*piVar32) {
              if ("checkpoint" != (System_String_o *)0x0) {
                pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                          pSVar22->m_Items[1];
                puVar25 = (undefined8 *)&"Racing Checkpoint Region ";
                plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                pSVar21 = "checkpoint";
                goto joined_r0x040a3ff1;
              }
              goto label_040a47b7;
            }
            goto label_040a4765;
          }
        }
        else {
          if (("start" == (System_String_o *)0x0) ||
             (puVar25 = &"Racing Start Barrier ", pSVar21 = "start",
             pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
          goto label_040a47b7;
label_040a42da:
          pSVar21 = System_String__Substring
                              ((System_String_o *)pSVar20,(pSVar21->fields)._stringLength,(MethodInfo *)0x0);
          pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)*puVar25;
          pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    System_String__Concat_3ae5ba0((System_String_o *)pSVar20,pSVar21,(MethodInfo *)0x0);
        }
        plVar23 = (long *)pSVar20;
        if (pSVar19 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        if (0 < *(int *)&pSVar19->bounds) {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar20 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
          plVar23 = (long *)pSVar19;
          pSVar21 = System_String__ToLower((System_String_o *)pSVar19,(MethodInfo *)0x0);
          if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             ((System_Collections_Generic_Dictionary_object__object__o *)pSVar20,
                              (Il2CppObject *)pSVar21,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar15 != '\0') {
            if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar20 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
            pSVar21 = System_String__ToLower((System_String_o *)pSVar19,(MethodInfo *)0x0);
            plVar23 = (long *)pSVar19;
            if ((pSVar20 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
               (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar20,
                                     (Il2CppObject *)pSVar21,MethodInfo_MapScriptBaseObject_get_Item), plVar23 = (long *)pSVar20,
               pSVar18 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
              pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
              plVar23 = (long *)pSVar18;
              (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
              uVar4 = (uint)*piVar32;
              goto joined_r0x040a2d53;
            }
            goto label_040a47b7;
          }
        }
      }
label_040a43f7:
      plVar23 = (long *)pSVar20;
      if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      goto label_040a35df;
    }
    if ((uint)*piVar32 < 2) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[1];
    bVar15 = System_String__op_Equality((System_String_o *)plVar23,"barrier",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        ppIVar24 = &"LegacyBarrier";
        goto label_040a291b;
      }
      goto label_040a47b7;
    }
    if ((uint)*piVar32 < 2) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[1];
    bVar15 = System_String__op_Equality((System_String_o *)plVar23,"barrierEditor",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      uStack_e8 = uVar28;
      if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      pSVar18->max_length = (il2cpp_array_size_t)"Geometry/Cuboid";
      il2cpp_runtime_helper_022b4080(&pSVar18->max_length);
      pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
      plVar23 = (long *)pSVar20;
      Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)pSVar20,(MethodInfo *)0x0);
      if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      pSVar20->bounds = (Il2CppArrayBounds *)"Transparent";
      il2cpp_runtime_helper_022b4080(&pSVar20->bounds);
      __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      color_00.fields.b = 1.0;
      color_00.fields.a = 0.32;
      color_00.fields.r = 0.0;
      color_00.fields.g = 0.917;
      Utility_Color255___ctor_4388bb0(__this_00,color_00,(MethodInfo *)0x0);
      pSVar20->max_length = (il2cpp_array_size_t)__this_00;
      il2cpp_runtime_helper_022b4080(&pSVar20->max_length,__this_00);
      plVar23 = (long *)&pSVar18->m_Items[3].fields.value;
      pSVar18->m_Items[3].fields.value = (Il2CppObject *)pSVar20;
      il2cpp_runtime_helper_022b4080();
      uVar4 = (uint)*piVar32;
      uVar28 = uStack_e8;
joined_r0x040a2d53:
      if (5 < uVar4) {
        plVar23 = (long *)pSVar22->m_Items[5];
        position_01.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
        if (6 < (uint)pSVar22->max_length) {
          plVar23 = (long *)pSVar22->m_Items[6];
          fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
          if (7 < (uint)pSVar22->max_length) {
            fVar35 = System_Single__Parse(pSVar22->m_Items[7],(MethodInfo *)0x0);
            position_01.fields.y = fVar34;
            position_01.fields.z = fVar35;
            plVar23 = (long *)pSVar18;
            Map_MapScriptBaseObject__SetPosition
                      ((Map_MapScriptBaseObject_o *)pSVar18,position_01,(MethodInfo *)0x0);
            if (8 < (uint)pSVar22->max_length) {
              plVar23 = (long *)pSVar22->m_Items[8];
              rotation_01.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
              if (9 < (uint)pSVar22->max_length) {
                plVar23 = (long *)pSVar22->m_Items[9];
                fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                if (10 < (uint)pSVar22->max_length) {
                  plVar23 = (long *)pSVar22->m_Items[10];
                  fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                  if (0xb < (uint)pSVar22->max_length) {
                    fVar36 = System_Single__Parse(pSVar22->m_Items[0xb],(MethodInfo *)0x0);
                    rotation_01.fields.y = fVar34;
                    rotation_01.fields.w = fVar36;
                    rotation_01.fields.z = fVar35;
                    plVar23 = (long *)pSVar18;
                    Map_MapScriptBaseObject__SetRotation_3fb4ce0
                              ((Map_MapScriptBaseObject_o *)pSVar18,rotation_01,(MethodInfo *)0x0);
                    if (2 < (uint)pSVar22->max_length) {
                      plVar23 = (long *)pSVar22->m_Items[2];
                      fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                      if (3 < (uint)pSVar22->max_length) {
                        plVar23 = (long *)pSVar22->m_Items[3];
                        fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                        if (4 < (uint)pSVar22->max_length) {
                          pSVar21 = pSVar22->m_Items[4];
label_040a2e77:
                          fVar36 = System_Single__Parse(pSVar21,(MethodInfo *)0x0);
                          scale_01.fields.y = fVar35;
                          scale_01.fields.x = fVar34;
                          scale_01.fields.z = fVar36;
                          Map_MapScriptBaseObject__SetScale
                                    ((Map_MapScriptBaseObject_o *)pSVar18,scale_01,(MethodInfo *)0x0);
                          goto label_040a35df;
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
      goto label_040a4765;
    }
    if ((uint)*piVar32 < 2) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[1];
    bVar15 = System_String__op_Equality((System_String_o *)plVar23,"racingStart",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        ppIVar24 = (Il2CppObject **)&"Racing Start Barrier Cuboid";
label_040a291b:
        pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,*ppIVar24,
                             MethodInfo_MapScriptBaseObject_get_Item);
        if (pSVar18 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
          plVar23 = (long *)pSVar18;
          (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
          uVar4 = (uint)*piVar32;
          goto joined_r0x040a2d53;
        }
      }
      goto label_040a47b7;
    }
    if ((uint)*piVar32 < 2) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[1];
    bVar15 = System_String__op_Equality((System_String_o *)plVar23,"racingEnd",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        ppIVar24 = (Il2CppObject **)&"Racing Finish Region Cuboid";
        goto label_040a291b;
      }
      goto label_040a47b7;
    }
    if ((uint)*piVar32 < 2) goto label_040a4765;
    pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
    bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"region",(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') goto label_040a43f7;
  }
  else {
    if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar23 = (long *)TypeInfo_BuiltinMapPrefabs;
    if ((uint)*piVar32 < 2) goto label_040a4765;
    pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
    if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    pSVar19 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
    pSVar21 = System_String__ToLower((System_String_o *)pSVar20,(MethodInfo *)0x0);
    plVar23 = (long *)pSVar20;
    if (pSVar19 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pSVar19,
                        (Il2CppObject *)pSVar21,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar15 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar23 = (long *)TypeInfo_BuiltinMapPrefabs;
      if ((uint)*piVar32 < 2) goto label_040a4765;
      pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
      if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      pSVar19 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
      pSVar21 = System_String__ToLower((System_String_o *)pSVar20,(MethodInfo *)0x0);
      plVar23 = (long *)pSVar20;
      if ((pSVar19 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
         (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar19,
                               (Il2CppObject *)pSVar21,MethodInfo_MapScriptBaseObject_get_Item), plVar23 = (long *)pSVar19,
         pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
      goto label_040a47b7;
      pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
      pSVar19 = pSVar18;
      (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
    }
    plVar23 = (long *)pSVar19;
    if ((uint)*piVar32 < 0xd) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0xc];
    position_00.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 0xe) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0xd];
    fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 0xf) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0xe];
    fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    position_00.fields.y = fVar34;
    position_00.fields.z = fVar35;
    plVar23 = (long *)pSVar18;
    Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)pSVar18,position_00,(MethodInfo *)0x0);
    if ((uint)*piVar32 < 0x10) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0xf];
    rotation_00.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 0x11) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0x10];
    fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 0x12) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0x11];
    fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 0x13) goto label_040a4765;
    fVar36 = System_Single__Parse(pSVar22->m_Items[0x12],(MethodInfo *)0x0);
    rotation_00.fields.y = fVar34;
    rotation_00.fields.w = fVar36;
    rotation_00.fields.z = fVar35;
    plVar23 = (long *)pSVar18;
    Map_MapScriptBaseObject__SetRotation_3fb4ce0
              ((Map_MapScriptBaseObject_o *)pSVar18,rotation_00,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 4) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[3];
    scale_00.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 5) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[4];
    fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 6) goto label_040a4765;
    fVar35 = System_Single__Parse(pSVar22->m_Items[5],(MethodInfo *)0x0);
    scale_00.fields.y = fVar34;
    scale_00.fields.z = fVar35;
    plVar23 = (long *)pSVar18;
    Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)pSVar18,scale_00,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 3) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[2];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              System_String__ToLower((System_String_o *)plVar23,(MethodInfo *)0x0);
    uStack_130 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                 pSVar18->m_Items[3].fields.value;
    if ((uStack_130 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
       ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)uStack_130->max_length ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_040a47b7;
    fVar34 = (float)*(int *)((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                    uStack_130->max_length)->max_length + 4) / 255.0;
    plVar23 = (long *)pSVar20;
    bVar15 = System_String__op_Inequality((System_String_o *)pSVar20,"default",(MethodInfo *)0x0);
    uStack_e8 = uVar28;
    if ((char)bVar15 == '\0') {
label_040a26e1:
      uVar4 = (uint)*piVar32;
    }
    else {
      if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"transparent",(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        uStack_130 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                     il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
        plVar23 = (long *)uStack_130;
        Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)uStack_130,(MethodInfo *)0x0);
        if (uStack_130 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_130->bounds)->_buckets =
               "Transparent";
          il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                             &uStack_130->bounds);
          plVar23 = (long *)System_String__Substring((System_String_o *)pSVar20,0xb,(MethodInfo *)0x0);
          bVar15 = System_Single__TryParse((System_String_o *)plVar23,&fStack_ec,(MethodInfo *)0x0);
          if ((char)bVar15 != '\0') {
            fVar34 = fStack_ec;
          }
          goto label_040a26e1;
        }
        goto label_040a47b7;
      }
      bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"empty",(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"ice1",(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
          bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"barriereditormat",(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"regioneditormat",(MethodInfo *)0x0);
            if ((char)bVar15 != '\0') {
              uStack_130 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                           il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
              plVar23 = (long *)uStack_130;
              Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)uStack_130,(MethodInfo *)0x0);
              if (uStack_130 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_130->bounds)->
                _buckets = "Transparent";
                il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                                   &uStack_130->bounds);
                pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
                uVar37 = 0x3f800000;
                uVar39 = 0;
                uVar40 = 0;
                goto label_040a3b60;
              }
              goto label_040a47b7;
            }
            bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"bombexplosiontex",(MethodInfo *)0x0);
            if ((char)bVar15 != '\0') {
              uStack_130 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                           il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
              Map_MapScriptLegacyMaterial___ctor
                        ((Map_MapScriptLegacyMaterial_o *)uStack_130,(MethodInfo *)0x0);
              if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              plVar23 = (long *)TypeInfo_MapObjectShader;
              if (uStack_130 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                pSVar29 = (System_Int32_array *)TypeInfo_MapObjectShader->m_Items[6].fields.key[3].klass;
                goto label_040a40a5;
              }
              goto label_040a47b7;
            }
            bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"cannonregionmat",(MethodInfo *)0x0);
            if ((char)bVar15 == '\0') {
              bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"bombtex",(MethodInfo *)0x0);
              if ((char)bVar15 == '\0') {
                bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"cannonballtrail",(MethodInfo *)0x0)
                ;
                if ((char)bVar15 == '\0') {
                  uStack_130 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                               il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
                  plVar23 = (long *)uStack_130;
                  Map_MapScriptBasicMaterial___ctor
                            ((Map_MapScriptBasicMaterial_o *)uStack_130,(MethodInfo *)0x0);
                  if (uStack_130 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                  goto label_040a47b7;
                  ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_130->bounds)->
                  _buckets = "Basic";
                  il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                                     &uStack_130->bounds);
                  bVar15 = System_String__op_Equality
                                     ((System_String_o *)pSVar20,"bark",(MethodInfo *)0x0);
                  if (((char)bVar15 == '\0') &&
                     (bVar15 = System_String__op_Equality
                                         ((System_String_o *)pSVar20,"grass",(MethodInfo *)0x0),
                     (char)bVar15 == '\0')) {
                    if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) != 0) goto label_040a45cb;
label_040a4594:
                    il2cpp_runtime_helper_02337ed0();
                    pSVar31 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                    if (pSVar31 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0
                      ;
                      goto label_040a47b7;
                    }
                  }
                  else {
                    pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              System_String__Concat_3ae5ba0
                                        ((System_String_o *)pSVar20,"1",(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) goto label_040a4594;
label_040a45cb:
                    pSVar31 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                    plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                    if (pSVar31 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_040a47b7;
                  }
                  bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                     (pSVar31,&pSVar20->obj,MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar15 == '\0') {
                    plVar23 = (long *)System_String__Concat_3ae5ba0
                                                ("Unhandled legacy texture: ",(System_String_o *)pSStack_e0,(MethodInfo *)0x0)
                    ;
                    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Debug__Log((Il2CppObject *)plVar23,(MethodInfo *)0x0);
                    uVar4 = (uint)*piVar32;
                    goto joined_r0x040a475f;
                  }
                  if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  plVar23 = *(long **)(*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                  if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
                       (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
                     (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                          ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,
                                           &pSVar20->obj,MethodInfo_MapScriptBasicMaterial_get_Item), pIVar7 = TypeInfo_MapScriptBasicMaterial,
                     pIVar17 == (Il2CppObject *)0x0)) goto label_040a47b7;
                  pSVar10 = ((Il2CppClass_1 *)&uStack_130->obj)->image;
                  bVar3 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
                  if (((pSVar10->_2).naturalAligment < bVar3) ||
                     ((ppIVar11 = (pSVar10->_2).typeHierarchy, ppIVar11[(ulong)bVar3 - 1] != TypeInfo_MapScriptBasicMaterial ||
                      (*(Il2CppClass **)&uStack_130->m_Items[0].fields = pIVar17[2].klass,
                      ppIVar11[(ulong)bVar3 - 1] != pIVar7)))) goto label_040a47bc;
                  plVar23 = (long *)uStack_130->m_Items;
                  il2cpp_runtime_helper_022b4080();
                  if (10 < (uint)*piVar32) {
                    plVar23 = (long *)pSVar22->m_Items[10];
                    fVar36 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                    if (0xb < (uint)pSVar22->max_length) {
                      fVar35 = System_Single__Parse(pSVar22->m_Items[0xb],(MethodInfo *)0x0);
                      pSVar10 = ((Il2CppClass_1 *)&uStack_130->obj)->image;
                      bVar3 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
                      if ((bVar3 <= (pSVar10->_2).naturalAligment) &&
                         ((pSVar10->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_MapScriptBasicMaterial)) goto label_040a3212;
                      goto label_040a47bc;
                    }
                  }
                  goto label_040a4765;
                }
                uStack_130 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                             il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
                Map_MapScriptLegacyMaterial___ctor
                          ((Map_MapScriptLegacyMaterial_o *)uStack_130,(MethodInfo *)0x0);
                if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar23 = (long *)TypeInfo_MapObjectShader;
                if (uStack_130 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                goto label_040a47b7;
                pSVar29 = TypeInfo_MapObjectShader->m_Items[6].fields.key[4].monitor;
              }
              else {
                uStack_130 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                             il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
                Map_MapScriptLegacyMaterial___ctor
                          ((Map_MapScriptLegacyMaterial_o *)uStack_130,(MethodInfo *)0x0);
                if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar23 = (long *)TypeInfo_MapObjectShader;
                if (uStack_130 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                goto label_040a47b7;
                pSVar29 = (System_Int32_array *)TypeInfo_MapObjectShader->m_Items[6].fields.key[4].klass;
              }
label_040a40a5:
              ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_130->bounds)->_buckets
                   = pSVar29;
              il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                                 &uStack_130->bounds);
              pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              color_02.fields.b = 0.5;
              color_02.fields.a = 0.5;
              color_02.fields.r = 0.5;
              color_02.fields.g = 0.5;
              Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar19,color_02,(MethodInfo *)0x0);
              plVar23 = (long *)&uStack_130->max_length;
              uStack_130->max_length = (il2cpp_array_size_t)pSVar19;
              il2cpp_runtime_helper_022b4080();
              if (10 < (uint)*piVar32) {
                plVar23 = (long *)pSVar22->m_Items[10];
                fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                if (0xb < (uint)pSVar22->max_length) {
                  plVar23 = (long *)pSVar22->m_Items[0xb];
                  fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                  uStack_130->m_Items[0].fields.hashCode = (int32_t)fVar34;
                  uStack_130->m_Items[0].fields.next = (int32_t)fVar35;
                  fVar34 = 0.5;
                  uVar4 = (uint)*piVar32;
                  goto joined_r0x040a475f;
                }
              }
              goto label_040a4765;
            }
            uStack_130 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                         il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
            Map_MapScriptLegacyMaterial___ctor((Map_MapScriptLegacyMaterial_o *)uStack_130,(MethodInfo *)0x0);
            if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            plVar23 = (long *)TypeInfo_MapObjectShader;
            if (uStack_130 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_130->bounds)->_buckets =
                 TypeInfo_MapObjectShader->m_Items[6].fields.key[3].monitor;
            il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                               &uStack_130->bounds);
            pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            color_03.fields.b = 0.0;
            color_03.fields.a = 1.0;
            color_03.fields.r = 0.0;
            color_03.fields.g = 1.0;
            Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar19,color_03,(MethodInfo *)0x0);
            plVar23 = (long *)&uStack_130->max_length;
            uStack_130->max_length = (il2cpp_array_size_t)pSVar19;
            il2cpp_runtime_helper_022b4080();
            fVar34 = 1.0;
          }
          else {
            uStack_130 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                         il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
            plVar23 = (long *)uStack_130;
            Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)uStack_130,(MethodInfo *)0x0);
            if (uStack_130 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_130->bounds)->_buckets =
                 "Transparent";
            il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                               &uStack_130->bounds);
            pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            uVar37 = 0;
            uVar39 = 0x3f6ac083;
            uVar40 = 0x3f800000;
label_040a3b60:
            color_01.fields.g = (float)uVar39;
            color_01.fields.r = (float)uVar37;
            color_01.fields.a = 0.325;
            color_01.fields.b = (float)uVar40;
            Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar19,color_01,(MethodInfo *)0x0);
            plVar23 = (long *)&uStack_130->max_length;
            uStack_130->max_length = (il2cpp_array_size_t)pSVar19;
            il2cpp_runtime_helper_022b4080();
            fVar34 = 0.32;
          }
          uVar4 = (uint)*piVar32;
        }
        else {
          uStack_130 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                       il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptReflectiveMaterial);
          plVar23 = (long *)uStack_130;
          Map_MapScriptReflectiveMaterial___ctor
                    ((Map_MapScriptReflectiveMaterial_o *)uStack_130,(MethodInfo *)0x0);
          if (uStack_130 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_130->bounds)->_buckets =
               "Reflective";
          il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                             &uStack_130->bounds);
          pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          Utility_Color255___ctor((Utility_Color255_o *)pSVar19,0xb2,0xe3,0xff,0xff,(MethodInfo *)0x0);
          uStack_130->max_length = (il2cpp_array_size_t)pSVar19;
          il2cpp_runtime_helper_022b4080(&uStack_130->max_length);
          if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar23 = *(long **)(*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
          if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
               (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
             (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,
                                   (Il2CppObject *)pSVar20,MethodInfo_MapScriptBasicMaterial_get_Item), pIVar7 = TypeInfo_MapScriptBasicMaterial,
             pIVar17 == (Il2CppObject *)0x0)) goto label_040a47b7;
          pSVar10 = ((Il2CppClass_1 *)&uStack_130->obj)->image;
          bVar3 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
          if (((pSVar10->_2).naturalAligment < bVar3) ||
             ((ppIVar11 = (pSVar10->_2).typeHierarchy, ppIVar11[(ulong)bVar3 - 1] != TypeInfo_MapScriptBasicMaterial ||
              (*(Il2CppClass **)&uStack_130->m_Items[0].fields = pIVar17[2].klass,
              ppIVar11[(ulong)bVar3 - 1] != pIVar7)))) goto label_040a47bc;
          plVar23 = (long *)uStack_130->m_Items;
          il2cpp_runtime_helper_022b4080();
          if ((uint)*piVar32 < 0xb) goto label_040a4765;
          plVar23 = (long *)pSVar22->m_Items[10];
          fStack_d0 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
          if ((uint)pSVar22->max_length < 0xc) goto label_040a4765;
          fVar35 = System_Single__Parse(pSVar22->m_Items[0xb],(MethodInfo *)0x0);
          pSVar10 = ((Il2CppClass_1 *)&uStack_130->obj)->image;
          bVar3 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
          if (((pSVar10->_2).naturalAligment < bVar3) ||
             (fVar36 = fStack_d0, (pSVar10->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_MapScriptBasicMaterial))
          goto label_040a47bc;
label_040a3212:
          *(float *)&uStack_130->m_Items[0].fields.key = fVar36;
          *(float *)((long)&uStack_130->m_Items[0].fields.key + 4) = fVar35;
          uVar4 = (uint)*piVar32;
          plVar23 = (long *)uStack_130;
        }
      }
      else {
        uStack_130 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                     il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
        plVar23 = (long *)uStack_130;
        Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)uStack_130,(MethodInfo *)0x0);
        if (uStack_130 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        plVar23 = (long *)&uStack_130->bounds;
        ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_130->bounds)->_buckets =
             "Basic";
        il2cpp_runtime_helper_022b4080();
        uVar4 = (uint)*piVar32;
      }
    }
joined_r0x040a475f:
    if (uVar4 < 2) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[1];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    pSVar21 = System_String__ToLower((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)*piVar32 < 7) goto label_040a4765;
    bVar15 = System_String__op_Inequality(pSVar22->m_Items[6],"0",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      plVar23 = (long *)pSVar20;
      bVar15 = System_String__op_Inequality((System_String_o *)pSVar20,"default",(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        if (pSVar21 == (System_String_o *)0x0) goto label_040a47b7;
        bVar15 = System_String__StartsWith(pSVar21,"start",(MethodInfo *)0x0);
        if (((((char)bVar15 != '\0') ||
             (bVar15 = System_String__StartsWith(pSVar21,"kill",(MethodInfo *)0x0), (char)bVar15 != '\0'
             )) || (bVar15 = System_String__StartsWith(pSVar21,"end",(MethodInfo *)0x0),
                   (char)bVar15 != '\0')) ||
           (bVar15 = System_String__StartsWith(pSVar21,"checkpoint",(MethodInfo *)0x0), (char)bVar15 != '\0'))
        goto label_040a2c3d;
      }
      bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"cannonregionmat",(MethodInfo *)0x0);
      plVar23 = (long *)pSVar20;
      if ((char)bVar15 == '\0') {
        if ((uint)*piVar32 < 8) goto label_040a4765;
        plVar23 = (long *)pSVar22->m_Items[7];
        fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
        if ((uint)pSVar22->max_length < 9) goto label_040a4765;
        plVar23 = (long *)pSVar22->m_Items[8];
        fVar36 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
        if ((uint)pSVar22->max_length < 10) goto label_040a4765;
        fStack_d0 = System_Single__Parse(pSVar22->m_Items[9],(MethodInfo *)0x0);
        pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        fVar38 = fStack_d0;
      }
      else {
        if ((uint)*piVar32 < 9) goto label_040a4765;
        fVar36 = System_Single__Parse(pSVar22->m_Items[8],(MethodInfo *)0x0);
        pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        fVar35 = 0.0;
        fVar38 = 0.0;
      }
      color.fields.g = fVar36;
      color.fields.r = fVar35;
      color.fields.a = fVar34;
      color.fields.b = fVar38;
      plVar23 = (long *)pSVar20;
      Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar20,color,(MethodInfo *)0x0);
      if (uStack_130 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      uStack_130->max_length = (il2cpp_array_size_t)pSVar20;
      il2cpp_runtime_helper_022b4080(&uStack_130->max_length,pSVar20);
    }
label_040a2c3d:
    pSVar18->m_Items[3].fields.value = &uStack_130->obj;
    il2cpp_runtime_helper_022b4080();
    uVar28 = uStack_e8;
label_040a35df:
    plVar23 = (long *)pSVar18->max_length;
    bVar15 = System_String__op_Equality((System_String_o *)plVar23,"None",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      plVar23 = (long *)pSVar18->m_Items[0].fields.value;
      bVar15 = System_String__op_Equality((System_String_o *)plVar23,"Unnamed",(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Concat_3ae5ba0("Unhandled legacy object: ",(System_String_o *)pSStack_e0,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar20,(MethodInfo *)0x0);
        uVar27 = uVar28 & 0xffffffff;
        goto label_040a2233;
      }
    }
    if (g_data_057ac494 == '\0') {
      plVar23 = &TypeInfo_MapConverter;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac494 = '\x01';
    }
    iVar26 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
    **(int **)(TypeInfo_MapConverter + 0xb8) = iVar26;
    pSVar18->m_Items[0].fields.hashCode = iVar26;
    lVar14 = MethodInfo_Void_Add;
    pIVar17 = pSStack_d8->m_Items[0].fields.value;
    if ((pIVar17 == (Il2CppObject *)0x0) ||
       (pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pIVar17[1].klass,
       plVar23 = (long *)pSVar20,
       pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_040a47b7;
    piVar2 = (int *)((long)&pSVar20->max_length + 4);
    *piVar2 = *piVar2 + 1;
    pSVar29 = ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar20->bounds)->_buckets;
    if (pSVar29 == (System_Int32_array *)0x0) goto label_040a47b7;
    uVar4 = *(uint *)&pSVar20->max_length;
    if (uVar4 < (uint)pSVar29->max_length) {
      *(uint *)&pSVar20->max_length = uVar4 + 1;
      pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                (pSVar29->m_Items + (long)(int)uVar4 * 2);
      *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
       (pSVar29->m_Items + (long)(int)uVar4 * 2) = pSVar18;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar20,(Il2CppObject *)pSVar18,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar27 = uVar28 & 0xffffffff;
label_040a2233:
  uVar33 = uVar33 + 1;
  uVar4 = (uint)pSStack_c0->max_length;
  uVar28 = uVar27 & 0xffffffff;
  if ((int)uVar4 <= (int)uVar33) goto label_040a476c;
  plVar23 = (long *)pSVar20;
  if (uVar4 <= uVar33) goto label_040a4765;
  goto label_040a2257;
}


// Map.MapConverter$$CreateFengBounds
// il2cpp: System_Collections_Generic_List_MapScriptBaseObject__o* Map_MapConverter__CreateFengBounds (const MethodInfo* method);
// 0x40a1700

System_Collections_Generic_List_MapScriptBaseObject__o *
Map_MapConverter__CreateFengBounds(MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  Map_MapScriptBaseObject_array *pMVar5;
  Il2CppArrayBounds *pIVar6;
  Il2CppClass *pIVar7;
  char *pcVar8;
  void *pvVar9;
  System_Collections_Generic_Dictionary_object__object__c *pSVar10;
  Il2CppClass **ppIVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long lVar14;
  bool_conflict bVar15;
  MethodInfo *__this;
  Map_MapScriptSceneObject_o *pMVar16;
  Il2CppObject *pIVar17;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar18;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar19;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar20;
  System_String_o *pSVar21;
  System_Char_array *separator;
  System_String_array *pSVar22;
  long *plVar23;
  Il2CppObject **ppIVar24;
  undefined8 *puVar25;
  Utility_Color255_o *__this_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *collection;
  System_Collections_Generic_List_MapScriptBaseObject__o *extraout_RAX;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  System_Int32_array *pSVar29;
  MethodInfo *pMVar30;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  il2cpp_array_size_t *piVar31;
  uint uVar32;
  float fVar33;
  undefined4 uVar36;
  float fVar37;
  float fVar34;
  float fVar35;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  UnityEngine_Vector3_o center;
  UnityEngine_Vector3_o center_00;
  UnityEngine_Vector3_o center_01;
  UnityEngine_Vector3_o center_02;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o scale;
  UnityEngine_Vector3_o rotation;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o scale_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o scale_01;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o scale_02;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o position_04;
  UnityEngine_Vector3_o UVar41;
  UnityEngine_Vector3_o UVar42;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position_05;
  UnityEngine_Vector3_o position_06;
  UnityEngine_Vector3_o position_07;
  UnityEngine_Quaternion_o rotation_00;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Quaternion_o rotation_01;
  UnityEngine_Quaternion_o rotation_02;
  UnityEngine_Quaternion_o UVar43;
  UnityEngine_Color_o color_01;
  UnityEngine_Quaternion_o rotation_03;
  UnityEngine_Quaternion_o rotation_04;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Vector3_o size;
  UnityEngine_Vector3_o size_00;
  UnityEngine_Vector3_o size_01;
  UnityEngine_Vector3_o size_02;
  undefined8 uStack_118;
  float fStack_d4;
  ulong uStack_d0;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_c8;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_c0;
  float fStack_b8;
  System_String_array *pSStack_a8;
  Map_MapScriptSceneObject_o *pMStack_a0;
  
  if (g_data_057ac491 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptBaseObject);
    g_data_057ac491 = '\x01';
  }
  __this = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptBaseObject);
  pMVar30 = __this;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_Map_MapScriptBaseObject);
  uVar36 = (undefined4)g_data_00d19c20;
  uVar38 = g_data_00d19c20._4_4_;
  UVar41.fields.z = 0.01;
  UVar41.fields.x = -700.0;
  UVar41.fields.y = 745.8;
  fVar33 = 0.01;
  fVar35 = 0.0;
  uVar39 = 0;
  uVar40 = 0;
  UVar42.fields.z = 160.0;
  UVar42.fields.x = (float)(int)(long)g_data_00d19c20;
  UVar42.fields.y = (float)(int)((ulong)(long)g_data_00d19c20 >> 0x20);
  fVar34 = 160.0;
  pMVar16 = Map_MapConverter__CreateBound(UVar41,UVar42,(UnityEngine_Vector3_o)ZEXT812(0),pMVar30);
  lVar14 = MethodInfo_Void_Add;
  if (__this != (MethodInfo *)0x0) {
    piVar1 = (int32_t *)((long)&__this->name + 4);
    *piVar1 = *piVar1 + 1;
    pMVar5 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)&__this->invoker_method)->_items;
    if (pMVar5 != (Map_MapScriptBaseObject_array *)0x0) {
      uVar32 = *(uint *)&__this->name;
      if (uVar32 < (uint)pMVar5->max_length) {
        *(uint *)&__this->name = uVar32 + 1;
        pMVar30 = (MethodInfo *)(pMVar5->m_Items + (int)uVar32);
        pMVar5->m_Items[(int)uVar32] = (Map_MapScriptBaseObject_o *)pMVar16;
        il2cpp_runtime_helper_022b4080();
      }
      else {
        pMVar30 = __this;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar16,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      uVar36 = (undefined4)g_data_00d1c560;
      uVar38 = g_data_00d1c560._4_4_;
      center.fields.z = -700.0;
      center.fields.x = 0.0;
      center.fields.y = 745.8;
      fVar33 = -700.0;
      fVar35 = 0.0;
      uVar39 = 0;
      uVar40 = 0;
      size.fields.z = 10.0;
      size.fields.x = (float)(int)(long)g_data_00d1c560;
      size.fields.y = (float)(int)((ulong)(long)g_data_00d1c560 >> 0x20);
      fVar34 = 10.0;
      pMVar16 = Map_MapConverter__CreateBound(center,size,(UnityEngine_Vector3_o)ZEXT812(0),pMVar30);
      lVar14 = MethodInfo_Void_Add;
      piVar1 = (int32_t *)((long)&__this->name + 4);
      *piVar1 = *piVar1 + 1;
      pMVar5 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)&__this->invoker_method)->
               _items;
      if (pMVar5 != (Map_MapScriptBaseObject_array *)0x0) {
        uVar32 = *(uint *)&__this->name;
        if (uVar32 < (uint)pMVar5->max_length) {
          *(uint *)&__this->name = uVar32 + 1;
          pMVar30 = (MethodInfo *)(pMVar5->m_Items + (int)uVar32);
          pMVar5->m_Items[(int)uVar32] = (Map_MapScriptBaseObject_o *)pMVar16;
          il2cpp_runtime_helper_022b4080();
        }
        else {
          pMVar30 = __this;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar16,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        uVar36 = (undefined4)g_data_00d1c560;
        uVar38 = g_data_00d1c560._4_4_;
        center_00.fields.z = 700.0;
        center_00.fields.x = 0.0;
        center_00.fields.y = 745.8;
        fVar33 = 700.0;
        fVar35 = 0.0;
        uVar39 = 0;
        uVar40 = 0;
        size_00.fields.z = 10.0;
        size_00.fields.x = (float)(int)(long)g_data_00d1c560;
        size_00.fields.y = (float)(int)((ulong)(long)g_data_00d1c560 >> 0x20);
        fVar34 = 10.0;
        pMVar16 = Map_MapConverter__CreateBound(center_00,size_00,(UnityEngine_Vector3_o)ZEXT812(0),pMVar30);
        lVar14 = MethodInfo_Void_Add;
        piVar1 = (int32_t *)((long)&__this->name + 4);
        *piVar1 = *piVar1 + 1;
        pMVar5 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)&__this->invoker_method)->
                 _items;
        if (pMVar5 != (Map_MapScriptBaseObject_array *)0x0) {
          uVar32 = *(uint *)&__this->name;
          if (uVar32 < (uint)pMVar5->max_length) {
            *(uint *)&__this->name = uVar32 + 1;
            pMVar30 = (MethodInfo *)(pMVar5->m_Items + (int)uVar32);
            pMVar5->m_Items[(int)uVar32] = (Map_MapScriptBaseObject_o *)pMVar16;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            pMVar30 = __this;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar16,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          uVar36 = (undefined4)g_data_00d19c20;
          uVar38 = g_data_00d19c20._4_4_;
          center_01.fields.z = 0.01;
          center_01.fields.x = 700.0;
          center_01.fields.y = 745.8;
          fVar33 = 0.01;
          fVar35 = 0.0;
          uVar39 = 0;
          uVar40 = 0;
          size_01.fields.z = 160.0;
          size_01.fields.x = (float)(int)(long)g_data_00d19c20;
          size_01.fields.y = (float)(int)((ulong)(long)g_data_00d19c20 >> 0x20);
          fVar34 = 160.0;
          pMVar16 = Map_MapConverter__CreateBound(center_01,size_01,(UnityEngine_Vector3_o)ZEXT812(0),pMVar30)
          ;
          lVar14 = MethodInfo_Void_Add;
          piVar1 = (int32_t *)((long)&__this->name + 4);
          *piVar1 = *piVar1 + 1;
          pMVar5 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)&__this->invoker_method)->
                   _items;
          if (pMVar5 != (Map_MapScriptBaseObject_array *)0x0) {
            uVar32 = *(uint *)&__this->name;
            if (uVar32 < (uint)pMVar5->max_length) {
              *(uint *)&__this->name = uVar32 + 1;
              pMVar30 = (MethodInfo *)(pMVar5->m_Items + (int)uVar32);
              pMVar5->m_Items[(int)uVar32] = (Map_MapScriptBaseObject_o *)pMVar16;
              il2cpp_runtime_helper_022b4080();
            }
            else {
              pMVar30 = __this;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar16,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar36 = (undefined4)g_data_00d1c160;
            uVar38 = g_data_00d1c160._4_4_;
            center_02.fields.z = 17.889;
            center_02.fields.x = -2.23;
            center_02.fields.y = 1253.07;
            fVar33 = 17.889;
            fVar35 = 0.0;
            uVar39 = 0;
            uVar40 = 0;
            size_02.fields.z = 160.0;
            size_02.fields.x = (float)(int)(long)g_data_00d1c160;
            size_02.fields.y = (float)(int)((ulong)(long)g_data_00d1c160 >> 0x20);
            fVar34 = 160.0;
            pMVar16 = Map_MapConverter__CreateBound
                                (center_02,size_02,(UnityEngine_Vector3_o)ZEXT812(0),pMVar30);
            lVar14 = MethodInfo_Void_Add;
            piVar1 = (int32_t *)((long)&__this->name + 4);
            *piVar1 = *piVar1 + 1;
            pMVar5 = ((System_Collections_Generic_List_MapScriptBaseObject__Fields *)&__this->invoker_method)
                     ->_items;
            if (pMVar5 != (Map_MapScriptBaseObject_array *)0x0) {
              uVar32 = *(uint *)&__this->name;
              if (uVar32 < (uint)pMVar5->max_length) {
                *(uint *)&__this->name = uVar32 + 1;
                pMVar5->m_Items[(int)uVar32] = (Map_MapScriptBaseObject_o *)pMVar16;
                il2cpp_runtime_helper_022b4080(pMVar5->m_Items + (int)uVar32,pMVar16);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pMVar16,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              return (System_Collections_Generic_List_MapScriptBaseObject__o *)__this;
            }
          }
        }
      }
    }
  }
  uVar12 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac492 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"LegacyBarrier");
    g_data_057ac492 = '\x01';
  }
  pMVar16 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(pMVar16,(MethodInfo *)0x0);
  if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
  if ((pSVar20 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
     (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pSVar20,"LegacyBarrier",
                           MethodInfo_MapScriptBaseObject_get_Item), pMVar16 != (Map_MapScriptSceneObject_o *)0x0)) {
    (*(pMVar16->klass->vtable)._10_Copy.methodPtr)(pMVar16,pIVar17,(pMVar16->klass->vtable)._10_Copy.method);
    position.fields.z = fVar33;
    position.fields.x = (float)(int)uVar12;
    position.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
    Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)pMVar16,position,(MethodInfo *)0x0);
    scale.fields.y = (float)uVar38;
    scale.fields.x = (float)uVar36;
    scale.fields.z = fVar34;
    Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)pMVar16,scale,(MethodInfo *)0x0);
    rotation.fields.y = (float)uVar40;
    rotation.fields.x = (float)uVar39;
    rotation.fields.z = fVar35;
    Map_MapScriptBaseObject__SetRotation((Map_MapScriptBaseObject_o *)pMVar16,rotation,(MethodInfo *)0x0);
    if (g_data_057ac494 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapConverter);
      g_data_057ac494 = '\x01';
    }
    iVar26 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
    **(int **)(TypeInfo_MapConverter + 0xb8) = iVar26;
    (pMVar16->fields).Id = iVar26;
    return (System_Collections_Generic_List_MapScriptBaseObject__o *)pMVar16;
  }
  il2cpp_runtime_helper_022b2c90();
  pMStack_a0 = pMVar16;
  if (g_data_057ac493 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapConverter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptReflectiveMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"racingEnd");
    il2cpp_runtime_helper_023445d0(&"Racing Finish Region Cuboid");
    il2cpp_runtime_helper_023445d0(&"regioneditormat");
    il2cpp_runtime_helper_023445d0(&"map");
    il2cpp_runtime_helper_023445d0(&"custom");
    il2cpp_runtime_helper_023445d0(&"bombexplosiontex");
    il2cpp_runtime_helper_023445d0(&"racingStart");
    il2cpp_runtime_helper_023445d0(&"Unhandled legacy object: ");
    il2cpp_runtime_helper_023445d0(&"//");
    il2cpp_runtime_helper_023445d0(&"Cannon2");
    il2cpp_runtime_helper_023445d0(&"bark");
    il2cpp_runtime_helper_023445d0(&"cannonwall");
    il2cpp_runtime_helper_023445d0(&"start");
    il2cpp_runtime_helper_023445d0(&"LegacyBarrier");
    il2cpp_runtime_helper_023445d0(&"barriereditormat");
    il2cpp_runtime_helper_023445d0(&"Racing Checkpoint Region ");
    il2cpp_runtime_helper_023445d0(&"Unhandled legacy texture: ");
    il2cpp_runtime_helper_023445d0(&"base");
    il2cpp_runtime_helper_023445d0(&"\r\n");
    il2cpp_runtime_helper_023445d0(&"aot_supply");
    il2cpp_runtime_helper_023445d0(&"disablebounds");
    il2cpp_runtime_helper_023445d0(&"cannonregionmat");
    il2cpp_runtime_helper_023445d0(&"Reflective");
    il2cpp_runtime_helper_023445d0(&"playerc");
    il2cpp_runtime_helper_023445d0(&"levelbottom");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Racing Start Barrier ");
    il2cpp_runtime_helper_023445d0(&"Human SpawnPoint");
    il2cpp_runtime_helper_023445d0(&"cannonground");
    il2cpp_runtime_helper_023445d0(&"Cannon3");
    il2cpp_runtime_helper_023445d0(&"grass");
    il2cpp_runtime_helper_023445d0(&"LevelBottom");
    il2cpp_runtime_helper_023445d0(&"misc");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"barrier");
    il2cpp_runtime_helper_023445d0(&"titan");
    il2cpp_runtime_helper_023445d0(&"ice1");
    il2cpp_runtime_helper_023445d0(&"transparent");
    il2cpp_runtime_helper_023445d0(&"Racing Start Barrier Cuboid");
    il2cpp_runtime_helper_023445d0(&"region");
    il2cpp_runtime_helper_023445d0(&"spawnpoint");
    il2cpp_runtime_helper_023445d0(&"racing");
    il2cpp_runtime_helper_023445d0(&"Geometry/Cuboid");
    il2cpp_runtime_helper_023445d0(&"Human SpawnPoint (red)");
    il2cpp_runtime_helper_023445d0(&"photon");
    il2cpp_runtime_helper_023445d0(&"Human SpawnPoint (blue)");
    il2cpp_runtime_helper_023445d0(&"barrierEditor");
    il2cpp_runtime_helper_023445d0(&"Basic");
    il2cpp_runtime_helper_023445d0(&"end");
    il2cpp_runtime_helper_023445d0(&"cannonballtrail");
    il2cpp_runtime_helper_023445d0(&"spawn");
    il2cpp_runtime_helper_023445d0(&"Supply1");
    il2cpp_runtime_helper_023445d0(&"Kill Region ");
    il2cpp_runtime_helper_023445d0(&"Unnamed");
    il2cpp_runtime_helper_023445d0(&"\\s+");
    il2cpp_runtime_helper_023445d0(&"playerm");
    il2cpp_runtime_helper_023445d0(&"kill");
    il2cpp_runtime_helper_023445d0(&"Titan SpawnPoint");
    il2cpp_runtime_helper_023445d0(&"Racing Finish Region ");
    il2cpp_runtime_helper_023445d0(&"bombtex");
    il2cpp_runtime_helper_023445d0(&"player");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"\r");
    il2cpp_runtime_helper_023445d0(&"checkpoint");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"empty");
    il2cpp_runtime_helper_023445d0(&"Transparent");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057ac493 = '\x01';
  }
  fStack_d4 = 0.0;
  **(undefined4 **)(TypeInfo_MapConverter + 0xb8) = 0;
  pSVar18 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
  plVar23 = (long *)pSVar18;
  Map_MapScript___ctor((Map_MapScript_o *)pSVar18,(MethodInfo *)0x0);
  if ((pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
     (pIVar17 = pSVar18->m_Items[0].fields.value, pIVar17 == (Il2CppObject *)0x0)) goto label_040a47b7;
  pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pIVar17[1].klass;
  pMVar16 = Map_MapConverter__CreateForestFloor((MethodInfo *)plVar23);
  lVar14 = MethodInfo_Void_Add;
  if (pSVar19 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
  piVar2 = (int *)((long)&pSVar19->max_length + 4);
  *piVar2 = *piVar2 + 1;
  pIVar6 = pSVar19->bounds;
  if (pIVar6 == (Il2CppArrayBounds *)0x0) goto label_040a47b7;
  uVar32 = *(uint *)&pSVar19->max_length;
  if (uVar32 < (uint)pIVar6[1].lower_bound) {
    *(uint *)&pSVar19->max_length = uVar32 + 1;
    pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              (&pIVar6[2].length + (int)uVar32);
    (&pIVar6[2].length)[(int)uVar32] = (il2cpp_array_size_t)pMVar16;
    il2cpp_runtime_helper_022b4080();
    pIVar17 = pSVar18->m_Items[0].fields.value;
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar19,(Il2CppObject *)pMVar16,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    pIVar17 = pSVar18->m_Items[0].fields.value;
  }
  plVar23 = (long *)pSVar19;
  if (pIVar17 == (Il2CppObject *)0x0) goto label_040a47b7;
  pIVar7 = pIVar17[1].klass;
  pMVar16 = Map_MapConverter__CreateLight((MethodInfo *)pSVar19);
  lVar14 = MethodInfo_Void_Add;
  plVar23 = (long *)pSVar19;
  if (pIVar7 == (Il2CppClass *)0x0) goto label_040a47b7;
  puVar13 = (undefined1 *)((long)&(pIVar7->_1).namespaze + 4);
  *(int *)puVar13 = *(int *)puVar13 + 1;
  pcVar8 = (pIVar7->_1).name;
  if (pcVar8 == (char *)0x0) goto label_040a47b7;
  uVar32 = *(uint *)&(pIVar7->_1).namespaze;
  if (uVar32 < *(uint *)(pcVar8 + 0x18)) {
    *(uint *)&(pIVar7->_1).namespaze = uVar32 + 1;
    *(Map_MapScriptSceneObject_o **)(pcVar8 + (long)(int)uVar32 * 8 + 0x20) = pMVar16;
    il2cpp_runtime_helper_022b4080(pcVar8 + (long)(int)uVar32 * 8 + 0x20,pMVar16);
    iVar26 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pIVar7,(Il2CppObject *)pMVar16,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    iVar26 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  if (iVar26 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            System_Text_RegularExpressions_Regex__Replace
                      ((System_String_o *)pSVar20,"\\s+",(System_String_o *)"",
                       (MethodInfo *)0x0);
  plVar23 = (long *)pSVar20;
  if (((pSVar19 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
      (pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                 System_String__Replace_3af9030
                           ((System_String_o *)pSVar19,"\r\n",(System_String_o *)"",
                            (MethodInfo *)0x0), plVar23 = (long *)pSVar19,
      pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) ||
     (pSVar21 = System_String__Replace_3af9030
                          ((System_String_o *)pSVar20,"\n",(System_String_o *)"",
                           (MethodInfo *)0x0), plVar23 = (long *)pSVar20, pSVar21 == (System_String_o *)0x0))
  goto label_040a47b7;
  pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            System_String__Replace_3af9030
                      (pSVar21,"\r",(System_String_o *)"",(MethodInfo *)0x0);
  plVar23 = (long *)TypeInfo_char;
  separator = (System_Char_array *)il2cpp_runtime_helper_022b2a40();
  if (separator == (System_Char_array *)0x0) goto label_040a47b7;
  if ((int)separator->max_length == 0) {
label_040a4765:
    il2cpp_runtime_helper_022b2ca0();
    pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23;
label_040a476a:
    uVar27 = 0;
label_040a476c:
    pSVar18 = pSStack_c0;
    if ((uVar27 & 1) != 0) {
      return (System_Collections_Generic_List_MapScriptBaseObject__o *)pSStack_c0;
    }
    pIVar17 = pSStack_c0->m_Items[0].fields.value;
    plVar23 = (long *)pSVar20;
    if (pIVar17 != (Il2CppObject *)0x0) {
      pIVar7 = pIVar17[1].klass;
      collection = Map_MapConverter__CreateFengBounds((MethodInfo *)pSVar20);
      plVar23 = (long *)pSVar20;
      if (pIVar7 != (Il2CppClass *)0x0) {
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pIVar7,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
        return (System_Collections_Generic_List_MapScriptBaseObject__o *)pSVar18;
      }
    }
label_040a47b7:
    uStack_118 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23;
    il2cpp_runtime_helper_022b2c90();
label_040a47bc:
    il2cpp_runtime_helper_022b2fd0();
    System_Object___ctor(&uStack_118->obj,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  separator->m_Items[0] = 0x3b;
  if ((pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
     (pSVar22 = System_String__Split_3af9a70((System_String_o *)pSVar20,separator,(MethodInfo *)0x0),
     plVar23 = (long *)pSVar20, pSVar22 == (System_String_array *)0x0)) goto label_040a47b7;
  iVar26 = (int)pSVar22->max_length;
  uVar32 = 0;
  pSStack_c0 = pSVar18;
  if (iVar26 < 1) goto label_040a476a;
  uVar28 = 0;
  pSStack_a8 = pSVar22;
  if (iVar26 == 0) goto label_040a4765;
label_040a2257:
  pSVar18 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            pSStack_a8->m_Items[(int)uVar32];
  plVar23 = (long *)pSVar20;
  if (((pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
      (plVar23 = (long *)pSVar18,
      pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Trim((System_String_o *)pSVar18,(MethodInfo *)0x0),
      pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) ||
     (pSVar22 = System_String__Split((System_String_o *)pSVar20,0x2c,0,(MethodInfo *)0x0),
     plVar23 = (long *)pSVar20, pSVar22 == (System_String_array *)0x0)) goto label_040a47b7;
  uVar27 = uVar28;
  if (pSVar22->max_length == 0) goto label_040a2233;
  if ((int)pSVar22->max_length == 0) goto label_040a4765;
  pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[0];
  plVar23 = (long *)pSVar20;
  if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
  bVar15 = System_String__StartsWith((System_String_o *)pSVar20,_DAT_055be878,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') goto label_040a2233;
  pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            System_String__Trim((System_String_o *)pSVar18,(MethodInfo *)0x0);
  bVar15 = System_String__op_Equality
                     ((System_String_o *)pSVar20,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') goto label_040a2233;
  piVar31 = &pSVar22->max_length;
  pSStack_c8 = pSVar18;
  pSVar18 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  plVar23 = (long *)pSVar18;
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)pSVar18,(MethodInfo *)0x0);
  if ((int)*piVar31 == 0) goto label_040a4765;
  plVar23 = (long *)pSVar22->m_Items[0];
  if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
      (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
  bVar15 = System_String__StartsWith((System_String_o *)plVar23,"custom",(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    if ((int)*piVar31 == 0) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    bVar15 = System_String__StartsWith((System_String_o *)plVar23,"spawnpoint",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      if ((uint)*piVar31 < 2) goto label_040a4765;
      plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
      plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
      bVar15 = System_String__op_Equality((System_String_o *)plVar23,"titan",(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        if ((uint)*piVar31 < 2) goto label_040a4765;
        plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
        plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
        bVar15 = System_String__op_Equality((System_String_o *)plVar23,"player",(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            ppIVar24 = (Il2CppObject **)&"Human SpawnPoint";
            goto label_040a3542;
          }
          goto label_040a47b7;
        }
        if ((uint)*piVar31 < 2) goto label_040a4765;
        plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
        plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
        bVar15 = System_String__op_Equality((System_String_o *)plVar23,"playerc",(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            ppIVar24 = (Il2CppObject **)&"Human SpawnPoint (blue)";
            goto label_040a3542;
          }
          goto label_040a47b7;
        }
        if ((uint)*piVar31 < 2) goto label_040a4765;
        plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
        plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
        bVar15 = System_String__op_Equality((System_String_o *)plVar23,"playerm",(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            ppIVar24 = (Il2CppObject **)&"Human SpawnPoint (red)";
            goto label_040a3542;
          }
          goto label_040a47b7;
        }
      }
      else {
        if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
        if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
            (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
        ppIVar24 = &"Titan SpawnPoint";
label_040a3542:
        pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,*ppIVar24,
                             MethodInfo_MapScriptBaseObject_get_Item);
        if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
        plVar23 = (long *)pSVar18;
        (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
      }
      if (2 < (uint)*piVar31) {
        plVar23 = (long *)pSVar22->m_Items[2];
        uStack_118._0_4_ = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
        if (3 < (uint)pSVar22->max_length) {
          plVar23 = (long *)pSVar22->m_Items[3];
          uStack_118._4_4_ = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
          if (4 < (uint)pSVar22->max_length) {
            plVar23 = (long *)pSVar22->m_Items[4];
            fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if (pSVar18 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
label_040a35d5:
              position_03.fields.y = uStack_118._4_4_;
              position_03.fields.x = (float)uStack_118;
              position_03.fields.z = fVar33;
              Map_MapScriptBaseObject__SetPosition
                        ((Map_MapScriptBaseObject_o *)pSVar18,position_03,(MethodInfo *)0x0);
              goto label_040a35df;
            }
            goto label_040a47b7;
          }
        }
      }
      goto label_040a4765;
    }
    if ((uint)*piVar31 == 0) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    bVar15 = System_String__StartsWith((System_String_o *)plVar23,"misc",(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      if ((uint)*piVar31 == 0) goto label_040a4765;
      plVar23 = (long *)pSVar22->m_Items[0];
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
      bVar15 = System_String__StartsWith((System_String_o *)plVar23,"base",(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        if (1 < (uint)*piVar31) {
          plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
          if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
          plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
          bVar15 = System_String__op_Equality((System_String_o *)plVar23,"aot_supply",(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            if ((uint)*piVar31 < 2) goto label_040a4765;
            plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
            if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
            plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
            bVar15 = System_String__op_Equality((System_String_o *)plVar23,"levelbottom",(MethodInfo *)0x0);
            if ((char)bVar15 != '\0') {
              if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
              if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
                  (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                puVar25 = &"LevelBottom";
                goto label_040a3319;
              }
              goto label_040a47b7;
            }
          }
          else {
            if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
            if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
                (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
            puVar25 = &"Supply1";
label_040a3319:
            pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,
                                 (Il2CppObject *)*puVar25,MethodInfo_MapScriptBaseObject_get_Item);
            if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
            plVar23 = (long *)pSVar18;
            (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
          }
          if ((int)(uint)*piVar31 < 0xf) {
            if ((uint)*piVar31 < 3) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[2];
            position_04.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 4) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[3];
            fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 5) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[4];
            fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            position_04.fields.y = fVar33;
            position_04.fields.z = fVar34;
            plVar23 = (long *)pSVar18;
            Map_MapScriptBaseObject__SetPosition
                      ((Map_MapScriptBaseObject_o *)pSVar18,position_04,(MethodInfo *)0x0);
            if ((uint)*piVar31 < 6) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[5];
            UVar43.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 7) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[6];
            fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 8) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[7];
            fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 9) goto label_040a4765;
            fVar35 = System_Single__Parse(pSVar22->m_Items[8],(MethodInfo *)0x0);
            UVar43.fields.y = fVar33;
            UVar43.fields.w = fVar35;
            UVar43.fields.z = fVar34;
            plVar23 = (long *)pSVar18;
            Map_MapScriptBaseObject__SetRotation_3fb4ce0
                      ((Map_MapScriptBaseObject_o *)pSVar18,UVar43,(MethodInfo *)0x0);
            uVar4 = (uint)*piVar31;
          }
          else {
            plVar23 = (long *)pSVar22->m_Items[0xc];
            position_02.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 0xe) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[0xd];
            fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 0xf) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[0xe];
            fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            position_02.fields.y = fVar33;
            position_02.fields.z = fVar34;
            plVar23 = (long *)pSVar18;
            Map_MapScriptBaseObject__SetPosition
                      ((Map_MapScriptBaseObject_o *)pSVar18,position_02,(MethodInfo *)0x0);
            if ((uint)*piVar31 < 0x10) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[0xf];
            rotation_02.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 0x11) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[0x10];
            fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 0x12) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[0x11];
            fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 0x13) goto label_040a4765;
            fVar35 = System_Single__Parse(pSVar22->m_Items[0x12],(MethodInfo *)0x0);
            rotation_02.fields.y = fVar33;
            rotation_02.fields.w = fVar35;
            rotation_02.fields.z = fVar34;
            plVar23 = (long *)pSVar18;
            Map_MapScriptBaseObject__SetRotation_3fb4ce0
                      ((Map_MapScriptBaseObject_o *)pSVar18,rotation_02,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 4) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[3];
            scale_02.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 5) goto label_040a4765;
            plVar23 = (long *)pSVar22->m_Items[4];
            fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
            if ((uint)pSVar22->max_length < 6) goto label_040a4765;
            fVar34 = System_Single__Parse(pSVar22->m_Items[5],(MethodInfo *)0x0);
            scale_02.fields.y = fVar33;
            scale_02.fields.z = fVar34;
            plVar23 = (long *)pSVar18;
            Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)pSVar18,scale_02,(MethodInfo *)0x0)
            ;
            uVar4 = (uint)*piVar31;
          }
          if (1 < uVar4) {
            plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
            if (pSVar22->m_Items[1] != (System_String_o *)0x0) {
              pSVar21 = System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
              bVar15 = System_String__op_Equality(pSVar21,"aot_supply",(MethodInfo *)0x0);
              if ((char)bVar15 == '\0') goto label_040a35df;
              UVar41 = Map_MapScriptBaseObject__GetPosition
                                 ((Map_MapScriptBaseObject_o *)pSVar18,(MethodInfo *)0x0);
              UVar42 = Map_MapScriptBaseObject__GetRotation
                                 ((Map_MapScriptBaseObject_o *)pSVar18,(MethodInfo *)0x0);
              euler.fields.x = UVar42.fields.x * 0.017453292;
              euler.fields.y = UVar42.fields.y * 0.017453292;
              euler.fields.z = UVar42.fields.z * 0.017453292;
              UVar43 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
              if (g_data_057ac4bc == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057ac4bc = '\x01';
              }
              UVar42 = UnityEngine_Quaternion__op_Multiply_4debdf0
                                 (UVar43,*(UnityEngine_Vector3_Fields *)
                                          (*(long *)(TypeInfo_Vector3 + 0xb8) + 0x54),(MethodInfo *)0x0);
              uStack_118._0_4_ = UVar41.fields.x;
              uStack_118._4_4_ = UVar41.fields.y;
              uStack_118._0_4_ = UVar42.fields.x * 0.37 + (float)uStack_118;
              uStack_118._4_4_ = UVar42.fields.y * 0.37 + uStack_118._4_4_;
              fVar33 = UVar42.fields.z * 0.37 + UVar41.fields.z;
              goto label_040a35d5;
            }
            goto label_040a47b7;
          }
        }
        goto label_040a4765;
      }
      if ((uint)*piVar31 == 0) goto label_040a4765;
      plVar23 = (long *)pSVar22->m_Items[0];
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
      bVar15 = System_String__StartsWith((System_String_o *)plVar23,"photon",(MethodInfo *)0x0);
      uVar4 = (uint)*piVar31;
      uVar27 = (ulong)uVar4;
      if ((char)bVar15 != '\0') {
        if (1 < uVar4) {
          plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
          if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
          plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
          bVar15 = System_String__op_Equality((System_String_o *)plVar23,"cannonground",(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            if (1 < (uint)*piVar31) {
              plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
              if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
              plVar23 = (long *)System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
              bVar15 = System_String__op_Equality((System_String_o *)plVar23,"cannonwall",(MethodInfo *)0x0);
              if ((char)bVar15 != '\0') goto label_040a2fc7;
              if (1 < (uint)*piVar31) {
                plVar23 = (long *)pSVar22->m_Items[1];
                if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
                     (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
                   (pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              System_String__ToLower((System_String_o *)plVar23,(MethodInfo *)0x0),
                   pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
                goto label_040a47b7;
                bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"spawn",(MethodInfo *)0x0);
                if ((char)bVar15 == '\0') goto label_040a43f7;
                if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
                if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
                     (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
                   (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,
                                         "Titan SpawnPoint",MethodInfo_MapScriptBaseObject_get_Item),
                   pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
                goto label_040a47b7;
                pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
                plVar23 = (long *)pSVar18;
                (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
                if (4 < (uint)*piVar31) {
                  plVar23 = (long *)pSVar22->m_Items[4];
                  position_07.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                  if (5 < (uint)pSVar22->max_length) {
                    plVar23 = (long *)pSVar22->m_Items[5];
                    fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                    if (6 < (uint)pSVar22->max_length) {
                      fVar34 = System_Single__Parse(pSVar22->m_Items[6],(MethodInfo *)0x0);
                      position_07.fields.y = fVar33;
                      position_07.fields.z = fVar34;
                      plVar23 = (long *)pSVar18;
                      Map_MapScriptBaseObject__SetPosition
                                ((Map_MapScriptBaseObject_o *)pSVar18,position_07,(MethodInfo *)0x0);
                      if (7 < (uint)pSVar22->max_length) {
                        plVar23 = (long *)pSVar22->m_Items[7];
                        fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                        if (8 < (uint)pSVar22->max_length) {
                          plVar23 = (long *)pSVar22->m_Items[8];
                          fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                          if (9 < (uint)pSVar22->max_length) {
                            plVar23 = (long *)pSVar22->m_Items[9];
                            fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                            if (10 < (uint)pSVar22->max_length) {
                              pSVar21 = pSVar22->m_Items[10];
label_040a3f77:
                              fVar37 = System_Single__Parse(pSVar21,(MethodInfo *)0x0);
                              rotation_04.fields.y = fVar34;
                              rotation_04.fields.x = fVar33;
                              rotation_04.fields.w = fVar37;
                              rotation_04.fields.z = fVar35;
                              Map_MapScriptBaseObject__SetRotation_3fb4ce0
                                        ((Map_MapScriptBaseObject_o *)pSVar18,rotation_04,(MethodInfo *)0x0);
                              goto label_040a35df;
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
          else {
label_040a2fc7:
            if (1 < (uint)*piVar31) {
              plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
              if (pSVar22->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
              pSVar21 = System_String__ToLower(pSVar22->m_Items[1],(MethodInfo *)0x0);
              bVar15 = System_String__op_Equality(pSVar21,"cannonground",(MethodInfo *)0x0);
              if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
              if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
                  (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
              if ((char)bVar15 == '\0') {
                puVar25 = &"Cannon3";
              }
              else {
                puVar25 = &"Cannon2";
              }
              pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,
                                   (Il2CppObject *)*puVar25,MethodInfo_MapScriptBaseObject_get_Item);
              if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
              goto label_040a47b7;
              pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
              plVar23 = (long *)pSVar18;
              (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
              if ((int)(uint)*piVar31 < 0xf) {
                if (2 < (uint)*piVar31) {
                  plVar23 = (long *)pSVar22->m_Items[2];
                  position_06.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                  if (3 < (uint)pSVar22->max_length) {
                    plVar23 = (long *)pSVar22->m_Items[3];
                    fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                    if (4 < (uint)pSVar22->max_length) {
                      fVar34 = System_Single__Parse(pSVar22->m_Items[4],(MethodInfo *)0x0);
                      position_06.fields.y = fVar33;
                      position_06.fields.z = fVar34;
                      plVar23 = (long *)pSVar18;
                      Map_MapScriptBaseObject__SetPosition
                                ((Map_MapScriptBaseObject_o *)pSVar18,position_06,(MethodInfo *)0x0);
                      if (5 < (uint)pSVar22->max_length) {
                        plVar23 = (long *)pSVar22->m_Items[5];
                        fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                        if (6 < (uint)pSVar22->max_length) {
                          plVar23 = (long *)pSVar22->m_Items[6];
                          fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                          if (7 < (uint)pSVar22->max_length) {
                            plVar23 = (long *)pSVar22->m_Items[7];
                            fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                            if (8 < (uint)pSVar22->max_length) {
                              pSVar21 = pSVar22->m_Items[8];
                              goto label_040a3f77;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                plVar23 = (long *)pSVar22->m_Items[0xc];
                position_05.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                if (0xd < (uint)pSVar22->max_length) {
                  plVar23 = (long *)pSVar22->m_Items[0xd];
                  fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                  if (0xe < (uint)pSVar22->max_length) {
                    fVar34 = System_Single__Parse(pSVar22->m_Items[0xe],(MethodInfo *)0x0);
                    position_05.fields.y = fVar33;
                    position_05.fields.z = fVar34;
                    plVar23 = (long *)pSVar18;
                    Map_MapScriptBaseObject__SetPosition
                              ((Map_MapScriptBaseObject_o *)pSVar18,position_05,(MethodInfo *)0x0);
                    if (0xf < (uint)pSVar22->max_length) {
                      plVar23 = (long *)pSVar22->m_Items[0xf];
                      rotation_03.fields.x =
                           System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                      if (0x10 < (uint)pSVar22->max_length) {
                        plVar23 = (long *)pSVar22->m_Items[0x10];
                        fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                        if (0x11 < (uint)pSVar22->max_length) {
                          plVar23 = (long *)pSVar22->m_Items[0x11];
                          fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                          if (0x12 < (uint)pSVar22->max_length) {
                            fVar35 = System_Single__Parse(pSVar22->m_Items[0x12],(MethodInfo *)0x0);
                            rotation_03.fields.y = fVar33;
                            rotation_03.fields.w = fVar35;
                            rotation_03.fields.z = fVar34;
                            plVar23 = (long *)pSVar18;
                            Map_MapScriptBaseObject__SetRotation_3fb4ce0
                                      ((Map_MapScriptBaseObject_o *)pSVar18,rotation_03,(MethodInfo *)0x0);
                            if (3 < (uint)pSVar22->max_length) {
                              plVar23 = (long *)pSVar22->m_Items[3];
                              fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                              if (4 < (uint)pSVar22->max_length) {
                                plVar23 = (long *)pSVar22->m_Items[4];
                                fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                                if (5 < (uint)pSVar22->max_length) {
                                  pSVar21 = pSVar22->m_Items[5];
                                  goto label_040a2e77;
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
        goto label_040a4765;
      }
      if (uVar4 == 0) goto label_040a4765;
      plVar23 = (long *)pSVar22->m_Items[0];
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
      bVar15 = System_String__StartsWith((System_String_o *)plVar23,"racing",(MethodInfo *)0x0);
      pSVar19 = "";
      if ((char)bVar15 == '\0') {
        if ((int)*piVar31 == 0) goto label_040a4765;
        pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[0];
        plVar23 = (long *)pSVar20;
        if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"map",(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          plVar23 = (long *)pSVar20;
          if ((uint)*piVar31 < 2) goto label_040a4765;
          pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
          plVar23 = (long *)pSVar20;
          if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"disablebounds",(MethodInfo *)0x0);
          uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
          if ((char)bVar15 != '\0') goto label_040a2233;
        }
      }
      else {
        if ((uint)*piVar31 < 2) goto label_040a4765;
        plVar23 = (long *)pSVar22->m_Items[1];
        if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
            (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
        bVar15 = System_String__StartsWith((System_String_o *)plVar23,"start",(MethodInfo *)0x0);
        if ((uint)*piVar31 < 2) goto label_040a4765;
        pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
        plVar23 = (long *)pSVar20;
        if ((char)bVar15 == '\0') {
          if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"end",(MethodInfo *)0x0);
          plVar23 = (long *)pSVar20;
          if ((uint)*piVar31 < 2) goto label_040a4765;
          pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
          plVar23 = (long *)pSVar20;
          if ((char)bVar15 != '\0') {
            if ("end" != (System_String_o *)0x0) {
              puVar25 = (undefined8 *)&"Racing Finish Region ";
              pSVar21 = "end";
joined_r0x040a3ff1:
              if (pSVar20 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
              goto label_040a42da;
            }
            goto label_040a47b7;
          }
          if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"kill",(MethodInfo *)0x0);
          plVar23 = (long *)pSVar20;
          if ((uint)*piVar31 < 2) goto label_040a4765;
          pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
          plVar23 = (long *)pSVar20;
          if ((char)bVar15 != '\0') {
            if ("kill" != (System_String_o *)0x0) {
              puVar25 = (undefined8 *)&"Kill Region ";
              pSVar21 = "kill";
              goto joined_r0x040a3ff1;
            }
            goto label_040a47b7;
          }
          if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"checkpoint",(MethodInfo *)0x0);
          if ((char)bVar15 != '\0') {
            plVar23 = (long *)pSVar20;
            if (1 < (uint)*piVar31) {
              if ("checkpoint" != (System_String_o *)0x0) {
                pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                          pSVar22->m_Items[1];
                puVar25 = (undefined8 *)&"Racing Checkpoint Region ";
                plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                pSVar21 = "checkpoint";
                goto joined_r0x040a3ff1;
              }
              goto label_040a47b7;
            }
            goto label_040a4765;
          }
        }
        else {
          if (("start" == (System_String_o *)0x0) ||
             (puVar25 = &"Racing Start Barrier ", pSVar21 = "start",
             pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
          goto label_040a47b7;
label_040a42da:
          pSVar21 = System_String__Substring
                              ((System_String_o *)pSVar20,(pSVar21->fields)._stringLength,(MethodInfo *)0x0);
          pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)*puVar25;
          pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    System_String__Concat_3ae5ba0((System_String_o *)pSVar20,pSVar21,(MethodInfo *)0x0);
        }
        plVar23 = (long *)pSVar20;
        if (pSVar19 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        if (0 < *(int *)&pSVar19->bounds) {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar20 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
          plVar23 = (long *)pSVar19;
          pSVar21 = System_String__ToLower((System_String_o *)pSVar19,(MethodInfo *)0x0);
          if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             ((System_Collections_Generic_Dictionary_object__object__o *)pSVar20,
                              (Il2CppObject *)pSVar21,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar15 != '\0') {
            if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar20 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
            pSVar21 = System_String__ToLower((System_String_o *)pSVar19,(MethodInfo *)0x0);
            plVar23 = (long *)pSVar19;
            if ((pSVar20 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
               (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar20,
                                     (Il2CppObject *)pSVar21,MethodInfo_MapScriptBaseObject_get_Item), plVar23 = (long *)pSVar20,
               pSVar18 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
              pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
              plVar23 = (long *)pSVar18;
              (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
              uVar4 = (uint)*piVar31;
              goto joined_r0x040a2d53;
            }
            goto label_040a47b7;
          }
        }
      }
label_040a43f7:
      plVar23 = (long *)pSVar20;
      if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      goto label_040a35df;
    }
    if ((uint)*piVar31 < 2) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[1];
    bVar15 = System_String__op_Equality((System_String_o *)plVar23,"barrier",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        ppIVar24 = &"LegacyBarrier";
        goto label_040a291b;
      }
      goto label_040a47b7;
    }
    if ((uint)*piVar31 < 2) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[1];
    bVar15 = System_String__op_Equality((System_String_o *)plVar23,"barrierEditor",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      uStack_d0 = uVar28;
      if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      pSVar18->max_length = (il2cpp_array_size_t)"Geometry/Cuboid";
      il2cpp_runtime_helper_022b4080(&pSVar18->max_length);
      pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
      plVar23 = (long *)pSVar20;
      Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)pSVar20,(MethodInfo *)0x0);
      if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      pSVar20->bounds = (Il2CppArrayBounds *)"Transparent";
      il2cpp_runtime_helper_022b4080(&pSVar20->bounds);
      __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      color_00.fields.b = 1.0;
      color_00.fields.a = 0.32;
      color_00.fields.r = 0.0;
      color_00.fields.g = 0.917;
      Utility_Color255___ctor_4388bb0(__this_00,color_00,(MethodInfo *)0x0);
      pSVar20->max_length = (il2cpp_array_size_t)__this_00;
      il2cpp_runtime_helper_022b4080(&pSVar20->max_length,__this_00);
      plVar23 = (long *)&pSVar18->m_Items[3].fields.value;
      pSVar18->m_Items[3].fields.value = (Il2CppObject *)pSVar20;
      il2cpp_runtime_helper_022b4080();
      uVar4 = (uint)*piVar31;
      uVar28 = uStack_d0;
joined_r0x040a2d53:
      if (5 < uVar4) {
        plVar23 = (long *)pSVar22->m_Items[5];
        position_01.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
        if (6 < (uint)pSVar22->max_length) {
          plVar23 = (long *)pSVar22->m_Items[6];
          fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
          if (7 < (uint)pSVar22->max_length) {
            fVar34 = System_Single__Parse(pSVar22->m_Items[7],(MethodInfo *)0x0);
            position_01.fields.y = fVar33;
            position_01.fields.z = fVar34;
            plVar23 = (long *)pSVar18;
            Map_MapScriptBaseObject__SetPosition
                      ((Map_MapScriptBaseObject_o *)pSVar18,position_01,(MethodInfo *)0x0);
            if (8 < (uint)pSVar22->max_length) {
              plVar23 = (long *)pSVar22->m_Items[8];
              rotation_01.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
              if (9 < (uint)pSVar22->max_length) {
                plVar23 = (long *)pSVar22->m_Items[9];
                fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                if (10 < (uint)pSVar22->max_length) {
                  plVar23 = (long *)pSVar22->m_Items[10];
                  fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                  if (0xb < (uint)pSVar22->max_length) {
                    fVar35 = System_Single__Parse(pSVar22->m_Items[0xb],(MethodInfo *)0x0);
                    rotation_01.fields.y = fVar33;
                    rotation_01.fields.w = fVar35;
                    rotation_01.fields.z = fVar34;
                    plVar23 = (long *)pSVar18;
                    Map_MapScriptBaseObject__SetRotation_3fb4ce0
                              ((Map_MapScriptBaseObject_o *)pSVar18,rotation_01,(MethodInfo *)0x0);
                    if (2 < (uint)pSVar22->max_length) {
                      plVar23 = (long *)pSVar22->m_Items[2];
                      fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                      if (3 < (uint)pSVar22->max_length) {
                        plVar23 = (long *)pSVar22->m_Items[3];
                        fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                        if (4 < (uint)pSVar22->max_length) {
                          pSVar21 = pSVar22->m_Items[4];
label_040a2e77:
                          fVar35 = System_Single__Parse(pSVar21,(MethodInfo *)0x0);
                          scale_01.fields.y = fVar34;
                          scale_01.fields.x = fVar33;
                          scale_01.fields.z = fVar35;
                          Map_MapScriptBaseObject__SetScale
                                    ((Map_MapScriptBaseObject_o *)pSVar18,scale_01,(MethodInfo *)0x0);
                          goto label_040a35df;
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
      goto label_040a4765;
    }
    if ((uint)*piVar31 < 2) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[1];
    bVar15 = System_String__op_Equality((System_String_o *)plVar23,"racingStart",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        ppIVar24 = (Il2CppObject **)&"Racing Start Barrier Cuboid";
label_040a291b:
        pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,*ppIVar24,
                             MethodInfo_MapScriptBaseObject_get_Item);
        if (pSVar18 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
          plVar23 = (long *)pSVar18;
          (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
          uVar4 = (uint)*piVar31;
          goto joined_r0x040a2d53;
        }
      }
      goto label_040a47b7;
    }
    if ((uint)*piVar31 < 2) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[1];
    bVar15 = System_String__op_Equality((System_String_o *)plVar23,"racingEnd",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar23 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 !=
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        ppIVar24 = (Il2CppObject **)&"Racing Finish Region Cuboid";
        goto label_040a291b;
      }
      goto label_040a47b7;
    }
    if ((uint)*piVar31 < 2) goto label_040a4765;
    pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
    bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"region",(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') goto label_040a43f7;
  }
  else {
    if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar23 = (long *)TypeInfo_BuiltinMapPrefabs;
    if ((uint)*piVar31 < 2) goto label_040a4765;
    pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
    if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    pSVar19 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
    pSVar21 = System_String__ToLower((System_String_o *)pSVar20,(MethodInfo *)0x0);
    plVar23 = (long *)pSVar20;
    if (pSVar19 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pSVar19,
                        (Il2CppObject *)pSVar21,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar15 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar23 = (long *)TypeInfo_BuiltinMapPrefabs;
      if ((uint)*piVar31 < 2) goto label_040a4765;
      pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar22->m_Items[1];
      if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      pSVar19 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
      pSVar21 = System_String__ToLower((System_String_o *)pSVar20,(MethodInfo *)0x0);
      plVar23 = (long *)pSVar20;
      if ((pSVar19 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
         (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar19,
                               (Il2CppObject *)pSVar21,MethodInfo_MapScriptBaseObject_get_Item), plVar23 = (long *)pSVar19,
         pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
      goto label_040a47b7;
      pvVar9 = ((Il2CppClass_1 *)&pSVar18->obj)->image;
      pSVar19 = pSVar18;
      (**(code **)((long)pvVar9 + 0x1d8))(pSVar18,pIVar17,*(undefined8 *)((long)pvVar9 + 0x1e0));
    }
    plVar23 = (long *)pSVar19;
    if ((uint)*piVar31 < 0xd) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0xc];
    position_00.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 0xe) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0xd];
    fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 0xf) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0xe];
    fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if (pSVar18 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    position_00.fields.y = fVar33;
    position_00.fields.z = fVar34;
    plVar23 = (long *)pSVar18;
    Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)pSVar18,position_00,(MethodInfo *)0x0);
    if ((uint)*piVar31 < 0x10) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0xf];
    rotation_00.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 0x11) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0x10];
    fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 0x12) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[0x11];
    fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 0x13) goto label_040a4765;
    fVar35 = System_Single__Parse(pSVar22->m_Items[0x12],(MethodInfo *)0x0);
    rotation_00.fields.y = fVar33;
    rotation_00.fields.w = fVar35;
    rotation_00.fields.z = fVar34;
    plVar23 = (long *)pSVar18;
    Map_MapScriptBaseObject__SetRotation_3fb4ce0
              ((Map_MapScriptBaseObject_o *)pSVar18,rotation_00,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 4) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[3];
    scale_00.fields.x = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 5) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[4];
    fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 6) goto label_040a4765;
    fVar34 = System_Single__Parse(pSVar22->m_Items[5],(MethodInfo *)0x0);
    scale_00.fields.y = fVar33;
    scale_00.fields.z = fVar34;
    plVar23 = (long *)pSVar18;
    Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)pSVar18,scale_00,(MethodInfo *)0x0);
    if ((uint)pSVar22->max_length < 3) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[2];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              System_String__ToLower((System_String_o *)plVar23,(MethodInfo *)0x0);
    uStack_118 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                 pSVar18->m_Items[3].fields.value;
    if ((uStack_118 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
       ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)uStack_118->max_length ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_040a47b7;
    fVar33 = (float)*(int *)((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                    uStack_118->max_length)->max_length + 4) / 255.0;
    plVar23 = (long *)pSVar20;
    bVar15 = System_String__op_Inequality((System_String_o *)pSVar20,"default",(MethodInfo *)0x0);
    uStack_d0 = uVar28;
    if ((char)bVar15 == '\0') {
label_040a26e1:
      uVar4 = (uint)*piVar31;
    }
    else {
      if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      bVar15 = System_String__StartsWith((System_String_o *)pSVar20,"transparent",(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        uStack_118 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                     il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
        plVar23 = (long *)uStack_118;
        Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)uStack_118,(MethodInfo *)0x0);
        if (uStack_118 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_118->bounds)->_buckets =
               "Transparent";
          il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                             &uStack_118->bounds);
          plVar23 = (long *)System_String__Substring((System_String_o *)pSVar20,0xb,(MethodInfo *)0x0);
          bVar15 = System_Single__TryParse((System_String_o *)plVar23,&fStack_d4,(MethodInfo *)0x0);
          if ((char)bVar15 != '\0') {
            fVar33 = fStack_d4;
          }
          goto label_040a26e1;
        }
        goto label_040a47b7;
      }
      bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"empty",(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"ice1",(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
          bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"barriereditormat",(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"regioneditormat",(MethodInfo *)0x0);
            if ((char)bVar15 != '\0') {
              uStack_118 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                           il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
              plVar23 = (long *)uStack_118;
              Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)uStack_118,(MethodInfo *)0x0);
              if (uStack_118 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_118->bounds)->
                _buckets = "Transparent";
                il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                                   &uStack_118->bounds);
                pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
                uVar36 = 0x3f800000;
                uVar38 = 0;
                uVar39 = 0;
                goto label_040a3b60;
              }
              goto label_040a47b7;
            }
            bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"bombexplosiontex",(MethodInfo *)0x0);
            if ((char)bVar15 != '\0') {
              uStack_118 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                           il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
              Map_MapScriptLegacyMaterial___ctor
                        ((Map_MapScriptLegacyMaterial_o *)uStack_118,(MethodInfo *)0x0);
              if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              plVar23 = (long *)TypeInfo_MapObjectShader;
              if (uStack_118 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                pSVar29 = (System_Int32_array *)TypeInfo_MapObjectShader->m_Items[6].fields.key[3].klass;
                goto label_040a40a5;
              }
              goto label_040a47b7;
            }
            bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"cannonregionmat",(MethodInfo *)0x0);
            if ((char)bVar15 == '\0') {
              bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"bombtex",(MethodInfo *)0x0);
              if ((char)bVar15 == '\0') {
                bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"cannonballtrail",(MethodInfo *)0x0)
                ;
                if ((char)bVar15 == '\0') {
                  uStack_118 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                               il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
                  plVar23 = (long *)uStack_118;
                  Map_MapScriptBasicMaterial___ctor
                            ((Map_MapScriptBasicMaterial_o *)uStack_118,(MethodInfo *)0x0);
                  if (uStack_118 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                  goto label_040a47b7;
                  ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_118->bounds)->
                  _buckets = "Basic";
                  il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                                     &uStack_118->bounds);
                  bVar15 = System_String__op_Equality
                                     ((System_String_o *)pSVar20,"bark",(MethodInfo *)0x0);
                  if (((char)bVar15 == '\0') &&
                     (bVar15 = System_String__op_Equality
                                         ((System_String_o *)pSVar20,"grass",(MethodInfo *)0x0),
                     (char)bVar15 == '\0')) {
                    if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) != 0) goto label_040a45cb;
label_040a4594:
                    il2cpp_runtime_helper_02337ed0();
                    __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                 (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0
                      ;
                      goto label_040a47b7;
                    }
                  }
                  else {
                    pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              System_String__Concat_3ae5ba0
                                        ((System_String_o *)pSVar20,"1",(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) goto label_040a4594;
label_040a45cb:
                    __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                 (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                    plVar23 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_040a47b7;
                  }
                  bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                     (__this_01,&pSVar20->obj,MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar15 == '\0') {
                    plVar23 = (long *)System_String__Concat_3ae5ba0
                                                ("Unhandled legacy texture: ",(System_String_o *)pSStack_c8,(MethodInfo *)0x0)
                    ;
                    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Debug__Log((Il2CppObject *)plVar23,(MethodInfo *)0x0);
                    uVar4 = (uint)*piVar31;
                    goto joined_r0x040a475f;
                  }
                  if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  plVar23 = *(long **)(*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                  if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
                       (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
                     (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                          ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,
                                           &pSVar20->obj,MethodInfo_MapScriptBasicMaterial_get_Item), pIVar7 = TypeInfo_MapScriptBasicMaterial,
                     pIVar17 == (Il2CppObject *)0x0)) goto label_040a47b7;
                  pSVar10 = ((Il2CppClass_1 *)&uStack_118->obj)->image;
                  bVar3 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
                  if (((pSVar10->_2).naturalAligment < bVar3) ||
                     ((ppIVar11 = (pSVar10->_2).typeHierarchy, ppIVar11[(ulong)bVar3 - 1] != TypeInfo_MapScriptBasicMaterial ||
                      (*(Il2CppClass **)&uStack_118->m_Items[0].fields = pIVar17[2].klass,
                      ppIVar11[(ulong)bVar3 - 1] != pIVar7)))) goto label_040a47bc;
                  plVar23 = (long *)uStack_118->m_Items;
                  il2cpp_runtime_helper_022b4080();
                  if (10 < (uint)*piVar31) {
                    plVar23 = (long *)pSVar22->m_Items[10];
                    fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                    if (0xb < (uint)pSVar22->max_length) {
                      fVar34 = System_Single__Parse(pSVar22->m_Items[0xb],(MethodInfo *)0x0);
                      pSVar10 = ((Il2CppClass_1 *)&uStack_118->obj)->image;
                      bVar3 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
                      if ((bVar3 <= (pSVar10->_2).naturalAligment) &&
                         ((pSVar10->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_MapScriptBasicMaterial)) goto label_040a3212;
                      goto label_040a47bc;
                    }
                  }
                  goto label_040a4765;
                }
                uStack_118 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                             il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
                Map_MapScriptLegacyMaterial___ctor
                          ((Map_MapScriptLegacyMaterial_o *)uStack_118,(MethodInfo *)0x0);
                if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar23 = (long *)TypeInfo_MapObjectShader;
                if (uStack_118 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                goto label_040a47b7;
                pSVar29 = TypeInfo_MapObjectShader->m_Items[6].fields.key[4].monitor;
              }
              else {
                uStack_118 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                             il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
                Map_MapScriptLegacyMaterial___ctor
                          ((Map_MapScriptLegacyMaterial_o *)uStack_118,(MethodInfo *)0x0);
                if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar23 = (long *)TypeInfo_MapObjectShader;
                if (uStack_118 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                goto label_040a47b7;
                pSVar29 = (System_Int32_array *)TypeInfo_MapObjectShader->m_Items[6].fields.key[4].klass;
              }
label_040a40a5:
              ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_118->bounds)->_buckets
                   = pSVar29;
              il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                                 &uStack_118->bounds);
              pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              color_02.fields.b = 0.5;
              color_02.fields.a = 0.5;
              color_02.fields.r = 0.5;
              color_02.fields.g = 0.5;
              Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar19,color_02,(MethodInfo *)0x0);
              plVar23 = (long *)&uStack_118->max_length;
              uStack_118->max_length = (il2cpp_array_size_t)pSVar19;
              il2cpp_runtime_helper_022b4080();
              if (10 < (uint)*piVar31) {
                plVar23 = (long *)pSVar22->m_Items[10];
                fVar33 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                if (0xb < (uint)pSVar22->max_length) {
                  plVar23 = (long *)pSVar22->m_Items[0xb];
                  fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
                  uStack_118->m_Items[0].fields.hashCode = (int32_t)fVar33;
                  uStack_118->m_Items[0].fields.next = (int32_t)fVar34;
                  fVar33 = 0.5;
                  uVar4 = (uint)*piVar31;
                  goto joined_r0x040a475f;
                }
              }
              goto label_040a4765;
            }
            uStack_118 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                         il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
            Map_MapScriptLegacyMaterial___ctor((Map_MapScriptLegacyMaterial_o *)uStack_118,(MethodInfo *)0x0);
            if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            plVar23 = (long *)TypeInfo_MapObjectShader;
            if (uStack_118 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_118->bounds)->_buckets =
                 TypeInfo_MapObjectShader->m_Items[6].fields.key[3].monitor;
            il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                               &uStack_118->bounds);
            pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            color_03.fields.b = 0.0;
            color_03.fields.a = 1.0;
            color_03.fields.r = 0.0;
            color_03.fields.g = 1.0;
            Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar19,color_03,(MethodInfo *)0x0);
            plVar23 = (long *)&uStack_118->max_length;
            uStack_118->max_length = (il2cpp_array_size_t)pSVar19;
            il2cpp_runtime_helper_022b4080();
            fVar33 = 1.0;
          }
          else {
            uStack_118 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                         il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
            plVar23 = (long *)uStack_118;
            Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)uStack_118,(MethodInfo *)0x0);
            if (uStack_118 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_118->bounds)->_buckets =
                 "Transparent";
            il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                               &uStack_118->bounds);
            pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            uVar36 = 0;
            uVar38 = 0x3f6ac083;
            uVar39 = 0x3f800000;
label_040a3b60:
            color_01.fields.g = (float)uVar38;
            color_01.fields.r = (float)uVar36;
            color_01.fields.a = 0.325;
            color_01.fields.b = (float)uVar39;
            Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar19,color_01,(MethodInfo *)0x0);
            plVar23 = (long *)&uStack_118->max_length;
            uStack_118->max_length = (il2cpp_array_size_t)pSVar19;
            il2cpp_runtime_helper_022b4080();
            fVar33 = 0.32;
          }
          uVar4 = (uint)*piVar31;
        }
        else {
          uStack_118 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                       il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptReflectiveMaterial);
          plVar23 = (long *)uStack_118;
          Map_MapScriptReflectiveMaterial___ctor
                    ((Map_MapScriptReflectiveMaterial_o *)uStack_118,(MethodInfo *)0x0);
          if (uStack_118 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_118->bounds)->_buckets =
               "Reflective";
          il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                             &uStack_118->bounds);
          pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          Utility_Color255___ctor((Utility_Color255_o *)pSVar19,0xb2,0xe3,0xff,0xff,(MethodInfo *)0x0);
          uStack_118->max_length = (il2cpp_array_size_t)pSVar19;
          il2cpp_runtime_helper_022b4080(&uStack_118->max_length);
          if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar23 = *(long **)(*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
          if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
               (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
             (pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)plVar23,
                                   (Il2CppObject *)pSVar20,MethodInfo_MapScriptBasicMaterial_get_Item), pIVar7 = TypeInfo_MapScriptBasicMaterial,
             pIVar17 == (Il2CppObject *)0x0)) goto label_040a47b7;
          pSVar10 = ((Il2CppClass_1 *)&uStack_118->obj)->image;
          bVar3 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
          if (((pSVar10->_2).naturalAligment < bVar3) ||
             ((ppIVar11 = (pSVar10->_2).typeHierarchy, ppIVar11[(ulong)bVar3 - 1] != TypeInfo_MapScriptBasicMaterial ||
              (*(Il2CppClass **)&uStack_118->m_Items[0].fields = pIVar17[2].klass,
              ppIVar11[(ulong)bVar3 - 1] != pIVar7)))) goto label_040a47bc;
          plVar23 = (long *)uStack_118->m_Items;
          il2cpp_runtime_helper_022b4080();
          if ((uint)*piVar31 < 0xb) goto label_040a4765;
          plVar23 = (long *)pSVar22->m_Items[10];
          fStack_b8 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
          if ((uint)pSVar22->max_length < 0xc) goto label_040a4765;
          fVar34 = System_Single__Parse(pSVar22->m_Items[0xb],(MethodInfo *)0x0);
          pSVar10 = ((Il2CppClass_1 *)&uStack_118->obj)->image;
          bVar3 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
          if (((pSVar10->_2).naturalAligment < bVar3) ||
             (fVar35 = fStack_b8, (pSVar10->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_MapScriptBasicMaterial))
          goto label_040a47bc;
label_040a3212:
          *(float *)&uStack_118->m_Items[0].fields.key = fVar35;
          *(float *)((long)&uStack_118->m_Items[0].fields.key + 4) = fVar34;
          uVar4 = (uint)*piVar31;
          plVar23 = (long *)uStack_118;
        }
      }
      else {
        uStack_118 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                     il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
        plVar23 = (long *)uStack_118;
        Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)uStack_118,(MethodInfo *)0x0);
        if (uStack_118 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        plVar23 = (long *)&uStack_118->bounds;
        ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_118->bounds)->_buckets =
             "Basic";
        il2cpp_runtime_helper_022b4080();
        uVar4 = (uint)*piVar31;
      }
    }
joined_r0x040a475f:
    if (uVar4 < 2) goto label_040a4765;
    plVar23 = (long *)pSVar22->m_Items[1];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar23 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    pSVar21 = System_String__ToLower((System_String_o *)plVar23,(MethodInfo *)0x0);
    if ((uint)*piVar31 < 7) goto label_040a4765;
    bVar15 = System_String__op_Inequality(pSVar22->m_Items[6],"0",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      plVar23 = (long *)pSVar20;
      bVar15 = System_String__op_Inequality((System_String_o *)pSVar20,"default",(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        if (pSVar21 == (System_String_o *)0x0) goto label_040a47b7;
        bVar15 = System_String__StartsWith(pSVar21,"start",(MethodInfo *)0x0);
        if (((((char)bVar15 != '\0') ||
             (bVar15 = System_String__StartsWith(pSVar21,"kill",(MethodInfo *)0x0), (char)bVar15 != '\0'
             )) || (bVar15 = System_String__StartsWith(pSVar21,"end",(MethodInfo *)0x0),
                   (char)bVar15 != '\0')) ||
           (bVar15 = System_String__StartsWith(pSVar21,"checkpoint",(MethodInfo *)0x0), (char)bVar15 != '\0'))
        goto label_040a2c3d;
      }
      bVar15 = System_String__op_Equality((System_String_o *)pSVar20,"cannonregionmat",(MethodInfo *)0x0);
      plVar23 = (long *)pSVar20;
      if ((char)bVar15 == '\0') {
        if ((uint)*piVar31 < 8) goto label_040a4765;
        plVar23 = (long *)pSVar22->m_Items[7];
        fVar34 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
        if ((uint)pSVar22->max_length < 9) goto label_040a4765;
        plVar23 = (long *)pSVar22->m_Items[8];
        fVar35 = System_Single__Parse((System_String_o *)plVar23,(MethodInfo *)0x0);
        if ((uint)pSVar22->max_length < 10) goto label_040a4765;
        fStack_b8 = System_Single__Parse(pSVar22->m_Items[9],(MethodInfo *)0x0);
        pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        fVar37 = fStack_b8;
      }
      else {
        if ((uint)*piVar31 < 9) goto label_040a4765;
        fVar35 = System_Single__Parse(pSVar22->m_Items[8],(MethodInfo *)0x0);
        pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        fVar34 = 0.0;
        fVar37 = 0.0;
      }
      color.fields.g = fVar35;
      color.fields.r = fVar34;
      color.fields.a = fVar33;
      color.fields.b = fVar37;
      plVar23 = (long *)pSVar20;
      Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar20,color,(MethodInfo *)0x0);
      if (uStack_118 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      uStack_118->max_length = (il2cpp_array_size_t)pSVar20;
      il2cpp_runtime_helper_022b4080(&uStack_118->max_length,pSVar20);
    }
label_040a2c3d:
    pSVar18->m_Items[3].fields.value = &uStack_118->obj;
    il2cpp_runtime_helper_022b4080();
    uVar28 = uStack_d0;
label_040a35df:
    plVar23 = (long *)pSVar18->max_length;
    bVar15 = System_String__op_Equality((System_String_o *)plVar23,"None",(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      plVar23 = (long *)pSVar18->m_Items[0].fields.value;
      bVar15 = System_String__op_Equality((System_String_o *)plVar23,"Unnamed",(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Concat_3ae5ba0("Unhandled legacy object: ",(System_String_o *)pSStack_c8,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar20,(MethodInfo *)0x0);
        uVar27 = uVar28 & 0xffffffff;
        goto label_040a2233;
      }
    }
    if (g_data_057ac494 == '\0') {
      plVar23 = &TypeInfo_MapConverter;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac494 = '\x01';
    }
    iVar26 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
    **(int **)(TypeInfo_MapConverter + 0xb8) = iVar26;
    pSVar18->m_Items[0].fields.hashCode = iVar26;
    lVar14 = MethodInfo_Void_Add;
    pIVar17 = pSStack_c0->m_Items[0].fields.value;
    if ((pIVar17 == (Il2CppObject *)0x0) ||
       (pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pIVar17[1].klass,
       plVar23 = (long *)pSVar20,
       pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_040a47b7;
    piVar2 = (int *)((long)&pSVar20->max_length + 4);
    *piVar2 = *piVar2 + 1;
    pSVar29 = ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar20->bounds)->_buckets;
    if (pSVar29 == (System_Int32_array *)0x0) goto label_040a47b7;
    uVar4 = *(uint *)&pSVar20->max_length;
    if (uVar4 < (uint)pSVar29->max_length) {
      *(uint *)&pSVar20->max_length = uVar4 + 1;
      pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                (pSVar29->m_Items + (long)(int)uVar4 * 2);
      *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
       (pSVar29->m_Items + (long)(int)uVar4 * 2) = pSVar18;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar20,(Il2CppObject *)pSVar18,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar27 = uVar28 & 0xffffffff;
label_040a2233:
  uVar32 = uVar32 + 1;
  uVar4 = (uint)pSStack_a8->max_length;
  uVar28 = uVar27 & 0xffffffff;
  if ((int)uVar4 <= (int)uVar32) goto label_040a476c;
  plVar23 = (long *)pSVar20;
  if (uVar4 <= uVar32) goto label_040a4765;
  goto label_040a2257;
}


// Map.MapConverter$$CreateBound
// il2cpp: Map_MapScriptSceneObject_o* Map_MapConverter__CreateBound (UnityEngine_Vector3_o center, UnityEngine_Vector3_o size, UnityEngine_Vector3_o rotation, const MethodInfo* method);
// 0x40a19f0

Map_MapScriptSceneObject_o *
Map_MapConverter__CreateBound
          (UnityEngine_Vector3_o center,UnityEngine_Vector3_o size,UnityEngine_Vector3_o rotation,
          MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  Il2CppArrayBounds *pIVar4;
  Il2CppClass *pIVar5;
  char *pcVar6;
  void *pvVar7;
  System_Collections_Generic_Dictionary_object__object__c *pSVar8;
  Il2CppClass **ppIVar9;
  undefined1 *puVar10;
  long lVar11;
  bool_conflict bVar12;
  Map_MapScriptSceneObject_o *pMVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar15;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar16;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar17;
  System_String_o *pSVar18;
  System_Char_array *separator;
  System_String_array *pSVar19;
  long *plVar20;
  Il2CppObject **ppIVar21;
  undefined8 *puVar22;
  Utility_Color255_o *__this;
  System_Collections_Generic_List_MapScriptBaseObject__o *collection;
  Map_MapScriptSceneObject_o *extraout_RAX;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  System_Int32_array *pSVar26;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  il2cpp_array_size_t *piVar27;
  uint uVar28;
  float fVar29;
  undefined4 uVar32;
  float fVar33;
  float fVar30;
  float fVar31;
  undefined4 uVar34;
  undefined4 uVar35;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o scale;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o scale_00;
  UnityEngine_Vector3_o scale_01;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o UVar36;
  UnityEngine_Vector3_o UVar37;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o position_04;
  UnityEngine_Quaternion_o rotation_00;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Quaternion_o rotation_01;
  UnityEngine_Quaternion_o rotation_02;
  UnityEngine_Quaternion_o UVar38;
  UnityEngine_Color_o color_01;
  UnityEngine_Quaternion_o rotation_03;
  UnityEngine_Quaternion_o rotation_04;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  undefined8 uStack_100;
  float fStack_bc;
  ulong uStack_b8;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_b0;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_a8;
  float fStack_a0;
  System_String_array *pSStack_90;
  Map_MapScriptSceneObject_o *pMStack_88;
  
  if (g_data_057ac492 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"LegacyBarrier");
    g_data_057ac492 = '\x01';
  }
  pMVar13 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(pMVar13,(MethodInfo *)0x0);
  if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar17 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
  if ((pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
     (pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pSVar17,"LegacyBarrier",
                           MethodInfo_MapScriptBaseObject_get_Item), pMVar13 != (Map_MapScriptSceneObject_o *)0x0)) {
    (*(pMVar13->klass->vtable)._10_Copy.methodPtr)(pMVar13,pIVar14,(pMVar13->klass->vtable)._10_Copy.method);
    Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)pMVar13,center,(MethodInfo *)0x0);
    Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)pMVar13,size,(MethodInfo *)0x0);
    Map_MapScriptBaseObject__SetRotation((Map_MapScriptBaseObject_o *)pMVar13,rotation,(MethodInfo *)0x0);
    if (g_data_057ac494 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapConverter);
      g_data_057ac494 = '\x01';
    }
    iVar23 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
    **(int **)(TypeInfo_MapConverter + 0xb8) = iVar23;
    (pMVar13->fields).Id = iVar23;
    return pMVar13;
  }
  il2cpp_runtime_helper_022b2c90();
  pMStack_88 = pMVar13;
  if (g_data_057ac493 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapConverter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptReflectiveMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"racingEnd");
    il2cpp_runtime_helper_023445d0(&"Racing Finish Region Cuboid");
    il2cpp_runtime_helper_023445d0(&"regioneditormat");
    il2cpp_runtime_helper_023445d0(&"map");
    il2cpp_runtime_helper_023445d0(&"custom");
    il2cpp_runtime_helper_023445d0(&"bombexplosiontex");
    il2cpp_runtime_helper_023445d0(&"racingStart");
    il2cpp_runtime_helper_023445d0(&"Unhandled legacy object: ");
    il2cpp_runtime_helper_023445d0(&"//");
    il2cpp_runtime_helper_023445d0(&"Cannon2");
    il2cpp_runtime_helper_023445d0(&"bark");
    il2cpp_runtime_helper_023445d0(&"cannonwall");
    il2cpp_runtime_helper_023445d0(&"start");
    il2cpp_runtime_helper_023445d0(&"LegacyBarrier");
    il2cpp_runtime_helper_023445d0(&"barriereditormat");
    il2cpp_runtime_helper_023445d0(&"Racing Checkpoint Region ");
    il2cpp_runtime_helper_023445d0(&"Unhandled legacy texture: ");
    il2cpp_runtime_helper_023445d0(&"base");
    il2cpp_runtime_helper_023445d0(&"\r\n");
    il2cpp_runtime_helper_023445d0(&"aot_supply");
    il2cpp_runtime_helper_023445d0(&"disablebounds");
    il2cpp_runtime_helper_023445d0(&"cannonregionmat");
    il2cpp_runtime_helper_023445d0(&"Reflective");
    il2cpp_runtime_helper_023445d0(&"playerc");
    il2cpp_runtime_helper_023445d0(&"levelbottom");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Racing Start Barrier ");
    il2cpp_runtime_helper_023445d0(&"Human SpawnPoint");
    il2cpp_runtime_helper_023445d0(&"cannonground");
    il2cpp_runtime_helper_023445d0(&"Cannon3");
    il2cpp_runtime_helper_023445d0(&"grass");
    il2cpp_runtime_helper_023445d0(&"LevelBottom");
    il2cpp_runtime_helper_023445d0(&"misc");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"barrier");
    il2cpp_runtime_helper_023445d0(&"titan");
    il2cpp_runtime_helper_023445d0(&"ice1");
    il2cpp_runtime_helper_023445d0(&"transparent");
    il2cpp_runtime_helper_023445d0(&"Racing Start Barrier Cuboid");
    il2cpp_runtime_helper_023445d0(&"region");
    il2cpp_runtime_helper_023445d0(&"spawnpoint");
    il2cpp_runtime_helper_023445d0(&"racing");
    il2cpp_runtime_helper_023445d0(&"Geometry/Cuboid");
    il2cpp_runtime_helper_023445d0(&"Human SpawnPoint (red)");
    il2cpp_runtime_helper_023445d0(&"photon");
    il2cpp_runtime_helper_023445d0(&"Human SpawnPoint (blue)");
    il2cpp_runtime_helper_023445d0(&"barrierEditor");
    il2cpp_runtime_helper_023445d0(&"Basic");
    il2cpp_runtime_helper_023445d0(&"end");
    il2cpp_runtime_helper_023445d0(&"cannonballtrail");
    il2cpp_runtime_helper_023445d0(&"spawn");
    il2cpp_runtime_helper_023445d0(&"Supply1");
    il2cpp_runtime_helper_023445d0(&"Kill Region ");
    il2cpp_runtime_helper_023445d0(&"Unnamed");
    il2cpp_runtime_helper_023445d0(&"\\s+");
    il2cpp_runtime_helper_023445d0(&"playerm");
    il2cpp_runtime_helper_023445d0(&"kill");
    il2cpp_runtime_helper_023445d0(&"Titan SpawnPoint");
    il2cpp_runtime_helper_023445d0(&"Racing Finish Region ");
    il2cpp_runtime_helper_023445d0(&"bombtex");
    il2cpp_runtime_helper_023445d0(&"player");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"\r");
    il2cpp_runtime_helper_023445d0(&"checkpoint");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"empty");
    il2cpp_runtime_helper_023445d0(&"Transparent");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057ac493 = '\x01';
  }
  fStack_bc = 0.0;
  **(undefined4 **)(TypeInfo_MapConverter + 0xb8) = 0;
  pSVar15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
  plVar20 = (long *)pSVar15;
  Map_MapScript___ctor((Map_MapScript_o *)pSVar15,(MethodInfo *)0x0);
  if ((pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
     (pIVar14 = pSVar15->m_Items[0].fields.value, pIVar14 == (Il2CppObject *)0x0)) goto label_040a47b7;
  pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pIVar14[1].klass;
  pMVar13 = Map_MapConverter__CreateForestFloor((MethodInfo *)plVar20);
  lVar11 = MethodInfo_Void_Add;
  if (pSVar16 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
  piVar1 = (int *)((long)&pSVar16->max_length + 4);
  *piVar1 = *piVar1 + 1;
  pIVar4 = pSVar16->bounds;
  if (pIVar4 == (Il2CppArrayBounds *)0x0) goto label_040a47b7;
  uVar28 = *(uint *)&pSVar16->max_length;
  if (uVar28 < (uint)pIVar4[1].lower_bound) {
    *(uint *)&pSVar16->max_length = uVar28 + 1;
    pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              (&pIVar4[2].length + (int)uVar28);
    (&pIVar4[2].length)[(int)uVar28] = (il2cpp_array_size_t)pMVar13;
    il2cpp_runtime_helper_022b4080();
    pIVar14 = pSVar15->m_Items[0].fields.value;
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar16,(Il2CppObject *)pMVar13,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    pIVar14 = pSVar15->m_Items[0].fields.value;
  }
  plVar20 = (long *)pSVar16;
  if (pIVar14 == (Il2CppObject *)0x0) goto label_040a47b7;
  pIVar5 = pIVar14[1].klass;
  pMVar13 = Map_MapConverter__CreateLight((MethodInfo *)pSVar16);
  lVar11 = MethodInfo_Void_Add;
  plVar20 = (long *)pSVar16;
  if (pIVar5 == (Il2CppClass *)0x0) goto label_040a47b7;
  puVar10 = (undefined1 *)((long)&(pIVar5->_1).namespaze + 4);
  *(int *)puVar10 = *(int *)puVar10 + 1;
  pcVar6 = (pIVar5->_1).name;
  if (pcVar6 == (char *)0x0) goto label_040a47b7;
  uVar28 = *(uint *)&(pIVar5->_1).namespaze;
  if (uVar28 < *(uint *)(pcVar6 + 0x18)) {
    *(uint *)&(pIVar5->_1).namespaze = uVar28 + 1;
    *(Map_MapScriptSceneObject_o **)(pcVar6 + (long)(int)uVar28 * 8 + 0x20) = pMVar13;
    il2cpp_runtime_helper_022b4080(pcVar6 + (long)(int)uVar28 * 8 + 0x20,pMVar13);
    iVar23 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pIVar5,(Il2CppObject *)pMVar13,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    iVar23 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  if (iVar23 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            System_Text_RegularExpressions_Regex__Replace
                      ((System_String_o *)pSVar17,"\\s+",(System_String_o *)"",
                       (MethodInfo *)0x0);
  plVar20 = (long *)pSVar17;
  if (((pSVar16 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
      (pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                 System_String__Replace_3af9030
                           ((System_String_o *)pSVar16,"\r\n",(System_String_o *)"",
                            (MethodInfo *)0x0), plVar20 = (long *)pSVar16,
      pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) ||
     (pSVar18 = System_String__Replace_3af9030
                          ((System_String_o *)pSVar17,"\n",(System_String_o *)"",
                           (MethodInfo *)0x0), plVar20 = (long *)pSVar17, pSVar18 == (System_String_o *)0x0))
  goto label_040a47b7;
  pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            System_String__Replace_3af9030
                      (pSVar18,"\r",(System_String_o *)"",(MethodInfo *)0x0);
  plVar20 = (long *)TypeInfo_char;
  separator = (System_Char_array *)il2cpp_runtime_helper_022b2a40();
  if (separator == (System_Char_array *)0x0) goto label_040a47b7;
  if ((int)separator->max_length == 0) {
label_040a4765:
    il2cpp_runtime_helper_022b2ca0();
    pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20;
label_040a476a:
    uVar24 = 0;
label_040a476c:
    pSVar15 = pSStack_a8;
    if ((uVar24 & 1) != 0) {
      return (Map_MapScriptSceneObject_o *)pSStack_a8;
    }
    pIVar14 = pSStack_a8->m_Items[0].fields.value;
    plVar20 = (long *)pSVar17;
    if (pIVar14 != (Il2CppObject *)0x0) {
      pIVar5 = pIVar14[1].klass;
      collection = Map_MapConverter__CreateFengBounds((MethodInfo *)pSVar17);
      plVar20 = (long *)pSVar17;
      if (pIVar5 != (Il2CppClass *)0x0) {
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pIVar5,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
        return (Map_MapScriptSceneObject_o *)pSVar15;
      }
    }
label_040a47b7:
    uStack_100 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20;
    il2cpp_runtime_helper_022b2c90();
label_040a47bc:
    il2cpp_runtime_helper_022b2fd0();
    System_Object___ctor(&uStack_100->obj,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  separator->m_Items[0] = 0x3b;
  if ((pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
     (pSVar19 = System_String__Split_3af9a70((System_String_o *)pSVar17,separator,(MethodInfo *)0x0),
     plVar20 = (long *)pSVar17, pSVar19 == (System_String_array *)0x0)) goto label_040a47b7;
  iVar23 = (int)pSVar19->max_length;
  uVar28 = 0;
  pSStack_a8 = pSVar15;
  if (iVar23 < 1) goto label_040a476a;
  uVar25 = 0;
  pSStack_90 = pSVar19;
  if (iVar23 == 0) goto label_040a4765;
label_040a2257:
  pSVar15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            pSStack_90->m_Items[(int)uVar28];
  plVar20 = (long *)pSVar17;
  if (((pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
      (plVar20 = (long *)pSVar15,
      pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Trim((System_String_o *)pSVar15,(MethodInfo *)0x0),
      pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) ||
     (pSVar19 = System_String__Split((System_String_o *)pSVar17,0x2c,0,(MethodInfo *)0x0),
     plVar20 = (long *)pSVar17, pSVar19 == (System_String_array *)0x0)) goto label_040a47b7;
  uVar24 = uVar25;
  if (pSVar19->max_length == 0) goto label_040a2233;
  if ((int)pSVar19->max_length == 0) goto label_040a4765;
  pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar19->m_Items[0];
  plVar20 = (long *)pSVar17;
  if (pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
  bVar12 = System_String__StartsWith((System_String_o *)pSVar17,_DAT_055be878,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') goto label_040a2233;
  pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            System_String__Trim((System_String_o *)pSVar15,(MethodInfo *)0x0);
  bVar12 = System_String__op_Equality
                     ((System_String_o *)pSVar17,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') goto label_040a2233;
  piVar27 = &pSVar19->max_length;
  pSStack_b0 = pSVar15;
  pSVar15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  plVar20 = (long *)pSVar15;
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)pSVar15,(MethodInfo *)0x0);
  if ((int)*piVar27 == 0) goto label_040a4765;
  plVar20 = (long *)pSVar19->m_Items[0];
  if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
      (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
  bVar12 = System_String__StartsWith((System_String_o *)plVar20,"custom",(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    if ((int)*piVar27 == 0) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[0];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    bVar12 = System_String__StartsWith((System_String_o *)plVar20,"spawnpoint",(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if ((uint)*piVar27 < 2) goto label_040a4765;
      plVar20 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pSVar19->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
      plVar20 = (long *)System_String__ToLower(pSVar19->m_Items[1],(MethodInfo *)0x0);
      bVar12 = System_String__op_Equality((System_String_o *)plVar20,"titan",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        if ((uint)*piVar27 < 2) goto label_040a4765;
        plVar20 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pSVar19->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
        plVar20 = (long *)System_String__ToLower(pSVar19->m_Items[1],(MethodInfo *)0x0);
        bVar12 = System_String__op_Equality((System_String_o *)plVar20,"player",(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar20 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 !=
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            ppIVar21 = (Il2CppObject **)&"Human SpawnPoint";
            goto label_040a3542;
          }
          goto label_040a47b7;
        }
        if ((uint)*piVar27 < 2) goto label_040a4765;
        plVar20 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pSVar19->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
        plVar20 = (long *)System_String__ToLower(pSVar19->m_Items[1],(MethodInfo *)0x0);
        bVar12 = System_String__op_Equality((System_String_o *)plVar20,"playerc",(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar20 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 !=
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            ppIVar21 = (Il2CppObject **)&"Human SpawnPoint (blue)";
            goto label_040a3542;
          }
          goto label_040a47b7;
        }
        if ((uint)*piVar27 < 2) goto label_040a4765;
        plVar20 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pSVar19->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
        plVar20 = (long *)System_String__ToLower(pSVar19->m_Items[1],(MethodInfo *)0x0);
        bVar12 = System_String__op_Equality((System_String_o *)plVar20,"playerm",(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar20 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 !=
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            ppIVar21 = (Il2CppObject **)&"Human SpawnPoint (red)";
            goto label_040a3542;
          }
          goto label_040a47b7;
        }
      }
      else {
        if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        plVar20 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
        if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
            (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
        ppIVar21 = &"Titan SpawnPoint";
label_040a3542:
        pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)plVar20,*ppIVar21,
                             MethodInfo_MapScriptBaseObject_get_Item);
        if (pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        pvVar7 = ((Il2CppClass_1 *)&pSVar15->obj)->image;
        plVar20 = (long *)pSVar15;
        (**(code **)((long)pvVar7 + 0x1d8))(pSVar15,pIVar14,*(undefined8 *)((long)pvVar7 + 0x1e0));
      }
      if (2 < (uint)*piVar27) {
        plVar20 = (long *)pSVar19->m_Items[2];
        uStack_100._0_4_ = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
        if (3 < (uint)pSVar19->max_length) {
          plVar20 = (long *)pSVar19->m_Items[3];
          uStack_100._4_4_ = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
          if (4 < (uint)pSVar19->max_length) {
            plVar20 = (long *)pSVar19->m_Items[4];
            fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if (pSVar15 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
label_040a35d5:
              position_01.fields.y = uStack_100._4_4_;
              position_01.fields.x = (float)uStack_100;
              position_01.fields.z = fVar29;
              Map_MapScriptBaseObject__SetPosition
                        ((Map_MapScriptBaseObject_o *)pSVar15,position_01,(MethodInfo *)0x0);
              goto label_040a35df;
            }
            goto label_040a47b7;
          }
        }
      }
      goto label_040a4765;
    }
    if ((uint)*piVar27 == 0) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[0];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    bVar12 = System_String__StartsWith((System_String_o *)plVar20,"misc",(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      if ((uint)*piVar27 == 0) goto label_040a4765;
      plVar20 = (long *)pSVar19->m_Items[0];
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
      bVar12 = System_String__StartsWith((System_String_o *)plVar20,"base",(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        if (1 < (uint)*piVar27) {
          plVar20 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
          if (pSVar19->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
          plVar20 = (long *)System_String__ToLower(pSVar19->m_Items[1],(MethodInfo *)0x0);
          bVar12 = System_String__op_Equality((System_String_o *)plVar20,"aot_supply",(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            if ((uint)*piVar27 < 2) goto label_040a4765;
            plVar20 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
            if (pSVar19->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
            plVar20 = (long *)System_String__ToLower(pSVar19->m_Items[1],(MethodInfo *)0x0);
            bVar12 = System_String__op_Equality((System_String_o *)plVar20,"levelbottom",(MethodInfo *)0x0);
            if ((char)bVar12 != '\0') {
              if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              plVar20 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
              if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 !=
                  (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                puVar22 = &"LevelBottom";
                goto label_040a3319;
              }
              goto label_040a47b7;
            }
          }
          else {
            if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            plVar20 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
            if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
                (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
            puVar22 = &"Supply1";
label_040a3319:
            pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)plVar20,
                                 (Il2CppObject *)*puVar22,MethodInfo_MapScriptBaseObject_get_Item);
            if (pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            pvVar7 = ((Il2CppClass_1 *)&pSVar15->obj)->image;
            plVar20 = (long *)pSVar15;
            (**(code **)((long)pvVar7 + 0x1d8))(pSVar15,pIVar14,*(undefined8 *)((long)pvVar7 + 0x1e0));
          }
          if ((int)(uint)*piVar27 < 0xf) {
            if ((uint)*piVar27 < 3) goto label_040a4765;
            plVar20 = (long *)pSVar19->m_Items[2];
            UVar36.fields.x = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if ((uint)pSVar19->max_length < 4) goto label_040a4765;
            plVar20 = (long *)pSVar19->m_Items[3];
            fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if ((uint)pSVar19->max_length < 5) goto label_040a4765;
            plVar20 = (long *)pSVar19->m_Items[4];
            fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if (pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            UVar36.fields.y = fVar29;
            UVar36.fields.z = fVar30;
            plVar20 = (long *)pSVar15;
            Map_MapScriptBaseObject__SetPosition
                      ((Map_MapScriptBaseObject_o *)pSVar15,UVar36,(MethodInfo *)0x0);
            if ((uint)*piVar27 < 6) goto label_040a4765;
            plVar20 = (long *)pSVar19->m_Items[5];
            UVar38.fields.x = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if ((uint)pSVar19->max_length < 7) goto label_040a4765;
            plVar20 = (long *)pSVar19->m_Items[6];
            fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if ((uint)pSVar19->max_length < 8) goto label_040a4765;
            plVar20 = (long *)pSVar19->m_Items[7];
            fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if ((uint)pSVar19->max_length < 9) goto label_040a4765;
            fVar31 = System_Single__Parse(pSVar19->m_Items[8],(MethodInfo *)0x0);
            UVar38.fields.y = fVar29;
            UVar38.fields.w = fVar31;
            UVar38.fields.z = fVar30;
            plVar20 = (long *)pSVar15;
            Map_MapScriptBaseObject__SetRotation_3fb4ce0
                      ((Map_MapScriptBaseObject_o *)pSVar15,UVar38,(MethodInfo *)0x0);
            uVar3 = (uint)*piVar27;
          }
          else {
            plVar20 = (long *)pSVar19->m_Items[0xc];
            UVar37.fields.x = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if ((uint)pSVar19->max_length < 0xe) goto label_040a4765;
            plVar20 = (long *)pSVar19->m_Items[0xd];
            fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if ((uint)pSVar19->max_length < 0xf) goto label_040a4765;
            plVar20 = (long *)pSVar19->m_Items[0xe];
            fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if (pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            UVar37.fields.y = fVar29;
            UVar37.fields.z = fVar30;
            plVar20 = (long *)pSVar15;
            Map_MapScriptBaseObject__SetPosition
                      ((Map_MapScriptBaseObject_o *)pSVar15,UVar37,(MethodInfo *)0x0);
            if ((uint)*piVar27 < 0x10) goto label_040a4765;
            plVar20 = (long *)pSVar19->m_Items[0xf];
            rotation_02.fields.x = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if ((uint)pSVar19->max_length < 0x11) goto label_040a4765;
            plVar20 = (long *)pSVar19->m_Items[0x10];
            fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if ((uint)pSVar19->max_length < 0x12) goto label_040a4765;
            plVar20 = (long *)pSVar19->m_Items[0x11];
            fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if ((uint)pSVar19->max_length < 0x13) goto label_040a4765;
            fVar31 = System_Single__Parse(pSVar19->m_Items[0x12],(MethodInfo *)0x0);
            rotation_02.fields.y = fVar29;
            rotation_02.fields.w = fVar31;
            rotation_02.fields.z = fVar30;
            plVar20 = (long *)pSVar15;
            Map_MapScriptBaseObject__SetRotation_3fb4ce0
                      ((Map_MapScriptBaseObject_o *)pSVar15,rotation_02,(MethodInfo *)0x0);
            if ((uint)pSVar19->max_length < 4) goto label_040a4765;
            plVar20 = (long *)pSVar19->m_Items[3];
            scale_01.fields.x = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if ((uint)pSVar19->max_length < 5) goto label_040a4765;
            plVar20 = (long *)pSVar19->m_Items[4];
            fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
            if ((uint)pSVar19->max_length < 6) goto label_040a4765;
            fVar30 = System_Single__Parse(pSVar19->m_Items[5],(MethodInfo *)0x0);
            scale_01.fields.y = fVar29;
            scale_01.fields.z = fVar30;
            plVar20 = (long *)pSVar15;
            Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)pSVar15,scale_01,(MethodInfo *)0x0)
            ;
            uVar3 = (uint)*piVar27;
          }
          if (1 < uVar3) {
            plVar20 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
            if (pSVar19->m_Items[1] != (System_String_o *)0x0) {
              pSVar18 = System_String__ToLower(pSVar19->m_Items[1],(MethodInfo *)0x0);
              bVar12 = System_String__op_Equality(pSVar18,"aot_supply",(MethodInfo *)0x0);
              if ((char)bVar12 == '\0') goto label_040a35df;
              UVar36 = Map_MapScriptBaseObject__GetPosition
                                 ((Map_MapScriptBaseObject_o *)pSVar15,(MethodInfo *)0x0);
              UVar37 = Map_MapScriptBaseObject__GetRotation
                                 ((Map_MapScriptBaseObject_o *)pSVar15,(MethodInfo *)0x0);
              euler.fields.x = UVar37.fields.x * 0.017453292;
              euler.fields.y = UVar37.fields.y * 0.017453292;
              euler.fields.z = UVar37.fields.z * 0.017453292;
              UVar38 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
              if (g_data_057ac4bc == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057ac4bc = '\x01';
              }
              UVar37 = UnityEngine_Quaternion__op_Multiply_4debdf0
                                 (UVar38,*(UnityEngine_Vector3_Fields *)
                                          (*(long *)(TypeInfo_Vector3 + 0xb8) + 0x54),(MethodInfo *)0x0);
              uStack_100._0_4_ = UVar36.fields.x;
              uStack_100._4_4_ = UVar36.fields.y;
              uStack_100._0_4_ = UVar37.fields.x * 0.37 + (float)uStack_100;
              uStack_100._4_4_ = UVar37.fields.y * 0.37 + uStack_100._4_4_;
              fVar29 = UVar37.fields.z * 0.37 + UVar36.fields.z;
              goto label_040a35d5;
            }
            goto label_040a47b7;
          }
        }
        goto label_040a4765;
      }
      if ((uint)*piVar27 == 0) goto label_040a4765;
      plVar20 = (long *)pSVar19->m_Items[0];
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
      bVar12 = System_String__StartsWith((System_String_o *)plVar20,"photon",(MethodInfo *)0x0);
      uVar3 = (uint)*piVar27;
      uVar24 = (ulong)uVar3;
      if ((char)bVar12 != '\0') {
        if (1 < uVar3) {
          plVar20 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
          if (pSVar19->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
          plVar20 = (long *)System_String__ToLower(pSVar19->m_Items[1],(MethodInfo *)0x0);
          bVar12 = System_String__op_Equality((System_String_o *)plVar20,"cannonground",(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            if (1 < (uint)*piVar27) {
              plVar20 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
              if (pSVar19->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
              plVar20 = (long *)System_String__ToLower(pSVar19->m_Items[1],(MethodInfo *)0x0);
              bVar12 = System_String__op_Equality((System_String_o *)plVar20,"cannonwall",(MethodInfo *)0x0);
              if ((char)bVar12 != '\0') goto label_040a2fc7;
              if (1 < (uint)*piVar27) {
                plVar20 = (long *)pSVar19->m_Items[1];
                if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
                     (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
                   (pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              System_String__ToLower((System_String_o *)plVar20,(MethodInfo *)0x0),
                   pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
                goto label_040a47b7;
                bVar12 = System_String__StartsWith((System_String_o *)pSVar17,"spawn",(MethodInfo *)0x0);
                if ((char)bVar12 == '\0') goto label_040a43f7;
                if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar20 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
                if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
                     (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
                   (pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)plVar20,
                                         "Titan SpawnPoint",MethodInfo_MapScriptBaseObject_get_Item),
                   pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
                goto label_040a47b7;
                pvVar7 = ((Il2CppClass_1 *)&pSVar15->obj)->image;
                plVar20 = (long *)pSVar15;
                (**(code **)((long)pvVar7 + 0x1d8))(pSVar15,pIVar14,*(undefined8 *)((long)pvVar7 + 0x1e0));
                if (4 < (uint)*piVar27) {
                  plVar20 = (long *)pSVar19->m_Items[4];
                  position_04.fields.x = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                  if (5 < (uint)pSVar19->max_length) {
                    plVar20 = (long *)pSVar19->m_Items[5];
                    fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                    if (6 < (uint)pSVar19->max_length) {
                      fVar30 = System_Single__Parse(pSVar19->m_Items[6],(MethodInfo *)0x0);
                      position_04.fields.y = fVar29;
                      position_04.fields.z = fVar30;
                      plVar20 = (long *)pSVar15;
                      Map_MapScriptBaseObject__SetPosition
                                ((Map_MapScriptBaseObject_o *)pSVar15,position_04,(MethodInfo *)0x0);
                      if (7 < (uint)pSVar19->max_length) {
                        plVar20 = (long *)pSVar19->m_Items[7];
                        fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                        if (8 < (uint)pSVar19->max_length) {
                          plVar20 = (long *)pSVar19->m_Items[8];
                          fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                          if (9 < (uint)pSVar19->max_length) {
                            plVar20 = (long *)pSVar19->m_Items[9];
                            fVar31 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                            if (10 < (uint)pSVar19->max_length) {
                              pSVar18 = pSVar19->m_Items[10];
label_040a3f77:
                              fVar33 = System_Single__Parse(pSVar18,(MethodInfo *)0x0);
                              rotation_04.fields.y = fVar30;
                              rotation_04.fields.x = fVar29;
                              rotation_04.fields.w = fVar33;
                              rotation_04.fields.z = fVar31;
                              Map_MapScriptBaseObject__SetRotation_3fb4ce0
                                        ((Map_MapScriptBaseObject_o *)pSVar15,rotation_04,(MethodInfo *)0x0);
                              goto label_040a35df;
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
          else {
label_040a2fc7:
            if (1 < (uint)*piVar27) {
              plVar20 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
              if (pSVar19->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
              pSVar18 = System_String__ToLower(pSVar19->m_Items[1],(MethodInfo *)0x0);
              bVar12 = System_String__op_Equality(pSVar18,"cannonground",(MethodInfo *)0x0);
              if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              plVar20 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
              if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
                  (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
              if ((char)bVar12 == '\0') {
                puVar22 = &"Cannon3";
              }
              else {
                puVar22 = &"Cannon2";
              }
              pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)plVar20,
                                   (Il2CppObject *)*puVar22,MethodInfo_MapScriptBaseObject_get_Item);
              if (pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
              goto label_040a47b7;
              pvVar7 = ((Il2CppClass_1 *)&pSVar15->obj)->image;
              plVar20 = (long *)pSVar15;
              (**(code **)((long)pvVar7 + 0x1d8))(pSVar15,pIVar14,*(undefined8 *)((long)pvVar7 + 0x1e0));
              if ((int)(uint)*piVar27 < 0xf) {
                if (2 < (uint)*piVar27) {
                  plVar20 = (long *)pSVar19->m_Items[2];
                  position_03.fields.x = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                  if (3 < (uint)pSVar19->max_length) {
                    plVar20 = (long *)pSVar19->m_Items[3];
                    fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                    if (4 < (uint)pSVar19->max_length) {
                      fVar30 = System_Single__Parse(pSVar19->m_Items[4],(MethodInfo *)0x0);
                      position_03.fields.y = fVar29;
                      position_03.fields.z = fVar30;
                      plVar20 = (long *)pSVar15;
                      Map_MapScriptBaseObject__SetPosition
                                ((Map_MapScriptBaseObject_o *)pSVar15,position_03,(MethodInfo *)0x0);
                      if (5 < (uint)pSVar19->max_length) {
                        plVar20 = (long *)pSVar19->m_Items[5];
                        fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                        if (6 < (uint)pSVar19->max_length) {
                          plVar20 = (long *)pSVar19->m_Items[6];
                          fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                          if (7 < (uint)pSVar19->max_length) {
                            plVar20 = (long *)pSVar19->m_Items[7];
                            fVar31 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                            if (8 < (uint)pSVar19->max_length) {
                              pSVar18 = pSVar19->m_Items[8];
                              goto label_040a3f77;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                plVar20 = (long *)pSVar19->m_Items[0xc];
                position_02.fields.x = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                if (0xd < (uint)pSVar19->max_length) {
                  plVar20 = (long *)pSVar19->m_Items[0xd];
                  fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                  if (0xe < (uint)pSVar19->max_length) {
                    fVar30 = System_Single__Parse(pSVar19->m_Items[0xe],(MethodInfo *)0x0);
                    position_02.fields.y = fVar29;
                    position_02.fields.z = fVar30;
                    plVar20 = (long *)pSVar15;
                    Map_MapScriptBaseObject__SetPosition
                              ((Map_MapScriptBaseObject_o *)pSVar15,position_02,(MethodInfo *)0x0);
                    if (0xf < (uint)pSVar19->max_length) {
                      plVar20 = (long *)pSVar19->m_Items[0xf];
                      rotation_03.fields.x =
                           System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                      if (0x10 < (uint)pSVar19->max_length) {
                        plVar20 = (long *)pSVar19->m_Items[0x10];
                        fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                        if (0x11 < (uint)pSVar19->max_length) {
                          plVar20 = (long *)pSVar19->m_Items[0x11];
                          fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                          if (0x12 < (uint)pSVar19->max_length) {
                            fVar31 = System_Single__Parse(pSVar19->m_Items[0x12],(MethodInfo *)0x0);
                            rotation_03.fields.y = fVar29;
                            rotation_03.fields.w = fVar31;
                            rotation_03.fields.z = fVar30;
                            plVar20 = (long *)pSVar15;
                            Map_MapScriptBaseObject__SetRotation_3fb4ce0
                                      ((Map_MapScriptBaseObject_o *)pSVar15,rotation_03,(MethodInfo *)0x0);
                            if (3 < (uint)pSVar19->max_length) {
                              plVar20 = (long *)pSVar19->m_Items[3];
                              fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                              if (4 < (uint)pSVar19->max_length) {
                                plVar20 = (long *)pSVar19->m_Items[4];
                                fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                                if (5 < (uint)pSVar19->max_length) {
                                  pSVar18 = pSVar19->m_Items[5];
                                  goto label_040a2e77;
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
        goto label_040a4765;
      }
      if (uVar3 == 0) goto label_040a4765;
      plVar20 = (long *)pSVar19->m_Items[0];
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
      bVar12 = System_String__StartsWith((System_String_o *)plVar20,"racing",(MethodInfo *)0x0);
      pSVar16 = "";
      if ((char)bVar12 == '\0') {
        if ((int)*piVar27 == 0) goto label_040a4765;
        pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar19->m_Items[0];
        plVar20 = (long *)pSVar17;
        if (pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        bVar12 = System_String__StartsWith((System_String_o *)pSVar17,"map",(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          plVar20 = (long *)pSVar17;
          if ((uint)*piVar27 < 2) goto label_040a4765;
          pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar19->m_Items[1];
          plVar20 = (long *)pSVar17;
          if (pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar12 = System_String__StartsWith((System_String_o *)pSVar17,"disablebounds",(MethodInfo *)0x0);
          uVar24 = CONCAT71((int7)(uVar24 >> 8),1);
          if ((char)bVar12 != '\0') goto label_040a2233;
        }
      }
      else {
        if ((uint)*piVar27 < 2) goto label_040a4765;
        plVar20 = (long *)pSVar19->m_Items[1];
        if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
            (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
        bVar12 = System_String__StartsWith((System_String_o *)plVar20,"start",(MethodInfo *)0x0);
        if ((uint)*piVar27 < 2) goto label_040a4765;
        pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar19->m_Items[1];
        plVar20 = (long *)pSVar17;
        if ((char)bVar12 == '\0') {
          if (pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar12 = System_String__StartsWith((System_String_o *)pSVar17,"end",(MethodInfo *)0x0);
          plVar20 = (long *)pSVar17;
          if ((uint)*piVar27 < 2) goto label_040a4765;
          pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar19->m_Items[1];
          plVar20 = (long *)pSVar17;
          if ((char)bVar12 != '\0') {
            if ("end" != (System_String_o *)0x0) {
              puVar22 = (undefined8 *)&"Racing Finish Region ";
              pSVar18 = "end";
joined_r0x040a3ff1:
              if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
              goto label_040a42da;
            }
            goto label_040a47b7;
          }
          if (pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar12 = System_String__StartsWith((System_String_o *)pSVar17,"kill",(MethodInfo *)0x0);
          plVar20 = (long *)pSVar17;
          if ((uint)*piVar27 < 2) goto label_040a4765;
          pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar19->m_Items[1];
          plVar20 = (long *)pSVar17;
          if ((char)bVar12 != '\0') {
            if ("kill" != (System_String_o *)0x0) {
              puVar22 = (undefined8 *)&"Kill Region ";
              pSVar18 = "kill";
              goto joined_r0x040a3ff1;
            }
            goto label_040a47b7;
          }
          if (pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar12 = System_String__StartsWith((System_String_o *)pSVar17,"checkpoint",(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            plVar20 = (long *)pSVar17;
            if (1 < (uint)*piVar27) {
              if ("checkpoint" != (System_String_o *)0x0) {
                pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                          pSVar19->m_Items[1];
                puVar22 = (undefined8 *)&"Racing Checkpoint Region ";
                plVar20 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                pSVar18 = "checkpoint";
                goto joined_r0x040a3ff1;
              }
              goto label_040a47b7;
            }
            goto label_040a4765;
          }
        }
        else {
          if (("start" == (System_String_o *)0x0) ||
             (puVar22 = &"Racing Start Barrier ", pSVar18 = "start",
             pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
          goto label_040a47b7;
label_040a42da:
          pSVar18 = System_String__Substring
                              ((System_String_o *)pSVar17,(pSVar18->fields)._stringLength,(MethodInfo *)0x0);
          pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)*puVar22;
          pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    System_String__Concat_3ae5ba0((System_String_o *)pSVar17,pSVar18,(MethodInfo *)0x0);
        }
        plVar20 = (long *)pSVar17;
        if (pSVar16 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        if (0 < *(int *)&pSVar16->bounds) {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
          plVar20 = (long *)pSVar16;
          pSVar18 = System_String__ToLower((System_String_o *)pSVar16,(MethodInfo *)0x0);
          if (pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             ((System_Collections_Generic_Dictionary_object__object__o *)pSVar17,
                              (Il2CppObject *)pSVar18,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar12 != '\0') {
            if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar17 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
            pSVar18 = System_String__ToLower((System_String_o *)pSVar16,(MethodInfo *)0x0);
            plVar20 = (long *)pSVar16;
            if ((pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
               (pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar17,
                                     (Il2CppObject *)pSVar18,MethodInfo_MapScriptBaseObject_get_Item), plVar20 = (long *)pSVar17,
               pSVar15 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
              pvVar7 = ((Il2CppClass_1 *)&pSVar15->obj)->image;
              plVar20 = (long *)pSVar15;
              (**(code **)((long)pvVar7 + 0x1d8))(pSVar15,pIVar14,*(undefined8 *)((long)pvVar7 + 0x1e0));
              uVar3 = (uint)*piVar27;
              goto joined_r0x040a2d53;
            }
            goto label_040a47b7;
          }
        }
      }
label_040a43f7:
      plVar20 = (long *)pSVar17;
      if (pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      goto label_040a35df;
    }
    if ((uint)*piVar27 < 2) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[1];
    bVar12 = System_String__op_Equality((System_String_o *)plVar20,"barrier",(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar20 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 !=
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        ppIVar21 = &"LegacyBarrier";
        goto label_040a291b;
      }
      goto label_040a47b7;
    }
    if ((uint)*piVar27 < 2) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[1];
    bVar12 = System_String__op_Equality((System_String_o *)plVar20,"barrierEditor",(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      uStack_b8 = uVar25;
      if (pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      pSVar15->max_length = (il2cpp_array_size_t)"Geometry/Cuboid";
      il2cpp_runtime_helper_022b4080(&pSVar15->max_length);
      pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
      plVar20 = (long *)pSVar17;
      Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)pSVar17,(MethodInfo *)0x0);
      if (pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      pSVar17->bounds = (Il2CppArrayBounds *)"Transparent";
      il2cpp_runtime_helper_022b4080(&pSVar17->bounds);
      __this = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      color_00.fields.b = 1.0;
      color_00.fields.a = 0.32;
      color_00.fields.r = 0.0;
      color_00.fields.g = 0.917;
      Utility_Color255___ctor_4388bb0(__this,color_00,(MethodInfo *)0x0);
      pSVar17->max_length = (il2cpp_array_size_t)__this;
      il2cpp_runtime_helper_022b4080(&pSVar17->max_length,__this);
      plVar20 = (long *)&pSVar15->m_Items[3].fields.value;
      pSVar15->m_Items[3].fields.value = (Il2CppObject *)pSVar17;
      il2cpp_runtime_helper_022b4080();
      uVar3 = (uint)*piVar27;
      uVar25 = uStack_b8;
joined_r0x040a2d53:
      if (5 < uVar3) {
        plVar20 = (long *)pSVar19->m_Items[5];
        position_00.fields.x = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
        if (6 < (uint)pSVar19->max_length) {
          plVar20 = (long *)pSVar19->m_Items[6];
          fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
          if (7 < (uint)pSVar19->max_length) {
            fVar30 = System_Single__Parse(pSVar19->m_Items[7],(MethodInfo *)0x0);
            position_00.fields.y = fVar29;
            position_00.fields.z = fVar30;
            plVar20 = (long *)pSVar15;
            Map_MapScriptBaseObject__SetPosition
                      ((Map_MapScriptBaseObject_o *)pSVar15,position_00,(MethodInfo *)0x0);
            if (8 < (uint)pSVar19->max_length) {
              plVar20 = (long *)pSVar19->m_Items[8];
              rotation_01.fields.x = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
              if (9 < (uint)pSVar19->max_length) {
                plVar20 = (long *)pSVar19->m_Items[9];
                fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                if (10 < (uint)pSVar19->max_length) {
                  plVar20 = (long *)pSVar19->m_Items[10];
                  fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                  if (0xb < (uint)pSVar19->max_length) {
                    fVar31 = System_Single__Parse(pSVar19->m_Items[0xb],(MethodInfo *)0x0);
                    rotation_01.fields.y = fVar29;
                    rotation_01.fields.w = fVar31;
                    rotation_01.fields.z = fVar30;
                    plVar20 = (long *)pSVar15;
                    Map_MapScriptBaseObject__SetRotation_3fb4ce0
                              ((Map_MapScriptBaseObject_o *)pSVar15,rotation_01,(MethodInfo *)0x0);
                    if (2 < (uint)pSVar19->max_length) {
                      plVar20 = (long *)pSVar19->m_Items[2];
                      fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                      if (3 < (uint)pSVar19->max_length) {
                        plVar20 = (long *)pSVar19->m_Items[3];
                        fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                        if (4 < (uint)pSVar19->max_length) {
                          pSVar18 = pSVar19->m_Items[4];
label_040a2e77:
                          fVar31 = System_Single__Parse(pSVar18,(MethodInfo *)0x0);
                          scale_00.fields.y = fVar30;
                          scale_00.fields.x = fVar29;
                          scale_00.fields.z = fVar31;
                          Map_MapScriptBaseObject__SetScale
                                    ((Map_MapScriptBaseObject_o *)pSVar15,scale_00,(MethodInfo *)0x0);
                          goto label_040a35df;
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
      goto label_040a4765;
    }
    if ((uint)*piVar27 < 2) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[1];
    bVar12 = System_String__op_Equality((System_String_o *)plVar20,"racingStart",(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar20 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 !=
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        ppIVar21 = (Il2CppObject **)&"Racing Start Barrier Cuboid";
label_040a291b:
        pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)plVar20,*ppIVar21,
                             MethodInfo_MapScriptBaseObject_get_Item);
        if (pSVar15 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          pvVar7 = ((Il2CppClass_1 *)&pSVar15->obj)->image;
          plVar20 = (long *)pSVar15;
          (**(code **)((long)pvVar7 + 0x1d8))(pSVar15,pIVar14,*(undefined8 *)((long)pvVar7 + 0x1e0));
          uVar3 = (uint)*piVar27;
          goto joined_r0x040a2d53;
        }
      }
      goto label_040a47b7;
    }
    if ((uint)*piVar27 < 2) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[1];
    bVar12 = System_String__op_Equality((System_String_o *)plVar20,"racingEnd",(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar20 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 !=
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        ppIVar21 = (Il2CppObject **)&"Racing Finish Region Cuboid";
        goto label_040a291b;
      }
      goto label_040a47b7;
    }
    if ((uint)*piVar27 < 2) goto label_040a4765;
    pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar19->m_Items[1];
    bVar12 = System_String__op_Equality((System_String_o *)pSVar17,"region",(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') goto label_040a43f7;
  }
  else {
    if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar20 = (long *)TypeInfo_BuiltinMapPrefabs;
    if ((uint)*piVar27 < 2) goto label_040a4765;
    pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar19->m_Items[1];
    if (pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    pSVar16 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
    pSVar18 = System_String__ToLower((System_String_o *)pSVar17,(MethodInfo *)0x0);
    plVar20 = (long *)pSVar17;
    if (pSVar16 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pSVar16,
                        (Il2CppObject *)pSVar18,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar12 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar20 = (long *)TypeInfo_BuiltinMapPrefabs;
      if ((uint)*piVar27 < 2) goto label_040a4765;
      pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar19->m_Items[1];
      if (pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      pSVar16 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
      pSVar18 = System_String__ToLower((System_String_o *)pSVar17,(MethodInfo *)0x0);
      plVar20 = (long *)pSVar17;
      if ((pSVar16 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
         (pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar16,
                               (Il2CppObject *)pSVar18,MethodInfo_MapScriptBaseObject_get_Item), plVar20 = (long *)pSVar16,
         pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
      goto label_040a47b7;
      pvVar7 = ((Il2CppClass_1 *)&pSVar15->obj)->image;
      pSVar16 = pSVar15;
      (**(code **)((long)pvVar7 + 0x1d8))(pSVar15,pIVar14,*(undefined8 *)((long)pvVar7 + 0x1e0));
    }
    plVar20 = (long *)pSVar16;
    if ((uint)*piVar27 < 0xd) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[0xc];
    position.fields.x = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
    if ((uint)pSVar19->max_length < 0xe) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[0xd];
    fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
    if ((uint)pSVar19->max_length < 0xf) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[0xe];
    fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
    if (pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    position.fields.y = fVar29;
    position.fields.z = fVar30;
    plVar20 = (long *)pSVar15;
    Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)pSVar15,position,(MethodInfo *)0x0);
    if ((uint)*piVar27 < 0x10) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[0xf];
    rotation_00.fields.x = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
    if ((uint)pSVar19->max_length < 0x11) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[0x10];
    fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
    if ((uint)pSVar19->max_length < 0x12) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[0x11];
    fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
    if ((uint)pSVar19->max_length < 0x13) goto label_040a4765;
    fVar31 = System_Single__Parse(pSVar19->m_Items[0x12],(MethodInfo *)0x0);
    rotation_00.fields.y = fVar29;
    rotation_00.fields.w = fVar31;
    rotation_00.fields.z = fVar30;
    plVar20 = (long *)pSVar15;
    Map_MapScriptBaseObject__SetRotation_3fb4ce0
              ((Map_MapScriptBaseObject_o *)pSVar15,rotation_00,(MethodInfo *)0x0);
    if ((uint)pSVar19->max_length < 4) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[3];
    scale.fields.x = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
    if ((uint)pSVar19->max_length < 5) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[4];
    fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
    if ((uint)pSVar19->max_length < 6) goto label_040a4765;
    fVar30 = System_Single__Parse(pSVar19->m_Items[5],(MethodInfo *)0x0);
    scale.fields.y = fVar29;
    scale.fields.z = fVar30;
    plVar20 = (long *)pSVar15;
    Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)pSVar15,scale,(MethodInfo *)0x0);
    if ((uint)pSVar19->max_length < 3) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[2];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              System_String__ToLower((System_String_o *)plVar20,(MethodInfo *)0x0);
    uStack_100 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                 pSVar15->m_Items[3].fields.value;
    if ((uStack_100 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
       ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)uStack_100->max_length ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_040a47b7;
    fVar29 = (float)*(int *)((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                    uStack_100->max_length)->max_length + 4) / 255.0;
    plVar20 = (long *)pSVar17;
    bVar12 = System_String__op_Inequality((System_String_o *)pSVar17,"default",(MethodInfo *)0x0);
    uStack_b8 = uVar25;
    if ((char)bVar12 == '\0') {
label_040a26e1:
      uVar3 = (uint)*piVar27;
    }
    else {
      if (pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      bVar12 = System_String__StartsWith((System_String_o *)pSVar17,"transparent",(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        uStack_100 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                     il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
        plVar20 = (long *)uStack_100;
        Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)uStack_100,(MethodInfo *)0x0);
        if (uStack_100 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_100->bounds)->_buckets =
               "Transparent";
          il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                             &uStack_100->bounds);
          plVar20 = (long *)System_String__Substring((System_String_o *)pSVar17,0xb,(MethodInfo *)0x0);
          bVar12 = System_Single__TryParse((System_String_o *)plVar20,&fStack_bc,(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            fVar29 = fStack_bc;
          }
          goto label_040a26e1;
        }
        goto label_040a47b7;
      }
      bVar12 = System_String__op_Equality((System_String_o *)pSVar17,"empty",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        bVar12 = System_String__op_Equality((System_String_o *)pSVar17,"ice1",(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
          bVar12 = System_String__op_Equality((System_String_o *)pSVar17,"barriereditormat",(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            bVar12 = System_String__op_Equality((System_String_o *)pSVar17,"regioneditormat",(MethodInfo *)0x0);
            if ((char)bVar12 != '\0') {
              uStack_100 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                           il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
              plVar20 = (long *)uStack_100;
              Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)uStack_100,(MethodInfo *)0x0);
              if (uStack_100 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_100->bounds)->
                _buckets = "Transparent";
                il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                                   &uStack_100->bounds);
                pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
                uVar32 = 0x3f800000;
                uVar34 = 0;
                uVar35 = 0;
                goto label_040a3b60;
              }
              goto label_040a47b7;
            }
            bVar12 = System_String__op_Equality((System_String_o *)pSVar17,"bombexplosiontex",(MethodInfo *)0x0);
            if ((char)bVar12 != '\0') {
              uStack_100 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                           il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
              Map_MapScriptLegacyMaterial___ctor
                        ((Map_MapScriptLegacyMaterial_o *)uStack_100,(MethodInfo *)0x0);
              if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              plVar20 = (long *)TypeInfo_MapObjectShader;
              if (uStack_100 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                pSVar26 = (System_Int32_array *)TypeInfo_MapObjectShader->m_Items[6].fields.key[3].klass;
                goto label_040a40a5;
              }
              goto label_040a47b7;
            }
            bVar12 = System_String__op_Equality((System_String_o *)pSVar17,"cannonregionmat",(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
              bVar12 = System_String__op_Equality((System_String_o *)pSVar17,"bombtex",(MethodInfo *)0x0);
              if ((char)bVar12 == '\0') {
                bVar12 = System_String__op_Equality((System_String_o *)pSVar17,"cannonballtrail",(MethodInfo *)0x0)
                ;
                if ((char)bVar12 == '\0') {
                  uStack_100 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                               il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
                  plVar20 = (long *)uStack_100;
                  Map_MapScriptBasicMaterial___ctor
                            ((Map_MapScriptBasicMaterial_o *)uStack_100,(MethodInfo *)0x0);
                  if (uStack_100 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                  goto label_040a47b7;
                  ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_100->bounds)->
                  _buckets = "Basic";
                  il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                                     &uStack_100->bounds);
                  bVar12 = System_String__op_Equality
                                     ((System_String_o *)pSVar17,"bark",(MethodInfo *)0x0);
                  if (((char)bVar12 == '\0') &&
                     (bVar12 = System_String__op_Equality
                                         ((System_String_o *)pSVar17,"grass",(MethodInfo *)0x0),
                     (char)bVar12 == '\0')) {
                    if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) != 0) goto label_040a45cb;
label_040a4594:
                    il2cpp_runtime_helper_02337ed0();
                    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                 (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      plVar20 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0
                      ;
                      goto label_040a47b7;
                    }
                  }
                  else {
                    pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              System_String__Concat_3ae5ba0
                                        ((System_String_o *)pSVar17,"1",(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) goto label_040a4594;
label_040a45cb:
                    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                 (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                    plVar20 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_040a47b7;
                  }
                  bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                     (__this_00,&pSVar17->obj,MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar12 == '\0') {
                    plVar20 = (long *)System_String__Concat_3ae5ba0
                                                ("Unhandled legacy texture: ",(System_String_o *)pSStack_b0,(MethodInfo *)0x0)
                    ;
                    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Debug__Log((Il2CppObject *)plVar20,(MethodInfo *)0x0);
                    uVar3 = (uint)*piVar27;
                    goto joined_r0x040a475f;
                  }
                  if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  plVar20 = *(long **)(*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                  if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
                       (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
                     (pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                                          ((System_Collections_Generic_Dictionary_object__object__o *)plVar20,
                                           &pSVar17->obj,MethodInfo_MapScriptBasicMaterial_get_Item), pIVar5 = TypeInfo_MapScriptBasicMaterial,
                     pIVar14 == (Il2CppObject *)0x0)) goto label_040a47b7;
                  pSVar8 = ((Il2CppClass_1 *)&uStack_100->obj)->image;
                  bVar2 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
                  if (((pSVar8->_2).naturalAligment < bVar2) ||
                     ((ppIVar9 = (pSVar8->_2).typeHierarchy, ppIVar9[(ulong)bVar2 - 1] != TypeInfo_MapScriptBasicMaterial ||
                      (*(Il2CppClass **)&uStack_100->m_Items[0].fields = pIVar14[2].klass,
                      ppIVar9[(ulong)bVar2 - 1] != pIVar5)))) goto label_040a47bc;
                  plVar20 = (long *)uStack_100->m_Items;
                  il2cpp_runtime_helper_022b4080();
                  if (10 < (uint)*piVar27) {
                    plVar20 = (long *)pSVar19->m_Items[10];
                    fVar31 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                    if (0xb < (uint)pSVar19->max_length) {
                      fVar30 = System_Single__Parse(pSVar19->m_Items[0xb],(MethodInfo *)0x0);
                      pSVar8 = ((Il2CppClass_1 *)&uStack_100->obj)->image;
                      bVar2 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
                      if ((bVar2 <= (pSVar8->_2).naturalAligment) &&
                         ((pSVar8->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_MapScriptBasicMaterial)) goto label_040a3212;
                      goto label_040a47bc;
                    }
                  }
                  goto label_040a4765;
                }
                uStack_100 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                             il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
                Map_MapScriptLegacyMaterial___ctor
                          ((Map_MapScriptLegacyMaterial_o *)uStack_100,(MethodInfo *)0x0);
                if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar20 = (long *)TypeInfo_MapObjectShader;
                if (uStack_100 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                goto label_040a47b7;
                pSVar26 = TypeInfo_MapObjectShader->m_Items[6].fields.key[4].monitor;
              }
              else {
                uStack_100 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                             il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
                Map_MapScriptLegacyMaterial___ctor
                          ((Map_MapScriptLegacyMaterial_o *)uStack_100,(MethodInfo *)0x0);
                if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar20 = (long *)TypeInfo_MapObjectShader;
                if (uStack_100 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                goto label_040a47b7;
                pSVar26 = (System_Int32_array *)TypeInfo_MapObjectShader->m_Items[6].fields.key[4].klass;
              }
label_040a40a5:
              ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_100->bounds)->_buckets
                   = pSVar26;
              il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                                 &uStack_100->bounds);
              pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              color_02.fields.b = 0.5;
              color_02.fields.a = 0.5;
              color_02.fields.r = 0.5;
              color_02.fields.g = 0.5;
              Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar16,color_02,(MethodInfo *)0x0);
              plVar20 = (long *)&uStack_100->max_length;
              uStack_100->max_length = (il2cpp_array_size_t)pSVar16;
              il2cpp_runtime_helper_022b4080();
              if (10 < (uint)*piVar27) {
                plVar20 = (long *)pSVar19->m_Items[10];
                fVar29 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                if (0xb < (uint)pSVar19->max_length) {
                  plVar20 = (long *)pSVar19->m_Items[0xb];
                  fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
                  uStack_100->m_Items[0].fields.hashCode = (int32_t)fVar29;
                  uStack_100->m_Items[0].fields.next = (int32_t)fVar30;
                  fVar29 = 0.5;
                  uVar3 = (uint)*piVar27;
                  goto joined_r0x040a475f;
                }
              }
              goto label_040a4765;
            }
            uStack_100 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                         il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
            Map_MapScriptLegacyMaterial___ctor((Map_MapScriptLegacyMaterial_o *)uStack_100,(MethodInfo *)0x0);
            if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            plVar20 = (long *)TypeInfo_MapObjectShader;
            if (uStack_100 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_100->bounds)->_buckets =
                 TypeInfo_MapObjectShader->m_Items[6].fields.key[3].monitor;
            il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                               &uStack_100->bounds);
            pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            color_03.fields.b = 0.0;
            color_03.fields.a = 1.0;
            color_03.fields.r = 0.0;
            color_03.fields.g = 1.0;
            Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar16,color_03,(MethodInfo *)0x0);
            plVar20 = (long *)&uStack_100->max_length;
            uStack_100->max_length = (il2cpp_array_size_t)pSVar16;
            il2cpp_runtime_helper_022b4080();
            fVar29 = 1.0;
          }
          else {
            uStack_100 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                         il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
            plVar20 = (long *)uStack_100;
            Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)uStack_100,(MethodInfo *)0x0);
            if (uStack_100 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_100->bounds)->_buckets =
                 "Transparent";
            il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                               &uStack_100->bounds);
            pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            uVar32 = 0;
            uVar34 = 0x3f6ac083;
            uVar35 = 0x3f800000;
label_040a3b60:
            color_01.fields.g = (float)uVar34;
            color_01.fields.r = (float)uVar32;
            color_01.fields.a = 0.325;
            color_01.fields.b = (float)uVar35;
            Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar16,color_01,(MethodInfo *)0x0);
            plVar20 = (long *)&uStack_100->max_length;
            uStack_100->max_length = (il2cpp_array_size_t)pSVar16;
            il2cpp_runtime_helper_022b4080();
            fVar29 = 0.32;
          }
          uVar3 = (uint)*piVar27;
        }
        else {
          uStack_100 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                       il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptReflectiveMaterial);
          plVar20 = (long *)uStack_100;
          Map_MapScriptReflectiveMaterial___ctor
                    ((Map_MapScriptReflectiveMaterial_o *)uStack_100,(MethodInfo *)0x0);
          if (uStack_100 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_100->bounds)->_buckets =
               "Reflective";
          il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                             &uStack_100->bounds);
          pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          Utility_Color255___ctor((Utility_Color255_o *)pSVar16,0xb2,0xe3,0xff,0xff,(MethodInfo *)0x0);
          uStack_100->max_length = (il2cpp_array_size_t)pSVar16;
          il2cpp_runtime_helper_022b4080(&uStack_100->max_length);
          if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar20 = *(long **)(*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
          if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
               (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
             (pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)plVar20,
                                   (Il2CppObject *)pSVar17,MethodInfo_MapScriptBasicMaterial_get_Item), pIVar5 = TypeInfo_MapScriptBasicMaterial,
             pIVar14 == (Il2CppObject *)0x0)) goto label_040a47b7;
          pSVar8 = ((Il2CppClass_1 *)&uStack_100->obj)->image;
          bVar2 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
          if (((pSVar8->_2).naturalAligment < bVar2) ||
             ((ppIVar9 = (pSVar8->_2).typeHierarchy, ppIVar9[(ulong)bVar2 - 1] != TypeInfo_MapScriptBasicMaterial ||
              (*(Il2CppClass **)&uStack_100->m_Items[0].fields = pIVar14[2].klass,
              ppIVar9[(ulong)bVar2 - 1] != pIVar5)))) goto label_040a47bc;
          plVar20 = (long *)uStack_100->m_Items;
          il2cpp_runtime_helper_022b4080();
          if ((uint)*piVar27 < 0xb) goto label_040a4765;
          plVar20 = (long *)pSVar19->m_Items[10];
          fStack_a0 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
          if ((uint)pSVar19->max_length < 0xc) goto label_040a4765;
          fVar30 = System_Single__Parse(pSVar19->m_Items[0xb],(MethodInfo *)0x0);
          pSVar8 = ((Il2CppClass_1 *)&uStack_100->obj)->image;
          bVar2 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
          if (((pSVar8->_2).naturalAligment < bVar2) ||
             (fVar31 = fStack_a0, (pSVar8->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapScriptBasicMaterial))
          goto label_040a47bc;
label_040a3212:
          *(float *)&uStack_100->m_Items[0].fields.key = fVar31;
          *(float *)((long)&uStack_100->m_Items[0].fields.key + 4) = fVar30;
          uVar3 = (uint)*piVar27;
          plVar20 = (long *)uStack_100;
        }
      }
      else {
        uStack_100 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                     il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
        plVar20 = (long *)uStack_100;
        Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)uStack_100,(MethodInfo *)0x0);
        if (uStack_100 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        plVar20 = (long *)&uStack_100->bounds;
        ((System_Collections_Generic_Dictionary_object__object__Fields *)&uStack_100->bounds)->_buckets =
             "Basic";
        il2cpp_runtime_helper_022b4080();
        uVar3 = (uint)*piVar27;
      }
    }
joined_r0x040a475f:
    if (uVar3 < 2) goto label_040a4765;
    plVar20 = (long *)pSVar19->m_Items[1];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar20 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    pSVar18 = System_String__ToLower((System_String_o *)plVar20,(MethodInfo *)0x0);
    if ((uint)*piVar27 < 7) goto label_040a4765;
    bVar12 = System_String__op_Inequality(pSVar19->m_Items[6],"0",(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      plVar20 = (long *)pSVar17;
      bVar12 = System_String__op_Inequality((System_String_o *)pSVar17,"default",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        if (pSVar18 == (System_String_o *)0x0) goto label_040a47b7;
        bVar12 = System_String__StartsWith(pSVar18,"start",(MethodInfo *)0x0);
        if (((((char)bVar12 != '\0') ||
             (bVar12 = System_String__StartsWith(pSVar18,"kill",(MethodInfo *)0x0), (char)bVar12 != '\0'
             )) || (bVar12 = System_String__StartsWith(pSVar18,"end",(MethodInfo *)0x0),
                   (char)bVar12 != '\0')) ||
           (bVar12 = System_String__StartsWith(pSVar18,"checkpoint",(MethodInfo *)0x0), (char)bVar12 != '\0'))
        goto label_040a2c3d;
      }
      bVar12 = System_String__op_Equality((System_String_o *)pSVar17,"cannonregionmat",(MethodInfo *)0x0);
      plVar20 = (long *)pSVar17;
      if ((char)bVar12 == '\0') {
        if ((uint)*piVar27 < 8) goto label_040a4765;
        plVar20 = (long *)pSVar19->m_Items[7];
        fVar30 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
        if ((uint)pSVar19->max_length < 9) goto label_040a4765;
        plVar20 = (long *)pSVar19->m_Items[8];
        fVar31 = System_Single__Parse((System_String_o *)plVar20,(MethodInfo *)0x0);
        if ((uint)pSVar19->max_length < 10) goto label_040a4765;
        fStack_a0 = System_Single__Parse(pSVar19->m_Items[9],(MethodInfo *)0x0);
        pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        fVar33 = fStack_a0;
      }
      else {
        if ((uint)*piVar27 < 9) goto label_040a4765;
        fVar31 = System_Single__Parse(pSVar19->m_Items[8],(MethodInfo *)0x0);
        pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        fVar30 = 0.0;
        fVar33 = 0.0;
      }
      color.fields.g = fVar31;
      color.fields.r = fVar30;
      color.fields.a = fVar29;
      color.fields.b = fVar33;
      plVar20 = (long *)pSVar17;
      Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar17,color,(MethodInfo *)0x0);
      if (uStack_100 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      uStack_100->max_length = (il2cpp_array_size_t)pSVar17;
      il2cpp_runtime_helper_022b4080(&uStack_100->max_length,pSVar17);
    }
label_040a2c3d:
    pSVar15->m_Items[3].fields.value = &uStack_100->obj;
    il2cpp_runtime_helper_022b4080();
    uVar25 = uStack_b8;
label_040a35df:
    plVar20 = (long *)pSVar15->max_length;
    bVar12 = System_String__op_Equality((System_String_o *)plVar20,"None",(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      plVar20 = (long *)pSVar15->m_Items[0].fields.value;
      bVar12 = System_String__op_Equality((System_String_o *)plVar20,"Unnamed",(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Concat_3ae5ba0("Unhandled legacy object: ",(System_String_o *)pSStack_b0,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar17,(MethodInfo *)0x0);
        uVar24 = uVar25 & 0xffffffff;
        goto label_040a2233;
      }
    }
    if (g_data_057ac494 == '\0') {
      plVar20 = &TypeInfo_MapConverter;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac494 = '\x01';
    }
    iVar23 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
    **(int **)(TypeInfo_MapConverter + 0xb8) = iVar23;
    pSVar15->m_Items[0].fields.hashCode = iVar23;
    lVar11 = MethodInfo_Void_Add;
    pIVar14 = pSStack_a8->m_Items[0].fields.value;
    if ((pIVar14 == (Il2CppObject *)0x0) ||
       (pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pIVar14[1].klass,
       plVar20 = (long *)pSVar17,
       pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_040a47b7;
    piVar1 = (int *)((long)&pSVar17->max_length + 4);
    *piVar1 = *piVar1 + 1;
    pSVar26 = ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar17->bounds)->_buckets;
    if (pSVar26 == (System_Int32_array *)0x0) goto label_040a47b7;
    uVar3 = *(uint *)&pSVar17->max_length;
    if (uVar3 < (uint)pSVar26->max_length) {
      *(uint *)&pSVar17->max_length = uVar3 + 1;
      pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                (pSVar26->m_Items + (long)(int)uVar3 * 2);
      *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
       (pSVar26->m_Items + (long)(int)uVar3 * 2) = pSVar15;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar17,(Il2CppObject *)pSVar15,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar24 = uVar25 & 0xffffffff;
label_040a2233:
  uVar28 = uVar28 + 1;
  uVar3 = (uint)pSStack_90->max_length;
  uVar25 = uVar24 & 0xffffffff;
  if ((int)uVar3 <= (int)uVar28) goto label_040a476c;
  plVar20 = (long *)pSVar17;
  if (uVar3 <= uVar28) goto label_040a4765;
  goto label_040a2257;
}


// Map.MapConverter$$Convert
// il2cpp: Map_MapScript_o* Map_MapConverter__Convert (System_String_o* map, const MethodInfo* method);
// 0x40a1b70

Map_MapScript_o * Map_MapConverter__Convert(System_String_o *map,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  Il2CppClass *pIVar6;
  Il2CppClass *pIVar7;
  Il2CppClass **ppIVar8;
  Il2CppArrayBounds *pIVar9;
  long lVar10;
  bool_conflict bVar11;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar12;
  Map_MapScriptSceneObject_o *pMVar13;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar14;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar15;
  System_String_o *pSVar16;
  System_Char_array *separator;
  System_String_array *pSVar17;
  Il2CppObject *pIVar18;
  long *plVar19;
  Il2CppObject **ppIVar20;
  undefined8 *puVar21;
  Utility_Color255_o *__this;
  System_Collections_Generic_List_MapScriptBaseObject__o *collection;
  Map_MapScript_o *extraout_RAX;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  System_Int32_array *pSVar25;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  il2cpp_array_size_t *piVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar31;
  float fVar32;
  float fVar30;
  undefined4 uVar33;
  undefined4 uVar34;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o scale;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o scale_00;
  UnityEngine_Vector3_o scale_01;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o UVar36;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o position_04;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Quaternion_o rotation_00;
  UnityEngine_Quaternion_o rotation_01;
  UnityEngine_Quaternion_o UVar37;
  UnityEngine_Color_o color_01;
  UnityEngine_Quaternion_o rotation_02;
  UnityEngine_Quaternion_o rotation_03;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  undefined8 local_a8;
  float local_64;
  ulong local_60;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *local_58;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *local_50;
  float local_48;
  System_String_array *local_38;
  
  if (g_data_057ac493 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapConverter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptReflectiveMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"racingEnd");
    il2cpp_runtime_helper_023445d0(&"Racing Finish Region Cuboid");
    il2cpp_runtime_helper_023445d0(&"regioneditormat");
    il2cpp_runtime_helper_023445d0(&"map");
    il2cpp_runtime_helper_023445d0(&"custom");
    il2cpp_runtime_helper_023445d0(&"bombexplosiontex");
    il2cpp_runtime_helper_023445d0(&"racingStart");
    il2cpp_runtime_helper_023445d0(&"Unhandled legacy object: ");
    il2cpp_runtime_helper_023445d0(&"//");
    il2cpp_runtime_helper_023445d0(&"Cannon2");
    il2cpp_runtime_helper_023445d0(&"bark");
    il2cpp_runtime_helper_023445d0(&"cannonwall");
    il2cpp_runtime_helper_023445d0(&"start");
    il2cpp_runtime_helper_023445d0(&"LegacyBarrier");
    il2cpp_runtime_helper_023445d0(&"barriereditormat");
    il2cpp_runtime_helper_023445d0(&"Racing Checkpoint Region ");
    il2cpp_runtime_helper_023445d0(&"Unhandled legacy texture: ");
    il2cpp_runtime_helper_023445d0(&"base");
    il2cpp_runtime_helper_023445d0(&"\r\n");
    il2cpp_runtime_helper_023445d0(&"aot_supply");
    il2cpp_runtime_helper_023445d0(&"disablebounds");
    il2cpp_runtime_helper_023445d0(&"cannonregionmat");
    il2cpp_runtime_helper_023445d0(&"Reflective");
    il2cpp_runtime_helper_023445d0(&"playerc");
    il2cpp_runtime_helper_023445d0(&"levelbottom");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Racing Start Barrier ");
    il2cpp_runtime_helper_023445d0(&"Human SpawnPoint");
    il2cpp_runtime_helper_023445d0(&"cannonground");
    il2cpp_runtime_helper_023445d0(&"Cannon3");
    il2cpp_runtime_helper_023445d0(&"grass");
    il2cpp_runtime_helper_023445d0(&"LevelBottom");
    il2cpp_runtime_helper_023445d0(&"misc");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"barrier");
    il2cpp_runtime_helper_023445d0(&"titan");
    il2cpp_runtime_helper_023445d0(&"ice1");
    il2cpp_runtime_helper_023445d0(&"transparent");
    il2cpp_runtime_helper_023445d0(&"Racing Start Barrier Cuboid");
    il2cpp_runtime_helper_023445d0(&"region");
    il2cpp_runtime_helper_023445d0(&"spawnpoint");
    il2cpp_runtime_helper_023445d0(&"racing");
    il2cpp_runtime_helper_023445d0(&"Geometry/Cuboid");
    il2cpp_runtime_helper_023445d0(&"Human SpawnPoint (red)");
    il2cpp_runtime_helper_023445d0(&"photon");
    il2cpp_runtime_helper_023445d0(&"Human SpawnPoint (blue)");
    il2cpp_runtime_helper_023445d0(&"barrierEditor");
    il2cpp_runtime_helper_023445d0(&"Basic");
    il2cpp_runtime_helper_023445d0(&"end");
    il2cpp_runtime_helper_023445d0(&"cannonballtrail");
    il2cpp_runtime_helper_023445d0(&"spawn");
    il2cpp_runtime_helper_023445d0(&"Supply1");
    il2cpp_runtime_helper_023445d0(&"Kill Region ");
    il2cpp_runtime_helper_023445d0(&"Unnamed");
    il2cpp_runtime_helper_023445d0(&"\\s+");
    il2cpp_runtime_helper_023445d0(&"playerm");
    il2cpp_runtime_helper_023445d0(&"kill");
    il2cpp_runtime_helper_023445d0(&"Titan SpawnPoint");
    il2cpp_runtime_helper_023445d0(&"Racing Finish Region ");
    il2cpp_runtime_helper_023445d0(&"bombtex");
    il2cpp_runtime_helper_023445d0(&"player");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"\r");
    il2cpp_runtime_helper_023445d0(&"checkpoint");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"empty");
    il2cpp_runtime_helper_023445d0(&"Transparent");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057ac493 = '\x01';
  }
  local_64 = 0.0;
  **(undefined4 **)(TypeInfo_MapConverter + 0xb8) = 0;
  pSVar12 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
  plVar19 = (long *)pSVar12;
  Map_MapScript___ctor((Map_MapScript_o *)pSVar12,(MethodInfo *)0x0);
  if ((pSVar12 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
     (pIVar18 = pSVar12->m_Items[0].fields.value, pIVar18 == (Il2CppObject *)0x0)) goto label_040a47b7;
  pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pIVar18[1].klass;
  pMVar13 = Map_MapConverter__CreateForestFloor((MethodInfo *)plVar19);
  lVar10 = MethodInfo_Void_Add;
  if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
  piVar1 = (int32_t *)((long)&pSVar14->max_length + 4);
  *piVar1 = *piVar1 + 1;
  pSVar5 = ((System_Collections_Generic_List_object__Fields *)&pSVar14->bounds)->_items;
  if (pSVar5 == (System_Object_array *)0x0) goto label_040a47b7;
  uVar27 = *(uint *)&pSVar14->max_length;
  if (uVar27 < (uint)pSVar5->max_length) {
    *(uint *)&pSVar14->max_length = uVar27 + 1;
    pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              (pSVar5->m_Items + (int)uVar27);
    pSVar5->m_Items[(int)uVar27] = (Il2CppObject *)pMVar13;
    il2cpp_runtime_helper_022b4080();
    pIVar18 = pSVar12->m_Items[0].fields.value;
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)pMVar13,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    pIVar18 = pSVar12->m_Items[0].fields.value;
  }
  plVar19 = (long *)pSVar14;
  if (pIVar18 == (Il2CppObject *)0x0) goto label_040a47b7;
  pIVar6 = pIVar18[1].klass;
  pMVar13 = Map_MapConverter__CreateLight((MethodInfo *)pSVar14);
  lVar10 = MethodInfo_Void_Add;
  plVar19 = (long *)pSVar14;
  if (pIVar6 == (Il2CppClass *)0x0) goto label_040a47b7;
  piVar1 = (int32_t *)((long)&(pIVar6->_1).namespaze + 4);
  *piVar1 = *piVar1 + 1;
  pSVar5 = ((System_Collections_Generic_List_object__Fields *)&(pIVar6->_1).name)->_items;
  if (pSVar5 == (System_Object_array *)0x0) goto label_040a47b7;
  uVar27 = *(uint *)&(pIVar6->_1).namespaze;
  if (uVar27 < (uint)pSVar5->max_length) {
    *(uint *)&(pIVar6->_1).namespaze = uVar27 + 1;
    pSVar5->m_Items[(int)uVar27] = (Il2CppObject *)pMVar13;
    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar27,pMVar13);
    iVar22 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pIVar6,(Il2CppObject *)pMVar13,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    iVar22 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  if (iVar22 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            System_Text_RegularExpressions_Regex__Replace
                      (map,"\\s+",(System_String_o *)"",(MethodInfo *)0x0);
  plVar19 = (long *)map;
  if (((pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
      (pSVar15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                 System_String__Replace_3af9030
                           ((System_String_o *)pSVar14,"\r\n",(System_String_o *)"",
                            (MethodInfo *)0x0), plVar19 = (long *)pSVar14,
      pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) ||
     (pSVar16 = System_String__Replace_3af9030
                          ((System_String_o *)pSVar15,"\n",(System_String_o *)"",
                           (MethodInfo *)0x0), plVar19 = (long *)pSVar15, pSVar16 == (System_String_o *)0x0))
  goto label_040a47b7;
  pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            System_String__Replace_3af9030
                      (pSVar16,"\r",(System_String_o *)"",(MethodInfo *)0x0);
  plVar19 = (long *)TypeInfo_char;
  separator = (System_Char_array *)il2cpp_runtime_helper_022b2a40();
  if (separator == (System_Char_array *)0x0) goto label_040a47b7;
  if ((int)separator->max_length == 0) {
label_040a4765:
    il2cpp_runtime_helper_022b2ca0();
    pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19;
label_040a476a:
    uVar23 = 0;
label_040a476c:
    pSVar12 = local_50;
    if ((uVar23 & 1) != 0) {
      return (Map_MapScript_o *)local_50;
    }
    pIVar18 = local_50->m_Items[0].fields.value;
    plVar19 = (long *)pSVar14;
    if (pIVar18 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar18[1].klass;
      collection = Map_MapConverter__CreateFengBounds((MethodInfo *)pSVar14);
      plVar19 = (long *)pSVar14;
      if (pIVar6 != (Il2CppClass *)0x0) {
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pIVar6,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
        return (Map_MapScript_o *)pSVar12;
      }
    }
label_040a47b7:
    local_a8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19;
    il2cpp_runtime_helper_022b2c90();
label_040a47bc:
    il2cpp_runtime_helper_022b2fd0();
    System_Object___ctor(&local_a8->obj,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  separator->m_Items[0] = 0x3b;
  if ((pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
     (pSVar17 = System_String__Split_3af9a70((System_String_o *)pSVar14,separator,(MethodInfo *)0x0),
     plVar19 = (long *)pSVar14, pSVar17 == (System_String_array *)0x0)) goto label_040a47b7;
  iVar22 = (int)pSVar17->max_length;
  uVar27 = 0;
  local_50 = pSVar12;
  if (iVar22 < 1) goto label_040a476a;
  uVar24 = 0;
  local_38 = pSVar17;
  if (iVar22 == 0) goto label_040a4765;
label_040a2257:
  pSVar12 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)local_38->m_Items[(int)uVar27];
  plVar19 = (long *)pSVar14;
  if (((pSVar12 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
      (plVar19 = (long *)pSVar12,
      pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Trim((System_String_o *)pSVar12,(MethodInfo *)0x0),
      pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) ||
     (pSVar17 = System_String__Split((System_String_o *)pSVar14,0x2c,0,(MethodInfo *)0x0),
     plVar19 = (long *)pSVar14, pSVar17 == (System_String_array *)0x0)) goto label_040a47b7;
  uVar23 = uVar24;
  if (pSVar17->max_length == 0) goto label_040a2233;
  if ((int)pSVar17->max_length == 0) goto label_040a4765;
  pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar17->m_Items[0];
  plVar19 = (long *)pSVar14;
  if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
  bVar11 = System_String__StartsWith((System_String_o *)pSVar14,_DAT_055be878,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') goto label_040a2233;
  pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            System_String__Trim((System_String_o *)pSVar12,(MethodInfo *)0x0);
  bVar11 = System_String__op_Equality
                     ((System_String_o *)pSVar14,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') goto label_040a2233;
  piVar26 = &pSVar17->max_length;
  local_58 = pSVar12;
  pSVar12 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  plVar19 = (long *)pSVar12;
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)pSVar12,(MethodInfo *)0x0);
  if ((int)*piVar26 == 0) goto label_040a4765;
  plVar19 = (long *)pSVar17->m_Items[0];
  if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
      (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
  bVar11 = System_String__StartsWith((System_String_o *)plVar19,"custom",(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    if ((int)*piVar26 == 0) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[0];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    bVar11 = System_String__StartsWith((System_String_o *)plVar19,"spawnpoint",(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if ((uint)*piVar26 < 2) goto label_040a4765;
      plVar19 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
      plVar19 = (long *)System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
      bVar11 = System_String__op_Equality((System_String_o *)plVar19,"titan",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        if ((uint)*piVar26 < 2) goto label_040a4765;
        plVar19 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
        plVar19 = (long *)System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
        bVar11 = System_String__op_Equality((System_String_o *)plVar19,"player",(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar19 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 !=
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            ppIVar20 = (Il2CppObject **)&"Human SpawnPoint";
            goto label_040a3542;
          }
          goto label_040a47b7;
        }
        if ((uint)*piVar26 < 2) goto label_040a4765;
        plVar19 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
        plVar19 = (long *)System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
        bVar11 = System_String__op_Equality((System_String_o *)plVar19,"playerc",(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar19 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 !=
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            ppIVar20 = (Il2CppObject **)&"Human SpawnPoint (blue)";
            goto label_040a3542;
          }
          goto label_040a47b7;
        }
        if ((uint)*piVar26 < 2) goto label_040a4765;
        plVar19 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
        plVar19 = (long *)System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
        bVar11 = System_String__op_Equality((System_String_o *)plVar19,"playerm",(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar19 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 !=
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            ppIVar20 = (Il2CppObject **)&"Human SpawnPoint (red)";
            goto label_040a3542;
          }
          goto label_040a47b7;
        }
      }
      else {
        if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        plVar19 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
        if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
            (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
        ppIVar20 = &"Titan SpawnPoint";
label_040a3542:
        pIVar18 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)plVar19,*ppIVar20,
                             MethodInfo_MapScriptBaseObject_get_Item);
        if (pSVar12 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        pIVar6 = (pSVar12->obj).klass;
        plVar19 = (long *)pSVar12;
        (*pIVar6->vtable[10].methodPtr)(pSVar12,pIVar18,pIVar6->vtable[10].method);
      }
      if (2 < (uint)*piVar26) {
        plVar19 = (long *)pSVar17->m_Items[2];
        local_a8._0_4_ = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
        if (3 < (uint)pSVar17->max_length) {
          plVar19 = (long *)pSVar17->m_Items[3];
          local_a8._4_4_ = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
          if (4 < (uint)pSVar17->max_length) {
            plVar19 = (long *)pSVar17->m_Items[4];
            fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if (pSVar12 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
label_040a35d5:
              position_01.fields.y = local_a8._4_4_;
              position_01.fields.x = (float)local_a8;
              position_01.fields.z = fVar28;
              Map_MapScriptBaseObject__SetPosition
                        ((Map_MapScriptBaseObject_o *)pSVar12,position_01,(MethodInfo *)0x0);
              goto label_040a35df;
            }
            goto label_040a47b7;
          }
        }
      }
      goto label_040a4765;
    }
    if ((uint)*piVar26 == 0) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[0];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    bVar11 = System_String__StartsWith((System_String_o *)plVar19,"misc",(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      if ((uint)*piVar26 == 0) goto label_040a4765;
      plVar19 = (long *)pSVar17->m_Items[0];
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
      bVar11 = System_String__StartsWith((System_String_o *)plVar19,"base",(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        if (1 < (uint)*piVar26) {
          plVar19 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
          if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
          plVar19 = (long *)System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
          bVar11 = System_String__op_Equality((System_String_o *)plVar19,"aot_supply",(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            if ((uint)*piVar26 < 2) goto label_040a4765;
            plVar19 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
            if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
            plVar19 = (long *)System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
            bVar11 = System_String__op_Equality((System_String_o *)plVar19,"levelbottom",(MethodInfo *)0x0);
            if ((char)bVar11 != '\0') {
              if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              plVar19 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
              if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 !=
                  (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                puVar21 = &"LevelBottom";
                goto label_040a3319;
              }
              goto label_040a47b7;
            }
          }
          else {
            if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            plVar19 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
            if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
                (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
            puVar21 = &"Supply1";
label_040a3319:
            pIVar18 = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)plVar19,
                                 (Il2CppObject *)*puVar21,MethodInfo_MapScriptBaseObject_get_Item);
            if (pSVar12 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            pIVar6 = (pSVar12->obj).klass;
            plVar19 = (long *)pSVar12;
            (*pIVar6->vtable[10].methodPtr)(pSVar12,pIVar18,pIVar6->vtable[10].method);
          }
          if ((int)(uint)*piVar26 < 0xf) {
            if ((uint)*piVar26 < 3) goto label_040a4765;
            plVar19 = (long *)pSVar17->m_Items[2];
            UVar35.fields.x = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if ((uint)pSVar17->max_length < 4) goto label_040a4765;
            plVar19 = (long *)pSVar17->m_Items[3];
            fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if ((uint)pSVar17->max_length < 5) goto label_040a4765;
            plVar19 = (long *)pSVar17->m_Items[4];
            fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if (pSVar12 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            UVar35.fields.y = fVar28;
            UVar35.fields.z = fVar29;
            plVar19 = (long *)pSVar12;
            Map_MapScriptBaseObject__SetPosition
                      ((Map_MapScriptBaseObject_o *)pSVar12,UVar35,(MethodInfo *)0x0);
            if ((uint)*piVar26 < 6) goto label_040a4765;
            plVar19 = (long *)pSVar17->m_Items[5];
            UVar37.fields.x = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if ((uint)pSVar17->max_length < 7) goto label_040a4765;
            plVar19 = (long *)pSVar17->m_Items[6];
            fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if ((uint)pSVar17->max_length < 8) goto label_040a4765;
            plVar19 = (long *)pSVar17->m_Items[7];
            fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if ((uint)pSVar17->max_length < 9) goto label_040a4765;
            fVar30 = System_Single__Parse(pSVar17->m_Items[8],(MethodInfo *)0x0);
            UVar37.fields.y = fVar28;
            UVar37.fields.w = fVar30;
            UVar37.fields.z = fVar29;
            plVar19 = (long *)pSVar12;
            Map_MapScriptBaseObject__SetRotation_3fb4ce0
                      ((Map_MapScriptBaseObject_o *)pSVar12,UVar37,(MethodInfo *)0x0);
            uVar4 = (uint)*piVar26;
          }
          else {
            plVar19 = (long *)pSVar17->m_Items[0xc];
            UVar36.fields.x = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if ((uint)pSVar17->max_length < 0xe) goto label_040a4765;
            plVar19 = (long *)pSVar17->m_Items[0xd];
            fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if ((uint)pSVar17->max_length < 0xf) goto label_040a4765;
            plVar19 = (long *)pSVar17->m_Items[0xe];
            fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if (pSVar12 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            UVar36.fields.y = fVar28;
            UVar36.fields.z = fVar29;
            plVar19 = (long *)pSVar12;
            Map_MapScriptBaseObject__SetPosition
                      ((Map_MapScriptBaseObject_o *)pSVar12,UVar36,(MethodInfo *)0x0);
            if ((uint)*piVar26 < 0x10) goto label_040a4765;
            plVar19 = (long *)pSVar17->m_Items[0xf];
            rotation_01.fields.x = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if ((uint)pSVar17->max_length < 0x11) goto label_040a4765;
            plVar19 = (long *)pSVar17->m_Items[0x10];
            fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if ((uint)pSVar17->max_length < 0x12) goto label_040a4765;
            plVar19 = (long *)pSVar17->m_Items[0x11];
            fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if ((uint)pSVar17->max_length < 0x13) goto label_040a4765;
            fVar30 = System_Single__Parse(pSVar17->m_Items[0x12],(MethodInfo *)0x0);
            rotation_01.fields.y = fVar28;
            rotation_01.fields.w = fVar30;
            rotation_01.fields.z = fVar29;
            plVar19 = (long *)pSVar12;
            Map_MapScriptBaseObject__SetRotation_3fb4ce0
                      ((Map_MapScriptBaseObject_o *)pSVar12,rotation_01,(MethodInfo *)0x0);
            if ((uint)pSVar17->max_length < 4) goto label_040a4765;
            plVar19 = (long *)pSVar17->m_Items[3];
            scale_01.fields.x = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if ((uint)pSVar17->max_length < 5) goto label_040a4765;
            plVar19 = (long *)pSVar17->m_Items[4];
            fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
            if ((uint)pSVar17->max_length < 6) goto label_040a4765;
            fVar29 = System_Single__Parse(pSVar17->m_Items[5],(MethodInfo *)0x0);
            scale_01.fields.y = fVar28;
            scale_01.fields.z = fVar29;
            plVar19 = (long *)pSVar12;
            Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)pSVar12,scale_01,(MethodInfo *)0x0)
            ;
            uVar4 = (uint)*piVar26;
          }
          if (1 < uVar4) {
            plVar19 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
            if (pSVar17->m_Items[1] != (System_String_o *)0x0) {
              pSVar16 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
              bVar11 = System_String__op_Equality(pSVar16,"aot_supply",(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_040a35df;
              UVar35 = Map_MapScriptBaseObject__GetPosition
                                 ((Map_MapScriptBaseObject_o *)pSVar12,(MethodInfo *)0x0);
              UVar36 = Map_MapScriptBaseObject__GetRotation
                                 ((Map_MapScriptBaseObject_o *)pSVar12,(MethodInfo *)0x0);
              euler.fields.x = UVar36.fields.x * 0.017453292;
              euler.fields.y = UVar36.fields.y * 0.017453292;
              euler.fields.z = UVar36.fields.z * 0.017453292;
              UVar37 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
              if (g_data_057ac4bc == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057ac4bc = '\x01';
              }
              UVar36 = UnityEngine_Quaternion__op_Multiply_4debdf0
                                 (UVar37,*(UnityEngine_Vector3_Fields *)
                                          (*(long *)(TypeInfo_Vector3 + 0xb8) + 0x54),(MethodInfo *)0x0);
              local_a8._0_4_ = UVar35.fields.x;
              local_a8._4_4_ = UVar35.fields.y;
              local_a8._0_4_ = UVar36.fields.x * 0.37 + (float)local_a8;
              local_a8._4_4_ = UVar36.fields.y * 0.37 + local_a8._4_4_;
              fVar28 = UVar36.fields.z * 0.37 + UVar35.fields.z;
              goto label_040a35d5;
            }
            goto label_040a47b7;
          }
        }
        goto label_040a4765;
      }
      if ((uint)*piVar26 == 0) goto label_040a4765;
      plVar19 = (long *)pSVar17->m_Items[0];
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
      bVar11 = System_String__StartsWith((System_String_o *)plVar19,"photon",(MethodInfo *)0x0);
      uVar4 = (uint)*piVar26;
      uVar23 = (ulong)uVar4;
      if ((char)bVar11 != '\0') {
        if (1 < uVar4) {
          plVar19 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
          if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
          plVar19 = (long *)System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
          bVar11 = System_String__op_Equality((System_String_o *)plVar19,"cannonground",(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            if (1 < (uint)*piVar26) {
              plVar19 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
              if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
              plVar19 = (long *)System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
              bVar11 = System_String__op_Equality((System_String_o *)plVar19,"cannonwall",(MethodInfo *)0x0);
              if ((char)bVar11 != '\0') goto label_040a2fc7;
              if (1 < (uint)*piVar26) {
                plVar19 = (long *)pSVar17->m_Items[1];
                if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
                     (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
                   (pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              System_String__ToLower((System_String_o *)plVar19,(MethodInfo *)0x0),
                   pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
                goto label_040a47b7;
                bVar11 = System_String__StartsWith((System_String_o *)pSVar14,"spawn",(MethodInfo *)0x0);
                if ((char)bVar11 == '\0') goto label_040a43f7;
                if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar19 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
                if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
                     (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
                   (pIVar18 = System_Collections_Generic_Dictionary_object__object___get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)plVar19,
                                         "Titan SpawnPoint",MethodInfo_MapScriptBaseObject_get_Item),
                   pSVar12 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
                goto label_040a47b7;
                pIVar6 = (pSVar12->obj).klass;
                plVar19 = (long *)pSVar12;
                (*pIVar6->vtable[10].methodPtr)(pSVar12,pIVar18,pIVar6->vtable[10].method);
                if (4 < (uint)*piVar26) {
                  plVar19 = (long *)pSVar17->m_Items[4];
                  position_04.fields.x = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                  if (5 < (uint)pSVar17->max_length) {
                    plVar19 = (long *)pSVar17->m_Items[5];
                    fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                    if (6 < (uint)pSVar17->max_length) {
                      fVar29 = System_Single__Parse(pSVar17->m_Items[6],(MethodInfo *)0x0);
                      position_04.fields.y = fVar28;
                      position_04.fields.z = fVar29;
                      plVar19 = (long *)pSVar12;
                      Map_MapScriptBaseObject__SetPosition
                                ((Map_MapScriptBaseObject_o *)pSVar12,position_04,(MethodInfo *)0x0);
                      if (7 < (uint)pSVar17->max_length) {
                        plVar19 = (long *)pSVar17->m_Items[7];
                        fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                        if (8 < (uint)pSVar17->max_length) {
                          plVar19 = (long *)pSVar17->m_Items[8];
                          fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                          if (9 < (uint)pSVar17->max_length) {
                            plVar19 = (long *)pSVar17->m_Items[9];
                            fVar30 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                            if (10 < (uint)pSVar17->max_length) {
                              pSVar16 = pSVar17->m_Items[10];
label_040a3f77:
                              fVar32 = System_Single__Parse(pSVar16,(MethodInfo *)0x0);
                              rotation_03.fields.y = fVar29;
                              rotation_03.fields.x = fVar28;
                              rotation_03.fields.w = fVar32;
                              rotation_03.fields.z = fVar30;
                              Map_MapScriptBaseObject__SetRotation_3fb4ce0
                                        ((Map_MapScriptBaseObject_o *)pSVar12,rotation_03,(MethodInfo *)0x0);
                              goto label_040a35df;
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
          else {
label_040a2fc7:
            if (1 < (uint)*piVar26) {
              plVar19 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
              if (pSVar17->m_Items[1] == (System_String_o *)0x0) goto label_040a47b7;
              pSVar16 = System_String__ToLower(pSVar17->m_Items[1],(MethodInfo *)0x0);
              bVar11 = System_String__op_Equality(pSVar16,"cannonground",(MethodInfo *)0x0);
              if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              plVar19 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
              if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
                  (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
              if ((char)bVar11 == '\0') {
                puVar21 = &"Cannon3";
              }
              else {
                puVar21 = &"Cannon2";
              }
              pIVar18 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)plVar19,
                                   (Il2CppObject *)*puVar21,MethodInfo_MapScriptBaseObject_get_Item);
              if (pSVar12 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
              goto label_040a47b7;
              pIVar6 = (pSVar12->obj).klass;
              plVar19 = (long *)pSVar12;
              (*pIVar6->vtable[10].methodPtr)(pSVar12,pIVar18,pIVar6->vtable[10].method);
              if ((int)(uint)*piVar26 < 0xf) {
                if (2 < (uint)*piVar26) {
                  plVar19 = (long *)pSVar17->m_Items[2];
                  position_03.fields.x = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                  if (3 < (uint)pSVar17->max_length) {
                    plVar19 = (long *)pSVar17->m_Items[3];
                    fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                    if (4 < (uint)pSVar17->max_length) {
                      fVar29 = System_Single__Parse(pSVar17->m_Items[4],(MethodInfo *)0x0);
                      position_03.fields.y = fVar28;
                      position_03.fields.z = fVar29;
                      plVar19 = (long *)pSVar12;
                      Map_MapScriptBaseObject__SetPosition
                                ((Map_MapScriptBaseObject_o *)pSVar12,position_03,(MethodInfo *)0x0);
                      if (5 < (uint)pSVar17->max_length) {
                        plVar19 = (long *)pSVar17->m_Items[5];
                        fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                        if (6 < (uint)pSVar17->max_length) {
                          plVar19 = (long *)pSVar17->m_Items[6];
                          fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                          if (7 < (uint)pSVar17->max_length) {
                            plVar19 = (long *)pSVar17->m_Items[7];
                            fVar30 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                            if (8 < (uint)pSVar17->max_length) {
                              pSVar16 = pSVar17->m_Items[8];
                              goto label_040a3f77;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                plVar19 = (long *)pSVar17->m_Items[0xc];
                position_02.fields.x = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                if (0xd < (uint)pSVar17->max_length) {
                  plVar19 = (long *)pSVar17->m_Items[0xd];
                  fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                  if (0xe < (uint)pSVar17->max_length) {
                    fVar29 = System_Single__Parse(pSVar17->m_Items[0xe],(MethodInfo *)0x0);
                    position_02.fields.y = fVar28;
                    position_02.fields.z = fVar29;
                    plVar19 = (long *)pSVar12;
                    Map_MapScriptBaseObject__SetPosition
                              ((Map_MapScriptBaseObject_o *)pSVar12,position_02,(MethodInfo *)0x0);
                    if (0xf < (uint)pSVar17->max_length) {
                      plVar19 = (long *)pSVar17->m_Items[0xf];
                      rotation_02.fields.x =
                           System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                      if (0x10 < (uint)pSVar17->max_length) {
                        plVar19 = (long *)pSVar17->m_Items[0x10];
                        fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                        if (0x11 < (uint)pSVar17->max_length) {
                          plVar19 = (long *)pSVar17->m_Items[0x11];
                          fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                          if (0x12 < (uint)pSVar17->max_length) {
                            fVar30 = System_Single__Parse(pSVar17->m_Items[0x12],(MethodInfo *)0x0);
                            rotation_02.fields.y = fVar28;
                            rotation_02.fields.w = fVar30;
                            rotation_02.fields.z = fVar29;
                            plVar19 = (long *)pSVar12;
                            Map_MapScriptBaseObject__SetRotation_3fb4ce0
                                      ((Map_MapScriptBaseObject_o *)pSVar12,rotation_02,(MethodInfo *)0x0);
                            if (3 < (uint)pSVar17->max_length) {
                              plVar19 = (long *)pSVar17->m_Items[3];
                              fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                              if (4 < (uint)pSVar17->max_length) {
                                plVar19 = (long *)pSVar17->m_Items[4];
                                fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                                if (5 < (uint)pSVar17->max_length) {
                                  pSVar16 = pSVar17->m_Items[5];
                                  goto label_040a2e77;
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
        goto label_040a4765;
      }
      if (uVar4 == 0) goto label_040a4765;
      plVar19 = (long *)pSVar17->m_Items[0];
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
      bVar11 = System_String__StartsWith((System_String_o *)plVar19,"racing",(MethodInfo *)0x0);
      pSVar15 = "";
      if ((char)bVar11 == '\0') {
        if ((int)*piVar26 == 0) goto label_040a4765;
        pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar17->m_Items[0];
        plVar19 = (long *)pSVar14;
        if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        bVar11 = System_String__StartsWith((System_String_o *)pSVar14,"map",(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          plVar19 = (long *)pSVar14;
          if ((uint)*piVar26 < 2) goto label_040a4765;
          pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar17->m_Items[1];
          plVar19 = (long *)pSVar14;
          if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar11 = System_String__StartsWith((System_String_o *)pSVar14,"disablebounds",(MethodInfo *)0x0);
          uVar23 = CONCAT71((int7)(uVar23 >> 8),1);
          if ((char)bVar11 != '\0') goto label_040a2233;
        }
      }
      else {
        if ((uint)*piVar26 < 2) goto label_040a4765;
        plVar19 = (long *)pSVar17->m_Items[1];
        if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
            (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
        bVar11 = System_String__StartsWith((System_String_o *)plVar19,"start",(MethodInfo *)0x0);
        if ((uint)*piVar26 < 2) goto label_040a4765;
        pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar17->m_Items[1];
        plVar19 = (long *)pSVar14;
        if ((char)bVar11 == '\0') {
          if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar11 = System_String__StartsWith((System_String_o *)pSVar14,"end",(MethodInfo *)0x0);
          plVar19 = (long *)pSVar14;
          if ((uint)*piVar26 < 2) goto label_040a4765;
          pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar17->m_Items[1];
          plVar19 = (long *)pSVar14;
          if ((char)bVar11 != '\0') {
            if ("end" != (System_String_o *)0x0) {
              puVar21 = (undefined8 *)&"Racing Finish Region ";
              pSVar16 = "end";
joined_r0x040a3ff1:
              if (pSVar14 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
              goto label_040a42da;
            }
            goto label_040a47b7;
          }
          if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar11 = System_String__StartsWith((System_String_o *)pSVar14,"kill",(MethodInfo *)0x0);
          plVar19 = (long *)pSVar14;
          if ((uint)*piVar26 < 2) goto label_040a4765;
          pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar17->m_Items[1];
          plVar19 = (long *)pSVar14;
          if ((char)bVar11 != '\0') {
            if ("kill" != (System_String_o *)0x0) {
              puVar21 = (undefined8 *)&"Kill Region ";
              pSVar16 = "kill";
              goto joined_r0x040a3ff1;
            }
            goto label_040a47b7;
          }
          if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar11 = System_String__StartsWith((System_String_o *)pSVar14,"checkpoint",(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            plVar19 = (long *)pSVar14;
            if (1 < (uint)*piVar26) {
              if ("checkpoint" != (System_String_o *)0x0) {
                pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                          pSVar17->m_Items[1];
                puVar21 = (undefined8 *)&"Racing Checkpoint Region ";
                plVar19 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                pSVar16 = "checkpoint";
                goto joined_r0x040a3ff1;
              }
              goto label_040a47b7;
            }
            goto label_040a4765;
          }
        }
        else {
          if (("start" == (System_String_o *)0x0) ||
             (puVar21 = &"Racing Start Barrier ", pSVar16 = "start",
             pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
          goto label_040a47b7;
label_040a42da:
          pSVar16 = System_String__Substring
                              ((System_String_o *)pSVar14,(pSVar16->fields)._stringLength,(MethodInfo *)0x0);
          pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)*puVar21;
          pSVar15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    System_String__Concat_3ae5ba0((System_String_o *)pSVar14,pSVar16,(MethodInfo *)0x0);
        }
        plVar19 = (long *)pSVar14;
        if (pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        if (0 < *(int *)&pSVar15->bounds) {
          if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
          plVar19 = (long *)pSVar15;
          pSVar16 = System_String__ToLower((System_String_o *)pSVar15,(MethodInfo *)0x0);
          if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             ((System_Collections_Generic_Dictionary_object__object__o *)pSVar14,
                              (Il2CppObject *)pSVar16,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar11 != '\0') {
            if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar14 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
            pSVar16 = System_String__ToLower((System_String_o *)pSVar15,(MethodInfo *)0x0);
            plVar19 = (long *)pSVar15;
            if ((pSVar14 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
               (pIVar18 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar14,
                                     (Il2CppObject *)pSVar16,MethodInfo_MapScriptBaseObject_get_Item), plVar19 = (long *)pSVar14,
               pSVar12 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
              pIVar6 = (pSVar12->obj).klass;
              plVar19 = (long *)pSVar12;
              (*pIVar6->vtable[10].methodPtr)(pSVar12,pIVar18,pIVar6->vtable[10].method);
              uVar4 = (uint)*piVar26;
              goto joined_r0x040a2d53;
            }
            goto label_040a47b7;
          }
        }
      }
label_040a43f7:
      plVar19 = (long *)pSVar14;
      if (pSVar12 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      goto label_040a35df;
    }
    if ((uint)*piVar26 < 2) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[1];
    bVar11 = System_String__op_Equality((System_String_o *)plVar19,"barrier",(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar19 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 !=
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        puVar21 = &"LegacyBarrier";
        goto label_040a291b;
      }
      goto label_040a47b7;
    }
    if ((uint)*piVar26 < 2) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[1];
    bVar11 = System_String__op_Equality((System_String_o *)plVar19,"barrierEditor",(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      local_60 = uVar24;
      if (pSVar12 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      pSVar12->max_length = "Geometry/Cuboid";
      il2cpp_runtime_helper_022b4080(&pSVar12->max_length);
      pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
      plVar19 = (long *)pSVar14;
      Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)pSVar14,(MethodInfo *)0x0);
      if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      pSVar14->bounds = (Il2CppArrayBounds *)"Transparent";
      il2cpp_runtime_helper_022b4080(&pSVar14->bounds);
      __this = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      color_00.fields.b = 1.0;
      color_00.fields.a = 0.32;
      color_00.fields.r = 0.0;
      color_00.fields.g = 0.917;
      Utility_Color255___ctor_4388bb0(__this,color_00,(MethodInfo *)0x0);
      pSVar14->max_length = (il2cpp_array_size_t)__this;
      il2cpp_runtime_helper_022b4080(&pSVar14->max_length,__this);
      plVar19 = (long *)&pSVar12->m_Items[3].fields.value;
      pSVar12->m_Items[3].fields.value = (Il2CppObject *)pSVar14;
      il2cpp_runtime_helper_022b4080();
      uVar4 = (uint)*piVar26;
      uVar24 = local_60;
joined_r0x040a2d53:
      if (5 < uVar4) {
        plVar19 = (long *)pSVar17->m_Items[5];
        position_00.fields.x = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
        if (6 < (uint)pSVar17->max_length) {
          plVar19 = (long *)pSVar17->m_Items[6];
          fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
          if (7 < (uint)pSVar17->max_length) {
            fVar29 = System_Single__Parse(pSVar17->m_Items[7],(MethodInfo *)0x0);
            position_00.fields.y = fVar28;
            position_00.fields.z = fVar29;
            plVar19 = (long *)pSVar12;
            Map_MapScriptBaseObject__SetPosition
                      ((Map_MapScriptBaseObject_o *)pSVar12,position_00,(MethodInfo *)0x0);
            if (8 < (uint)pSVar17->max_length) {
              plVar19 = (long *)pSVar17->m_Items[8];
              rotation_00.fields.x = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
              if (9 < (uint)pSVar17->max_length) {
                plVar19 = (long *)pSVar17->m_Items[9];
                fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                if (10 < (uint)pSVar17->max_length) {
                  plVar19 = (long *)pSVar17->m_Items[10];
                  fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                  if (0xb < (uint)pSVar17->max_length) {
                    fVar30 = System_Single__Parse(pSVar17->m_Items[0xb],(MethodInfo *)0x0);
                    rotation_00.fields.y = fVar28;
                    rotation_00.fields.w = fVar30;
                    rotation_00.fields.z = fVar29;
                    plVar19 = (long *)pSVar12;
                    Map_MapScriptBaseObject__SetRotation_3fb4ce0
                              ((Map_MapScriptBaseObject_o *)pSVar12,rotation_00,(MethodInfo *)0x0);
                    if (2 < (uint)pSVar17->max_length) {
                      plVar19 = (long *)pSVar17->m_Items[2];
                      fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                      if (3 < (uint)pSVar17->max_length) {
                        plVar19 = (long *)pSVar17->m_Items[3];
                        fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                        if (4 < (uint)pSVar17->max_length) {
                          pSVar16 = pSVar17->m_Items[4];
label_040a2e77:
                          fVar30 = System_Single__Parse(pSVar16,(MethodInfo *)0x0);
                          scale_00.fields.y = fVar29;
                          scale_00.fields.x = fVar28;
                          scale_00.fields.z = fVar30;
                          Map_MapScriptBaseObject__SetScale
                                    ((Map_MapScriptBaseObject_o *)pSVar12,scale_00,(MethodInfo *)0x0);
                          goto label_040a35df;
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
      goto label_040a4765;
    }
    if ((uint)*piVar26 < 2) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[1];
    bVar11 = System_String__op_Equality((System_String_o *)plVar19,"racingStart",(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar19 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 !=
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        puVar21 = &"Racing Start Barrier Cuboid";
label_040a291b:
        pIVar18 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)plVar19,
                             (Il2CppObject *)*puVar21,MethodInfo_MapScriptBaseObject_get_Item);
        if (pSVar12 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          pIVar6 = (pSVar12->obj).klass;
          plVar19 = (long *)pSVar12;
          (*pIVar6->vtable[10].methodPtr)(pSVar12,pIVar18,pIVar6->vtable[10].method);
          uVar4 = (uint)*piVar26;
          goto joined_r0x040a2d53;
        }
      }
      goto label_040a47b7;
    }
    if ((uint)*piVar26 < 2) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[1];
    bVar11 = System_String__op_Equality((System_String_o *)plVar19,"racingEnd",(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar19 = (TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key)->monitor;
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 !=
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        puVar21 = &"Racing Finish Region Cuboid";
        goto label_040a291b;
      }
      goto label_040a47b7;
    }
    if ((uint)*piVar26 < 2) goto label_040a4765;
    pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar17->m_Items[1];
    bVar11 = System_String__op_Equality((System_String_o *)pSVar14,"region",(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') goto label_040a43f7;
  }
  else {
    if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar19 = (long *)TypeInfo_BuiltinMapPrefabs;
    if ((uint)*piVar26 < 2) goto label_040a4765;
    pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar17->m_Items[1];
    plVar19 = (long *)TypeInfo_BuiltinMapPrefabs;
    if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    pSVar15 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
    pSVar16 = System_String__ToLower((System_String_o *)pSVar14,(MethodInfo *)0x0);
    plVar19 = (long *)pSVar14;
    if (pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pSVar15,
                        (Il2CppObject *)pSVar16,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 != '\0') {
      if (TypeInfo_BuiltinMapPrefabs->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar19 = (long *)TypeInfo_BuiltinMapPrefabs;
      if ((uint)*piVar26 < 2) goto label_040a4765;
      pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar17->m_Items[1];
      plVar19 = (long *)TypeInfo_BuiltinMapPrefabs;
      if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      pSVar15 = TypeInfo_BuiltinMapPrefabs->m_Items[6].fields.key[1].monitor;
      pSVar16 = System_String__ToLower((System_String_o *)pSVar14,(MethodInfo *)0x0);
      plVar19 = (long *)pSVar14;
      if ((pSVar15 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
         (pIVar18 = System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar15,
                               (Il2CppObject *)pSVar16,MethodInfo_MapScriptBaseObject_get_Item), plVar19 = (long *)pSVar15,
         pSVar12 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
      goto label_040a47b7;
      pIVar6 = (pSVar12->obj).klass;
      pSVar15 = pSVar12;
      (*pIVar6->vtable[10].methodPtr)(pSVar12,pIVar18,pIVar6->vtable[10].method);
    }
    plVar19 = (long *)pSVar15;
    if ((uint)*piVar26 < 0xd) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[0xc];
    position.fields.x = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
    if ((uint)pSVar17->max_length < 0xe) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[0xd];
    fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
    if ((uint)pSVar17->max_length < 0xf) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[0xe];
    fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
    if (pSVar12 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    position.fields.y = fVar28;
    position.fields.z = fVar29;
    plVar19 = (long *)pSVar12;
    Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)pSVar12,position,(MethodInfo *)0x0);
    if ((uint)*piVar26 < 0x10) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[0xf];
    rotation.fields.x = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
    if ((uint)pSVar17->max_length < 0x11) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[0x10];
    fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
    if ((uint)pSVar17->max_length < 0x12) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[0x11];
    fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
    if ((uint)pSVar17->max_length < 0x13) goto label_040a4765;
    fVar30 = System_Single__Parse(pSVar17->m_Items[0x12],(MethodInfo *)0x0);
    rotation.fields.y = fVar28;
    rotation.fields.w = fVar30;
    rotation.fields.z = fVar29;
    plVar19 = (long *)pSVar12;
    Map_MapScriptBaseObject__SetRotation_3fb4ce0
              ((Map_MapScriptBaseObject_o *)pSVar12,rotation,(MethodInfo *)0x0);
    if ((uint)pSVar17->max_length < 4) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[3];
    scale.fields.x = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
    if ((uint)pSVar17->max_length < 5) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[4];
    fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
    if ((uint)pSVar17->max_length < 6) goto label_040a4765;
    fVar29 = System_Single__Parse(pSVar17->m_Items[5],(MethodInfo *)0x0);
    scale.fields.y = fVar28;
    scale.fields.z = fVar29;
    plVar19 = (long *)pSVar12;
    Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)pSVar12,scale,(MethodInfo *)0x0);
    if ((uint)pSVar17->max_length < 3) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[2];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              System_String__ToLower((System_String_o *)plVar19,(MethodInfo *)0x0);
    local_a8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
               pSVar12->m_Items[3].fields.value;
    if ((local_a8 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
       ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)local_a8->max_length ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_040a47b7;
    fVar28 = (float)*(int *)((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                    local_a8->max_length)->max_length + 4) / 255.0;
    plVar19 = (long *)pSVar14;
    bVar11 = System_String__op_Inequality((System_String_o *)pSVar14,"default",(MethodInfo *)0x0);
    local_60 = uVar24;
    if ((char)bVar11 == '\0') {
label_040a26e1:
      uVar4 = (uint)*piVar26;
    }
    else {
      if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      bVar11 = System_String__StartsWith((System_String_o *)pSVar14,"transparent",(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        local_a8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                   il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
        plVar19 = (long *)local_a8;
        Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)local_a8,(MethodInfo *)0x0);
        if (local_a8 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          ((System_Collections_Generic_Dictionary_object__object__Fields *)&local_a8->bounds)->_buckets =
               "Transparent";
          il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)&local_a8->bounds
                            );
          plVar19 = (long *)System_String__Substring((System_String_o *)pSVar14,0xb,(MethodInfo *)0x0);
          bVar11 = System_Single__TryParse((System_String_o *)plVar19,&local_64,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            fVar28 = local_64;
          }
          goto label_040a26e1;
        }
        goto label_040a47b7;
      }
      bVar11 = System_String__op_Equality((System_String_o *)pSVar14,"empty",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        bVar11 = System_String__op_Equality((System_String_o *)pSVar14,"ice1",(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          bVar11 = System_String__op_Equality((System_String_o *)pSVar14,"barriereditormat",(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            bVar11 = System_String__op_Equality((System_String_o *)pSVar14,"regioneditormat",(MethodInfo *)0x0);
            if ((char)bVar11 != '\0') {
              local_a8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                         il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
              plVar19 = (long *)local_a8;
              Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)local_a8,(MethodInfo *)0x0);
              if (local_a8 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                ((System_Collections_Generic_Dictionary_object__object__Fields *)&local_a8->bounds)->_buckets
                     = "Transparent";
                il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                                   &local_a8->bounds);
                pSVar15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
                uVar31 = 0x3f800000;
                uVar33 = 0;
                uVar34 = 0;
                goto label_040a3b60;
              }
              goto label_040a47b7;
            }
            bVar11 = System_String__op_Equality((System_String_o *)pSVar14,"bombexplosiontex",(MethodInfo *)0x0);
            if ((char)bVar11 != '\0') {
              local_a8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                         il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
              Map_MapScriptLegacyMaterial___ctor((Map_MapScriptLegacyMaterial_o *)local_a8,(MethodInfo *)0x0);
              if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              plVar19 = (long *)TypeInfo_MapObjectShader;
              if (local_a8 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                pSVar25 = (System_Int32_array *)TypeInfo_MapObjectShader->m_Items[6].fields.key[3].klass;
                goto label_040a40a5;
              }
              goto label_040a47b7;
            }
            bVar11 = System_String__op_Equality((System_String_o *)pSVar14,"cannonregionmat",(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              bVar11 = System_String__op_Equality((System_String_o *)pSVar14,"bombtex",(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') {
                bVar11 = System_String__op_Equality((System_String_o *)pSVar14,"cannonballtrail",(MethodInfo *)0x0)
                ;
                if ((char)bVar11 == '\0') {
                  local_a8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                             il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
                  plVar19 = (long *)local_a8;
                  Map_MapScriptBasicMaterial___ctor
                            ((Map_MapScriptBasicMaterial_o *)local_a8,(MethodInfo *)0x0);
                  if (local_a8 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                  goto label_040a47b7;
                  ((System_Collections_Generic_Dictionary_object__object__Fields *)&local_a8->bounds)->
                  _buckets = "Basic";
                  il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                                     &local_a8->bounds);
                  bVar11 = System_String__op_Equality
                                     ((System_String_o *)pSVar14,"bark",(MethodInfo *)0x0);
                  if (((char)bVar11 == '\0') &&
                     (bVar11 = System_String__op_Equality
                                         ((System_String_o *)pSVar14,"grass",(MethodInfo *)0x0),
                     (char)bVar11 == '\0')) {
                    if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) != 0) goto label_040a45cb;
label_040a4594:
                    il2cpp_runtime_helper_02337ed0();
                    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                 (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      plVar19 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0
                      ;
                      goto label_040a47b7;
                    }
                  }
                  else {
                    pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              System_String__Concat_3ae5ba0
                                        ((System_String_o *)pSVar14,"1",(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) goto label_040a4594;
label_040a45cb:
                    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                 (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                    plVar19 = (long *)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_040a47b7;
                  }
                  bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                     (__this_00,&pSVar14->obj,MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar11 == '\0') {
                    plVar19 = (long *)System_String__Concat_3ae5ba0
                                                ("Unhandled legacy texture: ",(System_String_o *)local_58,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Debug__Log((Il2CppObject *)plVar19,(MethodInfo *)0x0);
                    uVar4 = (uint)*piVar26;
                    goto joined_r0x040a475f;
                  }
                  if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  plVar19 = *(long **)(*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
                  if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
                       (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
                     (pIVar18 = System_Collections_Generic_Dictionary_object__object___get_Item
                                          ((System_Collections_Generic_Dictionary_object__object__o *)plVar19,
                                           &pSVar14->obj,MethodInfo_MapScriptBasicMaterial_get_Item), pIVar6 = TypeInfo_MapScriptBasicMaterial,
                     pIVar18 == (Il2CppObject *)0x0)) goto label_040a47b7;
                  pIVar7 = (local_a8->obj).klass;
                  bVar3 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
                  if (((pIVar7->_2).naturalAligment < bVar3) ||
                     ((ppIVar8 = (pIVar7->_2).typeHierarchy, ppIVar8[(ulong)bVar3 - 1] != TypeInfo_MapScriptBasicMaterial ||
                      (*(Il2CppClass **)&local_a8->m_Items[0].fields = pIVar18[2].klass,
                      ppIVar8[(ulong)bVar3 - 1] != pIVar6)))) goto label_040a47bc;
                  plVar19 = (long *)local_a8->m_Items;
                  il2cpp_runtime_helper_022b4080();
                  if (10 < (uint)*piVar26) {
                    plVar19 = (long *)pSVar17->m_Items[10];
                    fVar30 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                    if (0xb < (uint)pSVar17->max_length) {
                      fVar29 = System_Single__Parse(pSVar17->m_Items[0xb],(MethodInfo *)0x0);
                      pIVar6 = (local_a8->obj).klass;
                      bVar3 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
                      if ((bVar3 <= (pIVar6->_2).naturalAligment) &&
                         ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_MapScriptBasicMaterial)) goto label_040a3212;
                      goto label_040a47bc;
                    }
                  }
                  goto label_040a4765;
                }
                local_a8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                           il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
                Map_MapScriptLegacyMaterial___ctor
                          ((Map_MapScriptLegacyMaterial_o *)local_a8,(MethodInfo *)0x0);
                if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar19 = (long *)TypeInfo_MapObjectShader;
                if (local_a8 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                goto label_040a47b7;
                pSVar25 = TypeInfo_MapObjectShader->m_Items[6].fields.key[4].monitor;
              }
              else {
                local_a8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                           il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
                Map_MapScriptLegacyMaterial___ctor
                          ((Map_MapScriptLegacyMaterial_o *)local_a8,(MethodInfo *)0x0);
                if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar19 = (long *)TypeInfo_MapObjectShader;
                if (local_a8 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                goto label_040a47b7;
                pSVar25 = (System_Int32_array *)TypeInfo_MapObjectShader->m_Items[6].fields.key[4].klass;
              }
label_040a40a5:
              ((System_Collections_Generic_Dictionary_object__object__Fields *)&local_a8->bounds)->_buckets =
                   pSVar25;
              il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                                 &local_a8->bounds);
              pSVar15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              color_02.fields.b = 0.5;
              color_02.fields.a = 0.5;
              color_02.fields.r = 0.5;
              color_02.fields.g = 0.5;
              Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar15,color_02,(MethodInfo *)0x0);
              plVar19 = (long *)&local_a8->max_length;
              local_a8->max_length = (il2cpp_array_size_t)pSVar15;
              il2cpp_runtime_helper_022b4080();
              if (10 < (uint)*piVar26) {
                plVar19 = (long *)pSVar17->m_Items[10];
                fVar28 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                if (0xb < (uint)pSVar17->max_length) {
                  plVar19 = (long *)pSVar17->m_Items[0xb];
                  fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
                  local_a8->m_Items[0].fields.hashCode = (int32_t)fVar28;
                  local_a8->m_Items[0].fields.next = (int32_t)fVar29;
                  fVar28 = 0.5;
                  uVar4 = (uint)*piVar26;
                  goto joined_r0x040a475f;
                }
              }
              goto label_040a4765;
            }
            local_a8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                       il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
            Map_MapScriptLegacyMaterial___ctor((Map_MapScriptLegacyMaterial_o *)local_a8,(MethodInfo *)0x0);
            if (TypeInfo_MapObjectShader->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            plVar19 = (long *)TypeInfo_MapObjectShader;
            if (local_a8 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            ((System_Collections_Generic_Dictionary_object__object__Fields *)&local_a8->bounds)->_buckets =
                 TypeInfo_MapObjectShader->m_Items[6].fields.key[3].monitor;
            il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                               &local_a8->bounds);
            pSVar15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            color_03.fields.b = 0.0;
            color_03.fields.a = 1.0;
            color_03.fields.r = 0.0;
            color_03.fields.g = 1.0;
            Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar15,color_03,(MethodInfo *)0x0);
            plVar19 = (long *)&local_a8->max_length;
            local_a8->max_length = (il2cpp_array_size_t)pSVar15;
            il2cpp_runtime_helper_022b4080();
            fVar28 = 1.0;
          }
          else {
            local_a8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                       il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
            plVar19 = (long *)local_a8;
            Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)local_a8,(MethodInfo *)0x0);
            if (local_a8 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_040a47b7;
            ((System_Collections_Generic_Dictionary_object__object__Fields *)&local_a8->bounds)->_buckets =
                 "Transparent";
            il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                               &local_a8->bounds);
            pSVar15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            uVar31 = 0;
            uVar33 = 0x3f6ac083;
            uVar34 = 0x3f800000;
label_040a3b60:
            color_01.fields.g = (float)uVar33;
            color_01.fields.r = (float)uVar31;
            color_01.fields.a = 0.325;
            color_01.fields.b = (float)uVar34;
            Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar15,color_01,(MethodInfo *)0x0);
            plVar19 = (long *)&local_a8->max_length;
            local_a8->max_length = (il2cpp_array_size_t)pSVar15;
            il2cpp_runtime_helper_022b4080();
            fVar28 = 0.32;
          }
          uVar4 = (uint)*piVar26;
        }
        else {
          local_a8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                     il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptReflectiveMaterial);
          plVar19 = (long *)local_a8;
          Map_MapScriptReflectiveMaterial___ctor
                    ((Map_MapScriptReflectiveMaterial_o *)local_a8,(MethodInfo *)0x0);
          if (local_a8 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_040a47b7;
          ((System_Collections_Generic_Dictionary_object__object__Fields *)&local_a8->bounds)->_buckets =
               "Reflective";
          il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)&local_a8->bounds
                            );
          pSVar15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          Utility_Color255___ctor((Utility_Color255_o *)pSVar15,0xb2,0xe3,0xff,0xff,(MethodInfo *)0x0);
          local_a8->max_length = (il2cpp_array_size_t)pSVar15;
          il2cpp_runtime_helper_022b4080(&local_a8->max_length);
          if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar19 = *(long **)(*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
          if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
               (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) ||
             (pIVar18 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)plVar19,
                                   (Il2CppObject *)pSVar14,MethodInfo_MapScriptBasicMaterial_get_Item), pIVar6 = TypeInfo_MapScriptBasicMaterial,
             pIVar18 == (Il2CppObject *)0x0)) goto label_040a47b7;
          pIVar7 = (local_a8->obj).klass;
          bVar3 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
          if (((pIVar7->_2).naturalAligment < bVar3) ||
             ((ppIVar8 = (pIVar7->_2).typeHierarchy, ppIVar8[(ulong)bVar3 - 1] != TypeInfo_MapScriptBasicMaterial ||
              (*(Il2CppClass **)&local_a8->m_Items[0].fields = pIVar18[2].klass,
              ppIVar8[(ulong)bVar3 - 1] != pIVar6)))) goto label_040a47bc;
          plVar19 = (long *)local_a8->m_Items;
          il2cpp_runtime_helper_022b4080();
          if ((uint)*piVar26 < 0xb) goto label_040a4765;
          plVar19 = (long *)pSVar17->m_Items[10];
          local_48 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
          if ((uint)pSVar17->max_length < 0xc) goto label_040a4765;
          fVar29 = System_Single__Parse(pSVar17->m_Items[0xb],(MethodInfo *)0x0);
          pIVar6 = (local_a8->obj).klass;
          bVar3 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
          if (((pIVar6->_2).naturalAligment < bVar3) ||
             (fVar30 = local_48, (pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_MapScriptBasicMaterial))
          goto label_040a47bc;
label_040a3212:
          *(float *)&local_a8->m_Items[0].fields.key = fVar30;
          *(float *)((long)&local_a8->m_Items[0].fields.key + 4) = fVar29;
          uVar4 = (uint)*piVar26;
          plVar19 = (long *)local_a8;
        }
      }
      else {
        local_a8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                   il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
        plVar19 = (long *)local_a8;
        Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)local_a8,(MethodInfo *)0x0);
        if (local_a8 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_040a47b7;
        plVar19 = (long *)&local_a8->bounds;
        ((System_Collections_Generic_Dictionary_object__object__Fields *)&local_a8->bounds)->_buckets =
             "Basic";
        il2cpp_runtime_helper_022b4080();
        uVar4 = (uint)*piVar26;
      }
    }
joined_r0x040a475f:
    if (uVar4 < 2) goto label_040a4765;
    plVar19 = (long *)pSVar17->m_Items[1];
    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar19 ==
        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_040a47b7;
    pSVar16 = System_String__ToLower((System_String_o *)plVar19,(MethodInfo *)0x0);
    if ((uint)*piVar26 < 7) goto label_040a4765;
    bVar11 = System_String__op_Inequality(pSVar17->m_Items[6],"0",(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      plVar19 = (long *)pSVar14;
      bVar11 = System_String__op_Inequality((System_String_o *)pSVar14,"default",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        if (pSVar16 == (System_String_o *)0x0) goto label_040a47b7;
        bVar11 = System_String__StartsWith(pSVar16,"start",(MethodInfo *)0x0);
        if (((((char)bVar11 != '\0') ||
             (bVar11 = System_String__StartsWith(pSVar16,"kill",(MethodInfo *)0x0), (char)bVar11 != '\0'
             )) || (bVar11 = System_String__StartsWith(pSVar16,"end",(MethodInfo *)0x0),
                   (char)bVar11 != '\0')) ||
           (bVar11 = System_String__StartsWith(pSVar16,"checkpoint",(MethodInfo *)0x0), (char)bVar11 != '\0'))
        goto label_040a2c3d;
      }
      bVar11 = System_String__op_Equality((System_String_o *)pSVar14,"cannonregionmat",(MethodInfo *)0x0);
      plVar19 = (long *)pSVar14;
      if ((char)bVar11 == '\0') {
        if ((uint)*piVar26 < 8) goto label_040a4765;
        plVar19 = (long *)pSVar17->m_Items[7];
        fVar29 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
        if ((uint)pSVar17->max_length < 9) goto label_040a4765;
        plVar19 = (long *)pSVar17->m_Items[8];
        fVar30 = System_Single__Parse((System_String_o *)plVar19,(MethodInfo *)0x0);
        if ((uint)pSVar17->max_length < 10) goto label_040a4765;
        local_48 = System_Single__Parse(pSVar17->m_Items[9],(MethodInfo *)0x0);
        pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        fVar32 = local_48;
      }
      else {
        if ((uint)*piVar26 < 9) goto label_040a4765;
        fVar30 = System_Single__Parse(pSVar17->m_Items[8],(MethodInfo *)0x0);
        pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
        fVar29 = 0.0;
        fVar32 = 0.0;
      }
      color.fields.g = fVar30;
      color.fields.r = fVar29;
      color.fields.a = fVar28;
      color.fields.b = fVar32;
      plVar19 = (long *)pSVar14;
      Utility_Color255___ctor_4388bb0((Utility_Color255_o *)pSVar14,color,(MethodInfo *)0x0);
      if (local_a8 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_040a47b7;
      local_a8->max_length = (il2cpp_array_size_t)pSVar14;
      il2cpp_runtime_helper_022b4080(&local_a8->max_length,pSVar14);
    }
label_040a2c3d:
    pSVar12->m_Items[3].fields.value = &local_a8->obj;
    il2cpp_runtime_helper_022b4080();
    uVar24 = local_60;
label_040a35df:
    plVar19 = (long *)pSVar12->max_length;
    bVar11 = System_String__op_Equality((System_String_o *)plVar19,"None",(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      plVar19 = (long *)pSVar12->m_Items[0].fields.value;
      bVar11 = System_String__op_Equality((System_String_o *)plVar19,"Unnamed",(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Concat_3ae5ba0("Unhandled legacy object: ",(System_String_o *)local_58,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
        uVar23 = uVar24 & 0xffffffff;
        goto label_040a2233;
      }
    }
    if (g_data_057ac494 == '\0') {
      plVar19 = &TypeInfo_MapConverter;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac494 = '\x01';
    }
    iVar22 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
    **(int **)(TypeInfo_MapConverter + 0xb8) = iVar22;
    pSVar12->m_Items[0].fields.hashCode = iVar22;
    lVar10 = MethodInfo_Void_Add;
    pIVar18 = local_50->m_Items[0].fields.value;
    if ((pIVar18 == (Il2CppObject *)0x0) ||
       (pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pIVar18[1].klass,
       plVar19 = (long *)pSVar14,
       pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_040a47b7;
    piVar2 = (int *)((long)&pSVar14->max_length + 4);
    *piVar2 = *piVar2 + 1;
    pIVar9 = pSVar14->bounds;
    if (pIVar9 == (Il2CppArrayBounds *)0x0) goto label_040a47b7;
    uVar4 = *(uint *)&pSVar14->max_length;
    if (uVar4 < (uint)pIVar9[1].lower_bound) {
      *(uint *)&pSVar14->max_length = uVar4 + 1;
      pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                (&pIVar9[2].length + (int)uVar4);
      (&pIVar9[2].length)[(int)uVar4] = (il2cpp_array_size_t)pSVar12;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)pSVar12,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar23 = uVar24 & 0xffffffff;
label_040a2233:
  uVar27 = uVar27 + 1;
  uVar4 = (uint)local_38->max_length;
  uVar24 = uVar23 & 0xffffffff;
  if ((int)uVar4 <= (int)uVar27) goto label_040a476c;
  plVar19 = (long *)pSVar14;
  if (uVar4 <= uVar27) goto label_040a4765;
  goto label_040a2257;
}


// Map.MapConverter$$GetNextId
// il2cpp: int32_t Map_MapConverter__GetNextId (const MethodInfo* method);
// 0x40a1590

int32_t Map_MapConverter__GetNextId(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac494 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapConverter);
    g_data_057ac494 = '\x01';
  }
  iVar1 = **(int **)(TypeInfo_MapConverter + 0xb8) + 1;
  **(int **)(TypeInfo_MapConverter + 0xb8) = iVar1;
  return iVar1;
}


// Map.MapConverter$$.ctor
// il2cpp: void Map_MapConverter___ctor (Map_MapConverter_o* __this, const MethodInfo* method);
// 0x40a47d0

void Map_MapConverter___ctor(Map_MapConverter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


