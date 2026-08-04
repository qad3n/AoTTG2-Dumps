// Type: Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchSurfaceMaterial.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$get_Shared
// il2cpp: UnityEngine_Material_o* Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared (const MethodInfo* method);
// 0x3b355a0

UnityEngine_Material_o * Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  long lVar3;
  System_Object_array *pSVar4;
  MethodInfo_362C220 *method_00;
  ulong uVar5;
  bool_conflict bVar6;
  uint uVar7;
  int32_t iVar8;
  Il2CppObject *pIVar9;
  MethodInfo *pMVar10;
  MethodInfo *method_01;
  undefined8 extraout_RAX;
  undefined4 extraout_var;
  UnityEngine_Material_o *extraout_RAX_00;
  undefined4 extraout_var_00;
  UnityEngine_Material_o *extraout_RAX_01;
  undefined4 extraout_var_01;
  UnityEngine_Material_o *extraout_RAX_02;
  UnityEngine_Material_o *extraout_RAX_03;
  UnityEngine_Material_o *extraout_RAX_04;
  UnityEngine_Object_o *pUVar11;
  undefined8 uVar12;
  undefined4 extraout_var_02;
  UnityEngine_Material_o *pUVar13;
  undefined8 extraout_RAX_05;
  UnityEngine_Material_o *extraout_RAX_06;
  UnityEngine_Material_o *extraout_RAX_07;
  System_Collections_Generic_List_object__o *pSVar14;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar15;
  ulong in_RCX;
  undefined8 extraout_RDX;
  undefined1 *puVar16;
  uint uVar17;
  System_Collections_Generic_Dictionary_TKey__TValue__o *unaff_RBP;
  MethodInfo *pMVar18;
  undefined4 in_R8D;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *unaff_R13;
  char cVar21;
  MethodInfo *pMVar22;
  System_Nullable_float__Fields __this;
  undefined8 *puVar23;
  UnityEngine_Object_o *pUVar24;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_b8 [12];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  MethodInfo *pMStack_a0;
  undefined8 *puStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  MethodInfo *pMStack_78;
  undefined8 *puStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  MethodInfo *pMStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  MethodInfo *pMStack_38;
  MethodInfo *pMStack_30;
  undefined1 auStack_28 [8];
  
  if (g_data_057a9c5b == '\0') {
    pMStack_30 = (MethodInfo *)0x3b355bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    pMStack_30 = (MethodInfo *)0x3b355c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    pMStack_30 = (MethodInfo *)0x3b355d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pMStack_30 = (MethodInfo *)0x3b355e1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_Load_Material);
    pMStack_30 = (MethodInfo *)0x3b355ed;
    il2cpp_runtime_helper_023445d0(&"GisketchUI/Materials/AottgUiSurface");
    pMStack_30 = (MethodInfo *)0x3b355f9;
    il2cpp_runtime_helper_023445d0(&"Gisketch/AoTTG2 UI Surface");
    pMStack_30 = (MethodInfo *)0x3b35605;
    il2cpp_runtime_helper_023445d0(&"AoTTG UI Textured Surface");
    g_data_057a9c5b = '\x01';
  }
  pUVar24 = (UnityEngine_Object_o *)&TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    pMStack_30 = (MethodInfo *)0x3b35624;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar11 = *(UnityEngine_Object_o **)
             (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x68);
  puVar20 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pMStack_30 = (MethodInfo *)0x3b3564b;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_30 = (MethodInfo *)0x3b35657;
  bVar6 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pMStack_30 = (MethodInfo *)0x3b35674;
    pIVar9 = UnityEngine_Resources__Load_object_("GisketchUI/Materials/AottgUiSurface",MethodInfo_Material_Load_Material);
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      pMStack_30 = (MethodInfo *)0x3b35688;
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
    *(Il2CppObject **)(lVar3 + 0x68) = pIVar9;
    pMStack_30 = (MethodInfo *)0x3b356a2;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x68);
    pUVar11 = *(UnityEngine_Object_o **)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x68);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pMStack_30 = (MethodInfo *)0x3b356c2;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_30 = (MethodInfo *)0x3b356ce;
    bVar6 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      pMStack_30 = (MethodInfo *)0x3b356fd;
      pMVar10 = (MethodInfo *)UnityEngine_Shader__Find("Gisketch/AoTTG2 UI Surface",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pMStack_30 = (MethodInfo *)0x3b35712;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_30 = (MethodInfo *)0x3b35720;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return (UnityEngine_Material_o *)0x0;
      }
      pMStack_30 = (MethodInfo *)0x3b35737;
      method_01 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
      pMStack_30 = (MethodInfo *)0x3b35747;
      pMVar22 = pMVar10;
      pMVar18 = method_01;
      UnityEngine_Material___ctor
                ((UnityEngine_Material_o *)method_01,(UnityEngine_Shader_o *)pMVar10,(MethodInfo *)0x0);
      if (method_01 == (MethodInfo *)0x0) {
        pMStack_30 = (MethodInfo *)0x3b357cf;
        uStack_40 = il2cpp_runtime_helper_022b2c90();
        pMStack_38 = method_01;
        pMStack_30 = pMVar10;
        if (g_data_057a9c5c == '\0') {
          puStack_48 = (undefined8 *)0x3b357ec;
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
          puStack_48 = (undefined8 *)0x3b357f8;
          il2cpp_runtime_helper_023445d0(&"AOTTG_WORN");
          g_data_057a9c5c = '\x01';
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          puStack_48 = (undefined8 *)0x3b35817;
          il2cpp_runtime_helper_02337ed0();
        }
        puStack_48 = (undefined8 *)0x3b35847;
        Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyPreset
                  ((UnityEngine_Material_o *)pMVar18,205.0,0.0147,72.0,0.0014,0.0089,pMVar22);
        fVar26 = 0.04;
        fVar27 = 120.0;
        fVar28 = 0.007;
        fVar29 = 0.018;
        puStack_48 = (undefined8 *)0x3b35877;
        pMVar10 = pMVar18;
        Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyLightPreset
                  ((UnityEngine_Material_o *)pMVar18,263.0,0.04,120.0,0.007,0.018,pMVar22);
        if (pMVar18 == (MethodInfo *)0x0) {
          puStack_48 = (undefined8 *)0x3b35a2b;
          fStack_64 = (float)il2cpp_runtime_helper_022b2c90();
          puStack_48 = &TypeInfo_GisketchSurfaceMaterial;
          fStack_60 = fVar26;
          fStack_5c = fVar27;
          fStack_58 = fVar28;
          fStack_54 = fVar29;
          pMStack_50 = pMVar18;
          if (g_data_057a9c61 == '\0') {
            puStack_70 = (undefined8 *)0x3b35a6d;
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
            puStack_70 = (undefined8 *)0x3b35a79;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9c61 = '\x01';
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            puStack_70 = (undefined8 *)0x3b35a98;
            il2cpp_runtime_helper_02337ed0();
          }
          puStack_70 = (undefined8 *)0x3b35aa4;
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar6);
          }
          pMVar22 = TypeInfo_GisketchSurfaceMaterial;
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            puStack_70 = (undefined8 *)0x3b35ac8;
            il2cpp_runtime_helper_02337ed0();
          }
          if (pMVar10 != (MethodInfo *)0x0) {
            puStack_70 = (undefined8 *)0x3b35aed;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pMVar10,
                       *(int32_t *)
                        ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr,
                       fStack_64,(MethodInfo *)0x0);
            puStack_70 = (undefined8 *)0x3b35b0a;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pMVar10,
                       *(int32_t *)
                        (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 4
                        ),fStack_60,(MethodInfo *)0x0);
            puStack_70 = (undefined8 *)0x3b35b27;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pMVar10,
                       *(int32_t *)
                        (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 8
                        ),fStack_5c,(MethodInfo *)0x0);
            puStack_70 = (undefined8 *)0x3b35b44;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pMVar10,
                       *(int32_t *)
                        (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                        0xc),fStack_58,(MethodInfo *)0x0);
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pMVar10,
                       *(int32_t *)
                        (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                        0x10),fStack_54,(MethodInfo *)0x0);
            return extraout_RAX_00;
          }
          puStack_70 = (undefined8 *)0x3b35b6d;
          fStack_8c = (float)il2cpp_runtime_helper_022b2c90();
          puStack_70 = &TypeInfo_GisketchSurfaceMaterial;
          fStack_88 = fVar26;
          fStack_84 = fVar27;
          fStack_80 = fVar28;
          fStack_7c = fVar29;
          pMStack_78 = pMVar10;
          if (g_data_057a9c62 == '\0') {
            puStack_98 = (undefined8 *)0x3b35bad;
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
            puStack_98 = (undefined8 *)0x3b35bb9;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9c62 = '\x01';
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            puStack_98 = (undefined8 *)0x3b35bd8;
            il2cpp_runtime_helper_02337ed0();
          }
          puStack_98 = (undefined8 *)0x3b35be4;
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pMVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            return (UnityEngine_Material_o *)CONCAT44(extraout_var_00,bVar6);
          }
          pMVar10 = TypeInfo_GisketchSurfaceMaterial;
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            puStack_98 = (undefined8 *)0x3b35c08;
            il2cpp_runtime_helper_02337ed0();
          }
          if (pMVar22 != (MethodInfo *)0x0) {
            puStack_98 = (undefined8 *)0x3b35c2e;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pMVar22,
                       *(int32_t *)
                        (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                        0x14),fStack_8c,(MethodInfo *)0x0);
            puStack_98 = (undefined8 *)0x3b35c4b;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pMVar22,
                       *(int32_t *)
                        (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                        0x18),fStack_88,(MethodInfo *)0x0);
            puStack_98 = (undefined8 *)0x3b35c68;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pMVar22,
                       *(int32_t *)
                        (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                        0x1c),fStack_84,(MethodInfo *)0x0);
            puStack_98 = (undefined8 *)0x3b35c85;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pMVar22,
                       *(int32_t *)
                        (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                        0x20),fStack_80,(MethodInfo *)0x0);
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pMVar22,
                       *(int32_t *)
                        (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                        0x24),fStack_7c,(MethodInfo *)0x0);
            return extraout_RAX_01;
          }
          puStack_98 = (undefined8 *)0x3b35cae;
          fStack_ac = (float)il2cpp_runtime_helper_022b2c90();
          puStack_98 = &TypeInfo_GisketchSurfaceMaterial;
          puVar16 = auStack_b8;
          fStack_a8 = fVar26;
          fStack_a4 = fVar27;
          pMStack_a0 = pMVar22;
          if (g_data_057a9c63 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9c63 = '\x01';
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            return (UnityEngine_Material_o *)CONCAT44(extraout_var_01,bVar6);
          }
          pMVar22 = (MethodInfo *)&TypeInfo_GisketchSurfaceMaterial;
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (pMVar10 != (MethodInfo *)0x0) {
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pMVar10,
                       *(int32_t *)
                        (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                        0x3c),fStack_ac,(MethodInfo *)0x0);
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pMVar10,
                       *(int32_t *)
                        (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                        0x40),fStack_a8,(MethodInfo *)0x0);
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pMVar10,
                       *(int32_t *)
                        (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                        0x44),fStack_a4,(MethodInfo *)0x0);
            return extraout_RAX_02;
          }
          uVar12 = il2cpp_runtime_helper_022b2c90();
          pMVar10 = (MethodInfo *)0x0;
          uVar25 = extraout_XMM0_Da;
        }
        else {
          puStack_48 = (undefined8 *)0x3b3589a;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pMVar18,
                     *(int32_t *)
                      (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                      0x28),0.0,(MethodInfo *)0x0);
          puStack_48 = (undefined8 *)0x3b358b4;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pMVar18,
                     *(int32_t *)
                      (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                      0x2c),0.0,(MethodInfo *)0x0);
          puStack_48 = (undefined8 *)0x3b358d3;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pMVar18,
                     *(int32_t *)
                      (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                      0x30),225.0,(MethodInfo *)0x0);
          puStack_48 = (undefined8 *)0x3b358f2;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pMVar18,
                     *(int32_t *)
                      (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                      0x34),4.0,(MethodInfo *)0x0);
          puStack_48 = (undefined8 *)0x3b3590c;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pMVar18,
                     *(int32_t *)
                      (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                      0x38),0.0,(MethodInfo *)0x0);
          puStack_48 = (undefined8 *)0x3b3592b;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pMVar18,
                     *(int32_t *)
                      (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                      0x48),1.0,(MethodInfo *)0x0);
          puStack_48 = (undefined8 *)0x3b3594a;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pMVar18,
                     *(int32_t *)
                      (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                      0x4c),1.0,(MethodInfo *)0x0);
          puStack_48 = (undefined8 *)0x3b35964;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pMVar18,
                     *(int32_t *)
                      (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                      0x50),0.0,(MethodInfo *)0x0);
          puStack_48 = (undefined8 *)0x3b35983;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pMVar18,
                     *(int32_t *)
                      (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                      0x54),0.46,(MethodInfo *)0x0);
          puStack_48 = (undefined8 *)0x3b359a2;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pMVar18,
                     *(int32_t *)
                      (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                      0x58),42.0,(MethodInfo *)0x0);
          puStack_48 = (undefined8 *)0x3b359bc;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pMVar18,
                     *(int32_t *)
                      (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                      0x5c),0.0,(MethodInfo *)0x0);
          puStack_48 = (undefined8 *)0x3b359d6;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pMVar18,
                     *(int32_t *)
                      (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                      0x60),0.0,(MethodInfo *)0x0);
          puStack_48 = (undefined8 *)0x3b359ea;
          pMVar10 = "AOTTG_WORN";
          UnityEngine_Material__DisableKeyword
                    ((UnityEngine_Material_o *)pMVar18,(System_String_o *)"AOTTG_WORN",(MethodInfo *)0x0);
          fVar27 = 18.0;
          puStack_48 = (undefined8 *)0x3b35a0a;
          Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
                    ((UnityEngine_Material_o *)pMVar18,0.18,0.34,18.0,pMVar10);
          uVar25 = 0x43610000;
          fVar26 = 4.0;
          uVar12 = extraout_RAX;
          pMVar10 = pMStack_38;
          puVar16 = auStack_28;
          pMVar22 = pMStack_30;
        }
        do {
          *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar16 + -8) = unaff_RBP;
          *(UnityEngine_Object_o **)(puVar16 + -0x10) = pUVar24;
          *(MethodInfo **)(puVar16 + -0x18) = pMVar22;
          *(undefined8 **)(puVar16 + -0x20) = unaff_R13;
          *(undefined8 **)(puVar16 + -0x28) = puVar20;
          *(MethodInfo **)(puVar16 + -0x30) = pMVar10;
          *(undefined8 *)(puVar16 + -0x38) = uVar12;
          *(float *)(puVar16 + -0x34) = fVar26;
          *(undefined4 *)(puVar16 + -0x38) = uVar25;
          if (g_data_057a9c5f == '\0') {
            *(undefined8 *)(puVar16 + -0x40) = 0x3b35ddb;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
            *(undefined8 *)(puVar16 + -0x40) = 0x3b35de7;
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
            *(undefined8 *)(puVar16 + -0x40) = 0x3b35df3;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
            *(undefined8 *)(puVar16 + -0x40) = 0x3b35dff;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            *(undefined8 *)(puVar16 + -0x40) = 0x3b35e0b;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
            *(undefined8 *)(puVar16 + -0x40) = 0x3b35e17;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9c5f = '\x01';
          }
          pMVar10 = TypeInfo_GisketchSurfaceMaterial;
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar16 + -0x40) = 0x3b35e36;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar16 + -0x40) = 0x3b35e3b;
          pUVar24 = (UnityEngine_Object_o *)
                    Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar10);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar16 + -0x40) = 0x3b35e56;
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar11 = (UnityEngine_Object_o *)0x0;
          *(undefined8 *)(puVar16 + -0x40) = 0x3b35e62;
          bVar6 = UnityEngine_Object__op_Inequality(pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
label_03b35eb9:
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar16 + -0x40) = 0x3b35eca;
              il2cpp_runtime_helper_02337ed0();
            }
            lVar3 = *(long *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->
                              m_CachedPtr + 0x70);
            pMVar10 = TypeInfo_GisketchSurfaceMaterial;
            if (lVar3 != 0) {
              iVar19 = *(int *)(lVar3 + 0x18);
              uVar7 = iVar19 - 1;
              if ((int)uVar7 < 0) {
                return (UnityEngine_Material_o *)(ulong)uVar7;
              }
              uVar7 = iVar19 - 2;
              unaff_R13 = &MethodInfo_Material_get_Item;
              iVar19 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
              while( true ) {
                puVar20 = (undefined8 *)(ulong)uVar7;
                if (iVar19 == 0) {
                  *(undefined8 *)(puVar16 + -0x40) = 0x3b35f15;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar14 = *(System_Collections_Generic_List_object__o **)
                           (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr
                           + 0x70);
                pMVar10 = (MethodInfo *)0x0;
                if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) break;
                uVar17 = uVar7 + 1;
                unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar17;
                *(undefined8 *)(puVar16 + -0x40) = 0x3b35f3c;
                pUVar24 = (UnityEngine_Object_o *)
                          System_Collections_Generic_List_object___get_Item(pSVar14,uVar17,MethodInfo_Material_get_Item);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)(puVar16 + -0x40) = 0x3b35f50;
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar11 = (UnityEngine_Object_o *)0x0;
                *(undefined8 *)(puVar16 + -0x40) = 0x3b35f5c;
                bVar6 = UnityEngine_Object__op_Equality(pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
                ;
                if ((char)bVar6 == '\0') {
                  pMVar10 = TypeInfo_GisketchSurfaceMaterial;
                  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
                    *(undefined8 *)(puVar16 + -0x40) = 0x3b36001;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  if (pUVar24 == (UnityEngine_Object_o *)0x0) break;
                  iVar8 = *(int32_t *)
                           (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr
                           + 0x30);
                  *(undefined8 *)(puVar16 + -0x40) = 0x3b36022;
                  UnityEngine_Material__SetFloat_4dcd3b0
                            ((UnityEngine_Material_o *)pUVar24,iVar8,*(float *)(puVar16 + -0x38),
                             (MethodInfo *)0x0);
                  uVar17 = *(uint *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->
                                     m_CachedPtr + 0x34);
                  pUVar11 = (UnityEngine_Object_o *)(ulong)uVar17;
                  *(undefined8 *)(puVar16 + -0x40) = 0x3b3603f;
                  UnityEngine_Material__SetFloat_4dcd3b0
                            ((UnityEngine_Material_o *)pUVar24,uVar17,*(float *)(puVar16 + -0x34),
                             (MethodInfo *)0x0);
                  pUVar13 = extraout_RAX_04;
                }
                else {
                  if (pUVar24 != (UnityEngine_Object_o *)0x0) {
                    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
                      *(undefined8 *)(puVar16 + -0x40) = 0x3b35f7a;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar15 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->
                                m_CachedPtr + 0x78);
                    pMVar10 = (MethodInfo *)0x0;
                    if (pSVar15 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
                    *(undefined8 *)(puVar16 + -0x40) = 0x3b35fa3;
                    pUVar11 = pUVar24;
                    System_Collections_Generic_Dictionary_object__float___Remove
                              (pSVar15,(Il2CppObject *)pUVar24,MethodInfo_Boolean_Remove);
                  }
                  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
                    *(undefined8 *)(puVar16 + -0x40) = 0x3b35fb4;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar14 = *(System_Collections_Generic_List_object__o **)
                             (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->
                              m_CachedPtr + 0x70);
                  pMVar10 = (MethodInfo *)0x0;
                  if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) break;
                  pUVar11 = (UnityEngine_Object_o *)(ulong)uVar17;
                  *(undefined8 *)(puVar16 + -0x40) = 0x3b35fdc;
                  System_Collections_Generic_List_object___RemoveAt(pSVar14,uVar17,MethodInfo_Void_RemoveAt);
                  pUVar13 = extraout_RAX_03;
                }
                if ((int)uVar7 < 0) {
                  return pUVar13;
                }
                uVar7 = uVar7 - 1;
                iVar19 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
              }
            }
          }
          else {
            pMVar10 = TypeInfo_GisketchSurfaceMaterial;
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar16 + -0x40) = 0x3b35e77;
              il2cpp_runtime_helper_02337ed0();
            }
            if (pUVar24 != (UnityEngine_Object_o *)0x0) {
              iVar8 = *(int32_t *)
                       (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x30);
              *(undefined8 *)(puVar16 + -0x40) = 0x3b35e9c;
              UnityEngine_Material__SetFloat_4dcd3b0
                        ((UnityEngine_Material_o *)pUVar24,iVar8,*(float *)(puVar16 + -0x38),(MethodInfo *)0x0
                        );
              uVar7 = *(uint *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->
                                m_CachedPtr + 0x34);
              pUVar11 = (UnityEngine_Object_o *)(ulong)uVar7;
              *(undefined8 *)(puVar16 + -0x40) = 0x3b35eb9;
              UnityEngine_Material__SetFloat_4dcd3b0
                        ((UnityEngine_Material_o *)pUVar24,uVar7,*(float *)(puVar16 + -0x34),(MethodInfo *)0x0
                        );
              goto label_03b35eb9;
            }
          }
          uVar7 = (uint)pMVar10;
          *(undefined8 *)(puVar16 + -0x40) = 0x3b36071;
          uVar25 = il2cpp_runtime_helper_022b2c90();
          *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar16 + -0x40) = unaff_RBP;
          *(long **)(puVar16 + -0x48) = &TypeInfo_Object;
          *(MethodInfo ***)(puVar16 + -0x50) = &TypeInfo_GisketchSurfaceMaterial;
          *(undefined8 **)(puVar16 + -0x58) = unaff_R13;
          *(undefined8 **)(puVar16 + -0x60) = puVar20;
          *(UnityEngine_Object_o **)(puVar16 + -0x68) = pUVar24;
          *(undefined4 *)(puVar16 + -0x7c) = in_R8D;
          unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(in_RCX & 0xffffffff);
          __this = (System_Nullable_float__Fields)((ulong)pUVar11 & 0xffffffff);
          puVar20 = (undefined8 *)(ulong)uVar7;
          *(undefined4 *)(puVar16 + -0x80) = uVar25;
          *(undefined8 *)(puVar16 + -0x78) = extraout_RDX;
          *(undefined8 *)(puVar16 + -0x70) = extraout_RDX;
          if (g_data_057a9c5d == '\0') {
            *(undefined8 *)(puVar16 + -0x88) = 0x3b360bf;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
            *(undefined8 *)(puVar16 + -0x88) = 0x3b360cb;
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
            *(undefined8 *)(puVar16 + -0x88) = 0x3b360d7;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
            *(undefined8 *)(puVar16 + -0x88) = 0x3b360e3;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
            *(undefined8 *)(puVar16 + -0x88) = 0x3b360ef;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
            *(undefined8 *)(puVar16 + -0x88) = 0x3b360fb;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
            *(undefined8 *)(puVar16 + -0x88) = 0x3b36107;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            *(undefined8 *)(puVar16 + -0x88) = 0x3b36113;
            il2cpp_runtime_helper_023445d0(&"AoTTG UI Surface Instance");
            *(undefined8 *)(puVar16 + -0x88) = 0x3b3611f;
            il2cpp_runtime_helper_023445d0(&"AOTTG_WORN");
            g_data_057a9c5d = '\x01';
          }
          unaff_R13 = &TypeInfo_GisketchSurfaceMaterial;
          pMVar10 = TypeInfo_GisketchSurfaceMaterial;
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar16 + -0x88) = 0x3b3613f;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar16 + -0x88) = 0x3b36144;
          pUVar24 = (UnityEngine_Object_o *)
                    Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar10);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar16 + -0x88) = 0x3b3615f;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar16 + -0x88) = 0x3b3616d;
          bVar6 = UnityEngine_Object__op_Equality(pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            return (UnityEngine_Material_o *)0x0;
          }
          *(undefined8 *)(puVar16 + -0x88) = 0x3b36184;
          pUVar11 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
          *(undefined8 *)(puVar16 + -0x88) = 0x3b36194;
          UnityEngine_Material___ctor_4dc9e70
                    ((UnityEngine_Material_o *)pUVar11,(UnityEngine_Material_o *)pUVar24,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_Object_o *)0x0) {
            *(undefined8 *)(puVar16 + -0x88) = 0x3b361b1;
            UnityEngine_Object__set_name(pUVar11,"AoTTG UI Surface Instance",(MethodInfo *)0x0);
            *(undefined8 *)(puVar16 + -0x88) = 0x3b361c0;
            UnityEngine_Object__set_hideFlags(pUVar11,0x34,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar16 + -0x88) = 0x3b361d2;
              il2cpp_runtime_helper_02337ed0();
            }
            iVar8 = *(int32_t *)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x28
                     );
            *(undefined8 *)(puVar16 + -0x88) = 0x3b361ef;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar11,iVar8,*(float *)(puVar16 + -0x80),(MethodInfo *)0x0);
            if ((char)uVar7 == '\0') {
              fVar28 = 0.0;
            }
            else {
              fVar28 = 1.0;
            }
            iVar8 = *(int32_t *)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x2c
                     );
            *(undefined8 *)(puVar16 + -0x88) = 0x3b36219;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar11,iVar8,fVar28,(MethodInfo *)0x0);
            cVar21 = (char)__this.hasValue;
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar16 + -0x88) = 0x3b36235;
              il2cpp_runtime_helper_02337ed0();
              if (cVar21 == '\0') goto label_03b3622b;
label_03b3623e:
              fVar28 = 1.0;
            }
            else {
              if (cVar21 != '\0') goto label_03b3623e;
label_03b3622b:
              fVar28 = 0.0;
            }
            iVar8 = *(int32_t *)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x38
                     );
            *(undefined8 *)(puVar16 + -0x88) = 0x3b3625a;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar11,iVar8,fVar28,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar16 + -0x88) = 0x3b3626c;
              il2cpp_runtime_helper_02337ed0();
            }
            iVar8 = *(int32_t *)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x48
                     );
            *(undefined8 *)(puVar16 + -0x88) = 0x3b3628c;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar11,iVar8,1.0,(MethodInfo *)0x0);
            iVar8 = *(int32_t *)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x4c
                     );
            *(undefined8 *)(puVar16 + -0x88) = 0x3b362ac;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar11,iVar8,1.0,(MethodInfo *)0x0);
            fVar28 = 1.0;
            if ((char)unaff_RBP == '\0') {
              fVar28 = 0.0;
            }
            iVar8 = *(int32_t *)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x50
                     );
            *(undefined8 *)(puVar16 + -0x88) = 0x3b362d4;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar11,iVar8,fVar28,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar16 + -0x88) = 0x3b362e6;
              il2cpp_runtime_helper_02337ed0();
            }
            if (pUVar24 != (UnityEngine_Object_o *)0x0) {
              iVar8 = *(int32_t *)
                       (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x54);
              *(undefined8 *)(puVar16 + -0x88) = 0x3b36309;
              fVar28 = UnityEngine_Material__GetFloat_4dcdb00
                                 ((UnityEngine_Material_o *)pUVar24,iVar8,(MethodInfo *)0x0);
              *(undefined8 *)(puVar16 + -0x88) = 0x3b36315;
              UnityEngine_Material__SetFloat_4dcd3b0
                        ((UnityEngine_Material_o *)pUVar11,iVar8,fVar28,(MethodInfo *)0x0);
              iVar8 = *(int32_t *)
                       (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x58);
              *(undefined8 *)(puVar16 + -0x88) = 0x3b3632f;
              fVar28 = UnityEngine_Material__GetFloat_4dcdb00
                                 ((UnityEngine_Material_o *)pUVar24,iVar8,(MethodInfo *)0x0);
              *(undefined8 *)(puVar16 + -0x88) = 0x3b3633b;
              UnityEngine_Material__SetFloat_4dcd3b0
                        ((UnityEngine_Material_o *)pUVar11,iVar8,fVar28,(MethodInfo *)0x0);
              if (puVar16[-0x7c] == '\0') {
                fVar28 = 0.0;
              }
              else {
                fVar28 = 1.0;
              }
              iVar8 = *(int32_t *)
                       (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x5c);
              *(undefined8 *)(puVar16 + -0x88) = 0x3b36367;
              UnityEngine_Material__SetFloat_4dcd3b0
                        ((UnityEngine_Material_o *)pUVar11,iVar8,fVar28,(MethodInfo *)0x0);
              if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
                *(undefined8 *)(puVar16 + -0x88) = 0x3b36379;
                il2cpp_runtime_helper_02337ed0();
              }
              iVar8 = *(int32_t *)
                       (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x60);
              *(undefined8 *)(puVar16 + -0x88) = 0x3b36394;
              UnityEngine_Material__SetFloat_4dcd3b0
                        ((UnityEngine_Material_o *)pUVar11,iVar8,0.0,(MethodInfo *)0x0);
              if (cVar21 == '\0') {
                *(undefined8 *)(puVar16 + -0x88) = 0x3b363c6;
                UnityEngine_Material__DisableKeyword
                          ((UnityEngine_Material_o *)pUVar11,(System_String_o *)"AOTTG_WORN",(MethodInfo *)0x0
                          );
                __this = *(System_Nullable_float__Fields *)(puVar16 + -0x78);
                iVar19 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
              }
              else {
                *(undefined8 *)(puVar16 + -0x88) = 0x3b363ad;
                UnityEngine_Material__EnableKeyword
                          ((UnityEngine_Material_o *)pUVar11,(System_String_o *)"AOTTG_WORN",(MethodInfo *)0x0
                          );
                __this = *(System_Nullable_float__Fields *)(puVar16 + -0x78);
                iVar19 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
              }
              if (iVar19 == 0) {
                *(undefined8 *)(puVar16 + -0x88) = 0x3b363dd;
                il2cpp_runtime_helper_02337ed0();
              }
              iVar8 = *(int32_t *)
                       (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x30);
              *(undefined8 *)(puVar16 + -0x88) = 0x3b363f7;
              fVar28 = UnityEngine_Material__GetFloat_4dcdb00
                                 ((UnityEngine_Material_o *)pUVar24,iVar8,(MethodInfo *)0x0);
              *(undefined8 *)(puVar16 + -0x88) = 0x3b36403;
              UnityEngine_Material__SetFloat_4dcd3b0
                        ((UnityEngine_Material_o *)pUVar11,iVar8,fVar28,(MethodInfo *)0x0);
              uVar7 = *(uint *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->
                                m_CachedPtr + 0x34);
              unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar7;
              *(undefined8 *)(puVar16 + -0x88) = 0x3b3641d;
              fVar28 = UnityEngine_Material__GetFloat_4dcdb00
                                 ((UnityEngine_Material_o *)pUVar24,uVar7,(MethodInfo *)0x0);
              *(undefined8 *)(puVar16 + -0x88) = 0x3b36429;
              UnityEngine_Material__SetFloat_4dcd3b0
                        ((UnityEngine_Material_o *)pUVar11,uVar7,fVar28,(MethodInfo *)0x0);
              if ((char)__this.hasValue != '\0') {
                if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
                  *(undefined8 *)(puVar16 + -0x88) = 0x3b36440;
                  il2cpp_runtime_helper_02337ed0();
                }
                iVar8 = *(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x44);
                pUVar24 = (UnityEngine_Object_o *)&MethodInfo_Single_get_Value;
                __this = (System_Nullable_float__Fields)((long)puVar16 + -0x70);
                *(undefined8 *)(puVar16 + -0x88) = 0x3b36465;
                fVar28 = System_Nullable_float___get_Value((System_Nullable_float__o)__this,MethodInfo_Single_get_Value);
                *(undefined8 *)(puVar16 + -0x88) = 0x3b36471;
                UnityEngine_Material__SetFloat_4dcd3b0
                          ((UnityEngine_Material_o *)pUVar11,iVar8,fVar28,(MethodInfo *)0x0);
                unaff_RBP = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                             (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->
                              m_CachedPtr + 0x78);
                *(undefined8 *)(puVar16 + -0x88) = 0x3b3648b;
                fVar28 = System_Nullable_float___get_Value((System_Nullable_float__o)__this,MethodInfo_Single_get_Value);
                if (unaff_RBP == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
                goto label_03b36535;
                *(undefined8 *)(puVar16 + -0x88) = 0x3b364a9;
                System_Collections_Generic_Dictionary_object__float___set_Item
                          (unaff_RBP,(Il2CppObject *)pUVar11,fVar28,MethodInfo_Void_set_Item);
              }
              if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
                *(undefined8 *)(puVar16 + -0x88) = 0x3b364bb;
                il2cpp_runtime_helper_02337ed0();
              }
              uVar5 = MethodInfo_Void_Add;
              pSVar14 = *(System_Collections_Generic_List_object__o **)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x70);
              if (pSVar14 != (System_Collections_Generic_List_object__o *)0x0) {
                piVar1 = &(pSVar14->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar4 = (pSVar14->fields)._items;
                in_RCX = uVar5;
                if (pSVar4 != (System_Object_array *)0x0) {
                  uVar7 = (pSVar14->fields)._size;
                  if (uVar7 < (uint)pSVar4->max_length) {
                    (pSVar14->fields)._size = uVar7 + 1;
                    pSVar4->m_Items[(int)uVar7] = (Il2CppObject *)pUVar11;
                    *(undefined8 *)(puVar16 + -0x88) = 0x3b3650a;
                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar7,pUVar11);
                  }
                  else {
                    method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(uVar5 + 0x20) + 0xc0) + 0x70);
                    *(undefined8 *)(puVar16 + -0x88) = 0x3b36523;
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar14,(Il2CppObject *)pUVar11,method_00);
                  }
                  return (UnityEngine_Material_o *)pUVar11;
                }
              }
            }
          }
