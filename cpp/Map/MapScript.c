// Type: Map.MapScript
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScript.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScript.cs
// --------------------------------

// Map.MapScript$$CreateDefault
// il2cpp: Map_MapScript_o* Map_MapScript__CreateDefault (const MethodInfo* method);
// 0x40b3a60

Map_MapScript_o * Map_MapScript__CreateDefault(MethodInfo *method)

{
  int *piVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  void *pvVar4;
  System_Threading_CancellationTokenSource_o *pSVar5;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  System_String_o *a;
  System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *__this;
  char cVar6;
  bool_conflict bVar7;
  uint uVar8;
  System_Int32_array *__this_00;
  System_Int32_array *__this_01;
  Il2CppObject *pIVar9;
  System_Int32_array *pSVar10;
  undefined4 extraout_var;
  Photon_Pun_MonoBehaviourPunCallbacks_o **ppPVar11;
  undefined8 uVar12;
  Photon_Realtime_Player_o *player;
  Map_MapScript_o *extraout_RAX;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  Map_MapScript_o *extraout_RAX_00;
  long lVar13;
  long lVar14;
  Map_MapScript_o *extraout_RAX_01;
  Photon_Pun_PhotonView_o *pPVar15;
  Photon_Pun_MonoBehaviourPunCallbacks_o *__this_02;
  Map_MapScript_o *pMVar16;
  Map_MapScript_o *extraout_RAX_02;
  System_Int32_array *unaff_RBX;
  System_Int32_array **ppSVar17;
  System_Int32_array *in_RSI;
  System_Int32_array *pSVar18;
  Photon_Realtime_Player_o *targetPlayer;
  MethodInfo *method_00;
  undefined1 uVar19;
  void **ppvVar20;
  Photon_Pun_MonoBehaviourPunCallbacks_o *__this_03;
  long *unaff_R12;
  Photon_Realtime_Player_o *unaff_R13;
  long *plVar21;
  void ***pppvVar22;
  UnityEngine_Color_o color;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o euler;
  System_Int32_array *pSStack_40;
  System_Int32_array *pSStack_38;
  System_Int32_array *pSStack_30;
  
  if (g_data_057ac4df == '\0') {
    pSStack_30 = (System_Int32_array *)0x40b3a82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    pSStack_30 = (System_Int32_array *)0x40b3a8e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
    pSStack_30 = (System_Int32_array *)0x40b3a9a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    pSStack_30 = (System_Int32_array *)0x40b3aa6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBasicMaterial_get_Item);
    pSStack_30 = (System_Int32_array *)0x40b3ab2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
    pSStack_30 = (System_Int32_array *)0x40b3abe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_30 = (System_Int32_array *)0x40b3aca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    pSStack_30 = (System_Int32_array *)0x40b3ad6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    pSStack_30 = (System_Int32_array *)0x40b3ae2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    pSStack_30 = (System_Int32_array *)0x40b3aee;
    il2cpp_runtime_helper_023445d0(&"Daylight");
    pSStack_30 = (System_Int32_array *)0x40b3afa;
    il2cpp_runtime_helper_023445d0(&"Grass6");
    pSStack_30 = (System_Int32_array *)0x40b3b06;
    il2cpp_runtime_helper_023445d0(&"Geometry/Cuboid");
    pSStack_30 = (System_Int32_array *)0x40b3b12;
    il2cpp_runtime_helper_023445d0(&"Basic");
    g_data_057ac4df = '\x01';
  }
  pSStack_30 = (System_Int32_array *)0x40b3b28;
  __this_00 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
  pSStack_30 = (System_Int32_array *)0x40b3b33;
  Map_MapScript___ctor((Map_MapScript_o *)__this_00,(MethodInfo *)in_RSI);
  pSStack_30 = (System_Int32_array *)0x40b3b43;
  __this_01 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  pSStack_30 = (System_Int32_array *)0x40b3b4e;
  pppvVar22 = (void ***)__this_01;
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_01,(MethodInfo *)in_RSI);
  pSVar10 = "Geometry/Cuboid";
  plVar21 = (long *)__this_01;
  if (__this_01 != (System_Int32_array *)0x0) {
    __this_01->max_length = (il2cpp_array_size_t)"Geometry/Cuboid";
    pSStack_30 = (System_Int32_array *)0x40b3b6e;
    il2cpp_runtime_helper_022b4080(&__this_01->max_length);
    __this_01->m_Items[0xc] = 0x42c80000;
    __this_01->m_Items[0xd] = 0x40a00000;
    __this_01->m_Items[0xe] = 0x42c80000;
    __this_01->m_Items[6] = 0;
    __this_01->m_Items[7] = -0x3e380000;
    __this_01->m_Items[8] = 0;
    __this_01->m_Items[0] = 0;
    pSStack_30 = (System_Int32_array *)0x40b3bb1;
    unaff_RBX = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
    pSStack_30 = (System_Int32_array *)0x40b3bbc;
    pppvVar22 = (void ***)unaff_RBX;
    Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)unaff_RBX,(MethodInfo *)pSVar10);
    pSVar18 = "Basic";
    in_RSI = pSVar10;
    if (unaff_RBX != (System_Int32_array *)0x0) {
      ((System_Collections_Generic_Dictionary_object__object__Fields *)&unaff_RBX->bounds)->_buckets =
           "Basic";
      pSStack_30 = (System_Int32_array *)0x40b3bdc;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)&unaff_RBX->bounds);
      unaff_R12 = &TypeInfo_BuiltinMapTextures;
      if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
        pSStack_30 = (System_Int32_array *)0x40b3bf5;
        il2cpp_runtime_helper_02337ed0();
      }
      pppvVar22 = *(void ****)(*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
      in_RSI = pSVar18;
      if ((System_Int32_array *)pppvVar22 != (System_Int32_array *)0x0) {
        pSStack_30 = (System_Int32_array *)0x40b3c26;
        in_RSI = "Grass6";
        pIVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)pppvVar22,
                            &"Grass6"->obj,MethodInfo_MapScriptBasicMaterial_get_Item);
        if (pIVar9 != (Il2CppObject *)0x0) {
          *(Il2CppClass **)unaff_RBX->m_Items = pIVar9[2].klass;
          pSStack_30 = (System_Int32_array *)0x40b3c40;
          il2cpp_runtime_helper_022b4080(unaff_RBX->m_Items);
          *(undefined8 *)(unaff_RBX->m_Items + 2) = 0x41c8000041c80000;
          pSStack_30 = (System_Int32_array *)0x40b3c5d;
          unaff_R12 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          pSStack_30 = (System_Int32_array *)0x40b3c74;
          color.fields.b = 1.0;
          color.fields.a = 1.0;
          color.fields.r = 1.0;
          color.fields.g = 1.0;
          Utility_Color255___ctor_4388bb0((Utility_Color255_o *)unaff_R12,color,(MethodInfo *)0x0);
          unaff_RBX->max_length = (il2cpp_array_size_t)unaff_R12;
          pSStack_30 = (System_Int32_array *)0x40b3c87;
          il2cpp_runtime_helper_022b4080(&unaff_RBX->max_length,unaff_R12);
          pppvVar22 = (void ***)(__this_01->m_Items + 0x16);
          *(System_Int32_array **)(__this_01->m_Items + 0x16) = unaff_RBX;
          pSStack_30 = (System_Int32_array *)0x40b3c9a;
          in_RSI = unaff_RBX;
          il2cpp_runtime_helper_022b4080();
          lVar14 = MethodInfo_Void_Add;
          if (((__this_00 != (System_Int32_array *)0x0) && (*(long *)(__this_00->m_Items + 4) != 0)) &&
             (pppvVar22 = *(void ****)(*(long *)(__this_00->m_Items + 4) + 0x10),
             (System_Int32_array *)pppvVar22 != (System_Int32_array *)0x0)) {
            unaff_R12 = &MethodInfo_Void_Add;
            piVar1 = (int *)((long)&((System_Int32_array *)pppvVar22)->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pSVar10 = ((System_Collections_Generic_Dictionary_object__object__Fields *)
                      &((System_Int32_array *)pppvVar22)->bounds)->_buckets;
            if (pSVar10 != (System_Int32_array *)0x0) {
              uVar8 = *(uint *)&((System_Int32_array *)pppvVar22)->max_length;
              if (uVar8 < (uint)pSVar10->max_length) {
                *(uint *)&((System_Int32_array *)pppvVar22)->max_length = uVar8 + 1;
                *(System_Int32_array **)(pSVar10->m_Items + (long)(int)uVar8 * 2) = __this_01;
                pSStack_30 = (System_Int32_array *)0x40b3cfd;
                il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (long)(int)uVar8 * 2);
              }
              else {
                pSStack_30 = (System_Int32_array *)0x40b3d16;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pppvVar22,(Il2CppObject *)__this_01,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              pSStack_30 = (System_Int32_array *)0x40b3d1f;
              unaff_RBX = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
              pSStack_30 = (System_Int32_array *)0x40b3d2a;
              Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)unaff_RBX,(MethodInfo *)__this_01)
              ;
              plVar21 = &TypeInfo_BuiltinMapPrefabs;
              if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
                pSStack_30 = (System_Int32_array *)0x40b3d42;
                il2cpp_runtime_helper_02337ed0();
              }
              pppvVar22 = *(void ****)(*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
              in_RSI = __this_01;
              if ((System_Int32_array *)pppvVar22 != (System_Int32_array *)0x0) {
                pSStack_30 = (System_Int32_array *)0x40b3d72;
                in_RSI = "Daylight";
                pSVar10 = (System_Int32_array *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)pppvVar22,
                                     &"Daylight"->obj,MethodInfo_MapScriptBaseObject_get_Item);
                if (unaff_RBX != (System_Int32_array *)0x0) {
                  pIVar3 = (unaff_RBX->obj).klass;
                  pSStack_30 = (System_Int32_array *)0x40b3d91;
                  (*pIVar3->vtable[10].methodPtr)(unaff_RBX,pSVar10,pIVar3->vtable[10].method);
                  unaff_RBX->m_Items[6] = 0;
                  unaff_RBX->m_Items[7] = 0x41a00000;
                  unaff_RBX->m_Items[8] = 0;
                  rotation.fields._8_8_ = (undefined8)g_data_00d19c30;
                  pSStack_30 = (System_Int32_array *)0x40b3dbb;
                  rotation.fields.x = -0.2;
                  rotation.fields.y = -0.8;
                  UVar23 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
                  euler.fields.x = UVar23.fields.x * 57.29578;
                  euler.fields.y = UVar23.fields.y * 57.29578;
                  euler.fields.z = UVar23.fields.z * 57.29578;
                  pppvVar22 = (void ***)0x0;
                  pSStack_30 = (System_Int32_array *)0x40b3dd1;
                  UVar23 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
                  unaff_RBX->m_Items[9] = (int32_t)UVar23.fields.x;
                  unaff_RBX->m_Items[10] = (int32_t)UVar23.fields.y;
                  unaff_RBX->m_Items[0xb] = (int32_t)UVar23.fields.z;
                  unaff_RBX->m_Items[0] = 1;
                  lVar14 = MethodInfo_Void_Add;
                  in_RSI = pSVar10;
                  if ((*(long *)(__this_00->m_Items + 4) != 0) &&
                     (pppvVar22 = *(void ****)(*(long *)(__this_00->m_Items + 4) + 0x10),
                     (System_Int32_array *)pppvVar22 != (System_Int32_array *)0x0)) {
                    piVar1 = (int *)((long)&((System_Int32_array *)pppvVar22)->max_length + 4);
                    *piVar1 = *piVar1 + 1;
                    pSVar10 = ((System_Collections_Generic_Dictionary_object__object__Fields *)
                              &((System_Int32_array *)pppvVar22)->bounds)->_buckets;
                    if (pSVar10 != (System_Int32_array *)0x0) {
                      uVar8 = *(uint *)&((System_Int32_array *)pppvVar22)->max_length;
                      if (uVar8 < (uint)pSVar10->max_length) {
                        *(uint *)&((System_Int32_array *)pppvVar22)->max_length = uVar8 + 1;
                        *(System_Int32_array **)(pSVar10->m_Items + (long)(int)uVar8 * 2) = unaff_RBX;
                        pSStack_30 = (System_Int32_array *)0x40b3e32;
                        il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (long)(int)uVar8 * 2,unaff_RBX);
                      }
                      else {
                        pSStack_30 = (System_Int32_array *)0x40b3e4b;
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pppvVar22,
                                   (Il2CppObject *)unaff_RBX,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                                  );
                      }
                      return (Map_MapScript_o *)__this_00;
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
  pSStack_30 = (System_Int32_array *)0x40b3e5d;
  il2cpp_runtime_helper_022b2c90();
  ppSVar17 = &pSStack_40;
  pSVar10 = (System_Int32_array *)&stack0xffffffffffffffe0;
  pSStack_40 = unaff_RBX;
  pSStack_38 = __this_00;
  pSStack_30 = (System_Int32_array *)plVar21;
  if (g_data_057ac4d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ac4d7 = '\x01';
  }
  ppvVar20 = (void **)0x0;
  ppPVar11 = (Photon_Pun_MonoBehaviourPunCallbacks_o **)in_RSI;
  if (unaff_R13 == (Photon_Realtime_Player_o *)0x0) {
label_040b40e8:
    uVar19 = SUB81(ppvVar20,0);
    uVar12 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar7 = Photon_Realtime_Player__get_IsMasterClient(unaff_R13,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (Map_MapScript_o *)CONCAT44(extraout_var,bVar7);
    }
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppPVar11 = (Photon_Pun_MonoBehaviourPunCallbacks_o **)
               Map_BuiltinLevels__LoadMap
                         ((System_String_o *)pppvVar22,(System_String_o *)in_RSI,(MethodInfo *)0x0);
    pSVar10 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
    Map_MapScript___ctor((Map_MapScript_o *)pSVar10,(MethodInfo *)in_RSI);
    pppvVar22 = &TypeInfo_MapManager;
    if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar4 = TypeInfo_MapManager[0x17];
    *(System_Int32_array **)((long)pvVar4 + 8) = pSVar10;
    il2cpp_runtime_helper_022b4080((long)pvVar4 + 8,pSVar10);
    plVar21 = *(long **)((long)TypeInfo_MapManager[0x17] + 8);
    ppvVar20 = (void **)0x0;
    if (plVar21 == (long *)0x0) goto label_040b40e8;
    (**(code **)(*plVar21 + 0x188))(plVar21,ppPVar11,*(undefined8 *)(*plVar21 + 400));
    pSVar10 = (System_Int32_array *)**(long **)(g_data_057b9c00 + 0xb8);
    ppPVar11 = &TypeInfo_MapTransfer;
    if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource;
    pSVar5->monitor = pSVar10;
    ppvVar20 = &pSVar5->monitor;
    il2cpp_runtime_helper_022b4080(ppvVar20,pSVar10);
    lVar14 = *(long *)((long)TypeInfo_MapManager[0x17] + 8);
    if (lVar14 == 0) goto label_040b40e8;
    bVar7 = System_String__op_Inequality
                      (*(System_String_o **)((long)TypeInfo_MapManager[0x17] + 0x20),
                       *(System_String_o **)(lVar14 + 0x48),(MethodInfo *)0x0);
    pSVar10 = (System_Int32_array *)CONCAT71((int7)((ulong)pSVar10 >> 8),1);
    if ((char)bVar7 == '\0') {
      if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      ppvVar20 = TypeInfo_MapManager;
      if (((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x38), lVar14 == 0)) ||
         (lVar14 = *(long *)(lVar14 + 0x30), lVar14 == 0)) goto label_040b40e8;
      uVar8 = System_String__op_Inequality
                        (*(System_String_o **)((long)TypeInfo_MapManager[0x17] + 0x28),
                         *(System_String_o **)(lVar14 + 0x18),(MethodInfo *)0x0);
      pSVar10 = (System_Int32_array *)(ulong)uVar8;
    }
    if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppvVar20 = TypeInfo_MapManager[0x17];
    if (((System_Threading_CancellationTokenSource_Fields *)(ppvVar20 + 1))->_kernelEvent ==
        (System_Threading_ManualResetEvent_o *)0x0) goto label_040b40e8;
    ppvVar20[4] = (void *)((System_Threading_CancellationTokenSource_Fields *)(ppvVar20 + 1))->_kernelEvent[1]
                          .fields.waitHandle;
    ppvVar20 = ppvVar20 + 4;
    il2cpp_runtime_helper_022b4080();
    lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x38), lVar14 == 0)) ||
       (lVar14 = *(long *)(lVar14 + 0x30), lVar14 == 0)) goto label_040b40e8;
    pvVar4 = TypeInfo_MapManager[0x17];
    *(undefined8 *)((long)pvVar4 + 0x28) = *(undefined8 *)(lVar14 + 0x18);
    uVar12 = il2cpp_runtime_helper_022b4080((long)pvVar4 + 0x28);
    uVar19 = SUB81(pSVar10,0);
    pSVar10 = pSStack_40;
    ppSVar17 = (System_Int32_array **)&stack0xffffffffffffffd8;
    ppPVar11 = (Photon_Pun_MonoBehaviourPunCallbacks_o **)pSStack_38;
    pppvVar22 = (void ***)pSStack_30;
  }
  *(void ****)((long)ppSVar17 + -8) = pppvVar22;
  *(Photon_Pun_MonoBehaviourPunCallbacks_o ***)((long)ppSVar17 + -0x10) = ppPVar11;
  *(long **)((long)ppSVar17 + -0x18) = unaff_R12;
  *(System_Int32_array **)((long)ppSVar17 + -0x20) = pSVar10;
  *(undefined8 *)((long)ppSVar17 + -0x28) = uVar12;
  if (g_data_057ac4d9 == '\0') {
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x40b410f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x40b411b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x40b4127;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x40b4133;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x40b413f;
    il2cpp_runtime_helper_023445d0(&"CustomMapHash");
    g_data_057ac4d9 = '\x01';
  }
  pppvVar22 = &TypeInfo_MapManager;
  if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x40b415e;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)((long)TypeInfo_MapManager[0x17] + 0x18) = uVar19;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x40b4183;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppSVar17 + -0x30) = 0x40b418a;
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x40b41a5;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar9 = (TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->monitor;
  *(undefined8 *)((long)ppSVar17 + -0x30) = 0x40b41c7;
  targetPlayer = "CustomMapHash";
  PhotonExtensions__SetCustomProperty(player,(System_String_o *)"CustomMapHash",pIVar9,(MethodInfo *)0x0);
  lVar14 = *(long *)((long)TypeInfo_MapManager[0x17] + 8);
  if (((lVar14 != 0) && (*(long *)(lVar14 + 0x28) != 0)) && (*(long *)(lVar14 + 0x30) != 0)) {
    customAssets = *(System_Collections_Generic_List_string__o **)(*(long *)(lVar14 + 0x28) + 0x10);
    objects = *(System_Collections_Generic_List_MapScriptBaseObject__o **)(*(long *)(lVar14 + 0x30) + 0x10);
    options = *(Map_MapScriptOptions_o **)(lVar14 + 0x20);
    weather = *(Settings_WeatherSet_o **)(lVar14 + 0x38);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar17 + -0x30) = 0x40b4214;
      il2cpp_runtime_helper_02337ed0();
    }
    Map_MapLoader__StartLoadObjects(customAssets,objects,options,weather,0,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  *(undefined8 *)((long)ppSVar17 + -0x30) = 0x40b423b;
  il2cpp_runtime_helper_022b2c90();
  *(Photon_Pun_MonoBehaviourPunCallbacks_o ***)((long)ppSVar17 + -0x30) = &TypeInfo_MapTransfer;
  *(void ****)((long)ppSVar17 + -0x38) = &TypeInfo_MapManager;
  *(undefined8 **)((long)ppSVar17 + -0x40) = &TypeInfo_MapScriptSceneObject;
  *(long **)((long)ppSVar17 + -0x48) = unaff_R12;
  *(Photon_Realtime_Player_o **)((long)ppSVar17 + -0x50) = player;
  if (g_data_057ac4da == '\0') {
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b42b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b42bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b42cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b42d7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b42e3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b42ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b42fb;
    il2cpp_runtime_helper_023445d0(&"Custom");
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b4307;
    il2cpp_runtime_helper_023445d0(&"LoadBuiltinMapRPC");
    g_data_057ac4da = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_040b426c;
label_040b4325:
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b432a;
    il2cpp_runtime_helper_02337ed0();
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b4331;
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    pMVar16 = (Map_MapScript_o *)CONCAT44(extraout_var_01,bVar7);
    cVar6 = (char)bVar7;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_040b4325;
label_040b426c:
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b4273;
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    pMVar16 = (Map_MapScript_o *)CONCAT44(extraout_var_00,bVar7);
    cVar6 = (char)bVar7;
  }
  if (cVar6 == '\0') {
    return pMVar16;
  }
  ppPVar11 = &TypeInfo_MapTransfer;
  if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b4343;
    il2cpp_runtime_helper_02337ed0();
    pMVar16 = (Map_MapScript_o *)TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource;
    cVar6 = *(char *)&pMVar16->klass;
    method_00 = "Custom";
  }
  else {
    pMVar16 = (Map_MapScript_o *)TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource;
    cVar6 = *(char *)&pMVar16->klass;
    method_00 = "Custom";
  }
  if (cVar6 == '\0') {
    "Custom" = method_00;
    return pMVar16;
  }
  lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  "Custom" = method_00;
  if (((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x38), lVar14 == 0)) || (*(long *)(lVar14 + 0x20) == 0))
  {
label_040b44af:
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b44b4;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    a = *(System_String_o **)(*(long *)(lVar14 + 0x20) + 0x18);
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b439f;
    bVar7 = System_String__op_Equality(a,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
        *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b43b4;
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapTransfer__Transfer(targetPlayer,method_00);
      return extraout_RAX_00;
    }
    pppvVar22 = (void ***)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b43f7;
    ppPVar11 = (Photon_Pun_MonoBehaviourPunCallbacks_o **)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((*(long *)(lVar14 + 0x20) == 0) || ((System_Object_array *)ppPVar11 == (System_Object_array *)0x0))
    goto label_040b44af;
    pIVar9 = *(Il2CppObject **)(*(long *)(lVar14 + 0x20) + 0x18);
    if (pIVar9 != (Il2CppObject *)0x0) {
      *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b4428;
      lVar13 = il2cpp_runtime_helper_023051f0(pIVar9);
      if (lVar13 == 0) goto label_040b44b9;
    }
    if ((int)((System_Object_array *)ppPVar11)->max_length != 0) {
      ((System_Object_array *)ppPVar11)->m_Items[0] = pIVar9;
      *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b4447;
      il2cpp_runtime_helper_022b4080(((System_Object_array *)ppPVar11)->m_Items);
      if (*(long *)(lVar14 + 0x28) != 0) {
        pIVar9 = *(Il2CppObject **)(*(long *)(lVar14 + 0x28) + 0x18);
        if (pIVar9 != (Il2CppObject *)0x0) {
          *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b4468;
          lVar14 = il2cpp_runtime_helper_023051f0(pIVar9);
          if (lVar14 == 0) goto label_040b44b9;
        }
        if ((uint)((System_Object_array *)ppPVar11)->max_length < 2) goto label_040b44b4;
        ((System_Object_array *)ppPVar11)->m_Items[1] = pIVar9;
        *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b4486;
        il2cpp_runtime_helper_022b4080(((System_Object_array *)ppPVar11)->m_Items + 1);
        if ((Photon_Pun_PhotonView_o *)pppvVar22 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_3efa220
                    ((Photon_Pun_PhotonView_o *)pppvVar22,"LoadBuiltinMapRPC",targetPlayer,
                     (System_Object_array *)ppPVar11,(MethodInfo *)0x0);
          return extraout_RAX_01;
        }
      }
      goto label_040b44af;
    }
  }
