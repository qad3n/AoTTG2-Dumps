// Type: Map.MapScript
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapScript.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapScript/MapScript.cs  [CHANGED since prior version]
// --------------------------------

// Map.MapScript$$CreateDefault
// il2cpp: Map_MapScript_o* Map_MapScript__CreateDefault (const MethodInfo* method);
// 0x3dae000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Map_MapScript_o * Map_MapScript__CreateDefault(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Map_MapScriptObjects_o *pMVar4;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar5;
  Map_MapScriptBaseObject_array *pMVar6;
  long lVar7;
  Map_MapScript_o *__this;
  Map_MapScriptSceneObject_o *__this_00;
  Map_MapScriptBasicMaterial_o *__this_01;
  Il2CppObject *pIVar8;
  Utility_Color255_o *__this_02;
  Map_MapScriptSceneObject_o *__this_03;
  MethodInfo *in_RSI;
  MethodInfo *method_00;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o euler;
  UnityEngine_Color_o color;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_057027aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapTextures);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&"Daylight");
    il2cpp_init_method_metadata(&"Grass6");
    il2cpp_init_method_metadata(&"Geometry/Cuboid");
    il2cpp_init_method_metadata(&"Basic");
    DAT_057027aa = '\x01';
  }
  __this = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
  Map_MapScript___ctor(__this,in_RSI);
  __this_00 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,in_RSI);
  method_00 = "Geometry/Cuboid";
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    (__this_00->fields).Asset = (System_String_o *)"Geometry/Cuboid";
    il2cpp_runtime_glue(&(__this_00->fields).Asset);
    (__this_00->fields).RotationY = 100.0;
    (__this_00->fields).RotationZ = 5.0;
    (__this_00->fields).ScaleX = 100.0;
    (__this_00->fields).Name = (System_String_o *)0xc1c8000000000000;
    (__this_00->fields).PositionX = 0.0;
    (__this_00->fields).Id = 0;
    __this_01 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBasicMaterial);
    Map_MapScriptBasicMaterial___ctor(__this_01,method_00);
    if (__this_01 != (Map_MapScriptBasicMaterial_o *)0x0) {
      (__this_01->fields).Shader = "Basic";
      il2cpp_runtime_glue(&__this_01->fields);
      if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar3,"Grass6",MethodInfo_MapScriptBasicMaterial_get_Item);
        if (pIVar8 != (Il2CppObject *)0x0) {
          (__this_01->fields).Texture = (System_String_o *)pIVar8[2].klass;
          il2cpp_runtime_glue(&(__this_01->fields).Texture);
          (__this_01->fields).Tiling.fields = (UnityEngine_Vector2_Fields)0x41c8000041c80000;
          __this_02 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
          color.fields.b = 1.0;
          color.fields.a = 1.0;
          color.fields.r = 1.0;
          color.fields.g = 1.0;
          Utility_Color255___ctor(__this_02,color,(MethodInfo *)0x0);
          (__this_01->fields).Color = __this_02;
          il2cpp_runtime_glue(&(__this_01->fields).Color,__this_02);
          (__this_00->fields).PhysicsMaterial = (System_String_o *)__this_01;
          il2cpp_runtime_glue(&(__this_00->fields).PhysicsMaterial,__this_01);
          lVar7 = MethodInfo_Void_Add;
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
                il2cpp_runtime_glue(pMVar6->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar5,
                           (Il2CppObject *)__this_00,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              __this_03 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
              Map_MapScriptSceneObject___ctor(__this_03,(MethodInfo *)__this_00);
              if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
              if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                   (pSVar3,"Daylight",MethodInfo_MapScriptBaseObject_get_Item);
                if (__this_03 != (Map_MapScriptSceneObject_o *)0x0) {
                  (*(__this_03->klass->vtable)._10_Copy.methodPtr)
                            (__this_03,pIVar8,(__this_03->klass->vtable)._10_Copy.method);
                  (__this_03->fields).Name = (System_String_o *)0x41a0000000000000;
                  (__this_03->fields).PositionX = 0.0;
                  rotation.fields._8_8_ = (undefined8)DAT_00ccd5c0;
                  rotation.fields.x = -0.2;
                  rotation.fields.y = -0.8;
                  UVar9 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
                  euler.fields.x = UVar9.fields.x * 57.29578;
                  euler.fields.y = UVar9.fields.y * 57.29578;
                  euler.fields.z = UVar9.fields.z * 57.29578;
                  UVar9 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
                  (__this_03->fields).PositionY = UVar9.fields.x;
                  (__this_03->fields).PositionZ = UVar9.fields.y;
                  (__this_03->fields).RotationX = UVar9.fields.z;
                  (__this_03->fields).Id = 1;
                  lVar7 = MethodInfo_Void_Add;
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
                        il2cpp_runtime_glue(pMVar6->m_Items + (int)uVar2,__this_03);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar5,
                                   (Il2CppObject *)__this_03,
                                   *(MethodInfo_35A7350 **)
                                    (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapScript$$Serialize
// il2cpp: System_String_o* Map_MapScript__Serialize (Map_MapScript_o* __this, const MethodInfo* method);
// 0x3daee50

System_String_o * Map_MapScript__Serialize(Map_MapScript_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Map_MapScriptOptions_o *pMVar4;
  Map_MapScriptCustomAssets_o *pMVar5;
  Map_MapScriptObjects_o *pMVar6;
  Settings_WeatherSet_o *pSVar7;
  long lVar8;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  System_String_array *value;
  
  if (DAT_057027ab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"Weather");
    il2cpp_init_method_metadata(&"Objects");
    il2cpp_init_method_metadata(&"CustomAssets");
    il2cpp_init_method_metadata(&"Logic");
    il2cpp_init_method_metadata(&"Options");
    DAT_057027ab = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  pSVar9 = System_String__Concat((__this->fields).HeaderPrefix,"Options",(MethodInfo *)0x0);
  lVar8 = MethodInfo_Void_Add;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar9);
        pMVar4 = (__this->fields).Options;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)pSVar9,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        pMVar4 = (__this->fields).Options;
      }
      if (pMVar4 != (Map_MapScriptOptions_o *)0x0) {
        pIVar10 = (Il2CppObject *)
                  (*(pMVar4->klass->vtable)._8_Serialize.methodPtr)
                            (pMVar4,(pMVar4->klass->vtable)._8_Serialize.method);
        lVar8 = MethodInfo_Void_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pIVar10;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pIVar10);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,pIVar10,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          pSVar9 = System_String__Concat
                             ((__this->fields).HeaderPrefix,"CustomAssets",(MethodInfo *)0x0);
          lVar8 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar9);
              pMVar5 = (__this->fields).CustomAssets;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)pSVar9,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
              pMVar5 = (__this->fields).CustomAssets;
            }
            if (pMVar5 != (Map_MapScriptCustomAssets_o *)0x0) {
              pIVar10 = (Il2CppObject *)
                        (*(pMVar5->klass->vtable)._8_Serialize.methodPtr)
                                  (pMVar5,(pMVar5->klass->vtable)._8_Serialize.method);
              lVar8 = MethodInfo_Void_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (__this_00->fields)._items;
              if (pSVar3 != (System_Object_array *)0x0) {
                uVar2 = (__this_00->fields)._size;
                if (uVar2 < (uint)pSVar3->max_length) {
                  (__this_00->fields)._size = uVar2 + 1;
                  pSVar3->m_Items[(int)uVar2] = pIVar10;
                  il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pIVar10);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (__this_00,pIVar10,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                pSVar9 = System_String__Concat
                                   ((__this->fields).HeaderPrefix,"Objects",(MethodInfo *)0x0);
                lVar8 = MethodInfo_Void_Add;
                piVar1 = &(__this_00->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar3 = (__this_00->fields)._items;
                if (pSVar3 != (System_Object_array *)0x0) {
                  uVar2 = (__this_00->fields)._size;
                  if (uVar2 < (uint)pSVar3->max_length) {
                    (__this_00->fields)._size = uVar2 + 1;
                    pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
                    il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar9);
                    pMVar6 = (__this->fields).Objects;
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (__this_00,(Il2CppObject *)pSVar9,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                    pMVar6 = (__this->fields).Objects;
                  }
                  if (pMVar6 != (Map_MapScriptObjects_o *)0x0) {
                    pIVar10 = (Il2CppObject *)
                              (*(pMVar6->klass->vtable)._8_Serialize.methodPtr)
                                        (pMVar6,(pMVar6->klass->vtable)._8_Serialize.method);
                    lVar8 = MethodInfo_Void_Add;
                    piVar1 = &(__this_00->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar3 = (__this_00->fields)._items;
                    if (pSVar3 != (System_Object_array *)0x0) {
                      uVar2 = (__this_00->fields)._size;
                      if (uVar2 < (uint)pSVar3->max_length) {
                        (__this_00->fields)._size = uVar2 + 1;
                        pSVar3->m_Items[(int)uVar2] = pIVar10;
                        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pIVar10);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  (__this_00,pIVar10,
                                   *(MethodInfo_35A7350 **)
                                    (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                      }
                      pSVar9 = System_String__Concat
                                         ((__this->fields).HeaderPrefix,"Logic",
                                          (MethodInfo *)0x0);
                      lVar8 = MethodInfo_Void_Add;
                      piVar1 = &(__this_00->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar3 = (__this_00->fields)._items;
                      if (pSVar3 != (System_Object_array *)0x0) {
                        uVar2 = (__this_00->fields)._size;
                        if (uVar2 < (uint)pSVar3->max_length) {
                          (__this_00->fields)._size = uVar2 + 1;
                          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
                          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar9);
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    (__this_00,(Il2CppObject *)pSVar9,
                                     *(MethodInfo_35A7350 **)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar8 = MethodInfo_Void_Add;
                        pSVar9 = (__this->fields).Logic;
                        piVar1 = &(__this_00->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar3 = (__this_00->fields)._items;
                        if (pSVar3 != (System_Object_array *)0x0) {
                          uVar2 = (__this_00->fields)._size;
                          if (uVar2 < (uint)pSVar3->max_length) {
                            (__this_00->fields)._size = uVar2 + 1;
                            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
                            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      (__this_00,(Il2CppObject *)pSVar9,
                                       *(MethodInfo_35A7350 **)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                          }
                          pSVar9 = System_String__Concat
                                             ((__this->fields).HeaderPrefix,"Weather",
                                              (MethodInfo *)0x0);
                          lVar8 = MethodInfo_Void_Add;
                          piVar1 = &(__this_00->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar3 = (__this_00->fields)._items;
                          if (pSVar3 != (System_Object_array *)0x0) {
                            uVar2 = (__this_00->fields)._size;
                            if (uVar2 < (uint)pSVar3->max_length) {
                              (__this_00->fields)._size = uVar2 + 1;
                              pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
                              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar9);
                              pSVar7 = (__this->fields).Weather;
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        (__this_00,(Il2CppObject *)pSVar9,
                                         *(MethodInfo_35A7350 **)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              pSVar7 = (__this->fields).Weather;
                            }
                            if (pSVar7 != (Settings_WeatherSet_o *)0x0) {
                              pIVar10 = (Il2CppObject *)
                                        (*(pSVar7->klass->vtable)._7_SerializeToJsonString.methodPtr
                                        )(pSVar7,(pSVar7->klass->vtable)._7_SerializeToJsonString.
                                                 method);
                              lVar8 = MethodInfo_Void_Add;
                              piVar1 = &(__this_00->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar3 = (__this_00->fields)._items;
                              if (pSVar3 != (System_Object_array *)0x0) {
                                uVar2 = (__this_00->fields)._size;
                                if (uVar2 < (uint)pSVar3->max_length) {
                                  (__this_00->fields)._size = uVar2 + 1;
                                  pSVar3->m_Items[(int)uVar2] = pIVar10;
                                  il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
                                }
                                else {
                                  System_Collections_Generic_List<object>__AddWithResize
                                            (__this_00,pIVar10,
                                             *(MethodInfo_35A7350 **)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                                }
                                if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
                                  il2cpp_init_class();
                                }
                                pSVar9 = System_Char__ToString
                                                   ((short)__this + 0x18,(MethodInfo *)0x0);
                                value = (System_String_array *)
                                        System_Collections_Generic_List<object>__ToArray
                                                  (__this_00,MethodInfo_String___ToArray);
                                pSVar9 = System_String__Join(pSVar9,value,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapScript$$CreateHeader
// il2cpp: System_String_o* Map_MapScript__CreateHeader (Map_MapScript_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3daf3c0

System_String_o *
Map_MapScript__CreateHeader(Map_MapScript_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = System_String__Concat((__this->fields).HeaderPrefix,name,(MethodInfo *)0x0);
  return pSVar1;
}


// Map.MapScript$$Deserialize
// il2cpp: void Map_MapScript__Deserialize (Map_MapScript_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x3daf3d0

void Map_MapScript__Deserialize(Map_MapScript_o *__this,System_String_o *csv,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int32_t length;
  uint uVar3;
  System_String_array *pSVar4;
  uint uVar5;
  long lVar6;
  bool_conflict bVar7;
  MethodInfo *pMVar8;
  Map_MapScript_o *pMVar9;
  System_String_array *pSVar10;
  System_Collections_Generic_List_string__o *currentSectionItems;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_Char_array *trimChars;
  MethodInfo_35A7350 *method_00;
  uint uVar13;
  System_String_o *pSStack_48;
  MethodInfo *pMStack_38;
  
  if (DAT_057027ac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_char);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Logic");
    il2cpp_init_method_metadata(&"");
    DAT_057027ac = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar8 = (MethodInfo *)Utility_Util__CreateMD5(csv,(MethodInfo *)0x0);
  (__this->fields).MapHash = (System_String_o *)pMVar8;
  il2cpp_runtime_glue(&(__this->fields).MapHash);
  bVar7 = Map_MapConverter__IsLegacy(csv,pMVar8);
  if ((char)bVar7 == '\0') {
    if (csv != (System_String_o *)0x0) {
      pMStack_38 = (MethodInfo *)0x0;
      pSVar10 = System_String__Split(csv,(__this->fields).Delimiter,0,(MethodInfo *)0x0);
      currentSectionItems =
           (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)currentSectionItems,MethodInfo_List_1_System_String);
      if (pSVar10 != (System_String_array *)0x0) {
        pSStack_48 = "";
        iVar2 = (int)pSVar10->max_length;
        if (iVar2 < 1) {
LAB_03daf7fa:
          Map_MapScript__DeserializeSection(__this,pSStack_48,currentSectionItems,pMStack_38);
          return;
        }
        pMStack_38 = (MethodInfo *)0x1;
        uVar13 = 0;
        if (iVar2 != 0) {
          do {
            if ((pSVar10->m_Items[(int)uVar13] == (System_String_o *)0x0) ||
               (pSVar11 = System_String__Trim(pSVar10->m_Items[(int)uVar13],(MethodInfo *)0x0),
               pSVar11 == (System_String_o *)0x0)) goto LAB_03daf814;
            bVar7 = System_String__StartsWith
                              (pSVar11,(__this->fields).HeaderPrefix,(MethodInfo *)0x0);
            uVar3 = (uint)pMStack_38;
            if ((char)bVar7 == '\0') {
              bVar7 = System_String__op_Equality(pSStack_48,"Logic",(MethodInfo *)0x0);
              lVar6 = MethodInfo_Void_Add;
              if ((char)bVar7 == '\0') {
                if (currentSectionItems == (System_Collections_Generic_List_string__o *)0x0)
                goto LAB_03daf814;
                piVar1 = &(currentSectionItems->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar4 = (currentSectionItems->fields)._items;
                if (pSVar4 == (System_String_array *)0x0) goto LAB_03daf814;
                uVar13 = (currentSectionItems->fields)._size;
                if (uVar13 < (uint)pSVar4->max_length) {
                  (currentSectionItems->fields)._size = uVar13 + 1;
                  pSVar4->m_Items[(int)uVar13] = pSVar11;
                  il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar13);
                  goto LAB_03daf570;
                }
                method_00 = *(MethodInfo_35A7350 **)
                             (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
              }
              else {
                if ((uint)pSVar10->max_length <= uVar13) break;
                pSVar11 = pSVar10->m_Items[(int)uVar13];
                trimChars = (System_Char_array *)il2cpp_glue_02274930(TypeInfo_char,2);
                if (trimChars == (System_Char_array *)0x0) goto LAB_03daf814;
                iVar2 = (int)trimChars->max_length;
                if ((iVar2 == 0) || (trimChars->m_Items[0] = 0xd, iVar2 == 1)) break;
                trimChars->m_Items[1] = 10;
                if ((pSVar11 == (System_String_o *)0x0) ||
                   (pSVar11 = System_String__Trim(pSVar11,trimChars,(MethodInfo *)0x0),
                   lVar6 = MethodInfo_Void_Add,
                   currentSectionItems == (System_Collections_Generic_List_string__o *)0x0))
                goto LAB_03daf814;
                piVar1 = &(currentSectionItems->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar4 = (currentSectionItems->fields)._items;
                if (pSVar4 == (System_String_array *)0x0) goto LAB_03daf814;
                uVar13 = (currentSectionItems->fields)._size;
                if (uVar13 < (uint)pSVar4->max_length) {
                  (currentSectionItems->fields)._size = uVar13 + 1;
                  pSVar4->m_Items[(int)uVar13] = pSVar11;
                  il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar13);
                  uVar5 = (uint)pSVar10->max_length;
                  goto joined_r0x03daf772;
                }
                method_00 = *(MethodInfo_35A7350 **)
                             (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)currentSectionItems,
                         (Il2CppObject *)pSVar11,method_00);
              uVar5 = (uint)pSVar10->max_length;
            }
            else {
              pSVar12 = (__this->fields).HeaderPrefix;
              if (pSVar12 == (System_String_o *)0x0) goto LAB_03daf814;
              pSVar12 = System_String__Substring
                                  (pSVar11,(pSVar12->fields)._stringLength,(MethodInfo *)0x0);
              pMVar8 = (MethodInfo *)&"Logic";
              bVar7 = System_String__op_Equality(pSVar12,"Logic",(MethodInfo *)0x0);
              if ((char)bVar7 != '\0') {
                (__this->fields).LogicStart = uVar3;
              }
              Map_MapScript__DeserializeSection(__this,pSStack_48,currentSectionItems,pMVar8);
              pSVar12 = (__this->fields).HeaderPrefix;
              if ((pSVar12 == (System_String_o *)0x0) ||
                 (pSStack_48 = System_String__Substring
                                         (pSVar11,(pSVar12->fields)._stringLength,(MethodInfo *)0x0)
                 , currentSectionItems == (System_Collections_Generic_List_string__o *)0x0))
              goto LAB_03daf814;
              piVar1 = &(currentSectionItems->fields)._version;
              *piVar1 = *piVar1 + 1;
              length = (currentSectionItems->fields)._size;
              (currentSectionItems->fields)._size = 0;
              if (length < 1) {
LAB_03daf570:
                uVar5 = (uint)pSVar10->max_length;
              }
              else {
                System_Array__Clear((System_Array_o *)(currentSectionItems->fields)._items,0,length,
                                    (MethodInfo *)0x0);
                uVar5 = (uint)pSVar10->max_length;
              }
            }
joined_r0x03daf772:
            pMStack_38 = (MethodInfo *)(ulong)(uVar3 + 1);
            if ((int)uVar5 <= (int)uVar3) goto LAB_03daf7fa;
            uVar13 = uVar3;
          } while (uVar3 < uVar5);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  else {
    pMVar9 = Map_MapConverter__Convert(csv,pMVar8);
    if (pMVar9 != (Map_MapScript_o *)0x0) {
      (__this->fields).Objects = (pMVar9->fields).Objects;
      il2cpp_runtime_glue(&(__this->fields).Objects);
      return;
    }
  }
LAB_03daf814:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapScript$$DeserializeSection
// il2cpp: void Map_MapScript__DeserializeSection (Map_MapScript_o* __this, System_String_o* currentSection, System_Collections_Generic_List_string__o* currentSectionItems, const MethodInfo* method);
// 0x3daf820

void Map_MapScript__DeserializeSection
               (Map_MapScript_o *__this,System_String_o *currentSection,
               System_Collections_Generic_List_string__o *currentSectionItems,MethodInfo *method)

{
  Map_MapScriptOptions_o *pMVar1;
  Map_MapScriptCustomAssets_o *pMVar2;
  Map_MapScriptObjects_o *pMVar3;
  Settings_WeatherSet_o *pSVar4;
  Settings_BoolSetting_o *__this_00;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  System_String_array *value;
  
  if (DAT_057027ad == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Weather");
    il2cpp_init_method_metadata(&"Objects");
    il2cpp_init_method_metadata(&"CustomAssets");
    il2cpp_init_method_metadata(&"Logic");
    il2cpp_init_method_metadata(&"Options");
    DAT_057027ad = '\x01';
  }
  if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = System_Char__ToString((short)__this + 0x18,(MethodInfo *)0x0);
  if (currentSectionItems == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value = (System_String_array *)
          System_Collections_Generic_List<object>__ToArray
                    ((System_Collections_Generic_List_object__o *)currentSectionItems,MethodInfo_String___ToArray);
  pSVar6 = System_String__Join(pSVar6,value,(MethodInfo *)0x0);
  bVar5 = System_String__op_Equality(currentSection,"Options",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    bVar5 = System_String__op_Equality(currentSection,"CustomAssets",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      bVar5 = System_String__op_Equality(currentSection,"Objects",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        bVar5 = System_String__op_Equality(currentSection,"Logic",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          bVar5 = System_String__op_Equality(currentSection,"Weather",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pSVar4 = (__this->fields).Weather;
            if (pSVar4 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            (*(pSVar4->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                      (pSVar4,pSVar6,(pSVar4->klass->vtable)._8_DeserializeFromJsonString.method);
            pSVar4 = (__this->fields).Weather;
            if (pSVar4 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            __this_00 = (pSVar4->fields).Preset;
            if (__this_00 == (Settings_BoolSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            Settings_TypedSetting<bool>__set_Value
                      ((Settings_TypedSetting_bool__o *)__this_00,0,MethodInfo_Void_set_Value);
          }
        }
        else {
          (__this->fields).Logic = pSVar6;
          il2cpp_runtime_glue(&(__this->fields).Logic,pSVar6);
        }
      }
      else {
        pMVar3 = (__this->fields).Objects;
        if (pMVar3 == (Map_MapScriptObjects_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (*(pMVar3->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar3,pSVar6,(pMVar3->klass->vtable)._9_Deserialize.method);
      }
    }
    else {
      pMVar2 = (__this->fields).CustomAssets;
      if (pMVar2 == (Map_MapScriptCustomAssets_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*(pMVar2->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar2,pSVar6,(pMVar2->klass->vtable)._9_Deserialize.method);
    }
  }
  else {
    pMVar1 = (__this->fields).Options;
    if (pMVar1 == (Map_MapScriptOptions_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
              (pMVar1,pSVar6,(pMVar1->klass->vtable)._9_Deserialize.method);
  }
  return;
}


// Map.MapScript$$.ctor
// il2cpp: void Map_MapScript___ctor (Map_MapScript_o* __this, const MethodInfo* method);
// 0x3d9f140

void Map_MapScript___ctor(Map_MapScript_o *__this,MethodInfo *method)

{
  Map_MapScriptOptions_o *__this_00;
  Map_MapScriptCustomAssets_o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  Map_MapScriptObjects_o *__this_03;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_04;
  Settings_WeatherSet_o *__this_05;
  
  if (DAT_057027ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapScriptCustomAssets);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptObjects);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptOptions);
    il2cpp_init_method_metadata(&TypeInfo_WeatherSet);
    il2cpp_init_method_metadata(&"/// ");
    DAT_057027ae = '\x01';
  }
  (__this->fields).HeaderPrefix = "/// ";
  il2cpp_runtime_glue(&__this->fields);
  (__this->fields).Delimiter = 10;
  __this_00 = (Map_MapScriptOptions_o *)il2cpp_runtime_glue(TypeInfo_MapScriptOptions);
  if (DAT_057027b4 == '\0') {
    il2cpp_init_method_metadata(&"1.0");
    DAT_057027b4 = '\x01';
  }
  (__this_00->fields).EditorVersion = "1.0";
  il2cpp_runtime_glue(&__this_00->fields);
  (__this_00->fields).Description = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this_00->fields).Description);
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).Options = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Options,__this_00);
  __this_01 = (Map_MapScriptCustomAssets_o *)il2cpp_runtime_glue(TypeInfo_MapScriptCustomAssets);
  if (DAT_057027b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_057027b1 = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_System_String);
  (__this_01->fields).CustomAssets = __this_02;
  il2cpp_runtime_glue(&__this_01->fields);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)__this_01,(MethodInfo *)0x0);
  (__this->fields).CustomAssets = __this_01;
  il2cpp_runtime_glue(&(__this->fields).CustomAssets,__this_01);
  __this_03 = (Map_MapScriptObjects_o *)il2cpp_runtime_glue(TypeInfo_MapScriptObjects);
  if (DAT_057027b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapScriptBaseObject);
    il2cpp_init_method_metadata(&TypeInfo_List_MapScriptBaseObject);
    DAT_057027b3 = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_MapScriptBaseObject__o *)
              il2cpp_runtime_glue(TypeInfo_List_MapScriptBaseObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_Map_MapScriptBaseObject);
  (__this_03->fields).Objects = __this_04;
  il2cpp_runtime_glue(&__this_03->fields);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)__this_03,(MethodInfo *)0x0);
  (__this->fields).Objects = __this_03;
  il2cpp_runtime_glue(&(__this->fields).Objects);
  __this_05 = (Settings_WeatherSet_o *)il2cpp_runtime_glue(TypeInfo_WeatherSet);
  Settings_WeatherSet___ctor(__this_05,(MethodInfo *)0x0);
  (__this->fields).Weather = __this_05;
  il2cpp_runtime_glue(&(__this->fields).Weather,__this_05);
  (__this->fields).Logic = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields).Logic);
  (__this->fields).MapHash = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields).MapHash);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