label_03b36535:
          *(undefined8 *)(puVar16 + -0x88) = 0x3b3653a;
          uVar12 = il2cpp_runtime_helper_022b2c90();
          *(System_Nullable_float__Fields *)(puVar16 + -0x88) = __this;
          *(UnityEngine_Object_o **)(puVar16 + -0x90) = pUVar11;
          *(undefined8 *)(puVar16 + -0x98) = uVar12;
          *(undefined4 *)(puVar16 + -0x94) = extraout_XMM0_Da_00;
          if (g_data_057a9c5e == '\0') {
            *(undefined8 *)(puVar16 + -0xa0) = 0x3b3655f;
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
            *(undefined8 *)(puVar16 + -0xa0) = 0x3b3656b;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9c5e = '\x01';
          }
          puVar23 = &TypeInfo_GisketchSurfaceMaterial;
          pMVar10 = TypeInfo_GisketchSurfaceMaterial;
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar16 + -0xa0) = 0x3b3658a;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar16 + -0xa0) = 0x3b3658f;
          pMVar10 = (MethodInfo *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar10);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar16 + -0xa0) = 0x3b365aa;
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar22 = (MethodInfo *)0x0;
          *(undefined8 *)(puVar16 + -0xa0) = 0x3b365b6;
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          uVar12 = CONCAT44(extraout_var_02,bVar6);
          if ((char)bVar6 == '\0') {
            fVar26 = 4.0;
            iVar19 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
          }
          else {
            pMVar18 = TypeInfo_GisketchSurfaceMaterial;
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar16 + -0xa0) = 0x3b365cb;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar16 + -0xa0) = 0x3b365d0;
            pUVar13 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar18);
            if (pUVar13 == (UnityEngine_Material_o *)0x0) goto label_03b36632;
            in_RCX = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
            iVar8 = *(int32_t *)(in_RCX + 0x34);
            *(undefined8 *)(puVar16 + -0xa0) = 0x3b365ec;
            fVar26 = UnityEngine_Material__GetFloat_4dcdb00(pUVar13,iVar8,(MethodInfo *)0x0);
            iVar19 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
            uVar12 = extraout_RAX_05;
          }
          if (iVar19 == 0) {
            *(float *)(puVar16 + -0x98) = fVar26;
            *(undefined8 *)(puVar16 + -0xa0) = 0x3b3661b;
            uVar12 = il2cpp_runtime_helper_02337ed0();
            fVar26 = *(float *)(puVar16 + -0x98);
          }
          uVar25 = *(undefined4 *)(puVar16 + -0x94);
          pMVar10 = *(MethodInfo **)(puVar16 + -0x90);
          pMVar22 = *(MethodInfo **)(puVar16 + -0x88);
          puVar16 = puVar16 + -0x80;
        } while( true );
      }
      pMStack_30 = (MethodInfo *)0x3b35760;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)method_01,"AoTTG UI Textured Surface",(MethodInfo *)0x0);
      pMStack_30 = (MethodInfo *)0x3b3576f;
      UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)method_01,0x3d,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        pMStack_30 = (MethodInfo *)0x3b35780;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar3 = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
      *(MethodInfo **)(lVar3 + 0x68) = method_01;
      pMStack_30 = (MethodInfo *)0x3b3579a;
      il2cpp_runtime_helper_022b4080(lVar3 + 0x68);
      pMStack_30 = (MethodInfo *)0x3b357ad;
      Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyDefaults
                (*(UnityEngine_Material_o **)
                  (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x68),
                 method_01);
      goto label_03b357b0;
    }
  }
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    pMStack_30 = (MethodInfo *)0x3b356e7;
    il2cpp_runtime_helper_02337ed0();
  }
label_03b357b0:
  return *(UnityEngine_Material_o **)
          (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x68);
label_03b36632:
  *(undefined8 *)(puVar16 + -0xa0) = 0x3b36637;
  uVar25 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar16 + -0xa0) = unaff_RBP;
  *(UnityEngine_Object_o **)(puVar16 + -0xa8) = pUVar24;
  *(MethodInfo ***)(puVar16 + -0xb0) = &TypeInfo_GisketchSurfaceMaterial;
  *(MethodInfo ***)(puVar16 + -0xb8) = &TypeInfo_GisketchSurfaceMaterial;
  *(undefined8 **)(puVar16 + -0xc0) = puVar20;
  *(MethodInfo **)(puVar16 + -200) = pMVar10;
  *(float *)(puVar16 + -0xdc) = fVar27;
  *(float *)(puVar16 + -0xd4) = fVar26;
  *(undefined4 *)(puVar16 + -0xd8) = uVar25;
  if (g_data_057a9c60 == '\0') {
    *(undefined8 *)(puVar16 + -0xe8) = 0x3b36675;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    *(undefined8 *)(puVar16 + -0xe8) = 0x3b36681;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    *(undefined8 *)(puVar16 + -0xe8) = 0x3b3668d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    *(undefined8 *)(puVar16 + -0xe8) = 0x3b36699;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    *(undefined8 *)(puVar16 + -0xe8) = 0x3b366a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar16 + -0xe8) = 0x3b366b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    *(undefined8 *)(puVar16 + -0xe8) = 0x3b366bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c60 = '\x01';
  }
  *(undefined4 *)(puVar16 + -0xd0) = 0;
  pMVar18 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    *(undefined8 *)(puVar16 + -0xe8) = 0x3b366e4;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar16 + -0xe8) = 0x3b366e9;
  pUVar13 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar18);
  *(undefined8 *)(puVar16 + -0xe8) = 0x3b36703;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
            (pUVar13,*(float *)(puVar16 + -0xd8),*(float *)(puVar16 + -0xd4),*(float *)(puVar16 + -0xdc),
             pMVar22);
  lVar3 = *(long *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
  if (lVar3 == 0) {
label_03b368f4:
    *(undefined8 *)(puVar16 + -0xe8) = 0x3b368f9;
    uVar12 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 **)(puVar16 + -0xe8) = puVar23;
    *(MethodInfo **)(puVar16 + -0xf0) = pMVar10;
    *(undefined8 *)(puVar16 + -0xf8) = uVar12;
    if (g_data_057a9c64 == '\0') {
      *(undefined8 *)(puVar16 + -0x100) = 0x3b3691d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36929;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Material_float);
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36935;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36941;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      *(undefined8 *)(puVar16 + -0x100) = 0x3b3694d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36959;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakScale");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36965;
      il2cpp_runtime_helper_023445d0(&"_GradientStrength");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36971;
      il2cpp_runtime_helper_023445d0(&"_CoarseStrength");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b3697d;
      il2cpp_runtime_helper_023445d0(&"_ChipStrength");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36989;
      il2cpp_runtime_helper_023445d0(&"_BrushReveal");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36995;
      il2cpp_runtime_helper_023445d0(&"_LightFineScale");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b369a1;
      il2cpp_runtime_helper_023445d0(&"_ReliefShadowSize");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b369ad;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseScale");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b369b9;
      il2cpp_runtime_helper_023445d0(&"_FineScale");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b369c5;
      il2cpp_runtime_helper_023445d0(&"_HorizontalBlur");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b369d1;
      il2cpp_runtime_helper_023445d0(&"_VerticalLightGradient");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b369dd;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakStrength");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b369e9;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseStrength");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b369f5;
      il2cpp_runtime_helper_023445d0(&"_BrushRevealDirection");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36a01;
      il2cpp_runtime_helper_023445d0(&"_CoarseScale");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36a0d;
      il2cpp_runtime_helper_023445d0(&"_Relief");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36a19;
      il2cpp_runtime_helper_023445d0(&"_FineStrength");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36a25;
      il2cpp_runtime_helper_023445d0(&"_WearStrength");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36a31;
      il2cpp_runtime_helper_023445d0(&"_LightGradientStrength");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36a3d;
      il2cpp_runtime_helper_023445d0(&"_LightFineStrength");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36a49;
      il2cpp_runtime_helper_023445d0(&"_BrushStreak");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36a55;
      il2cpp_runtime_helper_023445d0(&"_Worn");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36a61;
      il2cpp_runtime_helper_023445d0(&"_StainScale");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36a6d;
      il2cpp_runtime_helper_023445d0(&"_ReliefGradient");
      *(undefined8 *)(puVar16 + -0x100) = 0x3b36a79;
      il2cpp_runtime_helper_023445d0(&"_ReliefLightAngle");
      g_data_057a9c64 = '\x01';
    }
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36a91;
    iVar8 = UnityEngine_Shader__PropertyToID("_FineScale",(MethodInfo *)0x0);
    *(int32_t *)((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr = iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36ab5;
    iVar8 = UnityEngine_Shader__PropertyToID("_FineStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 4) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36ad3;
    iVar8 = UnityEngine_Shader__PropertyToID("_CoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 8) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36af1;
    iVar8 = UnityEngine_Shader__PropertyToID("_CoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0xc) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36b0f;
    iVar8 = UnityEngine_Shader__PropertyToID("_GradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x10) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36b2d;
    iVar8 = UnityEngine_Shader__PropertyToID("_LightFineScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x14) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36b4b;
    iVar8 = UnityEngine_Shader__PropertyToID("_LightFineStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x18) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36b69;
    iVar8 = UnityEngine_Shader__PropertyToID("_LightCoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x1c) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36b87;
    iVar8 = UnityEngine_Shader__PropertyToID("_LightCoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x20) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36ba5;
    iVar8 = UnityEngine_Shader__PropertyToID("_LightGradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x24) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36bc3;
    iVar8 = UnityEngine_Shader__PropertyToID("_Relief",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x28) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36be1;
    iVar8 = UnityEngine_Shader__PropertyToID("_ReliefGradient",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x2c) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36bff;
    iVar8 = UnityEngine_Shader__PropertyToID("_ReliefLightAngle",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x30) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36c1d;
    iVar8 = UnityEngine_Shader__PropertyToID("_ReliefShadowSize",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x34) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36c3b;
    iVar8 = UnityEngine_Shader__PropertyToID("_Worn",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x38) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36c59;
    iVar8 = UnityEngine_Shader__PropertyToID("_WearStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x3c) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36c77;
    iVar8 = UnityEngine_Shader__PropertyToID("_ChipStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x40) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36c95;
    iVar8 = UnityEngine_Shader__PropertyToID("_StainScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x44) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36cb3;
    iVar8 = UnityEngine_Shader__PropertyToID("_BrushReveal",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x48) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36cd1;
    iVar8 = UnityEngine_Shader__PropertyToID("_BrushRevealDirection",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x4c) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36cef;
    iVar8 = UnityEngine_Shader__PropertyToID("_BrushStreak",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x50) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36d0d;
    iVar8 = UnityEngine_Shader__PropertyToID("_BrushStreakStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x54) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36d2b;
    iVar8 = UnityEngine_Shader__PropertyToID("_BrushStreakScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x58) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36d49;
    iVar8 = UnityEngine_Shader__PropertyToID("_VerticalLightGradient",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x5c) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36d67;
    iVar8 = UnityEngine_Shader__PropertyToID("_HorizontalBlur",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x60) =
         iVar8;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36d83;
    pSVar14 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36d98;
    System_Collections_Generic_List_object____ctor(pSVar14,MethodInfo_List_1_UnityEngine_Material);
    lVar3 = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
    *(System_Collections_Generic_List_object__o **)(lVar3 + 0x70) = pSVar14;
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36db2;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x70,pSVar14);
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36dc1;
    pSVar15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Material_float);
    *(undefined8 *)(puVar16 + -0x100) = 0x3b36dd6;
    System_Collections_Generic_Dictionary_object__float____ctor(pSVar15,MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
    lVar3 = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar3 + 0x78) = pSVar15;
    pUVar13 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b4080(lVar3 + 0x78,pSVar15);
    return pUVar13;
  }
  iVar19 = *(int *)(lVar3 + 0x18);
  uVar7 = iVar19 - 1;
  pUVar13 = (UnityEngine_Material_o *)(ulong)uVar7;
  if (-1 < (int)uVar7) {
    iVar19 = iVar19 + -2;
    puVar23 = &TypeInfo_Object;
    iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    while( true ) {
      if (iVar2 == 0) {
        *(undefined8 *)(puVar16 + -0xe8) = 0x3b36755;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = *(System_Collections_Generic_List_object__o **)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
      if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
      *(undefined8 *)(puVar16 + -0xe8) = 0x3b3677c;
      pMVar10 = (MethodInfo *)
                System_Collections_Generic_List_object___get_Item(pSVar14,iVar19 + 1,MethodInfo_Material_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar16 + -0xe8) = 0x3b36790;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar16 + -0xe8) = 0x3b3679c;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar16 + -0xe8) = 0x3b36841;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar15 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x78);
        if (pSVar15 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
        *(undefined8 *)(puVar16 + -0xe8) = 0x3b3686f;
        pMVar22 = pMVar10;
        bVar6 = System_Collections_Generic_Dictionary_object__float___TryGetValue
                          (pSVar15,(Il2CppObject *)pMVar10,(float *)(puVar16 + -0xd0),MethodInfo_Boolean_TryGetValue);
        if ((char)bVar6 == '\0') {
          fVar26 = *(float *)(puVar16 + -0xdc);
          iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        else {
          fVar26 = *(float *)(puVar16 + -0xd0);
          iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        if (iVar2 == 0) {
          *(float *)(puVar16 + -0xcc) = fVar26;
          *(undefined8 *)(puVar16 + -0xe8) = 0x3b368ad;
          il2cpp_runtime_helper_02337ed0();
          fVar26 = *(float *)(puVar16 + -0xcc);
        }
        *(undefined8 *)(puVar16 + -0xe8) = 0x3b368c7;
        Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
                  ((UnityEngine_Material_o *)pMVar10,*(float *)(puVar16 + -0xd8),*(float *)(puVar16 + -0xd4),
                   fVar26,pMVar22);
        pUVar13 = extraout_RAX_07;
      }
      else {
        if (pMVar10 != (MethodInfo *)0x0) {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar16 + -0xe8) = 0x3b367ba;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar15 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x78
                     );
          if (pSVar15 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
          *(undefined8 *)(puVar16 + -0xe8) = 0x3b367e3;
          System_Collections_Generic_Dictionary_object__float___Remove
                    (pSVar15,(Il2CppObject *)pMVar10,MethodInfo_Boolean_Remove);
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar16 + -0xe8) = 0x3b367f4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar14 = *(System_Collections_Generic_List_object__o **)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
        if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
        *(undefined8 *)(puVar16 + -0xe8) = 0x3b3681c;
        System_Collections_Generic_List_object___RemoveAt(pSVar14,iVar19 + 1,MethodInfo_Void_RemoveAt);
        pUVar13 = extraout_RAX_06;
      }
      if (iVar19 < 0) break;
      iVar19 = iVar19 + -1;
      iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
  }
  return pUVar13;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyDefaults (UnityEngine_Material_o* material, const MethodInfo* method);
// 0x3b357d0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyDefaults
               (UnityEngine_Material_o *material,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  long lVar3;
  System_Object_array *pSVar4;
  MethodInfo_362C220 *method_00;
  ulong uVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  undefined8 extraout_RAX;
  UnityEngine_Object_o *pUVar8;
  undefined8 uVar9;
  MethodInfo *pMVar10;
  undefined4 extraout_var;
  UnityEngine_Material_o *pUVar11;
  undefined8 extraout_RAX_00;
  System_Collections_Generic_List_object__o *pSVar12;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar13;
  ulong in_RCX;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  undefined1 *puVar14;
  uint uVar15;
  System_Collections_Generic_Dictionary_TKey__TValue__o *unaff_RBP;
  UnityEngine_Object_o *pUVar16;
  MethodInfo *pMVar17;
  MethodInfo *pMVar18;
  undefined4 in_R8D;
  uint uVar19;
  int iVar20;
  ulong unaff_R12;
  undefined8 *unaff_R13;
  char cVar21;
  undefined8 *unaff_R14;
  System_Nullable_float__Fields __this;
  undefined8 *puVar22;
  UnityEngine_Object_o *unaff_R15;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_90 [12];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  MethodInfo *pMStack_78;
  undefined8 *puStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  UnityEngine_Object_o *pUStack_50;
  undefined8 *puStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  UnityEngine_Material_o *pUStack_28;
  undefined8 *puStack_20;
  
  if (g_data_057a9c5c == '\0') {
    puStack_20 = (undefined8 *)0x3b357ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    puStack_20 = (undefined8 *)0x3b357f8;
    il2cpp_runtime_helper_023445d0(&"AOTTG_WORN");
    g_data_057a9c5c = '\x01';
  }
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    puStack_20 = (undefined8 *)0x3b35817;
    il2cpp_runtime_helper_02337ed0();
  }
  puStack_20 = (undefined8 *)0x3b35847;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyPreset
            (material,205.0,0.0147,72.0,0.0014,0.0089,method);
  fVar24 = 0.04;
  fVar25 = 120.0;
  fVar26 = 0.007;
  fVar27 = 0.018;
  puStack_20 = (undefined8 *)0x3b35877;
  pUVar8 = (UnityEngine_Object_o *)material;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyLightPreset
            (material,263.0,0.04,120.0,0.007,0.018,method);
  if (material == (UnityEngine_Material_o *)0x0) {
    puStack_20 = (undefined8 *)0x3b35a2b;
    fStack_3c = (float)il2cpp_runtime_helper_022b2c90();
    puStack_20 = &TypeInfo_GisketchSurfaceMaterial;
    fStack_38 = fVar24;
    fStack_34 = fVar25;
    fStack_30 = fVar26;
    fStack_2c = fVar27;
    pUStack_28 = material;
    if (g_data_057a9c61 == '\0') {
      puStack_48 = (undefined8 *)0x3b35a6d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      puStack_48 = (undefined8 *)0x3b35a79;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c61 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      puStack_48 = (undefined8 *)0x3b35a98;
      il2cpp_runtime_helper_02337ed0();
    }
    puStack_48 = (undefined8 *)0x3b35aa4;
    bVar6 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    pMVar10 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      puStack_48 = (undefined8 *)0x3b35ac8;
      il2cpp_runtime_helper_02337ed0();
    }
    if (pUVar8 != (UnityEngine_Object_o *)0x0) {
      puStack_48 = (undefined8 *)0x3b35aed;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pUVar8,
                 *(int32_t *)((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr
                 ,fStack_3c,(MethodInfo *)0x0);
      puStack_48 = (undefined8 *)0x3b35b0a;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pUVar8,
                 *(int32_t *)
                  (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 4),
                 fStack_38,(MethodInfo *)0x0);
      puStack_48 = (undefined8 *)0x3b35b27;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pUVar8,
                 *(int32_t *)
                  (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 8),
                 fStack_34,(MethodInfo *)0x0);
      puStack_48 = (undefined8 *)0x3b35b44;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pUVar8,
                 *(int32_t *)
                  (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0xc),
                 fStack_30,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pUVar8,
                 *(int32_t *)
                  (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x10),
                 fStack_2c,(MethodInfo *)0x0);
      return;
    }
    puStack_48 = (undefined8 *)0x3b35b6d;
    fStack_64 = (float)il2cpp_runtime_helper_022b2c90();
    puStack_48 = &TypeInfo_GisketchSurfaceMaterial;
    fStack_60 = fVar24;
    fStack_5c = fVar25;
    fStack_58 = fVar26;
    fStack_54 = fVar27;
    pUStack_50 = pUVar8;
    if (g_data_057a9c62 == '\0') {
      puStack_70 = (undefined8 *)0x3b35bad;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      puStack_70 = (undefined8 *)0x3b35bb9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c62 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      puStack_70 = (undefined8 *)0x3b35bd8;
      il2cpp_runtime_helper_02337ed0();
    }
    puStack_70 = (undefined8 *)0x3b35be4;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    pMVar17 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      puStack_70 = (undefined8 *)0x3b35c08;
      il2cpp_runtime_helper_02337ed0();
    }
    if (pMVar10 != (MethodInfo *)0x0) {
      puStack_70 = (undefined8 *)0x3b35c2e;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pMVar10,
                 *(int32_t *)
                  (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x14),
                 fStack_64,(MethodInfo *)0x0);
      puStack_70 = (undefined8 *)0x3b35c4b;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pMVar10,
                 *(int32_t *)
                  (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x18),
                 fStack_60,(MethodInfo *)0x0);
      puStack_70 = (undefined8 *)0x3b35c68;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pMVar10,
                 *(int32_t *)
                  (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x1c),
                 fStack_5c,(MethodInfo *)0x0);
      puStack_70 = (undefined8 *)0x3b35c85;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pMVar10,
                 *(int32_t *)
                  (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x20),
                 fStack_58,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pMVar10,
                 *(int32_t *)
                  (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x24),
                 fStack_54,(MethodInfo *)0x0);
      return;
    }
    puStack_70 = (undefined8 *)0x3b35cae;
    fStack_84 = (float)il2cpp_runtime_helper_022b2c90();
    puStack_70 = &TypeInfo_GisketchSurfaceMaterial;
    puVar14 = auStack_90;
    fStack_80 = fVar24;
    fStack_7c = fVar25;
    pMStack_78 = pMVar10;
    if (g_data_057a9c63 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c63 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pMVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    unaff_R14 = &TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pMVar17 != (MethodInfo *)0x0) {
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pMVar17,
                 *(int32_t *)
                  (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x3c),
                 fStack_84,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pMVar17,
                 *(int32_t *)
                  (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x40),
                 fStack_80,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pMVar17,
                 *(int32_t *)
                  (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x44),
                 fStack_7c,(MethodInfo *)0x0);
      return;
    }
    uVar9 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    uVar23 = extraout_XMM0_Da;
  }
  else {
    puStack_20 = (undefined8 *)0x3b3589a;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x28),0.0,(MethodInfo *)0x0);
    puStack_20 = (undefined8 *)0x3b358b4;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x2c),0.0,(MethodInfo *)0x0);
    puStack_20 = (undefined8 *)0x3b358d3;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x30),225.0,(MethodInfo *)0x0);
    puStack_20 = (undefined8 *)0x3b358f2;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x34),4.0,(MethodInfo *)0x0);
    puStack_20 = (undefined8 *)0x3b3590c;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x38),0.0,(MethodInfo *)0x0);
    puStack_20 = (undefined8 *)0x3b3592b;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x48),1.0,(MethodInfo *)0x0);
    puStack_20 = (undefined8 *)0x3b3594a;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x4c),1.0,(MethodInfo *)0x0);
    puStack_20 = (undefined8 *)0x3b35964;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x50),0.0,(MethodInfo *)0x0);
    puStack_20 = (undefined8 *)0x3b35983;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x54),0.46,(MethodInfo *)0x0);
    puStack_20 = (undefined8 *)0x3b359a2;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x58),42.0,(MethodInfo *)0x0);
    puStack_20 = (undefined8 *)0x3b359bc;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x5c),0.0,(MethodInfo *)0x0);
    puStack_20 = (undefined8 *)0x3b359d6;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x60),0.0,(MethodInfo *)0x0);
    puStack_20 = (undefined8 *)0x3b359ea;
    pMVar10 = "AOTTG_WORN";
    UnityEngine_Material__DisableKeyword(material,(System_String_o *)"AOTTG_WORN",(MethodInfo *)0x0);
    fVar25 = 18.0;
    puStack_20 = (undefined8 *)0x3b35a0a;
    Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset(material,0.18,0.34,18.0,pMVar10);
    uVar23 = 0x43610000;
    fVar24 = 4.0;
    uVar9 = extraout_RAX;
    puVar14 = (undefined1 *)register0x00000020;
  }
  do {
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar14 + -8) = unaff_RBP;
    *(UnityEngine_Object_o **)(puVar14 + -0x10) = unaff_R15;
    *(undefined8 **)(puVar14 + -0x18) = unaff_R14;
    *(undefined8 **)(puVar14 + -0x20) = unaff_R13;
    *(ulong *)(puVar14 + -0x28) = unaff_R12;
    *(undefined8 *)(puVar14 + -0x30) = unaff_RBX;
    *(undefined8 *)(puVar14 + -0x38) = uVar9;
    *(float *)(puVar14 + -0x34) = fVar24;
    *(undefined4 *)(puVar14 + -0x38) = uVar23;
    if (g_data_057a9c5f == '\0') {
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35ddb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35de7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35df3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35dff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35e0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35e17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5f = '\x01';
    }
    pMVar10 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35e36;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar14 + -0x40) = 0x3b35e3b;
    pUVar8 = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar10);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35e56;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar16 = (UnityEngine_Object_o *)0x0;
    *(undefined8 *)(puVar14 + -0x40) = 0x3b35e62;
    bVar6 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
label_03b35eb9:
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0x40) = 0x3b35eca;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar3 = *(long *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x70);
      pMVar10 = TypeInfo_GisketchSurfaceMaterial;
      if (lVar3 != 0) {
        iVar20 = *(int *)(lVar3 + 0x18);
        if (iVar20 + -1 < 0) {
          return;
        }
        uVar19 = iVar20 - 2;
        unaff_R13 = &MethodInfo_Material_get_Item;
        iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        while( true ) {
          unaff_R12 = (ulong)uVar19;
          if (iVar20 == 0) {
            *(undefined8 *)(puVar14 + -0x40) = 0x3b35f15;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = *(System_Collections_Generic_List_object__o **)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70
                     );
          pMVar10 = (MethodInfo *)0x0;
          if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) break;
          uVar15 = uVar19 + 1;
          unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar15;
          *(undefined8 *)(puVar14 + -0x40) = 0x3b35f3c;
          pUVar8 = (UnityEngine_Object_o *)
                   System_Collections_Generic_List_object___get_Item(pSVar12,uVar15,MethodInfo_Material_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar14 + -0x40) = 0x3b35f50;
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar16 = (UnityEngine_Object_o *)0x0;
          *(undefined8 *)(puVar14 + -0x40) = 0x3b35f5c;
          bVar6 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            pMVar10 = TypeInfo_GisketchSurfaceMaterial;
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar14 + -0x40) = 0x3b36001;
              il2cpp_runtime_helper_02337ed0();
            }
            if (pUVar8 == (UnityEngine_Object_o *)0x0) break;
            iVar7 = *(int32_t *)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x30
                     );
            *(undefined8 *)(puVar14 + -0x40) = 0x3b36022;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar8,iVar7,*(float *)(puVar14 + -0x38),(MethodInfo *)0x0);
            uVar15 = *(uint *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->
                               m_CachedPtr + 0x34);
            pUVar16 = (UnityEngine_Object_o *)(ulong)uVar15;
            *(undefined8 *)(puVar14 + -0x40) = 0x3b3603f;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar8,uVar15,*(float *)(puVar14 + -0x34),(MethodInfo *)0x0);
          }
          else {
            if (pUVar8 != (UnityEngine_Object_o *)0x0) {
              if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
                *(undefined8 *)(puVar14 + -0x40) = 0x3b35f7a;
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar13 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x78);
              pMVar10 = (MethodInfo *)0x0;
              if (pSVar13 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
              *(undefined8 *)(puVar14 + -0x40) = 0x3b35fa3;
              pUVar16 = pUVar8;
              System_Collections_Generic_Dictionary_object__float___Remove
                        (pSVar13,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove);
            }
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar14 + -0x40) = 0x3b35fb4;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar12 = *(System_Collections_Generic_List_object__o **)
                       (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x70);
            pMVar10 = (MethodInfo *)0x0;
            if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) break;
            pUVar16 = (UnityEngine_Object_o *)(ulong)uVar15;
            *(undefined8 *)(puVar14 + -0x40) = 0x3b35fdc;
            System_Collections_Generic_List_object___RemoveAt(pSVar12,uVar15,MethodInfo_Void_RemoveAt);
          }
          if ((int)uVar19 < 0) {
            return;
          }
          uVar19 = uVar19 - 1;
          iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
      }
    }
    else {
      pMVar10 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0x40) = 0x3b35e77;
        il2cpp_runtime_helper_02337ed0();
      }
      if (pUVar8 != (UnityEngine_Object_o *)0x0) {
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x30);
        *(undefined8 *)(puVar14 + -0x40) = 0x3b35e9c;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,iVar7,*(float *)(puVar14 + -0x38),(MethodInfo *)0x0);
        uVar19 = *(uint *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                          0x34);
        pUVar16 = (UnityEngine_Object_o *)(ulong)uVar19;
        *(undefined8 *)(puVar14 + -0x40) = 0x3b35eb9;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,uVar19,*(float *)(puVar14 + -0x34),(MethodInfo *)0x0);
        goto label_03b35eb9;
      }
    }
    uVar19 = (uint)pMVar10;
    *(undefined8 *)(puVar14 + -0x40) = 0x3b36071;
    uVar23 = il2cpp_runtime_helper_022b2c90();
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar14 + -0x40) = unaff_RBP;
    *(long **)(puVar14 + -0x48) = &TypeInfo_Object;
    *(MethodInfo ***)(puVar14 + -0x50) = &TypeInfo_GisketchSurfaceMaterial;
    *(undefined8 **)(puVar14 + -0x58) = unaff_R13;
    *(ulong *)(puVar14 + -0x60) = unaff_R12;
    *(UnityEngine_Object_o **)(puVar14 + -0x68) = pUVar8;
    *(undefined4 *)(puVar14 + -0x7c) = in_R8D;
    unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(in_RCX & 0xffffffff);
    __this = (System_Nullable_float__Fields)((ulong)pUVar16 & 0xffffffff);
    unaff_R12 = (ulong)uVar19;
    *(undefined4 *)(puVar14 + -0x80) = uVar23;
    *(undefined8 *)(puVar14 + -0x78) = extraout_RDX;
    *(undefined8 *)(puVar14 + -0x70) = extraout_RDX;
    if (g_data_057a9c5d == '\0') {
      *(undefined8 *)(puVar14 + -0x88) = 0x3b360bf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b360cb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b360d7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b360e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b360ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b360fb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b36107;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b36113;
      il2cpp_runtime_helper_023445d0(&"AoTTG UI Surface Instance");
      *(undefined8 *)(puVar14 + -0x88) = 0x3b3611f;
      il2cpp_runtime_helper_023445d0(&"AOTTG_WORN");
      g_data_057a9c5d = '\x01';
    }
    unaff_R13 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar10 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar14 + -0x88) = 0x3b3613f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar14 + -0x88) = 0x3b36144;
    unaff_R15 = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar10)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar14 + -0x88) = 0x3b3615f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar14 + -0x88) = 0x3b3616d;
    bVar6 = UnityEngine_Object__op_Equality(unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    *(undefined8 *)(puVar14 + -0x88) = 0x3b36184;
    pUVar8 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    *(undefined8 *)(puVar14 + -0x88) = 0x3b36194;
    UnityEngine_Material___ctor_4dc9e70
              ((UnityEngine_Material_o *)pUVar8,(UnityEngine_Material_o *)unaff_R15,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Object_o *)0x0) {
      *(undefined8 *)(puVar14 + -0x88) = 0x3b361b1;
      UnityEngine_Object__set_name(pUVar8,"AoTTG UI Surface Instance",(MethodInfo *)0x0);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b361c0;
      UnityEngine_Object__set_hideFlags(pUVar8,0x34,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0x88) = 0x3b361d2;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x28);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b361ef;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pUVar8,iVar7,*(float *)(puVar14 + -0x80),(MethodInfo *)0x0);
      if ((char)uVar19 == '\0') {
        fVar26 = 0.0;
      }
      else {
        fVar26 = 1.0;
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x2c);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b36219;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar8,iVar7,fVar26,(MethodInfo *)0x0);
      cVar21 = (char)__this.hasValue;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36235;
        il2cpp_runtime_helper_02337ed0();
        if (cVar21 == '\0') goto label_03b3622b;