label_040b44b4:
  *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b44b9;
  il2cpp_runtime_helper_022b2ca0();
label_040b44b9:
  *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b44be;
  pPVar15 = (Photon_Pun_PhotonView_o *)il2cpp_runtime_helper_0231b270();
  *(undefined8 *)((long)ppSVar17 + -0x58) = 0x40b44c8;
  il2cpp_runtime_helper_022b2b10();
  *(Photon_Realtime_Player_o **)((long)ppSVar17 + -0x58) = targetPlayer;
  *(void ****)((long)ppSVar17 + -0x60) = pppvVar22;
  *(Photon_Pun_MonoBehaviourPunCallbacks_o ***)((long)ppSVar17 + -0x68) = ppPVar11;
  if (g_data_057ac4f5 == '\0') {
    *(undefined8 *)((long)ppSVar17 + -0x70) = 0x40b4585;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    g_data_057ac4f5 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4);
  }
  if (iVar2 == 0) {
    *(undefined8 *)((long)ppSVar17 + -0x70) = 0x40b45a8;
    il2cpp_runtime_helper_02337ed0();
    __this = ((TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->fields)._registeredCallbacksLists;
    __this_03 = TypeInfo_MapTransfer;
  }
  else {
    __this = ((TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->fields)._registeredCallbacksLists;
    __this_03 = TypeInfo_MapTransfer;
  }
  TypeInfo_MapTransfer = __this_03;
  if (__this != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0) {
    if (g_data_057ac4f8 == '\0') {
      *(undefined8 *)((long)ppSVar17 + -0x70) = 0x40b4525;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
      g_data_057ac4f8 = '\x01';
    }
    *(undefined8 *)((long)ppSVar17 + -0x70) = 0x40b453b;
    __this_02 = (Photon_Pun_MonoBehaviourPunCallbacks_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
    *(undefined8 *)((long)ppSVar17 + -0x70) = 0x40b4548;
    __this_03 = __this_02;
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_02->fields).m_CachedPtr = 0;
    if (__this_02 != (Photon_Pun_MonoBehaviourPunCallbacks_o *)0x0) {
      (__this_02->fields).pvCache = pPVar15;
      *(undefined8 *)((long)ppSVar17 + -0x70) = 0x40b4567;
      il2cpp_runtime_helper_022b4080(&(__this_02->fields).pvCache,pPVar15);
      pMVar16 = (Map_MapScript_o *)
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_02
                           ,(MethodInfo *)0x0);
      return pMVar16;
    }
  }
  *(undefined8 *)((long)ppSVar17 + -0x70) = 0x40b45c4;
  il2cpp_runtime_helper_022b2c90();
  Photon_Pun_MonoBehaviourPunCallbacks___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_RAX_02;
}