label_03b3623e:
        fVar26 = 1.0;
      }
      else {
        if (cVar21 != '\0') goto label_03b3623e;
label_03b3622b:
        fVar26 = 0.0;
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x38);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b3625a;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar8,iVar7,fVar26,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0x88) = 0x3b3626c;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x48);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b3628c;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar8,iVar7,1.0,(MethodInfo *)0x0);
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x4c);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b362ac;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar8,iVar7,1.0,(MethodInfo *)0x0);
      fVar26 = 1.0;
      if ((char)unaff_RBP == '\0') {
        fVar26 = 0.0;
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x50);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b362d4;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar8,iVar7,fVar26,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0x88) = 0x3b362e6;
        il2cpp_runtime_helper_02337ed0();
      }
      if (unaff_R15 != (UnityEngine_Object_o *)0x0) {
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x54);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36309;
        fVar26 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar7,(MethodInfo *)0x0);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36315;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,iVar7,fVar26,(MethodInfo *)0x0);
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x58);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b3632f;
        fVar26 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar7,(MethodInfo *)0x0);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b3633b;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,iVar7,fVar26,(MethodInfo *)0x0);
        if (puVar14[-0x7c] == '\0') {
          fVar26 = 0.0;
        }
        else {
          fVar26 = 1.0;
        }
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x5c);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36367;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,iVar7,fVar26,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar14 + -0x88) = 0x3b36379;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x60);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36394;
        UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar8,iVar7,0.0,(MethodInfo *)0x0);
        if (cVar21 == '\0') {
          *(undefined8 *)(puVar14 + -0x88) = 0x3b363c6;
          UnityEngine_Material__DisableKeyword
                    ((UnityEngine_Material_o *)pUVar8,(System_String_o *)"AOTTG_WORN",(MethodInfo *)0x0);
          __this = *(System_Nullable_float__Fields *)(puVar14 + -0x78);
          iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        else {
          *(undefined8 *)(puVar14 + -0x88) = 0x3b363ad;
          UnityEngine_Material__EnableKeyword
                    ((UnityEngine_Material_o *)pUVar8,(System_String_o *)"AOTTG_WORN",(MethodInfo *)0x0);
          __this = *(System_Nullable_float__Fields *)(puVar14 + -0x78);
          iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        if (iVar20 == 0) {
          *(undefined8 *)(puVar14 + -0x88) = 0x3b363dd;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x30);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b363f7;
        fVar26 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar7,(MethodInfo *)0x0);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36403;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,iVar7,fVar26,(MethodInfo *)0x0);
        uVar19 = *(uint *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                          0x34);
        unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar19;
        *(undefined8 *)(puVar14 + -0x88) = 0x3b3641d;
        fVar26 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,uVar19,(MethodInfo *)0x0);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36429;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,uVar19,fVar26,(MethodInfo *)0x0);
        if ((char)__this.hasValue != '\0') {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar14 + -0x88) = 0x3b36440;
            il2cpp_runtime_helper_02337ed0();
          }
          iVar7 = *(int32_t *)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x44);
          unaff_R15 = (UnityEngine_Object_o *)&MethodInfo_Single_get_Value;
          __this = (System_Nullable_float__Fields)((long)puVar14 + -0x70);
          *(undefined8 *)(puVar14 + -0x88) = 0x3b36465;
          fVar26 = System_Nullable_float___get_Value((System_Nullable_float__o)__this,MethodInfo_Single_get_Value);
          *(undefined8 *)(puVar14 + -0x88) = 0x3b36471;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pUVar8,iVar7,fVar26,(MethodInfo *)0x0);
          unaff_RBP = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                       (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x78);
          *(undefined8 *)(puVar14 + -0x88) = 0x3b3648b;
          fVar26 = System_Nullable_float___get_Value((System_Nullable_float__o)__this,MethodInfo_Single_get_Value);
          if (unaff_RBP == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b36535;
          *(undefined8 *)(puVar14 + -0x88) = 0x3b364a9;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    (unaff_RBP,(Il2CppObject *)pUVar8,fVar26,MethodInfo_Void_set_Item);
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar14 + -0x88) = 0x3b364bb;
          il2cpp_runtime_helper_02337ed0();
        }
        uVar5 = MethodInfo_Void_Add;
        pSVar12 = *(System_Collections_Generic_List_object__o **)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
        if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(pSVar12->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar12->fields)._items;
          in_RCX = uVar5;
          if (pSVar4 != (System_Object_array *)0x0) {
            uVar19 = (pSVar12->fields)._size;
            if (uVar19 < (uint)pSVar4->max_length) {
              (pSVar12->fields)._size = uVar19 + 1;
              pSVar4->m_Items[(int)uVar19] = (Il2CppObject *)pUVar8;
              *(undefined8 *)(puVar14 + -0x88) = 0x3b3650a;
              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar19,pUVar8);
            }
            else {
              method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(uVar5 + 0x20) + 0xc0) + 0x70);
              *(undefined8 *)(puVar14 + -0x88) = 0x3b36523;
              System_Collections_Generic_List_object___AddWithResize(pSVar12,(Il2CppObject *)pUVar8,method_00)
              ;
            }
            return;
          }
        }
      }
    }
label_03b36535:
    *(undefined8 *)(puVar14 + -0x88) = 0x3b3653a;
    uVar9 = il2cpp_runtime_helper_022b2c90();
    *(System_Nullable_float__Fields *)(puVar14 + -0x88) = __this;
    *(UnityEngine_Object_o **)(puVar14 + -0x90) = pUVar8;
    *(undefined8 *)(puVar14 + -0x98) = uVar9;
    *(undefined4 *)(puVar14 + -0x94) = extraout_XMM0_Da_00;
    if (g_data_057a9c5e == '\0') {
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b3655f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b3656b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5e = '\x01';
    }
    puVar22 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar10 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b3658a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar14 + -0xa0) = 0x3b3658f;
    pMVar10 = (MethodInfo *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar10);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b365aa;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = (MethodInfo *)0x0;
    *(undefined8 *)(puVar14 + -0xa0) = 0x3b365b6;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar9 = CONCAT44(extraout_var,bVar6);
    if ((char)bVar6 == '\0') {
      fVar24 = 4.0;
      iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
    else {
      pMVar18 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0xa0) = 0x3b365cb;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b365d0;
      pUVar11 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar18);
      if (pUVar11 == (UnityEngine_Material_o *)0x0) break;
      in_RCX = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
      iVar7 = *(int32_t *)(in_RCX + 0x34);
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b365ec;
      fVar24 = UnityEngine_Material__GetFloat_4dcdb00(pUVar11,iVar7,(MethodInfo *)0x0);
      iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
      uVar9 = extraout_RAX_00;
    }
    if (iVar20 == 0) {
      *(float *)(puVar14 + -0x98) = fVar24;
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b3661b;
      uVar9 = il2cpp_runtime_helper_02337ed0();
      fVar24 = *(float *)(puVar14 + -0x98);
    }
    uVar23 = *(undefined4 *)(puVar14 + -0x94);
    unaff_RBX = *(undefined8 *)(puVar14 + -0x90);
    unaff_R14 = *(undefined8 **)(puVar14 + -0x88);
    puVar14 = puVar14 + -0x80;
  } while( true );
  *(undefined8 *)(puVar14 + -0xa0) = 0x3b36637;
  uVar23 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar14 + -0xa0) = unaff_RBP;
  *(UnityEngine_Object_o **)(puVar14 + -0xa8) = unaff_R15;
  *(MethodInfo ***)(puVar14 + -0xb0) = &TypeInfo_GisketchSurfaceMaterial;
  *(MethodInfo ***)(puVar14 + -0xb8) = &TypeInfo_GisketchSurfaceMaterial;
  *(ulong *)(puVar14 + -0xc0) = unaff_R12;
  *(MethodInfo **)(puVar14 + -200) = pMVar10;
  *(float *)(puVar14 + -0xdc) = fVar25;
  *(float *)(puVar14 + -0xd4) = fVar24;
  *(undefined4 *)(puVar14 + -0xd8) = uVar23;
  if (g_data_057a9c60 == '\0') {
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b36675;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b36681;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b3668d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b36699;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b366a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b366b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b366bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c60 = '\x01';
  }
  *(undefined4 *)(puVar14 + -0xd0) = 0;
  pMVar18 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b366e4;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar14 + -0xe8) = 0x3b366e9;
  pUVar11 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar18);
  *(undefined8 *)(puVar14 + -0xe8) = 0x3b36703;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
            (pUVar11,*(float *)(puVar14 + -0xd8),*(float *)(puVar14 + -0xd4),*(float *)(puVar14 + -0xdc),
             pMVar17);
  lVar3 = *(long *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
  if (lVar3 == 0) {
label_03b368f4:
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b368f9;
    uVar9 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 **)(puVar14 + -0xe8) = puVar22;
    *(MethodInfo **)(puVar14 + -0xf0) = pMVar10;
    *(undefined8 *)(puVar14 + -0xf8) = uVar9;
    if (g_data_057a9c64 == '\0') {
      *(undefined8 *)(puVar14 + -0x100) = 0x3b3691d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36929;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Material_float);
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36935;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36941;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      *(undefined8 *)(puVar14 + -0x100) = 0x3b3694d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36959;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakScale");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36965;
      il2cpp_runtime_helper_023445d0(&"_GradientStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36971;
      il2cpp_runtime_helper_023445d0(&"_CoarseStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b3697d;
      il2cpp_runtime_helper_023445d0(&"_ChipStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36989;
      il2cpp_runtime_helper_023445d0(&"_BrushReveal");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36995;
      il2cpp_runtime_helper_023445d0(&"_LightFineScale");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369a1;
      il2cpp_runtime_helper_023445d0(&"_ReliefShadowSize");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369ad;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseScale");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369b9;
      il2cpp_runtime_helper_023445d0(&"_FineScale");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369c5;
      il2cpp_runtime_helper_023445d0(&"_HorizontalBlur");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369d1;
      il2cpp_runtime_helper_023445d0(&"_VerticalLightGradient");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369dd;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369e9;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369f5;
      il2cpp_runtime_helper_023445d0(&"_BrushRevealDirection");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a01;
      il2cpp_runtime_helper_023445d0(&"_CoarseScale");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a0d;
      il2cpp_runtime_helper_023445d0(&"_Relief");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a19;
      il2cpp_runtime_helper_023445d0(&"_FineStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a25;
      il2cpp_runtime_helper_023445d0(&"_WearStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a31;
      il2cpp_runtime_helper_023445d0(&"_LightGradientStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a3d;
      il2cpp_runtime_helper_023445d0(&"_LightFineStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a49;
      il2cpp_runtime_helper_023445d0(&"_BrushStreak");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a55;
      il2cpp_runtime_helper_023445d0(&"_Worn");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a61;
      il2cpp_runtime_helper_023445d0(&"_StainScale");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a6d;
      il2cpp_runtime_helper_023445d0(&"_ReliefGradient");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a79;
      il2cpp_runtime_helper_023445d0(&"_ReliefLightAngle");
      g_data_057a9c64 = '\x01';
    }
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36a91;
    iVar7 = UnityEngine_Shader__PropertyToID("_FineScale",(MethodInfo *)0x0);
    *(int32_t *)((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr = iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36ab5;
    iVar7 = UnityEngine_Shader__PropertyToID("_FineStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 4) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36ad3;
    iVar7 = UnityEngine_Shader__PropertyToID("_CoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 8) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36af1;
    iVar7 = UnityEngine_Shader__PropertyToID("_CoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0xc) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36b0f;
    iVar7 = UnityEngine_Shader__PropertyToID("_GradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x10) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36b2d;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightFineScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x14) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36b4b;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightFineStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x18) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36b69;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightCoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x1c) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36b87;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightCoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x20) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36ba5;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightGradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x24) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36bc3;
    iVar7 = UnityEngine_Shader__PropertyToID("_Relief",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x28) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36be1;
    iVar7 = UnityEngine_Shader__PropertyToID("_ReliefGradient",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x2c) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36bff;
    iVar7 = UnityEngine_Shader__PropertyToID("_ReliefLightAngle",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x30) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36c1d;
    iVar7 = UnityEngine_Shader__PropertyToID("_ReliefShadowSize",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x34) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36c3b;
    iVar7 = UnityEngine_Shader__PropertyToID("_Worn",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x38) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36c59;
    iVar7 = UnityEngine_Shader__PropertyToID("_WearStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x3c) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36c77;
    iVar7 = UnityEngine_Shader__PropertyToID("_ChipStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x40) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36c95;
    iVar7 = UnityEngine_Shader__PropertyToID("_StainScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x44) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36cb3;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushReveal",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x48) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36cd1;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushRevealDirection",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x4c) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36cef;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushStreak",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x50) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36d0d;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushStreakStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x54) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36d2b;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushStreakScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x58) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36d49;
    iVar7 = UnityEngine_Shader__PropertyToID("_VerticalLightGradient",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x5c) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36d67;
    iVar7 = UnityEngine_Shader__PropertyToID("_HorizontalBlur",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x60) =
         iVar7;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36d83;
    pSVar12 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36d98;
    System_Collections_Generic_List_object____ctor(pSVar12,MethodInfo_List_1_UnityEngine_Material);
    lVar3 = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
    *(System_Collections_Generic_List_object__o **)(lVar3 + 0x70) = pSVar12;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36db2;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x70,pSVar12);
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36dc1;
    pSVar13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Material_float);
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36dd6;
    System_Collections_Generic_Dictionary_object__float____ctor(pSVar13,MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
    lVar3 = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar3 + 0x78) = pSVar13;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x78,pSVar13);
    return;
  }
  iVar20 = *(int *)(lVar3 + 0x18);
  if (-1 < iVar20 + -1) {
    iVar20 = iVar20 + -2;
    puVar22 = &TypeInfo_Object;
    iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    while( true ) {
      if (iVar2 == 0) {
        *(undefined8 *)(puVar14 + -0xe8) = 0x3b36755;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = *(System_Collections_Generic_List_object__o **)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
      if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
      *(undefined8 *)(puVar14 + -0xe8) = 0x3b3677c;
      pMVar10 = (MethodInfo *)
                System_Collections_Generic_List_object___get_Item(pSVar12,iVar20 + 1,MethodInfo_Material_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar14 + -0xe8) = 0x3b36790;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar14 + -0xe8) = 0x3b3679c;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar14 + -0xe8) = 0x3b36841;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x78);
        if (pSVar13 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
        *(undefined8 *)(puVar14 + -0xe8) = 0x3b3686f;
        pMVar17 = pMVar10;
        bVar6 = System_Collections_Generic_Dictionary_object__float___TryGetValue
                          (pSVar13,(Il2CppObject *)pMVar10,(float *)(puVar14 + -0xd0),MethodInfo_Boolean_TryGetValue);
        if ((char)bVar6 == '\0') {
          fVar24 = *(float *)(puVar14 + -0xdc);
          iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        else {
          fVar24 = *(float *)(puVar14 + -0xd0);
          iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        if (iVar2 == 0) {
          *(float *)(puVar14 + -0xcc) = fVar24;
          *(undefined8 *)(puVar14 + -0xe8) = 0x3b368ad;
          il2cpp_runtime_helper_02337ed0();
          fVar24 = *(float *)(puVar14 + -0xcc);
        }
        *(undefined8 *)(puVar14 + -0xe8) = 0x3b368c7;
        Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
                  ((UnityEngine_Material_o *)pMVar10,*(float *)(puVar14 + -0xd8),*(float *)(puVar14 + -0xd4),
                   fVar24,pMVar17);
      }
      else {
        if (pMVar10 != (MethodInfo *)0x0) {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar14 + -0xe8) = 0x3b367ba;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x78
                     );
          if (pSVar13 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
          *(undefined8 *)(puVar14 + -0xe8) = 0x3b367e3;
          System_Collections_Generic_Dictionary_object__float___Remove
                    (pSVar13,(Il2CppObject *)pMVar10,MethodInfo_Boolean_Remove);
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar14 + -0xe8) = 0x3b367f4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = *(System_Collections_Generic_List_object__o **)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
        if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
        *(undefined8 *)(puVar14 + -0xe8) = 0x3b3681c;
        System_Collections_Generic_List_object___RemoveAt(pSVar12,iVar20 + 1,MethodInfo_Void_RemoveAt);
      }
      if (iVar20 < 0) break;
      iVar20 = iVar20 + -1;
      iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$Instance
// il2cpp: UnityEngine_Material_o* Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance (float relief, bool reliefGradient, bool worn, System_Nullable_float__o stainScaleOverride, bool brushStreak, bool verticalLightGradient, const MethodInfo* method);
// 0x3b36080

UnityEngine_Material_o *
Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
          (float relief,bool_conflict reliefGradient,bool_conflict worn,
          System_Nullable_float__o stainScaleOverride,bool_conflict brushStreak,
          bool_conflict verticalLightGradient,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Object_array *pSVar3;
  MethodInfo_362C220 *method_00;
  undefined8 uVar4;
  undefined8 uVar5;
  Il2CppMethodPointer pIVar6;
  uint uVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  UnityEngine_Material_o *extraout_RAX;
  UnityEngine_Material_o *extraout_RAX_00;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_Object_o *__this;
  undefined8 uVar11;
  MethodInfo *pMVar12;
  undefined4 extraout_var;
  UnityEngine_Material_o *pUVar13;
  undefined8 extraout_RAX_01;
  UnityEngine_Material_o *extraout_RAX_02;
  UnityEngine_Material_o *extraout_RAX_03;
  System_Collections_Generic_List_object__o *pSVar14;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar15;
  Il2CppMethodPointer pIVar16;
  System_Nullable_float__Fields extraout_RDX;
  UnityEngine_Object_o *unaff_RBX;
  uint uVar17;
  System_Collections_Generic_Dictionary_TKey__TValue__o *unaff_RBP;
  MethodInfo *pMVar18;
  MethodInfo *pMVar19;
  int iVar20;
  ulong unaff_R12;
  undefined8 *unaff_R13;
  char cVar21;
  undefined8 *unaff_R14;
  System_Nullable_float__Fields __this_00;
  undefined8 *puVar22;
  undefined8 *unaff_R15;
  float fVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar24;
  float in_XMM1_Da;
  undefined4 in_XMM2_Da;
  
  pMVar12 = (MethodInfo *)(ulong)(uint)reliefGradient;
  pUVar10 = (UnityEngine_Object_o *)(ulong)(uint)worn;
  pIVar16 = (Il2CppMethodPointer)(ulong)(uint)brushStreak;
  do {
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(ulong *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(bool_conflict *)((long)register0x00000020 + -0x44) = verticalLightGradient;
    unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)((ulong)pIVar16 & 0xffffffff);
    __this_00 = (System_Nullable_float__Fields)((ulong)pUVar10 & 0xffffffff);
    unaff_R12 = (ulong)pMVar12 & 0xffffffff;
    *(float *)((long)register0x00000020 + -0x48) = relief;
    *(System_Nullable_float__Fields *)((long)register0x00000020 + -0x40) = stainScaleOverride.fields;
    *(System_Nullable_float__Fields *)((long)register0x00000020 + -0x38) = stainScaleOverride.fields;
    if (g_data_057a9c5d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b360bf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b360cb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b360d7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b360e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b360ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b360fb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36107;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36113;
      il2cpp_runtime_helper_023445d0(&"AoTTG UI Surface Instance");
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3611f;
      il2cpp_runtime_helper_023445d0(&"AOTTG_WORN");
      g_data_057a9c5d = '\x01';
    }
    unaff_R13 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar12 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3613f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36144;
    pUVar10 = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar12);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3615f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3616d;
    bVar8 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return (UnityEngine_Material_o *)0x0;
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36184;
    __this = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36194;
    UnityEngine_Material___ctor_4dc9e70
              ((UnityEngine_Material_o *)__this,(UnityEngine_Material_o *)pUVar10,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Object_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b361b1;
      UnityEngine_Object__set_name(__this,"AoTTG UI Surface Instance",(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b361c0;
      UnityEngine_Object__set_hideFlags(__this,0x34,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b361d2;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x28);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b361ef;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)__this,iVar9,*(float *)((long)register0x00000020 + -0x48),
                 (MethodInfo *)0x0);
      if ((char)unaff_R12 == '\0') {
        fVar23 = 0.0;
      }
      else {
        fVar23 = 1.0;
      }
      iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x2c);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36219;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)__this,iVar9,fVar23,(MethodInfo *)0x0);
      cVar21 = (char)__this_00.hasValue;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36235;
        il2cpp_runtime_helper_02337ed0();
        if (cVar21 == '\0') goto label_03b3622b;
label_03b3623e:
        fVar23 = 1.0;
      }
      else {
        if (cVar21 != '\0') goto label_03b3623e;
label_03b3622b:
        fVar23 = 0.0;
      }
      iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x38);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3625a;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)__this,iVar9,fVar23,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3626c;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x48);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3628c;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)__this,iVar9,1.0,(MethodInfo *)0x0);
      iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x4c);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b362ac;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)__this,iVar9,1.0,(MethodInfo *)0x0);
      fVar23 = 1.0;
      if ((char)unaff_RBP == '\0') {
        fVar23 = 0.0;
      }
      iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x50);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b362d4;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)__this,iVar9,fVar23,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b362e6;
        il2cpp_runtime_helper_02337ed0();
      }
      if (pUVar10 != (UnityEngine_Object_o *)0x0) {
        iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x54);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36309;
        fVar23 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)pUVar10,iVar9,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36315;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)__this,iVar9,fVar23,(MethodInfo *)0x0);
        iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x58);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3632f;
        fVar23 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)pUVar10,iVar9,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3633b;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)__this,iVar9,fVar23,(MethodInfo *)0x0);
        if (*(char *)((long)register0x00000020 + -0x44) == '\0') {
          fVar23 = 0.0;
        }
        else {
          fVar23 = 1.0;
        }
        iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x5c);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36367;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)__this,iVar9,fVar23,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36379;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x60);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36394;
        UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)__this,iVar9,0.0,(MethodInfo *)0x0);
        if (cVar21 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b363c6;
          UnityEngine_Material__DisableKeyword
                    ((UnityEngine_Material_o *)__this,"AOTTG_WORN",(MethodInfo *)0x0);
          __this_00 = *(System_Nullable_float__Fields *)((long)register0x00000020 + -0x40);
          iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b363ad;
          UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)__this,"AOTTG_WORN",(MethodInfo *)0x0)
          ;
          __this_00 = *(System_Nullable_float__Fields *)((long)register0x00000020 + -0x40);
          iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        if (iVar20 == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b363dd;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b363f7;
        fVar23 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)pUVar10,iVar9,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36403;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)__this,iVar9,fVar23,(MethodInfo *)0x0);
        uVar7 = *(uint *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34);
        unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar7;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3641d;
        fVar23 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)pUVar10,uVar7,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36429;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)__this,uVar7,fVar23,(MethodInfo *)0x0);
        if ((char)__this_00.hasValue != '\0') {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36440;
            il2cpp_runtime_helper_02337ed0();
          }
          iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x44);
          pUVar10 = (UnityEngine_Object_o *)&MethodInfo_Single_get_Value;
          __this_00 = (System_Nullable_float__Fields)((long)register0x00000020 + -0x38);
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36465;
          fVar23 = System_Nullable_float___get_Value((System_Nullable_float__o)__this_00,MethodInfo_Single_get_Value);
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36471;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)__this,iVar9,fVar23,(MethodInfo *)0x0);
          unaff_RBP = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                       (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3648b;
          fVar23 = System_Nullable_float___get_Value((System_Nullable_float__o)__this_00,MethodInfo_Single_get_Value);
          if (unaff_RBP == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b36535;
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b364a9;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    (unaff_RBP,(Il2CppObject *)__this,fVar23,MethodInfo_Void_set_Item);
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b364bb;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar6 = MethodInfo_Void_Add;
        pSVar14 = *(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70)
        ;
        if (pSVar14 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(pSVar14->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar14->fields)._items;
          pIVar16 = pIVar6;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar7 = (pSVar14->fields)._size;
            if (uVar7 < (uint)pSVar3->max_length) {
              (pSVar14->fields)._size = uVar7 + 1;
              pSVar3->m_Items[(int)uVar7] = (Il2CppObject *)__this;
              *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3650a;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar7,__this);
            }
            else {
              method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(pIVar6 + 0x20) + 0xc0) + 0x70);
              *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b36523;
              System_Collections_Generic_List_object___AddWithResize(pSVar14,(Il2CppObject *)__this,method_00)
              ;
            }
            return (UnityEngine_Material_o *)__this;
          }
        }
      }
    }