// Map.MapScript$$Serialize
// il2cpp: System_String_o* Map_MapScript__Serialize (Map_MapScript_o* __this, const MethodInfo* method);
// 0x40b4d20

System_String_o * Map_MapScript__Serialize(Map_MapScript_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  Settings_WeatherSet_o *__this_00;
  MethodInfo *pMVar5;
  Il2CppObject *pIVar6;
  System_String_array *value;
  System_String_o *pSVar7;
  MethodInfo *str1;
  Settings_WeatherSet_o *str0;
  
  if (g_data_057ac4e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"Weather");
    il2cpp_runtime_helper_023445d0(&"Objects");
    il2cpp_runtime_helper_023445d0(&"CustomAssets");
    il2cpp_runtime_helper_023445d0(&"Logic");
    il2cpp_runtime_helper_023445d0(&"Options");
    g_data_057ac4e0 = '\x01';
  }
  __this_00 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  str0 = (Settings_WeatherSet_o *)(__this->fields).HeaderPrefix;
  str1 = "Options";
  pMVar5 = (MethodInfo *)
           System_String__Concat_3ae5ba0
                     ((System_String_o *)str0,(System_String_o *)"Options",(MethodInfo *)0x0);
  lVar4 = MethodInfo_Void_Add;
  if (__this_00 != (Settings_WeatherSet_o *)0x0) {
    piVar1 = (int32_t *)((long)&(__this_00->fields).TypedSettings + 4);
    *piVar1 = *piVar1 + 1;
    pSVar3 = (System_Object_array *)(__this_00->fields).Settings;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = *(uint *)&(__this_00->fields).TypedSettings;
      if (uVar2 < (uint)pSVar3->max_length) {
        *(uint *)&(__this_00->fields).TypedSettings = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pMVar5;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        str0 = (Settings_WeatherSet_o *)(__this->fields).Options;
        str1 = pMVar5;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pMVar5,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        str0 = (Settings_WeatherSet_o *)(__this->fields).Options;
        str1 = pMVar5;
      }
      if (str0 != (Settings_WeatherSet_o *)0x0) {
        str1 = (((System_Collections_Generic_List_object__c *)str0->klass)->vtable)._8_unknown.method;
        pIVar6 = (Il2CppObject *)
                 (*(((System_Collections_Generic_List_object__c *)str0->klass)->vtable)._8_unknown.methodPtr)
                           ();
        lVar4 = MethodInfo_Void_Add;
        piVar1 = (int32_t *)((long)&(__this_00->fields).TypedSettings + 4);
        *piVar1 = *piVar1 + 1;
        pSVar3 = (System_Object_array *)(__this_00->fields).Settings;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = *(uint *)&(__this_00->fields).TypedSettings;
          if (uVar2 < (uint)pSVar3->max_length) {
            *(uint *)&(__this_00->fields).TypedSettings = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pIVar6;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar6);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,pIVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          str0 = (Settings_WeatherSet_o *)(__this->fields).HeaderPrefix;
          str1 = "CustomAssets";
          pMVar5 = (MethodInfo *)
                   System_String__Concat_3ae5ba0
                             ((System_String_o *)str0,(System_String_o *)"CustomAssets",(MethodInfo *)0x0);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = (int32_t *)((long)&(__this_00->fields).TypedSettings + 4);
          *piVar1 = *piVar1 + 1;
          pSVar3 = (System_Object_array *)(__this_00->fields).Settings;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = *(uint *)&(__this_00->fields).TypedSettings;
            if (uVar2 < (uint)pSVar3->max_length) {
              *(uint *)&(__this_00->fields).TypedSettings = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pMVar5;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
              str0 = (Settings_WeatherSet_o *)(__this->fields).CustomAssets;
              str1 = pMVar5;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pMVar5,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              str0 = (Settings_WeatherSet_o *)(__this->fields).CustomAssets;
              str1 = pMVar5;
            }
            if (str0 != (Settings_WeatherSet_o *)0x0) {
              str1 = (((System_Collections_Generic_List_object__c *)str0->klass)->vtable)._8_unknown.method;
              pIVar6 = (Il2CppObject *)
                       (*(((System_Collections_Generic_List_object__c *)str0->klass)->vtable)._8_unknown.
                         methodPtr)();
              lVar4 = MethodInfo_Void_Add;
              piVar1 = (int32_t *)((long)&(__this_00->fields).TypedSettings + 4);
              *piVar1 = *piVar1 + 1;
              pSVar3 = (System_Object_array *)(__this_00->fields).Settings;
              if (pSVar3 != (System_Object_array *)0x0) {
                uVar2 = *(uint *)&(__this_00->fields).TypedSettings;
                if (uVar2 < (uint)pSVar3->max_length) {
                  *(uint *)&(__this_00->fields).TypedSettings = uVar2 + 1;
                  pSVar3->m_Items[(int)uVar2] = pIVar6;
                  il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar6);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,pIVar6,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                str0 = (Settings_WeatherSet_o *)(__this->fields).HeaderPrefix;
                str1 = "Objects";
                pMVar5 = (MethodInfo *)
                         System_String__Concat_3ae5ba0
                                   ((System_String_o *)str0,(System_String_o *)"Objects",(MethodInfo *)0x0)
                ;
                lVar4 = MethodInfo_Void_Add;
                piVar1 = (int32_t *)((long)&(__this_00->fields).TypedSettings + 4);
                *piVar1 = *piVar1 + 1;
                pSVar3 = (System_Object_array *)(__this_00->fields).Settings;
                if (pSVar3 != (System_Object_array *)0x0) {
                  uVar2 = *(uint *)&(__this_00->fields).TypedSettings;
                  if (uVar2 < (uint)pSVar3->max_length) {
                    *(uint *)&(__this_00->fields).TypedSettings = uVar2 + 1;
                    pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pMVar5;
                    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                    str0 = (Settings_WeatherSet_o *)(__this->fields).Objects;
                    str1 = pMVar5;
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pMVar5,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                    str0 = (Settings_WeatherSet_o *)(__this->fields).Objects;
                    str1 = pMVar5;
                  }
                  if (str0 != (Settings_WeatherSet_o *)0x0) {
                    str1 = (((System_Collections_Generic_List_object__c *)str0->klass)->vtable)._8_unknown.
                           method;
                    pIVar6 = (Il2CppObject *)
                             (*(((System_Collections_Generic_List_object__c *)str0->klass)->vtable)._8_unknown
                               .methodPtr)();
                    lVar4 = MethodInfo_Void_Add;
                    piVar1 = (int32_t *)((long)&(__this_00->fields).TypedSettings + 4);
                    *piVar1 = *piVar1 + 1;
                    pSVar3 = (System_Object_array *)(__this_00->fields).Settings;
                    if (pSVar3 != (System_Object_array *)0x0) {
                      uVar2 = *(uint *)&(__this_00->fields).TypedSettings;
                      if (uVar2 < (uint)pSVar3->max_length) {
                        *(uint *)&(__this_00->fields).TypedSettings = uVar2 + 1;
                        pSVar3->m_Items[(int)uVar2] = pIVar6;
                        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar6);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_00,pIVar6,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
                        ;
                      }
                      str0 = (Settings_WeatherSet_o *)(__this->fields).HeaderPrefix;
                      str1 = "Logic";
                      pSVar7 = System_String__Concat_3ae5ba0
                                         ((System_String_o *)str0,(System_String_o *)"Logic",
                                          (MethodInfo *)0x0);
                      lVar4 = MethodInfo_Void_Add;
                      piVar1 = (int32_t *)((long)&(__this_00->fields).TypedSettings + 4);
                      *piVar1 = *piVar1 + 1;
                      pSVar3 = (System_Object_array *)(__this_00->fields).Settings;
                      if (pSVar3 != (System_Object_array *)0x0) {
                        uVar2 = *(uint *)&(__this_00->fields).TypedSettings;
                        if (uVar2 < (uint)pSVar3->max_length) {
                          *(uint *)&(__this_00->fields).TypedSettings = uVar2 + 1;
                          str0 = (Settings_WeatherSet_o *)(pSVar3->m_Items + (int)uVar2);
                          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
                          il2cpp_runtime_helper_022b4080(str0,pSVar7);
                        }
                        else {
                          str0 = __this_00;
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_00,
                                     (Il2CppObject *)pSVar7,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar4 = MethodInfo_Void_Add;
                        str1 = (MethodInfo *)(__this->fields).Logic;
                        piVar1 = (int32_t *)((long)&(__this_00->fields).TypedSettings + 4);
                        *piVar1 = *piVar1 + 1;
                        pSVar3 = (System_Object_array *)(__this_00->fields).Settings;
                        if (pSVar3 != (System_Object_array *)0x0) {
                          uVar2 = *(uint *)&(__this_00->fields).TypedSettings;
                          if (uVar2 < (uint)pSVar3->max_length) {
                            *(uint *)&(__this_00->fields).TypedSettings = uVar2 + 1;
                            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)str1;
                            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_00,
                                       (Il2CppObject *)str1,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                          }
                          str0 = (Settings_WeatherSet_o *)(__this->fields).HeaderPrefix;
                          str1 = "Weather";
                          pMVar5 = (MethodInfo *)
                                   System_String__Concat_3ae5ba0
                                             ((System_String_o *)str0,(System_String_o *)"Weather",
                                              (MethodInfo *)0x0);
                          lVar4 = MethodInfo_Void_Add;
                          piVar1 = (int32_t *)((long)&(__this_00->fields).TypedSettings + 4);
                          *piVar1 = *piVar1 + 1;
                          pSVar3 = (System_Object_array *)(__this_00->fields).Settings;
                          if (pSVar3 != (System_Object_array *)0x0) {
                            uVar2 = *(uint *)&(__this_00->fields).TypedSettings;
                            if (uVar2 < (uint)pSVar3->max_length) {
                              *(uint *)&(__this_00->fields).TypedSettings = uVar2 + 1;
                              pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pMVar5;
                              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                              str0 = (__this->fields).Weather;
                              str1 = pMVar5;
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)__this_00,
                                         (Il2CppObject *)pMVar5,
                                         *(MethodInfo_362C220 **)
                                          (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                              str0 = (__this->fields).Weather;
                              str1 = pMVar5;
                            }
                            if (str0 != (Settings_WeatherSet_o *)0x0) {
                              str1 = (((System_Collections_Generic_List_object__c *)str0->klass)->vtable).
                                     _7_Insert.method;
                              pIVar6 = (Il2CppObject *)
                                       (*(((System_Collections_Generic_List_object__c *)str0->klass)->vtable).
                                         _7_Insert.methodPtr)();
                              lVar4 = MethodInfo_Void_Add;
                              piVar1 = (int32_t *)((long)&(__this_00->fields).TypedSettings + 4);
                              *piVar1 = *piVar1 + 1;
                              pSVar3 = (System_Object_array *)(__this_00->fields).Settings;
                              if (pSVar3 != (System_Object_array *)0x0) {
                                uVar2 = *(uint *)&(__this_00->fields).TypedSettings;
                                if (uVar2 < (uint)pSVar3->max_length) {
                                  *(uint *)&(__this_00->fields).TypedSettings = uVar2 + 1;
                                  pSVar3->m_Items[(int)uVar2] = pIVar6;
                                  il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize
                                            ((System_Collections_Generic_List_object__o *)__this_00,pIVar6,
                                             *(MethodInfo_362C220 **)
                                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                }
                                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar7 = System_Char__ToString((short)__this + 0x18,(MethodInfo *)0x0);
                                value = (System_String_array *)
                                        System_Collections_Generic_List_object___ToArray
                                                  ((System_Collections_Generic_List_object__o *)__this_00,
                                                   MethodInfo_String_ToArray);
                                pSVar7 = System_String__Join(pSVar7,value,(MethodInfo *)0x0);
                                return pSVar7;
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
  il2cpp_runtime_helper_022b2c90();
  pSVar7 = System_String__Concat_3ae5ba0
                     ((System_String_o *)(str0->fields).Settings,(System_String_o *)str1,(MethodInfo *)0x0);
  return pSVar7;
}


// Map.MapScript$$CreateHeader
// il2cpp: System_String_o* Map_MapScript__CreateHeader (Map_MapScript_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40b5290

System_String_o *
Map_MapScript__CreateHeader(Map_MapScript_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = System_String__Concat_3ae5ba0((__this->fields).HeaderPrefix,name,(MethodInfo *)0x0);
  return pSVar1;
}


// Map.MapScript$$Deserialize
// il2cpp: void Map_MapScript__Deserialize (Map_MapScript_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x40b52a0

void Map_MapScript__Deserialize(Map_MapScript_o *__this,System_String_o *csv,MethodInfo *method)

{
  int *piVar1;
  int iVar2;
  int32_t length;
  Il2CppArrayBounds *pIVar3;
  Settings_TypedSetting_bool__o *__this_00;
  uint uVar4;
  long lVar5;
  char cVar6;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  Map_MapScript_o *pMVar9;
  System_Char_array *currentSectionItems;
  System_Char_array *__this_01;
  System_Char_array *trimChars;
  System_String_array *pSVar10;
  long *plVar11;
  undefined8 uVar12;
  System_String_o *str0;
  System_String_o *str2;
  long *plVar13;
  System_Char_array **method_00;
  MethodInfo_362C220 *method_01;
  System_Collections_Generic_List_object__o *__this_02;
  System_Char_array *value;
  System_Char_array *__this_03;
  System_Char_array *__this_04;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [12];
  System_Char_array *pSStack_48;
  MethodInfo *pMStack_38;
  
  if (g_data_057ac4e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Logic");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac4e1 = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = Utility_Util__CreateMD5(csv,(MethodInfo *)0x0);
  (__this->fields).MapHash = pSVar8;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MapHash);
  value = (System_Char_array *)0x0;
  __this_03 = (System_Char_array *)csv;
  bVar7 = Map_MapConverter__IsLegacy(csv,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if (csv == (System_String_o *)0x0) goto label_040b56e4;
    pMStack_38 = (MethodInfo *)0x0;
    pSVar10 = System_String__Split(csv,(__this->fields).Delimiter,0,(MethodInfo *)0x0);
    currentSectionItems = (System_Char_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    value = MethodInfo_List_1_System_String;
    __this_03 = currentSectionItems;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)currentSectionItems,
               (MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    if (pSVar10 == (System_String_array *)0x0) goto label_040b56e4;
    pSStack_48 = "";
    iVar2 = (int)pSVar10->max_length;
    if (iVar2 < 1) {
label_040b56ca:
      Map_MapScript__DeserializeSection
                (__this,(System_String_o *)pSStack_48,
                 (System_Collections_Generic_List_string__o *)currentSectionItems,pMStack_38);
      return;
    }
    pMStack_38 = (MethodInfo *)0x1;
    uVar14 = 0;
    if (iVar2 != 0) {
      do {
        __this_03 = (System_Char_array *)pSVar10->m_Items[(int)uVar14];
        if (__this_03 == (System_Char_array *)0x0) goto label_040b56e4;
        value = (System_Char_array *)0x0;
        __this_01 = (System_Char_array *)System_String__Trim((System_String_o *)__this_03,(MethodInfo *)0x0);
        if (__this_01 == (System_Char_array *)0x0) goto label_040b56e4;
        value = (System_Char_array *)(__this->fields).HeaderPrefix;
        __this_03 = __this_01;
        bVar7 = System_String__StartsWith
                          ((System_String_o *)__this_01,(System_String_o *)value,(MethodInfo *)0x0);
        uVar15 = (uint)pMStack_38;
        if ((char)bVar7 == '\0') {
          value = "Logic";
          __this_03 = pSStack_48;
          bVar7 = System_String__op_Equality
                            ((System_String_o *)pSStack_48,(System_String_o *)"Logic",(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          if ((char)bVar7 == '\0') {
            if (currentSectionItems == (System_Char_array *)0x0) goto label_040b56e4;
            piVar1 = (int *)((long)&currentSectionItems->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pIVar3 = currentSectionItems->bounds;
            if (pIVar3 == (Il2CppArrayBounds *)0x0) goto label_040b56e4;
            uVar14 = (uint)currentSectionItems->max_length;
            if (uVar14 < (uint)pIVar3[1].lower_bound) {
              *(uint *)&currentSectionItems->max_length = uVar14 + 1;
              __this_03 = (System_Char_array *)(&pIVar3[2].length + (int)uVar14);
              (&pIVar3[2].length)[(int)uVar14] = (il2cpp_array_size_t)__this_01;
              il2cpp_runtime_helper_022b4080();
              goto label_040b5440;
            }
            method_01 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70);
          }
          else {
            if ((uint)pSVar10->max_length <= uVar14) break;
            __this_04 = (System_Char_array *)pSVar10->m_Items[(int)uVar14];
            value = (System_Char_array *)0x2;
            __this_03 = TypeInfo_char;
            trimChars = (System_Char_array *)il2cpp_runtime_helper_022b2a40();
            if (trimChars == (System_Char_array *)0x0) goto label_040b56e4;
            iVar2 = (int)trimChars->max_length;
            if ((iVar2 == 0) || (trimChars->m_Items[0] = 0xd, iVar2 == 1)) break;
            trimChars->m_Items[1] = 10;
            if ((__this_04 == (System_Char_array *)0x0) ||
               (__this_01 = (System_Char_array *)
                            System_String__Trim_3afbc70
                                      ((System_String_o *)__this_04,trimChars,(MethodInfo *)0x0),
               lVar5 = MethodInfo_Void_Add, value = trimChars, __this_03 = __this_04,
               currentSectionItems == (System_Char_array *)0x0)) goto label_040b56e4;
            piVar1 = (int *)((long)&currentSectionItems->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pIVar3 = currentSectionItems->bounds;
            if (pIVar3 == (Il2CppArrayBounds *)0x0) goto label_040b56e4;
            uVar14 = (uint)currentSectionItems->max_length;
            if (uVar14 < (uint)pIVar3[1].lower_bound) {
              *(uint *)&currentSectionItems->max_length = uVar14 + 1;
              __this_03 = (System_Char_array *)(&pIVar3[2].length + (int)uVar14);
              (&pIVar3[2].length)[(int)uVar14] = (il2cpp_array_size_t)__this_01;
              il2cpp_runtime_helper_022b4080();
              uVar4 = (uint)pSVar10->max_length;
              value = __this_01;
              goto joined_r0x040b5642;
            }
            method_01 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70);
          }
          __this_03 = currentSectionItems;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)currentSectionItems,&__this_01->obj,
                     method_01);
          uVar4 = (uint)pSVar10->max_length;
          value = __this_01;
        }
        else {
          pSVar8 = (__this->fields).HeaderPrefix;
          if (pSVar8 == (System_String_o *)0x0) goto label_040b56e4;
          pSVar8 = System_String__Substring
                             ((System_String_o *)__this_01,(pSVar8->fields)._stringLength,(MethodInfo *)0x0);
          method_00 = &"Logic";
          bVar7 = System_String__op_Equality(pSVar8,(System_String_o *)"Logic",(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            (__this->fields).LogicStart = uVar15;
          }
          __this_03 = (System_Char_array *)__this;
          Map_MapScript__DeserializeSection
                    (__this,(System_String_o *)pSStack_48,
                     (System_Collections_Generic_List_string__o *)currentSectionItems,(MethodInfo *)method_00)
          ;
          pSVar8 = (__this->fields).HeaderPrefix;
          value = pSStack_48;
          if (pSVar8 == (System_String_o *)0x0) goto label_040b56e4;
          uVar14 = (pSVar8->fields)._stringLength;
          value = (System_Char_array *)(ulong)uVar14;
          __this_03 = __this_01;
          pSStack_48 = (System_Char_array *)
                       System_String__Substring((System_String_o *)__this_01,uVar14,(MethodInfo *)0x0);
          if (currentSectionItems == (System_Char_array *)0x0) goto label_040b56e4;
          piVar1 = (int *)((long)&currentSectionItems->max_length + 4);
          *piVar1 = *piVar1 + 1;
          length = (int32_t)currentSectionItems->max_length;
          *(undefined4 *)&currentSectionItems->max_length = 0;
          __this_01 = value;
          if (length < 1) {
label_040b5440:
            uVar4 = (uint)pSVar10->max_length;
            value = __this_01;
          }
          else {
            __this_03 = (System_Char_array *)currentSectionItems->bounds;
            value = (System_Char_array *)0x0;
            System_Array__Clear((System_Array_o *)__this_03,0,length,(MethodInfo *)0x0);
            uVar4 = (uint)pSVar10->max_length;
          }
        }
joined_r0x040b5642:
        pMStack_38 = (MethodInfo *)(ulong)(uVar15 + 1);
        if ((int)uVar4 <= (int)uVar15) goto label_040b56ca;
        uVar14 = uVar15;
      } while (uVar15 < uVar4);
    }
  }
  else {
    value = (System_Char_array *)0x0;
    pMVar9 = Map_MapConverter__Convert(csv,(MethodInfo *)0x0);
    __this_03 = (System_Char_array *)csv;
    if (pMVar9 != (Map_MapScript_o *)0x0) {
      (__this->fields).Objects = (pMVar9->fields).Objects;
      il2cpp_runtime_helper_022b4080(&(__this->fields).Objects);
      return;
    }
label_040b56e4:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac4e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Weather");
    il2cpp_runtime_helper_023445d0(&"Objects");
    il2cpp_runtime_helper_023445d0(&"CustomAssets");
    il2cpp_runtime_helper_023445d0(&"Logic");
    il2cpp_runtime_helper_023445d0(&"Options");
    g_data_057ac4e2 = '\x01';
  }
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = System_Char__ToString((short)__this_03 + 0x18,(MethodInfo *)0x0);
  if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040b590d:
    il2cpp_runtime_helper_022b2c90();
label_040b5912:
    il2cpp_runtime_helper_022b2c90();
label_040b5917:
    il2cpp_runtime_helper_022b2c90();
label_040b591c:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar10 = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_02,MethodInfo_String_ToArray);
    pSVar8 = System_String__Join(pSVar8,pSVar10,(MethodInfo *)0x0);
    bVar7 = System_String__op_Equality((System_String_o *)value,"Options",(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      plVar11 = *(long **)__this_03->m_Items;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x1c8))(plVar11,pSVar8,*(undefined8 *)(*plVar11 + 0x1d0));
        return;
      }
      goto label_040b590d;
    }
    bVar7 = System_String__op_Equality((System_String_o *)value,"CustomAssets",(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      plVar11 = *(long **)(__this_03->m_Items + 4);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x1c8))(plVar11,pSVar8,*(undefined8 *)(*plVar11 + 0x1d0));
        return;
      }
      goto label_040b5912;
    }
    bVar7 = System_String__op_Equality((System_String_o *)value,"Objects",(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      plVar11 = *(long **)(__this_03->m_Items + 8);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x1c8))(plVar11,pSVar8,*(undefined8 *)(*plVar11 + 0x1d0));
        return;
      }
      goto label_040b5917;
    }
    bVar7 = System_String__op_Equality
                      ((System_String_o *)value,(System_String_o *)"Logic",(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      *(System_String_o **)(__this_03->m_Items + 0x10) = pSVar8;
      il2cpp_runtime_helper_022b4080(__this_03->m_Items + 0x10,pSVar8);
      return;
    }
    bVar7 = System_String__op_Equality((System_String_o *)value,"Weather",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    plVar11 = *(long **)(__this_03->m_Items + 0xc);
    if (plVar11 == (long *)0x0) goto label_040b591c;
    (**(code **)(*plVar11 + 0x1b8))(plVar11,pSVar8,*(undefined8 *)(*plVar11 + 0x1c0));
    if (*(long *)(__this_03->m_Items + 0xc) != 0) {
      __this_00 = *(Settings_TypedSetting_bool__o **)(*(long *)(__this_03->m_Items + 0xc) + 0x28);
      if (__this_00 != (Settings_TypedSetting_bool__o *)0x0) {
        Settings_TypedSetting_bool___set_Value(__this_00,0,MethodInfo_Void_set_Value);
        return;
      }
      goto label_040b5926;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040b5926:
  auVar16 = il2cpp_runtime_helper_022b2c90();
  if (auVar16._8_4_ != 1) {
    _Unwind_Resume(auVar16._0_8_);
  }
  plVar11 = (long *)__cxa_begin_catch(auVar16._0_8_);
  uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar6 = il2cpp_runtime_helper_0233e000(uVar12,*(undefined8 *)*plVar11);
  if (cVar6 != '\0') {
    plVar11 = (long *)*plVar11;
    __cxa_end_catch();
    il2cpp_runtime_helper_01f681a0(plVar11);
    pSVar8 = (System_String_o *)(**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error deserializing MapScript section ");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&": ");
    pSVar8 = System_String__Concat_3af7470(str0,(System_String_o *)value,str2,pSVar8,(MethodInfo *)0x0);
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_01f68090(uVar12);
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    uVar12 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_DeserializeSection);
    il2cpp_runtime_helper_022b2b10(plVar11,uVar12);
  }
  plVar13 = (long *)__cxa_allocate_exception(8);
  *plVar13 = *plVar11;
  __cxa_throw(plVar13,&PTR_PTR_05215060,0);
}


// Map.MapScript$$DeserializeSection
// il2cpp: void Map_MapScript__DeserializeSection (Map_MapScript_o* __this, System_String_o* currentSection, System_Collections_Generic_List_string__o* currentSectionItems, const MethodInfo* method);
// 0x40b56f0

void Map_MapScript__DeserializeSection
               (Map_MapScript_o *__this,System_String_o *currentSection,
               System_Collections_Generic_List_string__o *currentSectionItems,MethodInfo *method)

{
  Map_MapScriptOptions_o *pMVar1;
  Map_MapScriptCustomAssets_o *pMVar2;
  Map_MapScriptObjects_o *pMVar3;
  Settings_WeatherSet_o *pSVar4;
  Settings_BoolSetting_o *__this_00;
  char cVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_String_array *value;
  long *plVar8;
  undefined8 uVar9;
  System_String_o *str0;
  System_String_o *str2;
  long *plVar10;
  undefined1 auVar11 [12];
  
  if (g_data_057ac4e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Weather");
    il2cpp_runtime_helper_023445d0(&"Objects");
    il2cpp_runtime_helper_023445d0(&"CustomAssets");
    il2cpp_runtime_helper_023445d0(&"Logic");
    il2cpp_runtime_helper_023445d0(&"Options");
    g_data_057ac4e2 = '\x01';
  }
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = System_Char__ToString((short)__this + 0x18,(MethodInfo *)0x0);
  if (currentSectionItems == (System_Collections_Generic_List_string__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040b590d:
    il2cpp_runtime_helper_022b2c90();
label_040b5912:
    il2cpp_runtime_helper_022b2c90();
label_040b5917:
    il2cpp_runtime_helper_022b2c90();
label_040b591c:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    value = (System_String_array *)
            System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_object__o *)currentSectionItems,MethodInfo_String_ToArray);
    pSVar7 = System_String__Join(pSVar7,value,(MethodInfo *)0x0);
    bVar6 = System_String__op_Equality(currentSection,"Options",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pMVar1 = (__this->fields).Options;
      if (pMVar1 != (Map_MapScriptOptions_o *)0x0) {
        (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar1,pSVar7,(pMVar1->klass->vtable)._9_Deserialize.method);
        return;
      }
      goto label_040b590d;
    }
    bVar6 = System_String__op_Equality(currentSection,"CustomAssets",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pMVar2 = (__this->fields).CustomAssets;
      if (pMVar2 != (Map_MapScriptCustomAssets_o *)0x0) {
        (*(pMVar2->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar2,pSVar7,(pMVar2->klass->vtable)._9_Deserialize.method);
        return;
      }
      goto label_040b5912;
    }
    bVar6 = System_String__op_Equality(currentSection,"Objects",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pMVar3 = (__this->fields).Objects;
      if (pMVar3 != (Map_MapScriptObjects_o *)0x0) {
        (*(pMVar3->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar3,pSVar7,(pMVar3->klass->vtable)._9_Deserialize.method);
        return;
      }
      goto label_040b5917;
    }
    bVar6 = System_String__op_Equality(currentSection,"Logic",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      (__this->fields).Logic = pSVar7;
      il2cpp_runtime_helper_022b4080(&(__this->fields).Logic,pSVar7);
      return;
    }
    bVar6 = System_String__op_Equality(currentSection,"Weather",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    pSVar4 = (__this->fields).Weather;
    if (pSVar4 == (Settings_WeatherSet_o *)0x0) goto label_040b591c;
    (*(pSVar4->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
              (pSVar4,pSVar7,(pSVar4->klass->vtable)._8_DeserializeFromJsonString.method);
    pSVar4 = (__this->fields).Weather;
    if (pSVar4 != (Settings_WeatherSet_o *)0x0) {
      __this_00 = (pSVar4->fields).Preset;
      if (__this_00 != (Settings_BoolSetting_o *)0x0) {
        Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this_00,0,MethodInfo_Void_set_Value);
        return;
      }
      goto label_040b5926;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040b5926:
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar11._0_8_);
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar5 = il2cpp_runtime_helper_0233e000(uVar9,*(undefined8 *)*plVar8);
    if (cVar5 != '\0') {
      plVar8 = (long *)*plVar8;
      __cxa_end_catch();
      il2cpp_runtime_helper_01f681a0(plVar8);
      pSVar7 = (System_String_o *)(**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error deserializing MapScript section ");
      str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&": ");
      pSVar7 = System_String__Concat_3af7470(str0,currentSection,str2,pSVar7,(MethodInfo *)0x0);
      uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      il2cpp_runtime_helper_01f68090(uVar9);
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_DeserializeSection);
      il2cpp_runtime_helper_022b2b10(plVar8,uVar9);
    }
    plVar10 = (long *)__cxa_allocate_exception(8);
    *plVar10 = *plVar8;
    __cxa_throw(plVar10,&PTR_PTR_05215060,0);
  }
  _Unwind_Resume(auVar11._0_8_);
}


// Map.MapScript$$.ctor
// il2cpp: void Map_MapScript___ctor (Map_MapScript_o* __this, const MethodInfo* method);
// 0x40b3400

void Map_MapScript___ctor(Map_MapScript_o *__this,MethodInfo *method)

{
  Map_MapScriptOptions_o *__this_00;
  Map_MapScriptCustomAssets_o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  Map_MapScriptObjects_o *__this_03;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_04;
  Settings_WeatherSet_o *__this_05;
  
  if (g_data_057ac4e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptCustomAssets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptOptions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    il2cpp_runtime_helper_023445d0(&"/// ");
    g_data_057ac4e3 = '\x01';
  }
  (__this->fields).HeaderPrefix = "/// ";
  il2cpp_runtime_helper_022b4080(&__this->fields);
  (__this->fields).Delimiter = 10;
  __this_00 = (Map_MapScriptOptions_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptOptions);
  if (g_data_057ac4e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"1.0");
    g_data_057ac4e9 = '\x01';
  }
  (__this_00->fields).EditorVersion = "1.0";
  il2cpp_runtime_helper_022b4080(&__this_00->fields);
  (__this_00->fields).Description = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).Description);
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).Options = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Options,__this_00);
  __this_01 = (Map_MapScriptCustomAssets_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptCustomAssets);
  if (g_data_057ac4e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ac4e6 = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_System_String);
  (__this_01->fields).CustomAssets = __this_02;
  il2cpp_runtime_helper_022b4080(&__this_01->fields);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)__this_01,(MethodInfo *)0x0);
  (__this->fields).CustomAssets = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CustomAssets,__this_01);
  __this_03 = (Map_MapScriptObjects_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
  if (g_data_057ac4e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptBaseObject);
    g_data_057ac4e8 = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_MapScriptBaseObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptBaseObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_Map_MapScriptBaseObject);
  (__this_03->fields).Objects = __this_04;
  il2cpp_runtime_helper_022b4080(&__this_03->fields);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)__this_03,(MethodInfo *)0x0);
  (__this->fields).Objects = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Objects);
  __this_05 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
  Settings_WeatherSet___ctor(__this_05,(MethodInfo *)0x0);
  (__this->fields).Weather = __this_05;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Weather,__this_05);
  (__this->fields).Logic = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields).Logic);
  (__this->fields).MapHash = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields).MapHash);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