label_03b36535:
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b3653a;
    uVar11 = il2cpp_runtime_helper_022b2c90();
    *(System_Nullable_float__Fields *)((long)register0x00000020 + -0x50) = __this_00;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x58) = __this;
    *(undefined8 *)((long)register0x00000020 + -0x60) = uVar11;
    *(undefined4 *)((long)register0x00000020 + -0x5c) = extraout_XMM0_Da;
    if (g_data_057a9c5e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b3655f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b3656b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5e = '\x01';
    }
    puVar22 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar12 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b3658a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b3658f;
    pMVar12 = (MethodInfo *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar12);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b365aa;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b365b6;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pMVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar11 = CONCAT44(extraout_var,bVar8);
    if ((char)bVar8 == '\0') {
      in_XMM1_Da = 4.0;
      iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
    else {
      pMVar19 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b365cb;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b365d0;
      pUVar13 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar19);
      if (pUVar13 == (UnityEngine_Material_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b36637;
        uVar24 = il2cpp_runtime_helper_022b2c90();
        *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)register0x00000020 + -0x68) =
             unaff_RBP;
        *(UnityEngine_Object_o **)((long)register0x00000020 + -0x70) = pUVar10;
        *(MethodInfo ***)((long)register0x00000020 + -0x78) = &TypeInfo_GisketchSurfaceMaterial;
        *(MethodInfo ***)((long)register0x00000020 + -0x80) = &TypeInfo_GisketchSurfaceMaterial;
        *(ulong *)((long)register0x00000020 + -0x88) = unaff_R12;
        *(MethodInfo **)((long)register0x00000020 + -0x90) = pMVar12;
        *(undefined4 *)((long)register0x00000020 + -0xa4) = in_XMM2_Da;
        *(float *)((long)register0x00000020 + -0x9c) = in_XMM1_Da;
        *(undefined4 *)((long)register0x00000020 + -0xa0) = uVar24;
        if (g_data_057a9c60 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b36675;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b36681;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b3668d;
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b36699;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b366a5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b366b1;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b366bd;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9c60 = '\x01';
        }
        *(undefined4 *)((long)register0x00000020 + -0x98) = 0;
        pMVar19 = TypeInfo_GisketchSurfaceMaterial;
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b366e4;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b366e9;
        pUVar13 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar19);
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b36703;
        Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
                  (pUVar13,*(float *)((long)register0x00000020 + -0xa0),
                   *(float *)((long)register0x00000020 + -0x9c),*(float *)((long)register0x00000020 + -0xa4),
                   pMVar18);
        if (*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) == 0) goto label_03b368f4;
        iVar20 = *(int *)(*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) + 0x18);
        uVar7 = iVar20 - 1;
        if ((int)uVar7 < 0) {
          return (UnityEngine_Material_o *)(ulong)uVar7;
        }
        iVar20 = iVar20 + -2;
        puVar22 = &TypeInfo_Object;
        iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        break;
      }
      pIVar16 = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
      iVar9 = *(int32_t *)(pIVar16 + 0x34);
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b365ec;
      in_XMM1_Da = UnityEngine_Material__GetFloat_4dcdb00(pUVar13,iVar9,(MethodInfo *)0x0);
      iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
      uVar11 = extraout_RAX_01;
    }
    if (iVar20 == 0) {
      *(float *)((long)register0x00000020 + -0x60) = in_XMM1_Da;
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b3661b;
      uVar11 = il2cpp_runtime_helper_02337ed0();
      in_XMM1_Da = *(float *)((long)register0x00000020 + -0x60);
    }
    uVar4 = *(undefined8 *)((long)register0x00000020 + -0x58);
    uVar5 = *(undefined8 *)((long)register0x00000020 + -0x50);
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)register0x00000020 + -0x50) = unaff_RBP;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x58) = pUVar10;
    *(undefined8 *)((long)register0x00000020 + -0x60) = uVar5;
    *(MethodInfo ***)((long)register0x00000020 + -0x68) = &TypeInfo_GisketchSurfaceMaterial;
    *(ulong *)((long)register0x00000020 + -0x70) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x78) = uVar4;
    *(undefined8 *)((long)register0x00000020 + -0x80) = uVar11;
    *(float *)((long)register0x00000020 + -0x7c) = in_XMM1_Da;
    *(undefined4 *)((long)register0x00000020 + -0x80) = *(undefined4 *)((long)register0x00000020 + -0x5c);
    if (g_data_057a9c5f == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35ddb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35de7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35df3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35dff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35e0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35e17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5f = '\x01';
    }
    unaff_R14 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar12 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35e36;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35e3b;
    unaff_RBX = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar12)
    ;
    unaff_R15 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35e56;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar10 = (UnityEngine_Object_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35e62;
    bVar8 = UnityEngine_Object__op_Inequality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
label_03b35eb9:
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35eca;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar12 = TypeInfo_GisketchSurfaceMaterial;
      if (*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) != 0) {
        iVar20 = *(int *)(*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) + 0x18);
        uVar7 = iVar20 - 1;
        if ((int)uVar7 < 0) {
          return (UnityEngine_Material_o *)(ulong)uVar7;
        }
        uVar7 = iVar20 - 2;
        unaff_R13 = &MethodInfo_Material_get_Item;
        iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        while( true ) {
          unaff_R12 = (ulong)uVar7;
          if (iVar20 == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35f15;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = *(System_Collections_Generic_List_object__o **)
                     (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
          pMVar12 = (MethodInfo *)0x0;
          if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) break;
          uVar17 = uVar7 + 1;
          unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar17;
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35f3c;
          unaff_RBX = (UnityEngine_Object_o *)
                      System_Collections_Generic_List_object___get_Item(pSVar14,uVar17,MethodInfo_Material_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35f50;
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar10 = (UnityEngine_Object_o *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35f5c;
          bVar8 = UnityEngine_Object__op_Equality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            pMVar12 = TypeInfo_GisketchSurfaceMaterial;
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36001;
              il2cpp_runtime_helper_02337ed0();
            }
            if (unaff_RBX == (UnityEngine_Object_o *)0x0) break;
            iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30);
            *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36022;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)unaff_RBX,iVar9,*(float *)((long)register0x00000020 + -0x80),
                       (MethodInfo *)0x0);
            uVar17 = *(uint *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34);
            pUVar10 = (UnityEngine_Object_o *)(ulong)uVar17;
            *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3603f;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)unaff_RBX,uVar17,*(float *)((long)register0x00000020 + -0x7c)
                       ,(MethodInfo *)0x0);
            pUVar13 = extraout_RAX_00;
          }
          else {
            if (unaff_RBX != (UnityEngine_Object_o *)0x0) {
              if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35f7a;
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar15 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                         (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
              pMVar12 = (MethodInfo *)0x0;
              if (pSVar15 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
              *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35fa3;
              pUVar10 = unaff_RBX;
              System_Collections_Generic_Dictionary_object__float___Remove
                        (pSVar15,(Il2CppObject *)unaff_RBX,MethodInfo_Boolean_Remove);
            }
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35fb4;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar14 = *(System_Collections_Generic_List_object__o **)
                       (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
            pMVar12 = (MethodInfo *)0x0;
            if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) break;
            pUVar10 = (UnityEngine_Object_o *)(ulong)uVar17;
            *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35fdc;
            System_Collections_Generic_List_object___RemoveAt(pSVar14,uVar17,MethodInfo_Void_RemoveAt);
            pUVar13 = extraout_RAX;
          }
          if ((int)uVar7 < 0) {
            return pUVar13;
          }
          uVar7 = uVar7 - 1;
          iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
      }
    }
    else {
      pMVar12 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35e77;
        il2cpp_runtime_helper_02337ed0();
      }
      if (unaff_RBX != (UnityEngine_Object_o *)0x0) {
        iVar9 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35e9c;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)unaff_RBX,iVar9,*(float *)((long)register0x00000020 + -0x80),
                   (MethodInfo *)0x0);
        uVar7 = *(uint *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34);
        pUVar10 = (UnityEngine_Object_o *)(ulong)uVar7;
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b35eb9;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)unaff_RBX,uVar7,*(float *)((long)register0x00000020 + -0x7c),
                   (MethodInfo *)0x0);
        goto label_03b35eb9;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36071;
    relief = (float)il2cpp_runtime_helper_022b2c90();
    stainScaleOverride.fields = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x80);
  } while( true );
joined_r0x03b36743:
  if (iVar2 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b36755;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = *(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
  if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) {
label_03b368f4:
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b368f9;
    uVar11 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 **)((long)register0x00000020 + -0xb0) = puVar22;
    *(MethodInfo **)((long)register0x00000020 + -0xb8) = pMVar12;
    *(undefined8 *)((long)register0x00000020 + -0xc0) = uVar11;
    if (g_data_057a9c64 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b3691d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36929;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Material_float);
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36935;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36941;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b3694d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36959;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakScale");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36965;
      il2cpp_runtime_helper_023445d0(&"_GradientStrength");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36971;
      il2cpp_runtime_helper_023445d0(&"_CoarseStrength");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b3697d;
      il2cpp_runtime_helper_023445d0(&"_ChipStrength");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36989;
      il2cpp_runtime_helper_023445d0(&"_BrushReveal");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36995;
      il2cpp_runtime_helper_023445d0(&"_LightFineScale");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b369a1;
      il2cpp_runtime_helper_023445d0(&"_ReliefShadowSize");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b369ad;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseScale");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b369b9;
      il2cpp_runtime_helper_023445d0(&"_FineScale");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b369c5;
      il2cpp_runtime_helper_023445d0(&"_HorizontalBlur");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b369d1;
      il2cpp_runtime_helper_023445d0(&"_VerticalLightGradient");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b369dd;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakStrength");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b369e9;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseStrength");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b369f5;
      il2cpp_runtime_helper_023445d0(&"_BrushRevealDirection");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36a01;
      il2cpp_runtime_helper_023445d0(&"_CoarseScale");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36a0d;
      il2cpp_runtime_helper_023445d0(&"_Relief");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36a19;
      il2cpp_runtime_helper_023445d0(&"_FineStrength");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36a25;
      il2cpp_runtime_helper_023445d0(&"_WearStrength");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36a31;
      il2cpp_runtime_helper_023445d0(&"_LightGradientStrength");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36a3d;
      il2cpp_runtime_helper_023445d0(&"_LightFineStrength");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36a49;
      il2cpp_runtime_helper_023445d0(&"_BrushStreak");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36a55;
      il2cpp_runtime_helper_023445d0(&"_Worn");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36a61;
      il2cpp_runtime_helper_023445d0(&"_StainScale");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36a6d;
      il2cpp_runtime_helper_023445d0(&"_ReliefGradient");
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36a79;
      il2cpp_runtime_helper_023445d0(&"_ReliefLightAngle");
      g_data_057a9c64 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36a91;
    iVar9 = UnityEngine_Shader__PropertyToID("_FineScale",(MethodInfo *)0x0);
    *(int32_t *)TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36ab5;
    iVar9 = UnityEngine_Shader__PropertyToID("_FineStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 4) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36ad3;
    iVar9 = UnityEngine_Shader__PropertyToID("_CoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 8) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36af1;
    iVar9 = UnityEngine_Shader__PropertyToID("_CoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0xc) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36b0f;
    iVar9 = UnityEngine_Shader__PropertyToID("_GradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x10) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36b2d;
    iVar9 = UnityEngine_Shader__PropertyToID("_LightFineScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x14) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36b4b;
    iVar9 = UnityEngine_Shader__PropertyToID("_LightFineStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x18) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36b69;
    iVar9 = UnityEngine_Shader__PropertyToID("_LightCoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x1c) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36b87;
    iVar9 = UnityEngine_Shader__PropertyToID("_LightCoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x20) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36ba5;
    iVar9 = UnityEngine_Shader__PropertyToID("_LightGradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x24) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36bc3;
    iVar9 = UnityEngine_Shader__PropertyToID("_Relief",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x28) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36be1;
    iVar9 = UnityEngine_Shader__PropertyToID("_ReliefGradient",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x2c) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36bff;
    iVar9 = UnityEngine_Shader__PropertyToID("_ReliefLightAngle",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36c1d;
    iVar9 = UnityEngine_Shader__PropertyToID("_ReliefShadowSize",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36c3b;
    iVar9 = UnityEngine_Shader__PropertyToID("_Worn",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x38) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36c59;
    iVar9 = UnityEngine_Shader__PropertyToID("_WearStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x3c) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36c77;
    iVar9 = UnityEngine_Shader__PropertyToID("_ChipStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x40) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36c95;
    iVar9 = UnityEngine_Shader__PropertyToID("_StainScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x44) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36cb3;
    iVar9 = UnityEngine_Shader__PropertyToID("_BrushReveal",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x48) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36cd1;
    iVar9 = UnityEngine_Shader__PropertyToID("_BrushRevealDirection",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x4c) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36cef;
    iVar9 = UnityEngine_Shader__PropertyToID("_BrushStreak",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x50) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36d0d;
    iVar9 = UnityEngine_Shader__PropertyToID("_BrushStreakStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x54) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36d2b;
    iVar9 = UnityEngine_Shader__PropertyToID("_BrushStreakScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x58) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36d49;
    iVar9 = UnityEngine_Shader__PropertyToID("_VerticalLightGradient",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x5c) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36d67;
    iVar9 = UnityEngine_Shader__PropertyToID("_HorizontalBlur",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x60) = iVar9;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36d83;
    pSVar14 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36d98;
    System_Collections_Generic_List_object____ctor(pSVar14,MethodInfo_List_1_UnityEngine_Material);
    pIVar16 = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
    *(System_Collections_Generic_List_object__o **)(pIVar16 + 0x70) = pSVar14;
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36db2;
    il2cpp_runtime_helper_022b4080(pIVar16 + 0x70,pSVar14);
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36dc1;
    pSVar15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Material_float);
    *(undefined8 *)((long)register0x00000020 + -200) = 0x3b36dd6;
    System_Collections_Generic_Dictionary_object__float____ctor(pSVar15,MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
    pIVar16 = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(pIVar16 + 0x78) = pSVar15;
    pUVar13 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b4080(pIVar16 + 0x78,pSVar15);
    return pUVar13;
  }
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b3677c;
  pMVar12 = (MethodInfo *)System_Collections_Generic_List_object___get_Item(pSVar14,iVar20 + 1,MethodInfo_Material_get_Item);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b36790;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b3679c;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pMVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b36841;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
               (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
    if (pSVar15 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b3686f;
    pMVar18 = pMVar12;
    bVar8 = System_Collections_Generic_Dictionary_object__float___TryGetValue
                      (pSVar15,(Il2CppObject *)pMVar12,(float *)((long)register0x00000020 + -0x98),
                       MethodInfo_Boolean_TryGetValue);
    if ((char)bVar8 == '\0') {
      fVar23 = *(float *)((long)register0x00000020 + -0xa4);
      iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
    else {
      fVar23 = *(float *)((long)register0x00000020 + -0x98);
      iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
    if (iVar2 == 0) {
      *(float *)((long)register0x00000020 + -0x94) = fVar23;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b368ad;
      il2cpp_runtime_helper_02337ed0();
      fVar23 = *(float *)((long)register0x00000020 + -0x94);
    }
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b368c7;
    Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
              ((UnityEngine_Material_o *)pMVar12,*(float *)((long)register0x00000020 + -0xa0),
               *(float *)((long)register0x00000020 + -0x9c),fVar23,pMVar18);
    pUVar13 = extraout_RAX_03;
  }
  else {
    if (pMVar12 != (MethodInfo *)0x0) {
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b367ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                 (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
      if (pSVar15 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b367e3;
      System_Collections_Generic_Dictionary_object__float___Remove
                (pSVar15,(Il2CppObject *)pMVar12,MethodInfo_Boolean_Remove);
    }
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b367f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar14 = *(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
    if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b3681c;
    System_Collections_Generic_List_object___RemoveAt(pSVar14,iVar20 + 1,MethodInfo_Void_RemoveAt);
    pUVar13 = extraout_RAX_02;
  }
  if (iVar20 < 0) {
    return pUVar13;
  }
  iVar20 = iVar20 + -1;
  iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
  goto joined_r0x03b36743;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyReliefLightAngle
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefLightAngle (float angle, const MethodInfo* method);
// 0x3b36540

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefLightAngle(float angle,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Object_array *pSVar3;
  MethodInfo_362C220 *method_00;
  Il2CppMethodPointer pIVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  UnityEngine_Object_o *x;
  undefined8 in_RAX;
  MethodInfo *pMVar9;
  undefined4 extraout_var;
  UnityEngine_Material_o *pUVar10;
  undefined8 extraout_RAX;
  undefined8 uVar11;
  System_Collections_Generic_List_object__o *pSVar12;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar13;
  Il2CppMethodPointer in_RCX;
  undefined8 extraout_RDX;
  UnityEngine_Object_o *unaff_RBX;
  uint uVar14;
  System_Collections_Generic_Dictionary_TKey__TValue__o *unaff_RBP;
  UnityEngine_Object_o *pUVar15;
  MethodInfo *pMVar16;
  MethodInfo *pMVar17;
  undefined4 in_R8D;
  uint uVar18;
  int iVar19;
  ulong unaff_R12;
  undefined8 *unaff_R13;
  char cVar20;
  System_Nullable_float__Fields unaff_R14;
  undefined8 *puVar21;
  UnityEngine_Object_o *unaff_R15;
  undefined4 uVar22;
  float fVar23;
  float extraout_XMM0_Da;
  float in_XMM1_Da;
  undefined4 in_XMM2_Da;
  
  do {
    *(System_Nullable_float__Fields *)((long)register0x00000020 + -8) = unaff_R14;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    *(float *)((long)register0x00000020 + -0x14) = angle;
    if (g_data_057a9c5e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b3655f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b3656b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5e = '\x01';
    }
    puVar21 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar9 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b3658a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b3658f;
    pMVar9 = (MethodInfo *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar9);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b365aa;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar16 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b365b6;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pMVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar11 = CONCAT44(extraout_var,bVar7);
    if ((char)bVar7 == '\0') {
      in_XMM1_Da = 4.0;
      iVar19 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
    else {
      pMVar17 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b365cb;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b365d0;
      pUVar10 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar17);
      if (pUVar10 == (UnityEngine_Material_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b36637;
        uVar22 = il2cpp_runtime_helper_022b2c90();
        *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)register0x00000020 + -0x20) =
             unaff_RBP;
        *(UnityEngine_Object_o **)((long)register0x00000020 + -0x28) = unaff_R15;
        *(MethodInfo ***)((long)register0x00000020 + -0x30) = &TypeInfo_GisketchSurfaceMaterial;
        *(undefined8 **)((long)register0x00000020 + -0x38) = unaff_R13;
        *(ulong *)((long)register0x00000020 + -0x40) = unaff_R12;
        *(MethodInfo **)((long)register0x00000020 + -0x48) = pMVar9;
        *(undefined4 *)((long)register0x00000020 + -0x5c) = in_XMM2_Da;
        *(float *)((long)register0x00000020 + -0x54) = in_XMM1_Da;
        *(undefined4 *)((long)register0x00000020 + -0x58) = uVar22;
        if (g_data_057a9c60 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b36675;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b36681;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b3668d;
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b36699;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b366a5;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b366b1;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b366bd;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9c60 = '\x01';
        }
        *(undefined4 *)((long)register0x00000020 + -0x50) = 0;
        pMVar17 = TypeInfo_GisketchSurfaceMaterial;
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b366e4;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b366e9;
        pUVar10 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar17);
        *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b36703;
        Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
                  (pUVar10,*(float *)((long)register0x00000020 + -0x58),
                   *(float *)((long)register0x00000020 + -0x54),*(float *)((long)register0x00000020 + -0x5c),
                   pMVar16);
        if (*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) == 0) goto label_03b368f4;
        iVar19 = *(int *)(*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) + 0x18);
        if (iVar19 + -1 < 0) {
          return;
        }
        iVar19 = iVar19 + -2;
        puVar21 = &TypeInfo_Object;
        iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        break;
      }
      in_RCX = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
      iVar8 = *(int32_t *)(in_RCX + 0x34);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b365ec;
      in_XMM1_Da = UnityEngine_Material__GetFloat_4dcdb00(pUVar10,iVar8,(MethodInfo *)0x0);
      iVar19 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
      uVar11 = extraout_RAX;
    }
    if (iVar19 == 0) {
      *(float *)((long)register0x00000020 + -0x18) = in_XMM1_Da;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b3661b;
      uVar11 = il2cpp_runtime_helper_02337ed0();
      in_XMM1_Da = *(float *)((long)register0x00000020 + -0x18);
    }
    uVar5 = *(undefined8 *)((long)register0x00000020 + -0x10);
    uVar6 = *(undefined8 *)((long)register0x00000020 + -8);
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = uVar6;
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(ulong *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar5;
    *(undefined8 *)((long)register0x00000020 + -0x38) = uVar11;
    *(float *)((long)register0x00000020 + -0x34) = in_XMM1_Da;
    *(undefined4 *)((long)register0x00000020 + -0x38) = *(undefined4 *)((long)register0x00000020 + -0x14);
    if (g_data_057a9c5f == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35ddb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35de7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35df3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35dff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5f = '\x01';
    }
    pMVar9 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e36;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e3b;
    x = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar9);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e56;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar15 = (UnityEngine_Object_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e62;
    bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
label_03b35eb9:
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35eca;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar9 = TypeInfo_GisketchSurfaceMaterial;
      if (*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) != 0) {
        iVar19 = *(int *)(*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) + 0x18);
        if (iVar19 + -1 < 0) {
          return;
        }
        uVar18 = iVar19 - 2;
        unaff_R13 = &MethodInfo_Material_get_Item;
        iVar19 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        while( true ) {
          unaff_R12 = (ulong)uVar18;
          if (iVar19 == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35f15;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = *(System_Collections_Generic_List_object__o **)
                     (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
          pMVar9 = (MethodInfo *)0x0;
          if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) break;
          uVar14 = uVar18 + 1;
          unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar14;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35f3c;
          x = (UnityEngine_Object_o *)
              System_Collections_Generic_List_object___get_Item(pSVar12,uVar14,MethodInfo_Material_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35f50;
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar15 = (UnityEngine_Object_o *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35f5c;
          bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            pMVar9 = TypeInfo_GisketchSurfaceMaterial;
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b36001;
              il2cpp_runtime_helper_02337ed0();
            }
            if (x == (UnityEngine_Object_o *)0x0) break;
            iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30);
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b36022;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)x,iVar8,*(float *)((long)register0x00000020 + -0x38),
                       (MethodInfo *)0x0);
            uVar14 = *(uint *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34);
            pUVar15 = (UnityEngine_Object_o *)(ulong)uVar14;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b3603f;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)x,uVar14,*(float *)((long)register0x00000020 + -0x34),
                       (MethodInfo *)0x0);
          }
          else {
            if (x != (UnityEngine_Object_o *)0x0) {
              if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35f7a;
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar13 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                         (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
              pMVar9 = (MethodInfo *)0x0;
              if (pSVar13 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35fa3;
              pUVar15 = x;
              System_Collections_Generic_Dictionary_object__float___Remove
                        (pSVar13,(Il2CppObject *)x,MethodInfo_Boolean_Remove);
            }
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35fb4;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar12 = *(System_Collections_Generic_List_object__o **)
                       (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
            pMVar9 = (MethodInfo *)0x0;
            if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) break;
            pUVar15 = (UnityEngine_Object_o *)(ulong)uVar14;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35fdc;
            System_Collections_Generic_List_object___RemoveAt(pSVar12,uVar14,MethodInfo_Void_RemoveAt);
          }
          if ((int)uVar18 < 0) {
            return;
          }
          uVar18 = uVar18 - 1;
          iVar19 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
      }
    }
    else {
      pMVar9 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e77;
        il2cpp_runtime_helper_02337ed0();
      }
      if (x != (UnityEngine_Object_o *)0x0) {
        iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e9c;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)x,iVar8,*(float *)((long)register0x00000020 + -0x38),
                   (MethodInfo *)0x0);
        uVar18 = *(uint *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34);
        pUVar15 = (UnityEngine_Object_o *)(ulong)uVar18;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35eb9;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)x,uVar18,*(float *)((long)register0x00000020 + -0x34),
                   (MethodInfo *)0x0);
        goto label_03b35eb9;
      }
    }
    uVar18 = (uint)pMVar9;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b36071;
    uVar22 = il2cpp_runtime_helper_022b2c90();
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)register0x00000020 + -0x40) = unaff_RBP;
    *(long **)((long)register0x00000020 + -0x48) = &TypeInfo_Object;
    *(MethodInfo ***)((long)register0x00000020 + -0x50) = &TypeInfo_GisketchSurfaceMaterial;
    *(undefined8 **)((long)register0x00000020 + -0x58) = unaff_R13;
    *(ulong *)((long)register0x00000020 + -0x60) = unaff_R12;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x68) = x;
    *(undefined4 *)((long)register0x00000020 + -0x7c) = in_R8D;
    unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)((ulong)in_RCX & 0xffffffff);
    unaff_R14 = (System_Nullable_float__Fields)((ulong)pUVar15 & 0xffffffff);
    unaff_R12 = (ulong)uVar18;
    *(undefined4 *)((long)register0x00000020 + -0x80) = uVar22;
    *(undefined8 *)((long)register0x00000020 + -0x78) = extraout_RDX;
    *(undefined8 *)((long)register0x00000020 + -0x70) = extraout_RDX;
    if (g_data_057a9c5d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b360bf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b360cb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b360d7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b360e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b360ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b360fb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36107;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36113;
      il2cpp_runtime_helper_023445d0(&"AoTTG UI Surface Instance");
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3611f;
      il2cpp_runtime_helper_023445d0(&"AOTTG_WORN");
      g_data_057a9c5d = '\x01';
    }
    unaff_R13 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar9 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3613f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36144;
    unaff_R15 = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar9);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3615f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3616d;
    bVar7 = UnityEngine_Object__op_Equality(unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36184;
    unaff_RBX = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36194;
    UnityEngine_Material___ctor_4dc9e70
              ((UnityEngine_Material_o *)unaff_RBX,(UnityEngine_Material_o *)unaff_R15,(MethodInfo *)0x0);
    if (unaff_RBX != (UnityEngine_Object_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b361b1;
      UnityEngine_Object__set_name(unaff_RBX,"AoTTG UI Surface Instance",(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b361c0;
      UnityEngine_Object__set_hideFlags(unaff_RBX,0x34,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b361d2;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x28);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b361ef;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)unaff_RBX,iVar8,*(float *)((long)register0x00000020 + -0x80),
                 (MethodInfo *)0x0);
      if ((char)uVar18 == '\0') {
        fVar23 = 0.0;
      }
      else {
        fVar23 = 1.0;
      }
      iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x2c);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36219;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)unaff_RBX,iVar8,fVar23,(MethodInfo *)0x0);
      cVar20 = (char)unaff_R14.hasValue;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36235;
        il2cpp_runtime_helper_02337ed0();
        if (cVar20 == '\0') goto label_03b3622b;
label_03b3623e:
        fVar23 = 1.0;
      }
      else {
        if (cVar20 != '\0') goto label_03b3623e;
label_03b3622b:
        fVar23 = 0.0;
      }
      iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x38);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3625a;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)unaff_RBX,iVar8,fVar23,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3626c;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x48);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3628c;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)unaff_RBX,iVar8,1.0,(MethodInfo *)0x0);
      iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x4c);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b362ac;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)unaff_RBX,iVar8,1.0,(MethodInfo *)0x0);
      fVar23 = 1.0;
      if ((char)unaff_RBP == '\0') {
        fVar23 = 0.0;
      }
      iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x50);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b362d4;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)unaff_RBX,iVar8,fVar23,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b362e6;
        il2cpp_runtime_helper_02337ed0();
      }
      if (unaff_R15 != (UnityEngine_Object_o *)0x0) {
        iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x54);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36309;
        fVar23 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar8,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36315;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)unaff_RBX,iVar8,fVar23,(MethodInfo *)0x0);
        iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x58);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3632f;
        fVar23 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar8,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3633b;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)unaff_RBX,iVar8,fVar23,(MethodInfo *)0x0);
        if (*(char *)((long)register0x00000020 + -0x7c) == '\0') {
          fVar23 = 0.0;
        }
        else {
          fVar23 = 1.0;
        }
        iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x5c);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36367;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)unaff_RBX,iVar8,fVar23,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36379;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x60);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36394;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)unaff_RBX,iVar8,0.0,(MethodInfo *)0x0);
        if (cVar20 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b363c6;
          UnityEngine_Material__DisableKeyword
                    ((UnityEngine_Material_o *)unaff_RBX,"AOTTG_WORN",(MethodInfo *)0x0);
          unaff_R14 = *(System_Nullable_float__Fields *)((long)register0x00000020 + -0x78);
          iVar19 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b363ad;
          UnityEngine_Material__EnableKeyword
                    ((UnityEngine_Material_o *)unaff_RBX,"AOTTG_WORN",(MethodInfo *)0x0);
          unaff_R14 = *(System_Nullable_float__Fields *)((long)register0x00000020 + -0x78);
          iVar19 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        if (iVar19 == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b363dd;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b363f7;
        fVar23 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar8,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36403;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)unaff_RBX,iVar8,fVar23,(MethodInfo *)0x0);
        uVar18 = *(uint *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34);
        unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar18;
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3641d;
        fVar23 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,uVar18,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36429;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)unaff_RBX,uVar18,fVar23,(MethodInfo *)0x0);
        if ((char)unaff_R14.hasValue != '\0') {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36440;
            il2cpp_runtime_helper_02337ed0();
          }
          iVar8 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x44);
          unaff_R15 = (UnityEngine_Object_o *)&MethodInfo_Single_get_Value;
          unaff_R14 = (System_Nullable_float__Fields)((long)register0x00000020 + -0x70);
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36465;
          fVar23 = System_Nullable_float___get_Value((System_Nullable_float__o)unaff_R14,MethodInfo_Single_get_Value);
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36471;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)unaff_RBX,iVar8,fVar23,(MethodInfo *)0x0);
          unaff_RBP = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                       (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3648b;
          fVar23 = System_Nullable_float___get_Value((System_Nullable_float__o)unaff_R14,MethodInfo_Single_get_Value);
          if (unaff_RBP == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b36535;
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b364a9;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    (unaff_RBP,(Il2CppObject *)unaff_RBX,fVar23,MethodInfo_Void_set_Item);
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b364bb;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar4 = MethodInfo_Void_Add;
        pSVar12 = *(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70)
        ;
        if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(pSVar12->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar12->fields)._items;
          in_RCX = pIVar4;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar18 = (pSVar12->fields)._size;
            if (uVar18 < (uint)pSVar3->max_length) {
              (pSVar12->fields)._size = uVar18 + 1;
              pSVar3->m_Items[(int)uVar18] = (Il2CppObject *)unaff_RBX;
              *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3650a;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar18,unaff_RBX);
            }
            else {
              method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(pIVar4 + 0x20) + 0xc0) + 0x70);
              *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36523;
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar12,(Il2CppObject *)unaff_RBX,method_00);
            }
            return;
          }
        }
      }
    }
label_03b36535:
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3653a;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x80);
    angle = extraout_XMM0_Da;
  } while( true );
joined_r0x03b36743:
  if (iVar2 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b36755;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = *(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
  if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) {
label_03b368f4:
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b368f9;
    uVar11 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 **)((long)register0x00000020 + -0x68) = puVar21;
    *(MethodInfo **)((long)register0x00000020 + -0x70) = pMVar9;
    *(undefined8 *)((long)register0x00000020 + -0x78) = uVar11;
    if (g_data_057a9c64 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b3691d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36929;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Material_float);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36935;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36941;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b3694d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36959;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakScale");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36965;
      il2cpp_runtime_helper_023445d0(&"_GradientStrength");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36971;
      il2cpp_runtime_helper_023445d0(&"_CoarseStrength");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b3697d;
      il2cpp_runtime_helper_023445d0(&"_ChipStrength");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36989;
      il2cpp_runtime_helper_023445d0(&"_BrushReveal");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36995;
      il2cpp_runtime_helper_023445d0(&"_LightFineScale");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b369a1;
      il2cpp_runtime_helper_023445d0(&"_ReliefShadowSize");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b369ad;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseScale");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b369b9;
      il2cpp_runtime_helper_023445d0(&"_FineScale");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b369c5;
      il2cpp_runtime_helper_023445d0(&"_HorizontalBlur");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b369d1;
      il2cpp_runtime_helper_023445d0(&"_VerticalLightGradient");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b369dd;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakStrength");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b369e9;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseStrength");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b369f5;
      il2cpp_runtime_helper_023445d0(&"_BrushRevealDirection");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36a01;
      il2cpp_runtime_helper_023445d0(&"_CoarseScale");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36a0d;
      il2cpp_runtime_helper_023445d0(&"_Relief");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36a19;
      il2cpp_runtime_helper_023445d0(&"_FineStrength");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36a25;
      il2cpp_runtime_helper_023445d0(&"_WearStrength");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36a31;
      il2cpp_runtime_helper_023445d0(&"_LightGradientStrength");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36a3d;
      il2cpp_runtime_helper_023445d0(&"_LightFineStrength");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36a49;
      il2cpp_runtime_helper_023445d0(&"_BrushStreak");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36a55;
      il2cpp_runtime_helper_023445d0(&"_Worn");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36a61;
      il2cpp_runtime_helper_023445d0(&"_StainScale");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36a6d;
      il2cpp_runtime_helper_023445d0(&"_ReliefGradient");
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36a79;
      il2cpp_runtime_helper_023445d0(&"_ReliefLightAngle");
      g_data_057a9c64 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36a91;
    iVar8 = UnityEngine_Shader__PropertyToID("_FineScale",(MethodInfo *)0x0);
    *(int32_t *)TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36ab5;
    iVar8 = UnityEngine_Shader__PropertyToID("_FineStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 4) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36ad3;
    iVar8 = UnityEngine_Shader__PropertyToID("_CoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 8) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36af1;
    iVar8 = UnityEngine_Shader__PropertyToID("_CoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0xc) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36b0f;
    iVar8 = UnityEngine_Shader__PropertyToID("_GradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x10) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36b2d;
    iVar8 = UnityEngine_Shader__PropertyToID("_LightFineScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x14) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36b4b;
    iVar8 = UnityEngine_Shader__PropertyToID("_LightFineStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x18) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36b69;
    iVar8 = UnityEngine_Shader__PropertyToID("_LightCoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x1c) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36b87;
    iVar8 = UnityEngine_Shader__PropertyToID("_LightCoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x20) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36ba5;
    iVar8 = UnityEngine_Shader__PropertyToID("_LightGradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x24) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36bc3;
    iVar8 = UnityEngine_Shader__PropertyToID("_Relief",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x28) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36be1;
    iVar8 = UnityEngine_Shader__PropertyToID("_ReliefGradient",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x2c) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36bff;
    iVar8 = UnityEngine_Shader__PropertyToID("_ReliefLightAngle",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36c1d;
    iVar8 = UnityEngine_Shader__PropertyToID("_ReliefShadowSize",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36c3b;
    iVar8 = UnityEngine_Shader__PropertyToID("_Worn",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x38) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36c59;
    iVar8 = UnityEngine_Shader__PropertyToID("_WearStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x3c) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36c77;
    iVar8 = UnityEngine_Shader__PropertyToID("_ChipStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x40) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36c95;
    iVar8 = UnityEngine_Shader__PropertyToID("_StainScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x44) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36cb3;
    iVar8 = UnityEngine_Shader__PropertyToID("_BrushReveal",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x48) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36cd1;
    iVar8 = UnityEngine_Shader__PropertyToID("_BrushRevealDirection",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x4c) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36cef;
    iVar8 = UnityEngine_Shader__PropertyToID("_BrushStreak",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x50) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36d0d;
    iVar8 = UnityEngine_Shader__PropertyToID("_BrushStreakStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x54) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36d2b;
    iVar8 = UnityEngine_Shader__PropertyToID("_BrushStreakScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x58) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36d49;
    iVar8 = UnityEngine_Shader__PropertyToID("_VerticalLightGradient",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x5c) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36d67;
    iVar8 = UnityEngine_Shader__PropertyToID("_HorizontalBlur",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x60) = iVar8;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36d83;
    pSVar12 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36d98;
    System_Collections_Generic_List_object____ctor(pSVar12,MethodInfo_List_1_UnityEngine_Material);
    pIVar4 = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
    *(System_Collections_Generic_List_object__o **)(pIVar4 + 0x70) = pSVar12;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36db2;
    il2cpp_runtime_helper_022b4080(pIVar4 + 0x70,pSVar12);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36dc1;
    pSVar13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Material_float);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b36dd6;
    System_Collections_Generic_Dictionary_object__float____ctor(pSVar13,MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
    pIVar4 = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(pIVar4 + 0x78) = pSVar13;
    il2cpp_runtime_helper_022b4080(pIVar4 + 0x78,pSVar13);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b3677c;
  pMVar9 = (MethodInfo *)System_Collections_Generic_List_object___get_Item(pSVar12,iVar19 + 1,MethodInfo_Material_get_Item);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b36790;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b3679c;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pMVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b36841;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
               (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
    if (pSVar13 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b3686f;
    pMVar16 = pMVar9;
    bVar7 = System_Collections_Generic_Dictionary_object__float___TryGetValue
                      (pSVar13,(Il2CppObject *)pMVar9,(float *)((long)register0x00000020 + -0x50),MethodInfo_Boolean_TryGetValue
                      );
    if ((char)bVar7 == '\0') {
      fVar23 = *(float *)((long)register0x00000020 + -0x5c);
      iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
    else {
      fVar23 = *(float *)((long)register0x00000020 + -0x50);
      iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
    if (iVar2 == 0) {
      *(float *)((long)register0x00000020 + -0x4c) = fVar23;
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b368ad;
      il2cpp_runtime_helper_02337ed0();
      fVar23 = *(float *)((long)register0x00000020 + -0x4c);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b368c7;
    Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
              ((UnityEngine_Material_o *)pMVar9,*(float *)((long)register0x00000020 + -0x58),
               *(float *)((long)register0x00000020 + -0x54),fVar23,pMVar16);
  }
  else {
    if (pMVar9 != (MethodInfo *)0x0) {
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b367ba;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                 (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
      if (pSVar13 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b367e3;
      System_Collections_Generic_Dictionary_object__float___Remove
                (pSVar13,(Il2CppObject *)pMVar9,MethodInfo_Boolean_Remove);
    }
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b367f4;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = *(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
    if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b3681c;
    System_Collections_Generic_List_object___RemoveAt(pSVar12,iVar19 + 1,MethodInfo_Void_RemoveAt);
  }
  if (iVar19 < 0) {
    return;
  }
  iVar19 = iVar19 + -1;
  iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
  goto joined_r0x03b36743;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyReliefSettings
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings (float angle, float shadowSize, const MethodInfo* method);
// 0x3b35db0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings
               (float angle,float shadowSize,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Object_array *pSVar3;
  MethodInfo_362C220 *method_00;
  Il2CppMethodPointer pIVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  undefined8 in_RAX;
  UnityEngine_Object_o *pUVar7;
  undefined8 uVar8;
  MethodInfo *pMVar9;
  undefined4 extraout_var;
  UnityEngine_Material_o *pUVar10;
  undefined8 extraout_RAX;
  System_Collections_Generic_List_object__o *pSVar11;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar12;
  Il2CppMethodPointer in_RCX;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  uint uVar13;
  System_Collections_Generic_Dictionary_TKey__TValue__o *unaff_RBP;
  UnityEngine_Object_o *pUVar14;
  MethodInfo *pMVar15;
  MethodInfo *pMVar16;
  undefined4 in_R8D;
  uint uVar17;
  int iVar18;
  ulong unaff_R12;
  undefined8 *unaff_R13;
  char cVar19;
  undefined8 unaff_R14;
  System_Nullable_float__Fields __this;
  undefined8 *puVar20;
  UnityEngine_Object_o *unaff_R15;
  undefined4 uVar21;
  float fVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 in_XMM2_Da;
  
  do {
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(ulong *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x38) = in_RAX;
    *(float *)((long)register0x00000020 + -0x34) = shadowSize;
    *(float *)((long)register0x00000020 + -0x38) = angle;
    if (g_data_057a9c5f == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35ddb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35de7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35df3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35dff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5f = '\x01';
    }
    pMVar9 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e36;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e3b;
    pUVar7 = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar9);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e56;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar14 = (UnityEngine_Object_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e62;
    bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
label_03b35eb9:
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35eca;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar9 = TypeInfo_GisketchSurfaceMaterial;
      if (*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) != 0) {
        iVar18 = *(int *)(*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) + 0x18);
        if (iVar18 + -1 < 0) {
          return;
        }
        uVar17 = iVar18 - 2;
        unaff_R13 = &MethodInfo_Material_get_Item;
        iVar18 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        while( true ) {
          unaff_R12 = (ulong)uVar17;
          if (iVar18 == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35f15;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = *(System_Collections_Generic_List_object__o **)
                     (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
          pMVar9 = (MethodInfo *)0x0;
          if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) break;
          uVar13 = uVar17 + 1;
          unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar13;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35f3c;
          pUVar7 = (UnityEngine_Object_o *)
                   System_Collections_Generic_List_object___get_Item(pSVar11,uVar13,MethodInfo_Material_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35f50;
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar14 = (UnityEngine_Object_o *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35f5c;
          bVar5 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            pMVar9 = TypeInfo_GisketchSurfaceMaterial;
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b36001;
              il2cpp_runtime_helper_02337ed0();
            }
            if (pUVar7 == (UnityEngine_Object_o *)0x0) break;
            iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30);
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b36022;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar7,iVar6,*(float *)((long)register0x00000020 + -0x38),
                       (MethodInfo *)0x0);
            uVar13 = *(uint *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34);
            pUVar14 = (UnityEngine_Object_o *)(ulong)uVar13;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b3603f;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar7,uVar13,*(float *)((long)register0x00000020 + -0x34),
                       (MethodInfo *)0x0);
          }
          else {
            if (pUVar7 != (UnityEngine_Object_o *)0x0) {
              if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35f7a;
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar12 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                         (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
              pMVar9 = (MethodInfo *)0x0;
              if (pSVar12 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35fa3;
              pUVar14 = pUVar7;
              System_Collections_Generic_Dictionary_object__float___Remove
                        (pSVar12,(Il2CppObject *)pUVar7,MethodInfo_Boolean_Remove);
            }
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35fb4;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = *(System_Collections_Generic_List_object__o **)
                       (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
            pMVar9 = (MethodInfo *)0x0;
            if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) break;
            pUVar14 = (UnityEngine_Object_o *)(ulong)uVar13;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35fdc;
            System_Collections_Generic_List_object___RemoveAt(pSVar11,uVar13,MethodInfo_Void_RemoveAt);
          }
          if ((int)uVar17 < 0) {
            return;
          }
          uVar17 = uVar17 - 1;
          iVar18 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
      }
    }
    else {
      pMVar9 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e77;
        il2cpp_runtime_helper_02337ed0();
      }
      if (pUVar7 != (UnityEngine_Object_o *)0x0) {
        iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35e9c;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar7,iVar6,*(float *)((long)register0x00000020 + -0x38),
                   (MethodInfo *)0x0);
        uVar17 = *(uint *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34);
        pUVar14 = (UnityEngine_Object_o *)(ulong)uVar17;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b35eb9;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar7,uVar17,*(float *)((long)register0x00000020 + -0x34),
                   (MethodInfo *)0x0);
        goto label_03b35eb9;
      }
    }
    uVar17 = (uint)pMVar9;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b36071;
    uVar21 = il2cpp_runtime_helper_022b2c90();
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)register0x00000020 + -0x40) = unaff_RBP;
    *(long **)((long)register0x00000020 + -0x48) = &TypeInfo_Object;
    *(MethodInfo ***)((long)register0x00000020 + -0x50) = &TypeInfo_GisketchSurfaceMaterial;
    *(undefined8 **)((long)register0x00000020 + -0x58) = unaff_R13;
    *(ulong *)((long)register0x00000020 + -0x60) = unaff_R12;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x68) = pUVar7;
    *(undefined4 *)((long)register0x00000020 + -0x7c) = in_R8D;
    unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)((ulong)in_RCX & 0xffffffff);
    __this = (System_Nullable_float__Fields)((ulong)pUVar14 & 0xffffffff);
    unaff_R12 = (ulong)uVar17;
    *(undefined4 *)((long)register0x00000020 + -0x80) = uVar21;
    *(undefined8 *)((long)register0x00000020 + -0x78) = extraout_RDX;
    *(undefined8 *)((long)register0x00000020 + -0x70) = extraout_RDX;
    if (g_data_057a9c5d == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b360bf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b360cb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b360d7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b360e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b360ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b360fb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36107;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36113;
      il2cpp_runtime_helper_023445d0(&"AoTTG UI Surface Instance");
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3611f;
      il2cpp_runtime_helper_023445d0(&"AOTTG_WORN");
      g_data_057a9c5d = '\x01';
    }
    unaff_R13 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar9 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3613f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36144;
    unaff_R15 = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar9);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3615f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3616d;
    bVar5 = UnityEngine_Object__op_Equality(unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36184;
    pUVar7 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36194;
    UnityEngine_Material___ctor_4dc9e70
              ((UnityEngine_Material_o *)pUVar7,(UnityEngine_Material_o *)unaff_R15,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Object_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b361b1;
      UnityEngine_Object__set_name(pUVar7,"AoTTG UI Surface Instance",(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b361c0;
      UnityEngine_Object__set_hideFlags(pUVar7,0x34,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b361d2;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x28);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b361ef;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pUVar7,iVar6,*(float *)((long)register0x00000020 + -0x80),
                 (MethodInfo *)0x0);
      if ((char)uVar17 == '\0') {
        fVar22 = 0.0;
      }
      else {
        fVar22 = 1.0;
      }
      iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x2c);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36219;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar7,iVar6,fVar22,(MethodInfo *)0x0);
      cVar19 = (char)__this.hasValue;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36235;
        il2cpp_runtime_helper_02337ed0();
        if (cVar19 == '\0') goto label_03b3622b;
label_03b3623e:
        fVar22 = 1.0;
      }
      else {
        if (cVar19 != '\0') goto label_03b3623e;
label_03b3622b:
        fVar22 = 0.0;
      }
      iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x38);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3625a;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar7,iVar6,fVar22,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3626c;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x48);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3628c;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar7,iVar6,1.0,(MethodInfo *)0x0);
      iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x4c);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b362ac;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar7,iVar6,1.0,(MethodInfo *)0x0);
      fVar22 = 1.0;
      if ((char)unaff_RBP == '\0') {
        fVar22 = 0.0;
      }
      iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x50);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b362d4;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar7,iVar6,fVar22,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b362e6;
        il2cpp_runtime_helper_02337ed0();
      }
      if (unaff_R15 != (UnityEngine_Object_o *)0x0) {
        iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x54);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36309;
        fVar22 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar6,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36315;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar7,iVar6,fVar22,(MethodInfo *)0x0);
        iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x58);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3632f;
        fVar22 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar6,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3633b;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar7,iVar6,fVar22,(MethodInfo *)0x0);
        if (*(char *)((long)register0x00000020 + -0x7c) == '\0') {
          fVar22 = 0.0;
        }
        else {
          fVar22 = 1.0;
        }
        iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x5c);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36367;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar7,iVar6,fVar22,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36379;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x60);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36394;
        UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar7,iVar6,0.0,(MethodInfo *)0x0);
        if (cVar19 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b363c6;
          UnityEngine_Material__DisableKeyword
                    ((UnityEngine_Material_o *)pUVar7,"AOTTG_WORN",(MethodInfo *)0x0);
          __this = *(System_Nullable_float__Fields *)((long)register0x00000020 + -0x78);
          iVar18 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b363ad;
          UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)pUVar7,"AOTTG_WORN",(MethodInfo *)0x0)
          ;
          __this = *(System_Nullable_float__Fields *)((long)register0x00000020 + -0x78);
          iVar18 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        if (iVar18 == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b363dd;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b363f7;
        fVar22 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar6,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36403;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar7,iVar6,fVar22,(MethodInfo *)0x0);
        uVar17 = *(uint *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34);
        unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar17;
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3641d;
        fVar22 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,uVar17,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36429;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar7,uVar17,fVar22,(MethodInfo *)0x0);
        if ((char)__this.hasValue != '\0') {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36440;
            il2cpp_runtime_helper_02337ed0();
          }
          iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x44);
          unaff_R15 = (UnityEngine_Object_o *)&MethodInfo_Single_get_Value;
          __this = (System_Nullable_float__Fields)((long)register0x00000020 + -0x70);
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36465;
          fVar22 = System_Nullable_float___get_Value((System_Nullable_float__o)__this,MethodInfo_Single_get_Value);
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36471;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pUVar7,iVar6,fVar22,(MethodInfo *)0x0);
          unaff_RBP = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                       (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3648b;
          fVar22 = System_Nullable_float___get_Value((System_Nullable_float__o)__this,MethodInfo_Single_get_Value);
          if (unaff_RBP == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b36535;
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b364a9;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    (unaff_RBP,(Il2CppObject *)pUVar7,fVar22,MethodInfo_Void_set_Item);
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b364bb;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar4 = MethodInfo_Void_Add;
        pSVar11 = *(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70)
        ;
        if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(pSVar11->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar11->fields)._items;
          in_RCX = pIVar4;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar17 = (pSVar11->fields)._size;
            if (uVar17 < (uint)pSVar3->max_length) {
              (pSVar11->fields)._size = uVar17 + 1;
              pSVar3->m_Items[(int)uVar17] = (Il2CppObject *)pUVar7;
              *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3650a;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar17,pUVar7);
            }
            else {
              method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(pIVar4 + 0x20) + 0xc0) + 0x70);
              *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b36523;
              System_Collections_Generic_List_object___AddWithResize(pSVar11,(Il2CppObject *)pUVar7,method_00)
              ;
            }
            return;
          }
        }
      }
    }
label_03b36535:
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x3b3653a;
    uVar8 = il2cpp_runtime_helper_022b2c90();
    *(System_Nullable_float__Fields *)((long)register0x00000020 + -0x88) = __this;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x90) = pUVar7;
    *(undefined8 *)((long)register0x00000020 + -0x98) = uVar8;
    *(undefined4 *)((long)register0x00000020 + -0x94) = extraout_XMM0_Da;
    if (g_data_057a9c5e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b3655f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b3656b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5e = '\x01';
    }
    puVar20 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar9 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b3658a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b3658f;
    pMVar9 = (MethodInfo *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar9);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b365aa;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar15 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b365b6;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pMVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    in_RAX = CONCAT44(extraout_var,bVar5);
    if ((char)bVar5 == '\0') {
      shadowSize = 4.0;
      iVar18 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
    else {
      pMVar16 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b365cb;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b365d0;
      pUVar10 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar16);
      if (pUVar10 == (UnityEngine_Material_o *)0x0) break;
      in_RCX = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
      iVar6 = *(int32_t *)(in_RCX + 0x34);
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b365ec;
      shadowSize = UnityEngine_Material__GetFloat_4dcdb00(pUVar10,iVar6,(MethodInfo *)0x0);
      iVar18 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
      in_RAX = extraout_RAX;
    }
    if (iVar18 == 0) {
      *(float *)((long)register0x00000020 + -0x98) = shadowSize;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b3661b;
      in_RAX = il2cpp_runtime_helper_02337ed0();
      shadowSize = *(float *)((long)register0x00000020 + -0x98);
    }
    angle = *(float *)((long)register0x00000020 + -0x94);
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x90);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x88);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x80);
  } while( true );
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b36637;
  uVar21 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)register0x00000020 + -0xa0) = unaff_RBP;
  *(UnityEngine_Object_o **)((long)register0x00000020 + -0xa8) = unaff_R15;
  *(MethodInfo ***)((long)register0x00000020 + -0xb0) = &TypeInfo_GisketchSurfaceMaterial;
  *(MethodInfo ***)((long)register0x00000020 + -0xb8) = &TypeInfo_GisketchSurfaceMaterial;
  *(ulong *)((long)register0x00000020 + -0xc0) = unaff_R12;
  *(MethodInfo **)((long)register0x00000020 + -200) = pMVar9;
  *(undefined4 *)((long)register0x00000020 + -0xdc) = in_XMM2_Da;
  *(float *)((long)register0x00000020 + -0xd4) = shadowSize;
  *(undefined4 *)((long)register0x00000020 + -0xd8) = uVar21;
  if (g_data_057a9c60 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b36675;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b36681;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b3668d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b36699;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b366a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b366b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b366bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c60 = '\x01';
  }
  *(undefined4 *)((long)register0x00000020 + -0xd0) = 0;
  pMVar16 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b366e4;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b366e9;
  pUVar10 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar16);
  *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b36703;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
            (pUVar10,*(float *)((long)register0x00000020 + -0xd8),*(float *)((long)register0x00000020 + -0xd4)
             ,*(float *)((long)register0x00000020 + -0xdc),pMVar15);
  if (*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) == 0) {
label_03b368f4:
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b368f9;
    uVar8 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 **)((long)register0x00000020 + -0xe8) = puVar20;
    *(MethodInfo **)((long)register0x00000020 + -0xf0) = pMVar9;
    *(undefined8 *)((long)register0x00000020 + -0xf8) = uVar8;
    if (g_data_057a9c64 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b3691d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36929;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Material_float);
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36935;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36941;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b3694d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36959;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakScale");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36965;
      il2cpp_runtime_helper_023445d0(&"_GradientStrength");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36971;
      il2cpp_runtime_helper_023445d0(&"_CoarseStrength");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b3697d;
      il2cpp_runtime_helper_023445d0(&"_ChipStrength");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36989;
      il2cpp_runtime_helper_023445d0(&"_BrushReveal");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36995;
      il2cpp_runtime_helper_023445d0(&"_LightFineScale");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b369a1;
      il2cpp_runtime_helper_023445d0(&"_ReliefShadowSize");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b369ad;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseScale");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b369b9;
      il2cpp_runtime_helper_023445d0(&"_FineScale");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b369c5;
      il2cpp_runtime_helper_023445d0(&"_HorizontalBlur");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b369d1;
      il2cpp_runtime_helper_023445d0(&"_VerticalLightGradient");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b369dd;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakStrength");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b369e9;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseStrength");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b369f5;
      il2cpp_runtime_helper_023445d0(&"_BrushRevealDirection");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36a01;
      il2cpp_runtime_helper_023445d0(&"_CoarseScale");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36a0d;
      il2cpp_runtime_helper_023445d0(&"_Relief");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36a19;
      il2cpp_runtime_helper_023445d0(&"_FineStrength");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36a25;
      il2cpp_runtime_helper_023445d0(&"_WearStrength");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36a31;
      il2cpp_runtime_helper_023445d0(&"_LightGradientStrength");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36a3d;
      il2cpp_runtime_helper_023445d0(&"_LightFineStrength");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36a49;
      il2cpp_runtime_helper_023445d0(&"_BrushStreak");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36a55;
      il2cpp_runtime_helper_023445d0(&"_Worn");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36a61;
      il2cpp_runtime_helper_023445d0(&"_StainScale");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36a6d;
      il2cpp_runtime_helper_023445d0(&"_ReliefGradient");
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36a79;
      il2cpp_runtime_helper_023445d0(&"_ReliefLightAngle");
      g_data_057a9c64 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36a91;
    iVar6 = UnityEngine_Shader__PropertyToID("_FineScale",(MethodInfo *)0x0);
    *(int32_t *)TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36ab5;
    iVar6 = UnityEngine_Shader__PropertyToID("_FineStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 4) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36ad3;
    iVar6 = UnityEngine_Shader__PropertyToID("_CoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 8) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36af1;
    iVar6 = UnityEngine_Shader__PropertyToID("_CoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0xc) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36b0f;
    iVar6 = UnityEngine_Shader__PropertyToID("_GradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x10) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36b2d;
    iVar6 = UnityEngine_Shader__PropertyToID("_LightFineScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x14) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36b4b;
    iVar6 = UnityEngine_Shader__PropertyToID("_LightFineStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x18) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36b69;
    iVar6 = UnityEngine_Shader__PropertyToID("_LightCoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x1c) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36b87;
    iVar6 = UnityEngine_Shader__PropertyToID("_LightCoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x20) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36ba5;
    iVar6 = UnityEngine_Shader__PropertyToID("_LightGradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x24) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36bc3;
    iVar6 = UnityEngine_Shader__PropertyToID("_Relief",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x28) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36be1;
    iVar6 = UnityEngine_Shader__PropertyToID("_ReliefGradient",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x2c) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36bff;
    iVar6 = UnityEngine_Shader__PropertyToID("_ReliefLightAngle",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36c1d;
    iVar6 = UnityEngine_Shader__PropertyToID("_ReliefShadowSize",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36c3b;
    iVar6 = UnityEngine_Shader__PropertyToID("_Worn",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x38) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36c59;
    iVar6 = UnityEngine_Shader__PropertyToID("_WearStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x3c) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36c77;
    iVar6 = UnityEngine_Shader__PropertyToID("_ChipStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x40) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36c95;
    iVar6 = UnityEngine_Shader__PropertyToID("_StainScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x44) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36cb3;
    iVar6 = UnityEngine_Shader__PropertyToID("_BrushReveal",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x48) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36cd1;
    iVar6 = UnityEngine_Shader__PropertyToID("_BrushRevealDirection",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x4c) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36cef;
    iVar6 = UnityEngine_Shader__PropertyToID("_BrushStreak",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x50) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36d0d;
    iVar6 = UnityEngine_Shader__PropertyToID("_BrushStreakStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x54) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36d2b;
    iVar6 = UnityEngine_Shader__PropertyToID("_BrushStreakScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x58) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36d49;
    iVar6 = UnityEngine_Shader__PropertyToID("_VerticalLightGradient",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x5c) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36d67;
    iVar6 = UnityEngine_Shader__PropertyToID("_HorizontalBlur",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x60) = iVar6;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36d83;
    pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36d98;
    System_Collections_Generic_List_object____ctor(pSVar11,MethodInfo_List_1_UnityEngine_Material);
    pIVar4 = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
    *(System_Collections_Generic_List_object__o **)(pIVar4 + 0x70) = pSVar11;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36db2;
    il2cpp_runtime_helper_022b4080(pIVar4 + 0x70,pSVar11);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36dc1;
    pSVar12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Material_float);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x3b36dd6;
    System_Collections_Generic_Dictionary_object__float____ctor(pSVar12,MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
    pIVar4 = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(pIVar4 + 0x78) = pSVar12;
    il2cpp_runtime_helper_022b4080(pIVar4 + 0x78,pSVar12);
    return;
  }
  iVar18 = *(int *)(*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) + 0x18);
  if (-1 < iVar18 + -1) {
    iVar18 = iVar18 + -2;
    puVar20 = &TypeInfo_Object;
    iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    while( true ) {
      if (iVar2 == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b36755;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = *(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
      if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b3677c;
      pMVar9 = (MethodInfo *)
               System_Collections_Generic_List_object___get_Item(pSVar11,iVar18 + 1,MethodInfo_Material_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b36790;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b3679c;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pMVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b36841;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                   (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
        if (pSVar12 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
        *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b3686f;
        pMVar15 = pMVar9;
        bVar5 = System_Collections_Generic_Dictionary_object__float___TryGetValue
                          (pSVar12,(Il2CppObject *)pMVar9,(float *)((long)register0x00000020 + -0xd0),
                           MethodInfo_Boolean_TryGetValue);
        if ((char)bVar5 == '\0') {
          fVar22 = *(float *)((long)register0x00000020 + -0xdc);
          iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        else {
          fVar22 = *(float *)((long)register0x00000020 + -0xd0);
          iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        if (iVar2 == 0) {
          *(float *)((long)register0x00000020 + -0xcc) = fVar22;
          *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b368ad;
          il2cpp_runtime_helper_02337ed0();
          fVar22 = *(float *)((long)register0x00000020 + -0xcc);
        }
        *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b368c7;
        Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
                  ((UnityEngine_Material_o *)pMVar9,*(float *)((long)register0x00000020 + -0xd8),
                   *(float *)((long)register0x00000020 + -0xd4),fVar22,pMVar15);
      }
      else {
        if (pMVar9 != (MethodInfo *)0x0) {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b367ba;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                     (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
          if (pSVar12 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
          *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b367e3;
          System_Collections_Generic_Dictionary_object__float___Remove
                    (pSVar12,(Il2CppObject *)pMVar9,MethodInfo_Boolean_Remove);
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b367f4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = *(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70)
        ;
        if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
        *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x3b3681c;
        System_Collections_Generic_List_object___RemoveAt(pSVar11,iVar18 + 1,MethodInfo_Void_RemoveAt);
      }
      if (iVar18 < 0) break;
      iVar18 = iVar18 + -1;
      iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyWearSettings
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearSettings (float wearStrength, float chipStrength, float stainScale, const MethodInfo* method);
// 0x3b36640

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearSettings
               (float wearStrength,float chipStrength,float stainScale,MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer pIVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  UnityEngine_Material_o *material;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  MethodInfo *in_RSI;
  MethodInfo *method_00;
  int iVar6;
  float stainScale_00;
  float fStack_38;
  float fStack_34;
  
  if (g_data_057a9c60 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c60 = '\x01';
  }
  fStack_38 = 0.0;
  pMVar5 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  material = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar5);
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
            (material,wearStrength,chipStrength,stainScale,in_RSI);
  if (*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) != 0) {
    iVar6 = *(int *)(*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) + 0x18);
    if (-1 < iVar6 + -1) {
      iVar6 = iVar6 + -2;
      iVar1 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
      while( true ) {
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (*(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
        pMVar5 = (MethodInfo *)
                 System_Collections_Generic_List_object___get_Item
                           (*(System_Collections_Generic_List_object__o **)
                             (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70),iVar6 + 1,MethodInfo_Material_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pMVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
               (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78) ==
              (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
          method_00 = pMVar5;
          bVar3 = System_Collections_Generic_Dictionary_object__float___TryGetValue
                            (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                              (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78),(Il2CppObject *)pMVar5,&fStack_38,
                             MethodInfo_Boolean_TryGetValue);
          if ((char)bVar3 == '\0') {
            iVar1 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
            stainScale_00 = stainScale;
          }
          else {
            iVar1 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
            stainScale_00 = fStack_38;
          }
          if (iVar1 == 0) {
            fStack_34 = stainScale_00;
            il2cpp_runtime_helper_02337ed0();
            stainScale_00 = fStack_34;
          }
          Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
                    ((UnityEngine_Material_o *)pMVar5,wearStrength,chipStrength,stainScale_00,method_00);
        }
        else {
          if (pMVar5 != (MethodInfo *)0x0) {
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                 (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78) ==
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
            System_Collections_Generic_Dictionary_object__float___Remove
                      (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                        (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78),(Il2CppObject *)pMVar5,MethodInfo_Boolean_Remove);
          }
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (*(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) ==
              (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
          System_Collections_Generic_List_object___RemoveAt
                    (*(System_Collections_Generic_List_object__o **)
                      (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70),iVar6 + 1,MethodInfo_Void_RemoveAt);
        }
        if (iVar6 < 0) break;
        iVar6 = iVar6 + -1;
        iVar1 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
      }
    }
    return;
  }
label_03b368f4:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c64 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Material_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    il2cpp_runtime_helper_023445d0(&"_BrushStreakScale");
    il2cpp_runtime_helper_023445d0(&"_GradientStrength");
    il2cpp_runtime_helper_023445d0(&"_CoarseStrength");
    il2cpp_runtime_helper_023445d0(&"_ChipStrength");
    il2cpp_runtime_helper_023445d0(&"_BrushReveal");
    il2cpp_runtime_helper_023445d0(&"_LightFineScale");
    il2cpp_runtime_helper_023445d0(&"_ReliefShadowSize");
    il2cpp_runtime_helper_023445d0(&"_LightCoarseScale");
    il2cpp_runtime_helper_023445d0(&"_FineScale");
    il2cpp_runtime_helper_023445d0(&"_HorizontalBlur");
    il2cpp_runtime_helper_023445d0(&"_VerticalLightGradient");
    il2cpp_runtime_helper_023445d0(&"_BrushStreakStrength");
    il2cpp_runtime_helper_023445d0(&"_LightCoarseStrength");
    il2cpp_runtime_helper_023445d0(&"_BrushRevealDirection");
    il2cpp_runtime_helper_023445d0(&"_CoarseScale");
    il2cpp_runtime_helper_023445d0(&"_Relief");
    il2cpp_runtime_helper_023445d0(&"_FineStrength");
    il2cpp_runtime_helper_023445d0(&"_WearStrength");
    il2cpp_runtime_helper_023445d0(&"_LightGradientStrength");
    il2cpp_runtime_helper_023445d0(&"_LightFineStrength");
    il2cpp_runtime_helper_023445d0(&"_BrushStreak");
    il2cpp_runtime_helper_023445d0(&"_Worn");
    il2cpp_runtime_helper_023445d0(&"_StainScale");
    il2cpp_runtime_helper_023445d0(&"_ReliefGradient");
    il2cpp_runtime_helper_023445d0(&"_ReliefLightAngle");
    g_data_057a9c64 = '\x01';
  }
  iVar4 = UnityEngine_Shader__PropertyToID("_FineScale",(MethodInfo *)0x0);
  *(int32_t *)TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_FineStrength",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 4) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_CoarseScale",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 8) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_CoarseStrength",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0xc) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_GradientStrength",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x10) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_LightFineScale",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x14) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_LightFineStrength",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x18) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_LightCoarseScale",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x1c) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_LightCoarseStrength",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x20) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_LightGradientStrength",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x24) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_Relief",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x28) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_ReliefGradient",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x2c) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_ReliefLightAngle",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_ReliefShadowSize",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_Worn",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x38) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_WearStrength",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x3c) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_ChipStrength",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x40) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_StainScale",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x44) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_BrushReveal",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x48) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_BrushRevealDirection",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x4c) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_BrushStreak",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x50) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_BrushStreakStrength",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x54) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_BrushStreakScale",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x58) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_VerticalLightGradient",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x5c) = iVar4;
  iVar4 = UnityEngine_Shader__PropertyToID("_HorizontalBlur",(MethodInfo *)0x0);
  *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x60) = iVar4;
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_UnityEngine_Material);
  pIVar2 = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
  *(System_Collections_Generic_List_object__o **)(pIVar2 + 0x70) = __this;
  il2cpp_runtime_helper_022b4080(pIVar2 + 0x70,__this);
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Material_float);
  System_Collections_Generic_Dictionary_object__float____ctor(__this_00,MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
  pIVar2 = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(pIVar2 + 0x78) = __this_00;
  il2cpp_runtime_helper_022b4080(pIVar2 + 0x78,__this_00);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyPreset
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyPreset (UnityEngine_Material_o* material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength, const MethodInfo* method);
// 0x3b35a30

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyPreset
               (UnityEngine_Material_o *material,float fineScale,float fineStrength,float coarseScale,
               float coarseStrength,float gradientStrength,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  long lVar3;
  System_Object_array *pSVar4;
  MethodInfo_362C220 *method_00;
  ulong uVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  undefined8 uVar8;
  UnityEngine_Object_o *pUVar9;
  undefined8 uVar10;
  MethodInfo *pMVar11;
  undefined4 extraout_var;
  UnityEngine_Material_o *pUVar12;
  undefined8 extraout_RAX;
  System_Collections_Generic_List_object__o *pSVar13;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar14;
  ulong in_RCX;
  undefined8 extraout_RDX;
  undefined1 *puVar15;
  uint uVar16;
  System_Collections_Generic_Dictionary_TKey__TValue__o *unaff_RBP;
  UnityEngine_Object_o *pUVar17;
  MethodInfo *pMVar18;
  MethodInfo *pMVar19;
  undefined4 in_R8D;
  uint uVar20;
  int iVar21;
  ulong unaff_R12;
  undefined8 *unaff_R13;
  char cVar22;
  undefined8 *puVar23;
  System_Nullable_float__Fields __this;
  UnityEngine_Object_o *unaff_R15;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar24;
  float fVar25;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_78 [12];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  MethodInfo *pMStack_60;
  undefined8 *puStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  UnityEngine_Material_o *pUStack_38;
  undefined8 *puStack_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_24 = fineScale;
  local_20 = fineStrength;
  local_1c = coarseScale;
  local_18 = coarseStrength;
  local_14 = gradientStrength;
  if (g_data_057a9c61 == '\0') {
    puStack_30 = (undefined8 *)0x3b35a6d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    puStack_30 = (undefined8 *)0x3b35a79;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c61 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    puStack_30 = (undefined8 *)0x3b35a98;
    il2cpp_runtime_helper_02337ed0();
  }
  puStack_30 = (undefined8 *)0x3b35aa4;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pMVar11 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    puStack_30 = (undefined8 *)0x3b35ac8;
    il2cpp_runtime_helper_02337ed0();
  }
  if (material != (UnityEngine_Material_o *)0x0) {
    puStack_30 = (undefined8 *)0x3b35aed;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr,
               local_24,(MethodInfo *)0x0);
    puStack_30 = (undefined8 *)0x3b35b0a;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         4),local_20,(MethodInfo *)0x0);
    puStack_30 = (undefined8 *)0x3b35b27;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         8),local_1c,(MethodInfo *)0x0);
    puStack_30 = (undefined8 *)0x3b35b44;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0xc),local_18,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x10),local_14,(MethodInfo *)0x0);
    return;
  }
  puStack_30 = (undefined8 *)0x3b35b6d;
  fStack_4c = (float)il2cpp_runtime_helper_022b2c90();
  puStack_30 = &TypeInfo_GisketchSurfaceMaterial;
  fStack_48 = fineStrength;
  fStack_44 = coarseScale;
  fStack_40 = coarseStrength;
  fStack_3c = gradientStrength;
  pUStack_38 = material;
  if (g_data_057a9c62 == '\0') {
    puStack_58 = (undefined8 *)0x3b35bad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    puStack_58 = (undefined8 *)0x3b35bb9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c62 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    puStack_58 = (undefined8 *)0x3b35bd8;
    il2cpp_runtime_helper_02337ed0();
  }
  puStack_58 = (undefined8 *)0x3b35be4;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pMVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pMVar18 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    puStack_58 = (undefined8 *)0x3b35c08;
    il2cpp_runtime_helper_02337ed0();
  }
  if (pMVar11 != (MethodInfo *)0x0) {
    puStack_58 = (undefined8 *)0x3b35c2e;
    UnityEngine_Material__SetFloat_4dcd3b0
              ((UnityEngine_Material_o *)pMVar11,
               *(int32_t *)
                (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x14),
               fStack_4c,(MethodInfo *)0x0);
    puStack_58 = (undefined8 *)0x3b35c4b;
    UnityEngine_Material__SetFloat_4dcd3b0
              ((UnityEngine_Material_o *)pMVar11,
               *(int32_t *)
                (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x18),
               fStack_48,(MethodInfo *)0x0);
    puStack_58 = (undefined8 *)0x3b35c68;
    UnityEngine_Material__SetFloat_4dcd3b0
              ((UnityEngine_Material_o *)pMVar11,
               *(int32_t *)
                (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x1c),
               fStack_44,(MethodInfo *)0x0);
    puStack_58 = (undefined8 *)0x3b35c85;
    UnityEngine_Material__SetFloat_4dcd3b0
              ((UnityEngine_Material_o *)pMVar11,
               *(int32_t *)
                (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x20),
               fStack_40,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_4dcd3b0
              ((UnityEngine_Material_o *)pMVar11,
               *(int32_t *)
                (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x24),
               fStack_3c,(MethodInfo *)0x0);
    return;
  }
  puStack_58 = (undefined8 *)0x3b35cae;
  fStack_6c = (float)il2cpp_runtime_helper_022b2c90();
  puStack_58 = &TypeInfo_GisketchSurfaceMaterial;
  fStack_68 = fineStrength;
  fStack_64 = coarseScale;
  pMStack_60 = pMVar11;
  if (g_data_057a9c63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c63 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pMVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  puVar23 = &TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pMVar18 != (MethodInfo *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              ((UnityEngine_Material_o *)pMVar18,
               *(int32_t *)
                (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x3c),
               fStack_6c,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_4dcd3b0
              ((UnityEngine_Material_o *)pMVar18,
               *(int32_t *)
                (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x40),
               fStack_68,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_4dcd3b0
              ((UnityEngine_Material_o *)pMVar18,
               *(int32_t *)
                (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x44),
               fStack_64,(MethodInfo *)0x0);
    return;
  }
  uVar8 = il2cpp_runtime_helper_022b2c90();
  uVar10 = 0;
  puVar15 = auStack_78;
  uVar24 = extraout_XMM0_Da;
  do {
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar15 + -8) = unaff_RBP;
    *(UnityEngine_Object_o **)(puVar15 + -0x10) = unaff_R15;
    *(undefined8 **)(puVar15 + -0x18) = puVar23;
    *(undefined8 **)(puVar15 + -0x20) = unaff_R13;
    *(ulong *)(puVar15 + -0x28) = unaff_R12;
    *(undefined8 *)(puVar15 + -0x30) = uVar10;
    *(undefined8 *)(puVar15 + -0x38) = uVar8;
    *(float *)(puVar15 + -0x34) = fineStrength;
    *(undefined4 *)(puVar15 + -0x38) = uVar24;
    if (g_data_057a9c5f == '\0') {
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35ddb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35de7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35df3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35dff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35e0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35e17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5f = '\x01';
    }
    pMVar11 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35e36;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar15 + -0x40) = 0x3b35e3b;
    pUVar9 = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar11);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35e56;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar17 = (UnityEngine_Object_o *)0x0;
    *(undefined8 *)(puVar15 + -0x40) = 0x3b35e62;
    bVar6 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
label_03b35eb9:
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0x40) = 0x3b35eca;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar3 = *(long *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x70);
      pMVar11 = TypeInfo_GisketchSurfaceMaterial;
      if (lVar3 != 0) {
        iVar21 = *(int *)(lVar3 + 0x18);
        if (iVar21 + -1 < 0) {
          return;
        }
        uVar20 = iVar21 - 2;
        unaff_R13 = &MethodInfo_Material_get_Item;
        iVar21 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        while( true ) {
          unaff_R12 = (ulong)uVar20;
          if (iVar21 == 0) {
            *(undefined8 *)(puVar15 + -0x40) = 0x3b35f15;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = *(System_Collections_Generic_List_object__o **)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70
                     );
          pMVar11 = (MethodInfo *)0x0;
          if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) break;
          uVar16 = uVar20 + 1;
          unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar16;
          *(undefined8 *)(puVar15 + -0x40) = 0x3b35f3c;
          pUVar9 = (UnityEngine_Object_o *)
                   System_Collections_Generic_List_object___get_Item(pSVar13,uVar16,MethodInfo_Material_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar15 + -0x40) = 0x3b35f50;
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar17 = (UnityEngine_Object_o *)0x0;
          *(undefined8 *)(puVar15 + -0x40) = 0x3b35f5c;
          bVar6 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            pMVar11 = TypeInfo_GisketchSurfaceMaterial;
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar15 + -0x40) = 0x3b36001;
              il2cpp_runtime_helper_02337ed0();
            }
            if (pUVar9 == (UnityEngine_Object_o *)0x0) break;
            iVar7 = *(int32_t *)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x30
                     );
            *(undefined8 *)(puVar15 + -0x40) = 0x3b36022;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar9,iVar7,*(float *)(puVar15 + -0x38),(MethodInfo *)0x0);
            uVar16 = *(uint *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->
                               m_CachedPtr + 0x34);
            pUVar17 = (UnityEngine_Object_o *)(ulong)uVar16;
            *(undefined8 *)(puVar15 + -0x40) = 0x3b3603f;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar9,uVar16,*(float *)(puVar15 + -0x34),(MethodInfo *)0x0);
          }
          else {
            if (pUVar9 != (UnityEngine_Object_o *)0x0) {
              if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
                *(undefined8 *)(puVar15 + -0x40) = 0x3b35f7a;
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar14 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x78);
              pMVar11 = (MethodInfo *)0x0;
              if (pSVar14 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
              *(undefined8 *)(puVar15 + -0x40) = 0x3b35fa3;
              pUVar17 = pUVar9;
              System_Collections_Generic_Dictionary_object__float___Remove
                        (pSVar14,(Il2CppObject *)pUVar9,MethodInfo_Boolean_Remove);
            }
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar15 + -0x40) = 0x3b35fb4;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar13 = *(System_Collections_Generic_List_object__o **)
                       (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x70);
            pMVar11 = (MethodInfo *)0x0;
            if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) break;
            pUVar17 = (UnityEngine_Object_o *)(ulong)uVar16;
            *(undefined8 *)(puVar15 + -0x40) = 0x3b35fdc;
            System_Collections_Generic_List_object___RemoveAt(pSVar13,uVar16,MethodInfo_Void_RemoveAt);
          }
          if ((int)uVar20 < 0) {
            return;
          }
          uVar20 = uVar20 - 1;
          iVar21 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
      }
    }
    else {
      pMVar11 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0x40) = 0x3b35e77;
        il2cpp_runtime_helper_02337ed0();
      }
      if (pUVar9 != (UnityEngine_Object_o *)0x0) {
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x30);
        *(undefined8 *)(puVar15 + -0x40) = 0x3b35e9c;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,iVar7,*(float *)(puVar15 + -0x38),(MethodInfo *)0x0);
        uVar20 = *(uint *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                          0x34);
        pUVar17 = (UnityEngine_Object_o *)(ulong)uVar20;
        *(undefined8 *)(puVar15 + -0x40) = 0x3b35eb9;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,uVar20,*(float *)(puVar15 + -0x34),(MethodInfo *)0x0);
        goto label_03b35eb9;
      }
    }
    uVar20 = (uint)pMVar11;
    *(undefined8 *)(puVar15 + -0x40) = 0x3b36071;
    uVar24 = il2cpp_runtime_helper_022b2c90();
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar15 + -0x40) = unaff_RBP;
    *(long **)(puVar15 + -0x48) = &TypeInfo_Object;
    *(MethodInfo ***)(puVar15 + -0x50) = &TypeInfo_GisketchSurfaceMaterial;
    *(undefined8 **)(puVar15 + -0x58) = unaff_R13;
    *(ulong *)(puVar15 + -0x60) = unaff_R12;
    *(UnityEngine_Object_o **)(puVar15 + -0x68) = pUVar9;
    *(undefined4 *)(puVar15 + -0x7c) = in_R8D;
    unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(in_RCX & 0xffffffff);
    __this = (System_Nullable_float__Fields)((ulong)pUVar17 & 0xffffffff);
    unaff_R12 = (ulong)uVar20;
    *(undefined4 *)(puVar15 + -0x80) = uVar24;
    *(undefined8 *)(puVar15 + -0x78) = extraout_RDX;
    *(undefined8 *)(puVar15 + -0x70) = extraout_RDX;
    if (g_data_057a9c5d == '\0') {
      *(undefined8 *)(puVar15 + -0x88) = 0x3b360bf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b360cb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b360d7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b360e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b360ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b360fb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b36107;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b36113;
      il2cpp_runtime_helper_023445d0(&"AoTTG UI Surface Instance");
      *(undefined8 *)(puVar15 + -0x88) = 0x3b3611f;
      il2cpp_runtime_helper_023445d0(&"AOTTG_WORN");
      g_data_057a9c5d = '\x01';
    }
    unaff_R13 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar11 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar15 + -0x88) = 0x3b3613f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar15 + -0x88) = 0x3b36144;
    unaff_R15 = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar11)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar15 + -0x88) = 0x3b3615f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar15 + -0x88) = 0x3b3616d;
    bVar6 = UnityEngine_Object__op_Equality(unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    *(undefined8 *)(puVar15 + -0x88) = 0x3b36184;
    pUVar9 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    *(undefined8 *)(puVar15 + -0x88) = 0x3b36194;
    UnityEngine_Material___ctor_4dc9e70
              ((UnityEngine_Material_o *)pUVar9,(UnityEngine_Material_o *)unaff_R15,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_Object_o *)0x0) {
      *(undefined8 *)(puVar15 + -0x88) = 0x3b361b1;
      UnityEngine_Object__set_name(pUVar9,"AoTTG UI Surface Instance",(MethodInfo *)0x0);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b361c0;
      UnityEngine_Object__set_hideFlags(pUVar9,0x34,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0x88) = 0x3b361d2;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x28);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b361ef;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pUVar9,iVar7,*(float *)(puVar15 + -0x80),(MethodInfo *)0x0);
      if ((char)uVar20 == '\0') {
        fVar25 = 0.0;
      }
      else {
        fVar25 = 1.0;
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x2c);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b36219;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
      cVar22 = (char)__this.hasValue;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36235;
        il2cpp_runtime_helper_02337ed0();
        if (cVar22 == '\0') goto label_03b3622b;
label_03b3623e:
        fVar25 = 1.0;
      }
      else {
        if (cVar22 != '\0') goto label_03b3623e;
label_03b3622b:
        fVar25 = 0.0;
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x38);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b3625a;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0x88) = 0x3b3626c;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x48);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b3628c;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar9,iVar7,1.0,(MethodInfo *)0x0);
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x4c);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b362ac;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar9,iVar7,1.0,(MethodInfo *)0x0);
      fVar25 = 1.0;
      if ((char)unaff_RBP == '\0') {
        fVar25 = 0.0;
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x50);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b362d4;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0x88) = 0x3b362e6;
        il2cpp_runtime_helper_02337ed0();
      }
      if (unaff_R15 != (UnityEngine_Object_o *)0x0) {
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x54);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36309;
        fVar25 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar7,(MethodInfo *)0x0);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36315;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x58);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b3632f;
        fVar25 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar7,(MethodInfo *)0x0);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b3633b;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
        if (puVar15[-0x7c] == '\0') {
          fVar25 = 0.0;
        }
        else {
          fVar25 = 1.0;
        }
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x5c);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36367;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar15 + -0x88) = 0x3b36379;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x60);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36394;
        UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar9,iVar7,0.0,(MethodInfo *)0x0);
        if (cVar22 == '\0') {
          *(undefined8 *)(puVar15 + -0x88) = 0x3b363c6;
          UnityEngine_Material__DisableKeyword
                    ((UnityEngine_Material_o *)pUVar9,"AOTTG_WORN",(MethodInfo *)0x0);
          __this = *(System_Nullable_float__Fields *)(puVar15 + -0x78);
          iVar21 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        else {
          *(undefined8 *)(puVar15 + -0x88) = 0x3b363ad;
          UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)pUVar9,"AOTTG_WORN",(MethodInfo *)0x0)
          ;
          __this = *(System_Nullable_float__Fields *)(puVar15 + -0x78);
          iVar21 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        if (iVar21 == 0) {
          *(undefined8 *)(puVar15 + -0x88) = 0x3b363dd;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x30);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b363f7;
        fVar25 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar7,(MethodInfo *)0x0);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36403;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
        uVar20 = *(uint *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                          0x34);
        unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar20;
        *(undefined8 *)(puVar15 + -0x88) = 0x3b3641d;
        fVar25 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,uVar20,(MethodInfo *)0x0);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36429;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,uVar20,fVar25,(MethodInfo *)0x0);
        if ((char)__this.hasValue != '\0') {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar15 + -0x88) = 0x3b36440;
            il2cpp_runtime_helper_02337ed0();
          }
          iVar7 = *(int32_t *)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x44);
          unaff_R15 = (UnityEngine_Object_o *)&MethodInfo_Single_get_Value;
          __this = (System_Nullable_float__Fields)((long)puVar15 + -0x70);
          *(undefined8 *)(puVar15 + -0x88) = 0x3b36465;
          fVar25 = System_Nullable_float___get_Value((System_Nullable_float__o)__this,MethodInfo_Single_get_Value);
          *(undefined8 *)(puVar15 + -0x88) = 0x3b36471;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
          unaff_RBP = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                       (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x78);
          *(undefined8 *)(puVar15 + -0x88) = 0x3b3648b;
          fVar25 = System_Nullable_float___get_Value((System_Nullable_float__o)__this,MethodInfo_Single_get_Value);
          if (unaff_RBP == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b36535;
          *(undefined8 *)(puVar15 + -0x88) = 0x3b364a9;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    (unaff_RBP,(Il2CppObject *)pUVar9,fVar25,MethodInfo_Void_set_Item);
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar15 + -0x88) = 0x3b364bb;
          il2cpp_runtime_helper_02337ed0();
        }
        uVar5 = MethodInfo_Void_Add;
        pSVar13 = *(System_Collections_Generic_List_object__o **)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
        if (pSVar13 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(pSVar13->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar13->fields)._items;
          in_RCX = uVar5;
          if (pSVar4 != (System_Object_array *)0x0) {
            uVar20 = (pSVar13->fields)._size;
            if (uVar20 < (uint)pSVar4->max_length) {
              (pSVar13->fields)._size = uVar20 + 1;
              pSVar4->m_Items[(int)uVar20] = (Il2CppObject *)pUVar9;
              *(undefined8 *)(puVar15 + -0x88) = 0x3b3650a;
              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar20,pUVar9);
            }
            else {
              method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(uVar5 + 0x20) + 0xc0) + 0x70);
              *(undefined8 *)(puVar15 + -0x88) = 0x3b36523;
              System_Collections_Generic_List_object___AddWithResize(pSVar13,(Il2CppObject *)pUVar9,method_00)
              ;
            }
            return;
          }
        }
      }
    }
label_03b36535:
    *(undefined8 *)(puVar15 + -0x88) = 0x3b3653a;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    *(System_Nullable_float__Fields *)(puVar15 + -0x88) = __this;
    *(UnityEngine_Object_o **)(puVar15 + -0x90) = pUVar9;
    *(undefined8 *)(puVar15 + -0x98) = uVar10;
    *(undefined4 *)(puVar15 + -0x94) = extraout_XMM0_Da_00;
    if (g_data_057a9c5e == '\0') {
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b3655f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b3656b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5e = '\x01';
    }
    puVar23 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar11 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b3658a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar15 + -0xa0) = 0x3b3658f;
    pMVar11 = (MethodInfo *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar11);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b365aa;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = (MethodInfo *)0x0;
    *(undefined8 *)(puVar15 + -0xa0) = 0x3b365b6;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pMVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar8 = CONCAT44(extraout_var,bVar6);
    if ((char)bVar6 == '\0') {
      fineStrength = 4.0;
      iVar21 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
    else {
      pMVar19 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0xa0) = 0x3b365cb;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b365d0;
      pUVar12 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar19);
      if (pUVar12 == (UnityEngine_Material_o *)0x0) break;
      in_RCX = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
      iVar7 = *(int32_t *)(in_RCX + 0x34);
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b365ec;
      fineStrength = UnityEngine_Material__GetFloat_4dcdb00(pUVar12,iVar7,(MethodInfo *)0x0);
      iVar21 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
      uVar8 = extraout_RAX;
    }
    if (iVar21 == 0) {
      *(float *)(puVar15 + -0x98) = fineStrength;
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b3661b;
      uVar8 = il2cpp_runtime_helper_02337ed0();
      fineStrength = *(float *)(puVar15 + -0x98);
    }
    uVar24 = *(undefined4 *)(puVar15 + -0x94);
    uVar10 = *(undefined8 *)(puVar15 + -0x90);
    puVar23 = *(undefined8 **)(puVar15 + -0x88);
    puVar15 = puVar15 + -0x80;
  } while( true );
  *(undefined8 *)(puVar15 + -0xa0) = 0x3b36637;
  uVar24 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar15 + -0xa0) = unaff_RBP;
  *(UnityEngine_Object_o **)(puVar15 + -0xa8) = unaff_R15;
  *(MethodInfo ***)(puVar15 + -0xb0) = &TypeInfo_GisketchSurfaceMaterial;
  *(MethodInfo ***)(puVar15 + -0xb8) = &TypeInfo_GisketchSurfaceMaterial;
  *(ulong *)(puVar15 + -0xc0) = unaff_R12;
  *(MethodInfo **)(puVar15 + -200) = pMVar11;
  *(float *)(puVar15 + -0xdc) = coarseScale;
  *(float *)(puVar15 + -0xd4) = fineStrength;
  *(undefined4 *)(puVar15 + -0xd8) = uVar24;
  if (g_data_057a9c60 == '\0') {
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b36675;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b36681;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b3668d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b36699;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b366a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b366b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b366bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c60 = '\x01';
  }
  *(undefined4 *)(puVar15 + -0xd0) = 0;
  pMVar19 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b366e4;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar15 + -0xe8) = 0x3b366e9;
  pUVar12 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar19);
  *(undefined8 *)(puVar15 + -0xe8) = 0x3b36703;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
            (pUVar12,*(float *)(puVar15 + -0xd8),*(float *)(puVar15 + -0xd4),*(float *)(puVar15 + -0xdc),
             pMVar18);
  lVar3 = *(long *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
  if (lVar3 == 0) {
label_03b368f4:
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b368f9;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 **)(puVar15 + -0xe8) = puVar23;
    *(MethodInfo **)(puVar15 + -0xf0) = pMVar11;
    *(undefined8 *)(puVar15 + -0xf8) = uVar10;
    if (g_data_057a9c64 == '\0') {
      *(undefined8 *)(puVar15 + -0x100) = 0x3b3691d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36929;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Material_float);
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36935;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36941;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      *(undefined8 *)(puVar15 + -0x100) = 0x3b3694d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36959;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakScale");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36965;
      il2cpp_runtime_helper_023445d0(&"_GradientStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36971;
      il2cpp_runtime_helper_023445d0(&"_CoarseStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b3697d;
      il2cpp_runtime_helper_023445d0(&"_ChipStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36989;
      il2cpp_runtime_helper_023445d0(&"_BrushReveal");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36995;
      il2cpp_runtime_helper_023445d0(&"_LightFineScale");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369a1;
      il2cpp_runtime_helper_023445d0(&"_ReliefShadowSize");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369ad;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseScale");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369b9;
      il2cpp_runtime_helper_023445d0(&"_FineScale");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369c5;
      il2cpp_runtime_helper_023445d0(&"_HorizontalBlur");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369d1;
      il2cpp_runtime_helper_023445d0(&"_VerticalLightGradient");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369dd;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369e9;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369f5;
      il2cpp_runtime_helper_023445d0(&"_BrushRevealDirection");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a01;
      il2cpp_runtime_helper_023445d0(&"_CoarseScale");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a0d;
      il2cpp_runtime_helper_023445d0(&"_Relief");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a19;
      il2cpp_runtime_helper_023445d0(&"_FineStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a25;
      il2cpp_runtime_helper_023445d0(&"_WearStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a31;
      il2cpp_runtime_helper_023445d0(&"_LightGradientStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a3d;
      il2cpp_runtime_helper_023445d0(&"_LightFineStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a49;
      il2cpp_runtime_helper_023445d0(&"_BrushStreak");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a55;
      il2cpp_runtime_helper_023445d0(&"_Worn");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a61;
      il2cpp_runtime_helper_023445d0(&"_StainScale");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a6d;
      il2cpp_runtime_helper_023445d0(&"_ReliefGradient");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a79;
      il2cpp_runtime_helper_023445d0(&"_ReliefLightAngle");
      g_data_057a9c64 = '\x01';
    }
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36a91;
    iVar7 = UnityEngine_Shader__PropertyToID("_FineScale",(MethodInfo *)0x0);
    *(int32_t *)((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr = iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36ab5;
    iVar7 = UnityEngine_Shader__PropertyToID("_FineStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 4) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36ad3;
    iVar7 = UnityEngine_Shader__PropertyToID("_CoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 8) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36af1;
    iVar7 = UnityEngine_Shader__PropertyToID("_CoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0xc) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36b0f;
    iVar7 = UnityEngine_Shader__PropertyToID("_GradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x10) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36b2d;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightFineScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x14) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36b4b;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightFineStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x18) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36b69;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightCoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x1c) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36b87;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightCoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x20) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36ba5;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightGradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x24) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36bc3;
    iVar7 = UnityEngine_Shader__PropertyToID("_Relief",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x28) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36be1;
    iVar7 = UnityEngine_Shader__PropertyToID("_ReliefGradient",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x2c) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36bff;
    iVar7 = UnityEngine_Shader__PropertyToID("_ReliefLightAngle",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x30) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36c1d;
    iVar7 = UnityEngine_Shader__PropertyToID("_ReliefShadowSize",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x34) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36c3b;
    iVar7 = UnityEngine_Shader__PropertyToID("_Worn",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x38) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36c59;
    iVar7 = UnityEngine_Shader__PropertyToID("_WearStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x3c) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36c77;
    iVar7 = UnityEngine_Shader__PropertyToID("_ChipStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x40) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36c95;
    iVar7 = UnityEngine_Shader__PropertyToID("_StainScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x44) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36cb3;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushReveal",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x48) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36cd1;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushRevealDirection",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x4c) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36cef;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushStreak",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x50) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36d0d;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushStreakStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x54) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36d2b;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushStreakScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x58) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36d49;
    iVar7 = UnityEngine_Shader__PropertyToID("_VerticalLightGradient",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x5c) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36d67;
    iVar7 = UnityEngine_Shader__PropertyToID("_HorizontalBlur",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x60) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36d83;
    pSVar13 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36d98;
    System_Collections_Generic_List_object____ctor(pSVar13,MethodInfo_List_1_UnityEngine_Material);
    lVar3 = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
    *(System_Collections_Generic_List_object__o **)(lVar3 + 0x70) = pSVar13;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36db2;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x70,pSVar13);
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36dc1;
    pSVar14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Material_float);
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36dd6;
    System_Collections_Generic_Dictionary_object__float____ctor(pSVar14,MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
    lVar3 = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar3 + 0x78) = pSVar14;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x78,pSVar14);
    return;
  }
  iVar21 = *(int *)(lVar3 + 0x18);
  if (-1 < iVar21 + -1) {
    iVar21 = iVar21 + -2;
    puVar23 = &TypeInfo_Object;
    iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    while( true ) {
      if (iVar2 == 0) {
        *(undefined8 *)(puVar15 + -0xe8) = 0x3b36755;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = *(System_Collections_Generic_List_object__o **)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
      if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
      *(undefined8 *)(puVar15 + -0xe8) = 0x3b3677c;
      pMVar11 = (MethodInfo *)
                System_Collections_Generic_List_object___get_Item(pSVar13,iVar21 + 1,MethodInfo_Material_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar15 + -0xe8) = 0x3b36790;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar15 + -0xe8) = 0x3b3679c;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pMVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar15 + -0xe8) = 0x3b36841;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar14 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x78);
        if (pSVar14 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
        *(undefined8 *)(puVar15 + -0xe8) = 0x3b3686f;
        pMVar18 = pMVar11;
        bVar6 = System_Collections_Generic_Dictionary_object__float___TryGetValue
                          (pSVar14,(Il2CppObject *)pMVar11,(float *)(puVar15 + -0xd0),MethodInfo_Boolean_TryGetValue);
        if ((char)bVar6 == '\0') {
          fVar25 = *(float *)(puVar15 + -0xdc);
          iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        else {
          fVar25 = *(float *)(puVar15 + -0xd0);
          iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        if (iVar2 == 0) {
          *(float *)(puVar15 + -0xcc) = fVar25;
          *(undefined8 *)(puVar15 + -0xe8) = 0x3b368ad;
          il2cpp_runtime_helper_02337ed0();
          fVar25 = *(float *)(puVar15 + -0xcc);
        }
        *(undefined8 *)(puVar15 + -0xe8) = 0x3b368c7;
        Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
                  ((UnityEngine_Material_o *)pMVar11,*(float *)(puVar15 + -0xd8),*(float *)(puVar15 + -0xd4),
                   fVar25,pMVar18);
      }
      else {
        if (pMVar11 != (MethodInfo *)0x0) {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar15 + -0xe8) = 0x3b367ba;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x78
                     );
          if (pSVar14 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
          *(undefined8 *)(puVar15 + -0xe8) = 0x3b367e3;
          System_Collections_Generic_Dictionary_object__float___Remove
                    (pSVar14,(Il2CppObject *)pMVar11,MethodInfo_Boolean_Remove);
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar15 + -0xe8) = 0x3b367f4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = *(System_Collections_Generic_List_object__o **)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
        if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
        *(undefined8 *)(puVar15 + -0xe8) = 0x3b3681c;
        System_Collections_Generic_List_object___RemoveAt(pSVar13,iVar21 + 1,MethodInfo_Void_RemoveAt);
      }
      if (iVar21 < 0) break;
      iVar21 = iVar21 + -1;
      iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyLightPreset
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyLightPreset (UnityEngine_Material_o* material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength, const MethodInfo* method);
// 0x3b35b70

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyLightPreset
               (UnityEngine_Material_o *material,float fineScale,float fineStrength,float coarseScale,
               float coarseStrength,float gradientStrength,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  long lVar3;
  System_Object_array *pSVar4;
  MethodInfo_362C220 *method_00;
  ulong uVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  undefined8 uVar8;
  UnityEngine_Object_o *pUVar9;
  undefined8 uVar10;
  MethodInfo *pMVar11;
  undefined4 extraout_var;
  UnityEngine_Material_o *pUVar12;
  undefined8 extraout_RAX;
  System_Collections_Generic_List_object__o *pSVar13;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar14;
  ulong in_RCX;
  undefined8 extraout_RDX;
  undefined1 *puVar15;
  uint uVar16;
  System_Collections_Generic_Dictionary_TKey__TValue__o *unaff_RBP;
  UnityEngine_Object_o *pUVar17;
  MethodInfo *pMVar18;
  MethodInfo *pMVar19;
  undefined4 in_R8D;
  uint uVar20;
  int iVar21;
  ulong unaff_R12;
  undefined8 *unaff_R13;
  char cVar22;
  undefined8 *puVar23;
  System_Nullable_float__Fields __this;
  UnityEngine_Object_o *unaff_R15;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar24;
  float fVar25;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_50 [12];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  UnityEngine_Material_o *pUStack_38;
  undefined8 *puStack_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_24 = fineScale;
  local_20 = fineStrength;
  local_1c = coarseScale;
  local_18 = coarseStrength;
  local_14 = gradientStrength;
  if (g_data_057a9c62 == '\0') {
    puStack_30 = (undefined8 *)0x3b35bad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    puStack_30 = (undefined8 *)0x3b35bb9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c62 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    puStack_30 = (undefined8 *)0x3b35bd8;
    il2cpp_runtime_helper_02337ed0();
  }
  puStack_30 = (undefined8 *)0x3b35be4;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pMVar11 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    puStack_30 = (undefined8 *)0x3b35c08;
    il2cpp_runtime_helper_02337ed0();
  }
  if (material != (UnityEngine_Material_o *)0x0) {
    puStack_30 = (undefined8 *)0x3b35c2e;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x14),local_24,(MethodInfo *)0x0);
    puStack_30 = (undefined8 *)0x3b35c4b;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x18),local_20,(MethodInfo *)0x0);
    puStack_30 = (undefined8 *)0x3b35c68;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x1c),local_1c,(MethodInfo *)0x0);
    puStack_30 = (undefined8 *)0x3b35c85;
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x20),local_18,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x24),local_14,(MethodInfo *)0x0);
    return;
  }
  puStack_30 = (undefined8 *)0x3b35cae;
  fStack_44 = (float)il2cpp_runtime_helper_022b2c90();
  puStack_30 = &TypeInfo_GisketchSurfaceMaterial;
  fStack_40 = fineStrength;
  fStack_3c = coarseScale;
  pUStack_38 = material;
  if (g_data_057a9c63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c63 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pMVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  puVar23 = &TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pMVar11 != (MethodInfo *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              ((UnityEngine_Material_o *)pMVar11,
               *(int32_t *)
                (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x3c),
               fStack_44,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_4dcd3b0
              ((UnityEngine_Material_o *)pMVar11,
               *(int32_t *)
                (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x40),
               fStack_40,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_4dcd3b0
              ((UnityEngine_Material_o *)pMVar11,
               *(int32_t *)
                (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x44),
               fStack_3c,(MethodInfo *)0x0);
    return;
  }
  uVar8 = il2cpp_runtime_helper_022b2c90();
  uVar10 = 0;
  puVar15 = auStack_50;
  uVar24 = extraout_XMM0_Da;
  do {
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar15 + -8) = unaff_RBP;
    *(UnityEngine_Object_o **)(puVar15 + -0x10) = unaff_R15;
    *(undefined8 **)(puVar15 + -0x18) = puVar23;
    *(undefined8 **)(puVar15 + -0x20) = unaff_R13;
    *(ulong *)(puVar15 + -0x28) = unaff_R12;
    *(undefined8 *)(puVar15 + -0x30) = uVar10;
    *(undefined8 *)(puVar15 + -0x38) = uVar8;
    *(float *)(puVar15 + -0x34) = fineStrength;
    *(undefined4 *)(puVar15 + -0x38) = uVar24;
    if (g_data_057a9c5f == '\0') {
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35ddb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35de7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35df3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35dff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35e0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35e17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5f = '\x01';
    }
    pMVar11 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35e36;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar15 + -0x40) = 0x3b35e3b;
    pUVar9 = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar11);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar15 + -0x40) = 0x3b35e56;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar17 = (UnityEngine_Object_o *)0x0;
    *(undefined8 *)(puVar15 + -0x40) = 0x3b35e62;
    bVar6 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
label_03b35eb9:
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0x40) = 0x3b35eca;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar3 = *(long *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x70);
      pMVar11 = TypeInfo_GisketchSurfaceMaterial;
      if (lVar3 != 0) {
        iVar21 = *(int *)(lVar3 + 0x18);
        if (iVar21 + -1 < 0) {
          return;
        }
        uVar20 = iVar21 - 2;
        unaff_R13 = &MethodInfo_Material_get_Item;
        iVar21 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        while( true ) {
          unaff_R12 = (ulong)uVar20;
          if (iVar21 == 0) {
            *(undefined8 *)(puVar15 + -0x40) = 0x3b35f15;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = *(System_Collections_Generic_List_object__o **)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70
                     );
          pMVar11 = (MethodInfo *)0x0;
          if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) break;
          uVar16 = uVar20 + 1;
          unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar16;
          *(undefined8 *)(puVar15 + -0x40) = 0x3b35f3c;
          pUVar9 = (UnityEngine_Object_o *)
                   System_Collections_Generic_List_object___get_Item(pSVar13,uVar16,MethodInfo_Material_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar15 + -0x40) = 0x3b35f50;
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar17 = (UnityEngine_Object_o *)0x0;
          *(undefined8 *)(puVar15 + -0x40) = 0x3b35f5c;
          bVar6 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            pMVar11 = TypeInfo_GisketchSurfaceMaterial;
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar15 + -0x40) = 0x3b36001;
              il2cpp_runtime_helper_02337ed0();
            }
            if (pUVar9 == (UnityEngine_Object_o *)0x0) break;
            iVar7 = *(int32_t *)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x30
                     );
            *(undefined8 *)(puVar15 + -0x40) = 0x3b36022;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar9,iVar7,*(float *)(puVar15 + -0x38),(MethodInfo *)0x0);
            uVar16 = *(uint *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->
                               m_CachedPtr + 0x34);
            pUVar17 = (UnityEngine_Object_o *)(ulong)uVar16;
            *(undefined8 *)(puVar15 + -0x40) = 0x3b3603f;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar9,uVar16,*(float *)(puVar15 + -0x34),(MethodInfo *)0x0);
          }
          else {
            if (pUVar9 != (UnityEngine_Object_o *)0x0) {
              if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
                *(undefined8 *)(puVar15 + -0x40) = 0x3b35f7a;
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar14 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                         (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                         0x78);
              pMVar11 = (MethodInfo *)0x0;
              if (pSVar14 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
              *(undefined8 *)(puVar15 + -0x40) = 0x3b35fa3;
              pUVar17 = pUVar9;
              System_Collections_Generic_Dictionary_object__float___Remove
                        (pSVar14,(Il2CppObject *)pUVar9,MethodInfo_Boolean_Remove);
            }
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar15 + -0x40) = 0x3b35fb4;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar13 = *(System_Collections_Generic_List_object__o **)
                       (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x70);
            pMVar11 = (MethodInfo *)0x0;
            if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) break;
            pUVar17 = (UnityEngine_Object_o *)(ulong)uVar16;
            *(undefined8 *)(puVar15 + -0x40) = 0x3b35fdc;
            System_Collections_Generic_List_object___RemoveAt(pSVar13,uVar16,MethodInfo_Void_RemoveAt);
          }
          if ((int)uVar20 < 0) {
            return;
          }
          uVar20 = uVar20 - 1;
          iVar21 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
      }
    }
    else {
      pMVar11 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0x40) = 0x3b35e77;
        il2cpp_runtime_helper_02337ed0();
      }
      if (pUVar9 != (UnityEngine_Object_o *)0x0) {
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x30);
        *(undefined8 *)(puVar15 + -0x40) = 0x3b35e9c;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,iVar7,*(float *)(puVar15 + -0x38),(MethodInfo *)0x0);
        uVar20 = *(uint *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                          0x34);
        pUVar17 = (UnityEngine_Object_o *)(ulong)uVar20;
        *(undefined8 *)(puVar15 + -0x40) = 0x3b35eb9;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,uVar20,*(float *)(puVar15 + -0x34),(MethodInfo *)0x0);
        goto label_03b35eb9;
      }
    }
    uVar20 = (uint)pMVar11;
    *(undefined8 *)(puVar15 + -0x40) = 0x3b36071;
    uVar24 = il2cpp_runtime_helper_022b2c90();
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar15 + -0x40) = unaff_RBP;
    *(long **)(puVar15 + -0x48) = &TypeInfo_Object;
    *(MethodInfo ***)(puVar15 + -0x50) = &TypeInfo_GisketchSurfaceMaterial;
    *(undefined8 **)(puVar15 + -0x58) = unaff_R13;
    *(ulong *)(puVar15 + -0x60) = unaff_R12;
    *(UnityEngine_Object_o **)(puVar15 + -0x68) = pUVar9;
    *(undefined4 *)(puVar15 + -0x7c) = in_R8D;
    unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(in_RCX & 0xffffffff);
    __this = (System_Nullable_float__Fields)((ulong)pUVar17 & 0xffffffff);
    unaff_R12 = (ulong)uVar20;
    *(undefined4 *)(puVar15 + -0x80) = uVar24;
    *(undefined8 *)(puVar15 + -0x78) = extraout_RDX;
    *(undefined8 *)(puVar15 + -0x70) = extraout_RDX;
    if (g_data_057a9c5d == '\0') {
      *(undefined8 *)(puVar15 + -0x88) = 0x3b360bf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b360cb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b360d7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b360e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b360ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b360fb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b36107;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b36113;
      il2cpp_runtime_helper_023445d0(&"AoTTG UI Surface Instance");
      *(undefined8 *)(puVar15 + -0x88) = 0x3b3611f;
      il2cpp_runtime_helper_023445d0(&"AOTTG_WORN");
      g_data_057a9c5d = '\x01';
    }
    unaff_R13 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar11 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar15 + -0x88) = 0x3b3613f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar15 + -0x88) = 0x3b36144;
    unaff_R15 = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar11)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar15 + -0x88) = 0x3b3615f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar15 + -0x88) = 0x3b3616d;
    bVar6 = UnityEngine_Object__op_Equality(unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    *(undefined8 *)(puVar15 + -0x88) = 0x3b36184;
    pUVar9 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    *(undefined8 *)(puVar15 + -0x88) = 0x3b36194;
    UnityEngine_Material___ctor_4dc9e70
              ((UnityEngine_Material_o *)pUVar9,(UnityEngine_Material_o *)unaff_R15,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_Object_o *)0x0) {
      *(undefined8 *)(puVar15 + -0x88) = 0x3b361b1;
      UnityEngine_Object__set_name(pUVar9,"AoTTG UI Surface Instance",(MethodInfo *)0x0);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b361c0;
      UnityEngine_Object__set_hideFlags(pUVar9,0x34,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0x88) = 0x3b361d2;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x28);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b361ef;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pUVar9,iVar7,*(float *)(puVar15 + -0x80),(MethodInfo *)0x0);
      if ((char)uVar20 == '\0') {
        fVar25 = 0.0;
      }
      else {
        fVar25 = 1.0;
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x2c);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b36219;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
      cVar22 = (char)__this.hasValue;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36235;
        il2cpp_runtime_helper_02337ed0();
        if (cVar22 == '\0') goto label_03b3622b;
label_03b3623e:
        fVar25 = 1.0;
      }
      else {
        if (cVar22 != '\0') goto label_03b3623e;
label_03b3622b:
        fVar25 = 0.0;
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x38);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b3625a;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0x88) = 0x3b3626c;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x48);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b3628c;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar9,iVar7,1.0,(MethodInfo *)0x0);
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x4c);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b362ac;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar9,iVar7,1.0,(MethodInfo *)0x0);
      fVar25 = 1.0;
      if ((char)unaff_RBP == '\0') {
        fVar25 = 0.0;
      }
      iVar7 = *(int32_t *)
               (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x50);
      *(undefined8 *)(puVar15 + -0x88) = 0x3b362d4;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0x88) = 0x3b362e6;
        il2cpp_runtime_helper_02337ed0();
      }
      if (unaff_R15 != (UnityEngine_Object_o *)0x0) {
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x54);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36309;
        fVar25 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar7,(MethodInfo *)0x0);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36315;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x58);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b3632f;
        fVar25 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar7,(MethodInfo *)0x0);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b3633b;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
        if (puVar15[-0x7c] == '\0') {
          fVar25 = 0.0;
        }
        else {
          fVar25 = 1.0;
        }
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x5c);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36367;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar15 + -0x88) = 0x3b36379;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x60);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36394;
        UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar9,iVar7,0.0,(MethodInfo *)0x0);
        if (cVar22 == '\0') {
          *(undefined8 *)(puVar15 + -0x88) = 0x3b363c6;
          UnityEngine_Material__DisableKeyword
                    ((UnityEngine_Material_o *)pUVar9,"AOTTG_WORN",(MethodInfo *)0x0);
          __this = *(System_Nullable_float__Fields *)(puVar15 + -0x78);
          iVar21 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        else {
          *(undefined8 *)(puVar15 + -0x88) = 0x3b363ad;
          UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)pUVar9,"AOTTG_WORN",(MethodInfo *)0x0)
          ;
          __this = *(System_Nullable_float__Fields *)(puVar15 + -0x78);
          iVar21 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        if (iVar21 == 0) {
          *(undefined8 *)(puVar15 + -0x88) = 0x3b363dd;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar7 = *(int32_t *)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x30);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b363f7;
        fVar25 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar7,(MethodInfo *)0x0);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36403;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
        uVar20 = *(uint *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                          0x34);
        unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar20;
        *(undefined8 *)(puVar15 + -0x88) = 0x3b3641d;
        fVar25 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,uVar20,(MethodInfo *)0x0);
        *(undefined8 *)(puVar15 + -0x88) = 0x3b36429;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar9,uVar20,fVar25,(MethodInfo *)0x0);
        if ((char)__this.hasValue != '\0') {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar15 + -0x88) = 0x3b36440;
            il2cpp_runtime_helper_02337ed0();
          }
          iVar7 = *(int32_t *)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x44);
          unaff_R15 = (UnityEngine_Object_o *)&MethodInfo_Single_get_Value;
          __this = (System_Nullable_float__Fields)((long)puVar15 + -0x70);
          *(undefined8 *)(puVar15 + -0x88) = 0x3b36465;
          fVar25 = System_Nullable_float___get_Value((System_Nullable_float__o)__this,MethodInfo_Single_get_Value);
          *(undefined8 *)(puVar15 + -0x88) = 0x3b36471;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pUVar9,iVar7,fVar25,(MethodInfo *)0x0);
          unaff_RBP = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                       (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr +
                       0x78);
          *(undefined8 *)(puVar15 + -0x88) = 0x3b3648b;
          fVar25 = System_Nullable_float___get_Value((System_Nullable_float__o)__this,MethodInfo_Single_get_Value);
          if (unaff_RBP == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b36535;
          *(undefined8 *)(puVar15 + -0x88) = 0x3b364a9;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    (unaff_RBP,(Il2CppObject *)pUVar9,fVar25,MethodInfo_Void_set_Item);
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar15 + -0x88) = 0x3b364bb;
          il2cpp_runtime_helper_02337ed0();
        }
        uVar5 = MethodInfo_Void_Add;
        pSVar13 = *(System_Collections_Generic_List_object__o **)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
        if (pSVar13 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(pSVar13->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar13->fields)._items;
          in_RCX = uVar5;
          if (pSVar4 != (System_Object_array *)0x0) {
            uVar20 = (pSVar13->fields)._size;
            if (uVar20 < (uint)pSVar4->max_length) {
              (pSVar13->fields)._size = uVar20 + 1;
              pSVar4->m_Items[(int)uVar20] = (Il2CppObject *)pUVar9;
              *(undefined8 *)(puVar15 + -0x88) = 0x3b3650a;
              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar20,pUVar9);
            }
            else {
              method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(uVar5 + 0x20) + 0xc0) + 0x70);
              *(undefined8 *)(puVar15 + -0x88) = 0x3b36523;
              System_Collections_Generic_List_object___AddWithResize(pSVar13,(Il2CppObject *)pUVar9,method_00)
              ;
            }
            return;
          }
        }
      }
    }
label_03b36535:
    *(undefined8 *)(puVar15 + -0x88) = 0x3b3653a;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    *(System_Nullable_float__Fields *)(puVar15 + -0x88) = __this;
    *(UnityEngine_Object_o **)(puVar15 + -0x90) = pUVar9;
    *(undefined8 *)(puVar15 + -0x98) = uVar10;
    *(undefined4 *)(puVar15 + -0x94) = extraout_XMM0_Da_00;
    if (g_data_057a9c5e == '\0') {
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b3655f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b3656b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5e = '\x01';
    }
    puVar23 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar11 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b3658a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar15 + -0xa0) = 0x3b3658f;
    pMVar11 = (MethodInfo *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar11);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b365aa;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = (MethodInfo *)0x0;
    *(undefined8 *)(puVar15 + -0xa0) = 0x3b365b6;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pMVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar8 = CONCAT44(extraout_var,bVar6);
    if ((char)bVar6 == '\0') {
      fineStrength = 4.0;
      iVar21 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
    else {
      pMVar19 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar15 + -0xa0) = 0x3b365cb;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b365d0;
      pUVar12 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar19);
      if (pUVar12 == (UnityEngine_Material_o *)0x0) break;
      in_RCX = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
      iVar7 = *(int32_t *)(in_RCX + 0x34);
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b365ec;
      fineStrength = UnityEngine_Material__GetFloat_4dcdb00(pUVar12,iVar7,(MethodInfo *)0x0);
      iVar21 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
      uVar8 = extraout_RAX;
    }
    if (iVar21 == 0) {
      *(float *)(puVar15 + -0x98) = fineStrength;
      *(undefined8 *)(puVar15 + -0xa0) = 0x3b3661b;
      uVar8 = il2cpp_runtime_helper_02337ed0();
      fineStrength = *(float *)(puVar15 + -0x98);
    }
    uVar24 = *(undefined4 *)(puVar15 + -0x94);
    uVar10 = *(undefined8 *)(puVar15 + -0x90);
    puVar23 = *(undefined8 **)(puVar15 + -0x88);
    puVar15 = puVar15 + -0x80;
  } while( true );
  *(undefined8 *)(puVar15 + -0xa0) = 0x3b36637;
  uVar24 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar15 + -0xa0) = unaff_RBP;
  *(UnityEngine_Object_o **)(puVar15 + -0xa8) = unaff_R15;
  *(MethodInfo ***)(puVar15 + -0xb0) = &TypeInfo_GisketchSurfaceMaterial;
  *(MethodInfo ***)(puVar15 + -0xb8) = &TypeInfo_GisketchSurfaceMaterial;
  *(ulong *)(puVar15 + -0xc0) = unaff_R12;
  *(MethodInfo **)(puVar15 + -200) = pMVar11;
  *(float *)(puVar15 + -0xdc) = coarseScale;
  *(float *)(puVar15 + -0xd4) = fineStrength;
  *(undefined4 *)(puVar15 + -0xd8) = uVar24;
  if (g_data_057a9c60 == '\0') {
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b36675;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b36681;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b3668d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b36699;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b366a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b366b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b366bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c60 = '\x01';
  }
  *(undefined4 *)(puVar15 + -0xd0) = 0;
  pMVar19 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b366e4;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar15 + -0xe8) = 0x3b366e9;
  pUVar12 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar19);
  *(undefined8 *)(puVar15 + -0xe8) = 0x3b36703;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
            (pUVar12,*(float *)(puVar15 + -0xd8),*(float *)(puVar15 + -0xd4),*(float *)(puVar15 + -0xdc),
             pMVar18);
  lVar3 = *(long *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
  if (lVar3 == 0) {
label_03b368f4:
    *(undefined8 *)(puVar15 + -0xe8) = 0x3b368f9;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 **)(puVar15 + -0xe8) = puVar23;
    *(MethodInfo **)(puVar15 + -0xf0) = pMVar11;
    *(undefined8 *)(puVar15 + -0xf8) = uVar10;
    if (g_data_057a9c64 == '\0') {
      *(undefined8 *)(puVar15 + -0x100) = 0x3b3691d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36929;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Material_float);
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36935;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36941;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      *(undefined8 *)(puVar15 + -0x100) = 0x3b3694d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36959;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakScale");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36965;
      il2cpp_runtime_helper_023445d0(&"_GradientStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36971;
      il2cpp_runtime_helper_023445d0(&"_CoarseStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b3697d;
      il2cpp_runtime_helper_023445d0(&"_ChipStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36989;
      il2cpp_runtime_helper_023445d0(&"_BrushReveal");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36995;
      il2cpp_runtime_helper_023445d0(&"_LightFineScale");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369a1;
      il2cpp_runtime_helper_023445d0(&"_ReliefShadowSize");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369ad;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseScale");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369b9;
      il2cpp_runtime_helper_023445d0(&"_FineScale");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369c5;
      il2cpp_runtime_helper_023445d0(&"_HorizontalBlur");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369d1;
      il2cpp_runtime_helper_023445d0(&"_VerticalLightGradient");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369dd;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369e9;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b369f5;
      il2cpp_runtime_helper_023445d0(&"_BrushRevealDirection");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a01;
      il2cpp_runtime_helper_023445d0(&"_CoarseScale");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a0d;
      il2cpp_runtime_helper_023445d0(&"_Relief");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a19;
      il2cpp_runtime_helper_023445d0(&"_FineStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a25;
      il2cpp_runtime_helper_023445d0(&"_WearStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a31;
      il2cpp_runtime_helper_023445d0(&"_LightGradientStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a3d;
      il2cpp_runtime_helper_023445d0(&"_LightFineStrength");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a49;
      il2cpp_runtime_helper_023445d0(&"_BrushStreak");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a55;
      il2cpp_runtime_helper_023445d0(&"_Worn");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a61;
      il2cpp_runtime_helper_023445d0(&"_StainScale");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a6d;
      il2cpp_runtime_helper_023445d0(&"_ReliefGradient");
      *(undefined8 *)(puVar15 + -0x100) = 0x3b36a79;
      il2cpp_runtime_helper_023445d0(&"_ReliefLightAngle");
      g_data_057a9c64 = '\x01';
    }
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36a91;
    iVar7 = UnityEngine_Shader__PropertyToID("_FineScale",(MethodInfo *)0x0);
    *(int32_t *)((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr = iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36ab5;
    iVar7 = UnityEngine_Shader__PropertyToID("_FineStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 4) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36ad3;
    iVar7 = UnityEngine_Shader__PropertyToID("_CoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 8) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36af1;
    iVar7 = UnityEngine_Shader__PropertyToID("_CoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0xc) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36b0f;
    iVar7 = UnityEngine_Shader__PropertyToID("_GradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x10) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36b2d;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightFineScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x14) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36b4b;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightFineStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x18) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36b69;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightCoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x1c) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36b87;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightCoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x20) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36ba5;
    iVar7 = UnityEngine_Shader__PropertyToID("_LightGradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x24) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36bc3;
    iVar7 = UnityEngine_Shader__PropertyToID("_Relief",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x28) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36be1;
    iVar7 = UnityEngine_Shader__PropertyToID("_ReliefGradient",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x2c) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36bff;
    iVar7 = UnityEngine_Shader__PropertyToID("_ReliefLightAngle",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x30) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36c1d;
    iVar7 = UnityEngine_Shader__PropertyToID("_ReliefShadowSize",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x34) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36c3b;
    iVar7 = UnityEngine_Shader__PropertyToID("_Worn",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x38) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36c59;
    iVar7 = UnityEngine_Shader__PropertyToID("_WearStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x3c) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36c77;
    iVar7 = UnityEngine_Shader__PropertyToID("_ChipStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x40) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36c95;
    iVar7 = UnityEngine_Shader__PropertyToID("_StainScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x44) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36cb3;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushReveal",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x48) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36cd1;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushRevealDirection",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x4c) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36cef;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushStreak",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x50) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36d0d;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushStreakStrength",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x54) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36d2b;
    iVar7 = UnityEngine_Shader__PropertyToID("_BrushStreakScale",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x58) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36d49;
    iVar7 = UnityEngine_Shader__PropertyToID("_VerticalLightGradient",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x5c) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36d67;
    iVar7 = UnityEngine_Shader__PropertyToID("_HorizontalBlur",(MethodInfo *)0x0);
    *(int32_t *)(((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x60) =
         iVar7;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36d83;
    pSVar13 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36d98;
    System_Collections_Generic_List_object____ctor(pSVar13,MethodInfo_List_1_UnityEngine_Material);
    lVar3 = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
    *(System_Collections_Generic_List_object__o **)(lVar3 + 0x70) = pSVar13;
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36db2;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x70,pSVar13);
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36dc1;
    pSVar14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Material_float);
    *(undefined8 *)(puVar15 + -0x100) = 0x3b36dd6;
    System_Collections_Generic_Dictionary_object__float____ctor(pSVar14,MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
    lVar3 = ((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr;
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar3 + 0x78) = pSVar14;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x78,pSVar14);
    return;
  }
  iVar21 = *(int *)(lVar3 + 0x18);
  if (-1 < iVar21 + -1) {
    iVar21 = iVar21 + -2;
    puVar23 = &TypeInfo_Object;
    iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    while( true ) {
      if (iVar2 == 0) {
        *(undefined8 *)(puVar15 + -0xe8) = 0x3b36755;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = *(System_Collections_Generic_List_object__o **)
                 (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
      if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
      *(undefined8 *)(puVar15 + -0xe8) = 0x3b3677c;
      pMVar11 = (MethodInfo *)
                System_Collections_Generic_List_object___get_Item(pSVar13,iVar21 + 1,MethodInfo_Material_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar15 + -0xe8) = 0x3b36790;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar15 + -0xe8) = 0x3b3679c;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pMVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar15 + -0xe8) = 0x3b36841;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar14 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x78);
        if (pSVar14 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
        *(undefined8 *)(puVar15 + -0xe8) = 0x3b3686f;
        pMVar18 = pMVar11;
        bVar6 = System_Collections_Generic_Dictionary_object__float___TryGetValue
                          (pSVar14,(Il2CppObject *)pMVar11,(float *)(puVar15 + -0xd0),MethodInfo_Boolean_TryGetValue);
        if ((char)bVar6 == '\0') {
          fVar25 = *(float *)(puVar15 + -0xdc);
          iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        else {
          fVar25 = *(float *)(puVar15 + -0xd0);
          iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        if (iVar2 == 0) {
          *(float *)(puVar15 + -0xcc) = fVar25;
          *(undefined8 *)(puVar15 + -0xe8) = 0x3b368ad;
          il2cpp_runtime_helper_02337ed0();
          fVar25 = *(float *)(puVar15 + -0xcc);
        }
        *(undefined8 *)(puVar15 + -0xe8) = 0x3b368c7;
        Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
                  ((UnityEngine_Material_o *)pMVar11,*(float *)(puVar15 + -0xd8),*(float *)(puVar15 + -0xd4),
                   fVar25,pMVar18);
      }
      else {
        if (pMVar11 != (MethodInfo *)0x0) {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar15 + -0xe8) = 0x3b367ba;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                     (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x78
                     );
          if (pSVar14 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
          *(undefined8 *)(puVar15 + -0xe8) = 0x3b367e3;
          System_Collections_Generic_Dictionary_object__float___Remove
                    (pSVar14,(Il2CppObject *)pMVar11,MethodInfo_Boolean_Remove);
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar15 + -0xe8) = 0x3b367f4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = *(System_Collections_Generic_List_object__o **)
                   (((UnityEngine_Object_Fields *)&TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer)->m_CachedPtr + 0x70);
        if (pSVar13 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
        *(undefined8 *)(puVar15 + -0xe8) = 0x3b3681c;
        System_Collections_Generic_List_object___RemoveAt(pSVar13,iVar21 + 1,MethodInfo_Void_RemoveAt);
      }
      if (iVar21 < 0) break;
      iVar21 = iVar21 + -1;
      iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyWearPreset
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset (UnityEngine_Material_o* material, float wearStrength, float chipStrength, float stainScale, const MethodInfo* method);
// 0x3b35cb0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
               (UnityEngine_Material_o *material,float wearStrength,float chipStrength,float stainScale,
               MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Object_array *pSVar3;
  MethodInfo_362C220 *method_00;
  Il2CppMethodPointer pIVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  undefined8 uVar7;
  UnityEngine_Object_o *pUVar8;
  undefined8 uVar9;
  MethodInfo *pMVar10;
  undefined4 extraout_var;
  UnityEngine_Material_o *pUVar11;
  undefined8 extraout_RAX;
  System_Collections_Generic_List_object__o *pSVar12;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar13;
  Il2CppMethodPointer in_RCX;
  undefined8 extraout_RDX;
  undefined1 *puVar14;
  uint uVar15;
  System_Collections_Generic_Dictionary_TKey__TValue__o *unaff_RBP;
  UnityEngine_Object_o *pUVar16;
  MethodInfo *pMVar17;
  MethodInfo *pMVar18;
  undefined4 in_R8D;
  uint uVar19;
  int iVar20;
  ulong unaff_R12;
  undefined8 *unaff_R13;
  char cVar21;
  undefined8 *puVar22;
  System_Nullable_float__Fields __this;
  UnityEngine_Object_o *unaff_R15;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar23;
  float fVar24;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_28 [12];
  float local_1c;
  float local_18;
  float local_14;
  
  local_1c = wearStrength;
  local_18 = chipStrength;
  local_14 = stainScale;
  if (g_data_057a9c63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c63 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  puVar22 = &TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (material != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x3c),local_1c,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x40),local_18,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_4dcd3b0
              (material,*(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x44),local_14,(MethodInfo *)0x0);
    return;
  }
  uVar7 = il2cpp_runtime_helper_022b2c90();
  uVar9 = 0;
  puVar14 = auStack_28;
  uVar23 = extraout_XMM0_Da;
  do {
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar14 + -8) = unaff_RBP;
    *(UnityEngine_Object_o **)(puVar14 + -0x10) = unaff_R15;
    *(undefined8 **)(puVar14 + -0x18) = puVar22;
    *(undefined8 **)(puVar14 + -0x20) = unaff_R13;
    *(ulong *)(puVar14 + -0x28) = unaff_R12;
    *(undefined8 *)(puVar14 + -0x30) = uVar9;
    *(undefined8 *)(puVar14 + -0x38) = uVar7;
    *(float *)(puVar14 + -0x34) = chipStrength;
    *(undefined4 *)(puVar14 + -0x38) = uVar23;
    if (g_data_057a9c5f == '\0') {
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35ddb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35de7;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35df3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35dff;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35e0b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35e17;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5f = '\x01';
    }
    pMVar10 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35e36;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar14 + -0x40) = 0x3b35e3b;
    pUVar8 = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar10);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar14 + -0x40) = 0x3b35e56;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar16 = (UnityEngine_Object_o *)0x0;
    *(undefined8 *)(puVar14 + -0x40) = 0x3b35e62;
    bVar5 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
label_03b35eb9:
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0x40) = 0x3b35eca;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar10 = TypeInfo_GisketchSurfaceMaterial;
      if (*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) != 0) {
        iVar20 = *(int *)(*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) + 0x18);
        if (iVar20 + -1 < 0) {
          return;
        }
        uVar19 = iVar20 - 2;
        unaff_R13 = &MethodInfo_Material_get_Item;
        iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        while( true ) {
          unaff_R12 = (ulong)uVar19;
          if (iVar20 == 0) {
            *(undefined8 *)(puVar14 + -0x40) = 0x3b35f15;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = *(System_Collections_Generic_List_object__o **)
                     (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
          pMVar10 = (MethodInfo *)0x0;
          if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) break;
          uVar15 = uVar19 + 1;
          unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar15;
          *(undefined8 *)(puVar14 + -0x40) = 0x3b35f3c;
          pUVar8 = (UnityEngine_Object_o *)
                   System_Collections_Generic_List_object___get_Item(pSVar12,uVar15,MethodInfo_Material_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar14 + -0x40) = 0x3b35f50;
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar16 = (UnityEngine_Object_o *)0x0;
          *(undefined8 *)(puVar14 + -0x40) = 0x3b35f5c;
          bVar5 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            pMVar10 = TypeInfo_GisketchSurfaceMaterial;
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar14 + -0x40) = 0x3b36001;
              il2cpp_runtime_helper_02337ed0();
            }
            if (pUVar8 == (UnityEngine_Object_o *)0x0) break;
            iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30);
            *(undefined8 *)(puVar14 + -0x40) = 0x3b36022;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar8,iVar6,*(float *)(puVar14 + -0x38),(MethodInfo *)0x0);
            uVar15 = *(uint *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34);
            pUVar16 = (UnityEngine_Object_o *)(ulong)uVar15;
            *(undefined8 *)(puVar14 + -0x40) = 0x3b3603f;
            UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar8,uVar15,*(float *)(puVar14 + -0x34),(MethodInfo *)0x0);
          }
          else {
            if (pUVar8 != (UnityEngine_Object_o *)0x0) {
              if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
                *(undefined8 *)(puVar14 + -0x40) = 0x3b35f7a;
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar13 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                         (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
              pMVar10 = (MethodInfo *)0x0;
              if (pSVar13 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
              *(undefined8 *)(puVar14 + -0x40) = 0x3b35fa3;
              pUVar16 = pUVar8;
              System_Collections_Generic_Dictionary_object__float___Remove
                        (pSVar13,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove);
            }
            if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar14 + -0x40) = 0x3b35fb4;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar12 = *(System_Collections_Generic_List_object__o **)
                       (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
            pMVar10 = (MethodInfo *)0x0;
            if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) break;
            pUVar16 = (UnityEngine_Object_o *)(ulong)uVar15;
            *(undefined8 *)(puVar14 + -0x40) = 0x3b35fdc;
            System_Collections_Generic_List_object___RemoveAt(pSVar12,uVar15,MethodInfo_Void_RemoveAt);
          }
          if ((int)uVar19 < 0) {
            return;
          }
          uVar19 = uVar19 - 1;
          iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
      }
    }
    else {
      pMVar10 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0x40) = 0x3b35e77;
        il2cpp_runtime_helper_02337ed0();
      }
      if (pUVar8 != (UnityEngine_Object_o *)0x0) {
        iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30);
        *(undefined8 *)(puVar14 + -0x40) = 0x3b35e9c;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,iVar6,*(float *)(puVar14 + -0x38),(MethodInfo *)0x0);
        uVar19 = *(uint *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34);
        pUVar16 = (UnityEngine_Object_o *)(ulong)uVar19;
        *(undefined8 *)(puVar14 + -0x40) = 0x3b35eb9;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,uVar19,*(float *)(puVar14 + -0x34),(MethodInfo *)0x0);
        goto label_03b35eb9;
      }
    }
    uVar19 = (uint)pMVar10;
    *(undefined8 *)(puVar14 + -0x40) = 0x3b36071;
    uVar23 = il2cpp_runtime_helper_022b2c90();
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar14 + -0x40) = unaff_RBP;
    *(long **)(puVar14 + -0x48) = &TypeInfo_Object;
    *(MethodInfo ***)(puVar14 + -0x50) = &TypeInfo_GisketchSurfaceMaterial;
    *(undefined8 **)(puVar14 + -0x58) = unaff_R13;
    *(ulong *)(puVar14 + -0x60) = unaff_R12;
    *(UnityEngine_Object_o **)(puVar14 + -0x68) = pUVar8;
    *(undefined4 *)(puVar14 + -0x7c) = in_R8D;
    unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)((ulong)in_RCX & 0xffffffff);
    __this = (System_Nullable_float__Fields)((ulong)pUVar16 & 0xffffffff);
    unaff_R12 = (ulong)uVar19;
    *(undefined4 *)(puVar14 + -0x80) = uVar23;
    *(undefined8 *)(puVar14 + -0x78) = extraout_RDX;
    *(undefined8 *)(puVar14 + -0x70) = extraout_RDX;
    if (g_data_057a9c5d == '\0') {
      *(undefined8 *)(puVar14 + -0x88) = 0x3b360bf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b360cb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b360d7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b360e3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b360ef;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b360fb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b36107;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b36113;
      il2cpp_runtime_helper_023445d0(&"AoTTG UI Surface Instance");
      *(undefined8 *)(puVar14 + -0x88) = 0x3b3611f;
      il2cpp_runtime_helper_023445d0(&"AOTTG_WORN");
      g_data_057a9c5d = '\x01';
    }
    unaff_R13 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar10 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar14 + -0x88) = 0x3b3613f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar14 + -0x88) = 0x3b36144;
    unaff_R15 = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar10)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar14 + -0x88) = 0x3b3615f;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar14 + -0x88) = 0x3b3616d;
    bVar5 = UnityEngine_Object__op_Equality(unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    *(undefined8 *)(puVar14 + -0x88) = 0x3b36184;
    pUVar8 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    *(undefined8 *)(puVar14 + -0x88) = 0x3b36194;
    UnityEngine_Material___ctor_4dc9e70
              ((UnityEngine_Material_o *)pUVar8,(UnityEngine_Material_o *)unaff_R15,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Object_o *)0x0) {
      *(undefined8 *)(puVar14 + -0x88) = 0x3b361b1;
      UnityEngine_Object__set_name(pUVar8,"AoTTG UI Surface Instance",(MethodInfo *)0x0);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b361c0;
      UnityEngine_Object__set_hideFlags(pUVar8,0x34,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0x88) = 0x3b361d2;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x28);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b361ef;
      UnityEngine_Material__SetFloat_4dcd3b0
                ((UnityEngine_Material_o *)pUVar8,iVar6,*(float *)(puVar14 + -0x80),(MethodInfo *)0x0);
      if ((char)uVar19 == '\0') {
        fVar24 = 0.0;
      }
      else {
        fVar24 = 1.0;
      }
      iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x2c);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b36219;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar8,iVar6,fVar24,(MethodInfo *)0x0);
      cVar21 = (char)__this.hasValue;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36235;
        il2cpp_runtime_helper_02337ed0();
        if (cVar21 == '\0') goto label_03b3622b;
label_03b3623e:
        fVar24 = 1.0;
      }
      else {
        if (cVar21 != '\0') goto label_03b3623e;
label_03b3622b:
        fVar24 = 0.0;
      }
      iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x38);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b3625a;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar8,iVar6,fVar24,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0x88) = 0x3b3626c;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x48);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b3628c;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar8,iVar6,1.0,(MethodInfo *)0x0);
      iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x4c);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b362ac;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar8,iVar6,1.0,(MethodInfo *)0x0);
      fVar24 = 1.0;
      if ((char)unaff_RBP == '\0') {
        fVar24 = 0.0;
      }
      iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x50);
      *(undefined8 *)(puVar14 + -0x88) = 0x3b362d4;
      UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar8,iVar6,fVar24,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0x88) = 0x3b362e6;
        il2cpp_runtime_helper_02337ed0();
      }
      if (unaff_R15 != (UnityEngine_Object_o *)0x0) {
        iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x54);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36309;
        fVar24 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar6,(MethodInfo *)0x0);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36315;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,iVar6,fVar24,(MethodInfo *)0x0);
        iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x58);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b3632f;
        fVar24 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar6,(MethodInfo *)0x0);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b3633b;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,iVar6,fVar24,(MethodInfo *)0x0);
        if (puVar14[-0x7c] == '\0') {
          fVar24 = 0.0;
        }
        else {
          fVar24 = 1.0;
        }
        iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x5c);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36367;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,iVar6,fVar24,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar14 + -0x88) = 0x3b36379;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x60);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36394;
        UnityEngine_Material__SetFloat_4dcd3b0((UnityEngine_Material_o *)pUVar8,iVar6,0.0,(MethodInfo *)0x0);
        if (cVar21 == '\0') {
          *(undefined8 *)(puVar14 + -0x88) = 0x3b363c6;
          UnityEngine_Material__DisableKeyword
                    ((UnityEngine_Material_o *)pUVar8,"AOTTG_WORN",(MethodInfo *)0x0);
          __this = *(System_Nullable_float__Fields *)(puVar14 + -0x78);
          iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        else {
          *(undefined8 *)(puVar14 + -0x88) = 0x3b363ad;
          UnityEngine_Material__EnableKeyword((UnityEngine_Material_o *)pUVar8,"AOTTG_WORN",(MethodInfo *)0x0)
          ;
          __this = *(System_Nullable_float__Fields *)(puVar14 + -0x78);
          iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        if (iVar20 == 0) {
          *(undefined8 *)(puVar14 + -0x88) = 0x3b363dd;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b363f7;
        fVar24 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,iVar6,(MethodInfo *)0x0);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36403;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,iVar6,fVar24,(MethodInfo *)0x0);
        uVar19 = *(uint *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34);
        unaff_RBP = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(ulong)uVar19;
        *(undefined8 *)(puVar14 + -0x88) = 0x3b3641d;
        fVar24 = UnityEngine_Material__GetFloat_4dcdb00
                           ((UnityEngine_Material_o *)unaff_R15,uVar19,(MethodInfo *)0x0);
        *(undefined8 *)(puVar14 + -0x88) = 0x3b36429;
        UnityEngine_Material__SetFloat_4dcd3b0
                  ((UnityEngine_Material_o *)pUVar8,uVar19,fVar24,(MethodInfo *)0x0);
        if ((char)__this.hasValue != '\0') {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar14 + -0x88) = 0x3b36440;
            il2cpp_runtime_helper_02337ed0();
          }
          iVar6 = *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x44);
          unaff_R15 = (UnityEngine_Object_o *)&MethodInfo_Single_get_Value;
          __this = (System_Nullable_float__Fields)((long)puVar14 + -0x70);
          *(undefined8 *)(puVar14 + -0x88) = 0x3b36465;
          fVar24 = System_Nullable_float___get_Value((System_Nullable_float__o)__this,MethodInfo_Single_get_Value);
          *(undefined8 *)(puVar14 + -0x88) = 0x3b36471;
          UnityEngine_Material__SetFloat_4dcd3b0
                    ((UnityEngine_Material_o *)pUVar8,iVar6,fVar24,(MethodInfo *)0x0);
          unaff_RBP = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                       (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
          *(undefined8 *)(puVar14 + -0x88) = 0x3b3648b;
          fVar24 = System_Nullable_float___get_Value((System_Nullable_float__o)__this,MethodInfo_Single_get_Value);
          if (unaff_RBP == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b36535;
          *(undefined8 *)(puVar14 + -0x88) = 0x3b364a9;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    (unaff_RBP,(Il2CppObject *)pUVar8,fVar24,MethodInfo_Void_set_Item);
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar14 + -0x88) = 0x3b364bb;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar4 = MethodInfo_Void_Add;
        pSVar12 = *(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70)
        ;
        if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(pSVar12->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar12->fields)._items;
          in_RCX = pIVar4;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar19 = (pSVar12->fields)._size;
            if (uVar19 < (uint)pSVar3->max_length) {
              (pSVar12->fields)._size = uVar19 + 1;
              pSVar3->m_Items[(int)uVar19] = (Il2CppObject *)pUVar8;
              *(undefined8 *)(puVar14 + -0x88) = 0x3b3650a;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar19,pUVar8);
            }
            else {
              method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(pIVar4 + 0x20) + 0xc0) + 0x70);
              *(undefined8 *)(puVar14 + -0x88) = 0x3b36523;
              System_Collections_Generic_List_object___AddWithResize(pSVar12,(Il2CppObject *)pUVar8,method_00)
              ;
            }
            return;
          }
        }
      }
    }
label_03b36535:
    *(undefined8 *)(puVar14 + -0x88) = 0x3b3653a;
    uVar9 = il2cpp_runtime_helper_022b2c90();
    *(System_Nullable_float__Fields *)(puVar14 + -0x88) = __this;
    *(UnityEngine_Object_o **)(puVar14 + -0x90) = pUVar8;
    *(undefined8 *)(puVar14 + -0x98) = uVar9;
    *(undefined4 *)(puVar14 + -0x94) = extraout_XMM0_Da_00;
    if (g_data_057a9c5e == '\0') {
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b3655f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b3656b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9c5e = '\x01';
    }
    puVar22 = &TypeInfo_GisketchSurfaceMaterial;
    pMVar10 = TypeInfo_GisketchSurfaceMaterial;
    if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b3658a;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar14 + -0xa0) = 0x3b3658f;
    pMVar10 = (MethodInfo *)Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar10);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b365aa;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = (MethodInfo *)0x0;
    *(undefined8 *)(puVar14 + -0xa0) = 0x3b365b6;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar7 = CONCAT44(extraout_var,bVar5);
    if ((char)bVar5 == '\0') {
      chipStrength = 4.0;
      iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
    else {
      pMVar18 = TypeInfo_GisketchSurfaceMaterial;
      if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
        *(undefined8 *)(puVar14 + -0xa0) = 0x3b365cb;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b365d0;
      pUVar11 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar18);
      if (pUVar11 == (UnityEngine_Material_o *)0x0) break;
      in_RCX = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
      iVar6 = *(int32_t *)(in_RCX + 0x34);
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b365ec;
      chipStrength = UnityEngine_Material__GetFloat_4dcdb00(pUVar11,iVar6,(MethodInfo *)0x0);
      iVar20 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
      uVar7 = extraout_RAX;
    }
    if (iVar20 == 0) {
      *(float *)(puVar14 + -0x98) = chipStrength;
      *(undefined8 *)(puVar14 + -0xa0) = 0x3b3661b;
      uVar7 = il2cpp_runtime_helper_02337ed0();
      chipStrength = *(float *)(puVar14 + -0x98);
    }
    uVar23 = *(undefined4 *)(puVar14 + -0x94);
    uVar9 = *(undefined8 *)(puVar14 + -0x90);
    puVar22 = *(undefined8 **)(puVar14 + -0x88);
    puVar14 = puVar14 + -0x80;
  } while( true );
  *(undefined8 *)(puVar14 + -0xa0) = 0x3b36637;
  uVar23 = il2cpp_runtime_helper_022b2c90();
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(puVar14 + -0xa0) = unaff_RBP;
  *(UnityEngine_Object_o **)(puVar14 + -0xa8) = unaff_R15;
  *(MethodInfo ***)(puVar14 + -0xb0) = &TypeInfo_GisketchSurfaceMaterial;
  *(MethodInfo ***)(puVar14 + -0xb8) = &TypeInfo_GisketchSurfaceMaterial;
  *(ulong *)(puVar14 + -0xc0) = unaff_R12;
  *(MethodInfo **)(puVar14 + -200) = pMVar10;
  *(float *)(puVar14 + -0xdc) = stainScale;
  *(float *)(puVar14 + -0xd4) = chipStrength;
  *(undefined4 *)(puVar14 + -0xd8) = uVar23;
  if (g_data_057a9c60 == '\0') {
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b36675;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b36681;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b3668d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b36699;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b366a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b366b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b366bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c60 = '\x01';
  }
  *(undefined4 *)(puVar14 + -0xd0) = 0;
  pMVar18 = TypeInfo_GisketchSurfaceMaterial;
  if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b366e4;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar14 + -0xe8) = 0x3b366e9;
  pUVar11 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(pMVar18);
  *(undefined8 *)(puVar14 + -0xe8) = 0x3b36703;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
            (pUVar11,*(float *)(puVar14 + -0xd8),*(float *)(puVar14 + -0xd4),*(float *)(puVar14 + -0xdc),
             pMVar17);
  if (*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) == 0) {
label_03b368f4:
    *(undefined8 *)(puVar14 + -0xe8) = 0x3b368f9;
    uVar9 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 **)(puVar14 + -0xe8) = puVar22;
    *(MethodInfo **)(puVar14 + -0xf0) = pMVar10;
    *(undefined8 *)(puVar14 + -0xf8) = uVar9;
    if (g_data_057a9c64 == '\0') {
      *(undefined8 *)(puVar14 + -0x100) = 0x3b3691d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36929;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Material_float);
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36935;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36941;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
      *(undefined8 *)(puVar14 + -0x100) = 0x3b3694d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36959;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakScale");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36965;
      il2cpp_runtime_helper_023445d0(&"_GradientStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36971;
      il2cpp_runtime_helper_023445d0(&"_CoarseStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b3697d;
      il2cpp_runtime_helper_023445d0(&"_ChipStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36989;
      il2cpp_runtime_helper_023445d0(&"_BrushReveal");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36995;
      il2cpp_runtime_helper_023445d0(&"_LightFineScale");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369a1;
      il2cpp_runtime_helper_023445d0(&"_ReliefShadowSize");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369ad;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseScale");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369b9;
      il2cpp_runtime_helper_023445d0(&"_FineScale");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369c5;
      il2cpp_runtime_helper_023445d0(&"_HorizontalBlur");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369d1;
      il2cpp_runtime_helper_023445d0(&"_VerticalLightGradient");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369dd;
      il2cpp_runtime_helper_023445d0(&"_BrushStreakStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369e9;
      il2cpp_runtime_helper_023445d0(&"_LightCoarseStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b369f5;
      il2cpp_runtime_helper_023445d0(&"_BrushRevealDirection");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a01;
      il2cpp_runtime_helper_023445d0(&"_CoarseScale");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a0d;
      il2cpp_runtime_helper_023445d0(&"_Relief");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a19;
      il2cpp_runtime_helper_023445d0(&"_FineStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a25;
      il2cpp_runtime_helper_023445d0(&"_WearStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a31;
      il2cpp_runtime_helper_023445d0(&"_LightGradientStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a3d;
      il2cpp_runtime_helper_023445d0(&"_LightFineStrength");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a49;
      il2cpp_runtime_helper_023445d0(&"_BrushStreak");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a55;
      il2cpp_runtime_helper_023445d0(&"_Worn");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a61;
      il2cpp_runtime_helper_023445d0(&"_StainScale");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a6d;
      il2cpp_runtime_helper_023445d0(&"_ReliefGradient");
      *(undefined8 *)(puVar14 + -0x100) = 0x3b36a79;
      il2cpp_runtime_helper_023445d0(&"_ReliefLightAngle");
      g_data_057a9c64 = '\x01';
    }
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36a91;
    iVar6 = UnityEngine_Shader__PropertyToID("_FineScale",(MethodInfo *)0x0);
    *(int32_t *)TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36ab5;
    iVar6 = UnityEngine_Shader__PropertyToID("_FineStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 4) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36ad3;
    iVar6 = UnityEngine_Shader__PropertyToID("_CoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 8) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36af1;
    iVar6 = UnityEngine_Shader__PropertyToID("_CoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0xc) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36b0f;
    iVar6 = UnityEngine_Shader__PropertyToID("_GradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x10) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36b2d;
    iVar6 = UnityEngine_Shader__PropertyToID("_LightFineScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x14) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36b4b;
    iVar6 = UnityEngine_Shader__PropertyToID("_LightFineStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x18) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36b69;
    iVar6 = UnityEngine_Shader__PropertyToID("_LightCoarseScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x1c) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36b87;
    iVar6 = UnityEngine_Shader__PropertyToID("_LightCoarseStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x20) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36ba5;
    iVar6 = UnityEngine_Shader__PropertyToID("_LightGradientStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x24) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36bc3;
    iVar6 = UnityEngine_Shader__PropertyToID("_Relief",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x28) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36be1;
    iVar6 = UnityEngine_Shader__PropertyToID("_ReliefGradient",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x2c) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36bff;
    iVar6 = UnityEngine_Shader__PropertyToID("_ReliefLightAngle",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x30) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36c1d;
    iVar6 = UnityEngine_Shader__PropertyToID("_ReliefShadowSize",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x34) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36c3b;
    iVar6 = UnityEngine_Shader__PropertyToID("_Worn",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x38) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36c59;
    iVar6 = UnityEngine_Shader__PropertyToID("_WearStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x3c) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36c77;
    iVar6 = UnityEngine_Shader__PropertyToID("_ChipStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x40) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36c95;
    iVar6 = UnityEngine_Shader__PropertyToID("_StainScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x44) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36cb3;
    iVar6 = UnityEngine_Shader__PropertyToID("_BrushReveal",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x48) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36cd1;
    iVar6 = UnityEngine_Shader__PropertyToID("_BrushRevealDirection",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x4c) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36cef;
    iVar6 = UnityEngine_Shader__PropertyToID("_BrushStreak",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x50) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36d0d;
    iVar6 = UnityEngine_Shader__PropertyToID("_BrushStreakStrength",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x54) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36d2b;
    iVar6 = UnityEngine_Shader__PropertyToID("_BrushStreakScale",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x58) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36d49;
    iVar6 = UnityEngine_Shader__PropertyToID("_VerticalLightGradient",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x5c) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36d67;
    iVar6 = UnityEngine_Shader__PropertyToID("_HorizontalBlur",(MethodInfo *)0x0);
    *(int32_t *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x60) = iVar6;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36d83;
    pSVar12 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36d98;
    System_Collections_Generic_List_object____ctor(pSVar12,MethodInfo_List_1_UnityEngine_Material);
    pIVar4 = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
    *(System_Collections_Generic_List_object__o **)(pIVar4 + 0x70) = pSVar12;
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36db2;
    il2cpp_runtime_helper_022b4080(pIVar4 + 0x70,pSVar12);
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36dc1;
    pSVar13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Material_float);
    *(undefined8 *)(puVar14 + -0x100) = 0x3b36dd6;
    System_Collections_Generic_Dictionary_object__float____ctor(pSVar13,MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
    pIVar4 = TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer;
    *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(pIVar4 + 0x78) = pSVar13;
    il2cpp_runtime_helper_022b4080(pIVar4 + 0x78,pSVar13);
    return;
  }
  iVar20 = *(int *)(*(long *)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70) + 0x18);
  if (-1 < iVar20 + -1) {
    iVar20 = iVar20 + -2;
    puVar22 = &TypeInfo_Object;
    iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    while( true ) {
      if (iVar2 == 0) {
        *(undefined8 *)(puVar14 + -0xe8) = 0x3b36755;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = *(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70);
      if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
      *(undefined8 *)(puVar14 + -0xe8) = 0x3b3677c;
      pMVar10 = (MethodInfo *)
                System_Collections_Generic_List_object___get_Item(pSVar12,iVar20 + 1,MethodInfo_Material_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar14 + -0xe8) = 0x3b36790;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar14 + -0xe8) = 0x3b3679c;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar14 + -0xe8) = 0x3b36841;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                   (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
        if (pSVar13 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
        *(undefined8 *)(puVar14 + -0xe8) = 0x3b3686f;
        pMVar17 = pMVar10;
        bVar5 = System_Collections_Generic_Dictionary_object__float___TryGetValue
                          (pSVar13,(Il2CppObject *)pMVar10,(float *)(puVar14 + -0xd0),MethodInfo_Boolean_TryGetValue);
        if ((char)bVar5 == '\0') {
          fVar24 = *(float *)(puVar14 + -0xdc);
          iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        else {
          fVar24 = *(float *)(puVar14 + -0xd0);
          iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
        }
        if (iVar2 == 0) {
          *(float *)(puVar14 + -0xcc) = fVar24;
          *(undefined8 *)(puVar14 + -0xe8) = 0x3b368ad;
          il2cpp_runtime_helper_02337ed0();
          fVar24 = *(float *)(puVar14 + -0xcc);
        }
        *(undefined8 *)(puVar14 + -0xe8) = 0x3b368c7;
        Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
                  ((UnityEngine_Material_o *)pMVar10,*(float *)(puVar14 + -0xd8),*(float *)(puVar14 + -0xd4),
                   fVar24,pMVar17);
      }
      else {
        if (pMVar10 != (MethodInfo *)0x0) {
          if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar14 + -0xe8) = 0x3b367ba;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                     (TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x78);
          if (pSVar13 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b368f4;
          *(undefined8 *)(puVar14 + -0xe8) = 0x3b367e3;
          System_Collections_Generic_Dictionary_object__float___Remove
                    (pSVar13,(Il2CppObject *)pMVar10,MethodInfo_Boolean_Remove);
        }
        if (*(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar14 + -0xe8) = 0x3b367f4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = *(System_Collections_Generic_List_object__o **)(TypeInfo_GisketchSurfaceMaterial[2].virtualMethodPointer + 0x70)
        ;
        if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b368f4;
        *(undefined8 *)(puVar14 + -0xe8) = 0x3b3681c;
        System_Collections_Generic_List_object___RemoveAt(pSVar12,iVar20 + 1,MethodInfo_Void_RemoveAt);
      }
      if (iVar20 < 0) break;
      iVar20 = iVar20 + -1;
      iVar2 = *(int *)((long)&TypeInfo_GisketchSurfaceMaterial[2].parameters + 4);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial___cctor (const MethodInfo* method);
// 0x3b36900

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial___cctor(MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  
  if (g_data_057a9c64 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Material_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    il2cpp_runtime_helper_023445d0(&"_BrushStreakScale");
    il2cpp_runtime_helper_023445d0(&"_GradientStrength");
    il2cpp_runtime_helper_023445d0(&"_CoarseStrength");
    il2cpp_runtime_helper_023445d0(&"_ChipStrength");
    il2cpp_runtime_helper_023445d0(&"_BrushReveal");
    il2cpp_runtime_helper_023445d0(&"_LightFineScale");
    il2cpp_runtime_helper_023445d0(&"_ReliefShadowSize");
    il2cpp_runtime_helper_023445d0(&"_LightCoarseScale");
    il2cpp_runtime_helper_023445d0(&"_FineScale");
    il2cpp_runtime_helper_023445d0(&"_HorizontalBlur");
    il2cpp_runtime_helper_023445d0(&"_VerticalLightGradient");
    il2cpp_runtime_helper_023445d0(&"_BrushStreakStrength");
    il2cpp_runtime_helper_023445d0(&"_LightCoarseStrength");
    il2cpp_runtime_helper_023445d0(&"_BrushRevealDirection");
    il2cpp_runtime_helper_023445d0(&"_CoarseScale");
    il2cpp_runtime_helper_023445d0(&"_Relief");
    il2cpp_runtime_helper_023445d0(&"_FineStrength");
    il2cpp_runtime_helper_023445d0(&"_WearStrength");
    il2cpp_runtime_helper_023445d0(&"_LightGradientStrength");
    il2cpp_runtime_helper_023445d0(&"_LightFineStrength");
    il2cpp_runtime_helper_023445d0(&"_BrushStreak");
    il2cpp_runtime_helper_023445d0(&"_Worn");
    il2cpp_runtime_helper_023445d0(&"_StainScale");
    il2cpp_runtime_helper_023445d0(&"_ReliefGradient");
    il2cpp_runtime_helper_023445d0(&"_ReliefLightAngle");
    g_data_057a9c64 = '\x01';
  }
  iVar2 = UnityEngine_Shader__PropertyToID("_FineScale",(MethodInfo *)0x0);
  **(int32_t **)(TypeInfo_GisketchSurfaceMaterial + 0xb8) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_FineStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 4) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_CoarseScale",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 8) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_CoarseStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0xc) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_GradientStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x10) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightFineScale",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x14) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightFineStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x18) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightCoarseScale",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x1c) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightCoarseStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x20) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightGradientStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x24) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_Relief",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x28) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_ReliefGradient",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x2c) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_ReliefLightAngle",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x30) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_ReliefShadowSize",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x34) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_Worn",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x38) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_WearStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x3c) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_ChipStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x40) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_StainScale",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x44) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushReveal",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x48) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushRevealDirection",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x4c) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushStreak",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x50) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushStreakStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x54) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushStreakScale",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x58) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_VerticalLightGradient",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x5c) = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_HorizontalBlur",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x60) = iVar2;
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_UnityEngine_Material);
  lVar1 = *(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x70) = __this;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x70,__this);
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Material_float);
  System_Collections_Generic_Dictionary_object__float____ctor(__this_00,MethodInfo_Dictionary_2_UnityEngine_Material_System_Single);
  lVar1 = *(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8);
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar1 + 0x78) = __this_00;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x78,__this_00);
  return;
}


